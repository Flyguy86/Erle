//******************************************************************
// 
//  Generated by IDL to C++ Translator
//  
//  File name: GetMap_Response_.h
//  Source: /home/erle/ros2_ws/build/nav_msgs/rosidl_generator_dds_idl/nav_msgs/srv/dds_opensplice/GetMap_Response_.idl
//  Generated: Sat Nov  7 23:58:40 2015
//  OpenSplice V6.4.140407OSS
//  
//******************************************************************
#ifndef _GETMAP_RESPONSE__H_
#define _GETMAP_RESPONSE__H_

#include "sacpp_mapping.h"
#include "sacpp_DDS_DCPS.h"
#include "OccupancyGrid_.h"


namespace nav_msgs
{
   namespace srv
   {
      namespace dds_
      {
         struct GetMap_Response_;

         struct GetMap_Response_
         {
               ::nav_msgs::msg::dds_::OccupancyGrid_ map_;
         };

         typedef DDS_DCPSStruct_var < GetMap_Response_> GetMap_Response__var;
         typedef DDS_DCPSStruct_out < GetMap_Response_> GetMap_Response__out;
      }
   }
}




#endif 
