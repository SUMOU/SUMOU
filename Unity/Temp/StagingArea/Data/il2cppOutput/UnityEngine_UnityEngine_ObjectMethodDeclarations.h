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

// UnityEngine.Object
struct Object_t9;
struct Object_t9_marshaled;
// UnityEngine.Object[]
struct ObjectU5BU5D_t237;
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.Object::.ctor()
extern "C" void Object__ctor_m472 (Object_t9 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object,System.Single)
extern "C" void Object_Destroy_m473 (Object_t * __this /* static, unused */, Object_t9 * ___obj, float ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
extern "C" void Object_Destroy_m26 (Object_t * __this /* static, unused */, Object_t9 * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object[] UnityEngine.Object::FindObjectsOfType(System.Type)
extern "C" ObjectU5BU5D_t237* Object_FindObjectsOfType_m474 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Object::get_name()
extern "C" String_t* Object_get_name_m475 (Object_t9 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
extern "C" void Object_DontDestroyOnLoad_m27 (Object_t * __this /* static, unused */, Object_t9 * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Object::ToString()
extern "C" String_t* Object_ToString_m476 (Object_t9 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::Equals(System.Object)
extern "C" bool Object_Equals_m477 (Object_t9 * __this, Object_t * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Object::GetHashCode()
extern "C" int32_t Object_GetHashCode_m478 (Object_t9 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::CompareBaseObjects(UnityEngine.Object,UnityEngine.Object)
extern "C" bool Object_CompareBaseObjects_m479 (Object_t * __this /* static, unused */, Object_t9 * ___lhs, Object_t9 * ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::IsNativeObjectAlive(UnityEngine.Object)
extern "C" bool Object_IsNativeObjectAlive_m480 (Object_t * __this /* static, unused */, Object_t9 * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Object::GetInstanceID()
extern "C" int32_t Object_GetInstanceID_m481 (Object_t9 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.Object::GetCachedPtr()
extern "C" IntPtr_t Object_GetCachedPtr_m482 (Object_t9 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object UnityEngine.Object::FindObjectOfType(System.Type)
extern "C" Object_t9 * Object_FindObjectOfType_m21 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
extern "C" bool Object_op_Implicit_m483 (Object_t * __this /* static, unused */, Object_t9 * ___exists, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
extern "C" bool Object_op_Equality_m19 (Object_t * __this /* static, unused */, Object_t9 * ___x, Object_t9 * ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
extern "C" bool Object_op_Inequality_m24 (Object_t * __this /* static, unused */, Object_t9 * ___x, Object_t9 * ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void Object_t9_marshal(const Object_t9& unmarshaled, Object_t9_marshaled& marshaled);
extern "C" void Object_t9_marshal_back(const Object_t9_marshaled& marshaled, Object_t9& unmarshaled);
extern "C" void Object_t9_marshal_cleanup(Object_t9_marshaled& marshaled);
