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

// System.Security.SecurityContext
struct SecurityContext_t1254;
// System.Threading.CompressedStack
struct CompressedStack_t1255;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Security.SecurityContext::.ctor()
extern "C" void SecurityContext__ctor_m7714 (SecurityContext_t1254 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.SecurityContext::.ctor(System.Security.SecurityContext)
extern "C" void SecurityContext__ctor_m7715 (SecurityContext_t1254 * __this, SecurityContext_t1254 * ___sc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityContext System.Security.SecurityContext::Capture()
extern "C" SecurityContext_t1254 * SecurityContext_Capture_m7716 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.SecurityContext::get_FlowSuppressed()
extern "C" bool SecurityContext_get_FlowSuppressed_m7717 (SecurityContext_t1254 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.CompressedStack System.Security.SecurityContext::get_CompressedStack()
extern "C" CompressedStack_t1255 * SecurityContext_get_CompressedStack_m7718 (SecurityContext_t1254 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
