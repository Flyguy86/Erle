// generated from rosidl_typesupport_introspection_cpp/resource/srv__type_support.cpp.template

#ifndef __rcl_interfaces__set_parameters_atomically__type_support__h__
#define __rcl_interfaces__set_parameters_atomically__type_support__h__

// providing offsetof()
#include <cstddef>

#include <rosidl_generator_c/service_type_support.h>
// this is defined in the rosidl_typesupport_introspection_cpp package and
// is in the include/rosidl_typesupport_introspection_cpp/impl folder
#include <rosidl_generator_cpp/message_type_support.hpp>
#include <rosidl_generator_cpp/service_type_support.hpp>

#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

#include "rcl_interfaces/srv/set_parameters_atomically__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"

#include "rcl_interfaces/srv/set_parameters_atomically__request__struct.hpp"
#include "rcl_interfaces/srv/set_parameters_atomically__response__struct.hpp"

namespace rcl_interfaces
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers SetParametersAtomically_service_members = {
  "rcl_interfaces",  // package name
  "SetParametersAtomically",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle_introspection<rcl_interfaces::SetParametersAtomically>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t SetParametersAtomically_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_introspection_identifier,
  &SetParametersAtomically_service_members
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace rcl_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template <>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle_introspection<rcl_interfaces::srv::SetParametersAtomically>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::rcl_interfaces::srv::rosidl_typesupport_introspection_cpp::SetParametersAtomically_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure that both the request_members_ and the response_members_ are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
    >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle_introspection<
        ::rcl_interfaces::srv::SetParametersAtomically_Request
      >()->data
    );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
    >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle_introspection<
        ::rcl_interfaces::srv::SetParametersAtomically_Response
      >()->data
    );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#endif  // __rcl_interfaces__set_parameters_atomically__type_support__h__
