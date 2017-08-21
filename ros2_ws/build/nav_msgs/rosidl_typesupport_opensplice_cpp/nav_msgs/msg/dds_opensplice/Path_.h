//******************************************************************
// 
//  Generated by IDL to C++ Translator
//  
//  File name: Path_.h
//  Source: /home/erle/ros2_ws/build/nav_msgs/rosidl_generator_dds_idl/nav_msgs/msg/dds_opensplice/Path_.idl
//  Generated: Sat Nov  7 23:58:32 2015
//  OpenSplice V6.4.140407OSS
//  
//******************************************************************
#ifndef _PATH__H_
#define _PATH__H_

#include "sacpp_mapping.h"
#include "sacpp_DDS_DCPS.h"
#include "PoseStamped_.h"
#include "Header_.h"


namespace nav_msgs
{
   namespace msg
   {
      namespace dds_
      {
         struct Path_;

         struct Path_
         {
               struct _poses__seq_uniq_ {};
               typedef DDS_DCPSUVLSeq < ::geometry_msgs::msg::dds_::PoseStamped_, struct _poses__seq_uniq_> _poses__seq;
               typedef DDS_DCPSSequence_var < _poses__seq> _poses__seq_var;
               typedef DDS_DCPSSequence_out < _poses__seq> _poses__seq_out;
               ::std_msgs::msg::dds_::Header_ header_;
               _poses__seq poses_;
         };

         typedef DDS_DCPSStruct_var < Path_> Path__var;
         typedef DDS_DCPSStruct_out < Path_> Path__out;
      }
   }
}




#endif 
