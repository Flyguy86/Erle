// generated from rosidl_typesupport_introspection_cpp/resource/msg__type_support.cpp.template

#ifndef __pendulum_msgs__msg__joint_command__type_support__h__
#define __pendulum_msgs__msg__joint_command__type_support__h__

// providing offsetof()
#include <cstddef>

#include <rosidl_generator_c/message_type_support.h>
// this is defined in the rosidl_typesupport_introspection_cpp package and
// is in the include/rosidl_typesupport_introspection_cpp/impl folder
#include <rosidl_generator_cpp/message_type_support.hpp>

#include "pendulum_msgs/msg/joint_command__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace pendulum_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

static const ::rosidl_typesupport_introspection_cpp::MessageMember JointCommand_message_member_array[1] = {
  {
    "position",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pendulum_msgs::msg::JointCommand, position),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers JointCommand_message_members = {
  "pendulum_msgs",  // package name
  "JointCommand",  // message name
  1,  // number of fields
  JointCommand_message_member_array  // message members
};

static const rosidl_message_type_support_t JointCommand_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_introspection_identifier,
  &JointCommand_message_members
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace pendulum_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle_introspection<pendulum_msgs::msg::JointCommand>()
{
  return &::pendulum_msgs::msg::rosidl_typesupport_introspection_cpp::JointCommand_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#endif  // __pendulum_msgs__msg__joint_command__type_support__h__
