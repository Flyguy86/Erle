// generated from rosidl_typesupport_opensplice_cpp/resource/msg__type_support.hpp.template

#ifndef __geometry_msgs__msg__dds_opensplice__pose2_d__type_support__hpp__
#define __geometry_msgs__msg__dds_opensplice__pose2_d__type_support__hpp__

#include "geometry_msgs/msg/pose2_d__struct.hpp"
#include "geometry_msgs/msg/dds_opensplice/ccpp_Pose2D_.h"
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
extern void register_type__Pose2D(
  DDS::DomainParticipant * participant,
  const char * type_name);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_geometry_msgs
extern void convert_ros_message_to_dds(
  const geometry_msgs::msg::Pose2D& ros_message,
  geometry_msgs::msg::dds_::Pose2D_& dds_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_geometry_msgs
extern void publish__Pose2D(
  DDS::DataWriter * topic_writer,
  const void * untyped_ros_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_geometry_msgs
extern void convert_dds_message_to_ros(
  const geometry_msgs::msg::dds_::Pose2D_& dds_message,
  geometry_msgs::msg::Pose2D& ros_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_geometry_msgs
extern bool take__Pose2D(
  DDS::DataReader * topic_reader,
  bool ignore_local_publications,
  void * untyped_ros_message,
  bool * taken);

}  // namespace typesupport_opensplice_cpp

}  // namespace msg

}  // namespace geometry_msgs

#endif  // __geometry_msgs__msg__dds_opensplice__pose2_d__type_support__hpp__
