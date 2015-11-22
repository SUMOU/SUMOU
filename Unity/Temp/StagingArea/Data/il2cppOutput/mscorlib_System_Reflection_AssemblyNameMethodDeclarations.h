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

// System.Reflection.AssemblyName
struct AssemblyName_t942;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t323;
// System.String
struct String_t;
// System.Globalization.CultureInfo
struct CultureInfo_t267;
// System.Reflection.StrongNameKeyPair
struct StrongNameKeyPair_t943;
// System.Version
struct Version_t347;
// System.Byte[]
struct ByteU5BU5D_t378;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Reflection_AssemblyNameFlags.h"

// System.Void System.Reflection.AssemblyName::.ctor()
extern "C" void AssemblyName__ctor_m5855 (AssemblyName_t942 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.AssemblyName::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void AssemblyName__ctor_m5856 (AssemblyName_t942 * __this, SerializationInfo_t323 * ___si, StreamingContext_t489  ___sc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.AssemblyName::get_Name()
extern "C" String_t* AssemblyName_get_Name_m5857 (AssemblyName_t942 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.AssemblyName::set_Name(System.String)
extern "C" void AssemblyName_set_Name_m5858 (AssemblyName_t942 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo System.Reflection.AssemblyName::get_CultureInfo()
extern "C" CultureInfo_t267 * AssemblyName_get_CultureInfo_m5859 (AssemblyName_t942 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.AssemblyNameFlags System.Reflection.AssemblyName::get_Flags()
extern "C" int32_t AssemblyName_get_Flags_m5860 (AssemblyName_t942 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.AssemblyName::get_FullName()
extern "C" String_t* AssemblyName_get_FullName_m5861 (AssemblyName_t942 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.StrongNameKeyPair System.Reflection.AssemblyName::get_KeyPair()
extern "C" StrongNameKeyPair_t943 * AssemblyName_get_KeyPair_m5862 (AssemblyName_t942 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Version System.Reflection.AssemblyName::get_Version()
extern "C" Version_t347 * AssemblyName_get_Version_m5863 (AssemblyName_t942 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.AssemblyName::set_Version(System.Version)
extern "C" void AssemblyName_set_Version_m5864 (AssemblyName_t942 * __this, Version_t347 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.AssemblyName::ToString()
extern "C" String_t* AssemblyName_ToString_m5865 (AssemblyName_t942 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Reflection.AssemblyName::GetPublicKey()
extern "C" ByteU5BU5D_t378* AssemblyName_GetPublicKey_m5866 (AssemblyName_t942 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.AssemblyName::get_IsPublicKeyValid()
extern "C" bool AssemblyName_get_IsPublicKeyValid_m5867 (AssemblyName_t942 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Reflection.AssemblyName::InternalGetPublicKeyToken()
extern "C" ByteU5BU5D_t378* AssemblyName_InternalGetPublicKeyToken_m5868 (AssemblyName_t942 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Reflection.AssemblyName::ComputePublicKeyToken()
extern "C" ByteU5BU5D_t378* AssemblyName_ComputePublicKeyToken_m5869 (AssemblyName_t942 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.AssemblyName::SetPublicKey(System.Byte[])
extern "C" void AssemblyName_SetPublicKey_m5870 (AssemblyName_t942 * __this, ByteU5BU5D_t378* ___publicKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.AssemblyName::SetPublicKeyToken(System.Byte[])
extern "C" void AssemblyName_SetPublicKeyToken_m5871 (AssemblyName_t942 * __this, ByteU5BU5D_t378* ___publicKeyToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.AssemblyName::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void AssemblyName_GetObjectData_m5872 (AssemblyName_t942 * __this, SerializationInfo_t323 * ___info, StreamingContext_t489  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.AssemblyName::Clone()
extern "C" Object_t * AssemblyName_Clone_m5873 (AssemblyName_t942 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.AssemblyName::OnDeserialization(System.Object)
extern "C" void AssemblyName_OnDeserialization_m5874 (AssemblyName_t942 * __this, Object_t * ___sender, const MethodInfo* method) IL2CPP_METHOD_ATTR;
