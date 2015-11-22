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
struct MulticastDelegate_t74;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t323;
// System.Object
struct Object_t;
// System.Delegate[]
struct DelegateU5BU5D_t1369;
// System.Delegate
struct Delegate_t256;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.MulticastDelegate::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void MulticastDelegate_GetObjectData_m3838 (MulticastDelegate_t74 * __this, SerializationInfo_t323 * ___info, StreamingContext_t489  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MulticastDelegate::Equals(System.Object)
extern "C" bool MulticastDelegate_Equals_m3839 (MulticastDelegate_t74 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.MulticastDelegate::GetHashCode()
extern "C" int32_t MulticastDelegate_GetHashCode_m3840 (MulticastDelegate_t74 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate[] System.MulticastDelegate::GetInvocationList()
extern "C" DelegateU5BU5D_t1369* MulticastDelegate_GetInvocationList_m3841 (MulticastDelegate_t74 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.MulticastDelegate::CombineImpl(System.Delegate)
extern "C" Delegate_t256 * MulticastDelegate_CombineImpl_m3842 (MulticastDelegate_t74 * __this, Delegate_t256 * ___follow, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MulticastDelegate::BaseEquals(System.MulticastDelegate)
extern "C" bool MulticastDelegate_BaseEquals_m3843 (MulticastDelegate_t74 * __this, MulticastDelegate_t74 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.MulticastDelegate System.MulticastDelegate::KPM(System.MulticastDelegate,System.MulticastDelegate,System.MulticastDelegate&)
extern "C" MulticastDelegate_t74 * MulticastDelegate_KPM_m3844 (Object_t * __this /* static, unused */, MulticastDelegate_t74 * ___needle, MulticastDelegate_t74 * ___haystack, MulticastDelegate_t74 ** ___tail, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.MulticastDelegate::RemoveImpl(System.Delegate)
extern "C" Delegate_t256 * MulticastDelegate_RemoveImpl_m3845 (MulticastDelegate_t74 * __this, Delegate_t256 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
