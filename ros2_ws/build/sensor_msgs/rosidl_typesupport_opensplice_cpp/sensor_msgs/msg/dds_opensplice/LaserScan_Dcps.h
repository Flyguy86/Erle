//******************************************************************
// 
//  Generated by IDL to C++ Translator
//  
//  File name: LaserScan_Dcps.h
//  Source: /home/erle/ros2_ws/build/sensor_msgs/rosidl_typesupport_opensplice_cpp/sensor_msgs/msg/dds_opensplice/LaserScan_Dcps.idl
//  Generated: Sun Nov  8 00:04:20 2015
//  OpenSplice V6.4.140407OSS
//  
//******************************************************************
#ifndef _LASERSCAN_DCPS_H_
#define _LASERSCAN_DCPS_H_

#include "sacpp_mapping.h"
#include "sacpp_DDS_DCPS.h"
#include "LaserScan_.h"
#include "dds_dcps.h"


namespace sensor_msgs
{
   namespace msg
   {
      namespace dds_
      {

         class LaserScan_TypeSupportInterface;

         typedef LaserScan_TypeSupportInterface * LaserScan_TypeSupportInterface_ptr;
         typedef DDS_DCPSInterface_var < LaserScan_TypeSupportInterface> LaserScan_TypeSupportInterface_var;
         typedef DDS_DCPSInterface_out < LaserScan_TypeSupportInterface> LaserScan_TypeSupportInterface_out;


         class LaserScan_DataWriter;

         typedef LaserScan_DataWriter * LaserScan_DataWriter_ptr;
         typedef DDS_DCPSInterface_var < LaserScan_DataWriter> LaserScan_DataWriter_var;
         typedef DDS_DCPSInterface_out < LaserScan_DataWriter> LaserScan_DataWriter_out;


         class LaserScan_DataReader;

         typedef LaserScan_DataReader * LaserScan_DataReader_ptr;
         typedef DDS_DCPSInterface_var < LaserScan_DataReader> LaserScan_DataReader_var;
         typedef DDS_DCPSInterface_out < LaserScan_DataReader> LaserScan_DataReader_out;


         class LaserScan_DataReaderView;

         typedef LaserScan_DataReaderView * LaserScan_DataReaderView_ptr;
         typedef DDS_DCPSInterface_var < LaserScan_DataReaderView> LaserScan_DataReaderView_var;
         typedef DDS_DCPSInterface_out < LaserScan_DataReaderView> LaserScan_DataReaderView_out;

         struct LaserScan_Seq_uniq_ {};
         typedef DDS_DCPSUVLSeq < LaserScan_, struct LaserScan_Seq_uniq_> LaserScan_Seq;
         typedef DDS_DCPSSequence_var < LaserScan_Seq> LaserScan_Seq_var;
         typedef DDS_DCPSSequence_out < LaserScan_Seq> LaserScan_Seq_out;
         class LaserScan_TypeSupportInterface
         :
            virtual public DDS::TypeSupport
         { 
         public:
            typedef LaserScan_TypeSupportInterface_ptr _ptr_type;
            typedef LaserScan_TypeSupportInterface_var _var_type;

            static LaserScan_TypeSupportInterface_ptr _duplicate (LaserScan_TypeSupportInterface_ptr obj);
            DDS::Boolean _local_is_a (const char * id);

            static LaserScan_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
            static LaserScan_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
            static LaserScan_TypeSupportInterface_ptr _nil () { return 0; }
            static const char * _local_id;
            LaserScan_TypeSupportInterface_ptr _this () { return this; }


         protected:
            LaserScan_TypeSupportInterface () {};
            ~LaserScan_TypeSupportInterface () {};
         private:
            LaserScan_TypeSupportInterface (const LaserScan_TypeSupportInterface &);
            LaserScan_TypeSupportInterface & operator = (const LaserScan_TypeSupportInterface &);
         };

         class LaserScan_DataWriter
         :
            virtual public DDS::DataWriter
         { 
         public:
            typedef LaserScan_DataWriter_ptr _ptr_type;
            typedef LaserScan_DataWriter_var _var_type;

            static LaserScan_DataWriter_ptr _duplicate (LaserScan_DataWriter_ptr obj);
            DDS::Boolean _local_is_a (const char * id);

            static LaserScan_DataWriter_ptr _narrow (DDS::Object_ptr obj);
            static LaserScan_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
            static LaserScan_DataWriter_ptr _nil () { return 0; }
            static const char * _local_id;
            LaserScan_DataWriter_ptr _this () { return this; }

            virtual DDS::LongLong register_instance (const LaserScan_& instance_data) = 0;
            virtual DDS::LongLong register_instance_w_timestamp (const LaserScan_& instance_data, const DDS::Time_t& source_timestamp) = 0;
            virtual DDS::Long unregister_instance (const LaserScan_& instance_data, DDS::LongLong handle) = 0;
            virtual DDS::Long unregister_instance_w_timestamp (const LaserScan_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
            virtual DDS::Long write (const LaserScan_& instance_data, DDS::LongLong handle) = 0;
            virtual DDS::Long write_w_timestamp (const LaserScan_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
            virtual DDS::Long dispose (const LaserScan_& instance_data, DDS::LongLong handle) = 0;
            virtual DDS::Long dispose_w_timestamp (const LaserScan_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
            virtual DDS::Long writedispose (const LaserScan_& instance_data, DDS::LongLong handle) = 0;
            virtual DDS::Long writedispose_w_timestamp (const LaserScan_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
            virtual DDS::Long get_key_value (LaserScan_& key_holder, DDS::LongLong handle) = 0;
            virtual DDS::LongLong lookup_instance (const LaserScan_& instance_data) = 0;

         protected:
            LaserScan_DataWriter () {};
            ~LaserScan_DataWriter () {};
         private:
            LaserScan_DataWriter (const LaserScan_DataWriter &);
            LaserScan_DataWriter & operator = (const LaserScan_DataWriter &);
         };

         class LaserScan_DataReader
         :
            virtual public DDS::DataReader
         { 
         public:
            typedef LaserScan_DataReader_ptr _ptr_type;
            typedef LaserScan_DataReader_var _var_type;

            static LaserScan_DataReader_ptr _duplicate (LaserScan_DataReader_ptr obj);
            DDS::Boolean _local_is_a (const char * id);

            static LaserScan_DataReader_ptr _narrow (DDS::Object_ptr obj);
            static LaserScan_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
            static LaserScan_DataReader_ptr _nil () { return 0; }
            static const char * _local_id;
            LaserScan_DataReader_ptr _this () { return this; }

            virtual DDS::Long read (LaserScan_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long take (LaserScan_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long read_w_condition (LaserScan_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long take_w_condition (LaserScan_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long read_next_sample (LaserScan_& received_data, DDS::SampleInfo& sample_info) = 0;
            virtual DDS::Long take_next_sample (LaserScan_& received_data, DDS::SampleInfo& sample_info) = 0;
            virtual DDS::Long read_instance (LaserScan_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long take_instance (LaserScan_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long read_next_instance (LaserScan_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long take_next_instance (LaserScan_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long read_next_instance_w_condition (LaserScan_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long take_next_instance_w_condition (LaserScan_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long return_loan (LaserScan_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
            virtual DDS::Long get_key_value (LaserScan_& key_holder, DDS::LongLong handle) = 0;
            virtual DDS::LongLong lookup_instance (const LaserScan_& instance) = 0;

         protected:
            LaserScan_DataReader () {};
            ~LaserScan_DataReader () {};
         private:
            LaserScan_DataReader (const LaserScan_DataReader &);
            LaserScan_DataReader & operator = (const LaserScan_DataReader &);
         };

         class LaserScan_DataReaderView
         :
            virtual public DDS::DataReaderView
         { 
         public:
            typedef LaserScan_DataReaderView_ptr _ptr_type;
            typedef LaserScan_DataReaderView_var _var_type;

            static LaserScan_DataReaderView_ptr _duplicate (LaserScan_DataReaderView_ptr obj);
            DDS::Boolean _local_is_a (const char * id);

            static LaserScan_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
            static LaserScan_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
            static LaserScan_DataReaderView_ptr _nil () { return 0; }
            static const char * _local_id;
            LaserScan_DataReaderView_ptr _this () { return this; }

            virtual DDS::Long read (LaserScan_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long take (LaserScan_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long read_w_condition (LaserScan_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long take_w_condition (LaserScan_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long read_next_sample (LaserScan_& received_data, DDS::SampleInfo& sample_info) = 0;
            virtual DDS::Long take_next_sample (LaserScan_& received_data, DDS::SampleInfo& sample_info) = 0;
            virtual DDS::Long read_instance (LaserScan_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long take_instance (LaserScan_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long read_next_instance (LaserScan_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long take_next_instance (LaserScan_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long read_next_instance_w_condition (LaserScan_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long take_next_instance_w_condition (LaserScan_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long return_loan (LaserScan_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
            virtual DDS::Long get_key_value (LaserScan_& key_holder, DDS::LongLong handle) = 0;
            virtual DDS::LongLong lookup_instance (const LaserScan_& instance) = 0;

         protected:
            LaserScan_DataReaderView () {};
            ~LaserScan_DataReaderView () {};
         private:
            LaserScan_DataReaderView (const LaserScan_DataReaderView &);
            LaserScan_DataReaderView & operator = (const LaserScan_DataReaderView &);
         };

      }
   }
}




#endif 
