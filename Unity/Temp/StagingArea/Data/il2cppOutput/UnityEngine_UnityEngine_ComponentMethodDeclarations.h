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
struct Component_t40;
// UnityEngine.GameObject
struct GameObject_t10;
// System.Type
struct Type_t;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.Component::.ctor()
extern "C" void Component__ctor_m484 (Component_t40 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
extern "C" GameObject_t10 * Component_get_gameObject_m25 (Component_t40 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component UnityEngine.Component::GetComponent(System.Type)
extern "C" Component_t40 * Component_GetComponent_m485 (Component_t40 * __this, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
