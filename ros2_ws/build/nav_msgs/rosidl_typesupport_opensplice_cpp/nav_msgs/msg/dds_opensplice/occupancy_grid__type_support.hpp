// generated from rosidl_typesupport_opensplice_cpp/resource/msg__type_support.hpp.template

#ifndef __nav_msgs__msg__dds_opensplice__occupancy_grid__type_support__hpp__
#define __nav_msgs__msg__dds_opensplice__occupancy_grid__type_support__hpp__

#include "nav_msgs/msg/occupancy_grid__struct.hpp"
#include "nav_msgs/msg/dds_opensplice/ccpp_OccupancyGrid_.h"
#include "nav_msgs/msg/dds_opensplice/visibility_control.h"

namespace DDS
{
class DomainParticipant;
class DataReader;
class DataWriter;
}  // namespace DDS

namespace nav_msgs
{

namespace msg
{

namespace typesupport_opensplice_cpp
{

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_nav_msgs
extern void register_type__OccupancyGrid(
  DDS::DomainParticipant * participant,
  const char * type_name);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_nav_msgs
extern void convert_ros_message_to_dds(
  const nav_msgs::msg::OccupancyGrid& ros_message,
  nav_msgs::msg::dds_::OccupancyGrid_& dds_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_nav_msgs
extern void publish__OccupancyGrid(
  DDS::DataWriter * topic_writer,
  const void * untyped_ros_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_nav_msgs
extern void convert_dds_message_to_ros(
  const nav_msgs::msg::dds_::OccupancyGrid_& dds_message,
  nav_msgs::msg::OccupancyGrid& ros_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_nav_msgs
extern bool take__OccupancyGrid(
  DDS::DataReader * topic_reader,
  bool ignore_local_publications,
  void * untyped_ros_message,
  bool * taken);

}  // namespace typesupport_opensplice_cpp

}  // namespace msg

}  // namespace nav_msgs

#endif  // __nav_msgs__msg__dds_opensplice__occupancy_grid__type_support__hpp__
