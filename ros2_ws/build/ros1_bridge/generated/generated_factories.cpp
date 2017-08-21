// generated from ros1_bridge/resource/generated_factories.cpp.template

#include <ros1_bridge/factory.hpp>

// include ROS 1 builtin messages
#include <ros/duration.h>
#include <ros/time.h>

// include ROS 2 builtin messages
#include <builtin_interfaces/msg/duration.hpp>
#include <builtin_interfaces/msg/time.hpp>

// include ROS 1 messages
#include <geometry_msgs/Point.h>
#include <geometry_msgs/Point32.h>
#include <geometry_msgs/Polygon.h>
#include <geometry_msgs/Pose2D.h>
#include <geometry_msgs/Quaternion.h>
#include <geometry_msgs/Pose.h>
#include <geometry_msgs/PoseWithCovariance.h>
#include <geometry_msgs/Vector3.h>
#include <geometry_msgs/Transform.h>
#include <geometry_msgs/Twist.h>
#include <geometry_msgs/TwistWithCovariance.h>
#include <geometry_msgs/Wrench.h>
#include <nav_msgs/MapMetaData.h>
#include <sensor_msgs/ChannelFloat32.h>
#include <sensor_msgs/JoyFeedback.h>
#include <sensor_msgs/JoyFeedbackArray.h>
#include <sensor_msgs/LaserEcho.h>
#include <sensor_msgs/NavSatStatus.h>
#include <sensor_msgs/PointField.h>
#include <sensor_msgs/RegionOfInterest.h>
#include <std_msgs/Bool.h>
#include <std_msgs/Byte.h>
#include <std_msgs/Char.h>
#include <std_msgs/ColorRGBA.h>
#include <std_msgs/Empty.h>
#include <std_msgs/Float32.h>
#include <std_msgs/Float64.h>
#include <std_msgs/Header.h>
#include <geometry_msgs/PointStamped.h>
#include <geometry_msgs/PolygonStamped.h>
#include <geometry_msgs/PoseArray.h>
#include <geometry_msgs/PoseStamped.h>
#include <geometry_msgs/PoseWithCovarianceStamped.h>
#include <geometry_msgs/QuaternionStamped.h>
#include <geometry_msgs/TransformStamped.h>
#include <geometry_msgs/TwistStamped.h>
#include <geometry_msgs/TwistWithCovarianceStamped.h>
#include <geometry_msgs/Vector3Stamped.h>
#include <geometry_msgs/WrenchStamped.h>
#include <nav_msgs/GridCells.h>
#include <nav_msgs/OccupancyGrid.h>
#include <nav_msgs/Odometry.h>
#include <nav_msgs/Path.h>
#include <sensor_msgs/CameraInfo.h>
#include <sensor_msgs/CompressedImage.h>
#include <sensor_msgs/FluidPressure.h>
#include <sensor_msgs/Illuminance.h>
#include <sensor_msgs/Image.h>
#include <sensor_msgs/Imu.h>
#include <sensor_msgs/JointState.h>
#include <sensor_msgs/Joy.h>
#include <sensor_msgs/LaserScan.h>
#include <sensor_msgs/MagneticField.h>
#include <sensor_msgs/MultiDOFJointState.h>
#include <sensor_msgs/MultiEchoLaserScan.h>
#include <sensor_msgs/NavSatFix.h>
#include <sensor_msgs/PointCloud.h>
#include <sensor_msgs/PointCloud2.h>
#include <sensor_msgs/Range.h>
#include <sensor_msgs/RelativeHumidity.h>
#include <sensor_msgs/Temperature.h>
#include <sensor_msgs/TimeReference.h>
#include <std_msgs/Int16.h>
#include <std_msgs/Int32.h>
#include <std_msgs/Int64.h>
#include <std_msgs/Int8.h>
#include <std_msgs/MultiArrayDimension.h>
#include <std_msgs/MultiArrayLayout.h>
#include <std_msgs/ByteMultiArray.h>
#include <std_msgs/Float32MultiArray.h>
#include <std_msgs/Float64MultiArray.h>
#include <std_msgs/Int16MultiArray.h>
#include <std_msgs/Int32MultiArray.h>
#include <std_msgs/Int64MultiArray.h>
#include <std_msgs/Int8MultiArray.h>
#include <std_msgs/String.h>
#include <std_msgs/UInt16.h>
#include <std_msgs/UInt16MultiArray.h>
#include <std_msgs/UInt32.h>
#include <std_msgs/UInt32MultiArray.h>
#include <std_msgs/UInt64.h>
#include <std_msgs/UInt64MultiArray.h>
#include <std_msgs/UInt8.h>
#include <std_msgs/UInt8MultiArray.h>

// include ROS 2 messages
#include <geometry_msgs/msg/point.hpp>
#include <geometry_msgs/msg/point32.hpp>
#include <geometry_msgs/msg/polygon.hpp>
#include <geometry_msgs/msg/pose2_d.hpp>
#include <geometry_msgs/msg/quaternion.hpp>
#include <geometry_msgs/msg/pose.hpp>
#include <geometry_msgs/msg/pose_with_covariance.hpp>
#include <geometry_msgs/msg/vector3.hpp>
#include <geometry_msgs/msg/transform.hpp>
#include <geometry_msgs/msg/twist.hpp>
#include <geometry_msgs/msg/twist_with_covariance.hpp>
#include <geometry_msgs/msg/wrench.hpp>
#include <nav_msgs/msg/map_meta_data.hpp>
#include <sensor_msgs/msg/channel_float32.hpp>
#include <sensor_msgs/msg/joy_feedback.hpp>
#include <sensor_msgs/msg/joy_feedback_array.hpp>
#include <sensor_msgs/msg/laser_echo.hpp>
#include <sensor_msgs/msg/nav_sat_status.hpp>
#include <sensor_msgs/msg/point_field.hpp>
#include <sensor_msgs/msg/region_of_interest.hpp>
#include <std_msgs/msg/bool.hpp>
#include <std_msgs/msg/byte.hpp>
#include <std_msgs/msg/char.hpp>
#include <std_msgs/msg/color_rgba.hpp>
#include <std_msgs/msg/empty.hpp>
#include <std_msgs/msg/float32.hpp>
#include <std_msgs/msg/float64.hpp>
#include <std_msgs/msg/header.hpp>
#include <geometry_msgs/msg/point_stamped.hpp>
#include <geometry_msgs/msg/polygon_stamped.hpp>
#include <geometry_msgs/msg/pose_array.hpp>
#include <geometry_msgs/msg/pose_stamped.hpp>
#include <geometry_msgs/msg/pose_with_covariance_stamped.hpp>
#include <geometry_msgs/msg/quaternion_stamped.hpp>
#include <geometry_msgs/msg/transform_stamped.hpp>
#include <geometry_msgs/msg/twist_stamped.hpp>
#include <geometry_msgs/msg/twist_with_covariance_stamped.hpp>
#include <geometry_msgs/msg/vector3_stamped.hpp>
#include <geometry_msgs/msg/wrench_stamped.hpp>
#include <nav_msgs/msg/grid_cells.hpp>
#include <nav_msgs/msg/occupancy_grid.hpp>
#include <nav_msgs/msg/odometry.hpp>
#include <nav_msgs/msg/path.hpp>
#include <sensor_msgs/msg/camera_info.hpp>
#include <sensor_msgs/msg/compressed_image.hpp>
#include <sensor_msgs/msg/fluid_pressure.hpp>
#include <sensor_msgs/msg/illuminance.hpp>
#include <sensor_msgs/msg/image.hpp>
#include <sensor_msgs/msg/imu.hpp>
#include <sensor_msgs/msg/joint_state.hpp>
#include <sensor_msgs/msg/joy.hpp>
#include <sensor_msgs/msg/laser_scan.hpp>
#include <sensor_msgs/msg/magnetic_field.hpp>
#include <sensor_msgs/msg/multi_dof_joint_state.hpp>
#include <sensor_msgs/msg/multi_echo_laser_scan.hpp>
#include <sensor_msgs/msg/nav_sat_fix.hpp>
#include <sensor_msgs/msg/point_cloud.hpp>
#include <sensor_msgs/msg/point_cloud2.hpp>
#include <sensor_msgs/msg/range.hpp>
#include <sensor_msgs/msg/relative_humidity.hpp>
#include <sensor_msgs/msg/temperature.hpp>
#include <sensor_msgs/msg/time_reference.hpp>
#include <std_msgs/msg/int16.hpp>
#include <std_msgs/msg/int32.hpp>
#include <std_msgs/msg/int64.hpp>
#include <std_msgs/msg/int8.hpp>
#include <std_msgs/msg/multi_array_dimension.hpp>
#include <std_msgs/msg/multi_array_layout.hpp>
#include <std_msgs/msg/byte_multi_array.hpp>
#include <std_msgs/msg/float32_multi_array.hpp>
#include <std_msgs/msg/float64_multi_array.hpp>
#include <std_msgs/msg/int16_multi_array.hpp>
#include <std_msgs/msg/int32_multi_array.hpp>
#include <std_msgs/msg/int64_multi_array.hpp>
#include <std_msgs/msg/int8_multi_array.hpp>
#include <std_msgs/msg/string.hpp>
#include <std_msgs/msg/u_int16.hpp>
#include <std_msgs/msg/u_int16_multi_array.hpp>
#include <std_msgs/msg/u_int32.hpp>
#include <std_msgs/msg/u_int32_multi_array.hpp>
#include <std_msgs/msg/u_int64.hpp>
#include <std_msgs/msg/u_int64_multi_array.hpp>
#include <std_msgs/msg/u_int8.hpp>
#include <std_msgs/msg/u_int8_multi_array.hpp>


namespace ros1_bridge
{

std::shared_ptr<FactoryInterface>
get_factory(const std::string & ros1_type_name, const std::string & ros2_type_name)
{
  // mapping from string to specialized template
  if (
    (ros1_type_name == "geometry_msgs/Point" ||
     ros1_type_name == "") &&
    ros2_type_name == "geometry_msgs/Point")
  {
    return std::make_shared<
      Factory<
        geometry_msgs::Point,
        geometry_msgs::msg::Point
      >
    >();
  }
  if (
    (ros1_type_name == "geometry_msgs/Point32" ||
     ros1_type_name == "") &&
    ros2_type_name == "geometry_msgs/Point32")
  {
    return std::make_shared<
      Factory<
        geometry_msgs::Point32,
        geometry_msgs::msg::Point32
      >
    >();
  }
  if (
    (ros1_type_name == "geometry_msgs/Polygon" ||
     ros1_type_name == "") &&
    ros2_type_name == "geometry_msgs/Polygon")
  {
    return std::make_shared<
      Factory<
        geometry_msgs::Polygon,
        geometry_msgs::msg::Polygon
      >
    >();
  }
  if (
    (ros1_type_name == "geometry_msgs/Pose2D" ||
     ros1_type_name == "") &&
    ros2_type_name == "geometry_msgs/Pose2D")
  {
    return std::make_shared<
      Factory<
        geometry_msgs::Pose2D,
        geometry_msgs::msg::Pose2D
      >
    >();
  }
  if (
    (ros1_type_name == "geometry_msgs/Quaternion" ||
     ros1_type_name == "") &&
    ros2_type_name == "geometry_msgs/Quaternion")
  {
    return std::make_shared<
      Factory<
        geometry_msgs::Quaternion,
        geometry_msgs::msg::Quaternion
      >
    >();
  }
  if (
    (ros1_type_name == "geometry_msgs/Pose" ||
     ros1_type_name == "") &&
    ros2_type_name == "geometry_msgs/Pose")
  {
    return std::make_shared<
      Factory<
        geometry_msgs::Pose,
        geometry_msgs::msg::Pose
      >
    >();
  }
  if (
    (ros1_type_name == "geometry_msgs/PoseWithCovariance" ||
     ros1_type_name == "") &&
    ros2_type_name == "geometry_msgs/PoseWithCovariance")
  {
    return std::make_shared<
      Factory<
        geometry_msgs::PoseWithCovariance,
        geometry_msgs::msg::PoseWithCovariance
      >
    >();
  }
  if (
    (ros1_type_name == "geometry_msgs/Vector3" ||
     ros1_type_name == "") &&
    ros2_type_name == "geometry_msgs/Vector3")
  {
    return std::make_shared<
      Factory<
        geometry_msgs::Vector3,
        geometry_msgs::msg::Vector3
      >
    >();
  }
  if (
    (ros1_type_name == "geometry_msgs/Transform" ||
     ros1_type_name == "") &&
    ros2_type_name == "geometry_msgs/Transform")
  {
    return std::make_shared<
      Factory<
        geometry_msgs::Transform,
        geometry_msgs::msg::Transform
      >
    >();
  }
  if (
    (ros1_type_name == "geometry_msgs/Twist" ||
     ros1_type_name == "") &&
    ros2_type_name == "geometry_msgs/Twist")
  {
    return std::make_shared<
      Factory<
        geometry_msgs::Twist,
        geometry_msgs::msg::Twist
      >
    >();
  }
  if (
    (ros1_type_name == "geometry_msgs/TwistWithCovariance" ||
     ros1_type_name == "") &&
    ros2_type_name == "geometry_msgs/TwistWithCovariance")
  {
    return std::make_shared<
      Factory<
        geometry_msgs::TwistWithCovariance,
        geometry_msgs::msg::TwistWithCovariance
      >
    >();
  }
  if (
    (ros1_type_name == "geometry_msgs/Wrench" ||
     ros1_type_name == "") &&
    ros2_type_name == "geometry_msgs/Wrench")
  {
    return std::make_shared<
      Factory<
        geometry_msgs::Wrench,
        geometry_msgs::msg::Wrench
      >
    >();
  }
  if (
    (ros1_type_name == "nav_msgs/MapMetaData" ||
     ros1_type_name == "") &&
    ros2_type_name == "nav_msgs/MapMetaData")
  {
    return std::make_shared<
      Factory<
        nav_msgs::MapMetaData,
        nav_msgs::msg::MapMetaData
      >
    >();
  }
  if (
    (ros1_type_name == "sensor_msgs/ChannelFloat32" ||
     ros1_type_name == "") &&
    ros2_type_name == "sensor_msgs/ChannelFloat32")
  {
    return std::make_shared<
      Factory<
        sensor_msgs::ChannelFloat32,
        sensor_msgs::msg::ChannelFloat32
      >
    >();
  }
  if (
    (ros1_type_name == "sensor_msgs/JoyFeedback" ||
     ros1_type_name == "") &&
    ros2_type_name == "sensor_msgs/JoyFeedback")
  {
    return std::make_shared<
      Factory<
        sensor_msgs::JoyFeedback,
        sensor_msgs::msg::JoyFeedback
      >
    >();
  }
  if (
    (ros1_type_name == "sensor_msgs/JoyFeedbackArray" ||
     ros1_type_name == "") &&
    ros2_type_name == "sensor_msgs/JoyFeedbackArray")
  {
    return std::make_shared<
      Factory<
        sensor_msgs::JoyFeedbackArray,
        sensor_msgs::msg::JoyFeedbackArray
      >
    >();
  }
  if (
    (ros1_type_name == "sensor_msgs/LaserEcho" ||
     ros1_type_name == "") &&
    ros2_type_name == "sensor_msgs/LaserEcho")
  {
    return std::make_shared<
      Factory<
        sensor_msgs::LaserEcho,
        sensor_msgs::msg::LaserEcho
      >
    >();
  }
  if (
    (ros1_type_name == "sensor_msgs/NavSatStatus" ||
     ros1_type_name == "") &&
    ros2_type_name == "sensor_msgs/NavSatStatus")
  {
    return std::make_shared<
      Factory<
        sensor_msgs::NavSatStatus,
        sensor_msgs::msg::NavSatStatus
      >
    >();
  }
  if (
    (ros1_type_name == "sensor_msgs/PointField" ||
     ros1_type_name == "") &&
    ros2_type_name == "sensor_msgs/PointField")
  {
    return std::make_shared<
      Factory<
        sensor_msgs::PointField,
        sensor_msgs::msg::PointField
      >
    >();
  }
  if (
    (ros1_type_name == "sensor_msgs/RegionOfInterest" ||
     ros1_type_name == "") &&
    ros2_type_name == "sensor_msgs/RegionOfInterest")
  {
    return std::make_shared<
      Factory<
        sensor_msgs::RegionOfInterest,
        sensor_msgs::msg::RegionOfInterest
      >
    >();
  }
  if (
    (ros1_type_name == "std_msgs/Bool" ||
     ros1_type_name == "") &&
    ros2_type_name == "std_msgs/Bool")
  {
    return std::make_shared<
      Factory<
        std_msgs::Bool,
        std_msgs::msg::Bool
      >
    >();
  }
  if (
    (ros1_type_name == "std_msgs/Byte" ||
     ros1_type_name == "") &&
    ros2_type_name == "std_msgs/Byte")
  {
    return std::make_shared<
      Factory<
        std_msgs::Byte,
        std_msgs::msg::Byte
      >
    >();
  }
  if (
    (ros1_type_name == "std_msgs/Char" ||
     ros1_type_name == "") &&
    ros2_type_name == "std_msgs/Char")
  {
    return std::make_shared<
      Factory<
        std_msgs::Char,
        std_msgs::msg::Char
      >
    >();
  }
  if (
    (ros1_type_name == "std_msgs/ColorRGBA" ||
     ros1_type_name == "") &&
    ros2_type_name == "std_msgs/ColorRGBA")
  {
    return std::make_shared<
      Factory<
        std_msgs::ColorRGBA,
        std_msgs::msg::ColorRGBA
      >
    >();
  }
  if (
    (ros1_type_name == "std_msgs/Empty" ||
     ros1_type_name == "") &&
    ros2_type_name == "std_msgs/Empty")
  {
    return std::make_shared<
      Factory<
        std_msgs::Empty,
        std_msgs::msg::Empty
      >
    >();
  }
  if (
    (ros1_type_name == "std_msgs/Float32" ||
     ros1_type_name == "") &&
    ros2_type_name == "std_msgs/Float32")
  {
    return std::make_shared<
      Factory<
        std_msgs::Float32,
        std_msgs::msg::Float32
      >
    >();
  }
  if (
    (ros1_type_name == "std_msgs/Float64" ||
     ros1_type_name == "") &&
    ros2_type_name == "std_msgs/Float64")
  {
    return std::make_shared<
      Factory<
        std_msgs::Float64,
        std_msgs::msg::Float64
      >
    >();
  }
  if (
    (ros1_type_name == "std_msgs/Header" ||
     ros1_type_name == "") &&
    ros2_type_name == "std_msgs/Header")
  {
    return std::make_shared<
      Factory<
        std_msgs::Header,
        std_msgs::msg::Header
      >
    >();
  }
  if (
    (ros1_type_name == "geometry_msgs/PointStamped" ||
     ros1_type_name == "") &&
    ros2_type_name == "geometry_msgs/PointStamped")
  {
    return std::make_shared<
      Factory<
        geometry_msgs::PointStamped,
        geometry_msgs::msg::PointStamped
      >
    >();
  }
  if (
    (ros1_type_name == "geometry_msgs/PolygonStamped" ||
     ros1_type_name == "") &&
    ros2_type_name == "geometry_msgs/PolygonStamped")
  {
    return std::make_shared<
      Factory<
        geometry_msgs::PolygonStamped,
        geometry_msgs::msg::PolygonStamped
      >
    >();
  }
  if (
    (ros1_type_name == "geometry_msgs/PoseArray" ||
     ros1_type_name == "") &&
    ros2_type_name == "geometry_msgs/PoseArray")
  {
    return std::make_shared<
      Factory<
        geometry_msgs::PoseArray,
        geometry_msgs::msg::PoseArray
      >
    >();
  }
  if (
    (ros1_type_name == "geometry_msgs/PoseStamped" ||
     ros1_type_name == "") &&
    ros2_type_name == "geometry_msgs/PoseStamped")
  {
    return std::make_shared<
      Factory<
        geometry_msgs::PoseStamped,
        geometry_msgs::msg::PoseStamped
      >
    >();
  }
  if (
    (ros1_type_name == "geometry_msgs/PoseWithCovarianceStamped" ||
     ros1_type_name == "") &&
    ros2_type_name == "geometry_msgs/PoseWithCovarianceStamped")
  {
    return std::make_shared<
      Factory<
        geometry_msgs::PoseWithCovarianceStamped,
        geometry_msgs::msg::PoseWithCovarianceStamped
      >
    >();
  }
  if (
    (ros1_type_name == "geometry_msgs/QuaternionStamped" ||
     ros1_type_name == "") &&
    ros2_type_name == "geometry_msgs/QuaternionStamped")
  {
    return std::make_shared<
      Factory<
        geometry_msgs::QuaternionStamped,
        geometry_msgs::msg::QuaternionStamped
      >
    >();
  }
  if (
    (ros1_type_name == "geometry_msgs/TransformStamped" ||
     ros1_type_name == "") &&
    ros2_type_name == "geometry_msgs/TransformStamped")
  {
    return std::make_shared<
      Factory<
        geometry_msgs::TransformStamped,
        geometry_msgs::msg::TransformStamped
      >
    >();
  }
  if (
    (ros1_type_name == "geometry_msgs/TwistStamped" ||
     ros1_type_name == "") &&
    ros2_type_name == "geometry_msgs/TwistStamped")
  {
    return std::make_shared<
      Factory<
        geometry_msgs::TwistStamped,
        geometry_msgs::msg::TwistStamped
      >
    >();
  }
  if (
    (ros1_type_name == "geometry_msgs/TwistWithCovarianceStamped" ||
     ros1_type_name == "") &&
    ros2_type_name == "geometry_msgs/TwistWithCovarianceStamped")
  {
    return std::make_shared<
      Factory<
        geometry_msgs::TwistWithCovarianceStamped,
        geometry_msgs::msg::TwistWithCovarianceStamped
      >
    >();
  }
  if (
    (ros1_type_name == "geometry_msgs/Vector3Stamped" ||
     ros1_type_name == "") &&
    ros2_type_name == "geometry_msgs/Vector3Stamped")
  {
    return std::make_shared<
      Factory<
        geometry_msgs::Vector3Stamped,
        geometry_msgs::msg::Vector3Stamped
      >
    >();
  }
  if (
    (ros1_type_name == "geometry_msgs/WrenchStamped" ||
     ros1_type_name == "") &&
    ros2_type_name == "geometry_msgs/WrenchStamped")
  {
    return std::make_shared<
      Factory<
        geometry_msgs::WrenchStamped,
        geometry_msgs::msg::WrenchStamped
      >
    >();
  }
  if (
    (ros1_type_name == "nav_msgs/GridCells" ||
     ros1_type_name == "") &&
    ros2_type_name == "nav_msgs/GridCells")
  {
    return std::make_shared<
      Factory<
        nav_msgs::GridCells,
        nav_msgs::msg::GridCells
      >
    >();
  }
  if (
    (ros1_type_name == "nav_msgs/OccupancyGrid" ||
     ros1_type_name == "") &&
    ros2_type_name == "nav_msgs/OccupancyGrid")
  {
    return std::make_shared<
      Factory<
        nav_msgs::OccupancyGrid,
        nav_msgs::msg::OccupancyGrid
      >
    >();
  }
  if (
    (ros1_type_name == "nav_msgs/Odometry" ||
     ros1_type_name == "") &&
    ros2_type_name == "nav_msgs/Odometry")
  {
    return std::make_shared<
      Factory<
        nav_msgs::Odometry,
        nav_msgs::msg::Odometry
      >
    >();
  }
  if (
    (ros1_type_name == "nav_msgs/Path" ||
     ros1_type_name == "") &&
    ros2_type_name == "nav_msgs/Path")
  {
    return std::make_shared<
      Factory<
        nav_msgs::Path,
        nav_msgs::msg::Path
      >
    >();
  }
  if (
    (ros1_type_name == "sensor_msgs/CameraInfo" ||
     ros1_type_name == "") &&
    ros2_type_name == "sensor_msgs/CameraInfo")
  {
    return std::make_shared<
      Factory<
        sensor_msgs::CameraInfo,
        sensor_msgs::msg::CameraInfo
      >
    >();
  }
  if (
    (ros1_type_name == "sensor_msgs/CompressedImage" ||
     ros1_type_name == "") &&
    ros2_type_name == "sensor_msgs/CompressedImage")
  {
    return std::make_shared<
      Factory<
        sensor_msgs::CompressedImage,
        sensor_msgs::msg::CompressedImage
      >
    >();
  }
  if (
    (ros1_type_name == "sensor_msgs/FluidPressure" ||
     ros1_type_name == "") &&
    ros2_type_name == "sensor_msgs/FluidPressure")
  {
    return std::make_shared<
      Factory<
        sensor_msgs::FluidPressure,
        sensor_msgs::msg::FluidPressure
      >
    >();
  }
  if (
    (ros1_type_name == "sensor_msgs/Illuminance" ||
     ros1_type_name == "") &&
    ros2_type_name == "sensor_msgs/Illuminance")
  {
    return std::make_shared<
      Factory<
        sensor_msgs::Illuminance,
        sensor_msgs::msg::Illuminance
      >
    >();
  }
  if (
    (ros1_type_name == "sensor_msgs/Image" ||
     ros1_type_name == "") &&
    ros2_type_name == "sensor_msgs/Image")
  {
    return std::make_shared<
      Factory<
        sensor_msgs::Image,
        sensor_msgs::msg::Image
      >
    >();
  }
  if (
    (ros1_type_name == "sensor_msgs/Imu" ||
     ros1_type_name == "") &&
    ros2_type_name == "sensor_msgs/Imu")
  {
    return std::make_shared<
      Factory<
        sensor_msgs::Imu,
        sensor_msgs::msg::Imu
      >
    >();
  }
  if (
    (ros1_type_name == "sensor_msgs/JointState" ||
     ros1_type_name == "") &&
    ros2_type_name == "sensor_msgs/JointState")
  {
    return std::make_shared<
      Factory<
        sensor_msgs::JointState,
        sensor_msgs::msg::JointState
      >
    >();
  }
  if (
    (ros1_type_name == "sensor_msgs/Joy" ||
     ros1_type_name == "") &&
    ros2_type_name == "sensor_msgs/Joy")
  {
    return std::make_shared<
      Factory<
        sensor_msgs::Joy,
        sensor_msgs::msg::Joy
      >
    >();
  }
  if (
    (ros1_type_name == "sensor_msgs/LaserScan" ||
     ros1_type_name == "") &&
    ros2_type_name == "sensor_msgs/LaserScan")
  {
    return std::make_shared<
      Factory<
        sensor_msgs::LaserScan,
        sensor_msgs::msg::LaserScan
      >
    >();
  }
  if (
    (ros1_type_name == "sensor_msgs/MagneticField" ||
     ros1_type_name == "") &&
    ros2_type_name == "sensor_msgs/MagneticField")
  {
    return std::make_shared<
      Factory<
        sensor_msgs::MagneticField,
        sensor_msgs::msg::MagneticField
      >
    >();
  }
  if (
    (ros1_type_name == "sensor_msgs/MultiDOFJointState" ||
     ros1_type_name == "") &&
    ros2_type_name == "sensor_msgs/MultiDOFJointState")
  {
    return std::make_shared<
      Factory<
        sensor_msgs::MultiDOFJointState,
        sensor_msgs::msg::MultiDOFJointState
      >
    >();
  }
  if (
    (ros1_type_name == "sensor_msgs/MultiEchoLaserScan" ||
     ros1_type_name == "") &&
    ros2_type_name == "sensor_msgs/MultiEchoLaserScan")
  {
    return std::make_shared<
      Factory<
        sensor_msgs::MultiEchoLaserScan,
        sensor_msgs::msg::MultiEchoLaserScan
      >
    >();
  }
  if (
    (ros1_type_name == "sensor_msgs/NavSatFix" ||
     ros1_type_name == "") &&
    ros2_type_name == "sensor_msgs/NavSatFix")
  {
    return std::make_shared<
      Factory<
        sensor_msgs::NavSatFix,
        sensor_msgs::msg::NavSatFix
      >
    >();
  }
  if (
    (ros1_type_name == "sensor_msgs/PointCloud" ||
     ros1_type_name == "") &&
    ros2_type_name == "sensor_msgs/PointCloud")
  {
    return std::make_shared<
      Factory<
        sensor_msgs::PointCloud,
        sensor_msgs::msg::PointCloud
      >
    >();
  }
  if (
    (ros1_type_name == "sensor_msgs/PointCloud2" ||
     ros1_type_name == "") &&
    ros2_type_name == "sensor_msgs/PointCloud2")
  {
    return std::make_shared<
      Factory<
        sensor_msgs::PointCloud2,
        sensor_msgs::msg::PointCloud2
      >
    >();
  }
  if (
    (ros1_type_name == "sensor_msgs/Range" ||
     ros1_type_name == "") &&
    ros2_type_name == "sensor_msgs/Range")
  {
    return std::make_shared<
      Factory<
        sensor_msgs::Range,
        sensor_msgs::msg::Range
      >
    >();
  }
  if (
    (ros1_type_name == "sensor_msgs/RelativeHumidity" ||
     ros1_type_name == "") &&
    ros2_type_name == "sensor_msgs/RelativeHumidity")
  {
    return std::make_shared<
      Factory<
        sensor_msgs::RelativeHumidity,
        sensor_msgs::msg::RelativeHumidity
      >
    >();
  }
  if (
    (ros1_type_name == "sensor_msgs/Temperature" ||
     ros1_type_name == "") &&
    ros2_type_name == "sensor_msgs/Temperature")
  {
    return std::make_shared<
      Factory<
        sensor_msgs::Temperature,
        sensor_msgs::msg::Temperature
      >
    >();
  }
  if (
    (ros1_type_name == "sensor_msgs/TimeReference" ||
     ros1_type_name == "") &&
    ros2_type_name == "sensor_msgs/TimeReference")
  {
    return std::make_shared<
      Factory<
        sensor_msgs::TimeReference,
        sensor_msgs::msg::TimeReference
      >
    >();
  }
  if (
    (ros1_type_name == "std_msgs/Int16" ||
     ros1_type_name == "") &&
    ros2_type_name == "std_msgs/Int16")
  {
    return std::make_shared<
      Factory<
        std_msgs::Int16,
        std_msgs::msg::Int16
      >
    >();
  }
  if (
    (ros1_type_name == "std_msgs/Int32" ||
     ros1_type_name == "") &&
    ros2_type_name == "std_msgs/Int32")
  {
    return std::make_shared<
      Factory<
        std_msgs::Int32,
        std_msgs::msg::Int32
      >
    >();
  }
  if (
    (ros1_type_name == "std_msgs/Int64" ||
     ros1_type_name == "") &&
    ros2_type_name == "std_msgs/Int64")
  {
    return std::make_shared<
      Factory<
        std_msgs::Int64,
        std_msgs::msg::Int64
      >
    >();
  }
  if (
    (ros1_type_name == "std_msgs/Int8" ||
     ros1_type_name == "") &&
    ros2_type_name == "std_msgs/Int8")
  {
    return std::make_shared<
      Factory<
        std_msgs::Int8,
        std_msgs::msg::Int8
      >
    >();
  }
  if (
    (ros1_type_name == "std_msgs/MultiArrayDimension" ||
     ros1_type_name == "") &&
    ros2_type_name == "std_msgs/MultiArrayDimension")
  {
    return std::make_shared<
      Factory<
        std_msgs::MultiArrayDimension,
        std_msgs::msg::MultiArrayDimension
      >
    >();
  }
  if (
    (ros1_type_name == "std_msgs/MultiArrayLayout" ||
     ros1_type_name == "") &&
    ros2_type_name == "std_msgs/MultiArrayLayout")
  {
    return std::make_shared<
      Factory<
        std_msgs::MultiArrayLayout,
        std_msgs::msg::MultiArrayLayout
      >
    >();
  }
  if (
    (ros1_type_name == "std_msgs/ByteMultiArray" ||
     ros1_type_name == "") &&
    ros2_type_name == "std_msgs/ByteMultiArray")
  {
    return std::make_shared<
      Factory<
        std_msgs::ByteMultiArray,
        std_msgs::msg::ByteMultiArray
      >
    >();
  }
  if (
    (ros1_type_name == "std_msgs/Float32MultiArray" ||
     ros1_type_name == "") &&
    ros2_type_name == "std_msgs/Float32MultiArray")
  {
    return std::make_shared<
      Factory<
        std_msgs::Float32MultiArray,
        std_msgs::msg::Float32MultiArray
      >
    >();
  }
  if (
    (ros1_type_name == "std_msgs/Float64MultiArray" ||
     ros1_type_name == "") &&
    ros2_type_name == "std_msgs/Float64MultiArray")
  {
    return std::make_shared<
      Factory<
        std_msgs::Float64MultiArray,
        std_msgs::msg::Float64MultiArray
      >
    >();
  }
  if (
    (ros1_type_name == "std_msgs/Int16MultiArray" ||
     ros1_type_name == "") &&
    ros2_type_name == "std_msgs/Int16MultiArray")
  {
    return std::make_shared<
      Factory<
        std_msgs::Int16MultiArray,
        std_msgs::msg::Int16MultiArray
      >
    >();
  }
  if (
    (ros1_type_name == "std_msgs/Int32MultiArray" ||
     ros1_type_name == "") &&
    ros2_type_name == "std_msgs/Int32MultiArray")
  {
    return std::make_shared<
      Factory<
        std_msgs::Int32MultiArray,
        std_msgs::msg::Int32MultiArray
      >
    >();
  }
  if (
    (ros1_type_name == "std_msgs/Int64MultiArray" ||
     ros1_type_name == "") &&
    ros2_type_name == "std_msgs/Int64MultiArray")
  {
    return std::make_shared<
      Factory<
        std_msgs::Int64MultiArray,
        std_msgs::msg::Int64MultiArray
      >
    >();
  }
  if (
    (ros1_type_name == "std_msgs/Int8MultiArray" ||
     ros1_type_name == "") &&
    ros2_type_name == "std_msgs/Int8MultiArray")
  {
    return std::make_shared<
      Factory<
        std_msgs::Int8MultiArray,
        std_msgs::msg::Int8MultiArray
      >
    >();
  }
  if (
    (ros1_type_name == "std_msgs/String" ||
     ros1_type_name == "") &&
    ros2_type_name == "std_msgs/String")
  {
    return std::make_shared<
      Factory<
        std_msgs::String,
        std_msgs::msg::String
      >
    >();
  }
  if (
    (ros1_type_name == "std_msgs/UInt16" ||
     ros1_type_name == "") &&
    ros2_type_name == "std_msgs/UInt16")
  {
    return std::make_shared<
      Factory<
        std_msgs::UInt16,
        std_msgs::msg::UInt16
      >
    >();
  }
  if (
    (ros1_type_name == "std_msgs/UInt16MultiArray" ||
     ros1_type_name == "") &&
    ros2_type_name == "std_msgs/UInt16MultiArray")
  {
    return std::make_shared<
      Factory<
        std_msgs::UInt16MultiArray,
        std_msgs::msg::UInt16MultiArray
      >
    >();
  }
  if (
    (ros1_type_name == "std_msgs/UInt32" ||
     ros1_type_name == "") &&
    ros2_type_name == "std_msgs/UInt32")
  {
    return std::make_shared<
      Factory<
        std_msgs::UInt32,
        std_msgs::msg::UInt32
      >
    >();
  }
  if (
    (ros1_type_name == "std_msgs/UInt32MultiArray" ||
     ros1_type_name == "") &&
    ros2_type_name == "std_msgs/UInt32MultiArray")
  {
    return std::make_shared<
      Factory<
        std_msgs::UInt32MultiArray,
        std_msgs::msg::UInt32MultiArray
      >
    >();
  }
  if (
    (ros1_type_name == "std_msgs/UInt64" ||
     ros1_type_name == "") &&
    ros2_type_name == "std_msgs/UInt64")
  {
    return std::make_shared<
      Factory<
        std_msgs::UInt64,
        std_msgs::msg::UInt64
      >
    >();
  }
  if (
    (ros1_type_name == "std_msgs/UInt64MultiArray" ||
     ros1_type_name == "") &&
    ros2_type_name == "std_msgs/UInt64MultiArray")
  {
    return std::make_shared<
      Factory<
        std_msgs::UInt64MultiArray,
        std_msgs::msg::UInt64MultiArray
      >
    >();
  }
  if (
    (ros1_type_name == "std_msgs/UInt8" ||
     ros1_type_name == "") &&
    ros2_type_name == "std_msgs/UInt8")
  {
    return std::make_shared<
      Factory<
        std_msgs::UInt8,
        std_msgs::msg::UInt8
      >
    >();
  }
  if (
    (ros1_type_name == "std_msgs/UInt8MultiArray" ||
     ros1_type_name == "") &&
    ros2_type_name == "std_msgs/UInt8MultiArray")
  {
    return std::make_shared<
      Factory<
        std_msgs::UInt8MultiArray,
        std_msgs::msg::UInt8MultiArray
      >
    >();
  }
  throw std::runtime_error("No template specialization for the pair");
}


// conversion functions for builtin interfaces

template<typename ROS1_T, typename ROS2_T>
void
convert_1_to_2(
  const ROS1_T & ros1_msg,
  ROS2_T & ros2_msg);

template<typename ROS1_T, typename ROS2_T>
void
convert_2_to_1(
  const ROS2_T & ros2_msg,
  ROS1_T & ros1_msg);


template<>
void
convert_1_to_2(
  const ros::Duration & ros1_msg,
  builtin_interfaces::msg::Duration & ros2_msg)
{
  ros2_msg.sec = ros1_msg.sec;
  ros2_msg.nanosec = ros1_msg.nsec;
}

template<>
void
convert_2_to_1(
  const builtin_interfaces::msg::Duration & ros2_msg,
  ros::Duration & ros1_msg)
{
  ros1_msg.sec = ros2_msg.sec;
  ros1_msg.nsec = ros2_msg.nanosec;
}


template<>
void
convert_1_to_2(
  const ros::Time & ros1_msg,
  builtin_interfaces::msg::Time & ros2_msg)
{
  ros2_msg.sec = ros1_msg.sec;
  ros2_msg.nanosec = ros1_msg.nsec;
}

template<>
void
convert_2_to_1(
  const builtin_interfaces::msg::Time & ros2_msg,
  ros::Time & ros1_msg)
{
  ros1_msg.sec = ros2_msg.sec;
  ros1_msg.nsec = ros2_msg.nanosec;
}


// conversion functions for available interfaces

template<>
void
Factory<
  geometry_msgs::Point,
  geometry_msgs::msg::Point
>::convert_1_to_2(
  const geometry_msgs::Point & ros1_msg,
  geometry_msgs::msg::Point & ros2_msg)
{
  ros2_msg.x = ros1_msg.x;
  ros2_msg.y = ros1_msg.y;
  ros2_msg.z = ros1_msg.z;
}

template<>
void
Factory<
  geometry_msgs::Point,
  geometry_msgs::msg::Point
>::convert_2_to_1(
  const geometry_msgs::msg::Point & ros2_msg,
  geometry_msgs::Point & ros1_msg)
{
  ros1_msg.x = ros2_msg.x;
  ros1_msg.y = ros2_msg.y;
  ros1_msg.z = ros2_msg.z;
}


template<>
void
Factory<
  geometry_msgs::Point32,
  geometry_msgs::msg::Point32
>::convert_1_to_2(
  const geometry_msgs::Point32 & ros1_msg,
  geometry_msgs::msg::Point32 & ros2_msg)
{
  ros2_msg.x = ros1_msg.x;
  ros2_msg.y = ros1_msg.y;
  ros2_msg.z = ros1_msg.z;
}

template<>
void
Factory<
  geometry_msgs::Point32,
  geometry_msgs::msg::Point32
>::convert_2_to_1(
  const geometry_msgs::msg::Point32 & ros2_msg,
  geometry_msgs::Point32 & ros1_msg)
{
  ros1_msg.x = ros2_msg.x;
  ros1_msg.y = ros2_msg.y;
  ros1_msg.z = ros2_msg.z;
}


template<>
void
Factory<
  geometry_msgs::Polygon,
  geometry_msgs::msg::Polygon
>::convert_1_to_2(
  const geometry_msgs::Polygon & ros1_msg,
  geometry_msgs::msg::Polygon & ros2_msg)
{
  ros2_msg.points.resize(ros1_msg.points.size());
  {
    auto ros1_it = ros1_msg.points.begin();
    auto ros2_it = ros2_msg.points.begin();
    for (
      ;
      ros1_it != ros1_msg.points.end() &&
      ros2_it != ros2_msg.points.end();
      ++ros1_it, ++ros2_it
    )
    {
      Factory<
        geometry_msgs::Point32,
        geometry_msgs::msg::Point32
      >::convert_1_to_2(
        *ros1_it, *ros2_it);
    }
  }
}

template<>
void
Factory<
  geometry_msgs::Polygon,
  geometry_msgs::msg::Polygon
>::convert_2_to_1(
  const geometry_msgs::msg::Polygon & ros2_msg,
  geometry_msgs::Polygon & ros1_msg)
{
  ros1_msg.points.resize(ros2_msg.points.size());
  {
    auto ros2_it = ros2_msg.points.begin();
    auto ros1_it = ros1_msg.points.begin();
    for (
      ;
      ros2_it != ros2_msg.points.end() &&
      ros1_it != ros1_msg.points.end();
      ++ros2_it, ++ros1_it
    )
    {
      Factory<
        geometry_msgs::Point32,
        geometry_msgs::msg::Point32
      >::convert_2_to_1(
        *ros2_it, *ros1_it);
    }
  }
}


template<>
void
Factory<
  geometry_msgs::Pose2D,
  geometry_msgs::msg::Pose2D
>::convert_1_to_2(
  const geometry_msgs::Pose2D & ros1_msg,
  geometry_msgs::msg::Pose2D & ros2_msg)
{
  ros2_msg.x = ros1_msg.x;
  ros2_msg.y = ros1_msg.y;
  ros2_msg.theta = ros1_msg.theta;
}

template<>
void
Factory<
  geometry_msgs::Pose2D,
  geometry_msgs::msg::Pose2D
>::convert_2_to_1(
  const geometry_msgs::msg::Pose2D & ros2_msg,
  geometry_msgs::Pose2D & ros1_msg)
{
  ros1_msg.x = ros2_msg.x;
  ros1_msg.y = ros2_msg.y;
  ros1_msg.theta = ros2_msg.theta;
}


template<>
void
Factory<
  geometry_msgs::Quaternion,
  geometry_msgs::msg::Quaternion
>::convert_1_to_2(
  const geometry_msgs::Quaternion & ros1_msg,
  geometry_msgs::msg::Quaternion & ros2_msg)
{
  ros2_msg.x = ros1_msg.x;
  ros2_msg.y = ros1_msg.y;
  ros2_msg.z = ros1_msg.z;
  ros2_msg.w = ros1_msg.w;
}

template<>
void
Factory<
  geometry_msgs::Quaternion,
  geometry_msgs::msg::Quaternion
>::convert_2_to_1(
  const geometry_msgs::msg::Quaternion & ros2_msg,
  geometry_msgs::Quaternion & ros1_msg)
{
  ros1_msg.x = ros2_msg.x;
  ros1_msg.y = ros2_msg.y;
  ros1_msg.z = ros2_msg.z;
  ros1_msg.w = ros2_msg.w;
}


template<>
void
Factory<
  geometry_msgs::Pose,
  geometry_msgs::msg::Pose
>::convert_1_to_2(
  const geometry_msgs::Pose & ros1_msg,
  geometry_msgs::msg::Pose & ros2_msg)
{
  Factory<
    geometry_msgs::Point,
    geometry_msgs::msg::Point
  >::convert_1_to_2(
    ros1_msg.position, ros2_msg.position);
  Factory<
    geometry_msgs::Quaternion,
    geometry_msgs::msg::Quaternion
  >::convert_1_to_2(
    ros1_msg.orientation, ros2_msg.orientation);
}

template<>
void
Factory<
  geometry_msgs::Pose,
  geometry_msgs::msg::Pose
>::convert_2_to_1(
  const geometry_msgs::msg::Pose & ros2_msg,
  geometry_msgs::Pose & ros1_msg)
{
  Factory<
    geometry_msgs::Point,
    geometry_msgs::msg::Point
  >::convert_2_to_1(
    ros2_msg.position, ros1_msg.position);
  Factory<
    geometry_msgs::Quaternion,
    geometry_msgs::msg::Quaternion
  >::convert_2_to_1(
    ros2_msg.orientation, ros1_msg.orientation);
}


template<>
void
Factory<
  geometry_msgs::PoseWithCovariance,
  geometry_msgs::msg::PoseWithCovariance
>::convert_1_to_2(
  const geometry_msgs::PoseWithCovariance & ros1_msg,
  geometry_msgs::msg::PoseWithCovariance & ros2_msg)
{
  Factory<
    geometry_msgs::Pose,
    geometry_msgs::msg::Pose
  >::convert_1_to_2(
    ros1_msg.pose, ros2_msg.pose);
  std::copy(
    ros1_msg.covariance.begin(),
    ros1_msg.covariance.end(),
    ros2_msg.covariance.begin());
}

template<>
void
Factory<
  geometry_msgs::PoseWithCovariance,
  geometry_msgs::msg::PoseWithCovariance
>::convert_2_to_1(
  const geometry_msgs::msg::PoseWithCovariance & ros2_msg,
  geometry_msgs::PoseWithCovariance & ros1_msg)
{
  Factory<
    geometry_msgs::Pose,
    geometry_msgs::msg::Pose
  >::convert_2_to_1(
    ros2_msg.pose, ros1_msg.pose);
  std::copy(
    ros2_msg.covariance.begin(),
    ros2_msg.covariance.end(),
    ros1_msg.covariance.begin());
}


template<>
void
Factory<
  geometry_msgs::Vector3,
  geometry_msgs::msg::Vector3
>::convert_1_to_2(
  const geometry_msgs::Vector3 & ros1_msg,
  geometry_msgs::msg::Vector3 & ros2_msg)
{
  ros2_msg.x = ros1_msg.x;
  ros2_msg.y = ros1_msg.y;
  ros2_msg.z = ros1_msg.z;
}

template<>
void
Factory<
  geometry_msgs::Vector3,
  geometry_msgs::msg::Vector3
>::convert_2_to_1(
  const geometry_msgs::msg::Vector3 & ros2_msg,
  geometry_msgs::Vector3 & ros1_msg)
{
  ros1_msg.x = ros2_msg.x;
  ros1_msg.y = ros2_msg.y;
  ros1_msg.z = ros2_msg.z;
}


template<>
void
Factory<
  geometry_msgs::Transform,
  geometry_msgs::msg::Transform
>::convert_1_to_2(
  const geometry_msgs::Transform & ros1_msg,
  geometry_msgs::msg::Transform & ros2_msg)
{
  Factory<
    geometry_msgs::Vector3,
    geometry_msgs::msg::Vector3
  >::convert_1_to_2(
    ros1_msg.translation, ros2_msg.translation);
  Factory<
    geometry_msgs::Quaternion,
    geometry_msgs::msg::Quaternion
  >::convert_1_to_2(
    ros1_msg.rotation, ros2_msg.rotation);
}

template<>
void
Factory<
  geometry_msgs::Transform,
  geometry_msgs::msg::Transform
>::convert_2_to_1(
  const geometry_msgs::msg::Transform & ros2_msg,
  geometry_msgs::Transform & ros1_msg)
{
  Factory<
    geometry_msgs::Vector3,
    geometry_msgs::msg::Vector3
  >::convert_2_to_1(
    ros2_msg.translation, ros1_msg.translation);
  Factory<
    geometry_msgs::Quaternion,
    geometry_msgs::msg::Quaternion
  >::convert_2_to_1(
    ros2_msg.rotation, ros1_msg.rotation);
}


template<>
void
Factory<
  geometry_msgs::Twist,
  geometry_msgs::msg::Twist
>::convert_1_to_2(
  const geometry_msgs::Twist & ros1_msg,
  geometry_msgs::msg::Twist & ros2_msg)
{
  Factory<
    geometry_msgs::Vector3,
    geometry_msgs::msg::Vector3
  >::convert_1_to_2(
    ros1_msg.linear, ros2_msg.linear);
  Factory<
    geometry_msgs::Vector3,
    geometry_msgs::msg::Vector3
  >::convert_1_to_2(
    ros1_msg.angular, ros2_msg.angular);
}

template<>
void
Factory<
  geometry_msgs::Twist,
  geometry_msgs::msg::Twist
>::convert_2_to_1(
  const geometry_msgs::msg::Twist & ros2_msg,
  geometry_msgs::Twist & ros1_msg)
{
  Factory<
    geometry_msgs::Vector3,
    geometry_msgs::msg::Vector3
  >::convert_2_to_1(
    ros2_msg.linear, ros1_msg.linear);
  Factory<
    geometry_msgs::Vector3,
    geometry_msgs::msg::Vector3
  >::convert_2_to_1(
    ros2_msg.angular, ros1_msg.angular);
}


template<>
void
Factory<
  geometry_msgs::TwistWithCovariance,
  geometry_msgs::msg::TwistWithCovariance
>::convert_1_to_2(
  const geometry_msgs::TwistWithCovariance & ros1_msg,
  geometry_msgs::msg::TwistWithCovariance & ros2_msg)
{
  Factory<
    geometry_msgs::Twist,
    geometry_msgs::msg::Twist
  >::convert_1_to_2(
    ros1_msg.twist, ros2_msg.twist);
  std::copy(
    ros1_msg.covariance.begin(),
    ros1_msg.covariance.end(),
    ros2_msg.covariance.begin());
}

template<>
void
Factory<
  geometry_msgs::TwistWithCovariance,
  geometry_msgs::msg::TwistWithCovariance
>::convert_2_to_1(
  const geometry_msgs::msg::TwistWithCovariance & ros2_msg,
  geometry_msgs::TwistWithCovariance & ros1_msg)
{
  Factory<
    geometry_msgs::Twist,
    geometry_msgs::msg::Twist
  >::convert_2_to_1(
    ros2_msg.twist, ros1_msg.twist);
  std::copy(
    ros2_msg.covariance.begin(),
    ros2_msg.covariance.end(),
    ros1_msg.covariance.begin());
}


template<>
void
Factory<
  geometry_msgs::Wrench,
  geometry_msgs::msg::Wrench
>::convert_1_to_2(
  const geometry_msgs::Wrench & ros1_msg,
  geometry_msgs::msg::Wrench & ros2_msg)
{
  Factory<
    geometry_msgs::Vector3,
    geometry_msgs::msg::Vector3
  >::convert_1_to_2(
    ros1_msg.force, ros2_msg.force);
  Factory<
    geometry_msgs::Vector3,
    geometry_msgs::msg::Vector3
  >::convert_1_to_2(
    ros1_msg.torque, ros2_msg.torque);
}

template<>
void
Factory<
  geometry_msgs::Wrench,
  geometry_msgs::msg::Wrench
>::convert_2_to_1(
  const geometry_msgs::msg::Wrench & ros2_msg,
  geometry_msgs::Wrench & ros1_msg)
{
  Factory<
    geometry_msgs::Vector3,
    geometry_msgs::msg::Vector3
  >::convert_2_to_1(
    ros2_msg.force, ros1_msg.force);
  Factory<
    geometry_msgs::Vector3,
    geometry_msgs::msg::Vector3
  >::convert_2_to_1(
    ros2_msg.torque, ros1_msg.torque);
}


template<>
void
Factory<
  nav_msgs::MapMetaData,
  nav_msgs::msg::MapMetaData
>::convert_1_to_2(
  const nav_msgs::MapMetaData & ros1_msg,
  nav_msgs::msg::MapMetaData & ros2_msg)
{
  ros1_bridge::convert_1_to_2(ros1_msg.map_load_time, ros2_msg.map_load_time);
  ros2_msg.resolution = ros1_msg.resolution;
  ros2_msg.width = ros1_msg.width;
  ros2_msg.height = ros1_msg.height;
  Factory<
    geometry_msgs::Pose,
    geometry_msgs::msg::Pose
  >::convert_1_to_2(
    ros1_msg.origin, ros2_msg.origin);
}

template<>
void
Factory<
  nav_msgs::MapMetaData,
  nav_msgs::msg::MapMetaData
>::convert_2_to_1(
  const nav_msgs::msg::MapMetaData & ros2_msg,
  nav_msgs::MapMetaData & ros1_msg)
{
  ros1_bridge::convert_2_to_1(ros2_msg.map_load_time, ros1_msg.map_load_time);
  ros1_msg.resolution = ros2_msg.resolution;
  ros1_msg.width = ros2_msg.width;
  ros1_msg.height = ros2_msg.height;
  Factory<
    geometry_msgs::Pose,
    geometry_msgs::msg::Pose
  >::convert_2_to_1(
    ros2_msg.origin, ros1_msg.origin);
}


template<>
void
Factory<
  sensor_msgs::ChannelFloat32,
  sensor_msgs::msg::ChannelFloat32
>::convert_1_to_2(
  const sensor_msgs::ChannelFloat32 & ros1_msg,
  sensor_msgs::msg::ChannelFloat32 & ros2_msg)
{
  ros2_msg.name = ros1_msg.name;
  ros2_msg.values.resize(ros1_msg.values.size());
  std::copy(
    ros1_msg.values.begin(),
    ros1_msg.values.end(),
    ros2_msg.values.begin());
}

template<>
void
Factory<
  sensor_msgs::ChannelFloat32,
  sensor_msgs::msg::ChannelFloat32
>::convert_2_to_1(
  const sensor_msgs::msg::ChannelFloat32 & ros2_msg,
  sensor_msgs::ChannelFloat32 & ros1_msg)
{
  ros1_msg.name = ros2_msg.name;
  ros1_msg.values.resize(ros2_msg.values.size());
  std::copy(
    ros2_msg.values.begin(),
    ros2_msg.values.end(),
    ros1_msg.values.begin());
}


template<>
void
Factory<
  sensor_msgs::JoyFeedback,
  sensor_msgs::msg::JoyFeedback
>::convert_1_to_2(
  const sensor_msgs::JoyFeedback & ros1_msg,
  sensor_msgs::msg::JoyFeedback & ros2_msg)
{
  ros2_msg.type = ros1_msg.type;
  ros2_msg.id = ros1_msg.id;
  ros2_msg.intensity = ros1_msg.intensity;
}

template<>
void
Factory<
  sensor_msgs::JoyFeedback,
  sensor_msgs::msg::JoyFeedback
>::convert_2_to_1(
  const sensor_msgs::msg::JoyFeedback & ros2_msg,
  sensor_msgs::JoyFeedback & ros1_msg)
{
  ros1_msg.type = ros2_msg.type;
  ros1_msg.id = ros2_msg.id;
  ros1_msg.intensity = ros2_msg.intensity;
}


template<>
void
Factory<
  sensor_msgs::JoyFeedbackArray,
  sensor_msgs::msg::JoyFeedbackArray
>::convert_1_to_2(
  const sensor_msgs::JoyFeedbackArray & ros1_msg,
  sensor_msgs::msg::JoyFeedbackArray & ros2_msg)
{
  ros2_msg.array.resize(ros1_msg.array.size());
  {
    auto ros1_it = ros1_msg.array.begin();
    auto ros2_it = ros2_msg.array.begin();
    for (
      ;
      ros1_it != ros1_msg.array.end() &&
      ros2_it != ros2_msg.array.end();
      ++ros1_it, ++ros2_it
    )
    {
      Factory<
        sensor_msgs::JoyFeedback,
        sensor_msgs::msg::JoyFeedback
      >::convert_1_to_2(
        *ros1_it, *ros2_it);
    }
  }
}

template<>
void
Factory<
  sensor_msgs::JoyFeedbackArray,
  sensor_msgs::msg::JoyFeedbackArray
>::convert_2_to_1(
  const sensor_msgs::msg::JoyFeedbackArray & ros2_msg,
  sensor_msgs::JoyFeedbackArray & ros1_msg)
{
  ros1_msg.array.resize(ros2_msg.array.size());
  {
    auto ros2_it = ros2_msg.array.begin();
    auto ros1_it = ros1_msg.array.begin();
    for (
      ;
      ros2_it != ros2_msg.array.end() &&
      ros1_it != ros1_msg.array.end();
      ++ros2_it, ++ros1_it
    )
    {
      Factory<
        sensor_msgs::JoyFeedback,
        sensor_msgs::msg::JoyFeedback
      >::convert_2_to_1(
        *ros2_it, *ros1_it);
    }
  }
}


template<>
void
Factory<
  sensor_msgs::LaserEcho,
  sensor_msgs::msg::LaserEcho
>::convert_1_to_2(
  const sensor_msgs::LaserEcho & ros1_msg,
  sensor_msgs::msg::LaserEcho & ros2_msg)
{
  ros2_msg.echoes.resize(ros1_msg.echoes.size());
  std::copy(
    ros1_msg.echoes.begin(),
    ros1_msg.echoes.end(),
    ros2_msg.echoes.begin());
}

template<>
void
Factory<
  sensor_msgs::LaserEcho,
  sensor_msgs::msg::LaserEcho
>::convert_2_to_1(
  const sensor_msgs::msg::LaserEcho & ros2_msg,
  sensor_msgs::LaserEcho & ros1_msg)
{
  ros1_msg.echoes.resize(ros2_msg.echoes.size());
  std::copy(
    ros2_msg.echoes.begin(),
    ros2_msg.echoes.end(),
    ros1_msg.echoes.begin());
}


template<>
void
Factory<
  sensor_msgs::NavSatStatus,
  sensor_msgs::msg::NavSatStatus
>::convert_1_to_2(
  const sensor_msgs::NavSatStatus & ros1_msg,
  sensor_msgs::msg::NavSatStatus & ros2_msg)
{
  ros2_msg.status = ros1_msg.status;
  ros2_msg.service = ros1_msg.service;
}

template<>
void
Factory<
  sensor_msgs::NavSatStatus,
  sensor_msgs::msg::NavSatStatus
>::convert_2_to_1(
  const sensor_msgs::msg::NavSatStatus & ros2_msg,
  sensor_msgs::NavSatStatus & ros1_msg)
{
  ros1_msg.status = ros2_msg.status;
  ros1_msg.service = ros2_msg.service;
}


template<>
void
Factory<
  sensor_msgs::PointField,
  sensor_msgs::msg::PointField
>::convert_1_to_2(
  const sensor_msgs::PointField & ros1_msg,
  sensor_msgs::msg::PointField & ros2_msg)
{
  ros2_msg.name = ros1_msg.name;
  ros2_msg.offset = ros1_msg.offset;
  ros2_msg.datatype = ros1_msg.datatype;
  ros2_msg.count = ros1_msg.count;
}

template<>
void
Factory<
  sensor_msgs::PointField,
  sensor_msgs::msg::PointField
>::convert_2_to_1(
  const sensor_msgs::msg::PointField & ros2_msg,
  sensor_msgs::PointField & ros1_msg)
{
  ros1_msg.name = ros2_msg.name;
  ros1_msg.offset = ros2_msg.offset;
  ros1_msg.datatype = ros2_msg.datatype;
  ros1_msg.count = ros2_msg.count;
}


template<>
void
Factory<
  sensor_msgs::RegionOfInterest,
  sensor_msgs::msg::RegionOfInterest
>::convert_1_to_2(
  const sensor_msgs::RegionOfInterest & ros1_msg,
  sensor_msgs::msg::RegionOfInterest & ros2_msg)
{
  ros2_msg.x_offset = ros1_msg.x_offset;
  ros2_msg.y_offset = ros1_msg.y_offset;
  ros2_msg.height = ros1_msg.height;
  ros2_msg.width = ros1_msg.width;
  ros2_msg.do_rectify = ros1_msg.do_rectify;
}

template<>
void
Factory<
  sensor_msgs::RegionOfInterest,
  sensor_msgs::msg::RegionOfInterest
>::convert_2_to_1(
  const sensor_msgs::msg::RegionOfInterest & ros2_msg,
  sensor_msgs::RegionOfInterest & ros1_msg)
{
  ros1_msg.x_offset = ros2_msg.x_offset;
  ros1_msg.y_offset = ros2_msg.y_offset;
  ros1_msg.height = ros2_msg.height;
  ros1_msg.width = ros2_msg.width;
  ros1_msg.do_rectify = ros2_msg.do_rectify;
}


template<>
void
Factory<
  std_msgs::Bool,
  std_msgs::msg::Bool
>::convert_1_to_2(
  const std_msgs::Bool & ros1_msg,
  std_msgs::msg::Bool & ros2_msg)
{
  ros2_msg.data = ros1_msg.data;
}

template<>
void
Factory<
  std_msgs::Bool,
  std_msgs::msg::Bool
>::convert_2_to_1(
  const std_msgs::msg::Bool & ros2_msg,
  std_msgs::Bool & ros1_msg)
{
  ros1_msg.data = ros2_msg.data;
}


template<>
void
Factory<
  std_msgs::Byte,
  std_msgs::msg::Byte
>::convert_1_to_2(
  const std_msgs::Byte & ros1_msg,
  std_msgs::msg::Byte & ros2_msg)
{
  ros2_msg.data = ros1_msg.data;
}

template<>
void
Factory<
  std_msgs::Byte,
  std_msgs::msg::Byte
>::convert_2_to_1(
  const std_msgs::msg::Byte & ros2_msg,
  std_msgs::Byte & ros1_msg)
{
  ros1_msg.data = ros2_msg.data;
}


template<>
void
Factory<
  std_msgs::Char,
  std_msgs::msg::Char
>::convert_1_to_2(
  const std_msgs::Char & ros1_msg,
  std_msgs::msg::Char & ros2_msg)
{
  ros2_msg.data = ros1_msg.data;
}

template<>
void
Factory<
  std_msgs::Char,
  std_msgs::msg::Char
>::convert_2_to_1(
  const std_msgs::msg::Char & ros2_msg,
  std_msgs::Char & ros1_msg)
{
  ros1_msg.data = ros2_msg.data;
}


template<>
void
Factory<
  std_msgs::ColorRGBA,
  std_msgs::msg::ColorRGBA
>::convert_1_to_2(
  const std_msgs::ColorRGBA & ros1_msg,
  std_msgs::msg::ColorRGBA & ros2_msg)
{
  ros2_msg.r = ros1_msg.r;
  ros2_msg.g = ros1_msg.g;
  ros2_msg.b = ros1_msg.b;
  ros2_msg.a = ros1_msg.a;
}

template<>
void
Factory<
  std_msgs::ColorRGBA,
  std_msgs::msg::ColorRGBA
>::convert_2_to_1(
  const std_msgs::msg::ColorRGBA & ros2_msg,
  std_msgs::ColorRGBA & ros1_msg)
{
  ros1_msg.r = ros2_msg.r;
  ros1_msg.g = ros2_msg.g;
  ros1_msg.b = ros2_msg.b;
  ros1_msg.a = ros2_msg.a;
}


template<>
void
Factory<
  std_msgs::Empty,
  std_msgs::msg::Empty
>::convert_1_to_2(
  const std_msgs::Empty & ros1_msg,
  std_msgs::msg::Empty & ros2_msg)
{
  (void)ros1_msg;
  (void)ros2_msg;
}

template<>
void
Factory<
  std_msgs::Empty,
  std_msgs::msg::Empty
>::convert_2_to_1(
  const std_msgs::msg::Empty & ros2_msg,
  std_msgs::Empty & ros1_msg)
{
  (void)ros2_msg;
  (void)ros1_msg;
}


template<>
void
Factory<
  std_msgs::Float32,
  std_msgs::msg::Float32
>::convert_1_to_2(
  const std_msgs::Float32 & ros1_msg,
  std_msgs::msg::Float32 & ros2_msg)
{
  ros2_msg.data = ros1_msg.data;
}

template<>
void
Factory<
  std_msgs::Float32,
  std_msgs::msg::Float32
>::convert_2_to_1(
  const std_msgs::msg::Float32 & ros2_msg,
  std_msgs::Float32 & ros1_msg)
{
  ros1_msg.data = ros2_msg.data;
}


template<>
void
Factory<
  std_msgs::Float64,
  std_msgs::msg::Float64
>::convert_1_to_2(
  const std_msgs::Float64 & ros1_msg,
  std_msgs::msg::Float64 & ros2_msg)
{
  ros2_msg.data = ros1_msg.data;
}

template<>
void
Factory<
  std_msgs::Float64,
  std_msgs::msg::Float64
>::convert_2_to_1(
  const std_msgs::msg::Float64 & ros2_msg,
  std_msgs::Float64 & ros1_msg)
{
  ros1_msg.data = ros2_msg.data;
}


template<>
void
Factory<
  std_msgs::Header,
  std_msgs::msg::Header
>::convert_1_to_2(
  const std_msgs::Header & ros1_msg,
  std_msgs::msg::Header & ros2_msg)
{
  ros1_bridge::convert_1_to_2(ros1_msg.stamp, ros2_msg.stamp);
  ros2_msg.frame_id = ros1_msg.frame_id;
}

template<>
void
Factory<
  std_msgs::Header,
  std_msgs::msg::Header
>::convert_2_to_1(
  const std_msgs::msg::Header & ros2_msg,
  std_msgs::Header & ros1_msg)
{
  ros1_bridge::convert_2_to_1(ros2_msg.stamp, ros1_msg.stamp);
  ros1_msg.frame_id = ros2_msg.frame_id;
}


template<>
void
Factory<
  geometry_msgs::PointStamped,
  geometry_msgs::msg::PointStamped
>::convert_1_to_2(
  const geometry_msgs::PointStamped & ros1_msg,
  geometry_msgs::msg::PointStamped & ros2_msg)
{
  Factory<
    std_msgs::Header,
    std_msgs::msg::Header
  >::convert_1_to_2(
    ros1_msg.header, ros2_msg.header);
  Factory<
    geometry_msgs::Point,
    geometry_msgs::msg::Point
  >::convert_1_to_2(
    ros1_msg.point, ros2_msg.point);
}

template<>
void
Factory<
  geometry_msgs::PointStamped,
  geometry_msgs::msg::PointStamped
>::convert_2_to_1(
  const geometry_msgs::msg::PointStamped & ros2_msg,
  geometry_msgs::PointStamped & ros1_msg)
{
  Factory<
    std_msgs::Header,
    std_msgs::msg::Header
  >::convert_2_to_1(
    ros2_msg.header, ros1_msg.header);
  Factory<
    geometry_msgs::Point,
    geometry_msgs::msg::Point
  >::convert_2_to_1(
    ros2_msg.point, ros1_msg.point);
}


template<>
void
Factory<
  geometry_msgs::PolygonStamped,
  geometry_msgs::msg::PolygonStamped
>::convert_1_to_2(
  const geometry_msgs::PolygonStamped & ros1_msg,
  geometry_msgs::msg::PolygonStamped & ros2_msg)
{
  Factory<
    std_msgs::Header,
    std_msgs::msg::Header
  >::convert_1_to_2(
    ros1_msg.header, ros2_msg.header);
  Factory<
    geometry_msgs::Polygon,
    geometry_msgs::msg::Polygon
  >::convert_1_to_2(
    ros1_msg.polygon, ros2_msg.polygon);
}

template<>
void
Factory<
  geometry_msgs::PolygonStamped,
  geometry_msgs::msg::PolygonStamped
>::convert_2_to_1(
  const geometry_msgs::msg::PolygonStamped & ros2_msg,
  geometry_msgs::PolygonStamped & ros1_msg)
{
  Factory<
    std_msgs::Header,
    std_msgs::msg::Header
  >::convert_2_to_1(
    ros2_msg.header, ros1_msg.header);
  Factory<
    geometry_msgs::Polygon,
    geometry_msgs::msg::Polygon
  >::convert_2_to_1(
    ros2_msg.polygon, ros1_msg.polygon);
}


template<>
void
Factory<
  geometry_msgs::PoseArray,
  geometry_msgs::msg::PoseArray
>::convert_1_to_2(
  const geometry_msgs::PoseArray & ros1_msg,
  geometry_msgs::msg::PoseArray & ros2_msg)
{
  Factory<
    std_msgs::Header,
    std_msgs::msg::Header
  >::convert_1_to_2(
    ros1_msg.header, ros2_msg.header);
  ros2_msg.poses.resize(ros1_msg.poses.size());
  {
    auto ros1_it = ros1_msg.poses.begin();
    auto ros2_it = ros2_msg.poses.begin();
    for (
      ;
      ros1_it != ros1_msg.poses.end() &&
      ros2_it != ros2_msg.poses.end();
      ++ros1_it, ++ros2_it
    )
    {
      Factory<
        geometry_msgs::Pose,
        geometry_msgs::msg::Pose
      >::convert_1_to_2(
        *ros1_it, *ros2_it);
    }
  }
}

template<>
void
Factory<
  geometry_msgs::PoseArray,
  geometry_msgs::msg::PoseArray
>::convert_2_to_1(
  const geometry_msgs::msg::PoseArray & ros2_msg,
  geometry_msgs::PoseArray & ros1_msg)
{
  Factory<
    std_msgs::Header,
    std_msgs::msg::Header
  >::convert_2_to_1(
    ros2_msg.header, ros1_msg.header);
  ros1_msg.poses.resize(ros2_msg.poses.size());
  {
    auto ros2_it = ros2_msg.poses.begin();
    auto ros1_it = ros1_msg.poses.begin();
    for (
      ;
      ros2_it != ros2_msg.poses.end() &&
      ros1_it != ros1_msg.poses.end();
      ++ros2_it, ++ros1_it
    )
    {
      Factory<
        geometry_msgs::Pose,
        geometry_msgs::msg::Pose
      >::convert_2_to_1(
        *ros2_it, *ros1_it);
    }
  }
}


template<>
void
Factory<
  geometry_msgs::PoseStamped,
  geometry_msgs::msg::PoseStamped
>::convert_1_to_2(
  const geometry_msgs::PoseStamped & ros1_msg,
  geometry_msgs::msg::PoseStamped & ros2_msg)
{
  Factory<
    std_msgs::Header,
    std_msgs::msg::Header
  >::convert_1_to_2(
    ros1_msg.header, ros2_msg.header);
  Factory<
    geometry_msgs::Pose,
    geometry_msgs::msg::Pose
  >::convert_1_to_2(
    ros1_msg.pose, ros2_msg.pose);
}

template<>
void
Factory<
  geometry_msgs::PoseStamped,
  geometry_msgs::msg::PoseStamped
>::convert_2_to_1(
  const geometry_msgs::msg::PoseStamped & ros2_msg,
  geometry_msgs::PoseStamped & ros1_msg)
{
  Factory<
    std_msgs::Header,
    std_msgs::msg::Header
  >::convert_2_to_1(
    ros2_msg.header, ros1_msg.header);
  Factory<
    geometry_msgs::Pose,
    geometry_msgs::msg::Pose
  >::convert_2_to_1(
    ros2_msg.pose, ros1_msg.pose);
}


template<>
void
Factory<
  geometry_msgs::PoseWithCovarianceStamped,
  geometry_msgs::msg::PoseWithCovarianceStamped
>::convert_1_to_2(
  const geometry_msgs::PoseWithCovarianceStamped & ros1_msg,
  geometry_msgs::msg::PoseWithCovarianceStamped & ros2_msg)
{
  Factory<
    std_msgs::Header,
    std_msgs::msg::Header
  >::convert_1_to_2(
    ros1_msg.header, ros2_msg.header);
  Factory<
    geometry_msgs::PoseWithCovariance,
    geometry_msgs::msg::PoseWithCovariance
  >::convert_1_to_2(
    ros1_msg.pose, ros2_msg.pose);
}

template<>
void
Factory<
  geometry_msgs::PoseWithCovarianceStamped,
  geometry_msgs::msg::PoseWithCovarianceStamped
>::convert_2_to_1(
  const geometry_msgs::msg::PoseWithCovarianceStamped & ros2_msg,
  geometry_msgs::PoseWithCovarianceStamped & ros1_msg)
{
  Factory<
    std_msgs::Header,
    std_msgs::msg::Header
  >::convert_2_to_1(
    ros2_msg.header, ros1_msg.header);
  Factory<
    geometry_msgs::PoseWithCovariance,
    geometry_msgs::msg::PoseWithCovariance
  >::convert_2_to_1(
    ros2_msg.pose, ros1_msg.pose);
}


template<>
void
Factory<
  geometry_msgs::QuaternionStamped,
  geometry_msgs::msg::QuaternionStamped
>::convert_1_to_2(
  const geometry_msgs::QuaternionStamped & ros1_msg,
  geometry_msgs::msg::QuaternionStamped & ros2_msg)
{
  Factory<
    std_msgs::Header,
    std_msgs::msg::Header
  >::convert_1_to_2(
    ros1_msg.header, ros2_msg.header);
  Factory<
    geometry_msgs::Quaternion,
    geometry_msgs::msg::Quaternion
  >::convert_1_to_2(
    ros1_msg.quaternion, ros2_msg.quaternion);
}

template<>
void
Factory<
  geometry_msgs::QuaternionStamped,
  geometry_msgs::msg::QuaternionStamped
>::convert_2_to_1(
  const geometry_msgs::msg::QuaternionStamped & ros2_msg,
  geometry_msgs::QuaternionStamped & ros1_msg)
{
  Factory<
    std_msgs::Header,
    std_msgs::msg::Header
  >::convert_2_to_1(
    ros2_msg.header, ros1_msg.header);
  Factory<
    geometry_msgs::Quaternion,
    geometry_msgs::msg::Quaternion
  >::convert_2_to_1(
    ros2_msg.quaternion, ros1_msg.quaternion);
}


template<>
void
Factory<
  geometry_msgs::TransformStamped,
  geometry_msgs::msg::TransformStamped
>::convert_1_to_2(
  const geometry_msgs::TransformStamped & ros1_msg,
  geometry_msgs::msg::TransformStamped & ros2_msg)
{
  Factory<
    std_msgs::Header,
    std_msgs::msg::Header
  >::convert_1_to_2(
    ros1_msg.header, ros2_msg.header);
  ros2_msg.child_frame_id = ros1_msg.child_frame_id;
  Factory<
    geometry_msgs::Transform,
    geometry_msgs::msg::Transform
  >::convert_1_to_2(
    ros1_msg.transform, ros2_msg.transform);
}

template<>
void
Factory<
  geometry_msgs::TransformStamped,
  geometry_msgs::msg::TransformStamped
>::convert_2_to_1(
  const geometry_msgs::msg::TransformStamped & ros2_msg,
  geometry_msgs::TransformStamped & ros1_msg)
{
  Factory<
    std_msgs::Header,
    std_msgs::msg::Header
  >::convert_2_to_1(
    ros2_msg.header, ros1_msg.header);
  ros1_msg.child_frame_id = ros2_msg.child_frame_id;
  Factory<
    geometry_msgs::Transform,
    geometry_msgs::msg::Transform
  >::convert_2_to_1(
    ros2_msg.transform, ros1_msg.transform);
}


template<>
void
Factory<
  geometry_msgs::TwistStamped,
  geometry_msgs::msg::TwistStamped
>::convert_1_to_2(
  const geometry_msgs::TwistStamped & ros1_msg,
  geometry_msgs::msg::TwistStamped & ros2_msg)
{
  Factory<
    std_msgs::Header,
    std_msgs::msg::Header
  >::convert_1_to_2(
    ros1_msg.header, ros2_msg.header);
  Factory<
    geometry_msgs::Twist,
    geometry_msgs::msg::Twist
  >::convert_1_to_2(
    ros1_msg.twist, ros2_msg.twist);
}

template<>
void
Factory<
  geometry_msgs::TwistStamped,
  geometry_msgs::msg::TwistStamped
>::convert_2_to_1(
  const geometry_msgs::msg::TwistStamped & ros2_msg,
  geometry_msgs::TwistStamped & ros1_msg)
{
  Factory<
    std_msgs::Header,
    std_msgs::msg::Header
  >::convert_2_to_1(
    ros2_msg.header, ros1_msg.header);
  Factory<
    geometry_msgs::Twist,
    geometry_msgs::msg::Twist
  >::convert_2_to_1(
    ros2_msg.twist, ros1_msg.twist);
}


template<>
void
Factory<
  geometry_msgs::TwistWithCovarianceStamped,
  geometry_msgs::msg::TwistWithCovarianceStamped
>::convert_1_to_2(
  const geometry_msgs::TwistWithCovarianceStamped & ros1_msg,
  geometry_msgs::msg::TwistWithCovarianceStamped & ros2_msg)
{
  Factory<
    std_msgs::Header,
    std_msgs::msg::Header
  >::convert_1_to_2(
    ros1_msg.header, ros2_msg.header);
  Factory<
    geometry_msgs::TwistWithCovariance,
    geometry_msgs::msg::TwistWithCovariance
  >::convert_1_to_2(
    ros1_msg.twist, ros2_msg.twist);
}

template<>
void
Factory<
  geometry_msgs::TwistWithCovarianceStamped,
  geometry_msgs::msg::TwistWithCovarianceStamped
>::convert_2_to_1(
  const geometry_msgs::msg::TwistWithCovarianceStamped & ros2_msg,
  geometry_msgs::TwistWithCovarianceStamped & ros1_msg)
{
  Factory<
    std_msgs::Header,
    std_msgs::msg::Header
  >::convert_2_to_1(
    ros2_msg.header, ros1_msg.header);
  Factory<
    geometry_msgs::TwistWithCovariance,
    geometry_msgs::msg::TwistWithCovariance
  >::convert_2_to_1(
    ros2_msg.twist, ros1_msg.twist);
}


template<>
void
Factory<
  geometry_msgs::Vector3Stamped,
  geometry_msgs::msg::Vector3Stamped
>::convert_1_to_2(
  const geometry_msgs::Vector3Stamped & ros1_msg,
  geometry_msgs::msg::Vector3Stamped & ros2_msg)
{
  Factory<
    std_msgs::Header,
    std_msgs::msg::Header
  >::convert_1_to_2(
    ros1_msg.header, ros2_msg.header);
  Factory<
    geometry_msgs::Vector3,
    geometry_msgs::msg::Vector3
  >::convert_1_to_2(
    ros1_msg.vector, ros2_msg.vector);
}

template<>
void
Factory<
  geometry_msgs::Vector3Stamped,
  geometry_msgs::msg::Vector3Stamped
>::convert_2_to_1(
  const geometry_msgs::msg::Vector3Stamped & ros2_msg,
  geometry_msgs::Vector3Stamped & ros1_msg)
{
  Factory<
    std_msgs::Header,
    std_msgs::msg::Header
  >::convert_2_to_1(
    ros2_msg.header, ros1_msg.header);
  Factory<
    geometry_msgs::Vector3,
    geometry_msgs::msg::Vector3
  >::convert_2_to_1(
    ros2_msg.vector, ros1_msg.vector);
}


template<>
void
Factory<
  geometry_msgs::WrenchStamped,
  geometry_msgs::msg::WrenchStamped
>::convert_1_to_2(
  const geometry_msgs::WrenchStamped & ros1_msg,
  geometry_msgs::msg::WrenchStamped & ros2_msg)
{
  Factory<
    std_msgs::Header,
    std_msgs::msg::Header
  >::convert_1_to_2(
    ros1_msg.header, ros2_msg.header);
  Factory<
    geometry_msgs::Wrench,
    geometry_msgs::msg::Wrench
  >::convert_1_to_2(
    ros1_msg.wrench, ros2_msg.wrench);
}

template<>
void
Factory<
  geometry_msgs::WrenchStamped,
  geometry_msgs::msg::WrenchStamped
>::convert_2_to_1(
  const geometry_msgs::msg::WrenchStamped & ros2_msg,
  geometry_msgs::WrenchStamped & ros1_msg)
{
  Factory<
    std_msgs::Header,
    std_msgs::msg::Header
  >::convert_2_to_1(
    ros2_msg.header, ros1_msg.header);
  Factory<
    geometry_msgs::Wrench,
    geometry_msgs::msg::Wrench
  >::convert_2_to_1(
    ros2_msg.wrench, ros1_msg.wrench);
}


template<>
void
Factory<
  nav_msgs::GridCells,
  nav_msgs::msg::GridCells
>::convert_1_to_2(
  const nav_msgs::GridCells & ros1_msg,
  nav_msgs::msg::GridCells & ros2_msg)
{
  Factory<
    std_msgs::Header,
    std_msgs::msg::Header
  >::convert_1_to_2(
    ros1_msg.header, ros2_msg.header);
  ros2_msg.cell_width = ros1_msg.cell_width;
  ros2_msg.cell_height = ros1_msg.cell_height;
  ros2_msg.cells.resize(ros1_msg.cells.size());
  {
    auto ros1_it = ros1_msg.cells.begin();
    auto ros2_it = ros2_msg.cells.begin();
    for (
      ;
      ros1_it != ros1_msg.cells.end() &&
      ros2_it != ros2_msg.cells.end();
      ++ros1_it, ++ros2_it
    )
    {
      Factory<
        geometry_msgs::Point,
        geometry_msgs::msg::Point
      >::convert_1_to_2(
        *ros1_it, *ros2_it);
    }
  }
}

template<>
void
Factory<
  nav_msgs::GridCells,
  nav_msgs::msg::GridCells
>::convert_2_to_1(
  const nav_msgs::msg::GridCells & ros2_msg,
  nav_msgs::GridCells & ros1_msg)
{
  Factory<
    std_msgs::Header,
    std_msgs::msg::Header
  >::convert_2_to_1(
    ros2_msg.header, ros1_msg.header);
  ros1_msg.cell_width = ros2_msg.cell_width;
  ros1_msg.cell_height = ros2_msg.cell_height;
  ros1_msg.cells.resize(ros2_msg.cells.size());
  {
    auto ros2_it = ros2_msg.cells.begin();
    auto ros1_it = ros1_msg.cells.begin();
    for (
      ;
      ros2_it != ros2_msg.cells.end() &&
      ros1_it != ros1_msg.cells.end();
      ++ros2_it, ++ros1_it
    )
    {
      Factory<
        geometry_msgs::Point,
        geometry_msgs::msg::Point
      >::convert_2_to_1(
        *ros2_it, *ros1_it);
    }
  }
}


template<>
void
Factory<
  nav_msgs::OccupancyGrid,
  nav_msgs::msg::OccupancyGrid
>::convert_1_to_2(
  const nav_msgs::OccupancyGrid & ros1_msg,
  nav_msgs::msg::OccupancyGrid & ros2_msg)
{
  Factory<
    std_msgs::Header,
    std_msgs::msg::Header
  >::convert_1_to_2(
    ros1_msg.header, ros2_msg.header);
  Factory<
    nav_msgs::MapMetaData,
    nav_msgs::msg::MapMetaData
  >::convert_1_to_2(
    ros1_msg.info, ros2_msg.info);
  ros2_msg.data.resize(ros1_msg.data.size());
  std::copy(
    ros1_msg.data.begin(),
    ros1_msg.data.end(),
    ros2_msg.data.begin());
}

template<>
void
Factory<
  nav_msgs::OccupancyGrid,
  nav_msgs::msg::OccupancyGrid
>::convert_2_to_1(
  const nav_msgs::msg::OccupancyGrid & ros2_msg,
  nav_msgs::OccupancyGrid & ros1_msg)
{
  Factory<
    std_msgs::Header,
    std_msgs::msg::Header
  >::convert_2_to_1(
    ros2_msg.header, ros1_msg.header);
  Factory<
    nav_msgs::MapMetaData,
    nav_msgs::msg::MapMetaData
  >::convert_2_to_1(
    ros2_msg.info, ros1_msg.info);
  ros1_msg.data.resize(ros2_msg.data.size());
  std::copy(
    ros2_msg.data.begin(),
    ros2_msg.data.end(),
    ros1_msg.data.begin());
}


template<>
void
Factory<
  nav_msgs::Odometry,
  nav_msgs::msg::Odometry
>::convert_1_to_2(
  const nav_msgs::Odometry & ros1_msg,
  nav_msgs::msg::Odometry & ros2_msg)
{
  Factory<
    std_msgs::Header,
    std_msgs::msg::Header
  >::convert_1_to_2(
    ros1_msg.header, ros2_msg.header);
  ros2_msg.child_frame_id = ros1_msg.child_frame_id;
  Factory<
    geometry_msgs::PoseWithCovariance,
    geometry_msgs::msg::PoseWithCovariance
  >::convert_1_to_2(
    ros1_msg.pose, ros2_msg.pose);
  Factory<
    geometry_msgs::TwistWithCovariance,
    geometry_msgs::msg::TwistWithCovariance
  >::convert_1_to_2(
    ros1_msg.twist, ros2_msg.twist);
}

template<>
void
Factory<
  nav_msgs::Odometry,
  nav_msgs::msg::Odometry
>::convert_2_to_1(
  const nav_msgs::msg::Odometry & ros2_msg,
  nav_msgs::Odometry & ros1_msg)
{
  Factory<
    std_msgs::Header,
    std_msgs::msg::Header
  >::convert_2_to_1(
    ros2_msg.header, ros1_msg.header);
  ros1_msg.child_frame_id = ros2_msg.child_frame_id;
  Factory<
    geometry_msgs::PoseWithCovariance,
    geometry_msgs::msg::PoseWithCovariance
  >::convert_2_to_1(
    ros2_msg.pose, ros1_msg.pose);
  Factory<
    geometry_msgs::TwistWithCovariance,
    geometry_msgs::msg::TwistWithCovariance
  >::convert_2_to_1(
    ros2_msg.twist, ros1_msg.twist);
}


template<>
void
Factory<
  nav_msgs::Path,
  nav_msgs::msg::Path
>::convert_1_to_2(
  const nav_msgs::Path & ros1_msg,
  nav_msgs::msg::Path & ros2_msg)
{
  Factory<
    std_msgs::Header,
    std_msgs::msg::Header
  >::convert_1_to_2(
    ros1_msg.header, ros2_msg.header);
  ros2_msg.poses.resize(ros1_msg.poses.size());
  {
    auto ros1_it = ros1_msg.poses.begin();
    auto ros2_it = ros2_msg.poses.begin();
    for (
      ;
      ros1_it != ros1_msg.poses.end() &&
      ros2_it != ros2_msg.poses.end();
      ++ros1_it, ++ros2_it
    )
    {
      Factory<
        geometry_msgs::PoseStamped,
        geometry_msgs::msg::PoseStamped
      >::convert_1_to_2(
        *ros1_it, *ros2_it);
    }
  }
}

template<>
void
Factory<
  nav_msgs::Path,
  nav_msgs::msg::Path
>::convert_2_to_1(
  const nav_msgs::msg::Path & ros2_msg,
  nav_msgs::Path & ros1_msg)
{
  Factory<
    std_msgs::Header,
    std_msgs::msg::Header
  >::convert_2_to_1(
    ros2_msg.header, ros1_msg.header);
  ros1_msg.poses.resize(ros2_msg.poses.size());
  {
    auto ros2_it = ros2_msg.poses.begin();
    auto ros1_it = ros1_msg.poses.begin();
    for (
      ;
      ros2_it != ros2_msg.poses.end() &&
      ros1_it != ros1_msg.poses.end();
      ++ros2_it, ++ros1_it
    )
    {
      Factory<
        geometry_msgs::PoseStamped,
        geometry_msgs::msg::PoseStamped
      >::convert_2_to_1(
        *ros2_it, *ros1_it);
    }
  }
}


template<>
void
Factory<
  sensor_msgs::CameraInfo,
  sensor_msgs::msg::CameraInfo
>::convert_1_to_2(
  const sensor_msgs::CameraInfo & ros1_msg,
  sensor_msgs::msg::CameraInfo & ros2_msg)
{
  Factory<
    std_msgs::Header,
    std_msgs::msg::Header
  >::convert_1_to_2(
    ros1_msg.header, ros2_msg.header);
  ros2_msg.height = ros1_msg.height;
  ros2_msg.width = ros1_msg.width;
  ros2_msg.distortion_model = ros1_msg.distortion_model;
  ros2_msg.d.resize(ros1_msg.D.size());
  std::copy(
    ros1_msg.D.begin(),
    ros1_msg.D.end(),
    ros2_msg.d.begin());
  std::copy(
    ros1_msg.K.begin(),
    ros1_msg.K.end(),
    ros2_msg.k.begin());
  std::copy(
    ros1_msg.R.begin(),
    ros1_msg.R.end(),
    ros2_msg.r.begin());
  std::copy(
    ros1_msg.P.begin(),
    ros1_msg.P.end(),
    ros2_msg.p.begin());
  ros2_msg.binning_x = ros1_msg.binning_x;
  ros2_msg.binning_y = ros1_msg.binning_y;
  Factory<
    sensor_msgs::RegionOfInterest,
    sensor_msgs::msg::RegionOfInterest
  >::convert_1_to_2(
    ros1_msg.roi, ros2_msg.roi);
}

template<>
void
Factory<
  sensor_msgs::CameraInfo,
  sensor_msgs::msg::CameraInfo
>::convert_2_to_1(
  const sensor_msgs::msg::CameraInfo & ros2_msg,
  sensor_msgs::CameraInfo & ros1_msg)
{
  Factory<
    std_msgs::Header,
    std_msgs::msg::Header
  >::convert_2_to_1(
    ros2_msg.header, ros1_msg.header);
  ros1_msg.height = ros2_msg.height;
  ros1_msg.width = ros2_msg.width;
  ros1_msg.distortion_model = ros2_msg.distortion_model;
  ros1_msg.D.resize(ros2_msg.d.size());
  std::copy(
    ros2_msg.d.begin(),
    ros2_msg.d.end(),
    ros1_msg.D.begin());
  std::copy(
    ros2_msg.k.begin(),
    ros2_msg.k.end(),
    ros1_msg.K.begin());
  std::copy(
    ros2_msg.r.begin(),
    ros2_msg.r.end(),
    ros1_msg.R.begin());
  std::copy(
    ros2_msg.p.begin(),
    ros2_msg.p.end(),
    ros1_msg.P.begin());
  ros1_msg.binning_x = ros2_msg.binning_x;
  ros1_msg.binning_y = ros2_msg.binning_y;
  Factory<
    sensor_msgs::RegionOfInterest,
    sensor_msgs::msg::RegionOfInterest
  >::convert_2_to_1(
    ros2_msg.roi, ros1_msg.roi);
}


template<>
void
Factory<
  sensor_msgs::CompressedImage,
  sensor_msgs::msg::CompressedImage
>::convert_1_to_2(
  const sensor_msgs::CompressedImage & ros1_msg,
  sensor_msgs::msg::CompressedImage & ros2_msg)
{
  Factory<
    std_msgs::Header,
    std_msgs::msg::Header
  >::convert_1_to_2(
    ros1_msg.header, ros2_msg.header);
  ros2_msg.format = ros1_msg.format;
  ros2_msg.data.resize(ros1_msg.data.size());
  std::copy(
    ros1_msg.data.begin(),
    ros1_msg.data.end(),
    ros2_msg.data.begin());
}

template<>
void
Factory<
  sensor_msgs::CompressedImage,
  sensor_msgs::msg::CompressedImage
>::convert_2_to_1(
  const sensor_msgs::msg::CompressedImage & ros2_msg,
  sensor_msgs::CompressedImage & ros1_msg)
{
  Factory<
    std_msgs::Header,
    std_msgs::msg::Header
  >::convert_2_to_1(
    ros2_msg.header, ros1_msg.header);
  ros1_msg.format = ros2_msg.format;
  ros1_msg.data.resize(ros2_msg.data.size());
  std::copy(
    ros2_msg.data.begin(),
    ros2_msg.data.end(),
    ros1_msg.data.begin());
}


template<>
void
Factory<
  sensor_msgs::FluidPressure,
  sensor_msgs::msg::FluidPressure
>::convert_1_to_2(
  const sensor_msgs::FluidPressure & ros1_msg,
  sensor_msgs::msg::FluidPressure & ros2_msg)
{
  Factory<
    std_msgs::Header,
    std_msgs::msg::Header
  >::convert_1_to_2(
    ros1_msg.header, ros2_msg.header);
  ros2_msg.fluid_pressure = ros1_msg.fluid_pressure;
  ros2_msg.variance = ros1_msg.variance;
}

template<>
void
Factory<
  sensor_msgs::FluidPressure,
  sensor_msgs::msg::FluidPressure
>::convert_2_to_1(
  const sensor_msgs::msg::FluidPressure & ros2_msg,
  sensor_msgs::FluidPressure & ros1_msg)
{
  Factory<
    std_msgs::Header,
    std_msgs::msg::Header
  >::convert_2_to_1(
    ros2_msg.header, ros1_msg.header);
  ros1_msg.fluid_pressure = ros2_msg.fluid_pressure;
  ros1_msg.variance = ros2_msg.variance;
}


template<>
void
Factory<
  sensor_msgs::Illuminance,
  sensor_msgs::msg::Illuminance
>::convert_1_to_2(
  const sensor_msgs::Illuminance & ros1_msg,
  sensor_msgs::msg::Illuminance & ros2_msg)
{
  Factory<
    std_msgs::Header,
    std_msgs::msg::Header
  >::convert_1_to_2(
    ros1_msg.header, ros2_msg.header);
  ros2_msg.illuminance = ros1_msg.illuminance;
  ros2_msg.variance = ros1_msg.variance;
}

template<>
void
Factory<
  sensor_msgs::Illuminance,
  sensor_msgs::msg::Illuminance
>::convert_2_to_1(
  const sensor_msgs::msg::Illuminance & ros2_msg,
  sensor_msgs::Illuminance & ros1_msg)
{
  Factory<
    std_msgs::Header,
    std_msgs::msg::Header
  >::convert_2_to_1(
    ros2_msg.header, ros1_msg.header);
  ros1_msg.illuminance = ros2_msg.illuminance;
  ros1_msg.variance = ros2_msg.variance;
}


template<>
void
Factory<
  sensor_msgs::Image,
  sensor_msgs::msg::Image
>::convert_1_to_2(
  const sensor_msgs::Image & ros1_msg,
  sensor_msgs::msg::Image & ros2_msg)
{
  Factory<
    std_msgs::Header,
    std_msgs::msg::Header
  >::convert_1_to_2(
    ros1_msg.header, ros2_msg.header);
  ros2_msg.height = ros1_msg.height;
  ros2_msg.width = ros1_msg.width;
  ros2_msg.encoding = ros1_msg.encoding;
  ros2_msg.is_bigendian = ros1_msg.is_bigendian;
  ros2_msg.step = ros1_msg.step;
  ros2_msg.data.resize(ros1_msg.data.size());
  std::copy(
    ros1_msg.data.begin(),
    ros1_msg.data.end(),
    ros2_msg.data.begin());
}

template<>
void
Factory<
  sensor_msgs::Image,
  sensor_msgs::msg::Image
>::convert_2_to_1(
  const sensor_msgs::msg::Image & ros2_msg,
  sensor_msgs::Image & ros1_msg)
{
  Factory<
    std_msgs::Header,
    std_msgs::msg::Header
  >::convert_2_to_1(
    ros2_msg.header, ros1_msg.header);
  ros1_msg.height = ros2_msg.height;
  ros1_msg.width = ros2_msg.width;
  ros1_msg.encoding = ros2_msg.encoding;
  ros1_msg.is_bigendian = ros2_msg.is_bigendian;
  ros1_msg.step = ros2_msg.step;
  ros1_msg.data.resize(ros2_msg.data.size());
  std::copy(
    ros2_msg.data.begin(),
    ros2_msg.data.end(),
    ros1_msg.data.begin());
}


template<>
void
Factory<
  sensor_msgs::Imu,
  sensor_msgs::msg::Imu
>::convert_1_to_2(
  const sensor_msgs::Imu & ros1_msg,
  sensor_msgs::msg::Imu & ros2_msg)
{
  Factory<
    std_msgs::Header,
    std_msgs::msg::Header
  >::convert_1_to_2(
    ros1_msg.header, ros2_msg.header);
  Factory<
    geometry_msgs::Quaternion,
    geometry_msgs::msg::Quaternion
  >::convert_1_to_2(
    ros1_msg.orientation, ros2_msg.orientation);
  std::copy(
    ros1_msg.orientation_covariance.begin(),
    ros1_msg.orientation_covariance.end(),
    ros2_msg.orientation_covariance.begin());
  Factory<
    geometry_msgs::Vector3,
    geometry_msgs::msg::Vector3
  >::convert_1_to_2(
    ros1_msg.angular_velocity, ros2_msg.angular_velocity);
  std::copy(
    ros1_msg.angular_velocity_covariance.begin(),
    ros1_msg.angular_velocity_covariance.end(),
    ros2_msg.angular_velocity_covariance.begin());
  Factory<
    geometry_msgs::Vector3,
    geometry_msgs::msg::Vector3
  >::convert_1_to_2(
    ros1_msg.linear_acceleration, ros2_msg.linear_acceleration);
  std::copy(
    ros1_msg.linear_acceleration_covariance.begin(),
    ros1_msg.linear_acceleration_covariance.end(),
    ros2_msg.linear_acceleration_covariance.begin());
}

template<>
void
Factory<
  sensor_msgs::Imu,
  sensor_msgs::msg::Imu
>::convert_2_to_1(
  const sensor_msgs::msg::Imu & ros2_msg,
  sensor_msgs::Imu & ros1_msg)
{
  Factory<
    std_msgs::Header,
    std_msgs::msg::Header
  >::convert_2_to_1(
    ros2_msg.header, ros1_msg.header);
  Factory<
    geometry_msgs::Quaternion,
    geometry_msgs::msg::Quaternion
  >::convert_2_to_1(
    ros2_msg.orientation, ros1_msg.orientation);
  std::copy(
    ros2_msg.orientation_covariance.begin(),
    ros2_msg.orientation_covariance.end(),
    ros1_msg.orientation_covariance.begin());
  Factory<
    geometry_msgs::Vector3,
    geometry_msgs::msg::Vector3
  >::convert_2_to_1(
    ros2_msg.angular_velocity, ros1_msg.angular_velocity);
  std::copy(
    ros2_msg.angular_velocity_covariance.begin(),
    ros2_msg.angular_velocity_covariance.end(),
    ros1_msg.angular_velocity_covariance.begin());
  Factory<
    geometry_msgs::Vector3,
    geometry_msgs::msg::Vector3
  >::convert_2_to_1(
    ros2_msg.linear_acceleration, ros1_msg.linear_acceleration);
  std::copy(
    ros2_msg.linear_acceleration_covariance.begin(),
    ros2_msg.linear_acceleration_covariance.end(),
    ros1_msg.linear_acceleration_covariance.begin());
}


template<>
void
Factory<
  sensor_msgs::JointState,
  sensor_msgs::msg::JointState
>::convert_1_to_2(
  const sensor_msgs::JointState & ros1_msg,
  sensor_msgs::msg::JointState & ros2_msg)
{
  Factory<
    std_msgs::Header,
    std_msgs::msg::Header
  >::convert_1_to_2(
    ros1_msg.header, ros2_msg.header);
  ros2_msg.name.resize(ros1_msg.name.size());
  std::copy(
    ros1_msg.name.begin(),
    ros1_msg.name.end(),
    ros2_msg.name.begin());
  ros2_msg.position.resize(ros1_msg.position.size());
  std::copy(
    ros1_msg.position.begin(),
    ros1_msg.position.end(),
    ros2_msg.position.begin());
  ros2_msg.velocity.resize(ros1_msg.velocity.size());
  std::copy(
    ros1_msg.velocity.begin(),
    ros1_msg.velocity.end(),
    ros2_msg.velocity.begin());
  ros2_msg.effort.resize(ros1_msg.effort.size());
  std::copy(
    ros1_msg.effort.begin(),
    ros1_msg.effort.end(),
    ros2_msg.effort.begin());
}

template<>
void
Factory<
  sensor_msgs::JointState,
  sensor_msgs::msg::JointState
>::convert_2_to_1(
  const sensor_msgs::msg::JointState & ros2_msg,
  sensor_msgs::JointState & ros1_msg)
{
  Factory<
    std_msgs::Header,
    std_msgs::msg::Header
  >::convert_2_to_1(
    ros2_msg.header, ros1_msg.header);
  ros1_msg.name.resize(ros2_msg.name.size());
  std::copy(
    ros2_msg.name.begin(),
    ros2_msg.name.end(),
    ros1_msg.name.begin());
  ros1_msg.position.resize(ros2_msg.position.size());
  std::copy(
    ros2_msg.position.begin(),
    ros2_msg.position.end(),
    ros1_msg.position.begin());
  ros1_msg.velocity.resize(ros2_msg.velocity.size());
  std::copy(
    ros2_msg.velocity.begin(),
    ros2_msg.velocity.end(),
    ros1_msg.velocity.begin());
  ros1_msg.effort.resize(ros2_msg.effort.size());
  std::copy(
    ros2_msg.effort.begin(),
    ros2_msg.effort.end(),
    ros1_msg.effort.begin());
}


template<>
void
Factory<
  sensor_msgs::Joy,
  sensor_msgs::msg::Joy
>::convert_1_to_2(
  const sensor_msgs::Joy & ros1_msg,
  sensor_msgs::msg::Joy & ros2_msg)
{
  Factory<
    std_msgs::Header,
    std_msgs::msg::Header
  >::convert_1_to_2(
    ros1_msg.header, ros2_msg.header);
  ros2_msg.axes.resize(ros1_msg.axes.size());
  std::copy(
    ros1_msg.axes.begin(),
    ros1_msg.axes.end(),
    ros2_msg.axes.begin());
  ros2_msg.buttons.resize(ros1_msg.buttons.size());
  std::copy(
    ros1_msg.buttons.begin(),
    ros1_msg.buttons.end(),
    ros2_msg.buttons.begin());
}

template<>
void
Factory<
  sensor_msgs::Joy,
  sensor_msgs::msg::Joy
>::convert_2_to_1(
  const sensor_msgs::msg::Joy & ros2_msg,
  sensor_msgs::Joy & ros1_msg)
{
  Factory<
    std_msgs::Header,
    std_msgs::msg::Header
  >::convert_2_to_1(
    ros2_msg.header, ros1_msg.header);
  ros1_msg.axes.resize(ros2_msg.axes.size());
  std::copy(
    ros2_msg.axes.begin(),
    ros2_msg.axes.end(),
    ros1_msg.axes.begin());
  ros1_msg.buttons.resize(ros2_msg.buttons.size());
  std::copy(
    ros2_msg.buttons.begin(),
    ros2_msg.buttons.end(),
    ros1_msg.buttons.begin());
}


template<>
void
Factory<
  sensor_msgs::LaserScan,
  sensor_msgs::msg::LaserScan
>::convert_1_to_2(
  const sensor_msgs::LaserScan & ros1_msg,
  sensor_msgs::msg::LaserScan & ros2_msg)
{
  Factory<
    std_msgs::Header,
    std_msgs::msg::Header
  >::convert_1_to_2(
    ros1_msg.header, ros2_msg.header);
  ros2_msg.angle_min = ros1_msg.angle_min;
  ros2_msg.angle_max = ros1_msg.angle_max;
  ros2_msg.angle_increment = ros1_msg.angle_increment;
  ros2_msg.time_increment = ros1_msg.time_increment;
  ros2_msg.scan_time = ros1_msg.scan_time;
  ros2_msg.range_min = ros1_msg.range_min;
  ros2_msg.range_max = ros1_msg.range_max;
  ros2_msg.ranges.resize(ros1_msg.ranges.size());
  std::copy(
    ros1_msg.ranges.begin(),
    ros1_msg.ranges.end(),
    ros2_msg.ranges.begin());
  ros2_msg.intensities.resize(ros1_msg.intensities.size());
  std::copy(
    ros1_msg.intensities.begin(),
    ros1_msg.intensities.end(),
    ros2_msg.intensities.begin());
}

template<>
void
Factory<
  sensor_msgs::LaserScan,
  sensor_msgs::msg::LaserScan
>::convert_2_to_1(
  const sensor_msgs::msg::LaserScan & ros2_msg,
  sensor_msgs::LaserScan & ros1_msg)
{
  Factory<
    std_msgs::Header,
    std_msgs::msg::Header
  >::convert_2_to_1(
    ros2_msg.header, ros1_msg.header);
  ros1_msg.angle_min = ros2_msg.angle_min;
  ros1_msg.angle_max = ros2_msg.angle_max;
  ros1_msg.angle_increment = ros2_msg.angle_increment;
  ros1_msg.time_increment = ros2_msg.time_increment;
  ros1_msg.scan_time = ros2_msg.scan_time;
  ros1_msg.range_min = ros2_msg.range_min;
  ros1_msg.range_max = ros2_msg.range_max;
  ros1_msg.ranges.resize(ros2_msg.ranges.size());
  std::copy(
    ros2_msg.ranges.begin(),
    ros2_msg.ranges.end(),
    ros1_msg.ranges.begin());
  ros1_msg.intensities.resize(ros2_msg.intensities.size());
  std::copy(
    ros2_msg.intensities.begin(),
    ros2_msg.intensities.end(),
    ros1_msg.intensities.begin());
}


template<>
void
Factory<
  sensor_msgs::MagneticField,
  sensor_msgs::msg::MagneticField
>::convert_1_to_2(
  const sensor_msgs::MagneticField & ros1_msg,
  sensor_msgs::msg::MagneticField & ros2_msg)
{
  Factory<
    std_msgs::Header,
    std_msgs::msg::Header
  >::convert_1_to_2(
    ros1_msg.header, ros2_msg.header);
  Factory<
    geometry_msgs::Vector3,
    geometry_msgs::msg::Vector3
  >::convert_1_to_2(
    ros1_msg.magnetic_field, ros2_msg.magnetic_field);
  std::copy(
    ros1_msg.magnetic_field_covariance.begin(),
    ros1_msg.magnetic_field_covariance.end(),
    ros2_msg.magnetic_field_covariance.begin());
}

template<>
void
Factory<
  sensor_msgs::MagneticField,
  sensor_msgs::msg::MagneticField
>::convert_2_to_1(
  const sensor_msgs::msg::MagneticField & ros2_msg,
  sensor_msgs::MagneticField & ros1_msg)
{
  Factory<
    std_msgs::Header,
    std_msgs::msg::Header
  >::convert_2_to_1(
    ros2_msg.header, ros1_msg.header);
  Factory<
    geometry_msgs::Vector3,
    geometry_msgs::msg::Vector3
  >::convert_2_to_1(
    ros2_msg.magnetic_field, ros1_msg.magnetic_field);
  std::copy(
    ros2_msg.magnetic_field_covariance.begin(),
    ros2_msg.magnetic_field_covariance.end(),
    ros1_msg.magnetic_field_covariance.begin());
}


template<>
void
Factory<
  sensor_msgs::MultiDOFJointState,
  sensor_msgs::msg::MultiDOFJointState
>::convert_1_to_2(
  const sensor_msgs::MultiDOFJointState & ros1_msg,
  sensor_msgs::msg::MultiDOFJointState & ros2_msg)
{
  Factory<
    std_msgs::Header,
    std_msgs::msg::Header
  >::convert_1_to_2(
    ros1_msg.header, ros2_msg.header);
  ros2_msg.joint_names.resize(ros1_msg.joint_names.size());
  std::copy(
    ros1_msg.joint_names.begin(),
    ros1_msg.joint_names.end(),
    ros2_msg.joint_names.begin());
  ros2_msg.transforms.resize(ros1_msg.transforms.size());
  {
    auto ros1_it = ros1_msg.transforms.begin();
    auto ros2_it = ros2_msg.transforms.begin();
    for (
      ;
      ros1_it != ros1_msg.transforms.end() &&
      ros2_it != ros2_msg.transforms.end();
      ++ros1_it, ++ros2_it
    )
    {
      Factory<
        geometry_msgs::Transform,
        geometry_msgs::msg::Transform
      >::convert_1_to_2(
        *ros1_it, *ros2_it);
    }
  }
  ros2_msg.twist.resize(ros1_msg.twist.size());
  {
    auto ros1_it = ros1_msg.twist.begin();
    auto ros2_it = ros2_msg.twist.begin();
    for (
      ;
      ros1_it != ros1_msg.twist.end() &&
      ros2_it != ros2_msg.twist.end();
      ++ros1_it, ++ros2_it
    )
    {
      Factory<
        geometry_msgs::Twist,
        geometry_msgs::msg::Twist
      >::convert_1_to_2(
        *ros1_it, *ros2_it);
    }
  }
  ros2_msg.wrench.resize(ros1_msg.wrench.size());
  {
    auto ros1_it = ros1_msg.wrench.begin();
    auto ros2_it = ros2_msg.wrench.begin();
    for (
      ;
      ros1_it != ros1_msg.wrench.end() &&
      ros2_it != ros2_msg.wrench.end();
      ++ros1_it, ++ros2_it
    )
    {
      Factory<
        geometry_msgs::Wrench,
        geometry_msgs::msg::Wrench
      >::convert_1_to_2(
        *ros1_it, *ros2_it);
    }
  }
}

template<>
void
Factory<
  sensor_msgs::MultiDOFJointState,
  sensor_msgs::msg::MultiDOFJointState
>::convert_2_to_1(
  const sensor_msgs::msg::MultiDOFJointState & ros2_msg,
  sensor_msgs::MultiDOFJointState & ros1_msg)
{
  Factory<
    std_msgs::Header,
    std_msgs::msg::Header
  >::convert_2_to_1(
    ros2_msg.header, ros1_msg.header);
  ros1_msg.joint_names.resize(ros2_msg.joint_names.size());
  std::copy(
    ros2_msg.joint_names.begin(),
    ros2_msg.joint_names.end(),
    ros1_msg.joint_names.begin());
  ros1_msg.transforms.resize(ros2_msg.transforms.size());
  {
    auto ros2_it = ros2_msg.transforms.begin();
    auto ros1_it = ros1_msg.transforms.begin();
    for (
      ;
      ros2_it != ros2_msg.transforms.end() &&
      ros1_it != ros1_msg.transforms.end();
      ++ros2_it, ++ros1_it
    )
    {
      Factory<
        geometry_msgs::Transform,
        geometry_msgs::msg::Transform
      >::convert_2_to_1(
        *ros2_it, *ros1_it);
    }
  }
  ros1_msg.twist.resize(ros2_msg.twist.size());
  {
    auto ros2_it = ros2_msg.twist.begin();
    auto ros1_it = ros1_msg.twist.begin();
    for (
      ;
      ros2_it != ros2_msg.twist.end() &&
      ros1_it != ros1_msg.twist.end();
      ++ros2_it, ++ros1_it
    )
    {
      Factory<
        geometry_msgs::Twist,
        geometry_msgs::msg::Twist
      >::convert_2_to_1(
        *ros2_it, *ros1_it);
    }
  }
  ros1_msg.wrench.resize(ros2_msg.wrench.size());
  {
    auto ros2_it = ros2_msg.wrench.begin();
    auto ros1_it = ros1_msg.wrench.begin();
    for (
      ;
      ros2_it != ros2_msg.wrench.end() &&
      ros1_it != ros1_msg.wrench.end();
      ++ros2_it, ++ros1_it
    )
    {
      Factory<
        geometry_msgs::Wrench,
        geometry_msgs::msg::Wrench
      >::convert_2_to_1(
        *ros2_it, *ros1_it);
    }
  }
}


template<>
void
Factory<
  sensor_msgs::MultiEchoLaserScan,
  sensor_msgs::msg::MultiEchoLaserScan
>::convert_1_to_2(
  const sensor_msgs::MultiEchoLaserScan & ros1_msg,
  sensor_msgs::msg::MultiEchoLaserScan & ros2_msg)
{
  Factory<
    std_msgs::Header,
    std_msgs::msg::Header
  >::convert_1_to_2(
    ros1_msg.header, ros2_msg.header);
  ros2_msg.angle_min = ros1_msg.angle_min;
  ros2_msg.angle_max = ros1_msg.angle_max;
  ros2_msg.angle_increment = ros1_msg.angle_increment;
  ros2_msg.time_increment = ros1_msg.time_increment;
  ros2_msg.scan_time = ros1_msg.scan_time;
  ros2_msg.range_min = ros1_msg.range_min;
  ros2_msg.range_max = ros1_msg.range_max;
  ros2_msg.ranges.resize(ros1_msg.ranges.size());
  {
    auto ros1_it = ros1_msg.ranges.begin();
    auto ros2_it = ros2_msg.ranges.begin();
    for (
      ;
      ros1_it != ros1_msg.ranges.end() &&
      ros2_it != ros2_msg.ranges.end();
      ++ros1_it, ++ros2_it
    )
    {
      Factory<
        sensor_msgs::LaserEcho,
        sensor_msgs::msg::LaserEcho
      >::convert_1_to_2(
        *ros1_it, *ros2_it);
    }
  }
  ros2_msg.intensities.resize(ros1_msg.intensities.size());
  {
    auto ros1_it = ros1_msg.intensities.begin();
    auto ros2_it = ros2_msg.intensities.begin();
    for (
      ;
      ros1_it != ros1_msg.intensities.end() &&
      ros2_it != ros2_msg.intensities.end();
      ++ros1_it, ++ros2_it
    )
    {
      Factory<
        sensor_msgs::LaserEcho,
        sensor_msgs::msg::LaserEcho
      >::convert_1_to_2(
        *ros1_it, *ros2_it);
    }
  }
}

template<>
void
Factory<
  sensor_msgs::MultiEchoLaserScan,
  sensor_msgs::msg::MultiEchoLaserScan
>::convert_2_to_1(
  const sensor_msgs::msg::MultiEchoLaserScan & ros2_msg,
  sensor_msgs::MultiEchoLaserScan & ros1_msg)
{
  Factory<
    std_msgs::Header,
    std_msgs::msg::Header
  >::convert_2_to_1(
    ros2_msg.header, ros1_msg.header);
  ros1_msg.angle_min = ros2_msg.angle_min;
  ros1_msg.angle_max = ros2_msg.angle_max;
  ros1_msg.angle_increment = ros2_msg.angle_increment;
  ros1_msg.time_increment = ros2_msg.time_increment;
  ros1_msg.scan_time = ros2_msg.scan_time;
  ros1_msg.range_min = ros2_msg.range_min;
  ros1_msg.range_max = ros2_msg.range_max;
  ros1_msg.ranges.resize(ros2_msg.ranges.size());
  {
    auto ros2_it = ros2_msg.ranges.begin();
    auto ros1_it = ros1_msg.ranges.begin();
    for (
      ;
      ros2_it != ros2_msg.ranges.end() &&
      ros1_it != ros1_msg.ranges.end();
      ++ros2_it, ++ros1_it
    )
    {
      Factory<
        sensor_msgs::LaserEcho,
        sensor_msgs::msg::LaserEcho
      >::convert_2_to_1(
        *ros2_it, *ros1_it);
    }
  }
  ros1_msg.intensities.resize(ros2_msg.intensities.size());
  {
    auto ros2_it = ros2_msg.intensities.begin();
    auto ros1_it = ros1_msg.intensities.begin();
    for (
      ;
      ros2_it != ros2_msg.intensities.end() &&
      ros1_it != ros1_msg.intensities.end();
      ++ros2_it, ++ros1_it
    )
    {
      Factory<
        sensor_msgs::LaserEcho,
        sensor_msgs::msg::LaserEcho
      >::convert_2_to_1(
        *ros2_it, *ros1_it);
    }
  }
}


template<>
void
Factory<
  sensor_msgs::NavSatFix,
  sensor_msgs::msg::NavSatFix
>::convert_1_to_2(
  const sensor_msgs::NavSatFix & ros1_msg,
  sensor_msgs::msg::NavSatFix & ros2_msg)
{
  Factory<
    std_msgs::Header,
    std_msgs::msg::Header
  >::convert_1_to_2(
    ros1_msg.header, ros2_msg.header);
  Factory<
    sensor_msgs::NavSatStatus,
    sensor_msgs::msg::NavSatStatus
  >::convert_1_to_2(
    ros1_msg.status, ros2_msg.status);
  ros2_msg.latitude = ros1_msg.latitude;
  ros2_msg.longitude = ros1_msg.longitude;
  ros2_msg.altitude = ros1_msg.altitude;
  std::copy(
    ros1_msg.position_covariance.begin(),
    ros1_msg.position_covariance.end(),
    ros2_msg.position_covariance.begin());
  ros2_msg.position_covariance_type = ros1_msg.position_covariance_type;
}

template<>
void
Factory<
  sensor_msgs::NavSatFix,
  sensor_msgs::msg::NavSatFix
>::convert_2_to_1(
  const sensor_msgs::msg::NavSatFix & ros2_msg,
  sensor_msgs::NavSatFix & ros1_msg)
{
  Factory<
    std_msgs::Header,
    std_msgs::msg::Header
  >::convert_2_to_1(
    ros2_msg.header, ros1_msg.header);
  Factory<
    sensor_msgs::NavSatStatus,
    sensor_msgs::msg::NavSatStatus
  >::convert_2_to_1(
    ros2_msg.status, ros1_msg.status);
  ros1_msg.latitude = ros2_msg.latitude;
  ros1_msg.longitude = ros2_msg.longitude;
  ros1_msg.altitude = ros2_msg.altitude;
  std::copy(
    ros2_msg.position_covariance.begin(),
    ros2_msg.position_covariance.end(),
    ros1_msg.position_covariance.begin());
  ros1_msg.position_covariance_type = ros2_msg.position_covariance_type;
}


template<>
void
Factory<
  sensor_msgs::PointCloud,
  sensor_msgs::msg::PointCloud
>::convert_1_to_2(
  const sensor_msgs::PointCloud & ros1_msg,
  sensor_msgs::msg::PointCloud & ros2_msg)
{
  Factory<
    std_msgs::Header,
    std_msgs::msg::Header
  >::convert_1_to_2(
    ros1_msg.header, ros2_msg.header);
  ros2_msg.points.resize(ros1_msg.points.size());
  {
    auto ros1_it = ros1_msg.points.begin();
    auto ros2_it = ros2_msg.points.begin();
    for (
      ;
      ros1_it != ros1_msg.points.end() &&
      ros2_it != ros2_msg.points.end();
      ++ros1_it, ++ros2_it
    )
    {
      Factory<
        geometry_msgs::Point32,
        geometry_msgs::msg::Point32
      >::convert_1_to_2(
        *ros1_it, *ros2_it);
    }
  }
  ros2_msg.channels.resize(ros1_msg.channels.size());
  {
    auto ros1_it = ros1_msg.channels.begin();
    auto ros2_it = ros2_msg.channels.begin();
    for (
      ;
      ros1_it != ros1_msg.channels.end() &&
      ros2_it != ros2_msg.channels.end();
      ++ros1_it, ++ros2_it
    )
    {
      Factory<
        sensor_msgs::ChannelFloat32,
        sensor_msgs::msg::ChannelFloat32
      >::convert_1_to_2(
        *ros1_it, *ros2_it);
    }
  }
}

template<>
void
Factory<
  sensor_msgs::PointCloud,
  sensor_msgs::msg::PointCloud
>::convert_2_to_1(
  const sensor_msgs::msg::PointCloud & ros2_msg,
  sensor_msgs::PointCloud & ros1_msg)
{
  Factory<
    std_msgs::Header,
    std_msgs::msg::Header
  >::convert_2_to_1(
    ros2_msg.header, ros1_msg.header);
  ros1_msg.points.resize(ros2_msg.points.size());
  {
    auto ros2_it = ros2_msg.points.begin();
    auto ros1_it = ros1_msg.points.begin();
    for (
      ;
      ros2_it != ros2_msg.points.end() &&
      ros1_it != ros1_msg.points.end();
      ++ros2_it, ++ros1_it
    )
    {
      Factory<
        geometry_msgs::Point32,
        geometry_msgs::msg::Point32
      >::convert_2_to_1(
        *ros2_it, *ros1_it);
    }
  }
  ros1_msg.channels.resize(ros2_msg.channels.size());
  {
    auto ros2_it = ros2_msg.channels.begin();
    auto ros1_it = ros1_msg.channels.begin();
    for (
      ;
      ros2_it != ros2_msg.channels.end() &&
      ros1_it != ros1_msg.channels.end();
      ++ros2_it, ++ros1_it
    )
    {
      Factory<
        sensor_msgs::ChannelFloat32,
        sensor_msgs::msg::ChannelFloat32
      >::convert_2_to_1(
        *ros2_it, *ros1_it);
    }
  }
}


template<>
void
Factory<
  sensor_msgs::PointCloud2,
  sensor_msgs::msg::PointCloud2
>::convert_1_to_2(
  const sensor_msgs::PointCloud2 & ros1_msg,
  sensor_msgs::msg::PointCloud2 & ros2_msg)
{
  Factory<
    std_msgs::Header,
    std_msgs::msg::Header
  >::convert_1_to_2(
    ros1_msg.header, ros2_msg.header);
  ros2_msg.height = ros1_msg.height;
  ros2_msg.width = ros1_msg.width;
  ros2_msg.fields.resize(ros1_msg.fields.size());
  {
    auto ros1_it = ros1_msg.fields.begin();
    auto ros2_it = ros2_msg.fields.begin();
    for (
      ;
      ros1_it != ros1_msg.fields.end() &&
      ros2_it != ros2_msg.fields.end();
      ++ros1_it, ++ros2_it
    )
    {
      Factory<
        sensor_msgs::PointField,
        sensor_msgs::msg::PointField
      >::convert_1_to_2(
        *ros1_it, *ros2_it);
    }
  }
  ros2_msg.is_bigendian = ros1_msg.is_bigendian;
  ros2_msg.point_step = ros1_msg.point_step;
  ros2_msg.row_step = ros1_msg.row_step;
  ros2_msg.data.resize(ros1_msg.data.size());
  std::copy(
    ros1_msg.data.begin(),
    ros1_msg.data.end(),
    ros2_msg.data.begin());
  ros2_msg.is_dense = ros1_msg.is_dense;
}

template<>
void
Factory<
  sensor_msgs::PointCloud2,
  sensor_msgs::msg::PointCloud2
>::convert_2_to_1(
  const sensor_msgs::msg::PointCloud2 & ros2_msg,
  sensor_msgs::PointCloud2 & ros1_msg)
{
  Factory<
    std_msgs::Header,
    std_msgs::msg::Header
  >::convert_2_to_1(
    ros2_msg.header, ros1_msg.header);
  ros1_msg.height = ros2_msg.height;
  ros1_msg.width = ros2_msg.width;
  ros1_msg.fields.resize(ros2_msg.fields.size());
  {
    auto ros2_it = ros2_msg.fields.begin();
    auto ros1_it = ros1_msg.fields.begin();
    for (
      ;
      ros2_it != ros2_msg.fields.end() &&
      ros1_it != ros1_msg.fields.end();
      ++ros2_it, ++ros1_it
    )
    {
      Factory<
        sensor_msgs::PointField,
        sensor_msgs::msg::PointField
      >::convert_2_to_1(
        *ros2_it, *ros1_it);
    }
  }
  ros1_msg.is_bigendian = ros2_msg.is_bigendian;
  ros1_msg.point_step = ros2_msg.point_step;
  ros1_msg.row_step = ros2_msg.row_step;
  ros1_msg.data.resize(ros2_msg.data.size());
  std::copy(
    ros2_msg.data.begin(),
    ros2_msg.data.end(),
    ros1_msg.data.begin());
  ros1_msg.is_dense = ros2_msg.is_dense;
}


template<>
void
Factory<
  sensor_msgs::Range,
  sensor_msgs::msg::Range
>::convert_1_to_2(
  const sensor_msgs::Range & ros1_msg,
  sensor_msgs::msg::Range & ros2_msg)
{
  Factory<
    std_msgs::Header,
    std_msgs::msg::Header
  >::convert_1_to_2(
    ros1_msg.header, ros2_msg.header);
  ros2_msg.radiation_type = ros1_msg.radiation_type;
  ros2_msg.field_of_view = ros1_msg.field_of_view;
  ros2_msg.min_range = ros1_msg.min_range;
  ros2_msg.max_range = ros1_msg.max_range;
  ros2_msg.range = ros1_msg.range;
}

template<>
void
Factory<
  sensor_msgs::Range,
  sensor_msgs::msg::Range
>::convert_2_to_1(
  const sensor_msgs::msg::Range & ros2_msg,
  sensor_msgs::Range & ros1_msg)
{
  Factory<
    std_msgs::Header,
    std_msgs::msg::Header
  >::convert_2_to_1(
    ros2_msg.header, ros1_msg.header);
  ros1_msg.radiation_type = ros2_msg.radiation_type;
  ros1_msg.field_of_view = ros2_msg.field_of_view;
  ros1_msg.min_range = ros2_msg.min_range;
  ros1_msg.max_range = ros2_msg.max_range;
  ros1_msg.range = ros2_msg.range;
}


template<>
void
Factory<
  sensor_msgs::RelativeHumidity,
  sensor_msgs::msg::RelativeHumidity
>::convert_1_to_2(
  const sensor_msgs::RelativeHumidity & ros1_msg,
  sensor_msgs::msg::RelativeHumidity & ros2_msg)
{
  Factory<
    std_msgs::Header,
    std_msgs::msg::Header
  >::convert_1_to_2(
    ros1_msg.header, ros2_msg.header);
  ros2_msg.relative_humidity = ros1_msg.relative_humidity;
  ros2_msg.variance = ros1_msg.variance;
}

template<>
void
Factory<
  sensor_msgs::RelativeHumidity,
  sensor_msgs::msg::RelativeHumidity
>::convert_2_to_1(
  const sensor_msgs::msg::RelativeHumidity & ros2_msg,
  sensor_msgs::RelativeHumidity & ros1_msg)
{
  Factory<
    std_msgs::Header,
    std_msgs::msg::Header
  >::convert_2_to_1(
    ros2_msg.header, ros1_msg.header);
  ros1_msg.relative_humidity = ros2_msg.relative_humidity;
  ros1_msg.variance = ros2_msg.variance;
}


template<>
void
Factory<
  sensor_msgs::Temperature,
  sensor_msgs::msg::Temperature
>::convert_1_to_2(
  const sensor_msgs::Temperature & ros1_msg,
  sensor_msgs::msg::Temperature & ros2_msg)
{
  Factory<
    std_msgs::Header,
    std_msgs::msg::Header
  >::convert_1_to_2(
    ros1_msg.header, ros2_msg.header);
  ros2_msg.temperature = ros1_msg.temperature;
  ros2_msg.variance = ros1_msg.variance;
}

template<>
void
Factory<
  sensor_msgs::Temperature,
  sensor_msgs::msg::Temperature
>::convert_2_to_1(
  const sensor_msgs::msg::Temperature & ros2_msg,
  sensor_msgs::Temperature & ros1_msg)
{
  Factory<
    std_msgs::Header,
    std_msgs::msg::Header
  >::convert_2_to_1(
    ros2_msg.header, ros1_msg.header);
  ros1_msg.temperature = ros2_msg.temperature;
  ros1_msg.variance = ros2_msg.variance;
}


template<>
void
Factory<
  sensor_msgs::TimeReference,
  sensor_msgs::msg::TimeReference
>::convert_1_to_2(
  const sensor_msgs::TimeReference & ros1_msg,
  sensor_msgs::msg::TimeReference & ros2_msg)
{
  Factory<
    std_msgs::Header,
    std_msgs::msg::Header
  >::convert_1_to_2(
    ros1_msg.header, ros2_msg.header);
  ros1_bridge::convert_1_to_2(ros1_msg.time_ref, ros2_msg.time_ref);
  ros2_msg.source = ros1_msg.source;
}

template<>
void
Factory<
  sensor_msgs::TimeReference,
  sensor_msgs::msg::TimeReference
>::convert_2_to_1(
  const sensor_msgs::msg::TimeReference & ros2_msg,
  sensor_msgs::TimeReference & ros1_msg)
{
  Factory<
    std_msgs::Header,
    std_msgs::msg::Header
  >::convert_2_to_1(
    ros2_msg.header, ros1_msg.header);
  ros1_bridge::convert_2_to_1(ros2_msg.time_ref, ros1_msg.time_ref);
  ros1_msg.source = ros2_msg.source;
}


template<>
void
Factory<
  std_msgs::Int16,
  std_msgs::msg::Int16
>::convert_1_to_2(
  const std_msgs::Int16 & ros1_msg,
  std_msgs::msg::Int16 & ros2_msg)
{
  ros2_msg.data = ros1_msg.data;
}

template<>
void
Factory<
  std_msgs::Int16,
  std_msgs::msg::Int16
>::convert_2_to_1(
  const std_msgs::msg::Int16 & ros2_msg,
  std_msgs::Int16 & ros1_msg)
{
  ros1_msg.data = ros2_msg.data;
}


template<>
void
Factory<
  std_msgs::Int32,
  std_msgs::msg::Int32
>::convert_1_to_2(
  const std_msgs::Int32 & ros1_msg,
  std_msgs::msg::Int32 & ros2_msg)
{
  ros2_msg.data = ros1_msg.data;
}

template<>
void
Factory<
  std_msgs::Int32,
  std_msgs::msg::Int32
>::convert_2_to_1(
  const std_msgs::msg::Int32 & ros2_msg,
  std_msgs::Int32 & ros1_msg)
{
  ros1_msg.data = ros2_msg.data;
}


template<>
void
Factory<
  std_msgs::Int64,
  std_msgs::msg::Int64
>::convert_1_to_2(
  const std_msgs::Int64 & ros1_msg,
  std_msgs::msg::Int64 & ros2_msg)
{
  ros2_msg.data = ros1_msg.data;
}

template<>
void
Factory<
  std_msgs::Int64,
  std_msgs::msg::Int64
>::convert_2_to_1(
  const std_msgs::msg::Int64 & ros2_msg,
  std_msgs::Int64 & ros1_msg)
{
  ros1_msg.data = ros2_msg.data;
}


template<>
void
Factory<
  std_msgs::Int8,
  std_msgs::msg::Int8
>::convert_1_to_2(
  const std_msgs::Int8 & ros1_msg,
  std_msgs::msg::Int8 & ros2_msg)
{
  ros2_msg.data = ros1_msg.data;
}

template<>
void
Factory<
  std_msgs::Int8,
  std_msgs::msg::Int8
>::convert_2_to_1(
  const std_msgs::msg::Int8 & ros2_msg,
  std_msgs::Int8 & ros1_msg)
{
  ros1_msg.data = ros2_msg.data;
}


template<>
void
Factory<
  std_msgs::MultiArrayDimension,
  std_msgs::msg::MultiArrayDimension
>::convert_1_to_2(
  const std_msgs::MultiArrayDimension & ros1_msg,
  std_msgs::msg::MultiArrayDimension & ros2_msg)
{
  ros2_msg.label = ros1_msg.label;
  ros2_msg.size = ros1_msg.size;
  ros2_msg.stride = ros1_msg.stride;
}

template<>
void
Factory<
  std_msgs::MultiArrayDimension,
  std_msgs::msg::MultiArrayDimension
>::convert_2_to_1(
  const std_msgs::msg::MultiArrayDimension & ros2_msg,
  std_msgs::MultiArrayDimension & ros1_msg)
{
  ros1_msg.label = ros2_msg.label;
  ros1_msg.size = ros2_msg.size;
  ros1_msg.stride = ros2_msg.stride;
}


template<>
void
Factory<
  std_msgs::MultiArrayLayout,
  std_msgs::msg::MultiArrayLayout
>::convert_1_to_2(
  const std_msgs::MultiArrayLayout & ros1_msg,
  std_msgs::msg::MultiArrayLayout & ros2_msg)
{
  ros2_msg.dim.resize(ros1_msg.dim.size());
  {
    auto ros1_it = ros1_msg.dim.begin();
    auto ros2_it = ros2_msg.dim.begin();
    for (
      ;
      ros1_it != ros1_msg.dim.end() &&
      ros2_it != ros2_msg.dim.end();
      ++ros1_it, ++ros2_it
    )
    {
      Factory<
        std_msgs::MultiArrayDimension,
        std_msgs::msg::MultiArrayDimension
      >::convert_1_to_2(
        *ros1_it, *ros2_it);
    }
  }
  ros2_msg.data_offset = ros1_msg.data_offset;
}

template<>
void
Factory<
  std_msgs::MultiArrayLayout,
  std_msgs::msg::MultiArrayLayout
>::convert_2_to_1(
  const std_msgs::msg::MultiArrayLayout & ros2_msg,
  std_msgs::MultiArrayLayout & ros1_msg)
{
  ros1_msg.dim.resize(ros2_msg.dim.size());
  {
    auto ros2_it = ros2_msg.dim.begin();
    auto ros1_it = ros1_msg.dim.begin();
    for (
      ;
      ros2_it != ros2_msg.dim.end() &&
      ros1_it != ros1_msg.dim.end();
      ++ros2_it, ++ros1_it
    )
    {
      Factory<
        std_msgs::MultiArrayDimension,
        std_msgs::msg::MultiArrayDimension
      >::convert_2_to_1(
        *ros2_it, *ros1_it);
    }
  }
  ros1_msg.data_offset = ros2_msg.data_offset;
}


template<>
void
Factory<
  std_msgs::ByteMultiArray,
  std_msgs::msg::ByteMultiArray
>::convert_1_to_2(
  const std_msgs::ByteMultiArray & ros1_msg,
  std_msgs::msg::ByteMultiArray & ros2_msg)
{
  Factory<
    std_msgs::MultiArrayLayout,
    std_msgs::msg::MultiArrayLayout
  >::convert_1_to_2(
    ros1_msg.layout, ros2_msg.layout);
  ros2_msg.data.resize(ros1_msg.data.size());
  std::copy(
    ros1_msg.data.begin(),
    ros1_msg.data.end(),
    ros2_msg.data.begin());
}

template<>
void
Factory<
  std_msgs::ByteMultiArray,
  std_msgs::msg::ByteMultiArray
>::convert_2_to_1(
  const std_msgs::msg::ByteMultiArray & ros2_msg,
  std_msgs::ByteMultiArray & ros1_msg)
{
  Factory<
    std_msgs::MultiArrayLayout,
    std_msgs::msg::MultiArrayLayout
  >::convert_2_to_1(
    ros2_msg.layout, ros1_msg.layout);
  ros1_msg.data.resize(ros2_msg.data.size());
  std::copy(
    ros2_msg.data.begin(),
    ros2_msg.data.end(),
    ros1_msg.data.begin());
}


template<>
void
Factory<
  std_msgs::Float32MultiArray,
  std_msgs::msg::Float32MultiArray
>::convert_1_to_2(
  const std_msgs::Float32MultiArray & ros1_msg,
  std_msgs::msg::Float32MultiArray & ros2_msg)
{
  Factory<
    std_msgs::MultiArrayLayout,
    std_msgs::msg::MultiArrayLayout
  >::convert_1_to_2(
    ros1_msg.layout, ros2_msg.layout);
  ros2_msg.data.resize(ros1_msg.data.size());
  std::copy(
    ros1_msg.data.begin(),
    ros1_msg.data.end(),
    ros2_msg.data.begin());
}

template<>
void
Factory<
  std_msgs::Float32MultiArray,
  std_msgs::msg::Float32MultiArray
>::convert_2_to_1(
  const std_msgs::msg::Float32MultiArray & ros2_msg,
  std_msgs::Float32MultiArray & ros1_msg)
{
  Factory<
    std_msgs::MultiArrayLayout,
    std_msgs::msg::MultiArrayLayout
  >::convert_2_to_1(
    ros2_msg.layout, ros1_msg.layout);
  ros1_msg.data.resize(ros2_msg.data.size());
  std::copy(
    ros2_msg.data.begin(),
    ros2_msg.data.end(),
    ros1_msg.data.begin());
}


template<>
void
Factory<
  std_msgs::Float64MultiArray,
  std_msgs::msg::Float64MultiArray
>::convert_1_to_2(
  const std_msgs::Float64MultiArray & ros1_msg,
  std_msgs::msg::Float64MultiArray & ros2_msg)
{
  Factory<
    std_msgs::MultiArrayLayout,
    std_msgs::msg::MultiArrayLayout
  >::convert_1_to_2(
    ros1_msg.layout, ros2_msg.layout);
  ros2_msg.data.resize(ros1_msg.data.size());
  std::copy(
    ros1_msg.data.begin(),
    ros1_msg.data.end(),
    ros2_msg.data.begin());
}

template<>
void
Factory<
  std_msgs::Float64MultiArray,
  std_msgs::msg::Float64MultiArray
>::convert_2_to_1(
  const std_msgs::msg::Float64MultiArray & ros2_msg,
  std_msgs::Float64MultiArray & ros1_msg)
{
  Factory<
    std_msgs::MultiArrayLayout,
    std_msgs::msg::MultiArrayLayout
  >::convert_2_to_1(
    ros2_msg.layout, ros1_msg.layout);
  ros1_msg.data.resize(ros2_msg.data.size());
  std::copy(
    ros2_msg.data.begin(),
    ros2_msg.data.end(),
    ros1_msg.data.begin());
}


template<>
void
Factory<
  std_msgs::Int16MultiArray,
  std_msgs::msg::Int16MultiArray
>::convert_1_to_2(
  const std_msgs::Int16MultiArray & ros1_msg,
  std_msgs::msg::Int16MultiArray & ros2_msg)
{
  Factory<
    std_msgs::MultiArrayLayout,
    std_msgs::msg::MultiArrayLayout
  >::convert_1_to_2(
    ros1_msg.layout, ros2_msg.layout);
  ros2_msg.data.resize(ros1_msg.data.size());
  std::copy(
    ros1_msg.data.begin(),
    ros1_msg.data.end(),
    ros2_msg.data.begin());
}

template<>
void
Factory<
  std_msgs::Int16MultiArray,
  std_msgs::msg::Int16MultiArray
>::convert_2_to_1(
  const std_msgs::msg::Int16MultiArray & ros2_msg,
  std_msgs::Int16MultiArray & ros1_msg)
{
  Factory<
    std_msgs::MultiArrayLayout,
    std_msgs::msg::MultiArrayLayout
  >::convert_2_to_1(
    ros2_msg.layout, ros1_msg.layout);
  ros1_msg.data.resize(ros2_msg.data.size());
  std::copy(
    ros2_msg.data.begin(),
    ros2_msg.data.end(),
    ros1_msg.data.begin());
}


template<>
void
Factory<
  std_msgs::Int32MultiArray,
  std_msgs::msg::Int32MultiArray
>::convert_1_to_2(
  const std_msgs::Int32MultiArray & ros1_msg,
  std_msgs::msg::Int32MultiArray & ros2_msg)
{
  Factory<
    std_msgs::MultiArrayLayout,
    std_msgs::msg::MultiArrayLayout
  >::convert_1_to_2(
    ros1_msg.layout, ros2_msg.layout);
  ros2_msg.data.resize(ros1_msg.data.size());
  std::copy(
    ros1_msg.data.begin(),
    ros1_msg.data.end(),
    ros2_msg.data.begin());
}

template<>
void
Factory<
  std_msgs::Int32MultiArray,
  std_msgs::msg::Int32MultiArray
>::convert_2_to_1(
  const std_msgs::msg::Int32MultiArray & ros2_msg,
  std_msgs::Int32MultiArray & ros1_msg)
{
  Factory<
    std_msgs::MultiArrayLayout,
    std_msgs::msg::MultiArrayLayout
  >::convert_2_to_1(
    ros2_msg.layout, ros1_msg.layout);
  ros1_msg.data.resize(ros2_msg.data.size());
  std::copy(
    ros2_msg.data.begin(),
    ros2_msg.data.end(),
    ros1_msg.data.begin());
}


template<>
void
Factory<
  std_msgs::Int64MultiArray,
  std_msgs::msg::Int64MultiArray
>::convert_1_to_2(
  const std_msgs::Int64MultiArray & ros1_msg,
  std_msgs::msg::Int64MultiArray & ros2_msg)
{
  Factory<
    std_msgs::MultiArrayLayout,
    std_msgs::msg::MultiArrayLayout
  >::convert_1_to_2(
    ros1_msg.layout, ros2_msg.layout);
  ros2_msg.data.resize(ros1_msg.data.size());
  std::copy(
    ros1_msg.data.begin(),
    ros1_msg.data.end(),
    ros2_msg.data.begin());
}

template<>
void
Factory<
  std_msgs::Int64MultiArray,
  std_msgs::msg::Int64MultiArray
>::convert_2_to_1(
  const std_msgs::msg::Int64MultiArray & ros2_msg,
  std_msgs::Int64MultiArray & ros1_msg)
{
  Factory<
    std_msgs::MultiArrayLayout,
    std_msgs::msg::MultiArrayLayout
  >::convert_2_to_1(
    ros2_msg.layout, ros1_msg.layout);
  ros1_msg.data.resize(ros2_msg.data.size());
  std::copy(
    ros2_msg.data.begin(),
    ros2_msg.data.end(),
    ros1_msg.data.begin());
}


template<>
void
Factory<
  std_msgs::Int8MultiArray,
  std_msgs::msg::Int8MultiArray
>::convert_1_to_2(
  const std_msgs::Int8MultiArray & ros1_msg,
  std_msgs::msg::Int8MultiArray & ros2_msg)
{
  Factory<
    std_msgs::MultiArrayLayout,
    std_msgs::msg::MultiArrayLayout
  >::convert_1_to_2(
    ros1_msg.layout, ros2_msg.layout);
  ros2_msg.data.resize(ros1_msg.data.size());
  std::copy(
    ros1_msg.data.begin(),
    ros1_msg.data.end(),
    ros2_msg.data.begin());
}

template<>
void
Factory<
  std_msgs::Int8MultiArray,
  std_msgs::msg::Int8MultiArray
>::convert_2_to_1(
  const std_msgs::msg::Int8MultiArray & ros2_msg,
  std_msgs::Int8MultiArray & ros1_msg)
{
  Factory<
    std_msgs::MultiArrayLayout,
    std_msgs::msg::MultiArrayLayout
  >::convert_2_to_1(
    ros2_msg.layout, ros1_msg.layout);
  ros1_msg.data.resize(ros2_msg.data.size());
  std::copy(
    ros2_msg.data.begin(),
    ros2_msg.data.end(),
    ros1_msg.data.begin());
}


template<>
void
Factory<
  std_msgs::String,
  std_msgs::msg::String
>::convert_1_to_2(
  const std_msgs::String & ros1_msg,
  std_msgs::msg::String & ros2_msg)
{
  ros2_msg.data = ros1_msg.data;
}

template<>
void
Factory<
  std_msgs::String,
  std_msgs::msg::String
>::convert_2_to_1(
  const std_msgs::msg::String & ros2_msg,
  std_msgs::String & ros1_msg)
{
  ros1_msg.data = ros2_msg.data;
}


template<>
void
Factory<
  std_msgs::UInt16,
  std_msgs::msg::UInt16
>::convert_1_to_2(
  const std_msgs::UInt16 & ros1_msg,
  std_msgs::msg::UInt16 & ros2_msg)
{
  ros2_msg.data = ros1_msg.data;
}

template<>
void
Factory<
  std_msgs::UInt16,
  std_msgs::msg::UInt16
>::convert_2_to_1(
  const std_msgs::msg::UInt16 & ros2_msg,
  std_msgs::UInt16 & ros1_msg)
{
  ros1_msg.data = ros2_msg.data;
}


template<>
void
Factory<
  std_msgs::UInt16MultiArray,
  std_msgs::msg::UInt16MultiArray
>::convert_1_to_2(
  const std_msgs::UInt16MultiArray & ros1_msg,
  std_msgs::msg::UInt16MultiArray & ros2_msg)
{
  Factory<
    std_msgs::MultiArrayLayout,
    std_msgs::msg::MultiArrayLayout
  >::convert_1_to_2(
    ros1_msg.layout, ros2_msg.layout);
  ros2_msg.data.resize(ros1_msg.data.size());
  std::copy(
    ros1_msg.data.begin(),
    ros1_msg.data.end(),
    ros2_msg.data.begin());
}

template<>
void
Factory<
  std_msgs::UInt16MultiArray,
  std_msgs::msg::UInt16MultiArray
>::convert_2_to_1(
  const std_msgs::msg::UInt16MultiArray & ros2_msg,
  std_msgs::UInt16MultiArray & ros1_msg)
{
  Factory<
    std_msgs::MultiArrayLayout,
    std_msgs::msg::MultiArrayLayout
  >::convert_2_to_1(
    ros2_msg.layout, ros1_msg.layout);
  ros1_msg.data.resize(ros2_msg.data.size());
  std::copy(
    ros2_msg.data.begin(),
    ros2_msg.data.end(),
    ros1_msg.data.begin());
}


template<>
void
Factory<
  std_msgs::UInt32,
  std_msgs::msg::UInt32
>::convert_1_to_2(
  const std_msgs::UInt32 & ros1_msg,
  std_msgs::msg::UInt32 & ros2_msg)
{
  ros2_msg.data = ros1_msg.data;
}

template<>
void
Factory<
  std_msgs::UInt32,
  std_msgs::msg::UInt32
>::convert_2_to_1(
  const std_msgs::msg::UInt32 & ros2_msg,
  std_msgs::UInt32 & ros1_msg)
{
  ros1_msg.data = ros2_msg.data;
}


template<>
void
Factory<
  std_msgs::UInt32MultiArray,
  std_msgs::msg::UInt32MultiArray
>::convert_1_to_2(
  const std_msgs::UInt32MultiArray & ros1_msg,
  std_msgs::msg::UInt32MultiArray & ros2_msg)
{
  Factory<
    std_msgs::MultiArrayLayout,
    std_msgs::msg::MultiArrayLayout
  >::convert_1_to_2(
    ros1_msg.layout, ros2_msg.layout);
  ros2_msg.data.resize(ros1_msg.data.size());
  std::copy(
    ros1_msg.data.begin(),
    ros1_msg.data.end(),
    ros2_msg.data.begin());
}

template<>
void
Factory<
  std_msgs::UInt32MultiArray,
  std_msgs::msg::UInt32MultiArray
>::convert_2_to_1(
  const std_msgs::msg::UInt32MultiArray & ros2_msg,
  std_msgs::UInt32MultiArray & ros1_msg)
{
  Factory<
    std_msgs::MultiArrayLayout,
    std_msgs::msg::MultiArrayLayout
  >::convert_2_to_1(
    ros2_msg.layout, ros1_msg.layout);
  ros1_msg.data.resize(ros2_msg.data.size());
  std::copy(
    ros2_msg.data.begin(),
    ros2_msg.data.end(),
    ros1_msg.data.begin());
}


template<>
void
Factory<
  std_msgs::UInt64,
  std_msgs::msg::UInt64
>::convert_1_to_2(
  const std_msgs::UInt64 & ros1_msg,
  std_msgs::msg::UInt64 & ros2_msg)
{
  ros2_msg.data = ros1_msg.data;
}

template<>
void
Factory<
  std_msgs::UInt64,
  std_msgs::msg::UInt64
>::convert_2_to_1(
  const std_msgs::msg::UInt64 & ros2_msg,
  std_msgs::UInt64 & ros1_msg)
{
  ros1_msg.data = ros2_msg.data;
}


template<>
void
Factory<
  std_msgs::UInt64MultiArray,
  std_msgs::msg::UInt64MultiArray
>::convert_1_to_2(
  const std_msgs::UInt64MultiArray & ros1_msg,
  std_msgs::msg::UInt64MultiArray & ros2_msg)
{
  Factory<
    std_msgs::MultiArrayLayout,
    std_msgs::msg::MultiArrayLayout
  >::convert_1_to_2(
    ros1_msg.layout, ros2_msg.layout);
  ros2_msg.data.resize(ros1_msg.data.size());
  std::copy(
    ros1_msg.data.begin(),
    ros1_msg.data.end(),
    ros2_msg.data.begin());
}

template<>
void
Factory<
  std_msgs::UInt64MultiArray,
  std_msgs::msg::UInt64MultiArray
>::convert_2_to_1(
  const std_msgs::msg::UInt64MultiArray & ros2_msg,
  std_msgs::UInt64MultiArray & ros1_msg)
{
  Factory<
    std_msgs::MultiArrayLayout,
    std_msgs::msg::MultiArrayLayout
  >::convert_2_to_1(
    ros2_msg.layout, ros1_msg.layout);
  ros1_msg.data.resize(ros2_msg.data.size());
  std::copy(
    ros2_msg.data.begin(),
    ros2_msg.data.end(),
    ros1_msg.data.begin());
}


template<>
void
Factory<
  std_msgs::UInt8,
  std_msgs::msg::UInt8
>::convert_1_to_2(
  const std_msgs::UInt8 & ros1_msg,
  std_msgs::msg::UInt8 & ros2_msg)
{
  ros2_msg.data = ros1_msg.data;
}

template<>
void
Factory<
  std_msgs::UInt8,
  std_msgs::msg::UInt8
>::convert_2_to_1(
  const std_msgs::msg::UInt8 & ros2_msg,
  std_msgs::UInt8 & ros1_msg)
{
  ros1_msg.data = ros2_msg.data;
}


template<>
void
Factory<
  std_msgs::UInt8MultiArray,
  std_msgs::msg::UInt8MultiArray
>::convert_1_to_2(
  const std_msgs::UInt8MultiArray & ros1_msg,
  std_msgs::msg::UInt8MultiArray & ros2_msg)
{
  Factory<
    std_msgs::MultiArrayLayout,
    std_msgs::msg::MultiArrayLayout
  >::convert_1_to_2(
    ros1_msg.layout, ros2_msg.layout);
  ros2_msg.data.resize(ros1_msg.data.size());
  std::copy(
    ros1_msg.data.begin(),
    ros1_msg.data.end(),
    ros2_msg.data.begin());
}

template<>
void
Factory<
  std_msgs::UInt8MultiArray,
  std_msgs::msg::UInt8MultiArray
>::convert_2_to_1(
  const std_msgs::msg::UInt8MultiArray & ros2_msg,
  std_msgs::UInt8MultiArray & ros1_msg)
{
  Factory<
    std_msgs::MultiArrayLayout,
    std_msgs::msg::MultiArrayLayout
  >::convert_2_to_1(
    ros2_msg.layout, ros1_msg.layout);
  ros1_msg.data.resize(ros2_msg.data.size());
  std::copy(
    ros2_msg.data.begin(),
    ros2_msg.data.end(),
    ros1_msg.data.begin());
}

}  // namespace ros1_bridge
