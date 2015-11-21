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

// UnityEngine.Component
struct Component_t70;
// UnityEngine.Transform
struct Transform_t32;
// UnityEngine.GameObject
struct GameObject_t34;
// System.Type
struct Type_t;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.Component::.ctor()
extern "C" void Component__ctor_m960 (Component_t70 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Component::get_transform()
extern "C" Transform_t32 * Component_get_transform_m318 (Component_t70 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
extern "C" GameObject_t34 * Component_get_gameObject_m319 (Component_t70 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component UnityEngine.Component::GetComponent(System.Type)
extern "C" Component_t70 * Component_GetComponent_m961 (Component_t70 * __this, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component UnityEngine.Component::GetComponent(System.String)
extern "C" Component_t70 * Component_GetComponent_m574 (Component_t70 * __this, String_t* ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
