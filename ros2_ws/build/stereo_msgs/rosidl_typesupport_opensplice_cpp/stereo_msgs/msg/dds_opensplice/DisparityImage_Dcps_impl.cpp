#include "DisparityImage_Dcps_impl.h"
#include "gapi.h"
#include "gapi_loanRegistry.h"
#include "DisparityImage_SplDcps.h"
#include "ccpp_DataReader_impl.h"
#include "ccpp_DataReaderView_impl.h"


extern c_bool
__stereo_msgs_msg_dds__DisparityImage___copyIn(
    c_base base,
    struct stereo_msgs::msg::dds_::DisparityImage_ *from,
    struct _stereo_msgs_msg_dds__DisparityImage_ *to);

extern void
__stereo_msgs_msg_dds__DisparityImage___copyOut(
    void *_from,
    void *_to);

// DDS stereo_msgs::msg::dds_::DisparityImage_ TypeSupportFactory Object Body

::DDS::DataWriter_ptr
stereo_msgs::msg::dds_::DisparityImage_TypeSupportFactory::create_datawriter (gapi_dataWriter handle)
{
    return new stereo_msgs::msg::dds_::DisparityImage_DataWriter_impl(handle);
}

::DDS::DataReader_ptr
stereo_msgs::msg::dds_::DisparityImage_TypeSupportFactory::create_datareader (gapi_dataReader handle)
{
    return new stereo_msgs::msg::dds_::DisparityImage_DataReader_impl (handle);
}


::DDS::DataReaderView_ptr
stereo_msgs::msg::dds_::DisparityImage_TypeSupportFactory::create_view (gapi_dataReaderView handle)
{
    return new stereo_msgs::msg::dds_::DisparityImage_DataReaderView_impl (handle);
}

// DDS stereo_msgs::msg::dds_::DisparityImage_ TypeSupport Object Body

stereo_msgs::msg::dds_::DisparityImage_TypeSupport::DisparityImage_TypeSupport(void) :
    TypeSupport_impl(
        __stereo_msgs_msg_dds__DisparityImage___name(),
        __stereo_msgs_msg_dds__DisparityImage___keys(),
        stereo_msgs::msg::dds_::DisparityImage_TypeSupport::metaDescriptor,
        (gapi_copyIn) __stereo_msgs_msg_dds__DisparityImage___copyIn,
        (gapi_copyOut) __stereo_msgs_msg_dds__DisparityImage___copyOut,
        (gapi_readerCopy) ::DDS::ccpp_DataReaderCopy<stereo_msgs::msg::dds_::DisparityImage_Seq, stereo_msgs::msg::dds_::DisparityImage_>,
        new  stereo_msgs::msg::dds_::DisparityImage_TypeSupportFactory(),
        stereo_msgs::msg::dds_::DisparityImage_TypeSupport::metaDescriptorArrLength)
{
    // Parent constructor takes care of everything.
}

stereo_msgs::msg::dds_::DisparityImage_TypeSupport::~DisparityImage_TypeSupport(void)
{
    // Parent destructor takes care of everything.
}

::DDS::ReturnCode_t
stereo_msgs::msg::dds_::DisparityImage_TypeSupport::register_type(
    ::DDS::DomainParticipant_ptr domain,
    const char * type_name) THROW_ORB_EXCEPTIONS
{
    return TypeSupport_impl::register_type(domain, type_name);
}

char *
stereo_msgs::msg::dds_::DisparityImage_TypeSupport::get_type_name() THROW_ORB_EXCEPTIONS
{
    return TypeSupport_impl::get_type_name();
}

// DDS stereo_msgs::msg::dds_::DisparityImage_ DataWriter_impl Object Body

stereo_msgs::msg::dds_::DisparityImage_DataWriter_impl::DisparityImage_DataWriter_impl (
    gapi_dataWriter handle
) : ::DDS::DataWriter_impl(handle)
{
    // Parent constructor takes care of everything.
}

stereo_msgs::msg::dds_::DisparityImage_DataWriter_impl::~DisparityImage_DataWriter_impl(void)
{
    // Parent destructor takes care of everything.
}

::DDS::InstanceHandle_t
stereo_msgs::msg::dds_::DisparityImage_DataWriter_impl::register_instance(
    const stereo_msgs::msg::dds_::DisparityImage_ & instance_data) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::register_instance(&instance_data);
}

::DDS::InstanceHandle_t
stereo_msgs::msg::dds_::DisparityImage_DataWriter_impl::register_instance_w_timestamp(
    const DisparityImage_ & instance_data,
    const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::register_instance_w_timestamp(&instance_data, source_timestamp);
}

::DDS::ReturnCode_t
stereo_msgs::msg::dds_::DisparityImage_DataWriter_impl::unregister_instance(
    const stereo_msgs::msg::dds_::DisparityImage_ & instance_data,
    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::unregister_instance(&instance_data, handle);
}

::DDS::ReturnCode_t
stereo_msgs::msg::dds_::DisparityImage_DataWriter_impl::unregister_instance_w_timestamp(
    const DisparityImage_ & instance_data,
    ::DDS::InstanceHandle_t handle,
    const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::unregister_instance_w_timestamp(&instance_data, handle, source_timestamp);
}

::DDS::ReturnCode_t
stereo_msgs::msg::dds_::DisparityImage_DataWriter_impl::write(
    const stereo_msgs::msg::dds_::DisparityImage_ & instance_data,
    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::write(&instance_data, handle);
}

::DDS::ReturnCode_t
stereo_msgs::msg::dds_::DisparityImage_DataWriter_impl::write_w_timestamp(
    const DisparityImage_ & instance_data,
    ::DDS::InstanceHandle_t handle,
    const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::write_w_timestamp(&instance_data, handle, source_timestamp);
}

::DDS::ReturnCode_t
stereo_msgs::msg::dds_::DisparityImage_DataWriter_impl::dispose(
    const stereo_msgs::msg::dds_::DisparityImage_ & instance_data,
    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::dispose(&instance_data, handle);
}

::DDS::ReturnCode_t
stereo_msgs::msg::dds_::DisparityImage_DataWriter_impl::dispose_w_timestamp(
    const DisparityImage_ & instance_data,
    ::DDS::InstanceHandle_t handle,
    const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::dispose_w_timestamp(&instance_data, handle, source_timestamp);
}

::DDS::ReturnCode_t
stereo_msgs::msg::dds_::DisparityImage_DataWriter_impl::writedispose(
    const stereo_msgs::msg::dds_::DisparityImage_ & instance_data,
    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::writedispose(&instance_data, handle);
}

::DDS::ReturnCode_t
stereo_msgs::msg::dds_::DisparityImage_DataWriter_impl::writedispose_w_timestamp(
    const DisparityImage_ & instance_data,
    ::DDS::InstanceHandle_t handle,
    const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::writedispose_w_timestamp(&instance_data, handle, source_timestamp);
}

::DDS::ReturnCode_t
stereo_msgs::msg::dds_::DisparityImage_DataWriter_impl::get_key_value(
    DisparityImage_ & key_holder,
    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::get_key_value(&key_holder, handle);
}

::DDS::InstanceHandle_t
stereo_msgs::msg::dds_::DisparityImage_DataWriter_impl::lookup_instance(
    const stereo_msgs::msg::dds_::DisparityImage_ & instance_data) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::lookup_instance(&instance_data);
}

// DDS stereo_msgs::msg::dds_::DisparityImage_ DataReader_impl Object Body

stereo_msgs::msg::dds_::DisparityImage_DataReader_impl::DisparityImage_DataReader_impl (
    gapi_dataReader handle
) : ::DDS::DataReader_impl(handle, ::DDS::ccpp_DataReaderParallelDemarshallingMain<stereo_msgs::msg::dds_::DisparityImage_Seq>)
{
    // Parent constructor takes care of everything.
}

stereo_msgs::msg::dds_::DisparityImage_DataReader_impl::~DisparityImage_DataReader_impl(void)
{
    // Parent destructor takes care of everything.
}


::DDS::ReturnCode_t
stereo_msgs::msg::dds_::DisparityImage_DataReader_impl::read(
    stereo_msgs::msg::dds_::DisparityImage_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DataReader_impl::read(&received_data, info_seq, max_samples, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
stereo_msgs::msg::dds_::DisparityImage_DataReader_impl::take(
    stereo_msgs::msg::dds_::DisparityImage_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DataReader_impl::take(&received_data, info_seq, max_samples, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
stereo_msgs::msg::dds_::DisparityImage_DataReader_impl::read_w_condition(
    stereo_msgs::msg::dds_::DisparityImage_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DataReader_impl::read_w_condition(&received_data, info_seq, max_samples, a_condition);
    }
    return status;
}

::DDS::ReturnCode_t
stereo_msgs::msg::dds_::DisparityImage_DataReader_impl::take_w_condition(
    stereo_msgs::msg::dds_::DisparityImage_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DataReader_impl::take_w_condition(&received_data, info_seq, max_samples, a_condition);
    }
    return status;
}


::DDS::ReturnCode_t
stereo_msgs::msg::dds_::DisparityImage_DataReader_impl::read_next_sample(
    stereo_msgs::msg::dds_::DisparityImage_ & received_data,
    ::DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS
{
    return DataReader_impl::read_next_sample(&received_data, sample_info);
}


::DDS::ReturnCode_t
stereo_msgs::msg::dds_::DisparityImage_DataReader_impl::take_next_sample(
    stereo_msgs::msg::dds_::DisparityImage_ & received_data,
    ::DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS
{
    return DataReader_impl::take_next_sample(&received_data, sample_info);
}


::DDS::ReturnCode_t
stereo_msgs::msg::dds_::DisparityImage_DataReader_impl::read_instance(
    stereo_msgs::msg::dds_::DisparityImage_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DataReader_impl::read_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
stereo_msgs::msg::dds_::DisparityImage_DataReader_impl::take_instance(
    stereo_msgs::msg::dds_::DisparityImage_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DataReader_impl::take_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
stereo_msgs::msg::dds_::DisparityImage_DataReader_impl::read_next_instance(
    stereo_msgs::msg::dds_::DisparityImage_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DataReader_impl::read_next_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
stereo_msgs::msg::dds_::DisparityImage_DataReader_impl::take_next_instance(
    stereo_msgs::msg::dds_::DisparityImage_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DataReader_impl::take_next_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}


::DDS::ReturnCode_t
stereo_msgs::msg::dds_::DisparityImage_DataReader_impl::read_next_instance_w_condition(
    stereo_msgs::msg::dds_::DisparityImage_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DataReader_impl::read_next_instance_w_condition(&received_data, info_seq, max_samples, a_handle, a_condition);
    }
    return status;
}


::DDS::ReturnCode_t
stereo_msgs::msg::dds_::DisparityImage_DataReader_impl::take_next_instance_w_condition(
    stereo_msgs::msg::dds_::DisparityImage_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DataReader_impl::take_next_instance_w_condition(&received_data, info_seq, max_samples, a_handle, a_condition);
    }
    return status;
}


::DDS::ReturnCode_t
stereo_msgs::msg::dds_::DisparityImage_DataReader_impl::return_loan(
    stereo_msgs::msg::dds_::DisparityImage_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status = ::DDS::RETCODE_OK;

    if ( received_data.length() > 0 ) {
        if (received_data.length() == info_seq.length() &&
            received_data.release() == info_seq.release() ) {
            if (!received_data.release()) {
                status = DataReader_impl::return_loan( received_data.get_buffer(),
                                                       info_seq.get_buffer() );

                if ( status == ::DDS::RETCODE_OK ) {
                    if ( !received_data.release() ) {
                        stereo_msgs::msg::dds_::DisparityImage_Seq::freebuf( received_data.get_buffer(false) );
                        received_data.replace(0, 0, NULL, false);
                        ::DDS::SampleInfoSeq::freebuf( info_seq.get_buffer(false) );
                        info_seq.replace(0, 0, NULL, false);
                    }
                } else if ( status == ::DDS::RETCODE_NO_DATA ) {
                    if ( received_data.release() ) {
                        status = ::DDS::RETCODE_OK;
                    } else {
                        status = ::DDS::RETCODE_PRECONDITION_NOT_MET;
                    }
                }
            }
        } else {
            status = ::DDS::RETCODE_PRECONDITION_NOT_MET;
        }
    }
    return status;
}


::DDS::ReturnCode_t
stereo_msgs::msg::dds_::DisparityImage_DataReader_impl::get_key_value(
    stereo_msgs::msg::dds_::DisparityImage_ & key_holder,
    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DataReader_impl::get_key_value(&key_holder, handle);
}

::DDS::InstanceHandle_t
stereo_msgs::msg::dds_::DisparityImage_DataReader_impl::lookup_instance(
    const stereo_msgs::msg::dds_::DisparityImage_ & instance) THROW_ORB_EXCEPTIONS
{
    return DataReader_impl::lookup_instance(&instance);
}

::DDS::ReturnCode_t
stereo_msgs::msg::dds_::DisparityImage_DataReader_impl::check_preconditions(
    stereo_msgs::msg::dds_::DisparityImage_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples)
{
    ::DDS::ReturnCode_t status = ::DDS::RETCODE_PRECONDITION_NOT_MET;

    if ( received_data.length() == info_seq.length() &&
         received_data.maximum() == info_seq.maximum() &&
         received_data.release() == info_seq.release() ) {
        if ( received_data.maximum() == 0 || received_data.release() ) {
            if (received_data.maximum() == 0 ||
                max_samples <= static_cast<DDS::Long>(received_data.maximum()) ||
                max_samples == ::DDS::LENGTH_UNLIMITED ) {
                status = ::DDS::RETCODE_OK;
            }
        }
    }
    return status;
}


// DDS stereo_msgs::msg::dds_::DisparityImage_ DataReaderView_impl Object Body

stereo_msgs::msg::dds_::DisparityImage_DataReaderView_impl::DisparityImage_DataReaderView_impl (
    gapi_dataReaderView handle
) : ::DDS::DataReaderView_impl(handle)
{
    // Parent constructor takes care of everything.
}

stereo_msgs::msg::dds_::DisparityImage_DataReaderView_impl::~DisparityImage_DataReaderView_impl(void)
{
    // Parent destructor takes care of everything.
}


::DDS::ReturnCode_t
stereo_msgs::msg::dds_::DisparityImage_DataReaderView_impl::read(
    stereo_msgs::msg::dds_::DisparityImage_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = stereo_msgs::msg::dds_::DisparityImage_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DataReaderView_impl::read(&received_data, info_seq, max_samples, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
stereo_msgs::msg::dds_::DisparityImage_DataReaderView_impl::take(
    stereo_msgs::msg::dds_::DisparityImage_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = stereo_msgs::msg::dds_::DisparityImage_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DataReaderView_impl::take(&received_data, info_seq, max_samples, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
stereo_msgs::msg::dds_::DisparityImage_DataReaderView_impl::read_w_condition(
    stereo_msgs::msg::dds_::DisparityImage_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = stereo_msgs::msg::dds_::DisparityImage_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DataReaderView_impl::read_w_condition(&received_data, info_seq, max_samples, a_condition);
    }
    return status;
}

::DDS::ReturnCode_t
stereo_msgs::msg::dds_::DisparityImage_DataReaderView_impl::take_w_condition(
    stereo_msgs::msg::dds_::DisparityImage_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = stereo_msgs::msg::dds_::DisparityImage_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DataReaderView_impl::take_w_condition(&received_data, info_seq, max_samples, a_condition);
    }
    return status;
}


::DDS::ReturnCode_t
stereo_msgs::msg::dds_::DisparityImage_DataReaderView_impl::read_next_sample(
    stereo_msgs::msg::dds_::DisparityImage_ & received_data,
    ::DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS
{
    return DataReaderView_impl::read_next_sample(&received_data, sample_info);
}


::DDS::ReturnCode_t
stereo_msgs::msg::dds_::DisparityImage_DataReaderView_impl::take_next_sample(
    stereo_msgs::msg::dds_::DisparityImage_ & received_data,
    ::DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS
{
    return DataReaderView_impl::take_next_sample(&received_data, sample_info);
}


::DDS::ReturnCode_t
stereo_msgs::msg::dds_::DisparityImage_DataReaderView_impl::read_instance(
    stereo_msgs::msg::dds_::DisparityImage_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = stereo_msgs::msg::dds_::DisparityImage_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DataReaderView_impl::read_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
stereo_msgs::msg::dds_::DisparityImage_DataReaderView_impl::take_instance(
    stereo_msgs::msg::dds_::DisparityImage_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = stereo_msgs::msg::dds_::DisparityImage_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DataReaderView_impl::take_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
stereo_msgs::msg::dds_::DisparityImage_DataReaderView_impl::read_next_instance(
    stereo_msgs::msg::dds_::DisparityImage_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = stereo_msgs::msg::dds_::DisparityImage_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DataReaderView_impl::read_next_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
stereo_msgs::msg::dds_::DisparityImage_DataReaderView_impl::take_next_instance(
    stereo_msgs::msg::dds_::DisparityImage_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = stereo_msgs::msg::dds_::DisparityImage_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DataReaderView_impl::take_next_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}


::DDS::ReturnCode_t
stereo_msgs::msg::dds_::DisparityImage_DataReaderView_impl::read_next_instance_w_condition(
    stereo_msgs::msg::dds_::DisparityImage_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = stereo_msgs::msg::dds_::DisparityImage_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DataReaderView_impl::read_next_instance_w_condition(&received_data, info_seq, max_samples, a_handle, a_condition);
    }
    return status;
}


::DDS::ReturnCode_t
stereo_msgs::msg::dds_::DisparityImage_DataReaderView_impl::take_next_instance_w_condition(
    stereo_msgs::msg::dds_::DisparityImage_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = stereo_msgs::msg::dds_::DisparityImage_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DataReaderView_impl::take_next_instance_w_condition(&received_data, info_seq, max_samples, a_handle, a_condition);
    }
    return status;
}


::DDS::ReturnCode_t
stereo_msgs::msg::dds_::DisparityImage_DataReaderView_impl::return_loan(
    stereo_msgs::msg::dds_::DisparityImage_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status = ::DDS::RETCODE_OK;

    if ( received_data.length() > 0 ) {
        if (received_data.length() == info_seq.length() &&
            received_data.release() == info_seq.release() ) {
            if (!received_data.release()) {
                status = DataReaderView_impl::return_loan( received_data.get_buffer(),
                                                       info_seq.get_buffer() );

                if ( status == ::DDS::RETCODE_OK ) {
                    if ( !received_data.release() ) {
                        stereo_msgs::msg::dds_::DisparityImage_Seq::freebuf( received_data.get_buffer(false) );
                        received_data.replace(0, 0, NULL, false);
                        ::DDS::SampleInfoSeq::freebuf( info_seq.get_buffer(false) );
                        info_seq.replace(0, 0, NULL, false);
                    }
                } else if ( status == ::DDS::RETCODE_NO_DATA ) {
                    if ( received_data.release() ) {
                        status = ::DDS::RETCODE_OK;
                    } else {
                        status = ::DDS::RETCODE_PRECONDITION_NOT_MET;
                    }
                }
            }
        } else {
            status = ::DDS::RETCODE_PRECONDITION_NOT_MET;
        }
    }
    return status;
}


::DDS::ReturnCode_t
stereo_msgs::msg::dds_::DisparityImage_DataReaderView_impl::get_key_value(
    stereo_msgs::msg::dds_::DisparityImage_ & key_holder,
    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DataReaderView_impl::get_key_value(&key_holder, handle);
}

::DDS::InstanceHandle_t
stereo_msgs::msg::dds_::DisparityImage_DataReaderView_impl::lookup_instance(
    const stereo_msgs::msg::dds_::DisparityImage_ & instance) THROW_ORB_EXCEPTIONS
{
    return DataReaderView_impl::lookup_instance(&instance);
}



const char * ::stereo_msgs::msg::dds_::DisparityImage_TypeSupport::metaDescriptor[] = {"<MetaData version=\"1.0.0\"><Module name=\"sensor_msgs\"><Module name=\"msg\"><Module name=\"dds_\"><Struct name=\"RegionOfInterest_\">",
"<Member name=\"x_offset_\"><ULong/></Member><Member name=\"y_offset_\"><ULong/></Member><Member name=\"height_\">",
"<ULong/></Member><Member name=\"width_\"><ULong/></Member><Member name=\"do_rectify_\"><Boolean/></Member>",
"</Struct></Module></Module></Module><Module name=\"DDS\"><Struct name=\"Time_t\"><Member name=\"sec\">",
"<Long/></Member><Member name=\"nanosec\"><ULong/></Member></Struct></Module><Module name=\"std_msgs\">",
"<Module name=\"msg\"><Module name=\"dds_\"><Struct name=\"Header_\"><Member name=\"stamp_\"><Type name=\"::DDS::Time_t\"/>",
"</Member><Member name=\"frame_id_\"><String/></Member></Struct></Module></Module></Module><Module name=\"sensor_msgs\">",
"<Module name=\"msg\"><Module name=\"dds_\"><Struct name=\"Image_\"><Member name=\"header_\"><Type name=\"::std_msgs::msg::dds_::Header_\"/>",
"</Member><Member name=\"height_\"><ULong/></Member><Member name=\"width_\"><ULong/></Member><Member name=\"encoding_\">",
"<String/></Member><Member name=\"is_bigendian_\"><Octet/></Member><Member name=\"step_\"><ULong/></Member>",
"<Member name=\"data_\"><Sequence><Octet/></Sequence></Member></Struct></Module></Module></Module><Module name=\"stereo_msgs\">",
"<Module name=\"msg\"><Module name=\"dds_\"><Struct name=\"DisparityImage_\"><Member name=\"header_\">",
"<Type name=\"::std_msgs::msg::dds_::Header_\"/></Member><Member name=\"image_\"><Type name=\"::sensor_msgs::msg::dds_::Image_\"/>",
"</Member><Member name=\"f_\"><Float/></Member><Member name=\"t_\"><Float/></Member><Member name=\"valid_window_\">",
"<Type name=\"::sensor_msgs::msg::dds_::RegionOfInterest_\"/></Member><Member name=\"min_disparity_\">",
"<Float/></Member><Member name=\"max_disparity_\"><Float/></Member><Member name=\"delta_d_\"><Float/></Member>",
"</Struct></Module></Module></Module></MetaData>"};
const ::DDS::ULong (::stereo_msgs::msg::dds_::DisparityImage_TypeSupport::metaDescriptorArrLength) = 17;
