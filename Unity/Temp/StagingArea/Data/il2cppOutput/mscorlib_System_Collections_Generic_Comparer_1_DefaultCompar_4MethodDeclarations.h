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

// System.Collections.Generic.Comparer`1/DefaultComparer<System.TimeSpan>
struct DefaultComparer_t1692;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_TimeSpan.h"

// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<System.TimeSpan>::.ctor()
extern "C" void DefaultComparer__ctor_m11083_gshared (DefaultComparer_t1692 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m11083(__this, method) (( void (*) (DefaultComparer_t1692 *, const MethodInfo*))DefaultComparer__ctor_m11083_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<System.TimeSpan>::Compare(T,T)
extern "C" int32_t DefaultComparer_Compare_m11084_gshared (DefaultComparer_t1692 * __this, TimeSpan_t391  ___x, TimeSpan_t391  ___y, const MethodInfo* method);
#define DefaultComparer_Compare_m11084(__this, ___x, ___y, method) (( int32_t (*) (DefaultComparer_t1692 *, TimeSpan_t391 , TimeSpan_t391 , const MethodInfo*))DefaultComparer_Compare_m11084_gshared)(__this, ___x, ___y, method)
