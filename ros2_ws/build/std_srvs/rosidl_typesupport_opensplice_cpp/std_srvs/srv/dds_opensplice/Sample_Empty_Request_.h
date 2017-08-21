//******************************************************************
// 
//  Generated by IDL to C++ Translator
//  
//  File name: Sample_Empty_Request_.h
//  Source: /home/erle/ros2_ws/build/std_srvs/rosidl_generator_dds_idl/std_srvs/srv/dds_opensplice/Sample_Empty_Request_.idl
//  Generated: Sun Nov  8 10:33:54 2015
//  OpenSplice V6.4.140407OSS
//  
//******************************************************************
#ifndef _SAMPLE_EMPTY_REQUEST__H_
#define _SAMPLE_EMPTY_REQUEST__H_

#include "sacpp_mapping.h"
#include "sacpp_DDS_DCPS.h"
#include "Empty_Request_.h"


namespace std_srvs
{
   namespace srv
   {
      namespace dds_
      {
         struct Sample_Empty_Request_;

         struct Sample_Empty_Request_
         {
               DDS::ULongLong client_guid_0_;
               DDS::ULongLong client_guid_1_;
               DDS::LongLong sequence_number_;
               Empty_Request_ request_;
         };

         typedef DDS_DCPSStruct_var < Sample_Empty_Request_> Sample_Empty_Request__var;
         typedef Sample_Empty_Request_&Sample_Empty_Request__out;
      }
   }
}




#endif 
