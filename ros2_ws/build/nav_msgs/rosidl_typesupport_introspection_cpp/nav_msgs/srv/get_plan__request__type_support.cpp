// generated from rosidl_typesupport_introspection_cpp/resource/msg__type_support.cpp.template

#ifndef __nav_msgs__srv__get_plan__request__type_support__h__
#define __nav_msgs__srv__get_plan__request__type_support__h__

// providing offsetof()
#include <cstddef>

#include <rosidl_generator_c/message_type_support.h>
// this is defined in the rosidl_typesupport_introspection_cpp package and
// is in the include/rosidl_typesupport_introspection_cpp/impl folder
#include <rosidl_generator_cpp/message_type_support.hpp>

#include "nav_msgs/srv/get_plan__request__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace nav_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

static const ::rosidl_typesupport_introspection_cpp::MessageMember GetPlan_Request_message_member_array[3] = {
  {
    "start",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle_introspection<geometry_msgs::msg::PoseStamped>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nav_msgs::srv::GetPlan_Request, start),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "goal",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle_introspection<geometry_msgs::msg::PoseStamped>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nav_msgs::srv::GetPlan_Request, goal),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "tolerance",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nav_msgs::srv::GetPlan_Request, tolerance),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers GetPlan_Request_message_members = {
  "nav_msgs",  // package name
  "GetPlan_Request",  // message name
  3,  // number of fields
  GetPlan_Request_message_member_array  // message members
};

static const rosidl_message_type_support_t GetPlan_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_introspection_identifier,
  &GetPlan_Request_message_members
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace nav_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle_introspection<nav_msgs::srv::GetPlan_Request>()
{
  return &::nav_msgs::srv::rosidl_typesupport_introspection_cpp::GetPlan_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#endif  // __nav_msgs__srv__get_plan__request__type_support__h__
