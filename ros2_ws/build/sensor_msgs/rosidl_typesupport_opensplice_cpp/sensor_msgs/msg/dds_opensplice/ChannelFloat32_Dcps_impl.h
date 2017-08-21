#ifndef CHANNELFLOAT32_DCPS_IMPL_H_
#define CHANNELFLOAT32_DCPS_IMPL_H_

#include "ccpp.h"
#include "ccpp_ChannelFloat32_.h"
#include "ccpp_TypeSupport_impl.h"
#include "ccpp_DataWriter_impl.h"
#include "ccpp_DataReader_impl.h"
#include "ccpp_DataReaderView_impl.h"


namespace sensor_msgs {

    namespace msg {

        namespace dds_ {

            class  ChannelFloat32_TypeSupportFactory : public ::DDS::TypeSupportFactory_impl
            {
            public:
                ChannelFloat32_TypeSupportFactory(const ChannelFloat32_TypeSupportFactory & o) = delete;
                ChannelFloat32_TypeSupportFactory & operator=(const ChannelFloat32_TypeSupportFactory & o) = delete;
                ChannelFloat32_TypeSupportFactory() {}
                virtual ~ChannelFloat32_TypeSupportFactory() {}
            private:
                ::DDS::DataWriter_ptr
                create_datawriter (gapi_dataWriter handle);
            
                ::DDS::DataReader_ptr
                create_datareader (gapi_dataReader handle);
            
                ::DDS::DataReaderView_ptr
                create_view (gapi_dataReaderView handle);
            };
            
            class  ChannelFloat32_TypeSupport : public virtual ChannelFloat32_TypeSupportInterface,
                                           public ::DDS::TypeSupport_impl
            {
            public:
                virtual ::DDS::ReturnCode_t register_type(
                    ::DDS::DomainParticipant_ptr participant,
                    const char * type_name) THROW_ORB_EXCEPTIONS;
            
                virtual char * get_type_name() THROW_ORB_EXCEPTIONS;
            
                ChannelFloat32_TypeSupport (void);
                virtual ~ChannelFloat32_TypeSupport (void);
            
            private:
                ChannelFloat32_TypeSupport (const ChannelFloat32_TypeSupport &);
                void operator= (const ChannelFloat32_TypeSupport &);
            
                static const char *metaDescriptor[];
                static const ::DDS::ULong metaDescriptorArrLength;
            };
            
            typedef ChannelFloat32_TypeSupportInterface_var ChannelFloat32_TypeSupport_var;
            typedef ChannelFloat32_TypeSupportInterface_ptr ChannelFloat32_TypeSupport_ptr;
            
            class  ChannelFloat32_DataWriter_impl : public virtual ChannelFloat32_DataWriter,
                                                public ::DDS::DataWriter_impl
            {
            public:
            
                virtual ::DDS::InstanceHandle_t register_instance(
                    const ChannelFloat32_ & instance_data) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::InstanceHandle_t register_instance_w_timestamp(
                    const ChannelFloat32_ & instance_data,
                    const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t unregister_instance(
                    const ChannelFloat32_ & instance_data,
                    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t unregister_instance_w_timestamp(
                    const ChannelFloat32_ & instance_data,
                    ::DDS::InstanceHandle_t handle,
                    const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t write(
                    const ChannelFloat32_ & instance_data,
                    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t write_w_timestamp(
                    const ChannelFloat32_ & instance_data,
                    ::DDS::InstanceHandle_t handle,
                    const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t dispose(
                    const ChannelFloat32_ & instance_data,
                    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t dispose_w_timestamp(
                    const ChannelFloat32_ & instance_data,
                    ::DDS::InstanceHandle_t handle,
                    const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t writedispose(
                    const ChannelFloat32_ & instance_data,
                    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t writedispose_w_timestamp(
                    const ChannelFloat32_ & instance_data,
                    ::DDS::InstanceHandle_t handle,
                    const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t get_key_value(
                    ChannelFloat32_ & key_holder,
                    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::InstanceHandle_t lookup_instance(
                    const ChannelFloat32_ & instance_data) THROW_ORB_EXCEPTIONS;
            
            
                ChannelFloat32_DataWriter_impl (
                    gapi_dataWriter handle
                );
            
                virtual ~ChannelFloat32_DataWriter_impl (void);
            
            private:
                ChannelFloat32_DataWriter_impl(const ChannelFloat32_DataWriter_impl &);
                void operator= (const ChannelFloat32_DataWriter &);
            };
            
            class  ChannelFloat32_DataReader_impl : public virtual ChannelFloat32_DataReader,
                                                public ::DDS::DataReader_impl
            {
                friend class ChannelFloat32_DataReaderView_impl;
            public:
                virtual ::DDS::ReturnCode_t read(
                    ChannelFloat32_Seq & received_data,
                    ::DDS::SampleInfoSeq & info_seq,
                    ::DDS::Long max_samples,
                    ::DDS::SampleStateMask sample_states,
                    ::DDS::ViewStateMask view_states,
                    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t take(
                    ChannelFloat32_Seq & received_data,
                    ::DDS::SampleInfoSeq & info_seq,
                    ::DDS::Long max_samples,
                    ::DDS::SampleStateMask sample_states,
                    ::DDS::ViewStateMask view_states,
                    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t read_w_condition(
                    ChannelFloat32_Seq & received_data,
                    ::DDS::SampleInfoSeq & info_seq,
                    ::DDS::Long max_samples,
                    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t take_w_condition(
                    ChannelFloat32_Seq & received_data,
                    ::DDS::SampleInfoSeq & info_seq,
                    ::DDS::Long max_samples,
                    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t read_next_sample(
                    ChannelFloat32_ & received_data,
                    ::DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t take_next_sample(
                    ChannelFloat32_ & received_data,
                    ::DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t read_instance(
                    ChannelFloat32_Seq & received_data,
                    ::DDS::SampleInfoSeq & info_seq,
                    ::DDS::Long max_samples,
                    ::DDS::InstanceHandle_t a_handle,
                    ::DDS::SampleStateMask sample_states,
                    ::DDS::ViewStateMask view_states,
                    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t take_instance(
                    ChannelFloat32_Seq & received_data,
                    ::DDS::SampleInfoSeq & info_seq,
                    ::DDS::Long max_samples,
                    ::DDS::InstanceHandle_t a_handle,
                    ::DDS::SampleStateMask sample_states,
                    ::DDS::ViewStateMask view_states,
                    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t read_next_instance(
                    ChannelFloat32_Seq & received_data,
                    ::DDS::SampleInfoSeq & info_seq,
                    ::DDS::Long max_samples,
                    ::DDS::InstanceHandle_t a_handle,
                    ::DDS::SampleStateMask sample_states,
                    ::DDS::ViewStateMask view_states,
                    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t take_next_instance(
                    ChannelFloat32_Seq & received_data,
                    ::DDS::SampleInfoSeq & info_seq,
                    ::DDS::Long max_samples,
                    ::DDS::InstanceHandle_t a_handle,
                    ::DDS::SampleStateMask sample_states,
                    ::DDS::ViewStateMask view_states,
                    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t read_next_instance_w_condition(
                    ChannelFloat32_Seq & received_data,
                    ::DDS::SampleInfoSeq & info_seq,
                    ::DDS::Long max_samples,
                    ::DDS::InstanceHandle_t a_handle,
                    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t take_next_instance_w_condition(
                    ChannelFloat32_Seq & received_data,
                    ::DDS::SampleInfoSeq & info_seq,
                    ::DDS::Long max_samples,
                    ::DDS::InstanceHandle_t a_handle,
                    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t return_loan(
                    ChannelFloat32_Seq & received_data,
                    ::DDS::SampleInfoSeq & info_seq) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t get_key_value(
                    ChannelFloat32_ & key_holder,
                    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::InstanceHandle_t lookup_instance(
                    const ChannelFloat32_ & instance) THROW_ORB_EXCEPTIONS;
            
                ChannelFloat32_DataReader_impl (
                    gapi_dataReader handle
                );
            
                virtual ~ChannelFloat32_DataReader_impl(void);
            
            private:
                ChannelFloat32_DataReader_impl(const ChannelFloat32_DataReader &);
                void operator= (const ChannelFloat32_DataReader &);
            
                static ::DDS::ReturnCode_t check_preconditions(
                    ChannelFloat32_Seq & received_data,
                    ::DDS::SampleInfoSeq & info_seq,
                    ::DDS::Long max_samples
                );
            };
            
            class  ChannelFloat32_DataReaderView_impl : public virtual ChannelFloat32_DataReaderView,
                                                public ::DDS::DataReaderView_impl
            {
            public:
                virtual ::DDS::ReturnCode_t read(
                    ChannelFloat32_Seq & received_data,
                    ::DDS::SampleInfoSeq & info_seq,
                    ::DDS::Long max_samples,
                    ::DDS::SampleStateMask sample_states,
                    ::DDS::ViewStateMask view_states,
                    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t take(
                    ChannelFloat32_Seq & received_data,
                    ::DDS::SampleInfoSeq & info_seq,
                    ::DDS::Long max_samples,
                    ::DDS::SampleStateMask sample_states,
                    ::DDS::ViewStateMask view_states,
                    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t read_w_condition(
                    ChannelFloat32_Seq & received_data,
                    ::DDS::SampleInfoSeq & info_seq,
                    ::DDS::Long max_samples,
                    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t take_w_condition(
                    ChannelFloat32_Seq & received_data,
                    ::DDS::SampleInfoSeq & info_seq,
                    ::DDS::Long max_samples,
                    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t read_next_sample(
                    ChannelFloat32_ & received_data,
                    ::DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t take_next_sample(
                    ChannelFloat32_ & received_data,
                    ::DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t read_instance(
                    ChannelFloat32_Seq & received_data,
                    ::DDS::SampleInfoSeq & info_seq,
                    ::DDS::Long max_samples,
                    ::DDS::InstanceHandle_t a_handle,
                    ::DDS::SampleStateMask sample_states,
                    ::DDS::ViewStateMask view_states,
                    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t take_instance(
                    ChannelFloat32_Seq & received_data,
                    ::DDS::SampleInfoSeq & info_seq,
                    ::DDS::Long max_samples,
                    ::DDS::InstanceHandle_t a_handle,
                    ::DDS::SampleStateMask sample_states,
                    ::DDS::ViewStateMask view_states,
                    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t read_next_instance(
                    ChannelFloat32_Seq & received_data,
                    ::DDS::SampleInfoSeq & info_seq,
                    ::DDS::Long max_samples,
                    ::DDS::InstanceHandle_t a_handle,
                    ::DDS::SampleStateMask sample_states,
                    ::DDS::ViewStateMask view_states,
                    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t take_next_instance(
                    ChannelFloat32_Seq & received_data,
                    ::DDS::SampleInfoSeq & info_seq,
                    ::DDS::Long max_samples,
                    ::DDS::InstanceHandle_t a_handle,
                    ::DDS::SampleStateMask sample_states,
                    ::DDS::ViewStateMask view_states,
                    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t read_next_instance_w_condition(
                    ChannelFloat32_Seq & received_data,
                    ::DDS::SampleInfoSeq & info_seq,
                    ::DDS::Long max_samples,
                    ::DDS::InstanceHandle_t a_handle,
                    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t take_next_instance_w_condition(
                    ChannelFloat32_Seq & received_data,
                    ::DDS::SampleInfoSeq & info_seq,
                    ::DDS::Long max_samples,
                    ::DDS::InstanceHandle_t a_handle,
                    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t return_loan(
                    ChannelFloat32_Seq & received_data,
                    ::DDS::SampleInfoSeq & info_seq) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t get_key_value(
                    ChannelFloat32_ & key_holder,
                    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::InstanceHandle_t lookup_instance(
                    const ChannelFloat32_ & instance) THROW_ORB_EXCEPTIONS;
            
                ChannelFloat32_DataReaderView_impl (
                    gapi_dataReader handle
                );
            
                virtual ~ChannelFloat32_DataReaderView_impl(void);
            
            private:
                ChannelFloat32_DataReaderView_impl(const ChannelFloat32_DataReaderView &);
                void operator= (const ChannelFloat32_DataReaderView &);
            };
            
        }

    }

}

#endif
