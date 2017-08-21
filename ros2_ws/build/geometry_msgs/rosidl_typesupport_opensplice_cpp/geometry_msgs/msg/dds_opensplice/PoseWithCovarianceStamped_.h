//******************************************************************
// 
//  Generated by IDL to C++ Translator
//  
//  File name: PoseWithCovarianceStamped_.h
//  Source: /home/erle/ros2_ws/build/geometry_msgs/rosidl_generator_dds_idl/geometry_msgs/msg/dds_opensplice/PoseWithCovarianceStamped_.idl
//  Generated: Sat Nov  7 20:40:39 2015
//  OpenSplice V6.4.140407OSS
//  
//******************************************************************
#ifndef _POSEWITHCOVARIANCESTAMPED__H_
#define _POSEWITHCOVARIANCESTAMPED__H_

#include "sacpp_mapping.h"
#include "sacpp_DDS_DCPS.h"
#include "dds_dcps.h"
#include "PoseWithCovariance_.h"
#include "Header_.h"


namespace geometry_msgs
{
   namespace msg
   {
      namespace dds_
      {
         struct PoseWithCovarianceStamped_;

         struct PoseWithCovarianceStamped_
         {
               ::std_msgs::msg::dds_::Header_ header_;
               PoseWithCovariance_ pose_;
         };

         typedef DDS_DCPSStruct_var < PoseWithCovarianceStamped_> PoseWithCovarianceStamped__var;
         typedef DDS_DCPSStruct_out < PoseWithCovarianceStamped_> PoseWithCovarianceStamped__out;
      }
   }
}




#endif 
