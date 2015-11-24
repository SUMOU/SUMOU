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

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>
struct ShimEnumerator_t1633;
// System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>
struct Dictionary_2_t1623;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m10743_gshared (ShimEnumerator_t1633 * __this, Dictionary_2_t1623 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m10743(__this, ___host, method) (( void (*) (ShimEnumerator_t1633 *, Dictionary_2_t1623 *, const MethodInfo*))ShimEnumerator__ctor_m10743_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m10744_gshared (ShimEnumerator_t1633 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m10744(__this, method) (( bool (*) (ShimEnumerator_t1633 *, const MethodInfo*))ShimEnumerator_MoveNext_m10744_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::get_Entry()
extern "C" DictionaryEntry_t72  ShimEnumerator_get_Entry_m10745_gshared (ShimEnumerator_t1633 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m10745(__this, method) (( DictionaryEntry_t72  (*) (ShimEnumerator_t1633 *, const MethodInfo*))ShimEnumerator_get_Entry_m10745_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m10746_gshared (ShimEnumerator_t1633 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m10746(__this, method) (( Object_t * (*) (ShimEnumerator_t1633 *, const MethodInfo*))ShimEnumerator_get_Key_m10746_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m10747_gshared (ShimEnumerator_t1633 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m10747(__this, method) (( Object_t * (*) (ShimEnumerator_t1633 *, const MethodInfo*))ShimEnumerator_get_Value_m10747_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m10748_gshared (ShimEnumerator_t1633 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m10748(__this, method) (( Object_t * (*) (ShimEnumerator_t1633 *, const MethodInfo*))ShimEnumerator_get_Current_m10748_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::Reset()
extern "C" void ShimEnumerator_Reset_m10749_gshared (ShimEnumerator_t1633 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m10749(__this, method) (( void (*) (ShimEnumerator_t1633 *, const MethodInfo*))ShimEnumerator_Reset_m10749_gshared)(__this, method)
