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

// System.Reflection.Emit.DynamicMethodTokenGenerator
struct DynamicMethodTokenGenerator_t903;
// System.Reflection.Emit.DynamicMethod
struct DynamicMethod_t289;
// System.Reflection.MemberInfo
struct MemberInfo_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Reflection.Emit.DynamicMethodTokenGenerator::.ctor(System.Reflection.Emit.DynamicMethod)
extern "C" void DynamicMethodTokenGenerator__ctor_m5576 (DynamicMethodTokenGenerator_t903 * __this, DynamicMethod_t289 * ___m, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.DynamicMethodTokenGenerator::GetToken(System.Reflection.MemberInfo)
extern "C" int32_t DynamicMethodTokenGenerator_GetToken_m5577 (DynamicMethodTokenGenerator_t903 * __this, MemberInfo_t * ___member, const MethodInfo* method) IL2CPP_METHOD_ATTR;
