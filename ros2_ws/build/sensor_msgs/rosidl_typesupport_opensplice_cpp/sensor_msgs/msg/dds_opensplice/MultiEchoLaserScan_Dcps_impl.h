#ifndef MULTIECHOLASERSCAN_DCPS_IMPL_H_
#define MULTIECHOLASERSCAN_DCPS_IMPL_H_

#include "ccpp.h"
#include "ccpp_MultiEchoLaserScan_.h"
#include "ccpp_TypeSupport_impl.h"
#include "ccpp_DataWriter_impl.h"
#include "ccpp_DataReader_impl.h"
#include "ccpp_DataReaderView_impl.h"


namespace sensor_msgs {

    namespace msg {

        namespace dds_ {

            class  MultiEchoLaserScan_TypeSupportFactory : public ::DDS::TypeSupportFactory_impl
            {
            public:
                MultiEchoLaserScan_TypeSupportFactory(const MultiEchoLaserScan_TypeSupportFactory & o) = delete;
                MultiEchoLaserScan_TypeSupportFactory & operator=(const MultiEchoLaserScan_TypeSupportFactory & o) = delete;
                MultiEchoLaserScan_TypeSupportFactory() {}
                virtual ~MultiEchoLaserScan_TypeSupportFactory() {}
            private:
                ::DDS::DataWriter_ptr
                create_datawriter (gapi_dataWriter handle);
            
                ::DDS::DataReader_ptr
                create_datareader (gapi_dataReader handle);
            
                ::DDS::DataReaderView_ptr
                create_view (gapi_dataReaderView handle);
            };
            
            class  MultiEchoLaserScan_TypeSupport : public virtual MultiEchoLaserScan_TypeSupportInterface,
                                           public ::DDS::TypeSupport_impl
            {
            public:
                virtual ::DDS::ReturnCode_t register_type(
                    ::DDS::DomainParticipant_ptr participant,
                    const char * type_name) THROW_ORB_EXCEPTIONS;
            
                virtual char * get_type_name() THROW_ORB_EXCEPTIONS;
            
                MultiEchoLaserScan_TypeSupport (void);
                virtual ~MultiEchoLaserScan_TypeSupport (void);
            
            private:
                MultiEchoLaserScan_TypeSupport (const MultiEchoLaserScan_TypeSupport &);
                void operator= (const MultiEchoLaserScan_TypeSupport &);
            
                static const char *metaDescriptor[];
                static const ::DDS::ULong metaDescriptorArrLength;
            };
            
            typedef MultiEchoLaserScan_TypeSupportInterface_var MultiEchoLaserScan_TypeSupport_var;
            typedef MultiEchoLaserScan_TypeSupportInterface_ptr MultiEchoLaserScan_TypeSupport_ptr;
            
            class  MultiEchoLaserScan_DataWriter_impl : public virtual MultiEchoLaserScan_DataWriter,
                                                public ::DDS::DataWriter_impl
            {
            public:
            
                virtual ::DDS::InstanceHandle_t register_instance(
                    const MultiEchoLaserScan_ & instance_data) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::InstanceHandle_t register_instance_w_timestamp(
                    const MultiEchoLaserScan_ & instance_data,
                    const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t unregister_instance(
                    const MultiEchoLaserScan_ & instance_data,
                    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t unregister_instance_w_timestamp(
                    const MultiEchoLaserScan_ & instance_data,
                    ::DDS::InstanceHandle_t handle,
                    const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t write(
                    const MultiEchoLaserScan_ & instance_data,
                    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t write_w_timestamp(
                    const MultiEchoLaserScan_ & instance_data,
                    ::DDS::InstanceHandle_t handle,
                    const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t dispose(
                    const MultiEchoLaserScan_ & instance_data,
                    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t dispose_w_timestamp(
                    const MultiEchoLaserScan_ & instance_data,
                    ::DDS::InstanceHandle_t handle,
                    const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t writedispose(
                    const MultiEchoLaserScan_ & instance_data,
                    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t writedispose_w_timestamp(
                    const MultiEchoLaserScan_ & instance_data,
                    ::DDS::InstanceHandle_t handle,
                    const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t get_key_value(
                    MultiEchoLaserScan_ & key_holder,
                    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::InstanceHandle_t lookup_instance(
                    const MultiEchoLaserScan_ & instance_data) THROW_ORB_EXCEPTIONS;
            
            
                MultiEchoLaserScan_DataWriter_impl (
                    gapi_dataWriter handle
                );
            
                virtual ~MultiEchoLaserScan_DataWriter_impl (void);
            
            private:
                MultiEchoLaserScan_DataWriter_impl(const MultiEchoLaserScan_DataWriter_impl &);
                void operator= (const MultiEchoLaserScan_DataWriter &);
            };
            
            class  MultiEchoLaserScan_DataReader_impl : public virtual MultiEchoLaserScan_DataReader,
                                                public ::DDS::DataReader_impl
            {
                friend class MultiEchoLaserScan_DataReaderView_impl;
            public:
                virtual ::DDS::ReturnCode_t read(
                    MultiEchoLaserScan_Seq & received_data,
                    ::DDS::SampleInfoSeq & info_seq,
                    ::DDS::Long max_samples,
                    ::DDS::SampleStateMask sample_states,
                    ::DDS::ViewStateMask view_states,
                    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t take(
                    MultiEchoLaserScan_Seq & received_data,
                    ::DDS::SampleInfoSeq & info_seq,
                    ::DDS::Long max_samples,
                    ::DDS::SampleStateMask sample_states,
                    ::DDS::ViewStateMask view_states,
                    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t read_w_condition(
                    MultiEchoLaserScan_Seq & received_data,
                    ::DDS::SampleInfoSeq & info_seq,
                    ::DDS::Long max_samples,
                    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t take_w_condition(
                    MultiEchoLaserScan_Seq & received_data,
                    ::DDS::SampleInfoSeq & info_seq,
                    ::DDS::Long max_samples,
                    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t read_next_sample(
                    MultiEchoLaserScan_ & received_data,
                    ::DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t take_next_sample(
                    MultiEchoLaserScan_ & received_data,
                    ::DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t read_instance(
                    MultiEchoLaserScan_Seq & received_data,
                    ::DDS::SampleInfoSeq & info_seq,
                    ::DDS::Long max_samples,
                    ::DDS::InstanceHandle_t a_handle,
                    ::DDS::SampleStateMask sample_states,
                    ::DDS::ViewStateMask view_states,
                    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t take_instance(
                    MultiEchoLaserScan_Seq & received_data,
                    ::DDS::SampleInfoSeq & info_seq,
                    ::DDS::Long max_samples,
                    ::DDS::InstanceHandle_t a_handle,
                    ::DDS::SampleStateMask sample_states,
                    ::DDS::ViewStateMask view_states,
                    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t read_next_instance(
                    MultiEchoLaserScan_Seq & received_data,
                    ::DDS::SampleInfoSeq & info_seq,
                    ::DDS::Long max_samples,
                    ::DDS::InstanceHandle_t a_handle,
                    ::DDS::SampleStateMask sample_states,
                    ::DDS::ViewStateMask view_states,
                    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t take_next_instance(
                    MultiEchoLaserScan_Seq & received_data,
                    ::DDS::SampleInfoSeq & info_seq,
                    ::DDS::Long max_samples,
                    ::DDS::InstanceHandle_t a_handle,
                    ::DDS::SampleStateMask sample_states,
                    ::DDS::ViewStateMask view_states,
                    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t read_next_instance_w_condition(
                    MultiEchoLaserScan_Seq & received_data,
                    ::DDS::SampleInfoSeq & info_seq,
                    ::DDS::Long max_samples,
                    ::DDS::InstanceHandle_t a_handle,
                    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t take_next_instance_w_condition(
                    MultiEchoLaserScan_Seq & received_data,
                    ::DDS::SampleInfoSeq & info_seq,
                    ::DDS::Long max_samples,
                    ::DDS::InstanceHandle_t a_handle,
                    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t return_loan(
                    MultiEchoLaserScan_Seq & received_data,
                    ::DDS::SampleInfoSeq & info_seq) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t get_key_value(
                    MultiEchoLaserScan_ & key_holder,
                    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::InstanceHandle_t lookup_instance(
                    const MultiEchoLaserScan_ & instance) THROW_ORB_EXCEPTIONS;
            
                MultiEchoLaserScan_DataReader_impl (
                    gapi_dataReader handle
                );
            
                virtual ~MultiEchoLaserScan_DataReader_impl(void);
            
            private:
                MultiEchoLaserScan_DataReader_impl(const MultiEchoLaserScan_DataReader &);
                void operator= (const MultiEchoLaserScan_DataReader &);
            
                static ::DDS::ReturnCode_t check_preconditions(
                    MultiEchoLaserScan_Seq & received_data,
                    ::DDS::SampleInfoSeq & info_seq,
                    ::DDS::Long max_samples
                );
            };
            
            class  MultiEchoLaserScan_DataReaderView_impl : public virtual MultiEchoLaserScan_DataReaderView,
                                                public ::DDS::DataReaderView_impl
            {
            public:
                virtual ::DDS::ReturnCode_t read(
                    MultiEchoLaserScan_Seq & received_data,
                    ::DDS::SampleInfoSeq & info_seq,
                    ::DDS::Long max_samples,
                    ::DDS::SampleStateMask sample_states,
                    ::DDS::ViewStateMask view_states,
                    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t take(
                    MultiEchoLaserScan_Seq & received_data,
                    ::DDS::SampleInfoSeq & info_seq,
                    ::DDS::Long max_samples,
                    ::DDS::SampleStateMask sample_states,
                    ::DDS::ViewStateMask view_states,
                    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t read_w_condition(
                    MultiEchoLaserScan_Seq & received_data,
                    ::DDS::SampleInfoSeq & info_seq,
                    ::DDS::Long max_samples,
                    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t take_w_condition(
                    MultiEchoLaserScan_Seq & received_data,
                    ::DDS::SampleInfoSeq & info_seq,
                    ::DDS::Long max_samples,
                    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t read_next_sample(
                    MultiEchoLaserScan_ & received_data,
                    ::DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t take_next_sample(
                    MultiEchoLaserScan_ & received_data,
                    ::DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t read_instance(
                    MultiEchoLaserScan_Seq & received_data,
                    ::DDS::SampleInfoSeq & info_seq,
                    ::DDS::Long max_samples,
                    ::DDS::InstanceHandle_t a_handle,
                    ::DDS::SampleStateMask sample_states,
                    ::DDS::ViewStateMask view_states,
                    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t take_instance(
                    MultiEchoLaserScan_Seq & received_data,
                    ::DDS::SampleInfoSeq & info_seq,
                    ::DDS::Long max_samples,
                    ::DDS::InstanceHandle_t a_handle,
                    ::DDS::SampleStateMask sample_states,
                    ::DDS::ViewStateMask view_states,
                    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t read_next_instance(
                    MultiEchoLaserScan_Seq & received_data,
                    ::DDS::SampleInfoSeq & info_seq,
                    ::DDS::Long max_samples,
                    ::DDS::InstanceHandle_t a_handle,
                    ::DDS::SampleStateMask sample_states,
                    ::DDS::ViewStateMask view_states,
                    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t take_next_instance(
                    MultiEchoLaserScan_Seq & received_data,
                    ::DDS::SampleInfoSeq & info_seq,
                    ::DDS::Long max_samples,
                    ::DDS::InstanceHandle_t a_handle,
                    ::DDS::SampleStateMask sample_states,
                    ::DDS::ViewStateMask view_states,
                    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t read_next_instance_w_condition(
                    MultiEchoLaserScan_Seq & received_data,
                    ::DDS::SampleInfoSeq & info_seq,
                    ::DDS::Long max_samples,
                    ::DDS::InstanceHandle_t a_handle,
                    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t take_next_instance_w_condition(
                    MultiEchoLaserScan_Seq & received_data,
                    ::DDS::SampleInfoSeq & info_seq,
                    ::DDS::Long max_samples,
                    ::DDS::InstanceHandle_t a_handle,
                    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t return_loan(
                    MultiEchoLaserScan_Seq & received_data,
                    ::DDS::SampleInfoSeq & info_seq) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t get_key_value(
                    MultiEchoLaserScan_ & key_holder,
                    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::InstanceHandle_t lookup_instance(
                    const MultiEchoLaserScan_ & instance) THROW_ORB_EXCEPTIONS;
            
                MultiEchoLaserScan_DataReaderView_impl (
                    gapi_dataReader handle
                );
            
                virtual ~MultiEchoLaserScan_DataReaderView_impl(void);
            
            private:
                MultiEchoLaserScan_DataReaderView_impl(const MultiEchoLaserScan_DataReaderView &);
                void operator= (const MultiEchoLaserScan_DataReaderView &);
            };
            
        }

    }

}

#endif
