// generated from rosidl_typesupport_opensplice_cpp/resource/msg__type_support.hpp.template

#ifndef __std_msgs__msg__dds_opensplice__float64__type_support__hpp__
#define __std_msgs__msg__dds_opensplice__float64__type_support__hpp__

#include "std_msgs/msg/float64__struct.hpp"
#include "std_msgs/msg/dds_opensplice/ccpp_Float64_.h"
#include "std_msgs/msg/dds_opensplice/visibility_control.h"

namespace DDS
{
class DomainParticipant;
class DataReader;
class DataWriter;
}  // namespace DDS

namespace std_msgs
{

namespace msg
{

namespace typesupport_opensplice_cpp
{

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_std_msgs
extern void register_type__Float64(
  DDS::DomainParticipant * participant,
  const char * type_name);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_std_msgs
extern void convert_ros_message_to_dds(
  const std_msgs::msg::Float64& ros_message,
  std_msgs::msg::dds_::Float64_& dds_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_std_msgs
extern void publish__Float64(
  DDS::DataWriter * topic_writer,
  const void * untyped_ros_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_std_msgs
extern void convert_dds_message_to_ros(
  const std_msgs::msg::dds_::Float64_& dds_message,
  std_msgs::msg::Float64& ros_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_std_msgs
extern bool take__Float64(
  DDS::DataReader * topic_reader,
  bool ignore_local_publications,
  void * untyped_ros_message,
  bool * taken);

}  // namespace typesupport_opensplice_cpp

}  // namespace msg

}  // namespace std_msgs

#endif  // __std_msgs__msg__dds_opensplice__float64__type_support__hpp__
