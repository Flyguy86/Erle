#include "Trigger_Response_SplDcps.h"
#include "ccpp_Trigger_Response_.h"
#include "dds_type_aliases.h"

const char *
__std_srvs_srv_dds__Trigger_Response___name(void)
{
    return (const char*)"std_srvs::srv::dds_::Trigger_Response_";
}

const char *
__std_srvs_srv_dds__Trigger_Response___keys(void)
{
    return (const char*)"";
}

#include <v_kernel.h>
#include <v_topic.h>
#include <os_stdlib.h>
#include <string.h>
#include <os_report.h>

c_bool
__std_srvs_srv_dds__Trigger_Response___copyIn(
    c_base base,
    struct ::std_srvs::srv::dds_::Trigger_Response_ *from,
    struct _std_srvs_srv_dds__Trigger_Response_ *to)
{
    c_bool result = OS_C_TRUE;
    (void) base;

    to->success_ = (c_bool)from->success_;
#ifdef OSPL_BOUNDS_CHECK
    if(from->message_){
        to->message_ = c_stringNew(base, from->message_);
    } else {
        OS_REPORT (OS_ERROR, "copyIn", 0,"Member 'std_srvs::srv::dds_::Trigger_Response_.message_' of type 'c_string' is NULL.");
        result = OS_C_FALSE;
    }
#else
    to->message_ = c_stringNew(base, from->message_);
#endif
    return result;
}

void
__std_srvs_srv_dds__Trigger_Response___copyOut(
    void *_from,
    void *_to)
{
    struct _std_srvs_srv_dds__Trigger_Response_ *from = (struct _std_srvs_srv_dds__Trigger_Response_ *)_from;
    struct ::std_srvs::srv::dds_::Trigger_Response_ *to = (struct ::std_srvs::srv::dds_::Trigger_Response_ *)_to;
    to->success_ = (::DDS::Boolean)(from->success_ != 0);
    to->message_ = DDS::string_dup(from->message_ ? from->message_ : "");
}

