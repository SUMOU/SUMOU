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

// System.OperatingSystem
struct OperatingSystem_t1298;
// System.Version
struct Version_t347;
// System.Object
struct Object_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t323;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_PlatformID.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.OperatingSystem::.ctor(System.PlatformID,System.Version)
extern "C" void OperatingSystem__ctor_m8283 (OperatingSystem_t1298 * __this, int32_t ___platform, Version_t347 * ___version, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.PlatformID System.OperatingSystem::get_Platform()
extern "C" int32_t OperatingSystem_get_Platform_m8284 (OperatingSystem_t1298 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.OperatingSystem::Clone()
extern "C" Object_t * OperatingSystem_Clone_m8285 (OperatingSystem_t1298 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.OperatingSystem::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void OperatingSystem_GetObjectData_m8286 (OperatingSystem_t1298 * __this, SerializationInfo_t323 * ___info, StreamingContext_t489  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.OperatingSystem::ToString()
extern "C" String_t* OperatingSystem_ToString_m8287 (OperatingSystem_t1298 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
