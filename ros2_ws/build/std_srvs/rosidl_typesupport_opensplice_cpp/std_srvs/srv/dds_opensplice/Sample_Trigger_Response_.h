//******************************************************************
// 
//  Generated by IDL to C++ Translator
//  
//  File name: Sample_Trigger_Response_.h
//  Source: /home/erle/ros2_ws/build/std_srvs/rosidl_generator_dds_idl/std_srvs/srv/dds_opensplice/Sample_Trigger_Response_.idl
//  Generated: Sun Nov  8 10:33:57 2015
//  OpenSplice V6.4.140407OSS
//  
//******************************************************************
#ifndef _SAMPLE_TRIGGER_RESPONSE__H_
#define _SAMPLE_TRIGGER_RESPONSE__H_

#include "sacpp_mapping.h"
#include "sacpp_DDS_DCPS.h"
#include "Trigger_Response_.h"


namespace std_srvs
{
   namespace srv
   {
      namespace dds_
      {
         struct Sample_Trigger_Response_;

         struct Sample_Trigger_Response_
         {
               DDS::ULongLong client_guid_0_;
               DDS::ULongLong client_guid_1_;
               DDS::LongLong sequence_number_;
               Trigger_Response_ response_;
         };

         typedef DDS_DCPSStruct_var < Sample_Trigger_Response_> Sample_Trigger_Response__var;
         typedef DDS_DCPSStruct_out < Sample_Trigger_Response_> Sample_Trigger_Response__out;
      }
   }
}




#endif 
