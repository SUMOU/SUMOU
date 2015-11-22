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

// System.Net.WebRequest
struct WebRequest_t336;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t323;
// System.String
struct String_t;
// System.Exception
struct Exception_t13;
// System.Net.IWebProxy
struct IWebProxy_t339;
// System.Type
struct Type_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Net.WebRequest::.ctor()
extern "C" void WebRequest__ctor_m1415 (WebRequest_t336 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebRequest::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void WebRequest__ctor_m1416 (WebRequest_t336 * __this, SerializationInfo_t323 * ___serializationInfo, StreamingContext_t489  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebRequest::.cctor()
extern "C" void WebRequest__cctor_m1417 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebRequest::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void WebRequest_System_Runtime_Serialization_ISerializable_GetObjectData_m1418 (WebRequest_t336 * __this, SerializationInfo_t323 * ___serializationInfo, StreamingContext_t489  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebRequest::AddDynamicPrefix(System.String,System.String)
extern "C" void WebRequest_AddDynamicPrefix_m1419 (Object_t * __this /* static, unused */, String_t* ___protocol, String_t* ___implementor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Net.WebRequest::GetMustImplement()
extern "C" Exception_t13 * WebRequest_GetMustImplement_m1420 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IWebProxy System.Net.WebRequest::get_DefaultWebProxy()
extern "C" Object_t * WebRequest_get_DefaultWebProxy_m1421 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IWebProxy System.Net.WebRequest::GetDefaultWebProxy()
extern "C" Object_t * WebRequest_GetDefaultWebProxy_m1422 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebRequest::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void WebRequest_GetObjectData_m1423 (WebRequest_t336 * __this, SerializationInfo_t323 * ___serializationInfo, StreamingContext_t489  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebRequest::AddPrefix(System.String,System.Type)
extern "C" void WebRequest_AddPrefix_m1424 (Object_t * __this /* static, unused */, String_t* ___prefix, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
