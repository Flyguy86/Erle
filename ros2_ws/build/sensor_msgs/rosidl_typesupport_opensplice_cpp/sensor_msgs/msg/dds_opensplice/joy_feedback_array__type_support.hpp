// generated from rosidl_typesupport_opensplice_cpp/resource/msg__type_support.hpp.template

#ifndef __sensor_msgs__msg__dds_opensplice__joy_feedback_array__type_support__hpp__
#define __sensor_msgs__msg__dds_opensplice__joy_feedback_array__type_support__hpp__

#include "sensor_msgs/msg/joy_feedback_array__struct.hpp"
#include "sensor_msgs/msg/dds_opensplice/ccpp_JoyFeedbackArray_.h"
#include "sensor_msgs/msg/dds_opensplice/visibility_control.h"

namespace DDS
{
class DomainParticipant;
class DataReader;
class DataWriter;
}  // namespace DDS

namespace sensor_msgs
{

namespace msg
{

namespace typesupport_opensplice_cpp
{

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs
extern void register_type__JoyFeedbackArray(
  DDS::DomainParticipant * participant,
  const char * type_name);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs
extern void convert_ros_message_to_dds(
  const sensor_msgs::msg::JoyFeedbackArray& ros_message,
  sensor_msgs::msg::dds_::JoyFeedbackArray_& dds_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs
extern void publish__JoyFeedbackArray(
  DDS::DataWriter * topic_writer,
  const void * untyped_ros_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs
extern void convert_dds_message_to_ros(
  const sensor_msgs::msg::dds_::JoyFeedbackArray_& dds_message,
  sensor_msgs::msg::JoyFeedbackArray& ros_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs
extern bool take__JoyFeedbackArray(
  DDS::DataReader * topic_reader,
  bool ignore_local_publications,
  void * untyped_ros_message,
  bool * taken);

}  // namespace typesupport_opensplice_cpp

}  // namespace msg

}  // namespace sensor_msgs

#endif  // __sensor_msgs__msg__dds_opensplice__joy_feedback_array__type_support__hpp__
