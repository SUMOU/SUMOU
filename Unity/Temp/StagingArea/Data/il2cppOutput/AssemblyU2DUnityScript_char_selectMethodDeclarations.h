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

// char_select
struct char_select_t24;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.IEnumerator
struct IEnumerator_t5;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Color.h"

// System.Void char_select::.ctor()
extern "C" void char_select__ctor_m53 (char_select_t24 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void char_select::Start()
extern "C" void char_select_Start_m54 (char_select_t24 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void char_select::Update()
extern "C" void char_select_Update_m55 (char_select_t24 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void char_select::select_moves(System.Object)
extern "C" void char_select_select_moves_m56 (char_select_t24 * __this, Object_t * ___direction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void char_select::window_change()
extern "C" void char_select_window_change_m57 (char_select_t24 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void char_select::Awake()
extern "C" void char_select_Awake_m58 (char_select_t24 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void char_select::OnGUI()
extern "C" void char_select_OnGUI_m59 (char_select_t24 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void char_select::StartSequence(System.String)
extern "C" void char_select_StartSequence_m60 (char_select_t24 * __this, String_t* ___function_name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator char_select::FadeUpdate()
extern "C" Object_t * char_select_FadeUpdate_m61 (char_select_t24 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void char_select::FadeIn(System.Single,UnityEngine.Color)
extern "C" void char_select_FadeIn_m62 (char_select_t24 * __this, float ___t_time, Color_t4  ___t_color, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void char_select::FadeOut(System.Single,UnityEngine.Color)
extern "C" void char_select_FadeOut_m63 (char_select_t24 * __this, float ___t_time, Color_t4  ___t_color, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void char_select::Main()
extern "C" void char_select_Main_m64 (char_select_t24 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
