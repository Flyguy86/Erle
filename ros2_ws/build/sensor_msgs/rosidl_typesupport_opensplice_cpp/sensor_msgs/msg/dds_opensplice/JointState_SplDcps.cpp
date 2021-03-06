#include "JointState_SplDcps.h"
#include "ccpp_JointState_.h"
#include "dds_type_aliases.h"

const char *
__sensor_msgs_msg_dds__JointState___name(void)
{
    return (const char*)"sensor_msgs::msg::dds_::JointState_";
}

const char *
__sensor_msgs_msg_dds__JointState___keys(void)
{
    return (const char*)"";
}

#include <v_kernel.h>
#include <v_topic.h>
#include <os_stdlib.h>
#include <string.h>
#include <os_report.h>

c_bool
__sensor_msgs_msg_dds__JointState___copyIn(
    c_base base,
    struct ::sensor_msgs::msg::dds_::JointState_ *from,
    struct _sensor_msgs_msg_dds__JointState_ *to)
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
        c_string *dest0;
        ::sensor_msgs::msg::dds_::JointState_::_name__seq *src = &from->name_;

        if (type0 == NULL) {
            subtype0 = c_type(c_metaResolve (c_metaObject(base), "c_string"));
            type0 = c_metaSequenceTypeNew(c_metaObject(base),"C_SEQUENCE<c_string>",subtype0,0);
            c_free(subtype0);
        }
        length0 = (c_long)(*src).length();
#ifdef OSPL_BOUNDS_CHECK
         dest0 = (c_string *)c_newSequence(c_collectionType(type0),length0);
        {
        /* Code generated by /home/erle/opensplice/src/tools/idlpp/code/idl_genCorbaCxxCopyin.c at line 1928 */
            unsigned int i0;
            for (i0 = 0; (i0 < (unsigned int)length0) && result; i0++) {
#ifdef OSPL_BOUNDS_CHECK
                if((*src)[i0]){
                    dest0[i0] = c_stringNew(base, (*src)[i0]);
                } else {
                    OS_REPORT (OS_ERROR, "copyIn", 0,"Element of 'sensor_msgs::msg::dds_::JointState_.*src' of type 'c_string' is NULL.");
                    result = OS_C_FALSE;
                }
#else
                dest0[i0] = c_stringNew(base, (*src)[i0]);
#endif
            }
        }
        to->name_ = (c_sequence)dest0;
#else
        dest0 = (c_string *)c_newSequence(c_collectionType(type0),length0);
        {
        /* Code generated by /home/erle/opensplice/src/tools/idlpp/code/idl_genCorbaCxxCopyin.c at line 1928 */
            unsigned int i0;
            for (i0 = 0; (i0 < (unsigned int)length0) && result; i0++) {
#ifdef OSPL_BOUNDS_CHECK
                if((*src)[i0]){
                    dest0[i0] = c_stringNew(base, (*src)[i0]);
                } else {
                    OS_REPORT (OS_ERROR, "copyIn", 0,"Element of 'sensor_msgs::msg::dds_::JointState_.*src' of type 'c_string' is NULL.");
                    result = OS_C_FALSE;
                }
#else
                dest0[i0] = c_stringNew(base, (*src)[i0]);
#endif
            }
        }
        to->name_ = (c_sequence)dest0;
#endif
    }
    {
/* Code generated by /home/erle/opensplice/src/tools/idlpp/code/idl_genCorbaCxxCopyin.c at line 774 */

        static c_type type0 = NULL;
        c_type subtype0;
        c_long length0;
        c_double *dest0;
        ::sensor_msgs::msg::dds_::JointState_::_position__seq *src = &from->position_;

        if (type0 == NULL) {
            subtype0 = c_type(c_metaResolve (c_metaObject(base), "c_double"));
            type0 = c_metaSequenceTypeNew(c_metaObject(base),"C_SEQUENCE<c_double>",subtype0,0);
            c_free(subtype0);
        }
        length0 = (c_long)(*src).length();
#ifdef OSPL_BOUNDS_CHECK
         dest0 = (c_double *)c_newSequence(c_collectionType(type0),length0);
        {
        /* Code generated by /home/erle/opensplice/src/tools/idlpp/code/idl_genCorbaCxxCopyin.c at line 1873 */
                    c_double *buf0;
            buf0 = (c_double *)(*src).get_buffer();
            memcpy (dest0,buf0,length0* sizeof(*dest0));
        }
        to->position_ = (c_sequence)dest0;
#else
        dest0 = (c_double *)c_newSequence(c_collectionType(type0),length0);
        {
        /* Code generated by /home/erle/opensplice/src/tools/idlpp/code/idl_genCorbaCxxCopyin.c at line 1873 */
                    c_double *buf0;
            buf0 = (c_double *)(*src).get_buffer();
            memcpy (dest0,buf0,length0* sizeof(*dest0));
        }
        to->position_ = (c_sequence)dest0;
#endif
    }
    {
/* Code generated by /home/erle/opensplice/src/tools/idlpp/code/idl_genCorbaCxxCopyin.c at line 774 */

        static c_type type0 = NULL;
        c_type subtype0;
        c_long length0;
        c_double *dest0;
        ::sensor_msgs::msg::dds_::JointState_::_velocity__seq *src = &from->velocity_;

        if (type0 == NULL) {
            subtype0 = c_type(c_metaResolve (c_metaObject(base), "c_double"));
            type0 = c_metaSequenceTypeNew(c_metaObject(base),"C_SEQUENCE<c_double>",subtype0,0);
            c_free(subtype0);
        }
        length0 = (c_long)(*src).length();
#ifdef OSPL_BOUNDS_CHECK
         dest0 = (c_double *)c_newSequence(c_collectionType(type0),length0);
        {
        /* Code generated by /home/erle/opensplice/src/tools/idlpp/code/idl_genCorbaCxxCopyin.c at line 1873 */
                    c_double *buf0;
            buf0 = (c_double *)(*src).get_buffer();
            memcpy (dest0,buf0,length0* sizeof(*dest0));
        }
        to->velocity_ = (c_sequence)dest0;
#else
        dest0 = (c_double *)c_newSequence(c_collectionType(type0),length0);
        {
        /* Code generated by /home/erle/opensplice/src/tools/idlpp/code/idl_genCorbaCxxCopyin.c at line 1873 */
                    c_double *buf0;
            buf0 = (c_double *)(*src).get_buffer();
            memcpy (dest0,buf0,length0* sizeof(*dest0));
        }
        to->velocity_ = (c_sequence)dest0;
#endif
    }
    {
/* Code generated by /home/erle/opensplice/src/tools/idlpp/code/idl_genCorbaCxxCopyin.c at line 774 */

        static c_type type0 = NULL;
        c_type subtype0;
        c_long length0;
        c_double *dest0;
        ::sensor_msgs::msg::dds_::JointState_::_effort__seq *src = &from->effort_;

        if (type0 == NULL) {
            subtype0 = c_type(c_metaResolve (c_metaObject(base), "c_double"));
            type0 = c_metaSequenceTypeNew(c_metaObject(base),"C_SEQUENCE<c_double>",subtype0,0);
            c_free(subtype0);
        }
        length0 = (c_long)(*src).length();
#ifdef OSPL_BOUNDS_CHECK
         dest0 = (c_double *)c_newSequence(c_collectionType(type0),length0);
        {
        /* Code generated by /home/erle/opensplice/src/tools/idlpp/code/idl_genCorbaCxxCopyin.c at line 1873 */
                    c_double *buf0;
            buf0 = (c_double *)(*src).get_buffer();
            memcpy (dest0,buf0,length0* sizeof(*dest0));
        }
        to->effort_ = (c_sequence)dest0;
#else
        dest0 = (c_double *)c_newSequence(c_collectionType(type0),length0);
        {
        /* Code generated by /home/erle/opensplice/src/tools/idlpp/code/idl_genCorbaCxxCopyin.c at line 1873 */
                    c_double *buf0;
            buf0 = (c_double *)(*src).get_buffer();
            memcpy (dest0,buf0,length0* sizeof(*dest0));
        }
        to->effort_ = (c_sequence)dest0;
#endif
    }
    return result;
}

void
__sensor_msgs_msg_dds__JointState___copyOut(
    void *_from,
    void *_to)
{
    struct _sensor_msgs_msg_dds__JointState_ *from = (struct _sensor_msgs_msg_dds__JointState_ *)_from;
    struct ::sensor_msgs::msg::dds_::JointState_ *to = (struct ::sensor_msgs::msg::dds_::JointState_ *)_to;
    {
        extern void __std_msgs_msg_dds__Header___copyOut(void *, void *);
        __std_msgs_msg_dds__Header___copyOut((void *)&from->header_, (void *)&to->header_);
    }
    {
        long size0;
        c_string *src0 = (c_string *)from->name_;
        ::sensor_msgs::msg::dds_::JointState_::_name__seq *dst = &to->name_;

        size0 = c_arraySize(c_sequence(from->name_));
        to->name_.length(size0);
        {
            long i0;
            for (i0 = 0; i0 < size0; i0++) {
                (*dst)[i0] = DDS::string_dup(src0[i0]);
            }
        }
    }
    {
        long size0;
        c_double *src0 = (c_double *)from->position_;
        ::sensor_msgs::msg::dds_::JointState_::_position__seq *dst = &to->position_;

        size0 = c_arraySize(c_sequence(from->position_));
        to->position_.length(size0);
        {
            c_double *buf0;
            buf0 = (c_double *)(*dst).get_buffer();
            memcpy (buf0,src0,size0* sizeof(*buf0));
        }
    }
    {
        long size0;
        c_double *src0 = (c_double *)from->velocity_;
        ::sensor_msgs::msg::dds_::JointState_::_velocity__seq *dst = &to->velocity_;

        size0 = c_arraySize(c_sequence(from->velocity_));
        to->velocity_.length(size0);
        {
            c_double *buf0;
            buf0 = (c_double *)(*dst).get_buffer();
            memcpy (buf0,src0,size0* sizeof(*buf0));
        }
    }
    {
        long size0;
        c_double *src0 = (c_double *)from->effort_;
        ::sensor_msgs::msg::dds_::JointState_::_effort__seq *dst = &to->effort_;

        size0 = c_arraySize(c_sequence(from->effort_));
        to->effort_.length(size0);
        {
            c_double *buf0;
            buf0 = (c_double *)(*dst).get_buffer();
            memcpy (buf0,src0,size0* sizeof(*buf0));
        }
    }
}

