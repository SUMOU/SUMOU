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
// UnityEngine.AsyncOperation
struct AsyncOperation_t48;
struct AsyncOperation_t48_marshaled;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_LogType.h"

// System.String UnityEngine.Application::get_loadedLevelName()
extern "C" String_t* Application_get_loadedLevelName_m37 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Application::LoadLevel(System.String)
extern "C" void Application_LoadLevel_m15 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AsyncOperation UnityEngine.Application::LoadLevelAsync(System.String,System.Int32,System.Boolean,System.Boolean)
extern "C" AsyncOperation_t48 * Application_LoadLevelAsync_m405 (Object_t * __this /* static, unused */, String_t* ___monoLevelName, int32_t ___index, bool ___additive, bool ___mustCompleteNextFrame, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Application::CallLogCallback(System.String,System.String,UnityEngine.LogType,System.Boolean)
extern "C" void Application_CallLogCallback_m406 (Object_t * __this /* static, unused */, String_t* ___logString, String_t* ___stackTrace, int32_t ___type, bool ___invokedOnMainThread, const MethodInfo* method) IL2CPP_METHOD_ATTR;
