//******************************************************************
// 
//  Generated by IDL to C++ Translator
//  
//  File name: SetParameters_Response_Dcps.h
//  Source: /home/erle/ros2_ws/build/rcl_interfaces/rosidl_typesupport_opensplice_cpp/rcl_interfaces/srv/dds_opensplice/SetParameters_Response_Dcps.idl
//  Generated: Sat Nov  7 23:02:29 2015
//  OpenSplice V6.4.140407OSS
//  
//******************************************************************
#ifndef _SETPARAMETERS_RESPONSE_DCPS_H_
#define _SETPARAMETERS_RESPONSE_DCPS_H_

#include "sacpp_mapping.h"
#include "sacpp_DDS_DCPS.h"
#include "SetParameters_Response_.h"
#include "dds_dcps.h"


namespace rcl_interfaces
{
   namespace srv
   {
      namespace dds_
      {

         class SetParameters_Response_TypeSupportInterface;

         typedef SetParameters_Response_TypeSupportInterface * SetParameters_Response_TypeSupportInterface_ptr;
         typedef DDS_DCPSInterface_var < SetParameters_Response_TypeSupportInterface> SetParameters_Response_TypeSupportInterface_var;
         typedef DDS_DCPSInterface_out < SetParameters_Response_TypeSupportInterface> SetParameters_Response_TypeSupportInterface_out;


         class SetParameters_Response_DataWriter;

         typedef SetParameters_Response_DataWriter * SetParameters_Response_DataWriter_ptr;
         typedef DDS_DCPSInterface_var < SetParameters_Response_DataWriter> SetParameters_Response_DataWriter_var;
         typedef DDS_DCPSInterface_out < SetParameters_Response_DataWriter> SetParameters_Response_DataWriter_out;


         class SetParameters_Response_DataReader;

         typedef SetParameters_Response_DataReader * SetParameters_Response_DataReader_ptr;
         typedef DDS_DCPSInterface_var < SetParameters_Response_DataReader> SetParameters_Response_DataReader_var;
         typedef DDS_DCPSInterface_out < SetParameters_Response_DataReader> SetParameters_Response_DataReader_out;


         class SetParameters_Response_DataReaderView;

         typedef SetParameters_Response_DataReaderView * SetParameters_Response_DataReaderView_ptr;
         typedef DDS_DCPSInterface_var < SetParameters_Response_DataReaderView> SetParameters_Response_DataReaderView_var;
         typedef DDS_DCPSInterface_out < SetParameters_Response_DataReaderView> SetParameters_Response_DataReaderView_out;

         struct SetParameters_Response_Seq_uniq_ {};
         typedef DDS_DCPSUVLSeq < SetParameters_Response_, struct SetParameters_Response_Seq_uniq_> SetParameters_Response_Seq;
         typedef DDS_DCPSSequence_var < SetParameters_Response_Seq> SetParameters_Response_Seq_var;
         typedef DDS_DCPSSequence_out < SetParameters_Response_Seq> SetParameters_Response_Seq_out;
         class SetParameters_Response_TypeSupportInterface
         :
            virtual public DDS::TypeSupport
         { 
         public:
            typedef SetParameters_Response_TypeSupportInterface_ptr _ptr_type;
            typedef SetParameters_Response_TypeSupportInterface_var _var_type;

            static SetParameters_Response_TypeSupportInterface_ptr _duplicate (SetParameters_Response_TypeSupportInterface_ptr obj);
            DDS::Boolean _local_is_a (const char * id);

            static SetParameters_Response_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
            static SetParameters_Response_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
            static SetParameters_Response_TypeSupportInterface_ptr _nil () { return 0; }
            static const char * _local_id;
            SetParameters_Response_TypeSupportInterface_ptr _this () { return this; }


         protected:
            SetParameters_Response_TypeSupportInterface () {};
            ~SetParameters_Response_TypeSupportInterface () {};
         private:
            SetParameters_Response_TypeSupportInterface (const SetParameters_Response_TypeSupportInterface &);
            SetParameters_Response_TypeSupportInterface & operator = (const SetParameters_Response_TypeSupportInterface &);
         };

         class SetParameters_Response_DataWriter
         :
            virtual public DDS::DataWriter
         { 
         public:
            typedef SetParameters_Response_DataWriter_ptr _ptr_type;
            typedef SetParameters_Response_DataWriter_var _var_type;

            static SetParameters_Response_DataWriter_ptr _duplicate (SetParameters_Response_DataWriter_ptr obj);
            DDS::Boolean _local_is_a (const char * id);

            static SetParameters_Response_DataWriter_ptr _narrow (DDS::Object_ptr obj);
            static SetParameters_Response_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
            static SetParameters_Response_DataWriter_ptr _nil () { return 0; }
            static const char * _local_id;
            SetParameters_Response_DataWriter_ptr _this () { return this; }

            virtual DDS::LongLong register_instance (const SetParameters_Response_& instance_data) = 0;
            virtual DDS::LongLong register_instance_w_timestamp (const SetParameters_Response_& instance_data, const DDS::Time_t& source_timestamp) = 0;
            virtual DDS::Long unregister_instance (const SetParameters_Response_& instance_data, DDS::LongLong handle) = 0;
            virtual DDS::Long unregister_instance_w_timestamp (const SetParameters_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
            virtual DDS::Long write (const SetParameters_Response_& instance_data, DDS::LongLong handle) = 0;
            virtual DDS::Long write_w_timestamp (const SetParameters_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
            virtual DDS::Long dispose (const SetParameters_Response_& instance_data, DDS::LongLong handle) = 0;
            virtual DDS::Long dispose_w_timestamp (const SetParameters_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
            virtual DDS::Long writedispose (const SetParameters_Response_& instance_data, DDS::LongLong handle) = 0;
            virtual DDS::Long writedispose_w_timestamp (const SetParameters_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
            virtual DDS::Long get_key_value (SetParameters_Response_& key_holder, DDS::LongLong handle) = 0;
            virtual DDS::LongLong lookup_instance (const SetParameters_Response_& instance_data) = 0;

         protected:
            SetParameters_Response_DataWriter () {};
            ~SetParameters_Response_DataWriter () {};
         private:
            SetParameters_Response_DataWriter (const SetParameters_Response_DataWriter &);
            SetParameters_Response_DataWriter & operator = (const SetParameters_Response_DataWriter &);
         };

         class SetParameters_Response_DataReader
         :
            virtual public DDS::DataReader
         { 
         public:
            typedef SetParameters_Response_DataReader_ptr _ptr_type;
            typedef SetParameters_Response_DataReader_var _var_type;

            static SetParameters_Response_DataReader_ptr _duplicate (SetParameters_Response_DataReader_ptr obj);
            DDS::Boolean _local_is_a (const char * id);

            static SetParameters_Response_DataReader_ptr _narrow (DDS::Object_ptr obj);
            static SetParameters_Response_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
            static SetParameters_Response_DataReader_ptr _nil () { return 0; }
            static const char * _local_id;
            SetParameters_Response_DataReader_ptr _this () { return this; }

            virtual DDS::Long read (SetParameters_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long take (SetParameters_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long read_w_condition (SetParameters_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long take_w_condition (SetParameters_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long read_next_sample (SetParameters_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
            virtual DDS::Long take_next_sample (SetParameters_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
            virtual DDS::Long read_instance (SetParameters_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long take_instance (SetParameters_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long read_next_instance (SetParameters_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long take_next_instance (SetParameters_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long read_next_instance_w_condition (SetParameters_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long take_next_instance_w_condition (SetParameters_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long return_loan (SetParameters_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
            virtual DDS::Long get_key_value (SetParameters_Response_& key_holder, DDS::LongLong handle) = 0;
            virtual DDS::LongLong lookup_instance (const SetParameters_Response_& instance) = 0;

         protected:
            SetParameters_Response_DataReader () {};
            ~SetParameters_Response_DataReader () {};
         private:
            SetParameters_Response_DataReader (const SetParameters_Response_DataReader &);
            SetParameters_Response_DataReader & operator = (const SetParameters_Response_DataReader &);
         };

         class SetParameters_Response_DataReaderView
         :
            virtual public DDS::DataReaderView
         { 
         public:
            typedef SetParameters_Response_DataReaderView_ptr _ptr_type;
            typedef SetParameters_Response_DataReaderView_var _var_type;

            static SetParameters_Response_DataReaderView_ptr _duplicate (SetParameters_Response_DataReaderView_ptr obj);
            DDS::Boolean _local_is_a (const char * id);

            static SetParameters_Response_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
            static SetParameters_Response_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
            static SetParameters_Response_DataReaderView_ptr _nil () { return 0; }
            static const char * _local_id;
            SetParameters_Response_DataReaderView_ptr _this () { return this; }

            virtual DDS::Long read (SetParameters_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long take (SetParameters_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long read_w_condition (SetParameters_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long take_w_condition (SetParameters_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long read_next_sample (SetParameters_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
            virtual DDS::Long take_next_sample (SetParameters_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
            virtual DDS::Long read_instance (SetParameters_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long take_instance (SetParameters_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long read_next_instance (SetParameters_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long take_next_instance (SetParameters_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long read_next_instance_w_condition (SetParameters_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long take_next_instance_w_condition (SetParameters_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long return_loan (SetParameters_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
            virtual DDS::Long get_key_value (SetParameters_Response_& key_holder, DDS::LongLong handle) = 0;
            virtual DDS::LongLong lookup_instance (const SetParameters_Response_& instance) = 0;

         protected:
            SetParameters_Response_DataReaderView () {};
            ~SetParameters_Response_DataReaderView () {};
         private:
            SetParameters_Response_DataReaderView (const SetParameters_Response_DataReaderView &);
            SetParameters_Response_DataReaderView & operator = (const SetParameters_Response_DataReaderView &);
         };

      }
   }
}




#endif 
