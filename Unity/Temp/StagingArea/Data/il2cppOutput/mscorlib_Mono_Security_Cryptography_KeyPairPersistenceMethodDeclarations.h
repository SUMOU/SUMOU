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

// Mono.Security.Cryptography.KeyPairPersistence
struct KeyPairPersistence_t815;
// System.Security.Cryptography.CspParameters
struct CspParameters_t720;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Security.Cryptography.KeyPairPersistence::.ctor(System.Security.Cryptography.CspParameters)
extern "C" void KeyPairPersistence__ctor_m4889 (KeyPairPersistence_t815 * __this, CspParameters_t720 * ___parameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.KeyPairPersistence::.ctor(System.Security.Cryptography.CspParameters,System.String)
extern "C" void KeyPairPersistence__ctor_m4890 (KeyPairPersistence_t815 * __this, CspParameters_t720 * ___parameters, String_t* ___keyPair, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.KeyPairPersistence::.cctor()
extern "C" void KeyPairPersistence__cctor_m4891 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Cryptography.KeyPairPersistence::get_Filename()
extern "C" String_t* KeyPairPersistence_get_Filename_m4892 (KeyPairPersistence_t815 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Cryptography.KeyPairPersistence::get_KeyValue()
extern "C" String_t* KeyPairPersistence_get_KeyValue_m4893 (KeyPairPersistence_t815 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.KeyPairPersistence::set_KeyValue(System.String)
extern "C" void KeyPairPersistence_set_KeyValue_m4894 (KeyPairPersistence_t815 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.KeyPairPersistence::Load()
extern "C" bool KeyPairPersistence_Load_m4895 (KeyPairPersistence_t815 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.KeyPairPersistence::Save()
extern "C" void KeyPairPersistence_Save_m4896 (KeyPairPersistence_t815 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.KeyPairPersistence::Remove()
extern "C" void KeyPairPersistence_Remove_m4897 (KeyPairPersistence_t815 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Cryptography.KeyPairPersistence::get_UserPath()
extern "C" String_t* KeyPairPersistence_get_UserPath_m4898 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Cryptography.KeyPairPersistence::get_MachinePath()
extern "C" String_t* KeyPairPersistence_get_MachinePath_m4899 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.KeyPairPersistence::_CanSecure(System.String)
extern "C" bool KeyPairPersistence__CanSecure_m4900 (Object_t * __this /* static, unused */, String_t* ___root, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.KeyPairPersistence::_ProtectUser(System.String)
extern "C" bool KeyPairPersistence__ProtectUser_m4901 (Object_t * __this /* static, unused */, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.KeyPairPersistence::_ProtectMachine(System.String)
extern "C" bool KeyPairPersistence__ProtectMachine_m4902 (Object_t * __this /* static, unused */, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.KeyPairPersistence::_IsUserProtected(System.String)
extern "C" bool KeyPairPersistence__IsUserProtected_m4903 (Object_t * __this /* static, unused */, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.KeyPairPersistence::_IsMachineProtected(System.String)
extern "C" bool KeyPairPersistence__IsMachineProtected_m4904 (Object_t * __this /* static, unused */, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.KeyPairPersistence::CanSecure(System.String)
extern "C" bool KeyPairPersistence_CanSecure_m4905 (Object_t * __this /* static, unused */, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.KeyPairPersistence::ProtectUser(System.String)
extern "C" bool KeyPairPersistence_ProtectUser_m4906 (Object_t * __this /* static, unused */, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.KeyPairPersistence::ProtectMachine(System.String)
extern "C" bool KeyPairPersistence_ProtectMachine_m4907 (Object_t * __this /* static, unused */, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.KeyPairPersistence::IsUserProtected(System.String)
extern "C" bool KeyPairPersistence_IsUserProtected_m4908 (Object_t * __this /* static, unused */, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.KeyPairPersistence::IsMachineProtected(System.String)
extern "C" bool KeyPairPersistence_IsMachineProtected_m4909 (Object_t * __this /* static, unused */, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.KeyPairPersistence::get_CanChange()
extern "C" bool KeyPairPersistence_get_CanChange_m4910 (KeyPairPersistence_t815 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.KeyPairPersistence::get_UseDefaultKeyContainer()
extern "C" bool KeyPairPersistence_get_UseDefaultKeyContainer_m4911 (KeyPairPersistence_t815 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.KeyPairPersistence::get_UseMachineKeyStore()
extern "C" bool KeyPairPersistence_get_UseMachineKeyStore_m4912 (KeyPairPersistence_t815 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Cryptography.KeyPairPersistence::get_ContainerName()
extern "C" String_t* KeyPairPersistence_get_ContainerName_m4913 (KeyPairPersistence_t815 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.CspParameters Mono.Security.Cryptography.KeyPairPersistence::Copy(System.Security.Cryptography.CspParameters)
extern "C" CspParameters_t720 * KeyPairPersistence_Copy_m4914 (KeyPairPersistence_t815 * __this, CspParameters_t720 * ___p, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.KeyPairPersistence::FromXml(System.String)
extern "C" void KeyPairPersistence_FromXml_m4915 (KeyPairPersistence_t815 * __this, String_t* ___xml, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Cryptography.KeyPairPersistence::ToXml()
extern "C" String_t* KeyPairPersistence_ToXml_m4916 (KeyPairPersistence_t815 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
