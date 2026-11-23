import rclpy
from rclpy.node import Node
from first_interfaces.srv import AddTwoNumbers


class ServiceServer(Node):

    def __init__(self):
        super().__init__('service_server')

        self.srv = self.create_service(
            AddTwoNumbers,
            'add_two_ints',
            self.add_two_ints_callback
        )

        self.get_logger().info('Service Server is ready!')

    def add_two_ints_callback(self, request, response):
        response.sum = request.a + request.b

        self.get_logger().info(
            f'Received: {request.a} + {request.b}'
        )

        return response


def main(args=None):
    rclpy.init(args=args)

    node = ServiceServer()

    rclpy.spin(node)

    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()