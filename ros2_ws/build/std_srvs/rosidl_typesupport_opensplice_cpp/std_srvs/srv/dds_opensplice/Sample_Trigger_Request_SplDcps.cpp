#include "Sample_Trigger_Request_SplDcps.h"
#include "ccpp_Sample_Trigger_Request_.h"
#include "dds_type_aliases.h"

const char *
__std_srvs_srv_dds__Sample_Trigger_Request___name(void)
{
    return (const char*)"std_srvs::srv::dds_::Sample_Trigger_Request_";
}

const char *
__std_srvs_srv_dds__Sample_Trigger_Request___keys(void)
{
    return (const char*)"";
}

#include <v_kernel.h>
#include <v_topic.h>
#include <os_stdlib.h>
#include <string.h>
#include <os_report.h>

c_bool
__std_srvs_srv_dds__Sample_Trigger_Request___copyIn(
    c_base base,
    struct ::std_srvs::srv::dds_::Sample_Trigger_Request_ *from,
    struct _std_srvs_srv_dds__Sample_Trigger_Request_ *to)
{
    c_bool result = OS_C_TRUE;
    (void) base;

    to->client_guid_0_ = (c_ulonglong)from->client_guid_0_;
    to->client_guid_1_ = (c_ulonglong)from->client_guid_1_;
    to->sequence_number_ = (c_longlong)from->sequence_number_;
    if(result){
        extern c_bool __std_srvs_srv_dds__Trigger_Request___copyIn(c_base, ::std_srvs::srv::dds_::Trigger_Request_ *, _std_srvs_srv_dds__Trigger_Request_ *);
        result = __std_srvs_srv_dds__Trigger_Request___copyIn(base, &from->request_, &to->request_);
    }
    return result;
}

void
__std_srvs_srv_dds__Sample_Trigger_Request___copyOut(
    void *_from,
    void *_to)
{
    struct _std_srvs_srv_dds__Sample_Trigger_Request_ *from = (struct _std_srvs_srv_dds__Sample_Trigger_Request_ *)_from;
    struct ::std_srvs::srv::dds_::Sample_Trigger_Request_ *to = (struct ::std_srvs::srv::dds_::Sample_Trigger_Request_ *)_to;
    to->client_guid_0_ = (::DDS::ULongLong)from->client_guid_0_;
    to->client_guid_1_ = (::DDS::ULongLong)from->client_guid_1_;
    to->sequence_number_ = (::DDS::LongLong)from->sequence_number_;
    {
        extern void __std_srvs_srv_dds__Trigger_Request___copyOut(void *, void *);
        __std_srvs_srv_dds__Trigger_Request___copyOut((void *)&from->request_, (void *)&to->request_);
    }
}

