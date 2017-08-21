// generated from rosidl_typesupport_introspection_cpp/resource/msg__type_support.cpp.template

#ifndef __rcl_interfaces__srv__list_parameters__request__type_support__h__
#define __rcl_interfaces__srv__list_parameters__request__type_support__h__

// providing offsetof()
#include <cstddef>

#include <rosidl_generator_c/message_type_support.h>
// this is defined in the rosidl_typesupport_introspection_cpp package and
// is in the include/rosidl_typesupport_introspection_cpp/impl folder
#include <rosidl_generator_cpp/message_type_support.hpp>

#include "rcl_interfaces/srv/list_parameters__request__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace rcl_interfaces
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

static const ::rosidl_typesupport_introspection_cpp::MessageMember ListParameters_Request_message_member_array[2] = {
  {
    "prefixes",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rcl_interfaces::srv::ListParameters_Request, prefixes),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "depth",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rcl_interfaces::srv::ListParameters_Request, depth),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ListParameters_Request_message_members = {
  "rcl_interfaces",  // package name
  "ListParameters_Request",  // message name
  2,  // number of fields
  ListParameters_Request_message_member_array  // message members
};

static const rosidl_message_type_support_t ListParameters_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_introspection_identifier,
  &ListParameters_Request_message_members
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace rcl_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle_introspection<rcl_interfaces::srv::ListParameters_Request>()
{
  return &::rcl_interfaces::srv::rosidl_typesupport_introspection_cpp::ListParameters_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#endif  // __rcl_interfaces__srv__list_parameters__request__type_support__h__
