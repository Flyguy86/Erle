#ifndef LARGEFIXED_SPLTYPES_H
#define LARGEFIXED_SPLTYPES_H

#include "ccpp_LargeFixed_.h"

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>

extern c_metaObject __LargeFixed__example_interfaces__load (c_base base);

extern c_metaObject __LargeFixed__example_interfaces_msg__load (c_base base);

extern c_metaObject __LargeFixed__example_interfaces_msg_dds___load (c_base base);

extern c_metaObject __example_interfaces_msg_dds__example_interfaces__LargeFixed__long_array_255__load (c_base base);
typedef c_long _example_interfaces_msg_dds__example_interfaces__LargeFixed__long_array_255[255];

extern c_metaObject __example_interfaces_msg_dds__LargeFixed___load (c_base base);
extern const char * __example_interfaces_msg_dds__LargeFixed___keys (void);
extern const char * __example_interfaces_msg_dds__LargeFixed___name (void);
struct _example_interfaces_msg_dds__LargeFixed_ ;
extern  c_bool __example_interfaces_msg_dds__LargeFixed___copyIn(c_base base, struct example_interfaces::msg::dds_::LargeFixed_ *from, struct _example_interfaces_msg_dds__LargeFixed_ *to);
extern  void __example_interfaces_msg_dds__LargeFixed___copyOut(void *_from, void *_to);
struct _example_interfaces_msg_dds__LargeFixed_ {
    _example_interfaces_msg_dds__example_interfaces__LargeFixed__long_array_255 data_;
};

#endif
