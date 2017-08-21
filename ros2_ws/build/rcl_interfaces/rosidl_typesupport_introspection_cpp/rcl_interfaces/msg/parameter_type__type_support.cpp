// generated from rosidl_typesupport_introspection_cpp/resource/msg__type_support.cpp.template

#ifndef __rcl_interfaces__msg__parameter_type__type_support__h__
#define __rcl_interfaces__msg__parameter_type__type_support__h__

// providing offsetof()
#include <cstddef>

#include <rosidl_generator_c/message_type_support.h>
// this is defined in the rosidl_typesupport_introspection_cpp package and
// is in the include/rosidl_typesupport_introspection_cpp/impl folder
#include <rosidl_generator_cpp/message_type_support.hpp>

#include "rcl_interfaces/msg/parameter_type__struct.hpp"
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

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ParameterType_message_members = {
  "rcl_interfaces",  // package name
  "ParameterType",  // message name
  0,  // number of fields
  0  // message members
};

static const rosidl_message_type_support_t ParameterType_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_introspection_identifier,
  &ParameterType_message_members
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace rcl_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle_introspection<rcl_interfaces::msg::ParameterType>()
{
  return &::rcl_interfaces::msg::rosidl_typesupport_introspection_cpp::ParameterType_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#endif  // __rcl_interfaces__msg__parameter_type__type_support__h__
