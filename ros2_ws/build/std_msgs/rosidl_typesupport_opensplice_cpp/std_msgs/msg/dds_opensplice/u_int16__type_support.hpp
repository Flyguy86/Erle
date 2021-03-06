// generated from rosidl_typesupport_opensplice_cpp/resource/msg__type_support.hpp.template

#ifndef __std_msgs__msg__dds_opensplice__u_int16__type_support__hpp__
#define __std_msgs__msg__dds_opensplice__u_int16__type_support__hpp__

#include "std_msgs/msg/u_int16__struct.hpp"
#include "std_msgs/msg/dds_opensplice/ccpp_UInt16_.h"
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
extern void register_type__UInt16(
  DDS::DomainParticipant * participant,
  const char * type_name);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_std_msgs
extern void convert_ros_message_to_dds(
  const std_msgs::msg::UInt16& ros_message,
  std_msgs::msg::dds_::UInt16_& dds_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_std_msgs
extern void publish__UInt16(
  DDS::DataWriter * topic_writer,
  const void * untyped_ros_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_std_msgs
extern void convert_dds_message_to_ros(
  const std_msgs::msg::dds_::UInt16_& dds_message,
  std_msgs::msg::UInt16& ros_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_std_msgs
extern bool take__UInt16(
  DDS::DataReader * topic_reader,
  bool ignore_local_publications,
  void * untyped_ros_message,
  bool * taken);

}  // namespace typesupport_opensplice_cpp

}  // namespace msg

}  // namespace std_msgs

#endif  // __std_msgs__msg__dds_opensplice__u_int16__type_support__hpp__
