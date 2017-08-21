// generated from rosidl_typesupport_opensplice_cpp/resource/msg__type_support.hpp.template

#ifndef __std_srvs__srv__dds_opensplice__empty__response__type_support__hpp__
#define __std_srvs__srv__dds_opensplice__empty__response__type_support__hpp__

#include "std_srvs/srv/empty__response__struct.hpp"
#include "std_srvs/srv/dds_opensplice/ccpp_Empty_Response_.h"
#include "std_srvs/msg/dds_opensplice/visibility_control.h"

namespace DDS
{
class DomainParticipant;
class DataReader;
class DataWriter;
}  // namespace DDS

namespace std_srvs
{

namespace srv
{

namespace typesupport_opensplice_cpp
{

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_std_srvs
extern void register_type__Empty_Response(
  DDS::DomainParticipant * participant,
  const char * type_name);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_std_srvs
extern void convert_ros_message_to_dds(
  const std_srvs::srv::Empty_Response& ros_message,
  std_srvs::srv::dds_::Empty_Response_& dds_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_std_srvs
extern void publish__Empty_Response(
  DDS::DataWriter * topic_writer,
  const void * untyped_ros_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_std_srvs
extern void convert_dds_message_to_ros(
  const std_srvs::srv::dds_::Empty_Response_& dds_message,
  std_srvs::srv::Empty_Response& ros_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_std_srvs
extern bool take__Empty_Response(
  DDS::DataReader * topic_reader,
  bool ignore_local_publications,
  void * untyped_ros_message,
  bool * taken);

}  // namespace typesupport_opensplice_cpp

}  // namespace srv

}  // namespace std_srvs

#endif  // __std_srvs__srv__dds_opensplice__empty__response__type_support__hpp__
