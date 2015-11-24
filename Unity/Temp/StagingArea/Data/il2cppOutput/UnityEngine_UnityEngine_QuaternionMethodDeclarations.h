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

// System.String
struct String_t;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Quaternion.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C" void Quaternion__ctor_m724 (Quaternion_t44 * __this, float ___x, float ___y, float ___z, float ___w, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::FromToRotation(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" Quaternion_t44  Quaternion_FromToRotation_m308 (Object_t * __this /* static, unused */, Vector3_t14  ___fromDirection, Vector3_t14  ___toDirection, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::INTERNAL_CALL_FromToRotation(UnityEngine.Vector3&,UnityEngine.Vector3&)
extern "C" Quaternion_t44  Quaternion_INTERNAL_CALL_FromToRotation_m725 (Object_t * __this /* static, unused */, Vector3_t14 * ___fromDirection, Vector3_t14 * ___toDirection, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::Inverse(UnityEngine.Quaternion)
extern "C" Quaternion_t44  Quaternion_Inverse_m726 (Object_t * __this /* static, unused */, Quaternion_t44  ___rotation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::INTERNAL_CALL_Inverse(UnityEngine.Quaternion&)
extern "C" Quaternion_t44  Quaternion_INTERNAL_CALL_Inverse_m727 (Object_t * __this /* static, unused */, Quaternion_t44 * ___rotation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Quaternion::ToString()
extern "C" String_t* Quaternion_ToString_m728 (Quaternion_t44 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Quaternion::get_eulerAngles()
extern "C" Vector3_t14  Quaternion_get_eulerAngles_m729 (Quaternion_t44 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
extern "C" Quaternion_t44  Quaternion_Euler_m572 (Object_t * __this /* static, unused */, float ___x, float ___y, float ___z, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(UnityEngine.Vector3)
extern "C" Quaternion_t44  Quaternion_Euler_m408 (Object_t * __this /* static, unused */, Vector3_t14  ___euler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Quaternion::Internal_ToEulerRad(UnityEngine.Quaternion)
extern "C" Vector3_t14  Quaternion_Internal_ToEulerRad_m730 (Object_t * __this /* static, unused */, Quaternion_t44  ___rotation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Quaternion::INTERNAL_CALL_Internal_ToEulerRad(UnityEngine.Quaternion&)
extern "C" Vector3_t14  Quaternion_INTERNAL_CALL_Internal_ToEulerRad_m731 (Object_t * __this /* static, unused */, Quaternion_t44 * ___rotation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
extern "C" Quaternion_t44  Quaternion_Internal_FromEulerRad_m732 (Object_t * __this /* static, unused */, Vector3_t14  ___euler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::INTERNAL_CALL_Internal_FromEulerRad(UnityEngine.Vector3&)
extern "C" Quaternion_t44  Quaternion_INTERNAL_CALL_Internal_FromEulerRad_m733 (Object_t * __this /* static, unused */, Vector3_t14 * ___euler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Quaternion::GetHashCode()
extern "C" int32_t Quaternion_GetHashCode_m734 (Quaternion_t44 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Quaternion::Equals(System.Object)
extern "C" bool Quaternion_Equals_m735 (Quaternion_t44 * __this, Object_t * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
extern "C" Quaternion_t44  Quaternion_op_Multiply_m736 (Object_t * __this /* static, unused */, Quaternion_t44  ___lhs, Quaternion_t44  ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
extern "C" Vector3_t14  Quaternion_op_Multiply_m309 (Object_t * __this /* static, unused */, Quaternion_t44  ___rotation, Vector3_t14  ___point, const MethodInfo* method) IL2CPP_METHOD_ATTR;
