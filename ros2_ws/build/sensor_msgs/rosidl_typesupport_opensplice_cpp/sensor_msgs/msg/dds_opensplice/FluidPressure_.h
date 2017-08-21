//******************************************************************
// 
//  Generated by IDL to C++ Translator
//  
//  File name: FluidPressure_.h
//  Source: /home/erle/ros2_ws/build/sensor_msgs/rosidl_generator_dds_idl/sensor_msgs/msg/dds_opensplice/FluidPressure_.idl
//  Generated: Sun Nov  8 00:04:09 2015
//  OpenSplice V6.4.140407OSS
//  
//******************************************************************
#ifndef _FLUIDPRESSURE__H_
#define _FLUIDPRESSURE__H_

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
         struct FluidPressure_;

         struct FluidPressure_
         {
               ::std_msgs::msg::dds_::Header_ header_;
               DDS::Double fluid_pressure_;
               DDS::Double variance_;
         };

         typedef DDS_DCPSStruct_var < FluidPressure_> FluidPressure__var;
         typedef DDS_DCPSStruct_out < FluidPressure_> FluidPressure__out;
      }
   }
}




#endif 
