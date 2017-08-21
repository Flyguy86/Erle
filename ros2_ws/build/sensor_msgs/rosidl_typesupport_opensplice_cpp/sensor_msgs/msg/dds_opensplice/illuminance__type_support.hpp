// generated from rosidl_typesupport_opensplice_cpp/resource/msg__type_support.hpp.template

#ifndef __sensor_msgs__msg__dds_opensplice__illuminance__type_support__hpp__
#define __sensor_msgs__msg__dds_opensplice__illuminance__type_support__hpp__

#include "sensor_msgs/msg/illuminance__struct.hpp"
#include "sensor_msgs/msg/dds_opensplice/ccpp_Illuminance_.h"
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
extern void register_type__Illuminance(
  DDS::DomainParticipant * participant,
  const char * type_name);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs
extern void convert_ros_message_to_dds(
  const sensor_msgs::msg::Illuminance& ros_message,
  sensor_msgs::msg::dds_::Illuminance_& dds_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs
extern void publish__Illuminance(
  DDS::DataWriter * topic_writer,
  const void * untyped_ros_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs
extern void convert_dds_message_to_ros(
  const sensor_msgs::msg::dds_::Illuminance_& dds_message,
  sensor_msgs::msg::Illuminance& ros_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs
extern bool take__Illuminance(
  DDS::DataReader * topic_reader,
  bool ignore_local_publications,
  void * untyped_ros_message,
  bool * taken);

}  // namespace typesupport_opensplice_cpp

}  // namespace msg

}  // namespace sensor_msgs

#endif  // __sensor_msgs__msg__dds_opensplice__illuminance__type_support__hpp__
