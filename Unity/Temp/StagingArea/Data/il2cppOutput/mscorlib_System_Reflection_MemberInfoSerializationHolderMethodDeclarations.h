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

// System.Reflection.MemberInfoSerializationHolder
struct MemberInfoSerializationHolder_t1004;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t369;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t300;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Reflection_MemberTypes.h"

// System.Void System.Reflection.MemberInfoSerializationHolder::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void MemberInfoSerializationHolder__ctor_m6448 (MemberInfoSerializationHolder_t1004 * __this, SerializationInfo_t369 * ___info, StreamingContext_t534  ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.MemberInfoSerializationHolder::Serialize(System.Runtime.Serialization.SerializationInfo,System.String,System.Type,System.String,System.Reflection.MemberTypes)
extern "C" void MemberInfoSerializationHolder_Serialize_m6449 (Object_t * __this /* static, unused */, SerializationInfo_t369 * ___info, String_t* ___name, Type_t * ___klass, String_t* ___signature, int32_t ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.MemberInfoSerializationHolder::Serialize(System.Runtime.Serialization.SerializationInfo,System.String,System.Type,System.String,System.Reflection.MemberTypes,System.Type[])
extern "C" void MemberInfoSerializationHolder_Serialize_m6450 (Object_t * __this /* static, unused */, SerializationInfo_t369 * ___info, String_t* ___name, Type_t * ___klass, String_t* ___signature, int32_t ___type, TypeU5BU5D_t300* ___genericArguments, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.MemberInfoSerializationHolder::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void MemberInfoSerializationHolder_GetObjectData_m6451 (MemberInfoSerializationHolder_t1004 * __this, SerializationInfo_t369 * ___info, StreamingContext_t534  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.MemberInfoSerializationHolder::GetRealObject(System.Runtime.Serialization.StreamingContext)
extern "C" Object_t * MemberInfoSerializationHolder_GetRealObject_m6452 (MemberInfoSerializationHolder_t1004 * __this, StreamingContext_t534  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
