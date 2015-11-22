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

// System.AppDomainInitializer
struct AppDomainInitializer_t1272;
// System.Object
struct Object_t;
// System.String[]
struct StringU5BU5D_t238;
// System.IAsyncResult
struct IAsyncResult_t75;
// System.AsyncCallback
struct AsyncCallback_t76;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "mscorlib_ArrayTypes.h"
#include "mscorlib_System_String.h"

// System.Void System.AppDomainInitializer::.ctor(System.Object,System.IntPtr)
extern "C" void AppDomainInitializer__ctor_m8457 (AppDomainInitializer_t1272 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.AppDomainInitializer::Invoke(System.String[])
extern "C" void AppDomainInitializer_Invoke_m8458 (AppDomainInitializer_t1272 * __this, StringU5BU5D_t238* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_AppDomainInitializer_t1272(Il2CppObject* delegate, StringU5BU5D_t238* ___args);
// System.IAsyncResult System.AppDomainInitializer::BeginInvoke(System.String[],System.AsyncCallback,System.Object)
extern "C" Object_t * AppDomainInitializer_BeginInvoke_m8459 (AppDomainInitializer_t1272 * __this, StringU5BU5D_t238* ___args, AsyncCallback_t76 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.AppDomainInitializer::EndInvoke(System.IAsyncResult)
extern "C" void AppDomainInitializer_EndInvoke_m8460 (AppDomainInitializer_t1272 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
