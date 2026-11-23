import rclpy
from rclpy.node import Node
from first_interfaces.srv import AddTwoNumbers


class ServiceClient(Node):

    def __init__(self):
        super().__init__('service_client')

        self.client = self.create_client(
            AddTwoNumbers,
            'add_two_ints'
        )

        while not self.client.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('Waiting for Service Server...')

        self.request = AddTwoNumbers.Request()
        self.request.a = 10
        self.request.b = 50

        self.future = self.client.call_async(self.request)
        self.future.add_done_callback(self.response_callback)

    def response_callback(self, future):
        response = future.result()
        self.get_logger().info(f'Result: {response.sum}')


def main(args=None):
    rclpy.init(args=args)

    node = ServiceClient()

    rclpy.spin(node)

    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()