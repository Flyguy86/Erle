// generated from rosidl_typesupport_introspection_cpp/resource/msg__type_support.cpp.template

#ifndef __geometry_msgs__msg__polygon__type_support__h__
#define __geometry_msgs__msg__polygon__type_support__h__

// providing offsetof()
#include <cstddef>

#include <rosidl_generator_c/message_type_support.h>
// this is defined in the rosidl_typesupport_introspection_cpp package and
// is in the include/rosidl_typesupport_introspection_cpp/impl folder
#include <rosidl_generator_cpp/message_type_support.hpp>

#include "geometry_msgs/msg/polygon__struct.hpp"
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

size_t size_function__Polygon__points(const void * untyped_member)
{
  const std::vector<geometry_msgs::msg::Point32> * member =
    reinterpret_cast<const std::vector<geometry_msgs::msg::Point32> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Polygon__points(const void * untyped_member, size_t index)
{
  const std::vector<geometry_msgs::msg::Point32> & member =
    *reinterpret_cast<const std::vector<geometry_msgs::msg::Point32> *>(untyped_member);
  return &member[index];
}

void * get_function__Polygon__points(void * untyped_member, size_t index)
{
  std::vector<geometry_msgs::msg::Point32> & member =
    *reinterpret_cast<std::vector<geometry_msgs::msg::Point32> *>(untyped_member);
  return &member[index];
}

void resize_function__Polygon__points(void * untyped_member, size_t size)
{
  std::vector<geometry_msgs::msg::Point32> * member =
    reinterpret_cast<std::vector<geometry_msgs::msg::Point32> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Polygon_message_member_array[1] = {
  {
    "points",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle_introspection<geometry_msgs::msg::Point32>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(geometry_msgs::msg::Polygon, points),  // bytes offset in struct
    nullptr,  // default value
    size_function__Polygon__points,  // size() function pointer
    get_const_function__Polygon__points,  // get_const(index) function pointer
    get_function__Polygon__points,  // get(index) function pointer
    resize_function__Polygon__points  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Polygon_message_members = {
  "geometry_msgs",  // package name
  "Polygon",  // message name
  1,  // number of fields
  Polygon_message_member_array  // message members
};

static const rosidl_message_type_support_t Polygon_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_introspection_identifier,
  &Polygon_message_members
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace geometry_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle_introspection<geometry_msgs::msg::Polygon>()
{
  return &::geometry_msgs::msg::rosidl_typesupport_introspection_cpp::Polygon_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#endif  // __geometry_msgs__msg__polygon__type_support__h__
