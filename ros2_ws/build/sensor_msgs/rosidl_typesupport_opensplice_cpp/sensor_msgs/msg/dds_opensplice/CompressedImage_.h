//******************************************************************
// 
//  Generated by IDL to C++ Translator
//  
//  File name: CompressedImage_.h
//  Source: /home/erle/ros2_ws/build/sensor_msgs/rosidl_generator_dds_idl/sensor_msgs/msg/dds_opensplice/CompressedImage_.idl
//  Generated: Sun Nov  8 00:04:08 2015
//  OpenSplice V6.4.140407OSS
//  
//******************************************************************
#ifndef _COMPRESSEDIMAGE__H_
#define _COMPRESSEDIMAGE__H_

#include "sacpp_mapping.h"
#include "sacpp_DDS_DCPS.h"
#include "dds_dcps.h"
#include "Header_.h"


namespace sensor_msgs
{
   namespace msg
   {
      namespace dds_
      {
         struct CompressedImage_;

         struct CompressedImage_
         {
               struct _data__seq_uniq_ {};
               typedef DDS_DCPSUFLSeq < DDS::Octet, struct _data__seq_uniq_> _data__seq;
               typedef DDS_DCPSSequence_var < _data__seq> _data__seq_var;
               typedef DDS_DCPSSequence_out < _data__seq> _data__seq_out;
               ::std_msgs::msg::dds_::Header_ header_;
               DDS::String_mgr format_;
               _data__seq data_;
         };

         typedef DDS_DCPSStruct_var < CompressedImage_> CompressedImage__var;
         typedef DDS_DCPSStruct_out < CompressedImage_> CompressedImage__out;
      }
   }
}




#endif 
