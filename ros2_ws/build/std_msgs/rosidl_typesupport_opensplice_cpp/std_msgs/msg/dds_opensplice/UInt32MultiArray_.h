//******************************************************************
// 
//  Generated by IDL to C++ Translator
//  
//  File name: UInt32MultiArray_.h
//  Source: /home/erle/ros2_ws/build/std_msgs/rosidl_generator_dds_idl/std_msgs/msg/dds_opensplice/UInt32MultiArray_.idl
//  Generated: Sat Nov  7 20:27:05 2015
//  OpenSplice V6.4.140407OSS
//  
//******************************************************************
#ifndef _UINT32MULTIARRAY__H_
#define _UINT32MULTIARRAY__H_

#include "sacpp_mapping.h"
#include "sacpp_DDS_DCPS.h"
#include "MultiArrayLayout_.h"


namespace std_msgs
{
   namespace msg
   {
      namespace dds_
      {
         struct UInt32MultiArray_;

         struct UInt32MultiArray_
         {
               struct _data__seq_uniq_ {};
               typedef DDS_DCPSUFLSeq < DDS::ULong, struct _data__seq_uniq_> _data__seq;
               typedef DDS_DCPSSequence_var < _data__seq> _data__seq_var;
               typedef DDS_DCPSSequence_out < _data__seq> _data__seq_out;
               MultiArrayLayout_ layout_;
               _data__seq data_;
         };

         typedef DDS_DCPSStruct_var < UInt32MultiArray_> UInt32MultiArray__var;
         typedef DDS_DCPSStruct_out < UInt32MultiArray_> UInt32MultiArray__out;
      }
   }
}




#endif 
