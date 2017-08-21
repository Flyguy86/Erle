#include "AddTwoInts_Response_SplDcps.h"
#include "ccpp_AddTwoInts_Response_.h"
#include "dds_type_aliases.h"

const char *
__example_interfaces_srv_dds__AddTwoInts_Response___name(void)
{
    return (const char*)"example_interfaces::srv::dds_::AddTwoInts_Response_";
}

const char *
__example_interfaces_srv_dds__AddTwoInts_Response___keys(void)
{
    return (const char*)"";
}

#include <v_kernel.h>
#include <v_topic.h>
#include <os_stdlib.h>
#include <string.h>
#include <os_report.h>

c_bool
__example_interfaces_srv_dds__AddTwoInts_Response___copyIn(
    c_base base,
    struct ::example_interfaces::srv::dds_::AddTwoInts_Response_ *from,
    struct _example_interfaces_srv_dds__AddTwoInts_Response_ *to)
{
    c_bool result = OS_C_TRUE;
    (void) base;

    to->sum_ = (c_longlong)from->sum_;
    return result;
}

void
__example_interfaces_srv_dds__AddTwoInts_Response___copyOut(
    void *_from,
    void *_to)
{
    struct _example_interfaces_srv_dds__AddTwoInts_Response_ *from = (struct _example_interfaces_srv_dds__AddTwoInts_Response_ *)_from;
    struct ::example_interfaces::srv::dds_::AddTwoInts_Response_ *to = (struct ::example_interfaces::srv::dds_::AddTwoInts_Response_ *)_to;
    to->sum_ = (::DDS::LongLong)from->sum_;
}

