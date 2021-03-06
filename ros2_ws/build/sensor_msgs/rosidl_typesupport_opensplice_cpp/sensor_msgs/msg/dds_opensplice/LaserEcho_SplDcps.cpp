#include "LaserEcho_SplDcps.h"
#include "ccpp_LaserEcho_.h"
#include "dds_type_aliases.h"

const char *
__sensor_msgs_msg_dds__LaserEcho___name(void)
{
    return (const char*)"sensor_msgs::msg::dds_::LaserEcho_";
}

const char *
__sensor_msgs_msg_dds__LaserEcho___keys(void)
{
    return (const char*)"";
}

#include <v_kernel.h>
#include <v_topic.h>
#include <os_stdlib.h>
#include <string.h>
#include <os_report.h>

c_bool
__sensor_msgs_msg_dds__LaserEcho___copyIn(
    c_base base,
    struct ::sensor_msgs::msg::dds_::LaserEcho_ *from,
    struct _sensor_msgs_msg_dds__LaserEcho_ *to)
{
    c_bool result = OS_C_TRUE;
    (void) base;

    {
/* Code generated by /home/erle/opensplice/src/tools/idlpp/code/idl_genCorbaCxxCopyin.c at line 774 */

        static c_type type0 = NULL;
        c_type subtype0;
        c_long length0;
        c_float *dest0;
        ::sensor_msgs::msg::dds_::LaserEcho_::_echoes__seq *src = &from->echoes_;

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
        to->echoes_ = (c_sequence)dest0;
#else
        dest0 = (c_float *)c_newSequence(c_collectionType(type0),length0);
        {
        /* Code generated by /home/erle/opensplice/src/tools/idlpp/code/idl_genCorbaCxxCopyin.c at line 1873 */
                    c_float *buf0;
            buf0 = (c_float *)(*src).get_buffer();
            memcpy (dest0,buf0,length0* sizeof(*dest0));
        }
        to->echoes_ = (c_sequence)dest0;
#endif
    }
    return result;
}

void
__sensor_msgs_msg_dds__LaserEcho___copyOut(
    void *_from,
    void *_to)
{
    struct _sensor_msgs_msg_dds__LaserEcho_ *from = (struct _sensor_msgs_msg_dds__LaserEcho_ *)_from;
    struct ::sensor_msgs::msg::dds_::LaserEcho_ *to = (struct ::sensor_msgs::msg::dds_::LaserEcho_ *)_to;
    {
        long size0;
        c_float *src0 = (c_float *)from->echoes_;
        ::sensor_msgs::msg::dds_::LaserEcho_::_echoes__seq *dst = &to->echoes_;

        size0 = c_arraySize(c_sequence(from->echoes_));
        to->echoes_.length(size0);
        {
            c_float *buf0;
            buf0 = (c_float *)(*dst).get_buffer();
            memcpy (buf0,src0,size0* sizeof(*buf0));
        }
    }
}

