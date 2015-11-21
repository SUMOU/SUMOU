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

// iTween/ApplyTween
struct ApplyTween_t21;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t19;
// System.AsyncCallback
struct AsyncCallback_t20;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void iTween/ApplyTween::.ctor(System.Object,System.IntPtr)
extern "C" void ApplyTween__ctor_m20 (ApplyTween_t21 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween/ApplyTween::Invoke()
extern "C" void ApplyTween_Invoke_m21 (ApplyTween_t21 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_ApplyTween_t21(Il2CppObject* delegate);
// System.IAsyncResult iTween/ApplyTween::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * ApplyTween_BeginInvoke_m22 (ApplyTween_t21 * __this, AsyncCallback_t20 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween/ApplyTween::EndInvoke(System.IAsyncResult)
extern "C" void ApplyTween_EndInvoke_m23 (ApplyTween_t21 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
