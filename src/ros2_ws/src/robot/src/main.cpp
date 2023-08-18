#include "robot.hpp"
#include "robot_factory.hpp"
#include "components.hpp"
#include "rclcpp/rclcpp.hpp"

int main(int argc, char** argv)
{
    rclcpp::init(argc, argv);
    std::unique_ptr<Configuration> configuration = std::make_unique<Configuration>(CONFIG_PATH); // Declared in CMakeLists.txt
    std::shared_ptr<Robot> robot = RobotFactory::createRobot(*configuration);
    std::shared_ptr<std::vector<std::shared_ptr<Component>>> components = Components::CreateComponentVector(*robot);
    robot->connectComponents(components);
    rclcpp::spin(robot);
    rclcpp::shutdown();
    return EXIT_SUCCESS;
}