// generated from rosidl_typesupport_introspection_cpp/resource/msg__type_support.cpp.template

#ifndef __rcl_interfaces__msg__set_parameters_result__type_support__h__
#define __rcl_interfaces__msg__set_parameters_result__type_support__h__

// providing offsetof()
#include <cstddef>

#include <rosidl_generator_c/message_type_support.h>
// this is defined in the rosidl_typesupport_introspection_cpp package and
// is in the include/rosidl_typesupport_introspection_cpp/impl folder
#include <rosidl_generator_cpp/message_type_support.hpp>

#include "rcl_interfaces/msg/set_parameters_result__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace rcl_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

static const ::rosidl_typesupport_introspection_cpp::MessageMember SetParametersResult_message_member_array[2] = {
  {
    "successful",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOL,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rcl_interfaces::msg::SetParametersResult, successful),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "reason",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rcl_interfaces::msg::SetParametersResult, reason),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers SetParametersResult_message_members = {
  "rcl_interfaces",  // package name
  "SetParametersResult",  // message name
  2,  // number of fields
  SetParametersResult_message_member_array  // message members
};

static const rosidl_message_type_support_t SetParametersResult_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_introspection_identifier,
  &SetParametersResult_message_members
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace rcl_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle_introspection<rcl_interfaces::msg::SetParametersResult>()
{
  return &::rcl_interfaces::msg::rosidl_typesupport_introspection_cpp::SetParametersResult_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#endif  // __rcl_interfaces__msg__set_parameters_result__type_support__h__
