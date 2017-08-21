// generated from rosidl_generator_cpp/resource/msg__struct.hpp.template

#ifndef __rosidl_generator_cpp__msg__primitives_bounded__struct__hpp__
#define __rosidl_generator_cpp__msg__primitives_bounded__struct__hpp__

#include <array>
#include <memory>
#include <string>
#include <vector>

// include message dependencies

#ifndef _WIN32
# define DEPRECATED_rosidl_generator_cpp_msg_PrimitivesBounded __attribute__((deprecated))
#else
# define DEPRECATED_rosidl_generator_cpp_msg_PrimitivesBounded __declspec(deprecated)
#endif

namespace rosidl_generator_cpp
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PrimitivesBounded_
{
  using Type = PrimitivesBounded_<ContainerAllocator>;

  PrimitivesBounded_()
  {
  }
  PrimitivesBounded_(const ContainerAllocator & _alloc)
  : bool_value(_alloc),
    byte_value(_alloc),
    char_value(_alloc),
    float32_value(_alloc),
    float64_value(_alloc),
    int8_value(_alloc),
    uint8_value(_alloc),
    int16_value(_alloc),
    uint16_value(_alloc),
    int32_value(_alloc),
    uint32_value(_alloc),
    int64_value(_alloc),
    uint64_value(_alloc)
  {
  }

  // field types and members
  using _bool_value_type =
      std::array<bool, 10>;
  _bool_value_type bool_value;
  using _byte_value_type =
      std::array<uint8_t, 10>;
  _byte_value_type byte_value;
  using _char_value_type =
      std::array<char, 10>;
  _char_value_type char_value;
  using _float32_value_type =
      std::array<float, 10>;
  _float32_value_type float32_value;
  using _float64_value_type =
      std::array<double, 10>;
  _float64_value_type float64_value;
  using _int8_value_type =
      std::array<int8_t, 10>;
  _int8_value_type int8_value;
  using _uint8_value_type =
      std::array<uint8_t, 10>;
  _uint8_value_type uint8_value;
  using _int16_value_type =
      std::array<int16_t, 10>;
  _int16_value_type int16_value;
  using _uint16_value_type =
      std::array<uint16_t, 10>;
  _uint16_value_type uint16_value;
  using _int32_value_type =
      std::array<int32_t, 10>;
  _int32_value_type int32_value;
  using _uint32_value_type =
      std::array<uint32_t, 10>;
  _uint32_value_type uint32_value;
  using _int64_value_type =
      std::array<int64_t, 10>;
  _int64_value_type int64_value;
  using _uint64_value_type =
      std::array<uint64_t, 10>;
  _uint64_value_type uint64_value;
  using _string_value_type =
      std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _string_value_type string_value;

  // setters for named parameter idiom
  Type * set__bool_value(const std::array<bool, 10> & _arg)
  {
    this->bool_value = _arg;
    return this;
  }
  Type * set__byte_value(const std::array<uint8_t, 10> & _arg)
  {
    this->byte_value = _arg;
    return this;
  }
  Type * set__char_value(const std::array<char, 10> & _arg)
  {
    this->char_value = _arg;
    return this;
  }
  Type * set__float32_value(const std::array<float, 10> & _arg)
  {
    this->float32_value = _arg;
    return this;
  }
  Type * set__float64_value(const std::array<double, 10> & _arg)
  {
    this->float64_value = _arg;
    return this;
  }
  Type * set__int8_value(const std::array<int8_t, 10> & _arg)
  {
    this->int8_value = _arg;
    return this;
  }
  Type * set__uint8_value(const std::array<uint8_t, 10> & _arg)
  {
    this->uint8_value = _arg;
    return this;
  }
  Type * set__int16_value(const std::array<int16_t, 10> & _arg)
  {
    this->int16_value = _arg;
    return this;
  }
  Type * set__uint16_value(const std::array<uint16_t, 10> & _arg)
  {
    this->uint16_value = _arg;
    return this;
  }
  Type * set__int32_value(const std::array<int32_t, 10> & _arg)
  {
    this->int32_value = _arg;
    return this;
  }
  Type * set__uint32_value(const std::array<uint32_t, 10> & _arg)
  {
    this->uint32_value = _arg;
    return this;
  }
  Type * set__int64_value(const std::array<int64_t, 10> & _arg)
  {
    this->int64_value = _arg;
    return this;
  }
  Type * set__uint64_value(const std::array<uint64_t, 10> & _arg)
  {
    this->uint64_value = _arg;
    return this;
  }
  Type * set__string_value(const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->string_value = _arg;
    return this;
  }

  // constants

  // pointer types
  using RawPtr =
    rosidl_generator_cpp::msg::PrimitivesBounded_<ContainerAllocator> *;
  using ConstRawPtr =
    const rosidl_generator_cpp::msg::PrimitivesBounded_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rosidl_generator_cpp::msg::PrimitivesBounded_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rosidl_generator_cpp::msg::PrimitivesBounded_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<rosidl_generator_cpp::msg::PrimitivesBounded_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rosidl_generator_cpp::msg::PrimitivesBounded_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<rosidl_generator_cpp::msg::PrimitivesBounded_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rosidl_generator_cpp::msg::PrimitivesBounded_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rosidl_generator_cpp::msg::PrimitivesBounded_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rosidl_generator_cpp::msg::PrimitivesBounded_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED_rosidl_generator_cpp_msg_PrimitivesBounded
    std::shared_ptr<rosidl_generator_cpp::msg::PrimitivesBounded_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED_rosidl_generator_cpp_msg_PrimitivesBounded
    std::shared_ptr<rosidl_generator_cpp::msg::PrimitivesBounded_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PrimitivesBounded_ & other) const
  {
    if (this->bool_value != other.bool_value) {
      return false;
    }
    if (this->byte_value != other.byte_value) {
      return false;
    }
    if (this->char_value != other.char_value) {
      return false;
    }
    if (this->float32_value != other.float32_value) {
      return false;
    }
    if (this->float64_value != other.float64_value) {
      return false;
    }
    if (this->int8_value != other.int8_value) {
      return false;
    }
    if (this->uint8_value != other.uint8_value) {
      return false;
    }
    if (this->int16_value != other.int16_value) {
      return false;
    }
    if (this->uint16_value != other.uint16_value) {
      return false;
    }
    if (this->int32_value != other.int32_value) {
      return false;
    }
    if (this->uint32_value != other.uint32_value) {
      return false;
    }
    if (this->int64_value != other.int64_value) {
      return false;
    }
    if (this->uint64_value != other.uint64_value) {
      return false;
    }
    if (this->string_value != other.string_value) {
      return false;
    }
    return true;
  }
  bool operator!=(const PrimitivesBounded_ & other) const
  {
    return !this->operator==(other);
  }

}; // struct PrimitivesBounded_

// alias to use template instance with default allocator
using PrimitivesBounded =
    rosidl_generator_cpp::msg::PrimitivesBounded_<std::allocator<void>>;

// constants requiring out of line definition

}  // namespace msg

}  // namespace rosidl_generator_cpp

#endif  // __rosidl_generator_cpp__msg__primitives_bounded__struct__hpp__
