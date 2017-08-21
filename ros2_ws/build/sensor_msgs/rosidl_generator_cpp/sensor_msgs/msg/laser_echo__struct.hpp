// generated from rosidl_generator_cpp/resource/msg__struct.hpp.template

#ifndef __sensor_msgs__msg__laser_echo__struct__hpp__
#define __sensor_msgs__msg__laser_echo__struct__hpp__

#include <array>
#include <memory>
#include <string>
#include <vector>

// include message dependencies

#ifndef _WIN32
# define DEPRECATED_sensor_msgs_msg_LaserEcho __attribute__((deprecated))
#else
# define DEPRECATED_sensor_msgs_msg_LaserEcho __declspec(deprecated)
#endif

namespace sensor_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LaserEcho_
{
  using Type = LaserEcho_<ContainerAllocator>;

  LaserEcho_()
  {
  }
  LaserEcho_(const ContainerAllocator & _alloc)
  : echoes(_alloc)
  {
  }

  // field types and members
  using _echoes_type =
      std::vector<float, typename ContainerAllocator::template rebind<float>::other>;
  _echoes_type echoes;

  // setters for named parameter idiom
  Type * set__echoes(const std::vector<float, typename ContainerAllocator::template rebind<float>::other> & _arg)
  {
    this->echoes = _arg;
    return this;
  }

  // constants

  // pointer types
  using RawPtr =
    sensor_msgs::msg::LaserEcho_<ContainerAllocator> *;
  using ConstRawPtr =
    const sensor_msgs::msg::LaserEcho_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<sensor_msgs::msg::LaserEcho_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<sensor_msgs::msg::LaserEcho_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<sensor_msgs::msg::LaserEcho_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<sensor_msgs::msg::LaserEcho_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<sensor_msgs::msg::LaserEcho_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<sensor_msgs::msg::LaserEcho_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<sensor_msgs::msg::LaserEcho_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<sensor_msgs::msg::LaserEcho_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED_sensor_msgs_msg_LaserEcho
    std::shared_ptr<sensor_msgs::msg::LaserEcho_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED_sensor_msgs_msg_LaserEcho
    std::shared_ptr<sensor_msgs::msg::LaserEcho_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LaserEcho_ & other) const
  {
    if (this->echoes != other.echoes) {
      return false;
    }
    return true;
  }
  bool operator!=(const LaserEcho_ & other) const
  {
    return !this->operator==(other);
  }

}; // struct LaserEcho_

// alias to use template instance with default allocator
using LaserEcho =
    sensor_msgs::msg::LaserEcho_<std::allocator<void>>;

// constants requiring out of line definition

}  // namespace msg

}  // namespace sensor_msgs

#endif  // __sensor_msgs__msg__laser_echo__struct__hpp__
