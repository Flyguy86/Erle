// generated from rosidl_typesupport_introspection_cpp/resource/msg__type_support.cpp.template

#ifndef __example_interfaces__msg__large_fixed__type_support__h__
#define __example_interfaces__msg__large_fixed__type_support__h__

// providing offsetof()
#include <cstddef>

#include <rosidl_generator_c/message_type_support.h>
// this is defined in the rosidl_typesupport_introspection_cpp package and
// is in the include/rosidl_typesupport_introspection_cpp/impl folder
#include <rosidl_generator_cpp/message_type_support.hpp>

#include "example_interfaces/msg/large_fixed__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace example_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

static const ::rosidl_typesupport_introspection_cpp::MessageMember LargeFixed_message_member_array[1] = {
  {
    "data",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    255,  // array size
    false,  // is upper bound
    offsetof(example_interfaces::msg::LargeFixed, data),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers LargeFixed_message_members = {
  "example_interfaces",  // package name
  "LargeFixed",  // message name
  1,  // number of fields
  LargeFixed_message_member_array  // message members
};

static const rosidl_message_type_support_t LargeFixed_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_introspection_identifier,
  &LargeFixed_message_members
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace example_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle_introspection<example_interfaces::msg::LargeFixed>()
{
  return &::example_interfaces::msg::rosidl_typesupport_introspection_cpp::LargeFixed_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#endif  // __example_interfaces__msg__large_fixed__type_support__h__
