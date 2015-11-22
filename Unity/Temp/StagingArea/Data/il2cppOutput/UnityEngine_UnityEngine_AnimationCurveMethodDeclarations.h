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

// UnityEngine.AnimationCurve
struct AnimationCurve_t135;
struct AnimationCurve_t135_marshaled;
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_t240;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.AnimationCurve::.ctor(UnityEngine.Keyframe[])
extern "C" void AnimationCurve__ctor_m588 (AnimationCurve_t135 * __this, KeyframeU5BU5D_t240* ___keys, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::.ctor()
extern "C" void AnimationCurve__ctor_m589 (AnimationCurve_t135 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Cleanup()
extern "C" void AnimationCurve_Cleanup_m590 (AnimationCurve_t135 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Finalize()
extern "C" void AnimationCurve_Finalize_m591 (AnimationCurve_t135 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Init(UnityEngine.Keyframe[])
extern "C" void AnimationCurve_Init_m592 (AnimationCurve_t135 * __this, KeyframeU5BU5D_t240* ___keys, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void AnimationCurve_t135_marshal(const AnimationCurve_t135& unmarshaled, AnimationCurve_t135_marshaled& marshaled);
extern "C" void AnimationCurve_t135_marshal_back(const AnimationCurve_t135_marshaled& marshaled, AnimationCurve_t135& unmarshaled);
extern "C" void AnimationCurve_t135_marshal_cleanup(AnimationCurve_t135_marshaled& marshaled);
