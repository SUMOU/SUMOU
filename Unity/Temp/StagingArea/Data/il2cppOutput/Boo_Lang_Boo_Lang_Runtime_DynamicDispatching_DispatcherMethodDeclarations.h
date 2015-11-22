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

// Boo.Lang.Runtime.DynamicDispatching.Dispatcher
struct Dispatcher_t282;
// System.Object
struct Object_t;
// System.Object[]
struct ObjectU5BU5D_t230;
// System.IAsyncResult
struct IAsyncResult_t75;
// System.AsyncCallback
struct AsyncCallback_t76;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "mscorlib_ArrayTypes.h"
#include "mscorlib_System_Object.h"

// System.Void Boo.Lang.Runtime.DynamicDispatching.Dispatcher::.ctor(System.Object,System.IntPtr)
extern "C" void Dispatcher__ctor_m1194 (Dispatcher_t282 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Boo.Lang.Runtime.DynamicDispatching.Dispatcher::Invoke(System.Object,System.Object[])
extern "C" Object_t * Dispatcher_Invoke_m1195 (Dispatcher_t282 * __this, Object_t * ___target, ObjectU5BU5D_t230* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" Object_t * pinvoke_delegate_wrapper_Dispatcher_t282(Il2CppObject* delegate, Object_t * ___target, ObjectU5BU5D_t230* ___args);
// System.IAsyncResult Boo.Lang.Runtime.DynamicDispatching.Dispatcher::BeginInvoke(System.Object,System.Object[],System.AsyncCallback,System.Object)
extern "C" Object_t * Dispatcher_BeginInvoke_m1196 (Dispatcher_t282 * __this, Object_t * ___target, ObjectU5BU5D_t230* ___args, AsyncCallback_t76 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Boo.Lang.Runtime.DynamicDispatching.Dispatcher::EndInvoke(System.IAsyncResult)
extern "C" Object_t * Dispatcher_EndInvoke_m1197 (Dispatcher_t282 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
