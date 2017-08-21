#include "LargeFixed_SplDcps.h"
#include "ccpp_LargeFixed_.h"
#include "dds_type_aliases.h"

const char *
__example_interfaces_msg_dds__LargeFixed___name(void)
{
    return (const char*)"example_interfaces::msg::dds_::LargeFixed_";
}

const char *
__example_interfaces_msg_dds__LargeFixed___keys(void)
{
    return (const char*)"";
}

#include <v_kernel.h>
#include <v_topic.h>
#include <os_stdlib.h>
#include <string.h>
#include <os_report.h>

c_bool
__example_interfaces_msg_dds__example_interfaces__LargeFixed__long_array_255__copyIn(
    c_base base,
    ::example_interfaces::msg::dds_::example_interfaces__LargeFixed__long_array_255 *from,
    _example_interfaces_msg_dds__example_interfaces__LargeFixed__long_array_255 *to)
{
    c_bool result = OS_C_TRUE;
    (void) base;

    memcpy (to, *from, sizeof (*to));
    return result;
}

c_bool
__example_interfaces_msg_dds__LargeFixed___copyIn(
    c_base base,
    struct ::example_interfaces::msg::dds_::LargeFixed_ *from,
    struct _example_interfaces_msg_dds__LargeFixed_ *to)
{
    c_bool result = OS_C_TRUE;
    (void) base;

    if(result){
        extern c_bool __example_interfaces_msg_dds__example_interfaces__LargeFixed__long_array_255__copyIn(c_base, ::example_interfaces::msg::dds_::example_interfaces__LargeFixed__long_array_255 *, _example_interfaces_msg_dds__example_interfaces__LargeFixed__long_array_255 *);
        result = __example_interfaces_msg_dds__example_interfaces__LargeFixed__long_array_255__copyIn(base, &from->data_, &to->data_);
    }
    return result;
}

void
__example_interfaces_msg_dds__example_interfaces__LargeFixed__long_array_255__copyOut(
    void *_from,
    void *_to)
{
    _example_interfaces_msg_dds__example_interfaces__LargeFixed__long_array_255 *from = (_example_interfaces_msg_dds__example_interfaces__LargeFixed__long_array_255 *)_from;
    ::example_interfaces::msg::dds_::example_interfaces__LargeFixed__long_array_255 *to = (::example_interfaces::msg::dds_::example_interfaces__LargeFixed__long_array_255 *)_to;
    memcpy (*to, from, sizeof (*from));
}

void
__example_interfaces_msg_dds__LargeFixed___copyOut(
    void *_from,
    void *_to)
{
    struct _example_interfaces_msg_dds__LargeFixed_ *from = (struct _example_interfaces_msg_dds__LargeFixed_ *)_from;
    struct ::example_interfaces::msg::dds_::LargeFixed_ *to = (struct ::example_interfaces::msg::dds_::LargeFixed_ *)_to;
    {
        extern void __example_interfaces_msg_dds__example_interfaces__LargeFixed__long_array_255__copyOut(void *, void *);
        __example_interfaces_msg_dds__example_interfaces__LargeFixed__long_array_255__copyOut((void *)&from->data_, (void *)&to->data_);
    }
}

