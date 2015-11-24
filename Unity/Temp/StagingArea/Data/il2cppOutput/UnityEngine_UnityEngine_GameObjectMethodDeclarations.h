﻿#pragma once

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
struct GameObject_t34;
// System.String
struct String_t;
// UnityEngine.Component
struct Component_t70;
// System.Type
struct Type_t;
// System.Array
struct Array_t;
// System.Object
struct Object_t;
// UnityEngine.Transform
struct Transform_t32;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_SendMessageOptions.h"

// System.Void UnityEngine.GameObject::.ctor(System.String)
extern "C" void GameObject__ctor_m431 (GameObject_t34 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component UnityEngine.GameObject::GetComponent(System.Type)
extern "C" Component_t70 * GameObject_GetComponent_m601 (GameObject_t34 * __this, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component UnityEngine.GameObject::GetComponentByName(System.String)
extern "C" Component_t70 * GameObject_GetComponentByName_m964 (GameObject_t34 * __this, String_t* ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component UnityEngine.GameObject::GetComponent(System.String)
extern "C" Component_t70 * GameObject_GetComponent_m594 (GameObject_t34 * __this, String_t* ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Array UnityEngine.GameObject::GetComponentsInternal(System.Type,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.Object)
extern "C" Array_t * GameObject_GetComponentsInternal_m965 (GameObject_t34 * __this, Type_t * ___type, bool ___useSearchTypeAsArrayReturnType, bool ___recursive, bool ___includeInactive, bool ___reverse, Object_t * ___resultList, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
extern "C" Transform_t32 * GameObject_get_transform_m344 (GameObject_t34 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GameObject::SetActiveRecursively(System.Boolean)
extern "C" void GameObject_SetActiveRecursively_m602 (GameObject_t34 * __this, bool ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GameObject::SendMessage(System.String,System.Object,UnityEngine.SendMessageOptions)
extern "C" void GameObject_SendMessage_m458 (GameObject_t34 * __this, String_t* ___methodName, Object_t * ___value, int32_t ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component UnityEngine.GameObject::Internal_AddComponentWithType(System.Type)
extern "C" Component_t70 * GameObject_Internal_AddComponentWithType_m966 (GameObject_t34 * __this, Type_t * ___componentType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component UnityEngine.GameObject::AddComponent(System.Type)
extern "C" Component_t70 * GameObject_AddComponent_m967 (GameObject_t34 * __this, Type_t * ___componentType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GameObject::Internal_CreateGameObject(UnityEngine.GameObject,System.String)
extern "C" void GameObject_Internal_CreateGameObject_m968 (Object_t * __this /* static, unused */, GameObject_t34 * ___mono, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
extern "C" GameObject_t34 * GameObject_Find_m579 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
