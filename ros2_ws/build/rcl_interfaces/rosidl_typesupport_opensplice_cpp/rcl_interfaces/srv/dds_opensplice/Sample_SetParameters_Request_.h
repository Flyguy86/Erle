//******************************************************************
// 
//  Generated by IDL to C++ Translator
//  
//  File name: Sample_SetParameters_Request_.h
//  Source: /home/erle/ros2_ws/build/rcl_interfaces/rosidl_generator_dds_idl/rcl_interfaces/srv/dds_opensplice/Sample_SetParameters_Request_.idl
//  Generated: Sat Nov  7 23:02:17 2015
//  OpenSplice V6.4.140407OSS
//  
//******************************************************************
#ifndef _SAMPLE_SETPARAMETERS_REQUEST__H_
#define _SAMPLE_SETPARAMETERS_REQUEST__H_

#include "sacpp_mapping.h"
#include "sacpp_DDS_DCPS.h"
#include "SetParameters_Request_.h"


namespace rcl_interfaces
{
   namespace srv
   {
      namespace dds_
      {
         struct Sample_SetParameters_Request_;

         struct Sample_SetParameters_Request_
         {
               DDS::ULongLong client_guid_0_;
               DDS::ULongLong client_guid_1_;
               DDS::LongLong sequence_number_;
               SetParameters_Request_ request_;
         };

         typedef DDS_DCPSStruct_var < Sample_SetParameters_Request_> Sample_SetParameters_Request__var;
         typedef DDS_DCPSStruct_out < Sample_SetParameters_Request_> Sample_SetParameters_Request__out;
      }
   }
}




#endif 
