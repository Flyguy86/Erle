#ifndef TWIST_DCPS_IMPL_H_
#define TWIST_DCPS_IMPL_H_

#include "ccpp.h"
#include "ccpp_Twist_.h"
#include "ccpp_TypeSupport_impl.h"
#include "ccpp_DataWriter_impl.h"
#include "ccpp_DataReader_impl.h"
#include "ccpp_DataReaderView_impl.h"


namespace geometry_msgs {

    namespace msg {

        namespace dds_ {

            class  Twist_TypeSupportFactory : public ::DDS::TypeSupportFactory_impl
            {
            public:
                Twist_TypeSupportFactory(const Twist_TypeSupportFactory & o) = delete;
                Twist_TypeSupportFactory & operator=(const Twist_TypeSupportFactory & o) = delete;
                Twist_TypeSupportFactory() {}
                virtual ~Twist_TypeSupportFactory() {}
            private:
                ::DDS::DataWriter_ptr
                create_datawriter (gapi_dataWriter handle);
            
                ::DDS::DataReader_ptr
                create_datareader (gapi_dataReader handle);
            
                ::DDS::DataReaderView_ptr
                create_view (gapi_dataReaderView handle);
            };
            
            class  Twist_TypeSupport : public virtual Twist_TypeSupportInterface,
                                           public ::DDS::TypeSupport_impl
            {
            public:
                virtual ::DDS::ReturnCode_t register_type(
                    ::DDS::DomainParticipant_ptr participant,
                    const char * type_name) THROW_ORB_EXCEPTIONS;
            
                virtual char * get_type_name() THROW_ORB_EXCEPTIONS;
            
                Twist_TypeSupport (void);
                virtual ~Twist_TypeSupport (void);
            
            private:
                Twist_TypeSupport (const Twist_TypeSupport &);
                void operator= (const Twist_TypeSupport &);
            
                static const char *metaDescriptor[];
                static const ::DDS::ULong metaDescriptorArrLength;
            };
            
            typedef Twist_TypeSupportInterface_var Twist_TypeSupport_var;
            typedef Twist_TypeSupportInterface_ptr Twist_TypeSupport_ptr;
            
            class  Twist_DataWriter_impl : public virtual Twist_DataWriter,
                                                public ::DDS::DataWriter_impl
            {
            public:
            
                virtual ::DDS::InstanceHandle_t register_instance(
                    const Twist_ & instance_data) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::InstanceHandle_t register_instance_w_timestamp(
                    const Twist_ & instance_data,
                    const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t unregister_instance(
                    const Twist_ & instance_data,
                    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t unregister_instance_w_timestamp(
                    const Twist_ & instance_data,
                    ::DDS::InstanceHandle_t handle,
                    const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t write(
                    const Twist_ & instance_data,
                    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t write_w_timestamp(
                    const Twist_ & instance_data,
                    ::DDS::InstanceHandle_t handle,
                    const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t dispose(
                    const Twist_ & instance_data,
                    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t dispose_w_timestamp(
                    const Twist_ & instance_data,
                    ::DDS::InstanceHandle_t handle,
                    const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t writedispose(
                    const Twist_ & instance_data,
                    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t writedispose_w_timestamp(
                    const Twist_ & instance_data,
                    ::DDS::InstanceHandle_t handle,
                    const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t get_key_value(
                    Twist_ & key_holder,
                    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::InstanceHandle_t lookup_instance(
                    const Twist_ & instance_data) THROW_ORB_EXCEPTIONS;
            
            
                Twist_DataWriter_impl (
                    gapi_dataWriter handle
                );
            
                virtual ~Twist_DataWriter_impl (void);
            
            private:
                Twist_DataWriter_impl(const Twist_DataWriter_impl &);
                void operator= (const Twist_DataWriter &);
            };
            
            class  Twist_DataReader_impl : public virtual Twist_DataReader,
                                                public ::DDS::DataReader_impl
            {
                friend class Twist_DataReaderView_impl;
            public:
                virtual ::DDS::ReturnCode_t read(
                    Twist_Seq & received_data,
                    ::DDS::SampleInfoSeq & info_seq,
                    ::DDS::Long max_samples,
                    ::DDS::SampleStateMask sample_states,
                    ::DDS::ViewStateMask view_states,
                    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t take(
                    Twist_Seq & received_data,
                    ::DDS::SampleInfoSeq & info_seq,
                    ::DDS::Long max_samples,
                    ::DDS::SampleStateMask sample_states,
                    ::DDS::ViewStateMask view_states,
                    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t read_w_condition(
                    Twist_Seq & received_data,
                    ::DDS::SampleInfoSeq & info_seq,
                    ::DDS::Long max_samples,
                    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t take_w_condition(
                    Twist_Seq & received_data,
                    ::DDS::SampleInfoSeq & info_seq,
                    ::DDS::Long max_samples,
                    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t read_next_sample(
                    Twist_ & received_data,
                    ::DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t take_next_sample(
                    Twist_ & received_data,
                    ::DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t read_instance(
                    Twist_Seq & received_data,
                    ::DDS::SampleInfoSeq & info_seq,
                    ::DDS::Long max_samples,
                    ::DDS::InstanceHandle_t a_handle,
                    ::DDS::SampleStateMask sample_states,
                    ::DDS::ViewStateMask view_states,
                    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t take_instance(
                    Twist_Seq & received_data,
                    ::DDS::SampleInfoSeq & info_seq,
                    ::DDS::Long max_samples,
                    ::DDS::InstanceHandle_t a_handle,
                    ::DDS::SampleStateMask sample_states,
                    ::DDS::ViewStateMask view_states,
                    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t read_next_instance(
                    Twist_Seq & received_data,
                    ::DDS::SampleInfoSeq & info_seq,
                    ::DDS::Long max_samples,
                    ::DDS::InstanceHandle_t a_handle,
                    ::DDS::SampleStateMask sample_states,
                    ::DDS::ViewStateMask view_states,
                    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t take_next_instance(
                    Twist_Seq & received_data,
                    ::DDS::SampleInfoSeq & info_seq,
                    ::DDS::Long max_samples,
                    ::DDS::InstanceHandle_t a_handle,
                    ::DDS::SampleStateMask sample_states,
                    ::DDS::ViewStateMask view_states,
                    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t read_next_instance_w_condition(
                    Twist_Seq & received_data,
                    ::DDS::SampleInfoSeq & info_seq,
                    ::DDS::Long max_samples,
                    ::DDS::InstanceHandle_t a_handle,
                    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t take_next_instance_w_condition(
                    Twist_Seq & received_data,
                    ::DDS::SampleInfoSeq & info_seq,
                    ::DDS::Long max_samples,
                    ::DDS::InstanceHandle_t a_handle,
                    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t return_loan(
                    Twist_Seq & received_data,
                    ::DDS::SampleInfoSeq & info_seq) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t get_key_value(
                    Twist_ & key_holder,
                    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::InstanceHandle_t lookup_instance(
                    const Twist_ & instance) THROW_ORB_EXCEPTIONS;
            
                Twist_DataReader_impl (
                    gapi_dataReader handle
                );
            
                virtual ~Twist_DataReader_impl(void);
            
            private:
                Twist_DataReader_impl(const Twist_DataReader &);
                void operator= (const Twist_DataReader &);
            
                static ::DDS::ReturnCode_t check_preconditions(
                    Twist_Seq & received_data,
                    ::DDS::SampleInfoSeq & info_seq,
                    ::DDS::Long max_samples
                );
            };
            
            class  Twist_DataReaderView_impl : public virtual Twist_DataReaderView,
                                                public ::DDS::DataReaderView_impl
            {
            public:
                virtual ::DDS::ReturnCode_t read(
                    Twist_Seq & received_data,
                    ::DDS::SampleInfoSeq & info_seq,
                    ::DDS::Long max_samples,
                    ::DDS::SampleStateMask sample_states,
                    ::DDS::ViewStateMask view_states,
                    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t take(
                    Twist_Seq & received_data,
                    ::DDS::SampleInfoSeq & info_seq,
                    ::DDS::Long max_samples,
                    ::DDS::SampleStateMask sample_states,
                    ::DDS::ViewStateMask view_states,
                    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t read_w_condition(
                    Twist_Seq & received_data,
                    ::DDS::SampleInfoSeq & info_seq,
                    ::DDS::Long max_samples,
                    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t take_w_condition(
                    Twist_Seq & received_data,
                    ::DDS::SampleInfoSeq & info_seq,
                    ::DDS::Long max_samples,
                    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t read_next_sample(
                    Twist_ & received_data,
                    ::DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t take_next_sample(
                    Twist_ & received_data,
                    ::DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t read_instance(
                    Twist_Seq & received_data,
                    ::DDS::SampleInfoSeq & info_seq,
                    ::DDS::Long max_samples,
                    ::DDS::InstanceHandle_t a_handle,
                    ::DDS::SampleStateMask sample_states,
                    ::DDS::ViewStateMask view_states,
                    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t take_instance(
                    Twist_Seq & received_data,
                    ::DDS::SampleInfoSeq & info_seq,
                    ::DDS::Long max_samples,
                    ::DDS::InstanceHandle_t a_handle,
                    ::DDS::SampleStateMask sample_states,
                    ::DDS::ViewStateMask view_states,
                    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t read_next_instance(
                    Twist_Seq & received_data,
                    ::DDS::SampleInfoSeq & info_seq,
                    ::DDS::Long max_samples,
                    ::DDS::InstanceHandle_t a_handle,
                    ::DDS::SampleStateMask sample_states,
                    ::DDS::ViewStateMask view_states,
                    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t take_next_instance(
                    Twist_Seq & received_data,
                    ::DDS::SampleInfoSeq & info_seq,
                    ::DDS::Long max_samples,
                    ::DDS::InstanceHandle_t a_handle,
                    ::DDS::SampleStateMask sample_states,
                    ::DDS::ViewStateMask view_states,
                    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t read_next_instance_w_condition(
                    Twist_Seq & received_data,
                    ::DDS::SampleInfoSeq & info_seq,
                    ::DDS::Long max_samples,
                    ::DDS::InstanceHandle_t a_handle,
                    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t take_next_instance_w_condition(
                    Twist_Seq & received_data,
                    ::DDS::SampleInfoSeq & info_seq,
                    ::DDS::Long max_samples,
                    ::DDS::InstanceHandle_t a_handle,
                    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t return_loan(
                    Twist_Seq & received_data,
                    ::DDS::SampleInfoSeq & info_seq) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t get_key_value(
                    Twist_ & key_holder,
                    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::InstanceHandle_t lookup_instance(
                    const Twist_ & instance) THROW_ORB_EXCEPTIONS;
            
                Twist_DataReaderView_impl (
                    gapi_dataReader handle
                );
            
                virtual ~Twist_DataReaderView_impl(void);
            
            private:
                Twist_DataReaderView_impl(const Twist_DataReaderView &);
                void operator= (const Twist_DataReaderView &);
            };
            
        }

    }

}

#endif
