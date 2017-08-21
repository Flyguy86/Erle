// generated from rosidl_typesupport_introspection_cpp/resource/msg__type_support.cpp.template

#ifndef __nav_msgs__srv__get_map__request__type_support__h__
#define __nav_msgs__srv__get_map__request__type_support__h__

// providing offsetof()
#include <cstddef>

#include <rosidl_generator_c/message_type_support.h>
// this is defined in the rosidl_typesupport_introspection_cpp package and
// is in the include/rosidl_typesupport_introspection_cpp/impl folder
#include <rosidl_generator_cpp/message_type_support.hpp>

#include "nav_msgs/srv/get_map__request__struct.hpp"
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

static const ::rosidl_typesupport_introspection_cpp::MessageMembers GetMap_Request_message_members = {
  "nav_msgs",  // package name
  "GetMap_Request",  // message name
  0,  // number of fields
  0  // message members
};

static const rosidl_message_type_support_t GetMap_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_introspection_identifier,
  &GetMap_Request_message_members
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace nav_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle_introspection<nav_msgs::srv::GetMap_Request>()
{
  return &::nav_msgs::srv::rosidl_typesupport_introspection_cpp::GetMap_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#endif  // __nav_msgs__srv__get_map__request__type_support__h__
