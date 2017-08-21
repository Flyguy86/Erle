#include "PolygonStamped_SplDcps.h"
#include "ccpp_PolygonStamped_.h"
#include "dds_type_aliases.h"

const char *
__geometry_msgs_msg_dds__PolygonStamped___name(void)
{
    return (const char*)"geometry_msgs::msg::dds_::PolygonStamped_";
}

const char *
__geometry_msgs_msg_dds__PolygonStamped___keys(void)
{
    return (const char*)"";
}

#include <v_kernel.h>
#include <v_topic.h>
#include <os_stdlib.h>
#include <string.h>
#include <os_report.h>

c_bool
__geometry_msgs_msg_dds__PolygonStamped___copyIn(
    c_base base,
    struct ::geometry_msgs::msg::dds_::PolygonStamped_ *from,
    struct _geometry_msgs_msg_dds__PolygonStamped_ *to)
{
    c_bool result = OS_C_TRUE;
    (void) base;

    if(result){
        extern c_bool __std_msgs_msg_dds__Header___copyIn(c_base, ::std_msgs::msg::dds_::Header_ *, _std_msgs_msg_dds__Header_ *);
        result = __std_msgs_msg_dds__Header___copyIn(base, &from->header_, &to->header_);
    }
    if(result){
        extern c_bool __geometry_msgs_msg_dds__Polygon___copyIn(c_base, ::geometry_msgs::msg::dds_::Polygon_ *, _geometry_msgs_msg_dds__Polygon_ *);
        result = __geometry_msgs_msg_dds__Polygon___copyIn(base, &from->polygon_, &to->polygon_);
    }
    return result;
}

void
__geometry_msgs_msg_dds__PolygonStamped___copyOut(
    void *_from,
    void *_to)
{
    struct _geometry_msgs_msg_dds__PolygonStamped_ *from = (struct _geometry_msgs_msg_dds__PolygonStamped_ *)_from;
    struct ::geometry_msgs::msg::dds_::PolygonStamped_ *to = (struct ::geometry_msgs::msg::dds_::PolygonStamped_ *)_to;
    {
        extern void __std_msgs_msg_dds__Header___copyOut(void *, void *);
        __std_msgs_msg_dds__Header___copyOut((void *)&from->header_, (void *)&to->header_);
    }
    {
        extern void __geometry_msgs_msg_dds__Polygon___copyOut(void *, void *);
        __geometry_msgs_msg_dds__Polygon___copyOut((void *)&from->polygon_, (void *)&to->polygon_);
    }
}

