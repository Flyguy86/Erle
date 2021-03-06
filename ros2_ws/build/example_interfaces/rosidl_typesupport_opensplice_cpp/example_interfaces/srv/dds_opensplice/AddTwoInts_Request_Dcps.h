//******************************************************************
// 
//  Generated by IDL to C++ Translator
//  
//  File name: AddTwoInts_Request_Dcps.h
//  Source: /home/erle/ros2_ws/build/example_interfaces/rosidl_typesupport_opensplice_cpp/example_interfaces/srv/dds_opensplice/AddTwoInts_Request_Dcps.idl
//  Generated: Sat Nov  7 22:57:05 2015
//  OpenSplice V6.4.140407OSS
//  
//******************************************************************
#ifndef _ADDTWOINTS_REQUEST_DCPS_H_
#define _ADDTWOINTS_REQUEST_DCPS_H_

#include "sacpp_mapping.h"
#include "sacpp_DDS_DCPS.h"
#include "dds_dcps.h"
#include "AddTwoInts_Request_.h"


namespace example_interfaces
{
   namespace srv
   {
      namespace dds_
      {

         class AddTwoInts_Request_TypeSupportInterface;

         typedef AddTwoInts_Request_TypeSupportInterface * AddTwoInts_Request_TypeSupportInterface_ptr;
         typedef DDS_DCPSInterface_var < AddTwoInts_Request_TypeSupportInterface> AddTwoInts_Request_TypeSupportInterface_var;
         typedef DDS_DCPSInterface_out < AddTwoInts_Request_TypeSupportInterface> AddTwoInts_Request_TypeSupportInterface_out;


         class AddTwoInts_Request_DataWriter;

         typedef AddTwoInts_Request_DataWriter * AddTwoInts_Request_DataWriter_ptr;
         typedef DDS_DCPSInterface_var < AddTwoInts_Request_DataWriter> AddTwoInts_Request_DataWriter_var;
         typedef DDS_DCPSInterface_out < AddTwoInts_Request_DataWriter> AddTwoInts_Request_DataWriter_out;


         class AddTwoInts_Request_DataReader;

         typedef AddTwoInts_Request_DataReader * AddTwoInts_Request_DataReader_ptr;
         typedef DDS_DCPSInterface_var < AddTwoInts_Request_DataReader> AddTwoInts_Request_DataReader_var;
         typedef DDS_DCPSInterface_out < AddTwoInts_Request_DataReader> AddTwoInts_Request_DataReader_out;


         class AddTwoInts_Request_DataReaderView;

         typedef AddTwoInts_Request_DataReaderView * AddTwoInts_Request_DataReaderView_ptr;
         typedef DDS_DCPSInterface_var < AddTwoInts_Request_DataReaderView> AddTwoInts_Request_DataReaderView_var;
         typedef DDS_DCPSInterface_out < AddTwoInts_Request_DataReaderView> AddTwoInts_Request_DataReaderView_out;

         struct AddTwoInts_Request_Seq_uniq_ {};
         typedef DDS_DCPSUFLSeq < AddTwoInts_Request_, struct AddTwoInts_Request_Seq_uniq_> AddTwoInts_Request_Seq;
         typedef DDS_DCPSSequence_var < AddTwoInts_Request_Seq> AddTwoInts_Request_Seq_var;
         typedef DDS_DCPSSequence_out < AddTwoInts_Request_Seq> AddTwoInts_Request_Seq_out;
         class AddTwoInts_Request_TypeSupportInterface
         :
            virtual public DDS::TypeSupport
         { 
         public:
            typedef AddTwoInts_Request_TypeSupportInterface_ptr _ptr_type;
            typedef AddTwoInts_Request_TypeSupportInterface_var _var_type;

            static AddTwoInts_Request_TypeSupportInterface_ptr _duplicate (AddTwoInts_Request_TypeSupportInterface_ptr obj);
            DDS::Boolean _local_is_a (const char * id);

            static AddTwoInts_Request_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
            static AddTwoInts_Request_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
            static AddTwoInts_Request_TypeSupportInterface_ptr _nil () { return 0; }
            static const char * _local_id;
            AddTwoInts_Request_TypeSupportInterface_ptr _this () { return this; }


         protected:
            AddTwoInts_Request_TypeSupportInterface () {};
            ~AddTwoInts_Request_TypeSupportInterface () {};
         private:
            AddTwoInts_Request_TypeSupportInterface (const AddTwoInts_Request_TypeSupportInterface &);
            AddTwoInts_Request_TypeSupportInterface & operator = (const AddTwoInts_Request_TypeSupportInterface &);
         };

         class AddTwoInts_Request_DataWriter
         :
            virtual public DDS::DataWriter
         { 
         public:
            typedef AddTwoInts_Request_DataWriter_ptr _ptr_type;
            typedef AddTwoInts_Request_DataWriter_var _var_type;

            static AddTwoInts_Request_DataWriter_ptr _duplicate (AddTwoInts_Request_DataWriter_ptr obj);
            DDS::Boolean _local_is_a (const char * id);

            static AddTwoInts_Request_DataWriter_ptr _narrow (DDS::Object_ptr obj);
            static AddTwoInts_Request_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
            static AddTwoInts_Request_DataWriter_ptr _nil () { return 0; }
            static const char * _local_id;
            AddTwoInts_Request_DataWriter_ptr _this () { return this; }

            virtual DDS::LongLong register_instance (const AddTwoInts_Request_& instance_data) = 0;
            virtual DDS::LongLong register_instance_w_timestamp (const AddTwoInts_Request_& instance_data, const DDS::Time_t& source_timestamp) = 0;
            virtual DDS::Long unregister_instance (const AddTwoInts_Request_& instance_data, DDS::LongLong handle) = 0;
            virtual DDS::Long unregister_instance_w_timestamp (const AddTwoInts_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
            virtual DDS::Long write (const AddTwoInts_Request_& instance_data, DDS::LongLong handle) = 0;
            virtual DDS::Long write_w_timestamp (const AddTwoInts_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
            virtual DDS::Long dispose (const AddTwoInts_Request_& instance_data, DDS::LongLong handle) = 0;
            virtual DDS::Long dispose_w_timestamp (const AddTwoInts_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
            virtual DDS::Long writedispose (const AddTwoInts_Request_& instance_data, DDS::LongLong handle) = 0;
            virtual DDS::Long writedispose_w_timestamp (const AddTwoInts_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
            virtual DDS::Long get_key_value (AddTwoInts_Request_& key_holder, DDS::LongLong handle) = 0;
            virtual DDS::LongLong lookup_instance (const AddTwoInts_Request_& instance_data) = 0;

         protected:
            AddTwoInts_Request_DataWriter () {};
            ~AddTwoInts_Request_DataWriter () {};
         private:
            AddTwoInts_Request_DataWriter (const AddTwoInts_Request_DataWriter &);
            AddTwoInts_Request_DataWriter & operator = (const AddTwoInts_Request_DataWriter &);
         };

         class AddTwoInts_Request_DataReader
         :
            virtual public DDS::DataReader
         { 
         public:
            typedef AddTwoInts_Request_DataReader_ptr _ptr_type;
            typedef AddTwoInts_Request_DataReader_var _var_type;

            static AddTwoInts_Request_DataReader_ptr _duplicate (AddTwoInts_Request_DataReader_ptr obj);
            DDS::Boolean _local_is_a (const char * id);

            static AddTwoInts_Request_DataReader_ptr _narrow (DDS::Object_ptr obj);
            static AddTwoInts_Request_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
            static AddTwoInts_Request_DataReader_ptr _nil () { return 0; }
            static const char * _local_id;
            AddTwoInts_Request_DataReader_ptr _this () { return this; }

            virtual DDS::Long read (AddTwoInts_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long take (AddTwoInts_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long read_w_condition (AddTwoInts_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long take_w_condition (AddTwoInts_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long read_next_sample (AddTwoInts_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
            virtual DDS::Long take_next_sample (AddTwoInts_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
            virtual DDS::Long read_instance (AddTwoInts_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long take_instance (AddTwoInts_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long read_next_instance (AddTwoInts_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long take_next_instance (AddTwoInts_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long read_next_instance_w_condition (AddTwoInts_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long take_next_instance_w_condition (AddTwoInts_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long return_loan (AddTwoInts_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
            virtual DDS::Long get_key_value (AddTwoInts_Request_& key_holder, DDS::LongLong handle) = 0;
            virtual DDS::LongLong lookup_instance (const AddTwoInts_Request_& instance) = 0;

         protected:
            AddTwoInts_Request_DataReader () {};
            ~AddTwoInts_Request_DataReader () {};
         private:
            AddTwoInts_Request_DataReader (const AddTwoInts_Request_DataReader &);
            AddTwoInts_Request_DataReader & operator = (const AddTwoInts_Request_DataReader &);
         };

         class AddTwoInts_Request_DataReaderView
         :
            virtual public DDS::DataReaderView
         { 
         public:
            typedef AddTwoInts_Request_DataReaderView_ptr _ptr_type;
            typedef AddTwoInts_Request_DataReaderView_var _var_type;

            static AddTwoInts_Request_DataReaderView_ptr _duplicate (AddTwoInts_Request_DataReaderView_ptr obj);
            DDS::Boolean _local_is_a (const char * id);

            static AddTwoInts_Request_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
            static AddTwoInts_Request_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
            static AddTwoInts_Request_DataReaderView_ptr _nil () { return 0; }
            static const char * _local_id;
            AddTwoInts_Request_DataReaderView_ptr _this () { return this; }

            virtual DDS::Long read (AddTwoInts_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long take (AddTwoInts_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long read_w_condition (AddTwoInts_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long take_w_condition (AddTwoInts_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long read_next_sample (AddTwoInts_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
            virtual DDS::Long take_next_sample (AddTwoInts_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
            virtual DDS::Long read_instance (AddTwoInts_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long take_instance (AddTwoInts_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long read_next_instance (AddTwoInts_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long take_next_instance (AddTwoInts_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long read_next_instance_w_condition (AddTwoInts_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long take_next_instance_w_condition (AddTwoInts_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long return_loan (AddTwoInts_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
            virtual DDS::Long get_key_value (AddTwoInts_Request_& key_holder, DDS::LongLong handle) = 0;
            virtual DDS::LongLong lookup_instance (const AddTwoInts_Request_& instance) = 0;

         protected:
            AddTwoInts_Request_DataReaderView () {};
            ~AddTwoInts_Request_DataReaderView () {};
         private:
            AddTwoInts_Request_DataReaderView (const AddTwoInts_Request_DataReaderView &);
            AddTwoInts_Request_DataReaderView & operator = (const AddTwoInts_Request_DataReaderView &);
         };

      }
   }
}




#endif 
