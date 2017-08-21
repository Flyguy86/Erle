#include "TimeReference_SplDcps.h"
#include "ccpp_TimeReference_.h"
#include "dds_type_aliases.h"

const char *
__sensor_msgs_msg_dds__TimeReference___name(void)
{
    return (const char*)"sensor_msgs::msg::dds_::TimeReference_";
}

const char *
__sensor_msgs_msg_dds__TimeReference___keys(void)
{
    return (const char*)"";
}

#include <v_kernel.h>
#include <v_topic.h>
#include <os_stdlib.h>
#include <string.h>
#include <os_report.h>

c_bool
__sensor_msgs_msg_dds__TimeReference___copyIn(
    c_base base,
    struct ::sensor_msgs::msg::dds_::TimeReference_ *from,
    struct _sensor_msgs_msg_dds__TimeReference_ *to)
{
    c_bool result = OS_C_TRUE;
    (void) base;

    if(result){
        extern c_bool __std_msgs_msg_dds__Header___copyIn(c_base, ::std_msgs::msg::dds_::Header_ *, _std_msgs_msg_dds__Header_ *);
        result = __std_msgs_msg_dds__Header___copyIn(base, &from->header_, &to->header_);
    }
    if(result){
        extern c_bool __DDS_Time_t__copyIn(c_base, ::DDS::Time_t *, _DDS_Time_t *);
        result = __DDS_Time_t__copyIn(base, &from->time_ref_, &to->time_ref_);
    }
#ifdef OSPL_BOUNDS_CHECK
    if(from->source_){
        to->source_ = c_stringNew(base, from->source_);
    } else {
        OS_REPORT (OS_ERROR, "copyIn", 0,"Member 'sensor_msgs::msg::dds_::TimeReference_.source_' of type 'c_string' is NULL.");
        result = OS_C_FALSE;
    }
#else
    to->source_ = c_stringNew(base, from->source_);
#endif
    return result;
}

void
__sensor_msgs_msg_dds__TimeReference___copyOut(
    void *_from,
    void *_to)
{
    struct _sensor_msgs_msg_dds__TimeReference_ *from = (struct _sensor_msgs_msg_dds__TimeReference_ *)_from;
    struct ::sensor_msgs::msg::dds_::TimeReference_ *to = (struct ::sensor_msgs::msg::dds_::TimeReference_ *)_to;
    {
        extern void __std_msgs_msg_dds__Header___copyOut(void *, void *);
        __std_msgs_msg_dds__Header___copyOut((void *)&from->header_, (void *)&to->header_);
    }
    {
        extern void __DDS_Time_t__copyOut(void *, void *);
        __DDS_Time_t__copyOut((void *)&from->time_ref_, (void *)&to->time_ref_);
    }
    to->source_ = DDS::string_dup(from->source_ ? from->source_ : "");
}

