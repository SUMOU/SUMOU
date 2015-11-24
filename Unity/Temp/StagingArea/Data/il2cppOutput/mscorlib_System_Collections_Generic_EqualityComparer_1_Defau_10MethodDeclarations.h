#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>
struct DefaultComparer_t1741;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Guid.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>::.ctor()
extern "C" void DefaultComparer__ctor_m11632_gshared (DefaultComparer_t1741 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m11632(__this, method) (( void (*) (DefaultComparer_t1741 *, const MethodInfo*))DefaultComparer__ctor_m11632_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m11633_gshared (DefaultComparer_t1741 * __this, Guid_t73  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m11633(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t1741 *, Guid_t73 , const MethodInfo*))DefaultComparer_GetHashCode_m11633_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m11634_gshared (DefaultComparer_t1741 * __this, Guid_t73  ___x, Guid_t73  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m11634(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t1741 *, Guid_t73 , Guid_t73 , const MethodInfo*))DefaultComparer_Equals_m11634_gshared)(__this, ___x, ___y, method)
