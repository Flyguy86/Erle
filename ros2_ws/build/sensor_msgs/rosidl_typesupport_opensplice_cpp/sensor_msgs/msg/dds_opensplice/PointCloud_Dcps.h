//******************************************************************
// 
//  Generated by IDL to C++ Translator
//  
//  File name: PointCloud_Dcps.h
//  Source: /home/erle/ros2_ws/build/sensor_msgs/rosidl_typesupport_opensplice_cpp/sensor_msgs/msg/dds_opensplice/PointCloud_Dcps.idl
//  Generated: Sun Nov  8 00:04:28 2015
//  OpenSplice V6.4.140407OSS
//  
//******************************************************************
#ifndef _POINTCLOUD_DCPS_H_
#define _POINTCLOUD_DCPS_H_

#include "sacpp_mapping.h"
#include "sacpp_DDS_DCPS.h"
#include "PointCloud_.h"
#include "dds_dcps.h"


namespace sensor_msgs
{
   namespace msg
   {
      namespace dds_
      {

         class PointCloud_TypeSupportInterface;

         typedef PointCloud_TypeSupportInterface * PointCloud_TypeSupportInterface_ptr;
         typedef DDS_DCPSInterface_var < PointCloud_TypeSupportInterface> PointCloud_TypeSupportInterface_var;
         typedef DDS_DCPSInterface_out < PointCloud_TypeSupportInterface> PointCloud_TypeSupportInterface_out;


         class PointCloud_DataWriter;

         typedef PointCloud_DataWriter * PointCloud_DataWriter_ptr;
         typedef DDS_DCPSInterface_var < PointCloud_DataWriter> PointCloud_DataWriter_var;
         typedef DDS_DCPSInterface_out < PointCloud_DataWriter> PointCloud_DataWriter_out;


         class PointCloud_DataReader;

         typedef PointCloud_DataReader * PointCloud_DataReader_ptr;
         typedef DDS_DCPSInterface_var < PointCloud_DataReader> PointCloud_DataReader_var;
         typedef DDS_DCPSInterface_out < PointCloud_DataReader> PointCloud_DataReader_out;


         class PointCloud_DataReaderView;

         typedef PointCloud_DataReaderView * PointCloud_DataReaderView_ptr;
         typedef DDS_DCPSInterface_var < PointCloud_DataReaderView> PointCloud_DataReaderView_var;
         typedef DDS_DCPSInterface_out < PointCloud_DataReaderView> PointCloud_DataReaderView_out;

         struct PointCloud_Seq_uniq_ {};
         typedef DDS_DCPSUVLSeq < PointCloud_, struct PointCloud_Seq_uniq_> PointCloud_Seq;
         typedef DDS_DCPSSequence_var < PointCloud_Seq> PointCloud_Seq_var;
         typedef DDS_DCPSSequence_out < PointCloud_Seq> PointCloud_Seq_out;
         class PointCloud_TypeSupportInterface
         :
            virtual public DDS::TypeSupport
         { 
         public:
            typedef PointCloud_TypeSupportInterface_ptr _ptr_type;
            typedef PointCloud_TypeSupportInterface_var _var_type;

            static PointCloud_TypeSupportInterface_ptr _duplicate (PointCloud_TypeSupportInterface_ptr obj);
            DDS::Boolean _local_is_a (const char * id);

            static PointCloud_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
            static PointCloud_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
            static PointCloud_TypeSupportInterface_ptr _nil () { return 0; }
            static const char * _local_id;
            PointCloud_TypeSupportInterface_ptr _this () { return this; }


         protected:
            PointCloud_TypeSupportInterface () {};
            ~PointCloud_TypeSupportInterface () {};
         private:
            PointCloud_TypeSupportInterface (const PointCloud_TypeSupportInterface &);
            PointCloud_TypeSupportInterface & operator = (const PointCloud_TypeSupportInterface &);
         };

         class PointCloud_DataWriter
         :
            virtual public DDS::DataWriter
         { 
         public:
            typedef PointCloud_DataWriter_ptr _ptr_type;
            typedef PointCloud_DataWriter_var _var_type;

            static PointCloud_DataWriter_ptr _duplicate (PointCloud_DataWriter_ptr obj);
            DDS::Boolean _local_is_a (const char * id);

            static PointCloud_DataWriter_ptr _narrow (DDS::Object_ptr obj);
            static PointCloud_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
            static PointCloud_DataWriter_ptr _nil () { return 0; }
            static const char * _local_id;
            PointCloud_DataWriter_ptr _this () { return this; }

            virtual DDS::LongLong register_instance (const PointCloud_& instance_data) = 0;
            virtual DDS::LongLong register_instance_w_timestamp (const PointCloud_& instance_data, const DDS::Time_t& source_timestamp) = 0;
            virtual DDS::Long unregister_instance (const PointCloud_& instance_data, DDS::LongLong handle) = 0;
            virtual DDS::Long unregister_instance_w_timestamp (const PointCloud_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
            virtual DDS::Long write (const PointCloud_& instance_data, DDS::LongLong handle) = 0;
            virtual DDS::Long write_w_timestamp (const PointCloud_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
            virtual DDS::Long dispose (const PointCloud_& instance_data, DDS::LongLong handle) = 0;
            virtual DDS::Long dispose_w_timestamp (const PointCloud_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
            virtual DDS::Long writedispose (const PointCloud_& instance_data, DDS::LongLong handle) = 0;
            virtual DDS::Long writedispose_w_timestamp (const PointCloud_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
            virtual DDS::Long get_key_value (PointCloud_& key_holder, DDS::LongLong handle) = 0;
            virtual DDS::LongLong lookup_instance (const PointCloud_& instance_data) = 0;

         protected:
            PointCloud_DataWriter () {};
            ~PointCloud_DataWriter () {};
         private:
            PointCloud_DataWriter (const PointCloud_DataWriter &);
            PointCloud_DataWriter & operator = (const PointCloud_DataWriter &);
         };

         class PointCloud_DataReader
         :
            virtual public DDS::DataReader
         { 
         public:
            typedef PointCloud_DataReader_ptr _ptr_type;
            typedef PointCloud_DataReader_var _var_type;

            static PointCloud_DataReader_ptr _duplicate (PointCloud_DataReader_ptr obj);
            DDS::Boolean _local_is_a (const char * id);

            static PointCloud_DataReader_ptr _narrow (DDS::Object_ptr obj);
            static PointCloud_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
            static PointCloud_DataReader_ptr _nil () { return 0; }
            static const char * _local_id;
            PointCloud_DataReader_ptr _this () { return this; }

            virtual DDS::Long read (PointCloud_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long take (PointCloud_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long read_w_condition (PointCloud_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long take_w_condition (PointCloud_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long read_next_sample (PointCloud_& received_data, DDS::SampleInfo& sample_info) = 0;
            virtual DDS::Long take_next_sample (PointCloud_& received_data, DDS::SampleInfo& sample_info) = 0;
            virtual DDS::Long read_instance (PointCloud_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long take_instance (PointCloud_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long read_next_instance (PointCloud_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long take_next_instance (PointCloud_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long read_next_instance_w_condition (PointCloud_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long take_next_instance_w_condition (PointCloud_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long return_loan (PointCloud_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
            virtual DDS::Long get_key_value (PointCloud_& key_holder, DDS::LongLong handle) = 0;
            virtual DDS::LongLong lookup_instance (const PointCloud_& instance) = 0;

         protected:
            PointCloud_DataReader () {};
            ~PointCloud_DataReader () {};
         private:
            PointCloud_DataReader (const PointCloud_DataReader &);
            PointCloud_DataReader & operator = (const PointCloud_DataReader &);
         };

         class PointCloud_DataReaderView
         :
            virtual public DDS::DataReaderView
         { 
         public:
            typedef PointCloud_DataReaderView_ptr _ptr_type;
            typedef PointCloud_DataReaderView_var _var_type;

            static PointCloud_DataReaderView_ptr _duplicate (PointCloud_DataReaderView_ptr obj);
            DDS::Boolean _local_is_a (const char * id);

            static PointCloud_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
            static PointCloud_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
            static PointCloud_DataReaderView_ptr _nil () { return 0; }
            static const char * _local_id;
            PointCloud_DataReaderView_ptr _this () { return this; }

            virtual DDS::Long read (PointCloud_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long take (PointCloud_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long read_w_condition (PointCloud_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long take_w_condition (PointCloud_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long read_next_sample (PointCloud_& received_data, DDS::SampleInfo& sample_info) = 0;
            virtual DDS::Long take_next_sample (PointCloud_& received_data, DDS::SampleInfo& sample_info) = 0;
            virtual DDS::Long read_instance (PointCloud_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long take_instance (PointCloud_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long read_next_instance (PointCloud_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long take_next_instance (PointCloud_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long read_next_instance_w_condition (PointCloud_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long take_next_instance_w_condition (PointCloud_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long return_loan (PointCloud_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
            virtual DDS::Long get_key_value (PointCloud_& key_holder, DDS::LongLong handle) = 0;
            virtual DDS::LongLong lookup_instance (const PointCloud_& instance) = 0;

         protected:
            PointCloud_DataReaderView () {};
            ~PointCloud_DataReaderView () {};
         private:
            PointCloud_DataReaderView (const PointCloud_DataReaderView &);
            PointCloud_DataReaderView & operator = (const PointCloud_DataReaderView &);
         };

      }
   }
}




#endif 
