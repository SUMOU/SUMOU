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

// UnityEngine.GUISkin
struct GUISkin_t165;
// System.String
struct String_t;
// UnityEngine.GUIContent
struct GUIContent_t168;
// UnityEngine.GUIStyle
struct GUIStyle_t174;
// UnityEngine.Texture
struct Texture_t63;
// UnityEngine.GUI/WindowFunction
struct WindowFunction_t164;
// UnityEngine.Material
struct Material_t44;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_DateTime.h"
#include "UnityEngine_UnityEngine_Rect.h"
#include "UnityEngine_UnityEngine_ScaleMode.h"
#include "UnityEngine_UnityEngine_Color.h"
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.GUI::.cctor()
extern "C" void GUI__cctor_m791 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::set_nextScrollStepTime(System.DateTime)
extern "C" void GUI_set_nextScrollStepTime_m792 (Object_t * __this /* static, unused */, DateTime_t167  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::set_skin(UnityEngine.GUISkin)
extern "C" void GUI_set_skin_m793 (Object_t * __this /* static, unused */, GUISkin_t165 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUISkin UnityEngine.GUI::get_skin()
extern "C" GUISkin_t165 * GUI_get_skin_m794 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::DoSetSkin(UnityEngine.GUISkin)
extern "C" void GUI_DoSetSkin_m795 (Object_t * __this /* static, unused */, GUISkin_t165 * ___newSkin, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::Label(UnityEngine.Rect,System.String)
extern "C" void GUI_Label_m36 (Object_t * __this /* static, unused */, Rect_t15  ___position, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::Label(UnityEngine.Rect,UnityEngine.GUIContent,UnityEngine.GUIStyle)
extern "C" void GUI_Label_m796 (Object_t * __this /* static, unused */, Rect_t15  ___position, GUIContent_t168 * ___content, GUIStyle_t174 * ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::DrawTexture(UnityEngine.Rect,UnityEngine.Texture)
extern "C" void GUI_DrawTexture_m33 (Object_t * __this /* static, unused */, Rect_t15  ___position, Texture_t63 * ___image, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::DrawTexture(UnityEngine.Rect,UnityEngine.Texture,UnityEngine.ScaleMode)
extern "C" void GUI_DrawTexture_m797 (Object_t * __this /* static, unused */, Rect_t15  ___position, Texture_t63 * ___image, int32_t ___scaleMode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::DrawTexture(UnityEngine.Rect,UnityEngine.Texture,UnityEngine.ScaleMode,System.Boolean)
extern "C" void GUI_DrawTexture_m798 (Object_t * __this /* static, unused */, Rect_t15  ___position, Texture_t63 * ___image, int32_t ___scaleMode, bool ___alphaBlend, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::DrawTexture(UnityEngine.Rect,UnityEngine.Texture,UnityEngine.ScaleMode,System.Boolean,System.Single)
extern "C" void GUI_DrawTexture_m799 (Object_t * __this /* static, unused */, Rect_t15  ___position, Texture_t63 * ___image, int32_t ___scaleMode, bool ___alphaBlend, float ___imageAspect, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::Box(UnityEngine.Rect,System.String)
extern "C" void GUI_Box_m35 (Object_t * __this /* static, unused */, Rect_t15  ___position, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::Box(UnityEngine.Rect,UnityEngine.GUIContent,UnityEngine.GUIStyle)
extern "C" void GUI_Box_m800 (Object_t * __this /* static, unused */, Rect_t15  ___position, GUIContent_t168 * ___content, GUIStyle_t174 * ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::Button(UnityEngine.Rect,System.String)
extern "C" bool GUI_Button_m41 (Object_t * __this /* static, unused */, Rect_t15  ___position, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::CallWindowDelegate(UnityEngine.GUI/WindowFunction,System.Int32,UnityEngine.GUISkin,System.Int32,System.Single,System.Single,UnityEngine.GUIStyle)
extern "C" void GUI_CallWindowDelegate_m801 (Object_t * __this /* static, unused */, WindowFunction_t164 * ___func, int32_t ___id, GUISkin_t165 * ____skin, int32_t ___forceRect, float ___width, float ___height, GUIStyle_t174 * ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.GUI::get_color()
extern "C" Color_t4  GUI_get_color_m802 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::set_color(UnityEngine.Color)
extern "C" void GUI_set_color_m28 (Object_t * __this /* static, unused */, Color_t4  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::INTERNAL_get_color(UnityEngine.Color&)
extern "C" void GUI_INTERNAL_get_color_m803 (Object_t * __this /* static, unused */, Color_t4 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::INTERNAL_set_color(UnityEngine.Color&)
extern "C" void GUI_INTERNAL_set_color_m804 (Object_t * __this /* static, unused */, Color_t4 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::set_changed(System.Boolean)
extern "C" void GUI_set_changed_m805 (Object_t * __this /* static, unused */, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::DoLabel(UnityEngine.Rect,UnityEngine.GUIContent,System.IntPtr)
extern "C" void GUI_DoLabel_m806 (Object_t * __this /* static, unused */, Rect_t15  ___position, GUIContent_t168 * ___content, IntPtr_t ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::INTERNAL_CALL_DoLabel(UnityEngine.Rect&,UnityEngine.GUIContent,System.IntPtr)
extern "C" void GUI_INTERNAL_CALL_DoLabel_m807 (Object_t * __this /* static, unused */, Rect_t15 * ___position, GUIContent_t168 * ___content, IntPtr_t ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityEngine.GUI::get_blendMaterial()
extern "C" Material_t44 * GUI_get_blendMaterial_m808 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityEngine.GUI::get_blitMaterial()
extern "C" Material_t44 * GUI_get_blitMaterial_m809 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::DoButton(UnityEngine.Rect,UnityEngine.GUIContent,System.IntPtr)
extern "C" bool GUI_DoButton_m810 (Object_t * __this /* static, unused */, Rect_t15  ___position, GUIContent_t168 * ___content, IntPtr_t ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::INTERNAL_CALL_DoButton(UnityEngine.Rect&,UnityEngine.GUIContent,System.IntPtr)
extern "C" bool GUI_INTERNAL_CALL_DoButton_m811 (Object_t * __this /* static, unused */, Rect_t15 * ___position, GUIContent_t168 * ___content, IntPtr_t ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
