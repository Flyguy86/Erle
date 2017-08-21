// generated from rosidl_typesupport_opensplice_cpp/resource/msg__type_support.hpp.template

#ifndef __sensor_msgs__srv__dds_opensplice__set_camera_info__response__type_support__hpp__
#define __sensor_msgs__srv__dds_opensplice__set_camera_info__response__type_support__hpp__

#include "sensor_msgs/srv/set_camera_info__response__struct.hpp"
#include "sensor_msgs/srv/dds_opensplice/ccpp_SetCameraInfo_Response_.h"
#include "sensor_msgs/msg/dds_opensplice/visibility_control.h"

namespace DDS
{
class DomainParticipant;
class DataReader;
class DataWriter;
}  // namespace DDS

namespace sensor_msgs
{

namespace srv
{

namespace typesupport_opensplice_cpp
{

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs
extern void register_type__SetCameraInfo_Response(
  DDS::DomainParticipant * participant,
  const char * type_name);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs
extern void convert_ros_message_to_dds(
  const sensor_msgs::srv::SetCameraInfo_Response& ros_message,
  sensor_msgs::srv::dds_::SetCameraInfo_Response_& dds_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs
extern void publish__SetCameraInfo_Response(
  DDS::DataWriter * topic_writer,
  const void * untyped_ros_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs
extern void convert_dds_message_to_ros(
  const sensor_msgs::srv::dds_::SetCameraInfo_Response_& dds_message,
  sensor_msgs::srv::SetCameraInfo_Response& ros_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs
extern bool take__SetCameraInfo_Response(
  DDS::DataReader * topic_reader,
  bool ignore_local_publications,
  void * untyped_ros_message,
  bool * taken);

}  // namespace typesupport_opensplice_cpp

}  // namespace srv

}  // namespace sensor_msgs

#endif  // __sensor_msgs__srv__dds_opensplice__set_camera_info__response__type_support__hpp__
