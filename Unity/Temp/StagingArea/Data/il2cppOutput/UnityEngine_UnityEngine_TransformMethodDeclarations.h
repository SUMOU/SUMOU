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

// UnityEngine.Transform
struct Transform_t45;
// System.Collections.IEnumerator
struct IEnumerator_t5;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3.h"
#include "UnityEngine_UnityEngine_Space.h"

// UnityEngine.Vector3 UnityEngine.Transform::get_position()
extern "C" Vector3_t84  Transform_get_position_m492 (Transform_t45 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
extern "C" void Transform_set_position_m493 (Transform_t45 * __this, Vector3_t84  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_get_position(UnityEngine.Vector3&)
extern "C" void Transform_INTERNAL_get_position_m494 (Transform_t45 * __this, Vector3_t84 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_set_position(UnityEngine.Vector3&)
extern "C" void Transform_INTERNAL_set_position_m495 (Transform_t45 * __this, Vector3_t84 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::Translate(UnityEngine.Vector3,UnityEngine.Space)
extern "C" void Transform_Translate_m496 (Transform_t45 * __this, Vector3_t84  ___translation, int32_t ___relativeTo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::Translate(System.Single,System.Single,System.Single)
extern "C" void Transform_Translate_m138 (Transform_t45 * __this, float ___x, float ___y, float ___z, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::Translate(System.Single,System.Single,System.Single,UnityEngine.Space)
extern "C" void Transform_Translate_m497 (Transform_t45 * __this, float ___x, float ___y, float ___z, int32_t ___relativeTo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::TransformDirection(UnityEngine.Vector3)
extern "C" Vector3_t84  Transform_TransformDirection_m498 (Transform_t45 * __this, Vector3_t84  ___direction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::INTERNAL_CALL_TransformDirection(UnityEngine.Transform,UnityEngine.Vector3&)
extern "C" Vector3_t84  Transform_INTERNAL_CALL_TransformDirection_m499 (Object_t * __this /* static, unused */, Transform_t45 * ___self, Vector3_t84 * ___direction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Transform::get_childCount()
extern "C" int32_t Transform_get_childCount_m500 (Transform_t45 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UnityEngine.Transform::GetEnumerator()
extern "C" Object_t * Transform_GetEnumerator_m501 (Transform_t45 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
extern "C" Transform_t45 * Transform_GetChild_m502 (Transform_t45 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
