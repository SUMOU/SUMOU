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

// JoystickToEvents
struct JoystickToEvents_t3;
// UnityEngine.Transform
struct Transform_t32;

#include "codegen/il2cpp-codegen.h"

// System.Void JoystickToEvents::.ctor()
extern "C" void JoystickToEvents__ctor_m2 (JoystickToEvents_t3 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JoystickToEvents::Do(UnityEngine.Transform,UnityEngine.Transform,System.Single&,System.Single&)
extern "C" void JoystickToEvents_Do_m3 (Object_t * __this /* static, unused */, Transform_t32 * ___root, Transform_t32 * ___camera, float* ___speed, float* ___direction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
