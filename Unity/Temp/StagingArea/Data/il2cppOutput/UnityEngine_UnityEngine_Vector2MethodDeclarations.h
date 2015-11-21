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
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
extern "C" void Vector2__ctor_m310 (Vector2_t36 * __this, float ___x, float ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Vector2::ToString()
extern "C" String_t* Vector2_ToString_m692 (Vector2_t36 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Vector2::GetHashCode()
extern "C" int32_t Vector2_GetHashCode_m693 (Vector2_t36 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Vector2::Equals(System.Object)
extern "C" bool Vector2_Equals_m694 (Vector2_t36 * __this, Object_t * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector2::get_magnitude()
extern "C" float Vector2_get_magnitude_m311 (Vector2_t36 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector2::SqrMagnitude(UnityEngine.Vector2)
extern "C" float Vector2_SqrMagnitude_m695 (Object_t * __this /* static, unused */, Vector2_t36  ___a, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
extern "C" Vector2_t36  Vector2_get_zero_m696 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Addition(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C" Vector2_t36  Vector2_op_Addition_m419 (Object_t * __this /* static, unused */, Vector2_t36  ___a, Vector2_t36  ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Subtraction(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C" Vector2_t36  Vector2_op_Subtraction_m417 (Object_t * __this /* static, unused */, Vector2_t36  ___a, Vector2_t36  ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,System.Single)
extern "C" Vector2_t36  Vector2_op_Multiply_m418 (Object_t * __this /* static, unused */, Vector2_t36  ___a, float ___d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Vector2::op_Equality(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C" bool Vector2_op_Equality_m697 (Object_t * __this /* static, unused */, Vector2_t36  ___lhs, Vector2_t36  ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
