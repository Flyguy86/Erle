//******************************************************************
// 
//  Generated by IDL to C++ Translator
//  
//  File name: PoseWithCovarianceStamped_Dcps.h
//  Source: /home/erle/ros2_ws/build/geometry_msgs/rosidl_typesupport_opensplice_cpp/geometry_msgs/msg/dds_opensplice/PoseWithCovarianceStamped_Dcps.idl
//  Generated: Sat Nov  7 20:40:39 2015
//  OpenSplice V6.4.140407OSS
//  
//******************************************************************
#ifndef _POSEWITHCOVARIANCESTAMPED_DCPS_H_
#define _POSEWITHCOVARIANCESTAMPED_DCPS_H_

#include "sacpp_mapping.h"
#include "sacpp_DDS_DCPS.h"
#include "PoseWithCovarianceStamped_.h"
#include "dds_dcps.h"


namespace geometry_msgs
{
   namespace msg
   {
      namespace dds_
      {

         class PoseWithCovarianceStamped_TypeSupportInterface;

         typedef PoseWithCovarianceStamped_TypeSupportInterface * PoseWithCovarianceStamped_TypeSupportInterface_ptr;
         typedef DDS_DCPSInterface_var < PoseWithCovarianceStamped_TypeSupportInterface> PoseWithCovarianceStamped_TypeSupportInterface_var;
         typedef DDS_DCPSInterface_out < PoseWithCovarianceStamped_TypeSupportInterface> PoseWithCovarianceStamped_TypeSupportInterface_out;


         class PoseWithCovarianceStamped_DataWriter;

         typedef PoseWithCovarianceStamped_DataWriter * PoseWithCovarianceStamped_DataWriter_ptr;
         typedef DDS_DCPSInterface_var < PoseWithCovarianceStamped_DataWriter> PoseWithCovarianceStamped_DataWriter_var;
         typedef DDS_DCPSInterface_out < PoseWithCovarianceStamped_DataWriter> PoseWithCovarianceStamped_DataWriter_out;


         class PoseWithCovarianceStamped_DataReader;

         typedef PoseWithCovarianceStamped_DataReader * PoseWithCovarianceStamped_DataReader_ptr;
         typedef DDS_DCPSInterface_var < PoseWithCovarianceStamped_DataReader> PoseWithCovarianceStamped_DataReader_var;
         typedef DDS_DCPSInterface_out < PoseWithCovarianceStamped_DataReader> PoseWithCovarianceStamped_DataReader_out;


         class PoseWithCovarianceStamped_DataReaderView;

         typedef PoseWithCovarianceStamped_DataReaderView * PoseWithCovarianceStamped_DataReaderView_ptr;
         typedef DDS_DCPSInterface_var < PoseWithCovarianceStamped_DataReaderView> PoseWithCovarianceStamped_DataReaderView_var;
         typedef DDS_DCPSInterface_out < PoseWithCovarianceStamped_DataReaderView> PoseWithCovarianceStamped_DataReaderView_out;

         struct PoseWithCovarianceStamped_Seq_uniq_ {};
         typedef DDS_DCPSUVLSeq < PoseWithCovarianceStamped_, struct PoseWithCovarianceStamped_Seq_uniq_> PoseWithCovarianceStamped_Seq;
         typedef DDS_DCPSSequence_var < PoseWithCovarianceStamped_Seq> PoseWithCovarianceStamped_Seq_var;
         typedef DDS_DCPSSequence_out < PoseWithCovarianceStamped_Seq> PoseWithCovarianceStamped_Seq_out;
         class PoseWithCovarianceStamped_TypeSupportInterface
         :
            virtual public DDS::TypeSupport
         { 
         public:
            typedef PoseWithCovarianceStamped_TypeSupportInterface_ptr _ptr_type;
            typedef PoseWithCovarianceStamped_TypeSupportInterface_var _var_type;

            static PoseWithCovarianceStamped_TypeSupportInterface_ptr _duplicate (PoseWithCovarianceStamped_TypeSupportInterface_ptr obj);
            DDS::Boolean _local_is_a (const char * id);

            static PoseWithCovarianceStamped_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
            static PoseWithCovarianceStamped_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
            static PoseWithCovarianceStamped_TypeSupportInterface_ptr _nil () { return 0; }
            static const char * _local_id;
            PoseWithCovarianceStamped_TypeSupportInterface_ptr _this () { return this; }


         protected:
            PoseWithCovarianceStamped_TypeSupportInterface () {};
            ~PoseWithCovarianceStamped_TypeSupportInterface () {};
         private:
            PoseWithCovarianceStamped_TypeSupportInterface (const PoseWithCovarianceStamped_TypeSupportInterface &);
            PoseWithCovarianceStamped_TypeSupportInterface & operator = (const PoseWithCovarianceStamped_TypeSupportInterface &);
         };

         class PoseWithCovarianceStamped_DataWriter
         :
            virtual public DDS::DataWriter
         { 
         public:
            typedef PoseWithCovarianceStamped_DataWriter_ptr _ptr_type;
            typedef PoseWithCovarianceStamped_DataWriter_var _var_type;

            static PoseWithCovarianceStamped_DataWriter_ptr _duplicate (PoseWithCovarianceStamped_DataWriter_ptr obj);
            DDS::Boolean _local_is_a (const char * id);

            static PoseWithCovarianceStamped_DataWriter_ptr _narrow (DDS::Object_ptr obj);
            static PoseWithCovarianceStamped_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
            static PoseWithCovarianceStamped_DataWriter_ptr _nil () { return 0; }
            static const char * _local_id;
            PoseWithCovarianceStamped_DataWriter_ptr _this () { return this; }

            virtual DDS::LongLong register_instance (const PoseWithCovarianceStamped_& instance_data) = 0;
            virtual DDS::LongLong register_instance_w_timestamp (const PoseWithCovarianceStamped_& instance_data, const DDS::Time_t& source_timestamp) = 0;
            virtual DDS::Long unregister_instance (const PoseWithCovarianceStamped_& instance_data, DDS::LongLong handle) = 0;
            virtual DDS::Long unregister_instance_w_timestamp (const PoseWithCovarianceStamped_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
            virtual DDS::Long write (const PoseWithCovarianceStamped_& instance_data, DDS::LongLong handle) = 0;
            virtual DDS::Long write_w_timestamp (const PoseWithCovarianceStamped_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
            virtual DDS::Long dispose (const PoseWithCovarianceStamped_& instance_data, DDS::LongLong handle) = 0;
            virtual DDS::Long dispose_w_timestamp (const PoseWithCovarianceStamped_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
            virtual DDS::Long writedispose (const PoseWithCovarianceStamped_& instance_data, DDS::LongLong handle) = 0;
            virtual DDS::Long writedispose_w_timestamp (const PoseWithCovarianceStamped_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
            virtual DDS::Long get_key_value (PoseWithCovarianceStamped_& key_holder, DDS::LongLong handle) = 0;
            virtual DDS::LongLong lookup_instance (const PoseWithCovarianceStamped_& instance_data) = 0;

         protected:
            PoseWithCovarianceStamped_DataWriter () {};
            ~PoseWithCovarianceStamped_DataWriter () {};
         private:
            PoseWithCovarianceStamped_DataWriter (const PoseWithCovarianceStamped_DataWriter &);
            PoseWithCovarianceStamped_DataWriter & operator = (const PoseWithCovarianceStamped_DataWriter &);
         };

         class PoseWithCovarianceStamped_DataReader
         :
            virtual public DDS::DataReader
         { 
         public:
            typedef PoseWithCovarianceStamped_DataReader_ptr _ptr_type;
            typedef PoseWithCovarianceStamped_DataReader_var _var_type;

            static PoseWithCovarianceStamped_DataReader_ptr _duplicate (PoseWithCovarianceStamped_DataReader_ptr obj);
            DDS::Boolean _local_is_a (const char * id);

            static PoseWithCovarianceStamped_DataReader_ptr _narrow (DDS::Object_ptr obj);
            static PoseWithCovarianceStamped_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
            static PoseWithCovarianceStamped_DataReader_ptr _nil () { return 0; }
            static const char * _local_id;
            PoseWithCovarianceStamped_DataReader_ptr _this () { return this; }

            virtual DDS::Long read (PoseWithCovarianceStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long take (PoseWithCovarianceStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long read_w_condition (PoseWithCovarianceStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long take_w_condition (PoseWithCovarianceStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long read_next_sample (PoseWithCovarianceStamped_& received_data, DDS::SampleInfo& sample_info) = 0;
            virtual DDS::Long take_next_sample (PoseWithCovarianceStamped_& received_data, DDS::SampleInfo& sample_info) = 0;
            virtual DDS::Long read_instance (PoseWithCovarianceStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long take_instance (PoseWithCovarianceStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long read_next_instance (PoseWithCovarianceStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long take_next_instance (PoseWithCovarianceStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long read_next_instance_w_condition (PoseWithCovarianceStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long take_next_instance_w_condition (PoseWithCovarianceStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long return_loan (PoseWithCovarianceStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
            virtual DDS::Long get_key_value (PoseWithCovarianceStamped_& key_holder, DDS::LongLong handle) = 0;
            virtual DDS::LongLong lookup_instance (const PoseWithCovarianceStamped_& instance) = 0;

         protected:
            PoseWithCovarianceStamped_DataReader () {};
            ~PoseWithCovarianceStamped_DataReader () {};
         private:
            PoseWithCovarianceStamped_DataReader (const PoseWithCovarianceStamped_DataReader &);
            PoseWithCovarianceStamped_DataReader & operator = (const PoseWithCovarianceStamped_DataReader &);
         };

         class PoseWithCovarianceStamped_DataReaderView
         :
            virtual public DDS::DataReaderView
         { 
         public:
            typedef PoseWithCovarianceStamped_DataReaderView_ptr _ptr_type;
            typedef PoseWithCovarianceStamped_DataReaderView_var _var_type;

            static PoseWithCovarianceStamped_DataReaderView_ptr _duplicate (PoseWithCovarianceStamped_DataReaderView_ptr obj);
            DDS::Boolean _local_is_a (const char * id);

            static PoseWithCovarianceStamped_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
            static PoseWithCovarianceStamped_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
            static PoseWithCovarianceStamped_DataReaderView_ptr _nil () { return 0; }
            static const char * _local_id;
            PoseWithCovarianceStamped_DataReaderView_ptr _this () { return this; }

            virtual DDS::Long read (PoseWithCovarianceStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long take (PoseWithCovarianceStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long read_w_condition (PoseWithCovarianceStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long take_w_condition (PoseWithCovarianceStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long read_next_sample (PoseWithCovarianceStamped_& received_data, DDS::SampleInfo& sample_info) = 0;
            virtual DDS::Long take_next_sample (PoseWithCovarianceStamped_& received_data, DDS::SampleInfo& sample_info) = 0;
            virtual DDS::Long read_instance (PoseWithCovarianceStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long take_instance (PoseWithCovarianceStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long read_next_instance (PoseWithCovarianceStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long take_next_instance (PoseWithCovarianceStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long read_next_instance_w_condition (PoseWithCovarianceStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long take_next_instance_w_condition (PoseWithCovarianceStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long return_loan (PoseWithCovarianceStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
            virtual DDS::Long get_key_value (PoseWithCovarianceStamped_& key_holder, DDS::LongLong handle) = 0;
            virtual DDS::LongLong lookup_instance (const PoseWithCovarianceStamped_& instance) = 0;

         protected:
            PoseWithCovarianceStamped_DataReaderView () {};
            ~PoseWithCovarianceStamped_DataReaderView () {};
         private:
            PoseWithCovarianceStamped_DataReaderView (const PoseWithCovarianceStamped_DataReaderView &);
            PoseWithCovarianceStamped_DataReaderView & operator = (const PoseWithCovarianceStamped_DataReaderView &);
         };

      }
   }
}




#endif 
