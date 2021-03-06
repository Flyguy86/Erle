//******************************************************************
// 
//  Generated by IDL to C++ Translator
//  
//  File name: CameraInfo_Dcps.h
//  Source: /home/erle/ros2_ws/build/sensor_msgs/rosidl_typesupport_opensplice_cpp/sensor_msgs/msg/dds_opensplice/CameraInfo_Dcps.idl
//  Generated: Sun Nov  8 00:04:05 2015
//  OpenSplice V6.4.140407OSS
//  
//******************************************************************
#ifndef _CAMERAINFO_DCPS_H_
#define _CAMERAINFO_DCPS_H_

#include "sacpp_mapping.h"
#include "sacpp_DDS_DCPS.h"
#include "CameraInfo_.h"
#include "dds_dcps.h"


namespace sensor_msgs
{
   namespace msg
   {
      namespace dds_
      {

         class CameraInfo_TypeSupportInterface;

         typedef CameraInfo_TypeSupportInterface * CameraInfo_TypeSupportInterface_ptr;
         typedef DDS_DCPSInterface_var < CameraInfo_TypeSupportInterface> CameraInfo_TypeSupportInterface_var;
         typedef DDS_DCPSInterface_out < CameraInfo_TypeSupportInterface> CameraInfo_TypeSupportInterface_out;


         class CameraInfo_DataWriter;

         typedef CameraInfo_DataWriter * CameraInfo_DataWriter_ptr;
         typedef DDS_DCPSInterface_var < CameraInfo_DataWriter> CameraInfo_DataWriter_var;
         typedef DDS_DCPSInterface_out < CameraInfo_DataWriter> CameraInfo_DataWriter_out;


         class CameraInfo_DataReader;

         typedef CameraInfo_DataReader * CameraInfo_DataReader_ptr;
         typedef DDS_DCPSInterface_var < CameraInfo_DataReader> CameraInfo_DataReader_var;
         typedef DDS_DCPSInterface_out < CameraInfo_DataReader> CameraInfo_DataReader_out;


         class CameraInfo_DataReaderView;

         typedef CameraInfo_DataReaderView * CameraInfo_DataReaderView_ptr;
         typedef DDS_DCPSInterface_var < CameraInfo_DataReaderView> CameraInfo_DataReaderView_var;
         typedef DDS_DCPSInterface_out < CameraInfo_DataReaderView> CameraInfo_DataReaderView_out;

         struct CameraInfo_Seq_uniq_ {};
         typedef DDS_DCPSUVLSeq < CameraInfo_, struct CameraInfo_Seq_uniq_> CameraInfo_Seq;
         typedef DDS_DCPSSequence_var < CameraInfo_Seq> CameraInfo_Seq_var;
         typedef DDS_DCPSSequence_out < CameraInfo_Seq> CameraInfo_Seq_out;
         class CameraInfo_TypeSupportInterface
         :
            virtual public DDS::TypeSupport
         { 
         public:
            typedef CameraInfo_TypeSupportInterface_ptr _ptr_type;
            typedef CameraInfo_TypeSupportInterface_var _var_type;

            static CameraInfo_TypeSupportInterface_ptr _duplicate (CameraInfo_TypeSupportInterface_ptr obj);
            DDS::Boolean _local_is_a (const char * id);

            static CameraInfo_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
            static CameraInfo_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
            static CameraInfo_TypeSupportInterface_ptr _nil () { return 0; }
            static const char * _local_id;
            CameraInfo_TypeSupportInterface_ptr _this () { return this; }


         protected:
            CameraInfo_TypeSupportInterface () {};
            ~CameraInfo_TypeSupportInterface () {};
         private:
            CameraInfo_TypeSupportInterface (const CameraInfo_TypeSupportInterface &);
            CameraInfo_TypeSupportInterface & operator = (const CameraInfo_TypeSupportInterface &);
         };

         class CameraInfo_DataWriter
         :
            virtual public DDS::DataWriter
         { 
         public:
            typedef CameraInfo_DataWriter_ptr _ptr_type;
            typedef CameraInfo_DataWriter_var _var_type;

            static CameraInfo_DataWriter_ptr _duplicate (CameraInfo_DataWriter_ptr obj);
            DDS::Boolean _local_is_a (const char * id);

            static CameraInfo_DataWriter_ptr _narrow (DDS::Object_ptr obj);
            static CameraInfo_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
            static CameraInfo_DataWriter_ptr _nil () { return 0; }
            static const char * _local_id;
            CameraInfo_DataWriter_ptr _this () { return this; }

            virtual DDS::LongLong register_instance (const CameraInfo_& instance_data) = 0;
            virtual DDS::LongLong register_instance_w_timestamp (const CameraInfo_& instance_data, const DDS::Time_t& source_timestamp) = 0;
            virtual DDS::Long unregister_instance (const CameraInfo_& instance_data, DDS::LongLong handle) = 0;
            virtual DDS::Long unregister_instance_w_timestamp (const CameraInfo_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
            virtual DDS::Long write (const CameraInfo_& instance_data, DDS::LongLong handle) = 0;
            virtual DDS::Long write_w_timestamp (const CameraInfo_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
            virtual DDS::Long dispose (const CameraInfo_& instance_data, DDS::LongLong handle) = 0;
            virtual DDS::Long dispose_w_timestamp (const CameraInfo_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
            virtual DDS::Long writedispose (const CameraInfo_& instance_data, DDS::LongLong handle) = 0;
            virtual DDS::Long writedispose_w_timestamp (const CameraInfo_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
            virtual DDS::Long get_key_value (CameraInfo_& key_holder, DDS::LongLong handle) = 0;
            virtual DDS::LongLong lookup_instance (const CameraInfo_& instance_data) = 0;

         protected:
            CameraInfo_DataWriter () {};
            ~CameraInfo_DataWriter () {};
         private:
            CameraInfo_DataWriter (const CameraInfo_DataWriter &);
            CameraInfo_DataWriter & operator = (const CameraInfo_DataWriter &);
         };

         class CameraInfo_DataReader
         :
            virtual public DDS::DataReader
         { 
         public:
            typedef CameraInfo_DataReader_ptr _ptr_type;
            typedef CameraInfo_DataReader_var _var_type;

            static CameraInfo_DataReader_ptr _duplicate (CameraInfo_DataReader_ptr obj);
            DDS::Boolean _local_is_a (const char * id);

            static CameraInfo_DataReader_ptr _narrow (DDS::Object_ptr obj);
            static CameraInfo_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
            static CameraInfo_DataReader_ptr _nil () { return 0; }
            static const char * _local_id;
            CameraInfo_DataReader_ptr _this () { return this; }

            virtual DDS::Long read (CameraInfo_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long take (CameraInfo_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long read_w_condition (CameraInfo_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long take_w_condition (CameraInfo_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long read_next_sample (CameraInfo_& received_data, DDS::SampleInfo& sample_info) = 0;
            virtual DDS::Long take_next_sample (CameraInfo_& received_data, DDS::SampleInfo& sample_info) = 0;
            virtual DDS::Long read_instance (CameraInfo_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long take_instance (CameraInfo_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long read_next_instance (CameraInfo_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long take_next_instance (CameraInfo_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long read_next_instance_w_condition (CameraInfo_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long take_next_instance_w_condition (CameraInfo_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long return_loan (CameraInfo_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
            virtual DDS::Long get_key_value (CameraInfo_& key_holder, DDS::LongLong handle) = 0;
            virtual DDS::LongLong lookup_instance (const CameraInfo_& instance) = 0;

         protected:
            CameraInfo_DataReader () {};
            ~CameraInfo_DataReader () {};
         private:
            CameraInfo_DataReader (const CameraInfo_DataReader &);
            CameraInfo_DataReader & operator = (const CameraInfo_DataReader &);
         };

         class CameraInfo_DataReaderView
         :
            virtual public DDS::DataReaderView
         { 
         public:
            typedef CameraInfo_DataReaderView_ptr _ptr_type;
            typedef CameraInfo_DataReaderView_var _var_type;

            static CameraInfo_DataReaderView_ptr _duplicate (CameraInfo_DataReaderView_ptr obj);
            DDS::Boolean _local_is_a (const char * id);

            static CameraInfo_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
            static CameraInfo_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
            static CameraInfo_DataReaderView_ptr _nil () { return 0; }
            static const char * _local_id;
            CameraInfo_DataReaderView_ptr _this () { return this; }

            virtual DDS::Long read (CameraInfo_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long take (CameraInfo_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long read_w_condition (CameraInfo_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long take_w_condition (CameraInfo_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long read_next_sample (CameraInfo_& received_data, DDS::SampleInfo& sample_info) = 0;
            virtual DDS::Long take_next_sample (CameraInfo_& received_data, DDS::SampleInfo& sample_info) = 0;
            virtual DDS::Long read_instance (CameraInfo_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long take_instance (CameraInfo_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long read_next_instance (CameraInfo_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long take_next_instance (CameraInfo_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long read_next_instance_w_condition (CameraInfo_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long take_next_instance_w_condition (CameraInfo_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long return_loan (CameraInfo_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
            virtual DDS::Long get_key_value (CameraInfo_& key_holder, DDS::LongLong handle) = 0;
            virtual DDS::LongLong lookup_instance (const CameraInfo_& instance) = 0;

         protected:
            CameraInfo_DataReaderView () {};
            ~CameraInfo_DataReaderView () {};
         private:
            CameraInfo_DataReaderView (const CameraInfo_DataReaderView &);
            CameraInfo_DataReaderView & operator = (const CameraInfo_DataReaderView &);
         };

      }
   }
}




#endif 
