// generated from rosidl_generator_cpp/resource/msg__struct.hpp.template

#ifndef __geometry_msgs__msg__twist__struct__hpp__
#define __geometry_msgs__msg__twist__struct__hpp__

#include <array>
#include <memory>
#include <string>
#include <vector>

// include message dependencies
#include <geometry_msgs/msg/vector3.hpp>
#include <geometry_msgs/msg/vector3.hpp>

#ifndef _WIN32
# define DEPRECATED_geometry_msgs_msg_Twist __attribute__((deprecated))
#else
# define DEPRECATED_geometry_msgs_msg_Twist __declspec(deprecated)
#endif

namespace geometry_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Twist_
{
  using Type = Twist_<ContainerAllocator>;

  Twist_()
  {
  }
  Twist_(const ContainerAllocator & _alloc)
  {
    (void)_alloc;
  }

  // field types and members
  using _linear_type =
      geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _linear_type linear;
  using _angular_type =
      geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _angular_type angular;

  // setters for named parameter idiom
  Type * set__linear(const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->linear = _arg;
    return this;
  }
  Type * set__angular(const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->angular = _arg;
    return this;
  }

  // constants

  // pointer types
  using RawPtr =
    geometry_msgs::msg::Twist_<ContainerAllocator> *;
  using ConstRawPtr =
    const geometry_msgs::msg::Twist_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<geometry_msgs::msg::Twist_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<geometry_msgs::msg::Twist_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<geometry_msgs::msg::Twist_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<geometry_msgs::msg::Twist_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<geometry_msgs::msg::Twist_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<geometry_msgs::msg::Twist_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<geometry_msgs::msg::Twist_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<geometry_msgs::msg::Twist_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED_geometry_msgs_msg_Twist
    std::shared_ptr<geometry_msgs::msg::Twist_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED_geometry_msgs_msg_Twist
    std::shared_ptr<geometry_msgs::msg::Twist_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Twist_ & other) const
  {
    if (this->linear != other.linear) {
      return false;
    }
    if (this->angular != other.angular) {
      return false;
    }
    return true;
  }
  bool operator!=(const Twist_ & other) const
  {
    return !this->operator==(other);
  }

}; // struct Twist_

// alias to use template instance with default allocator
using Twist =
    geometry_msgs::msg::Twist_<std::allocator<void>>;

// constants requiring out of line definition

}  // namespace msg

}  // namespace geometry_msgs

#endif  // __geometry_msgs__msg__twist__struct__hpp__
