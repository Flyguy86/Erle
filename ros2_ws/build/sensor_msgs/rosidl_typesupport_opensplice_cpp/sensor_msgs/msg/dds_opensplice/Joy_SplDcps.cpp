#include "Joy_SplDcps.h"
#include "ccpp_Joy_.h"
#include "dds_type_aliases.h"

const char *
__sensor_msgs_msg_dds__Joy___name(void)
{
    return (const char*)"sensor_msgs::msg::dds_::Joy_";
}

const char *
__sensor_msgs_msg_dds__Joy___keys(void)
{
    return (const char*)"";
}

#include <v_kernel.h>
#include <v_topic.h>
#include <os_stdlib.h>
#include <string.h>
#include <os_report.h>

c_bool
__sensor_msgs_msg_dds__Joy___copyIn(
    c_base base,
    struct ::sensor_msgs::msg::dds_::Joy_ *from,
    struct _sensor_msgs_msg_dds__Joy_ *to)
{
    c_bool result = OS_C_TRUE;
    (void) base;

    if(result){
        extern c_bool __std_msgs_msg_dds__Header___copyIn(c_base, ::std_msgs::msg::dds_::Header_ *, _std_msgs_msg_dds__Header_ *);
        result = __std_msgs_msg_dds__Header___copyIn(base, &from->header_, &to->header_);
    }
    {
/* Code generated by /home/erle/opensplice/src/tools/idlpp/code/idl_genCorbaCxxCopyin.c at line 774 */

        static c_type type0 = NULL;
        c_type subtype0;
        c_long length0;
        c_float *dest0;
        ::sensor_msgs::msg::dds_::Joy_::_axes__seq *src = &from->axes_;

        if (type0 == NULL) {
            subtype0 = c_type(c_metaResolve (c_metaObject(base), "c_float"));
            type0 = c_metaSequenceTypeNew(c_metaObject(base),"C_SEQUENCE<c_float>",subtype0,0);
            c_free(subtype0);
        }
        length0 = (c_long)(*src).length();
#ifdef OSPL_BOUNDS_CHECK
         dest0 = (c_float *)c_newSequence(c_collectionType(type0),length0);
        {
        /* Code generated by /home/erle/opensplice/src/tools/idlpp/code/idl_genCorbaCxxCopyin.c at line 1873 */
                    c_float *buf0;
            buf0 = (c_float *)(*src).get_buffer();
            memcpy (dest0,buf0,length0* sizeof(*dest0));
        }
        to->axes_ = (c_sequence)dest0;
#else
        dest0 = (c_float *)c_newSequence(c_collectionType(type0),length0);
        {
        /* Code generated by /home/erle/opensplice/src/tools/idlpp/code/idl_genCorbaCxxCopyin.c at line 1873 */
                    c_float *buf0;
            buf0 = (c_float *)(*src).get_buffer();
            memcpy (dest0,buf0,length0* sizeof(*dest0));
        }
        to->axes_ = (c_sequence)dest0;
#endif
    }
    {
/* Code generated by /home/erle/opensplice/src/tools/idlpp/code/idl_genCorbaCxxCopyin.c at line 774 */

        static c_type type0 = NULL;
        c_type subtype0;
        c_long length0;
        c_long *dest0;
        ::sensor_msgs::msg::dds_::Joy_::_buttons__seq *src = &from->buttons_;

        if (type0 == NULL) {
            subtype0 = c_type(c_metaResolve (c_metaObject(base), "c_long"));
            type0 = c_metaSequenceTypeNew(c_metaObject(base),"C_SEQUENCE<c_long>",subtype0,0);
            c_free(subtype0);
        }
        length0 = (c_long)(*src).length();
#ifdef OSPL_BOUNDS_CHECK
         dest0 = (c_long *)c_newSequence(c_collectionType(type0),length0);
        {
        /* Code generated by /home/erle/opensplice/src/tools/idlpp/code/idl_genCorbaCxxCopyin.c at line 1873 */
                    c_long *buf0;
            buf0 = (c_long *)(*src).get_buffer();
            memcpy (dest0,buf0,length0* sizeof(*dest0));
        }
        to->buttons_ = (c_sequence)dest0;
#else
        dest0 = (c_long *)c_newSequence(c_collectionType(type0),length0);
        {
        /* Code generated by /home/erle/opensplice/src/tools/idlpp/code/idl_genCorbaCxxCopyin.c at line 1873 */
                    c_long *buf0;
            buf0 = (c_long *)(*src).get_buffer();
            memcpy (dest0,buf0,length0* sizeof(*dest0));
        }
        to->buttons_ = (c_sequence)dest0;
#endif
    }
    return result;
}

void
__sensor_msgs_msg_dds__Joy___copyOut(
    void *_from,
    void *_to)
{
    struct _sensor_msgs_msg_dds__Joy_ *from = (struct _sensor_msgs_msg_dds__Joy_ *)_from;
    struct ::sensor_msgs::msg::dds_::Joy_ *to = (struct ::sensor_msgs::msg::dds_::Joy_ *)_to;
    {
        extern void __std_msgs_msg_dds__Header___copyOut(void *, void *);
        __std_msgs_msg_dds__Header___copyOut((void *)&from->header_, (void *)&to->header_);
    }
    {
        long size0;
        c_float *src0 = (c_float *)from->axes_;
        ::sensor_msgs::msg::dds_::Joy_::_axes__seq *dst = &to->axes_;

        size0 = c_arraySize(c_sequence(from->axes_));
        to->axes_.length(size0);
        {
            c_float *buf0;
            buf0 = (c_float *)(*dst).get_buffer();
            memcpy (buf0,src0,size0* sizeof(*buf0));
        }
    }
    {
        long size0;
        c_long *src0 = (c_long *)from->buttons_;
        ::sensor_msgs::msg::dds_::Joy_::_buttons__seq *dst = &to->buttons_;

        size0 = c_arraySize(c_sequence(from->buttons_));
        to->buttons_.length(size0);
        {
            c_long *buf0;
            buf0 = (c_long *)(*dst).get_buffer();
            memcpy (buf0,src0,size0* sizeof(*buf0));
        }
    }
}

