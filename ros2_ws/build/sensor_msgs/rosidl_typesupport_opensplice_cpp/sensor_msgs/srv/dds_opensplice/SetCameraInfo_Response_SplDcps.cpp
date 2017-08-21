#include "SetCameraInfo_Response_SplDcps.h"
#include "ccpp_SetCameraInfo_Response_.h"
#include "dds_type_aliases.h"

const char *
__sensor_msgs_srv_dds__SetCameraInfo_Response___name(void)
{
    return (const char*)"sensor_msgs::srv::dds_::SetCameraInfo_Response_";
}

const char *
__sensor_msgs_srv_dds__SetCameraInfo_Response___keys(void)
{
    return (const char*)"";
}

#include <v_kernel.h>
#include <v_topic.h>
#include <os_stdlib.h>
#include <string.h>
#include <os_report.h>

c_bool
__sensor_msgs_srv_dds__SetCameraInfo_Response___copyIn(
    c_base base,
    struct ::sensor_msgs::srv::dds_::SetCameraInfo_Response_ *from,
    struct _sensor_msgs_srv_dds__SetCameraInfo_Response_ *to)
{
    c_bool result = OS_C_TRUE;
    (void) base;

    to->success_ = (c_bool)from->success_;
#ifdef OSPL_BOUNDS_CHECK
    if(from->status_message_){
        to->status_message_ = c_stringNew(base, from->status_message_);
    } else {
        OS_REPORT (OS_ERROR, "copyIn", 0,"Member 'sensor_msgs::srv::dds_::SetCameraInfo_Response_.status_message_' of type 'c_string' is NULL.");
        result = OS_C_FALSE;
    }
#else
    to->status_message_ = c_stringNew(base, from->status_message_);
#endif
    return result;
}

void
__sensor_msgs_srv_dds__SetCameraInfo_Response___copyOut(
    void *_from,
    void *_to)
{
    struct _sensor_msgs_srv_dds__SetCameraInfo_Response_ *from = (struct _sensor_msgs_srv_dds__SetCameraInfo_Response_ *)_from;
    struct ::sensor_msgs::srv::dds_::SetCameraInfo_Response_ *to = (struct ::sensor_msgs::srv::dds_::SetCameraInfo_Response_ *)_to;
    to->success_ = (::DDS::Boolean)(from->success_ != 0);
    to->status_message_ = DDS::string_dup(from->status_message_ ? from->status_message_ : "");
}

