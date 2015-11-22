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
struct fade_t32;
// System.String
struct String_t;
// System.Collections.IEnumerator
struct IEnumerator_t5;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Color.h"

// System.Void fade::.ctor()
extern "C" void fade__ctor_m69 (fade_t32 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void fade::Awake()
extern "C" void fade_Awake_m70 (fade_t32 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void fade::Start()
extern "C" void fade_Start_m71 (fade_t32 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void fade::Update()
extern "C" void fade_Update_m72 (fade_t32 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void fade::OnGUI()
extern "C" void fade_OnGUI_m73 (fade_t32 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void fade::StartSequence(System.String)
extern "C" void fade_StartSequence_m74 (fade_t32 * __this, String_t* ___function_name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator fade::FadeUpdate()
extern "C" Object_t * fade_FadeUpdate_m75 (fade_t32 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void fade::FadeIn(System.Single,UnityEngine.Color)
extern "C" void fade_FadeIn_m76 (fade_t32 * __this, float ___t_time, Color_t4  ___t_color, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void fade::FadeOut(System.Single,UnityEngine.Color)
extern "C" void fade_FadeOut_m77 (fade_t32 * __this, float ___t_time, Color_t4  ___t_color, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void fade::Main()
extern "C" void fade_Main_m78 (fade_t32 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
