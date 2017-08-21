// generated from rosidl_typesupport_opensplice_cpp/resource/msg__type_support.hpp.template

#ifndef __std_srvs__srv__dds_opensplice__trigger__request__type_support__hpp__
#define __std_srvs__srv__dds_opensplice__trigger__request__type_support__hpp__

#include "std_srvs/srv/trigger__request__struct.hpp"
#include "std_srvs/srv/dds_opensplice/ccpp_Trigger_Request_.h"
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
extern void register_type__Trigger_Request(
  DDS::DomainParticipant * participant,
  const char * type_name);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_std_srvs
extern void convert_ros_message_to_dds(
  const std_srvs::srv::Trigger_Request& ros_message,
  std_srvs::srv::dds_::Trigger_Request_& dds_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_std_srvs
extern void publish__Trigger_Request(
  DDS::DataWriter * topic_writer,
  const void * untyped_ros_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_std_srvs
extern void convert_dds_message_to_ros(
  const std_srvs::srv::dds_::Trigger_Request_& dds_message,
  std_srvs::srv::Trigger_Request& ros_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_std_srvs
extern bool take__Trigger_Request(
  DDS::DataReader * topic_reader,
  bool ignore_local_publications,
  void * untyped_ros_message,
  bool * taken);

}  // namespace typesupport_opensplice_cpp

}  // namespace srv

}  // namespace std_srvs

#endif  // __std_srvs__srv__dds_opensplice__trigger__request__type_support__hpp__
