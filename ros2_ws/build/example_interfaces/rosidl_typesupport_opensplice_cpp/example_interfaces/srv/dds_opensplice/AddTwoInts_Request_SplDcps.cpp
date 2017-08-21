#include "AddTwoInts_Request_SplDcps.h"
#include "ccpp_AddTwoInts_Request_.h"
#include "dds_type_aliases.h"

const char *
__example_interfaces_srv_dds__AddTwoInts_Request___name(void)
{
    return (const char*)"example_interfaces::srv::dds_::AddTwoInts_Request_";
}

const char *
__example_interfaces_srv_dds__AddTwoInts_Request___keys(void)
{
    return (const char*)"";
}

#include <v_kernel.h>
#include <v_topic.h>
#include <os_stdlib.h>
#include <string.h>
#include <os_report.h>

c_bool
__example_interfaces_srv_dds__AddTwoInts_Request___copyIn(
    c_base base,
    struct ::example_interfaces::srv::dds_::AddTwoInts_Request_ *from,
    struct _example_interfaces_srv_dds__AddTwoInts_Request_ *to)
{
    c_bool result = OS_C_TRUE;
    (void) base;

    to->a_ = (c_longlong)from->a_;
    to->b_ = (c_longlong)from->b_;
    return result;
}

void
__example_interfaces_srv_dds__AddTwoInts_Request___copyOut(
    void *_from,
    void *_to)
{
    struct _example_interfaces_srv_dds__AddTwoInts_Request_ *from = (struct _example_interfaces_srv_dds__AddTwoInts_Request_ *)_from;
    struct ::example_interfaces::srv::dds_::AddTwoInts_Request_ *to = (struct ::example_interfaces::srv::dds_::AddTwoInts_Request_ *)_to;
    to->a_ = (::DDS::LongLong)from->a_;
    to->b_ = (::DDS::LongLong)from->b_;
}

