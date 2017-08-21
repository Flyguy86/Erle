#ifndef TRIGGER_RESPONSE_SPLTYPES_H
#define TRIGGER_RESPONSE_SPLTYPES_H

#include "ccpp_Trigger_Response_.h"

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>

extern c_metaObject __Trigger_Response__std_srvs__load (c_base base);

extern c_metaObject __Trigger_Response__std_srvs_srv__load (c_base base);

extern c_metaObject __Trigger_Response__std_srvs_srv_dds___load (c_base base);

extern c_metaObject __std_srvs_srv_dds__Trigger_Response___load (c_base base);
extern const char * __std_srvs_srv_dds__Trigger_Response___keys (void);
extern const char * __std_srvs_srv_dds__Trigger_Response___name (void);
struct _std_srvs_srv_dds__Trigger_Response_ ;
extern  c_bool __std_srvs_srv_dds__Trigger_Response___copyIn(c_base base, struct std_srvs::srv::dds_::Trigger_Response_ *from, struct _std_srvs_srv_dds__Trigger_Response_ *to);
extern  void __std_srvs_srv_dds__Trigger_Response___copyOut(void *_from, void *_to);
struct _std_srvs_srv_dds__Trigger_Response_ {
    c_bool success_;
    c_string message_;
};

#endif
