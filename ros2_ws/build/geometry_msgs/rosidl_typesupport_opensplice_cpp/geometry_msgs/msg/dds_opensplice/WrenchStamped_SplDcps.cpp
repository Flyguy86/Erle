#include "WrenchStamped_SplDcps.h"
#include "ccpp_WrenchStamped_.h"
#include "dds_type_aliases.h"

const char *
__geometry_msgs_msg_dds__WrenchStamped___name(void)
{
    return (const char*)"geometry_msgs::msg::dds_::WrenchStamped_";
}

const char *
__geometry_msgs_msg_dds__WrenchStamped___keys(void)
{
    return (const char*)"";
}

#include <v_kernel.h>
#include <v_topic.h>
#include <os_stdlib.h>
#include <string.h>
#include <os_report.h>

c_bool
__geometry_msgs_msg_dds__WrenchStamped___copyIn(
    c_base base,
    struct ::geometry_msgs::msg::dds_::WrenchStamped_ *from,
    struct _geometry_msgs_msg_dds__WrenchStamped_ *to)
{
    c_bool result = OS_C_TRUE;
    (void) base;

    if(result){
        extern c_bool __std_msgs_msg_dds__Header___copyIn(c_base, ::std_msgs::msg::dds_::Header_ *, _std_msgs_msg_dds__Header_ *);
        result = __std_msgs_msg_dds__Header___copyIn(base, &from->header_, &to->header_);
    }
    if(result){
        extern c_bool __geometry_msgs_msg_dds__Wrench___copyIn(c_base, ::geometry_msgs::msg::dds_::Wrench_ *, _geometry_msgs_msg_dds__Wrench_ *);
        result = __geometry_msgs_msg_dds__Wrench___copyIn(base, &from->wrench_, &to->wrench_);
    }
    return result;
}

void
__geometry_msgs_msg_dds__WrenchStamped___copyOut(
    void *_from,
    void *_to)
{
    struct _geometry_msgs_msg_dds__WrenchStamped_ *from = (struct _geometry_msgs_msg_dds__WrenchStamped_ *)_from;
    struct ::geometry_msgs::msg::dds_::WrenchStamped_ *to = (struct ::geometry_msgs::msg::dds_::WrenchStamped_ *)_to;
    {
        extern void __std_msgs_msg_dds__Header___copyOut(void *, void *);
        __std_msgs_msg_dds__Header___copyOut((void *)&from->header_, (void *)&to->header_);
    }
    {
        extern void __geometry_msgs_msg_dds__Wrench___copyOut(void *, void *);
        __geometry_msgs_msg_dds__Wrench___copyOut((void *)&from->wrench_, (void *)&to->wrench_);
    }
}

