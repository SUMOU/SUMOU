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

// fade
struct fade_t99;
// System.String
struct String_t;
// System.Collections.IEnumerator
struct IEnumerator_t42;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Color.h"

// System.Void fade::.ctor()
extern "C" void fade__ctor_m539 (fade_t99 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void fade::Awake()
extern "C" void fade_Awake_m540 (fade_t99 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void fade::Start()
extern "C" void fade_Start_m541 (fade_t99 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void fade::Update()
extern "C" void fade_Update_m542 (fade_t99 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void fade::OnGUI()
extern "C" void fade_OnGUI_m543 (fade_t99 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void fade::StartSequence(System.String)
extern "C" void fade_StartSequence_m544 (fade_t99 * __this, String_t* ___function_name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator fade::FadeUpdate()
extern "C" Object_t * fade_FadeUpdate_m545 (fade_t99 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void fade::FadeIn(System.Single,UnityEngine.Color)
extern "C" void fade_FadeIn_m546 (fade_t99 * __this, float ___t_time, Color_t13  ___t_color, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void fade::FadeOut(System.Single,UnityEngine.Color)
extern "C" void fade_FadeOut_m547 (fade_t99 * __this, float ___t_time, Color_t13  ___t_color, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void fade::Main()
extern "C" void fade_Main_m548 (fade_t99 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
