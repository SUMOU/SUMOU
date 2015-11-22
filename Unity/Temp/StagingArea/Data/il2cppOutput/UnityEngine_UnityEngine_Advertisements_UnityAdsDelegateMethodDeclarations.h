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

// UnityEngine.Advertisements.UnityAdsDelegate
struct UnityAdsDelegate_t115;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t75;
// System.AsyncCallback
struct AsyncCallback_t76;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.Advertisements.UnityAdsDelegate::.ctor(System.Object,System.IntPtr)
extern "C" void UnityAdsDelegate__ctor_m1052 (UnityAdsDelegate_t115 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.UnityAdsDelegate::Invoke()
extern "C" void UnityAdsDelegate_Invoke_m1053 (UnityAdsDelegate_t115 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_UnityAdsDelegate_t115(Il2CppObject* delegate);
// System.IAsyncResult UnityEngine.Advertisements.UnityAdsDelegate::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * UnityAdsDelegate_BeginInvoke_m1054 (UnityAdsDelegate_t115 * __this, AsyncCallback_t76 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.UnityAdsDelegate::EndInvoke(System.IAsyncResult)
extern "C" void UnityAdsDelegate_EndInvoke_m1055 (UnityAdsDelegate_t115 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
