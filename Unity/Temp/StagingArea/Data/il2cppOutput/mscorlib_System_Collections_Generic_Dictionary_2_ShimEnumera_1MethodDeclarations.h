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

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>
struct ShimEnumerator_t1518;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t1509;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m9418_gshared (ShimEnumerator_t1518 * __this, Dictionary_2_t1509 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m9418(__this, ___host, method) (( void (*) (ShimEnumerator_t1518 *, Dictionary_2_t1509 *, const MethodInfo*))ShimEnumerator__ctor_m9418_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m9419_gshared (ShimEnumerator_t1518 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m9419(__this, method) (( bool (*) (ShimEnumerator_t1518 *, const MethodInfo*))ShimEnumerator_MoveNext_m9419_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Entry()
extern "C" DictionaryEntry_t488  ShimEnumerator_get_Entry_m9420_gshared (ShimEnumerator_t1518 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m9420(__this, method) (( DictionaryEntry_t488  (*) (ShimEnumerator_t1518 *, const MethodInfo*))ShimEnumerator_get_Entry_m9420_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m9421_gshared (ShimEnumerator_t1518 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m9421(__this, method) (( Object_t * (*) (ShimEnumerator_t1518 *, const MethodInfo*))ShimEnumerator_get_Key_m9421_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m9422_gshared (ShimEnumerator_t1518 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m9422(__this, method) (( Object_t * (*) (ShimEnumerator_t1518 *, const MethodInfo*))ShimEnumerator_get_Value_m9422_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m9423_gshared (ShimEnumerator_t1518 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m9423(__this, method) (( Object_t * (*) (ShimEnumerator_t1518 *, const MethodInfo*))ShimEnumerator_get_Current_m9423_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::Reset()
extern "C" void ShimEnumerator_Reset_m9424_gshared (ShimEnumerator_t1518 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m9424(__this, method) (( void (*) (ShimEnumerator_t1518 *, const MethodInfo*))ShimEnumerator_Reset_m9424_gshared)(__this, method)
