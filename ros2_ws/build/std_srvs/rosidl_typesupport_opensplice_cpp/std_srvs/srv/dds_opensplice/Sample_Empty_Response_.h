//******************************************************************
// 
//  Generated by IDL to C++ Translator
//  
//  File name: Sample_Empty_Response_.h
//  Source: /home/erle/ros2_ws/build/std_srvs/rosidl_generator_dds_idl/std_srvs/srv/dds_opensplice/Sample_Empty_Response_.idl
//  Generated: Sun Nov  8 10:33:55 2015
//  OpenSplice V6.4.140407OSS
//  
//******************************************************************
#ifndef _SAMPLE_EMPTY_RESPONSE__H_
#define _SAMPLE_EMPTY_RESPONSE__H_

#include "sacpp_mapping.h"
#include "sacpp_DDS_DCPS.h"
#include "Empty_Response_.h"


namespace std_srvs
{
   namespace srv
   {
      namespace dds_
      {
         struct Sample_Empty_Response_;

         struct Sample_Empty_Response_
         {
               DDS::ULongLong client_guid_0_;
               DDS::ULongLong client_guid_1_;
               DDS::LongLong sequence_number_;
               Empty_Response_ response_;
         };

         typedef DDS_DCPSStruct_var < Sample_Empty_Response_> Sample_Empty_Response__var;
         typedef Sample_Empty_Response_&Sample_Empty_Response__out;
      }
   }
}




#endif 
