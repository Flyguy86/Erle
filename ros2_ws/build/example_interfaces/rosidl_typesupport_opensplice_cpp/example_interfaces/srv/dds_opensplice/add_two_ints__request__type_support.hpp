// generated from rosidl_typesupport_opensplice_cpp/resource/msg__type_support.hpp.template

#ifndef __example_interfaces__srv__dds_opensplice__add_two_ints__request__type_support__hpp__
#define __example_interfaces__srv__dds_opensplice__add_two_ints__request__type_support__hpp__

#include "example_interfaces/srv/add_two_ints__request__struct.hpp"
#include "example_interfaces/srv/dds_opensplice/ccpp_AddTwoInts_Request_.h"
#include "example_interfaces/msg/dds_opensplice/visibility_control.h"

namespace DDS
{
class DomainParticipant;
class DataReader;
class DataWriter;
}  // namespace DDS

namespace example_interfaces
{

namespace srv
{

namespace typesupport_opensplice_cpp
{

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_example_interfaces
extern void register_type__AddTwoInts_Request(
  DDS::DomainParticipant * participant,
  const char * type_name);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_example_interfaces
extern void convert_ros_message_to_dds(
  const example_interfaces::srv::AddTwoInts_Request& ros_message,
  example_interfaces::srv::dds_::AddTwoInts_Request_& dds_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_example_interfaces
extern void publish__AddTwoInts_Request(
  DDS::DataWriter * topic_writer,
  const void * untyped_ros_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_example_interfaces
extern void convert_dds_message_to_ros(
  const example_interfaces::srv::dds_::AddTwoInts_Request_& dds_message,
  example_interfaces::srv::AddTwoInts_Request& ros_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_example_interfaces
extern bool take__AddTwoInts_Request(
  DDS::DataReader * topic_reader,
  bool ignore_local_publications,
  void * untyped_ros_message,
  bool * taken);

}  // namespace typesupport_opensplice_cpp

}  // namespace srv

}  // namespace example_interfaces

#endif  // __example_interfaces__srv__dds_opensplice__add_two_ints__request__type_support__hpp__
