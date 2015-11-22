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

// UnityEngine.GameObject
struct GameObject_t10;
// UnityEngine.Component
struct Component_t40;
// System.Type
struct Type_t;
// System.String
struct String_t;
// UnityEngine.Transform
struct Transform_t45;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_SendMessageOptions.h"

// UnityEngine.Component UnityEngine.GameObject::GetComponent(System.Type)
extern "C" Component_t40 * GameObject_GetComponent_m120 (GameObject_t10 * __this, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component UnityEngine.GameObject::GetComponentByName(System.String)
extern "C" Component_t40 * GameObject_GetComponentByName_m486 (GameObject_t10 * __this, String_t* ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component UnityEngine.GameObject::GetComponent(System.String)
extern "C" Component_t40 * GameObject_GetComponent_m109 (GameObject_t10 * __this, String_t* ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
extern "C" Transform_t45 * GameObject_get_transform_m137 (GameObject_t10 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GameObject::SetActiveRecursively(System.Boolean)
extern "C" void GameObject_SetActiveRecursively_m121 (GameObject_t10 * __this, bool ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GameObject::SendMessage(System.String,System.Object,UnityEngine.SendMessageOptions)
extern "C" void GameObject_SendMessage_m487 (GameObject_t10 * __this, String_t* ___methodName, Object_t * ___value, int32_t ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
extern "C" GameObject_t10 * GameObject_Find_m108 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
