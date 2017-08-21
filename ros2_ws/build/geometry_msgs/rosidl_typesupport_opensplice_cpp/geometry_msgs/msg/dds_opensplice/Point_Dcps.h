//******************************************************************
// 
//  Generated by IDL to C++ Translator
//  
//  File name: Point_Dcps.h
//  Source: /home/erle/ros2_ws/build/geometry_msgs/rosidl_typesupport_opensplice_cpp/geometry_msgs/msg/dds_opensplice/Point_Dcps.idl
//  Generated: Sat Nov  7 20:40:26 2015
//  OpenSplice V6.4.140407OSS
//  
//******************************************************************
#ifndef _POINT_DCPS_H_
#define _POINT_DCPS_H_

#include "sacpp_mapping.h"
#include "sacpp_DDS_DCPS.h"
#include "dds_dcps.h"
#include "Point_.h"


namespace geometry_msgs
{
   namespace msg
   {
      namespace dds_
      {

         class Point_TypeSupportInterface;

         typedef Point_TypeSupportInterface * Point_TypeSupportInterface_ptr;
         typedef DDS_DCPSInterface_var < Point_TypeSupportInterface> Point_TypeSupportInterface_var;
         typedef DDS_DCPSInterface_out < Point_TypeSupportInterface> Point_TypeSupportInterface_out;


         class Point_DataWriter;

         typedef Point_DataWriter * Point_DataWriter_ptr;
         typedef DDS_DCPSInterface_var < Point_DataWriter> Point_DataWriter_var;
         typedef DDS_DCPSInterface_out < Point_DataWriter> Point_DataWriter_out;


         class Point_DataReader;

         typedef Point_DataReader * Point_DataReader_ptr;
         typedef DDS_DCPSInterface_var < Point_DataReader> Point_DataReader_var;
         typedef DDS_DCPSInterface_out < Point_DataReader> Point_DataReader_out;


         class Point_DataReaderView;

         typedef Point_DataReaderView * Point_DataReaderView_ptr;
         typedef DDS_DCPSInterface_var < Point_DataReaderView> Point_DataReaderView_var;
         typedef DDS_DCPSInterface_out < Point_DataReaderView> Point_DataReaderView_out;

         struct Point_Seq_uniq_ {};
         typedef DDS_DCPSUFLSeq < Point_, struct Point_Seq_uniq_> Point_Seq;
         typedef DDS_DCPSSequence_var < Point_Seq> Point_Seq_var;
         typedef DDS_DCPSSequence_out < Point_Seq> Point_Seq_out;
         class Point_TypeSupportInterface
         :
            virtual public DDS::TypeSupport
         { 
         public:
            typedef Point_TypeSupportInterface_ptr _ptr_type;
            typedef Point_TypeSupportInterface_var _var_type;

            static Point_TypeSupportInterface_ptr _duplicate (Point_TypeSupportInterface_ptr obj);
            DDS::Boolean _local_is_a (const char * id);

            static Point_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
            static Point_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
            static Point_TypeSupportInterface_ptr _nil () { return 0; }
            static const char * _local_id;
            Point_TypeSupportInterface_ptr _this () { return this; }


         protected:
            Point_TypeSupportInterface () {};
            ~Point_TypeSupportInterface () {};
         private:
            Point_TypeSupportInterface (const Point_TypeSupportInterface &);
            Point_TypeSupportInterface & operator = (const Point_TypeSupportInterface &);
         };

         class Point_DataWriter
         :
            virtual public DDS::DataWriter
         { 
         public:
            typedef Point_DataWriter_ptr _ptr_type;
            typedef Point_DataWriter_var _var_type;

            static Point_DataWriter_ptr _duplicate (Point_DataWriter_ptr obj);
            DDS::Boolean _local_is_a (const char * id);

            static Point_DataWriter_ptr _narrow (DDS::Object_ptr obj);
            static Point_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
            static Point_DataWriter_ptr _nil () { return 0; }
            static const char * _local_id;
            Point_DataWriter_ptr _this () { return this; }

            virtual DDS::LongLong register_instance (const Point_& instance_data) = 0;
            virtual DDS::LongLong register_instance_w_timestamp (const Point_& instance_data, const DDS::Time_t& source_timestamp) = 0;
            virtual DDS::Long unregister_instance (const Point_& instance_data, DDS::LongLong handle) = 0;
            virtual DDS::Long unregister_instance_w_timestamp (const Point_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
            virtual DDS::Long write (const Point_& instance_data, DDS::LongLong handle) = 0;
            virtual DDS::Long write_w_timestamp (const Point_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
            virtual DDS::Long dispose (const Point_& instance_data, DDS::LongLong handle) = 0;
            virtual DDS::Long dispose_w_timestamp (const Point_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
            virtual DDS::Long writedispose (const Point_& instance_data, DDS::LongLong handle) = 0;
            virtual DDS::Long writedispose_w_timestamp (const Point_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
            virtual DDS::Long get_key_value (Point_& key_holder, DDS::LongLong handle) = 0;
            virtual DDS::LongLong lookup_instance (const Point_& instance_data) = 0;

         protected:
            Point_DataWriter () {};
            ~Point_DataWriter () {};
         private:
            Point_DataWriter (const Point_DataWriter &);
            Point_DataWriter & operator = (const Point_DataWriter &);
         };

         class Point_DataReader
         :
            virtual public DDS::DataReader
         { 
         public:
            typedef Point_DataReader_ptr _ptr_type;
            typedef Point_DataReader_var _var_type;

            static Point_DataReader_ptr _duplicate (Point_DataReader_ptr obj);
            DDS::Boolean _local_is_a (const char * id);

            static Point_DataReader_ptr _narrow (DDS::Object_ptr obj);
            static Point_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
            static Point_DataReader_ptr _nil () { return 0; }
            static const char * _local_id;
            Point_DataReader_ptr _this () { return this; }

            virtual DDS::Long read (Point_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long take (Point_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long read_w_condition (Point_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long take_w_condition (Point_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long read_next_sample (Point_& received_data, DDS::SampleInfo& sample_info) = 0;
            virtual DDS::Long take_next_sample (Point_& received_data, DDS::SampleInfo& sample_info) = 0;
            virtual DDS::Long read_instance (Point_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long take_instance (Point_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long read_next_instance (Point_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long take_next_instance (Point_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long read_next_instance_w_condition (Point_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long take_next_instance_w_condition (Point_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long return_loan (Point_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
            virtual DDS::Long get_key_value (Point_& key_holder, DDS::LongLong handle) = 0;
            virtual DDS::LongLong lookup_instance (const Point_& instance) = 0;

         protected:
            Point_DataReader () {};
            ~Point_DataReader () {};
         private:
            Point_DataReader (const Point_DataReader &);
            Point_DataReader & operator = (const Point_DataReader &);
         };

         class Point_DataReaderView
         :
            virtual public DDS::DataReaderView
         { 
         public:
            typedef Point_DataReaderView_ptr _ptr_type;
            typedef Point_DataReaderView_var _var_type;

            static Point_DataReaderView_ptr _duplicate (Point_DataReaderView_ptr obj);
            DDS::Boolean _local_is_a (const char * id);

            static Point_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
            static Point_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
            static Point_DataReaderView_ptr _nil () { return 0; }
            static const char * _local_id;
            Point_DataReaderView_ptr _this () { return this; }

            virtual DDS::Long read (Point_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long take (Point_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long read_w_condition (Point_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long take_w_condition (Point_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long read_next_sample (Point_& received_data, DDS::SampleInfo& sample_info) = 0;
            virtual DDS::Long take_next_sample (Point_& received_data, DDS::SampleInfo& sample_info) = 0;
            virtual DDS::Long read_instance (Point_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long take_instance (Point_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long read_next_instance (Point_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long take_next_instance (Point_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long read_next_instance_w_condition (Point_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long take_next_instance_w_condition (Point_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long return_loan (Point_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
            virtual DDS::Long get_key_value (Point_& key_holder, DDS::LongLong handle) = 0;
            virtual DDS::LongLong lookup_instance (const Point_& instance) = 0;

         protected:
            Point_DataReaderView () {};
            ~Point_DataReaderView () {};
         private:
            Point_DataReaderView (const Point_DataReaderView &);
            Point_DataReaderView & operator = (const Point_DataReaderView &);
         };

      }
   }
}




#endif 
