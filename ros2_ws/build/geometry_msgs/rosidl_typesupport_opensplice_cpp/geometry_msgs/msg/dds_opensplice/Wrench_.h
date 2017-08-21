//******************************************************************
// 
//  Generated by IDL to C++ Translator
//  
//  File name: Wrench_.h
//  Source: /home/erle/ros2_ws/build/geometry_msgs/rosidl_generator_dds_idl/geometry_msgs/msg/dds_opensplice/Wrench_.idl
//  Generated: Sat Nov  7 20:40:54 2015
//  OpenSplice V6.4.140407OSS
//  
//******************************************************************
#ifndef _WRENCH__H_
#define _WRENCH__H_

#include "sacpp_mapping.h"
#include "sacpp_DDS_DCPS.h"
#include "Vector3_.h"


namespace geometry_msgs
{
   namespace msg
   {
      namespace dds_
      {
         struct Wrench_;

         struct Wrench_
         {
               Vector3_ force_;
               Vector3_ torque_;
         };

         typedef DDS_DCPSStruct_var < Wrench_> Wrench__var;
         typedef Wrench_&Wrench__out;
      }
   }
}




#endif 
