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

// System.Reflection.Binder
struct Binder_t265;
// System.Object[]
struct ObjectU5BU5D_t230;
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t272;
// System.Globalization.CultureInfo
struct CultureInfo_t267;
// System.Type
struct Type_t;
// System.Reflection.MethodBase
struct MethodBase_t271;
// System.Reflection.MethodBase[]
struct MethodBaseU5BU5D_t1376;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Reflection.Binder::.ctor()
extern "C" void Binder__ctor_m5893 (Binder_t265 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Binder::.cctor()
extern "C" void Binder__cctor_m5894 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Binder System.Reflection.Binder::get_DefaultBinder()
extern "C" Binder_t265 * Binder_get_DefaultBinder_m5895 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Binder::ConvertArgs(System.Reflection.Binder,System.Object[],System.Reflection.ParameterInfo[],System.Globalization.CultureInfo)
extern "C" bool Binder_ConvertArgs_m5896 (Object_t * __this /* static, unused */, Binder_t265 * ___binder, ObjectU5BU5D_t230* ___args, ParameterInfoU5BU5D_t272* ___pinfo, CultureInfo_t267 * ___culture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Binder::GetDerivedLevel(System.Type)
extern "C" int32_t Binder_GetDerivedLevel_m5897 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodBase System.Reflection.Binder::FindMostDerivedMatch(System.Reflection.MethodBase[])
extern "C" MethodBase_t271 * Binder_FindMostDerivedMatch_m5898 (Object_t * __this /* static, unused */, MethodBaseU5BU5D_t1376* ___match, const MethodInfo* method) IL2CPP_METHOD_ATTR;
