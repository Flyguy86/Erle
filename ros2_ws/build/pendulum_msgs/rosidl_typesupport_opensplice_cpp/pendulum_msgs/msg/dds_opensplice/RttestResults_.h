//******************************************************************
// 
//  Generated by IDL to C++ Translator
//  
//  File name: RttestResults_.h
//  Source: /home/erle/ros2_ws/build/pendulum_msgs/rosidl_generator_dds_idl/pendulum_msgs/msg/dds_opensplice/RttestResults_.idl
//  Generated: Sat Nov  7 19:23:23 2015
//  OpenSplice V6.4.140407OSS
//  
//******************************************************************
#ifndef _RTTESTRESULTS__H_
#define _RTTESTRESULTS__H_

#include "sacpp_mapping.h"
#include "sacpp_DDS_DCPS.h"
#include "JointCommand_.h"
#include "JointState_.h"
#include "dds_dcps.h"


namespace pendulum_msgs
{
   namespace msg
   {
      namespace dds_
      {
         struct RttestResults_;

         struct RttestResults_
         {
               DDS::Time_t stamp_;
               JointCommand_ command_;
               JointState_ state_;
               DDS::ULongLong cur_latency_;
               DDS::Double mean_latency_;
               DDS::ULongLong min_latency_;
               DDS::ULongLong max_latency_;
               DDS::ULongLong minor_pagefaults_;
               DDS::ULongLong major_pagefaults_;
         };

         typedef DDS_DCPSStruct_var < RttestResults_> RttestResults__var;
         typedef RttestResults_&RttestResults__out;
      }
   }
}




#endif 
