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
struct GUISkin_t215;
// UnityEngine.GUIContent
struct GUIContent_t218;
// UnityEngine.GUIStyle
struct GUIStyle_t224;
// UnityEngine.Texture
struct Texture_t122;
// System.String
struct String_t;
// UnityEngine.GUI/WindowFunction
struct WindowFunction_t214;
// UnityEngine.Material
struct Material_t60;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_DateTime.h"
#include "UnityEngine_UnityEngine_Rect.h"
#include "UnityEngine_UnityEngine_ScaleMode.h"
#include "UnityEngine_UnityEngine_Color.h"
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.GUI::.cctor()
extern "C" void GUI__cctor_m1285 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::set_nextScrollStepTime(System.DateTime)
extern "C" void GUI_set_nextScrollStepTime_m1286 (Object_t * __this /* static, unused */, DateTime_t217  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::set_skin(UnityEngine.GUISkin)
extern "C" void GUI_set_skin_m1287 (Object_t * __this /* static, unused */, GUISkin_t215 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUISkin UnityEngine.GUI::get_skin()
extern "C" GUISkin_t215 * GUI_get_skin_m1288 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::DoSetSkin(UnityEngine.GUISkin)
extern "C" void GUI_DoSetSkin_m1289 (Object_t * __this /* static, unused */, GUISkin_t215 * ___newSkin, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::Label(UnityEngine.Rect,UnityEngine.GUIContent,UnityEngine.GUIStyle)
extern "C" void GUI_Label_m1290 (Object_t * __this /* static, unused */, Rect_t37  ___position, GUIContent_t218 * ___content, GUIStyle_t224 * ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::DrawTexture(UnityEngine.Rect,UnityEngine.Texture)
extern "C" void GUI_DrawTexture_m589 (Object_t * __this /* static, unused */, Rect_t37  ___position, Texture_t122 * ___image, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::DrawTexture(UnityEngine.Rect,UnityEngine.Texture,UnityEngine.ScaleMode)
extern "C" void GUI_DrawTexture_m1291 (Object_t * __this /* static, unused */, Rect_t37  ___position, Texture_t122 * ___image, int32_t ___scaleMode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::DrawTexture(UnityEngine.Rect,UnityEngine.Texture,UnityEngine.ScaleMode,System.Boolean)
extern "C" void GUI_DrawTexture_m1292 (Object_t * __this /* static, unused */, Rect_t37  ___position, Texture_t122 * ___image, int32_t ___scaleMode, bool ___alphaBlend, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::DrawTexture(UnityEngine.Rect,UnityEngine.Texture,UnityEngine.ScaleMode,System.Boolean,System.Single)
extern "C" void GUI_DrawTexture_m1293 (Object_t * __this /* static, unused */, Rect_t37  ___position, Texture_t122 * ___image, int32_t ___scaleMode, bool ___alphaBlend, float ___imageAspect, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::Box(UnityEngine.Rect,UnityEngine.GUIContent,UnityEngine.GUIStyle)
extern "C" void GUI_Box_m1294 (Object_t * __this /* static, unused */, Rect_t37  ___position, GUIContent_t218 * ___content, GUIStyle_t224 * ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::Button(UnityEngine.Rect,System.String)
extern "C" bool GUI_Button_m578 (Object_t * __this /* static, unused */, Rect_t37  ___position, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::Button(UnityEngine.Rect,UnityEngine.GUIContent,UnityEngine.GUIStyle)
extern "C" bool GUI_Button_m1295 (Object_t * __this /* static, unused */, Rect_t37  ___position, GUIContent_t218 * ___content, GUIStyle_t224 * ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::CallWindowDelegate(UnityEngine.GUI/WindowFunction,System.Int32,UnityEngine.GUISkin,System.Int32,System.Single,System.Single,UnityEngine.GUIStyle)
extern "C" void GUI_CallWindowDelegate_m1296 (Object_t * __this /* static, unused */, WindowFunction_t214 * ___func, int32_t ___id, GUISkin_t215 * ____skin, int32_t ___forceRect, float ___width, float ___height, GUIStyle_t224 * ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.GUI::get_color()
extern "C" Color_t13  GUI_get_color_m1297 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::set_color(UnityEngine.Color)
extern "C" void GUI_set_color_m588 (Object_t * __this /* static, unused */, Color_t13  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::INTERNAL_get_color(UnityEngine.Color&)
extern "C" void GUI_INTERNAL_get_color_m1298 (Object_t * __this /* static, unused */, Color_t13 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::INTERNAL_set_color(UnityEngine.Color&)
extern "C" void GUI_INTERNAL_set_color_m1299 (Object_t * __this /* static, unused */, Color_t13 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::set_changed(System.Boolean)
extern "C" void GUI_set_changed_m1300 (Object_t * __this /* static, unused */, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::DoLabel(UnityEngine.Rect,UnityEngine.GUIContent,System.IntPtr)
extern "C" void GUI_DoLabel_m1301 (Object_t * __this /* static, unused */, Rect_t37  ___position, GUIContent_t218 * ___content, IntPtr_t ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::INTERNAL_CALL_DoLabel(UnityEngine.Rect&,UnityEngine.GUIContent,System.IntPtr)
extern "C" void GUI_INTERNAL_CALL_DoLabel_m1302 (Object_t * __this /* static, unused */, Rect_t37 * ___position, GUIContent_t218 * ___content, IntPtr_t ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityEngine.GUI::get_blendMaterial()
extern "C" Material_t60 * GUI_get_blendMaterial_m1303 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityEngine.GUI::get_blitMaterial()
extern "C" Material_t60 * GUI_get_blitMaterial_m1304 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::DoButton(UnityEngine.Rect,UnityEngine.GUIContent,System.IntPtr)
extern "C" bool GUI_DoButton_m1305 (Object_t * __this /* static, unused */, Rect_t37  ___position, GUIContent_t218 * ___content, IntPtr_t ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::INTERNAL_CALL_DoButton(UnityEngine.Rect&,UnityEngine.GUIContent,System.IntPtr)
extern "C" bool GUI_INTERNAL_CALL_DoButton_m1306 (Object_t * __this /* static, unused */, Rect_t37 * ___position, GUIContent_t218 * ___content, IntPtr_t ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
