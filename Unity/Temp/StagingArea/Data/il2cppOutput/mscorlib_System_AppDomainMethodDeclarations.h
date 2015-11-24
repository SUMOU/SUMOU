﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.AppDomain
struct AppDomain_t1261;
// System.String
struct String_t;
// System.Reflection.Emit.AssemblyBuilder
struct AssemblyBuilder_t934;
// System.Reflection.AssemblyName
struct AssemblyName_t987;
// System.Security.Policy.Evidence
struct Evidence_t975;
// System.Security.PermissionSet
struct PermissionSet_t976;
// System.Reflection.Assembly
struct Assembly_t555;
// System.Runtime.Remoting.Contexts.Context
struct Context_t1083;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Reflection_Emit_AssemblyBuilderAccess.h"

// System.String System.AppDomain::getFriendlyName()
extern "C" String_t* AppDomain_getFriendlyName_m8119 (AppDomain_t1261 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.AppDomain System.AppDomain::getCurDomain()
extern "C" AppDomain_t1261 * AppDomain_getCurDomain_m8120 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.AppDomain System.AppDomain::get_CurrentDomain()
extern "C" AppDomain_t1261 * AppDomain_get_CurrentDomain_m8121 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.AssemblyBuilder System.AppDomain::DefineDynamicAssembly(System.Reflection.AssemblyName,System.Reflection.Emit.AssemblyBuilderAccess)
extern "C" AssemblyBuilder_t934 * AppDomain_DefineDynamicAssembly_m8122 (AppDomain_t1261 * __this, AssemblyName_t987 * ___name, int32_t ___access, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.AssemblyBuilder System.AppDomain::DefineDynamicAssembly(System.Reflection.AssemblyName,System.Reflection.Emit.AssemblyBuilderAccess,System.String,System.Security.Policy.Evidence,System.Security.PermissionSet,System.Security.PermissionSet,System.Security.PermissionSet,System.Boolean)
extern "C" AssemblyBuilder_t934 * AppDomain_DefineDynamicAssembly_m8123 (AppDomain_t1261 * __this, AssemblyName_t987 * ___name, int32_t ___access, String_t* ___dir, Evidence_t975 * ___evidence, PermissionSet_t976 * ___requiredPermissions, PermissionSet_t976 * ___optionalPermissions, PermissionSet_t976 * ___refusedPermissions, bool ___isSynchronized, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.AppDomain::LoadAssembly(System.String,System.Security.Policy.Evidence,System.Boolean)
extern "C" Assembly_t555 * AppDomain_LoadAssembly_m8124 (AppDomain_t1261 * __this, String_t* ___assemblyRef, Evidence_t975 * ___securityEvidence, bool ___refOnly, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.AppDomain::Load(System.String)
extern "C" Assembly_t555 * AppDomain_Load_m8125 (AppDomain_t1261 * __this, String_t* ___assemblyString, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.AppDomain::Load(System.String,System.Security.Policy.Evidence,System.Boolean)
extern "C" Assembly_t555 * AppDomain_Load_m8126 (AppDomain_t1261 * __this, String_t* ___assemblyString, Evidence_t975 * ___assemblySecurity, bool ___refonly, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Contexts.Context System.AppDomain::InternalSetContext(System.Runtime.Remoting.Contexts.Context)
extern "C" Context_t1083 * AppDomain_InternalSetContext_m8127 (Object_t * __this /* static, unused */, Context_t1083 * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Contexts.Context System.AppDomain::InternalGetContext()
extern "C" Context_t1083 * AppDomain_InternalGetContext_m8128 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Contexts.Context System.AppDomain::InternalGetDefaultContext()
extern "C" Context_t1083 * AppDomain_InternalGetDefaultContext_m8129 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.AppDomain::InternalGetProcessGuid(System.String)
extern "C" String_t* AppDomain_InternalGetProcessGuid_m8130 (Object_t * __this /* static, unused */, String_t* ___newguid, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.AppDomain::GetProcessGuid()
extern "C" String_t* AppDomain_GetProcessGuid_m8131 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.AppDomain::ToString()
extern "C" String_t* AppDomain_ToString_m8132 (AppDomain_t1261 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.AppDomain::ValidateAssemblyName(System.String)
extern "C" void AppDomain_ValidateAssemblyName_m8133 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.AppDomain::DoTypeResolve(System.Object)
extern "C" Assembly_t555 * AppDomain_DoTypeResolve_m8134 (AppDomain_t1261 * __this, Object_t * ___name_or_tb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
