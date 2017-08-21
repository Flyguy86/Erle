// generated from rosidl_typesupport_introspection_cpp/resource/msg__type_support.cpp.template

#ifndef __example_interfaces__srv__add_two_ints__response__type_support__h__
#define __example_interfaces__srv__add_two_ints__response__type_support__h__

// providing offsetof()
#include <cstddef>

#include <rosidl_generator_c/message_type_support.h>
// this is defined in the rosidl_typesupport_introspection_cpp package and
// is in the include/rosidl_typesupport_introspection_cpp/impl folder
#include <rosidl_generator_cpp/message_type_support.hpp>

#include "example_interfaces/srv/add_two_ints__response__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace example_interfaces
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

static const ::rosidl_typesupport_introspection_cpp::MessageMember AddTwoInts_Response_message_member_array[1] = {
  {
    "sum",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(example_interfaces::srv::AddTwoInts_Response, sum),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers AddTwoInts_Response_message_members = {
  "example_interfaces",  // package name
  "AddTwoInts_Response",  // message name
  1,  // number of fields
  AddTwoInts_Response_message_member_array  // message members
};

static const rosidl_message_type_support_t AddTwoInts_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_introspection_identifier,
  &AddTwoInts_Response_message_members
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace example_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle_introspection<example_interfaces::srv::AddTwoInts_Response>()
{
  return &::example_interfaces::srv::rosidl_typesupport_introspection_cpp::AddTwoInts_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#endif  // __example_interfaces__srv__add_two_ints__response__type_support__h__
