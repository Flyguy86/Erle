// generated from rosidl_typesupport_introspection_cpp/resource/msg__type_support.cpp.template

#ifndef __nav_msgs__msg__occupancy_grid__type_support__h__
#define __nav_msgs__msg__occupancy_grid__type_support__h__

// providing offsetof()
#include <cstddef>

#include <rosidl_generator_c/message_type_support.h>
// this is defined in the rosidl_typesupport_introspection_cpp package and
// is in the include/rosidl_typesupport_introspection_cpp/impl folder
#include <rosidl_generator_cpp/message_type_support.hpp>

#include "nav_msgs/msg/occupancy_grid__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace nav_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

static const ::rosidl_typesupport_introspection_cpp::MessageMember OccupancyGrid_message_member_array[3] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle_introspection<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nav_msgs::msg::OccupancyGrid, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "info",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle_introspection<nav_msgs::msg::MapMetaData>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nav_msgs::msg::OccupancyGrid, info),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "data",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nav_msgs::msg::OccupancyGrid, data),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers OccupancyGrid_message_members = {
  "nav_msgs",  // package name
  "OccupancyGrid",  // message name
  3,  // number of fields
  OccupancyGrid_message_member_array  // message members
};

static const rosidl_message_type_support_t OccupancyGrid_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_introspection_identifier,
  &OccupancyGrid_message_members
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace nav_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle_introspection<nav_msgs::msg::OccupancyGrid>()
{
  return &::nav_msgs::msg::rosidl_typesupport_introspection_cpp::OccupancyGrid_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#endif  // __nav_msgs__msg__occupancy_grid__type_support__h__
