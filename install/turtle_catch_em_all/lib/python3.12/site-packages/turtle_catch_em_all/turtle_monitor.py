import rclpy
from rclpy.node import Node
from turtle_interfaces.msg import TurtleArray, Turtle
from geometry_msgs.msg import Twist
from turtlesim.msg import Pose
from turtlesim.srv import SetPen
import random
from functools import partial
from math import pi

class TurtleMonitorNode(Node):
    def __init__(self):
        super().__init__("turtle_monitor")
        self._turtle_publishers = {}
        self._subscribers = {}
        self._poses = {}
        self._pens = {}

        self.create_subscription(TurtleArray, 'alive_turtles', self.alive_turtles_callback, 10)
        self.publish_coordinates = self.create_publisher(TurtleArray, 'turtle_coordinates', 10)

        self.create_timer(0.5, self.generate_random_movements)

    def alive_turtles_callback(self, turtleArray: TurtleArray):
        
        for turtle in turtleArray.turtles:
            if turtle.name not in self._turtle_publishers:
                self._turtle_publishers[turtle.name] = self.create_publisher(Twist, f"{turtle.name}/cmd_vel", 10)
                self._subscribers[turtle.name] = self.create_subscription(Pose, f"{turtle.name}/pose", partial(self._pose_callback, turtle_name=turtle.name), 10)
                self._pens[turtle.name] = self.create_client(SetPen, f"{turtle.name}/set_pen")

        dead_turtles = set(self._turtle_publishers.keys()) - {turtle.name for turtle in turtleArray.turtles}

        for dead_turtle in dead_turtles:
            self.destroy_publisher(self._turtle_publishers[dead_turtle])
            self.destroy_subscription(self._subscribers[dead_turtle])
            self.destroy_client(self._pens[dead_turtle])
            del self._turtle_publishers[dead_turtle]
            del self._subscribers[dead_turtle]
            del self._poses[dead_turtle]
            del self._pens[dead_turtle]

        self.disable_pen(turtle.name)

    def disable_pen(self, turtle_name: str):
        request = SetPen.Request()
        request.off = True
        future = self._pens[turtle_name].call_async(request)
        future.add_done_callback(partial(self.pen_callback, turtle_name=turtle_name))

    def pen_callback(self, future, turtle_name: str):
        try:
            result = future.result()
            if result is not None:
                self.get_logger().info(f"Pen disabled for {turtle_name}")
            else:
                self.get_logger().error(f"Failed to disable pen for {turtle_name}")
        except Exception as e:
            self.get_logger().error(f"Exception while disabling pen for {turtle_name}: {e}")

    def _pose_callback(self, pose: Pose, turtle_name: str):
        self._poses[turtle_name] = pose

    def generate_random_movements(self):
        for turtle_name, publisher in self._turtle_publishers.items():
            if turtle_name in self._poses:
                
                twist = Twist()
                twist.linear.x = random.uniform(0.5, 2.0)
                twist.angular.z = random.uniform(-pi/2, pi/2)
                
                if turtle_name in self._poses:
                    current_pose = self._poses[turtle_name]

                    # If near wall, rotate 180 degrees
                    if current_pose.x < 1.0 or current_pose.x > 11.0 or current_pose.y < 0.0 or current_pose.y > 11.0:
                        twist.linear.x = 0.5
                        twist.angular.z = pi

                publisher.publish(twist)
        
        turtle_array = TurtleArray()
        for turtle_name, pose in self._poses.items():
            turtle = Turtle(name=turtle_name, x=pose.x, y=pose.y, theta=pose.theta)
            turtle_array.turtles.append(turtle)

        self.publish_coordinates.publish(turtle_array)

def main(args=None):
    rclpy.init(args=args)
    node = TurtleMonitorNode()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == "__main__":
    main()