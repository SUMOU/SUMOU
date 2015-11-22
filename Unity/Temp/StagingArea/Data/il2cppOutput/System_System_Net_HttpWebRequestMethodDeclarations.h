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

// System.Net.HttpWebRequest
struct HttpWebRequest_t348;
// System.Uri
struct Uri_t337;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t323;
// System.Net.ServicePoint
struct ServicePoint_t350;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Net.HttpWebRequest::.ctor(System.Uri)
extern "C" void HttpWebRequest__ctor_m1319 (HttpWebRequest_t348 * __this, Uri_t337 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void HttpWebRequest__ctor_m1320 (HttpWebRequest_t348 * __this, SerializationInfo_t323 * ___serializationInfo, StreamingContext_t489  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::.cctor()
extern "C" void HttpWebRequest__cctor_m1321 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void HttpWebRequest_System_Runtime_Serialization_ISerializable_GetObjectData_m1322 (HttpWebRequest_t348 * __this, SerializationInfo_t323 * ___serializationInfo, StreamingContext_t489  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri System.Net.HttpWebRequest::get_Address()
extern "C" Uri_t337 * HttpWebRequest_get_Address_m1323 (HttpWebRequest_t348 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ServicePoint System.Net.HttpWebRequest::get_ServicePoint()
extern "C" ServicePoint_t350 * HttpWebRequest_get_ServicePoint_m1324 (HttpWebRequest_t348 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ServicePoint System.Net.HttpWebRequest::GetServicePoint()
extern "C" ServicePoint_t350 * HttpWebRequest_GetServicePoint_m1325 (HttpWebRequest_t348 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void HttpWebRequest_GetObjectData_m1326 (HttpWebRequest_t348 * __this, SerializationInfo_t323 * ___serializationInfo, StreamingContext_t489  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
