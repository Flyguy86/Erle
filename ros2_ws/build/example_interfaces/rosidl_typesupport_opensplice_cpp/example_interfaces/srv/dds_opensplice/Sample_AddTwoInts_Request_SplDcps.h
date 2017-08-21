#ifndef SAMPLE_ADDTWOINTS_REQUEST_SPLTYPES_H
#define SAMPLE_ADDTWOINTS_REQUEST_SPLTYPES_H

#include "ccpp_Sample_AddTwoInts_Request_.h"

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>

#include "AddTwoInts_Request_SplDcps.h"

extern c_metaObject __Sample_AddTwoInts_Request__example_interfaces__load (c_base base);

extern c_metaObject __Sample_AddTwoInts_Request__example_interfaces_srv__load (c_base base);

extern c_metaObject __Sample_AddTwoInts_Request__example_interfaces_srv_dds___load (c_base base);

extern c_metaObject __example_interfaces_srv_dds__Sample_AddTwoInts_Request___load (c_base base);
extern const char * __example_interfaces_srv_dds__Sample_AddTwoInts_Request___keys (void);
extern const char * __example_interfaces_srv_dds__Sample_AddTwoInts_Request___name (void);
struct _example_interfaces_srv_dds__Sample_AddTwoInts_Request_ ;
extern  c_bool __example_interfaces_srv_dds__Sample_AddTwoInts_Request___copyIn(c_base base, struct example_interfaces::srv::dds_::Sample_AddTwoInts_Request_ *from, struct _example_interfaces_srv_dds__Sample_AddTwoInts_Request_ *to);
extern  void __example_interfaces_srv_dds__Sample_AddTwoInts_Request___copyOut(void *_from, void *_to);
struct _example_interfaces_srv_dds__Sample_AddTwoInts_Request_ {
    c_ulonglong client_guid_0_;
    c_ulonglong client_guid_1_;
    c_longlong sequence_number_;
    struct _example_interfaces_srv_dds__AddTwoInts_Request_ request_;
};

#endif
