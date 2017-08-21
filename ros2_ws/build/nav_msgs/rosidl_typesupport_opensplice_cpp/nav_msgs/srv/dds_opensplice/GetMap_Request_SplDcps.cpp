#include "GetMap_Request_SplDcps.h"
#include "ccpp_GetMap_Request_.h"
#include "dds_type_aliases.h"

const char *
__nav_msgs_srv_dds__GetMap_Request___name(void)
{
    return (const char*)"nav_msgs::srv::dds_::GetMap_Request_";
}

const char *
__nav_msgs_srv_dds__GetMap_Request___keys(void)
{
    return (const char*)"";
}

#include <v_kernel.h>
#include <v_topic.h>
#include <os_stdlib.h>
#include <string.h>
#include <os_report.h>

c_bool
__nav_msgs_srv_dds__GetMap_Request___copyIn(
    c_base base,
    struct ::nav_msgs::srv::dds_::GetMap_Request_ *from,
    struct _nav_msgs_srv_dds__GetMap_Request_ *to)
{
    c_bool result = OS_C_TRUE;
    (void) base;

    to->dummy = (c_bool)from->dummy;
    return result;
}

void
__nav_msgs_srv_dds__GetMap_Request___copyOut(
    void *_from,
    void *_to)
{
    struct _nav_msgs_srv_dds__GetMap_Request_ *from = (struct _nav_msgs_srv_dds__GetMap_Request_ *)_from;
    struct ::nav_msgs::srv::dds_::GetMap_Request_ *to = (struct ::nav_msgs::srv::dds_::GetMap_Request_ *)_to;
    to->dummy = (::DDS::Boolean)(from->dummy != 0);
}

