import rclpy
from rclpy.node import Node


class MyParameter(Node):

    def __init__(self):
        super().__init__('my_parameter')

        # Declare parameters
        self.declare_parameter('robot_name', 'my_robot')
        self.declare_parameter('robot_speed', 0.5)

        # Get parameter values
        robot_name = self.get_parameter('robot_name').value
        robot_speed = self.get_parameter('robot_speed').value

        self.get_logger().info(f'Robot Name: {robot_name}')
        self.get_logger().info(f'Robot Speed: {robot_speed}')


def main(args=None):
    rclpy.init(args=args)

    node = MyParameter()

    rclpy.spin(node)

    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()