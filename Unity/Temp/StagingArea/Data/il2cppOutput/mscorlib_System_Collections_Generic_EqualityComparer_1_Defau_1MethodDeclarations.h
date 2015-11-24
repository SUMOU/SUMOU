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

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>
struct DefaultComparer_t1532;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_UIVertex.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>::.ctor()
extern "C" void DefaultComparer__ctor_m9492_gshared (DefaultComparer_t1532 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m9492(__this, method) (( void (*) (DefaultComparer_t1532 *, const MethodInfo*))DefaultComparer__ctor_m9492_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m9493_gshared (DefaultComparer_t1532 * __this, UIVertex_t207  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m9493(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t1532 *, UIVertex_t207 , const MethodInfo*))DefaultComparer_GetHashCode_m9493_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m9494_gshared (DefaultComparer_t1532 * __this, UIVertex_t207  ___x, UIVertex_t207  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m9494(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t1532 *, UIVertex_t207 , UIVertex_t207 , const MethodInfo*))DefaultComparer_Equals_m9494_gshared)(__this, ___x, ___y, method)
