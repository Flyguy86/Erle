#include "Trigger_Request_SplDcps.h"
#include "ccpp_Trigger_Request_.h"
#include "dds_type_aliases.h"

const char *
__std_srvs_srv_dds__Trigger_Request___name(void)
{
    return (const char*)"std_srvs::srv::dds_::Trigger_Request_";
}

const char *
__std_srvs_srv_dds__Trigger_Request___keys(void)
{
    return (const char*)"";
}

#include <v_kernel.h>
#include <v_topic.h>
#include <os_stdlib.h>
#include <string.h>
#include <os_report.h>

c_bool
__std_srvs_srv_dds__Trigger_Request___copyIn(
    c_base base,
    struct ::std_srvs::srv::dds_::Trigger_Request_ *from,
    struct _std_srvs_srv_dds__Trigger_Request_ *to)
{
    c_bool result = OS_C_TRUE;
    (void) base;

    to->dummy = (c_bool)from->dummy;
    return result;
}

void
__std_srvs_srv_dds__Trigger_Request___copyOut(
    void *_from,
    void *_to)
{
    struct _std_srvs_srv_dds__Trigger_Request_ *from = (struct _std_srvs_srv_dds__Trigger_Request_ *)_from;
    struct ::std_srvs::srv::dds_::Trigger_Request_ *to = (struct ::std_srvs::srv::dds_::Trigger_Request_ *)_to;
    to->dummy = (::DDS::Boolean)(from->dummy != 0);
}

