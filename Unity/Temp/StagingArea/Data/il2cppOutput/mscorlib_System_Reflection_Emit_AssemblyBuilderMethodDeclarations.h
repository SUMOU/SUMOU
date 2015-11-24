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

// System.Reflection.Emit.AssemblyBuilder
struct AssemblyBuilder_t934;
// System.Reflection.AssemblyName
struct AssemblyName_t987;
// System.String
struct String_t;
// System.Security.PermissionSet
struct PermissionSet_t976;
// System.Reflection.Emit.ModuleBuilder
struct ModuleBuilder_t938;
// System.Reflection.Module[]
struct ModuleU5BU5D_t937;
// System.Type[]
struct TypeU5BU5D_t300;
// System.Reflection.Module
struct Module_t946;
// System.Exception
struct Exception_t55;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Reflection_Emit_AssemblyBuilderAccess.h"

// System.Void System.Reflection.Emit.AssemblyBuilder::.ctor(System.Reflection.AssemblyName,System.String,System.Reflection.Emit.AssemblyBuilderAccess,System.Boolean)
extern "C" void AssemblyBuilder__ctor_m6016 (AssemblyBuilder_t934 * __this, AssemblyName_t987 * ___n, String_t* ___directory, int32_t ___access, bool ___corlib_internal, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.AssemblyBuilder::basic_init(System.Reflection.Emit.AssemblyBuilder)
extern "C" void AssemblyBuilder_basic_init_m6017 (Object_t * __this /* static, unused */, AssemblyBuilder_t934 * ___ab, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.AssemblyBuilder::get_Location()
extern "C" String_t* AssemblyBuilder_get_Location_m6018 (AssemblyBuilder_t934 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.AssemblyBuilder::AddPermissionRequests(System.Security.PermissionSet,System.Security.PermissionSet,System.Security.PermissionSet)
extern "C" void AssemblyBuilder_AddPermissionRequests_m6019 (AssemblyBuilder_t934 * __this, PermissionSet_t976 * ___required, PermissionSet_t976 * ___optional, PermissionSet_t976 * ___refused, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.ModuleBuilder System.Reflection.Emit.AssemblyBuilder::DefineDynamicModule(System.String)
extern "C" ModuleBuilder_t938 * AssemblyBuilder_DefineDynamicModule_m6020 (AssemblyBuilder_t934 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.ModuleBuilder System.Reflection.Emit.AssemblyBuilder::DefineDynamicModule(System.String,System.String,System.Boolean,System.Boolean)
extern "C" ModuleBuilder_t938 * AssemblyBuilder_DefineDynamicModule_m6021 (AssemblyBuilder_t934 * __this, String_t* ___name, String_t* ___fileName, bool ___emitSymbolInfo, bool ___transient, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module[] System.Reflection.Emit.AssemblyBuilder::GetModulesInternal()
extern "C" ModuleU5BU5D_t937* AssemblyBuilder_GetModulesInternal_m6022 (AssemblyBuilder_t934 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.Emit.AssemblyBuilder::GetTypes(System.Boolean)
extern "C" TypeU5BU5D_t300* AssemblyBuilder_GetTypes_m6023 (AssemblyBuilder_t934 * __this, bool ___exportedOnly, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.AssemblyBuilder::get_IsCompilerContext()
extern "C" bool AssemblyBuilder_get_IsCompilerContext_m6024 (AssemblyBuilder_t934 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.AssemblyBuilder::get_IsSave()
extern "C" bool AssemblyBuilder_get_IsSave_m6025 (AssemblyBuilder_t934 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.AssemblyBuilder::get_IsRun()
extern "C" bool AssemblyBuilder_get_IsRun_m6026 (AssemblyBuilder_t934 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.AssemblyBuilder::get_AssemblyDir()
extern "C" String_t* AssemblyBuilder_get_AssemblyDir_m6027 (AssemblyBuilder_t934 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module System.Reflection.Emit.AssemblyBuilder::GetManifestModule()
extern "C" Module_t946 * AssemblyBuilder_GetManifestModule_m6028 (AssemblyBuilder_t934 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Reflection.Emit.AssemblyBuilder::not_supported()
extern "C" Exception_t55 * AssemblyBuilder_not_supported_m6029 (AssemblyBuilder_t934 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.AssemblyBuilder::check_name_and_filename(System.String,System.String,System.Boolean)
extern "C" void AssemblyBuilder_check_name_and_filename_m6030 (AssemblyBuilder_t934 * __this, String_t* ___name, String_t* ___fileName, bool ___fileNeedsToExists, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.AssemblyName System.Reflection.Emit.AssemblyBuilder::UnprotectedGetName()
extern "C" AssemblyName_t987 * AssemblyBuilder_UnprotectedGetName_m6031 (AssemblyBuilder_t934 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
