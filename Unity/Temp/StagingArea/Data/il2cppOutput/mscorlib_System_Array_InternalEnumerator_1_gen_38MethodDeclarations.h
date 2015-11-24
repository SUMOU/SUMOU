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

// System.Array
struct Array_t;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array_InternalEnumerator_1_gen_38.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_8.h"

// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m10680_gshared (InternalEnumerator_1_t1626 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m10680(__this, ___array, method) (( void (*) (InternalEnumerator_1_t1626 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m10680_gshared)(__this, ___array, method)
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>::System.Collections.IEnumerator.Reset()
extern "C" void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m10681_gshared (InternalEnumerator_1_t1626 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_Reset_m10681(__this, method) (( void (*) (InternalEnumerator_1_t1626 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_Reset_m10681_gshared)(__this, method)
// System.Object System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m10682_gshared (InternalEnumerator_1_t1626 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m10682(__this, method) (( Object_t * (*) (InternalEnumerator_1_t1626 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m10682_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m10683_gshared (InternalEnumerator_1_t1626 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m10683(__this, method) (( void (*) (InternalEnumerator_1_t1626 *, const MethodInfo*))InternalEnumerator_1_Dispose_m10683_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m10684_gshared (InternalEnumerator_1_t1626 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m10684(__this, method) (( bool (*) (InternalEnumerator_1_t1626 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m10684_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>::get_Current()
extern "C" KeyValuePair_2_t1625  InternalEnumerator_1_get_Current_m10685_gshared (InternalEnumerator_1_t1626 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m10685(__this, method) (( KeyValuePair_2_t1625  (*) (InternalEnumerator_1_t1626 *, const MethodInfo*))InternalEnumerator_1_get_Current_m10685_gshared)(__this, method)
