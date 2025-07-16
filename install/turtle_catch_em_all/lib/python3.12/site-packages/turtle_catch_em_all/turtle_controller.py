import rclpy
from rclpy.node import Node
from turtle_interfaces.srv import CatchTurtle, CreateChasers
from turtle_interfaces.msg import TurtleArray, Turtle
from turtlesim.msg import Pose
from geometry_msgs.msg import Twist
from math import atan2, sqrt, pi
from functools import partial

class TurtleControllerNode(Node):
    def __init__(self):
        super().__init__("turtle_controller")
        self.declare_parameters(
            namespace='',
            parameters=[
                ('catch_closest_turtle_first', True)
            ]
        )
        # self._target_turtle = None
        self.chasers = []
        # self._current_pose = Pose()

        self.chaser_publisher = {}
        self._current_poses = {}
        self.target_turtles = {}

        # self.create_subscription(Pose, "/turtle1/pose", self.pose_callback, 10)
        self.create_subscription(TurtleArray, "turtle_coordinates", self.alive_turtles_callback, 10)

        # self._pose_pub = self.create_publisher(Twist, "/turtle1/cmd_vel", 10)

        self._catch_client = self.create_client(CatchTurtle, "catch_turtle")
        self._spawn_chasers_client = self.create_client(CreateChasers, "create_chasers")

        self.create_timer(0.01, self.move_towards_target)

    def create_pub_sub_for_chasers(self):
        for chaser in self.chasers:
            if chaser not in self.chaser_publisher:
                self.chaser_publisher[chaser] = self.create_publisher(Twist, f"{chaser}/cmd_vel", 10)
                self.create_subscription(Pose, f"{chaser}/pose", partial(self._pose_callback, turtle_name=chaser), 10)

    def _pose_callback(self, pose: Pose, turtle_name: str):
        self._current_poses[turtle_name] = pose
        # self.get_logger().info(f"Current pose of {turtle_name}: x={pose.x}, y={pose.y}, theta={pose.theta}")

        # if turtle_name in self.chaser_publisher:
        #     self.move_towards_target()

    def spawn_chasers(self):
        while not self._spawn_chasers_client.wait_for_service(timeout_sec=1.0):
            self.get_logger().warn("Chaser spawn service not available, waiting again...")

        request = CreateChasers.Request()
        request.count = 1

        future = self._spawn_chasers_client.call_async(request)
        future.add_done_callback(self.chasers_callback)

    def chasers_callback(self, future):
        try:
            response = future.result()
            if response is not None:
                self.chasers = response.turtle_names
                self.create_pub_sub_for_chasers()
                self.get_logger().info(f"Chasers spawned: {self.chasers}")
            else:
                self.get_logger().error("Failed to spawn chasers")
        except Exception as e:
            self.get_logger().error(f"Exception while spawning chasers: {e}")

    def alive_turtles_callback(self, turtleArray: TurtleArray):
        min_distance = float('inf')

        if len(turtleArray.turtles)==0:
            self.get_logger().info("No turtles alive, cannot proceed with chasing.")
            return

        if not self.get_parameter("catch_closest_turtle_first").value or len(self.chasers) > 1:
            # self._target_turtle = turtleArray.turtles[0]
            for idx, i in enumerate(self.chasers):
                self.target_turtles[i] = turtleArray.turtles[idx % len(turtleArray.turtles)]
            return
        
        for chaser_name in self.chasers:
            available_turtles = [t for t in turtleArray.turtles if t.name not in list(map(lambda t: t.name, self.target_turtles.values()))]
            for turtle in available_turtles:
                ed = self._compute_euclidean_distance(self._current_poses[chaser_name], turtle)
                if ed < min_distance:
                    min_distance = ed
                    # self._target_turtle = turtle
                    self.target_turtles[chaser_name] = turtle

    def move_towards_target(self):
        if len(self.target_turtles.keys()) == len(self.chasers):
            for chaser_name, publisher in self.chaser_publisher.items():
                if chaser_name in self._current_poses:
                    current_pose = self._current_poses[chaser_name]
                    self.move_each_chaser(chaser_name, self.target_turtles[chaser_name], publisher, current_pose)

    def move_each_chaser(self, chaser_name: str, _target_turtle: Turtle, publisher, current_pose: Pose):
        self.get_logger().info(f"Moving {chaser_name} towards {_target_turtle.name} with current pose: ({current_pose.x}, {current_pose.y})")

        if _target_turtle is not None and current_pose is not None:
            min_distance = self._compute_euclidean_distance(_target_turtle, current_pose)
            angle = atan2(_target_turtle.y - current_pose.y,
                           _target_turtle.x - current_pose.x)

            rotation = angle - current_pose.theta
            self.get_logger().info(f"Rotating to angle: {(rotation / pi) * 180:.2f} degrees from current pose: {current_pose.theta:.2f} radians")
            self.get_logger().info(f"Moving {chaser_name} towards turtle: {_target_turtle.name} at distance: {min_distance:.2f}")

            twist = Twist()
            if min_distance > 0.5:
                twist.linear.x = 2 * min_distance
                if rotation > pi:
                    rotation -= 2 * pi
                elif rotation < -pi:
                    rotation += 2 * pi
                twist.angular.z = 3 * rotation

            else:
                twist.linear.x = 0.0
                twist.angular.z = 0.0
                self.get_logger().info(f"Reached turtle: {_target_turtle.name} at distance: {min_distance:.2f}, stopping movement.")
                self.call_catch_turtle(_target_turtle.name)

            publisher.publish(twist)

    def _compute_euclidean_distance(self, from_turtle: Turtle, turtle: Turtle):
        return sqrt((turtle.x - from_turtle.x) ** 2 + (turtle.y - from_turtle.y) ** 2)

    def call_catch_turtle(self, turtle_name: str):
        while not self._catch_client.wait_for_service(timeout_sec=1.0):
            self.get_logger().warn("Catch service not available, waiting again...")

        request = CatchTurtle.Request()

        request.name = turtle_name

        future = self._catch_client.call_async(request)
        future.add_done_callback(self.callback_catch_turtle)

    def callback_catch_turtle(self, future):
        result = future.result()
        if result:
            self.get_logger().info(f"Turtle killed")
        
    def pose_callback(self, pose: Pose):
        self._current_pose = pose

def main(args=None):
    rclpy.init(args=args)
    node = TurtleControllerNode()
    node.spawn_chasers()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == "__main__":
    main()