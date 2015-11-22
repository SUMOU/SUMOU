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

// System.Net.WebProxy
struct WebProxy_t360;
// System.Uri
struct Uri_t337;
// System.String[]
struct StringU5BU5D_t238;
// System.Net.ICredentials
struct ICredentials_t361;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t323;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Net.WebProxy::.ctor()
extern "C" void WebProxy__ctor_m1406 (WebProxy_t360 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebProxy::.ctor(System.Uri,System.Boolean,System.String[],System.Net.ICredentials)
extern "C" void WebProxy__ctor_m1407 (WebProxy_t360 * __this, Uri_t337 * ___address, bool ___bypassOnLocal, StringU5BU5D_t238* ___bypassList, Object_t * ___credentials, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebProxy::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void WebProxy__ctor_m1408 (WebProxy_t360 * __this, SerializationInfo_t323 * ___serializationInfo, StreamingContext_t489  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebProxy::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void WebProxy_System_Runtime_Serialization_ISerializable_GetObjectData_m1409 (WebProxy_t360 * __this, SerializationInfo_t323 * ___serializationInfo, StreamingContext_t489  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebProxy::get_UseDefaultCredentials()
extern "C" bool WebProxy_get_UseDefaultCredentials_m1410 (WebProxy_t360 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri System.Net.WebProxy::GetProxy(System.Uri)
extern "C" Uri_t337 * WebProxy_GetProxy_m1411 (WebProxy_t360 * __this, Uri_t337 * ___destination, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebProxy::IsBypassed(System.Uri)
extern "C" bool WebProxy_IsBypassed_m1412 (WebProxy_t360 * __this, Uri_t337 * ___host, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebProxy::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void WebProxy_GetObjectData_m1413 (WebProxy_t360 * __this, SerializationInfo_t323 * ___serializationInfo, StreamingContext_t489  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebProxy::CheckBypassList()
extern "C" void WebProxy_CheckBypassList_m1414 (WebProxy_t360 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
