#include "Int16MultiArray_SplDcps.h"
#include "ccpp_Int16MultiArray_.h"
#include "dds_type_aliases.h"

const char *
__std_msgs_msg_dds__Int16MultiArray___name(void)
{
    return (const char*)"std_msgs::msg::dds_::Int16MultiArray_";
}

const char *
__std_msgs_msg_dds__Int16MultiArray___keys(void)
{
    return (const char*)"";
}

#include <v_kernel.h>
#include <v_topic.h>
#include <os_stdlib.h>
#include <string.h>
#include <os_report.h>

c_bool
__std_msgs_msg_dds__Int16MultiArray___copyIn(
    c_base base,
    struct ::std_msgs::msg::dds_::Int16MultiArray_ *from,
    struct _std_msgs_msg_dds__Int16MultiArray_ *to)
{
    c_bool result = OS_C_TRUE;
    (void) base;

    if(result){
        extern c_bool __std_msgs_msg_dds__MultiArrayLayout___copyIn(c_base, ::std_msgs::msg::dds_::MultiArrayLayout_ *, _std_msgs_msg_dds__MultiArrayLayout_ *);
        result = __std_msgs_msg_dds__MultiArrayLayout___copyIn(base, &from->layout_, &to->layout_);
    }
    {
/* Code generated by /home/erle/opensplice/src/tools/idlpp/code/idl_genCorbaCxxCopyin.c at line 774 */

        static c_type type0 = NULL;
        c_type subtype0;
        c_long length0;
        c_short *dest0;
        ::std_msgs::msg::dds_::Int16MultiArray_::_data__seq *src = &from->data_;

        if (type0 == NULL) {
            subtype0 = c_type(c_metaResolve (c_metaObject(base), "c_short"));
            type0 = c_metaSequenceTypeNew(c_metaObject(base),"C_SEQUENCE<c_short>",subtype0,0);
            c_free(subtype0);
        }
        length0 = (c_long)(*src).length();
#ifdef OSPL_BOUNDS_CHECK
         dest0 = (c_short *)c_newSequence(c_collectionType(type0),length0);
        {
        /* Code generated by /home/erle/opensplice/src/tools/idlpp/code/idl_genCorbaCxxCopyin.c at line 1873 */
                    c_short *buf0;
            buf0 = (c_short *)(*src).get_buffer();
            memcpy (dest0,buf0,length0* sizeof(*dest0));
        }
        to->data_ = (c_sequence)dest0;
#else
        dest0 = (c_short *)c_newSequence(c_collectionType(type0),length0);
        {
        /* Code generated by /home/erle/opensplice/src/tools/idlpp/code/idl_genCorbaCxxCopyin.c at line 1873 */
                    c_short *buf0;
            buf0 = (c_short *)(*src).get_buffer();
            memcpy (dest0,buf0,length0* sizeof(*dest0));
        }
        to->data_ = (c_sequence)dest0;
#endif
    }
    return result;
}

void
__std_msgs_msg_dds__Int16MultiArray___copyOut(
    void *_from,
    void *_to)
{
    struct _std_msgs_msg_dds__Int16MultiArray_ *from = (struct _std_msgs_msg_dds__Int16MultiArray_ *)_from;
    struct ::std_msgs::msg::dds_::Int16MultiArray_ *to = (struct ::std_msgs::msg::dds_::Int16MultiArray_ *)_to;
    {
        extern void __std_msgs_msg_dds__MultiArrayLayout___copyOut(void *, void *);
        __std_msgs_msg_dds__MultiArrayLayout___copyOut((void *)&from->layout_, (void *)&to->layout_);
    }
    {
        long size0;
        c_short *src0 = (c_short *)from->data_;
        ::std_msgs::msg::dds_::Int16MultiArray_::_data__seq *dst = &to->data_;

        size0 = c_arraySize(c_sequence(from->data_));
        to->data_.length(size0);
        {
            c_short *buf0;
            buf0 = (c_short *)(*dst).get_buffer();
            memcpy (buf0,src0,size0* sizeof(*buf0));
        }
    }
}

