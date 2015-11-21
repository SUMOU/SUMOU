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

// UnityEngine.GUILayoutUtility/LayoutCache
struct LayoutCache_t220;
// UnityEngine.GUIStyle
struct GUIStyle_t224;
// UnityEngine.GUILayoutOption[]
struct GUILayoutOptionU5BU5D_t50;
// System.String
struct String_t;
// UnityEngine.GUILayoutGroup
struct GUILayoutGroup_t221;
// System.Type
struct Type_t;
// UnityEngine.GUIContent
struct GUIContent_t218;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Rect.h"

// System.Void UnityEngine.GUILayoutUtility::.cctor()
extern "C" void GUILayoutUtility__cctor_m1319 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUILayoutUtility/LayoutCache UnityEngine.GUILayoutUtility::SelectIDList(System.Int32,System.Boolean)
extern "C" LayoutCache_t220 * GUILayoutUtility_SelectIDList_m1320 (Object_t * __this /* static, unused */, int32_t ___instanceID, bool ___isWindow, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutUtility::Begin(System.Int32)
extern "C" void GUILayoutUtility_Begin_m1321 (Object_t * __this /* static, unused */, int32_t ___instanceID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutUtility::BeginWindow(System.Int32,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C" void GUILayoutUtility_BeginWindow_m1322 (Object_t * __this /* static, unused */, int32_t ___windowID, GUIStyle_t224 * ___style, GUILayoutOptionU5BU5D_t50* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutUtility::EndGroup(System.String)
extern "C" void GUILayoutUtility_EndGroup_m1323 (Object_t * __this /* static, unused */, String_t* ___groupName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutUtility::Layout()
extern "C" void GUILayoutUtility_Layout_m1324 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutUtility::LayoutFromEditorWindow()
extern "C" void GUILayoutUtility_LayoutFromEditorWindow_m1325 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutUtility::LayoutFreeGroup(UnityEngine.GUILayoutGroup)
extern "C" void GUILayoutUtility_LayoutFreeGroup_m1326 (Object_t * __this /* static, unused */, GUILayoutGroup_t221 * ___toplevel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutUtility::LayoutSingleGroup(UnityEngine.GUILayoutGroup)
extern "C" void GUILayoutUtility_LayoutSingleGroup_m1327 (Object_t * __this /* static, unused */, GUILayoutGroup_t221 * ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUILayoutGroup UnityEngine.GUILayoutUtility::CreateGUILayoutGroupInstanceOfType(System.Type)
extern "C" GUILayoutGroup_t221 * GUILayoutUtility_CreateGUILayoutGroupInstanceOfType_m1328 (Object_t * __this /* static, unused */, Type_t * ___LayoutType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUILayoutGroup UnityEngine.GUILayoutUtility::BeginLayoutGroup(UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[],System.Type)
extern "C" GUILayoutGroup_t221 * GUILayoutUtility_BeginLayoutGroup_m1329 (Object_t * __this /* static, unused */, GUIStyle_t224 * ___style, GUILayoutOptionU5BU5D_t50* ___options, Type_t * ___layoutType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutUtility::EndLayoutGroup()
extern "C" void GUILayoutUtility_EndLayoutGroup_m1330 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.GUILayoutUtility::GetRect(UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C" Rect_t37  GUILayoutUtility_GetRect_m1331 (Object_t * __this /* static, unused */, GUIContent_t218 * ___content, GUIStyle_t224 * ___style, GUILayoutOptionU5BU5D_t50* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.GUILayoutUtility::DoGetRect(UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C" Rect_t37  GUILayoutUtility_DoGetRect_m1332 (Object_t * __this /* static, unused */, GUIContent_t218 * ___content, GUIStyle_t224 * ___style, GUILayoutOptionU5BU5D_t50* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUILayoutUtility::get_spaceStyle()
extern "C" GUIStyle_t224 * GUILayoutUtility_get_spaceStyle_m1333 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.GUILayoutUtility::Internal_GetWindowRect(System.Int32)
extern "C" Rect_t37  GUILayoutUtility_Internal_GetWindowRect_m1334 (Object_t * __this /* static, unused */, int32_t ___windowID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutUtility::Internal_MoveWindow(System.Int32,UnityEngine.Rect)
extern "C" void GUILayoutUtility_Internal_MoveWindow_m1335 (Object_t * __this /* static, unused */, int32_t ___windowID, Rect_t37  ___r, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutUtility::INTERNAL_CALL_Internal_MoveWindow(System.Int32,UnityEngine.Rect&)
extern "C" void GUILayoutUtility_INTERNAL_CALL_Internal_MoveWindow_m1336 (Object_t * __this /* static, unused */, int32_t ___windowID, Rect_t37 * ___r, const MethodInfo* method) IL2CPP_METHOD_ATTR;
