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

// System.MulticastDelegate
struct MulticastDelegate_t18;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t369;
// System.Object
struct Object_t;
// System.Delegate[]
struct DelegateU5BU5D_t1413;
// System.Delegate
struct Delegate_t306;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.MulticastDelegate::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void MulticastDelegate_GetObjectData_m4351 (MulticastDelegate_t18 * __this, SerializationInfo_t369 * ___info, StreamingContext_t534  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MulticastDelegate::Equals(System.Object)
extern "C" bool MulticastDelegate_Equals_m4352 (MulticastDelegate_t18 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.MulticastDelegate::GetHashCode()
extern "C" int32_t MulticastDelegate_GetHashCode_m4353 (MulticastDelegate_t18 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate[] System.MulticastDelegate::GetInvocationList()
extern "C" DelegateU5BU5D_t1413* MulticastDelegate_GetInvocationList_m4354 (MulticastDelegate_t18 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.MulticastDelegate::CombineImpl(System.Delegate)
extern "C" Delegate_t306 * MulticastDelegate_CombineImpl_m4355 (MulticastDelegate_t18 * __this, Delegate_t306 * ___follow, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MulticastDelegate::BaseEquals(System.MulticastDelegate)
extern "C" bool MulticastDelegate_BaseEquals_m4356 (MulticastDelegate_t18 * __this, MulticastDelegate_t18 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.MulticastDelegate System.MulticastDelegate::KPM(System.MulticastDelegate,System.MulticastDelegate,System.MulticastDelegate&)
extern "C" MulticastDelegate_t18 * MulticastDelegate_KPM_m4357 (Object_t * __this /* static, unused */, MulticastDelegate_t18 * ___needle, MulticastDelegate_t18 * ___haystack, MulticastDelegate_t18 ** ___tail, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.MulticastDelegate::RemoveImpl(System.Delegate)
extern "C" Delegate_t306 * MulticastDelegate_RemoveImpl_m4358 (MulticastDelegate_t18 * __this, Delegate_t306 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
