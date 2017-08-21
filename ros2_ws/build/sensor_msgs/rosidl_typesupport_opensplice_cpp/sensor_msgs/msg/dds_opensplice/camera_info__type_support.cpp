// generated from rosidl_typesupport_opensplice_cpp/resource/msg__type_support.cpp.template

#include <limits>
#include <stdexcept>

#include <u_instanceHandle.h>

#include <rosidl_generator_c/message_type_support.h>
// this is defined in the rosidl_typesupport_opensplice_cpp package and
// is in the include/rosidl_typesupport_opensplice_cpp/impl folder
#include <rosidl_generator_cpp/message_type_support.hpp>
#include <rosidl_typesupport_opensplice_cpp/visibility_control.h>

#include "sensor_msgs/msg/camera_info__struct.hpp"
#include "sensor_msgs/msg/dds_opensplice/camera_info__type_support.hpp"
#include "sensor_msgs/msg/dds_opensplice/ccpp_CameraInfo_.h"
#include "rosidl_typesupport_opensplice_cpp/identifier.hpp"
#include <rosidl_typesupport_opensplice_cpp/message_type_support.h>

// forward declaration of message dependencies and their conversion functions
namespace std_msgs
{
namespace msg
{
namespace dds_
{
struct Header_;
}  // namespace dds_
namespace typesupport_opensplice_cpp
{
void convert_ros_message_to_dds(
  const std_msgs::msg::Header &,
  std_msgs::msg::dds_::Header_ &);
void convert_dds_message_to_ros(
  const std_msgs::msg::dds_::Header_ &,
  std_msgs::msg::Header &);
}  // namespace typesupport_opensplice_cpp
}  // namespace msg
}  // namespace std_msgs

namespace sensor_msgs
{
namespace msg
{
namespace dds_
{
struct RegionOfInterest_;
}  // namespace dds_
namespace typesupport_opensplice_cpp
{
void convert_ros_message_to_dds(
  const sensor_msgs::msg::RegionOfInterest &,
  sensor_msgs::msg::dds_::RegionOfInterest_ &);
void convert_dds_message_to_ros(
  const sensor_msgs::msg::dds_::RegionOfInterest_ &,
  sensor_msgs::msg::RegionOfInterest &);
}  // namespace typesupport_opensplice_cpp
}  // namespace msg
}  // namespace sensor_msgs


namespace sensor_msgs
{

namespace msg
{

namespace typesupport_opensplice_cpp
{

using __dds_msg_type = sensor_msgs::msg::dds_::CameraInfo_;
using __ros_msg_type = sensor_msgs::msg::CameraInfo;

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_sensor_msgs
const char *
register_type__CameraInfo(
  void * untyped_participant,
  const char * type_name)
{
  if (!untyped_participant) {
    return "untyped participant handle is null";
  }
  if (!type_name) {
    return "type name handle is null";
  }
  DDS::DomainParticipant * participant =
    static_cast<DDS::DomainParticipant *>(untyped_participant);

  sensor_msgs::msg::dds_::CameraInfo_TypeSupport type_support;
  DDS::ReturnCode_t status = type_support.register_type(participant, type_name);
  switch (status) {
    case DDS::RETCODE_ERROR:
      return "sensor_msgs::msg::dds_::CameraInfo_TypeSupport.register_type: "
             "an internal error has occurred";
    case DDS::RETCODE_BAD_PARAMETER:
      return "sensor_msgs::msg::dds_::CameraInfo_TypeSupport.register_type: "
             "bad domain participant or type name parameter";
    case DDS::RETCODE_OUT_OF_RESOURCES:
      return "sensor_msgs::msg::dds_::CameraInfo_TypeSupport.register_type: "
             "out of resources";
    case DDS::RETCODE_PRECONDITION_NOT_MET:
      return "sensor_msgs::msg::dds_::CameraInfo_TypeSupport.register_type: "
             "already registered with a different TypeSupport class";
    case DDS::RETCODE_OK:
      return nullptr;
    default:
      return "sensor_msgs::msg::dds_::CameraInfo_TypeSupport.register_type: unknown return code";
  }
}

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_sensor_msgs
void
convert_ros_message_to_dds(const __ros_msg_type & ros_message, __dds_msg_type & dds_message)
{
  // field.name header
  std_msgs::msg::typesupport_opensplice_cpp::convert_ros_message_to_dds(
    ros_message.header, dds_message.header_);

  // field.name height
  dds_message.height_ = ros_message.height;

  // field.name width
  dds_message.width_ = ros_message.width;

  // field.name distortion_model
  dds_message.distortion_model_ = ros_message.distortion_model.c_str();

  // field.name d
  {
    size_t size = ros_message.d.size();
    if (size > (std::numeric_limits<DDS::Long>::max)()) {
      throw std::runtime_error("array size exceeds maximum DDS sequence size");
    }
    DDS::Long length = static_cast<DDS::Long>(size);
    dds_message.d_.length(length);
    for (DDS::ULong i = 0; i < size; i++) {
      dds_message.d_[i] = ros_message.d[i];
    }
  }

  // field.name k
  {
    size_t size = 9;
    for (DDS::ULong i = 0; i < size; i++) {
      dds_message.k_[i] = ros_message.k[i];
    }
  }

  // field.name r
  {
    size_t size = 9;
    for (DDS::ULong i = 0; i < size; i++) {
      dds_message.r_[i] = ros_message.r[i];
    }
  }

  // field.name p
  {
    size_t size = 12;
    for (DDS::ULong i = 0; i < size; i++) {
      dds_message.p_[i] = ros_message.p[i];
    }
  }

  // field.name binning_x
  dds_message.binning_x_ = ros_message.binning_x;

  // field.name binning_y
  dds_message.binning_y_ = ros_message.binning_y;

  // field.name roi
  sensor_msgs::msg::typesupport_opensplice_cpp::convert_ros_message_to_dds(
    ros_message.roi, dds_message.roi_);

}

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_sensor_msgs
const char *
publish__CameraInfo(
  void * untyped_topic_writer,
  const void * untyped_ros_message)
{
  DDS::DataWriter * topic_writer = static_cast<DDS::DataWriter *>(untyped_topic_writer);

  const __ros_msg_type & ros_message = *(const __ros_msg_type *)untyped_ros_message;
  __dds_msg_type dds_message;
  convert_ros_message_to_dds(ros_message, dds_message);

  sensor_msgs::msg::dds_::CameraInfo_DataWriter * data_writer =
    sensor_msgs::msg::dds_::CameraInfo_DataWriter::_narrow(topic_writer);
  DDS::ReturnCode_t status = data_writer->write(dds_message, DDS::HANDLE_NIL);
  switch (status) {
    case DDS::RETCODE_ERROR:
      return "sensor_msgs::msg::dds_::CameraInfo_DataWriter.write: "
             "an internal error has occurred";
    case DDS::RETCODE_BAD_PARAMETER:
      return "sensor_msgs::msg::dds_::CameraInfo_DataWriter.write: "
             "bad handle or instance_data parameter";
    case DDS::RETCODE_ALREADY_DELETED:
      return "sensor_msgs::msg::dds_::CameraInfo_DataWriter.write: "
             "this sensor_msgs::msg::dds_::CameraInfo_DataWriter has already been deleted";
    case DDS::RETCODE_OUT_OF_RESOURCES:
      return "sensor_msgs::msg::dds_::CameraInfo_DataWriter.write: "
             "out of resources";
    case DDS::RETCODE_NOT_ENABLED:
      return "sensor_msgs::msg::dds_::CameraInfo_DataWriter.write: "
             "this sensor_msgs::msg::dds_::CameraInfo_DataWriter is not enabled";
    case DDS::RETCODE_PRECONDITION_NOT_MET:
      return "sensor_msgs::msg::dds_::CameraInfo_DataWriter.write: "
             "the handle has not been registered with this sensor_msgs::msg::dds_::CameraInfo_DataWriter";
    case DDS::RETCODE_TIMEOUT:
      return "sensor_msgs::msg::dds_::CameraInfo_DataWriter.write: "
             "writing resulted in blocking and then exceeded the timeout set by the "
             "max_blocking_time of the ReliabilityQosPolicy";
    case DDS::RETCODE_OK:
      return nullptr;
    default:
      return "sensor_msgs::msg::dds_::CameraInfo_DataWriter.write: unknown return code";
  }
}

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_sensor_msgs
void
convert_dds_message_to_ros(const __dds_msg_type & dds_message, __ros_msg_type & ros_message)
{
  // field.name header
  std_msgs::msg::typesupport_opensplice_cpp::convert_dds_message_to_ros(
    dds_message.header_, ros_message.header);

  // field.name height
  ros_message.height =
    dds_message.height_;

  // field.name width
  ros_message.width =
    dds_message.width_;

  // field.name distortion_model
  ros_message.distortion_model =
    dds_message.distortion_model_;

  // field.name d
  {
    size_t size = dds_message.d_.length();
    ros_message.d.resize(size);
    for (DDS::ULong i = 0; i < size; i++) {
      ros_message.d[i] =
        dds_message.d_[i];
    }
  }

  // field.name k
  {
    size_t size = 9;
    for (DDS::ULong i = 0; i < size; i++) {
      ros_message.k[i] =
        dds_message.k_[i];
    }
  }

  // field.name r
  {
    size_t size = 9;
    for (DDS::ULong i = 0; i < size; i++) {
      ros_message.r[i] =
        dds_message.r_[i];
    }
  }

  // field.name p
  {
    size_t size = 12;
    for (DDS::ULong i = 0; i < size; i++) {
      ros_message.p[i] =
        dds_message.p_[i];
    }
  }

  // field.name binning_x
  ros_message.binning_x =
    dds_message.binning_x_;

  // field.name binning_y
  ros_message.binning_y =
    dds_message.binning_y_;

  // field.name roi
  sensor_msgs::msg::typesupport_opensplice_cpp::convert_dds_message_to_ros(
    dds_message.roi_, ros_message.roi);

}

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_sensor_msgs
const char *
take__CameraInfo(
  void * untyped_topic_reader,
  bool ignore_local_publications,
  void * untyped_ros_message,
  bool * taken,
  void * sending_publication_handle)
{
  if (untyped_ros_message == 0) {
    return "invalid ros message pointer";
  };

  DDS::DataReader * topic_reader = static_cast<DDS::DataReader*>(untyped_topic_reader);

  sensor_msgs::msg::dds_::CameraInfo_DataReader * data_reader =
    sensor_msgs::msg::dds_::CameraInfo_DataReader::_narrow(topic_reader);

  sensor_msgs::msg::dds_::CameraInfo_Seq dds_messages;
  DDS::SampleInfoSeq sample_infos;
  DDS::ReturnCode_t status = data_reader->take(
    dds_messages,
    sample_infos,
    1,
    DDS::ANY_SAMPLE_STATE,
    DDS::ANY_VIEW_STATE,
    DDS::ANY_INSTANCE_STATE);

  const char * errs = nullptr;
  bool ignore_sample = false;

  switch (status) {
    case DDS::RETCODE_ERROR:
      errs = "sensor_msgs::msg::dds_::CameraInfo_DataReader.take: "
             "an internal error has occurred";
      goto finally;
    case DDS::RETCODE_ALREADY_DELETED:
      errs = "sensor_msgs::msg::dds_::CameraInfo_DataReader.take: "
             "this sensor_msgs::msg::dds_::CameraInfo_DataReader has already been deleted";
      goto finally;
    case DDS::RETCODE_OUT_OF_RESOURCES:
      errs = "sensor_msgs::msg::dds_::CameraInfo_DataReader.take: "
             "out of resources";
      goto finally;
    case DDS::RETCODE_NOT_ENABLED:
      errs = "sensor_msgs::msg::dds_::CameraInfo_DataReader.take: "
             "this sensor_msgs::msg::dds_::CameraInfo_DataReader is not enabled";
      goto finally;
    case DDS::RETCODE_PRECONDITION_NOT_MET:
      errs = "sensor_msgs::msg::dds_::CameraInfo_DataReader.take: "
             "a precondition is not met, one of: "
             "max_samples > maximum and max_samples != LENGTH_UNLIMITED, or "
             "the two sequences do not have matching parameters (length, maximum, release), or "
             "maximum > 0 and release is false.";
      goto finally;
    case DDS::RETCODE_NO_DATA:
      *taken = false;
      errs = nullptr;
      goto finally;
    case DDS::RETCODE_OK:
      break;
    default:
      errs = "sensor_msgs::msg::dds_::CameraInfo_DataReader.take: unknown return code";
      goto finally;
  }

  {
    DDS::SampleInfo & sample_info = sample_infos[0];
    if (!sample_info.valid_data) {
      // skip sample without data
      ignore_sample = true;
    } else {
      DDS::InstanceHandle_t sender_handle = sample_info.publication_handle;
      auto sender_gid = u_instanceHandleToGID(sender_handle);
      if (ignore_local_publications) {
        // compare the system id from the sender and this receiver
        // if they are equal the sample has been sent from this process and should be ignored
        DDS::InstanceHandle_t receiver_handle = topic_reader->get_instance_handle();
        auto receiver_gid = u_instanceHandleToGID(receiver_handle);
        ignore_sample = sender_gid.systemId == receiver_gid.systemId;
      }
      // This is nullptr when being used with plain rmw_take, so check first.
      if (sending_publication_handle) {
        *static_cast<DDS::InstanceHandle_t *>(sending_publication_handle) = sender_handle;
      }
    }
  }

  if (!ignore_sample) {
    __ros_msg_type & ros_message = *(__ros_msg_type *)untyped_ros_message;
    convert_dds_message_to_ros(dds_messages[0], ros_message);
    *taken = true;
  } else {
    *taken = false;
  }

finally:
  // Ensure the loan is returned.
  status = data_reader->return_loan(dds_messages, sample_infos);
  switch (status) {
    case DDS::RETCODE_ERROR:
      return "sensor_msgs::msg::dds_::CameraInfo_DataReader.return_loan: "
             "an internal error has occurred";
    case DDS::RETCODE_ALREADY_DELETED:
      return "sensor_msgs::msg::dds_::CameraInfo_DataReader.return_loan: "
             "this sensor_msgs::msg::dds_::CameraInfo_DataReader has already been deleted";
    case DDS::RETCODE_OUT_OF_RESOURCES:
      return "sensor_msgs::msg::dds_::CameraInfo_DataReader.return_loan: "
             "out of resources";
    case DDS::RETCODE_NOT_ENABLED:
      return "sensor_msgs::msg::dds_::CameraInfo_DataReader.return_loan: "
             "this sensor_msgs::msg::dds_::CameraInfo_DataReader is not enabled";
    case DDS::RETCODE_PRECONDITION_NOT_MET:
      return "sensor_msgs::msg::dds_::CameraInfo_DataReader.return_loan: "
             "a precondition is not met, one of: "
             "the data_values and info_seq do not belong to a single related pair, or "
             "the data_values and info_seq were not obtained from this "
             "sensor_msgs::msg::dds_::CameraInfo_DataReader";
    case DDS::RETCODE_OK:
      return nullptr;
    default:
      return "sensor_msgs::msg::dds_::CameraInfo_DataReader.return_loan failed with "
             "unknown return code";
  }

  return errs;
}

static message_type_support_callbacks_t callbacks = {
  "sensor_msgs",
  "CameraInfo",
  &register_type__CameraInfo,
  &publish__CameraInfo,
  &take__CameraInfo
};

static rosidl_message_type_support_t handle = {
  rosidl_typesupport_opensplice_cpp::typesupport_opensplice_identifier,
  &callbacks
};

}  // namespace typesupport_opensplice_cpp

}  // namespace msg

}  // namespace sensor_msgs

namespace rosidl_typesupport_opensplice_cpp
{

template<>
ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT
const rosidl_message_type_support_t *
get_message_type_support_handle_opensplice<
  sensor_msgs::msg::CameraInfo
>()
{
  return &sensor_msgs::msg::typesupport_opensplice_cpp::handle;
}

}  // namespace rosidl_typesupport_opensplice_cpp
