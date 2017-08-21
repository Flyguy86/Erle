// generated from rosidl_generator_cpp/resource/msg__struct.hpp.template

#ifndef __geometry_msgs__msg__pose_with_covariance__struct__hpp__
#define __geometry_msgs__msg__pose_with_covariance__struct__hpp__

#include <array>
#include <memory>
#include <string>
#include <vector>

// include message dependencies
#include <geometry_msgs/msg/pose.hpp>

#ifndef _WIN32
# define DEPRECATED_geometry_msgs_msg_PoseWithCovariance __attribute__((deprecated))
#else
# define DEPRECATED_geometry_msgs_msg_PoseWithCovariance __declspec(deprecated)
#endif

namespace geometry_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PoseWithCovariance_
{
  using Type = PoseWithCovariance_<ContainerAllocator>;

  PoseWithCovariance_()
  {
  }
  PoseWithCovariance_(const ContainerAllocator & _alloc)
  {
    (void)_alloc;
  }

  // field types and members
  using _pose_type =
      geometry_msgs::msg::Pose_<ContainerAllocator>;
  _pose_type pose;
  using _covariance_type =
      std::array<double, 36>;
  _covariance_type covariance;

  // setters for named parameter idiom
  Type * set__pose(const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->pose = _arg;
    return this;
  }
  Type * set__covariance(const std::array<double, 36> & _arg)
  {
    this->covariance = _arg;
    return this;
  }

  // constants

  // pointer types
  using RawPtr =
    geometry_msgs::msg::PoseWithCovariance_<ContainerAllocator> *;
  using ConstRawPtr =
    const geometry_msgs::msg::PoseWithCovariance_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<geometry_msgs::msg::PoseWithCovariance_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<geometry_msgs::msg::PoseWithCovariance_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<geometry_msgs::msg::PoseWithCovariance_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<geometry_msgs::msg::PoseWithCovariance_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<geometry_msgs::msg::PoseWithCovariance_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<geometry_msgs::msg::PoseWithCovariance_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<geometry_msgs::msg::PoseWithCovariance_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<geometry_msgs::msg::PoseWithCovariance_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED_geometry_msgs_msg_PoseWithCovariance
    std::shared_ptr<geometry_msgs::msg::PoseWithCovariance_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED_geometry_msgs_msg_PoseWithCovariance
    std::shared_ptr<geometry_msgs::msg::PoseWithCovariance_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PoseWithCovariance_ & other) const
  {
    if (this->pose != other.pose) {
      return false;
    }
    if (this->covariance != other.covariance) {
      return false;
    }
    return true;
  }
  bool operator!=(const PoseWithCovariance_ & other) const
  {
    return !this->operator==(other);
  }

}; // struct PoseWithCovariance_

// alias to use template instance with default allocator
using PoseWithCovariance =
    geometry_msgs::msg::PoseWithCovariance_<std::allocator<void>>;

// constants requiring out of line definition

}  // namespace msg

}  // namespace geometry_msgs

#endif  // __geometry_msgs__msg__pose_with_covariance__struct__hpp__
