// generated from rosidl_generator_cpp/resource/msg__struct.hpp.template

#ifndef __nav_msgs__srv__get_map__response__struct__hpp__
#define __nav_msgs__srv__get_map__response__struct__hpp__

#include <array>
#include <memory>
#include <string>
#include <vector>

// include message dependencies
#include <nav_msgs/msg/occupancy_grid.hpp>

#ifndef _WIN32
# define DEPRECATED_nav_msgs_srv_GetMap_Response __attribute__((deprecated))
#else
# define DEPRECATED_nav_msgs_srv_GetMap_Response __declspec(deprecated)
#endif

namespace nav_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetMap_Response_
{
  using Type = GetMap_Response_<ContainerAllocator>;

  GetMap_Response_()
  {
  }
  GetMap_Response_(const ContainerAllocator & _alloc)
  {
    (void)_alloc;
  }

  // field types and members
  using _map_type =
      nav_msgs::msg::OccupancyGrid_<ContainerAllocator>;
  _map_type map;

  // setters for named parameter idiom
  Type * set__map(const nav_msgs::msg::OccupancyGrid_<ContainerAllocator> & _arg)
  {
    this->map = _arg;
    return this;
  }

  // constants

  // pointer types
  using RawPtr =
    nav_msgs::srv::GetMap_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const nav_msgs::srv::GetMap_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<nav_msgs::srv::GetMap_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<nav_msgs::srv::GetMap_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<nav_msgs::srv::GetMap_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<nav_msgs::srv::GetMap_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<nav_msgs::srv::GetMap_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<nav_msgs::srv::GetMap_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<nav_msgs::srv::GetMap_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<nav_msgs::srv::GetMap_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED_nav_msgs_srv_GetMap_Response
    std::shared_ptr<nav_msgs::srv::GetMap_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED_nav_msgs_srv_GetMap_Response
    std::shared_ptr<nav_msgs::srv::GetMap_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetMap_Response_ & other) const
  {
    if (this->map != other.map) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetMap_Response_ & other) const
  {
    return !this->operator==(other);
  }

}; // struct GetMap_Response_

// alias to use template instance with default allocator
using GetMap_Response =
    nav_msgs::srv::GetMap_Response_<std::allocator<void>>;

// constants requiring out of line definition

}  // namespace srv

}  // namespace nav_msgs

#endif  // __nav_msgs__srv__get_map__response__struct__hpp__
