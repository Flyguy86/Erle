// generated from rosidl_typesupport_opensplice_cpp/resource/msg__type_support.hpp.template

#ifndef __geometry_msgs__msg__dds_opensplice__pose_with_covariance_stamped__type_support__hpp__
#define __geometry_msgs__msg__dds_opensplice__pose_with_covariance_stamped__type_support__hpp__

#include "geometry_msgs/msg/pose_with_covariance_stamped__struct.hpp"
#include "geometry_msgs/msg/dds_opensplice/ccpp_PoseWithCovarianceStamped_.h"
#include "geometry_msgs/msg/dds_opensplice/visibility_control.h"

namespace DDS
{
class DomainParticipant;
class DataReader;
class DataWriter;
}  // namespace DDS

namespace geometry_msgs
{

namespace msg
{

namespace typesupport_opensplice_cpp
{

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_geometry_msgs
extern void register_type__PoseWithCovarianceStamped(
  DDS::DomainParticipant * participant,
  const char * type_name);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_geometry_msgs
extern void convert_ros_message_to_dds(
  const geometry_msgs::msg::PoseWithCovarianceStamped& ros_message,
  geometry_msgs::msg::dds_::PoseWithCovarianceStamped_& dds_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_geometry_msgs
extern void publish__PoseWithCovarianceStamped(
  DDS::DataWriter * topic_writer,
  const void * untyped_ros_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_geometry_msgs
extern void convert_dds_message_to_ros(
  const geometry_msgs::msg::dds_::PoseWithCovarianceStamped_& dds_message,
  geometry_msgs::msg::PoseWithCovarianceStamped& ros_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_geometry_msgs
extern bool take__PoseWithCovarianceStamped(
  DDS::DataReader * topic_reader,
  bool ignore_local_publications,
  void * untyped_ros_message,
  bool * taken);

}  // namespace typesupport_opensplice_cpp

}  // namespace msg

}  // namespace geometry_msgs

#endif  // __geometry_msgs__msg__dds_opensplice__pose_with_covariance_stamped__type_support__hpp__
