//******************************************************************
// 
//  Generated by IDL to C++ Translator
//  
//  File name: MultiEchoLaserScan_.h
//  Source: /home/erle/ros2_ws/build/sensor_msgs/rosidl_generator_dds_idl/sensor_msgs/msg/dds_opensplice/MultiEchoLaserScan_.idl
//  Generated: Sun Nov  8 00:04:25 2015
//  OpenSplice V6.4.140407OSS
//  
//******************************************************************
#ifndef _MULTIECHOLASERSCAN__H_
#define _MULTIECHOLASERSCAN__H_

#include "sacpp_mapping.h"
#include "sacpp_DDS_DCPS.h"
#include "LaserEcho_.h"
#include "dds_dcps.h"
#include "Header_.h"


namespace sensor_msgs
{
   namespace msg
   {
      namespace dds_
      {
         struct MultiEchoLaserScan_;

         struct MultiEchoLaserScan_
         {
               struct _ranges__seq_uniq_ {};
               typedef DDS_DCPSUVLSeq < LaserEcho_, struct _ranges__seq_uniq_> _ranges__seq;
               typedef DDS_DCPSSequence_var < _ranges__seq> _ranges__seq_var;
               typedef DDS_DCPSSequence_out < _ranges__seq> _ranges__seq_out;
               struct _intensities__seq_uniq_ {};
               typedef DDS_DCPSUVLSeq < LaserEcho_, struct _intensities__seq_uniq_> _intensities__seq;
               typedef DDS_DCPSSequence_var < _intensities__seq> _intensities__seq_var;
               typedef DDS_DCPSSequence_out < _intensities__seq> _intensities__seq_out;
               ::std_msgs::msg::dds_::Header_ header_;
               DDS::Float angle_min_;
               DDS::Float angle_max_;
               DDS::Float angle_increment_;
               DDS::Float time_increment_;
               DDS::Float scan_time_;
               DDS::Float range_min_;
               DDS::Float range_max_;
               _ranges__seq ranges_;
               _intensities__seq intensities_;
         };

         typedef DDS_DCPSStruct_var < MultiEchoLaserScan_> MultiEchoLaserScan__var;
         typedef DDS_DCPSStruct_out < MultiEchoLaserScan_> MultiEchoLaserScan__out;
      }
   }
}




#endif 
