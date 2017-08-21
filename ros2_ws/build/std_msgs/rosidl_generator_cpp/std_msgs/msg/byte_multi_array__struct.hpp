// generated from rosidl_generator_cpp/resource/msg__struct.hpp.template

#ifndef __std_msgs__msg__byte_multi_array__struct__hpp__
#define __std_msgs__msg__byte_multi_array__struct__hpp__

#include <array>
#include <memory>
#include <string>
#include <vector>

// include message dependencies
#include <std_msgs/msg/multi_array_layout.hpp>

#ifndef _WIN32
# define DEPRECATED_std_msgs_msg_ByteMultiArray __attribute__((deprecated))
#else
# define DEPRECATED_std_msgs_msg_ByteMultiArray __declspec(deprecated)
#endif

namespace std_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ByteMultiArray_
{
  using Type = ByteMultiArray_<ContainerAllocator>;

  ByteMultiArray_()
  {
  }
  ByteMultiArray_(const ContainerAllocator & _alloc)
  : data(_alloc)
  {
  }

  // field types and members
  using _layout_type =
      std_msgs::msg::MultiArrayLayout_<ContainerAllocator>;
  _layout_type layout;
  using _data_type =
      std::vector<uint8_t, typename ContainerAllocator::template rebind<uint8_t>::other>;
  _data_type data;

  // setters for named parameter idiom
  Type * set__layout(const std_msgs::msg::MultiArrayLayout_<ContainerAllocator> & _arg)
  {
    this->layout = _arg;
    return this;
  }
  Type * set__data(const std::vector<uint8_t, typename ContainerAllocator::template rebind<uint8_t>::other> & _arg)
  {
    this->data = _arg;
    return this;
  }

  // constants

  // pointer types
  using RawPtr =
    std_msgs::msg::ByteMultiArray_<ContainerAllocator> *;
  using ConstRawPtr =
    const std_msgs::msg::ByteMultiArray_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<std_msgs::msg::ByteMultiArray_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<std_msgs::msg::ByteMultiArray_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<std_msgs::msg::ByteMultiArray_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<std_msgs::msg::ByteMultiArray_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<std_msgs::msg::ByteMultiArray_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<std_msgs::msg::ByteMultiArray_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<std_msgs::msg::ByteMultiArray_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<std_msgs::msg::ByteMultiArray_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED_std_msgs_msg_ByteMultiArray
    std::shared_ptr<std_msgs::msg::ByteMultiArray_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED_std_msgs_msg_ByteMultiArray
    std::shared_ptr<std_msgs::msg::ByteMultiArray_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ByteMultiArray_ & other) const
  {
    if (this->layout != other.layout) {
      return false;
    }
    if (this->data != other.data) {
      return false;
    }
    return true;
  }
  bool operator!=(const ByteMultiArray_ & other) const
  {
    return !this->operator==(other);
  }

}; // struct ByteMultiArray_

// alias to use template instance with default allocator
using ByteMultiArray =
    std_msgs::msg::ByteMultiArray_<std::allocator<void>>;

// constants requiring out of line definition

}  // namespace msg

}  // namespace std_msgs

#endif  // __std_msgs__msg__byte_multi_array__struct__hpp__
