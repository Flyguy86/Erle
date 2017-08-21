#include "SetCameraInfo_Request_SplDcps.h"
#include "ccpp_SetCameraInfo_Request_.h"
#include "dds_type_aliases.h"

const char *
__sensor_msgs_srv_dds__SetCameraInfo_Request___name(void)
{
    return (const char*)"sensor_msgs::srv::dds_::SetCameraInfo_Request_";
}

const char *
__sensor_msgs_srv_dds__SetCameraInfo_Request___keys(void)
{
    return (const char*)"";
}

#include <v_kernel.h>
#include <v_topic.h>
#include <os_stdlib.h>
#include <string.h>
#include <os_report.h>

c_bool
__sensor_msgs_srv_dds__SetCameraInfo_Request___copyIn(
    c_base base,
    struct ::sensor_msgs::srv::dds_::SetCameraInfo_Request_ *from,
    struct _sensor_msgs_srv_dds__SetCameraInfo_Request_ *to)
{
    c_bool result = OS_C_TRUE;
    (void) base;

    if(result){
        extern c_bool __sensor_msgs_msg_dds__CameraInfo___copyIn(c_base, ::sensor_msgs::msg::dds_::CameraInfo_ *, _sensor_msgs_msg_dds__CameraInfo_ *);
        result = __sensor_msgs_msg_dds__CameraInfo___copyIn(base, &from->camera_info_, &to->camera_info_);
    }
    return result;
}

void
__sensor_msgs_srv_dds__SetCameraInfo_Request___copyOut(
    void *_from,
    void *_to)
{
    struct _sensor_msgs_srv_dds__SetCameraInfo_Request_ *from = (struct _sensor_msgs_srv_dds__SetCameraInfo_Request_ *)_from;
    struct ::sensor_msgs::srv::dds_::SetCameraInfo_Request_ *to = (struct ::sensor_msgs::srv::dds_::SetCameraInfo_Request_ *)_to;
    {
        extern void __sensor_msgs_msg_dds__CameraInfo___copyOut(void *, void *);
        __sensor_msgs_msg_dds__CameraInfo___copyOut((void *)&from->camera_info_, (void *)&to->camera_info_);
    }
}

