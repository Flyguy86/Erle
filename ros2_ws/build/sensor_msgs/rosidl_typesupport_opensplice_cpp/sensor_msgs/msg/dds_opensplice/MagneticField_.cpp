//******************************************************************
// 
//  Generated by IDL to C++ Translator
//  
//  File name: MagneticField_.cpp
//  Source: /home/erle/ros2_ws/build/sensor_msgs/rosidl_generator_dds_idl/sensor_msgs/msg/dds_opensplice/MagneticField_.idl
//  Generated: Sun Nov  8 00:04:22 2015
//  OpenSplice V6.4.140407OSS
//  
//******************************************************************

#include "MagneticField_.h"


#if DDS_USE_EXPLICIT_TEMPLATES
template class DDS_DCPS_FArray_var< sensor_msgs::msg::dds_::sensor_msgs__MagneticField__double_array_9, sensor_msgs::msg::dds_::sensor_msgs__MagneticField__double_array_9_slice, struct sensor_msgs::msg::dds_::sensor_msgs__MagneticField__double_array_9_uniq_>;
template class DDS_DCPS_Array_forany< sensor_msgs::msg::dds_::sensor_msgs__MagneticField__double_array_9, sensor_msgs::msg::dds_::sensor_msgs__MagneticField__double_array_9_slice, struct sensor_msgs::msg::dds_::sensor_msgs__MagneticField__double_array_9_uniq_>;
#endif

template <>
sensor_msgs::msg::dds_::sensor_msgs__MagneticField__double_array_9_slice* DDS_DCPS_ArrayHelper < sensor_msgs::msg::dds_::sensor_msgs__MagneticField__double_array_9, sensor_msgs::msg::dds_::sensor_msgs__MagneticField__double_array_9_slice, sensor_msgs::msg::dds_::sensor_msgs__MagneticField__double_array_9_uniq_>::alloc ()
{
   return sensor_msgs::msg::dds_::sensor_msgs__MagneticField__double_array_9_alloc ();
}

template <>
void DDS_DCPS_ArrayHelper < sensor_msgs::msg::dds_::sensor_msgs__MagneticField__double_array_9, sensor_msgs::msg::dds_::sensor_msgs__MagneticField__double_array_9_slice, sensor_msgs::msg::dds_::sensor_msgs__MagneticField__double_array_9_uniq_>::copy (sensor_msgs::msg::dds_::sensor_msgs__MagneticField__double_array_9_slice *to, const sensor_msgs::msg::dds_::sensor_msgs__MagneticField__double_array_9_slice* from)
{
   sensor_msgs::msg::dds_::sensor_msgs__MagneticField__double_array_9_copy (to, from);
}

template <>
void DDS_DCPS_ArrayHelper < sensor_msgs::msg::dds_::sensor_msgs__MagneticField__double_array_9, sensor_msgs::msg::dds_::sensor_msgs__MagneticField__double_array_9_slice, sensor_msgs::msg::dds_::sensor_msgs__MagneticField__double_array_9_uniq_>::free (sensor_msgs::msg::dds_::sensor_msgs__MagneticField__double_array_9_slice *ptr)
{
   sensor_msgs::msg::dds_::sensor_msgs__MagneticField__double_array_9_free (ptr);
}

sensor_msgs::msg::dds_::sensor_msgs__MagneticField__double_array_9_slice * sensor_msgs::msg::dds_::sensor_msgs__MagneticField__double_array_9_alloc ()
{
   DDS::Double * ret = (DDS::Double*) new DDS::Double [9];
   return (sensor_msgs__MagneticField__double_array_9_slice *) ret;
}

void sensor_msgs::msg::dds_::sensor_msgs__MagneticField__double_array_9_free (sensor_msgs__MagneticField__double_array_9_slice * s)
{
   delete [] s;
}

void sensor_msgs::msg::dds_::sensor_msgs__MagneticField__double_array_9_copy
(
   sensor_msgs__MagneticField__double_array_9_slice * to,
   const sensor_msgs__MagneticField__double_array_9_slice * from
)
{
   const DDS::Double* sv = ( const DDS::Double*) from;
   DDS::Double* tv = (DDS::Double*) to;
   for (DDS::ULong i = 0; i < 9; i++) tv[i] = sv[i];
}

sensor_msgs::msg::dds_::sensor_msgs__MagneticField__double_array_9_slice * sensor_msgs::msg::dds_::sensor_msgs__MagneticField__double_array_9_dup
   (const sensor_msgs__MagneticField__double_array_9_slice * from)
{
   sensor_msgs__MagneticField__double_array_9_slice * to = sensor_msgs__MagneticField__double_array_9_alloc ();
   sensor_msgs__MagneticField__double_array_9_copy (to, from);
   return to;
}




