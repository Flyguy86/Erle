//******************************************************************
// 
//  Generated by IDL to C++ Translator
//  
//  File name: ColorRGBA_.h
//  Source: /home/erle/ros2_ws/build/std_msgs/rosidl_generator_dds_idl/std_msgs/msg/dds_opensplice/ColorRGBA_.idl
//  Generated: Sat Nov  7 20:26:45 2015
//  OpenSplice V6.4.140407OSS
//  
//******************************************************************
#ifndef _COLORRGBA__H_
#define _COLORRGBA__H_

#include "sacpp_mapping.h"
#include "sacpp_DDS_DCPS.h"


namespace std_msgs
{
   namespace msg
   {
      namespace dds_
      {
         struct ColorRGBA_;

         struct ColorRGBA_
         {
               DDS::Float r_;
               DDS::Float g_;
               DDS::Float b_;
               DDS::Float a_;
         };

         typedef DDS_DCPSStruct_var < ColorRGBA_> ColorRGBA__var;
         typedef ColorRGBA_&ColorRGBA__out;
      }
   }
}




#endif 
