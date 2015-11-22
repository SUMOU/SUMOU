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

// System.AppDomain
struct AppDomain_t1216;
// System.String
struct String_t;
// System.Reflection.Emit.AssemblyBuilder
struct AssemblyBuilder_t889;
// System.Reflection.AssemblyName
struct AssemblyName_t942;
// System.Security.Policy.Evidence
struct Evidence_t930;
// System.Security.PermissionSet
struct PermissionSet_t931;
// System.Reflection.Assembly
struct Assembly_t510;
// System.Runtime.Remoting.Contexts.Context
struct Context_t1038;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Reflection_Emit_AssemblyBuilderAccess.h"

// System.String System.AppDomain::getFriendlyName()
extern "C" String_t* AppDomain_getFriendlyName_m7611 (AppDomain_t1216 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.AppDomain System.AppDomain::getCurDomain()
extern "C" AppDomain_t1216 * AppDomain_getCurDomain_m7612 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.AppDomain System.AppDomain::get_CurrentDomain()
extern "C" AppDomain_t1216 * AppDomain_get_CurrentDomain_m7613 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.AssemblyBuilder System.AppDomain::DefineDynamicAssembly(System.Reflection.AssemblyName,System.Reflection.Emit.AssemblyBuilderAccess)
extern "C" AssemblyBuilder_t889 * AppDomain_DefineDynamicAssembly_m7614 (AppDomain_t1216 * __this, AssemblyName_t942 * ___name, int32_t ___access, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.AssemblyBuilder System.AppDomain::DefineDynamicAssembly(System.Reflection.AssemblyName,System.Reflection.Emit.AssemblyBuilderAccess,System.String,System.Security.Policy.Evidence,System.Security.PermissionSet,System.Security.PermissionSet,System.Security.PermissionSet,System.Boolean)
extern "C" AssemblyBuilder_t889 * AppDomain_DefineDynamicAssembly_m7615 (AppDomain_t1216 * __this, AssemblyName_t942 * ___name, int32_t ___access, String_t* ___dir, Evidence_t930 * ___evidence, PermissionSet_t931 * ___requiredPermissions, PermissionSet_t931 * ___optionalPermissions, PermissionSet_t931 * ___refusedPermissions, bool ___isSynchronized, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.AppDomain::LoadAssembly(System.String,System.Security.Policy.Evidence,System.Boolean)
extern "C" Assembly_t510 * AppDomain_LoadAssembly_m7616 (AppDomain_t1216 * __this, String_t* ___assemblyRef, Evidence_t930 * ___securityEvidence, bool ___refOnly, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.AppDomain::Load(System.String)
extern "C" Assembly_t510 * AppDomain_Load_m7617 (AppDomain_t1216 * __this, String_t* ___assemblyString, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.AppDomain::Load(System.String,System.Security.Policy.Evidence,System.Boolean)
extern "C" Assembly_t510 * AppDomain_Load_m7618 (AppDomain_t1216 * __this, String_t* ___assemblyString, Evidence_t930 * ___assemblySecurity, bool ___refonly, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Contexts.Context System.AppDomain::InternalSetContext(System.Runtime.Remoting.Contexts.Context)
extern "C" Context_t1038 * AppDomain_InternalSetContext_m7619 (Object_t * __this /* static, unused */, Context_t1038 * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Contexts.Context System.AppDomain::InternalGetContext()
extern "C" Context_t1038 * AppDomain_InternalGetContext_m7620 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Contexts.Context System.AppDomain::InternalGetDefaultContext()
extern "C" Context_t1038 * AppDomain_InternalGetDefaultContext_m7621 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.AppDomain::InternalGetProcessGuid(System.String)
extern "C" String_t* AppDomain_InternalGetProcessGuid_m7622 (Object_t * __this /* static, unused */, String_t* ___newguid, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.AppDomain::GetProcessGuid()
extern "C" String_t* AppDomain_GetProcessGuid_m7623 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.AppDomain::ToString()
extern "C" String_t* AppDomain_ToString_m7624 (AppDomain_t1216 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.AppDomain::ValidateAssemblyName(System.String)
extern "C" void AppDomain_ValidateAssemblyName_m7625 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.AppDomain::DoTypeResolve(System.Object)
extern "C" Assembly_t510 * AppDomain_DoTypeResolve_m7626 (AppDomain_t1216 * __this, Object_t * ___name_or_tb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
