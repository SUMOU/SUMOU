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

// fadein
struct fadein_t86;
// System.String
struct String_t;
// System.Collections.IEnumerator
struct IEnumerator_t42;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Color.h"

// System.Void fadein::.ctor()
extern "C" void fadein__ctor_m496 (fadein_t86 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void fadein::Awake()
extern "C" void fadein_Awake_m497 (fadein_t86 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void fadein::Start()
extern "C" void fadein_Start_m498 (fadein_t86 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void fadein::Update()
extern "C" void fadein_Update_m499 (fadein_t86 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void fadein::OnGUI()
extern "C" void fadein_OnGUI_m500 (fadein_t86 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void fadein::StartSequence(System.String)
extern "C" void fadein_StartSequence_m501 (fadein_t86 * __this, String_t* ___function_name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator fadein::FadeUpdate()
extern "C" Object_t * fadein_FadeUpdate_m502 (fadein_t86 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void fadein::FadeIn(System.Single,UnityEngine.Color)
extern "C" void fadein_FadeIn_m503 (fadein_t86 * __this, float ___t_time, Color_t13  ___t_color, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void fadein::FadeOut(System.Single,UnityEngine.Color)
extern "C" void fadein_FadeOut_m504 (fadein_t86 * __this, float ___t_time, Color_t13  ___t_color, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void fadein::Main()
extern "C" void fadein_Main_m505 (fadein_t86 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
