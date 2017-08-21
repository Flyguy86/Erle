#include "MapMetaData_SplDcps.h"
#include "ccpp_MapMetaData_.h"
#include "dds_type_aliases.h"

const char *
__nav_msgs_msg_dds__MapMetaData___name(void)
{
    return (const char*)"nav_msgs::msg::dds_::MapMetaData_";
}

const char *
__nav_msgs_msg_dds__MapMetaData___keys(void)
{
    return (const char*)"";
}

#include <v_kernel.h>
#include <v_topic.h>
#include <os_stdlib.h>
#include <string.h>
#include <os_report.h>

c_bool
__nav_msgs_msg_dds__MapMetaData___copyIn(
    c_base base,
    struct ::nav_msgs::msg::dds_::MapMetaData_ *from,
    struct _nav_msgs_msg_dds__MapMetaData_ *to)
{
    c_bool result = OS_C_TRUE;
    (void) base;

    if(result){
        extern c_bool __DDS_Time_t__copyIn(c_base, ::DDS::Time_t *, _DDS_Time_t *);
        result = __DDS_Time_t__copyIn(base, &from->map_load_time_, &to->map_load_time_);
    }
    to->resolution_ = (c_float)from->resolution_;
    to->width_ = (c_ulong)from->width_;
    to->height_ = (c_ulong)from->height_;
    if(result){
        extern c_bool __geometry_msgs_msg_dds__Pose___copyIn(c_base, ::geometry_msgs::msg::dds_::Pose_ *, _geometry_msgs_msg_dds__Pose_ *);
        result = __geometry_msgs_msg_dds__Pose___copyIn(base, &from->origin_, &to->origin_);
    }
    return result;
}

void
__nav_msgs_msg_dds__MapMetaData___copyOut(
    void *_from,
    void *_to)
{
    struct _nav_msgs_msg_dds__MapMetaData_ *from = (struct _nav_msgs_msg_dds__MapMetaData_ *)_from;
    struct ::nav_msgs::msg::dds_::MapMetaData_ *to = (struct ::nav_msgs::msg::dds_::MapMetaData_ *)_to;
    {
        extern void __DDS_Time_t__copyOut(void *, void *);
        __DDS_Time_t__copyOut((void *)&from->map_load_time_, (void *)&to->map_load_time_);
    }
    to->resolution_ = (::DDS::Float)from->resolution_;
    to->width_ = (::DDS::ULong)from->width_;
    to->height_ = (::DDS::ULong)from->height_;
    {
        extern void __geometry_msgs_msg_dds__Pose___copyOut(void *, void *);
        __geometry_msgs_msg_dds__Pose___copyOut((void *)&from->origin_, (void *)&to->origin_);
    }
}

