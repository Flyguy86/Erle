//******************************************************************
// 
//  Generated by IDL to C++ Translator
//  
//  File name: Trigger_Response_.h
//  Source: /home/erle/ros2_ws/build/std_srvs/rosidl_generator_dds_idl/std_srvs/srv/dds_opensplice/Trigger_Response_.idl
//  Generated: Sun Nov  8 10:34:00 2015
//  OpenSplice V6.4.140407OSS
//  
//******************************************************************
#ifndef _TRIGGER_RESPONSE__H_
#define _TRIGGER_RESPONSE__H_

#include "sacpp_mapping.h"
#include "sacpp_DDS_DCPS.h"


namespace std_srvs
{
   namespace srv
   {
      namespace dds_
      {
         struct Trigger_Response_;

         struct Trigger_Response_
         {
               DDS::Boolean success_;
               DDS::String_mgr message_;
         };

         typedef DDS_DCPSStruct_var < Trigger_Response_> Trigger_Response__var;
         typedef DDS_DCPSStruct_out < Trigger_Response_> Trigger_Response__out;
      }
   }
}




#endif 
