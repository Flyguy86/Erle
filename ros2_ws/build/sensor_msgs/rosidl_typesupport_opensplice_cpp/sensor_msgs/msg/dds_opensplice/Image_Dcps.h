//******************************************************************
// 
//  Generated by IDL to C++ Translator
//  
//  File name: Image_Dcps.h
//  Source: /home/erle/ros2_ws/build/sensor_msgs/rosidl_typesupport_opensplice_cpp/sensor_msgs/msg/dds_opensplice/Image_Dcps.idl
//  Generated: Sun Nov  8 00:04:12 2015
//  OpenSplice V6.4.140407OSS
//  
//******************************************************************
#ifndef _IMAGE_DCPS_H_
#define _IMAGE_DCPS_H_

#include "sacpp_mapping.h"
#include "sacpp_DDS_DCPS.h"
#include "Image_.h"
#include "dds_dcps.h"


namespace sensor_msgs
{
   namespace msg
   {
      namespace dds_
      {

         class Image_TypeSupportInterface;

         typedef Image_TypeSupportInterface * Image_TypeSupportInterface_ptr;
         typedef DDS_DCPSInterface_var < Image_TypeSupportInterface> Image_TypeSupportInterface_var;
         typedef DDS_DCPSInterface_out < Image_TypeSupportInterface> Image_TypeSupportInterface_out;


         class Image_DataWriter;

         typedef Image_DataWriter * Image_DataWriter_ptr;
         typedef DDS_DCPSInterface_var < Image_DataWriter> Image_DataWriter_var;
         typedef DDS_DCPSInterface_out < Image_DataWriter> Image_DataWriter_out;


         class Image_DataReader;

         typedef Image_DataReader * Image_DataReader_ptr;
         typedef DDS_DCPSInterface_var < Image_DataReader> Image_DataReader_var;
         typedef DDS_DCPSInterface_out < Image_DataReader> Image_DataReader_out;


         class Image_DataReaderView;

         typedef Image_DataReaderView * Image_DataReaderView_ptr;
         typedef DDS_DCPSInterface_var < Image_DataReaderView> Image_DataReaderView_var;
         typedef DDS_DCPSInterface_out < Image_DataReaderView> Image_DataReaderView_out;

         struct Image_Seq_uniq_ {};
         typedef DDS_DCPSUVLSeq < Image_, struct Image_Seq_uniq_> Image_Seq;
         typedef DDS_DCPSSequence_var < Image_Seq> Image_Seq_var;
         typedef DDS_DCPSSequence_out < Image_Seq> Image_Seq_out;
         class Image_TypeSupportInterface
         :
            virtual public DDS::TypeSupport
         { 
         public:
            typedef Image_TypeSupportInterface_ptr _ptr_type;
            typedef Image_TypeSupportInterface_var _var_type;

            static Image_TypeSupportInterface_ptr _duplicate (Image_TypeSupportInterface_ptr obj);
            DDS::Boolean _local_is_a (const char * id);

            static Image_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
            static Image_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
            static Image_TypeSupportInterface_ptr _nil () { return 0; }
            static const char * _local_id;
            Image_TypeSupportInterface_ptr _this () { return this; }


         protected:
            Image_TypeSupportInterface () {};
            ~Image_TypeSupportInterface () {};
         private:
            Image_TypeSupportInterface (const Image_TypeSupportInterface &);
            Image_TypeSupportInterface & operator = (const Image_TypeSupportInterface &);
         };

         class Image_DataWriter
         :
            virtual public DDS::DataWriter
         { 
         public:
            typedef Image_DataWriter_ptr _ptr_type;
            typedef Image_DataWriter_var _var_type;

            static Image_DataWriter_ptr _duplicate (Image_DataWriter_ptr obj);
            DDS::Boolean _local_is_a (const char * id);

            static Image_DataWriter_ptr _narrow (DDS::Object_ptr obj);
            static Image_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
            static Image_DataWriter_ptr _nil () { return 0; }
            static const char * _local_id;
            Image_DataWriter_ptr _this () { return this; }

            virtual DDS::LongLong register_instance (const Image_& instance_data) = 0;
            virtual DDS::LongLong register_instance_w_timestamp (const Image_& instance_data, const DDS::Time_t& source_timestamp) = 0;
            virtual DDS::Long unregister_instance (const Image_& instance_data, DDS::LongLong handle) = 0;
            virtual DDS::Long unregister_instance_w_timestamp (const Image_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
            virtual DDS::Long write (const Image_& instance_data, DDS::LongLong handle) = 0;
            virtual DDS::Long write_w_timestamp (const Image_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
            virtual DDS::Long dispose (const Image_& instance_data, DDS::LongLong handle) = 0;
            virtual DDS::Long dispose_w_timestamp (const Image_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
            virtual DDS::Long writedispose (const Image_& instance_data, DDS::LongLong handle) = 0;
            virtual DDS::Long writedispose_w_timestamp (const Image_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
            virtual DDS::Long get_key_value (Image_& key_holder, DDS::LongLong handle) = 0;
            virtual DDS::LongLong lookup_instance (const Image_& instance_data) = 0;

         protected:
            Image_DataWriter () {};
            ~Image_DataWriter () {};
         private:
            Image_DataWriter (const Image_DataWriter &);
            Image_DataWriter & operator = (const Image_DataWriter &);
         };

         class Image_DataReader
         :
            virtual public DDS::DataReader
         { 
         public:
            typedef Image_DataReader_ptr _ptr_type;
            typedef Image_DataReader_var _var_type;

            static Image_DataReader_ptr _duplicate (Image_DataReader_ptr obj);
            DDS::Boolean _local_is_a (const char * id);

            static Image_DataReader_ptr _narrow (DDS::Object_ptr obj);
            static Image_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
            static Image_DataReader_ptr _nil () { return 0; }
            static const char * _local_id;
            Image_DataReader_ptr _this () { return this; }

            virtual DDS::Long read (Image_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long take (Image_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long read_w_condition (Image_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long take_w_condition (Image_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long read_next_sample (Image_& received_data, DDS::SampleInfo& sample_info) = 0;
            virtual DDS::Long take_next_sample (Image_& received_data, DDS::SampleInfo& sample_info) = 0;
            virtual DDS::Long read_instance (Image_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long take_instance (Image_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long read_next_instance (Image_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long take_next_instance (Image_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long read_next_instance_w_condition (Image_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long take_next_instance_w_condition (Image_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long return_loan (Image_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
            virtual DDS::Long get_key_value (Image_& key_holder, DDS::LongLong handle) = 0;
            virtual DDS::LongLong lookup_instance (const Image_& instance) = 0;

         protected:
            Image_DataReader () {};
            ~Image_DataReader () {};
         private:
            Image_DataReader (const Image_DataReader &);
            Image_DataReader & operator = (const Image_DataReader &);
         };

         class Image_DataReaderView
         :
            virtual public DDS::DataReaderView
         { 
         public:
            typedef Image_DataReaderView_ptr _ptr_type;
            typedef Image_DataReaderView_var _var_type;

            static Image_DataReaderView_ptr _duplicate (Image_DataReaderView_ptr obj);
            DDS::Boolean _local_is_a (const char * id);

            static Image_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
            static Image_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
            static Image_DataReaderView_ptr _nil () { return 0; }
            static const char * _local_id;
            Image_DataReaderView_ptr _this () { return this; }

            virtual DDS::Long read (Image_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long take (Image_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long read_w_condition (Image_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long take_w_condition (Image_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long read_next_sample (Image_& received_data, DDS::SampleInfo& sample_info) = 0;
            virtual DDS::Long take_next_sample (Image_& received_data, DDS::SampleInfo& sample_info) = 0;
            virtual DDS::Long read_instance (Image_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long take_instance (Image_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long read_next_instance (Image_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long take_next_instance (Image_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long read_next_instance_w_condition (Image_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long take_next_instance_w_condition (Image_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long return_loan (Image_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
            virtual DDS::Long get_key_value (Image_& key_holder, DDS::LongLong handle) = 0;
            virtual DDS::LongLong lookup_instance (const Image_& instance) = 0;

         protected:
            Image_DataReaderView () {};
            ~Image_DataReaderView () {};
         private:
            Image_DataReaderView (const Image_DataReaderView &);
            Image_DataReaderView & operator = (const Image_DataReaderView &);
         };

      }
   }
}




#endif 
