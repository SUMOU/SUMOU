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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.DictionaryEntry>
struct Transform_1_t1498;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t19;
// System.AsyncCallback
struct AsyncCallback_t20;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m9294_gshared (Transform_1_t1498 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m9294(__this, ___object, ___method, method) (( void (*) (Transform_1_t1498 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m9294_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
extern "C" DictionaryEntry_t72  Transform_1_Invoke_m9295_gshared (Transform_1_t1498 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Transform_1_Invoke_m9295(__this, ___key, ___value, method) (( DictionaryEntry_t72  (*) (Transform_1_t1498 *, Object_t *, int32_t, const MethodInfo*))Transform_1_Invoke_m9295_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m9296_gshared (Transform_1_t1498 * __this, Object_t * ___key, int32_t ___value, AsyncCallback_t20 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m9296(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t1498 *, Object_t *, int32_t, AsyncCallback_t20 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m9296_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
extern "C" DictionaryEntry_t72  Transform_1_EndInvoke_m9297_gshared (Transform_1_t1498 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m9297(__this, ___result, method) (( DictionaryEntry_t72  (*) (Transform_1_t1498 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m9297_gshared)(__this, ___result, method)
