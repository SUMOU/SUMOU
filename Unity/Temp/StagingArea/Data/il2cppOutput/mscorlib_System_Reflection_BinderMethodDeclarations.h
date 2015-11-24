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
struct Binder_t313;
// System.Object[]
struct ObjectU5BU5D_t41;
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t320;
// System.Globalization.CultureInfo
struct CultureInfo_t315;
// System.Type
struct Type_t;
// System.Reflection.MethodBase
struct MethodBase_t319;
// System.Reflection.MethodBase[]
struct MethodBaseU5BU5D_t1420;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Reflection.Binder::.ctor()
extern "C" void Binder__ctor_m6402 (Binder_t313 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Binder::.cctor()
extern "C" void Binder__cctor_m6403 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Binder System.Reflection.Binder::get_DefaultBinder()
extern "C" Binder_t313 * Binder_get_DefaultBinder_m6404 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Binder::ConvertArgs(System.Reflection.Binder,System.Object[],System.Reflection.ParameterInfo[],System.Globalization.CultureInfo)
extern "C" bool Binder_ConvertArgs_m6405 (Object_t * __this /* static, unused */, Binder_t313 * ___binder, ObjectU5BU5D_t41* ___args, ParameterInfoU5BU5D_t320* ___pinfo, CultureInfo_t315 * ___culture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Binder::GetDerivedLevel(System.Type)
extern "C" int32_t Binder_GetDerivedLevel_m6406 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodBase System.Reflection.Binder::FindMostDerivedMatch(System.Reflection.MethodBase[])
extern "C" MethodBase_t319 * Binder_FindMostDerivedMatch_m6407 (Object_t * __this /* static, unused */, MethodBaseU5BU5D_t1420* ___match, const MethodInfo* method) IL2CPP_METHOD_ATTR;
