// generated from rosidl_typesupport_introspection_cpp/resource/msg__type_support.cpp.template

#ifndef __std_srvs__srv__trigger__request__type_support__h__
#define __std_srvs__srv__trigger__request__type_support__h__

// providing offsetof()
#include <cstddef>

#include <rosidl_generator_c/message_type_support.h>
// this is defined in the rosidl_typesupport_introspection_cpp package and
// is in the include/rosidl_typesupport_introspection_cpp/impl folder
#include <rosidl_generator_cpp/message_type_support.hpp>

#include "std_srvs/srv/trigger__request__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace std_srvs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Trigger_Request_message_members = {
  "std_srvs",  // package name
  "Trigger_Request",  // message name
  0,  // number of fields
  0  // message members
};

static const rosidl_message_type_support_t Trigger_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_introspection_identifier,
  &Trigger_Request_message_members
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace std_srvs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle_introspection<std_srvs::srv::Trigger_Request>()
{
  return &::std_srvs::srv::rosidl_typesupport_introspection_cpp::Trigger_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#endif  // __std_srvs__srv__trigger__request__type_support__h__
