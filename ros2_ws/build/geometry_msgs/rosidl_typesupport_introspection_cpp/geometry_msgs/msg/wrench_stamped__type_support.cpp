// generated from rosidl_typesupport_introspection_cpp/resource/msg__type_support.cpp.template

#ifndef __geometry_msgs__msg__wrench_stamped__type_support__h__
#define __geometry_msgs__msg__wrench_stamped__type_support__h__

// providing offsetof()
#include <cstddef>

#include <rosidl_generator_c/message_type_support.h>
// this is defined in the rosidl_typesupport_introspection_cpp package and
// is in the include/rosidl_typesupport_introspection_cpp/impl folder
#include <rosidl_generator_cpp/message_type_support.hpp>

#include "geometry_msgs/msg/wrench_stamped__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace geometry_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

static const ::rosidl_typesupport_introspection_cpp::MessageMember WrenchStamped_message_member_array[2] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle_introspection<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(geometry_msgs::msg::WrenchStamped, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "wrench",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle_introspection<geometry_msgs::msg::Wrench>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(geometry_msgs::msg::WrenchStamped, wrench),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers WrenchStamped_message_members = {
  "geometry_msgs",  // package name
  "WrenchStamped",  // message name
  2,  // number of fields
  WrenchStamped_message_member_array  // message members
};

static const rosidl_message_type_support_t WrenchStamped_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_introspection_identifier,
  &WrenchStamped_message_members
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace geometry_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle_introspection<geometry_msgs::msg::WrenchStamped>()
{
  return &::geometry_msgs::msg::rosidl_typesupport_introspection_cpp::WrenchStamped_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#endif  // __geometry_msgs__msg__wrench_stamped__type_support__h__
