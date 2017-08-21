// generated from rosidl_generator_cpp/resource/msg__struct.hpp.template

#ifndef __std_msgs__msg__multi_array_layout__struct__hpp__
#define __std_msgs__msg__multi_array_layout__struct__hpp__

#include <array>
#include <memory>
#include <string>
#include <vector>

// include message dependencies
#include <std_msgs/msg/multi_array_dimension.hpp>

#ifndef _WIN32
# define DEPRECATED_std_msgs_msg_MultiArrayLayout __attribute__((deprecated))
#else
# define DEPRECATED_std_msgs_msg_MultiArrayLayout __declspec(deprecated)
#endif

namespace std_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MultiArrayLayout_
{
  using Type = MultiArrayLayout_<ContainerAllocator>;

  MultiArrayLayout_()
  {
  }
  MultiArrayLayout_(const ContainerAllocator & _alloc)
  : dim(_alloc)
  {
  }

  // field types and members
  using _dim_type =
      std::vector<std_msgs::msg::MultiArrayDimension_<ContainerAllocator>, typename ContainerAllocator::template rebind<std_msgs::msg::MultiArrayDimension_<ContainerAllocator>>::other>;
  _dim_type dim;
  using _data_offset_type =
      uint32_t;
  _data_offset_type data_offset;

  // setters for named parameter idiom
  Type * set__dim(const std::vector<std_msgs::msg::MultiArrayDimension_<ContainerAllocator>, typename ContainerAllocator::template rebind<std_msgs::msg::MultiArrayDimension_<ContainerAllocator>>::other> & _arg)
  {
    this->dim = _arg;
    return this;
  }
  Type * set__data_offset(const uint32_t & _arg)
  {
    this->data_offset = _arg;
    return this;
  }

  // constants

  // pointer types
  using RawPtr =
    std_msgs::msg::MultiArrayLayout_<ContainerAllocator> *;
  using ConstRawPtr =
    const std_msgs::msg::MultiArrayLayout_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<std_msgs::msg::MultiArrayLayout_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<std_msgs::msg::MultiArrayLayout_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<std_msgs::msg::MultiArrayLayout_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<std_msgs::msg::MultiArrayLayout_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<std_msgs::msg::MultiArrayLayout_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<std_msgs::msg::MultiArrayLayout_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<std_msgs::msg::MultiArrayLayout_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<std_msgs::msg::MultiArrayLayout_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED_std_msgs_msg_MultiArrayLayout
    std::shared_ptr<std_msgs::msg::MultiArrayLayout_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED_std_msgs_msg_MultiArrayLayout
    std::shared_ptr<std_msgs::msg::MultiArrayLayout_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MultiArrayLayout_ & other) const
  {
    if (this->dim != other.dim) {
      return false;
    }
    if (this->data_offset != other.data_offset) {
      return false;
    }
    return true;
  }
  bool operator!=(const MultiArrayLayout_ & other) const
  {
    return !this->operator==(other);
  }

}; // struct MultiArrayLayout_

// alias to use template instance with default allocator
using MultiArrayLayout =
    std_msgs::msg::MultiArrayLayout_<std::allocator<void>>;

// constants requiring out of line definition

}  // namespace msg

}  // namespace std_msgs

#endif  // __std_msgs__msg__multi_array_layout__struct__hpp__
