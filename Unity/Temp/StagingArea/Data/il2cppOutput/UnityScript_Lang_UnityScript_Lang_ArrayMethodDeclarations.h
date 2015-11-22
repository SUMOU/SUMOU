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

// UnityScript.Lang.Array
struct Array_t20;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.Array
struct Array_t;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityScript.Lang.Array::.ctor()
extern "C" void Array__ctor_m106 (Array_t20 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object UnityScript.Lang.Array::Coerce(System.Type)
extern "C" Object_t * Array_Coerce_m1136 (Array_t20 * __this, Type_t * ___toType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Array UnityScript.Lang.Array::ToBuiltin(System.Type)
extern "C" Array_t * Array_ToBuiltin_m1137 (Array_t20 * __this, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityScript.Lang.Array::ToString()
extern "C" String_t* Array_ToString_m1138 (Array_t20 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityScript.Lang.Array::Join(System.String)
extern "C" String_t* Array_Join_m1139 (Array_t20 * __this, String_t* ___seperator, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object UnityScript.Lang.Array::get_Item(System.Int32)
extern "C" Object_t * Array_get_Item_m110 (Array_t20 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityScript.Lang.Array::set_Item(System.Int32,System.Object)
extern "C" void Array_set_Item_m115 (Array_t20 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityScript.Lang.Array::OnValidate(System.Object)
extern "C" void Array_OnValidate_m1140 (Array_t20 * __this, Object_t * ___newValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityScript.Lang.Array::EnsureCapacity(System.Int32)
extern "C" void Array_EnsureCapacity_m1141 (Array_t20 * __this, int32_t ___capacity, const MethodInfo* method) IL2CPP_METHOD_ATTR;
