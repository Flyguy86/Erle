// generated from rosidl_typesupport_opensplice_cpp/resource/msg__type_support.hpp.template

#ifndef __nav_msgs__srv__dds_opensplice__get_map__request__type_support__hpp__
#define __nav_msgs__srv__dds_opensplice__get_map__request__type_support__hpp__

#include "nav_msgs/srv/get_map__request__struct.hpp"
#include "nav_msgs/srv/dds_opensplice/ccpp_GetMap_Request_.h"
#include "nav_msgs/msg/dds_opensplice/visibility_control.h"

namespace DDS
{
class DomainParticipant;
class DataReader;
class DataWriter;
}  // namespace DDS

namespace nav_msgs
{

namespace srv
{

namespace typesupport_opensplice_cpp
{

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_nav_msgs
extern void register_type__GetMap_Request(
  DDS::DomainParticipant * participant,
  const char * type_name);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_nav_msgs
extern void convert_ros_message_to_dds(
  const nav_msgs::srv::GetMap_Request& ros_message,
  nav_msgs::srv::dds_::GetMap_Request_& dds_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_nav_msgs
extern void publish__GetMap_Request(
  DDS::DataWriter * topic_writer,
  const void * untyped_ros_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_nav_msgs
extern void convert_dds_message_to_ros(
  const nav_msgs::srv::dds_::GetMap_Request_& dds_message,
  nav_msgs::srv::GetMap_Request& ros_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_nav_msgs
extern bool take__GetMap_Request(
  DDS::DataReader * topic_reader,
  bool ignore_local_publications,
  void * untyped_ros_message,
  bool * taken);

}  // namespace typesupport_opensplice_cpp

}  // namespace srv

}  // namespace nav_msgs

#endif  // __nav_msgs__srv__dds_opensplice__get_map__request__type_support__hpp__
