﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>
struct ShimEnumerator_t1511;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t1497;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m9308_gshared (ShimEnumerator_t1511 * __this, Dictionary_2_t1497 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m9308(__this, ___host, method) (( void (*) (ShimEnumerator_t1511 *, Dictionary_2_t1497 *, const MethodInfo*))ShimEnumerator__ctor_m9308_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m9309_gshared (ShimEnumerator_t1511 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m9309(__this, method) (( bool (*) (ShimEnumerator_t1511 *, const MethodInfo*))ShimEnumerator_MoveNext_m9309_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Entry()
extern "C" DictionaryEntry_t72  ShimEnumerator_get_Entry_m9310_gshared (ShimEnumerator_t1511 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m9310(__this, method) (( DictionaryEntry_t72  (*) (ShimEnumerator_t1511 *, const MethodInfo*))ShimEnumerator_get_Entry_m9310_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m9311_gshared (ShimEnumerator_t1511 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m9311(__this, method) (( Object_t * (*) (ShimEnumerator_t1511 *, const MethodInfo*))ShimEnumerator_get_Key_m9311_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m9312_gshared (ShimEnumerator_t1511 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m9312(__this, method) (( Object_t * (*) (ShimEnumerator_t1511 *, const MethodInfo*))ShimEnumerator_get_Value_m9312_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m9313_gshared (ShimEnumerator_t1511 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m9313(__this, method) (( Object_t * (*) (ShimEnumerator_t1511 *, const MethodInfo*))ShimEnumerator_get_Current_m9313_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::Reset()
extern "C" void ShimEnumerator_Reset_m9314_gshared (ShimEnumerator_t1511 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m9314(__this, method) (( void (*) (ShimEnumerator_t1511 *, const MethodInfo*))ShimEnumerator_Reset_m9314_gshared)(__this, method)
