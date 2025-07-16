import rclpy
from rclpy.node import Node
from turtle_interfaces.msg import TurtleArray, Turtle
from turtle_interfaces.srv import CatchTurtle, CreateChasers
from turtlesim.srv import Spawn, Kill, SetPen
from random import random, uniform, randint
from functools import partial
import time

class TurtleSpawnerNode(Node):
    def __init__(self):
        super().__init__("turtle_spawner")
        self.declare_parameters(
            namespace='',
            parameters=[
                ('spawn_frequency', 2.0),
                ('turtle_name_prefix', 'turtle_'),
                ('chasers_count', 1)
            ]
        )
        self._alive_turtles = []
        self._chasers = ['turtle1']

        self._alive_turtles_pub = self.create_publisher(TurtleArray, "alive_turtles", 10)

        # self.create_timer(1.0, self.publish_alive_turtles)
        self.create_timer(self.get_parameter("spawn_frequency").value, self.spawn)

        self.spawn_client = self.create_client(Spawn, "spawn")
        self.kill_client = self.create_client(Kill, "kill")

        self.catch_server = self.create_service(CatchTurtle, "catch_turtle", self.catch_turtle)
        self.create_service(CreateChasers, "create_chasers", self.get_chasers)

        self._change_pen_client = self.create_client(SetPen, '/turtle1/set_pen')

    def change_pen_color(self):
        request = SetPen.Request()
        request.r = randint(0, 255)
        request.g = randint(0, 255)
        request.b = randint(0, 255)
        request.width = 2
        request.off = False
        
        future = self._change_pen_client.call_async(request)
        future.add_done_callback(self.pen_callback)

    def pen_callback(self, future):
        try: 
            result = future.result()
            if result is not None:
                self.get_logger().info(f"Pen changed for turtle 1")
            else:
                self.get_logger().error(f"Failed to change pen for turtle 1")
        except Exception as e:
            self.get_logger().error(f"Exception while changing pen for turtle 1: {e}")

    def get_chasers(self, req: CreateChasers.Request, response: CreateChasers.Response):
        while len(self._chasers) < self.get_parameter("chasers_count").value:
            time.sleep(0.5)
        response.turtle_names = self._chasers
        self.get_logger().info(f"Final CHASERS: {self._chasers}")

        return response

    def spawn_chasers(self):

        count = self.get_parameter("chasers_count").value

        if count <= 1:
            # self._chasers.append('turtle1')
            return
        
        while not self.spawn_client.wait_for_service(timeout_sec=1.0):
            self.get_logger().warn("Spawn service FOR CHASERS not available, waiting again...")

        for _ in range(count-1):
            request = Spawn.Request()

            request.name = f"{self.get_parameter('turtle_name_prefix').value}{uniform(0, 100000).__floor__()}"
            request.x = random() * 11.0
            request.y = random() * 11.0
            request.theta = random() * 2 * 3.14
            future = self.spawn_client.call_async(request)
            future.add_done_callback(self.chaser_spawn_callback)
            self.get_logger().info(f"ONE Chaser spawned: {request.name}")

    def chaser_spawn_callback(self, future):
        try:
            result = future.result()
            if result is not None:
                self._chasers.append(result.name)
                self.get_logger().info(f"Spawned chaser: {result.name}")
            else:
                self.get_logger().error("Failed to spawn chaser, service call returned None")
        except Exception as e:
            self.get_logger().error(f"Exception while spawning chaser: {e}")


    def spawn(self):
        while not self.spawn_client.wait_for_service(timeout_sec=1.0):
            self.get_logger().warn("Spawn service not available, waiting again...")

        request = Spawn.Request()

        request.name = f"{self.get_parameter('turtle_name_prefix').value}{uniform(0, 100000).__floor__()}"
        request.x = random() * 11.0
        request.y = random() * 11.0
        request.theta = random() * 2 * 3.14

        future = self.spawn_client.call_async(request)
        future.add_done_callback(partial(self.callback_spawn, request=request))

    def callback_spawn(self, future, request):
        result = future.result()
        if result is not None:
            turtle = Turtle(name=result.name, x=request.x, y=request.y, theta=request.theta)
            self._alive_turtles.append(turtle)
            self.publish_alive_turtles()
            self.get_logger().info(f"Spawned turtle: {turtle.name} at ({turtle.x}, {turtle.y}) with theta {turtle.theta}")

    def catch_turtle(self, req: CatchTurtle.Request, response: CatchTurtle.Response):
        while not self.kill_client.wait_for_service(timeout_sec=1.0):
            self.get_logger().warn("Kill service not available, waiting again...")

        if not any(turtle.name == req.name for turtle in self._alive_turtles):
            self.get_logger().warn(f"Turtle {req.name} not found, cannot catch.")
            response.success = False
            return response
        
        request = Kill.Request()
        request.name = req.name

        response.success = True

        future = self.kill_client.call_async(request)
        future.add_done_callback(partial(self.callback_catch, turtle_name=req.name))
        return response

    def callback_catch(self, future, turtle_name):
        result = future.result()
        if result is not None:
            self.remove_turtle(turtle_name)
            self.change_pen_color()
            self.get_logger().info(f"Killed turtle: {turtle_name}")
        else:
            self.get_logger().error("Failed to kill turtle, service call returned None")

    def remove_turtle(self, turtle_name: str):
        self._alive_turtles = [turtle for turtle in self._alive_turtles if turtle.name != turtle_name]
        # self.publish_alive_turtles()

    def publish_alive_turtles(self):
        msg = TurtleArray()
        msg.turtles = self._alive_turtles
        self._alive_turtles_pub.publish(msg)

def main(args=None):
    rclpy.init(args=args)
    node = TurtleSpawnerNode()
    node.spawn_chasers()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == "__main__":
    main()