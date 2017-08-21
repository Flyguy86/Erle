#ifndef POSEARRAY_DCPS_IMPL_H_
#define POSEARRAY_DCPS_IMPL_H_

#include "ccpp.h"
#include "ccpp_PoseArray_.h"
#include "ccpp_TypeSupport_impl.h"
#include "ccpp_DataWriter_impl.h"
#include "ccpp_DataReader_impl.h"
#include "ccpp_DataReaderView_impl.h"


namespace geometry_msgs {

    namespace msg {

        namespace dds_ {

            class  PoseArray_TypeSupportFactory : public ::DDS::TypeSupportFactory_impl
            {
            public:
                PoseArray_TypeSupportFactory(const PoseArray_TypeSupportFactory & o) = delete;
                PoseArray_TypeSupportFactory & operator=(const PoseArray_TypeSupportFactory & o) = delete;
                PoseArray_TypeSupportFactory() {}
                virtual ~PoseArray_TypeSupportFactory() {}
            private:
                ::DDS::DataWriter_ptr
                create_datawriter (gapi_dataWriter handle);
            
                ::DDS::DataReader_ptr
                create_datareader (gapi_dataReader handle);
            
                ::DDS::DataReaderView_ptr
                create_view (gapi_dataReaderView handle);
            };
            
            class  PoseArray_TypeSupport : public virtual PoseArray_TypeSupportInterface,
                                           public ::DDS::TypeSupport_impl
            {
            public:
                virtual ::DDS::ReturnCode_t register_type(
                    ::DDS::DomainParticipant_ptr participant,
                    const char * type_name) THROW_ORB_EXCEPTIONS;
            
                virtual char * get_type_name() THROW_ORB_EXCEPTIONS;
            
                PoseArray_TypeSupport (void);
                virtual ~PoseArray_TypeSupport (void);
            
            private:
                PoseArray_TypeSupport (const PoseArray_TypeSupport &);
                void operator= (const PoseArray_TypeSupport &);
            
                static const char *metaDescriptor[];
                static const ::DDS::ULong metaDescriptorArrLength;
            };
            
            typedef PoseArray_TypeSupportInterface_var PoseArray_TypeSupport_var;
            typedef PoseArray_TypeSupportInterface_ptr PoseArray_TypeSupport_ptr;
            
            class  PoseArray_DataWriter_impl : public virtual PoseArray_DataWriter,
                                                public ::DDS::DataWriter_impl
            {
            public:
            
                virtual ::DDS::InstanceHandle_t register_instance(
                    const PoseArray_ & instance_data) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::InstanceHandle_t register_instance_w_timestamp(
                    const PoseArray_ & instance_data,
                    const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t unregister_instance(
                    const PoseArray_ & instance_data,
                    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t unregister_instance_w_timestamp(
                    const PoseArray_ & instance_data,
                    ::DDS::InstanceHandle_t handle,
                    const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t write(
                    const PoseArray_ & instance_data,
                    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t write_w_timestamp(
                    const PoseArray_ & instance_data,
                    ::DDS::InstanceHandle_t handle,
                    const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t dispose(
                    const PoseArray_ & instance_data,
                    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t dispose_w_timestamp(
                    const PoseArray_ & instance_data,
                    ::DDS::InstanceHandle_t handle,
                    const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t writedispose(
                    const PoseArray_ & instance_data,
                    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t writedispose_w_timestamp(
                    const PoseArray_ & instance_data,
                    ::DDS::InstanceHandle_t handle,
                    const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t get_key_value(
                    PoseArray_ & key_holder,
                    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::InstanceHandle_t lookup_instance(
                    const PoseArray_ & instance_data) THROW_ORB_EXCEPTIONS;
            
            
                PoseArray_DataWriter_impl (
                    gapi_dataWriter handle
                );
            
                virtual ~PoseArray_DataWriter_impl (void);
            
            private:
                PoseArray_DataWriter_impl(const PoseArray_DataWriter_impl &);
                void operator= (const PoseArray_DataWriter &);
            };
            
            class  PoseArray_DataReader_impl : public virtual PoseArray_DataReader,
                                                public ::DDS::DataReader_impl
            {
                friend class PoseArray_DataReaderView_impl;
            public:
                virtual ::DDS::ReturnCode_t read(
                    PoseArray_Seq & received_data,
                    ::DDS::SampleInfoSeq & info_seq,
                    ::DDS::Long max_samples,
                    ::DDS::SampleStateMask sample_states,
                    ::DDS::ViewStateMask view_states,
                    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t take(
                    PoseArray_Seq & received_data,
                    ::DDS::SampleInfoSeq & info_seq,
                    ::DDS::Long max_samples,
                    ::DDS::SampleStateMask sample_states,
                    ::DDS::ViewStateMask view_states,
                    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t read_w_condition(
                    PoseArray_Seq & received_data,
                    ::DDS::SampleInfoSeq & info_seq,
                    ::DDS::Long max_samples,
                    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t take_w_condition(
                    PoseArray_Seq & received_data,
                    ::DDS::SampleInfoSeq & info_seq,
                    ::DDS::Long max_samples,
                    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t read_next_sample(
                    PoseArray_ & received_data,
                    ::DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t take_next_sample(
                    PoseArray_ & received_data,
                    ::DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t read_instance(
                    PoseArray_Seq & received_data,
                    ::DDS::SampleInfoSeq & info_seq,
                    ::DDS::Long max_samples,
                    ::DDS::InstanceHandle_t a_handle,
                    ::DDS::SampleStateMask sample_states,
                    ::DDS::ViewStateMask view_states,
                    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t take_instance(
                    PoseArray_Seq & received_data,
                    ::DDS::SampleInfoSeq & info_seq,
                    ::DDS::Long max_samples,
                    ::DDS::InstanceHandle_t a_handle,
                    ::DDS::SampleStateMask sample_states,
                    ::DDS::ViewStateMask view_states,
                    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t read_next_instance(
                    PoseArray_Seq & received_data,
                    ::DDS::SampleInfoSeq & info_seq,
                    ::DDS::Long max_samples,
                    ::DDS::InstanceHandle_t a_handle,
                    ::DDS::SampleStateMask sample_states,
                    ::DDS::ViewStateMask view_states,
                    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t take_next_instance(
                    PoseArray_Seq & received_data,
                    ::DDS::SampleInfoSeq & info_seq,
                    ::DDS::Long max_samples,
                    ::DDS::InstanceHandle_t a_handle,
                    ::DDS::SampleStateMask sample_states,
                    ::DDS::ViewStateMask view_states,
                    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t read_next_instance_w_condition(
                    PoseArray_Seq & received_data,
                    ::DDS::SampleInfoSeq & info_seq,
                    ::DDS::Long max_samples,
                    ::DDS::InstanceHandle_t a_handle,
                    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t take_next_instance_w_condition(
                    PoseArray_Seq & received_data,
                    ::DDS::SampleInfoSeq & info_seq,
                    ::DDS::Long max_samples,
                    ::DDS::InstanceHandle_t a_handle,
                    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t return_loan(
                    PoseArray_Seq & received_data,
                    ::DDS::SampleInfoSeq & info_seq) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t get_key_value(
                    PoseArray_ & key_holder,
                    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::InstanceHandle_t lookup_instance(
                    const PoseArray_ & instance) THROW_ORB_EXCEPTIONS;
            
                PoseArray_DataReader_impl (
                    gapi_dataReader handle
                );
            
                virtual ~PoseArray_DataReader_impl(void);
            
            private:
                PoseArray_DataReader_impl(const PoseArray_DataReader &);
                void operator= (const PoseArray_DataReader &);
            
                static ::DDS::ReturnCode_t check_preconditions(
                    PoseArray_Seq & received_data,
                    ::DDS::SampleInfoSeq & info_seq,
                    ::DDS::Long max_samples
                );
            };
            
            class  PoseArray_DataReaderView_impl : public virtual PoseArray_DataReaderView,
                                                public ::DDS::DataReaderView_impl
            {
            public:
                virtual ::DDS::ReturnCode_t read(
                    PoseArray_Seq & received_data,
                    ::DDS::SampleInfoSeq & info_seq,
                    ::DDS::Long max_samples,
                    ::DDS::SampleStateMask sample_states,
                    ::DDS::ViewStateMask view_states,
                    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t take(
                    PoseArray_Seq & received_data,
                    ::DDS::SampleInfoSeq & info_seq,
                    ::DDS::Long max_samples,
                    ::DDS::SampleStateMask sample_states,
                    ::DDS::ViewStateMask view_states,
                    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t read_w_condition(
                    PoseArray_Seq & received_data,
                    ::DDS::SampleInfoSeq & info_seq,
                    ::DDS::Long max_samples,
                    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t take_w_condition(
                    PoseArray_Seq & received_data,
                    ::DDS::SampleInfoSeq & info_seq,
                    ::DDS::Long max_samples,
                    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t read_next_sample(
                    PoseArray_ & received_data,
                    ::DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t take_next_sample(
                    PoseArray_ & received_data,
                    ::DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t read_instance(
                    PoseArray_Seq & received_data,
                    ::DDS::SampleInfoSeq & info_seq,
                    ::DDS::Long max_samples,
                    ::DDS::InstanceHandle_t a_handle,
                    ::DDS::SampleStateMask sample_states,
                    ::DDS::ViewStateMask view_states,
                    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t take_instance(
                    PoseArray_Seq & received_data,
                    ::DDS::SampleInfoSeq & info_seq,
                    ::DDS::Long max_samples,
                    ::DDS::InstanceHandle_t a_handle,
                    ::DDS::SampleStateMask sample_states,
                    ::DDS::ViewStateMask view_states,
                    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t read_next_instance(
                    PoseArray_Seq & received_data,
                    ::DDS::SampleInfoSeq & info_seq,
                    ::DDS::Long max_samples,
                    ::DDS::InstanceHandle_t a_handle,
                    ::DDS::SampleStateMask sample_states,
                    ::DDS::ViewStateMask view_states,
                    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t take_next_instance(
                    PoseArray_Seq & received_data,
                    ::DDS::SampleInfoSeq & info_seq,
                    ::DDS::Long max_samples,
                    ::DDS::InstanceHandle_t a_handle,
                    ::DDS::SampleStateMask sample_states,
                    ::DDS::ViewStateMask view_states,
                    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t read_next_instance_w_condition(
                    PoseArray_Seq & received_data,
                    ::DDS::SampleInfoSeq & info_seq,
                    ::DDS::Long max_samples,
                    ::DDS::InstanceHandle_t a_handle,
                    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t take_next_instance_w_condition(
                    PoseArray_Seq & received_data,
                    ::DDS::SampleInfoSeq & info_seq,
                    ::DDS::Long max_samples,
                    ::DDS::InstanceHandle_t a_handle,
                    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t return_loan(
                    PoseArray_Seq & received_data,
                    ::DDS::SampleInfoSeq & info_seq) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t get_key_value(
                    PoseArray_ & key_holder,
                    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::InstanceHandle_t lookup_instance(
                    const PoseArray_ & instance) THROW_ORB_EXCEPTIONS;
            
                PoseArray_DataReaderView_impl (
                    gapi_dataReader handle
                );
            
                virtual ~PoseArray_DataReaderView_impl(void);
            
            private:
                PoseArray_DataReaderView_impl(const PoseArray_DataReaderView &);
                void operator= (const PoseArray_DataReaderView &);
            };
            
        }

    }

}

#endif
