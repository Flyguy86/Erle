#ifndef SAMPLE_EMPTY_RESPONSE_SPLTYPES_H
#define SAMPLE_EMPTY_RESPONSE_SPLTYPES_H

#include "ccpp_Sample_Empty_Response_.h"

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>

#include "Empty_Response_SplDcps.h"

extern c_metaObject __Sample_Empty_Response__std_srvs__load (c_base base);

extern c_metaObject __Sample_Empty_Response__std_srvs_srv__load (c_base base);

extern c_metaObject __Sample_Empty_Response__std_srvs_srv_dds___load (c_base base);

extern c_metaObject __std_srvs_srv_dds__Sample_Empty_Response___load (c_base base);
extern const char * __std_srvs_srv_dds__Sample_Empty_Response___keys (void);
extern const char * __std_srvs_srv_dds__Sample_Empty_Response___name (void);
struct _std_srvs_srv_dds__Sample_Empty_Response_ ;
extern  c_bool __std_srvs_srv_dds__Sample_Empty_Response___copyIn(c_base base, struct std_srvs::srv::dds_::Sample_Empty_Response_ *from, struct _std_srvs_srv_dds__Sample_Empty_Response_ *to);
extern  void __std_srvs_srv_dds__Sample_Empty_Response___copyOut(void *_from, void *_to);
struct _std_srvs_srv_dds__Sample_Empty_Response_ {
    c_ulonglong client_guid_0_;
    c_ulonglong client_guid_1_;
    c_longlong sequence_number_;
    struct _std_srvs_srv_dds__Empty_Response_ response_;
};

#endif
