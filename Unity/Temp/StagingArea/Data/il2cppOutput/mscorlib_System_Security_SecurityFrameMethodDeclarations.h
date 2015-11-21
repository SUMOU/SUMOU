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

// System.Security.RuntimeSecurityFrame
struct RuntimeSecurityFrame_t1260;
// System.Array
struct Array_t;
// System.Reflection.Assembly
struct Assembly_t555;
// System.AppDomain
struct AppDomain_t1261;
// System.String
struct String_t;
// System.Collections.ArrayList
struct ArrayList_t71;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_SecurityFrame.h"

// System.Void System.Security.SecurityFrame::.ctor(System.Security.RuntimeSecurityFrame)
extern "C" void SecurityFrame__ctor_m7751 (SecurityFrame_t1262 * __this, RuntimeSecurityFrame_t1260 * ___frame, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Array System.Security.SecurityFrame::_GetSecurityStack(System.Int32)
extern "C" Array_t * SecurityFrame__GetSecurityStack_m7752 (Object_t * __this /* static, unused */, int32_t ___skip, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.SecurityFrame::InitFromRuntimeFrame(System.Security.RuntimeSecurityFrame)
extern "C" void SecurityFrame_InitFromRuntimeFrame_m7753 (SecurityFrame_t1262 * __this, RuntimeSecurityFrame_t1260 * ___frame, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.Security.SecurityFrame::get_Assembly()
extern "C" Assembly_t555 * SecurityFrame_get_Assembly_m7754 (SecurityFrame_t1262 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.AppDomain System.Security.SecurityFrame::get_Domain()
extern "C" AppDomain_t1261 * SecurityFrame_get_Domain_m7755 (SecurityFrame_t1262 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.SecurityFrame::ToString()
extern "C" String_t* SecurityFrame_ToString_m7756 (SecurityFrame_t1262 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Security.SecurityFrame::GetStack(System.Int32)
extern "C" ArrayList_t71 * SecurityFrame_GetStack_m7757 (Object_t * __this /* static, unused */, int32_t ___skipFrames, const MethodInfo* method) IL2CPP_METHOD_ATTR;
