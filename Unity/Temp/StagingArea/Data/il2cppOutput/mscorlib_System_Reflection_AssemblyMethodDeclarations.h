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

// System.Reflection.Assembly
struct Assembly_t510;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Object[]
struct ObjectU5BU5D_t230;
// System.Reflection.Module
struct Module_t901;
// System.Type[]
struct TypeU5BU5D_t249;
// System.Reflection.AssemblyName
struct AssemblyName_t942;
// System.Security.Policy.Evidence
struct Evidence_t930;
// System.Reflection.Module[]
struct ModuleU5BU5D_t892;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void System.Reflection.Assembly::.ctor()
extern "C" void Assembly__ctor_m5813 (Assembly_t510 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Assembly::get_code_base(System.Boolean)
extern "C" String_t* Assembly_get_code_base_m5814 (Assembly_t510 * __this, bool ___escaped, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Assembly::get_fullname()
extern "C" String_t* Assembly_get_fullname_m5815 (Assembly_t510 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Assembly::get_location()
extern "C" String_t* Assembly_get_location_m5816 (Assembly_t510 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Assembly::GetCodeBase(System.Boolean)
extern "C" String_t* Assembly_GetCodeBase_m5817 (Assembly_t510 * __this, bool ___escaped, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Assembly::get_FullName()
extern "C" String_t* Assembly_get_FullName_m5818 (Assembly_t510 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Assembly::get_Location()
extern "C" String_t* Assembly_get_Location_m5819 (Assembly_t510 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Assembly::IsDefined(System.Type,System.Boolean)
extern "C" bool Assembly_IsDefined_m5820 (Assembly_t510 * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Assembly::GetCustomAttributes(System.Type,System.Boolean)
extern "C" ObjectU5BU5D_t230* Assembly_GetCustomAttributes_m5821 (Assembly_t510 * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.Reflection.Assembly::GetManifestResourceInternal(System.String,System.Int32&,System.Reflection.Module&)
extern "C" IntPtr_t Assembly_GetManifestResourceInternal_m5822 (Assembly_t510 * __this, String_t* ___name, int32_t* ___size, Module_t901 ** ___module, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.Assembly::GetTypes(System.Boolean)
extern "C" TypeU5BU5D_t249* Assembly_GetTypes_m5823 (Assembly_t510 * __this, bool ___exportedOnly, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.Assembly::GetTypes()
extern "C" TypeU5BU5D_t249* Assembly_GetTypes_m5824 (Assembly_t510 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Assembly::GetType(System.String,System.Boolean)
extern "C" Type_t * Assembly_GetType_m5825 (Assembly_t510 * __this, String_t* ___name, bool ___throwOnError, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Assembly::GetType(System.String)
extern "C" Type_t * Assembly_GetType_m5826 (Assembly_t510 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Assembly::InternalGetType(System.Reflection.Module,System.String,System.Boolean,System.Boolean)
extern "C" Type_t * Assembly_InternalGetType_m5827 (Assembly_t510 * __this, Module_t901 * ___module, String_t* ___name, bool ___throwOnError, bool ___ignoreCase, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Assembly::GetType(System.String,System.Boolean,System.Boolean)
extern "C" Type_t * Assembly_GetType_m5828 (Assembly_t510 * __this, String_t* ___name, bool ___throwOnError, bool ___ignoreCase, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Assembly::FillName(System.Reflection.Assembly,System.Reflection.AssemblyName)
extern "C" void Assembly_FillName_m5829 (Object_t * __this /* static, unused */, Assembly_t510 * ___ass, AssemblyName_t942 * ___aname, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.AssemblyName System.Reflection.Assembly::GetName(System.Boolean)
extern "C" AssemblyName_t942 * Assembly_GetName_m5830 (Assembly_t510 * __this, bool ___copiedName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.AssemblyName System.Reflection.Assembly::GetName()
extern "C" AssemblyName_t942 * Assembly_GetName_m5831 (Assembly_t510 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.AssemblyName System.Reflection.Assembly::UnprotectedGetName()
extern "C" AssemblyName_t942 * Assembly_UnprotectedGetName_m5832 (Assembly_t510 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Assembly::ToString()
extern "C" String_t* Assembly_ToString_m5833 (Assembly_t510 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.Reflection.Assembly::Load(System.String)
extern "C" Assembly_t510 * Assembly_Load_m5834 (Object_t * __this /* static, unused */, String_t* ___assemblyString, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.Reflection.Assembly::LoadWithPartialName(System.String)
extern "C" Assembly_t510 * Assembly_LoadWithPartialName_m5835 (Object_t * __this /* static, unused */, String_t* ___partialName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.Reflection.Assembly::load_with_partial_name(System.String,System.Security.Policy.Evidence)
extern "C" Assembly_t510 * Assembly_load_with_partial_name_m5836 (Object_t * __this /* static, unused */, String_t* ___name, Evidence_t930 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.Reflection.Assembly::LoadWithPartialName(System.String,System.Security.Policy.Evidence)
extern "C" Assembly_t510 * Assembly_LoadWithPartialName_m5837 (Object_t * __this /* static, unused */, String_t* ___partialName, Evidence_t930 * ___securityEvidence, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.Reflection.Assembly::LoadWithPartialName(System.String,System.Security.Policy.Evidence,System.Boolean)
extern "C" Assembly_t510 * Assembly_LoadWithPartialName_m5838 (Object_t * __this /* static, unused */, String_t* ___partialName, Evidence_t930 * ___securityEvidence, bool ___oldBehavior, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module System.Reflection.Assembly::GetModule(System.String)
extern "C" Module_t901 * Assembly_GetModule_m5839 (Assembly_t510 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module[] System.Reflection.Assembly::GetModulesInternal()
extern "C" ModuleU5BU5D_t892* Assembly_GetModulesInternal_m5840 (Assembly_t510 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module[] System.Reflection.Assembly::GetModules(System.Boolean)
extern "C" ModuleU5BU5D_t892* Assembly_GetModules_m5841 (Assembly_t510 * __this, bool ___getResourceModules, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.Reflection.Assembly::GetExecutingAssembly()
extern "C" Assembly_t510 * Assembly_GetExecutingAssembly_m5842 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module System.Reflection.Assembly::GetManifestModule()
extern "C" Module_t901 * Assembly_GetManifestModule_m5843 (Assembly_t510 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module System.Reflection.Assembly::GetManifestModuleInternal()
extern "C" Module_t901 * Assembly_GetManifestModuleInternal_m5844 (Assembly_t510 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
