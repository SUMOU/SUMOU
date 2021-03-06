﻿#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>

// Locomotion
struct Locomotion_t1;
// UnityEngine.Animator
struct Animator_t2;
// JoystickToEvents
struct JoystickToEvents_t3;
// UnityEngine.Transform
struct Transform_t32;
// LocomotionPlayer
struct LocomotionPlayer_t5;
// System.Object
struct Object_t;
// MoveSample
struct MoveSample_t6;
// RotateSample
struct RotateSample_t7;
// SampleInfo
struct SampleInfo_t8;
// iTween/CRSpline
struct CRSpline_t15;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t16;
// iTween/EasingFunction
struct EasingFunction_t17;
// System.IAsyncResult
struct IAsyncResult_t19;
// System.AsyncCallback
struct AsyncCallback_t20;
// iTween/ApplyTween
struct ApplyTween_t21;
// iTween/<TweenDelay>c__Iterator0
struct U3CTweenDelayU3Ec__Iterator0_t22;
// iTween/<TweenRestart>c__Iterator1
struct U3CTweenRestartU3Ec__Iterator1_t24;
// iTween/<Start>c__Iterator2
struct U3CStartU3Ec__Iterator2_t25;
// iTween
struct iTween_t23;
// System.Collections.Hashtable
struct Hashtable_t26;
// UnityEngine.GameObject
struct GameObject_t34;
// UnityEngine.GUITexture
struct GUITexture_t58;
// UnityEngine.GUIText
struct GUIText_t59;
// UnityEngine.Renderer
struct Renderer_t61;
// UnityEngine.Light
struct Light_t62;
// UnityEngine.AudioSource
struct AudioSource_t27;
// UnityEngine.AudioClip
struct AudioClip_t38;
// UnityEngine.Rigidbody
struct Rigidbody_t65;
// System.Collections.IEnumerator
struct IEnumerator_t42;
// UnityEngine.Transform[]
struct TransformU5BU5D_t39;
// UnityEngine.Texture2D
struct Texture2D_t40;
// iTween[]
struct iTweenU5BU5D_t69;
// System.Object[]
struct ObjectU5BU5D_t41;
// System.String
struct String_t;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array.h"
#include "AssemblyU2DCSharp_U3CModuleU3E.h"
#include "AssemblyU2DCSharp_U3CModuleU3EMethodDeclarations.h"
#include "AssemblyU2DCSharp_Locomotion.h"
#include "AssemblyU2DCSharp_LocomotionMethodDeclarations.h"
#include "mscorlib_System_Void.h"
#include "UnityEngine_UnityEngine_Animator.h"
#include "mscorlib_System_ObjectMethodDeclarations.h"
#include "UnityEngine_UnityEngine_AnimatorMethodDeclarations.h"
#include "mscorlib_System_Single.h"
#include "mscorlib_System_Object.h"
#include "mscorlib_System_String.h"
#include "mscorlib_System_Int32.h"
#include "UnityEngine_UnityEngine_AnimatorStateInfoMethodDeclarations.h"
#include "UnityEngine_UnityEngine_TimeMethodDeclarations.h"
#include "UnityEngine_UnityEngine_AnimatorStateInfo.h"
#include "mscorlib_System_Boolean.h"
#include "AssemblyU2DCSharp_JoystickToEvents.h"
#include "AssemblyU2DCSharp_JoystickToEventsMethodDeclarations.h"
#include "UnityEngine_UnityEngine_MonoBehaviourMethodDeclarations.h"
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "UnityEngine_UnityEngine_Transform.h"
#include "UnityEngine_UnityEngine_TransformMethodDeclarations.h"
#include "UnityEngine_UnityEngine_InputMethodDeclarations.h"
#include "UnityEngine_UnityEngine_Vector3MethodDeclarations.h"
#include "UnityEngine_UnityEngine_QuaternionMethodDeclarations.h"
#include "UnityEngine_UnityEngine_Vector2MethodDeclarations.h"
#include "UnityEngine_UnityEngine_MathfMethodDeclarations.h"
#include "UnityEngine_UnityEngine_Vector3.h"
#include "UnityEngine_UnityEngine_Quaternion.h"
#include "UnityEngine_UnityEngine_Vector2.h"
#include "AssemblyU2DCSharp_LocomotionPlayer.h"
#include "AssemblyU2DCSharp_LocomotionPlayerMethodDeclarations.h"
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
#include "UnityEngine_UnityEngine_Component.h"
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
#include "UnityEngine_UnityEngine_CameraMethodDeclarations.h"
#include "UnityEngine_UnityEngine_Object.h"
#include "UnityEngine_UnityEngine_Camera.h"
#include "AssemblyU2DCSharp_MoveSample.h"
#include "AssemblyU2DCSharp_MoveSampleMethodDeclarations.h"
#include "AssemblyU2DCSharp_iTweenMethodDeclarations.h"
#include "UnityEngine_UnityEngine_GameObject.h"
#include "mscorlib_ArrayTypes.h"
#include "mscorlib_System_Double.h"
#include "mscorlib_System_Collections_Hashtable.h"
#include "AssemblyU2DCSharp_RotateSample.h"
#include "AssemblyU2DCSharp_RotateSampleMethodDeclarations.h"
#include "AssemblyU2DCSharp_SampleInfo.h"
#include "AssemblyU2DCSharp_SampleInfoMethodDeclarations.h"
#include "UnityEngine_UnityEngine_GUILayoutMethodDeclarations.h"
#include "UnityEngine_UnityEngine_ApplicationMethodDeclarations.h"
#include "UnityEngine_ArrayTypes.h"
#include "UnityEngine_UnityEngine_GUILayoutOption.h"
#include "AssemblyU2DCSharp_iTween_EaseType.h"
#include "AssemblyU2DCSharp_iTween_EaseTypeMethodDeclarations.h"
#include "AssemblyU2DCSharp_iTween_LoopType.h"
#include "AssemblyU2DCSharp_iTween_LoopTypeMethodDeclarations.h"
#include "AssemblyU2DCSharp_iTween_NamedValueColor.h"
#include "AssemblyU2DCSharp_iTween_NamedValueColorMethodDeclarations.h"
#include "AssemblyU2DCSharp_iTween_Defaults.h"
#include "AssemblyU2DCSharp_iTween_DefaultsMethodDeclarations.h"
#include "UnityEngine_UnityEngine_ColorMethodDeclarations.h"
#include "UnityEngine_UnityEngine_Space.h"
#include "UnityEngine_UnityEngine_Color.h"
#include "AssemblyU2DCSharp_iTween_CRSpline.h"
#include "AssemblyU2DCSharp_iTween_CRSplineMethodDeclarations.h"
#include "mscorlib_System_ArrayMethodDeclarations.h"
#include "AssemblyU2DCSharp_iTween_EasingFunction.h"
#include "AssemblyU2DCSharp_iTween_EasingFunctionMethodDeclarations.h"
#include "mscorlib_System_IntPtr.h"
#include "mscorlib_System_AsyncCallback.h"
#include "AssemblyU2DCSharp_iTween_ApplyTween.h"
#include "AssemblyU2DCSharp_iTween_ApplyTweenMethodDeclarations.h"
#include "AssemblyU2DCSharp_iTween_U3CTweenDelayU3Ec__Iterator0.h"
#include "AssemblyU2DCSharp_iTween_U3CTweenDelayU3Ec__Iterator0MethodDeclarations.h"
#include "UnityEngine_UnityEngine_WaitForSecondsMethodDeclarations.h"
#include "mscorlib_System_UInt32.h"
#include "AssemblyU2DCSharp_iTween.h"
#include "UnityEngine_UnityEngine_WaitForSeconds.h"
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"
#include "mscorlib_System_NotSupportedException.h"
#include "AssemblyU2DCSharp_iTween_U3CTweenRestartU3Ec__Iterator1.h"
#include "AssemblyU2DCSharp_iTween_U3CTweenRestartU3Ec__Iterator1MethodDeclarations.h"
#include "AssemblyU2DCSharp_iTween_U3CStartU3Ec__Iterator2.h"
#include "AssemblyU2DCSharp_iTween_U3CStartU3Ec__Iterator2MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Coroutine.h"
#include "mscorlib_System_Collections_Generic_List_1_genMethodDeclarations.h"
#include "mscorlib_System_Collections_Generic_List_1_gen.h"
#include "UnityEngine_UnityEngine_DebugMethodDeclarations.h"
#include "mscorlib_System_TypeMethodDeclarations.h"
#include "mscorlib_System_Collections_HashtableMethodDeclarations.h"
#include "mscorlib_System_Type.h"
#include "mscorlib_System_RuntimeTypeHandle.h"
#include "UnityEngine_UnityEngine_GameObjectMethodDeclarations.h"
#include "UnityEngine_UnityEngine_GUITextureMethodDeclarations.h"
#include "UnityEngine_UnityEngine_GUITextMethodDeclarations.h"
#include "UnityEngine_UnityEngine_MaterialMethodDeclarations.h"
#include "UnityEngine_UnityEngine_RendererMethodDeclarations.h"
#include "UnityEngine_UnityEngine_LightMethodDeclarations.h"
#include "UnityEngine_UnityEngine_GUITexture.h"
#include "UnityEngine_UnityEngine_GUIText.h"
#include "UnityEngine_UnityEngine_Material.h"
#include "UnityEngine_UnityEngine_Renderer.h"
#include "UnityEngine_UnityEngine_Light.h"
#include "UnityEngine_UnityEngine_AudioSourceMethodDeclarations.h"
#include "UnityEngine_UnityEngine_AudioSource.h"
#include "UnityEngine_UnityEngine_AudioClip.h"
#include "mscorlib_System_Nullable_1_genMethodDeclarations.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_genMethodDeclarations.h"
#include "mscorlib_System_Nullable_1_gen.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen.h"
#include "UnityEngine_UnityEngine_Rect.h"
#include "mscorlib_System_MathMethodDeclarations.h"
#include "mscorlib_System_Enum.h"
#include "mscorlib_System_EnumMethodDeclarations.h"
#include "UnityEngine_UnityEngine_AudioClipMethodDeclarations.h"
#include "UnityEngine_UnityEngine_RectMethodDeclarations.h"
#include "UnityEngine_UnityEngine_RigidbodyMethodDeclarations.h"
#include "UnityEngine_UnityEngine_Rigidbody.h"
#include "UnityEngine_UnityEngine_RandomMethodDeclarations.h"
#include "mscorlib_System_StringMethodDeclarations.h"
#include "UnityEngine_UnityEngine_Texture2D.h"
#include "UnityEngine_UnityEngine_ScreenMethodDeclarations.h"
#include "UnityEngine_UnityEngine_Texture2DMethodDeclarations.h"
#include "UnityEngine_UnityEngine_TextureFormat.h"
#include "UnityEngine_UnityEngine_Texture.h"
#include "UnityEngine_UnityEngine_BehaviourMethodDeclarations.h"
#include "Assembly-CSharp_ArrayTypes.h"
#include "UnityEngine_UnityEngine_Behaviour.h"
#include "mscorlib_System_Collections_ArrayListMethodDeclarations.h"
#include "mscorlib_System_Collections_ArrayList.h"
#include "UnityEngine_UnityEngine_GizmosMethodDeclarations.h"
#include "mscorlib_System_Collections_DictionaryEntryMethodDeclarations.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"
#include "mscorlib_System_GuidMethodDeclarations.h"
#include "mscorlib_System_Guid.h"
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_genMethodDeclarations.h"
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen.h"
#include "UnityEngine_UnityEngine_SendMessageOptions.h"

// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C" Object_t * Component_GetComponent_TisObject_t_m463_gshared (Component_t70 * __this, const MethodInfo* method);
#define Component_GetComponent_TisObject_t_m463(__this, method) (( Object_t * (*) (Component_t70 *, const MethodInfo*))Component_GetComponent_TisObject_t_m463_gshared)(__this, method)
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Animator>()
#define Component_GetComponent_TisAnimator_t2_m315(__this, method) (( Animator_t2 * (*) (Component_t70 *, const MethodInfo*))Component_GetComponent_TisObject_t_m463_gshared)(__this, method)
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
extern "C" Object_t * GameObject_GetComponent_TisObject_t_m464_gshared (GameObject_t34 * __this, const MethodInfo* method);
#define GameObject_GetComponent_TisObject_t_m464(__this, method) (( Object_t * (*) (GameObject_t34 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m464_gshared)(__this, method)
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.GUITexture>()
#define GameObject_GetComponent_TisGUITexture_t58_m345(__this, method) (( GUITexture_t58 * (*) (GameObject_t34 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m464_gshared)(__this, method)
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.GUIText>()
#define GameObject_GetComponent_TisGUIText_t59_m347(__this, method) (( GUIText_t59 * (*) (GameObject_t34 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m464_gshared)(__this, method)
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Renderer>()
#define GameObject_GetComponent_TisRenderer_t61_m350(__this, method) (( Renderer_t61 * (*) (GameObject_t34 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m464_gshared)(__this, method)
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Light>()
#define GameObject_GetComponent_TisLight_t62_m352(__this, method) (( Light_t62 * (*) (GameObject_t34 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m464_gshared)(__this, method)
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.AudioSource>()
#define GameObject_GetComponent_TisAudioSource_t27_m357(__this, method) (( AudioSource_t27 * (*) (GameObject_t34 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m464_gshared)(__this, method)
// !!0 UnityEngine.Component::GetComponent<UnityEngine.GUITexture>()
#define Component_GetComponent_TisGUITexture_t58_m379(__this, method) (( GUITexture_t58 * (*) (Component_t70 *, const MethodInfo*))Component_GetComponent_TisObject_t_m463_gshared)(__this, method)
// !!0 UnityEngine.Component::GetComponent<UnityEngine.GUIText>()
#define Component_GetComponent_TisGUIText_t59_m380(__this, method) (( GUIText_t59 * (*) (Component_t70 *, const MethodInfo*))Component_GetComponent_TisObject_t_m463_gshared)(__this, method)
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Renderer>()
#define Component_GetComponent_TisRenderer_t61_m381(__this, method) (( Renderer_t61 * (*) (Component_t70 *, const MethodInfo*))Component_GetComponent_TisObject_t_m463_gshared)(__this, method)
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Light>()
#define Component_GetComponent_TisLight_t62_m384(__this, method) (( Light_t62 * (*) (Component_t70 *, const MethodInfo*))Component_GetComponent_TisObject_t_m463_gshared)(__this, method)
// !!0 UnityEngine.Component::GetComponent<UnityEngine.AudioSource>()
#define Component_GetComponent_TisAudioSource_t27_m386(__this, method) (( AudioSource_t27 * (*) (Component_t70 *, const MethodInfo*))Component_GetComponent_TisObject_t_m463_gshared)(__this, method)
// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
extern "C" Object_t * GameObject_AddComponent_TisObject_t_m465_gshared (GameObject_t34 * __this, const MethodInfo* method);
#define GameObject_AddComponent_TisObject_t_m465(__this, method) (( Object_t * (*) (GameObject_t34 *, const MethodInfo*))GameObject_AddComponent_TisObject_t_m465_gshared)(__this, method)
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.AudioSource>()
#define GameObject_AddComponent_TisAudioSource_t27_m387(__this, method) (( AudioSource_t27 * (*) (GameObject_t34 *, const MethodInfo*))GameObject_AddComponent_TisObject_t_m465_gshared)(__this, method)
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody>()
#define Component_GetComponent_TisRigidbody_t65_m406(__this, method) (( Rigidbody_t65 * (*) (Component_t70 *, const MethodInfo*))Component_GetComponent_TisObject_t_m463_gshared)(__this, method)
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Rigidbody>()
#define GameObject_GetComponent_TisRigidbody_t65_m422(__this, method) (( Rigidbody_t65 * (*) (GameObject_t34 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m464_gshared)(__this, method)
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.GUITexture>()
#define GameObject_AddComponent_TisGUITexture_t58_m432(__this, method) (( GUITexture_t58 * (*) (GameObject_t34 *, const MethodInfo*))GameObject_AddComponent_TisObject_t_m465_gshared)(__this, method)
// !!0[] UnityEngine.GameObject::GetComponents<System.Object>()
extern "C" ObjectU5BU5D_t41* GameObject_GetComponents_TisObject_t_m466_gshared (GameObject_t34 * __this, const MethodInfo* method);
#define GameObject_GetComponents_TisObject_t_m466(__this, method) (( ObjectU5BU5D_t41* (*) (GameObject_t34 *, const MethodInfo*))GameObject_GetComponents_TisObject_t_m466_gshared)(__this, method)
// !!0[] UnityEngine.GameObject::GetComponents<iTween>()
#define GameObject_GetComponents_TisiTween_t23_m435(__this, method) (( iTweenU5BU5D_t69* (*) (GameObject_t34 *, const MethodInfo*))GameObject_GetComponents_TisObject_t_m466_gshared)(__this, method)
// !!0 UnityEngine.GameObject::AddComponent<iTween>()
#define GameObject_AddComponent_TisiTween_t23_m447(__this, method) (( iTween_t23 * (*) (GameObject_t34 *, const MethodInfo*))GameObject_AddComponent_TisObject_t_m465_gshared)(__this, method)
// !!0[] UnityEngine.Component::GetComponents<System.Object>()
extern "C" ObjectU5BU5D_t41* Component_GetComponents_TisObject_t_m467_gshared (Component_t70 * __this, const MethodInfo* method);
#define Component_GetComponents_TisObject_t_m467(__this, method) (( ObjectU5BU5D_t41* (*) (Component_t70 *, const MethodInfo*))Component_GetComponents_TisObject_t_m467_gshared)(__this, method)
// !!0[] UnityEngine.Component::GetComponents<iTween>()
#define Component_GetComponents_TisiTween_t23_m459(__this, method) (( iTweenU5BU5D_t69* (*) (Component_t70 *, const MethodInfo*))Component_GetComponents_TisObject_t_m467_gshared)(__this, method)
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Locomotion::.ctor(UnityEngine.Animator)
extern Il2CppCodeGenString* _stringLiteral0;
extern Il2CppCodeGenString* _stringLiteral1;
extern Il2CppCodeGenString* _stringLiteral2;
extern "C" void Locomotion__ctor_m0 (Locomotion_t1 * __this, Animator_t2 * ___animator, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral0 = il2cpp_codegen_string_literal_from_index(0);
		_stringLiteral1 = il2cpp_codegen_string_literal_from_index(1);
		_stringLiteral2 = il2cpp_codegen_string_literal_from_index(2);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___m_SpeedDampTime_4 = (0.1f);
		__this->___m_AnguarSpeedDampTime_5 = (0.25f);
		__this->___m_DirectionResponseTime_6 = (0.2f);
		Object__ctor_m296(__this, /*hidden argument*/NULL);
		Animator_t2 * L_0 = ___animator;
		__this->___m_Animator_0 = L_0;
		int32_t L_1 = Animator_StringToHash_m297(NULL /*static, unused*/, _stringLiteral0, /*hidden argument*/NULL);
		__this->___m_SpeedId_1 = L_1;
		int32_t L_2 = Animator_StringToHash_m297(NULL /*static, unused*/, _stringLiteral1, /*hidden argument*/NULL);
		__this->___m_AgularSpeedId_2 = L_2;
		int32_t L_3 = Animator_StringToHash_m297(NULL /*static, unused*/, _stringLiteral2, /*hidden argument*/NULL);
		__this->___m_DirectionId_3 = L_3;
		return;
	}
}
// System.Void Locomotion::Do(System.Single,System.Single)
extern Il2CppCodeGenString* _stringLiteral3;
extern Il2CppCodeGenString* _stringLiteral4;
extern Il2CppCodeGenString* _stringLiteral5;
extern Il2CppCodeGenString* _stringLiteral6;
extern Il2CppCodeGenString* _stringLiteral7;
extern "C" void Locomotion_Do_m1 (Locomotion_t1 * __this, float ___speed, float ___direction, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral3 = il2cpp_codegen_string_literal_from_index(3);
		_stringLiteral4 = il2cpp_codegen_string_literal_from_index(4);
		_stringLiteral5 = il2cpp_codegen_string_literal_from_index(5);
		_stringLiteral6 = il2cpp_codegen_string_literal_from_index(6);
		_stringLiteral7 = il2cpp_codegen_string_literal_from_index(7);
		s_Il2CppMethodIntialized = true;
	}
	AnimatorStateInfo_t43  V_0 = {0};
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	int32_t G_B4_0 = 0;
	float G_B7_0 = 0.0f;
	float G_B11_0 = 0.0f;
	int32_t G_B15_0 = 0;
	{
		Animator_t2 * L_0 = (__this->___m_Animator_0);
		AnimatorStateInfo_t43  L_1 = Animator_GetCurrentAnimatorStateInfo_m298(L_0, 0, /*hidden argument*/NULL);
		V_0 = L_1;
		Animator_t2 * L_2 = (__this->___m_Animator_0);
		bool L_3 = Animator_IsInTransition_m299(L_2, 0, /*hidden argument*/NULL);
		V_1 = L_3;
		bool L_4 = AnimatorStateInfo_IsName_m300((&V_0), _stringLiteral3, /*hidden argument*/NULL);
		V_2 = L_4;
		bool L_5 = AnimatorStateInfo_IsName_m300((&V_0), _stringLiteral4, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_0057;
		}
	}
	{
		bool L_6 = AnimatorStateInfo_IsName_m300((&V_0), _stringLiteral5, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_0057;
		}
	}
	{
		bool L_7 = AnimatorStateInfo_IsName_m300((&V_0), _stringLiteral6, /*hidden argument*/NULL);
		G_B4_0 = ((int32_t)(L_7));
		goto IL_0058;
	}

IL_0057:
	{
		G_B4_0 = 1;
	}

IL_0058:
	{
		V_3 = G_B4_0;
		bool L_8 = AnimatorStateInfo_IsName_m300((&V_0), _stringLiteral7, /*hidden argument*/NULL);
		V_4 = L_8;
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_0077;
		}
	}
	{
		G_B7_0 = (0.0f);
		goto IL_007d;
	}

IL_0077:
	{
		float L_10 = (__this->___m_SpeedDampTime_4);
		G_B7_0 = L_10;
	}

IL_007d:
	{
		V_5 = G_B7_0;
		bool L_11 = V_4;
		if (L_11)
		{
			goto IL_008c;
		}
	}
	{
		bool L_12 = V_1;
		if (!L_12)
		{
			goto IL_0097;
		}
	}

IL_008c:
	{
		float L_13 = (__this->___m_AnguarSpeedDampTime_5);
		G_B11_0 = L_13;
		goto IL_009c;
	}

IL_0097:
	{
		G_B11_0 = (0.0f);
	}

IL_009c:
	{
		V_6 = G_B11_0;
		bool L_14 = V_3;
		if (L_14)
		{
			goto IL_00aa;
		}
	}
	{
		bool L_15 = V_1;
		if (!L_15)
		{
			goto IL_00b4;
		}
	}

IL_00aa:
	{
		G_B15_0 = ((int32_t)1000000);
		goto IL_00b5;
	}

IL_00b4:
	{
		G_B15_0 = 0;
	}

IL_00b5:
	{
		V_7 = (((float)((float)G_B15_0)));
		float L_16 = ___direction;
		float L_17 = (__this->___m_DirectionResponseTime_6);
		V_8 = ((float)((float)L_16/(float)L_17));
		Animator_t2 * L_18 = (__this->___m_Animator_0);
		int32_t L_19 = (__this->___m_SpeedId_1);
		float L_20 = ___speed;
		float L_21 = V_5;
		float L_22 = Time_get_deltaTime_m301(NULL /*static, unused*/, /*hidden argument*/NULL);
		Animator_SetFloat_m302(L_18, L_19, L_20, L_21, L_22, /*hidden argument*/NULL);
		Animator_t2 * L_23 = (__this->___m_Animator_0);
		int32_t L_24 = (__this->___m_AgularSpeedId_2);
		float L_25 = V_8;
		float L_26 = V_6;
		float L_27 = Time_get_deltaTime_m301(NULL /*static, unused*/, /*hidden argument*/NULL);
		Animator_SetFloat_m302(L_23, L_24, L_25, L_26, L_27, /*hidden argument*/NULL);
		Animator_t2 * L_28 = (__this->___m_Animator_0);
		int32_t L_29 = (__this->___m_DirectionId_3);
		float L_30 = ___direction;
		float L_31 = V_7;
		float L_32 = Time_get_deltaTime_m301(NULL /*static, unused*/, /*hidden argument*/NULL);
		Animator_SetFloat_m302(L_28, L_29, L_30, L_31, L_32, /*hidden argument*/NULL);
		return;
	}
}
// System.Void JoystickToEvents::.ctor()
extern "C" void JoystickToEvents__ctor_m2 (JoystickToEvents_t3 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m303(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void JoystickToEvents::Do(UnityEngine.Transform,UnityEngine.Transform,System.Single&,System.Single&)
extern TypeInfo* Input_t45_il2cpp_TypeInfo_var;
extern TypeInfo* Mathf_t46_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral8;
extern Il2CppCodeGenString* _stringLiteral9;
extern "C" void JoystickToEvents_Do_m3 (Object_t * __this /* static, unused */, Transform_t32 * ___root, Transform_t32 * ___camera, float* ___speed, float* ___direction, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Input_t45_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		Mathf_t46_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		_stringLiteral8 = il2cpp_codegen_string_literal_from_index(8);
		_stringLiteral9 = il2cpp_codegen_string_literal_from_index(9);
		s_Il2CppMethodIntialized = true;
	}
	Vector3_t14  V_0 = {0};
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	Vector3_t14  V_3 = {0};
	Vector3_t14  V_4 = {0};
	Quaternion_t44  V_5 = {0};
	Vector3_t14  V_6 = {0};
	Vector2_t36  V_7 = {0};
	Vector3_t14  V_8 = {0};
	float G_B3_0 = 0.0f;
	float* G_B3_1 = {0};
	float G_B2_0 = 0.0f;
	float* G_B2_1 = {0};
	int32_t G_B4_0 = 0;
	float G_B4_1 = 0.0f;
	float* G_B4_2 = {0};
	{
		Transform_t32 * L_0 = ___root;
		Vector3_t14  L_1 = Transform_get_forward_m304(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(Input_t45_il2cpp_TypeInfo_var);
		float L_2 = Input_GetAxis_m305(NULL /*static, unused*/, _stringLiteral8, /*hidden argument*/NULL);
		V_1 = L_2;
		float L_3 = Input_GetAxis_m305(NULL /*static, unused*/, _stringLiteral9, /*hidden argument*/NULL);
		V_2 = L_3;
		float L_4 = V_1;
		float L_5 = V_2;
		Vector3__ctor_m306((&V_3), L_4, (0.0f), L_5, /*hidden argument*/NULL);
		Transform_t32 * L_6 = ___camera;
		Vector3_t14  L_7 = Transform_get_forward_m304(L_6, /*hidden argument*/NULL);
		V_4 = L_7;
		(&V_4)->___y_2 = (0.0f);
		Vector3_t14  L_8 = Vector3_get_forward_m307(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t14  L_9 = V_4;
		Quaternion_t44  L_10 = Quaternion_FromToRotation_m308(NULL /*static, unused*/, L_8, L_9, /*hidden argument*/NULL);
		V_5 = L_10;
		Quaternion_t44  L_11 = V_5;
		Vector3_t14  L_12 = V_3;
		Vector3_t14  L_13 = Quaternion_op_Multiply_m309(NULL /*static, unused*/, L_11, L_12, /*hidden argument*/NULL);
		V_6 = L_13;
		float L_14 = V_1;
		float L_15 = V_2;
		Vector2__ctor_m310((&V_7), L_14, L_15, /*hidden argument*/NULL);
		float* L_16 = ___speed;
		float L_17 = Vector2_get_magnitude_m311((&V_7), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t46_il2cpp_TypeInfo_var);
		float L_18 = Mathf_Clamp_m312(NULL /*static, unused*/, L_17, (0.0f), (1.0f), /*hidden argument*/NULL);
		*((float*)(L_16)) = (float)L_18;
		float* L_19 = ___speed;
		if ((!(((float)(*((float*)L_19))) > ((float)(0.01f)))))
		{
			goto IL_00bd;
		}
	}
	{
		Vector3_t14  L_20 = V_0;
		Vector3_t14  L_21 = V_6;
		Vector3_t14  L_22 = Vector3_Cross_m313(NULL /*static, unused*/, L_20, L_21, /*hidden argument*/NULL);
		V_8 = L_22;
		float* L_23 = ___direction;
		Vector3_t14  L_24 = V_0;
		Vector3_t14  L_25 = V_6;
		float L_26 = Vector3_Angle_m314(NULL /*static, unused*/, L_24, L_25, /*hidden argument*/NULL);
		float L_27 = ((&V_8)->___y_2);
		G_B2_0 = ((float)((float)L_26/(float)(180.0f)));
		G_B2_1 = L_23;
		if ((!(((float)L_27) < ((float)(0.0f)))))
		{
			G_B3_0 = ((float)((float)L_26/(float)(180.0f)));
			G_B3_1 = L_23;
			goto IL_00b4;
		}
	}
	{
		G_B4_0 = (-1);
		G_B4_1 = G_B2_0;
		G_B4_2 = G_B2_1;
		goto IL_00b5;
	}

IL_00b4:
	{
		G_B4_0 = 1;
		G_B4_1 = G_B3_0;
		G_B4_2 = G_B3_1;
	}

IL_00b5:
	{
		*((float*)(G_B4_2)) = (float)((float)((float)G_B4_1*(float)(((float)((float)G_B4_0)))));
		goto IL_00c4;
	}

IL_00bd:
	{
		float* L_28 = ___direction;
		*((float*)(L_28)) = (float)(0.0f);
	}

IL_00c4:
	{
		return;
	}
}
// System.Void LocomotionPlayer::.ctor()
extern "C" void LocomotionPlayer__ctor_m4 (LocomotionPlayer_t5 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m303(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LocomotionPlayer::Start()
extern TypeInfo* Locomotion_t1_il2cpp_TypeInfo_var;
extern const MethodInfo* Component_GetComponent_TisAnimator_t2_m315_MethodInfo_var;
extern "C" void LocomotionPlayer_Start_m5 (LocomotionPlayer_t5 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Locomotion_t1_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4);
		Component_GetComponent_TisAnimator_t2_m315_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483649);
		s_Il2CppMethodIntialized = true;
	}
	{
		Animator_t2 * L_0 = Component_GetComponent_TisAnimator_t2_m315(__this, /*hidden argument*/Component_GetComponent_TisAnimator_t2_m315_MethodInfo_var);
		__this->___animator_2 = L_0;
		Animator_t2 * L_1 = (__this->___animator_2);
		Locomotion_t1 * L_2 = (Locomotion_t1 *)il2cpp_codegen_object_new (Locomotion_t1_il2cpp_TypeInfo_var);
		Locomotion__ctor_m0(L_2, L_1, /*hidden argument*/NULL);
		__this->___locomotion_5 = L_2;
		return;
	}
}
// System.Void LocomotionPlayer::Update()
extern "C" void LocomotionPlayer_Update_m6 (LocomotionPlayer_t5 * __this, const MethodInfo* method)
{
	{
		Animator_t2 * L_0 = (__this->___animator_2);
		bool L_1 = Object_op_Implicit_m316(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0063;
		}
	}
	{
		Camera_t47 * L_2 = Camera_get_main_m317(NULL /*static, unused*/, /*hidden argument*/NULL);
		bool L_3 = Object_op_Implicit_m316(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0063;
		}
	}
	{
		Transform_t32 * L_4 = Component_get_transform_m318(__this, /*hidden argument*/NULL);
		Camera_t47 * L_5 = Camera_get_main_m317(NULL /*static, unused*/, /*hidden argument*/NULL);
		Transform_t32 * L_6 = Component_get_transform_m318(L_5, /*hidden argument*/NULL);
		float* L_7 = &(__this->___speed_3);
		float* L_8 = &(__this->___direction_4);
		JoystickToEvents_Do_m3(NULL /*static, unused*/, L_4, L_6, L_7, L_8, /*hidden argument*/NULL);
		Locomotion_t1 * L_9 = (__this->___locomotion_5);
		float L_10 = (__this->___speed_3);
		float L_11 = (__this->___direction_4);
		Locomotion_Do_m1(L_9, ((float)((float)L_10*(float)(6.0f))), ((float)((float)L_11*(float)(180.0f))), /*hidden argument*/NULL);
	}

IL_0063:
	{
		return;
	}
}
// System.Void MoveSample::.ctor()
extern "C" void MoveSample__ctor_m7 (MoveSample_t6 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m303(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MoveSample::Start()
extern TypeInfo* ObjectU5BU5D_t41_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t48_il2cpp_TypeInfo_var;
extern TypeInfo* Double_t49_il2cpp_TypeInfo_var;
extern TypeInfo* iTween_t23_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral10;
extern Il2CppCodeGenString* _stringLiteral11;
extern Il2CppCodeGenString* _stringLiteral12;
extern Il2CppCodeGenString* _stringLiteral13;
extern Il2CppCodeGenString* _stringLiteral14;
extern Il2CppCodeGenString* _stringLiteral15;
extern "C" void MoveSample_Start_m8 (MoveSample_t6 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t41_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5);
		Int32_t48_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		Double_t49_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7);
		iTween_t23_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		_stringLiteral10 = il2cpp_codegen_string_literal_from_index(10);
		_stringLiteral11 = il2cpp_codegen_string_literal_from_index(11);
		_stringLiteral12 = il2cpp_codegen_string_literal_from_index(12);
		_stringLiteral13 = il2cpp_codegen_string_literal_from_index(13);
		_stringLiteral14 = il2cpp_codegen_string_literal_from_index(14);
		_stringLiteral15 = il2cpp_codegen_string_literal_from_index(15);
		s_Il2CppMethodIntialized = true;
	}
	{
		GameObject_t34 * L_0 = Component_get_gameObject_m319(__this, /*hidden argument*/NULL);
		ObjectU5BU5D_t41* L_1 = ((ObjectU5BU5D_t41*)SZArrayNew(ObjectU5BU5D_t41_il2cpp_TypeInfo_var, 8));
		ArrayElementTypeCheck (L_1, _stringLiteral10);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_1, 0, sizeof(Object_t *))) = (Object_t *)_stringLiteral10;
		ObjectU5BU5D_t41* L_2 = L_1;
		int32_t L_3 = 2;
		Object_t * L_4 = Box(Int32_t48_il2cpp_TypeInfo_var, &L_3);
		ArrayElementTypeCheck (L_2, L_4);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1, sizeof(Object_t *))) = (Object_t *)L_4;
		ObjectU5BU5D_t41* L_5 = L_2;
		ArrayElementTypeCheck (L_5, _stringLiteral11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_5, 2, sizeof(Object_t *))) = (Object_t *)_stringLiteral11;
		ObjectU5BU5D_t41* L_6 = L_5;
		ArrayElementTypeCheck (L_6, _stringLiteral12);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 3, sizeof(Object_t *))) = (Object_t *)_stringLiteral12;
		ObjectU5BU5D_t41* L_7 = L_6;
		ArrayElementTypeCheck (L_7, _stringLiteral13);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_7, 4, sizeof(Object_t *))) = (Object_t *)_stringLiteral13;
		ObjectU5BU5D_t41* L_8 = L_7;
		ArrayElementTypeCheck (L_8, _stringLiteral14);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 5, sizeof(Object_t *))) = (Object_t *)_stringLiteral14;
		ObjectU5BU5D_t41* L_9 = L_8;
		ArrayElementTypeCheck (L_9, _stringLiteral15);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_9, 6, sizeof(Object_t *))) = (Object_t *)_stringLiteral15;
		ObjectU5BU5D_t41* L_10 = L_9;
		double L_11 = (0.1);
		Object_t * L_12 = Box(Double_t49_il2cpp_TypeInfo_var, &L_11);
		ArrayElementTypeCheck (L_10, L_12);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_10, 7, sizeof(Object_t *))) = (Object_t *)L_12;
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		Hashtable_t26 * L_13 = iTween_Hash_m238(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		iTween_MoveBy_m75(NULL /*static, unused*/, L_0, L_13, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RotateSample::.ctor()
extern "C" void RotateSample__ctor_m9 (RotateSample_t7 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m303(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RotateSample::Start()
extern TypeInfo* ObjectU5BU5D_t41_il2cpp_TypeInfo_var;
extern TypeInfo* Double_t49_il2cpp_TypeInfo_var;
extern TypeInfo* iTween_t23_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral10;
extern Il2CppCodeGenString* _stringLiteral11;
extern Il2CppCodeGenString* _stringLiteral16;
extern Il2CppCodeGenString* _stringLiteral13;
extern Il2CppCodeGenString* _stringLiteral14;
extern Il2CppCodeGenString* _stringLiteral15;
extern "C" void RotateSample_Start_m10 (RotateSample_t7 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t41_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5);
		Double_t49_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7);
		iTween_t23_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		_stringLiteral10 = il2cpp_codegen_string_literal_from_index(10);
		_stringLiteral11 = il2cpp_codegen_string_literal_from_index(11);
		_stringLiteral16 = il2cpp_codegen_string_literal_from_index(16);
		_stringLiteral13 = il2cpp_codegen_string_literal_from_index(13);
		_stringLiteral14 = il2cpp_codegen_string_literal_from_index(14);
		_stringLiteral15 = il2cpp_codegen_string_literal_from_index(15);
		s_Il2CppMethodIntialized = true;
	}
	{
		GameObject_t34 * L_0 = Component_get_gameObject_m319(__this, /*hidden argument*/NULL);
		ObjectU5BU5D_t41* L_1 = ((ObjectU5BU5D_t41*)SZArrayNew(ObjectU5BU5D_t41_il2cpp_TypeInfo_var, 8));
		ArrayElementTypeCheck (L_1, _stringLiteral10);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_1, 0, sizeof(Object_t *))) = (Object_t *)_stringLiteral10;
		ObjectU5BU5D_t41* L_2 = L_1;
		double L_3 = (0.25);
		Object_t * L_4 = Box(Double_t49_il2cpp_TypeInfo_var, &L_3);
		ArrayElementTypeCheck (L_2, L_4);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1, sizeof(Object_t *))) = (Object_t *)L_4;
		ObjectU5BU5D_t41* L_5 = L_2;
		ArrayElementTypeCheck (L_5, _stringLiteral11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_5, 2, sizeof(Object_t *))) = (Object_t *)_stringLiteral11;
		ObjectU5BU5D_t41* L_6 = L_5;
		ArrayElementTypeCheck (L_6, _stringLiteral16);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 3, sizeof(Object_t *))) = (Object_t *)_stringLiteral16;
		ObjectU5BU5D_t41* L_7 = L_6;
		ArrayElementTypeCheck (L_7, _stringLiteral13);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_7, 4, sizeof(Object_t *))) = (Object_t *)_stringLiteral13;
		ObjectU5BU5D_t41* L_8 = L_7;
		ArrayElementTypeCheck (L_8, _stringLiteral14);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 5, sizeof(Object_t *))) = (Object_t *)_stringLiteral14;
		ObjectU5BU5D_t41* L_9 = L_8;
		ArrayElementTypeCheck (L_9, _stringLiteral15);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_9, 6, sizeof(Object_t *))) = (Object_t *)_stringLiteral15;
		ObjectU5BU5D_t41* L_10 = L_9;
		double L_11 = (0.4);
		Object_t * L_12 = Box(Double_t49_il2cpp_TypeInfo_var, &L_11);
		ArrayElementTypeCheck (L_10, L_12);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_10, 7, sizeof(Object_t *))) = (Object_t *)L_12;
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		Hashtable_t26 * L_13 = iTween_Hash_m238(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		iTween_RotateBy_m91(NULL /*static, unused*/, L_0, L_13, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SampleInfo::.ctor()
extern "C" void SampleInfo__ctor_m11 (SampleInfo_t8 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m303(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SampleInfo::OnGUI()
extern TypeInfo* GUILayoutOptionU5BU5D_t50_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral17;
extern Il2CppCodeGenString* _stringLiteral18;
extern Il2CppCodeGenString* _stringLiteral19;
extern "C" void SampleInfo_OnGUI_m12 (SampleInfo_t8 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUILayoutOptionU5BU5D_t50_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		_stringLiteral17 = il2cpp_codegen_string_literal_from_index(17);
		_stringLiteral18 = il2cpp_codegen_string_literal_from_index(18);
		_stringLiteral19 = il2cpp_codegen_string_literal_from_index(19);
		s_Il2CppMethodIntialized = true;
	}
	{
		GUILayout_Label_m320(NULL /*static, unused*/, _stringLiteral17, ((GUILayoutOptionU5BU5D_t50*)SZArrayNew(GUILayoutOptionU5BU5D_t50_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		GUILayout_BeginHorizontal_m321(NULL /*static, unused*/, ((GUILayoutOptionU5BU5D_t50*)SZArrayNew(GUILayoutOptionU5BU5D_t50_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		GUILayout_Label_m320(NULL /*static, unused*/, _stringLiteral18, ((GUILayoutOptionU5BU5D_t50*)SZArrayNew(GUILayoutOptionU5BU5D_t50_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		bool L_0 = GUILayout_Button_m322(NULL /*static, unused*/, _stringLiteral19, ((GUILayoutOptionU5BU5D_t50*)SZArrayNew(GUILayoutOptionU5BU5D_t50_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_004a;
		}
	}
	{
		Application_OpenURL_m323(NULL /*static, unused*/, _stringLiteral19, /*hidden argument*/NULL);
	}

IL_004a:
	{
		GUILayout_EndHorizontal_m324(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void iTween/Defaults::.cctor()
extern TypeInfo* Defaults_t12_il2cpp_TypeInfo_var;
extern "C" void Defaults__cctor_m13 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Defaults_t12_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11);
		s_Il2CppMethodIntialized = true;
	}
	{
		((Defaults_t12_StaticFields*)Defaults_t12_il2cpp_TypeInfo_var->static_fields)->___time_0 = (1.0f);
		((Defaults_t12_StaticFields*)Defaults_t12_il2cpp_TypeInfo_var->static_fields)->___delay_1 = (0.0f);
		((Defaults_t12_StaticFields*)Defaults_t12_il2cpp_TypeInfo_var->static_fields)->___namedColorValue_2 = 0;
		((Defaults_t12_StaticFields*)Defaults_t12_il2cpp_TypeInfo_var->static_fields)->___loopType_3 = 0;
		((Defaults_t12_StaticFields*)Defaults_t12_il2cpp_TypeInfo_var->static_fields)->___easeType_4 = ((int32_t)16);
		((Defaults_t12_StaticFields*)Defaults_t12_il2cpp_TypeInfo_var->static_fields)->___lookSpeed_5 = (3.0f);
		((Defaults_t12_StaticFields*)Defaults_t12_il2cpp_TypeInfo_var->static_fields)->___isLocal_6 = 0;
		((Defaults_t12_StaticFields*)Defaults_t12_il2cpp_TypeInfo_var->static_fields)->___space_7 = 1;
		((Defaults_t12_StaticFields*)Defaults_t12_il2cpp_TypeInfo_var->static_fields)->___orientToPath_8 = 0;
		Color_t13  L_0 = Color_get_white_m325(NULL /*static, unused*/, /*hidden argument*/NULL);
		((Defaults_t12_StaticFields*)Defaults_t12_il2cpp_TypeInfo_var->static_fields)->___color_9 = L_0;
		((Defaults_t12_StaticFields*)Defaults_t12_il2cpp_TypeInfo_var->static_fields)->___updateTimePercentage_10 = (0.05f);
		float L_1 = ((Defaults_t12_StaticFields*)Defaults_t12_il2cpp_TypeInfo_var->static_fields)->___updateTimePercentage_10;
		((Defaults_t12_StaticFields*)Defaults_t12_il2cpp_TypeInfo_var->static_fields)->___updateTime_11 = ((float)((float)(1.0f)*(float)L_1));
		((Defaults_t12_StaticFields*)Defaults_t12_il2cpp_TypeInfo_var->static_fields)->___cameraFadeDepth_12 = ((int32_t)999999);
		((Defaults_t12_StaticFields*)Defaults_t12_il2cpp_TypeInfo_var->static_fields)->___lookAhead_13 = (0.05f);
		((Defaults_t12_StaticFields*)Defaults_t12_il2cpp_TypeInfo_var->static_fields)->___useRealTime_14 = 0;
		Vector3_t14  L_2 = Vector3_get_up_m326(NULL /*static, unused*/, /*hidden argument*/NULL);
		((Defaults_t12_StaticFields*)Defaults_t12_il2cpp_TypeInfo_var->static_fields)->___up_15 = L_2;
		return;
	}
}
// System.Void iTween/CRSpline::.ctor(UnityEngine.Vector3[])
extern TypeInfo* Vector3U5BU5D_t16_il2cpp_TypeInfo_var;
extern "C" void CRSpline__ctor_m14 (CRSpline_t15 * __this, Vector3U5BU5D_t16* ___pts, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Vector3U5BU5D_t16_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(12);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m296(__this, /*hidden argument*/NULL);
		Vector3U5BU5D_t16* L_0 = ___pts;
		__this->___pts_0 = ((Vector3U5BU5D_t16*)SZArrayNew(Vector3U5BU5D_t16_il2cpp_TypeInfo_var, (((int32_t)((int32_t)(((Array_t *)L_0)->max_length))))));
		Vector3U5BU5D_t16* L_1 = ___pts;
		Vector3U5BU5D_t16* L_2 = (__this->___pts_0);
		Vector3U5BU5D_t16* L_3 = ___pts;
		Array_Copy_m327(NULL /*static, unused*/, (Array_t *)(Array_t *)L_1, (Array_t *)(Array_t *)L_2, (((int32_t)((int32_t)(((Array_t *)L_3)->max_length)))), /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector3 iTween/CRSpline::Interp(System.Single)
extern TypeInfo* Mathf_t46_il2cpp_TypeInfo_var;
extern "C" Vector3_t14  CRSpline_Interp_m15 (CRSpline_t15 * __this, float ___t, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t46_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	Vector3_t14  V_3 = {0};
	Vector3_t14  V_4 = {0};
	Vector3_t14  V_5 = {0};
	Vector3_t14  V_6 = {0};
	{
		Vector3U5BU5D_t16* L_0 = (__this->___pts_0);
		V_0 = ((int32_t)((int32_t)(((int32_t)((int32_t)(((Array_t *)L_0)->max_length))))-(int32_t)3));
		float L_1 = ___t;
		int32_t L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t46_il2cpp_TypeInfo_var);
		int32_t L_3 = Mathf_FloorToInt_m328(NULL /*static, unused*/, ((float)((float)L_1*(float)(((float)((float)L_2))))), /*hidden argument*/NULL);
		int32_t L_4 = V_0;
		int32_t L_5 = Mathf_Min_m329(NULL /*static, unused*/, L_3, ((int32_t)((int32_t)L_4-(int32_t)1)), /*hidden argument*/NULL);
		V_1 = L_5;
		float L_6 = ___t;
		int32_t L_7 = V_0;
		int32_t L_8 = V_1;
		V_2 = ((float)((float)((float)((float)L_6*(float)(((float)((float)L_7)))))-(float)(((float)((float)L_8)))));
		Vector3U5BU5D_t16* L_9 = (__this->___pts_0);
		int32_t L_10 = V_1;
		V_3 = (*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_9, L_10, sizeof(Vector3_t14 ))));
		Vector3U5BU5D_t16* L_11 = (__this->___pts_0);
		int32_t L_12 = V_1;
		V_4 = (*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_11, ((int32_t)((int32_t)L_12+(int32_t)1)), sizeof(Vector3_t14 ))));
		Vector3U5BU5D_t16* L_13 = (__this->___pts_0);
		int32_t L_14 = V_1;
		V_5 = (*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_13, ((int32_t)((int32_t)L_14+(int32_t)2)), sizeof(Vector3_t14 ))));
		Vector3U5BU5D_t16* L_15 = (__this->___pts_0);
		int32_t L_16 = V_1;
		V_6 = (*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_15, ((int32_t)((int32_t)L_16+(int32_t)3)), sizeof(Vector3_t14 ))));
		Vector3_t14  L_17 = V_3;
		Vector3_t14  L_18 = Vector3_op_UnaryNegation_m330(NULL /*static, unused*/, L_17, /*hidden argument*/NULL);
		Vector3_t14  L_19 = V_4;
		Vector3_t14  L_20 = Vector3_op_Multiply_m331(NULL /*static, unused*/, (3.0f), L_19, /*hidden argument*/NULL);
		Vector3_t14  L_21 = Vector3_op_Addition_m332(NULL /*static, unused*/, L_18, L_20, /*hidden argument*/NULL);
		Vector3_t14  L_22 = V_5;
		Vector3_t14  L_23 = Vector3_op_Multiply_m331(NULL /*static, unused*/, (3.0f), L_22, /*hidden argument*/NULL);
		Vector3_t14  L_24 = Vector3_op_Subtraction_m333(NULL /*static, unused*/, L_21, L_23, /*hidden argument*/NULL);
		Vector3_t14  L_25 = V_6;
		Vector3_t14  L_26 = Vector3_op_Addition_m332(NULL /*static, unused*/, L_24, L_25, /*hidden argument*/NULL);
		float L_27 = V_2;
		float L_28 = V_2;
		float L_29 = V_2;
		Vector3_t14  L_30 = Vector3_op_Multiply_m334(NULL /*static, unused*/, L_26, ((float)((float)((float)((float)L_27*(float)L_28))*(float)L_29)), /*hidden argument*/NULL);
		Vector3_t14  L_31 = V_3;
		Vector3_t14  L_32 = Vector3_op_Multiply_m331(NULL /*static, unused*/, (2.0f), L_31, /*hidden argument*/NULL);
		Vector3_t14  L_33 = V_4;
		Vector3_t14  L_34 = Vector3_op_Multiply_m331(NULL /*static, unused*/, (5.0f), L_33, /*hidden argument*/NULL);
		Vector3_t14  L_35 = Vector3_op_Subtraction_m333(NULL /*static, unused*/, L_32, L_34, /*hidden argument*/NULL);
		Vector3_t14  L_36 = V_5;
		Vector3_t14  L_37 = Vector3_op_Multiply_m331(NULL /*static, unused*/, (4.0f), L_36, /*hidden argument*/NULL);
		Vector3_t14  L_38 = Vector3_op_Addition_m332(NULL /*static, unused*/, L_35, L_37, /*hidden argument*/NULL);
		Vector3_t14  L_39 = V_6;
		Vector3_t14  L_40 = Vector3_op_Subtraction_m333(NULL /*static, unused*/, L_38, L_39, /*hidden argument*/NULL);
		float L_41 = V_2;
		float L_42 = V_2;
		Vector3_t14  L_43 = Vector3_op_Multiply_m334(NULL /*static, unused*/, L_40, ((float)((float)L_41*(float)L_42)), /*hidden argument*/NULL);
		Vector3_t14  L_44 = Vector3_op_Addition_m332(NULL /*static, unused*/, L_30, L_43, /*hidden argument*/NULL);
		Vector3_t14  L_45 = V_3;
		Vector3_t14  L_46 = Vector3_op_UnaryNegation_m330(NULL /*static, unused*/, L_45, /*hidden argument*/NULL);
		Vector3_t14  L_47 = V_5;
		Vector3_t14  L_48 = Vector3_op_Addition_m332(NULL /*static, unused*/, L_46, L_47, /*hidden argument*/NULL);
		float L_49 = V_2;
		Vector3_t14  L_50 = Vector3_op_Multiply_m334(NULL /*static, unused*/, L_48, L_49, /*hidden argument*/NULL);
		Vector3_t14  L_51 = Vector3_op_Addition_m332(NULL /*static, unused*/, L_44, L_50, /*hidden argument*/NULL);
		Vector3_t14  L_52 = V_4;
		Vector3_t14  L_53 = Vector3_op_Multiply_m331(NULL /*static, unused*/, (2.0f), L_52, /*hidden argument*/NULL);
		Vector3_t14  L_54 = Vector3_op_Addition_m332(NULL /*static, unused*/, L_51, L_53, /*hidden argument*/NULL);
		Vector3_t14  L_55 = Vector3_op_Multiply_m331(NULL /*static, unused*/, (0.5f), L_54, /*hidden argument*/NULL);
		return L_55;
	}
}
// System.Void iTween/EasingFunction::.ctor(System.Object,System.IntPtr)
extern "C" void EasingFunction__ctor_m16 (EasingFunction_t17 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Single iTween/EasingFunction::Invoke(System.Single,System.Single,System.Single)
extern "C" float EasingFunction_Invoke_m17 (EasingFunction_t17 * __this, float ___start, float ___end, float ___Value, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		EasingFunction_Invoke_m17((EasingFunction_t17 *)__this->___prev_9,___start, ___end, ___Value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef float (*FunctionPointerType) (Object_t *, Object_t * __this, float ___start, float ___end, float ___Value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___start, ___end, ___Value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef float (*FunctionPointerType) (Object_t * __this, float ___start, float ___end, float ___Value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___start, ___end, ___Value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" float pinvoke_delegate_wrapper_EasingFunction_t17(Il2CppObject* delegate, float ___start, float ___end, float ___Value)
{
	typedef float (STDCALL *native_function_ptr_type)(float, float, float);
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Marshaling of parameter '___start' to native representation

	// Marshaling of parameter '___end' to native representation

	// Marshaling of parameter '___Value' to native representation

	// Native function invocation and marshaling of return value back from native representation
	float _return_value = _il2cpp_pinvoke_func(___start, ___end, ___Value);

	// Marshaling cleanup of parameter '___start' native representation

	// Marshaling cleanup of parameter '___end' native representation

	// Marshaling cleanup of parameter '___Value' native representation

	return _return_value;
}
// System.IAsyncResult iTween/EasingFunction::BeginInvoke(System.Single,System.Single,System.Single,System.AsyncCallback,System.Object)
extern TypeInfo* Single_t51_il2cpp_TypeInfo_var;
extern "C" Object_t * EasingFunction_BeginInvoke_m18 (EasingFunction_t17 * __this, float ___start, float ___end, float ___Value, AsyncCallback_t20 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Single_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(Single_t51_il2cpp_TypeInfo_var, &___start);
	__d_args[1] = Box(Single_t51_il2cpp_TypeInfo_var, &___end);
	__d_args[2] = Box(Single_t51_il2cpp_TypeInfo_var, &___Value);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Single iTween/EasingFunction::EndInvoke(System.IAsyncResult)
extern "C" float EasingFunction_EndInvoke_m19 (EasingFunction_t17 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(float*)UnBox ((Il2CppCodeGenObject*)__result);
}
// System.Void iTween/ApplyTween::.ctor(System.Object,System.IntPtr)
extern "C" void ApplyTween__ctor_m20 (ApplyTween_t21 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void iTween/ApplyTween::Invoke()
extern "C" void ApplyTween_Invoke_m21 (ApplyTween_t21 * __this, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		ApplyTween_Invoke_m21((ApplyTween_t21 *)__this->___prev_9, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if ((__this->___m_target_2 != NULL || MethodHasParameters((MethodInfo*)(__this->___method_3.___m_value_0))) && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_ApplyTween_t21(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.IAsyncResult iTween/ApplyTween::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * ApplyTween_BeginInvoke_m22 (ApplyTween_t21 * __this, AsyncCallback_t20 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void iTween/ApplyTween::EndInvoke(System.IAsyncResult)
extern "C" void ApplyTween_EndInvoke_m23 (ApplyTween_t21 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// System.Void iTween/<TweenDelay>c__Iterator0::.ctor()
extern "C" void U3CTweenDelayU3Ec__Iterator0__ctor_m24 (U3CTweenDelayU3Ec__Iterator0_t22 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m296(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object iTween/<TweenDelay>c__Iterator0::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" Object_t * U3CTweenDelayU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m25 (U3CTweenDelayU3Ec__Iterator0_t22 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_1);
		return L_0;
	}
}
// System.Object iTween/<TweenDelay>c__Iterator0::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3CTweenDelayU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m26 (U3CTweenDelayU3Ec__Iterator0_t22 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_1);
		return L_0;
	}
}
// System.Boolean iTween/<TweenDelay>c__Iterator0::MoveNext()
extern TypeInfo* WaitForSeconds_t52_il2cpp_TypeInfo_var;
extern "C" bool U3CTweenDelayU3Ec__Iterator0_MoveNext_m27 (U3CTweenDelayU3Ec__Iterator0_t22 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WaitForSeconds_t52_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(15);
		s_Il2CppMethodIntialized = true;
	}
	uint32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0 = (__this->___U24PC_0);
		V_0 = L_0;
		__this->___U24PC_0 = (-1);
		uint32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0021;
		}
		if (L_1 == 1)
		{
			goto IL_0053;
		}
	}
	{
		goto IL_0081;
	}

IL_0021:
	{
		iTween_t23 * L_2 = (__this->___U3CU3Ef__this_2);
		float L_3 = Time_get_time_m335(NULL /*static, unused*/, /*hidden argument*/NULL);
		L_2->___delayStarted_16 = L_3;
		iTween_t23 * L_4 = (__this->___U3CU3Ef__this_2);
		float L_5 = (L_4->___delay_9);
		WaitForSeconds_t52 * L_6 = (WaitForSeconds_t52 *)il2cpp_codegen_object_new (WaitForSeconds_t52_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m336(L_6, L_5, /*hidden argument*/NULL);
		__this->___U24current_1 = L_6;
		__this->___U24PC_0 = 1;
		goto IL_0083;
	}

IL_0053:
	{
		iTween_t23 * L_7 = (__this->___U3CU3Ef__this_2);
		bool L_8 = (L_7->___wasPaused_21);
		if (!L_8)
		{
			goto IL_007a;
		}
	}
	{
		iTween_t23 * L_9 = (__this->___U3CU3Ef__this_2);
		L_9->___wasPaused_21 = 0;
		iTween_t23 * L_10 = (__this->___U3CU3Ef__this_2);
		iTween_TweenStart_m151(L_10, /*hidden argument*/NULL);
	}

IL_007a:
	{
		__this->___U24PC_0 = (-1);
	}

IL_0081:
	{
		return 0;
	}

IL_0083:
	{
		return 1;
	}
	// Dead block : IL_0085: ldloc.1
}
// System.Void iTween/<TweenDelay>c__Iterator0::Dispose()
extern "C" void U3CTweenDelayU3Ec__Iterator0_Dispose_m28 (U3CTweenDelayU3Ec__Iterator0_t22 * __this, const MethodInfo* method)
{
	{
		__this->___U24PC_0 = (-1);
		return;
	}
}
// System.Void iTween/<TweenDelay>c__Iterator0::Reset()
extern TypeInfo* NotSupportedException_t53_il2cpp_TypeInfo_var;
extern "C" void U3CTweenDelayU3Ec__Iterator0_Reset_m29 (U3CTweenDelayU3Ec__Iterator0_t22 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t53_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t53 * L_0 = (NotSupportedException_t53 *)il2cpp_codegen_object_new (NotSupportedException_t53_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m337(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_0);
	}
}
// System.Void iTween/<TweenRestart>c__Iterator1::.ctor()
extern "C" void U3CTweenRestartU3Ec__Iterator1__ctor_m30 (U3CTweenRestartU3Ec__Iterator1_t24 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m296(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object iTween/<TweenRestart>c__Iterator1::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" Object_t * U3CTweenRestartU3Ec__Iterator1_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m31 (U3CTweenRestartU3Ec__Iterator1_t24 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_1);
		return L_0;
	}
}
// System.Object iTween/<TweenRestart>c__Iterator1::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3CTweenRestartU3Ec__Iterator1_System_Collections_IEnumerator_get_Current_m32 (U3CTweenRestartU3Ec__Iterator1_t24 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_1);
		return L_0;
	}
}
// System.Boolean iTween/<TweenRestart>c__Iterator1::MoveNext()
extern TypeInfo* WaitForSeconds_t52_il2cpp_TypeInfo_var;
extern "C" bool U3CTweenRestartU3Ec__Iterator1_MoveNext_m33 (U3CTweenRestartU3Ec__Iterator1_t24 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WaitForSeconds_t52_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(15);
		s_Il2CppMethodIntialized = true;
	}
	uint32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0 = (__this->___U24PC_0);
		V_0 = L_0;
		__this->___U24PC_0 = (-1);
		uint32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0021;
		}
		if (L_1 == 1)
		{
			goto IL_0068;
		}
	}
	{
		goto IL_0086;
	}

IL_0021:
	{
		iTween_t23 * L_2 = (__this->___U3CU3Ef__this_2);
		float L_3 = (L_2->___delay_9);
		if ((!(((float)L_3) > ((float)(0.0f)))))
		{
			goto IL_0068;
		}
	}
	{
		iTween_t23 * L_4 = (__this->___U3CU3Ef__this_2);
		float L_5 = Time_get_time_m335(NULL /*static, unused*/, /*hidden argument*/NULL);
		L_4->___delayStarted_16 = L_5;
		iTween_t23 * L_6 = (__this->___U3CU3Ef__this_2);
		float L_7 = (L_6->___delay_9);
		WaitForSeconds_t52 * L_8 = (WaitForSeconds_t52 *)il2cpp_codegen_object_new (WaitForSeconds_t52_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m336(L_8, L_7, /*hidden argument*/NULL);
		__this->___U24current_1 = L_8;
		__this->___U24PC_0 = 1;
		goto IL_0088;
	}

IL_0068:
	{
		iTween_t23 * L_9 = (__this->___U3CU3Ef__this_2);
		L_9->___loop_19 = 1;
		iTween_t23 * L_10 = (__this->___U3CU3Ef__this_2);
		iTween_TweenStart_m151(L_10, /*hidden argument*/NULL);
		__this->___U24PC_0 = (-1);
	}

IL_0086:
	{
		return 0;
	}

IL_0088:
	{
		return 1;
	}
	// Dead block : IL_008a: ldloc.1
}
// System.Void iTween/<TweenRestart>c__Iterator1::Dispose()
extern "C" void U3CTweenRestartU3Ec__Iterator1_Dispose_m34 (U3CTweenRestartU3Ec__Iterator1_t24 * __this, const MethodInfo* method)
{
	{
		__this->___U24PC_0 = (-1);
		return;
	}
}
// System.Void iTween/<TweenRestart>c__Iterator1::Reset()
extern TypeInfo* NotSupportedException_t53_il2cpp_TypeInfo_var;
extern "C" void U3CTweenRestartU3Ec__Iterator1_Reset_m35 (U3CTweenRestartU3Ec__Iterator1_t24 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t53_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t53 * L_0 = (NotSupportedException_t53 *)il2cpp_codegen_object_new (NotSupportedException_t53_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m337(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_0);
	}
}
// System.Void iTween/<Start>c__Iterator2::.ctor()
extern "C" void U3CStartU3Ec__Iterator2__ctor_m36 (U3CStartU3Ec__Iterator2_t25 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m296(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object iTween/<Start>c__Iterator2::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" Object_t * U3CStartU3Ec__Iterator2_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m37 (U3CStartU3Ec__Iterator2_t25 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_1);
		return L_0;
	}
}
// System.Object iTween/<Start>c__Iterator2::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3CStartU3Ec__Iterator2_System_Collections_IEnumerator_get_Current_m38 (U3CStartU3Ec__Iterator2_t25 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_1);
		return L_0;
	}
}
// System.Boolean iTween/<Start>c__Iterator2::MoveNext()
extern Il2CppCodeGenString* _stringLiteral20;
extern "C" bool U3CStartU3Ec__Iterator2_MoveNext_m39 (U3CStartU3Ec__Iterator2_t25 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral20 = il2cpp_codegen_string_literal_from_index(20);
		s_Il2CppMethodIntialized = true;
	}
	uint32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0 = (__this->___U24PC_0);
		V_0 = L_0;
		__this->___U24PC_0 = (-1);
		uint32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0021;
		}
		if (L_1 == 1)
		{
			goto IL_0058;
		}
	}
	{
		goto IL_006a;
	}

IL_0021:
	{
		iTween_t23 * L_2 = (__this->___U3CU3Ef__this_2);
		float L_3 = (L_2->___delay_9);
		if ((!(((float)L_3) > ((float)(0.0f)))))
		{
			goto IL_0058;
		}
	}
	{
		iTween_t23 * L_4 = (__this->___U3CU3Ef__this_2);
		Coroutine_t54 * L_5 = MonoBehaviour_StartCoroutine_m338(L_4, _stringLiteral20, /*hidden argument*/NULL);
		__this->___U24current_1 = L_5;
		__this->___U24PC_0 = 1;
		goto IL_006c;
	}

IL_0058:
	{
		iTween_t23 * L_6 = (__this->___U3CU3Ef__this_2);
		iTween_TweenStart_m151(L_6, /*hidden argument*/NULL);
		__this->___U24PC_0 = (-1);
	}

IL_006a:
	{
		return 0;
	}

IL_006c:
	{
		return 1;
	}
	// Dead block : IL_006e: ldloc.1
}
// System.Void iTween/<Start>c__Iterator2::Dispose()
extern "C" void U3CStartU3Ec__Iterator2_Dispose_m40 (U3CStartU3Ec__Iterator2_t25 * __this, const MethodInfo* method)
{
	{
		__this->___U24PC_0 = (-1);
		return;
	}
}
// System.Void iTween/<Start>c__Iterator2::Reset()
extern TypeInfo* NotSupportedException_t53_il2cpp_TypeInfo_var;
extern "C" void U3CStartU3Ec__Iterator2_Reset_m41 (U3CStartU3Ec__Iterator2_t25 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t53_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t53 * L_0 = (NotSupportedException_t53 *)il2cpp_codegen_object_new (NotSupportedException_t53_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m337(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_0);
	}
}
// System.Void iTween::.ctor(System.Collections.Hashtable)
extern "C" void iTween__ctor_m42 (iTween_t23 * __this, Hashtable_t26 * ___h, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m303(__this, /*hidden argument*/NULL);
		Hashtable_t26 * L_0 = ___h;
		__this->___tweenArguments_23 = L_0;
		return;
	}
}
// System.Void iTween::.cctor()
extern TypeInfo* List_1_t33_il2cpp_TypeInfo_var;
extern TypeInfo* iTween_t23_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m339_MethodInfo_var;
extern "C" void iTween__cctor_m43 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t33_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(18);
		iTween_t23_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		List_1__ctor_m339_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483650);
		s_Il2CppMethodIntialized = true;
	}
	{
		List_1_t33 * L_0 = (List_1_t33 *)il2cpp_codegen_object_new (List_1_t33_il2cpp_TypeInfo_var);
		List_1__ctor_m339(L_0, /*hidden argument*/List_1__ctor_m339_MethodInfo_var);
		((iTween_t23_StaticFields*)iTween_t23_il2cpp_TypeInfo_var->static_fields)->___tweens_2 = L_0;
		return;
	}
}
// System.Void iTween::Init(UnityEngine.GameObject)
extern TypeInfo* iTween_t23_il2cpp_TypeInfo_var;
extern "C" void iTween_Init_m44 (Object_t * __this /* static, unused */, GameObject_t34 * ___target, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		iTween_t23_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		s_Il2CppMethodIntialized = true;
	}
	{
		GameObject_t34 * L_0 = ___target;
		Vector3_t14  L_1 = Vector3_get_zero_m340(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		iTween_MoveBy_m74(NULL /*static, unused*/, L_0, L_1, (0.0f), /*hidden argument*/NULL);
		return;
	}
}
// System.Void iTween::CameraFadeFrom(System.Single,System.Single)
extern TypeInfo* iTween_t23_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t41_il2cpp_TypeInfo_var;
extern TypeInfo* Single_t51_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral21;
extern Il2CppCodeGenString* _stringLiteral22;
extern Il2CppCodeGenString* _stringLiteral23;
extern "C" void iTween_CameraFadeFrom_m45 (Object_t * __this /* static, unused */, float ___amount, float ___time, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		iTween_t23_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		ObjectU5BU5D_t41_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5);
		Single_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		_stringLiteral21 = il2cpp_codegen_string_literal_from_index(21);
		_stringLiteral22 = il2cpp_codegen_string_literal_from_index(22);
		_stringLiteral23 = il2cpp_codegen_string_literal_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		GameObject_t34 * L_0 = ((iTween_t23_StaticFields*)iTween_t23_il2cpp_TypeInfo_var->static_fields)->___cameraFade_3;
		bool L_1 = Object_op_Implicit_m316(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0046;
		}
	}
	{
		ObjectU5BU5D_t41* L_2 = ((ObjectU5BU5D_t41*)SZArrayNew(ObjectU5BU5D_t41_il2cpp_TypeInfo_var, 4));
		ArrayElementTypeCheck (L_2, _stringLiteral21);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 0, sizeof(Object_t *))) = (Object_t *)_stringLiteral21;
		ObjectU5BU5D_t41* L_3 = L_2;
		float L_4 = ___amount;
		float L_5 = L_4;
		Object_t * L_6 = Box(Single_t51_il2cpp_TypeInfo_var, &L_5);
		ArrayElementTypeCheck (L_3, L_6);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_3, 1, sizeof(Object_t *))) = (Object_t *)L_6;
		ObjectU5BU5D_t41* L_7 = L_3;
		ArrayElementTypeCheck (L_7, _stringLiteral22);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_7, 2, sizeof(Object_t *))) = (Object_t *)_stringLiteral22;
		ObjectU5BU5D_t41* L_8 = L_7;
		float L_9 = ___time;
		float L_10 = L_9;
		Object_t * L_11 = Box(Single_t51_il2cpp_TypeInfo_var, &L_10);
		ArrayElementTypeCheck (L_8, L_11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 3, sizeof(Object_t *))) = (Object_t *)L_11;
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		Hashtable_t26 * L_12 = iTween_Hash_m238(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		iTween_CameraFadeFrom_m46(NULL /*static, unused*/, L_12, /*hidden argument*/NULL);
		goto IL_0050;
	}

IL_0046:
	{
		Debug_LogError_m341(NULL /*static, unused*/, _stringLiteral23, /*hidden argument*/NULL);
	}

IL_0050:
	{
		return;
	}
}
// System.Void iTween::CameraFadeFrom(System.Collections.Hashtable)
extern TypeInfo* iTween_t23_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral23;
extern "C" void iTween_CameraFadeFrom_m46 (Object_t * __this /* static, unused */, Hashtable_t26 * ___args, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		iTween_t23_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		_stringLiteral23 = il2cpp_codegen_string_literal_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		GameObject_t34 * L_0 = ((iTween_t23_StaticFields*)iTween_t23_il2cpp_TypeInfo_var->static_fields)->___cameraFade_3;
		bool L_1 = Object_op_Implicit_m316(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		GameObject_t34 * L_2 = ((iTween_t23_StaticFields*)iTween_t23_il2cpp_TypeInfo_var->static_fields)->___cameraFade_3;
		Hashtable_t26 * L_3 = ___args;
		iTween_ColorFrom_m55(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		goto IL_0029;
	}

IL_001f:
	{
		Debug_LogError_m341(NULL /*static, unused*/, _stringLiteral23, /*hidden argument*/NULL);
	}

IL_0029:
	{
		return;
	}
}
// System.Void iTween::CameraFadeTo(System.Single,System.Single)
extern TypeInfo* iTween_t23_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t41_il2cpp_TypeInfo_var;
extern TypeInfo* Single_t51_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral21;
extern Il2CppCodeGenString* _stringLiteral22;
extern Il2CppCodeGenString* _stringLiteral23;
extern "C" void iTween_CameraFadeTo_m47 (Object_t * __this /* static, unused */, float ___amount, float ___time, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		iTween_t23_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		ObjectU5BU5D_t41_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5);
		Single_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		_stringLiteral21 = il2cpp_codegen_string_literal_from_index(21);
		_stringLiteral22 = il2cpp_codegen_string_literal_from_index(22);
		_stringLiteral23 = il2cpp_codegen_string_literal_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		GameObject_t34 * L_0 = ((iTween_t23_StaticFields*)iTween_t23_il2cpp_TypeInfo_var->static_fields)->___cameraFade_3;
		bool L_1 = Object_op_Implicit_m316(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0046;
		}
	}
	{
		ObjectU5BU5D_t41* L_2 = ((ObjectU5BU5D_t41*)SZArrayNew(ObjectU5BU5D_t41_il2cpp_TypeInfo_var, 4));
		ArrayElementTypeCheck (L_2, _stringLiteral21);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 0, sizeof(Object_t *))) = (Object_t *)_stringLiteral21;
		ObjectU5BU5D_t41* L_3 = L_2;
		float L_4 = ___amount;
		float L_5 = L_4;
		Object_t * L_6 = Box(Single_t51_il2cpp_TypeInfo_var, &L_5);
		ArrayElementTypeCheck (L_3, L_6);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_3, 1, sizeof(Object_t *))) = (Object_t *)L_6;
		ObjectU5BU5D_t41* L_7 = L_3;
		ArrayElementTypeCheck (L_7, _stringLiteral22);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_7, 2, sizeof(Object_t *))) = (Object_t *)_stringLiteral22;
		ObjectU5BU5D_t41* L_8 = L_7;
		float L_9 = ___time;
		float L_10 = L_9;
		Object_t * L_11 = Box(Single_t51_il2cpp_TypeInfo_var, &L_10);
		ArrayElementTypeCheck (L_8, L_11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 3, sizeof(Object_t *))) = (Object_t *)L_11;
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		Hashtable_t26 * L_12 = iTween_Hash_m238(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		iTween_CameraFadeTo_m48(NULL /*static, unused*/, L_12, /*hidden argument*/NULL);
		goto IL_0050;
	}

IL_0046:
	{
		Debug_LogError_m341(NULL /*static, unused*/, _stringLiteral23, /*hidden argument*/NULL);
	}

IL_0050:
	{
		return;
	}
}
// System.Void iTween::CameraFadeTo(System.Collections.Hashtable)
extern TypeInfo* iTween_t23_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral23;
extern "C" void iTween_CameraFadeTo_m48 (Object_t * __this /* static, unused */, Hashtable_t26 * ___args, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		iTween_t23_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		_stringLiteral23 = il2cpp_codegen_string_literal_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		GameObject_t34 * L_0 = ((iTween_t23_StaticFields*)iTween_t23_il2cpp_TypeInfo_var->static_fields)->___cameraFade_3;
		bool L_1 = Object_op_Implicit_m316(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		GameObject_t34 * L_2 = ((iTween_t23_StaticFields*)iTween_t23_il2cpp_TypeInfo_var->static_fields)->___cameraFade_3;
		Hashtable_t26 * L_3 = ___args;
		iTween_ColorTo_m57(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		goto IL_0029;
	}

IL_001f:
	{
		Debug_LogError_m341(NULL /*static, unused*/, _stringLiteral23, /*hidden argument*/NULL);
	}

IL_0029:
	{
		return;
	}
}
// System.Void iTween::ValueTo(UnityEngine.GameObject,System.Collections.Hashtable)
extern const Il2CppType* Vector2_t36_0_0_0_var;
extern const Il2CppType* Vector3_t14_0_0_0_var;
extern const Il2CppType* Rect_t37_0_0_0_var;
extern const Il2CppType* Single_t51_0_0_0_var;
extern const Il2CppType* Color_t13_0_0_0_var;
extern TypeInfo* iTween_t23_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* EaseType_t9_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral24;
extern Il2CppCodeGenString* _stringLiteral25;
extern Il2CppCodeGenString* _stringLiteral26;
extern Il2CppCodeGenString* _stringLiteral27;
extern Il2CppCodeGenString* _stringLiteral28;
extern Il2CppCodeGenString* _stringLiteral29;
extern Il2CppCodeGenString* _stringLiteral30;
extern Il2CppCodeGenString* _stringLiteral31;
extern Il2CppCodeGenString* _stringLiteral32;
extern Il2CppCodeGenString* _stringLiteral33;
extern Il2CppCodeGenString* _stringLiteral34;
extern Il2CppCodeGenString* _stringLiteral35;
extern Il2CppCodeGenString* _stringLiteral36;
extern Il2CppCodeGenString* _stringLiteral37;
extern "C" void iTween_ValueTo_m49 (Object_t * __this /* static, unused */, GameObject_t34 * ___target, Hashtable_t26 * ___args, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Vector2_t36_0_0_0_var = il2cpp_codegen_type_from_index(19);
		Vector3_t14_0_0_0_var = il2cpp_codegen_type_from_index(13);
		Rect_t37_0_0_0_var = il2cpp_codegen_type_from_index(20);
		Single_t51_0_0_0_var = il2cpp_codegen_type_from_index(14);
		Color_t13_0_0_0_var = il2cpp_codegen_type_from_index(21);
		iTween_t23_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		EaseType_t9_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		_stringLiteral24 = il2cpp_codegen_string_literal_from_index(24);
		_stringLiteral25 = il2cpp_codegen_string_literal_from_index(25);
		_stringLiteral26 = il2cpp_codegen_string_literal_from_index(26);
		_stringLiteral27 = il2cpp_codegen_string_literal_from_index(27);
		_stringLiteral28 = il2cpp_codegen_string_literal_from_index(28);
		_stringLiteral29 = il2cpp_codegen_string_literal_from_index(29);
		_stringLiteral30 = il2cpp_codegen_string_literal_from_index(30);
		_stringLiteral31 = il2cpp_codegen_string_literal_from_index(31);
		_stringLiteral32 = il2cpp_codegen_string_literal_from_index(32);
		_stringLiteral33 = il2cpp_codegen_string_literal_from_index(33);
		_stringLiteral34 = il2cpp_codegen_string_literal_from_index(34);
		_stringLiteral35 = il2cpp_codegen_string_literal_from_index(35);
		_stringLiteral36 = il2cpp_codegen_string_literal_from_index(36);
		_stringLiteral37 = il2cpp_codegen_string_literal_from_index(37);
		s_Il2CppMethodIntialized = true;
	}
	{
		Hashtable_t26 * L_0 = ___args;
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		Hashtable_t26 * L_1 = iTween_CleanArgs_m251(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		___args = L_1;
		Hashtable_t26 * L_2 = ___args;
		bool L_3 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(26 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_2, _stringLiteral24);
		if (!L_3)
		{
			goto IL_0038;
		}
	}
	{
		Hashtable_t26 * L_4 = ___args;
		bool L_5 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(26 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_4, _stringLiteral25);
		if (!L_5)
		{
			goto IL_0038;
		}
	}
	{
		Hashtable_t26 * L_6 = ___args;
		bool L_7 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(26 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_6, _stringLiteral26);
		if (L_7)
		{
			goto IL_0043;
		}
	}

IL_0038:
	{
		Debug_LogError_m341(NULL /*static, unused*/, _stringLiteral27, /*hidden argument*/NULL);
		return;
	}

IL_0043:
	{
		Hashtable_t26 * L_8 = ___args;
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(22 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_8, _stringLiteral28, _stringLiteral29);
		Hashtable_t26 * L_9 = ___args;
		Object_t * L_10 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_9, _stringLiteral25);
		Type_t * L_11 = Object_GetType_m342(L_10, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_12 = Type_GetTypeFromHandle_m343(NULL /*static, unused*/, LoadTypeToken(Vector2_t36_0_0_0_var), /*hidden argument*/NULL);
		if ((!(((Object_t*)(Type_t *)L_11) == ((Object_t*)(Type_t *)L_12))))
		{
			goto IL_0087;
		}
	}
	{
		Hashtable_t26 * L_13 = ___args;
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(22 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_13, _stringLiteral30, _stringLiteral31);
		goto IL_0162;
	}

IL_0087:
	{
		Hashtable_t26 * L_14 = ___args;
		Object_t * L_15 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_14, _stringLiteral25);
		Type_t * L_16 = Object_GetType_m342(L_15, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_17 = Type_GetTypeFromHandle_m343(NULL /*static, unused*/, LoadTypeToken(Vector3_t14_0_0_0_var), /*hidden argument*/NULL);
		if ((!(((Object_t*)(Type_t *)L_16) == ((Object_t*)(Type_t *)L_17))))
		{
			goto IL_00bb;
		}
	}
	{
		Hashtable_t26 * L_18 = ___args;
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(22 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_18, _stringLiteral30, _stringLiteral32);
		goto IL_0162;
	}

IL_00bb:
	{
		Hashtable_t26 * L_19 = ___args;
		Object_t * L_20 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_19, _stringLiteral25);
		Type_t * L_21 = Object_GetType_m342(L_20, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_22 = Type_GetTypeFromHandle_m343(NULL /*static, unused*/, LoadTypeToken(Rect_t37_0_0_0_var), /*hidden argument*/NULL);
		if ((!(((Object_t*)(Type_t *)L_21) == ((Object_t*)(Type_t *)L_22))))
		{
			goto IL_00ef;
		}
	}
	{
		Hashtable_t26 * L_23 = ___args;
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(22 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_23, _stringLiteral30, _stringLiteral33);
		goto IL_0162;
	}

IL_00ef:
	{
		Hashtable_t26 * L_24 = ___args;
		Object_t * L_25 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_24, _stringLiteral25);
		Type_t * L_26 = Object_GetType_m342(L_25, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_27 = Type_GetTypeFromHandle_m343(NULL /*static, unused*/, LoadTypeToken(Single_t51_0_0_0_var), /*hidden argument*/NULL);
		if ((!(((Object_t*)(Type_t *)L_26) == ((Object_t*)(Type_t *)L_27))))
		{
			goto IL_0123;
		}
	}
	{
		Hashtable_t26 * L_28 = ___args;
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(22 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_28, _stringLiteral30, _stringLiteral34);
		goto IL_0162;
	}

IL_0123:
	{
		Hashtable_t26 * L_29 = ___args;
		Object_t * L_30 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_29, _stringLiteral25);
		Type_t * L_31 = Object_GetType_m342(L_30, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_32 = Type_GetTypeFromHandle_m343(NULL /*static, unused*/, LoadTypeToken(Color_t13_0_0_0_var), /*hidden argument*/NULL);
		if ((!(((Object_t*)(Type_t *)L_31) == ((Object_t*)(Type_t *)L_32))))
		{
			goto IL_0157;
		}
	}
	{
		Hashtable_t26 * L_33 = ___args;
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(22 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_33, _stringLiteral30, _stringLiteral35);
		goto IL_0162;
	}

IL_0157:
	{
		Debug_LogError_m341(NULL /*static, unused*/, _stringLiteral36, /*hidden argument*/NULL);
		return;
	}

IL_0162:
	{
		Hashtable_t26 * L_34 = ___args;
		bool L_35 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(26 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_34, _stringLiteral37);
		if (L_35)
		{
			goto IL_0184;
		}
	}
	{
		Hashtable_t26 * L_36 = ___args;
		int32_t L_37 = ((int32_t)21);
		Object_t * L_38 = Box(EaseType_t9_il2cpp_TypeInfo_var, &L_37);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(24 /* System.Void System.Collections.Hashtable::Add(System.Object,System.Object) */, L_36, _stringLiteral37, L_38);
	}

IL_0184:
	{
		GameObject_t34 * L_39 = ___target;
		Hashtable_t26 * L_40 = ___args;
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		iTween_Launch_m250(NULL /*static, unused*/, L_39, L_40, /*hidden argument*/NULL);
		return;
	}
}
// System.Void iTween::FadeFrom(UnityEngine.GameObject,System.Single,System.Single)
extern TypeInfo* ObjectU5BU5D_t41_il2cpp_TypeInfo_var;
extern TypeInfo* Single_t51_il2cpp_TypeInfo_var;
extern TypeInfo* iTween_t23_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral38;
extern Il2CppCodeGenString* _stringLiteral22;
extern "C" void iTween_FadeFrom_m50 (Object_t * __this /* static, unused */, GameObject_t34 * ___target, float ___alpha, float ___time, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t41_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5);
		Single_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		iTween_t23_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		_stringLiteral38 = il2cpp_codegen_string_literal_from_index(38);
		_stringLiteral22 = il2cpp_codegen_string_literal_from_index(22);
		s_Il2CppMethodIntialized = true;
	}
	{
		GameObject_t34 * L_0 = ___target;
		ObjectU5BU5D_t41* L_1 = ((ObjectU5BU5D_t41*)SZArrayNew(ObjectU5BU5D_t41_il2cpp_TypeInfo_var, 4));
		ArrayElementTypeCheck (L_1, _stringLiteral38);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_1, 0, sizeof(Object_t *))) = (Object_t *)_stringLiteral38;
		ObjectU5BU5D_t41* L_2 = L_1;
		float L_3 = ___alpha;
		float L_4 = L_3;
		Object_t * L_5 = Box(Single_t51_il2cpp_TypeInfo_var, &L_4);
		ArrayElementTypeCheck (L_2, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1, sizeof(Object_t *))) = (Object_t *)L_5;
		ObjectU5BU5D_t41* L_6 = L_2;
		ArrayElementTypeCheck (L_6, _stringLiteral22);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 2, sizeof(Object_t *))) = (Object_t *)_stringLiteral22;
		ObjectU5BU5D_t41* L_7 = L_6;
		float L_8 = ___time;
		float L_9 = L_8;
		Object_t * L_10 = Box(Single_t51_il2cpp_TypeInfo_var, &L_9);
		ArrayElementTypeCheck (L_7, L_10);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_7, 3, sizeof(Object_t *))) = (Object_t *)L_10;
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		Hashtable_t26 * L_11 = iTween_Hash_m238(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		iTween_FadeFrom_m51(NULL /*static, unused*/, L_0, L_11, /*hidden argument*/NULL);
		return;
	}
}
// System.Void iTween::FadeFrom(UnityEngine.GameObject,System.Collections.Hashtable)
extern TypeInfo* iTween_t23_il2cpp_TypeInfo_var;
extern "C" void iTween_FadeFrom_m51 (Object_t * __this /* static, unused */, GameObject_t34 * ___target, Hashtable_t26 * ___args, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		iTween_t23_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		s_Il2CppMethodIntialized = true;
	}
	{
		GameObject_t34 * L_0 = ___target;
		Hashtable_t26 * L_1 = ___args;
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		iTween_ColorFrom_m55(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void iTween::FadeTo(UnityEngine.GameObject,System.Single,System.Single)
extern TypeInfo* ObjectU5BU5D_t41_il2cpp_TypeInfo_var;
extern TypeInfo* Single_t51_il2cpp_TypeInfo_var;
extern TypeInfo* iTween_t23_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral38;
extern Il2CppCodeGenString* _stringLiteral22;
extern "C" void iTween_FadeTo_m52 (Object_t * __this /* static, unused */, GameObject_t34 * ___target, float ___alpha, float ___time, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t41_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5);
		Single_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		iTween_t23_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		_stringLiteral38 = il2cpp_codegen_string_literal_from_index(38);
		_stringLiteral22 = il2cpp_codegen_string_literal_from_index(22);
		s_Il2CppMethodIntialized = true;
	}
	{
		GameObject_t34 * L_0 = ___target;
		ObjectU5BU5D_t41* L_1 = ((ObjectU5BU5D_t41*)SZArrayNew(ObjectU5BU5D_t41_il2cpp_TypeInfo_var, 4));
		ArrayElementTypeCheck (L_1, _stringLiteral38);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_1, 0, sizeof(Object_t *))) = (Object_t *)_stringLiteral38;
		ObjectU5BU5D_t41* L_2 = L_1;
		float L_3 = ___alpha;
		float L_4 = L_3;
		Object_t * L_5 = Box(Single_t51_il2cpp_TypeInfo_var, &L_4);
		ArrayElementTypeCheck (L_2, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1, sizeof(Object_t *))) = (Object_t *)L_5;
		ObjectU5BU5D_t41* L_6 = L_2;
		ArrayElementTypeCheck (L_6, _stringLiteral22);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 2, sizeof(Object_t *))) = (Object_t *)_stringLiteral22;
		ObjectU5BU5D_t41* L_7 = L_6;
		float L_8 = ___time;
		float L_9 = L_8;
		Object_t * L_10 = Box(Single_t51_il2cpp_TypeInfo_var, &L_9);
		ArrayElementTypeCheck (L_7, L_10);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_7, 3, sizeof(Object_t *))) = (Object_t *)L_10;
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		Hashtable_t26 * L_11 = iTween_Hash_m238(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		iTween_FadeTo_m53(NULL /*static, unused*/, L_0, L_11, /*hidden argument*/NULL);
		return;
	}
}
// System.Void iTween::FadeTo(UnityEngine.GameObject,System.Collections.Hashtable)
extern TypeInfo* iTween_t23_il2cpp_TypeInfo_var;
extern "C" void iTween_FadeTo_m53 (Object_t * __this /* static, unused */, GameObject_t34 * ___target, Hashtable_t26 * ___args, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		iTween_t23_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		s_Il2CppMethodIntialized = true;
	}
	{
		GameObject_t34 * L_0 = ___target;
		Hashtable_t26 * L_1 = ___args;
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		iTween_ColorTo_m57(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void iTween::ColorFrom(UnityEngine.GameObject,UnityEngine.Color,System.Single)
extern TypeInfo* ObjectU5BU5D_t41_il2cpp_TypeInfo_var;
extern TypeInfo* Color_t13_il2cpp_TypeInfo_var;
extern TypeInfo* Single_t51_il2cpp_TypeInfo_var;
extern TypeInfo* iTween_t23_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral35;
extern Il2CppCodeGenString* _stringLiteral22;
extern "C" void iTween_ColorFrom_m54 (Object_t * __this /* static, unused */, GameObject_t34 * ___target, Color_t13  ___color, float ___time, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t41_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5);
		Color_t13_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(21);
		Single_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		iTween_t23_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		_stringLiteral35 = il2cpp_codegen_string_literal_from_index(35);
		_stringLiteral22 = il2cpp_codegen_string_literal_from_index(22);
		s_Il2CppMethodIntialized = true;
	}
	{
		GameObject_t34 * L_0 = ___target;
		ObjectU5BU5D_t41* L_1 = ((ObjectU5BU5D_t41*)SZArrayNew(ObjectU5BU5D_t41_il2cpp_TypeInfo_var, 4));
		ArrayElementTypeCheck (L_1, _stringLiteral35);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_1, 0, sizeof(Object_t *))) = (Object_t *)_stringLiteral35;
		ObjectU5BU5D_t41* L_2 = L_1;
		Color_t13  L_3 = ___color;
		Color_t13  L_4 = L_3;
		Object_t * L_5 = Box(Color_t13_il2cpp_TypeInfo_var, &L_4);
		ArrayElementTypeCheck (L_2, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1, sizeof(Object_t *))) = (Object_t *)L_5;
		ObjectU5BU5D_t41* L_6 = L_2;
		ArrayElementTypeCheck (L_6, _stringLiteral22);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 2, sizeof(Object_t *))) = (Object_t *)_stringLiteral22;
		ObjectU5BU5D_t41* L_7 = L_6;
		float L_8 = ___time;
		float L_9 = L_8;
		Object_t * L_10 = Box(Single_t51_il2cpp_TypeInfo_var, &L_9);
		ArrayElementTypeCheck (L_7, L_10);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_7, 3, sizeof(Object_t *))) = (Object_t *)L_10;
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		Hashtable_t26 * L_11 = iTween_Hash_m238(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		iTween_ColorFrom_m55(NULL /*static, unused*/, L_0, L_11, /*hidden argument*/NULL);
		return;
	}
}
// System.Void iTween::ColorFrom(UnityEngine.GameObject,System.Collections.Hashtable)
extern TypeInfo* Color_t13_il2cpp_TypeInfo_var;
extern TypeInfo* iTween_t23_il2cpp_TypeInfo_var;
extern TypeInfo* Boolean_t56_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t42_il2cpp_TypeInfo_var;
extern TypeInfo* Transform_t32_il2cpp_TypeInfo_var;
extern TypeInfo* Hashtable_t26_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t57_il2cpp_TypeInfo_var;
extern TypeInfo* EaseType_t9_il2cpp_TypeInfo_var;
extern TypeInfo* Single_t51_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisGUITexture_t58_m345_MethodInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisGUIText_t59_m347_MethodInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisRenderer_t61_m350_MethodInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisLight_t62_m352_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral39;
extern Il2CppCodeGenString* _stringLiteral40;
extern Il2CppCodeGenString* _stringLiteral37;
extern Il2CppCodeGenString* _stringLiteral35;
extern Il2CppCodeGenString* _stringLiteral41;
extern Il2CppCodeGenString* _stringLiteral42;
extern Il2CppCodeGenString* _stringLiteral43;
extern Il2CppCodeGenString* _stringLiteral44;
extern Il2CppCodeGenString* _stringLiteral21;
extern Il2CppCodeGenString* _stringLiteral38;
extern Il2CppCodeGenString* _stringLiteral28;
extern Il2CppCodeGenString* _stringLiteral30;
extern Il2CppCodeGenString* _stringLiteral26;
extern "C" void iTween_ColorFrom_m55 (Object_t * __this /* static, unused */, GameObject_t34 * ___target, Hashtable_t26 * ___args, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Color_t13_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(21);
		iTween_t23_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		Boolean_t56_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(28);
		IEnumerator_t42_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(29);
		Transform_t32_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(30);
		Hashtable_t26_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(17);
		IDisposable_t57_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(31);
		EaseType_t9_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		Single_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		GameObject_GetComponent_TisGUITexture_t58_m345_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483651);
		GameObject_GetComponent_TisGUIText_t59_m347_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483652);
		GameObject_GetComponent_TisRenderer_t61_m350_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483653);
		GameObject_GetComponent_TisLight_t62_m352_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483654);
		_stringLiteral39 = il2cpp_codegen_string_literal_from_index(39);
		_stringLiteral40 = il2cpp_codegen_string_literal_from_index(40);
		_stringLiteral37 = il2cpp_codegen_string_literal_from_index(37);
		_stringLiteral35 = il2cpp_codegen_string_literal_from_index(35);
		_stringLiteral41 = il2cpp_codegen_string_literal_from_index(41);
		_stringLiteral42 = il2cpp_codegen_string_literal_from_index(42);
		_stringLiteral43 = il2cpp_codegen_string_literal_from_index(43);
		_stringLiteral44 = il2cpp_codegen_string_literal_from_index(44);
		_stringLiteral21 = il2cpp_codegen_string_literal_from_index(21);
		_stringLiteral38 = il2cpp_codegen_string_literal_from_index(38);
		_stringLiteral28 = il2cpp_codegen_string_literal_from_index(28);
		_stringLiteral30 = il2cpp_codegen_string_literal_from_index(30);
		_stringLiteral26 = il2cpp_codegen_string_literal_from_index(26);
		s_Il2CppMethodIntialized = true;
	}
	Color_t13  V_0 = {0};
	Color_t13  V_1 = {0};
	Transform_t32 * V_2 = {0};
	Object_t * V_3 = {0};
	Hashtable_t26 * V_4 = {0};
	Object_t * V_5 = {0};
	Exception_t55 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t55 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Initobj (Color_t13_il2cpp_TypeInfo_var, (&V_0));
		Initobj (Color_t13_il2cpp_TypeInfo_var, (&V_1));
		Hashtable_t26 * L_0 = ___args;
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		Hashtable_t26 * L_1 = iTween_CleanArgs_m251(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		___args = L_1;
		Hashtable_t26 * L_2 = ___args;
		bool L_3 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(26 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_2, _stringLiteral39);
		if (!L_3)
		{
			goto IL_003d;
		}
	}
	{
		Hashtable_t26 * L_4 = ___args;
		Object_t * L_5 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_4, _stringLiteral39);
		if (!((*(bool*)((bool*)UnBox (L_5, Boolean_t56_il2cpp_TypeInfo_var)))))
		{
			goto IL_00ab;
		}
	}

IL_003d:
	{
		GameObject_t34 * L_6 = ___target;
		Transform_t32 * L_7 = GameObject_get_transform_m344(L_6, /*hidden argument*/NULL);
		Object_t * L_8 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(4 /* System.Collections.IEnumerator UnityEngine.Transform::GetEnumerator() */, L_7);
		V_3 = L_8;
	}

IL_0049:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0086;
		}

IL_004e:
		{
			Object_t * L_9 = V_3;
			Object_t * L_10 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t42_il2cpp_TypeInfo_var, L_9);
			V_2 = ((Transform_t32 *)CastclassClass(L_10, Transform_t32_il2cpp_TypeInfo_var));
			Hashtable_t26 * L_11 = ___args;
			Object_t * L_12 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(30 /* System.Object System.Collections.Hashtable::Clone() */, L_11);
			V_4 = ((Hashtable_t26 *)CastclassClass(L_12, Hashtable_t26_il2cpp_TypeInfo_var));
			Hashtable_t26 * L_13 = V_4;
			bool L_14 = 1;
			Object_t * L_15 = Box(Boolean_t56_il2cpp_TypeInfo_var, &L_14);
			VirtActionInvoker2< Object_t *, Object_t * >::Invoke(22 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_13, _stringLiteral40, L_15);
			Transform_t32 * L_16 = V_2;
			GameObject_t34 * L_17 = Component_get_gameObject_m319(L_16, /*hidden argument*/NULL);
			Hashtable_t26 * L_18 = V_4;
			IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
			iTween_ColorFrom_m55(NULL /*static, unused*/, L_17, L_18, /*hidden argument*/NULL);
		}

IL_0086:
		{
			Object_t * L_19 = V_3;
			bool L_20 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t42_il2cpp_TypeInfo_var, L_19);
			if (L_20)
			{
				goto IL_004e;
			}
		}

IL_0091:
		{
			IL2CPP_LEAVE(0xAB, FINALLY_0096);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t55 *)e.ex;
		goto FINALLY_0096;
	}

FINALLY_0096:
	{ // begin finally (depth: 1)
		{
			Object_t * L_21 = V_3;
			V_5 = ((Object_t *)IsInst(L_21, IDisposable_t57_il2cpp_TypeInfo_var));
			Object_t * L_22 = V_5;
			if (L_22)
			{
				goto IL_00a3;
			}
		}

IL_00a2:
		{
			IL2CPP_END_FINALLY(150)
		}

IL_00a3:
		{
			Object_t * L_23 = V_5;
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t57_il2cpp_TypeInfo_var, L_23);
			IL2CPP_END_FINALLY(150)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(150)
	{
		IL2CPP_JUMP_TBL(0xAB, IL_00ab)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t55 *)
	}

IL_00ab:
	{
		Hashtable_t26 * L_24 = ___args;
		bool L_25 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(26 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_24, _stringLiteral37);
		if (L_25)
		{
			goto IL_00cd;
		}
	}
	{
		Hashtable_t26 * L_26 = ___args;
		int32_t L_27 = ((int32_t)21);
		Object_t * L_28 = Box(EaseType_t9_il2cpp_TypeInfo_var, &L_27);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(24 /* System.Void System.Collections.Hashtable::Add(System.Object,System.Object) */, L_26, _stringLiteral37, L_28);
	}

IL_00cd:
	{
		GameObject_t34 * L_29 = ___target;
		GUITexture_t58 * L_30 = GameObject_GetComponent_TisGUITexture_t58_m345(L_29, /*hidden argument*/GameObject_GetComponent_TisGUITexture_t58_m345_MethodInfo_var);
		bool L_31 = Object_op_Implicit_m316(NULL /*static, unused*/, L_30, /*hidden argument*/NULL);
		if (!L_31)
		{
			goto IL_00f0;
		}
	}
	{
		GameObject_t34 * L_32 = ___target;
		GUITexture_t58 * L_33 = GameObject_GetComponent_TisGUITexture_t58_m345(L_32, /*hidden argument*/GameObject_GetComponent_TisGUITexture_t58_m345_MethodInfo_var);
		Color_t13  L_34 = GUITexture_get_color_m346(L_33, /*hidden argument*/NULL);
		Color_t13  L_35 = L_34;
		V_0 = L_35;
		V_1 = L_35;
		goto IL_015e;
	}

IL_00f0:
	{
		GameObject_t34 * L_36 = ___target;
		GUIText_t59 * L_37 = GameObject_GetComponent_TisGUIText_t59_m347(L_36, /*hidden argument*/GameObject_GetComponent_TisGUIText_t59_m347_MethodInfo_var);
		bool L_38 = Object_op_Implicit_m316(NULL /*static, unused*/, L_37, /*hidden argument*/NULL);
		if (!L_38)
		{
			goto IL_0118;
		}
	}
	{
		GameObject_t34 * L_39 = ___target;
		GUIText_t59 * L_40 = GameObject_GetComponent_TisGUIText_t59_m347(L_39, /*hidden argument*/GameObject_GetComponent_TisGUIText_t59_m347_MethodInfo_var);
		Material_t60 * L_41 = GUIText_get_material_m348(L_40, /*hidden argument*/NULL);
		Color_t13  L_42 = Material_get_color_m349(L_41, /*hidden argument*/NULL);
		Color_t13  L_43 = L_42;
		V_0 = L_43;
		V_1 = L_43;
		goto IL_015e;
	}

IL_0118:
	{
		GameObject_t34 * L_44 = ___target;
		Renderer_t61 * L_45 = GameObject_GetComponent_TisRenderer_t61_m350(L_44, /*hidden argument*/GameObject_GetComponent_TisRenderer_t61_m350_MethodInfo_var);
		bool L_46 = Object_op_Implicit_m316(NULL /*static, unused*/, L_45, /*hidden argument*/NULL);
		if (!L_46)
		{
			goto IL_0140;
		}
	}
	{
		GameObject_t34 * L_47 = ___target;
		Renderer_t61 * L_48 = GameObject_GetComponent_TisRenderer_t61_m350(L_47, /*hidden argument*/GameObject_GetComponent_TisRenderer_t61_m350_MethodInfo_var);
		Material_t60 * L_49 = Renderer_get_material_m351(L_48, /*hidden argument*/NULL);
		Color_t13  L_50 = Material_get_color_m349(L_49, /*hidden argument*/NULL);
		Color_t13  L_51 = L_50;
		V_0 = L_51;
		V_1 = L_51;
		goto IL_015e;
	}

IL_0140:
	{
		GameObject_t34 * L_52 = ___target;
		Light_t62 * L_53 = GameObject_GetComponent_TisLight_t62_m352(L_52, /*hidden argument*/GameObject_GetComponent_TisLight_t62_m352_MethodInfo_var);
		bool L_54 = Object_op_Implicit_m316(NULL /*static, unused*/, L_53, /*hidden argument*/NULL);
		if (!L_54)
		{
			goto IL_015e;
		}
	}
	{
		GameObject_t34 * L_55 = ___target;
		Light_t62 * L_56 = GameObject_GetComponent_TisLight_t62_m352(L_55, /*hidden argument*/GameObject_GetComponent_TisLight_t62_m352_MethodInfo_var);
		Color_t13  L_57 = Light_get_color_m353(L_56, /*hidden argument*/NULL);
		Color_t13  L_58 = L_57;
		V_0 = L_58;
		V_1 = L_58;
	}

IL_015e:
	{
		Hashtable_t26 * L_59 = ___args;
		bool L_60 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(26 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_59, _stringLiteral35);
		if (!L_60)
		{
			goto IL_0184;
		}
	}
	{
		Hashtable_t26 * L_61 = ___args;
		Object_t * L_62 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_61, _stringLiteral35);
		V_0 = ((*(Color_t13 *)((Color_t13 *)UnBox (L_62, Color_t13_il2cpp_TypeInfo_var))));
		goto IL_0220;
	}

IL_0184:
	{
		Hashtable_t26 * L_63 = ___args;
		bool L_64 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(26 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_63, _stringLiteral41);
		if (!L_64)
		{
			goto IL_01ab;
		}
	}
	{
		Hashtable_t26 * L_65 = ___args;
		Object_t * L_66 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_65, _stringLiteral41);
		(&V_0)->___r_0 = ((*(float*)((float*)UnBox (L_66, Single_t51_il2cpp_TypeInfo_var))));
	}

IL_01ab:
	{
		Hashtable_t26 * L_67 = ___args;
		bool L_68 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(26 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_67, _stringLiteral42);
		if (!L_68)
		{
			goto IL_01d2;
		}
	}
	{
		Hashtable_t26 * L_69 = ___args;
		Object_t * L_70 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_69, _stringLiteral42);
		(&V_0)->___g_1 = ((*(float*)((float*)UnBox (L_70, Single_t51_il2cpp_TypeInfo_var))));
	}

IL_01d2:
	{
		Hashtable_t26 * L_71 = ___args;
		bool L_72 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(26 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_71, _stringLiteral43);
		if (!L_72)
		{
			goto IL_01f9;
		}
	}
	{
		Hashtable_t26 * L_73 = ___args;
		Object_t * L_74 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_73, _stringLiteral43);
		(&V_0)->___b_2 = ((*(float*)((float*)UnBox (L_74, Single_t51_il2cpp_TypeInfo_var))));
	}

IL_01f9:
	{
		Hashtable_t26 * L_75 = ___args;
		bool L_76 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(26 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_75, _stringLiteral44);
		if (!L_76)
		{
			goto IL_0220;
		}
	}
	{
		Hashtable_t26 * L_77 = ___args;
		Object_t * L_78 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_77, _stringLiteral44);
		(&V_0)->___a_3 = ((*(float*)((float*)UnBox (L_78, Single_t51_il2cpp_TypeInfo_var))));
	}

IL_0220:
	{
		Hashtable_t26 * L_79 = ___args;
		bool L_80 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(26 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_79, _stringLiteral21);
		if (!L_80)
		{
			goto IL_0257;
		}
	}
	{
		Hashtable_t26 * L_81 = ___args;
		Object_t * L_82 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_81, _stringLiteral21);
		(&V_0)->___a_3 = ((*(float*)((float*)UnBox (L_82, Single_t51_il2cpp_TypeInfo_var))));
		Hashtable_t26 * L_83 = ___args;
		VirtActionInvoker1< Object_t * >::Invoke(28 /* System.Void System.Collections.Hashtable::Remove(System.Object) */, L_83, _stringLiteral21);
		goto IL_0289;
	}

IL_0257:
	{
		Hashtable_t26 * L_84 = ___args;
		bool L_85 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(26 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_84, _stringLiteral38);
		if (!L_85)
		{
			goto IL_0289;
		}
	}
	{
		Hashtable_t26 * L_86 = ___args;
		Object_t * L_87 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_86, _stringLiteral38);
		(&V_0)->___a_3 = ((*(float*)((float*)UnBox (L_87, Single_t51_il2cpp_TypeInfo_var))));
		Hashtable_t26 * L_88 = ___args;
		VirtActionInvoker1< Object_t * >::Invoke(28 /* System.Void System.Collections.Hashtable::Remove(System.Object) */, L_88, _stringLiteral38);
	}

IL_0289:
	{
		GameObject_t34 * L_89 = ___target;
		GUITexture_t58 * L_90 = GameObject_GetComponent_TisGUITexture_t58_m345(L_89, /*hidden argument*/GameObject_GetComponent_TisGUITexture_t58_m345_MethodInfo_var);
		bool L_91 = Object_op_Implicit_m316(NULL /*static, unused*/, L_90, /*hidden argument*/NULL);
		if (!L_91)
		{
			goto IL_02aa;
		}
	}
	{
		GameObject_t34 * L_92 = ___target;
		GUITexture_t58 * L_93 = GameObject_GetComponent_TisGUITexture_t58_m345(L_92, /*hidden argument*/GameObject_GetComponent_TisGUITexture_t58_m345_MethodInfo_var);
		Color_t13  L_94 = V_0;
		GUITexture_set_color_m354(L_93, L_94, /*hidden argument*/NULL);
		goto IL_0312;
	}

IL_02aa:
	{
		GameObject_t34 * L_95 = ___target;
		GUIText_t59 * L_96 = GameObject_GetComponent_TisGUIText_t59_m347(L_95, /*hidden argument*/GameObject_GetComponent_TisGUIText_t59_m347_MethodInfo_var);
		bool L_97 = Object_op_Implicit_m316(NULL /*static, unused*/, L_96, /*hidden argument*/NULL);
		if (!L_97)
		{
			goto IL_02d0;
		}
	}
	{
		GameObject_t34 * L_98 = ___target;
		GUIText_t59 * L_99 = GameObject_GetComponent_TisGUIText_t59_m347(L_98, /*hidden argument*/GameObject_GetComponent_TisGUIText_t59_m347_MethodInfo_var);
		Material_t60 * L_100 = GUIText_get_material_m348(L_99, /*hidden argument*/NULL);
		Color_t13  L_101 = V_0;
		Material_set_color_m355(L_100, L_101, /*hidden argument*/NULL);
		goto IL_0312;
	}

IL_02d0:
	{
		GameObject_t34 * L_102 = ___target;
		Renderer_t61 * L_103 = GameObject_GetComponent_TisRenderer_t61_m350(L_102, /*hidden argument*/GameObject_GetComponent_TisRenderer_t61_m350_MethodInfo_var);
		bool L_104 = Object_op_Implicit_m316(NULL /*static, unused*/, L_103, /*hidden argument*/NULL);
		if (!L_104)
		{
			goto IL_02f6;
		}
	}
	{
		GameObject_t34 * L_105 = ___target;
		Renderer_t61 * L_106 = GameObject_GetComponent_TisRenderer_t61_m350(L_105, /*hidden argument*/GameObject_GetComponent_TisRenderer_t61_m350_MethodInfo_var);
		Material_t60 * L_107 = Renderer_get_material_m351(L_106, /*hidden argument*/NULL);
		Color_t13  L_108 = V_0;
		Material_set_color_m355(L_107, L_108, /*hidden argument*/NULL);
		goto IL_0312;
	}

IL_02f6:
	{
		GameObject_t34 * L_109 = ___target;
		Light_t62 * L_110 = GameObject_GetComponent_TisLight_t62_m352(L_109, /*hidden argument*/GameObject_GetComponent_TisLight_t62_m352_MethodInfo_var);
		bool L_111 = Object_op_Implicit_m316(NULL /*static, unused*/, L_110, /*hidden argument*/NULL);
		if (!L_111)
		{
			goto IL_0312;
		}
	}
	{
		GameObject_t34 * L_112 = ___target;
		Light_t62 * L_113 = GameObject_GetComponent_TisLight_t62_m352(L_112, /*hidden argument*/GameObject_GetComponent_TisLight_t62_m352_MethodInfo_var);
		Color_t13  L_114 = V_0;
		Light_set_color_m356(L_113, L_114, /*hidden argument*/NULL);
	}

IL_0312:
	{
		Hashtable_t26 * L_115 = ___args;
		Color_t13  L_116 = V_1;
		Color_t13  L_117 = L_116;
		Object_t * L_118 = Box(Color_t13_il2cpp_TypeInfo_var, &L_117);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(22 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_115, _stringLiteral35, L_118);
		Hashtable_t26 * L_119 = ___args;
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(22 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_119, _stringLiteral28, _stringLiteral35);
		Hashtable_t26 * L_120 = ___args;
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(22 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_120, _stringLiteral30, _stringLiteral26);
		GameObject_t34 * L_121 = ___target;
		Hashtable_t26 * L_122 = ___args;
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		iTween_Launch_m250(NULL /*static, unused*/, L_121, L_122, /*hidden argument*/NULL);
		return;
	}
}
// System.Void iTween::ColorTo(UnityEngine.GameObject,UnityEngine.Color,System.Single)
extern TypeInfo* ObjectU5BU5D_t41_il2cpp_TypeInfo_var;
extern TypeInfo* Color_t13_il2cpp_TypeInfo_var;
extern TypeInfo* Single_t51_il2cpp_TypeInfo_var;
extern TypeInfo* iTween_t23_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral35;
extern Il2CppCodeGenString* _stringLiteral22;
extern "C" void iTween_ColorTo_m56 (Object_t * __this /* static, unused */, GameObject_t34 * ___target, Color_t13  ___color, float ___time, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t41_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5);
		Color_t13_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(21);
		Single_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		iTween_t23_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		_stringLiteral35 = il2cpp_codegen_string_literal_from_index(35);
		_stringLiteral22 = il2cpp_codegen_string_literal_from_index(22);
		s_Il2CppMethodIntialized = true;
	}
	{
		GameObject_t34 * L_0 = ___target;
		ObjectU5BU5D_t41* L_1 = ((ObjectU5BU5D_t41*)SZArrayNew(ObjectU5BU5D_t41_il2cpp_TypeInfo_var, 4));
		ArrayElementTypeCheck (L_1, _stringLiteral35);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_1, 0, sizeof(Object_t *))) = (Object_t *)_stringLiteral35;
		ObjectU5BU5D_t41* L_2 = L_1;
		Color_t13  L_3 = ___color;
		Color_t13  L_4 = L_3;
		Object_t * L_5 = Box(Color_t13_il2cpp_TypeInfo_var, &L_4);
		ArrayElementTypeCheck (L_2, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1, sizeof(Object_t *))) = (Object_t *)L_5;
		ObjectU5BU5D_t41* L_6 = L_2;
		ArrayElementTypeCheck (L_6, _stringLiteral22);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 2, sizeof(Object_t *))) = (Object_t *)_stringLiteral22;
		ObjectU5BU5D_t41* L_7 = L_6;
		float L_8 = ___time;
		float L_9 = L_8;
		Object_t * L_10 = Box(Single_t51_il2cpp_TypeInfo_var, &L_9);
		ArrayElementTypeCheck (L_7, L_10);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_7, 3, sizeof(Object_t *))) = (Object_t *)L_10;
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		Hashtable_t26 * L_11 = iTween_Hash_m238(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		iTween_ColorTo_m57(NULL /*static, unused*/, L_0, L_11, /*hidden argument*/NULL);
		return;
	}
}
// System.Void iTween::ColorTo(UnityEngine.GameObject,System.Collections.Hashtable)
extern TypeInfo* iTween_t23_il2cpp_TypeInfo_var;
extern TypeInfo* Boolean_t56_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t42_il2cpp_TypeInfo_var;
extern TypeInfo* Transform_t32_il2cpp_TypeInfo_var;
extern TypeInfo* Hashtable_t26_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t57_il2cpp_TypeInfo_var;
extern TypeInfo* EaseType_t9_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral39;
extern Il2CppCodeGenString* _stringLiteral40;
extern Il2CppCodeGenString* _stringLiteral37;
extern Il2CppCodeGenString* _stringLiteral28;
extern Il2CppCodeGenString* _stringLiteral35;
extern Il2CppCodeGenString* _stringLiteral30;
extern Il2CppCodeGenString* _stringLiteral26;
extern "C" void iTween_ColorTo_m57 (Object_t * __this /* static, unused */, GameObject_t34 * ___target, Hashtable_t26 * ___args, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		iTween_t23_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		Boolean_t56_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(28);
		IEnumerator_t42_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(29);
		Transform_t32_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(30);
		Hashtable_t26_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(17);
		IDisposable_t57_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(31);
		EaseType_t9_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		_stringLiteral39 = il2cpp_codegen_string_literal_from_index(39);
		_stringLiteral40 = il2cpp_codegen_string_literal_from_index(40);
		_stringLiteral37 = il2cpp_codegen_string_literal_from_index(37);
		_stringLiteral28 = il2cpp_codegen_string_literal_from_index(28);
		_stringLiteral35 = il2cpp_codegen_string_literal_from_index(35);
		_stringLiteral30 = il2cpp_codegen_string_literal_from_index(30);
		_stringLiteral26 = il2cpp_codegen_string_literal_from_index(26);
		s_Il2CppMethodIntialized = true;
	}
	Transform_t32 * V_0 = {0};
	Object_t * V_1 = {0};
	Hashtable_t26 * V_2 = {0};
	Object_t * V_3 = {0};
	Exception_t55 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t55 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Hashtable_t26 * L_0 = ___args;
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		Hashtable_t26 * L_1 = iTween_CleanArgs_m251(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		___args = L_1;
		Hashtable_t26 * L_2 = ___args;
		bool L_3 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(26 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_2, _stringLiteral39);
		if (!L_3)
		{
			goto IL_002d;
		}
	}
	{
		Hashtable_t26 * L_4 = ___args;
		Object_t * L_5 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_4, _stringLiteral39);
		if (!((*(bool*)((bool*)UnBox (L_5, Boolean_t56_il2cpp_TypeInfo_var)))))
		{
			goto IL_0095;
		}
	}

IL_002d:
	{
		GameObject_t34 * L_6 = ___target;
		Transform_t32 * L_7 = GameObject_get_transform_m344(L_6, /*hidden argument*/NULL);
		Object_t * L_8 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(4 /* System.Collections.IEnumerator UnityEngine.Transform::GetEnumerator() */, L_7);
		V_1 = L_8;
	}

IL_0039:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0073;
		}

IL_003e:
		{
			Object_t * L_9 = V_1;
			Object_t * L_10 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t42_il2cpp_TypeInfo_var, L_9);
			V_0 = ((Transform_t32 *)CastclassClass(L_10, Transform_t32_il2cpp_TypeInfo_var));
			Hashtable_t26 * L_11 = ___args;
			Object_t * L_12 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(30 /* System.Object System.Collections.Hashtable::Clone() */, L_11);
			V_2 = ((Hashtable_t26 *)CastclassClass(L_12, Hashtable_t26_il2cpp_TypeInfo_var));
			Hashtable_t26 * L_13 = V_2;
			bool L_14 = 1;
			Object_t * L_15 = Box(Boolean_t56_il2cpp_TypeInfo_var, &L_14);
			VirtActionInvoker2< Object_t *, Object_t * >::Invoke(22 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_13, _stringLiteral40, L_15);
			Transform_t32 * L_16 = V_0;
			GameObject_t34 * L_17 = Component_get_gameObject_m319(L_16, /*hidden argument*/NULL);
			Hashtable_t26 * L_18 = V_2;
			IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
			iTween_ColorTo_m57(NULL /*static, unused*/, L_17, L_18, /*hidden argument*/NULL);
		}

IL_0073:
		{
			Object_t * L_19 = V_1;
			bool L_20 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t42_il2cpp_TypeInfo_var, L_19);
			if (L_20)
			{
				goto IL_003e;
			}
		}

IL_007e:
		{
			IL2CPP_LEAVE(0x95, FINALLY_0083);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t55 *)e.ex;
		goto FINALLY_0083;
	}

FINALLY_0083:
	{ // begin finally (depth: 1)
		{
			Object_t * L_21 = V_1;
			V_3 = ((Object_t *)IsInst(L_21, IDisposable_t57_il2cpp_TypeInfo_var));
			Object_t * L_22 = V_3;
			if (L_22)
			{
				goto IL_008e;
			}
		}

IL_008d:
		{
			IL2CPP_END_FINALLY(131)
		}

IL_008e:
		{
			Object_t * L_23 = V_3;
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t57_il2cpp_TypeInfo_var, L_23);
			IL2CPP_END_FINALLY(131)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(131)
	{
		IL2CPP_JUMP_TBL(0x95, IL_0095)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t55 *)
	}

IL_0095:
	{
		Hashtable_t26 * L_24 = ___args;
		bool L_25 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(26 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_24, _stringLiteral37);
		if (L_25)
		{
			goto IL_00b7;
		}
	}
	{
		Hashtable_t26 * L_26 = ___args;
		int32_t L_27 = ((int32_t)21);
		Object_t * L_28 = Box(EaseType_t9_il2cpp_TypeInfo_var, &L_27);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(24 /* System.Void System.Collections.Hashtable::Add(System.Object,System.Object) */, L_26, _stringLiteral37, L_28);
	}

IL_00b7:
	{
		Hashtable_t26 * L_29 = ___args;
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(22 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_29, _stringLiteral28, _stringLiteral35);
		Hashtable_t26 * L_30 = ___args;
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(22 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_30, _stringLiteral30, _stringLiteral26);
		GameObject_t34 * L_31 = ___target;
		Hashtable_t26 * L_32 = ___args;
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		iTween_Launch_m250(NULL /*static, unused*/, L_31, L_32, /*hidden argument*/NULL);
		return;
	}
}
// System.Void iTween::AudioFrom(UnityEngine.GameObject,System.Single,System.Single,System.Single)
extern TypeInfo* ObjectU5BU5D_t41_il2cpp_TypeInfo_var;
extern TypeInfo* Single_t51_il2cpp_TypeInfo_var;
extern TypeInfo* iTween_t23_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral45;
extern Il2CppCodeGenString* _stringLiteral46;
extern Il2CppCodeGenString* _stringLiteral22;
extern "C" void iTween_AudioFrom_m58 (Object_t * __this /* static, unused */, GameObject_t34 * ___target, float ___volume, float ___pitch, float ___time, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t41_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5);
		Single_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		iTween_t23_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		_stringLiteral45 = il2cpp_codegen_string_literal_from_index(45);
		_stringLiteral46 = il2cpp_codegen_string_literal_from_index(46);
		_stringLiteral22 = il2cpp_codegen_string_literal_from_index(22);
		s_Il2CppMethodIntialized = true;
	}
	{
		GameObject_t34 * L_0 = ___target;
		ObjectU5BU5D_t41* L_1 = ((ObjectU5BU5D_t41*)SZArrayNew(ObjectU5BU5D_t41_il2cpp_TypeInfo_var, 6));
		ArrayElementTypeCheck (L_1, _stringLiteral45);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_1, 0, sizeof(Object_t *))) = (Object_t *)_stringLiteral45;
		ObjectU5BU5D_t41* L_2 = L_1;
		float L_3 = ___volume;
		float L_4 = L_3;
		Object_t * L_5 = Box(Single_t51_il2cpp_TypeInfo_var, &L_4);
		ArrayElementTypeCheck (L_2, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1, sizeof(Object_t *))) = (Object_t *)L_5;
		ObjectU5BU5D_t41* L_6 = L_2;
		ArrayElementTypeCheck (L_6, _stringLiteral46);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 2, sizeof(Object_t *))) = (Object_t *)_stringLiteral46;
		ObjectU5BU5D_t41* L_7 = L_6;
		float L_8 = ___pitch;
		float L_9 = L_8;
		Object_t * L_10 = Box(Single_t51_il2cpp_TypeInfo_var, &L_9);
		ArrayElementTypeCheck (L_7, L_10);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_7, 3, sizeof(Object_t *))) = (Object_t *)L_10;
		ObjectU5BU5D_t41* L_11 = L_7;
		ArrayElementTypeCheck (L_11, _stringLiteral22);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_11, 4, sizeof(Object_t *))) = (Object_t *)_stringLiteral22;
		ObjectU5BU5D_t41* L_12 = L_11;
		float L_13 = ___time;
		float L_14 = L_13;
		Object_t * L_15 = Box(Single_t51_il2cpp_TypeInfo_var, &L_14);
		ArrayElementTypeCheck (L_12, L_15);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_12, 5, sizeof(Object_t *))) = (Object_t *)L_15;
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		Hashtable_t26 * L_16 = iTween_Hash_m238(NULL /*static, unused*/, L_12, /*hidden argument*/NULL);
		iTween_AudioFrom_m59(NULL /*static, unused*/, L_0, L_16, /*hidden argument*/NULL);
		return;
	}
}
// System.Void iTween::AudioFrom(UnityEngine.GameObject,System.Collections.Hashtable)
extern TypeInfo* iTween_t23_il2cpp_TypeInfo_var;
extern TypeInfo* AudioSource_t27_il2cpp_TypeInfo_var;
extern TypeInfo* Single_t51_il2cpp_TypeInfo_var;
extern TypeInfo* EaseType_t9_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisAudioSource_t27_m357_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral47;
extern Il2CppCodeGenString* _stringLiteral48;
extern Il2CppCodeGenString* _stringLiteral45;
extern Il2CppCodeGenString* _stringLiteral46;
extern Il2CppCodeGenString* _stringLiteral37;
extern Il2CppCodeGenString* _stringLiteral28;
extern Il2CppCodeGenString* _stringLiteral49;
extern Il2CppCodeGenString* _stringLiteral30;
extern Il2CppCodeGenString* _stringLiteral26;
extern "C" void iTween_AudioFrom_m59 (Object_t * __this /* static, unused */, GameObject_t34 * ___target, Hashtable_t26 * ___args, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		iTween_t23_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		AudioSource_t27_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(32);
		Single_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		EaseType_t9_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		GameObject_GetComponent_TisAudioSource_t27_m357_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483655);
		_stringLiteral47 = il2cpp_codegen_string_literal_from_index(47);
		_stringLiteral48 = il2cpp_codegen_string_literal_from_index(48);
		_stringLiteral45 = il2cpp_codegen_string_literal_from_index(45);
		_stringLiteral46 = il2cpp_codegen_string_literal_from_index(46);
		_stringLiteral37 = il2cpp_codegen_string_literal_from_index(37);
		_stringLiteral28 = il2cpp_codegen_string_literal_from_index(28);
		_stringLiteral49 = il2cpp_codegen_string_literal_from_index(49);
		_stringLiteral30 = il2cpp_codegen_string_literal_from_index(30);
		_stringLiteral26 = il2cpp_codegen_string_literal_from_index(26);
		s_Il2CppMethodIntialized = true;
	}
	Vector2_t36  V_0 = {0};
	Vector2_t36  V_1 = {0};
	AudioSource_t27 * V_2 = {0};
	float V_3 = 0.0f;
	{
		Hashtable_t26 * L_0 = ___args;
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		Hashtable_t26 * L_1 = iTween_CleanArgs_m251(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		___args = L_1;
		Hashtable_t26 * L_2 = ___args;
		bool L_3 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(26 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_2, _stringLiteral47);
		if (!L_3)
		{
			goto IL_002e;
		}
	}
	{
		Hashtable_t26 * L_4 = ___args;
		Object_t * L_5 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_4, _stringLiteral47);
		V_2 = ((AudioSource_t27 *)CastclassSealed(L_5, AudioSource_t27_il2cpp_TypeInfo_var));
		goto IL_0055;
	}

IL_002e:
	{
		GameObject_t34 * L_6 = ___target;
		AudioSource_t27 * L_7 = GameObject_GetComponent_TisAudioSource_t27_m357(L_6, /*hidden argument*/GameObject_GetComponent_TisAudioSource_t27_m357_MethodInfo_var);
		bool L_8 = Object_op_Implicit_m316(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_004a;
		}
	}
	{
		GameObject_t34 * L_9 = ___target;
		AudioSource_t27 * L_10 = GameObject_GetComponent_TisAudioSource_t27_m357(L_9, /*hidden argument*/GameObject_GetComponent_TisAudioSource_t27_m357_MethodInfo_var);
		V_2 = L_10;
		goto IL_0055;
	}

IL_004a:
	{
		Debug_LogError_m341(NULL /*static, unused*/, _stringLiteral48, /*hidden argument*/NULL);
		return;
	}

IL_0055:
	{
		AudioSource_t27 * L_11 = V_2;
		float L_12 = AudioSource_get_volume_m358(L_11, /*hidden argument*/NULL);
		float L_13 = L_12;
		V_3 = L_13;
		(&V_1)->___x_1 = L_13;
		float L_14 = V_3;
		(&V_0)->___x_1 = L_14;
		AudioSource_t27 * L_15 = V_2;
		float L_16 = AudioSource_get_pitch_m359(L_15, /*hidden argument*/NULL);
		float L_17 = L_16;
		V_3 = L_17;
		(&V_1)->___y_2 = L_17;
		float L_18 = V_3;
		(&V_0)->___y_2 = L_18;
		Hashtable_t26 * L_19 = ___args;
		bool L_20 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(26 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_19, _stringLiteral45);
		if (!L_20)
		{
			goto IL_00aa;
		}
	}
	{
		Hashtable_t26 * L_21 = ___args;
		Object_t * L_22 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_21, _stringLiteral45);
		(&V_1)->___x_1 = ((*(float*)((float*)UnBox (L_22, Single_t51_il2cpp_TypeInfo_var))));
	}

IL_00aa:
	{
		Hashtable_t26 * L_23 = ___args;
		bool L_24 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(26 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_23, _stringLiteral46);
		if (!L_24)
		{
			goto IL_00d1;
		}
	}
	{
		Hashtable_t26 * L_25 = ___args;
		Object_t * L_26 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_25, _stringLiteral46);
		(&V_1)->___y_2 = ((*(float*)((float*)UnBox (L_26, Single_t51_il2cpp_TypeInfo_var))));
	}

IL_00d1:
	{
		AudioSource_t27 * L_27 = V_2;
		float L_28 = ((&V_1)->___x_1);
		AudioSource_set_volume_m360(L_27, L_28, /*hidden argument*/NULL);
		AudioSource_t27 * L_29 = V_2;
		float L_30 = ((&V_1)->___y_2);
		AudioSource_set_pitch_m361(L_29, L_30, /*hidden argument*/NULL);
		Hashtable_t26 * L_31 = ___args;
		float L_32 = ((&V_0)->___x_1);
		float L_33 = L_32;
		Object_t * L_34 = Box(Single_t51_il2cpp_TypeInfo_var, &L_33);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(22 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_31, _stringLiteral45, L_34);
		Hashtable_t26 * L_35 = ___args;
		float L_36 = ((&V_0)->___y_2);
		float L_37 = L_36;
		Object_t * L_38 = Box(Single_t51_il2cpp_TypeInfo_var, &L_37);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(22 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_35, _stringLiteral46, L_38);
		Hashtable_t26 * L_39 = ___args;
		bool L_40 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(26 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_39, _stringLiteral37);
		if (L_40)
		{
			goto IL_013b;
		}
	}
	{
		Hashtable_t26 * L_41 = ___args;
		int32_t L_42 = ((int32_t)21);
		Object_t * L_43 = Box(EaseType_t9_il2cpp_TypeInfo_var, &L_42);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(24 /* System.Void System.Collections.Hashtable::Add(System.Object,System.Object) */, L_41, _stringLiteral37, L_43);
	}

IL_013b:
	{
		Hashtable_t26 * L_44 = ___args;
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(22 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_44, _stringLiteral28, _stringLiteral49);
		Hashtable_t26 * L_45 = ___args;
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(22 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_45, _stringLiteral30, _stringLiteral26);
		GameObject_t34 * L_46 = ___target;
		Hashtable_t26 * L_47 = ___args;
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		iTween_Launch_m250(NULL /*static, unused*/, L_46, L_47, /*hidden argument*/NULL);
		return;
	}
}
// System.Void iTween::AudioTo(UnityEngine.GameObject,System.Single,System.Single,System.Single)
extern TypeInfo* ObjectU5BU5D_t41_il2cpp_TypeInfo_var;
extern TypeInfo* Single_t51_il2cpp_TypeInfo_var;
extern TypeInfo* iTween_t23_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral45;
extern Il2CppCodeGenString* _stringLiteral46;
extern Il2CppCodeGenString* _stringLiteral22;
extern "C" void iTween_AudioTo_m60 (Object_t * __this /* static, unused */, GameObject_t34 * ___target, float ___volume, float ___pitch, float ___time, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t41_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5);
		Single_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		iTween_t23_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		_stringLiteral45 = il2cpp_codegen_string_literal_from_index(45);
		_stringLiteral46 = il2cpp_codegen_string_literal_from_index(46);
		_stringLiteral22 = il2cpp_codegen_string_literal_from_index(22);
		s_Il2CppMethodIntialized = true;
	}
	{
		GameObject_t34 * L_0 = ___target;
		ObjectU5BU5D_t41* L_1 = ((ObjectU5BU5D_t41*)SZArrayNew(ObjectU5BU5D_t41_il2cpp_TypeInfo_var, 6));
		ArrayElementTypeCheck (L_1, _stringLiteral45);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_1, 0, sizeof(Object_t *))) = (Object_t *)_stringLiteral45;
		ObjectU5BU5D_t41* L_2 = L_1;
		float L_3 = ___volume;
		float L_4 = L_3;
		Object_t * L_5 = Box(Single_t51_il2cpp_TypeInfo_var, &L_4);
		ArrayElementTypeCheck (L_2, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1, sizeof(Object_t *))) = (Object_t *)L_5;
		ObjectU5BU5D_t41* L_6 = L_2;
		ArrayElementTypeCheck (L_6, _stringLiteral46);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 2, sizeof(Object_t *))) = (Object_t *)_stringLiteral46;
		ObjectU5BU5D_t41* L_7 = L_6;
		float L_8 = ___pitch;
		float L_9 = L_8;
		Object_t * L_10 = Box(Single_t51_il2cpp_TypeInfo_var, &L_9);
		ArrayElementTypeCheck (L_7, L_10);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_7, 3, sizeof(Object_t *))) = (Object_t *)L_10;
		ObjectU5BU5D_t41* L_11 = L_7;
		ArrayElementTypeCheck (L_11, _stringLiteral22);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_11, 4, sizeof(Object_t *))) = (Object_t *)_stringLiteral22;
		ObjectU5BU5D_t41* L_12 = L_11;
		float L_13 = ___time;
		float L_14 = L_13;
		Object_t * L_15 = Box(Single_t51_il2cpp_TypeInfo_var, &L_14);
		ArrayElementTypeCheck (L_12, L_15);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_12, 5, sizeof(Object_t *))) = (Object_t *)L_15;
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		Hashtable_t26 * L_16 = iTween_Hash_m238(NULL /*static, unused*/, L_12, /*hidden argument*/NULL);
		iTween_AudioTo_m61(NULL /*static, unused*/, L_0, L_16, /*hidden argument*/NULL);
		return;
	}
}
// System.Void iTween::AudioTo(UnityEngine.GameObject,System.Collections.Hashtable)
extern TypeInfo* iTween_t23_il2cpp_TypeInfo_var;
extern TypeInfo* EaseType_t9_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral37;
extern Il2CppCodeGenString* _stringLiteral28;
extern Il2CppCodeGenString* _stringLiteral49;
extern Il2CppCodeGenString* _stringLiteral30;
extern Il2CppCodeGenString* _stringLiteral26;
extern "C" void iTween_AudioTo_m61 (Object_t * __this /* static, unused */, GameObject_t34 * ___target, Hashtable_t26 * ___args, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		iTween_t23_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		EaseType_t9_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		_stringLiteral37 = il2cpp_codegen_string_literal_from_index(37);
		_stringLiteral28 = il2cpp_codegen_string_literal_from_index(28);
		_stringLiteral49 = il2cpp_codegen_string_literal_from_index(49);
		_stringLiteral30 = il2cpp_codegen_string_literal_from_index(30);
		_stringLiteral26 = il2cpp_codegen_string_literal_from_index(26);
		s_Il2CppMethodIntialized = true;
	}
	{
		Hashtable_t26 * L_0 = ___args;
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		Hashtable_t26 * L_1 = iTween_CleanArgs_m251(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		___args = L_1;
		Hashtable_t26 * L_2 = ___args;
		bool L_3 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(26 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_2, _stringLiteral37);
		if (L_3)
		{
			goto IL_002a;
		}
	}
	{
		Hashtable_t26 * L_4 = ___args;
		int32_t L_5 = ((int32_t)21);
		Object_t * L_6 = Box(EaseType_t9_il2cpp_TypeInfo_var, &L_5);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(24 /* System.Void System.Collections.Hashtable::Add(System.Object,System.Object) */, L_4, _stringLiteral37, L_6);
	}

IL_002a:
	{
		Hashtable_t26 * L_7 = ___args;
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(22 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_7, _stringLiteral28, _stringLiteral49);
		Hashtable_t26 * L_8 = ___args;
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(22 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_8, _stringLiteral30, _stringLiteral26);
		GameObject_t34 * L_9 = ___target;
		Hashtable_t26 * L_10 = ___args;
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		iTween_Launch_m250(NULL /*static, unused*/, L_9, L_10, /*hidden argument*/NULL);
		return;
	}
}
// System.Void iTween::Stab(UnityEngine.GameObject,UnityEngine.AudioClip,System.Single)
extern TypeInfo* ObjectU5BU5D_t41_il2cpp_TypeInfo_var;
extern TypeInfo* Single_t51_il2cpp_TypeInfo_var;
extern TypeInfo* iTween_t23_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral50;
extern Il2CppCodeGenString* _stringLiteral15;
extern "C" void iTween_Stab_m62 (Object_t * __this /* static, unused */, GameObject_t34 * ___target, AudioClip_t38 * ___audioclip, float ___delay, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t41_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5);
		Single_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		iTween_t23_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		_stringLiteral50 = il2cpp_codegen_string_literal_from_index(50);
		_stringLiteral15 = il2cpp_codegen_string_literal_from_index(15);
		s_Il2CppMethodIntialized = true;
	}
	{
		GameObject_t34 * L_0 = ___target;
		ObjectU5BU5D_t41* L_1 = ((ObjectU5BU5D_t41*)SZArrayNew(ObjectU5BU5D_t41_il2cpp_TypeInfo_var, 4));
		ArrayElementTypeCheck (L_1, _stringLiteral50);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_1, 0, sizeof(Object_t *))) = (Object_t *)_stringLiteral50;
		ObjectU5BU5D_t41* L_2 = L_1;
		AudioClip_t38 * L_3 = ___audioclip;
		ArrayElementTypeCheck (L_2, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1, sizeof(Object_t *))) = (Object_t *)L_3;
		ObjectU5BU5D_t41* L_4 = L_2;
		ArrayElementTypeCheck (L_4, _stringLiteral15);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 2, sizeof(Object_t *))) = (Object_t *)_stringLiteral15;
		ObjectU5BU5D_t41* L_5 = L_4;
		float L_6 = ___delay;
		float L_7 = L_6;
		Object_t * L_8 = Box(Single_t51_il2cpp_TypeInfo_var, &L_7);
		ArrayElementTypeCheck (L_5, L_8);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_5, 3, sizeof(Object_t *))) = (Object_t *)L_8;
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		Hashtable_t26 * L_9 = iTween_Hash_m238(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		iTween_Stab_m63(NULL /*static, unused*/, L_0, L_9, /*hidden argument*/NULL);
		return;
	}
}
// System.Void iTween::Stab(UnityEngine.GameObject,System.Collections.Hashtable)
extern TypeInfo* iTween_t23_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral28;
extern Il2CppCodeGenString* _stringLiteral51;
extern "C" void iTween_Stab_m63 (Object_t * __this /* static, unused */, GameObject_t34 * ___target, Hashtable_t26 * ___args, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		iTween_t23_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		_stringLiteral28 = il2cpp_codegen_string_literal_from_index(28);
		_stringLiteral51 = il2cpp_codegen_string_literal_from_index(51);
		s_Il2CppMethodIntialized = true;
	}
	{
		Hashtable_t26 * L_0 = ___args;
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		Hashtable_t26 * L_1 = iTween_CleanArgs_m251(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		___args = L_1;
		Hashtable_t26 * L_2 = ___args;
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(22 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_2, _stringLiteral28, _stringLiteral51);
		GameObject_t34 * L_3 = ___target;
		Hashtable_t26 * L_4 = ___args;
		iTween_Launch_m250(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void iTween::LookFrom(UnityEngine.GameObject,UnityEngine.Vector3,System.Single)
extern TypeInfo* ObjectU5BU5D_t41_il2cpp_TypeInfo_var;
extern TypeInfo* Vector3_t14_il2cpp_TypeInfo_var;
extern TypeInfo* Single_t51_il2cpp_TypeInfo_var;
extern TypeInfo* iTween_t23_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral52;
extern Il2CppCodeGenString* _stringLiteral22;
extern "C" void iTween_LookFrom_m64 (Object_t * __this /* static, unused */, GameObject_t34 * ___target, Vector3_t14  ___looktarget, float ___time, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t41_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5);
		Vector3_t14_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13);
		Single_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		iTween_t23_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		_stringLiteral52 = il2cpp_codegen_string_literal_from_index(52);
		_stringLiteral22 = il2cpp_codegen_string_literal_from_index(22);
		s_Il2CppMethodIntialized = true;
	}
	{
		GameObject_t34 * L_0 = ___target;
		ObjectU5BU5D_t41* L_1 = ((ObjectU5BU5D_t41*)SZArrayNew(ObjectU5BU5D_t41_il2cpp_TypeInfo_var, 4));
		ArrayElementTypeCheck (L_1, _stringLiteral52);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_1, 0, sizeof(Object_t *))) = (Object_t *)_stringLiteral52;
		ObjectU5BU5D_t41* L_2 = L_1;
		Vector3_t14  L_3 = ___looktarget;
		Vector3_t14  L_4 = L_3;
		Object_t * L_5 = Box(Vector3_t14_il2cpp_TypeInfo_var, &L_4);
		ArrayElementTypeCheck (L_2, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1, sizeof(Object_t *))) = (Object_t *)L_5;
		ObjectU5BU5D_t41* L_6 = L_2;
		ArrayElementTypeCheck (L_6, _stringLiteral22);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 2, sizeof(Object_t *))) = (Object_t *)_stringLiteral22;
		ObjectU5BU5D_t41* L_7 = L_6;
		float L_8 = ___time;
		float L_9 = L_8;
		Object_t * L_10 = Box(Single_t51_il2cpp_TypeInfo_var, &L_9);
		ArrayElementTypeCheck (L_7, L_10);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_7, 3, sizeof(Object_t *))) = (Object_t *)L_10;
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		Hashtable_t26 * L_11 = iTween_Hash_m238(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		iTween_LookFrom_m65(NULL /*static, unused*/, L_0, L_11, /*hidden argument*/NULL);
		return;
	}
}
// System.Void iTween::LookFrom(UnityEngine.GameObject,System.Collections.Hashtable)
extern const Il2CppType* Transform_t32_0_0_0_var;
extern const Il2CppType* Vector3_t14_0_0_0_var;
extern TypeInfo* iTween_t23_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* Transform_t32_il2cpp_TypeInfo_var;
extern TypeInfo* Nullable_1_t63_il2cpp_TypeInfo_var;
extern TypeInfo* Defaults_t12_il2cpp_TypeInfo_var;
extern TypeInfo* Vector3_t14_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t35_il2cpp_TypeInfo_var;
extern const MethodInfo* Nullable_1_get_HasValue_m363_MethodInfo_var;
extern const MethodInfo* Nullable_1_get_Value_m364_MethodInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m367_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral52;
extern Il2CppCodeGenString* _stringLiteral53;
extern Il2CppCodeGenString* _stringLiteral54;
extern Il2CppCodeGenString* _stringLiteral10;
extern Il2CppCodeGenString* _stringLiteral55;
extern Il2CppCodeGenString* _stringLiteral56;
extern Il2CppCodeGenString* _stringLiteral57;
extern Il2CppCodeGenString* _stringLiteral28;
extern Il2CppCodeGenString* _stringLiteral58;
extern Il2CppCodeGenString* _stringLiteral30;
extern Il2CppCodeGenString* _stringLiteral26;
extern "C" void iTween_LookFrom_m65 (Object_t * __this /* static, unused */, GameObject_t34 * ___target, Hashtable_t26 * ___args, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Transform_t32_0_0_0_var = il2cpp_codegen_type_from_index(30);
		Vector3_t14_0_0_0_var = il2cpp_codegen_type_from_index(13);
		iTween_t23_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		Transform_t32_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(30);
		Nullable_1_t63_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(34);
		Defaults_t12_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11);
		Vector3_t14_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(33);
		Dictionary_2_t35_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(35);
		Nullable_1_get_HasValue_m363_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483656);
		Nullable_1_get_Value_m364_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483657);
		Dictionary_2__ctor_m367_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483658);
		_stringLiteral52 = il2cpp_codegen_string_literal_from_index(52);
		_stringLiteral53 = il2cpp_codegen_string_literal_from_index(53);
		_stringLiteral54 = il2cpp_codegen_string_literal_from_index(54);
		_stringLiteral10 = il2cpp_codegen_string_literal_from_index(10);
		_stringLiteral55 = il2cpp_codegen_string_literal_from_index(55);
		_stringLiteral56 = il2cpp_codegen_string_literal_from_index(56);
		_stringLiteral57 = il2cpp_codegen_string_literal_from_index(57);
		_stringLiteral28 = il2cpp_codegen_string_literal_from_index(28);
		_stringLiteral58 = il2cpp_codegen_string_literal_from_index(58);
		_stringLiteral30 = il2cpp_codegen_string_literal_from_index(30);
		_stringLiteral26 = il2cpp_codegen_string_literal_from_index(26);
		s_Il2CppMethodIntialized = true;
	}
	Vector3_t14  V_0 = {0};
	Vector3_t14  V_1 = {0};
	Nullable_1_t63  V_2 = {0};
	Nullable_1_t63  V_3 = {0};
	String_t* V_4 = {0};
	Dictionary_2_t35 * V_5 = {0};
	int32_t V_6 = 0;
	Transform_t32 * G_B3_0 = {0};
	Transform_t32 * G_B3_1 = {0};
	Transform_t32 * G_B2_0 = {0};
	Transform_t32 * G_B2_1 = {0};
	Vector3_t14  G_B4_0 = {0};
	Transform_t32 * G_B4_1 = {0};
	Transform_t32 * G_B4_2 = {0};
	Vector3_t14  G_B8_0 = {0};
	Transform_t32 * G_B8_1 = {0};
	Vector3_t14  G_B7_0 = {0};
	Transform_t32 * G_B7_1 = {0};
	Vector3_t14  G_B9_0 = {0};
	Vector3_t14  G_B9_1 = {0};
	Transform_t32 * G_B9_2 = {0};
	{
		Hashtable_t26 * L_0 = ___args;
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		Hashtable_t26 * L_1 = iTween_CleanArgs_m251(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		___args = L_1;
		GameObject_t34 * L_2 = ___target;
		Transform_t32 * L_3 = GameObject_get_transform_m344(L_2, /*hidden argument*/NULL);
		Vector3_t14  L_4 = Transform_get_eulerAngles_m362(L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		Hashtable_t26 * L_5 = ___args;
		Object_t * L_6 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_5, _stringLiteral52);
		Type_t * L_7 = Object_GetType_m342(L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_8 = Type_GetTypeFromHandle_m343(NULL /*static, unused*/, LoadTypeToken(Transform_t32_0_0_0_var), /*hidden argument*/NULL);
		if ((!(((Object_t*)(Type_t *)L_7) == ((Object_t*)(Type_t *)L_8))))
		{
			goto IL_0081;
		}
	}
	{
		GameObject_t34 * L_9 = ___target;
		Transform_t32 * L_10 = GameObject_get_transform_m344(L_9, /*hidden argument*/NULL);
		Hashtable_t26 * L_11 = ___args;
		Object_t * L_12 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_11, _stringLiteral52);
		Hashtable_t26 * L_13 = ___args;
		Object_t * L_14 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_13, _stringLiteral53);
		void* L_15 = alloca(sizeof(Nullable_1_t63 ));
		UnBoxNullable(L_14, Nullable_1_t63_il2cpp_TypeInfo_var, L_15);
		V_2 = ((*(Nullable_1_t63 *)((Nullable_1_t63 *)L_15)));
		bool L_16 = Nullable_1_get_HasValue_m363((&V_2), /*hidden argument*/Nullable_1_get_HasValue_m363_MethodInfo_var);
		G_B2_0 = ((Transform_t32 *)CastclassClass(L_12, Transform_t32_il2cpp_TypeInfo_var));
		G_B2_1 = L_10;
		if (!L_16)
		{
			G_B3_0 = ((Transform_t32 *)CastclassClass(L_12, Transform_t32_il2cpp_TypeInfo_var));
			G_B3_1 = L_10;
			goto IL_0072;
		}
	}
	{
		Vector3_t14  L_17 = Nullable_1_get_Value_m364((&V_2), /*hidden argument*/Nullable_1_get_Value_m364_MethodInfo_var);
		G_B4_0 = L_17;
		G_B4_1 = G_B2_0;
		G_B4_2 = G_B2_1;
		goto IL_0077;
	}

IL_0072:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Defaults_t12_il2cpp_TypeInfo_var);
		Vector3_t14  L_18 = ((Defaults_t12_StaticFields*)Defaults_t12_il2cpp_TypeInfo_var->static_fields)->___up_15;
		G_B4_0 = L_18;
		G_B4_1 = G_B3_0;
		G_B4_2 = G_B3_1;
	}

IL_0077:
	{
		Transform_LookAt_m365(G_B4_2, G_B4_1, G_B4_0, /*hidden argument*/NULL);
		goto IL_00e9;
	}

IL_0081:
	{
		Hashtable_t26 * L_19 = ___args;
		Object_t * L_20 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_19, _stringLiteral52);
		Type_t * L_21 = Object_GetType_m342(L_20, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_22 = Type_GetTypeFromHandle_m343(NULL /*static, unused*/, LoadTypeToken(Vector3_t14_0_0_0_var), /*hidden argument*/NULL);
		if ((!(((Object_t*)(Type_t *)L_21) == ((Object_t*)(Type_t *)L_22))))
		{
			goto IL_00e9;
		}
	}
	{
		GameObject_t34 * L_23 = ___target;
		Transform_t32 * L_24 = GameObject_get_transform_m344(L_23, /*hidden argument*/NULL);
		Hashtable_t26 * L_25 = ___args;
		Object_t * L_26 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_25, _stringLiteral52);
		Hashtable_t26 * L_27 = ___args;
		Object_t * L_28 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_27, _stringLiteral53);
		void* L_29 = alloca(sizeof(Nullable_1_t63 ));
		UnBoxNullable(L_28, Nullable_1_t63_il2cpp_TypeInfo_var, L_29);
		V_3 = ((*(Nullable_1_t63 *)((Nullable_1_t63 *)L_29)));
		bool L_30 = Nullable_1_get_HasValue_m363((&V_3), /*hidden argument*/Nullable_1_get_HasValue_m363_MethodInfo_var);
		G_B7_0 = ((*(Vector3_t14 *)((Vector3_t14 *)UnBox (L_26, Vector3_t14_il2cpp_TypeInfo_var))));
		G_B7_1 = L_24;
		if (!L_30)
		{
			G_B8_0 = ((*(Vector3_t14 *)((Vector3_t14 *)UnBox (L_26, Vector3_t14_il2cpp_TypeInfo_var))));
			G_B8_1 = L_24;
			goto IL_00df;
		}
	}
	{
		Vector3_t14  L_31 = Nullable_1_get_Value_m364((&V_3), /*hidden argument*/Nullable_1_get_Value_m364_MethodInfo_var);
		G_B9_0 = L_31;
		G_B9_1 = G_B7_0;
		G_B9_2 = G_B7_1;
		goto IL_00e4;
	}

IL_00df:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Defaults_t12_il2cpp_TypeInfo_var);
		Vector3_t14  L_32 = ((Defaults_t12_StaticFields*)Defaults_t12_il2cpp_TypeInfo_var->static_fields)->___up_15;
		G_B9_0 = L_32;
		G_B9_1 = G_B8_0;
		G_B9_2 = G_B8_1;
	}

IL_00e4:
	{
		Transform_LookAt_m366(G_B9_2, G_B9_1, G_B9_0, /*hidden argument*/NULL);
	}

IL_00e9:
	{
		Hashtable_t26 * L_33 = ___args;
		bool L_34 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(26 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_33, _stringLiteral54);
		if (!L_34)
		{
			goto IL_01f8;
		}
	}
	{
		GameObject_t34 * L_35 = ___target;
		Transform_t32 * L_36 = GameObject_get_transform_m344(L_35, /*hidden argument*/NULL);
		Vector3_t14  L_37 = Transform_get_eulerAngles_m362(L_36, /*hidden argument*/NULL);
		V_1 = L_37;
		Hashtable_t26 * L_38 = ___args;
		Object_t * L_39 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_38, _stringLiteral54);
		V_4 = ((String_t*)CastclassSealed(L_39, String_t_il2cpp_TypeInfo_var));
		String_t* L_40 = V_4;
		if (!L_40)
		{
			goto IL_01ec;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		Dictionary_2_t35 * L_41 = ((iTween_t23_StaticFields*)iTween_t23_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map0_40;
		if (L_41)
		{
			goto IL_015e;
		}
	}
	{
		Dictionary_2_t35 * L_42 = (Dictionary_2_t35 *)il2cpp_codegen_object_new (Dictionary_2_t35_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m367(L_42, 3, /*hidden argument*/Dictionary_2__ctor_m367_MethodInfo_var);
		V_5 = L_42;
		Dictionary_2_t35 * L_43 = V_5;
		VirtActionInvoker2< String_t*, int32_t >::Invoke(26 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_43, _stringLiteral10, 0);
		Dictionary_2_t35 * L_44 = V_5;
		VirtActionInvoker2< String_t*, int32_t >::Invoke(26 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_44, _stringLiteral55, 1);
		Dictionary_2_t35 * L_45 = V_5;
		VirtActionInvoker2< String_t*, int32_t >::Invoke(26 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_45, _stringLiteral56, 2);
		Dictionary_2_t35 * L_46 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		((iTween_t23_StaticFields*)iTween_t23_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map0_40 = L_46;
	}

IL_015e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		Dictionary_2_t35 * L_47 = ((iTween_t23_StaticFields*)iTween_t23_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map0_40;
		String_t* L_48 = V_4;
		bool L_49 = (bool)VirtFuncInvoker2< bool, String_t*, int32_t* >::Invoke(31 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::TryGetValue(!0,!1&) */, L_47, L_48, (&V_6));
		if (!L_49)
		{
			goto IL_01ec;
		}
	}
	{
		int32_t L_50 = V_6;
		if (L_50 == 0)
		{
			goto IL_0189;
		}
		if (L_50 == 1)
		{
			goto IL_01aa;
		}
		if (L_50 == 2)
		{
			goto IL_01cb;
		}
	}
	{
		goto IL_01ec;
	}

IL_0189:
	{
		float L_51 = ((&V_0)->___y_2);
		(&V_1)->___y_2 = L_51;
		float L_52 = ((&V_0)->___z_3);
		(&V_1)->___z_3 = L_52;
		goto IL_01ec;
	}

IL_01aa:
	{
		float L_53 = ((&V_0)->___x_1);
		(&V_1)->___x_1 = L_53;
		float L_54 = ((&V_0)->___z_3);
		(&V_1)->___z_3 = L_54;
		goto IL_01ec;
	}

IL_01cb:
	{
		float L_55 = ((&V_0)->___x_1);
		(&V_1)->___x_1 = L_55;
		float L_56 = ((&V_0)->___y_2);
		(&V_1)->___y_2 = L_56;
		goto IL_01ec;
	}

IL_01ec:
	{
		GameObject_t34 * L_57 = ___target;
		Transform_t32 * L_58 = GameObject_get_transform_m344(L_57, /*hidden argument*/NULL);
		Vector3_t14  L_59 = V_1;
		Transform_set_eulerAngles_m368(L_58, L_59, /*hidden argument*/NULL);
	}

IL_01f8:
	{
		Hashtable_t26 * L_60 = ___args;
		Vector3_t14  L_61 = V_0;
		Vector3_t14  L_62 = L_61;
		Object_t * L_63 = Box(Vector3_t14_il2cpp_TypeInfo_var, &L_62);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(22 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_60, _stringLiteral57, L_63);
		Hashtable_t26 * L_64 = ___args;
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(22 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_64, _stringLiteral28, _stringLiteral58);
		Hashtable_t26 * L_65 = ___args;
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(22 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_65, _stringLiteral30, _stringLiteral26);
		GameObject_t34 * L_66 = ___target;
		Hashtable_t26 * L_67 = ___args;
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		iTween_Launch_m250(NULL /*static, unused*/, L_66, L_67, /*hidden argument*/NULL);
		return;
	}
}
// System.Void iTween::LookTo(UnityEngine.GameObject,UnityEngine.Vector3,System.Single)
extern TypeInfo* ObjectU5BU5D_t41_il2cpp_TypeInfo_var;
extern TypeInfo* Vector3_t14_il2cpp_TypeInfo_var;
extern TypeInfo* Single_t51_il2cpp_TypeInfo_var;
extern TypeInfo* iTween_t23_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral52;
extern Il2CppCodeGenString* _stringLiteral22;
extern "C" void iTween_LookTo_m66 (Object_t * __this /* static, unused */, GameObject_t34 * ___target, Vector3_t14  ___looktarget, float ___time, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t41_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5);
		Vector3_t14_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13);
		Single_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		iTween_t23_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		_stringLiteral52 = il2cpp_codegen_string_literal_from_index(52);
		_stringLiteral22 = il2cpp_codegen_string_literal_from_index(22);
		s_Il2CppMethodIntialized = true;
	}
	{
		GameObject_t34 * L_0 = ___target;
		ObjectU5BU5D_t41* L_1 = ((ObjectU5BU5D_t41*)SZArrayNew(ObjectU5BU5D_t41_il2cpp_TypeInfo_var, 4));
		ArrayElementTypeCheck (L_1, _stringLiteral52);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_1, 0, sizeof(Object_t *))) = (Object_t *)_stringLiteral52;
		ObjectU5BU5D_t41* L_2 = L_1;
		Vector3_t14  L_3 = ___looktarget;
		Vector3_t14  L_4 = L_3;
		Object_t * L_5 = Box(Vector3_t14_il2cpp_TypeInfo_var, &L_4);
		ArrayElementTypeCheck (L_2, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1, sizeof(Object_t *))) = (Object_t *)L_5;
		ObjectU5BU5D_t41* L_6 = L_2;
		ArrayElementTypeCheck (L_6, _stringLiteral22);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 2, sizeof(Object_t *))) = (Object_t *)_stringLiteral22;
		ObjectU5BU5D_t41* L_7 = L_6;
		float L_8 = ___time;
		float L_9 = L_8;
		Object_t * L_10 = Box(Single_t51_il2cpp_TypeInfo_var, &L_9);
		ArrayElementTypeCheck (L_7, L_10);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_7, 3, sizeof(Object_t *))) = (Object_t *)L_10;
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		Hashtable_t26 * L_11 = iTween_Hash_m238(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		iTween_LookTo_m67(NULL /*static, unused*/, L_0, L_11, /*hidden argument*/NULL);
		return;
	}
}
// System.Void iTween::LookTo(UnityEngine.GameObject,System.Collections.Hashtable)
extern const Il2CppType* Transform_t32_0_0_0_var;
extern TypeInfo* iTween_t23_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* Transform_t32_il2cpp_TypeInfo_var;
extern TypeInfo* Vector3_t14_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral52;
extern Il2CppCodeGenString* _stringLiteral59;
extern Il2CppCodeGenString* _stringLiteral57;
extern Il2CppCodeGenString* _stringLiteral28;
extern Il2CppCodeGenString* _stringLiteral60;
extern Il2CppCodeGenString* _stringLiteral30;
extern Il2CppCodeGenString* _stringLiteral26;
extern "C" void iTween_LookTo_m67 (Object_t * __this /* static, unused */, GameObject_t34 * ___target, Hashtable_t26 * ___args, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Transform_t32_0_0_0_var = il2cpp_codegen_type_from_index(30);
		iTween_t23_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		Transform_t32_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(30);
		Vector3_t14_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13);
		_stringLiteral52 = il2cpp_codegen_string_literal_from_index(52);
		_stringLiteral59 = il2cpp_codegen_string_literal_from_index(59);
		_stringLiteral57 = il2cpp_codegen_string_literal_from_index(57);
		_stringLiteral28 = il2cpp_codegen_string_literal_from_index(28);
		_stringLiteral60 = il2cpp_codegen_string_literal_from_index(60);
		_stringLiteral30 = il2cpp_codegen_string_literal_from_index(30);
		_stringLiteral26 = il2cpp_codegen_string_literal_from_index(26);
		s_Il2CppMethodIntialized = true;
	}
	Transform_t32 * V_0 = {0};
	Vector3_t14  V_1 = {0};
	Vector3_t14  V_2 = {0};
	Vector3_t14  V_3 = {0};
	Vector3_t14  V_4 = {0};
	Vector3_t14  V_5 = {0};
	Vector3_t14  V_6 = {0};
	{
		Hashtable_t26 * L_0 = ___args;
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		Hashtable_t26 * L_1 = iTween_CleanArgs_m251(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		___args = L_1;
		Hashtable_t26 * L_2 = ___args;
		bool L_3 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(26 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_2, _stringLiteral52);
		if (!L_3)
		{
			goto IL_00c9;
		}
	}
	{
		Hashtable_t26 * L_4 = ___args;
		Object_t * L_5 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_4, _stringLiteral52);
		Type_t * L_6 = Object_GetType_m342(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_7 = Type_GetTypeFromHandle_m343(NULL /*static, unused*/, LoadTypeToken(Transform_t32_0_0_0_var), /*hidden argument*/NULL);
		if ((!(((Object_t*)(Type_t *)L_6) == ((Object_t*)(Type_t *)L_7))))
		{
			goto IL_00c9;
		}
	}
	{
		Hashtable_t26 * L_8 = ___args;
		Object_t * L_9 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_8, _stringLiteral52);
		V_0 = ((Transform_t32 *)CastclassClass(L_9, Transform_t32_il2cpp_TypeInfo_var));
		Hashtable_t26 * L_10 = ___args;
		Transform_t32 * L_11 = V_0;
		Vector3_t14  L_12 = Transform_get_position_m369(L_11, /*hidden argument*/NULL);
		V_1 = L_12;
		float L_13 = ((&V_1)->___x_1);
		Transform_t32 * L_14 = V_0;
		Vector3_t14  L_15 = Transform_get_position_m369(L_14, /*hidden argument*/NULL);
		V_2 = L_15;
		float L_16 = ((&V_2)->___y_2);
		Transform_t32 * L_17 = V_0;
		Vector3_t14  L_18 = Transform_get_position_m369(L_17, /*hidden argument*/NULL);
		V_3 = L_18;
		float L_19 = ((&V_3)->___z_3);
		Vector3_t14  L_20 = {0};
		Vector3__ctor_m306(&L_20, L_13, L_16, L_19, /*hidden argument*/NULL);
		Vector3_t14  L_21 = L_20;
		Object_t * L_22 = Box(Vector3_t14_il2cpp_TypeInfo_var, &L_21);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(22 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_10, _stringLiteral59, L_22);
		Hashtable_t26 * L_23 = ___args;
		Transform_t32 * L_24 = V_0;
		Vector3_t14  L_25 = Transform_get_eulerAngles_m362(L_24, /*hidden argument*/NULL);
		V_4 = L_25;
		float L_26 = ((&V_4)->___x_1);
		Transform_t32 * L_27 = V_0;
		Vector3_t14  L_28 = Transform_get_eulerAngles_m362(L_27, /*hidden argument*/NULL);
		V_5 = L_28;
		float L_29 = ((&V_5)->___y_2);
		Transform_t32 * L_30 = V_0;
		Vector3_t14  L_31 = Transform_get_eulerAngles_m362(L_30, /*hidden argument*/NULL);
		V_6 = L_31;
		float L_32 = ((&V_6)->___z_3);
		Vector3_t14  L_33 = {0};
		Vector3__ctor_m306(&L_33, L_26, L_29, L_32, /*hidden argument*/NULL);
		Vector3_t14  L_34 = L_33;
		Object_t * L_35 = Box(Vector3_t14_il2cpp_TypeInfo_var, &L_34);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(22 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_23, _stringLiteral57, L_35);
	}

IL_00c9:
	{
		Hashtable_t26 * L_36 = ___args;
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(22 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_36, _stringLiteral28, _stringLiteral60);
		Hashtable_t26 * L_37 = ___args;
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(22 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_37, _stringLiteral30, _stringLiteral26);
		GameObject_t34 * L_38 = ___target;
		Hashtable_t26 * L_39 = ___args;
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		iTween_Launch_m250(NULL /*static, unused*/, L_38, L_39, /*hidden argument*/NULL);
		return;
	}
}
// System.Void iTween::MoveTo(UnityEngine.GameObject,UnityEngine.Vector3,System.Single)
extern TypeInfo* ObjectU5BU5D_t41_il2cpp_TypeInfo_var;
extern TypeInfo* Vector3_t14_il2cpp_TypeInfo_var;
extern TypeInfo* Single_t51_il2cpp_TypeInfo_var;
extern TypeInfo* iTween_t23_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral59;
extern Il2CppCodeGenString* _stringLiteral22;
extern "C" void iTween_MoveTo_m68 (Object_t * __this /* static, unused */, GameObject_t34 * ___target, Vector3_t14  ___position, float ___time, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t41_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5);
		Vector3_t14_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13);
		Single_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		iTween_t23_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		_stringLiteral59 = il2cpp_codegen_string_literal_from_index(59);
		_stringLiteral22 = il2cpp_codegen_string_literal_from_index(22);
		s_Il2CppMethodIntialized = true;
	}
	{
		GameObject_t34 * L_0 = ___target;
		ObjectU5BU5D_t41* L_1 = ((ObjectU5BU5D_t41*)SZArrayNew(ObjectU5BU5D_t41_il2cpp_TypeInfo_var, 4));
		ArrayElementTypeCheck (L_1, _stringLiteral59);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_1, 0, sizeof(Object_t *))) = (Object_t *)_stringLiteral59;
		ObjectU5BU5D_t41* L_2 = L_1;
		Vector3_t14  L_3 = ___position;
		Vector3_t14  L_4 = L_3;
		Object_t * L_5 = Box(Vector3_t14_il2cpp_TypeInfo_var, &L_4);
		ArrayElementTypeCheck (L_2, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1, sizeof(Object_t *))) = (Object_t *)L_5;
		ObjectU5BU5D_t41* L_6 = L_2;
		ArrayElementTypeCheck (L_6, _stringLiteral22);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 2, sizeof(Object_t *))) = (Object_t *)_stringLiteral22;
		ObjectU5BU5D_t41* L_7 = L_6;
		float L_8 = ___time;
		float L_9 = L_8;
		Object_t * L_10 = Box(Single_t51_il2cpp_TypeInfo_var, &L_9);
		ArrayElementTypeCheck (L_7, L_10);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_7, 3, sizeof(Object_t *))) = (Object_t *)L_10;
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		Hashtable_t26 * L_11 = iTween_Hash_m238(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		iTween_MoveTo_m69(NULL /*static, unused*/, L_0, L_11, /*hidden argument*/NULL);
		return;
	}
}
// System.Void iTween::MoveTo(UnityEngine.GameObject,System.Collections.Hashtable)
extern const Il2CppType* Transform_t32_0_0_0_var;
extern TypeInfo* iTween_t23_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* Transform_t32_il2cpp_TypeInfo_var;
extern TypeInfo* Vector3_t14_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral59;
extern Il2CppCodeGenString* _stringLiteral57;
extern Il2CppCodeGenString* _stringLiteral61;
extern Il2CppCodeGenString* _stringLiteral28;
extern Il2CppCodeGenString* _stringLiteral62;
extern Il2CppCodeGenString* _stringLiteral30;
extern Il2CppCodeGenString* _stringLiteral26;
extern "C" void iTween_MoveTo_m69 (Object_t * __this /* static, unused */, GameObject_t34 * ___target, Hashtable_t26 * ___args, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Transform_t32_0_0_0_var = il2cpp_codegen_type_from_index(30);
		iTween_t23_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		Transform_t32_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(30);
		Vector3_t14_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13);
		_stringLiteral59 = il2cpp_codegen_string_literal_from_index(59);
		_stringLiteral57 = il2cpp_codegen_string_literal_from_index(57);
		_stringLiteral61 = il2cpp_codegen_string_literal_from_index(61);
		_stringLiteral28 = il2cpp_codegen_string_literal_from_index(28);
		_stringLiteral62 = il2cpp_codegen_string_literal_from_index(62);
		_stringLiteral30 = il2cpp_codegen_string_literal_from_index(30);
		_stringLiteral26 = il2cpp_codegen_string_literal_from_index(26);
		s_Il2CppMethodIntialized = true;
	}
	Transform_t32 * V_0 = {0};
	Vector3_t14  V_1 = {0};
	Vector3_t14  V_2 = {0};
	Vector3_t14  V_3 = {0};
	Vector3_t14  V_4 = {0};
	Vector3_t14  V_5 = {0};
	Vector3_t14  V_6 = {0};
	Vector3_t14  V_7 = {0};
	Vector3_t14  V_8 = {0};
	Vector3_t14  V_9 = {0};
	{
		Hashtable_t26 * L_0 = ___args;
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		Hashtable_t26 * L_1 = iTween_CleanArgs_m251(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		___args = L_1;
		Hashtable_t26 * L_2 = ___args;
		bool L_3 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(26 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_2, _stringLiteral59);
		if (!L_3)
		{
			goto IL_010b;
		}
	}
	{
		Hashtable_t26 * L_4 = ___args;
		Object_t * L_5 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_4, _stringLiteral59);
		Type_t * L_6 = Object_GetType_m342(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_7 = Type_GetTypeFromHandle_m343(NULL /*static, unused*/, LoadTypeToken(Transform_t32_0_0_0_var), /*hidden argument*/NULL);
		if ((!(((Object_t*)(Type_t *)L_6) == ((Object_t*)(Type_t *)L_7))))
		{
			goto IL_010b;
		}
	}
	{
		Hashtable_t26 * L_8 = ___args;
		Object_t * L_9 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_8, _stringLiteral59);
		V_0 = ((Transform_t32 *)CastclassClass(L_9, Transform_t32_il2cpp_TypeInfo_var));
		Hashtable_t26 * L_10 = ___args;
		Transform_t32 * L_11 = V_0;
		Vector3_t14  L_12 = Transform_get_position_m369(L_11, /*hidden argument*/NULL);
		V_1 = L_12;
		float L_13 = ((&V_1)->___x_1);
		Transform_t32 * L_14 = V_0;
		Vector3_t14  L_15 = Transform_get_position_m369(L_14, /*hidden argument*/NULL);
		V_2 = L_15;
		float L_16 = ((&V_2)->___y_2);
		Transform_t32 * L_17 = V_0;
		Vector3_t14  L_18 = Transform_get_position_m369(L_17, /*hidden argument*/NULL);
		V_3 = L_18;
		float L_19 = ((&V_3)->___z_3);
		Vector3_t14  L_20 = {0};
		Vector3__ctor_m306(&L_20, L_13, L_16, L_19, /*hidden argument*/NULL);
		Vector3_t14  L_21 = L_20;
		Object_t * L_22 = Box(Vector3_t14_il2cpp_TypeInfo_var, &L_21);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(22 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_10, _stringLiteral59, L_22);
		Hashtable_t26 * L_23 = ___args;
		Transform_t32 * L_24 = V_0;
		Vector3_t14  L_25 = Transform_get_eulerAngles_m362(L_24, /*hidden argument*/NULL);
		V_4 = L_25;
		float L_26 = ((&V_4)->___x_1);
		Transform_t32 * L_27 = V_0;
		Vector3_t14  L_28 = Transform_get_eulerAngles_m362(L_27, /*hidden argument*/NULL);
		V_5 = L_28;
		float L_29 = ((&V_5)->___y_2);
		Transform_t32 * L_30 = V_0;
		Vector3_t14  L_31 = Transform_get_eulerAngles_m362(L_30, /*hidden argument*/NULL);
		V_6 = L_31;
		float L_32 = ((&V_6)->___z_3);
		Vector3_t14  L_33 = {0};
		Vector3__ctor_m306(&L_33, L_26, L_29, L_32, /*hidden argument*/NULL);
		Vector3_t14  L_34 = L_33;
		Object_t * L_35 = Box(Vector3_t14_il2cpp_TypeInfo_var, &L_34);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(22 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_23, _stringLiteral57, L_35);
		Hashtable_t26 * L_36 = ___args;
		Transform_t32 * L_37 = V_0;
		Vector3_t14  L_38 = Transform_get_localScale_m370(L_37, /*hidden argument*/NULL);
		V_7 = L_38;
		float L_39 = ((&V_7)->___x_1);
		Transform_t32 * L_40 = V_0;
		Vector3_t14  L_41 = Transform_get_localScale_m370(L_40, /*hidden argument*/NULL);
		V_8 = L_41;
		float L_42 = ((&V_8)->___y_2);
		Transform_t32 * L_43 = V_0;
		Vector3_t14  L_44 = Transform_get_localScale_m370(L_43, /*hidden argument*/NULL);
		V_9 = L_44;
		float L_45 = ((&V_9)->___z_3);
		Vector3_t14  L_46 = {0};
		Vector3__ctor_m306(&L_46, L_39, L_42, L_45, /*hidden argument*/NULL);
		Vector3_t14  L_47 = L_46;
		Object_t * L_48 = Box(Vector3_t14_il2cpp_TypeInfo_var, &L_47);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(22 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_36, _stringLiteral61, L_48);
	}

IL_010b:
	{
		Hashtable_t26 * L_49 = ___args;
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(22 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_49, _stringLiteral28, _stringLiteral62);
		Hashtable_t26 * L_50 = ___args;
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(22 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_50, _stringLiteral30, _stringLiteral26);
		GameObject_t34 * L_51 = ___target;
		Hashtable_t26 * L_52 = ___args;
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		iTween_Launch_m250(NULL /*static, unused*/, L_51, L_52, /*hidden argument*/NULL);
		return;
	}
}
// System.Void iTween::MoveFrom(UnityEngine.GameObject,UnityEngine.Vector3,System.Single)
extern TypeInfo* ObjectU5BU5D_t41_il2cpp_TypeInfo_var;
extern TypeInfo* Vector3_t14_il2cpp_TypeInfo_var;
extern TypeInfo* Single_t51_il2cpp_TypeInfo_var;
extern TypeInfo* iTween_t23_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral59;
extern Il2CppCodeGenString* _stringLiteral22;
extern "C" void iTween_MoveFrom_m70 (Object_t * __this /* static, unused */, GameObject_t34 * ___target, Vector3_t14  ___position, float ___time, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t41_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5);
		Vector3_t14_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13);
		Single_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		iTween_t23_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		_stringLiteral59 = il2cpp_codegen_string_literal_from_index(59);
		_stringLiteral22 = il2cpp_codegen_string_literal_from_index(22);
		s_Il2CppMethodIntialized = true;
	}
	{
		GameObject_t34 * L_0 = ___target;
		ObjectU5BU5D_t41* L_1 = ((ObjectU5BU5D_t41*)SZArrayNew(ObjectU5BU5D_t41_il2cpp_TypeInfo_var, 4));
		ArrayElementTypeCheck (L_1, _stringLiteral59);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_1, 0, sizeof(Object_t *))) = (Object_t *)_stringLiteral59;
		ObjectU5BU5D_t41* L_2 = L_1;
		Vector3_t14  L_3 = ___position;
		Vector3_t14  L_4 = L_3;
		Object_t * L_5 = Box(Vector3_t14_il2cpp_TypeInfo_var, &L_4);
		ArrayElementTypeCheck (L_2, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1, sizeof(Object_t *))) = (Object_t *)L_5;
		ObjectU5BU5D_t41* L_6 = L_2;
		ArrayElementTypeCheck (L_6, _stringLiteral22);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 2, sizeof(Object_t *))) = (Object_t *)_stringLiteral22;
		ObjectU5BU5D_t41* L_7 = L_6;
		float L_8 = ___time;
		float L_9 = L_8;
		Object_t * L_10 = Box(Single_t51_il2cpp_TypeInfo_var, &L_9);
		ArrayElementTypeCheck (L_7, L_10);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_7, 3, sizeof(Object_t *))) = (Object_t *)L_10;
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		Hashtable_t26 * L_11 = iTween_Hash_m238(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		iTween_MoveFrom_m71(NULL /*static, unused*/, L_0, L_11, /*hidden argument*/NULL);
		return;
	}
}
// System.Void iTween::MoveFrom(UnityEngine.GameObject,System.Collections.Hashtable)
extern const Il2CppType* Vector3U5BU5D_t16_0_0_0_var;
extern const Il2CppType* Transform_t32_0_0_0_var;
extern const Il2CppType* Vector3_t14_0_0_0_var;
extern TypeInfo* iTween_t23_il2cpp_TypeInfo_var;
extern TypeInfo* Boolean_t56_il2cpp_TypeInfo_var;
extern TypeInfo* Defaults_t12_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* Vector3U5BU5D_t16_il2cpp_TypeInfo_var;
extern TypeInfo* TransformU5BU5D_t39_il2cpp_TypeInfo_var;
extern TypeInfo* Transform_t32_il2cpp_TypeInfo_var;
extern TypeInfo* Vector3_t14_il2cpp_TypeInfo_var;
extern TypeInfo* Single_t51_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral63;
extern Il2CppCodeGenString* _stringLiteral64;
extern Il2CppCodeGenString* _stringLiteral59;
extern Il2CppCodeGenString* _stringLiteral10;
extern Il2CppCodeGenString* _stringLiteral55;
extern Il2CppCodeGenString* _stringLiteral56;
extern Il2CppCodeGenString* _stringLiteral28;
extern Il2CppCodeGenString* _stringLiteral62;
extern Il2CppCodeGenString* _stringLiteral30;
extern Il2CppCodeGenString* _stringLiteral26;
extern "C" void iTween_MoveFrom_m71 (Object_t * __this /* static, unused */, GameObject_t34 * ___target, Hashtable_t26 * ___args, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Vector3U5BU5D_t16_0_0_0_var = il2cpp_codegen_type_from_index(12);
		Transform_t32_0_0_0_var = il2cpp_codegen_type_from_index(30);
		Vector3_t14_0_0_0_var = il2cpp_codegen_type_from_index(13);
		iTween_t23_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		Boolean_t56_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(28);
		Defaults_t12_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		Vector3U5BU5D_t16_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(12);
		TransformU5BU5D_t39_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(36);
		Transform_t32_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(30);
		Vector3_t14_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13);
		Single_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		_stringLiteral63 = il2cpp_codegen_string_literal_from_index(63);
		_stringLiteral64 = il2cpp_codegen_string_literal_from_index(64);
		_stringLiteral59 = il2cpp_codegen_string_literal_from_index(59);
		_stringLiteral10 = il2cpp_codegen_string_literal_from_index(10);
		_stringLiteral55 = il2cpp_codegen_string_literal_from_index(55);
		_stringLiteral56 = il2cpp_codegen_string_literal_from_index(56);
		_stringLiteral28 = il2cpp_codegen_string_literal_from_index(28);
		_stringLiteral62 = il2cpp_codegen_string_literal_from_index(62);
		_stringLiteral30 = il2cpp_codegen_string_literal_from_index(30);
		_stringLiteral26 = il2cpp_codegen_string_literal_from_index(26);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	Vector3U5BU5D_t16* V_1 = {0};
	Vector3U5BU5D_t16* V_2 = {0};
	Vector3U5BU5D_t16* V_3 = {0};
	TransformU5BU5D_t39* V_4 = {0};
	int32_t V_5 = 0;
	Vector3_t14  V_6 = {0};
	Vector3_t14  V_7 = {0};
	Transform_t32 * V_8 = {0};
	{
		Hashtable_t26 * L_0 = ___args;
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		Hashtable_t26 * L_1 = iTween_CleanArgs_m251(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		___args = L_1;
		Hashtable_t26 * L_2 = ___args;
		bool L_3 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(26 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_2, _stringLiteral63);
		if (!L_3)
		{
			goto IL_002e;
		}
	}
	{
		Hashtable_t26 * L_4 = ___args;
		Object_t * L_5 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_4, _stringLiteral63);
		V_0 = ((*(bool*)((bool*)UnBox (L_5, Boolean_t56_il2cpp_TypeInfo_var))));
		goto IL_0034;
	}

IL_002e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Defaults_t12_il2cpp_TypeInfo_var);
		bool L_6 = ((Defaults_t12_StaticFields*)Defaults_t12_il2cpp_TypeInfo_var->static_fields)->___isLocal_6;
		V_0 = L_6;
	}

IL_0034:
	{
		Hashtable_t26 * L_7 = ___args;
		bool L_8 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(26 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_7, _stringLiteral64);
		if (!L_8)
		{
			goto IL_01dc;
		}
	}
	{
		Hashtable_t26 * L_9 = ___args;
		Object_t * L_10 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_9, _stringLiteral64);
		Type_t * L_11 = Object_GetType_m342(L_10, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_12 = Type_GetTypeFromHandle_m343(NULL /*static, unused*/, LoadTypeToken(Vector3U5BU5D_t16_0_0_0_var), /*hidden argument*/NULL);
		if ((!(((Object_t*)(Type_t *)L_11) == ((Object_t*)(Type_t *)L_12))))
		{
			goto IL_008c;
		}
	}
	{
		Hashtable_t26 * L_13 = ___args;
		Object_t * L_14 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_13, _stringLiteral64);
		V_3 = ((Vector3U5BU5D_t16*)Castclass(L_14, Vector3U5BU5D_t16_il2cpp_TypeInfo_var));
		Vector3U5BU5D_t16* L_15 = V_3;
		V_2 = ((Vector3U5BU5D_t16*)SZArrayNew(Vector3U5BU5D_t16_il2cpp_TypeInfo_var, (((int32_t)((int32_t)(((Array_t *)L_15)->max_length))))));
		Vector3U5BU5D_t16* L_16 = V_3;
		Vector3U5BU5D_t16* L_17 = V_2;
		Vector3U5BU5D_t16* L_18 = V_3;
		Array_Copy_m327(NULL /*static, unused*/, (Array_t *)(Array_t *)L_16, (Array_t *)(Array_t *)L_17, (((int32_t)((int32_t)(((Array_t *)L_18)->max_length)))), /*hidden argument*/NULL);
		goto IL_00d8;
	}

IL_008c:
	{
		Hashtable_t26 * L_19 = ___args;
		Object_t * L_20 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_19, _stringLiteral64);
		V_4 = ((TransformU5BU5D_t39*)Castclass(L_20, TransformU5BU5D_t39_il2cpp_TypeInfo_var));
		TransformU5BU5D_t39* L_21 = V_4;
		V_2 = ((Vector3U5BU5D_t16*)SZArrayNew(Vector3U5BU5D_t16_il2cpp_TypeInfo_var, (((int32_t)((int32_t)(((Array_t *)L_21)->max_length))))));
		V_5 = 0;
		goto IL_00cd;
	}

IL_00b0:
	{
		Vector3U5BU5D_t16* L_22 = V_2;
		int32_t L_23 = V_5;
		TransformU5BU5D_t39* L_24 = V_4;
		int32_t L_25 = V_5;
		int32_t L_26 = L_25;
		Vector3_t14  L_27 = Transform_get_position_m369((*(Transform_t32 **)(Transform_t32 **)SZArrayLdElema(L_24, L_26, sizeof(Transform_t32 *))), /*hidden argument*/NULL);
		(*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_22, L_23, sizeof(Vector3_t14 )))) = L_27;
		int32_t L_28 = V_5;
		V_5 = ((int32_t)((int32_t)L_28+(int32_t)1));
	}

IL_00cd:
	{
		int32_t L_29 = V_5;
		TransformU5BU5D_t39* L_30 = V_4;
		if ((((int32_t)L_29) < ((int32_t)(((int32_t)((int32_t)(((Array_t *)L_30)->max_length)))))))
		{
			goto IL_00b0;
		}
	}

IL_00d8:
	{
		Vector3U5BU5D_t16* L_31 = V_2;
		Vector3U5BU5D_t16* L_32 = V_2;
		GameObject_t34 * L_33 = ___target;
		Transform_t32 * L_34 = GameObject_get_transform_m344(L_33, /*hidden argument*/NULL);
		Vector3_t14  L_35 = Transform_get_position_m369(L_34, /*hidden argument*/NULL);
		bool L_36 = Vector3_op_Inequality_m371(NULL /*static, unused*/, (*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_31, ((int32_t)((int32_t)(((int32_t)((int32_t)(((Array_t *)L_32)->max_length))))-(int32_t)1)), sizeof(Vector3_t14 )))), L_35, /*hidden argument*/NULL);
		if (!L_36)
		{
			goto IL_0192;
		}
	}
	{
		Vector3U5BU5D_t16* L_37 = V_2;
		V_1 = ((Vector3U5BU5D_t16*)SZArrayNew(Vector3U5BU5D_t16_il2cpp_TypeInfo_var, ((int32_t)((int32_t)(((int32_t)((int32_t)(((Array_t *)L_37)->max_length))))+(int32_t)1))));
		Vector3U5BU5D_t16* L_38 = V_2;
		Vector3U5BU5D_t16* L_39 = V_1;
		Vector3U5BU5D_t16* L_40 = V_2;
		Array_Copy_m327(NULL /*static, unused*/, (Array_t *)(Array_t *)L_38, (Array_t *)(Array_t *)L_39, (((int32_t)((int32_t)(((Array_t *)L_40)->max_length)))), /*hidden argument*/NULL);
		bool L_41 = V_0;
		if (!L_41)
		{
			goto IL_014f;
		}
	}
	{
		Vector3U5BU5D_t16* L_42 = V_1;
		Vector3U5BU5D_t16* L_43 = V_1;
		GameObject_t34 * L_44 = ___target;
		Transform_t32 * L_45 = GameObject_get_transform_m344(L_44, /*hidden argument*/NULL);
		Vector3_t14  L_46 = Transform_get_localPosition_m372(L_45, /*hidden argument*/NULL);
		(*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_42, ((int32_t)((int32_t)(((int32_t)((int32_t)(((Array_t *)L_43)->max_length))))-(int32_t)1)), sizeof(Vector3_t14 )))) = L_46;
		GameObject_t34 * L_47 = ___target;
		Transform_t32 * L_48 = GameObject_get_transform_m344(L_47, /*hidden argument*/NULL);
		Vector3U5BU5D_t16* L_49 = V_1;
		Transform_set_localPosition_m373(L_48, (*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_49, 0, sizeof(Vector3_t14 )))), /*hidden argument*/NULL);
		goto IL_0181;
	}

IL_014f:
	{
		Vector3U5BU5D_t16* L_50 = V_1;
		Vector3U5BU5D_t16* L_51 = V_1;
		GameObject_t34 * L_52 = ___target;
		Transform_t32 * L_53 = GameObject_get_transform_m344(L_52, /*hidden argument*/NULL);
		Vector3_t14  L_54 = Transform_get_position_m369(L_53, /*hidden argument*/NULL);
		(*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_50, ((int32_t)((int32_t)(((int32_t)((int32_t)(((Array_t *)L_51)->max_length))))-(int32_t)1)), sizeof(Vector3_t14 )))) = L_54;
		GameObject_t34 * L_55 = ___target;
		Transform_t32 * L_56 = GameObject_get_transform_m344(L_55, /*hidden argument*/NULL);
		Vector3U5BU5D_t16* L_57 = V_1;
		Transform_set_position_m374(L_56, (*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_57, 0, sizeof(Vector3_t14 )))), /*hidden argument*/NULL);
	}

IL_0181:
	{
		Hashtable_t26 * L_58 = ___args;
		Vector3U5BU5D_t16* L_59 = V_1;
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(22 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_58, _stringLiteral64, (Object_t *)(Object_t *)L_59);
		goto IL_01d7;
	}

IL_0192:
	{
		bool L_60 = V_0;
		if (!L_60)
		{
			goto IL_01b4;
		}
	}
	{
		GameObject_t34 * L_61 = ___target;
		Transform_t32 * L_62 = GameObject_get_transform_m344(L_61, /*hidden argument*/NULL);
		Vector3U5BU5D_t16* L_63 = V_2;
		Transform_set_localPosition_m373(L_62, (*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_63, 0, sizeof(Vector3_t14 )))), /*hidden argument*/NULL);
		goto IL_01cb;
	}

IL_01b4:
	{
		GameObject_t34 * L_64 = ___target;
		Transform_t32 * L_65 = GameObject_get_transform_m344(L_64, /*hidden argument*/NULL);
		Vector3U5BU5D_t16* L_66 = V_2;
		Transform_set_position_m374(L_65, (*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_66, 0, sizeof(Vector3_t14 )))), /*hidden argument*/NULL);
	}

IL_01cb:
	{
		Hashtable_t26 * L_67 = ___args;
		Vector3U5BU5D_t16* L_68 = V_2;
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(22 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_67, _stringLiteral64, (Object_t *)(Object_t *)L_68);
	}

IL_01d7:
	{
		goto IL_0338;
	}

IL_01dc:
	{
		bool L_69 = V_0;
		if (!L_69)
		{
			goto IL_01f7;
		}
	}
	{
		GameObject_t34 * L_70 = ___target;
		Transform_t32 * L_71 = GameObject_get_transform_m344(L_70, /*hidden argument*/NULL);
		Vector3_t14  L_72 = Transform_get_localPosition_m372(L_71, /*hidden argument*/NULL);
		Vector3_t14  L_73 = L_72;
		V_7 = L_73;
		V_6 = L_73;
		goto IL_0207;
	}

IL_01f7:
	{
		GameObject_t34 * L_74 = ___target;
		Transform_t32 * L_75 = GameObject_get_transform_m344(L_74, /*hidden argument*/NULL);
		Vector3_t14  L_76 = Transform_get_position_m369(L_75, /*hidden argument*/NULL);
		Vector3_t14  L_77 = L_76;
		V_7 = L_77;
		V_6 = L_77;
	}

IL_0207:
	{
		Hashtable_t26 * L_78 = ___args;
		bool L_79 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(26 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_78, _stringLiteral59);
		if (!L_79)
		{
			goto IL_028c;
		}
	}
	{
		Hashtable_t26 * L_80 = ___args;
		Object_t * L_81 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_80, _stringLiteral59);
		Type_t * L_82 = Object_GetType_m342(L_81, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_83 = Type_GetTypeFromHandle_m343(NULL /*static, unused*/, LoadTypeToken(Transform_t32_0_0_0_var), /*hidden argument*/NULL);
		if ((!(((Object_t*)(Type_t *)L_82) == ((Object_t*)(Type_t *)L_83))))
		{
			goto IL_0256;
		}
	}
	{
		Hashtable_t26 * L_84 = ___args;
		Object_t * L_85 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_84, _stringLiteral59);
		V_8 = ((Transform_t32 *)CastclassClass(L_85, Transform_t32_il2cpp_TypeInfo_var));
		Transform_t32 * L_86 = V_8;
		Vector3_t14  L_87 = Transform_get_position_m369(L_86, /*hidden argument*/NULL);
		V_7 = L_87;
		goto IL_0287;
	}

IL_0256:
	{
		Hashtable_t26 * L_88 = ___args;
		Object_t * L_89 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_88, _stringLiteral59);
		Type_t * L_90 = Object_GetType_m342(L_89, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_91 = Type_GetTypeFromHandle_m343(NULL /*static, unused*/, LoadTypeToken(Vector3_t14_0_0_0_var), /*hidden argument*/NULL);
		if ((!(((Object_t*)(Type_t *)L_90) == ((Object_t*)(Type_t *)L_91))))
		{
			goto IL_0287;
		}
	}
	{
		Hashtable_t26 * L_92 = ___args;
		Object_t * L_93 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_92, _stringLiteral59);
		V_7 = ((*(Vector3_t14 *)((Vector3_t14 *)UnBox (L_93, Vector3_t14_il2cpp_TypeInfo_var))));
	}

IL_0287:
	{
		goto IL_0301;
	}

IL_028c:
	{
		Hashtable_t26 * L_94 = ___args;
		bool L_95 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(26 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_94, _stringLiteral10);
		if (!L_95)
		{
			goto IL_02b3;
		}
	}
	{
		Hashtable_t26 * L_96 = ___args;
		Object_t * L_97 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_96, _stringLiteral10);
		(&V_7)->___x_1 = ((*(float*)((float*)UnBox (L_97, Single_t51_il2cpp_TypeInfo_var))));
	}

IL_02b3:
	{
		Hashtable_t26 * L_98 = ___args;
		bool L_99 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(26 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_98, _stringLiteral55);
		if (!L_99)
		{
			goto IL_02da;
		}
	}
	{
		Hashtable_t26 * L_100 = ___args;
		Object_t * L_101 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_100, _stringLiteral55);
		(&V_7)->___y_2 = ((*(float*)((float*)UnBox (L_101, Single_t51_il2cpp_TypeInfo_var))));
	}

IL_02da:
	{
		Hashtable_t26 * L_102 = ___args;
		bool L_103 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(26 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_102, _stringLiteral56);
		if (!L_103)
		{
			goto IL_0301;
		}
	}
	{
		Hashtable_t26 * L_104 = ___args;
		Object_t * L_105 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_104, _stringLiteral56);
		(&V_7)->___z_3 = ((*(float*)((float*)UnBox (L_105, Single_t51_il2cpp_TypeInfo_var))));
	}

IL_0301:
	{
		bool L_106 = V_0;
		if (!L_106)
		{
			goto IL_0319;
		}
	}
	{
		GameObject_t34 * L_107 = ___target;
		Transform_t32 * L_108 = GameObject_get_transform_m344(L_107, /*hidden argument*/NULL);
		Vector3_t14  L_109 = V_7;
		Transform_set_localPosition_m373(L_108, L_109, /*hidden argument*/NULL);
		goto IL_0326;
	}

IL_0319:
	{
		GameObject_t34 * L_110 = ___target;
		Transform_t32 * L_111 = GameObject_get_transform_m344(L_110, /*hidden argument*/NULL);
		Vector3_t14  L_112 = V_7;
		Transform_set_position_m374(L_111, L_112, /*hidden argument*/NULL);
	}

IL_0326:
	{
		Hashtable_t26 * L_113 = ___args;
		Vector3_t14  L_114 = V_6;
		Vector3_t14  L_115 = L_114;
		Object_t * L_116 = Box(Vector3_t14_il2cpp_TypeInfo_var, &L_115);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(22 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_113, _stringLiteral59, L_116);
	}

IL_0338:
	{
		Hashtable_t26 * L_117 = ___args;
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(22 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_117, _stringLiteral28, _stringLiteral62);
		Hashtable_t26 * L_118 = ___args;
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(22 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_118, _stringLiteral30, _stringLiteral26);
		GameObject_t34 * L_119 = ___target;
		Hashtable_t26 * L_120 = ___args;
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		iTween_Launch_m250(NULL /*static, unused*/, L_119, L_120, /*hidden argument*/NULL);
		return;
	}
}
// System.Void iTween::MoveAdd(UnityEngine.GameObject,UnityEngine.Vector3,System.Single)
extern TypeInfo* ObjectU5BU5D_t41_il2cpp_TypeInfo_var;
extern TypeInfo* Vector3_t14_il2cpp_TypeInfo_var;
extern TypeInfo* Single_t51_il2cpp_TypeInfo_var;
extern TypeInfo* iTween_t23_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral21;
extern Il2CppCodeGenString* _stringLiteral22;
extern "C" void iTween_MoveAdd_m72 (Object_t * __this /* static, unused */, GameObject_t34 * ___target, Vector3_t14  ___amount, float ___time, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t41_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5);
		Vector3_t14_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13);
		Single_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		iTween_t23_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		_stringLiteral21 = il2cpp_codegen_string_literal_from_index(21);
		_stringLiteral22 = il2cpp_codegen_string_literal_from_index(22);
		s_Il2CppMethodIntialized = true;
	}
	{
		GameObject_t34 * L_0 = ___target;
		ObjectU5BU5D_t41* L_1 = ((ObjectU5BU5D_t41*)SZArrayNew(ObjectU5BU5D_t41_il2cpp_TypeInfo_var, 4));
		ArrayElementTypeCheck (L_1, _stringLiteral21);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_1, 0, sizeof(Object_t *))) = (Object_t *)_stringLiteral21;
		ObjectU5BU5D_t41* L_2 = L_1;
		Vector3_t14  L_3 = ___amount;
		Vector3_t14  L_4 = L_3;
		Object_t * L_5 = Box(Vector3_t14_il2cpp_TypeInfo_var, &L_4);
		ArrayElementTypeCheck (L_2, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1, sizeof(Object_t *))) = (Object_t *)L_5;
		ObjectU5BU5D_t41* L_6 = L_2;
		ArrayElementTypeCheck (L_6, _stringLiteral22);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 2, sizeof(Object_t *))) = (Object_t *)_stringLiteral22;
		ObjectU5BU5D_t41* L_7 = L_6;
		float L_8 = ___time;
		float L_9 = L_8;
		Object_t * L_10 = Box(Single_t51_il2cpp_TypeInfo_var, &L_9);
		ArrayElementTypeCheck (L_7, L_10);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_7, 3, sizeof(Object_t *))) = (Object_t *)L_10;
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		Hashtable_t26 * L_11 = iTween_Hash_m238(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		iTween_MoveAdd_m73(NULL /*static, unused*/, L_0, L_11, /*hidden argument*/NULL);
		return;
	}
}
// System.Void iTween::MoveAdd(UnityEngine.GameObject,System.Collections.Hashtable)
extern TypeInfo* iTween_t23_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral28;
extern Il2CppCodeGenString* _stringLiteral62;
extern Il2CppCodeGenString* _stringLiteral30;
extern Il2CppCodeGenString* _stringLiteral65;
extern "C" void iTween_MoveAdd_m73 (Object_t * __this /* static, unused */, GameObject_t34 * ___target, Hashtable_t26 * ___args, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		iTween_t23_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		_stringLiteral28 = il2cpp_codegen_string_literal_from_index(28);
		_stringLiteral62 = il2cpp_codegen_string_literal_from_index(62);
		_stringLiteral30 = il2cpp_codegen_string_literal_from_index(30);
		_stringLiteral65 = il2cpp_codegen_string_literal_from_index(65);
		s_Il2CppMethodIntialized = true;
	}
	{
		Hashtable_t26 * L_0 = ___args;
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		Hashtable_t26 * L_1 = iTween_CleanArgs_m251(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		___args = L_1;
		Hashtable_t26 * L_2 = ___args;
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(22 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_2, _stringLiteral28, _stringLiteral62);
		Hashtable_t26 * L_3 = ___args;
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(22 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_3, _stringLiteral30, _stringLiteral65);
		GameObject_t34 * L_4 = ___target;
		Hashtable_t26 * L_5 = ___args;
		iTween_Launch_m250(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void iTween::MoveBy(UnityEngine.GameObject,UnityEngine.Vector3,System.Single)
extern TypeInfo* ObjectU5BU5D_t41_il2cpp_TypeInfo_var;
extern TypeInfo* Vector3_t14_il2cpp_TypeInfo_var;
extern TypeInfo* Single_t51_il2cpp_TypeInfo_var;
extern TypeInfo* iTween_t23_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral21;
extern Il2CppCodeGenString* _stringLiteral22;
extern "C" void iTween_MoveBy_m74 (Object_t * __this /* static, unused */, GameObject_t34 * ___target, Vector3_t14  ___amount, float ___time, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t41_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5);
		Vector3_t14_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13);
		Single_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		iTween_t23_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		_stringLiteral21 = il2cpp_codegen_string_literal_from_index(21);
		_stringLiteral22 = il2cpp_codegen_string_literal_from_index(22);
		s_Il2CppMethodIntialized = true;
	}
	{
		GameObject_t34 * L_0 = ___target;
		ObjectU5BU5D_t41* L_1 = ((ObjectU5BU5D_t41*)SZArrayNew(ObjectU5BU5D_t41_il2cpp_TypeInfo_var, 4));
		ArrayElementTypeCheck (L_1, _stringLiteral21);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_1, 0, sizeof(Object_t *))) = (Object_t *)_stringLiteral21;
		ObjectU5BU5D_t41* L_2 = L_1;
		Vector3_t14  L_3 = ___amount;
		Vector3_t14  L_4 = L_3;
		Object_t * L_5 = Box(Vector3_t14_il2cpp_TypeInfo_var, &L_4);
		ArrayElementTypeCheck (L_2, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1, sizeof(Object_t *))) = (Object_t *)L_5;
		ObjectU5BU5D_t41* L_6 = L_2;
		ArrayElementTypeCheck (L_6, _stringLiteral22);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 2, sizeof(Object_t *))) = (Object_t *)_stringLiteral22;
		ObjectU5BU5D_t41* L_7 = L_6;
		float L_8 = ___time;
		float L_9 = L_8;
		Object_t * L_10 = Box(Single_t51_il2cpp_TypeInfo_var, &L_9);
		ArrayElementTypeCheck (L_7, L_10);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_7, 3, sizeof(Object_t *))) = (Object_t *)L_10;
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		Hashtable_t26 * L_11 = iTween_Hash_m238(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		iTween_MoveBy_m75(NULL /*static, unused*/, L_0, L_11, /*hidden argument*/NULL);
		return;
	}
}
// System.Void iTween::MoveBy(UnityEngine.GameObject,System.Collections.Hashtable)
extern TypeInfo* iTween_t23_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral28;
extern Il2CppCodeGenString* _stringLiteral62;
extern Il2CppCodeGenString* _stringLiteral30;
extern Il2CppCodeGenString* _stringLiteral66;
extern "C" void iTween_MoveBy_m75 (Object_t * __this /* static, unused */, GameObject_t34 * ___target, Hashtable_t26 * ___args, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		iTween_t23_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		_stringLiteral28 = il2cpp_codegen_string_literal_from_index(28);
		_stringLiteral62 = il2cpp_codegen_string_literal_from_index(62);
		_stringLiteral30 = il2cpp_codegen_string_literal_from_index(30);
		_stringLiteral66 = il2cpp_codegen_string_literal_from_index(66);
		s_Il2CppMethodIntialized = true;
	}
	{
		Hashtable_t26 * L_0 = ___args;
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		Hashtable_t26 * L_1 = iTween_CleanArgs_m251(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		___args = L_1;
		Hashtable_t26 * L_2 = ___args;
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(22 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_2, _stringLiteral28, _stringLiteral62);
		Hashtable_t26 * L_3 = ___args;
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(22 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_3, _stringLiteral30, _stringLiteral66);
		GameObject_t34 * L_4 = ___target;
		Hashtable_t26 * L_5 = ___args;
		iTween_Launch_m250(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void iTween::ScaleTo(UnityEngine.GameObject,UnityEngine.Vector3,System.Single)
extern TypeInfo* ObjectU5BU5D_t41_il2cpp_TypeInfo_var;
extern TypeInfo* Vector3_t14_il2cpp_TypeInfo_var;
extern TypeInfo* Single_t51_il2cpp_TypeInfo_var;
extern TypeInfo* iTween_t23_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral61;
extern Il2CppCodeGenString* _stringLiteral22;
extern "C" void iTween_ScaleTo_m76 (Object_t * __this /* static, unused */, GameObject_t34 * ___target, Vector3_t14  ___scale, float ___time, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t41_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5);
		Vector3_t14_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13);
		Single_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		iTween_t23_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		_stringLiteral61 = il2cpp_codegen_string_literal_from_index(61);
		_stringLiteral22 = il2cpp_codegen_string_literal_from_index(22);
		s_Il2CppMethodIntialized = true;
	}
	{
		GameObject_t34 * L_0 = ___target;
		ObjectU5BU5D_t41* L_1 = ((ObjectU5BU5D_t41*)SZArrayNew(ObjectU5BU5D_t41_il2cpp_TypeInfo_var, 4));
		ArrayElementTypeCheck (L_1, _stringLiteral61);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_1, 0, sizeof(Object_t *))) = (Object_t *)_stringLiteral61;
		ObjectU5BU5D_t41* L_2 = L_1;
		Vector3_t14  L_3 = ___scale;
		Vector3_t14  L_4 = L_3;
		Object_t * L_5 = Box(Vector3_t14_il2cpp_TypeInfo_var, &L_4);
		ArrayElementTypeCheck (L_2, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1, sizeof(Object_t *))) = (Object_t *)L_5;
		ObjectU5BU5D_t41* L_6 = L_2;
		ArrayElementTypeCheck (L_6, _stringLiteral22);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 2, sizeof(Object_t *))) = (Object_t *)_stringLiteral22;
		ObjectU5BU5D_t41* L_7 = L_6;
		float L_8 = ___time;
		float L_9 = L_8;
		Object_t * L_10 = Box(Single_t51_il2cpp_TypeInfo_var, &L_9);
		ArrayElementTypeCheck (L_7, L_10);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_7, 3, sizeof(Object_t *))) = (Object_t *)L_10;
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		Hashtable_t26 * L_11 = iTween_Hash_m238(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		iTween_ScaleTo_m77(NULL /*static, unused*/, L_0, L_11, /*hidden argument*/NULL);
		return;
	}
}
// System.Void iTween::ScaleTo(UnityEngine.GameObject,System.Collections.Hashtable)
extern const Il2CppType* Transform_t32_0_0_0_var;
extern TypeInfo* iTween_t23_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* Transform_t32_il2cpp_TypeInfo_var;
extern TypeInfo* Vector3_t14_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral61;
extern Il2CppCodeGenString* _stringLiteral59;
extern Il2CppCodeGenString* _stringLiteral57;
extern Il2CppCodeGenString* _stringLiteral28;
extern Il2CppCodeGenString* _stringLiteral30;
extern Il2CppCodeGenString* _stringLiteral26;
extern "C" void iTween_ScaleTo_m77 (Object_t * __this /* static, unused */, GameObject_t34 * ___target, Hashtable_t26 * ___args, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Transform_t32_0_0_0_var = il2cpp_codegen_type_from_index(30);
		iTween_t23_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		Transform_t32_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(30);
		Vector3_t14_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13);
		_stringLiteral61 = il2cpp_codegen_string_literal_from_index(61);
		_stringLiteral59 = il2cpp_codegen_string_literal_from_index(59);
		_stringLiteral57 = il2cpp_codegen_string_literal_from_index(57);
		_stringLiteral28 = il2cpp_codegen_string_literal_from_index(28);
		_stringLiteral30 = il2cpp_codegen_string_literal_from_index(30);
		_stringLiteral26 = il2cpp_codegen_string_literal_from_index(26);
		s_Il2CppMethodIntialized = true;
	}
	Transform_t32 * V_0 = {0};
	Vector3_t14  V_1 = {0};
	Vector3_t14  V_2 = {0};
	Vector3_t14  V_3 = {0};
	Vector3_t14  V_4 = {0};
	Vector3_t14  V_5 = {0};
	Vector3_t14  V_6 = {0};
	Vector3_t14  V_7 = {0};
	Vector3_t14  V_8 = {0};
	Vector3_t14  V_9 = {0};
	{
		Hashtable_t26 * L_0 = ___args;
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		Hashtable_t26 * L_1 = iTween_CleanArgs_m251(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		___args = L_1;
		Hashtable_t26 * L_2 = ___args;
		bool L_3 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(26 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_2, _stringLiteral61);
		if (!L_3)
		{
			goto IL_010b;
		}
	}
	{
		Hashtable_t26 * L_4 = ___args;
		Object_t * L_5 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_4, _stringLiteral61);
		Type_t * L_6 = Object_GetType_m342(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_7 = Type_GetTypeFromHandle_m343(NULL /*static, unused*/, LoadTypeToken(Transform_t32_0_0_0_var), /*hidden argument*/NULL);
		if ((!(((Object_t*)(Type_t *)L_6) == ((Object_t*)(Type_t *)L_7))))
		{
			goto IL_010b;
		}
	}
	{
		Hashtable_t26 * L_8 = ___args;
		Object_t * L_9 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_8, _stringLiteral61);
		V_0 = ((Transform_t32 *)CastclassClass(L_9, Transform_t32_il2cpp_TypeInfo_var));
		Hashtable_t26 * L_10 = ___args;
		Transform_t32 * L_11 = V_0;
		Vector3_t14  L_12 = Transform_get_position_m369(L_11, /*hidden argument*/NULL);
		V_1 = L_12;
		float L_13 = ((&V_1)->___x_1);
		Transform_t32 * L_14 = V_0;
		Vector3_t14  L_15 = Transform_get_position_m369(L_14, /*hidden argument*/NULL);
		V_2 = L_15;
		float L_16 = ((&V_2)->___y_2);
		Transform_t32 * L_17 = V_0;
		Vector3_t14  L_18 = Transform_get_position_m369(L_17, /*hidden argument*/NULL);
		V_3 = L_18;
		float L_19 = ((&V_3)->___z_3);
		Vector3_t14  L_20 = {0};
		Vector3__ctor_m306(&L_20, L_13, L_16, L_19, /*hidden argument*/NULL);
		Vector3_t14  L_21 = L_20;
		Object_t * L_22 = Box(Vector3_t14_il2cpp_TypeInfo_var, &L_21);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(22 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_10, _stringLiteral59, L_22);
		Hashtable_t26 * L_23 = ___args;
		Transform_t32 * L_24 = V_0;
		Vector3_t14  L_25 = Transform_get_eulerAngles_m362(L_24, /*hidden argument*/NULL);
		V_4 = L_25;
		float L_26 = ((&V_4)->___x_1);
		Transform_t32 * L_27 = V_0;
		Vector3_t14  L_28 = Transform_get_eulerAngles_m362(L_27, /*hidden argument*/NULL);
		V_5 = L_28;
		float L_29 = ((&V_5)->___y_2);
		Transform_t32 * L_30 = V_0;
		Vector3_t14  L_31 = Transform_get_eulerAngles_m362(L_30, /*hidden argument*/NULL);
		V_6 = L_31;
		float L_32 = ((&V_6)->___z_3);
		Vector3_t14  L_33 = {0};
		Vector3__ctor_m306(&L_33, L_26, L_29, L_32, /*hidden argument*/NULL);
		Vector3_t14  L_34 = L_33;
		Object_t * L_35 = Box(Vector3_t14_il2cpp_TypeInfo_var, &L_34);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(22 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_23, _stringLiteral57, L_35);
		Hashtable_t26 * L_36 = ___args;
		Transform_t32 * L_37 = V_0;
		Vector3_t14  L_38 = Transform_get_localScale_m370(L_37, /*hidden argument*/NULL);
		V_7 = L_38;
		float L_39 = ((&V_7)->___x_1);
		Transform_t32 * L_40 = V_0;
		Vector3_t14  L_41 = Transform_get_localScale_m370(L_40, /*hidden argument*/NULL);
		V_8 = L_41;
		float L_42 = ((&V_8)->___y_2);
		Transform_t32 * L_43 = V_0;
		Vector3_t14  L_44 = Transform_get_localScale_m370(L_43, /*hidden argument*/NULL);
		V_9 = L_44;
		float L_45 = ((&V_9)->___z_3);
		Vector3_t14  L_46 = {0};
		Vector3__ctor_m306(&L_46, L_39, L_42, L_45, /*hidden argument*/NULL);
		Vector3_t14  L_47 = L_46;
		Object_t * L_48 = Box(Vector3_t14_il2cpp_TypeInfo_var, &L_47);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(22 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_36, _stringLiteral61, L_48);
	}

IL_010b:
	{
		Hashtable_t26 * L_49 = ___args;
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(22 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_49, _stringLiteral28, _stringLiteral61);
		Hashtable_t26 * L_50 = ___args;
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(22 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_50, _stringLiteral30, _stringLiteral26);
		GameObject_t34 * L_51 = ___target;
		Hashtable_t26 * L_52 = ___args;
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		iTween_Launch_m250(NULL /*static, unused*/, L_51, L_52, /*hidden argument*/NULL);
		return;
	}
}
// System.Void iTween::ScaleFrom(UnityEngine.GameObject,UnityEngine.Vector3,System.Single)
extern TypeInfo* ObjectU5BU5D_t41_il2cpp_TypeInfo_var;
extern TypeInfo* Vector3_t14_il2cpp_TypeInfo_var;
extern TypeInfo* Single_t51_il2cpp_TypeInfo_var;
extern TypeInfo* iTween_t23_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral61;
extern Il2CppCodeGenString* _stringLiteral22;
extern "C" void iTween_ScaleFrom_m78 (Object_t * __this /* static, unused */, GameObject_t34 * ___target, Vector3_t14  ___scale, float ___time, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t41_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5);
		Vector3_t14_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13);
		Single_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		iTween_t23_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		_stringLiteral61 = il2cpp_codegen_string_literal_from_index(61);
		_stringLiteral22 = il2cpp_codegen_string_literal_from_index(22);
		s_Il2CppMethodIntialized = true;
	}
	{
		GameObject_t34 * L_0 = ___target;
		ObjectU5BU5D_t41* L_1 = ((ObjectU5BU5D_t41*)SZArrayNew(ObjectU5BU5D_t41_il2cpp_TypeInfo_var, 4));
		ArrayElementTypeCheck (L_1, _stringLiteral61);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_1, 0, sizeof(Object_t *))) = (Object_t *)_stringLiteral61;
		ObjectU5BU5D_t41* L_2 = L_1;
		Vector3_t14  L_3 = ___scale;
		Vector3_t14  L_4 = L_3;
		Object_t * L_5 = Box(Vector3_t14_il2cpp_TypeInfo_var, &L_4);
		ArrayElementTypeCheck (L_2, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1, sizeof(Object_t *))) = (Object_t *)L_5;
		ObjectU5BU5D_t41* L_6 = L_2;
		ArrayElementTypeCheck (L_6, _stringLiteral22);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 2, sizeof(Object_t *))) = (Object_t *)_stringLiteral22;
		ObjectU5BU5D_t41* L_7 = L_6;
		float L_8 = ___time;
		float L_9 = L_8;
		Object_t * L_10 = Box(Single_t51_il2cpp_TypeInfo_var, &L_9);
		ArrayElementTypeCheck (L_7, L_10);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_7, 3, sizeof(Object_t *))) = (Object_t *)L_10;
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		Hashtable_t26 * L_11 = iTween_Hash_m238(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		iTween_ScaleFrom_m79(NULL /*static, unused*/, L_0, L_11, /*hidden argument*/NULL);
		return;
	}
}
// System.Void iTween::ScaleFrom(UnityEngine.GameObject,System.Collections.Hashtable)
extern const Il2CppType* Transform_t32_0_0_0_var;
extern const Il2CppType* Vector3_t14_0_0_0_var;
extern TypeInfo* iTween_t23_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* Transform_t32_il2cpp_TypeInfo_var;
extern TypeInfo* Vector3_t14_il2cpp_TypeInfo_var;
extern TypeInfo* Single_t51_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral61;
extern Il2CppCodeGenString* _stringLiteral10;
extern Il2CppCodeGenString* _stringLiteral55;
extern Il2CppCodeGenString* _stringLiteral56;
extern Il2CppCodeGenString* _stringLiteral28;
extern Il2CppCodeGenString* _stringLiteral30;
extern Il2CppCodeGenString* _stringLiteral26;
extern "C" void iTween_ScaleFrom_m79 (Object_t * __this /* static, unused */, GameObject_t34 * ___target, Hashtable_t26 * ___args, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Transform_t32_0_0_0_var = il2cpp_codegen_type_from_index(30);
		Vector3_t14_0_0_0_var = il2cpp_codegen_type_from_index(13);
		iTween_t23_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		Transform_t32_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(30);
		Vector3_t14_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13);
		Single_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		_stringLiteral61 = il2cpp_codegen_string_literal_from_index(61);
		_stringLiteral10 = il2cpp_codegen_string_literal_from_index(10);
		_stringLiteral55 = il2cpp_codegen_string_literal_from_index(55);
		_stringLiteral56 = il2cpp_codegen_string_literal_from_index(56);
		_stringLiteral28 = il2cpp_codegen_string_literal_from_index(28);
		_stringLiteral30 = il2cpp_codegen_string_literal_from_index(30);
		_stringLiteral26 = il2cpp_codegen_string_literal_from_index(26);
		s_Il2CppMethodIntialized = true;
	}
	Vector3_t14  V_0 = {0};
	Vector3_t14  V_1 = {0};
	Transform_t32 * V_2 = {0};
	{
		Hashtable_t26 * L_0 = ___args;
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		Hashtable_t26 * L_1 = iTween_CleanArgs_m251(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		___args = L_1;
		GameObject_t34 * L_2 = ___target;
		Transform_t32 * L_3 = GameObject_get_transform_m344(L_2, /*hidden argument*/NULL);
		Vector3_t14  L_4 = Transform_get_localScale_m370(L_3, /*hidden argument*/NULL);
		Vector3_t14  L_5 = L_4;
		V_1 = L_5;
		V_0 = L_5;
		Hashtable_t26 * L_6 = ___args;
		bool L_7 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(26 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_6, _stringLiteral61);
		if (!L_7)
		{
			goto IL_0097;
		}
	}
	{
		Hashtable_t26 * L_8 = ___args;
		Object_t * L_9 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_8, _stringLiteral61);
		Type_t * L_10 = Object_GetType_m342(L_9, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_11 = Type_GetTypeFromHandle_m343(NULL /*static, unused*/, LoadTypeToken(Transform_t32_0_0_0_var), /*hidden argument*/NULL);
		if ((!(((Object_t*)(Type_t *)L_10) == ((Object_t*)(Type_t *)L_11))))
		{
			goto IL_0062;
		}
	}
	{
		Hashtable_t26 * L_12 = ___args;
		Object_t * L_13 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_12, _stringLiteral61);
		V_2 = ((Transform_t32 *)CastclassClass(L_13, Transform_t32_il2cpp_TypeInfo_var));
		Transform_t32 * L_14 = V_2;
		Vector3_t14  L_15 = Transform_get_localScale_m370(L_14, /*hidden argument*/NULL);
		V_1 = L_15;
		goto IL_0092;
	}

IL_0062:
	{
		Hashtable_t26 * L_16 = ___args;
		Object_t * L_17 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_16, _stringLiteral61);
		Type_t * L_18 = Object_GetType_m342(L_17, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_19 = Type_GetTypeFromHandle_m343(NULL /*static, unused*/, LoadTypeToken(Vector3_t14_0_0_0_var), /*hidden argument*/NULL);
		if ((!(((Object_t*)(Type_t *)L_18) == ((Object_t*)(Type_t *)L_19))))
		{
			goto IL_0092;
		}
	}
	{
		Hashtable_t26 * L_20 = ___args;
		Object_t * L_21 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_20, _stringLiteral61);
		V_1 = ((*(Vector3_t14 *)((Vector3_t14 *)UnBox (L_21, Vector3_t14_il2cpp_TypeInfo_var))));
	}

IL_0092:
	{
		goto IL_010c;
	}

IL_0097:
	{
		Hashtable_t26 * L_22 = ___args;
		bool L_23 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(26 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_22, _stringLiteral10);
		if (!L_23)
		{
			goto IL_00be;
		}
	}
	{
		Hashtable_t26 * L_24 = ___args;
		Object_t * L_25 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_24, _stringLiteral10);
		(&V_1)->___x_1 = ((*(float*)((float*)UnBox (L_25, Single_t51_il2cpp_TypeInfo_var))));
	}

IL_00be:
	{
		Hashtable_t26 * L_26 = ___args;
		bool L_27 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(26 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_26, _stringLiteral55);
		if (!L_27)
		{
			goto IL_00e5;
		}
	}
	{
		Hashtable_t26 * L_28 = ___args;
		Object_t * L_29 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_28, _stringLiteral55);
		(&V_1)->___y_2 = ((*(float*)((float*)UnBox (L_29, Single_t51_il2cpp_TypeInfo_var))));
	}

IL_00e5:
	{
		Hashtable_t26 * L_30 = ___args;
		bool L_31 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(26 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_30, _stringLiteral56);
		if (!L_31)
		{
			goto IL_010c;
		}
	}
	{
		Hashtable_t26 * L_32 = ___args;
		Object_t * L_33 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_32, _stringLiteral56);
		(&V_1)->___z_3 = ((*(float*)((float*)UnBox (L_33, Single_t51_il2cpp_TypeInfo_var))));
	}

IL_010c:
	{
		GameObject_t34 * L_34 = ___target;
		Transform_t32 * L_35 = GameObject_get_transform_m344(L_34, /*hidden argument*/NULL);
		Vector3_t14  L_36 = V_1;
		Transform_set_localScale_m375(L_35, L_36, /*hidden argument*/NULL);
		Hashtable_t26 * L_37 = ___args;
		Vector3_t14  L_38 = V_0;
		Vector3_t14  L_39 = L_38;
		Object_t * L_40 = Box(Vector3_t14_il2cpp_TypeInfo_var, &L_39);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(22 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_37, _stringLiteral61, L_40);
		Hashtable_t26 * L_41 = ___args;
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(22 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_41, _stringLiteral28, _stringLiteral61);
		Hashtable_t26 * L_42 = ___args;
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(22 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_42, _stringLiteral30, _stringLiteral26);
		GameObject_t34 * L_43 = ___target;
		Hashtable_t26 * L_44 = ___args;
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		iTween_Launch_m250(NULL /*static, unused*/, L_43, L_44, /*hidden argument*/NULL);
		return;
	}
}
// System.Void iTween::ScaleAdd(UnityEngine.GameObject,UnityEngine.Vector3,System.Single)
extern TypeInfo* ObjectU5BU5D_t41_il2cpp_TypeInfo_var;
extern TypeInfo* Vector3_t14_il2cpp_TypeInfo_var;
extern TypeInfo* Single_t51_il2cpp_TypeInfo_var;
extern TypeInfo* iTween_t23_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral21;
extern Il2CppCodeGenString* _stringLiteral22;
extern "C" void iTween_ScaleAdd_m80 (Object_t * __this /* static, unused */, GameObject_t34 * ___target, Vector3_t14  ___amount, float ___time, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t41_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5);
		Vector3_t14_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13);
		Single_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		iTween_t23_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		_stringLiteral21 = il2cpp_codegen_string_literal_from_index(21);
		_stringLiteral22 = il2cpp_codegen_string_literal_from_index(22);
		s_Il2CppMethodIntialized = true;
	}
	{
		GameObject_t34 * L_0 = ___target;
		ObjectU5BU5D_t41* L_1 = ((ObjectU5BU5D_t41*)SZArrayNew(ObjectU5BU5D_t41_il2cpp_TypeInfo_var, 4));
		ArrayElementTypeCheck (L_1, _stringLiteral21);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_1, 0, sizeof(Object_t *))) = (Object_t *)_stringLiteral21;
		ObjectU5BU5D_t41* L_2 = L_1;
		Vector3_t14  L_3 = ___amount;
		Vector3_t14  L_4 = L_3;
		Object_t * L_5 = Box(Vector3_t14_il2cpp_TypeInfo_var, &L_4);
		ArrayElementTypeCheck (L_2, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1, sizeof(Object_t *))) = (Object_t *)L_5;
		ObjectU5BU5D_t41* L_6 = L_2;
		ArrayElementTypeCheck (L_6, _stringLiteral22);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 2, sizeof(Object_t *))) = (Object_t *)_stringLiteral22;
		ObjectU5BU5D_t41* L_7 = L_6;
		float L_8 = ___time;
		float L_9 = L_8;
		Object_t * L_10 = Box(Single_t51_il2cpp_TypeInfo_var, &L_9);
		ArrayElementTypeCheck (L_7, L_10);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_7, 3, sizeof(Object_t *))) = (Object_t *)L_10;
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		Hashtable_t26 * L_11 = iTween_Hash_m238(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		iTween_ScaleAdd_m81(NULL /*static, unused*/, L_0, L_11, /*hidden argument*/NULL);
		return;
	}
}
// System.Void iTween::ScaleAdd(UnityEngine.GameObject,System.Collections.Hashtable)
extern TypeInfo* iTween_t23_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral28;
extern Il2CppCodeGenString* _stringLiteral61;
extern Il2CppCodeGenString* _stringLiteral30;
extern Il2CppCodeGenString* _stringLiteral65;
extern "C" void iTween_ScaleAdd_m81 (Object_t * __this /* static, unused */, GameObject_t34 * ___target, Hashtable_t26 * ___args, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		iTween_t23_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		_stringLiteral28 = il2cpp_codegen_string_literal_from_index(28);
		_stringLiteral61 = il2cpp_codegen_string_literal_from_index(61);
		_stringLiteral30 = il2cpp_codegen_string_literal_from_index(30);
		_stringLiteral65 = il2cpp_codegen_string_literal_from_index(65);
		s_Il2CppMethodIntialized = true;
	}
	{
		Hashtable_t26 * L_0 = ___args;
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		Hashtable_t26 * L_1 = iTween_CleanArgs_m251(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		___args = L_1;
		Hashtable_t26 * L_2 = ___args;
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(22 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_2, _stringLiteral28, _stringLiteral61);
		Hashtable_t26 * L_3 = ___args;
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(22 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_3, _stringLiteral30, _stringLiteral65);
		GameObject_t34 * L_4 = ___target;
		Hashtable_t26 * L_5 = ___args;
		iTween_Launch_m250(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void iTween::ScaleBy(UnityEngine.GameObject,UnityEngine.Vector3,System.Single)
extern TypeInfo* ObjectU5BU5D_t41_il2cpp_TypeInfo_var;
extern TypeInfo* Vector3_t14_il2cpp_TypeInfo_var;
extern TypeInfo* Single_t51_il2cpp_TypeInfo_var;
extern TypeInfo* iTween_t23_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral21;
extern Il2CppCodeGenString* _stringLiteral22;
extern "C" void iTween_ScaleBy_m82 (Object_t * __this /* static, unused */, GameObject_t34 * ___target, Vector3_t14  ___amount, float ___time, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t41_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5);
		Vector3_t14_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13);
		Single_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		iTween_t23_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		_stringLiteral21 = il2cpp_codegen_string_literal_from_index(21);
		_stringLiteral22 = il2cpp_codegen_string_literal_from_index(22);
		s_Il2CppMethodIntialized = true;
	}
	{
		GameObject_t34 * L_0 = ___target;
		ObjectU5BU5D_t41* L_1 = ((ObjectU5BU5D_t41*)SZArrayNew(ObjectU5BU5D_t41_il2cpp_TypeInfo_var, 4));
		ArrayElementTypeCheck (L_1, _stringLiteral21);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_1, 0, sizeof(Object_t *))) = (Object_t *)_stringLiteral21;
		ObjectU5BU5D_t41* L_2 = L_1;
		Vector3_t14  L_3 = ___amount;
		Vector3_t14  L_4 = L_3;
		Object_t * L_5 = Box(Vector3_t14_il2cpp_TypeInfo_var, &L_4);
		ArrayElementTypeCheck (L_2, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1, sizeof(Object_t *))) = (Object_t *)L_5;
		ObjectU5BU5D_t41* L_6 = L_2;
		ArrayElementTypeCheck (L_6, _stringLiteral22);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 2, sizeof(Object_t *))) = (Object_t *)_stringLiteral22;
		ObjectU5BU5D_t41* L_7 = L_6;
		float L_8 = ___time;
		float L_9 = L_8;
		Object_t * L_10 = Box(Single_t51_il2cpp_TypeInfo_var, &L_9);
		ArrayElementTypeCheck (L_7, L_10);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_7, 3, sizeof(Object_t *))) = (Object_t *)L_10;
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		Hashtable_t26 * L_11 = iTween_Hash_m238(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		iTween_ScaleBy_m83(NULL /*static, unused*/, L_0, L_11, /*hidden argument*/NULL);
		return;
	}
}
// System.Void iTween::ScaleBy(UnityEngine.GameObject,System.Collections.Hashtable)
extern TypeInfo* iTween_t23_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral28;
extern Il2CppCodeGenString* _stringLiteral61;
extern Il2CppCodeGenString* _stringLiteral30;
extern Il2CppCodeGenString* _stringLiteral66;
extern "C" void iTween_ScaleBy_m83 (Object_t * __this /* static, unused */, GameObject_t34 * ___target, Hashtable_t26 * ___args, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		iTween_t23_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		_stringLiteral28 = il2cpp_codegen_string_literal_from_index(28);
		_stringLiteral61 = il2cpp_codegen_string_literal_from_index(61);
		_stringLiteral30 = il2cpp_codegen_string_literal_from_index(30);
		_stringLiteral66 = il2cpp_codegen_string_literal_from_index(66);
		s_Il2CppMethodIntialized = true;
	}
	{
		Hashtable_t26 * L_0 = ___args;
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		Hashtable_t26 * L_1 = iTween_CleanArgs_m251(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		___args = L_1;
		Hashtable_t26 * L_2 = ___args;
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(22 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_2, _stringLiteral28, _stringLiteral61);
		Hashtable_t26 * L_3 = ___args;
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(22 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_3, _stringLiteral30, _stringLiteral66);
		GameObject_t34 * L_4 = ___target;
		Hashtable_t26 * L_5 = ___args;
		iTween_Launch_m250(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void iTween::RotateTo(UnityEngine.GameObject,UnityEngine.Vector3,System.Single)
extern TypeInfo* ObjectU5BU5D_t41_il2cpp_TypeInfo_var;
extern TypeInfo* Vector3_t14_il2cpp_TypeInfo_var;
extern TypeInfo* Single_t51_il2cpp_TypeInfo_var;
extern TypeInfo* iTween_t23_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral57;
extern Il2CppCodeGenString* _stringLiteral22;
extern "C" void iTween_RotateTo_m84 (Object_t * __this /* static, unused */, GameObject_t34 * ___target, Vector3_t14  ___rotation, float ___time, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t41_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5);
		Vector3_t14_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13);
		Single_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		iTween_t23_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		_stringLiteral57 = il2cpp_codegen_string_literal_from_index(57);
		_stringLiteral22 = il2cpp_codegen_string_literal_from_index(22);
		s_Il2CppMethodIntialized = true;
	}
	{
		GameObject_t34 * L_0 = ___target;
		ObjectU5BU5D_t41* L_1 = ((ObjectU5BU5D_t41*)SZArrayNew(ObjectU5BU5D_t41_il2cpp_TypeInfo_var, 4));
		ArrayElementTypeCheck (L_1, _stringLiteral57);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_1, 0, sizeof(Object_t *))) = (Object_t *)_stringLiteral57;
		ObjectU5BU5D_t41* L_2 = L_1;
		Vector3_t14  L_3 = ___rotation;
		Vector3_t14  L_4 = L_3;
		Object_t * L_5 = Box(Vector3_t14_il2cpp_TypeInfo_var, &L_4);
		ArrayElementTypeCheck (L_2, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1, sizeof(Object_t *))) = (Object_t *)L_5;
		ObjectU5BU5D_t41* L_6 = L_2;
		ArrayElementTypeCheck (L_6, _stringLiteral22);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 2, sizeof(Object_t *))) = (Object_t *)_stringLiteral22;
		ObjectU5BU5D_t41* L_7 = L_6;
		float L_8 = ___time;
		float L_9 = L_8;
		Object_t * L_10 = Box(Single_t51_il2cpp_TypeInfo_var, &L_9);
		ArrayElementTypeCheck (L_7, L_10);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_7, 3, sizeof(Object_t *))) = (Object_t *)L_10;
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		Hashtable_t26 * L_11 = iTween_Hash_m238(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		iTween_RotateTo_m85(NULL /*static, unused*/, L_0, L_11, /*hidden argument*/NULL);
		return;
	}
}
// System.Void iTween::RotateTo(UnityEngine.GameObject,System.Collections.Hashtable)
extern const Il2CppType* Transform_t32_0_0_0_var;
extern TypeInfo* iTween_t23_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* Transform_t32_il2cpp_TypeInfo_var;
extern TypeInfo* Vector3_t14_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral57;
extern Il2CppCodeGenString* _stringLiteral59;
extern Il2CppCodeGenString* _stringLiteral61;
extern Il2CppCodeGenString* _stringLiteral28;
extern Il2CppCodeGenString* _stringLiteral58;
extern Il2CppCodeGenString* _stringLiteral30;
extern Il2CppCodeGenString* _stringLiteral26;
extern "C" void iTween_RotateTo_m85 (Object_t * __this /* static, unused */, GameObject_t34 * ___target, Hashtable_t26 * ___args, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Transform_t32_0_0_0_var = il2cpp_codegen_type_from_index(30);
		iTween_t23_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		Transform_t32_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(30);
		Vector3_t14_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13);
		_stringLiteral57 = il2cpp_codegen_string_literal_from_index(57);
		_stringLiteral59 = il2cpp_codegen_string_literal_from_index(59);
		_stringLiteral61 = il2cpp_codegen_string_literal_from_index(61);
		_stringLiteral28 = il2cpp_codegen_string_literal_from_index(28);
		_stringLiteral58 = il2cpp_codegen_string_literal_from_index(58);
		_stringLiteral30 = il2cpp_codegen_string_literal_from_index(30);
		_stringLiteral26 = il2cpp_codegen_string_literal_from_index(26);
		s_Il2CppMethodIntialized = true;
	}
	Transform_t32 * V_0 = {0};
	Vector3_t14  V_1 = {0};
	Vector3_t14  V_2 = {0};
	Vector3_t14  V_3 = {0};
	Vector3_t14  V_4 = {0};
	Vector3_t14  V_5 = {0};
	Vector3_t14  V_6 = {0};
	Vector3_t14  V_7 = {0};
	Vector3_t14  V_8 = {0};
	Vector3_t14  V_9 = {0};
	{
		Hashtable_t26 * L_0 = ___args;
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		Hashtable_t26 * L_1 = iTween_CleanArgs_m251(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		___args = L_1;
		Hashtable_t26 * L_2 = ___args;
		bool L_3 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(26 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_2, _stringLiteral57);
		if (!L_3)
		{
			goto IL_010b;
		}
	}
	{
		Hashtable_t26 * L_4 = ___args;
		Object_t * L_5 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_4, _stringLiteral57);
		Type_t * L_6 = Object_GetType_m342(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_7 = Type_GetTypeFromHandle_m343(NULL /*static, unused*/, LoadTypeToken(Transform_t32_0_0_0_var), /*hidden argument*/NULL);
		if ((!(((Object_t*)(Type_t *)L_6) == ((Object_t*)(Type_t *)L_7))))
		{
			goto IL_010b;
		}
	}
	{
		Hashtable_t26 * L_8 = ___args;
		Object_t * L_9 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_8, _stringLiteral57);
		V_0 = ((Transform_t32 *)CastclassClass(L_9, Transform_t32_il2cpp_TypeInfo_var));
		Hashtable_t26 * L_10 = ___args;
		Transform_t32 * L_11 = V_0;
		Vector3_t14  L_12 = Transform_get_position_m369(L_11, /*hidden argument*/NULL);
		V_1 = L_12;
		float L_13 = ((&V_1)->___x_1);
		Transform_t32 * L_14 = V_0;
		Vector3_t14  L_15 = Transform_get_position_m369(L_14, /*hidden argument*/NULL);
		V_2 = L_15;
		float L_16 = ((&V_2)->___y_2);
		Transform_t32 * L_17 = V_0;
		Vector3_t14  L_18 = Transform_get_position_m369(L_17, /*hidden argument*/NULL);
		V_3 = L_18;
		float L_19 = ((&V_3)->___z_3);
		Vector3_t14  L_20 = {0};
		Vector3__ctor_m306(&L_20, L_13, L_16, L_19, /*hidden argument*/NULL);
		Vector3_t14  L_21 = L_20;
		Object_t * L_22 = Box(Vector3_t14_il2cpp_TypeInfo_var, &L_21);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(22 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_10, _stringLiteral59, L_22);
		Hashtable_t26 * L_23 = ___args;
		Transform_t32 * L_24 = V_0;
		Vector3_t14  L_25 = Transform_get_eulerAngles_m362(L_24, /*hidden argument*/NULL);
		V_4 = L_25;
		float L_26 = ((&V_4)->___x_1);
		Transform_t32 * L_27 = V_0;
		Vector3_t14  L_28 = Transform_get_eulerAngles_m362(L_27, /*hidden argument*/NULL);
		V_5 = L_28;
		float L_29 = ((&V_5)->___y_2);
		Transform_t32 * L_30 = V_0;
		Vector3_t14  L_31 = Transform_get_eulerAngles_m362(L_30, /*hidden argument*/NULL);
		V_6 = L_31;
		float L_32 = ((&V_6)->___z_3);
		Vector3_t14  L_33 = {0};
		Vector3__ctor_m306(&L_33, L_26, L_29, L_32, /*hidden argument*/NULL);
		Vector3_t14  L_34 = L_33;
		Object_t * L_35 = Box(Vector3_t14_il2cpp_TypeInfo_var, &L_34);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(22 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_23, _stringLiteral57, L_35);
		Hashtable_t26 * L_36 = ___args;
		Transform_t32 * L_37 = V_0;
		Vector3_t14  L_38 = Transform_get_localScale_m370(L_37, /*hidden argument*/NULL);
		V_7 = L_38;
		float L_39 = ((&V_7)->___x_1);
		Transform_t32 * L_40 = V_0;
		Vector3_t14  L_41 = Transform_get_localScale_m370(L_40, /*hidden argument*/NULL);
		V_8 = L_41;
		float L_42 = ((&V_8)->___y_2);
		Transform_t32 * L_43 = V_0;
		Vector3_t14  L_44 = Transform_get_localScale_m370(L_43, /*hidden argument*/NULL);
		V_9 = L_44;
		float L_45 = ((&V_9)->___z_3);
		Vector3_t14  L_46 = {0};
		Vector3__ctor_m306(&L_46, L_39, L_42, L_45, /*hidden argument*/NULL);
		Vector3_t14  L_47 = L_46;
		Object_t * L_48 = Box(Vector3_t14_il2cpp_TypeInfo_var, &L_47);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(22 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_36, _stringLiteral61, L_48);
	}

IL_010b:
	{
		Hashtable_t26 * L_49 = ___args;
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(22 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_49, _stringLiteral28, _stringLiteral58);
		Hashtable_t26 * L_50 = ___args;
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(22 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_50, _stringLiteral30, _stringLiteral26);
		GameObject_t34 * L_51 = ___target;
		Hashtable_t26 * L_52 = ___args;
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		iTween_Launch_m250(NULL /*static, unused*/, L_51, L_52, /*hidden argument*/NULL);
		return;
	}
}
// System.Void iTween::RotateFrom(UnityEngine.GameObject,UnityEngine.Vector3,System.Single)
extern TypeInfo* ObjectU5BU5D_t41_il2cpp_TypeInfo_var;
extern TypeInfo* Vector3_t14_il2cpp_TypeInfo_var;
extern TypeInfo* Single_t51_il2cpp_TypeInfo_var;
extern TypeInfo* iTween_t23_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral57;
extern Il2CppCodeGenString* _stringLiteral22;
extern "C" void iTween_RotateFrom_m86 (Object_t * __this /* static, unused */, GameObject_t34 * ___target, Vector3_t14  ___rotation, float ___time, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t41_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5);
		Vector3_t14_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13);
		Single_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		iTween_t23_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		_stringLiteral57 = il2cpp_codegen_string_literal_from_index(57);
		_stringLiteral22 = il2cpp_codegen_string_literal_from_index(22);
		s_Il2CppMethodIntialized = true;
	}
	{
		GameObject_t34 * L_0 = ___target;
		ObjectU5BU5D_t41* L_1 = ((ObjectU5BU5D_t41*)SZArrayNew(ObjectU5BU5D_t41_il2cpp_TypeInfo_var, 4));
		ArrayElementTypeCheck (L_1, _stringLiteral57);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_1, 0, sizeof(Object_t *))) = (Object_t *)_stringLiteral57;
		ObjectU5BU5D_t41* L_2 = L_1;
		Vector3_t14  L_3 = ___rotation;
		Vector3_t14  L_4 = L_3;
		Object_t * L_5 = Box(Vector3_t14_il2cpp_TypeInfo_var, &L_4);
		ArrayElementTypeCheck (L_2, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1, sizeof(Object_t *))) = (Object_t *)L_5;
		ObjectU5BU5D_t41* L_6 = L_2;
		ArrayElementTypeCheck (L_6, _stringLiteral22);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 2, sizeof(Object_t *))) = (Object_t *)_stringLiteral22;
		ObjectU5BU5D_t41* L_7 = L_6;
		float L_8 = ___time;
		float L_9 = L_8;
		Object_t * L_10 = Box(Single_t51_il2cpp_TypeInfo_var, &L_9);
		ArrayElementTypeCheck (L_7, L_10);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_7, 3, sizeof(Object_t *))) = (Object_t *)L_10;
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		Hashtable_t26 * L_11 = iTween_Hash_m238(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		iTween_RotateFrom_m87(NULL /*static, unused*/, L_0, L_11, /*hidden argument*/NULL);
		return;
	}
}
// System.Void iTween::RotateFrom(UnityEngine.GameObject,System.Collections.Hashtable)
extern const Il2CppType* Transform_t32_0_0_0_var;
extern const Il2CppType* Vector3_t14_0_0_0_var;
extern TypeInfo* iTween_t23_il2cpp_TypeInfo_var;
extern TypeInfo* Boolean_t56_il2cpp_TypeInfo_var;
extern TypeInfo* Defaults_t12_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* Transform_t32_il2cpp_TypeInfo_var;
extern TypeInfo* Vector3_t14_il2cpp_TypeInfo_var;
extern TypeInfo* Single_t51_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral63;
extern Il2CppCodeGenString* _stringLiteral57;
extern Il2CppCodeGenString* _stringLiteral10;
extern Il2CppCodeGenString* _stringLiteral55;
extern Il2CppCodeGenString* _stringLiteral56;
extern Il2CppCodeGenString* _stringLiteral28;
extern Il2CppCodeGenString* _stringLiteral58;
extern Il2CppCodeGenString* _stringLiteral30;
extern Il2CppCodeGenString* _stringLiteral26;
extern "C" void iTween_RotateFrom_m87 (Object_t * __this /* static, unused */, GameObject_t34 * ___target, Hashtable_t26 * ___args, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Transform_t32_0_0_0_var = il2cpp_codegen_type_from_index(30);
		Vector3_t14_0_0_0_var = il2cpp_codegen_type_from_index(13);
		iTween_t23_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		Boolean_t56_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(28);
		Defaults_t12_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		Transform_t32_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(30);
		Vector3_t14_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13);
		Single_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		_stringLiteral63 = il2cpp_codegen_string_literal_from_index(63);
		_stringLiteral57 = il2cpp_codegen_string_literal_from_index(57);
		_stringLiteral10 = il2cpp_codegen_string_literal_from_index(10);
		_stringLiteral55 = il2cpp_codegen_string_literal_from_index(55);
		_stringLiteral56 = il2cpp_codegen_string_literal_from_index(56);
		_stringLiteral28 = il2cpp_codegen_string_literal_from_index(28);
		_stringLiteral58 = il2cpp_codegen_string_literal_from_index(58);
		_stringLiteral30 = il2cpp_codegen_string_literal_from_index(30);
		_stringLiteral26 = il2cpp_codegen_string_literal_from_index(26);
		s_Il2CppMethodIntialized = true;
	}
	Vector3_t14  V_0 = {0};
	Vector3_t14  V_1 = {0};
	bool V_2 = false;
	Transform_t32 * V_3 = {0};
	{
		Hashtable_t26 * L_0 = ___args;
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		Hashtable_t26 * L_1 = iTween_CleanArgs_m251(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		___args = L_1;
		Hashtable_t26 * L_2 = ___args;
		bool L_3 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(26 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_2, _stringLiteral63);
		if (!L_3)
		{
			goto IL_002e;
		}
	}
	{
		Hashtable_t26 * L_4 = ___args;
		Object_t * L_5 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_4, _stringLiteral63);
		V_2 = ((*(bool*)((bool*)UnBox (L_5, Boolean_t56_il2cpp_TypeInfo_var))));
		goto IL_0034;
	}

IL_002e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Defaults_t12_il2cpp_TypeInfo_var);
		bool L_6 = ((Defaults_t12_StaticFields*)Defaults_t12_il2cpp_TypeInfo_var->static_fields)->___isLocal_6;
		V_2 = L_6;
	}

IL_0034:
	{
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		GameObject_t34 * L_8 = ___target;
		Transform_t32 * L_9 = GameObject_get_transform_m344(L_8, /*hidden argument*/NULL);
		Vector3_t14  L_10 = Transform_get_localEulerAngles_m376(L_9, /*hidden argument*/NULL);
		Vector3_t14  L_11 = L_10;
		V_1 = L_11;
		V_0 = L_11;
		goto IL_005b;
	}

IL_004d:
	{
		GameObject_t34 * L_12 = ___target;
		Transform_t32 * L_13 = GameObject_get_transform_m344(L_12, /*hidden argument*/NULL);
		Vector3_t14  L_14 = Transform_get_eulerAngles_m362(L_13, /*hidden argument*/NULL);
		Vector3_t14  L_15 = L_14;
		V_1 = L_15;
		V_0 = L_15;
	}

IL_005b:
	{
		Hashtable_t26 * L_16 = ___args;
		bool L_17 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(26 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_16, _stringLiteral57);
		if (!L_17)
		{
			goto IL_00dc;
		}
	}
	{
		Hashtable_t26 * L_18 = ___args;
		Object_t * L_19 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_18, _stringLiteral57);
		Type_t * L_20 = Object_GetType_m342(L_19, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_21 = Type_GetTypeFromHandle_m343(NULL /*static, unused*/, LoadTypeToken(Transform_t32_0_0_0_var), /*hidden argument*/NULL);
		if ((!(((Object_t*)(Type_t *)L_20) == ((Object_t*)(Type_t *)L_21))))
		{
			goto IL_00a7;
		}
	}
	{
		Hashtable_t26 * L_22 = ___args;
		Object_t * L_23 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_22, _stringLiteral57);
		V_3 = ((Transform_t32 *)CastclassClass(L_23, Transform_t32_il2cpp_TypeInfo_var));
		Transform_t32 * L_24 = V_3;
		Vector3_t14  L_25 = Transform_get_eulerAngles_m362(L_24, /*hidden argument*/NULL);
		V_1 = L_25;
		goto IL_00d7;
	}

IL_00a7:
	{
		Hashtable_t26 * L_26 = ___args;
		Object_t * L_27 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_26, _stringLiteral57);
		Type_t * L_28 = Object_GetType_m342(L_27, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_29 = Type_GetTypeFromHandle_m343(NULL /*static, unused*/, LoadTypeToken(Vector3_t14_0_0_0_var), /*hidden argument*/NULL);
		if ((!(((Object_t*)(Type_t *)L_28) == ((Object_t*)(Type_t *)L_29))))
		{
			goto IL_00d7;
		}
	}
	{
		Hashtable_t26 * L_30 = ___args;
		Object_t * L_31 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_30, _stringLiteral57);
		V_1 = ((*(Vector3_t14 *)((Vector3_t14 *)UnBox (L_31, Vector3_t14_il2cpp_TypeInfo_var))));
	}

IL_00d7:
	{
		goto IL_0151;
	}

IL_00dc:
	{
		Hashtable_t26 * L_32 = ___args;
		bool L_33 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(26 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_32, _stringLiteral10);
		if (!L_33)
		{
			goto IL_0103;
		}
	}
	{
		Hashtable_t26 * L_34 = ___args;
		Object_t * L_35 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_34, _stringLiteral10);
		(&V_1)->___x_1 = ((*(float*)((float*)UnBox (L_35, Single_t51_il2cpp_TypeInfo_var))));
	}

IL_0103:
	{
		Hashtable_t26 * L_36 = ___args;
		bool L_37 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(26 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_36, _stringLiteral55);
		if (!L_37)
		{
			goto IL_012a;
		}
	}
	{
		Hashtable_t26 * L_38 = ___args;
		Object_t * L_39 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_38, _stringLiteral55);
		(&V_1)->___y_2 = ((*(float*)((float*)UnBox (L_39, Single_t51_il2cpp_TypeInfo_var))));
	}

IL_012a:
	{
		Hashtable_t26 * L_40 = ___args;
		bool L_41 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(26 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_40, _stringLiteral56);
		if (!L_41)
		{
			goto IL_0151;
		}
	}
	{
		Hashtable_t26 * L_42 = ___args;
		Object_t * L_43 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_42, _stringLiteral56);
		(&V_1)->___z_3 = ((*(float*)((float*)UnBox (L_43, Single_t51_il2cpp_TypeInfo_var))));
	}

IL_0151:
	{
		bool L_44 = V_2;
		if (!L_44)
		{
			goto IL_0168;
		}
	}
	{
		GameObject_t34 * L_45 = ___target;
		Transform_t32 * L_46 = GameObject_get_transform_m344(L_45, /*hidden argument*/NULL);
		Vector3_t14  L_47 = V_1;
		Transform_set_localEulerAngles_m377(L_46, L_47, /*hidden argument*/NULL);
		goto IL_0174;
	}

IL_0168:
	{
		GameObject_t34 * L_48 = ___target;
		Transform_t32 * L_49 = GameObject_get_transform_m344(L_48, /*hidden argument*/NULL);
		Vector3_t14  L_50 = V_1;
		Transform_set_eulerAngles_m368(L_49, L_50, /*hidden argument*/NULL);
	}

IL_0174:
	{
		Hashtable_t26 * L_51 = ___args;
		Vector3_t14  L_52 = V_0;
		Vector3_t14  L_53 = L_52;
		Object_t * L_54 = Box(Vector3_t14_il2cpp_TypeInfo_var, &L_53);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(22 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_51, _stringLiteral57, L_54);
		Hashtable_t26 * L_55 = ___args;
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(22 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_55, _stringLiteral28, _stringLiteral58);
		Hashtable_t26 * L_56 = ___args;
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(22 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_56, _stringLiteral30, _stringLiteral26);
		GameObject_t34 * L_57 = ___target;
		Hashtable_t26 * L_58 = ___args;
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		iTween_Launch_m250(NULL /*static, unused*/, L_57, L_58, /*hidden argument*/NULL);
		return;
	}
}
// System.Void iTween::RotateAdd(UnityEngine.GameObject,UnityEngine.Vector3,System.Single)
extern TypeInfo* ObjectU5BU5D_t41_il2cpp_TypeInfo_var;
extern TypeInfo* Vector3_t14_il2cpp_TypeInfo_var;
extern TypeInfo* Single_t51_il2cpp_TypeInfo_var;
extern TypeInfo* iTween_t23_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral21;
extern Il2CppCodeGenString* _stringLiteral22;
extern "C" void iTween_RotateAdd_m88 (Object_t * __this /* static, unused */, GameObject_t34 * ___target, Vector3_t14  ___amount, float ___time, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t41_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5);
		Vector3_t14_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13);
		Single_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		iTween_t23_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		_stringLiteral21 = il2cpp_codegen_string_literal_from_index(21);
		_stringLiteral22 = il2cpp_codegen_string_literal_from_index(22);
		s_Il2CppMethodIntialized = true;
	}
	{
		GameObject_t34 * L_0 = ___target;
		ObjectU5BU5D_t41* L_1 = ((ObjectU5BU5D_t41*)SZArrayNew(ObjectU5BU5D_t41_il2cpp_TypeInfo_var, 4));
		ArrayElementTypeCheck (L_1, _stringLiteral21);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_1, 0, sizeof(Object_t *))) = (Object_t *)_stringLiteral21;
		ObjectU5BU5D_t41* L_2 = L_1;
		Vector3_t14  L_3 = ___amount;
		Vector3_t14  L_4 = L_3;
		Object_t * L_5 = Box(Vector3_t14_il2cpp_TypeInfo_var, &L_4);
		ArrayElementTypeCheck (L_2, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1, sizeof(Object_t *))) = (Object_t *)L_5;
		ObjectU5BU5D_t41* L_6 = L_2;
		ArrayElementTypeCheck (L_6, _stringLiteral22);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 2, sizeof(Object_t *))) = (Object_t *)_stringLiteral22;
		ObjectU5BU5D_t41* L_7 = L_6;
		float L_8 = ___time;
		float L_9 = L_8;
		Object_t * L_10 = Box(Single_t51_il2cpp_TypeInfo_var, &L_9);
		ArrayElementTypeCheck (L_7, L_10);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_7, 3, sizeof(Object_t *))) = (Object_t *)L_10;
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		Hashtable_t26 * L_11 = iTween_Hash_m238(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		iTween_RotateAdd_m89(NULL /*static, unused*/, L_0, L_11, /*hidden argument*/NULL);
		return;
	}
}
// System.Void iTween::RotateAdd(UnityEngine.GameObject,System.Collections.Hashtable)
extern TypeInfo* iTween_t23_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral28;
extern Il2CppCodeGenString* _stringLiteral58;
extern Il2CppCodeGenString* _stringLiteral30;
extern Il2CppCodeGenString* _stringLiteral65;
extern "C" void iTween_RotateAdd_m89 (Object_t * __this /* static, unused */, GameObject_t34 * ___target, Hashtable_t26 * ___args, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		iTween_t23_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		_stringLiteral28 = il2cpp_codegen_string_literal_from_index(28);
		_stringLiteral58 = il2cpp_codegen_string_literal_from_index(58);
		_stringLiteral30 = il2cpp_codegen_string_literal_from_index(30);
		_stringLiteral65 = il2cpp_codegen_string_literal_from_index(65);
		s_Il2CppMethodIntialized = true;
	}
	{
		Hashtable_t26 * L_0 = ___args;
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		Hashtable_t26 * L_1 = iTween_CleanArgs_m251(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		___args = L_1;
		Hashtable_t26 * L_2 = ___args;
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(22 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_2, _stringLiteral28, _stringLiteral58);
		Hashtable_t26 * L_3 = ___args;
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(22 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_3, _stringLiteral30, _stringLiteral65);
		GameObject_t34 * L_4 = ___target;
		Hashtable_t26 * L_5 = ___args;
		iTween_Launch_m250(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void iTween::RotateBy(UnityEngine.GameObject,UnityEngine.Vector3,System.Single)
extern TypeInfo* ObjectU5BU5D_t41_il2cpp_TypeInfo_var;
extern TypeInfo* Vector3_t14_il2cpp_TypeInfo_var;
extern TypeInfo* Single_t51_il2cpp_TypeInfo_var;
extern TypeInfo* iTween_t23_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral21;
extern Il2CppCodeGenString* _stringLiteral22;
extern "C" void iTween_RotateBy_m90 (Object_t * __this /* static, unused */, GameObject_t34 * ___target, Vector3_t14  ___amount, float ___time, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t41_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5);
		Vector3_t14_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13);
		Single_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		iTween_t23_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		_stringLiteral21 = il2cpp_codegen_string_literal_from_index(21);
		_stringLiteral22 = il2cpp_codegen_string_literal_from_index(22);
		s_Il2CppMethodIntialized = true;
	}
	{
		GameObject_t34 * L_0 = ___target;
		ObjectU5BU5D_t41* L_1 = ((ObjectU5BU5D_t41*)SZArrayNew(ObjectU5BU5D_t41_il2cpp_TypeInfo_var, 4));
		ArrayElementTypeCheck (L_1, _stringLiteral21);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_1, 0, sizeof(Object_t *))) = (Object_t *)_stringLiteral21;
		ObjectU5BU5D_t41* L_2 = L_1;
		Vector3_t14  L_3 = ___amount;
		Vector3_t14  L_4 = L_3;
		Object_t * L_5 = Box(Vector3_t14_il2cpp_TypeInfo_var, &L_4);
		ArrayElementTypeCheck (L_2, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1, sizeof(Object_t *))) = (Object_t *)L_5;
		ObjectU5BU5D_t41* L_6 = L_2;
		ArrayElementTypeCheck (L_6, _stringLiteral22);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 2, sizeof(Object_t *))) = (Object_t *)_stringLiteral22;
		ObjectU5BU5D_t41* L_7 = L_6;
		float L_8 = ___time;
		float L_9 = L_8;
		Object_t * L_10 = Box(Single_t51_il2cpp_TypeInfo_var, &L_9);
		ArrayElementTypeCheck (L_7, L_10);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_7, 3, sizeof(Object_t *))) = (Object_t *)L_10;
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		Hashtable_t26 * L_11 = iTween_Hash_m238(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		iTween_RotateBy_m91(NULL /*static, unused*/, L_0, L_11, /*hidden argument*/NULL);
		return;
	}
}
// System.Void iTween::RotateBy(UnityEngine.GameObject,System.Collections.Hashtable)
extern TypeInfo* iTween_t23_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral28;
extern Il2CppCodeGenString* _stringLiteral58;
extern Il2CppCodeGenString* _stringLiteral30;
extern Il2CppCodeGenString* _stringLiteral66;
extern "C" void iTween_RotateBy_m91 (Object_t * __this /* static, unused */, GameObject_t34 * ___target, Hashtable_t26 * ___args, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		iTween_t23_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		_stringLiteral28 = il2cpp_codegen_string_literal_from_index(28);
		_stringLiteral58 = il2cpp_codegen_string_literal_from_index(58);
		_stringLiteral30 = il2cpp_codegen_string_literal_from_index(30);
		_stringLiteral66 = il2cpp_codegen_string_literal_from_index(66);
		s_Il2CppMethodIntialized = true;
	}
	{
		Hashtable_t26 * L_0 = ___args;
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		Hashtable_t26 * L_1 = iTween_CleanArgs_m251(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		___args = L_1;
		Hashtable_t26 * L_2 = ___args;
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(22 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_2, _stringLiteral28, _stringLiteral58);
		Hashtable_t26 * L_3 = ___args;
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(22 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_3, _stringLiteral30, _stringLiteral66);
		GameObject_t34 * L_4 = ___target;
		Hashtable_t26 * L_5 = ___args;
		iTween_Launch_m250(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void iTween::ShakePosition(UnityEngine.GameObject,UnityEngine.Vector3,System.Single)
extern TypeInfo* ObjectU5BU5D_t41_il2cpp_TypeInfo_var;
extern TypeInfo* Vector3_t14_il2cpp_TypeInfo_var;
extern TypeInfo* Single_t51_il2cpp_TypeInfo_var;
extern TypeInfo* iTween_t23_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral21;
extern Il2CppCodeGenString* _stringLiteral22;
extern "C" void iTween_ShakePosition_m92 (Object_t * __this /* static, unused */, GameObject_t34 * ___target, Vector3_t14  ___amount, float ___time, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t41_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5);
		Vector3_t14_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13);
		Single_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		iTween_t23_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		_stringLiteral21 = il2cpp_codegen_string_literal_from_index(21);
		_stringLiteral22 = il2cpp_codegen_string_literal_from_index(22);
		s_Il2CppMethodIntialized = true;
	}
	{
		GameObject_t34 * L_0 = ___target;
		ObjectU5BU5D_t41* L_1 = ((ObjectU5BU5D_t41*)SZArrayNew(ObjectU5BU5D_t41_il2cpp_TypeInfo_var, 4));
		ArrayElementTypeCheck (L_1, _stringLiteral21);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_1, 0, sizeof(Object_t *))) = (Object_t *)_stringLiteral21;
		ObjectU5BU5D_t41* L_2 = L_1;
		Vector3_t14  L_3 = ___amount;
		Vector3_t14  L_4 = L_3;
		Object_t * L_5 = Box(Vector3_t14_il2cpp_TypeInfo_var, &L_4);
		ArrayElementTypeCheck (L_2, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1, sizeof(Object_t *))) = (Object_t *)L_5;
		ObjectU5BU5D_t41* L_6 = L_2;
		ArrayElementTypeCheck (L_6, _stringLiteral22);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 2, sizeof(Object_t *))) = (Object_t *)_stringLiteral22;
		ObjectU5BU5D_t41* L_7 = L_6;
		float L_8 = ___time;
		float L_9 = L_8;
		Object_t * L_10 = Box(Single_t51_il2cpp_TypeInfo_var, &L_9);
		ArrayElementTypeCheck (L_7, L_10);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_7, 3, sizeof(Object_t *))) = (Object_t *)L_10;
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		Hashtable_t26 * L_11 = iTween_Hash_m238(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		iTween_ShakePosition_m93(NULL /*static, unused*/, L_0, L_11, /*hidden argument*/NULL);
		return;
	}
}
// System.Void iTween::ShakePosition(UnityEngine.GameObject,System.Collections.Hashtable)
extern TypeInfo* iTween_t23_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral28;
extern Il2CppCodeGenString* _stringLiteral67;
extern Il2CppCodeGenString* _stringLiteral30;
extern Il2CppCodeGenString* _stringLiteral59;
extern "C" void iTween_ShakePosition_m93 (Object_t * __this /* static, unused */, GameObject_t34 * ___target, Hashtable_t26 * ___args, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		iTween_t23_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		_stringLiteral28 = il2cpp_codegen_string_literal_from_index(28);
		_stringLiteral67 = il2cpp_codegen_string_literal_from_index(67);
		_stringLiteral30 = il2cpp_codegen_string_literal_from_index(30);
		_stringLiteral59 = il2cpp_codegen_string_literal_from_index(59);
		s_Il2CppMethodIntialized = true;
	}
	{
		Hashtable_t26 * L_0 = ___args;
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		Hashtable_t26 * L_1 = iTween_CleanArgs_m251(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		___args = L_1;
		Hashtable_t26 * L_2 = ___args;
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(22 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_2, _stringLiteral28, _stringLiteral67);
		Hashtable_t26 * L_3 = ___args;
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(22 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_3, _stringLiteral30, _stringLiteral59);
		GameObject_t34 * L_4 = ___target;
		Hashtable_t26 * L_5 = ___args;
		iTween_Launch_m250(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void iTween::ShakeScale(UnityEngine.GameObject,UnityEngine.Vector3,System.Single)
extern TypeInfo* ObjectU5BU5D_t41_il2cpp_TypeInfo_var;
extern TypeInfo* Vector3_t14_il2cpp_TypeInfo_var;
extern TypeInfo* Single_t51_il2cpp_TypeInfo_var;
extern TypeInfo* iTween_t23_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral21;
extern Il2CppCodeGenString* _stringLiteral22;
extern "C" void iTween_ShakeScale_m94 (Object_t * __this /* static, unused */, GameObject_t34 * ___target, Vector3_t14  ___amount, float ___time, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t41_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5);
		Vector3_t14_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13);
		Single_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		iTween_t23_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		_stringLiteral21 = il2cpp_codegen_string_literal_from_index(21);
		_stringLiteral22 = il2cpp_codegen_string_literal_from_index(22);
		s_Il2CppMethodIntialized = true;
	}
	{
		GameObject_t34 * L_0 = ___target;
		ObjectU5BU5D_t41* L_1 = ((ObjectU5BU5D_t41*)SZArrayNew(ObjectU5BU5D_t41_il2cpp_TypeInfo_var, 4));
		ArrayElementTypeCheck (L_1, _stringLiteral21);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_1, 0, sizeof(Object_t *))) = (Object_t *)_stringLiteral21;
		ObjectU5BU5D_t41* L_2 = L_1;
		Vector3_t14  L_3 = ___amount;
		Vector3_t14  L_4 = L_3;
		Object_t * L_5 = Box(Vector3_t14_il2cpp_TypeInfo_var, &L_4);
		ArrayElementTypeCheck (L_2, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1, sizeof(Object_t *))) = (Object_t *)L_5;
		ObjectU5BU5D_t41* L_6 = L_2;
		ArrayElementTypeCheck (L_6, _stringLiteral22);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 2, sizeof(Object_t *))) = (Object_t *)_stringLiteral22;
		ObjectU5BU5D_t41* L_7 = L_6;
		float L_8 = ___time;
		float L_9 = L_8;
		Object_t * L_10 = Box(Single_t51_il2cpp_TypeInfo_var, &L_9);
		ArrayElementTypeCheck (L_7, L_10);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_7, 3, sizeof(Object_t *))) = (Object_t *)L_10;
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		Hashtable_t26 * L_11 = iTween_Hash_m238(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		iTween_ShakeScale_m95(NULL /*static, unused*/, L_0, L_11, /*hidden argument*/NULL);
		return;
	}
}
// System.Void iTween::ShakeScale(UnityEngine.GameObject,System.Collections.Hashtable)
extern TypeInfo* iTween_t23_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral28;
extern Il2CppCodeGenString* _stringLiteral67;
extern Il2CppCodeGenString* _stringLiteral30;
extern Il2CppCodeGenString* _stringLiteral61;
extern "C" void iTween_ShakeScale_m95 (Object_t * __this /* static, unused */, GameObject_t34 * ___target, Hashtable_t26 * ___args, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		iTween_t23_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		_stringLiteral28 = il2cpp_codegen_string_literal_from_index(28);
		_stringLiteral67 = il2cpp_codegen_string_literal_from_index(67);
		_stringLiteral30 = il2cpp_codegen_string_literal_from_index(30);
		_stringLiteral61 = il2cpp_codegen_string_literal_from_index(61);
		s_Il2CppMethodIntialized = true;
	}
	{
		Hashtable_t26 * L_0 = ___args;
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		Hashtable_t26 * L_1 = iTween_CleanArgs_m251(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		___args = L_1;
		Hashtable_t26 * L_2 = ___args;
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(22 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_2, _stringLiteral28, _stringLiteral67);
		Hashtable_t26 * L_3 = ___args;
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(22 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_3, _stringLiteral30, _stringLiteral61);
		GameObject_t34 * L_4 = ___target;
		Hashtable_t26 * L_5 = ___args;
		iTween_Launch_m250(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void iTween::ShakeRotation(UnityEngine.GameObject,UnityEngine.Vector3,System.Single)
extern TypeInfo* ObjectU5BU5D_t41_il2cpp_TypeInfo_var;
extern TypeInfo* Vector3_t14_il2cpp_TypeInfo_var;
extern TypeInfo* Single_t51_il2cpp_TypeInfo_var;
extern TypeInfo* iTween_t23_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral21;
extern Il2CppCodeGenString* _stringLiteral22;
extern "C" void iTween_ShakeRotation_m96 (Object_t * __this /* static, unused */, GameObject_t34 * ___target, Vector3_t14  ___amount, float ___time, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t41_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5);
		Vector3_t14_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13);
		Single_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		iTween_t23_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		_stringLiteral21 = il2cpp_codegen_string_literal_from_index(21);
		_stringLiteral22 = il2cpp_codegen_string_literal_from_index(22);
		s_Il2CppMethodIntialized = true;
	}
	{
		GameObject_t34 * L_0 = ___target;
		ObjectU5BU5D_t41* L_1 = ((ObjectU5BU5D_t41*)SZArrayNew(ObjectU5BU5D_t41_il2cpp_TypeInfo_var, 4));
		ArrayElementTypeCheck (L_1, _stringLiteral21);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_1, 0, sizeof(Object_t *))) = (Object_t *)_stringLiteral21;
		ObjectU5BU5D_t41* L_2 = L_1;
		Vector3_t14  L_3 = ___amount;
		Vector3_t14  L_4 = L_3;
		Object_t * L_5 = Box(Vector3_t14_il2cpp_TypeInfo_var, &L_4);
		ArrayElementTypeCheck (L_2, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1, sizeof(Object_t *))) = (Object_t *)L_5;
		ObjectU5BU5D_t41* L_6 = L_2;
		ArrayElementTypeCheck (L_6, _stringLiteral22);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 2, sizeof(Object_t *))) = (Object_t *)_stringLiteral22;
		ObjectU5BU5D_t41* L_7 = L_6;
		float L_8 = ___time;
		float L_9 = L_8;
		Object_t * L_10 = Box(Single_t51_il2cpp_TypeInfo_var, &L_9);
		ArrayElementTypeCheck (L_7, L_10);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_7, 3, sizeof(Object_t *))) = (Object_t *)L_10;
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		Hashtable_t26 * L_11 = iTween_Hash_m238(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		iTween_ShakeRotation_m97(NULL /*static, unused*/, L_0, L_11, /*hidden argument*/NULL);
		return;
	}
}
// System.Void iTween::ShakeRotation(UnityEngine.GameObject,System.Collections.Hashtable)
extern TypeInfo* iTween_t23_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral28;
extern Il2CppCodeGenString* _stringLiteral67;
extern Il2CppCodeGenString* _stringLiteral30;
extern Il2CppCodeGenString* _stringLiteral57;
extern "C" void iTween_ShakeRotation_m97 (Object_t * __this /* static, unused */, GameObject_t34 * ___target, Hashtable_t26 * ___args, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		iTween_t23_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		_stringLiteral28 = il2cpp_codegen_string_literal_from_index(28);
		_stringLiteral67 = il2cpp_codegen_string_literal_from_index(67);
		_stringLiteral30 = il2cpp_codegen_string_literal_from_index(30);
		_stringLiteral57 = il2cpp_codegen_string_literal_from_index(57);
		s_Il2CppMethodIntialized = true;
	}
	{
		Hashtable_t26 * L_0 = ___args;
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		Hashtable_t26 * L_1 = iTween_CleanArgs_m251(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		___args = L_1;
		Hashtable_t26 * L_2 = ___args;
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(22 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_2, _stringLiteral28, _stringLiteral67);
		Hashtable_t26 * L_3 = ___args;
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(22 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_3, _stringLiteral30, _stringLiteral57);
		GameObject_t34 * L_4 = ___target;
		Hashtable_t26 * L_5 = ___args;
		iTween_Launch_m250(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void iTween::PunchPosition(UnityEngine.GameObject,UnityEngine.Vector3,System.Single)
extern TypeInfo* ObjectU5BU5D_t41_il2cpp_TypeInfo_var;
extern TypeInfo* Vector3_t14_il2cpp_TypeInfo_var;
extern TypeInfo* Single_t51_il2cpp_TypeInfo_var;
extern TypeInfo* iTween_t23_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral21;
extern Il2CppCodeGenString* _stringLiteral22;
extern "C" void iTween_PunchPosition_m98 (Object_t * __this /* static, unused */, GameObject_t34 * ___target, Vector3_t14  ___amount, float ___time, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t41_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5);
		Vector3_t14_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13);
		Single_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		iTween_t23_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		_stringLiteral21 = il2cpp_codegen_string_literal_from_index(21);
		_stringLiteral22 = il2cpp_codegen_string_literal_from_index(22);
		s_Il2CppMethodIntialized = true;
	}
	{
		GameObject_t34 * L_0 = ___target;
		ObjectU5BU5D_t41* L_1 = ((ObjectU5BU5D_t41*)SZArrayNew(ObjectU5BU5D_t41_il2cpp_TypeInfo_var, 4));
		ArrayElementTypeCheck (L_1, _stringLiteral21);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_1, 0, sizeof(Object_t *))) = (Object_t *)_stringLiteral21;
		ObjectU5BU5D_t41* L_2 = L_1;
		Vector3_t14  L_3 = ___amount;
		Vector3_t14  L_4 = L_3;
		Object_t * L_5 = Box(Vector3_t14_il2cpp_TypeInfo_var, &L_4);
		ArrayElementTypeCheck (L_2, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1, sizeof(Object_t *))) = (Object_t *)L_5;
		ObjectU5BU5D_t41* L_6 = L_2;
		ArrayElementTypeCheck (L_6, _stringLiteral22);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 2, sizeof(Object_t *))) = (Object_t *)_stringLiteral22;
		ObjectU5BU5D_t41* L_7 = L_6;
		float L_8 = ___time;
		float L_9 = L_8;
		Object_t * L_10 = Box(Single_t51_il2cpp_TypeInfo_var, &L_9);
		ArrayElementTypeCheck (L_7, L_10);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_7, 3, sizeof(Object_t *))) = (Object_t *)L_10;
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		Hashtable_t26 * L_11 = iTween_Hash_m238(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		iTween_PunchPosition_m99(NULL /*static, unused*/, L_0, L_11, /*hidden argument*/NULL);
		return;
	}
}
// System.Void iTween::PunchPosition(UnityEngine.GameObject,System.Collections.Hashtable)
extern TypeInfo* iTween_t23_il2cpp_TypeInfo_var;
extern TypeInfo* EaseType_t9_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral28;
extern Il2CppCodeGenString* _stringLiteral68;
extern Il2CppCodeGenString* _stringLiteral30;
extern Il2CppCodeGenString* _stringLiteral59;
extern Il2CppCodeGenString* _stringLiteral37;
extern "C" void iTween_PunchPosition_m99 (Object_t * __this /* static, unused */, GameObject_t34 * ___target, Hashtable_t26 * ___args, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		iTween_t23_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		EaseType_t9_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		_stringLiteral28 = il2cpp_codegen_string_literal_from_index(28);
		_stringLiteral68 = il2cpp_codegen_string_literal_from_index(68);
		_stringLiteral30 = il2cpp_codegen_string_literal_from_index(30);
		_stringLiteral59 = il2cpp_codegen_string_literal_from_index(59);
		_stringLiteral37 = il2cpp_codegen_string_literal_from_index(37);
		s_Il2CppMethodIntialized = true;
	}
	{
		Hashtable_t26 * L_0 = ___args;
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		Hashtable_t26 * L_1 = iTween_CleanArgs_m251(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		___args = L_1;
		Hashtable_t26 * L_2 = ___args;
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(22 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_2, _stringLiteral28, _stringLiteral68);
		Hashtable_t26 * L_3 = ___args;
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(22 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_3, _stringLiteral30, _stringLiteral59);
		Hashtable_t26 * L_4 = ___args;
		int32_t L_5 = ((int32_t)32);
		Object_t * L_6 = Box(EaseType_t9_il2cpp_TypeInfo_var, &L_5);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(22 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_4, _stringLiteral37, L_6);
		GameObject_t34 * L_7 = ___target;
		Hashtable_t26 * L_8 = ___args;
		iTween_Launch_m250(NULL /*static, unused*/, L_7, L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void iTween::PunchRotation(UnityEngine.GameObject,UnityEngine.Vector3,System.Single)
extern TypeInfo* ObjectU5BU5D_t41_il2cpp_TypeInfo_var;
extern TypeInfo* Vector3_t14_il2cpp_TypeInfo_var;
extern TypeInfo* Single_t51_il2cpp_TypeInfo_var;
extern TypeInfo* iTween_t23_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral21;
extern Il2CppCodeGenString* _stringLiteral22;
extern "C" void iTween_PunchRotation_m100 (Object_t * __this /* static, unused */, GameObject_t34 * ___target, Vector3_t14  ___amount, float ___time, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t41_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5);
		Vector3_t14_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13);
		Single_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		iTween_t23_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		_stringLiteral21 = il2cpp_codegen_string_literal_from_index(21);
		_stringLiteral22 = il2cpp_codegen_string_literal_from_index(22);
		s_Il2CppMethodIntialized = true;
	}
	{
		GameObject_t34 * L_0 = ___target;
		ObjectU5BU5D_t41* L_1 = ((ObjectU5BU5D_t41*)SZArrayNew(ObjectU5BU5D_t41_il2cpp_TypeInfo_var, 4));
		ArrayElementTypeCheck (L_1, _stringLiteral21);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_1, 0, sizeof(Object_t *))) = (Object_t *)_stringLiteral21;
		ObjectU5BU5D_t41* L_2 = L_1;
		Vector3_t14  L_3 = ___amount;
		Vector3_t14  L_4 = L_3;
		Object_t * L_5 = Box(Vector3_t14_il2cpp_TypeInfo_var, &L_4);
		ArrayElementTypeCheck (L_2, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1, sizeof(Object_t *))) = (Object_t *)L_5;
		ObjectU5BU5D_t41* L_6 = L_2;
		ArrayElementTypeCheck (L_6, _stringLiteral22);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 2, sizeof(Object_t *))) = (Object_t *)_stringLiteral22;
		ObjectU5BU5D_t41* L_7 = L_6;
		float L_8 = ___time;
		float L_9 = L_8;
		Object_t * L_10 = Box(Single_t51_il2cpp_TypeInfo_var, &L_9);
		ArrayElementTypeCheck (L_7, L_10);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_7, 3, sizeof(Object_t *))) = (Object_t *)L_10;
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		Hashtable_t26 * L_11 = iTween_Hash_m238(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		iTween_PunchRotation_m101(NULL /*static, unused*/, L_0, L_11, /*hidden argument*/NULL);
		return;
	}
}
// System.Void iTween::PunchRotation(UnityEngine.GameObject,System.Collections.Hashtable)
extern TypeInfo* iTween_t23_il2cpp_TypeInfo_var;
extern TypeInfo* EaseType_t9_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral28;
extern Il2CppCodeGenString* _stringLiteral68;
extern Il2CppCodeGenString* _stringLiteral30;
extern Il2CppCodeGenString* _stringLiteral57;
extern Il2CppCodeGenString* _stringLiteral37;
extern "C" void iTween_PunchRotation_m101 (Object_t * __this /* static, unused */, GameObject_t34 * ___target, Hashtable_t26 * ___args, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		iTween_t23_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		EaseType_t9_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		_stringLiteral28 = il2cpp_codegen_string_literal_from_index(28);
		_stringLiteral68 = il2cpp_codegen_string_literal_from_index(68);
		_stringLiteral30 = il2cpp_codegen_string_literal_from_index(30);
		_stringLiteral57 = il2cpp_codegen_string_literal_from_index(57);
		_stringLiteral37 = il2cpp_codegen_string_literal_from_index(37);
		s_Il2CppMethodIntialized = true;
	}
	{
		Hashtable_t26 * L_0 = ___args;
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		Hashtable_t26 * L_1 = iTween_CleanArgs_m251(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		___args = L_1;
		Hashtable_t26 * L_2 = ___args;
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(22 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_2, _stringLiteral28, _stringLiteral68);
		Hashtable_t26 * L_3 = ___args;
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(22 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_3, _stringLiteral30, _stringLiteral57);
		Hashtable_t26 * L_4 = ___args;
		int32_t L_5 = ((int32_t)32);
		Object_t * L_6 = Box(EaseType_t9_il2cpp_TypeInfo_var, &L_5);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(22 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_4, _stringLiteral37, L_6);
		GameObject_t34 * L_7 = ___target;
		Hashtable_t26 * L_8 = ___args;
		iTween_Launch_m250(NULL /*static, unused*/, L_7, L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void iTween::PunchScale(UnityEngine.GameObject,UnityEngine.Vector3,System.Single)
extern TypeInfo* ObjectU5BU5D_t41_il2cpp_TypeInfo_var;
extern TypeInfo* Vector3_t14_il2cpp_TypeInfo_var;
extern TypeInfo* Single_t51_il2cpp_TypeInfo_var;
extern TypeInfo* iTween_t23_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral21;
extern Il2CppCodeGenString* _stringLiteral22;
extern "C" void iTween_PunchScale_m102 (Object_t * __this /* static, unused */, GameObject_t34 * ___target, Vector3_t14  ___amount, float ___time, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t41_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5);
		Vector3_t14_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13);
		Single_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		iTween_t23_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		_stringLiteral21 = il2cpp_codegen_string_literal_from_index(21);
		_stringLiteral22 = il2cpp_codegen_string_literal_from_index(22);
		s_Il2CppMethodIntialized = true;
	}
	{
		GameObject_t34 * L_0 = ___target;
		ObjectU5BU5D_t41* L_1 = ((ObjectU5BU5D_t41*)SZArrayNew(ObjectU5BU5D_t41_il2cpp_TypeInfo_var, 4));
		ArrayElementTypeCheck (L_1, _stringLiteral21);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_1, 0, sizeof(Object_t *))) = (Object_t *)_stringLiteral21;
		ObjectU5BU5D_t41* L_2 = L_1;
		Vector3_t14  L_3 = ___amount;
		Vector3_t14  L_4 = L_3;
		Object_t * L_5 = Box(Vector3_t14_il2cpp_TypeInfo_var, &L_4);
		ArrayElementTypeCheck (L_2, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1, sizeof(Object_t *))) = (Object_t *)L_5;
		ObjectU5BU5D_t41* L_6 = L_2;
		ArrayElementTypeCheck (L_6, _stringLiteral22);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 2, sizeof(Object_t *))) = (Object_t *)_stringLiteral22;
		ObjectU5BU5D_t41* L_7 = L_6;
		float L_8 = ___time;
		float L_9 = L_8;
		Object_t * L_10 = Box(Single_t51_il2cpp_TypeInfo_var, &L_9);
		ArrayElementTypeCheck (L_7, L_10);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_7, 3, sizeof(Object_t *))) = (Object_t *)L_10;
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		Hashtable_t26 * L_11 = iTween_Hash_m238(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		iTween_PunchScale_m103(NULL /*static, unused*/, L_0, L_11, /*hidden argument*/NULL);
		return;
	}
}
// System.Void iTween::PunchScale(UnityEngine.GameObject,System.Collections.Hashtable)
extern TypeInfo* iTween_t23_il2cpp_TypeInfo_var;
extern TypeInfo* EaseType_t9_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral28;
extern Il2CppCodeGenString* _stringLiteral68;
extern Il2CppCodeGenString* _stringLiteral30;
extern Il2CppCodeGenString* _stringLiteral61;
extern Il2CppCodeGenString* _stringLiteral37;
extern "C" void iTween_PunchScale_m103 (Object_t * __this /* static, unused */, GameObject_t34 * ___target, Hashtable_t26 * ___args, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		iTween_t23_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		EaseType_t9_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		_stringLiteral28 = il2cpp_codegen_string_literal_from_index(28);
		_stringLiteral68 = il2cpp_codegen_string_literal_from_index(68);
		_stringLiteral30 = il2cpp_codegen_string_literal_from_index(30);
		_stringLiteral61 = il2cpp_codegen_string_literal_from_index(61);
		_stringLiteral37 = il2cpp_codegen_string_literal_from_index(37);
		s_Il2CppMethodIntialized = true;
	}
	{
		Hashtable_t26 * L_0 = ___args;
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		Hashtable_t26 * L_1 = iTween_CleanArgs_m251(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		___args = L_1;
		Hashtable_t26 * L_2 = ___args;
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(22 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_2, _stringLiteral28, _stringLiteral68);
		Hashtable_t26 * L_3 = ___args;
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(22 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_3, _stringLiteral30, _stringLiteral61);
		Hashtable_t26 * L_4 = ___args;
		int32_t L_5 = ((int32_t)32);
		Object_t * L_6 = Box(EaseType_t9_il2cpp_TypeInfo_var, &L_5);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(22 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_4, _stringLiteral37, L_6);
		GameObject_t34 * L_7 = ___target;
		Hashtable_t26 * L_8 = ___args;
		iTween_Launch_m250(NULL /*static, unused*/, L_7, L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void iTween::GenerateTargets()
extern TypeInfo* iTween_t23_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t35_il2cpp_TypeInfo_var;
extern TypeInfo* ApplyTween_t21_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m367_MethodInfo_var;
extern const MethodInfo* iTween_ApplyFloatTargets_m133_MethodInfo_var;
extern const MethodInfo* iTween_ApplyVector2Targets_m132_MethodInfo_var;
extern const MethodInfo* iTween_ApplyVector3Targets_m131_MethodInfo_var;
extern const MethodInfo* iTween_ApplyColorTargets_m130_MethodInfo_var;
extern const MethodInfo* iTween_ApplyRectTargets_m129_MethodInfo_var;
extern const MethodInfo* iTween_ApplyColorToTargets_m134_MethodInfo_var;
extern const MethodInfo* iTween_ApplyAudioToTargets_m135_MethodInfo_var;
extern const MethodInfo* iTween_ApplyMoveToPathTargets_m137_MethodInfo_var;
extern const MethodInfo* iTween_ApplyMoveToTargets_m138_MethodInfo_var;
extern const MethodInfo* iTween_ApplyMoveByTargets_m139_MethodInfo_var;
extern const MethodInfo* iTween_ApplyScaleToTargets_m140_MethodInfo_var;
extern const MethodInfo* iTween_ApplyRotateToTargets_m142_MethodInfo_var;
extern const MethodInfo* iTween_ApplyRotateAddTargets_m143_MethodInfo_var;
extern const MethodInfo* iTween_ApplyShakePositionTargets_m144_MethodInfo_var;
extern const MethodInfo* iTween_ApplyShakeScaleTargets_m145_MethodInfo_var;
extern const MethodInfo* iTween_ApplyShakeRotationTargets_m146_MethodInfo_var;
extern const MethodInfo* iTween_ApplyPunchPositionTargets_m147_MethodInfo_var;
extern const MethodInfo* iTween_ApplyPunchRotationTargets_m148_MethodInfo_var;
extern const MethodInfo* iTween_ApplyPunchScaleTargets_m149_MethodInfo_var;
extern const MethodInfo* iTween_ApplyLookToTargets_m141_MethodInfo_var;
extern const MethodInfo* iTween_ApplyStabTargets_m136_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral29;
extern Il2CppCodeGenString* _stringLiteral35;
extern Il2CppCodeGenString* _stringLiteral49;
extern Il2CppCodeGenString* _stringLiteral62;
extern Il2CppCodeGenString* _stringLiteral61;
extern Il2CppCodeGenString* _stringLiteral58;
extern Il2CppCodeGenString* _stringLiteral67;
extern Il2CppCodeGenString* _stringLiteral68;
extern Il2CppCodeGenString* _stringLiteral60;
extern Il2CppCodeGenString* _stringLiteral51;
extern Il2CppCodeGenString* _stringLiteral34;
extern Il2CppCodeGenString* _stringLiteral31;
extern Il2CppCodeGenString* _stringLiteral32;
extern Il2CppCodeGenString* _stringLiteral33;
extern Il2CppCodeGenString* _stringLiteral26;
extern Il2CppCodeGenString* _stringLiteral66;
extern Il2CppCodeGenString* _stringLiteral65;
extern Il2CppCodeGenString* _stringLiteral64;
extern Il2CppCodeGenString* _stringLiteral59;
extern Il2CppCodeGenString* _stringLiteral57;
extern "C" void iTween_GenerateTargets_m104 (iTween_t23 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		iTween_t23_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		Dictionary_2_t35_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(35);
		ApplyTween_t21_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(37);
		Dictionary_2__ctor_m367_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483658);
		iTween_ApplyFloatTargets_m133_MethodInfo_var = il2cpp_codegen_method_info_from_index(11);
		iTween_ApplyVector2Targets_m132_MethodInfo_var = il2cpp_codegen_method_info_from_index(12);
		iTween_ApplyVector3Targets_m131_MethodInfo_var = il2cpp_codegen_method_info_from_index(13);
		iTween_ApplyColorTargets_m130_MethodInfo_var = il2cpp_codegen_method_info_from_index(14);
		iTween_ApplyRectTargets_m129_MethodInfo_var = il2cpp_codegen_method_info_from_index(15);
		iTween_ApplyColorToTargets_m134_MethodInfo_var = il2cpp_codegen_method_info_from_index(16);
		iTween_ApplyAudioToTargets_m135_MethodInfo_var = il2cpp_codegen_method_info_from_index(17);
		iTween_ApplyMoveToPathTargets_m137_MethodInfo_var = il2cpp_codegen_method_info_from_index(18);
		iTween_ApplyMoveToTargets_m138_MethodInfo_var = il2cpp_codegen_method_info_from_index(19);
		iTween_ApplyMoveByTargets_m139_MethodInfo_var = il2cpp_codegen_method_info_from_index(20);
		iTween_ApplyScaleToTargets_m140_MethodInfo_var = il2cpp_codegen_method_info_from_index(21);
		iTween_ApplyRotateToTargets_m142_MethodInfo_var = il2cpp_codegen_method_info_from_index(22);
		iTween_ApplyRotateAddTargets_m143_MethodInfo_var = il2cpp_codegen_method_info_from_index(23);
		iTween_ApplyShakePositionTargets_m144_MethodInfo_var = il2cpp_codegen_method_info_from_index(24);
		iTween_ApplyShakeScaleTargets_m145_MethodInfo_var = il2cpp_codegen_method_info_from_index(25);
		iTween_ApplyShakeRotationTargets_m146_MethodInfo_var = il2cpp_codegen_method_info_from_index(26);
		iTween_ApplyPunchPositionTargets_m147_MethodInfo_var = il2cpp_codegen_method_info_from_index(27);
		iTween_ApplyPunchRotationTargets_m148_MethodInfo_var = il2cpp_codegen_method_info_from_index(28);
		iTween_ApplyPunchScaleTargets_m149_MethodInfo_var = il2cpp_codegen_method_info_from_index(29);
		iTween_ApplyLookToTargets_m141_MethodInfo_var = il2cpp_codegen_method_info_from_index(30);
		iTween_ApplyStabTargets_m136_MethodInfo_var = il2cpp_codegen_method_info_from_index(31);
		_stringLiteral29 = il2cpp_codegen_string_literal_from_index(29);
		_stringLiteral35 = il2cpp_codegen_string_literal_from_index(35);
		_stringLiteral49 = il2cpp_codegen_string_literal_from_index(49);
		_stringLiteral62 = il2cpp_codegen_string_literal_from_index(62);
		_stringLiteral61 = il2cpp_codegen_string_literal_from_index(61);
		_stringLiteral58 = il2cpp_codegen_string_literal_from_index(58);
		_stringLiteral67 = il2cpp_codegen_string_literal_from_index(67);
		_stringLiteral68 = il2cpp_codegen_string_literal_from_index(68);
		_stringLiteral60 = il2cpp_codegen_string_literal_from_index(60);
		_stringLiteral51 = il2cpp_codegen_string_literal_from_index(51);
		_stringLiteral34 = il2cpp_codegen_string_literal_from_index(34);
		_stringLiteral31 = il2cpp_codegen_string_literal_from_index(31);
		_stringLiteral32 = il2cpp_codegen_string_literal_from_index(32);
		_stringLiteral33 = il2cpp_codegen_string_literal_from_index(33);
		_stringLiteral26 = il2cpp_codegen_string_literal_from_index(26);
		_stringLiteral66 = il2cpp_codegen_string_literal_from_index(66);
		_stringLiteral65 = il2cpp_codegen_string_literal_from_index(65);
		_stringLiteral64 = il2cpp_codegen_string_literal_from_index(64);
		_stringLiteral59 = il2cpp_codegen_string_literal_from_index(59);
		_stringLiteral57 = il2cpp_codegen_string_literal_from_index(57);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	Dictionary_2_t35 * V_1 = {0};
	int32_t V_2 = 0;
	String_t* V_3 = {0};
	int32_t V_4 = 0;
	{
		String_t* L_0 = (__this->___type_5);
		V_0 = L_0;
		String_t* L_1 = V_0;
		if (!L_1)
		{
			goto IL_078f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		Dictionary_2_t35 * L_2 = ((iTween_t23_StaticFields*)iTween_t23_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24mapA_50;
		if (L_2)
		{
			goto IL_009e;
		}
	}
	{
		Dictionary_2_t35 * L_3 = (Dictionary_2_t35 *)il2cpp_codegen_object_new (Dictionary_2_t35_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m367(L_3, ((int32_t)10), /*hidden argument*/Dictionary_2__ctor_m367_MethodInfo_var);
		V_1 = L_3;
		Dictionary_2_t35 * L_4 = V_1;
		VirtActionInvoker2< String_t*, int32_t >::Invoke(26 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_4, _stringLiteral29, 0);
		Dictionary_2_t35 * L_5 = V_1;
		VirtActionInvoker2< String_t*, int32_t >::Invoke(26 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_5, _stringLiteral35, 1);
		Dictionary_2_t35 * L_6 = V_1;
		VirtActionInvoker2< String_t*, int32_t >::Invoke(26 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_6, _stringLiteral49, 2);
		Dictionary_2_t35 * L_7 = V_1;
		VirtActionInvoker2< String_t*, int32_t >::Invoke(26 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_7, _stringLiteral62, 3);
		Dictionary_2_t35 * L_8 = V_1;
		VirtActionInvoker2< String_t*, int32_t >::Invoke(26 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_8, _stringLiteral61, 4);
		Dictionary_2_t35 * L_9 = V_1;
		VirtActionInvoker2< String_t*, int32_t >::Invoke(26 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_9, _stringLiteral58, 5);
		Dictionary_2_t35 * L_10 = V_1;
		VirtActionInvoker2< String_t*, int32_t >::Invoke(26 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_10, _stringLiteral67, 6);
		Dictionary_2_t35 * L_11 = V_1;
		VirtActionInvoker2< String_t*, int32_t >::Invoke(26 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_11, _stringLiteral68, 7);
		Dictionary_2_t35 * L_12 = V_1;
		VirtActionInvoker2< String_t*, int32_t >::Invoke(26 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_12, _stringLiteral60, 8);
		Dictionary_2_t35 * L_13 = V_1;
		VirtActionInvoker2< String_t*, int32_t >::Invoke(26 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_13, _stringLiteral51, ((int32_t)9));
		Dictionary_2_t35 * L_14 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		((iTween_t23_StaticFields*)iTween_t23_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24mapA_50 = L_14;
	}

IL_009e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		Dictionary_2_t35 * L_15 = ((iTween_t23_StaticFields*)iTween_t23_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24mapA_50;
		String_t* L_16 = V_0;
		bool L_17 = (bool)VirtFuncInvoker2< bool, String_t*, int32_t* >::Invoke(31 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::TryGetValue(!0,!1&) */, L_15, L_16, (&V_2));
		if (!L_17)
		{
			goto IL_078f;
		}
	}
	{
		int32_t L_18 = V_2;
		if (L_18 == 0)
		{
			goto IL_00e3;
		}
		if (L_18 == 1)
		{
			goto IL_020b;
		}
		if (L_18 == 2)
		{
			goto IL_027b;
		}
		if (L_18 == 3)
		{
			goto IL_02eb;
		}
		if (L_18 == 4)
		{
			goto IL_03ca;
		}
		if (L_18 == 5)
		{
			goto IL_0498;
		}
		if (L_18 == 6)
		{
			goto IL_0566;
		}
		if (L_18 == 7)
		{
			goto IL_0634;
		}
		if (L_18 == 8)
		{
			goto IL_0702;
		}
		if (L_18 == 9)
		{
			goto IL_0772;
		}
	}
	{
		goto IL_078f;
	}

IL_00e3:
	{
		String_t* L_19 = (__this->___method_6);
		V_3 = L_19;
		String_t* L_20 = V_3;
		if (!L_20)
		{
			goto IL_0206;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		Dictionary_2_t35 * L_21 = ((iTween_t23_StaticFields*)iTween_t23_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map1_41;
		if (L_21)
		{
			goto IL_0143;
		}
	}
	{
		Dictionary_2_t35 * L_22 = (Dictionary_2_t35 *)il2cpp_codegen_object_new (Dictionary_2_t35_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m367(L_22, 5, /*hidden argument*/Dictionary_2__ctor_m367_MethodInfo_var);
		V_1 = L_22;
		Dictionary_2_t35 * L_23 = V_1;
		VirtActionInvoker2< String_t*, int32_t >::Invoke(26 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_23, _stringLiteral34, 0);
		Dictionary_2_t35 * L_24 = V_1;
		VirtActionInvoker2< String_t*, int32_t >::Invoke(26 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_24, _stringLiteral31, 1);
		Dictionary_2_t35 * L_25 = V_1;
		VirtActionInvoker2< String_t*, int32_t >::Invoke(26 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_25, _stringLiteral32, 2);
		Dictionary_2_t35 * L_26 = V_1;
		VirtActionInvoker2< String_t*, int32_t >::Invoke(26 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_26, _stringLiteral35, 3);
		Dictionary_2_t35 * L_27 = V_1;
		VirtActionInvoker2< String_t*, int32_t >::Invoke(26 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_27, _stringLiteral33, 4);
		Dictionary_2_t35 * L_28 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		((iTween_t23_StaticFields*)iTween_t23_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map1_41 = L_28;
	}

IL_0143:
	{
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		Dictionary_2_t35 * L_29 = ((iTween_t23_StaticFields*)iTween_t23_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map1_41;
		String_t* L_30 = V_3;
		bool L_31 = (bool)VirtFuncInvoker2< bool, String_t*, int32_t* >::Invoke(31 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::TryGetValue(!0,!1&) */, L_29, L_30, (&V_4));
		if (!L_31)
		{
			goto IL_0206;
		}
	}
	{
		int32_t L_32 = V_4;
		if (L_32 == 0)
		{
			goto IL_0175;
		}
		if (L_32 == 1)
		{
			goto IL_0192;
		}
		if (L_32 == 2)
		{
			goto IL_01af;
		}
		if (L_32 == 3)
		{
			goto IL_01cc;
		}
		if (L_32 == 4)
		{
			goto IL_01e9;
		}
	}
	{
		goto IL_0206;
	}

IL_0175:
	{
		iTween_GenerateFloatTargets_m109(__this, /*hidden argument*/NULL);
		IntPtr_t L_33 = { (void*)iTween_ApplyFloatTargets_m133_MethodInfo_var };
		ApplyTween_t21 * L_34 = (ApplyTween_t21 *)il2cpp_codegen_object_new (ApplyTween_t21_il2cpp_TypeInfo_var);
		ApplyTween__ctor_m20(L_34, __this, L_33, /*hidden argument*/NULL);
		__this->___apply_26 = L_34;
		goto IL_0206;
	}

IL_0192:
	{
		iTween_GenerateVector2Targets_m108(__this, /*hidden argument*/NULL);
		IntPtr_t L_35 = { (void*)iTween_ApplyVector2Targets_m132_MethodInfo_var };
		ApplyTween_t21 * L_36 = (ApplyTween_t21 *)il2cpp_codegen_object_new (ApplyTween_t21_il2cpp_TypeInfo_var);
		ApplyTween__ctor_m20(L_36, __this, L_35, /*hidden argument*/NULL);
		__this->___apply_26 = L_36;
		goto IL_0206;
	}

IL_01af:
	{
		iTween_GenerateVector3Targets_m107(__this, /*hidden argument*/NULL);
		IntPtr_t L_37 = { (void*)iTween_ApplyVector3Targets_m131_MethodInfo_var };
		ApplyTween_t21 * L_38 = (ApplyTween_t21 *)il2cpp_codegen_object_new (ApplyTween_t21_il2cpp_TypeInfo_var);
		ApplyTween__ctor_m20(L_38, __this, L_37, /*hidden argument*/NULL);
		__this->___apply_26 = L_38;
		goto IL_0206;
	}

IL_01cc:
	{
		iTween_GenerateColorTargets_m106(__this, /*hidden argument*/NULL);
		IntPtr_t L_39 = { (void*)iTween_ApplyColorTargets_m130_MethodInfo_var };
		ApplyTween_t21 * L_40 = (ApplyTween_t21 *)il2cpp_codegen_object_new (ApplyTween_t21_il2cpp_TypeInfo_var);
		ApplyTween__ctor_m20(L_40, __this, L_39, /*hidden argument*/NULL);
		__this->___apply_26 = L_40;
		goto IL_0206;
	}

IL_01e9:
	{
		iTween_GenerateRectTargets_m105(__this, /*hidden argument*/NULL);
		IntPtr_t L_41 = { (void*)iTween_ApplyRectTargets_m129_MethodInfo_var };
		ApplyTween_t21 * L_42 = (ApplyTween_t21 *)il2cpp_codegen_object_new (ApplyTween_t21_il2cpp_TypeInfo_var);
		ApplyTween__ctor_m20(L_42, __this, L_41, /*hidden argument*/NULL);
		__this->___apply_26 = L_42;
		goto IL_0206;
	}

IL_0206:
	{
		goto IL_078f;
	}

IL_020b:
	{
		String_t* L_43 = (__this->___method_6);
		V_3 = L_43;
		String_t* L_44 = V_3;
		if (!L_44)
		{
			goto IL_0276;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		Dictionary_2_t35 * L_45 = ((iTween_t23_StaticFields*)iTween_t23_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map2_42;
		if (L_45)
		{
			goto IL_023b;
		}
	}
	{
		Dictionary_2_t35 * L_46 = (Dictionary_2_t35 *)il2cpp_codegen_object_new (Dictionary_2_t35_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m367(L_46, 1, /*hidden argument*/Dictionary_2__ctor_m367_MethodInfo_var);
		V_1 = L_46;
		Dictionary_2_t35 * L_47 = V_1;
		VirtActionInvoker2< String_t*, int32_t >::Invoke(26 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_47, _stringLiteral26, 0);
		Dictionary_2_t35 * L_48 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		((iTween_t23_StaticFields*)iTween_t23_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map2_42 = L_48;
	}

IL_023b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		Dictionary_2_t35 * L_49 = ((iTween_t23_StaticFields*)iTween_t23_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map2_42;
		String_t* L_50 = V_3;
		bool L_51 = (bool)VirtFuncInvoker2< bool, String_t*, int32_t* >::Invoke(31 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::TryGetValue(!0,!1&) */, L_49, L_50, (&V_4));
		if (!L_51)
		{
			goto IL_0276;
		}
	}
	{
		int32_t L_52 = V_4;
		if (!L_52)
		{
			goto IL_0259;
		}
	}
	{
		goto IL_0276;
	}

IL_0259:
	{
		iTween_GenerateColorToTargets_m110(__this, /*hidden argument*/NULL);
		IntPtr_t L_53 = { (void*)iTween_ApplyColorToTargets_m134_MethodInfo_var };
		ApplyTween_t21 * L_54 = (ApplyTween_t21 *)il2cpp_codegen_object_new (ApplyTween_t21_il2cpp_TypeInfo_var);
		ApplyTween__ctor_m20(L_54, __this, L_53, /*hidden argument*/NULL);
		__this->___apply_26 = L_54;
		goto IL_0276;
	}

IL_0276:
	{
		goto IL_078f;
	}

IL_027b:
	{
		String_t* L_55 = (__this->___method_6);
		V_3 = L_55;
		String_t* L_56 = V_3;
		if (!L_56)
		{
			goto IL_02e6;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		Dictionary_2_t35 * L_57 = ((iTween_t23_StaticFields*)iTween_t23_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map3_43;
		if (L_57)
		{
			goto IL_02ab;
		}
	}
	{
		Dictionary_2_t35 * L_58 = (Dictionary_2_t35 *)il2cpp_codegen_object_new (Dictionary_2_t35_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m367(L_58, 1, /*hidden argument*/Dictionary_2__ctor_m367_MethodInfo_var);
		V_1 = L_58;
		Dictionary_2_t35 * L_59 = V_1;
		VirtActionInvoker2< String_t*, int32_t >::Invoke(26 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_59, _stringLiteral26, 0);
		Dictionary_2_t35 * L_60 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		((iTween_t23_StaticFields*)iTween_t23_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map3_43 = L_60;
	}

IL_02ab:
	{
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		Dictionary_2_t35 * L_61 = ((iTween_t23_StaticFields*)iTween_t23_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map3_43;
		String_t* L_62 = V_3;
		bool L_63 = (bool)VirtFuncInvoker2< bool, String_t*, int32_t* >::Invoke(31 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::TryGetValue(!0,!1&) */, L_61, L_62, (&V_4));
		if (!L_63)
		{
			goto IL_02e6;
		}
	}
	{
		int32_t L_64 = V_4;
		if (!L_64)
		{
			goto IL_02c9;
		}
	}
	{
		goto IL_02e6;
	}

IL_02c9:
	{
		iTween_GenerateAudioToTargets_m111(__this, /*hidden argument*/NULL);
		IntPtr_t L_65 = { (void*)iTween_ApplyAudioToTargets_m135_MethodInfo_var };
		ApplyTween_t21 * L_66 = (ApplyTween_t21 *)il2cpp_codegen_object_new (ApplyTween_t21_il2cpp_TypeInfo_var);
		ApplyTween__ctor_m20(L_66, __this, L_65, /*hidden argument*/NULL);
		__this->___apply_26 = L_66;
		goto IL_02e6;
	}

IL_02e6:
	{
		goto IL_078f;
	}

IL_02eb:
	{
		String_t* L_67 = (__this->___method_6);
		V_3 = L_67;
		String_t* L_68 = V_3;
		if (!L_68)
		{
			goto IL_03c5;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		Dictionary_2_t35 * L_69 = ((iTween_t23_StaticFields*)iTween_t23_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map4_44;
		if (L_69)
		{
			goto IL_0333;
		}
	}
	{
		Dictionary_2_t35 * L_70 = (Dictionary_2_t35 *)il2cpp_codegen_object_new (Dictionary_2_t35_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m367(L_70, 3, /*hidden argument*/Dictionary_2__ctor_m367_MethodInfo_var);
		V_1 = L_70;
		Dictionary_2_t35 * L_71 = V_1;
		VirtActionInvoker2< String_t*, int32_t >::Invoke(26 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_71, _stringLiteral26, 0);
		Dictionary_2_t35 * L_72 = V_1;
		VirtActionInvoker2< String_t*, int32_t >::Invoke(26 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_72, _stringLiteral66, 1);
		Dictionary_2_t35 * L_73 = V_1;
		VirtActionInvoker2< String_t*, int32_t >::Invoke(26 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_73, _stringLiteral65, 1);
		Dictionary_2_t35 * L_74 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		((iTween_t23_StaticFields*)iTween_t23_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map4_44 = L_74;
	}

IL_0333:
	{
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		Dictionary_2_t35 * L_75 = ((iTween_t23_StaticFields*)iTween_t23_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map4_44;
		String_t* L_76 = V_3;
		bool L_77 = (bool)VirtFuncInvoker2< bool, String_t*, int32_t* >::Invoke(31 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::TryGetValue(!0,!1&) */, L_75, L_76, (&V_4));
		if (!L_77)
		{
			goto IL_03c5;
		}
	}
	{
		int32_t L_78 = V_4;
		if (!L_78)
		{
			goto IL_0359;
		}
	}
	{
		int32_t L_79 = V_4;
		if ((((int32_t)L_79) == ((int32_t)1)))
		{
			goto IL_03a8;
		}
	}
	{
		goto IL_03c5;
	}

IL_0359:
	{
		Hashtable_t26 * L_80 = (__this->___tweenArguments_23);
		bool L_81 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(26 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_80, _stringLiteral64);
		if (!L_81)
		{
			goto IL_038b;
		}
	}
	{
		iTween_GenerateMoveToPathTargets_m114(__this, /*hidden argument*/NULL);
		IntPtr_t L_82 = { (void*)iTween_ApplyMoveToPathTargets_m137_MethodInfo_var };
		ApplyTween_t21 * L_83 = (ApplyTween_t21 *)il2cpp_codegen_object_new (ApplyTween_t21_il2cpp_TypeInfo_var);
		ApplyTween__ctor_m20(L_83, __this, L_82, /*hidden argument*/NULL);
		__this->___apply_26 = L_83;
		goto IL_03a3;
	}

IL_038b:
	{
		iTween_GenerateMoveToTargets_m115(__this, /*hidden argument*/NULL);
		IntPtr_t L_84 = { (void*)iTween_ApplyMoveToTargets_m138_MethodInfo_var };
		ApplyTween_t21 * L_85 = (ApplyTween_t21 *)il2cpp_codegen_object_new (ApplyTween_t21_il2cpp_TypeInfo_var);
		ApplyTween__ctor_m20(L_85, __this, L_84, /*hidden argument*/NULL);
		__this->___apply_26 = L_85;
	}

IL_03a3:
	{
		goto IL_03c5;
	}

IL_03a8:
	{
		iTween_GenerateMoveByTargets_m116(__this, /*hidden argument*/NULL);
		IntPtr_t L_86 = { (void*)iTween_ApplyMoveByTargets_m139_MethodInfo_var };
		ApplyTween_t21 * L_87 = (ApplyTween_t21 *)il2cpp_codegen_object_new (ApplyTween_t21_il2cpp_TypeInfo_var);
		ApplyTween__ctor_m20(L_87, __this, L_86, /*hidden argument*/NULL);
		__this->___apply_26 = L_87;
		goto IL_03c5;
	}

IL_03c5:
	{
		goto IL_078f;
	}

IL_03ca:
	{
		String_t* L_88 = (__this->___method_6);
		V_3 = L_88;
		String_t* L_89 = V_3;
		if (!L_89)
		{
			goto IL_0493;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		Dictionary_2_t35 * L_90 = ((iTween_t23_StaticFields*)iTween_t23_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map5_45;
		if (L_90)
		{
			goto IL_0412;
		}
	}
	{
		Dictionary_2_t35 * L_91 = (Dictionary_2_t35 *)il2cpp_codegen_object_new (Dictionary_2_t35_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m367(L_91, 3, /*hidden argument*/Dictionary_2__ctor_m367_MethodInfo_var);
		V_1 = L_91;
		Dictionary_2_t35 * L_92 = V_1;
		VirtActionInvoker2< String_t*, int32_t >::Invoke(26 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_92, _stringLiteral26, 0);
		Dictionary_2_t35 * L_93 = V_1;
		VirtActionInvoker2< String_t*, int32_t >::Invoke(26 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_93, _stringLiteral66, 1);
		Dictionary_2_t35 * L_94 = V_1;
		VirtActionInvoker2< String_t*, int32_t >::Invoke(26 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_94, _stringLiteral65, 2);
		Dictionary_2_t35 * L_95 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		((iTween_t23_StaticFields*)iTween_t23_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map5_45 = L_95;
	}

IL_0412:
	{
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		Dictionary_2_t35 * L_96 = ((iTween_t23_StaticFields*)iTween_t23_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map5_45;
		String_t* L_97 = V_3;
		bool L_98 = (bool)VirtFuncInvoker2< bool, String_t*, int32_t* >::Invoke(31 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::TryGetValue(!0,!1&) */, L_96, L_97, (&V_4));
		if (!L_98)
		{
			goto IL_0493;
		}
	}
	{
		int32_t L_99 = V_4;
		if (L_99 == 0)
		{
			goto IL_043c;
		}
		if (L_99 == 1)
		{
			goto IL_0459;
		}
		if (L_99 == 2)
		{
			goto IL_0476;
		}
	}
	{
		goto IL_0493;
	}

IL_043c:
	{
		iTween_GenerateScaleToTargets_m117(__this, /*hidden argument*/NULL);
		IntPtr_t L_100 = { (void*)iTween_ApplyScaleToTargets_m140_MethodInfo_var };
		ApplyTween_t21 * L_101 = (ApplyTween_t21 *)il2cpp_codegen_object_new (ApplyTween_t21_il2cpp_TypeInfo_var);
		ApplyTween__ctor_m20(L_101, __this, L_100, /*hidden argument*/NULL);
		__this->___apply_26 = L_101;
		goto IL_0493;
	}

IL_0459:
	{
		iTween_GenerateScaleByTargets_m118(__this, /*hidden argument*/NULL);
		IntPtr_t L_102 = { (void*)iTween_ApplyScaleToTargets_m140_MethodInfo_var };
		ApplyTween_t21 * L_103 = (ApplyTween_t21 *)il2cpp_codegen_object_new (ApplyTween_t21_il2cpp_TypeInfo_var);
		ApplyTween__ctor_m20(L_103, __this, L_102, /*hidden argument*/NULL);
		__this->___apply_26 = L_103;
		goto IL_0493;
	}

IL_0476:
	{
		iTween_GenerateScaleAddTargets_m119(__this, /*hidden argument*/NULL);
		IntPtr_t L_104 = { (void*)iTween_ApplyScaleToTargets_m140_MethodInfo_var };
		ApplyTween_t21 * L_105 = (ApplyTween_t21 *)il2cpp_codegen_object_new (ApplyTween_t21_il2cpp_TypeInfo_var);
		ApplyTween__ctor_m20(L_105, __this, L_104, /*hidden argument*/NULL);
		__this->___apply_26 = L_105;
		goto IL_0493;
	}

IL_0493:
	{
		goto IL_078f;
	}

IL_0498:
	{
		String_t* L_106 = (__this->___method_6);
		V_3 = L_106;
		String_t* L_107 = V_3;
		if (!L_107)
		{
			goto IL_0561;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		Dictionary_2_t35 * L_108 = ((iTween_t23_StaticFields*)iTween_t23_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map6_46;
		if (L_108)
		{
			goto IL_04e0;
		}
	}
	{
		Dictionary_2_t35 * L_109 = (Dictionary_2_t35 *)il2cpp_codegen_object_new (Dictionary_2_t35_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m367(L_109, 3, /*hidden argument*/Dictionary_2__ctor_m367_MethodInfo_var);
		V_1 = L_109;
		Dictionary_2_t35 * L_110 = V_1;
		VirtActionInvoker2< String_t*, int32_t >::Invoke(26 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_110, _stringLiteral26, 0);
		Dictionary_2_t35 * L_111 = V_1;
		VirtActionInvoker2< String_t*, int32_t >::Invoke(26 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_111, _stringLiteral65, 1);
		Dictionary_2_t35 * L_112 = V_1;
		VirtActionInvoker2< String_t*, int32_t >::Invoke(26 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_112, _stringLiteral66, 2);
		Dictionary_2_t35 * L_113 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		((iTween_t23_StaticFields*)iTween_t23_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map6_46 = L_113;
	}

IL_04e0:
	{
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		Dictionary_2_t35 * L_114 = ((iTween_t23_StaticFields*)iTween_t23_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map6_46;
		String_t* L_115 = V_3;
		bool L_116 = (bool)VirtFuncInvoker2< bool, String_t*, int32_t* >::Invoke(31 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::TryGetValue(!0,!1&) */, L_114, L_115, (&V_4));
		if (!L_116)
		{
			goto IL_0561;
		}
	}
	{
		int32_t L_117 = V_4;
		if (L_117 == 0)
		{
			goto IL_050a;
		}
		if (L_117 == 1)
		{
			goto IL_0527;
		}
		if (L_117 == 2)
		{
			goto IL_0544;
		}
	}
	{
		goto IL_0561;
	}

IL_050a:
	{
		iTween_GenerateRotateToTargets_m120(__this, /*hidden argument*/NULL);
		IntPtr_t L_118 = { (void*)iTween_ApplyRotateToTargets_m142_MethodInfo_var };
		ApplyTween_t21 * L_119 = (ApplyTween_t21 *)il2cpp_codegen_object_new (ApplyTween_t21_il2cpp_TypeInfo_var);
		ApplyTween__ctor_m20(L_119, __this, L_118, /*hidden argument*/NULL);
		__this->___apply_26 = L_119;
		goto IL_0561;
	}

IL_0527:
	{
		iTween_GenerateRotateAddTargets_m121(__this, /*hidden argument*/NULL);
		IntPtr_t L_120 = { (void*)iTween_ApplyRotateAddTargets_m143_MethodInfo_var };
		ApplyTween_t21 * L_121 = (ApplyTween_t21 *)il2cpp_codegen_object_new (ApplyTween_t21_il2cpp_TypeInfo_var);
		ApplyTween__ctor_m20(L_121, __this, L_120, /*hidden argument*/NULL);
		__this->___apply_26 = L_121;
		goto IL_0561;
	}

IL_0544:
	{
		iTween_GenerateRotateByTargets_m122(__this, /*hidden argument*/NULL);
		IntPtr_t L_122 = { (void*)iTween_ApplyRotateAddTargets_m143_MethodInfo_var };
		ApplyTween_t21 * L_123 = (ApplyTween_t21 *)il2cpp_codegen_object_new (ApplyTween_t21_il2cpp_TypeInfo_var);
		ApplyTween__ctor_m20(L_123, __this, L_122, /*hidden argument*/NULL);
		__this->___apply_26 = L_123;
		goto IL_0561;
	}

IL_0561:
	{
		goto IL_078f;
	}

IL_0566:
	{
		String_t* L_124 = (__this->___method_6);
		V_3 = L_124;
		String_t* L_125 = V_3;
		if (!L_125)
		{
			goto IL_062f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		Dictionary_2_t35 * L_126 = ((iTween_t23_StaticFields*)iTween_t23_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map7_47;
		if (L_126)
		{
			goto IL_05ae;
		}
	}
	{
		Dictionary_2_t35 * L_127 = (Dictionary_2_t35 *)il2cpp_codegen_object_new (Dictionary_2_t35_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m367(L_127, 3, /*hidden argument*/Dictionary_2__ctor_m367_MethodInfo_var);
		V_1 = L_127;
		Dictionary_2_t35 * L_128 = V_1;
		VirtActionInvoker2< String_t*, int32_t >::Invoke(26 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_128, _stringLiteral59, 0);
		Dictionary_2_t35 * L_129 = V_1;
		VirtActionInvoker2< String_t*, int32_t >::Invoke(26 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_129, _stringLiteral61, 1);
		Dictionary_2_t35 * L_130 = V_1;
		VirtActionInvoker2< String_t*, int32_t >::Invoke(26 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_130, _stringLiteral57, 2);
		Dictionary_2_t35 * L_131 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		((iTween_t23_StaticFields*)iTween_t23_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map7_47 = L_131;
	}

IL_05ae:
	{
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		Dictionary_2_t35 * L_132 = ((iTween_t23_StaticFields*)iTween_t23_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map7_47;
		String_t* L_133 = V_3;
		bool L_134 = (bool)VirtFuncInvoker2< bool, String_t*, int32_t* >::Invoke(31 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::TryGetValue(!0,!1&) */, L_132, L_133, (&V_4));
		if (!L_134)
		{
			goto IL_062f;
		}
	}
	{
		int32_t L_135 = V_4;
		if (L_135 == 0)
		{
			goto IL_05d8;
		}
		if (L_135 == 1)
		{
			goto IL_05f5;
		}
		if (L_135 == 2)
		{
			goto IL_0612;
		}
	}
	{
		goto IL_062f;
	}

IL_05d8:
	{
		iTween_GenerateShakePositionTargets_m123(__this, /*hidden argument*/NULL);
		IntPtr_t L_136 = { (void*)iTween_ApplyShakePositionTargets_m144_MethodInfo_var };
		ApplyTween_t21 * L_137 = (ApplyTween_t21 *)il2cpp_codegen_object_new (ApplyTween_t21_il2cpp_TypeInfo_var);
		ApplyTween__ctor_m20(L_137, __this, L_136, /*hidden argument*/NULL);
		__this->___apply_26 = L_137;
		goto IL_062f;
	}

IL_05f5:
	{
		iTween_GenerateShakeScaleTargets_m124(__this, /*hidden argument*/NULL);
		IntPtr_t L_138 = { (void*)iTween_ApplyShakeScaleTargets_m145_MethodInfo_var };
		ApplyTween_t21 * L_139 = (ApplyTween_t21 *)il2cpp_codegen_object_new (ApplyTween_t21_il2cpp_TypeInfo_var);
		ApplyTween__ctor_m20(L_139, __this, L_138, /*hidden argument*/NULL);
		__this->___apply_26 = L_139;
		goto IL_062f;
	}

IL_0612:
	{
		iTween_GenerateShakeRotationTargets_m125(__this, /*hidden argument*/NULL);
		IntPtr_t L_140 = { (void*)iTween_ApplyShakeRotationTargets_m146_MethodInfo_var };
		ApplyTween_t21 * L_141 = (ApplyTween_t21 *)il2cpp_codegen_object_new (ApplyTween_t21_il2cpp_TypeInfo_var);
		ApplyTween__ctor_m20(L_141, __this, L_140, /*hidden argument*/NULL);
		__this->___apply_26 = L_141;
		goto IL_062f;
	}

IL_062f:
	{
		goto IL_078f;
	}

IL_0634:
	{
		String_t* L_142 = (__this->___method_6);
		V_3 = L_142;
		String_t* L_143 = V_3;
		if (!L_143)
		{
			goto IL_06fd;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		Dictionary_2_t35 * L_144 = ((iTween_t23_StaticFields*)iTween_t23_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map8_48;
		if (L_144)
		{
			goto IL_067c;
		}
	}
	{
		Dictionary_2_t35 * L_145 = (Dictionary_2_t35 *)il2cpp_codegen_object_new (Dictionary_2_t35_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m367(L_145, 3, /*hidden argument*/Dictionary_2__ctor_m367_MethodInfo_var);
		V_1 = L_145;
		Dictionary_2_t35 * L_146 = V_1;
		VirtActionInvoker2< String_t*, int32_t >::Invoke(26 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_146, _stringLiteral59, 0);
		Dictionary_2_t35 * L_147 = V_1;
		VirtActionInvoker2< String_t*, int32_t >::Invoke(26 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_147, _stringLiteral57, 1);
		Dictionary_2_t35 * L_148 = V_1;
		VirtActionInvoker2< String_t*, int32_t >::Invoke(26 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_148, _stringLiteral61, 2);
		Dictionary_2_t35 * L_149 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		((iTween_t23_StaticFields*)iTween_t23_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map8_48 = L_149;
	}

IL_067c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		Dictionary_2_t35 * L_150 = ((iTween_t23_StaticFields*)iTween_t23_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map8_48;
		String_t* L_151 = V_3;
		bool L_152 = (bool)VirtFuncInvoker2< bool, String_t*, int32_t* >::Invoke(31 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::TryGetValue(!0,!1&) */, L_150, L_151, (&V_4));
		if (!L_152)
		{
			goto IL_06fd;
		}
	}
	{
		int32_t L_153 = V_4;
		if (L_153 == 0)
		{
			goto IL_06a6;
		}
		if (L_153 == 1)
		{
			goto IL_06c3;
		}
		if (L_153 == 2)
		{
			goto IL_06e0;
		}
	}
	{
		goto IL_06fd;
	}

IL_06a6:
	{
		iTween_GeneratePunchPositionTargets_m126(__this, /*hidden argument*/NULL);
		IntPtr_t L_154 = { (void*)iTween_ApplyPunchPositionTargets_m147_MethodInfo_var };
		ApplyTween_t21 * L_155 = (ApplyTween_t21 *)il2cpp_codegen_object_new (ApplyTween_t21_il2cpp_TypeInfo_var);
		ApplyTween__ctor_m20(L_155, __this, L_154, /*hidden argument*/NULL);
		__this->___apply_26 = L_155;
		goto IL_06fd;
	}

IL_06c3:
	{
		iTween_GeneratePunchRotationTargets_m127(__this, /*hidden argument*/NULL);
		IntPtr_t L_156 = { (void*)iTween_ApplyPunchRotationTargets_m148_MethodInfo_var };
		ApplyTween_t21 * L_157 = (ApplyTween_t21 *)il2cpp_codegen_object_new (ApplyTween_t21_il2cpp_TypeInfo_var);
		ApplyTween__ctor_m20(L_157, __this, L_156, /*hidden argument*/NULL);
		__this->___apply_26 = L_157;
		goto IL_06fd;
	}

IL_06e0:
	{
		iTween_GeneratePunchScaleTargets_m128(__this, /*hidden argument*/NULL);
		IntPtr_t L_158 = { (void*)iTween_ApplyPunchScaleTargets_m149_MethodInfo_var };
		ApplyTween_t21 * L_159 = (ApplyTween_t21 *)il2cpp_codegen_object_new (ApplyTween_t21_il2cpp_TypeInfo_var);
		ApplyTween__ctor_m20(L_159, __this, L_158, /*hidden argument*/NULL);
		__this->___apply_26 = L_159;
		goto IL_06fd;
	}

IL_06fd:
	{
		goto IL_078f;
	}

IL_0702:
	{
		String_t* L_160 = (__this->___method_6);
		V_3 = L_160;
		String_t* L_161 = V_3;
		if (!L_161)
		{
			goto IL_076d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		Dictionary_2_t35 * L_162 = ((iTween_t23_StaticFields*)iTween_t23_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map9_49;
		if (L_162)
		{
			goto IL_0732;
		}
	}
	{
		Dictionary_2_t35 * L_163 = (Dictionary_2_t35 *)il2cpp_codegen_object_new (Dictionary_2_t35_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m367(L_163, 1, /*hidden argument*/Dictionary_2__ctor_m367_MethodInfo_var);
		V_1 = L_163;
		Dictionary_2_t35 * L_164 = V_1;
		VirtActionInvoker2< String_t*, int32_t >::Invoke(26 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_164, _stringLiteral26, 0);
		Dictionary_2_t35 * L_165 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		((iTween_t23_StaticFields*)iTween_t23_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map9_49 = L_165;
	}

IL_0732:
	{
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		Dictionary_2_t35 * L_166 = ((iTween_t23_StaticFields*)iTween_t23_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map9_49;
		String_t* L_167 = V_3;
		bool L_168 = (bool)VirtFuncInvoker2< bool, String_t*, int32_t* >::Invoke(31 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::TryGetValue(!0,!1&) */, L_166, L_167, (&V_4));
		if (!L_168)
		{
			goto IL_076d;
		}
	}
	{
		int32_t L_169 = V_4;
		if (!L_169)
		{
			goto IL_0750;
		}
	}
	{
		goto IL_076d;
	}

IL_0750:
	{
		iTween_GenerateLookToTargets_m113(__this, /*hidden argument*/NULL);
		IntPtr_t L_170 = { (void*)iTween_ApplyLookToTargets_m141_MethodInfo_var };
		ApplyTween_t21 * L_171 = (ApplyTween_t21 *)il2cpp_codegen_object_new (ApplyTween_t21_il2cpp_TypeInfo_var);
		ApplyTween__ctor_m20(L_171, __this, L_170, /*hidden argument*/NULL);
		__this->___apply_26 = L_171;
		goto IL_076d;
	}

IL_076d:
	{
		goto IL_078f;
	}

IL_0772:
	{
		iTween_GenerateStabTargets_m112(__this, /*hidden argument*/NULL);
		IntPtr_t L_172 = { (void*)iTween_ApplyStabTargets_m136_MethodInfo_var };
		ApplyTween_t21 * L_173 = (ApplyTween_t21 *)il2cpp_codegen_object_new (ApplyTween_t21_il2cpp_TypeInfo_var);
		ApplyTween__ctor_m20(L_173, __this, L_172, /*hidden argument*/NULL);
		__this->___apply_26 = L_173;
		goto IL_078f;
	}

IL_078f:
	{
		return;
	}
}
// System.Void iTween::GenerateRectTargets()
extern TypeInfo* RectU5BU5D_t31_il2cpp_TypeInfo_var;
extern TypeInfo* Rect_t37_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral25;
extern Il2CppCodeGenString* _stringLiteral26;
extern "C" void iTween_GenerateRectTargets_m105 (iTween_t23 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RectU5BU5D_t31_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(38);
		Rect_t37_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(20);
		_stringLiteral25 = il2cpp_codegen_string_literal_from_index(25);
		_stringLiteral26 = il2cpp_codegen_string_literal_from_index(26);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___rects_32 = ((RectU5BU5D_t31*)SZArrayNew(RectU5BU5D_t31_il2cpp_TypeInfo_var, 3));
		RectU5BU5D_t31* L_0 = (__this->___rects_32);
		Hashtable_t26 * L_1 = (__this->___tweenArguments_23);
		Object_t * L_2 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_1, _stringLiteral25);
		(*(Rect_t37 *)((Rect_t37 *)(Rect_t37 *)SZArrayLdElema(L_0, 0, sizeof(Rect_t37 )))) = ((*(Rect_t37 *)((Rect_t37 *)UnBox (L_2, Rect_t37_il2cpp_TypeInfo_var))));
		RectU5BU5D_t31* L_3 = (__this->___rects_32);
		Hashtable_t26 * L_4 = (__this->___tweenArguments_23);
		Object_t * L_5 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_4, _stringLiteral26);
		(*(Rect_t37 *)((Rect_t37 *)(Rect_t37 *)SZArrayLdElema(L_3, 1, sizeof(Rect_t37 )))) = ((*(Rect_t37 *)((Rect_t37 *)UnBox (L_5, Rect_t37_il2cpp_TypeInfo_var))));
		return;
	}
}
// System.Void iTween::GenerateColorTargets()
extern TypeInfo* ColorU5BU2CU5D_t29_il2cpp_TypeInfo_var;
extern TypeInfo* Color_t13_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral25;
extern Il2CppCodeGenString* _stringLiteral26;
extern "C" void iTween_GenerateColorTargets_m106 (iTween_t23 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ColorU5BU2CU5D_t29_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(39);
		Color_t13_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(21);
		_stringLiteral25 = il2cpp_codegen_string_literal_from_index(25);
		_stringLiteral26 = il2cpp_codegen_string_literal_from_index(26);
		s_Il2CppMethodIntialized = true;
	}
	{
		ColorU5BU2CU5D_t29* L_0 = (ColorU5BU2CU5D_t29*)GenArrayNew2(ColorU5BU2CU5D_t29_il2cpp_TypeInfo_var, 1, 3);
		__this->___colors_30 = L_0;
		ColorU5BU2CU5D_t29* L_1 = (__this->___colors_30);
		Hashtable_t26 * L_2 = (__this->___tweenArguments_23);
		Object_t * L_3 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_2, _stringLiteral25);
		GenArraySet2(L_1, 0, 0, ((*(Color_t13 *)((Color_t13 *)UnBox (L_3, Color_t13_il2cpp_TypeInfo_var)))), Color_t13 );;
		ColorU5BU2CU5D_t29* L_4 = (__this->___colors_30);
		Hashtable_t26 * L_5 = (__this->___tweenArguments_23);
		Object_t * L_6 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_5, _stringLiteral26);
		GenArraySet2(L_4, 0, 1, ((*(Color_t13 *)((Color_t13 *)UnBox (L_6, Color_t13_il2cpp_TypeInfo_var)))), Color_t13 );;
		return;
	}
}
// System.Void iTween::GenerateVector3Targets()
extern TypeInfo* Vector3U5BU5D_t16_il2cpp_TypeInfo_var;
extern TypeInfo* Vector3_t14_il2cpp_TypeInfo_var;
extern TypeInfo* Single_t51_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral25;
extern Il2CppCodeGenString* _stringLiteral26;
extern Il2CppCodeGenString* _stringLiteral69;
extern "C" void iTween_GenerateVector3Targets_m107 (iTween_t23 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Vector3U5BU5D_t16_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(12);
		Vector3_t14_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13);
		Single_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		_stringLiteral25 = il2cpp_codegen_string_literal_from_index(25);
		_stringLiteral26 = il2cpp_codegen_string_literal_from_index(26);
		_stringLiteral69 = il2cpp_codegen_string_literal_from_index(69);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	{
		__this->___vector3s_28 = ((Vector3U5BU5D_t16*)SZArrayNew(Vector3U5BU5D_t16_il2cpp_TypeInfo_var, 3));
		Vector3U5BU5D_t16* L_0 = (__this->___vector3s_28);
		Hashtable_t26 * L_1 = (__this->___tweenArguments_23);
		Object_t * L_2 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_1, _stringLiteral25);
		(*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_0, 0, sizeof(Vector3_t14 )))) = ((*(Vector3_t14 *)((Vector3_t14 *)UnBox (L_2, Vector3_t14_il2cpp_TypeInfo_var))));
		Vector3U5BU5D_t16* L_3 = (__this->___vector3s_28);
		Hashtable_t26 * L_4 = (__this->___tweenArguments_23);
		Object_t * L_5 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_4, _stringLiteral26);
		(*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_3, 1, sizeof(Vector3_t14 )))) = ((*(Vector3_t14 *)((Vector3_t14 *)UnBox (L_5, Vector3_t14_il2cpp_TypeInfo_var))));
		Hashtable_t26 * L_6 = (__this->___tweenArguments_23);
		bool L_7 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(26 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_6, _stringLiteral69);
		if (!L_7)
		{
			goto IL_00b7;
		}
	}
	{
		Vector3U5BU5D_t16* L_8 = (__this->___vector3s_28);
		Vector3U5BU5D_t16* L_9 = (__this->___vector3s_28);
		float L_10 = Vector3_Distance_m378(NULL /*static, unused*/, (*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_8, 0, sizeof(Vector3_t14 )))), (*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_9, 1, sizeof(Vector3_t14 )))), /*hidden argument*/NULL);
		float L_11 = fabsf(L_10);
		V_0 = L_11;
		float L_12 = V_0;
		Hashtable_t26 * L_13 = (__this->___tweenArguments_23);
		Object_t * L_14 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_13, _stringLiteral69);
		__this->___time_8 = ((float)((float)L_12/(float)((*(float*)((float*)UnBox (L_14, Single_t51_il2cpp_TypeInfo_var))))));
	}

IL_00b7:
	{
		return;
	}
}
// System.Void iTween::GenerateVector2Targets()
extern TypeInfo* Vector2U5BU5D_t28_il2cpp_TypeInfo_var;
extern TypeInfo* Vector2_t36_il2cpp_TypeInfo_var;
extern TypeInfo* Single_t51_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral25;
extern Il2CppCodeGenString* _stringLiteral26;
extern Il2CppCodeGenString* _stringLiteral69;
extern "C" void iTween_GenerateVector2Targets_m108 (iTween_t23 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Vector2U5BU5D_t28_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		Vector2_t36_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(19);
		Single_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		_stringLiteral25 = il2cpp_codegen_string_literal_from_index(25);
		_stringLiteral26 = il2cpp_codegen_string_literal_from_index(26);
		_stringLiteral69 = il2cpp_codegen_string_literal_from_index(69);
		s_Il2CppMethodIntialized = true;
	}
	Vector3_t14  V_0 = {0};
	Vector3_t14  V_1 = {0};
	float V_2 = 0.0f;
	{
		__this->___vector2s_29 = ((Vector2U5BU5D_t28*)SZArrayNew(Vector2U5BU5D_t28_il2cpp_TypeInfo_var, 3));
		Vector2U5BU5D_t28* L_0 = (__this->___vector2s_29);
		Hashtable_t26 * L_1 = (__this->___tweenArguments_23);
		Object_t * L_2 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_1, _stringLiteral25);
		(*(Vector2_t36 *)((Vector2_t36 *)(Vector2_t36 *)SZArrayLdElema(L_0, 0, sizeof(Vector2_t36 )))) = ((*(Vector2_t36 *)((Vector2_t36 *)UnBox (L_2, Vector2_t36_il2cpp_TypeInfo_var))));
		Vector2U5BU5D_t28* L_3 = (__this->___vector2s_29);
		Hashtable_t26 * L_4 = (__this->___tweenArguments_23);
		Object_t * L_5 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_4, _stringLiteral26);
		(*(Vector2_t36 *)((Vector2_t36 *)(Vector2_t36 *)SZArrayLdElema(L_3, 1, sizeof(Vector2_t36 )))) = ((*(Vector2_t36 *)((Vector2_t36 *)UnBox (L_5, Vector2_t36_il2cpp_TypeInfo_var))));
		Hashtable_t26 * L_6 = (__this->___tweenArguments_23);
		bool L_7 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(26 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_6, _stringLiteral69);
		if (!L_7)
		{
			goto IL_00f3;
		}
	}
	{
		Vector2U5BU5D_t28* L_8 = (__this->___vector2s_29);
		float L_9 = (((Vector2_t36 *)(Vector2_t36 *)SZArrayLdElema(L_8, 0, sizeof(Vector2_t36 )))->___x_1);
		Vector2U5BU5D_t28* L_10 = (__this->___vector2s_29);
		float L_11 = (((Vector2_t36 *)(Vector2_t36 *)SZArrayLdElema(L_10, 0, sizeof(Vector2_t36 )))->___y_2);
		Vector3__ctor_m306((&V_0), L_9, L_11, (0.0f), /*hidden argument*/NULL);
		Vector2U5BU5D_t28* L_12 = (__this->___vector2s_29);
		float L_13 = (((Vector2_t36 *)(Vector2_t36 *)SZArrayLdElema(L_12, 1, sizeof(Vector2_t36 )))->___x_1);
		Vector2U5BU5D_t28* L_14 = (__this->___vector2s_29);
		float L_15 = (((Vector2_t36 *)(Vector2_t36 *)SZArrayLdElema(L_14, 1, sizeof(Vector2_t36 )))->___y_2);
		Vector3__ctor_m306((&V_1), L_13, L_15, (0.0f), /*hidden argument*/NULL);
		Vector3_t14  L_16 = V_0;
		Vector3_t14  L_17 = V_1;
		float L_18 = Vector3_Distance_m378(NULL /*static, unused*/, L_16, L_17, /*hidden argument*/NULL);
		float L_19 = fabsf(L_18);
		V_2 = L_19;
		float L_20 = V_2;
		Hashtable_t26 * L_21 = (__this->___tweenArguments_23);
		Object_t * L_22 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_21, _stringLiteral69);
		__this->___time_8 = ((float)((float)L_20/(float)((*(float*)((float*)UnBox (L_22, Single_t51_il2cpp_TypeInfo_var))))));
	}

IL_00f3:
	{
		return;
	}
}
// System.Void iTween::GenerateFloatTargets()
extern TypeInfo* SingleU5BU5D_t30_il2cpp_TypeInfo_var;
extern TypeInfo* Single_t51_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral25;
extern Il2CppCodeGenString* _stringLiteral26;
extern Il2CppCodeGenString* _stringLiteral69;
extern "C" void iTween_GenerateFloatTargets_m109 (iTween_t23 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SingleU5BU5D_t30_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(41);
		Single_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		_stringLiteral25 = il2cpp_codegen_string_literal_from_index(25);
		_stringLiteral26 = il2cpp_codegen_string_literal_from_index(26);
		_stringLiteral69 = il2cpp_codegen_string_literal_from_index(69);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	{
		__this->___floats_31 = ((SingleU5BU5D_t30*)SZArrayNew(SingleU5BU5D_t30_il2cpp_TypeInfo_var, 3));
		SingleU5BU5D_t30* L_0 = (__this->___floats_31);
		Hashtable_t26 * L_1 = (__this->___tweenArguments_23);
		Object_t * L_2 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_1, _stringLiteral25);
		*((float*)(float*)SZArrayLdElema(L_0, 0, sizeof(float))) = (float)((*(float*)((float*)UnBox (L_2, Single_t51_il2cpp_TypeInfo_var))));
		SingleU5BU5D_t30* L_3 = (__this->___floats_31);
		Hashtable_t26 * L_4 = (__this->___tweenArguments_23);
		Object_t * L_5 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_4, _stringLiteral26);
		*((float*)(float*)SZArrayLdElema(L_3, 1, sizeof(float))) = (float)((*(float*)((float*)UnBox (L_5, Single_t51_il2cpp_TypeInfo_var))));
		Hashtable_t26 * L_6 = (__this->___tweenArguments_23);
		bool L_7 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(26 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_6, _stringLiteral69);
		if (!L_7)
		{
			goto IL_008f;
		}
	}
	{
		SingleU5BU5D_t30* L_8 = (__this->___floats_31);
		int32_t L_9 = 0;
		SingleU5BU5D_t30* L_10 = (__this->___floats_31);
		int32_t L_11 = 1;
		float L_12 = fabsf(((float)((float)(*(float*)(float*)SZArrayLdElema(L_8, L_9, sizeof(float)))-(float)(*(float*)(float*)SZArrayLdElema(L_10, L_11, sizeof(float))))));
		V_0 = L_12;
		float L_13 = V_0;
		Hashtable_t26 * L_14 = (__this->___tweenArguments_23);
		Object_t * L_15 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_14, _stringLiteral69);
		__this->___time_8 = ((float)((float)L_13/(float)((*(float*)((float*)UnBox (L_15, Single_t51_il2cpp_TypeInfo_var))))));
	}

IL_008f:
	{
		return;
	}
}
// System.Void iTween::GenerateColorToTargets()
extern TypeInfo* ColorU5BU2CU5D_t29_il2cpp_TypeInfo_var;
extern TypeInfo* NamedValueColor_t11_il2cpp_TypeInfo_var;
extern TypeInfo* Color_t13_il2cpp_TypeInfo_var;
extern TypeInfo* Single_t51_il2cpp_TypeInfo_var;
extern const MethodInfo* Component_GetComponent_TisGUITexture_t58_m379_MethodInfo_var;
extern const MethodInfo* Component_GetComponent_TisGUIText_t59_m380_MethodInfo_var;
extern const MethodInfo* Component_GetComponent_TisRenderer_t61_m381_MethodInfo_var;
extern const MethodInfo* Component_GetComponent_TisLight_t62_m384_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral35;
extern Il2CppCodeGenString* _stringLiteral41;
extern Il2CppCodeGenString* _stringLiteral42;
extern Il2CppCodeGenString* _stringLiteral43;
extern Il2CppCodeGenString* _stringLiteral44;
extern Il2CppCodeGenString* _stringLiteral21;
extern Il2CppCodeGenString* _stringLiteral38;
extern "C" void iTween_GenerateColorToTargets_m110 (iTween_t23 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ColorU5BU2CU5D_t29_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(39);
		NamedValueColor_t11_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(42);
		Color_t13_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(21);
		Single_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		Component_GetComponent_TisGUITexture_t58_m379_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483680);
		Component_GetComponent_TisGUIText_t59_m380_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483681);
		Component_GetComponent_TisRenderer_t61_m381_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483682);
		Component_GetComponent_TisLight_t62_m384_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483683);
		_stringLiteral35 = il2cpp_codegen_string_literal_from_index(35);
		_stringLiteral41 = il2cpp_codegen_string_literal_from_index(41);
		_stringLiteral42 = il2cpp_codegen_string_literal_from_index(42);
		_stringLiteral43 = il2cpp_codegen_string_literal_from_index(43);
		_stringLiteral44 = il2cpp_codegen_string_literal_from_index(44);
		_stringLiteral21 = il2cpp_codegen_string_literal_from_index(21);
		_stringLiteral38 = il2cpp_codegen_string_literal_from_index(38);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	Color_t13  V_8 = {0};
	{
		GUITexture_t58 * L_0 = Component_GetComponent_TisGUITexture_t58_m379(__this, /*hidden argument*/Component_GetComponent_TisGUITexture_t58_m379_MethodInfo_var);
		bool L_1 = Object_op_Implicit_m316(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_004c;
		}
	}
	{
		ColorU5BU2CU5D_t29* L_2 = (ColorU5BU2CU5D_t29*)GenArrayNew2(ColorU5BU2CU5D_t29_il2cpp_TypeInfo_var, 1, 3);
		__this->___colors_30 = L_2;
		ColorU5BU2CU5D_t29* L_3 = (__this->___colors_30);
		ColorU5BU2CU5D_t29* L_4 = (__this->___colors_30);
		GUITexture_t58 * L_5 = Component_GetComponent_TisGUITexture_t58_m379(__this, /*hidden argument*/Component_GetComponent_TisGUITexture_t58_m379_MethodInfo_var);
		Color_t13  L_6 = GUITexture_get_color_m346(L_5, /*hidden argument*/NULL);
		Color_t13  L_7 = L_6;
		V_8 = L_7;
		GenArraySet2(L_4, 0, 1, L_7, Color_t13 );;
		Color_t13  L_8 = V_8;
		GenArraySet2(L_3, 0, 0, L_8, Color_t13 );;
		goto IL_01a0;
	}

IL_004c:
	{
		GUIText_t59 * L_9 = Component_GetComponent_TisGUIText_t59_m380(__this, /*hidden argument*/Component_GetComponent_TisGUIText_t59_m380_MethodInfo_var);
		bool L_10 = Object_op_Implicit_m316(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_009d;
		}
	}
	{
		ColorU5BU2CU5D_t29* L_11 = (ColorU5BU2CU5D_t29*)GenArrayNew2(ColorU5BU2CU5D_t29_il2cpp_TypeInfo_var, 1, 3);
		__this->___colors_30 = L_11;
		ColorU5BU2CU5D_t29* L_12 = (__this->___colors_30);
		ColorU5BU2CU5D_t29* L_13 = (__this->___colors_30);
		GUIText_t59 * L_14 = Component_GetComponent_TisGUIText_t59_m380(__this, /*hidden argument*/Component_GetComponent_TisGUIText_t59_m380_MethodInfo_var);
		Material_t60 * L_15 = GUIText_get_material_m348(L_14, /*hidden argument*/NULL);
		Color_t13  L_16 = Material_get_color_m349(L_15, /*hidden argument*/NULL);
		Color_t13  L_17 = L_16;
		V_8 = L_17;
		GenArraySet2(L_13, 0, 1, L_17, Color_t13 );;
		Color_t13  L_18 = V_8;
		GenArraySet2(L_12, 0, 0, L_18, Color_t13 );;
		goto IL_01a0;
	}

IL_009d:
	{
		Renderer_t61 * L_19 = Component_GetComponent_TisRenderer_t61_m381(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t61_m381_MethodInfo_var);
		bool L_20 = Object_op_Implicit_m316(NULL /*static, unused*/, L_19, /*hidden argument*/NULL);
		if (!L_20)
		{
			goto IL_0147;
		}
	}
	{
		Renderer_t61 * L_21 = Component_GetComponent_TisRenderer_t61_m381(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t61_m381_MethodInfo_var);
		MaterialU5BU5D_t64* L_22 = Renderer_get_materials_m382(L_21, /*hidden argument*/NULL);
		ColorU5BU2CU5D_t29* L_23 = (ColorU5BU2CU5D_t29*)GenArrayNew2(ColorU5BU2CU5D_t29_il2cpp_TypeInfo_var, (((int32_t)((int32_t)(((Array_t *)L_22)->max_length)))), 3);
		__this->___colors_30 = L_23;
		V_0 = 0;
		goto IL_012f;
	}

IL_00cd:
	{
		ColorU5BU2CU5D_t29* L_24 = (__this->___colors_30);
		int32_t L_25 = V_0;
		Renderer_t61 * L_26 = Component_GetComponent_TisRenderer_t61_m381(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t61_m381_MethodInfo_var);
		MaterialU5BU5D_t64* L_27 = Renderer_get_materials_m382(L_26, /*hidden argument*/NULL);
		int32_t L_28 = V_0;
		int32_t L_29 = L_28;
		int32_t L_30 = (__this->___namedcolorvalue_36);
		int32_t L_31 = L_30;
		Object_t * L_32 = Box(NamedValueColor_t11_il2cpp_TypeInfo_var, &L_31);
		String_t* L_33 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Enum::ToString() */, L_32);
		Color_t13  L_34 = Material_GetColor_m383((*(Material_t60 **)(Material_t60 **)SZArrayLdElema(L_27, L_29, sizeof(Material_t60 *))), L_33, /*hidden argument*/NULL);
		GenArraySet2(L_24, L_25, 0, L_34, Color_t13 );;
		ColorU5BU2CU5D_t29* L_35 = (__this->___colors_30);
		int32_t L_36 = V_0;
		Renderer_t61 * L_37 = Component_GetComponent_TisRenderer_t61_m381(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t61_m381_MethodInfo_var);
		MaterialU5BU5D_t64* L_38 = Renderer_get_materials_m382(L_37, /*hidden argument*/NULL);
		int32_t L_39 = V_0;
		int32_t L_40 = L_39;
		int32_t L_41 = (__this->___namedcolorvalue_36);
		int32_t L_42 = L_41;
		Object_t * L_43 = Box(NamedValueColor_t11_il2cpp_TypeInfo_var, &L_42);
		String_t* L_44 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Enum::ToString() */, L_43);
		Color_t13  L_45 = Material_GetColor_m383((*(Material_t60 **)(Material_t60 **)SZArrayLdElema(L_38, L_40, sizeof(Material_t60 *))), L_44, /*hidden argument*/NULL);
		GenArraySet2(L_35, L_36, 1, L_45, Color_t13 );;
		int32_t L_46 = V_0;
		V_0 = ((int32_t)((int32_t)L_46+(int32_t)1));
	}

IL_012f:
	{
		int32_t L_47 = V_0;
		Renderer_t61 * L_48 = Component_GetComponent_TisRenderer_t61_m381(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t61_m381_MethodInfo_var);
		MaterialU5BU5D_t64* L_49 = Renderer_get_materials_m382(L_48, /*hidden argument*/NULL);
		if ((((int32_t)L_47) < ((int32_t)(((int32_t)((int32_t)(((Array_t *)L_49)->max_length)))))))
		{
			goto IL_00cd;
		}
	}
	{
		goto IL_01a0;
	}

IL_0147:
	{
		Light_t62 * L_50 = Component_GetComponent_TisLight_t62_m384(__this, /*hidden argument*/Component_GetComponent_TisLight_t62_m384_MethodInfo_var);
		bool L_51 = Object_op_Implicit_m316(NULL /*static, unused*/, L_50, /*hidden argument*/NULL);
		if (!L_51)
		{
			goto IL_0193;
		}
	}
	{
		ColorU5BU2CU5D_t29* L_52 = (ColorU5BU2CU5D_t29*)GenArrayNew2(ColorU5BU2CU5D_t29_il2cpp_TypeInfo_var, 1, 3);
		__this->___colors_30 = L_52;
		ColorU5BU2CU5D_t29* L_53 = (__this->___colors_30);
		ColorU5BU2CU5D_t29* L_54 = (__this->___colors_30);
		Light_t62 * L_55 = Component_GetComponent_TisLight_t62_m384(__this, /*hidden argument*/Component_GetComponent_TisLight_t62_m384_MethodInfo_var);
		Color_t13  L_56 = Light_get_color_m353(L_55, /*hidden argument*/NULL);
		Color_t13  L_57 = L_56;
		V_8 = L_57;
		GenArraySet2(L_54, 0, 1, L_57, Color_t13 );;
		Color_t13  L_58 = V_8;
		GenArraySet2(L_53, 0, 0, L_58, Color_t13 );;
		goto IL_01a0;
	}

IL_0193:
	{
		ColorU5BU2CU5D_t29* L_59 = (ColorU5BU2CU5D_t29*)GenArrayNew2(ColorU5BU2CU5D_t29_il2cpp_TypeInfo_var, 1, 3);
		__this->___colors_30 = L_59;
	}

IL_01a0:
	{
		Hashtable_t26 * L_60 = (__this->___tweenArguments_23);
		bool L_61 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(26 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_60, _stringLiteral35);
		if (!L_61)
		{
			goto IL_01f9;
		}
	}
	{
		V_1 = 0;
		goto IL_01e2;
	}

IL_01bc:
	{
		ColorU5BU2CU5D_t29* L_62 = (__this->___colors_30);
		int32_t L_63 = V_1;
		Hashtable_t26 * L_64 = (__this->___tweenArguments_23);
		Object_t * L_65 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_64, _stringLiteral35);
		GenArraySet2(L_62, L_63, 1, ((*(Color_t13 *)((Color_t13 *)UnBox (L_65, Color_t13_il2cpp_TypeInfo_var)))), Color_t13 );;
		int32_t L_66 = V_1;
		V_1 = ((int32_t)((int32_t)L_66+(int32_t)1));
	}

IL_01e2:
	{
		int32_t L_67 = V_1;
		ColorU5BU2CU5D_t29* L_68 = (__this->___colors_30);
		int32_t L_69 = Array_GetLength_m385(L_68, 0, /*hidden argument*/NULL);
		if ((((int32_t)L_67) < ((int32_t)L_69)))
		{
			goto IL_01bc;
		}
	}
	{
		goto IL_0367;
	}

IL_01f9:
	{
		Hashtable_t26 * L_70 = (__this->___tweenArguments_23);
		bool L_71 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(26 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_70, _stringLiteral41);
		if (!L_71)
		{
			goto IL_0252;
		}
	}
	{
		V_2 = 0;
		goto IL_0240;
	}

IL_0215:
	{
		ColorU5BU2CU5D_t29* L_72 = (__this->___colors_30);
		int32_t L_73 = V_2;
		Color_t13 * L_74 = (Color_t13 *)GenArrayAddress2(L_72, L_73, 1);;
		Hashtable_t26 * L_75 = (__this->___tweenArguments_23);
		Object_t * L_76 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_75, _stringLiteral41);
		L_74->___r_0 = ((*(float*)((float*)UnBox (L_76, Single_t51_il2cpp_TypeInfo_var))));
		int32_t L_77 = V_2;
		V_2 = ((int32_t)((int32_t)L_77+(int32_t)1));
	}

IL_0240:
	{
		int32_t L_78 = V_2;
		ColorU5BU2CU5D_t29* L_79 = (__this->___colors_30);
		int32_t L_80 = Array_GetLength_m385(L_79, 0, /*hidden argument*/NULL);
		if ((((int32_t)L_78) < ((int32_t)L_80)))
		{
			goto IL_0215;
		}
	}

IL_0252:
	{
		Hashtable_t26 * L_81 = (__this->___tweenArguments_23);
		bool L_82 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(26 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_81, _stringLiteral42);
		if (!L_82)
		{
			goto IL_02ab;
		}
	}
	{
		V_3 = 0;
		goto IL_0299;
	}

IL_026e:
	{
		ColorU5BU2CU5D_t29* L_83 = (__this->___colors_30);
		int32_t L_84 = V_3;
		Color_t13 * L_85 = (Color_t13 *)GenArrayAddress2(L_83, L_84, 1);;
		Hashtable_t26 * L_86 = (__this->___tweenArguments_23);
		Object_t * L_87 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_86, _stringLiteral42);
		L_85->___g_1 = ((*(float*)((float*)UnBox (L_87, Single_t51_il2cpp_TypeInfo_var))));
		int32_t L_88 = V_3;
		V_3 = ((int32_t)((int32_t)L_88+(int32_t)1));
	}

IL_0299:
	{
		int32_t L_89 = V_3;
		ColorU5BU2CU5D_t29* L_90 = (__this->___colors_30);
		int32_t L_91 = Array_GetLength_m385(L_90, 0, /*hidden argument*/NULL);
		if ((((int32_t)L_89) < ((int32_t)L_91)))
		{
			goto IL_026e;
		}
	}

IL_02ab:
	{
		Hashtable_t26 * L_92 = (__this->___tweenArguments_23);
		bool L_93 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(26 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_92, _stringLiteral43);
		if (!L_93)
		{
			goto IL_0309;
		}
	}
	{
		V_4 = 0;
		goto IL_02f6;
	}

IL_02c8:
	{
		ColorU5BU2CU5D_t29* L_94 = (__this->___colors_30);
		int32_t L_95 = V_4;
		Color_t13 * L_96 = (Color_t13 *)GenArrayAddress2(L_94, L_95, 1);;
		Hashtable_t26 * L_97 = (__this->___tweenArguments_23);
		Object_t * L_98 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_97, _stringLiteral43);
		L_96->___b_2 = ((*(float*)((float*)UnBox (L_98, Single_t51_il2cpp_TypeInfo_var))));
		int32_t L_99 = V_4;
		V_4 = ((int32_t)((int32_t)L_99+(int32_t)1));
	}

IL_02f6:
	{
		int32_t L_100 = V_4;
		ColorU5BU2CU5D_t29* L_101 = (__this->___colors_30);
		int32_t L_102 = Array_GetLength_m385(L_101, 0, /*hidden argument*/NULL);
		if ((((int32_t)L_100) < ((int32_t)L_102)))
		{
			goto IL_02c8;
		}
	}

IL_0309:
	{
		Hashtable_t26 * L_103 = (__this->___tweenArguments_23);
		bool L_104 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(26 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_103, _stringLiteral44);
		if (!L_104)
		{
			goto IL_0367;
		}
	}
	{
		V_5 = 0;
		goto IL_0354;
	}

IL_0326:
	{
		ColorU5BU2CU5D_t29* L_105 = (__this->___colors_30);
		int32_t L_106 = V_5;
		Color_t13 * L_107 = (Color_t13 *)GenArrayAddress2(L_105, L_106, 1);;
		Hashtable_t26 * L_108 = (__this->___tweenArguments_23);
		Object_t * L_109 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_108, _stringLiteral44);
		L_107->___a_3 = ((*(float*)((float*)UnBox (L_109, Single_t51_il2cpp_TypeInfo_var))));
		int32_t L_110 = V_5;
		V_5 = ((int32_t)((int32_t)L_110+(int32_t)1));
	}

IL_0354:
	{
		int32_t L_111 = V_5;
		ColorU5BU2CU5D_t29* L_112 = (__this->___colors_30);
		int32_t L_113 = Array_GetLength_m385(L_112, 0, /*hidden argument*/NULL);
		if ((((int32_t)L_111) < ((int32_t)L_113)))
		{
			goto IL_0326;
		}
	}

IL_0367:
	{
		Hashtable_t26 * L_114 = (__this->___tweenArguments_23);
		bool L_115 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(26 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_114, _stringLiteral21);
		if (!L_115)
		{
			goto IL_03ca;
		}
	}
	{
		V_6 = 0;
		goto IL_03b2;
	}

IL_0384:
	{
		ColorU5BU2CU5D_t29* L_116 = (__this->___colors_30);
		int32_t L_117 = V_6;
		Color_t13 * L_118 = (Color_t13 *)GenArrayAddress2(L_116, L_117, 1);;
		Hashtable_t26 * L_119 = (__this->___tweenArguments_23);
		Object_t * L_120 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_119, _stringLiteral21);
		L_118->___a_3 = ((*(float*)((float*)UnBox (L_120, Single_t51_il2cpp_TypeInfo_var))));
		int32_t L_121 = V_6;
		V_6 = ((int32_t)((int32_t)L_121+(int32_t)1));
	}

IL_03b2:
	{
		int32_t L_122 = V_6;
		ColorU5BU2CU5D_t29* L_123 = (__this->___colors_30);
		int32_t L_124 = Array_GetLength_m385(L_123, 0, /*hidden argument*/NULL);
		if ((((int32_t)L_122) < ((int32_t)L_124)))
		{
			goto IL_0384;
		}
	}
	{
		goto IL_0428;
	}

IL_03ca:
	{
		Hashtable_t26 * L_125 = (__this->___tweenArguments_23);
		bool L_126 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(26 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_125, _stringLiteral38);
		if (!L_126)
		{
			goto IL_0428;
		}
	}
	{
		V_7 = 0;
		goto IL_0415;
	}

IL_03e7:
	{
		ColorU5BU2CU5D_t29* L_127 = (__this->___colors_30);
		int32_t L_128 = V_7;
		Color_t13 * L_129 = (Color_t13 *)GenArrayAddress2(L_127, L_128, 1);;
		Hashtable_t26 * L_130 = (__this->___tweenArguments_23);
		Object_t * L_131 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_130, _stringLiteral38);
		L_129->___a_3 = ((*(float*)((float*)UnBox (L_131, Single_t51_il2cpp_TypeInfo_var))));
		int32_t L_132 = V_7;
		V_7 = ((int32_t)((int32_t)L_132+(int32_t)1));
	}

IL_0415:
	{
		int32_t L_133 = V_7;
		ColorU5BU2CU5D_t29* L_134 = (__this->___colors_30);
		int32_t L_135 = Array_GetLength_m385(L_134, 0, /*hidden argument*/NULL);
		if ((((int32_t)L_133) < ((int32_t)L_135)))
		{
			goto IL_03e7;
		}
	}

IL_0428:
	{
		return;
	}
}
// System.Void iTween::GenerateAudioToTargets()
extern TypeInfo* Vector2U5BU5D_t28_il2cpp_TypeInfo_var;
extern TypeInfo* AudioSource_t27_il2cpp_TypeInfo_var;
extern TypeInfo* Single_t51_il2cpp_TypeInfo_var;
extern const MethodInfo* Component_GetComponent_TisAudioSource_t27_m386_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral47;
extern Il2CppCodeGenString* _stringLiteral70;
extern Il2CppCodeGenString* _stringLiteral45;
extern Il2CppCodeGenString* _stringLiteral46;
extern "C" void iTween_GenerateAudioToTargets_m111 (iTween_t23 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Vector2U5BU5D_t28_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		AudioSource_t27_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(32);
		Single_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		Component_GetComponent_TisAudioSource_t27_m386_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483684);
		_stringLiteral47 = il2cpp_codegen_string_literal_from_index(47);
		_stringLiteral70 = il2cpp_codegen_string_literal_from_index(70);
		_stringLiteral45 = il2cpp_codegen_string_literal_from_index(45);
		_stringLiteral46 = il2cpp_codegen_string_literal_from_index(46);
		s_Il2CppMethodIntialized = true;
	}
	Vector2_t36  V_0 = {0};
	{
		__this->___vector2s_29 = ((Vector2U5BU5D_t28*)SZArrayNew(Vector2U5BU5D_t28_il2cpp_TypeInfo_var, 3));
		Hashtable_t26 * L_0 = (__this->___tweenArguments_23);
		bool L_1 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(26 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_0, _stringLiteral47);
		if (!L_1)
		{
			goto IL_0041;
		}
	}
	{
		Hashtable_t26 * L_2 = (__this->___tweenArguments_23);
		Object_t * L_3 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_2, _stringLiteral47);
		__this->___audioSource_27 = ((AudioSource_t27 *)CastclassSealed(L_3, AudioSource_t27_il2cpp_TypeInfo_var));
		goto IL_0072;
	}

IL_0041:
	{
		AudioSource_t27 * L_4 = Component_GetComponent_TisAudioSource_t27_m386(__this, /*hidden argument*/Component_GetComponent_TisAudioSource_t27_m386_MethodInfo_var);
		bool L_5 = Object_op_Implicit_m316(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0062;
		}
	}
	{
		AudioSource_t27 * L_6 = Component_GetComponent_TisAudioSource_t27_m386(__this, /*hidden argument*/Component_GetComponent_TisAudioSource_t27_m386_MethodInfo_var);
		__this->___audioSource_27 = L_6;
		goto IL_0072;
	}

IL_0062:
	{
		Debug_LogError_m341(NULL /*static, unused*/, _stringLiteral70, /*hidden argument*/NULL);
		iTween_Dispose_m257(__this, /*hidden argument*/NULL);
	}

IL_0072:
	{
		Vector2U5BU5D_t28* L_7 = (__this->___vector2s_29);
		Vector2U5BU5D_t28* L_8 = (__this->___vector2s_29);
		AudioSource_t27 * L_9 = (__this->___audioSource_27);
		float L_10 = AudioSource_get_volume_m358(L_9, /*hidden argument*/NULL);
		AudioSource_t27 * L_11 = (__this->___audioSource_27);
		float L_12 = AudioSource_get_pitch_m359(L_11, /*hidden argument*/NULL);
		Vector2_t36  L_13 = {0};
		Vector2__ctor_m310(&L_13, L_10, L_12, /*hidden argument*/NULL);
		Vector2_t36  L_14 = L_13;
		V_0 = L_14;
		(*(Vector2_t36 *)((Vector2_t36 *)(Vector2_t36 *)SZArrayLdElema(L_8, 1, sizeof(Vector2_t36 )))) = L_14;
		Vector2_t36  L_15 = V_0;
		(*(Vector2_t36 *)((Vector2_t36 *)(Vector2_t36 *)SZArrayLdElema(L_7, 0, sizeof(Vector2_t36 )))) = L_15;
		Hashtable_t26 * L_16 = (__this->___tweenArguments_23);
		bool L_17 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(26 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_16, _stringLiteral45);
		if (!L_17)
		{
			goto IL_00ed;
		}
	}
	{
		Vector2U5BU5D_t28* L_18 = (__this->___vector2s_29);
		Hashtable_t26 * L_19 = (__this->___tweenArguments_23);
		Object_t * L_20 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_19, _stringLiteral45);
		((Vector2_t36 *)(Vector2_t36 *)SZArrayLdElema(L_18, 1, sizeof(Vector2_t36 )))->___x_1 = ((*(float*)((float*)UnBox (L_20, Single_t51_il2cpp_TypeInfo_var))));
	}

IL_00ed:
	{
		Hashtable_t26 * L_21 = (__this->___tweenArguments_23);
		bool L_22 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(26 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_21, _stringLiteral46);
		if (!L_22)
		{
			goto IL_0128;
		}
	}
	{
		Vector2U5BU5D_t28* L_23 = (__this->___vector2s_29);
		Hashtable_t26 * L_24 = (__this->___tweenArguments_23);
		Object_t * L_25 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_24, _stringLiteral46);
		((Vector2_t36 *)(Vector2_t36 *)SZArrayLdElema(L_23, 1, sizeof(Vector2_t36 )))->___y_2 = ((*(float*)((float*)UnBox (L_25, Single_t51_il2cpp_TypeInfo_var))));
	}

IL_0128:
	{
		return;
	}
}
// System.Void iTween::GenerateStabTargets()
extern TypeInfo* AudioSource_t27_il2cpp_TypeInfo_var;
extern TypeInfo* AudioClip_t38_il2cpp_TypeInfo_var;
extern TypeInfo* Single_t51_il2cpp_TypeInfo_var;
extern const MethodInfo* Component_GetComponent_TisAudioSource_t27_m386_MethodInfo_var;
extern const MethodInfo* GameObject_AddComponent_TisAudioSource_t27_m387_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral47;
extern Il2CppCodeGenString* _stringLiteral50;
extern Il2CppCodeGenString* _stringLiteral46;
extern Il2CppCodeGenString* _stringLiteral45;
extern "C" void iTween_GenerateStabTargets_m112 (iTween_t23 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AudioSource_t27_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(32);
		AudioClip_t38_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(43);
		Single_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		Component_GetComponent_TisAudioSource_t27_m386_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483684);
		GameObject_AddComponent_TisAudioSource_t27_m387_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483685);
		_stringLiteral47 = il2cpp_codegen_string_literal_from_index(47);
		_stringLiteral50 = il2cpp_codegen_string_literal_from_index(50);
		_stringLiteral46 = il2cpp_codegen_string_literal_from_index(46);
		_stringLiteral45 = il2cpp_codegen_string_literal_from_index(45);
		s_Il2CppMethodIntialized = true;
	}
	{
		Hashtable_t26 * L_0 = (__this->___tweenArguments_23);
		bool L_1 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(26 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_0, _stringLiteral47);
		if (!L_1)
		{
			goto IL_0035;
		}
	}
	{
		Hashtable_t26 * L_2 = (__this->___tweenArguments_23);
		Object_t * L_3 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_2, _stringLiteral47);
		__this->___audioSource_27 = ((AudioSource_t27 *)CastclassSealed(L_3, AudioSource_t27_il2cpp_TypeInfo_var));
		goto IL_007a;
	}

IL_0035:
	{
		AudioSource_t27 * L_4 = Component_GetComponent_TisAudioSource_t27_m386(__this, /*hidden argument*/Component_GetComponent_TisAudioSource_t27_m386_MethodInfo_var);
		bool L_5 = Object_op_Implicit_m316(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0056;
		}
	}
	{
		AudioSource_t27 * L_6 = Component_GetComponent_TisAudioSource_t27_m386(__this, /*hidden argument*/Component_GetComponent_TisAudioSource_t27_m386_MethodInfo_var);
		__this->___audioSource_27 = L_6;
		goto IL_007a;
	}

IL_0056:
	{
		GameObject_t34 * L_7 = Component_get_gameObject_m319(__this, /*hidden argument*/NULL);
		GameObject_AddComponent_TisAudioSource_t27_m387(L_7, /*hidden argument*/GameObject_AddComponent_TisAudioSource_t27_m387_MethodInfo_var);
		AudioSource_t27 * L_8 = Component_GetComponent_TisAudioSource_t27_m386(__this, /*hidden argument*/Component_GetComponent_TisAudioSource_t27_m386_MethodInfo_var);
		__this->___audioSource_27 = L_8;
		AudioSource_t27 * L_9 = (__this->___audioSource_27);
		AudioSource_set_playOnAwake_m388(L_9, 0, /*hidden argument*/NULL);
	}

IL_007a:
	{
		AudioSource_t27 * L_10 = (__this->___audioSource_27);
		Hashtable_t26 * L_11 = (__this->___tweenArguments_23);
		Object_t * L_12 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_11, _stringLiteral50);
		AudioSource_set_clip_m389(L_10, ((AudioClip_t38 *)CastclassSealed(L_12, AudioClip_t38_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		Hashtable_t26 * L_13 = (__this->___tweenArguments_23);
		bool L_14 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(26 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_13, _stringLiteral46);
		if (!L_14)
		{
			goto IL_00cf;
		}
	}
	{
		AudioSource_t27 * L_15 = (__this->___audioSource_27);
		Hashtable_t26 * L_16 = (__this->___tweenArguments_23);
		Object_t * L_17 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_16, _stringLiteral46);
		AudioSource_set_pitch_m361(L_15, ((*(float*)((float*)UnBox (L_17, Single_t51_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
	}

IL_00cf:
	{
		Hashtable_t26 * L_18 = (__this->___tweenArguments_23);
		bool L_19 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(26 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_18, _stringLiteral45);
		if (!L_19)
		{
			goto IL_0104;
		}
	}
	{
		AudioSource_t27 * L_20 = (__this->___audioSource_27);
		Hashtable_t26 * L_21 = (__this->___tweenArguments_23);
		Object_t * L_22 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_21, _stringLiteral45);
		AudioSource_set_volume_m360(L_20, ((*(float*)((float*)UnBox (L_22, Single_t51_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
	}

IL_0104:
	{
		AudioSource_t27 * L_23 = (__this->___audioSource_27);
		AudioClip_t38 * L_24 = AudioSource_get_clip_m390(L_23, /*hidden argument*/NULL);
		float L_25 = AudioClip_get_length_m391(L_24, /*hidden argument*/NULL);
		AudioSource_t27 * L_26 = (__this->___audioSource_27);
		float L_27 = AudioSource_get_pitch_m359(L_26, /*hidden argument*/NULL);
		__this->___time_8 = ((float)((float)L_25/(float)L_27));
		return;
	}
}
// System.Void iTween::GenerateLookToTargets()
extern const Il2CppType* Transform_t32_0_0_0_var;
extern const Il2CppType* Vector3_t14_0_0_0_var;
extern TypeInfo* Vector3U5BU5D_t16_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* Transform_t32_il2cpp_TypeInfo_var;
extern TypeInfo* Nullable_1_t63_il2cpp_TypeInfo_var;
extern TypeInfo* Defaults_t12_il2cpp_TypeInfo_var;
extern TypeInfo* Vector3_t14_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* iTween_t23_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t35_il2cpp_TypeInfo_var;
extern TypeInfo* Single_t51_il2cpp_TypeInfo_var;
extern const MethodInfo* Nullable_1_get_HasValue_m363_MethodInfo_var;
extern const MethodInfo* Nullable_1_get_Value_m364_MethodInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m367_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral52;
extern Il2CppCodeGenString* _stringLiteral53;
extern Il2CppCodeGenString* _stringLiteral71;
extern Il2CppCodeGenString* _stringLiteral54;
extern Il2CppCodeGenString* _stringLiteral10;
extern Il2CppCodeGenString* _stringLiteral55;
extern Il2CppCodeGenString* _stringLiteral56;
extern Il2CppCodeGenString* _stringLiteral69;
extern "C" void iTween_GenerateLookToTargets_m113 (iTween_t23 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Transform_t32_0_0_0_var = il2cpp_codegen_type_from_index(30);
		Vector3_t14_0_0_0_var = il2cpp_codegen_type_from_index(13);
		Vector3U5BU5D_t16_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(12);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		Transform_t32_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(30);
		Nullable_1_t63_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(34);
		Defaults_t12_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11);
		Vector3_t14_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(33);
		iTween_t23_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		Dictionary_2_t35_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(35);
		Single_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		Nullable_1_get_HasValue_m363_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483656);
		Nullable_1_get_Value_m364_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483657);
		Dictionary_2__ctor_m367_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483658);
		_stringLiteral52 = il2cpp_codegen_string_literal_from_index(52);
		_stringLiteral53 = il2cpp_codegen_string_literal_from_index(53);
		_stringLiteral71 = il2cpp_codegen_string_literal_from_index(71);
		_stringLiteral54 = il2cpp_codegen_string_literal_from_index(54);
		_stringLiteral10 = il2cpp_codegen_string_literal_from_index(10);
		_stringLiteral55 = il2cpp_codegen_string_literal_from_index(55);
		_stringLiteral56 = il2cpp_codegen_string_literal_from_index(56);
		_stringLiteral69 = il2cpp_codegen_string_literal_from_index(69);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	Nullable_1_t63  V_1 = {0};
	Nullable_1_t63  V_2 = {0};
	String_t* V_3 = {0};
	Dictionary_2_t35 * V_4 = {0};
	int32_t V_5 = 0;
	Transform_t32 * G_B4_0 = {0};
	Transform_t32 * G_B4_1 = {0};
	Transform_t32 * G_B3_0 = {0};
	Transform_t32 * G_B3_1 = {0};
	Vector3_t14  G_B5_0 = {0};
	Transform_t32 * G_B5_1 = {0};
	Transform_t32 * G_B5_2 = {0};
	Vector3_t14  G_B9_0 = {0};
	Transform_t32 * G_B9_1 = {0};
	Vector3_t14  G_B8_0 = {0};
	Transform_t32 * G_B8_1 = {0};
	Vector3_t14  G_B10_0 = {0};
	Vector3_t14  G_B10_1 = {0};
	Transform_t32 * G_B10_2 = {0};
	{
		__this->___vector3s_28 = ((Vector3U5BU5D_t16*)SZArrayNew(Vector3U5BU5D_t16_il2cpp_TypeInfo_var, 3));
		Vector3U5BU5D_t16* L_0 = (__this->___vector3s_28);
		Transform_t32 * L_1 = (__this->___thisTransform_39);
		Vector3_t14  L_2 = Transform_get_eulerAngles_m362(L_1, /*hidden argument*/NULL);
		(*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_0, 0, sizeof(Vector3_t14 )))) = L_2;
		Hashtable_t26 * L_3 = (__this->___tweenArguments_23);
		bool L_4 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(26 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_3, _stringLiteral52);
		if (!L_4)
		{
			goto IL_0135;
		}
	}
	{
		Hashtable_t26 * L_5 = (__this->___tweenArguments_23);
		Object_t * L_6 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_5, _stringLiteral52);
		Type_t * L_7 = Object_GetType_m342(L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_8 = Type_GetTypeFromHandle_m343(NULL /*static, unused*/, LoadTypeToken(Transform_t32_0_0_0_var), /*hidden argument*/NULL);
		if ((!(((Object_t*)(Type_t *)L_7) == ((Object_t*)(Type_t *)L_8))))
		{
			goto IL_00b9;
		}
	}
	{
		Transform_t32 * L_9 = (__this->___thisTransform_39);
		Hashtable_t26 * L_10 = (__this->___tweenArguments_23);
		Object_t * L_11 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_10, _stringLiteral52);
		Hashtable_t26 * L_12 = (__this->___tweenArguments_23);
		Object_t * L_13 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_12, _stringLiteral53);
		void* L_14 = alloca(sizeof(Nullable_1_t63 ));
		UnBoxNullable(L_13, Nullable_1_t63_il2cpp_TypeInfo_var, L_14);
		V_1 = ((*(Nullable_1_t63 *)((Nullable_1_t63 *)L_14)));
		bool L_15 = Nullable_1_get_HasValue_m363((&V_1), /*hidden argument*/Nullable_1_get_HasValue_m363_MethodInfo_var);
		G_B3_0 = ((Transform_t32 *)CastclassClass(L_11, Transform_t32_il2cpp_TypeInfo_var));
		G_B3_1 = L_9;
		if (!L_15)
		{
			G_B4_0 = ((Transform_t32 *)CastclassClass(L_11, Transform_t32_il2cpp_TypeInfo_var));
			G_B4_1 = L_9;
			goto IL_00aa;
		}
	}
	{
		Vector3_t14  L_16 = Nullable_1_get_Value_m364((&V_1), /*hidden argument*/Nullable_1_get_Value_m364_MethodInfo_var);
		G_B5_0 = L_16;
		G_B5_1 = G_B3_0;
		G_B5_2 = G_B3_1;
		goto IL_00af;
	}

IL_00aa:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Defaults_t12_il2cpp_TypeInfo_var);
		Vector3_t14  L_17 = ((Defaults_t12_StaticFields*)Defaults_t12_il2cpp_TypeInfo_var->static_fields)->___up_15;
		G_B5_0 = L_17;
		G_B5_1 = G_B4_0;
		G_B5_2 = G_B4_1;
	}

IL_00af:
	{
		Transform_LookAt_m365(G_B5_2, G_B5_1, G_B5_0, /*hidden argument*/NULL);
		goto IL_0130;
	}

IL_00b9:
	{
		Hashtable_t26 * L_18 = (__this->___tweenArguments_23);
		Object_t * L_19 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_18, _stringLiteral52);
		Type_t * L_20 = Object_GetType_m342(L_19, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_21 = Type_GetTypeFromHandle_m343(NULL /*static, unused*/, LoadTypeToken(Vector3_t14_0_0_0_var), /*hidden argument*/NULL);
		if ((!(((Object_t*)(Type_t *)L_20) == ((Object_t*)(Type_t *)L_21))))
		{
			goto IL_0130;
		}
	}
	{
		Transform_t32 * L_22 = (__this->___thisTransform_39);
		Hashtable_t26 * L_23 = (__this->___tweenArguments_23);
		Object_t * L_24 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_23, _stringLiteral52);
		Hashtable_t26 * L_25 = (__this->___tweenArguments_23);
		Object_t * L_26 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_25, _stringLiteral53);
		void* L_27 = alloca(sizeof(Nullable_1_t63 ));
		UnBoxNullable(L_26, Nullable_1_t63_il2cpp_TypeInfo_var, L_27);
		V_2 = ((*(Nullable_1_t63 *)((Nullable_1_t63 *)L_27)));
		bool L_28 = Nullable_1_get_HasValue_m363((&V_2), /*hidden argument*/Nullable_1_get_HasValue_m363_MethodInfo_var);
		G_B8_0 = ((*(Vector3_t14 *)((Vector3_t14 *)UnBox (L_24, Vector3_t14_il2cpp_TypeInfo_var))));
		G_B8_1 = L_22;
		if (!L_28)
		{
			G_B9_0 = ((*(Vector3_t14 *)((Vector3_t14 *)UnBox (L_24, Vector3_t14_il2cpp_TypeInfo_var))));
			G_B9_1 = L_22;
			goto IL_0126;
		}
	}
	{
		Vector3_t14  L_29 = Nullable_1_get_Value_m364((&V_2), /*hidden argument*/Nullable_1_get_Value_m364_MethodInfo_var);
		G_B10_0 = L_29;
		G_B10_1 = G_B8_0;
		G_B10_2 = G_B8_1;
		goto IL_012b;
	}

IL_0126:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Defaults_t12_il2cpp_TypeInfo_var);
		Vector3_t14  L_30 = ((Defaults_t12_StaticFields*)Defaults_t12_il2cpp_TypeInfo_var->static_fields)->___up_15;
		G_B10_0 = L_30;
		G_B10_1 = G_B9_0;
		G_B10_2 = G_B9_1;
	}

IL_012b:
	{
		Transform_LookAt_m366(G_B10_2, G_B10_1, G_B10_0, /*hidden argument*/NULL);
	}

IL_0130:
	{
		goto IL_0145;
	}

IL_0135:
	{
		Debug_LogError_m341(NULL /*static, unused*/, _stringLiteral71, /*hidden argument*/NULL);
		iTween_Dispose_m257(__this, /*hidden argument*/NULL);
	}

IL_0145:
	{
		Vector3U5BU5D_t16* L_31 = (__this->___vector3s_28);
		Transform_t32 * L_32 = (__this->___thisTransform_39);
		Vector3_t14  L_33 = Transform_get_eulerAngles_m362(L_32, /*hidden argument*/NULL);
		(*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_31, 1, sizeof(Vector3_t14 )))) = L_33;
		Transform_t32 * L_34 = (__this->___thisTransform_39);
		Vector3U5BU5D_t16* L_35 = (__this->___vector3s_28);
		Transform_set_eulerAngles_m368(L_34, (*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_35, 0, sizeof(Vector3_t14 )))), /*hidden argument*/NULL);
		Hashtable_t26 * L_36 = (__this->___tweenArguments_23);
		bool L_37 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(26 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_36, _stringLiteral54);
		if (!L_37)
		{
			goto IL_02f3;
		}
	}
	{
		Hashtable_t26 * L_38 = (__this->___tweenArguments_23);
		Object_t * L_39 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_38, _stringLiteral54);
		V_3 = ((String_t*)CastclassSealed(L_39, String_t_il2cpp_TypeInfo_var));
		String_t* L_40 = V_3;
		if (!L_40)
		{
			goto IL_02f3;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		Dictionary_2_t35 * L_41 = ((iTween_t23_StaticFields*)iTween_t23_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24mapB_51;
		if (L_41)
		{
			goto IL_01ee;
		}
	}
	{
		Dictionary_2_t35 * L_42 = (Dictionary_2_t35 *)il2cpp_codegen_object_new (Dictionary_2_t35_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m367(L_42, 3, /*hidden argument*/Dictionary_2__ctor_m367_MethodInfo_var);
		V_4 = L_42;
		Dictionary_2_t35 * L_43 = V_4;
		VirtActionInvoker2< String_t*, int32_t >::Invoke(26 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_43, _stringLiteral10, 0);
		Dictionary_2_t35 * L_44 = V_4;
		VirtActionInvoker2< String_t*, int32_t >::Invoke(26 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_44, _stringLiteral55, 1);
		Dictionary_2_t35 * L_45 = V_4;
		VirtActionInvoker2< String_t*, int32_t >::Invoke(26 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_45, _stringLiteral56, 2);
		Dictionary_2_t35 * L_46 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		((iTween_t23_StaticFields*)iTween_t23_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24mapB_51 = L_46;
	}

IL_01ee:
	{
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		Dictionary_2_t35 * L_47 = ((iTween_t23_StaticFields*)iTween_t23_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24mapB_51;
		String_t* L_48 = V_3;
		bool L_49 = (bool)VirtFuncInvoker2< bool, String_t*, int32_t* >::Invoke(31 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::TryGetValue(!0,!1&) */, L_47, L_48, (&V_5));
		if (!L_49)
		{
			goto IL_02f3;
		}
	}
	{
		int32_t L_50 = V_5;
		if (L_50 == 0)
		{
			goto IL_0218;
		}
		if (L_50 == 1)
		{
			goto IL_0261;
		}
		if (L_50 == 2)
		{
			goto IL_02aa;
		}
	}
	{
		goto IL_02f3;
	}

IL_0218:
	{
		Vector3U5BU5D_t16* L_51 = (__this->___vector3s_28);
		Vector3U5BU5D_t16* L_52 = (__this->___vector3s_28);
		float L_53 = (((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_52, 0, sizeof(Vector3_t14 )))->___y_2);
		((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_51, 1, sizeof(Vector3_t14 )))->___y_2 = L_53;
		Vector3U5BU5D_t16* L_54 = (__this->___vector3s_28);
		Vector3U5BU5D_t16* L_55 = (__this->___vector3s_28);
		float L_56 = (((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_55, 0, sizeof(Vector3_t14 )))->___z_3);
		((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_54, 1, sizeof(Vector3_t14 )))->___z_3 = L_56;
		goto IL_02f3;
	}

IL_0261:
	{
		Vector3U5BU5D_t16* L_57 = (__this->___vector3s_28);
		Vector3U5BU5D_t16* L_58 = (__this->___vector3s_28);
		float L_59 = (((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_58, 0, sizeof(Vector3_t14 )))->___x_1);
		((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_57, 1, sizeof(Vector3_t14 )))->___x_1 = L_59;
		Vector3U5BU5D_t16* L_60 = (__this->___vector3s_28);
		Vector3U5BU5D_t16* L_61 = (__this->___vector3s_28);
		float L_62 = (((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_61, 0, sizeof(Vector3_t14 )))->___z_3);
		((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_60, 1, sizeof(Vector3_t14 )))->___z_3 = L_62;
		goto IL_02f3;
	}

IL_02aa:
	{
		Vector3U5BU5D_t16* L_63 = (__this->___vector3s_28);
		Vector3U5BU5D_t16* L_64 = (__this->___vector3s_28);
		float L_65 = (((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_64, 0, sizeof(Vector3_t14 )))->___x_1);
		((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_63, 1, sizeof(Vector3_t14 )))->___x_1 = L_65;
		Vector3U5BU5D_t16* L_66 = (__this->___vector3s_28);
		Vector3U5BU5D_t16* L_67 = (__this->___vector3s_28);
		float L_68 = (((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_67, 0, sizeof(Vector3_t14 )))->___y_2);
		((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_66, 1, sizeof(Vector3_t14 )))->___y_2 = L_68;
		goto IL_02f3;
	}

IL_02f3:
	{
		Vector3U5BU5D_t16* L_69 = (__this->___vector3s_28);
		Vector3U5BU5D_t16* L_70 = (__this->___vector3s_28);
		float L_71 = (((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_70, 0, sizeof(Vector3_t14 )))->___x_1);
		Vector3U5BU5D_t16* L_72 = (__this->___vector3s_28);
		float L_73 = (((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_72, 1, sizeof(Vector3_t14 )))->___x_1);
		float L_74 = iTween_clerp_m263(__this, L_71, L_73, (1.0f), /*hidden argument*/NULL);
		Vector3U5BU5D_t16* L_75 = (__this->___vector3s_28);
		float L_76 = (((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_75, 0, sizeof(Vector3_t14 )))->___y_2);
		Vector3U5BU5D_t16* L_77 = (__this->___vector3s_28);
		float L_78 = (((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_77, 1, sizeof(Vector3_t14 )))->___y_2);
		float L_79 = iTween_clerp_m263(__this, L_76, L_78, (1.0f), /*hidden argument*/NULL);
		Vector3U5BU5D_t16* L_80 = (__this->___vector3s_28);
		float L_81 = (((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_80, 0, sizeof(Vector3_t14 )))->___z_3);
		Vector3U5BU5D_t16* L_82 = (__this->___vector3s_28);
		float L_83 = (((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_82, 1, sizeof(Vector3_t14 )))->___z_3);
		float L_84 = iTween_clerp_m263(__this, L_81, L_83, (1.0f), /*hidden argument*/NULL);
		Vector3_t14  L_85 = {0};
		Vector3__ctor_m306(&L_85, L_74, L_79, L_84, /*hidden argument*/NULL);
		(*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_69, 1, sizeof(Vector3_t14 )))) = L_85;
		Hashtable_t26 * L_86 = (__this->___tweenArguments_23);
		bool L_87 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(26 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_86, _stringLiteral69);
		if (!L_87)
		{
			goto IL_03ef;
		}
	}
	{
		Vector3U5BU5D_t16* L_88 = (__this->___vector3s_28);
		Vector3U5BU5D_t16* L_89 = (__this->___vector3s_28);
		float L_90 = Vector3_Distance_m378(NULL /*static, unused*/, (*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_88, 0, sizeof(Vector3_t14 )))), (*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_89, 1, sizeof(Vector3_t14 )))), /*hidden argument*/NULL);
		float L_91 = fabsf(L_90);
		V_0 = L_91;
		float L_92 = V_0;
		Hashtable_t26 * L_93 = (__this->___tweenArguments_23);
		Object_t * L_94 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_93, _stringLiteral69);
		__this->___time_8 = ((float)((float)L_92/(float)((*(float*)((float*)UnBox (L_94, Single_t51_il2cpp_TypeInfo_var))))));
	}

IL_03ef:
	{
		return;
	}
}
// System.Void iTween::GenerateMoveToPathTargets()
extern const Il2CppType* Vector3U5BU5D_t16_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* Vector3U5BU5D_t16_il2cpp_TypeInfo_var;
extern TypeInfo* TransformU5BU5D_t39_il2cpp_TypeInfo_var;
extern TypeInfo* Boolean_t56_il2cpp_TypeInfo_var;
extern TypeInfo* CRSpline_t15_il2cpp_TypeInfo_var;
extern TypeInfo* iTween_t23_il2cpp_TypeInfo_var;
extern TypeInfo* Single_t51_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral64;
extern Il2CppCodeGenString* _stringLiteral72;
extern Il2CppCodeGenString* _stringLiteral73;
extern Il2CppCodeGenString* _stringLiteral69;
extern "C" void iTween_GenerateMoveToPathTargets_m114 (iTween_t23 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Vector3U5BU5D_t16_0_0_0_var = il2cpp_codegen_type_from_index(12);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		Vector3U5BU5D_t16_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(12);
		TransformU5BU5D_t39_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(36);
		Boolean_t56_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(28);
		CRSpline_t15_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(44);
		iTween_t23_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		Single_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		_stringLiteral64 = il2cpp_codegen_string_literal_from_index(64);
		_stringLiteral72 = il2cpp_codegen_string_literal_from_index(72);
		_stringLiteral73 = il2cpp_codegen_string_literal_from_index(73);
		_stringLiteral69 = il2cpp_codegen_string_literal_from_index(69);
		s_Il2CppMethodIntialized = true;
	}
	Vector3U5BU5D_t16* V_0 = {0};
	Vector3U5BU5D_t16* V_1 = {0};
	TransformU5BU5D_t39* V_2 = {0};
	int32_t V_3 = 0;
	bool V_4 = false;
	int32_t V_5 = 0;
	Vector3U5BU5D_t16* V_6 = {0};
	float V_7 = 0.0f;
	{
		Hashtable_t26 * L_0 = (__this->___tweenArguments_23);
		Object_t * L_1 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_0, _stringLiteral64);
		Type_t * L_2 = Object_GetType_m342(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m343(NULL /*static, unused*/, LoadTypeToken(Vector3U5BU5D_t16_0_0_0_var), /*hidden argument*/NULL);
		if ((!(((Object_t*)(Type_t *)L_2) == ((Object_t*)(Type_t *)L_3))))
		{
			goto IL_006b;
		}
	}
	{
		Hashtable_t26 * L_4 = (__this->___tweenArguments_23);
		Object_t * L_5 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_4, _stringLiteral64);
		V_1 = ((Vector3U5BU5D_t16*)Castclass(L_5, Vector3U5BU5D_t16_il2cpp_TypeInfo_var));
		Vector3U5BU5D_t16* L_6 = V_1;
		if ((!(((uint32_t)(((int32_t)((int32_t)(((Array_t *)L_6)->max_length))))) == ((uint32_t)1))))
		{
			goto IL_0053;
		}
	}
	{
		Debug_LogError_m341(NULL /*static, unused*/, _stringLiteral72, /*hidden argument*/NULL);
		iTween_Dispose_m257(__this, /*hidden argument*/NULL);
	}

IL_0053:
	{
		Vector3U5BU5D_t16* L_7 = V_1;
		V_0 = ((Vector3U5BU5D_t16*)SZArrayNew(Vector3U5BU5D_t16_il2cpp_TypeInfo_var, (((int32_t)((int32_t)(((Array_t *)L_7)->max_length))))));
		Vector3U5BU5D_t16* L_8 = V_1;
		Vector3U5BU5D_t16* L_9 = V_0;
		Vector3U5BU5D_t16* L_10 = V_1;
		Array_Copy_m327(NULL /*static, unused*/, (Array_t *)(Array_t *)L_8, (Array_t *)(Array_t *)L_9, (((int32_t)((int32_t)(((Array_t *)L_10)->max_length)))), /*hidden argument*/NULL);
		goto IL_00cb;
	}

IL_006b:
	{
		Hashtable_t26 * L_11 = (__this->___tweenArguments_23);
		Object_t * L_12 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_11, _stringLiteral64);
		V_2 = ((TransformU5BU5D_t39*)Castclass(L_12, TransformU5BU5D_t39_il2cpp_TypeInfo_var));
		TransformU5BU5D_t39* L_13 = V_2;
		if ((!(((uint32_t)(((int32_t)((int32_t)(((Array_t *)L_13)->max_length))))) == ((uint32_t)1))))
		{
			goto IL_009a;
		}
	}
	{
		Debug_LogError_m341(NULL /*static, unused*/, _stringLiteral72, /*hidden argument*/NULL);
		iTween_Dispose_m257(__this, /*hidden argument*/NULL);
	}

IL_009a:
	{
		TransformU5BU5D_t39* L_14 = V_2;
		V_0 = ((Vector3U5BU5D_t16*)SZArrayNew(Vector3U5BU5D_t16_il2cpp_TypeInfo_var, (((int32_t)((int32_t)(((Array_t *)L_14)->max_length))))));
		V_3 = 0;
		goto IL_00c2;
	}

IL_00aa:
	{
		Vector3U5BU5D_t16* L_15 = V_0;
		int32_t L_16 = V_3;
		TransformU5BU5D_t39* L_17 = V_2;
		int32_t L_18 = V_3;
		int32_t L_19 = L_18;
		Vector3_t14  L_20 = Transform_get_position_m369((*(Transform_t32 **)(Transform_t32 **)SZArrayLdElema(L_17, L_19, sizeof(Transform_t32 *))), /*hidden argument*/NULL);
		(*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_15, L_16, sizeof(Vector3_t14 )))) = L_20;
		int32_t L_21 = V_3;
		V_3 = ((int32_t)((int32_t)L_21+(int32_t)1));
	}

IL_00c2:
	{
		int32_t L_22 = V_3;
		TransformU5BU5D_t39* L_23 = V_2;
		if ((((int32_t)L_22) < ((int32_t)(((int32_t)((int32_t)(((Array_t *)L_23)->max_length)))))))
		{
			goto IL_00aa;
		}
	}

IL_00cb:
	{
		Transform_t32 * L_24 = (__this->___thisTransform_39);
		Vector3_t14  L_25 = Transform_get_position_m369(L_24, /*hidden argument*/NULL);
		Vector3U5BU5D_t16* L_26 = V_0;
		bool L_27 = Vector3_op_Inequality_m371(NULL /*static, unused*/, L_25, (*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_26, 0, sizeof(Vector3_t14 )))), /*hidden argument*/NULL);
		if (!L_27)
		{
			goto IL_0131;
		}
	}
	{
		Hashtable_t26 * L_28 = (__this->___tweenArguments_23);
		bool L_29 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(26 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_28, _stringLiteral73);
		if (!L_29)
		{
			goto IL_011b;
		}
	}
	{
		Hashtable_t26 * L_30 = (__this->___tweenArguments_23);
		Object_t * L_31 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_30, _stringLiteral73);
		if (!((*(bool*)((bool*)UnBox (L_31, Boolean_t56_il2cpp_TypeInfo_var)))))
		{
			goto IL_0126;
		}
	}

IL_011b:
	{
		V_4 = 1;
		V_5 = 3;
		goto IL_012c;
	}

IL_0126:
	{
		V_4 = 0;
		V_5 = 2;
	}

IL_012c:
	{
		goto IL_0137;
	}

IL_0131:
	{
		V_4 = 0;
		V_5 = 2;
	}

IL_0137:
	{
		Vector3U5BU5D_t16* L_32 = V_0;
		int32_t L_33 = V_5;
		__this->___vector3s_28 = ((Vector3U5BU5D_t16*)SZArrayNew(Vector3U5BU5D_t16_il2cpp_TypeInfo_var, ((int32_t)((int32_t)(((int32_t)((int32_t)(((Array_t *)L_32)->max_length))))+(int32_t)L_33))));
		bool L_34 = V_4;
		if (!L_34)
		{
			goto IL_0173;
		}
	}
	{
		Vector3U5BU5D_t16* L_35 = (__this->___vector3s_28);
		Transform_t32 * L_36 = (__this->___thisTransform_39);
		Vector3_t14  L_37 = Transform_get_position_m369(L_36, /*hidden argument*/NULL);
		(*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_35, 1, sizeof(Vector3_t14 )))) = L_37;
		V_5 = 2;
		goto IL_0176;
	}

IL_0173:
	{
		V_5 = 1;
	}

IL_0176:
	{
		Vector3U5BU5D_t16* L_38 = V_0;
		Vector3U5BU5D_t16* L_39 = (__this->___vector3s_28);
		int32_t L_40 = V_5;
		Vector3U5BU5D_t16* L_41 = V_0;
		Array_Copy_m392(NULL /*static, unused*/, (Array_t *)(Array_t *)L_38, 0, (Array_t *)(Array_t *)L_39, L_40, (((int32_t)((int32_t)(((Array_t *)L_41)->max_length)))), /*hidden argument*/NULL);
		Vector3U5BU5D_t16* L_42 = (__this->___vector3s_28);
		Vector3U5BU5D_t16* L_43 = (__this->___vector3s_28);
		Vector3U5BU5D_t16* L_44 = (__this->___vector3s_28);
		Vector3U5BU5D_t16* L_45 = (__this->___vector3s_28);
		Vector3_t14  L_46 = Vector3_op_Subtraction_m333(NULL /*static, unused*/, (*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_44, 1, sizeof(Vector3_t14 )))), (*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_45, 2, sizeof(Vector3_t14 )))), /*hidden argument*/NULL);
		Vector3_t14  L_47 = Vector3_op_Addition_m332(NULL /*static, unused*/, (*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_43, 1, sizeof(Vector3_t14 )))), L_46, /*hidden argument*/NULL);
		(*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_42, 0, sizeof(Vector3_t14 )))) = L_47;
		Vector3U5BU5D_t16* L_48 = (__this->___vector3s_28);
		Vector3U5BU5D_t16* L_49 = (__this->___vector3s_28);
		Vector3U5BU5D_t16* L_50 = (__this->___vector3s_28);
		Vector3U5BU5D_t16* L_51 = (__this->___vector3s_28);
		Vector3U5BU5D_t16* L_52 = (__this->___vector3s_28);
		Vector3U5BU5D_t16* L_53 = (__this->___vector3s_28);
		Vector3U5BU5D_t16* L_54 = (__this->___vector3s_28);
		Vector3U5BU5D_t16* L_55 = (__this->___vector3s_28);
		Vector3_t14  L_56 = Vector3_op_Subtraction_m333(NULL /*static, unused*/, (*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_52, ((int32_t)((int32_t)(((int32_t)((int32_t)(((Array_t *)L_53)->max_length))))-(int32_t)2)), sizeof(Vector3_t14 )))), (*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_54, ((int32_t)((int32_t)(((int32_t)((int32_t)(((Array_t *)L_55)->max_length))))-(int32_t)3)), sizeof(Vector3_t14 )))), /*hidden argument*/NULL);
		Vector3_t14  L_57 = Vector3_op_Addition_m332(NULL /*static, unused*/, (*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_50, ((int32_t)((int32_t)(((int32_t)((int32_t)(((Array_t *)L_51)->max_length))))-(int32_t)2)), sizeof(Vector3_t14 )))), L_56, /*hidden argument*/NULL);
		(*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_48, ((int32_t)((int32_t)(((int32_t)((int32_t)(((Array_t *)L_49)->max_length))))-(int32_t)1)), sizeof(Vector3_t14 )))) = L_57;
		Vector3U5BU5D_t16* L_58 = (__this->___vector3s_28);
		Vector3U5BU5D_t16* L_59 = (__this->___vector3s_28);
		Vector3U5BU5D_t16* L_60 = (__this->___vector3s_28);
		bool L_61 = Vector3_op_Equality_m393(NULL /*static, unused*/, (*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_58, 1, sizeof(Vector3_t14 )))), (*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_59, ((int32_t)((int32_t)(((int32_t)((int32_t)(((Array_t *)L_60)->max_length))))-(int32_t)2)), sizeof(Vector3_t14 )))), /*hidden argument*/NULL);
		if (!L_61)
		{
			goto IL_02ff;
		}
	}
	{
		Vector3U5BU5D_t16* L_62 = (__this->___vector3s_28);
		V_6 = ((Vector3U5BU5D_t16*)SZArrayNew(Vector3U5BU5D_t16_il2cpp_TypeInfo_var, (((int32_t)((int32_t)(((Array_t *)L_62)->max_length))))));
		Vector3U5BU5D_t16* L_63 = (__this->___vector3s_28);
		Vector3U5BU5D_t16* L_64 = V_6;
		Vector3U5BU5D_t16* L_65 = (__this->___vector3s_28);
		Array_Copy_m327(NULL /*static, unused*/, (Array_t *)(Array_t *)L_63, (Array_t *)(Array_t *)L_64, (((int32_t)((int32_t)(((Array_t *)L_65)->max_length)))), /*hidden argument*/NULL);
		Vector3U5BU5D_t16* L_66 = V_6;
		Vector3U5BU5D_t16* L_67 = V_6;
		Vector3U5BU5D_t16* L_68 = V_6;
		(*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_66, 0, sizeof(Vector3_t14 )))) = (*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_67, ((int32_t)((int32_t)(((int32_t)((int32_t)(((Array_t *)L_68)->max_length))))-(int32_t)3)), sizeof(Vector3_t14 ))));
		Vector3U5BU5D_t16* L_69 = V_6;
		Vector3U5BU5D_t16* L_70 = V_6;
		Vector3U5BU5D_t16* L_71 = V_6;
		(*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_69, ((int32_t)((int32_t)(((int32_t)((int32_t)(((Array_t *)L_70)->max_length))))-(int32_t)1)), sizeof(Vector3_t14 )))) = (*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_71, 2, sizeof(Vector3_t14 ))));
		Vector3U5BU5D_t16* L_72 = V_6;
		__this->___vector3s_28 = ((Vector3U5BU5D_t16*)SZArrayNew(Vector3U5BU5D_t16_il2cpp_TypeInfo_var, (((int32_t)((int32_t)(((Array_t *)L_72)->max_length))))));
		Vector3U5BU5D_t16* L_73 = V_6;
		Vector3U5BU5D_t16* L_74 = (__this->___vector3s_28);
		Vector3U5BU5D_t16* L_75 = V_6;
		Array_Copy_m327(NULL /*static, unused*/, (Array_t *)(Array_t *)L_73, (Array_t *)(Array_t *)L_74, (((int32_t)((int32_t)(((Array_t *)L_75)->max_length)))), /*hidden argument*/NULL);
	}

IL_02ff:
	{
		Vector3U5BU5D_t16* L_76 = (__this->___vector3s_28);
		CRSpline_t15 * L_77 = (CRSpline_t15 *)il2cpp_codegen_object_new (CRSpline_t15_il2cpp_TypeInfo_var);
		CRSpline__ctor_m14(L_77, L_76, /*hidden argument*/NULL);
		__this->___path_33 = L_77;
		Hashtable_t26 * L_78 = (__this->___tweenArguments_23);
		bool L_79 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(26 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_78, _stringLiteral69);
		if (!L_79)
		{
			goto IL_0350;
		}
	}
	{
		Vector3U5BU5D_t16* L_80 = (__this->___vector3s_28);
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		float L_81 = iTween_PathLength_m175(NULL /*static, unused*/, L_80, /*hidden argument*/NULL);
		V_7 = L_81;
		float L_82 = V_7;
		Hashtable_t26 * L_83 = (__this->___tweenArguments_23);
		Object_t * L_84 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_83, _stringLiteral69);
		__this->___time_8 = ((float)((float)L_82/(float)((*(float*)((float*)UnBox (L_84, Single_t51_il2cpp_TypeInfo_var))))));
	}

IL_0350:
	{
		return;
	}
}
// System.Void iTween::GenerateMoveToTargets()
extern const Il2CppType* Transform_t32_0_0_0_var;
extern const Il2CppType* Vector3_t14_0_0_0_var;
extern TypeInfo* Vector3U5BU5D_t16_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* Transform_t32_il2cpp_TypeInfo_var;
extern TypeInfo* Vector3_t14_il2cpp_TypeInfo_var;
extern TypeInfo* Single_t51_il2cpp_TypeInfo_var;
extern TypeInfo* Boolean_t56_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral59;
extern Il2CppCodeGenString* _stringLiteral10;
extern Il2CppCodeGenString* _stringLiteral55;
extern Il2CppCodeGenString* _stringLiteral56;
extern Il2CppCodeGenString* _stringLiteral74;
extern Il2CppCodeGenString* _stringLiteral52;
extern Il2CppCodeGenString* _stringLiteral69;
extern "C" void iTween_GenerateMoveToTargets_m115 (iTween_t23 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Transform_t32_0_0_0_var = il2cpp_codegen_type_from_index(30);
		Vector3_t14_0_0_0_var = il2cpp_codegen_type_from_index(13);
		Vector3U5BU5D_t16_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(12);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		Transform_t32_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(30);
		Vector3_t14_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13);
		Single_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		Boolean_t56_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(28);
		_stringLiteral59 = il2cpp_codegen_string_literal_from_index(59);
		_stringLiteral10 = il2cpp_codegen_string_literal_from_index(10);
		_stringLiteral55 = il2cpp_codegen_string_literal_from_index(55);
		_stringLiteral56 = il2cpp_codegen_string_literal_from_index(56);
		_stringLiteral74 = il2cpp_codegen_string_literal_from_index(74);
		_stringLiteral52 = il2cpp_codegen_string_literal_from_index(52);
		_stringLiteral69 = il2cpp_codegen_string_literal_from_index(69);
		s_Il2CppMethodIntialized = true;
	}
	Transform_t32 * V_0 = {0};
	float V_1 = 0.0f;
	Vector3_t14  V_2 = {0};
	{
		__this->___vector3s_28 = ((Vector3U5BU5D_t16*)SZArrayNew(Vector3U5BU5D_t16_il2cpp_TypeInfo_var, 3));
		bool L_0 = (__this->___isLocal_18);
		if (!L_0)
		{
			goto IL_004c;
		}
	}
	{
		Vector3U5BU5D_t16* L_1 = (__this->___vector3s_28);
		Vector3U5BU5D_t16* L_2 = (__this->___vector3s_28);
		Transform_t32 * L_3 = (__this->___thisTransform_39);
		Vector3_t14  L_4 = Transform_get_localPosition_m372(L_3, /*hidden argument*/NULL);
		Vector3_t14  L_5 = L_4;
		V_2 = L_5;
		(*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_2, 1, sizeof(Vector3_t14 )))) = L_5;
		Vector3_t14  L_6 = V_2;
		(*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_1, 0, sizeof(Vector3_t14 )))) = L_6;
		goto IL_007c;
	}

IL_004c:
	{
		Vector3U5BU5D_t16* L_7 = (__this->___vector3s_28);
		Vector3U5BU5D_t16* L_8 = (__this->___vector3s_28);
		Transform_t32 * L_9 = (__this->___thisTransform_39);
		Vector3_t14  L_10 = Transform_get_position_m369(L_9, /*hidden argument*/NULL);
		Vector3_t14  L_11 = L_10;
		V_2 = L_11;
		(*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_8, 1, sizeof(Vector3_t14 )))) = L_11;
		Vector3_t14  L_12 = V_2;
		(*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_7, 0, sizeof(Vector3_t14 )))) = L_12;
	}

IL_007c:
	{
		Hashtable_t26 * L_13 = (__this->___tweenArguments_23);
		bool L_14 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(26 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_13, _stringLiteral59);
		if (!L_14)
		{
			goto IL_0136;
		}
	}
	{
		Hashtable_t26 * L_15 = (__this->___tweenArguments_23);
		Object_t * L_16 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_15, _stringLiteral59);
		Type_t * L_17 = Object_GetType_m342(L_16, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_18 = Type_GetTypeFromHandle_m343(NULL /*static, unused*/, LoadTypeToken(Transform_t32_0_0_0_var), /*hidden argument*/NULL);
		if ((!(((Object_t*)(Type_t *)L_17) == ((Object_t*)(Type_t *)L_18))))
		{
			goto IL_00e7;
		}
	}
	{
		Hashtable_t26 * L_19 = (__this->___tweenArguments_23);
		Object_t * L_20 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_19, _stringLiteral59);
		V_0 = ((Transform_t32 *)CastclassClass(L_20, Transform_t32_il2cpp_TypeInfo_var));
		Vector3U5BU5D_t16* L_21 = (__this->___vector3s_28);
		Transform_t32 * L_22 = V_0;
		Vector3_t14  L_23 = Transform_get_position_m369(L_22, /*hidden argument*/NULL);
		(*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_21, 1, sizeof(Vector3_t14 )))) = L_23;
		goto IL_0131;
	}

IL_00e7:
	{
		Hashtable_t26 * L_24 = (__this->___tweenArguments_23);
		Object_t * L_25 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_24, _stringLiteral59);
		Type_t * L_26 = Object_GetType_m342(L_25, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_27 = Type_GetTypeFromHandle_m343(NULL /*static, unused*/, LoadTypeToken(Vector3_t14_0_0_0_var), /*hidden argument*/NULL);
		if ((!(((Object_t*)(Type_t *)L_26) == ((Object_t*)(Type_t *)L_27))))
		{
			goto IL_0131;
		}
	}
	{
		Vector3U5BU5D_t16* L_28 = (__this->___vector3s_28);
		Hashtable_t26 * L_29 = (__this->___tweenArguments_23);
		Object_t * L_30 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_29, _stringLiteral59);
		(*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_28, 1, sizeof(Vector3_t14 )))) = ((*(Vector3_t14 *)((Vector3_t14 *)UnBox (L_30, Vector3_t14_il2cpp_TypeInfo_var))));
	}

IL_0131:
	{
		goto IL_01e7;
	}

IL_0136:
	{
		Hashtable_t26 * L_31 = (__this->___tweenArguments_23);
		bool L_32 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(26 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_31, _stringLiteral10);
		if (!L_32)
		{
			goto IL_0171;
		}
	}
	{
		Vector3U5BU5D_t16* L_33 = (__this->___vector3s_28);
		Hashtable_t26 * L_34 = (__this->___tweenArguments_23);
		Object_t * L_35 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_34, _stringLiteral10);
		((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_33, 1, sizeof(Vector3_t14 )))->___x_1 = ((*(float*)((float*)UnBox (L_35, Single_t51_il2cpp_TypeInfo_var))));
	}

IL_0171:
	{
		Hashtable_t26 * L_36 = (__this->___tweenArguments_23);
		bool L_37 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(26 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_36, _stringLiteral55);
		if (!L_37)
		{
			goto IL_01ac;
		}
	}
	{
		Vector3U5BU5D_t16* L_38 = (__this->___vector3s_28);
		Hashtable_t26 * L_39 = (__this->___tweenArguments_23);
		Object_t * L_40 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_39, _stringLiteral55);
		((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_38, 1, sizeof(Vector3_t14 )))->___y_2 = ((*(float*)((float*)UnBox (L_40, Single_t51_il2cpp_TypeInfo_var))));
	}

IL_01ac:
	{
		Hashtable_t26 * L_41 = (__this->___tweenArguments_23);
		bool L_42 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(26 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_41, _stringLiteral56);
		if (!L_42)
		{
			goto IL_01e7;
		}
	}
	{
		Vector3U5BU5D_t16* L_43 = (__this->___vector3s_28);
		Hashtable_t26 * L_44 = (__this->___tweenArguments_23);
		Object_t * L_45 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_44, _stringLiteral56);
		((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_43, 1, sizeof(Vector3_t14 )))->___z_3 = ((*(float*)((float*)UnBox (L_45, Single_t51_il2cpp_TypeInfo_var))));
	}

IL_01e7:
	{
		Hashtable_t26 * L_46 = (__this->___tweenArguments_23);
		bool L_47 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(26 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_46, _stringLiteral74);
		if (!L_47)
		{
			goto IL_023c;
		}
	}
	{
		Hashtable_t26 * L_48 = (__this->___tweenArguments_23);
		Object_t * L_49 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_48, _stringLiteral74);
		if (!((*(bool*)((bool*)UnBox (L_49, Boolean_t56_il2cpp_TypeInfo_var)))))
		{
			goto IL_023c;
		}
	}
	{
		Hashtable_t26 * L_50 = (__this->___tweenArguments_23);
		Vector3U5BU5D_t16* L_51 = (__this->___vector3s_28);
		Vector3_t14  L_52 = (*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_51, 1, sizeof(Vector3_t14 ))));
		Object_t * L_53 = Box(Vector3_t14_il2cpp_TypeInfo_var, &L_52);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(22 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_50, _stringLiteral52, L_53);
	}

IL_023c:
	{
		Hashtable_t26 * L_54 = (__this->___tweenArguments_23);
		bool L_55 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(26 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_54, _stringLiteral69);
		if (!L_55)
		{
			goto IL_029b;
		}
	}
	{
		Vector3U5BU5D_t16* L_56 = (__this->___vector3s_28);
		Vector3U5BU5D_t16* L_57 = (__this->___vector3s_28);
		float L_58 = Vector3_Distance_m378(NULL /*static, unused*/, (*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_56, 0, sizeof(Vector3_t14 )))), (*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_57, 1, sizeof(Vector3_t14 )))), /*hidden argument*/NULL);
		float L_59 = fabsf(L_58);
		V_1 = L_59;
		float L_60 = V_1;
		Hashtable_t26 * L_61 = (__this->___tweenArguments_23);
		Object_t * L_62 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_61, _stringLiteral69);
		__this->___time_8 = ((float)((float)L_60/(float)((*(float*)((float*)UnBox (L_62, Single_t51_il2cpp_TypeInfo_var))))));
	}

IL_029b:
	{
		return;
	}
}
// System.Void iTween::GenerateMoveByTargets()
extern TypeInfo* Vector3U5BU5D_t16_il2cpp_TypeInfo_var;
extern TypeInfo* Vector3_t14_il2cpp_TypeInfo_var;
extern TypeInfo* Single_t51_il2cpp_TypeInfo_var;
extern TypeInfo* Boolean_t56_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral21;
extern Il2CppCodeGenString* _stringLiteral10;
extern Il2CppCodeGenString* _stringLiteral55;
extern Il2CppCodeGenString* _stringLiteral56;
extern Il2CppCodeGenString* _stringLiteral74;
extern Il2CppCodeGenString* _stringLiteral52;
extern Il2CppCodeGenString* _stringLiteral69;
extern "C" void iTween_GenerateMoveByTargets_m116 (iTween_t23 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Vector3U5BU5D_t16_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(12);
		Vector3_t14_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13);
		Single_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		Boolean_t56_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(28);
		_stringLiteral21 = il2cpp_codegen_string_literal_from_index(21);
		_stringLiteral10 = il2cpp_codegen_string_literal_from_index(10);
		_stringLiteral55 = il2cpp_codegen_string_literal_from_index(55);
		_stringLiteral56 = il2cpp_codegen_string_literal_from_index(56);
		_stringLiteral74 = il2cpp_codegen_string_literal_from_index(74);
		_stringLiteral52 = il2cpp_codegen_string_literal_from_index(52);
		_stringLiteral69 = il2cpp_codegen_string_literal_from_index(69);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	Vector3_t14  V_1 = {0};
	{
		__this->___vector3s_28 = ((Vector3U5BU5D_t16*)SZArrayNew(Vector3U5BU5D_t16_il2cpp_TypeInfo_var, 6));
		Vector3U5BU5D_t16* L_0 = (__this->___vector3s_28);
		Transform_t32 * L_1 = (__this->___thisTransform_39);
		Vector3_t14  L_2 = Transform_get_eulerAngles_m362(L_1, /*hidden argument*/NULL);
		(*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_0, 4, sizeof(Vector3_t14 )))) = L_2;
		Vector3U5BU5D_t16* L_3 = (__this->___vector3s_28);
		Vector3U5BU5D_t16* L_4 = (__this->___vector3s_28);
		Vector3U5BU5D_t16* L_5 = (__this->___vector3s_28);
		Transform_t32 * L_6 = (__this->___thisTransform_39);
		Vector3_t14  L_7 = Transform_get_position_m369(L_6, /*hidden argument*/NULL);
		Vector3_t14  L_8 = L_7;
		V_1 = L_8;
		(*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_5, 3, sizeof(Vector3_t14 )))) = L_8;
		Vector3_t14  L_9 = V_1;
		Vector3_t14  L_10 = L_9;
		V_1 = L_10;
		(*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_4, 1, sizeof(Vector3_t14 )))) = L_10;
		Vector3_t14  L_11 = V_1;
		(*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_3, 0, sizeof(Vector3_t14 )))) = L_11;
		Hashtable_t26 * L_12 = (__this->___tweenArguments_23);
		bool L_13 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(26 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_12, _stringLiteral21);
		if (!L_13)
		{
			goto IL_00c2;
		}
	}
	{
		Vector3U5BU5D_t16* L_14 = (__this->___vector3s_28);
		Vector3U5BU5D_t16* L_15 = (__this->___vector3s_28);
		Hashtable_t26 * L_16 = (__this->___tweenArguments_23);
		Object_t * L_17 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_16, _stringLiteral21);
		Vector3_t14  L_18 = Vector3_op_Addition_m332(NULL /*static, unused*/, (*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_15, 0, sizeof(Vector3_t14 )))), ((*(Vector3_t14 *)((Vector3_t14 *)UnBox (L_17, Vector3_t14_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		(*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_14, 1, sizeof(Vector3_t14 )))) = L_18;
		goto IL_01a9;
	}

IL_00c2:
	{
		Hashtable_t26 * L_19 = (__this->___tweenArguments_23);
		bool L_20 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(26 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_19, _stringLiteral10);
		if (!L_20)
		{
			goto IL_010f;
		}
	}
	{
		Vector3U5BU5D_t16* L_21 = (__this->___vector3s_28);
		Vector3U5BU5D_t16* L_22 = (__this->___vector3s_28);
		float L_23 = (((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_22, 0, sizeof(Vector3_t14 )))->___x_1);
		Hashtable_t26 * L_24 = (__this->___tweenArguments_23);
		Object_t * L_25 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_24, _stringLiteral10);
		((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_21, 1, sizeof(Vector3_t14 )))->___x_1 = ((float)((float)L_23+(float)((*(float*)((float*)UnBox (L_25, Single_t51_il2cpp_TypeInfo_var))))));
	}

IL_010f:
	{
		Hashtable_t26 * L_26 = (__this->___tweenArguments_23);
		bool L_27 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(26 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_26, _stringLiteral55);
		if (!L_27)
		{
			goto IL_015c;
		}
	}
	{
		Vector3U5BU5D_t16* L_28 = (__this->___vector3s_28);
		Vector3U5BU5D_t16* L_29 = (__this->___vector3s_28);
		float L_30 = (((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_29, 0, sizeof(Vector3_t14 )))->___y_2);
		Hashtable_t26 * L_31 = (__this->___tweenArguments_23);
		Object_t * L_32 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_31, _stringLiteral55);
		((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_28, 1, sizeof(Vector3_t14 )))->___y_2 = ((float)((float)L_30+(float)((*(float*)((float*)UnBox (L_32, Single_t51_il2cpp_TypeInfo_var))))));
	}

IL_015c:
	{
		Hashtable_t26 * L_33 = (__this->___tweenArguments_23);
		bool L_34 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(26 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_33, _stringLiteral56);
		if (!L_34)
		{
			goto IL_01a9;
		}
	}
	{
		Vector3U5BU5D_t16* L_35 = (__this->___vector3s_28);
		Vector3U5BU5D_t16* L_36 = (__this->___vector3s_28);
		float L_37 = (((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_36, 0, sizeof(Vector3_t14 )))->___z_3);
		Hashtable_t26 * L_38 = (__this->___tweenArguments_23);
		Object_t * L_39 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_38, _stringLiteral56);
		((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_35, 1, sizeof(Vector3_t14 )))->___z_3 = ((float)((float)L_37+(float)((*(float*)((float*)UnBox (L_39, Single_t51_il2cpp_TypeInfo_var))))));
	}

IL_01a9:
	{
		Transform_t32 * L_40 = (__this->___thisTransform_39);
		Vector3U5BU5D_t16* L_41 = (__this->___vector3s_28);
		int32_t L_42 = (__this->___space_24);
		Transform_Translate_m394(L_40, (*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_41, 1, sizeof(Vector3_t14 )))), L_42, /*hidden argument*/NULL);
		Vector3U5BU5D_t16* L_43 = (__this->___vector3s_28);
		Transform_t32 * L_44 = (__this->___thisTransform_39);
		Vector3_t14  L_45 = Transform_get_position_m369(L_44, /*hidden argument*/NULL);
		(*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_43, 5, sizeof(Vector3_t14 )))) = L_45;
		Transform_t32 * L_46 = (__this->___thisTransform_39);
		Vector3U5BU5D_t16* L_47 = (__this->___vector3s_28);
		Transform_set_position_m374(L_46, (*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_47, 0, sizeof(Vector3_t14 )))), /*hidden argument*/NULL);
		Hashtable_t26 * L_48 = (__this->___tweenArguments_23);
		bool L_49 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(26 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_48, _stringLiteral74);
		if (!L_49)
		{
			goto IL_0258;
		}
	}
	{
		Hashtable_t26 * L_50 = (__this->___tweenArguments_23);
		Object_t * L_51 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_50, _stringLiteral74);
		if (!((*(bool*)((bool*)UnBox (L_51, Boolean_t56_il2cpp_TypeInfo_var)))))
		{
			goto IL_0258;
		}
	}
	{
		Hashtable_t26 * L_52 = (__this->___tweenArguments_23);
		Vector3U5BU5D_t16* L_53 = (__this->___vector3s_28);
		Vector3_t14  L_54 = (*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_53, 1, sizeof(Vector3_t14 ))));
		Object_t * L_55 = Box(Vector3_t14_il2cpp_TypeInfo_var, &L_54);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(22 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_52, _stringLiteral52, L_55);
	}

IL_0258:
	{
		Hashtable_t26 * L_56 = (__this->___tweenArguments_23);
		bool L_57 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(26 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_56, _stringLiteral69);
		if (!L_57)
		{
			goto IL_02b7;
		}
	}
	{
		Vector3U5BU5D_t16* L_58 = (__this->___vector3s_28);
		Vector3U5BU5D_t16* L_59 = (__this->___vector3s_28);
		float L_60 = Vector3_Distance_m378(NULL /*static, unused*/, (*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_58, 0, sizeof(Vector3_t14 )))), (*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_59, 1, sizeof(Vector3_t14 )))), /*hidden argument*/NULL);
		float L_61 = fabsf(L_60);
		V_0 = L_61;
		float L_62 = V_0;
		Hashtable_t26 * L_63 = (__this->___tweenArguments_23);
		Object_t * L_64 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_63, _stringLiteral69);
		__this->___time_8 = ((float)((float)L_62/(float)((*(float*)((float*)UnBox (L_64, Single_t51_il2cpp_TypeInfo_var))))));
	}

IL_02b7:
	{
		return;
	}
}
// System.Void iTween::GenerateScaleToTargets()
extern const Il2CppType* Transform_t32_0_0_0_var;
extern const Il2CppType* Vector3_t14_0_0_0_var;
extern TypeInfo* Vector3U5BU5D_t16_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* Transform_t32_il2cpp_TypeInfo_var;
extern TypeInfo* Vector3_t14_il2cpp_TypeInfo_var;
extern TypeInfo* Single_t51_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral61;
extern Il2CppCodeGenString* _stringLiteral10;
extern Il2CppCodeGenString* _stringLiteral55;
extern Il2CppCodeGenString* _stringLiteral56;
extern Il2CppCodeGenString* _stringLiteral69;
extern "C" void iTween_GenerateScaleToTargets_m117 (iTween_t23 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Transform_t32_0_0_0_var = il2cpp_codegen_type_from_index(30);
		Vector3_t14_0_0_0_var = il2cpp_codegen_type_from_index(13);
		Vector3U5BU5D_t16_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(12);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		Transform_t32_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(30);
		Vector3_t14_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13);
		Single_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		_stringLiteral61 = il2cpp_codegen_string_literal_from_index(61);
		_stringLiteral10 = il2cpp_codegen_string_literal_from_index(10);
		_stringLiteral55 = il2cpp_codegen_string_literal_from_index(55);
		_stringLiteral56 = il2cpp_codegen_string_literal_from_index(56);
		_stringLiteral69 = il2cpp_codegen_string_literal_from_index(69);
		s_Il2CppMethodIntialized = true;
	}
	Transform_t32 * V_0 = {0};
	float V_1 = 0.0f;
	Vector3_t14  V_2 = {0};
	{
		__this->___vector3s_28 = ((Vector3U5BU5D_t16*)SZArrayNew(Vector3U5BU5D_t16_il2cpp_TypeInfo_var, 3));
		Vector3U5BU5D_t16* L_0 = (__this->___vector3s_28);
		Vector3U5BU5D_t16* L_1 = (__this->___vector3s_28);
		Transform_t32 * L_2 = (__this->___thisTransform_39);
		Vector3_t14  L_3 = Transform_get_localScale_m370(L_2, /*hidden argument*/NULL);
		Vector3_t14  L_4 = L_3;
		V_2 = L_4;
		(*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_1, 1, sizeof(Vector3_t14 )))) = L_4;
		Vector3_t14  L_5 = V_2;
		(*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_0, 0, sizeof(Vector3_t14 )))) = L_5;
		Hashtable_t26 * L_6 = (__this->___tweenArguments_23);
		bool L_7 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(26 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_6, _stringLiteral61);
		if (!L_7)
		{
			goto IL_00f6;
		}
	}
	{
		Hashtable_t26 * L_8 = (__this->___tweenArguments_23);
		Object_t * L_9 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_8, _stringLiteral61);
		Type_t * L_10 = Object_GetType_m342(L_9, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_11 = Type_GetTypeFromHandle_m343(NULL /*static, unused*/, LoadTypeToken(Transform_t32_0_0_0_var), /*hidden argument*/NULL);
		if ((!(((Object_t*)(Type_t *)L_10) == ((Object_t*)(Type_t *)L_11))))
		{
			goto IL_00a7;
		}
	}
	{
		Hashtable_t26 * L_12 = (__this->___tweenArguments_23);
		Object_t * L_13 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_12, _stringLiteral61);
		V_0 = ((Transform_t32 *)CastclassClass(L_13, Transform_t32_il2cpp_TypeInfo_var));
		Vector3U5BU5D_t16* L_14 = (__this->___vector3s_28);
		Transform_t32 * L_15 = V_0;
		Vector3_t14  L_16 = Transform_get_localScale_m370(L_15, /*hidden argument*/NULL);
		(*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_14, 1, sizeof(Vector3_t14 )))) = L_16;
		goto IL_00f1;
	}

IL_00a7:
	{
		Hashtable_t26 * L_17 = (__this->___tweenArguments_23);
		Object_t * L_18 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_17, _stringLiteral61);
		Type_t * L_19 = Object_GetType_m342(L_18, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_20 = Type_GetTypeFromHandle_m343(NULL /*static, unused*/, LoadTypeToken(Vector3_t14_0_0_0_var), /*hidden argument*/NULL);
		if ((!(((Object_t*)(Type_t *)L_19) == ((Object_t*)(Type_t *)L_20))))
		{
			goto IL_00f1;
		}
	}
	{
		Vector3U5BU5D_t16* L_21 = (__this->___vector3s_28);
		Hashtable_t26 * L_22 = (__this->___tweenArguments_23);
		Object_t * L_23 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_22, _stringLiteral61);
		(*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_21, 1, sizeof(Vector3_t14 )))) = ((*(Vector3_t14 *)((Vector3_t14 *)UnBox (L_23, Vector3_t14_il2cpp_TypeInfo_var))));
	}

IL_00f1:
	{
		goto IL_01a7;
	}

IL_00f6:
	{
		Hashtable_t26 * L_24 = (__this->___tweenArguments_23);
		bool L_25 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(26 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_24, _stringLiteral10);
		if (!L_25)
		{
			goto IL_0131;
		}
	}
	{
		Vector3U5BU5D_t16* L_26 = (__this->___vector3s_28);
		Hashtable_t26 * L_27 = (__this->___tweenArguments_23);
		Object_t * L_28 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_27, _stringLiteral10);
		((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_26, 1, sizeof(Vector3_t14 )))->___x_1 = ((*(float*)((float*)UnBox (L_28, Single_t51_il2cpp_TypeInfo_var))));
	}

IL_0131:
	{
		Hashtable_t26 * L_29 = (__this->___tweenArguments_23);
		bool L_30 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(26 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_29, _stringLiteral55);
		if (!L_30)
		{
			goto IL_016c;
		}
	}
	{
		Vector3U5BU5D_t16* L_31 = (__this->___vector3s_28);
		Hashtable_t26 * L_32 = (__this->___tweenArguments_23);
		Object_t * L_33 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_32, _stringLiteral55);
		((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_31, 1, sizeof(Vector3_t14 )))->___y_2 = ((*(float*)((float*)UnBox (L_33, Single_t51_il2cpp_TypeInfo_var))));
	}

IL_016c:
	{
		Hashtable_t26 * L_34 = (__this->___tweenArguments_23);
		bool L_35 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(26 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_34, _stringLiteral56);
		if (!L_35)
		{
			goto IL_01a7;
		}
	}
	{
		Vector3U5BU5D_t16* L_36 = (__this->___vector3s_28);
		Hashtable_t26 * L_37 = (__this->___tweenArguments_23);
		Object_t * L_38 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_37, _stringLiteral56);
		((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_36, 1, sizeof(Vector3_t14 )))->___z_3 = ((*(float*)((float*)UnBox (L_38, Single_t51_il2cpp_TypeInfo_var))));
	}

IL_01a7:
	{
		Hashtable_t26 * L_39 = (__this->___tweenArguments_23);
		bool L_40 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(26 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_39, _stringLiteral69);
		if (!L_40)
		{
			goto IL_0206;
		}
	}
	{
		Vector3U5BU5D_t16* L_41 = (__this->___vector3s_28);
		Vector3U5BU5D_t16* L_42 = (__this->___vector3s_28);
		float L_43 = Vector3_Distance_m378(NULL /*static, unused*/, (*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_41, 0, sizeof(Vector3_t14 )))), (*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_42, 1, sizeof(Vector3_t14 )))), /*hidden argument*/NULL);
		float L_44 = fabsf(L_43);
		V_1 = L_44;
		float L_45 = V_1;
		Hashtable_t26 * L_46 = (__this->___tweenArguments_23);
		Object_t * L_47 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_46, _stringLiteral69);
		__this->___time_8 = ((float)((float)L_45/(float)((*(float*)((float*)UnBox (L_47, Single_t51_il2cpp_TypeInfo_var))))));
	}

IL_0206:
	{
		return;
	}
}
// System.Void iTween::GenerateScaleByTargets()
extern TypeInfo* Vector3U5BU5D_t16_il2cpp_TypeInfo_var;
extern TypeInfo* Vector3_t14_il2cpp_TypeInfo_var;
extern TypeInfo* Single_t51_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral21;
extern Il2CppCodeGenString* _stringLiteral10;
extern Il2CppCodeGenString* _stringLiteral55;
extern Il2CppCodeGenString* _stringLiteral56;
extern Il2CppCodeGenString* _stringLiteral69;
extern "C" void iTween_GenerateScaleByTargets_m118 (iTween_t23 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Vector3U5BU5D_t16_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(12);
		Vector3_t14_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13);
		Single_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		_stringLiteral21 = il2cpp_codegen_string_literal_from_index(21);
		_stringLiteral10 = il2cpp_codegen_string_literal_from_index(10);
		_stringLiteral55 = il2cpp_codegen_string_literal_from_index(55);
		_stringLiteral56 = il2cpp_codegen_string_literal_from_index(56);
		_stringLiteral69 = il2cpp_codegen_string_literal_from_index(69);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	Vector3_t14  V_1 = {0};
	{
		__this->___vector3s_28 = ((Vector3U5BU5D_t16*)SZArrayNew(Vector3U5BU5D_t16_il2cpp_TypeInfo_var, 3));
		Vector3U5BU5D_t16* L_0 = (__this->___vector3s_28);
		Vector3U5BU5D_t16* L_1 = (__this->___vector3s_28);
		Transform_t32 * L_2 = (__this->___thisTransform_39);
		Vector3_t14  L_3 = Transform_get_localScale_m370(L_2, /*hidden argument*/NULL);
		Vector3_t14  L_4 = L_3;
		V_1 = L_4;
		(*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_1, 1, sizeof(Vector3_t14 )))) = L_4;
		Vector3_t14  L_5 = V_1;
		(*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_0, 0, sizeof(Vector3_t14 )))) = L_5;
		Hashtable_t26 * L_6 = (__this->___tweenArguments_23);
		bool L_7 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(26 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_6, _stringLiteral21);
		if (!L_7)
		{
			goto IL_0092;
		}
	}
	{
		Vector3U5BU5D_t16* L_8 = (__this->___vector3s_28);
		Vector3U5BU5D_t16* L_9 = (__this->___vector3s_28);
		Hashtable_t26 * L_10 = (__this->___tweenArguments_23);
		Object_t * L_11 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_10, _stringLiteral21);
		Vector3_t14  L_12 = Vector3_Scale_m395(NULL /*static, unused*/, (*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_9, 1, sizeof(Vector3_t14 )))), ((*(Vector3_t14 *)((Vector3_t14 *)UnBox (L_11, Vector3_t14_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		(*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_8, 1, sizeof(Vector3_t14 )))) = L_12;
		goto IL_0158;
	}

IL_0092:
	{
		Hashtable_t26 * L_13 = (__this->___tweenArguments_23);
		bool L_14 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(26 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_13, _stringLiteral10);
		if (!L_14)
		{
			goto IL_00d4;
		}
	}
	{
		Vector3U5BU5D_t16* L_15 = (__this->___vector3s_28);
		Vector3_t14 * L_16 = ((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_15, 1, sizeof(Vector3_t14 )));
		float L_17 = (L_16->___x_1);
		Hashtable_t26 * L_18 = (__this->___tweenArguments_23);
		Object_t * L_19 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_18, _stringLiteral10);
		L_16->___x_1 = ((float)((float)L_17*(float)((*(float*)((float*)UnBox (L_19, Single_t51_il2cpp_TypeInfo_var))))));
	}

IL_00d4:
	{
		Hashtable_t26 * L_20 = (__this->___tweenArguments_23);
		bool L_21 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(26 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_20, _stringLiteral55);
		if (!L_21)
		{
			goto IL_0116;
		}
	}
	{
		Vector3U5BU5D_t16* L_22 = (__this->___vector3s_28);
		Vector3_t14 * L_23 = ((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_22, 1, sizeof(Vector3_t14 )));
		float L_24 = (L_23->___y_2);
		Hashtable_t26 * L_25 = (__this->___tweenArguments_23);
		Object_t * L_26 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_25, _stringLiteral55);
		L_23->___y_2 = ((float)((float)L_24*(float)((*(float*)((float*)UnBox (L_26, Single_t51_il2cpp_TypeInfo_var))))));
	}

IL_0116:
	{
		Hashtable_t26 * L_27 = (__this->___tweenArguments_23);
		bool L_28 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(26 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_27, _stringLiteral56);
		if (!L_28)
		{
			goto IL_0158;
		}
	}
	{
		Vector3U5BU5D_t16* L_29 = (__this->___vector3s_28);
		Vector3_t14 * L_30 = ((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_29, 1, sizeof(Vector3_t14 )));
		float L_31 = (L_30->___z_3);
		Hashtable_t26 * L_32 = (__this->___tweenArguments_23);
		Object_t * L_33 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_32, _stringLiteral56);
		L_30->___z_3 = ((float)((float)L_31*(float)((*(float*)((float*)UnBox (L_33, Single_t51_il2cpp_TypeInfo_var))))));
	}

IL_0158:
	{
		Hashtable_t26 * L_34 = (__this->___tweenArguments_23);
		bool L_35 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(26 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_34, _stringLiteral69);
		if (!L_35)
		{
			goto IL_01b7;
		}
	}
	{
		Vector3U5BU5D_t16* L_36 = (__this->___vector3s_28);
		Vector3U5BU5D_t16* L_37 = (__this->___vector3s_28);
		float L_38 = Vector3_Distance_m378(NULL /*static, unused*/, (*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_36, 0, sizeof(Vector3_t14 )))), (*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_37, 1, sizeof(Vector3_t14 )))), /*hidden argument*/NULL);
		float L_39 = fabsf(L_38);
		V_0 = L_39;
		float L_40 = V_0;
		Hashtable_t26 * L_41 = (__this->___tweenArguments_23);
		Object_t * L_42 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_41, _stringLiteral69);
		__this->___time_8 = ((float)((float)L_40/(float)((*(float*)((float*)UnBox (L_42, Single_t51_il2cpp_TypeInfo_var))))));
	}

IL_01b7:
	{
		return;
	}
}
// System.Void iTween::GenerateScaleAddTargets()
extern TypeInfo* Vector3U5BU5D_t16_il2cpp_TypeInfo_var;
extern TypeInfo* Vector3_t14_il2cpp_TypeInfo_var;
extern TypeInfo* Single_t51_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral21;
extern Il2CppCodeGenString* _stringLiteral10;
extern Il2CppCodeGenString* _stringLiteral55;
extern Il2CppCodeGenString* _stringLiteral56;
extern Il2CppCodeGenString* _stringLiteral69;
extern "C" void iTween_GenerateScaleAddTargets_m119 (iTween_t23 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Vector3U5BU5D_t16_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(12);
		Vector3_t14_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13);
		Single_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		_stringLiteral21 = il2cpp_codegen_string_literal_from_index(21);
		_stringLiteral10 = il2cpp_codegen_string_literal_from_index(10);
		_stringLiteral55 = il2cpp_codegen_string_literal_from_index(55);
		_stringLiteral56 = il2cpp_codegen_string_literal_from_index(56);
		_stringLiteral69 = il2cpp_codegen_string_literal_from_index(69);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	Vector3_t14  V_1 = {0};
	{
		__this->___vector3s_28 = ((Vector3U5BU5D_t16*)SZArrayNew(Vector3U5BU5D_t16_il2cpp_TypeInfo_var, 3));
		Vector3U5BU5D_t16* L_0 = (__this->___vector3s_28);
		Vector3U5BU5D_t16* L_1 = (__this->___vector3s_28);
		Transform_t32 * L_2 = (__this->___thisTransform_39);
		Vector3_t14  L_3 = Transform_get_localScale_m370(L_2, /*hidden argument*/NULL);
		Vector3_t14  L_4 = L_3;
		V_1 = L_4;
		(*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_1, 1, sizeof(Vector3_t14 )))) = L_4;
		Vector3_t14  L_5 = V_1;
		(*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_0, 0, sizeof(Vector3_t14 )))) = L_5;
		Hashtable_t26 * L_6 = (__this->___tweenArguments_23);
		bool L_7 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(26 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_6, _stringLiteral21);
		if (!L_7)
		{
			goto IL_0087;
		}
	}
	{
		Vector3U5BU5D_t16* L_8 = (__this->___vector3s_28);
		Vector3_t14 * L_9 = ((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_8, 1, sizeof(Vector3_t14 )));
		Hashtable_t26 * L_10 = (__this->___tweenArguments_23);
		Object_t * L_11 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_10, _stringLiteral21);
		Vector3_t14  L_12 = Vector3_op_Addition_m332(NULL /*static, unused*/, (*(Vector3_t14 *)L_9), ((*(Vector3_t14 *)((Vector3_t14 *)UnBox (L_11, Vector3_t14_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		(*(Vector3_t14 *)L_9) = L_12;
		goto IL_014d;
	}

IL_0087:
	{
		Hashtable_t26 * L_13 = (__this->___tweenArguments_23);
		bool L_14 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(26 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_13, _stringLiteral10);
		if (!L_14)
		{
			goto IL_00c9;
		}
	}
	{
		Vector3U5BU5D_t16* L_15 = (__this->___vector3s_28);
		Vector3_t14 * L_16 = ((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_15, 1, sizeof(Vector3_t14 )));
		float L_17 = (L_16->___x_1);
		Hashtable_t26 * L_18 = (__this->___tweenArguments_23);
		Object_t * L_19 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_18, _stringLiteral10);
		L_16->___x_1 = ((float)((float)L_17+(float)((*(float*)((float*)UnBox (L_19, Single_t51_il2cpp_TypeInfo_var))))));
	}

IL_00c9:
	{
		Hashtable_t26 * L_20 = (__this->___tweenArguments_23);
		bool L_21 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(26 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_20, _stringLiteral55);
		if (!L_21)
		{
			goto IL_010b;
		}
	}
	{
		Vector3U5BU5D_t16* L_22 = (__this->___vector3s_28);
		Vector3_t14 * L_23 = ((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_22, 1, sizeof(Vector3_t14 )));
		float L_24 = (L_23->___y_2);
		Hashtable_t26 * L_25 = (__this->___tweenArguments_23);
		Object_t * L_26 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_25, _stringLiteral55);
		L_23->___y_2 = ((float)((float)L_24+(float)((*(float*)((float*)UnBox (L_26, Single_t51_il2cpp_TypeInfo_var))))));
	}

IL_010b:
	{
		Hashtable_t26 * L_27 = (__this->___tweenArguments_23);
		bool L_28 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(26 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_27, _stringLiteral56);
		if (!L_28)
		{
			goto IL_014d;
		}
	}
	{
		Vector3U5BU5D_t16* L_29 = (__this->___vector3s_28);
		Vector3_t14 * L_30 = ((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_29, 1, sizeof(Vector3_t14 )));
		float L_31 = (L_30->___z_3);
		Hashtable_t26 * L_32 = (__this->___tweenArguments_23);
		Object_t * L_33 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_32, _stringLiteral56);
		L_30->___z_3 = ((float)((float)L_31+(float)((*(float*)((float*)UnBox (L_33, Single_t51_il2cpp_TypeInfo_var))))));
	}

IL_014d:
	{
		Hashtable_t26 * L_34 = (__this->___tweenArguments_23);
		bool L_35 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(26 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_34, _stringLiteral69);
		if (!L_35)
		{
			goto IL_01ac;
		}
	}
	{
		Vector3U5BU5D_t16* L_36 = (__this->___vector3s_28);
		Vector3U5BU5D_t16* L_37 = (__this->___vector3s_28);
		float L_38 = Vector3_Distance_m378(NULL /*static, unused*/, (*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_36, 0, sizeof(Vector3_t14 )))), (*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_37, 1, sizeof(Vector3_t14 )))), /*hidden argument*/NULL);
		float L_39 = fabsf(L_38);
		V_0 = L_39;
		float L_40 = V_0;
		Hashtable_t26 * L_41 = (__this->___tweenArguments_23);
		Object_t * L_42 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_41, _stringLiteral69);
		__this->___time_8 = ((float)((float)L_40/(float)((*(float*)((float*)UnBox (L_42, Single_t51_il2cpp_TypeInfo_var))))));
	}

IL_01ac:
	{
		return;
	}
}
// System.Void iTween::GenerateRotateToTargets()
extern const Il2CppType* Transform_t32_0_0_0_var;
extern const Il2CppType* Vector3_t14_0_0_0_var;
extern TypeInfo* Vector3U5BU5D_t16_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* Transform_t32_il2cpp_TypeInfo_var;
extern TypeInfo* Vector3_t14_il2cpp_TypeInfo_var;
extern TypeInfo* Single_t51_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral57;
extern Il2CppCodeGenString* _stringLiteral10;
extern Il2CppCodeGenString* _stringLiteral55;
extern Il2CppCodeGenString* _stringLiteral56;
extern Il2CppCodeGenString* _stringLiteral69;
extern "C" void iTween_GenerateRotateToTargets_m120 (iTween_t23 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Transform_t32_0_0_0_var = il2cpp_codegen_type_from_index(30);
		Vector3_t14_0_0_0_var = il2cpp_codegen_type_from_index(13);
		Vector3U5BU5D_t16_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(12);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		Transform_t32_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(30);
		Vector3_t14_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13);
		Single_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		_stringLiteral57 = il2cpp_codegen_string_literal_from_index(57);
		_stringLiteral10 = il2cpp_codegen_string_literal_from_index(10);
		_stringLiteral55 = il2cpp_codegen_string_literal_from_index(55);
		_stringLiteral56 = il2cpp_codegen_string_literal_from_index(56);
		_stringLiteral69 = il2cpp_codegen_string_literal_from_index(69);
		s_Il2CppMethodIntialized = true;
	}
	Transform_t32 * V_0 = {0};
	float V_1 = 0.0f;
	Vector3_t14  V_2 = {0};
	{
		__this->___vector3s_28 = ((Vector3U5BU5D_t16*)SZArrayNew(Vector3U5BU5D_t16_il2cpp_TypeInfo_var, 3));
		bool L_0 = (__this->___isLocal_18);
		if (!L_0)
		{
			goto IL_004c;
		}
	}
	{
		Vector3U5BU5D_t16* L_1 = (__this->___vector3s_28);
		Vector3U5BU5D_t16* L_2 = (__this->___vector3s_28);
		Transform_t32 * L_3 = (__this->___thisTransform_39);
		Vector3_t14  L_4 = Transform_get_localEulerAngles_m376(L_3, /*hidden argument*/NULL);
		Vector3_t14  L_5 = L_4;
		V_2 = L_5;
		(*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_2, 1, sizeof(Vector3_t14 )))) = L_5;
		Vector3_t14  L_6 = V_2;
		(*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_1, 0, sizeof(Vector3_t14 )))) = L_6;
		goto IL_007c;
	}

IL_004c:
	{
		Vector3U5BU5D_t16* L_7 = (__this->___vector3s_28);
		Vector3U5BU5D_t16* L_8 = (__this->___vector3s_28);
		Transform_t32 * L_9 = (__this->___thisTransform_39);
		Vector3_t14  L_10 = Transform_get_eulerAngles_m362(L_9, /*hidden argument*/NULL);
		Vector3_t14  L_11 = L_10;
		V_2 = L_11;
		(*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_8, 1, sizeof(Vector3_t14 )))) = L_11;
		Vector3_t14  L_12 = V_2;
		(*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_7, 0, sizeof(Vector3_t14 )))) = L_12;
	}

IL_007c:
	{
		Hashtable_t26 * L_13 = (__this->___tweenArguments_23);
		bool L_14 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(26 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_13, _stringLiteral57);
		if (!L_14)
		{
			goto IL_0136;
		}
	}
	{
		Hashtable_t26 * L_15 = (__this->___tweenArguments_23);
		Object_t * L_16 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_15, _stringLiteral57);
		Type_t * L_17 = Object_GetType_m342(L_16, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_18 = Type_GetTypeFromHandle_m343(NULL /*static, unused*/, LoadTypeToken(Transform_t32_0_0_0_var), /*hidden argument*/NULL);
		if ((!(((Object_t*)(Type_t *)L_17) == ((Object_t*)(Type_t *)L_18))))
		{
			goto IL_00e7;
		}
	}
	{
		Hashtable_t26 * L_19 = (__this->___tweenArguments_23);
		Object_t * L_20 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_19, _stringLiteral57);
		V_0 = ((Transform_t32 *)CastclassClass(L_20, Transform_t32_il2cpp_TypeInfo_var));
		Vector3U5BU5D_t16* L_21 = (__this->___vector3s_28);
		Transform_t32 * L_22 = V_0;
		Vector3_t14  L_23 = Transform_get_eulerAngles_m362(L_22, /*hidden argument*/NULL);
		(*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_21, 1, sizeof(Vector3_t14 )))) = L_23;
		goto IL_0131;
	}

IL_00e7:
	{
		Hashtable_t26 * L_24 = (__this->___tweenArguments_23);
		Object_t * L_25 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_24, _stringLiteral57);
		Type_t * L_26 = Object_GetType_m342(L_25, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_27 = Type_GetTypeFromHandle_m343(NULL /*static, unused*/, LoadTypeToken(Vector3_t14_0_0_0_var), /*hidden argument*/NULL);
		if ((!(((Object_t*)(Type_t *)L_26) == ((Object_t*)(Type_t *)L_27))))
		{
			goto IL_0131;
		}
	}
	{
		Vector3U5BU5D_t16* L_28 = (__this->___vector3s_28);
		Hashtable_t26 * L_29 = (__this->___tweenArguments_23);
		Object_t * L_30 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_29, _stringLiteral57);
		(*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_28, 1, sizeof(Vector3_t14 )))) = ((*(Vector3_t14 *)((Vector3_t14 *)UnBox (L_30, Vector3_t14_il2cpp_TypeInfo_var))));
	}

IL_0131:
	{
		goto IL_01e7;
	}

IL_0136:
	{
		Hashtable_t26 * L_31 = (__this->___tweenArguments_23);
		bool L_32 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(26 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_31, _stringLiteral10);
		if (!L_32)
		{
			goto IL_0171;
		}
	}
	{
		Vector3U5BU5D_t16* L_33 = (__this->___vector3s_28);
		Hashtable_t26 * L_34 = (__this->___tweenArguments_23);
		Object_t * L_35 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_34, _stringLiteral10);
		((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_33, 1, sizeof(Vector3_t14 )))->___x_1 = ((*(float*)((float*)UnBox (L_35, Single_t51_il2cpp_TypeInfo_var))));
	}

IL_0171:
	{
		Hashtable_t26 * L_36 = (__this->___tweenArguments_23);
		bool L_37 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(26 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_36, _stringLiteral55);
		if (!L_37)
		{
			goto IL_01ac;
		}
	}
	{
		Vector3U5BU5D_t16* L_38 = (__this->___vector3s_28);
		Hashtable_t26 * L_39 = (__this->___tweenArguments_23);
		Object_t * L_40 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_39, _stringLiteral55);
		((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_38, 1, sizeof(Vector3_t14 )))->___y_2 = ((*(float*)((float*)UnBox (L_40, Single_t51_il2cpp_TypeInfo_var))));
	}

IL_01ac:
	{
		Hashtable_t26 * L_41 = (__this->___tweenArguments_23);
		bool L_42 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(26 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_41, _stringLiteral56);
		if (!L_42)
		{
			goto IL_01e7;
		}
	}
	{
		Vector3U5BU5D_t16* L_43 = (__this->___vector3s_28);
		Hashtable_t26 * L_44 = (__this->___tweenArguments_23);
		Object_t * L_45 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_44, _stringLiteral56);
		((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_43, 1, sizeof(Vector3_t14 )))->___z_3 = ((*(float*)((float*)UnBox (L_45, Single_t51_il2cpp_TypeInfo_var))));
	}

IL_01e7:
	{
		Vector3U5BU5D_t16* L_46 = (__this->___vector3s_28);
		Vector3U5BU5D_t16* L_47 = (__this->___vector3s_28);
		float L_48 = (((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_47, 0, sizeof(Vector3_t14 )))->___x_1);
		Vector3U5BU5D_t16* L_49 = (__this->___vector3s_28);
		float L_50 = (((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_49, 1, sizeof(Vector3_t14 )))->___x_1);
		float L_51 = iTween_clerp_m263(__this, L_48, L_50, (1.0f), /*hidden argument*/NULL);
		Vector3U5BU5D_t16* L_52 = (__this->___vector3s_28);
		float L_53 = (((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_52, 0, sizeof(Vector3_t14 )))->___y_2);
		Vector3U5BU5D_t16* L_54 = (__this->___vector3s_28);
		float L_55 = (((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_54, 1, sizeof(Vector3_t14 )))->___y_2);
		float L_56 = iTween_clerp_m263(__this, L_53, L_55, (1.0f), /*hidden argument*/NULL);
		Vector3U5BU5D_t16* L_57 = (__this->___vector3s_28);
		float L_58 = (((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_57, 0, sizeof(Vector3_t14 )))->___z_3);
		Vector3U5BU5D_t16* L_59 = (__this->___vector3s_28);
		float L_60 = (((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_59, 1, sizeof(Vector3_t14 )))->___z_3);
		float L_61 = iTween_clerp_m263(__this, L_58, L_60, (1.0f), /*hidden argument*/NULL);
		Vector3_t14  L_62 = {0};
		Vector3__ctor_m306(&L_62, L_51, L_56, L_61, /*hidden argument*/NULL);
		(*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_46, 1, sizeof(Vector3_t14 )))) = L_62;
		Hashtable_t26 * L_63 = (__this->___tweenArguments_23);
		bool L_64 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(26 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_63, _stringLiteral69);
		if (!L_64)
		{
			goto IL_02e3;
		}
	}
	{
		Vector3U5BU5D_t16* L_65 = (__this->___vector3s_28);
		Vector3U5BU5D_t16* L_66 = (__this->___vector3s_28);
		float L_67 = Vector3_Distance_m378(NULL /*static, unused*/, (*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_65, 0, sizeof(Vector3_t14 )))), (*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_66, 1, sizeof(Vector3_t14 )))), /*hidden argument*/NULL);
		float L_68 = fabsf(L_67);
		V_1 = L_68;
		float L_69 = V_1;
		Hashtable_t26 * L_70 = (__this->___tweenArguments_23);
		Object_t * L_71 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_70, _stringLiteral69);
		__this->___time_8 = ((float)((float)L_69/(float)((*(float*)((float*)UnBox (L_71, Single_t51_il2cpp_TypeInfo_var))))));
	}

IL_02e3:
	{
		return;
	}
}
// System.Void iTween::GenerateRotateAddTargets()
extern TypeInfo* Vector3U5BU5D_t16_il2cpp_TypeInfo_var;
extern TypeInfo* Vector3_t14_il2cpp_TypeInfo_var;
extern TypeInfo* Single_t51_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral21;
extern Il2CppCodeGenString* _stringLiteral10;
extern Il2CppCodeGenString* _stringLiteral55;
extern Il2CppCodeGenString* _stringLiteral56;
extern Il2CppCodeGenString* _stringLiteral69;
extern "C" void iTween_GenerateRotateAddTargets_m121 (iTween_t23 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Vector3U5BU5D_t16_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(12);
		Vector3_t14_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13);
		Single_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		_stringLiteral21 = il2cpp_codegen_string_literal_from_index(21);
		_stringLiteral10 = il2cpp_codegen_string_literal_from_index(10);
		_stringLiteral55 = il2cpp_codegen_string_literal_from_index(55);
		_stringLiteral56 = il2cpp_codegen_string_literal_from_index(56);
		_stringLiteral69 = il2cpp_codegen_string_literal_from_index(69);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	Vector3_t14  V_1 = {0};
	{
		__this->___vector3s_28 = ((Vector3U5BU5D_t16*)SZArrayNew(Vector3U5BU5D_t16_il2cpp_TypeInfo_var, 5));
		Vector3U5BU5D_t16* L_0 = (__this->___vector3s_28);
		Vector3U5BU5D_t16* L_1 = (__this->___vector3s_28);
		Vector3U5BU5D_t16* L_2 = (__this->___vector3s_28);
		Transform_t32 * L_3 = (__this->___thisTransform_39);
		Vector3_t14  L_4 = Transform_get_eulerAngles_m362(L_3, /*hidden argument*/NULL);
		Vector3_t14  L_5 = L_4;
		V_1 = L_5;
		(*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_2, 3, sizeof(Vector3_t14 )))) = L_5;
		Vector3_t14  L_6 = V_1;
		Vector3_t14  L_7 = L_6;
		V_1 = L_7;
		(*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_1, 1, sizeof(Vector3_t14 )))) = L_7;
		Vector3_t14  L_8 = V_1;
		(*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_0, 0, sizeof(Vector3_t14 )))) = L_8;
		Hashtable_t26 * L_9 = (__this->___tweenArguments_23);
		bool L_10 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(26 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_9, _stringLiteral21);
		if (!L_10)
		{
			goto IL_009b;
		}
	}
	{
		Vector3U5BU5D_t16* L_11 = (__this->___vector3s_28);
		Vector3_t14 * L_12 = ((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_11, 1, sizeof(Vector3_t14 )));
		Hashtable_t26 * L_13 = (__this->___tweenArguments_23);
		Object_t * L_14 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_13, _stringLiteral21);
		Vector3_t14  L_15 = Vector3_op_Addition_m332(NULL /*static, unused*/, (*(Vector3_t14 *)L_12), ((*(Vector3_t14 *)((Vector3_t14 *)UnBox (L_14, Vector3_t14_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		(*(Vector3_t14 *)L_12) = L_15;
		goto IL_0161;
	}

IL_009b:
	{
		Hashtable_t26 * L_16 = (__this->___tweenArguments_23);
		bool L_17 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(26 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_16, _stringLiteral10);
		if (!L_17)
		{
			goto IL_00dd;
		}
	}
	{
		Vector3U5BU5D_t16* L_18 = (__this->___vector3s_28);
		Vector3_t14 * L_19 = ((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_18, 1, sizeof(Vector3_t14 )));
		float L_20 = (L_19->___x_1);
		Hashtable_t26 * L_21 = (__this->___tweenArguments_23);
		Object_t * L_22 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_21, _stringLiteral10);
		L_19->___x_1 = ((float)((float)L_20+(float)((*(float*)((float*)UnBox (L_22, Single_t51_il2cpp_TypeInfo_var))))));
	}

IL_00dd:
	{
		Hashtable_t26 * L_23 = (__this->___tweenArguments_23);
		bool L_24 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(26 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_23, _stringLiteral55);
		if (!L_24)
		{
			goto IL_011f;
		}
	}
	{
		Vector3U5BU5D_t16* L_25 = (__this->___vector3s_28);
		Vector3_t14 * L_26 = ((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_25, 1, sizeof(Vector3_t14 )));
		float L_27 = (L_26->___y_2);
		Hashtable_t26 * L_28 = (__this->___tweenArguments_23);
		Object_t * L_29 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_28, _stringLiteral55);
		L_26->___y_2 = ((float)((float)L_27+(float)((*(float*)((float*)UnBox (L_29, Single_t51_il2cpp_TypeInfo_var))))));
	}

IL_011f:
	{
		Hashtable_t26 * L_30 = (__this->___tweenArguments_23);
		bool L_31 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(26 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_30, _stringLiteral56);
		if (!L_31)
		{
			goto IL_0161;
		}
	}
	{
		Vector3U5BU5D_t16* L_32 = (__this->___vector3s_28);
		Vector3_t14 * L_33 = ((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_32, 1, sizeof(Vector3_t14 )));
		float L_34 = (L_33->___z_3);
		Hashtable_t26 * L_35 = (__this->___tweenArguments_23);
		Object_t * L_36 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_35, _stringLiteral56);
		L_33->___z_3 = ((float)((float)L_34+(float)((*(float*)((float*)UnBox (L_36, Single_t51_il2cpp_TypeInfo_var))))));
	}

IL_0161:
	{
		Hashtable_t26 * L_37 = (__this->___tweenArguments_23);
		bool L_38 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(26 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_37, _stringLiteral69);
		if (!L_38)
		{
			goto IL_01c0;
		}
	}
	{
		Vector3U5BU5D_t16* L_39 = (__this->___vector3s_28);
		Vector3U5BU5D_t16* L_40 = (__this->___vector3s_28);
		float L_41 = Vector3_Distance_m378(NULL /*static, unused*/, (*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_39, 0, sizeof(Vector3_t14 )))), (*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_40, 1, sizeof(Vector3_t14 )))), /*hidden argument*/NULL);
		float L_42 = fabsf(L_41);
		V_0 = L_42;
		float L_43 = V_0;
		Hashtable_t26 * L_44 = (__this->___tweenArguments_23);
		Object_t * L_45 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_44, _stringLiteral69);
		__this->___time_8 = ((float)((float)L_43/(float)((*(float*)((float*)UnBox (L_45, Single_t51_il2cpp_TypeInfo_var))))));
	}

IL_01c0:
	{
		return;
	}
}
// System.Void iTween::GenerateRotateByTargets()
extern TypeInfo* Vector3U5BU5D_t16_il2cpp_TypeInfo_var;
extern TypeInfo* Vector3_t14_il2cpp_TypeInfo_var;
extern TypeInfo* Single_t51_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral21;
extern Il2CppCodeGenString* _stringLiteral10;
extern Il2CppCodeGenString* _stringLiteral55;
extern Il2CppCodeGenString* _stringLiteral56;
extern Il2CppCodeGenString* _stringLiteral69;
extern "C" void iTween_GenerateRotateByTargets_m122 (iTween_t23 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Vector3U5BU5D_t16_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(12);
		Vector3_t14_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13);
		Single_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		_stringLiteral21 = il2cpp_codegen_string_literal_from_index(21);
		_stringLiteral10 = il2cpp_codegen_string_literal_from_index(10);
		_stringLiteral55 = il2cpp_codegen_string_literal_from_index(55);
		_stringLiteral56 = il2cpp_codegen_string_literal_from_index(56);
		_stringLiteral69 = il2cpp_codegen_string_literal_from_index(69);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	Vector3_t14  V_1 = {0};
	{
		__this->___vector3s_28 = ((Vector3U5BU5D_t16*)SZArrayNew(Vector3U5BU5D_t16_il2cpp_TypeInfo_var, 4));
		Vector3U5BU5D_t16* L_0 = (__this->___vector3s_28);
		Vector3U5BU5D_t16* L_1 = (__this->___vector3s_28);
		Vector3U5BU5D_t16* L_2 = (__this->___vector3s_28);
		Transform_t32 * L_3 = (__this->___thisTransform_39);
		Vector3_t14  L_4 = Transform_get_eulerAngles_m362(L_3, /*hidden argument*/NULL);
		Vector3_t14  L_5 = L_4;
		V_1 = L_5;
		(*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_2, 3, sizeof(Vector3_t14 )))) = L_5;
		Vector3_t14  L_6 = V_1;
		Vector3_t14  L_7 = L_6;
		V_1 = L_7;
		(*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_1, 1, sizeof(Vector3_t14 )))) = L_7;
		Vector3_t14  L_8 = V_1;
		(*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_0, 0, sizeof(Vector3_t14 )))) = L_8;
		Hashtable_t26 * L_9 = (__this->___tweenArguments_23);
		bool L_10 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(26 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_9, _stringLiteral21);
		if (!L_10)
		{
			goto IL_00b4;
		}
	}
	{
		Vector3U5BU5D_t16* L_11 = (__this->___vector3s_28);
		Vector3_t14 * L_12 = ((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_11, 1, sizeof(Vector3_t14 )));
		Hashtable_t26 * L_13 = (__this->___tweenArguments_23);
		Object_t * L_14 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_13, _stringLiteral21);
		Vector3_t14  L_15 = {0};
		Vector3__ctor_m306(&L_15, (360.0f), (360.0f), (360.0f), /*hidden argument*/NULL);
		Vector3_t14  L_16 = Vector3_Scale_m395(NULL /*static, unused*/, ((*(Vector3_t14 *)((Vector3_t14 *)UnBox (L_14, Vector3_t14_il2cpp_TypeInfo_var)))), L_15, /*hidden argument*/NULL);
		Vector3_t14  L_17 = Vector3_op_Addition_m332(NULL /*static, unused*/, (*(Vector3_t14 *)L_12), L_16, /*hidden argument*/NULL);
		(*(Vector3_t14 *)L_12) = L_17;
		goto IL_018c;
	}

IL_00b4:
	{
		Hashtable_t26 * L_18 = (__this->___tweenArguments_23);
		bool L_19 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(26 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_18, _stringLiteral10);
		if (!L_19)
		{
			goto IL_00fc;
		}
	}
	{
		Vector3U5BU5D_t16* L_20 = (__this->___vector3s_28);
		Vector3_t14 * L_21 = ((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_20, 1, sizeof(Vector3_t14 )));
		float L_22 = (L_21->___x_1);
		Hashtable_t26 * L_23 = (__this->___tweenArguments_23);
		Object_t * L_24 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_23, _stringLiteral10);
		L_21->___x_1 = ((float)((float)L_22+(float)((float)((float)(360.0f)*(float)((*(float*)((float*)UnBox (L_24, Single_t51_il2cpp_TypeInfo_var))))))));
	}

IL_00fc:
	{
		Hashtable_t26 * L_25 = (__this->___tweenArguments_23);
		bool L_26 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(26 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_25, _stringLiteral55);
		if (!L_26)
		{
			goto IL_0144;
		}
	}
	{
		Vector3U5BU5D_t16* L_27 = (__this->___vector3s_28);
		Vector3_t14 * L_28 = ((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_27, 1, sizeof(Vector3_t14 )));
		float L_29 = (L_28->___y_2);
		Hashtable_t26 * L_30 = (__this->___tweenArguments_23);
		Object_t * L_31 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_30, _stringLiteral55);
		L_28->___y_2 = ((float)((float)L_29+(float)((float)((float)(360.0f)*(float)((*(float*)((float*)UnBox (L_31, Single_t51_il2cpp_TypeInfo_var))))))));
	}

IL_0144:
	{
		Hashtable_t26 * L_32 = (__this->___tweenArguments_23);
		bool L_33 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(26 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_32, _stringLiteral56);
		if (!L_33)
		{
			goto IL_018c;
		}
	}
	{
		Vector3U5BU5D_t16* L_34 = (__this->___vector3s_28);
		Vector3_t14 * L_35 = ((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_34, 1, sizeof(Vector3_t14 )));
		float L_36 = (L_35->___z_3);
		Hashtable_t26 * L_37 = (__this->___tweenArguments_23);
		Object_t * L_38 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_37, _stringLiteral56);
		L_35->___z_3 = ((float)((float)L_36+(float)((float)((float)(360.0f)*(float)((*(float*)((float*)UnBox (L_38, Single_t51_il2cpp_TypeInfo_var))))))));
	}

IL_018c:
	{
		Hashtable_t26 * L_39 = (__this->___tweenArguments_23);
		bool L_40 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(26 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_39, _stringLiteral69);
		if (!L_40)
		{
			goto IL_01eb;
		}
	}
	{
		Vector3U5BU5D_t16* L_41 = (__this->___vector3s_28);
		Vector3U5BU5D_t16* L_42 = (__this->___vector3s_28);
		float L_43 = Vector3_Distance_m378(NULL /*static, unused*/, (*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_41, 0, sizeof(Vector3_t14 )))), (*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_42, 1, sizeof(Vector3_t14 )))), /*hidden argument*/NULL);
		float L_44 = fabsf(L_43);
		V_0 = L_44;
		float L_45 = V_0;
		Hashtable_t26 * L_46 = (__this->___tweenArguments_23);
		Object_t * L_47 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_46, _stringLiteral69);
		__this->___time_8 = ((float)((float)L_45/(float)((*(float*)((float*)UnBox (L_47, Single_t51_il2cpp_TypeInfo_var))))));
	}

IL_01eb:
	{
		return;
	}
}
// System.Void iTween::GenerateShakePositionTargets()
extern TypeInfo* Vector3U5BU5D_t16_il2cpp_TypeInfo_var;
extern TypeInfo* Vector3_t14_il2cpp_TypeInfo_var;
extern TypeInfo* Single_t51_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral21;
extern Il2CppCodeGenString* _stringLiteral10;
extern Il2CppCodeGenString* _stringLiteral55;
extern Il2CppCodeGenString* _stringLiteral56;
extern "C" void iTween_GenerateShakePositionTargets_m123 (iTween_t23 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Vector3U5BU5D_t16_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(12);
		Vector3_t14_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13);
		Single_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		_stringLiteral21 = il2cpp_codegen_string_literal_from_index(21);
		_stringLiteral10 = il2cpp_codegen_string_literal_from_index(10);
		_stringLiteral55 = il2cpp_codegen_string_literal_from_index(55);
		_stringLiteral56 = il2cpp_codegen_string_literal_from_index(56);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___vector3s_28 = ((Vector3U5BU5D_t16*)SZArrayNew(Vector3U5BU5D_t16_il2cpp_TypeInfo_var, 4));
		Vector3U5BU5D_t16* L_0 = (__this->___vector3s_28);
		Transform_t32 * L_1 = (__this->___thisTransform_39);
		Vector3_t14  L_2 = Transform_get_eulerAngles_m362(L_1, /*hidden argument*/NULL);
		(*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_0, 3, sizeof(Vector3_t14 )))) = L_2;
		Vector3U5BU5D_t16* L_3 = (__this->___vector3s_28);
		Transform_t32 * L_4 = (__this->___thisTransform_39);
		Vector3_t14  L_5 = Transform_get_position_m369(L_4, /*hidden argument*/NULL);
		(*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_3, 0, sizeof(Vector3_t14 )))) = L_5;
		Hashtable_t26 * L_6 = (__this->___tweenArguments_23);
		bool L_7 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(26 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_6, _stringLiteral21);
		if (!L_7)
		{
			goto IL_0084;
		}
	}
	{
		Vector3U5BU5D_t16* L_8 = (__this->___vector3s_28);
		Hashtable_t26 * L_9 = (__this->___tweenArguments_23);
		Object_t * L_10 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_9, _stringLiteral21);
		(*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_8, 1, sizeof(Vector3_t14 )))) = ((*(Vector3_t14 *)((Vector3_t14 *)UnBox (L_10, Vector3_t14_il2cpp_TypeInfo_var))));
		goto IL_0135;
	}

IL_0084:
	{
		Hashtable_t26 * L_11 = (__this->___tweenArguments_23);
		bool L_12 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(26 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_11, _stringLiteral10);
		if (!L_12)
		{
			goto IL_00bf;
		}
	}
	{
		Vector3U5BU5D_t16* L_13 = (__this->___vector3s_28);
		Hashtable_t26 * L_14 = (__this->___tweenArguments_23);
		Object_t * L_15 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_14, _stringLiteral10);
		((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_13, 1, sizeof(Vector3_t14 )))->___x_1 = ((*(float*)((float*)UnBox (L_15, Single_t51_il2cpp_TypeInfo_var))));
	}

IL_00bf:
	{
		Hashtable_t26 * L_16 = (__this->___tweenArguments_23);
		bool L_17 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(26 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_16, _stringLiteral55);
		if (!L_17)
		{
			goto IL_00fa;
		}
	}
	{
		Vector3U5BU5D_t16* L_18 = (__this->___vector3s_28);
		Hashtable_t26 * L_19 = (__this->___tweenArguments_23);
		Object_t * L_20 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_19, _stringLiteral55);
		((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_18, 1, sizeof(Vector3_t14 )))->___y_2 = ((*(float*)((float*)UnBox (L_20, Single_t51_il2cpp_TypeInfo_var))));
	}

IL_00fa:
	{
		Hashtable_t26 * L_21 = (__this->___tweenArguments_23);
		bool L_22 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(26 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_21, _stringLiteral56);
		if (!L_22)
		{
			goto IL_0135;
		}
	}
	{
		Vector3U5BU5D_t16* L_23 = (__this->___vector3s_28);
		Hashtable_t26 * L_24 = (__this->___tweenArguments_23);
		Object_t * L_25 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_24, _stringLiteral56);
		((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_23, 1, sizeof(Vector3_t14 )))->___z_3 = ((*(float*)((float*)UnBox (L_25, Single_t51_il2cpp_TypeInfo_var))));
	}

IL_0135:
	{
		return;
	}
}
// System.Void iTween::GenerateShakeScaleTargets()
extern TypeInfo* Vector3U5BU5D_t16_il2cpp_TypeInfo_var;
extern TypeInfo* Vector3_t14_il2cpp_TypeInfo_var;
extern TypeInfo* Single_t51_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral21;
extern Il2CppCodeGenString* _stringLiteral10;
extern Il2CppCodeGenString* _stringLiteral55;
extern Il2CppCodeGenString* _stringLiteral56;
extern "C" void iTween_GenerateShakeScaleTargets_m124 (iTween_t23 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Vector3U5BU5D_t16_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(12);
		Vector3_t14_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13);
		Single_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		_stringLiteral21 = il2cpp_codegen_string_literal_from_index(21);
		_stringLiteral10 = il2cpp_codegen_string_literal_from_index(10);
		_stringLiteral55 = il2cpp_codegen_string_literal_from_index(55);
		_stringLiteral56 = il2cpp_codegen_string_literal_from_index(56);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___vector3s_28 = ((Vector3U5BU5D_t16*)SZArrayNew(Vector3U5BU5D_t16_il2cpp_TypeInfo_var, 3));
		Vector3U5BU5D_t16* L_0 = (__this->___vector3s_28);
		Transform_t32 * L_1 = (__this->___thisTransform_39);
		Vector3_t14  L_2 = Transform_get_localScale_m370(L_1, /*hidden argument*/NULL);
		(*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_0, 0, sizeof(Vector3_t14 )))) = L_2;
		Hashtable_t26 * L_3 = (__this->___tweenArguments_23);
		bool L_4 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(26 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_3, _stringLiteral21);
		if (!L_4)
		{
			goto IL_0068;
		}
	}
	{
		Vector3U5BU5D_t16* L_5 = (__this->___vector3s_28);
		Hashtable_t26 * L_6 = (__this->___tweenArguments_23);
		Object_t * L_7 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_6, _stringLiteral21);
		(*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_5, 1, sizeof(Vector3_t14 )))) = ((*(Vector3_t14 *)((Vector3_t14 *)UnBox (L_7, Vector3_t14_il2cpp_TypeInfo_var))));
		goto IL_0119;
	}

IL_0068:
	{
		Hashtable_t26 * L_8 = (__this->___tweenArguments_23);
		bool L_9 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(26 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_8, _stringLiteral10);
		if (!L_9)
		{
			goto IL_00a3;
		}
	}
	{
		Vector3U5BU5D_t16* L_10 = (__this->___vector3s_28);
		Hashtable_t26 * L_11 = (__this->___tweenArguments_23);
		Object_t * L_12 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_11, _stringLiteral10);
		((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_10, 1, sizeof(Vector3_t14 )))->___x_1 = ((*(float*)((float*)UnBox (L_12, Single_t51_il2cpp_TypeInfo_var))));
	}

IL_00a3:
	{
		Hashtable_t26 * L_13 = (__this->___tweenArguments_23);
		bool L_14 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(26 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_13, _stringLiteral55);
		if (!L_14)
		{
			goto IL_00de;
		}
	}
	{
		Vector3U5BU5D_t16* L_15 = (__this->___vector3s_28);
		Hashtable_t26 * L_16 = (__this->___tweenArguments_23);
		Object_t * L_17 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_16, _stringLiteral55);
		((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_15, 1, sizeof(Vector3_t14 )))->___y_2 = ((*(float*)((float*)UnBox (L_17, Single_t51_il2cpp_TypeInfo_var))));
	}

IL_00de:
	{
		Hashtable_t26 * L_18 = (__this->___tweenArguments_23);
		bool L_19 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(26 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_18, _stringLiteral56);
		if (!L_19)
		{
			goto IL_0119;
		}
	}
	{
		Vector3U5BU5D_t16* L_20 = (__this->___vector3s_28);
		Hashtable_t26 * L_21 = (__this->___tweenArguments_23);
		Object_t * L_22 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_21, _stringLiteral56);
		((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_20, 1, sizeof(Vector3_t14 )))->___z_3 = ((*(float*)((float*)UnBox (L_22, Single_t51_il2cpp_TypeInfo_var))));
	}

IL_0119:
	{
		return;
	}
}
// System.Void iTween::GenerateShakeRotationTargets()
extern TypeInfo* Vector3U5BU5D_t16_il2cpp_TypeInfo_var;
extern TypeInfo* Vector3_t14_il2cpp_TypeInfo_var;
extern TypeInfo* Single_t51_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral21;
extern Il2CppCodeGenString* _stringLiteral10;
extern Il2CppCodeGenString* _stringLiteral55;
extern Il2CppCodeGenString* _stringLiteral56;
extern "C" void iTween_GenerateShakeRotationTargets_m125 (iTween_t23 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Vector3U5BU5D_t16_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(12);
		Vector3_t14_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13);
		Single_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		_stringLiteral21 = il2cpp_codegen_string_literal_from_index(21);
		_stringLiteral10 = il2cpp_codegen_string_literal_from_index(10);
		_stringLiteral55 = il2cpp_codegen_string_literal_from_index(55);
		_stringLiteral56 = il2cpp_codegen_string_literal_from_index(56);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___vector3s_28 = ((Vector3U5BU5D_t16*)SZArrayNew(Vector3U5BU5D_t16_il2cpp_TypeInfo_var, 3));
		Vector3U5BU5D_t16* L_0 = (__this->___vector3s_28);
		Transform_t32 * L_1 = (__this->___thisTransform_39);
		Vector3_t14  L_2 = Transform_get_eulerAngles_m362(L_1, /*hidden argument*/NULL);
		(*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_0, 0, sizeof(Vector3_t14 )))) = L_2;
		Hashtable_t26 * L_3 = (__this->___tweenArguments_23);
		bool L_4 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(26 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_3, _stringLiteral21);
		if (!L_4)
		{
			goto IL_0068;
		}
	}
	{
		Vector3U5BU5D_t16* L_5 = (__this->___vector3s_28);
		Hashtable_t26 * L_6 = (__this->___tweenArguments_23);
		Object_t * L_7 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_6, _stringLiteral21);
		(*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_5, 1, sizeof(Vector3_t14 )))) = ((*(Vector3_t14 *)((Vector3_t14 *)UnBox (L_7, Vector3_t14_il2cpp_TypeInfo_var))));
		goto IL_0119;
	}

IL_0068:
	{
		Hashtable_t26 * L_8 = (__this->___tweenArguments_23);
		bool L_9 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(26 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_8, _stringLiteral10);
		if (!L_9)
		{
			goto IL_00a3;
		}
	}
	{
		Vector3U5BU5D_t16* L_10 = (__this->___vector3s_28);
		Hashtable_t26 * L_11 = (__this->___tweenArguments_23);
		Object_t * L_12 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_11, _stringLiteral10);
		((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_10, 1, sizeof(Vector3_t14 )))->___x_1 = ((*(float*)((float*)UnBox (L_12, Single_t51_il2cpp_TypeInfo_var))));
	}

IL_00a3:
	{
		Hashtable_t26 * L_13 = (__this->___tweenArguments_23);
		bool L_14 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(26 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_13, _stringLiteral55);
		if (!L_14)
		{
			goto IL_00de;
		}
	}
	{
		Vector3U5BU5D_t16* L_15 = (__this->___vector3s_28);
		Hashtable_t26 * L_16 = (__this->___tweenArguments_23);
		Object_t * L_17 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_16, _stringLiteral55);
		((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_15, 1, sizeof(Vector3_t14 )))->___y_2 = ((*(float*)((float*)UnBox (L_17, Single_t51_il2cpp_TypeInfo_var))));
	}

IL_00de:
	{
		Hashtable_t26 * L_18 = (__this->___tweenArguments_23);
		bool L_19 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(26 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_18, _stringLiteral56);
		if (!L_19)
		{
			goto IL_0119;
		}
	}
	{
		Vector3U5BU5D_t16* L_20 = (__this->___vector3s_28);
		Hashtable_t26 * L_21 = (__this->___tweenArguments_23);
		Object_t * L_22 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_21, _stringLiteral56);
		((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_20, 1, sizeof(Vector3_t14 )))->___z_3 = ((*(float*)((float*)UnBox (L_22, Single_t51_il2cpp_TypeInfo_var))));
	}

IL_0119:
	{
		return;
	}
}
// System.Void iTween::GeneratePunchPositionTargets()
extern TypeInfo* Vector3U5BU5D_t16_il2cpp_TypeInfo_var;
extern TypeInfo* Vector3_t14_il2cpp_TypeInfo_var;
extern TypeInfo* Single_t51_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral21;
extern Il2CppCodeGenString* _stringLiteral10;
extern Il2CppCodeGenString* _stringLiteral55;
extern Il2CppCodeGenString* _stringLiteral56;
extern "C" void iTween_GeneratePunchPositionTargets_m126 (iTween_t23 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Vector3U5BU5D_t16_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(12);
		Vector3_t14_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13);
		Single_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		_stringLiteral21 = il2cpp_codegen_string_literal_from_index(21);
		_stringLiteral10 = il2cpp_codegen_string_literal_from_index(10);
		_stringLiteral55 = il2cpp_codegen_string_literal_from_index(55);
		_stringLiteral56 = il2cpp_codegen_string_literal_from_index(56);
		s_Il2CppMethodIntialized = true;
	}
	Vector3_t14  V_0 = {0};
	{
		__this->___vector3s_28 = ((Vector3U5BU5D_t16*)SZArrayNew(Vector3U5BU5D_t16_il2cpp_TypeInfo_var, 5));
		Vector3U5BU5D_t16* L_0 = (__this->___vector3s_28);
		Transform_t32 * L_1 = (__this->___thisTransform_39);
		Vector3_t14  L_2 = Transform_get_eulerAngles_m362(L_1, /*hidden argument*/NULL);
		(*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_0, 4, sizeof(Vector3_t14 )))) = L_2;
		Vector3U5BU5D_t16* L_3 = (__this->___vector3s_28);
		Transform_t32 * L_4 = (__this->___thisTransform_39);
		Vector3_t14  L_5 = Transform_get_position_m369(L_4, /*hidden argument*/NULL);
		(*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_3, 0, sizeof(Vector3_t14 )))) = L_5;
		Vector3U5BU5D_t16* L_6 = (__this->___vector3s_28);
		Vector3U5BU5D_t16* L_7 = (__this->___vector3s_28);
		Vector3_t14  L_8 = Vector3_get_zero_m340(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t14  L_9 = L_8;
		V_0 = L_9;
		(*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_7, 3, sizeof(Vector3_t14 )))) = L_9;
		Vector3_t14  L_10 = V_0;
		(*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_6, 1, sizeof(Vector3_t14 )))) = L_10;
		Hashtable_t26 * L_11 = (__this->___tweenArguments_23);
		bool L_12 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(26 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_11, _stringLiteral21);
		if (!L_12)
		{
			goto IL_00ae;
		}
	}
	{
		Vector3U5BU5D_t16* L_13 = (__this->___vector3s_28);
		Hashtable_t26 * L_14 = (__this->___tweenArguments_23);
		Object_t * L_15 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_14, _stringLiteral21);
		(*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_13, 1, sizeof(Vector3_t14 )))) = ((*(Vector3_t14 *)((Vector3_t14 *)UnBox (L_15, Vector3_t14_il2cpp_TypeInfo_var))));
		goto IL_015f;
	}

IL_00ae:
	{
		Hashtable_t26 * L_16 = (__this->___tweenArguments_23);
		bool L_17 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(26 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_16, _stringLiteral10);
		if (!L_17)
		{
			goto IL_00e9;
		}
	}
	{
		Vector3U5BU5D_t16* L_18 = (__this->___vector3s_28);
		Hashtable_t26 * L_19 = (__this->___tweenArguments_23);
		Object_t * L_20 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_19, _stringLiteral10);
		((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_18, 1, sizeof(Vector3_t14 )))->___x_1 = ((*(float*)((float*)UnBox (L_20, Single_t51_il2cpp_TypeInfo_var))));
	}

IL_00e9:
	{
		Hashtable_t26 * L_21 = (__this->___tweenArguments_23);
		bool L_22 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(26 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_21, _stringLiteral55);
		if (!L_22)
		{
			goto IL_0124;
		}
	}
	{
		Vector3U5BU5D_t16* L_23 = (__this->___vector3s_28);
		Hashtable_t26 * L_24 = (__this->___tweenArguments_23);
		Object_t * L_25 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_24, _stringLiteral55);
		((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_23, 1, sizeof(Vector3_t14 )))->___y_2 = ((*(float*)((float*)UnBox (L_25, Single_t51_il2cpp_TypeInfo_var))));
	}

IL_0124:
	{
		Hashtable_t26 * L_26 = (__this->___tweenArguments_23);
		bool L_27 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(26 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_26, _stringLiteral56);
		if (!L_27)
		{
			goto IL_015f;
		}
	}
	{
		Vector3U5BU5D_t16* L_28 = (__this->___vector3s_28);
		Hashtable_t26 * L_29 = (__this->___tweenArguments_23);
		Object_t * L_30 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_29, _stringLiteral56);
		((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_28, 1, sizeof(Vector3_t14 )))->___z_3 = ((*(float*)((float*)UnBox (L_30, Single_t51_il2cpp_TypeInfo_var))));
	}

IL_015f:
	{
		return;
	}
}
// System.Void iTween::GeneratePunchRotationTargets()
extern TypeInfo* Vector3U5BU5D_t16_il2cpp_TypeInfo_var;
extern TypeInfo* Vector3_t14_il2cpp_TypeInfo_var;
extern TypeInfo* Single_t51_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral21;
extern Il2CppCodeGenString* _stringLiteral10;
extern Il2CppCodeGenString* _stringLiteral55;
extern Il2CppCodeGenString* _stringLiteral56;
extern "C" void iTween_GeneratePunchRotationTargets_m127 (iTween_t23 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Vector3U5BU5D_t16_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(12);
		Vector3_t14_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13);
		Single_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		_stringLiteral21 = il2cpp_codegen_string_literal_from_index(21);
		_stringLiteral10 = il2cpp_codegen_string_literal_from_index(10);
		_stringLiteral55 = il2cpp_codegen_string_literal_from_index(55);
		_stringLiteral56 = il2cpp_codegen_string_literal_from_index(56);
		s_Il2CppMethodIntialized = true;
	}
	Vector3_t14  V_0 = {0};
	{
		__this->___vector3s_28 = ((Vector3U5BU5D_t16*)SZArrayNew(Vector3U5BU5D_t16_il2cpp_TypeInfo_var, 4));
		Vector3U5BU5D_t16* L_0 = (__this->___vector3s_28);
		Transform_t32 * L_1 = (__this->___thisTransform_39);
		Vector3_t14  L_2 = Transform_get_eulerAngles_m362(L_1, /*hidden argument*/NULL);
		(*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_0, 0, sizeof(Vector3_t14 )))) = L_2;
		Vector3U5BU5D_t16* L_3 = (__this->___vector3s_28);
		Vector3U5BU5D_t16* L_4 = (__this->___vector3s_28);
		Vector3_t14  L_5 = Vector3_get_zero_m340(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t14  L_6 = L_5;
		V_0 = L_6;
		(*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_4, 3, sizeof(Vector3_t14 )))) = L_6;
		Vector3_t14  L_7 = V_0;
		(*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_3, 1, sizeof(Vector3_t14 )))) = L_7;
		Hashtable_t26 * L_8 = (__this->___tweenArguments_23);
		bool L_9 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(26 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_8, _stringLiteral21);
		if (!L_9)
		{
			goto IL_0092;
		}
	}
	{
		Vector3U5BU5D_t16* L_10 = (__this->___vector3s_28);
		Hashtable_t26 * L_11 = (__this->___tweenArguments_23);
		Object_t * L_12 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_11, _stringLiteral21);
		(*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_10, 1, sizeof(Vector3_t14 )))) = ((*(Vector3_t14 *)((Vector3_t14 *)UnBox (L_12, Vector3_t14_il2cpp_TypeInfo_var))));
		goto IL_0143;
	}

IL_0092:
	{
		Hashtable_t26 * L_13 = (__this->___tweenArguments_23);
		bool L_14 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(26 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_13, _stringLiteral10);
		if (!L_14)
		{
			goto IL_00cd;
		}
	}
	{
		Vector3U5BU5D_t16* L_15 = (__this->___vector3s_28);
		Hashtable_t26 * L_16 = (__this->___tweenArguments_23);
		Object_t * L_17 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_16, _stringLiteral10);
		((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_15, 1, sizeof(Vector3_t14 )))->___x_1 = ((*(float*)((float*)UnBox (L_17, Single_t51_il2cpp_TypeInfo_var))));
	}

IL_00cd:
	{
		Hashtable_t26 * L_18 = (__this->___tweenArguments_23);
		bool L_19 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(26 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_18, _stringLiteral55);
		if (!L_19)
		{
			goto IL_0108;
		}
	}
	{
		Vector3U5BU5D_t16* L_20 = (__this->___vector3s_28);
		Hashtable_t26 * L_21 = (__this->___tweenArguments_23);
		Object_t * L_22 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_21, _stringLiteral55);
		((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_20, 1, sizeof(Vector3_t14 )))->___y_2 = ((*(float*)((float*)UnBox (L_22, Single_t51_il2cpp_TypeInfo_var))));
	}

IL_0108:
	{
		Hashtable_t26 * L_23 = (__this->___tweenArguments_23);
		bool L_24 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(26 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_23, _stringLiteral56);
		if (!L_24)
		{
			goto IL_0143;
		}
	}
	{
		Vector3U5BU5D_t16* L_25 = (__this->___vector3s_28);
		Hashtable_t26 * L_26 = (__this->___tweenArguments_23);
		Object_t * L_27 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_26, _stringLiteral56);
		((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_25, 1, sizeof(Vector3_t14 )))->___z_3 = ((*(float*)((float*)UnBox (L_27, Single_t51_il2cpp_TypeInfo_var))));
	}

IL_0143:
	{
		return;
	}
}
// System.Void iTween::GeneratePunchScaleTargets()
extern TypeInfo* Vector3U5BU5D_t16_il2cpp_TypeInfo_var;
extern TypeInfo* Vector3_t14_il2cpp_TypeInfo_var;
extern TypeInfo* Single_t51_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral21;
extern Il2CppCodeGenString* _stringLiteral10;
extern Il2CppCodeGenString* _stringLiteral55;
extern Il2CppCodeGenString* _stringLiteral56;
extern "C" void iTween_GeneratePunchScaleTargets_m128 (iTween_t23 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Vector3U5BU5D_t16_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(12);
		Vector3_t14_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13);
		Single_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		_stringLiteral21 = il2cpp_codegen_string_literal_from_index(21);
		_stringLiteral10 = il2cpp_codegen_string_literal_from_index(10);
		_stringLiteral55 = il2cpp_codegen_string_literal_from_index(55);
		_stringLiteral56 = il2cpp_codegen_string_literal_from_index(56);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___vector3s_28 = ((Vector3U5BU5D_t16*)SZArrayNew(Vector3U5BU5D_t16_il2cpp_TypeInfo_var, 3));
		Vector3U5BU5D_t16* L_0 = (__this->___vector3s_28);
		Transform_t32 * L_1 = (__this->___thisTransform_39);
		Vector3_t14  L_2 = Transform_get_localScale_m370(L_1, /*hidden argument*/NULL);
		(*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_0, 0, sizeof(Vector3_t14 )))) = L_2;
		Vector3U5BU5D_t16* L_3 = (__this->___vector3s_28);
		Vector3_t14  L_4 = Vector3_get_zero_m340(NULL /*static, unused*/, /*hidden argument*/NULL);
		(*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_3, 1, sizeof(Vector3_t14 )))) = L_4;
		Hashtable_t26 * L_5 = (__this->___tweenArguments_23);
		bool L_6 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(26 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_5, _stringLiteral21);
		if (!L_6)
		{
			goto IL_007e;
		}
	}
	{
		Vector3U5BU5D_t16* L_7 = (__this->___vector3s_28);
		Hashtable_t26 * L_8 = (__this->___tweenArguments_23);
		Object_t * L_9 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_8, _stringLiteral21);
		(*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_7, 1, sizeof(Vector3_t14 )))) = ((*(Vector3_t14 *)((Vector3_t14 *)UnBox (L_9, Vector3_t14_il2cpp_TypeInfo_var))));
		goto IL_012f;
	}

IL_007e:
	{
		Hashtable_t26 * L_10 = (__this->___tweenArguments_23);
		bool L_11 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(26 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_10, _stringLiteral10);
		if (!L_11)
		{
			goto IL_00b9;
		}
	}
	{
		Vector3U5BU5D_t16* L_12 = (__this->___vector3s_28);
		Hashtable_t26 * L_13 = (__this->___tweenArguments_23);
		Object_t * L_14 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_13, _stringLiteral10);
		((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_12, 1, sizeof(Vector3_t14 )))->___x_1 = ((*(float*)((float*)UnBox (L_14, Single_t51_il2cpp_TypeInfo_var))));
	}

IL_00b9:
	{
		Hashtable_t26 * L_15 = (__this->___tweenArguments_23);
		bool L_16 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(26 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_15, _stringLiteral55);
		if (!L_16)
		{
			goto IL_00f4;
		}
	}
	{
		Vector3U5BU5D_t16* L_17 = (__this->___vector3s_28);
		Hashtable_t26 * L_18 = (__this->___tweenArguments_23);
		Object_t * L_19 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_18, _stringLiteral55);
		((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_17, 1, sizeof(Vector3_t14 )))->___y_2 = ((*(float*)((float*)UnBox (L_19, Single_t51_il2cpp_TypeInfo_var))));
	}

IL_00f4:
	{
		Hashtable_t26 * L_20 = (__this->___tweenArguments_23);
		bool L_21 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(26 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_20, _stringLiteral56);
		if (!L_21)
		{
			goto IL_012f;
		}
	}
	{
		Vector3U5BU5D_t16* L_22 = (__this->___vector3s_28);
		Hashtable_t26 * L_23 = (__this->___tweenArguments_23);
		Object_t * L_24 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_23, _stringLiteral56);
		((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_22, 1, sizeof(Vector3_t14 )))->___z_3 = ((*(float*)((float*)UnBox (L_24, Single_t51_il2cpp_TypeInfo_var))));
	}

IL_012f:
	{
		return;
	}
}
// System.Void iTween::ApplyRectTargets()
extern TypeInfo* Rect_t37_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral75;
extern "C" void iTween_ApplyRectTargets_m129 (iTween_t23 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Rect_t37_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(20);
		_stringLiteral75 = il2cpp_codegen_string_literal_from_index(75);
		s_Il2CppMethodIntialized = true;
	}
	{
		RectU5BU5D_t31* L_0 = (__this->___rects_32);
		EasingFunction_t17 * L_1 = (__this->___ease_25);
		RectU5BU5D_t31* L_2 = (__this->___rects_32);
		float L_3 = Rect_get_x_m396(((Rect_t37 *)(Rect_t37 *)SZArrayLdElema(L_2, 0, sizeof(Rect_t37 ))), /*hidden argument*/NULL);
		RectU5BU5D_t31* L_4 = (__this->___rects_32);
		float L_5 = Rect_get_x_m396(((Rect_t37 *)(Rect_t37 *)SZArrayLdElema(L_4, 1, sizeof(Rect_t37 ))), /*hidden argument*/NULL);
		float L_6 = (__this->___percentage_15);
		float L_7 = EasingFunction_Invoke_m17(L_1, L_3, L_5, L_6, /*hidden argument*/NULL);
		Rect_set_x_m397(((Rect_t37 *)(Rect_t37 *)SZArrayLdElema(L_0, 2, sizeof(Rect_t37 ))), L_7, /*hidden argument*/NULL);
		RectU5BU5D_t31* L_8 = (__this->___rects_32);
		EasingFunction_t17 * L_9 = (__this->___ease_25);
		RectU5BU5D_t31* L_10 = (__this->___rects_32);
		float L_11 = Rect_get_y_m398(((Rect_t37 *)(Rect_t37 *)SZArrayLdElema(L_10, 0, sizeof(Rect_t37 ))), /*hidden argument*/NULL);
		RectU5BU5D_t31* L_12 = (__this->___rects_32);
		float L_13 = Rect_get_y_m398(((Rect_t37 *)(Rect_t37 *)SZArrayLdElema(L_12, 1, sizeof(Rect_t37 ))), /*hidden argument*/NULL);
		float L_14 = (__this->___percentage_15);
		float L_15 = EasingFunction_Invoke_m17(L_9, L_11, L_13, L_14, /*hidden argument*/NULL);
		Rect_set_y_m399(((Rect_t37 *)(Rect_t37 *)SZArrayLdElema(L_8, 2, sizeof(Rect_t37 ))), L_15, /*hidden argument*/NULL);
		RectU5BU5D_t31* L_16 = (__this->___rects_32);
		EasingFunction_t17 * L_17 = (__this->___ease_25);
		RectU5BU5D_t31* L_18 = (__this->___rects_32);
		float L_19 = Rect_get_width_m400(((Rect_t37 *)(Rect_t37 *)SZArrayLdElema(L_18, 0, sizeof(Rect_t37 ))), /*hidden argument*/NULL);
		RectU5BU5D_t31* L_20 = (__this->___rects_32);
		float L_21 = Rect_get_width_m400(((Rect_t37 *)(Rect_t37 *)SZArrayLdElema(L_20, 1, sizeof(Rect_t37 ))), /*hidden argument*/NULL);
		float L_22 = (__this->___percentage_15);
		float L_23 = EasingFunction_Invoke_m17(L_17, L_19, L_21, L_22, /*hidden argument*/NULL);
		Rect_set_width_m401(((Rect_t37 *)(Rect_t37 *)SZArrayLdElema(L_16, 2, sizeof(Rect_t37 ))), L_23, /*hidden argument*/NULL);
		RectU5BU5D_t31* L_24 = (__this->___rects_32);
		EasingFunction_t17 * L_25 = (__this->___ease_25);
		RectU5BU5D_t31* L_26 = (__this->___rects_32);
		float L_27 = Rect_get_height_m402(((Rect_t37 *)(Rect_t37 *)SZArrayLdElema(L_26, 0, sizeof(Rect_t37 ))), /*hidden argument*/NULL);
		RectU5BU5D_t31* L_28 = (__this->___rects_32);
		float L_29 = Rect_get_height_m402(((Rect_t37 *)(Rect_t37 *)SZArrayLdElema(L_28, 1, sizeof(Rect_t37 ))), /*hidden argument*/NULL);
		float L_30 = (__this->___percentage_15);
		float L_31 = EasingFunction_Invoke_m17(L_25, L_27, L_29, L_30, /*hidden argument*/NULL);
		Rect_set_height_m403(((Rect_t37 *)(Rect_t37 *)SZArrayLdElema(L_24, 2, sizeof(Rect_t37 ))), L_31, /*hidden argument*/NULL);
		Hashtable_t26 * L_32 = (__this->___tweenArguments_23);
		RectU5BU5D_t31* L_33 = (__this->___rects_32);
		Rect_t37  L_34 = (*(Rect_t37 *)((Rect_t37 *)(Rect_t37 *)SZArrayLdElema(L_33, 2, sizeof(Rect_t37 ))));
		Object_t * L_35 = Box(Rect_t37_il2cpp_TypeInfo_var, &L_34);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(22 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_32, _stringLiteral75, L_35);
		float L_36 = (__this->___percentage_15);
		if ((!(((float)L_36) == ((float)(1.0f)))))
		{
			goto IL_016c;
		}
	}
	{
		Hashtable_t26 * L_37 = (__this->___tweenArguments_23);
		RectU5BU5D_t31* L_38 = (__this->___rects_32);
		Rect_t37  L_39 = (*(Rect_t37 *)((Rect_t37 *)(Rect_t37 *)SZArrayLdElema(L_38, 1, sizeof(Rect_t37 ))));
		Object_t * L_40 = Box(Rect_t37_il2cpp_TypeInfo_var, &L_39);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(22 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_37, _stringLiteral75, L_40);
	}

IL_016c:
	{
		return;
	}
}
// System.Void iTween::ApplyColorTargets()
extern TypeInfo* Color_t13_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral75;
extern "C" void iTween_ApplyColorTargets_m130 (iTween_t23 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Color_t13_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(21);
		_stringLiteral75 = il2cpp_codegen_string_literal_from_index(75);
		s_Il2CppMethodIntialized = true;
	}
	{
		ColorU5BU2CU5D_t29* L_0 = (__this->___colors_30);
		Color_t13 * L_1 = (Color_t13 *)GenArrayAddress2(L_0, 0, 2);;
		EasingFunction_t17 * L_2 = (__this->___ease_25);
		ColorU5BU2CU5D_t29* L_3 = (__this->___colors_30);
		Color_t13 * L_4 = (Color_t13 *)GenArrayAddress2(L_3, 0, 0);;
		float L_5 = (L_4->___r_0);
		ColorU5BU2CU5D_t29* L_6 = (__this->___colors_30);
		Color_t13 * L_7 = (Color_t13 *)GenArrayAddress2(L_6, 0, 1);;
		float L_8 = (L_7->___r_0);
		float L_9 = (__this->___percentage_15);
		float L_10 = EasingFunction_Invoke_m17(L_2, L_5, L_8, L_9, /*hidden argument*/NULL);
		L_1->___r_0 = L_10;
		ColorU5BU2CU5D_t29* L_11 = (__this->___colors_30);
		Color_t13 * L_12 = (Color_t13 *)GenArrayAddress2(L_11, 0, 2);;
		EasingFunction_t17 * L_13 = (__this->___ease_25);
		ColorU5BU2CU5D_t29* L_14 = (__this->___colors_30);
		Color_t13 * L_15 = (Color_t13 *)GenArrayAddress2(L_14, 0, 0);;
		float L_16 = (L_15->___g_1);
		ColorU5BU2CU5D_t29* L_17 = (__this->___colors_30);
		Color_t13 * L_18 = (Color_t13 *)GenArrayAddress2(L_17, 0, 1);;
		float L_19 = (L_18->___g_1);
		float L_20 = (__this->___percentage_15);
		float L_21 = EasingFunction_Invoke_m17(L_13, L_16, L_19, L_20, /*hidden argument*/NULL);
		L_12->___g_1 = L_21;
		ColorU5BU2CU5D_t29* L_22 = (__this->___colors_30);
		Color_t13 * L_23 = (Color_t13 *)GenArrayAddress2(L_22, 0, 2);;
		EasingFunction_t17 * L_24 = (__this->___ease_25);
		ColorU5BU2CU5D_t29* L_25 = (__this->___colors_30);
		Color_t13 * L_26 = (Color_t13 *)GenArrayAddress2(L_25, 0, 0);;
		float L_27 = (L_26->___b_2);
		ColorU5BU2CU5D_t29* L_28 = (__this->___colors_30);
		Color_t13 * L_29 = (Color_t13 *)GenArrayAddress2(L_28, 0, 1);;
		float L_30 = (L_29->___b_2);
		float L_31 = (__this->___percentage_15);
		float L_32 = EasingFunction_Invoke_m17(L_24, L_27, L_30, L_31, /*hidden argument*/NULL);
		L_23->___b_2 = L_32;
		ColorU5BU2CU5D_t29* L_33 = (__this->___colors_30);
		Color_t13 * L_34 = (Color_t13 *)GenArrayAddress2(L_33, 0, 2);;
		EasingFunction_t17 * L_35 = (__this->___ease_25);
		ColorU5BU2CU5D_t29* L_36 = (__this->___colors_30);
		Color_t13 * L_37 = (Color_t13 *)GenArrayAddress2(L_36, 0, 0);;
		float L_38 = (L_37->___a_3);
		ColorU5BU2CU5D_t29* L_39 = (__this->___colors_30);
		Color_t13 * L_40 = (Color_t13 *)GenArrayAddress2(L_39, 0, 1);;
		float L_41 = (L_40->___a_3);
		float L_42 = (__this->___percentage_15);
		float L_43 = EasingFunction_Invoke_m17(L_35, L_38, L_41, L_42, /*hidden argument*/NULL);
		L_34->___a_3 = L_43;
		Hashtable_t26 * L_44 = (__this->___tweenArguments_23);
		ColorU5BU2CU5D_t29* L_45 = (__this->___colors_30);
		Color_t13  L_46 = GenArrayGet2(L_45, 0, 2, Color_t13 );;
		Color_t13  L_47 = L_46;
		Object_t * L_48 = Box(Color_t13_il2cpp_TypeInfo_var, &L_47);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(22 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_44, _stringLiteral75, L_48);
		float L_49 = (__this->___percentage_15);
		if ((!(((float)L_49) == ((float)(1.0f)))))
		{
			goto IL_0170;
		}
	}
	{
		Hashtable_t26 * L_50 = (__this->___tweenArguments_23);
		ColorU5BU2CU5D_t29* L_51 = (__this->___colors_30);
		Color_t13  L_52 = GenArrayGet2(L_51, 0, 1, Color_t13 );;
		Color_t13  L_53 = L_52;
		Object_t * L_54 = Box(Color_t13_il2cpp_TypeInfo_var, &L_53);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(22 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_50, _stringLiteral75, L_54);
	}

IL_0170:
	{
		return;
	}
}
// System.Void iTween::ApplyVector3Targets()
extern TypeInfo* Vector3_t14_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral75;
extern "C" void iTween_ApplyVector3Targets_m131 (iTween_t23 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Vector3_t14_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13);
		_stringLiteral75 = il2cpp_codegen_string_literal_from_index(75);
		s_Il2CppMethodIntialized = true;
	}
	{
		Vector3U5BU5D_t16* L_0 = (__this->___vector3s_28);
		EasingFunction_t17 * L_1 = (__this->___ease_25);
		Vector3U5BU5D_t16* L_2 = (__this->___vector3s_28);
		float L_3 = (((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_2, 0, sizeof(Vector3_t14 )))->___x_1);
		Vector3U5BU5D_t16* L_4 = (__this->___vector3s_28);
		float L_5 = (((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_4, 1, sizeof(Vector3_t14 )))->___x_1);
		float L_6 = (__this->___percentage_15);
		float L_7 = EasingFunction_Invoke_m17(L_1, L_3, L_5, L_6, /*hidden argument*/NULL);
		((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_0, 2, sizeof(Vector3_t14 )))->___x_1 = L_7;
		Vector3U5BU5D_t16* L_8 = (__this->___vector3s_28);
		EasingFunction_t17 * L_9 = (__this->___ease_25);
		Vector3U5BU5D_t16* L_10 = (__this->___vector3s_28);
		float L_11 = (((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_10, 0, sizeof(Vector3_t14 )))->___y_2);
		Vector3U5BU5D_t16* L_12 = (__this->___vector3s_28);
		float L_13 = (((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_12, 1, sizeof(Vector3_t14 )))->___y_2);
		float L_14 = (__this->___percentage_15);
		float L_15 = EasingFunction_Invoke_m17(L_9, L_11, L_13, L_14, /*hidden argument*/NULL);
		((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_8, 2, sizeof(Vector3_t14 )))->___y_2 = L_15;
		Vector3U5BU5D_t16* L_16 = (__this->___vector3s_28);
		EasingFunction_t17 * L_17 = (__this->___ease_25);
		Vector3U5BU5D_t16* L_18 = (__this->___vector3s_28);
		float L_19 = (((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_18, 0, sizeof(Vector3_t14 )))->___z_3);
		Vector3U5BU5D_t16* L_20 = (__this->___vector3s_28);
		float L_21 = (((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_20, 1, sizeof(Vector3_t14 )))->___z_3);
		float L_22 = (__this->___percentage_15);
		float L_23 = EasingFunction_Invoke_m17(L_17, L_19, L_21, L_22, /*hidden argument*/NULL);
		((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_16, 2, sizeof(Vector3_t14 )))->___z_3 = L_23;
		Hashtable_t26 * L_24 = (__this->___tweenArguments_23);
		Vector3U5BU5D_t16* L_25 = (__this->___vector3s_28);
		Vector3_t14  L_26 = (*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_25, 2, sizeof(Vector3_t14 ))));
		Object_t * L_27 = Box(Vector3_t14_il2cpp_TypeInfo_var, &L_26);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(22 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_24, _stringLiteral75, L_27);
		float L_28 = (__this->___percentage_15);
		if ((!(((float)L_28) == ((float)(1.0f)))))
		{
			goto IL_0128;
		}
	}
	{
		Hashtable_t26 * L_29 = (__this->___tweenArguments_23);
		Vector3U5BU5D_t16* L_30 = (__this->___vector3s_28);
		Vector3_t14  L_31 = (*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_30, 1, sizeof(Vector3_t14 ))));
		Object_t * L_32 = Box(Vector3_t14_il2cpp_TypeInfo_var, &L_31);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(22 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_29, _stringLiteral75, L_32);
	}

IL_0128:
	{
		return;
	}
}
// System.Void iTween::ApplyVector2Targets()
extern TypeInfo* Vector2_t36_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral75;
extern "C" void iTween_ApplyVector2Targets_m132 (iTween_t23 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Vector2_t36_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(19);
		_stringLiteral75 = il2cpp_codegen_string_literal_from_index(75);
		s_Il2CppMethodIntialized = true;
	}
	{
		Vector2U5BU5D_t28* L_0 = (__this->___vector2s_29);
		EasingFunction_t17 * L_1 = (__this->___ease_25);
		Vector2U5BU5D_t28* L_2 = (__this->___vector2s_29);
		float L_3 = (((Vector2_t36 *)(Vector2_t36 *)SZArrayLdElema(L_2, 0, sizeof(Vector2_t36 )))->___x_1);
		Vector2U5BU5D_t28* L_4 = (__this->___vector2s_29);
		float L_5 = (((Vector2_t36 *)(Vector2_t36 *)SZArrayLdElema(L_4, 1, sizeof(Vector2_t36 )))->___x_1);
		float L_6 = (__this->___percentage_15);
		float L_7 = EasingFunction_Invoke_m17(L_1, L_3, L_5, L_6, /*hidden argument*/NULL);
		((Vector2_t36 *)(Vector2_t36 *)SZArrayLdElema(L_0, 2, sizeof(Vector2_t36 )))->___x_1 = L_7;
		Vector2U5BU5D_t28* L_8 = (__this->___vector2s_29);
		EasingFunction_t17 * L_9 = (__this->___ease_25);
		Vector2U5BU5D_t28* L_10 = (__this->___vector2s_29);
		float L_11 = (((Vector2_t36 *)(Vector2_t36 *)SZArrayLdElema(L_10, 0, sizeof(Vector2_t36 )))->___y_2);
		Vector2U5BU5D_t28* L_12 = (__this->___vector2s_29);
		float L_13 = (((Vector2_t36 *)(Vector2_t36 *)SZArrayLdElema(L_12, 1, sizeof(Vector2_t36 )))->___y_2);
		float L_14 = (__this->___percentage_15);
		float L_15 = EasingFunction_Invoke_m17(L_9, L_11, L_13, L_14, /*hidden argument*/NULL);
		((Vector2_t36 *)(Vector2_t36 *)SZArrayLdElema(L_8, 2, sizeof(Vector2_t36 )))->___y_2 = L_15;
		Hashtable_t26 * L_16 = (__this->___tweenArguments_23);
		Vector2U5BU5D_t28* L_17 = (__this->___vector2s_29);
		Vector2_t36  L_18 = (*(Vector2_t36 *)((Vector2_t36 *)(Vector2_t36 *)SZArrayLdElema(L_17, 2, sizeof(Vector2_t36 ))));
		Object_t * L_19 = Box(Vector2_t36_il2cpp_TypeInfo_var, &L_18);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(22 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_16, _stringLiteral75, L_19);
		float L_20 = (__this->___percentage_15);
		if ((!(((float)L_20) == ((float)(1.0f)))))
		{
			goto IL_00e4;
		}
	}
	{
		Hashtable_t26 * L_21 = (__this->___tweenArguments_23);
		Vector2U5BU5D_t28* L_22 = (__this->___vector2s_29);
		Vector2_t36  L_23 = (*(Vector2_t36 *)((Vector2_t36 *)(Vector2_t36 *)SZArrayLdElema(L_22, 1, sizeof(Vector2_t36 ))));
		Object_t * L_24 = Box(Vector2_t36_il2cpp_TypeInfo_var, &L_23);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(22 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_21, _stringLiteral75, L_24);
	}

IL_00e4:
	{
		return;
	}
}
// System.Void iTween::ApplyFloatTargets()
extern TypeInfo* Single_t51_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral75;
extern "C" void iTween_ApplyFloatTargets_m133 (iTween_t23 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Single_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		_stringLiteral75 = il2cpp_codegen_string_literal_from_index(75);
		s_Il2CppMethodIntialized = true;
	}
	{
		SingleU5BU5D_t30* L_0 = (__this->___floats_31);
		EasingFunction_t17 * L_1 = (__this->___ease_25);
		SingleU5BU5D_t30* L_2 = (__this->___floats_31);
		int32_t L_3 = 0;
		SingleU5BU5D_t30* L_4 = (__this->___floats_31);
		int32_t L_5 = 1;
		float L_6 = (__this->___percentage_15);
		float L_7 = EasingFunction_Invoke_m17(L_1, (*(float*)(float*)SZArrayLdElema(L_2, L_3, sizeof(float))), (*(float*)(float*)SZArrayLdElema(L_4, L_5, sizeof(float))), L_6, /*hidden argument*/NULL);
		*((float*)(float*)SZArrayLdElema(L_0, 2, sizeof(float))) = (float)L_7;
		Hashtable_t26 * L_8 = (__this->___tweenArguments_23);
		SingleU5BU5D_t30* L_9 = (__this->___floats_31);
		int32_t L_10 = 2;
		float L_11 = (*(float*)(float*)SZArrayLdElema(L_9, L_10, sizeof(float)));
		Object_t * L_12 = Box(Single_t51_il2cpp_TypeInfo_var, &L_11);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(22 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_8, _stringLiteral75, L_12);
		float L_13 = (__this->___percentage_15);
		if ((!(((float)L_13) == ((float)(1.0f)))))
		{
			goto IL_0073;
		}
	}
	{
		Hashtable_t26 * L_14 = (__this->___tweenArguments_23);
		SingleU5BU5D_t30* L_15 = (__this->___floats_31);
		int32_t L_16 = 1;
		float L_17 = (*(float*)(float*)SZArrayLdElema(L_15, L_16, sizeof(float)));
		Object_t * L_18 = Box(Single_t51_il2cpp_TypeInfo_var, &L_17);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(22 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_14, _stringLiteral75, L_18);
	}

IL_0073:
	{
		return;
	}
}
// System.Void iTween::ApplyColorToTargets()
extern TypeInfo* NamedValueColor_t11_il2cpp_TypeInfo_var;
extern const MethodInfo* Component_GetComponent_TisGUITexture_t58_m379_MethodInfo_var;
extern const MethodInfo* Component_GetComponent_TisGUIText_t59_m380_MethodInfo_var;
extern const MethodInfo* Component_GetComponent_TisRenderer_t61_m381_MethodInfo_var;
extern const MethodInfo* Component_GetComponent_TisLight_t62_m384_MethodInfo_var;
extern "C" void iTween_ApplyColorToTargets_m134 (iTween_t23 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NamedValueColor_t11_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(42);
		Component_GetComponent_TisGUITexture_t58_m379_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483680);
		Component_GetComponent_TisGUIText_t59_m380_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483681);
		Component_GetComponent_TisRenderer_t61_m381_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483682);
		Component_GetComponent_TisLight_t62_m384_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483683);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		V_0 = 0;
		goto IL_0127;
	}

IL_0007:
	{
		ColorU5BU2CU5D_t29* L_0 = (__this->___colors_30);
		int32_t L_1 = V_0;
		Color_t13 * L_2 = (Color_t13 *)GenArrayAddress2(L_0, L_1, 2);;
		EasingFunction_t17 * L_3 = (__this->___ease_25);
		ColorU5BU2CU5D_t29* L_4 = (__this->___colors_30);
		int32_t L_5 = V_0;
		Color_t13 * L_6 = (Color_t13 *)GenArrayAddress2(L_4, L_5, 0);;
		float L_7 = (L_6->___r_0);
		ColorU5BU2CU5D_t29* L_8 = (__this->___colors_30);
		int32_t L_9 = V_0;
		Color_t13 * L_10 = (Color_t13 *)GenArrayAddress2(L_8, L_9, 1);;
		float L_11 = (L_10->___r_0);
		float L_12 = (__this->___percentage_15);
		float L_13 = EasingFunction_Invoke_m17(L_3, L_7, L_11, L_12, /*hidden argument*/NULL);
		L_2->___r_0 = L_13;
		ColorU5BU2CU5D_t29* L_14 = (__this->___colors_30);
		int32_t L_15 = V_0;
		Color_t13 * L_16 = (Color_t13 *)GenArrayAddress2(L_14, L_15, 2);;
		EasingFunction_t17 * L_17 = (__this->___ease_25);
		ColorU5BU2CU5D_t29* L_18 = (__this->___colors_30);
		int32_t L_19 = V_0;
		Color_t13 * L_20 = (Color_t13 *)GenArrayAddress2(L_18, L_19, 0);;
		float L_21 = (L_20->___g_1);
		ColorU5BU2CU5D_t29* L_22 = (__this->___colors_30);
		int32_t L_23 = V_0;
		Color_t13 * L_24 = (Color_t13 *)GenArrayAddress2(L_22, L_23, 1);;
		float L_25 = (L_24->___g_1);
		float L_26 = (__this->___percentage_15);
		float L_27 = EasingFunction_Invoke_m17(L_17, L_21, L_25, L_26, /*hidden argument*/NULL);
		L_16->___g_1 = L_27;
		ColorU5BU2CU5D_t29* L_28 = (__this->___colors_30);
		int32_t L_29 = V_0;
		Color_t13 * L_30 = (Color_t13 *)GenArrayAddress2(L_28, L_29, 2);;
		EasingFunction_t17 * L_31 = (__this->___ease_25);
		ColorU5BU2CU5D_t29* L_32 = (__this->___colors_30);
		int32_t L_33 = V_0;
		Color_t13 * L_34 = (Color_t13 *)GenArrayAddress2(L_32, L_33, 0);;
		float L_35 = (L_34->___b_2);
		ColorU5BU2CU5D_t29* L_36 = (__this->___colors_30);
		int32_t L_37 = V_0;
		Color_t13 * L_38 = (Color_t13 *)GenArrayAddress2(L_36, L_37, 1);;
		float L_39 = (L_38->___b_2);
		float L_40 = (__this->___percentage_15);
		float L_41 = EasingFunction_Invoke_m17(L_31, L_35, L_39, L_40, /*hidden argument*/NULL);
		L_30->___b_2 = L_41;
		ColorU5BU2CU5D_t29* L_42 = (__this->___colors_30);
		int32_t L_43 = V_0;
		Color_t13 * L_44 = (Color_t13 *)GenArrayAddress2(L_42, L_43, 2);;
		EasingFunction_t17 * L_45 = (__this->___ease_25);
		ColorU5BU2CU5D_t29* L_46 = (__this->___colors_30);
		int32_t L_47 = V_0;
		Color_t13 * L_48 = (Color_t13 *)GenArrayAddress2(L_46, L_47, 0);;
		float L_49 = (L_48->___a_3);
		ColorU5BU2CU5D_t29* L_50 = (__this->___colors_30);
		int32_t L_51 = V_0;
		Color_t13 * L_52 = (Color_t13 *)GenArrayAddress2(L_50, L_51, 1);;
		float L_53 = (L_52->___a_3);
		float L_54 = (__this->___percentage_15);
		float L_55 = EasingFunction_Invoke_m17(L_45, L_49, L_53, L_54, /*hidden argument*/NULL);
		L_44->___a_3 = L_55;
		int32_t L_56 = V_0;
		V_0 = ((int32_t)((int32_t)L_56+(int32_t)1));
	}

IL_0127:
	{
		int32_t L_57 = V_0;
		ColorU5BU2CU5D_t29* L_58 = (__this->___colors_30);
		int32_t L_59 = Array_GetLength_m385(L_58, 0, /*hidden argument*/NULL);
		if ((((int32_t)L_57) < ((int32_t)L_59)))
		{
			goto IL_0007;
		}
	}
	{
		GUITexture_t58 * L_60 = Component_GetComponent_TisGUITexture_t58_m379(__this, /*hidden argument*/Component_GetComponent_TisGUITexture_t58_m379_MethodInfo_var);
		bool L_61 = Object_op_Implicit_m316(NULL /*static, unused*/, L_60, /*hidden argument*/NULL);
		if (!L_61)
		{
			goto IL_0166;
		}
	}
	{
		GUITexture_t58 * L_62 = Component_GetComponent_TisGUITexture_t58_m379(__this, /*hidden argument*/Component_GetComponent_TisGUITexture_t58_m379_MethodInfo_var);
		ColorU5BU2CU5D_t29* L_63 = (__this->___colors_30);
		Color_t13  L_64 = GenArrayGet2(L_63, 0, 2, Color_t13 );;
		GUITexture_set_color_m354(L_62, L_64, /*hidden argument*/NULL);
		goto IL_0221;
	}

IL_0166:
	{
		GUIText_t59 * L_65 = Component_GetComponent_TisGUIText_t59_m380(__this, /*hidden argument*/Component_GetComponent_TisGUIText_t59_m380_MethodInfo_var);
		bool L_66 = Object_op_Implicit_m316(NULL /*static, unused*/, L_65, /*hidden argument*/NULL);
		if (!L_66)
		{
			goto IL_0198;
		}
	}
	{
		GUIText_t59 * L_67 = Component_GetComponent_TisGUIText_t59_m380(__this, /*hidden argument*/Component_GetComponent_TisGUIText_t59_m380_MethodInfo_var);
		Material_t60 * L_68 = GUIText_get_material_m348(L_67, /*hidden argument*/NULL);
		ColorU5BU2CU5D_t29* L_69 = (__this->___colors_30);
		Color_t13  L_70 = GenArrayGet2(L_69, 0, 2, Color_t13 );;
		Material_set_color_m355(L_68, L_70, /*hidden argument*/NULL);
		goto IL_0221;
	}

IL_0198:
	{
		Renderer_t61 * L_71 = Component_GetComponent_TisRenderer_t61_m381(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t61_m381_MethodInfo_var);
		bool L_72 = Object_op_Implicit_m316(NULL /*static, unused*/, L_71, /*hidden argument*/NULL);
		if (!L_72)
		{
			goto IL_01f9;
		}
	}
	{
		V_1 = 0;
		goto IL_01e2;
	}

IL_01af:
	{
		Renderer_t61 * L_73 = Component_GetComponent_TisRenderer_t61_m381(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t61_m381_MethodInfo_var);
		MaterialU5BU5D_t64* L_74 = Renderer_get_materials_m382(L_73, /*hidden argument*/NULL);
		int32_t L_75 = V_1;
		int32_t L_76 = L_75;
		int32_t L_77 = (__this->___namedcolorvalue_36);
		int32_t L_78 = L_77;
		Object_t * L_79 = Box(NamedValueColor_t11_il2cpp_TypeInfo_var, &L_78);
		String_t* L_80 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Enum::ToString() */, L_79);
		ColorU5BU2CU5D_t29* L_81 = (__this->___colors_30);
		int32_t L_82 = V_1;
		Color_t13  L_83 = GenArrayGet2(L_81, L_82, 2, Color_t13 );;
		Material_SetColor_m404((*(Material_t60 **)(Material_t60 **)SZArrayLdElema(L_74, L_76, sizeof(Material_t60 *))), L_80, L_83, /*hidden argument*/NULL);
		int32_t L_84 = V_1;
		V_1 = ((int32_t)((int32_t)L_84+(int32_t)1));
	}

IL_01e2:
	{
		int32_t L_85 = V_1;
		ColorU5BU2CU5D_t29* L_86 = (__this->___colors_30);
		int32_t L_87 = Array_GetLength_m385(L_86, 0, /*hidden argument*/NULL);
		if ((((int32_t)L_85) < ((int32_t)L_87)))
		{
			goto IL_01af;
		}
	}
	{
		goto IL_0221;
	}

IL_01f9:
	{
		Light_t62 * L_88 = Component_GetComponent_TisLight_t62_m384(__this, /*hidden argument*/Component_GetComponent_TisLight_t62_m384_MethodInfo_var);
		bool L_89 = Object_op_Implicit_m316(NULL /*static, unused*/, L_88, /*hidden argument*/NULL);
		if (!L_89)
		{
			goto IL_0221;
		}
	}
	{
		Light_t62 * L_90 = Component_GetComponent_TisLight_t62_m384(__this, /*hidden argument*/Component_GetComponent_TisLight_t62_m384_MethodInfo_var);
		ColorU5BU2CU5D_t29* L_91 = (__this->___colors_30);
		Color_t13  L_92 = GenArrayGet2(L_91, 0, 2, Color_t13 );;
		Light_set_color_m356(L_90, L_92, /*hidden argument*/NULL);
	}

IL_0221:
	{
		float L_93 = (__this->___percentage_15);
		if ((!(((float)L_93) == ((float)(1.0f)))))
		{
			goto IL_0319;
		}
	}
	{
		GUITexture_t58 * L_94 = Component_GetComponent_TisGUITexture_t58_m379(__this, /*hidden argument*/Component_GetComponent_TisGUITexture_t58_m379_MethodInfo_var);
		bool L_95 = Object_op_Implicit_m316(NULL /*static, unused*/, L_94, /*hidden argument*/NULL);
		if (!L_95)
		{
			goto IL_025e;
		}
	}
	{
		GUITexture_t58 * L_96 = Component_GetComponent_TisGUITexture_t58_m379(__this, /*hidden argument*/Component_GetComponent_TisGUITexture_t58_m379_MethodInfo_var);
		ColorU5BU2CU5D_t29* L_97 = (__this->___colors_30);
		Color_t13  L_98 = GenArrayGet2(L_97, 0, 1, Color_t13 );;
		GUITexture_set_color_m354(L_96, L_98, /*hidden argument*/NULL);
		goto IL_0319;
	}

IL_025e:
	{
		GUIText_t59 * L_99 = Component_GetComponent_TisGUIText_t59_m380(__this, /*hidden argument*/Component_GetComponent_TisGUIText_t59_m380_MethodInfo_var);
		bool L_100 = Object_op_Implicit_m316(NULL /*static, unused*/, L_99, /*hidden argument*/NULL);
		if (!L_100)
		{
			goto IL_0290;
		}
	}
	{
		GUIText_t59 * L_101 = Component_GetComponent_TisGUIText_t59_m380(__this, /*hidden argument*/Component_GetComponent_TisGUIText_t59_m380_MethodInfo_var);
		Material_t60 * L_102 = GUIText_get_material_m348(L_101, /*hidden argument*/NULL);
		ColorU5BU2CU5D_t29* L_103 = (__this->___colors_30);
		Color_t13  L_104 = GenArrayGet2(L_103, 0, 1, Color_t13 );;
		Material_set_color_m355(L_102, L_104, /*hidden argument*/NULL);
		goto IL_0319;
	}

IL_0290:
	{
		Renderer_t61 * L_105 = Component_GetComponent_TisRenderer_t61_m381(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t61_m381_MethodInfo_var);
		bool L_106 = Object_op_Implicit_m316(NULL /*static, unused*/, L_105, /*hidden argument*/NULL);
		if (!L_106)
		{
			goto IL_02f1;
		}
	}
	{
		V_2 = 0;
		goto IL_02da;
	}

IL_02a7:
	{
		Renderer_t61 * L_107 = Component_GetComponent_TisRenderer_t61_m381(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t61_m381_MethodInfo_var);
		MaterialU5BU5D_t64* L_108 = Renderer_get_materials_m382(L_107, /*hidden argument*/NULL);
		int32_t L_109 = V_2;
		int32_t L_110 = L_109;
		int32_t L_111 = (__this->___namedcolorvalue_36);
		int32_t L_112 = L_111;
		Object_t * L_113 = Box(NamedValueColor_t11_il2cpp_TypeInfo_var, &L_112);
		String_t* L_114 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Enum::ToString() */, L_113);
		ColorU5BU2CU5D_t29* L_115 = (__this->___colors_30);
		int32_t L_116 = V_2;
		Color_t13  L_117 = GenArrayGet2(L_115, L_116, 1, Color_t13 );;
		Material_SetColor_m404((*(Material_t60 **)(Material_t60 **)SZArrayLdElema(L_108, L_110, sizeof(Material_t60 *))), L_114, L_117, /*hidden argument*/NULL);
		int32_t L_118 = V_2;
		V_2 = ((int32_t)((int32_t)L_118+(int32_t)1));
	}

IL_02da:
	{
		int32_t L_119 = V_2;
		ColorU5BU2CU5D_t29* L_120 = (__this->___colors_30);
		int32_t L_121 = Array_GetLength_m385(L_120, 0, /*hidden argument*/NULL);
		if ((((int32_t)L_119) < ((int32_t)L_121)))
		{
			goto IL_02a7;
		}
	}
	{
		goto IL_0319;
	}

IL_02f1:
	{
		Light_t62 * L_122 = Component_GetComponent_TisLight_t62_m384(__this, /*hidden argument*/Component_GetComponent_TisLight_t62_m384_MethodInfo_var);
		bool L_123 = Object_op_Implicit_m316(NULL /*static, unused*/, L_122, /*hidden argument*/NULL);
		if (!L_123)
		{
			goto IL_0319;
		}
	}
	{
		Light_t62 * L_124 = Component_GetComponent_TisLight_t62_m384(__this, /*hidden argument*/Component_GetComponent_TisLight_t62_m384_MethodInfo_var);
		ColorU5BU2CU5D_t29* L_125 = (__this->___colors_30);
		Color_t13  L_126 = GenArrayGet2(L_125, 0, 1, Color_t13 );;
		Light_set_color_m356(L_124, L_126, /*hidden argument*/NULL);
	}

IL_0319:
	{
		return;
	}
}
// System.Void iTween::ApplyAudioToTargets()
extern "C" void iTween_ApplyAudioToTargets_m135 (iTween_t23 * __this, const MethodInfo* method)
{
	{
		Vector2U5BU5D_t28* L_0 = (__this->___vector2s_29);
		EasingFunction_t17 * L_1 = (__this->___ease_25);
		Vector2U5BU5D_t28* L_2 = (__this->___vector2s_29);
		float L_3 = (((Vector2_t36 *)(Vector2_t36 *)SZArrayLdElema(L_2, 0, sizeof(Vector2_t36 )))->___x_1);
		Vector2U5BU5D_t28* L_4 = (__this->___vector2s_29);
		float L_5 = (((Vector2_t36 *)(Vector2_t36 *)SZArrayLdElema(L_4, 1, sizeof(Vector2_t36 )))->___x_1);
		float L_6 = (__this->___percentage_15);
		float L_7 = EasingFunction_Invoke_m17(L_1, L_3, L_5, L_6, /*hidden argument*/NULL);
		((Vector2_t36 *)(Vector2_t36 *)SZArrayLdElema(L_0, 2, sizeof(Vector2_t36 )))->___x_1 = L_7;
		Vector2U5BU5D_t28* L_8 = (__this->___vector2s_29);
		EasingFunction_t17 * L_9 = (__this->___ease_25);
		Vector2U5BU5D_t28* L_10 = (__this->___vector2s_29);
		float L_11 = (((Vector2_t36 *)(Vector2_t36 *)SZArrayLdElema(L_10, 0, sizeof(Vector2_t36 )))->___y_2);
		Vector2U5BU5D_t28* L_12 = (__this->___vector2s_29);
		float L_13 = (((Vector2_t36 *)(Vector2_t36 *)SZArrayLdElema(L_12, 1, sizeof(Vector2_t36 )))->___y_2);
		float L_14 = (__this->___percentage_15);
		float L_15 = EasingFunction_Invoke_m17(L_9, L_11, L_13, L_14, /*hidden argument*/NULL);
		((Vector2_t36 *)(Vector2_t36 *)SZArrayLdElema(L_8, 2, sizeof(Vector2_t36 )))->___y_2 = L_15;
		AudioSource_t27 * L_16 = (__this->___audioSource_27);
		Vector2U5BU5D_t28* L_17 = (__this->___vector2s_29);
		float L_18 = (((Vector2_t36 *)(Vector2_t36 *)SZArrayLdElema(L_17, 2, sizeof(Vector2_t36 )))->___x_1);
		AudioSource_set_volume_m360(L_16, L_18, /*hidden argument*/NULL);
		AudioSource_t27 * L_19 = (__this->___audioSource_27);
		Vector2U5BU5D_t28* L_20 = (__this->___vector2s_29);
		float L_21 = (((Vector2_t36 *)(Vector2_t36 *)SZArrayLdElema(L_20, 2, sizeof(Vector2_t36 )))->___y_2);
		AudioSource_set_pitch_m361(L_19, L_21, /*hidden argument*/NULL);
		float L_22 = (__this->___percentage_15);
		if ((!(((float)L_22) == ((float)(1.0f)))))
		{
			goto IL_0108;
		}
	}
	{
		AudioSource_t27 * L_23 = (__this->___audioSource_27);
		Vector2U5BU5D_t28* L_24 = (__this->___vector2s_29);
		float L_25 = (((Vector2_t36 *)(Vector2_t36 *)SZArrayLdElema(L_24, 1, sizeof(Vector2_t36 )))->___x_1);
		AudioSource_set_volume_m360(L_23, L_25, /*hidden argument*/NULL);
		AudioSource_t27 * L_26 = (__this->___audioSource_27);
		Vector2U5BU5D_t28* L_27 = (__this->___vector2s_29);
		float L_28 = (((Vector2_t36 *)(Vector2_t36 *)SZArrayLdElema(L_27, 1, sizeof(Vector2_t36 )))->___y_2);
		AudioSource_set_pitch_m361(L_26, L_28, /*hidden argument*/NULL);
	}

IL_0108:
	{
		return;
	}
}
// System.Void iTween::ApplyStabTargets()
extern "C" void iTween_ApplyStabTargets_m136 (iTween_t23 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void iTween::ApplyMoveToPathTargets()
extern TypeInfo* Mathf_t46_il2cpp_TypeInfo_var;
extern TypeInfo* Boolean_t56_il2cpp_TypeInfo_var;
extern TypeInfo* Single_t51_il2cpp_TypeInfo_var;
extern TypeInfo* Defaults_t12_il2cpp_TypeInfo_var;
extern TypeInfo* Vector3_t14_il2cpp_TypeInfo_var;
extern const MethodInfo* Component_GetComponent_TisRigidbody_t65_m406_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral74;
extern Il2CppCodeGenString* _stringLiteral76;
extern Il2CppCodeGenString* _stringLiteral52;
extern "C" void iTween_ApplyMoveToPathTargets_m137 (iTween_t23 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t46_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		Boolean_t56_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(28);
		Single_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		Defaults_t12_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11);
		Vector3_t14_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13);
		Component_GetComponent_TisRigidbody_t65_m406_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483686);
		_stringLiteral74 = il2cpp_codegen_string_literal_from_index(74);
		_stringLiteral76 = il2cpp_codegen_string_literal_from_index(76);
		_stringLiteral52 = il2cpp_codegen_string_literal_from_index(52);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		Transform_t32 * L_0 = (__this->___thisTransform_39);
		Vector3_t14  L_1 = Transform_get_position_m369(L_0, /*hidden argument*/NULL);
		__this->___preUpdate_34 = L_1;
		EasingFunction_t17 * L_2 = (__this->___ease_25);
		float L_3 = (__this->___percentage_15);
		float L_4 = EasingFunction_Invoke_m17(L_2, (0.0f), (1.0f), L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		bool L_5 = (__this->___isLocal_18);
		if (!L_5)
		{
			goto IL_0063;
		}
	}
	{
		Transform_t32 * L_6 = (__this->___thisTransform_39);
		CRSpline_t15 * L_7 = (__this->___path_33);
		float L_8 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t46_il2cpp_TypeInfo_var);
		float L_9 = Mathf_Clamp_m312(NULL /*static, unused*/, L_8, (0.0f), (1.0f), /*hidden argument*/NULL);
		Vector3_t14  L_10 = CRSpline_Interp_m15(L_7, L_9, /*hidden argument*/NULL);
		Transform_set_localPosition_m373(L_6, L_10, /*hidden argument*/NULL);
		goto IL_0089;
	}

IL_0063:
	{
		Transform_t32 * L_11 = (__this->___thisTransform_39);
		CRSpline_t15 * L_12 = (__this->___path_33);
		float L_13 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t46_il2cpp_TypeInfo_var);
		float L_14 = Mathf_Clamp_m312(NULL /*static, unused*/, L_13, (0.0f), (1.0f), /*hidden argument*/NULL);
		Vector3_t14  L_15 = CRSpline_Interp_m15(L_12, L_14, /*hidden argument*/NULL);
		Transform_set_position_m374(L_11, L_15, /*hidden argument*/NULL);
	}

IL_0089:
	{
		Hashtable_t26 * L_16 = (__this->___tweenArguments_23);
		bool L_17 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(26 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_16, _stringLiteral74);
		if (!L_17)
		{
			goto IL_0146;
		}
	}
	{
		Hashtable_t26 * L_18 = (__this->___tweenArguments_23);
		Object_t * L_19 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_18, _stringLiteral74);
		if (!((*(bool*)((bool*)UnBox (L_19, Boolean_t56_il2cpp_TypeInfo_var)))))
		{
			goto IL_0146;
		}
	}
	{
		Hashtable_t26 * L_20 = (__this->___tweenArguments_23);
		bool L_21 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(26 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_20, _stringLiteral76);
		if (!L_21)
		{
			goto IL_00e8;
		}
	}
	{
		Hashtable_t26 * L_22 = (__this->___tweenArguments_23);
		Object_t * L_23 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_22, _stringLiteral76);
		V_1 = ((*(float*)((float*)UnBox (L_23, Single_t51_il2cpp_TypeInfo_var))));
		goto IL_00ee;
	}

IL_00e8:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Defaults_t12_il2cpp_TypeInfo_var);
		float L_24 = ((Defaults_t12_StaticFields*)Defaults_t12_il2cpp_TypeInfo_var->static_fields)->___lookAhead_13;
		V_1 = L_24;
	}

IL_00ee:
	{
		EasingFunction_t17 * L_25 = (__this->___ease_25);
		float L_26 = (__this->___percentage_15);
		float L_27 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t46_il2cpp_TypeInfo_var);
		float L_28 = Mathf_Min_m405(NULL /*static, unused*/, (1.0f), ((float)((float)L_26+(float)L_27)), /*hidden argument*/NULL);
		float L_29 = EasingFunction_Invoke_m17(L_25, (0.0f), (1.0f), L_28, /*hidden argument*/NULL);
		V_2 = L_29;
		Hashtable_t26 * L_30 = (__this->___tweenArguments_23);
		CRSpline_t15 * L_31 = (__this->___path_33);
		float L_32 = V_2;
		float L_33 = Mathf_Clamp_m312(NULL /*static, unused*/, L_32, (0.0f), (1.0f), /*hidden argument*/NULL);
		Vector3_t14  L_34 = CRSpline_Interp_m15(L_31, L_33, /*hidden argument*/NULL);
		Vector3_t14  L_35 = L_34;
		Object_t * L_36 = Box(Vector3_t14_il2cpp_TypeInfo_var, &L_35);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(22 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_30, _stringLiteral52, L_36);
	}

IL_0146:
	{
		Transform_t32 * L_37 = (__this->___thisTransform_39);
		Vector3_t14  L_38 = Transform_get_position_m369(L_37, /*hidden argument*/NULL);
		__this->___postUpdate_35 = L_38;
		bool L_39 = (__this->___physics_22);
		if (!L_39)
		{
			goto IL_0184;
		}
	}
	{
		Transform_t32 * L_40 = (__this->___thisTransform_39);
		Vector3_t14  L_41 = (__this->___preUpdate_34);
		Transform_set_position_m374(L_40, L_41, /*hidden argument*/NULL);
		Rigidbody_t65 * L_42 = Component_GetComponent_TisRigidbody_t65_m406(__this, /*hidden argument*/Component_GetComponent_TisRigidbody_t65_m406_MethodInfo_var);
		Vector3_t14  L_43 = (__this->___postUpdate_35);
		Rigidbody_MovePosition_m407(L_42, L_43, /*hidden argument*/NULL);
	}

IL_0184:
	{
		return;
	}
}
// System.Void iTween::ApplyMoveToTargets()
extern const MethodInfo* Component_GetComponent_TisRigidbody_t65_m406_MethodInfo_var;
extern "C" void iTween_ApplyMoveToTargets_m138 (iTween_t23 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponent_TisRigidbody_t65_m406_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483686);
		s_Il2CppMethodIntialized = true;
	}
	{
		Transform_t32 * L_0 = (__this->___thisTransform_39);
		Vector3_t14  L_1 = Transform_get_position_m369(L_0, /*hidden argument*/NULL);
		__this->___preUpdate_34 = L_1;
		Vector3U5BU5D_t16* L_2 = (__this->___vector3s_28);
		EasingFunction_t17 * L_3 = (__this->___ease_25);
		Vector3U5BU5D_t16* L_4 = (__this->___vector3s_28);
		float L_5 = (((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_4, 0, sizeof(Vector3_t14 )))->___x_1);
		Vector3U5BU5D_t16* L_6 = (__this->___vector3s_28);
		float L_7 = (((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_6, 1, sizeof(Vector3_t14 )))->___x_1);
		float L_8 = (__this->___percentage_15);
		float L_9 = EasingFunction_Invoke_m17(L_3, L_5, L_7, L_8, /*hidden argument*/NULL);
		((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_2, 2, sizeof(Vector3_t14 )))->___x_1 = L_9;
		Vector3U5BU5D_t16* L_10 = (__this->___vector3s_28);
		EasingFunction_t17 * L_11 = (__this->___ease_25);
		Vector3U5BU5D_t16* L_12 = (__this->___vector3s_28);
		float L_13 = (((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_12, 0, sizeof(Vector3_t14 )))->___y_2);
		Vector3U5BU5D_t16* L_14 = (__this->___vector3s_28);
		float L_15 = (((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_14, 1, sizeof(Vector3_t14 )))->___y_2);
		float L_16 = (__this->___percentage_15);
		float L_17 = EasingFunction_Invoke_m17(L_11, L_13, L_15, L_16, /*hidden argument*/NULL);
		((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_10, 2, sizeof(Vector3_t14 )))->___y_2 = L_17;
		Vector3U5BU5D_t16* L_18 = (__this->___vector3s_28);
		EasingFunction_t17 * L_19 = (__this->___ease_25);
		Vector3U5BU5D_t16* L_20 = (__this->___vector3s_28);
		float L_21 = (((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_20, 0, sizeof(Vector3_t14 )))->___z_3);
		Vector3U5BU5D_t16* L_22 = (__this->___vector3s_28);
		float L_23 = (((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_22, 1, sizeof(Vector3_t14 )))->___z_3);
		float L_24 = (__this->___percentage_15);
		float L_25 = EasingFunction_Invoke_m17(L_19, L_21, L_23, L_24, /*hidden argument*/NULL);
		((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_18, 2, sizeof(Vector3_t14 )))->___z_3 = L_25;
		bool L_26 = (__this->___isLocal_18);
		if (!L_26)
		{
			goto IL_0109;
		}
	}
	{
		Transform_t32 * L_27 = (__this->___thisTransform_39);
		Vector3U5BU5D_t16* L_28 = (__this->___vector3s_28);
		Transform_set_localPosition_m373(L_27, (*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_28, 2, sizeof(Vector3_t14 )))), /*hidden argument*/NULL);
		goto IL_0125;
	}

IL_0109:
	{
		Transform_t32 * L_29 = (__this->___thisTransform_39);
		Vector3U5BU5D_t16* L_30 = (__this->___vector3s_28);
		Transform_set_position_m374(L_29, (*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_30, 2, sizeof(Vector3_t14 )))), /*hidden argument*/NULL);
	}

IL_0125:
	{
		float L_31 = (__this->___percentage_15);
		if ((!(((float)L_31) == ((float)(1.0f)))))
		{
			goto IL_017d;
		}
	}
	{
		bool L_32 = (__this->___isLocal_18);
		if (!L_32)
		{
			goto IL_0161;
		}
	}
	{
		Transform_t32 * L_33 = (__this->___thisTransform_39);
		Vector3U5BU5D_t16* L_34 = (__this->___vector3s_28);
		Transform_set_localPosition_m373(L_33, (*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_34, 1, sizeof(Vector3_t14 )))), /*hidden argument*/NULL);
		goto IL_017d;
	}

IL_0161:
	{
		Transform_t32 * L_35 = (__this->___thisTransform_39);
		Vector3U5BU5D_t16* L_36 = (__this->___vector3s_28);
		Transform_set_position_m374(L_35, (*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_36, 1, sizeof(Vector3_t14 )))), /*hidden argument*/NULL);
	}

IL_017d:
	{
		Transform_t32 * L_37 = (__this->___thisTransform_39);
		Vector3_t14  L_38 = Transform_get_position_m369(L_37, /*hidden argument*/NULL);
		__this->___postUpdate_35 = L_38;
		bool L_39 = (__this->___physics_22);
		if (!L_39)
		{
			goto IL_01bb;
		}
	}
	{
		Transform_t32 * L_40 = (__this->___thisTransform_39);
		Vector3_t14  L_41 = (__this->___preUpdate_34);
		Transform_set_position_m374(L_40, L_41, /*hidden argument*/NULL);
		Rigidbody_t65 * L_42 = Component_GetComponent_TisRigidbody_t65_m406(__this, /*hidden argument*/Component_GetComponent_TisRigidbody_t65_m406_MethodInfo_var);
		Vector3_t14  L_43 = (__this->___postUpdate_35);
		Rigidbody_MovePosition_m407(L_42, L_43, /*hidden argument*/NULL);
	}

IL_01bb:
	{
		return;
	}
}
// System.Void iTween::ApplyMoveByTargets()
extern TypeInfo* Vector3_t14_il2cpp_TypeInfo_var;
extern const MethodInfo* Component_GetComponent_TisRigidbody_t65_m406_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral52;
extern "C" void iTween_ApplyMoveByTargets_m139 (iTween_t23 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Vector3_t14_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13);
		Component_GetComponent_TisRigidbody_t65_m406_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483686);
		_stringLiteral52 = il2cpp_codegen_string_literal_from_index(52);
		s_Il2CppMethodIntialized = true;
	}
	Vector3_t14  V_0 = {0};
	{
		Transform_t32 * L_0 = (__this->___thisTransform_39);
		Vector3_t14  L_1 = Transform_get_position_m369(L_0, /*hidden argument*/NULL);
		__this->___preUpdate_34 = L_1;
		Initobj (Vector3_t14_il2cpp_TypeInfo_var, (&V_0));
		Hashtable_t26 * L_2 = (__this->___tweenArguments_23);
		bool L_3 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(26 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_2, _stringLiteral52);
		if (!L_3)
		{
			goto IL_0056;
		}
	}
	{
		Transform_t32 * L_4 = (__this->___thisTransform_39);
		Vector3_t14  L_5 = Transform_get_eulerAngles_m362(L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		Transform_t32 * L_6 = (__this->___thisTransform_39);
		Vector3U5BU5D_t16* L_7 = (__this->___vector3s_28);
		Transform_set_eulerAngles_m368(L_6, (*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_7, 4, sizeof(Vector3_t14 )))), /*hidden argument*/NULL);
	}

IL_0056:
	{
		Vector3U5BU5D_t16* L_8 = (__this->___vector3s_28);
		EasingFunction_t17 * L_9 = (__this->___ease_25);
		Vector3U5BU5D_t16* L_10 = (__this->___vector3s_28);
		float L_11 = (((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_10, 0, sizeof(Vector3_t14 )))->___x_1);
		Vector3U5BU5D_t16* L_12 = (__this->___vector3s_28);
		float L_13 = (((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_12, 1, sizeof(Vector3_t14 )))->___x_1);
		float L_14 = (__this->___percentage_15);
		float L_15 = EasingFunction_Invoke_m17(L_9, L_11, L_13, L_14, /*hidden argument*/NULL);
		((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_8, 2, sizeof(Vector3_t14 )))->___x_1 = L_15;
		Vector3U5BU5D_t16* L_16 = (__this->___vector3s_28);
		EasingFunction_t17 * L_17 = (__this->___ease_25);
		Vector3U5BU5D_t16* L_18 = (__this->___vector3s_28);
		float L_19 = (((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_18, 0, sizeof(Vector3_t14 )))->___y_2);
		Vector3U5BU5D_t16* L_20 = (__this->___vector3s_28);
		float L_21 = (((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_20, 1, sizeof(Vector3_t14 )))->___y_2);
		float L_22 = (__this->___percentage_15);
		float L_23 = EasingFunction_Invoke_m17(L_17, L_19, L_21, L_22, /*hidden argument*/NULL);
		((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_16, 2, sizeof(Vector3_t14 )))->___y_2 = L_23;
		Vector3U5BU5D_t16* L_24 = (__this->___vector3s_28);
		EasingFunction_t17 * L_25 = (__this->___ease_25);
		Vector3U5BU5D_t16* L_26 = (__this->___vector3s_28);
		float L_27 = (((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_26, 0, sizeof(Vector3_t14 )))->___z_3);
		Vector3U5BU5D_t16* L_28 = (__this->___vector3s_28);
		float L_29 = (((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_28, 1, sizeof(Vector3_t14 )))->___z_3);
		float L_30 = (__this->___percentage_15);
		float L_31 = EasingFunction_Invoke_m17(L_25, L_27, L_29, L_30, /*hidden argument*/NULL);
		((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_24, 2, sizeof(Vector3_t14 )))->___z_3 = L_31;
		Transform_t32 * L_32 = (__this->___thisTransform_39);
		Vector3U5BU5D_t16* L_33 = (__this->___vector3s_28);
		Vector3U5BU5D_t16* L_34 = (__this->___vector3s_28);
		Vector3_t14  L_35 = Vector3_op_Subtraction_m333(NULL /*static, unused*/, (*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_33, 2, sizeof(Vector3_t14 )))), (*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_34, 3, sizeof(Vector3_t14 )))), /*hidden argument*/NULL);
		int32_t L_36 = (__this->___space_24);
		Transform_Translate_m394(L_32, L_35, L_36, /*hidden argument*/NULL);
		Vector3U5BU5D_t16* L_37 = (__this->___vector3s_28);
		Vector3U5BU5D_t16* L_38 = (__this->___vector3s_28);
		(*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_37, 3, sizeof(Vector3_t14 )))) = (*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_38, 2, sizeof(Vector3_t14 ))));
		Hashtable_t26 * L_39 = (__this->___tweenArguments_23);
		bool L_40 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(26 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_39, _stringLiteral52);
		if (!L_40)
		{
			goto IL_019d;
		}
	}
	{
		Transform_t32 * L_41 = (__this->___thisTransform_39);
		Vector3_t14  L_42 = V_0;
		Transform_set_eulerAngles_m368(L_41, L_42, /*hidden argument*/NULL);
	}

IL_019d:
	{
		Transform_t32 * L_43 = (__this->___thisTransform_39);
		Vector3_t14  L_44 = Transform_get_position_m369(L_43, /*hidden argument*/NULL);
		__this->___postUpdate_35 = L_44;
		bool L_45 = (__this->___physics_22);
		if (!L_45)
		{
			goto IL_01db;
		}
	}
	{
		Transform_t32 * L_46 = (__this->___thisTransform_39);
		Vector3_t14  L_47 = (__this->___preUpdate_34);
		Transform_set_position_m374(L_46, L_47, /*hidden argument*/NULL);
		Rigidbody_t65 * L_48 = Component_GetComponent_TisRigidbody_t65_m406(__this, /*hidden argument*/Component_GetComponent_TisRigidbody_t65_m406_MethodInfo_var);
		Vector3_t14  L_49 = (__this->___postUpdate_35);
		Rigidbody_MovePosition_m407(L_48, L_49, /*hidden argument*/NULL);
	}

IL_01db:
	{
		return;
	}
}
// System.Void iTween::ApplyScaleToTargets()
extern "C" void iTween_ApplyScaleToTargets_m140 (iTween_t23 * __this, const MethodInfo* method)
{
	{
		Vector3U5BU5D_t16* L_0 = (__this->___vector3s_28);
		EasingFunction_t17 * L_1 = (__this->___ease_25);
		Vector3U5BU5D_t16* L_2 = (__this->___vector3s_28);
		float L_3 = (((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_2, 0, sizeof(Vector3_t14 )))->___x_1);
		Vector3U5BU5D_t16* L_4 = (__this->___vector3s_28);
		float L_5 = (((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_4, 1, sizeof(Vector3_t14 )))->___x_1);
		float L_6 = (__this->___percentage_15);
		float L_7 = EasingFunction_Invoke_m17(L_1, L_3, L_5, L_6, /*hidden argument*/NULL);
		((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_0, 2, sizeof(Vector3_t14 )))->___x_1 = L_7;
		Vector3U5BU5D_t16* L_8 = (__this->___vector3s_28);
		EasingFunction_t17 * L_9 = (__this->___ease_25);
		Vector3U5BU5D_t16* L_10 = (__this->___vector3s_28);
		float L_11 = (((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_10, 0, sizeof(Vector3_t14 )))->___y_2);
		Vector3U5BU5D_t16* L_12 = (__this->___vector3s_28);
		float L_13 = (((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_12, 1, sizeof(Vector3_t14 )))->___y_2);
		float L_14 = (__this->___percentage_15);
		float L_15 = EasingFunction_Invoke_m17(L_9, L_11, L_13, L_14, /*hidden argument*/NULL);
		((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_8, 2, sizeof(Vector3_t14 )))->___y_2 = L_15;
		Vector3U5BU5D_t16* L_16 = (__this->___vector3s_28);
		EasingFunction_t17 * L_17 = (__this->___ease_25);
		Vector3U5BU5D_t16* L_18 = (__this->___vector3s_28);
		float L_19 = (((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_18, 0, sizeof(Vector3_t14 )))->___z_3);
		Vector3U5BU5D_t16* L_20 = (__this->___vector3s_28);
		float L_21 = (((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_20, 1, sizeof(Vector3_t14 )))->___z_3);
		float L_22 = (__this->___percentage_15);
		float L_23 = EasingFunction_Invoke_m17(L_17, L_19, L_21, L_22, /*hidden argument*/NULL);
		((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_16, 2, sizeof(Vector3_t14 )))->___z_3 = L_23;
		Transform_t32 * L_24 = (__this->___thisTransform_39);
		Vector3U5BU5D_t16* L_25 = (__this->___vector3s_28);
		Transform_set_localScale_m375(L_24, (*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_25, 2, sizeof(Vector3_t14 )))), /*hidden argument*/NULL);
		float L_26 = (__this->___percentage_15);
		if ((!(((float)L_26) == ((float)(1.0f)))))
		{
			goto IL_0114;
		}
	}
	{
		Transform_t32 * L_27 = (__this->___thisTransform_39);
		Vector3U5BU5D_t16* L_28 = (__this->___vector3s_28);
		Transform_set_localScale_m375(L_27, (*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_28, 1, sizeof(Vector3_t14 )))), /*hidden argument*/NULL);
	}

IL_0114:
	{
		return;
	}
}
// System.Void iTween::ApplyLookToTargets()
extern "C" void iTween_ApplyLookToTargets_m141 (iTween_t23 * __this, const MethodInfo* method)
{
	{
		Vector3U5BU5D_t16* L_0 = (__this->___vector3s_28);
		EasingFunction_t17 * L_1 = (__this->___ease_25);
		Vector3U5BU5D_t16* L_2 = (__this->___vector3s_28);
		float L_3 = (((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_2, 0, sizeof(Vector3_t14 )))->___x_1);
		Vector3U5BU5D_t16* L_4 = (__this->___vector3s_28);
		float L_5 = (((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_4, 1, sizeof(Vector3_t14 )))->___x_1);
		float L_6 = (__this->___percentage_15);
		float L_7 = EasingFunction_Invoke_m17(L_1, L_3, L_5, L_6, /*hidden argument*/NULL);
		((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_0, 2, sizeof(Vector3_t14 )))->___x_1 = L_7;
		Vector3U5BU5D_t16* L_8 = (__this->___vector3s_28);
		EasingFunction_t17 * L_9 = (__this->___ease_25);
		Vector3U5BU5D_t16* L_10 = (__this->___vector3s_28);
		float L_11 = (((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_10, 0, sizeof(Vector3_t14 )))->___y_2);
		Vector3U5BU5D_t16* L_12 = (__this->___vector3s_28);
		float L_13 = (((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_12, 1, sizeof(Vector3_t14 )))->___y_2);
		float L_14 = (__this->___percentage_15);
		float L_15 = EasingFunction_Invoke_m17(L_9, L_11, L_13, L_14, /*hidden argument*/NULL);
		((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_8, 2, sizeof(Vector3_t14 )))->___y_2 = L_15;
		Vector3U5BU5D_t16* L_16 = (__this->___vector3s_28);
		EasingFunction_t17 * L_17 = (__this->___ease_25);
		Vector3U5BU5D_t16* L_18 = (__this->___vector3s_28);
		float L_19 = (((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_18, 0, sizeof(Vector3_t14 )))->___z_3);
		Vector3U5BU5D_t16* L_20 = (__this->___vector3s_28);
		float L_21 = (((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_20, 1, sizeof(Vector3_t14 )))->___z_3);
		float L_22 = (__this->___percentage_15);
		float L_23 = EasingFunction_Invoke_m17(L_17, L_19, L_21, L_22, /*hidden argument*/NULL);
		((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_16, 2, sizeof(Vector3_t14 )))->___z_3 = L_23;
		bool L_24 = (__this->___isLocal_18);
		if (!L_24)
		{
			goto IL_00fd;
		}
	}
	{
		Transform_t32 * L_25 = (__this->___thisTransform_39);
		Vector3U5BU5D_t16* L_26 = (__this->___vector3s_28);
		Quaternion_t44  L_27 = Quaternion_Euler_m408(NULL /*static, unused*/, (*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_26, 2, sizeof(Vector3_t14 )))), /*hidden argument*/NULL);
		Transform_set_localRotation_m409(L_25, L_27, /*hidden argument*/NULL);
		goto IL_011e;
	}

IL_00fd:
	{
		Transform_t32 * L_28 = (__this->___thisTransform_39);
		Vector3U5BU5D_t16* L_29 = (__this->___vector3s_28);
		Quaternion_t44  L_30 = Quaternion_Euler_m408(NULL /*static, unused*/, (*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_29, 2, sizeof(Vector3_t14 )))), /*hidden argument*/NULL);
		Transform_set_rotation_m410(L_28, L_30, /*hidden argument*/NULL);
	}

IL_011e:
	{
		return;
	}
}
// System.Void iTween::ApplyRotateToTargets()
extern const MethodInfo* Component_GetComponent_TisRigidbody_t65_m406_MethodInfo_var;
extern "C" void iTween_ApplyRotateToTargets_m142 (iTween_t23 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponent_TisRigidbody_t65_m406_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483686);
		s_Il2CppMethodIntialized = true;
	}
	{
		Transform_t32 * L_0 = (__this->___thisTransform_39);
		Vector3_t14  L_1 = Transform_get_eulerAngles_m362(L_0, /*hidden argument*/NULL);
		__this->___preUpdate_34 = L_1;
		Vector3U5BU5D_t16* L_2 = (__this->___vector3s_28);
		EasingFunction_t17 * L_3 = (__this->___ease_25);
		Vector3U5BU5D_t16* L_4 = (__this->___vector3s_28);
		float L_5 = (((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_4, 0, sizeof(Vector3_t14 )))->___x_1);
		Vector3U5BU5D_t16* L_6 = (__this->___vector3s_28);
		float L_7 = (((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_6, 1, sizeof(Vector3_t14 )))->___x_1);
		float L_8 = (__this->___percentage_15);
		float L_9 = EasingFunction_Invoke_m17(L_3, L_5, L_7, L_8, /*hidden argument*/NULL);
		((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_2, 2, sizeof(Vector3_t14 )))->___x_1 = L_9;
		Vector3U5BU5D_t16* L_10 = (__this->___vector3s_28);
		EasingFunction_t17 * L_11 = (__this->___ease_25);
		Vector3U5BU5D_t16* L_12 = (__this->___vector3s_28);
		float L_13 = (((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_12, 0, sizeof(Vector3_t14 )))->___y_2);
		Vector3U5BU5D_t16* L_14 = (__this->___vector3s_28);
		float L_15 = (((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_14, 1, sizeof(Vector3_t14 )))->___y_2);
		float L_16 = (__this->___percentage_15);
		float L_17 = EasingFunction_Invoke_m17(L_11, L_13, L_15, L_16, /*hidden argument*/NULL);
		((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_10, 2, sizeof(Vector3_t14 )))->___y_2 = L_17;
		Vector3U5BU5D_t16* L_18 = (__this->___vector3s_28);
		EasingFunction_t17 * L_19 = (__this->___ease_25);
		Vector3U5BU5D_t16* L_20 = (__this->___vector3s_28);
		float L_21 = (((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_20, 0, sizeof(Vector3_t14 )))->___z_3);
		Vector3U5BU5D_t16* L_22 = (__this->___vector3s_28);
		float L_23 = (((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_22, 1, sizeof(Vector3_t14 )))->___z_3);
		float L_24 = (__this->___percentage_15);
		float L_25 = EasingFunction_Invoke_m17(L_19, L_21, L_23, L_24, /*hidden argument*/NULL);
		((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_18, 2, sizeof(Vector3_t14 )))->___z_3 = L_25;
		bool L_26 = (__this->___isLocal_18);
		if (!L_26)
		{
			goto IL_010e;
		}
	}
	{
		Transform_t32 * L_27 = (__this->___thisTransform_39);
		Vector3U5BU5D_t16* L_28 = (__this->___vector3s_28);
		Quaternion_t44  L_29 = Quaternion_Euler_m408(NULL /*static, unused*/, (*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_28, 2, sizeof(Vector3_t14 )))), /*hidden argument*/NULL);
		Transform_set_localRotation_m409(L_27, L_29, /*hidden argument*/NULL);
		goto IL_012f;
	}

IL_010e:
	{
		Transform_t32 * L_30 = (__this->___thisTransform_39);
		Vector3U5BU5D_t16* L_31 = (__this->___vector3s_28);
		Quaternion_t44  L_32 = Quaternion_Euler_m408(NULL /*static, unused*/, (*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_31, 2, sizeof(Vector3_t14 )))), /*hidden argument*/NULL);
		Transform_set_rotation_m410(L_30, L_32, /*hidden argument*/NULL);
	}

IL_012f:
	{
		float L_33 = (__this->___percentage_15);
		if ((!(((float)L_33) == ((float)(1.0f)))))
		{
			goto IL_0191;
		}
	}
	{
		bool L_34 = (__this->___isLocal_18);
		if (!L_34)
		{
			goto IL_0170;
		}
	}
	{
		Transform_t32 * L_35 = (__this->___thisTransform_39);
		Vector3U5BU5D_t16* L_36 = (__this->___vector3s_28);
		Quaternion_t44  L_37 = Quaternion_Euler_m408(NULL /*static, unused*/, (*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_36, 1, sizeof(Vector3_t14 )))), /*hidden argument*/NULL);
		Transform_set_localRotation_m409(L_35, L_37, /*hidden argument*/NULL);
		goto IL_0191;
	}

IL_0170:
	{
		Transform_t32 * L_38 = (__this->___thisTransform_39);
		Vector3U5BU5D_t16* L_39 = (__this->___vector3s_28);
		Quaternion_t44  L_40 = Quaternion_Euler_m408(NULL /*static, unused*/, (*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_39, 1, sizeof(Vector3_t14 )))), /*hidden argument*/NULL);
		Transform_set_rotation_m410(L_38, L_40, /*hidden argument*/NULL);
	}

IL_0191:
	{
		Transform_t32 * L_41 = (__this->___thisTransform_39);
		Vector3_t14  L_42 = Transform_get_eulerAngles_m362(L_41, /*hidden argument*/NULL);
		__this->___postUpdate_35 = L_42;
		bool L_43 = (__this->___physics_22);
		if (!L_43)
		{
			goto IL_01d4;
		}
	}
	{
		Transform_t32 * L_44 = (__this->___thisTransform_39);
		Vector3_t14  L_45 = (__this->___preUpdate_34);
		Transform_set_eulerAngles_m368(L_44, L_45, /*hidden argument*/NULL);
		Rigidbody_t65 * L_46 = Component_GetComponent_TisRigidbody_t65_m406(__this, /*hidden argument*/Component_GetComponent_TisRigidbody_t65_m406_MethodInfo_var);
		Vector3_t14  L_47 = (__this->___postUpdate_35);
		Quaternion_t44  L_48 = Quaternion_Euler_m408(NULL /*static, unused*/, L_47, /*hidden argument*/NULL);
		Rigidbody_MoveRotation_m411(L_46, L_48, /*hidden argument*/NULL);
	}

IL_01d4:
	{
		return;
	}
}
// System.Void iTween::ApplyRotateAddTargets()
extern const MethodInfo* Component_GetComponent_TisRigidbody_t65_m406_MethodInfo_var;
extern "C" void iTween_ApplyRotateAddTargets_m143 (iTween_t23 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponent_TisRigidbody_t65_m406_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483686);
		s_Il2CppMethodIntialized = true;
	}
	{
		Transform_t32 * L_0 = (__this->___thisTransform_39);
		Vector3_t14  L_1 = Transform_get_eulerAngles_m362(L_0, /*hidden argument*/NULL);
		__this->___preUpdate_34 = L_1;
		Vector3U5BU5D_t16* L_2 = (__this->___vector3s_28);
		EasingFunction_t17 * L_3 = (__this->___ease_25);
		Vector3U5BU5D_t16* L_4 = (__this->___vector3s_28);
		float L_5 = (((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_4, 0, sizeof(Vector3_t14 )))->___x_1);
		Vector3U5BU5D_t16* L_6 = (__this->___vector3s_28);
		float L_7 = (((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_6, 1, sizeof(Vector3_t14 )))->___x_1);
		float L_8 = (__this->___percentage_15);
		float L_9 = EasingFunction_Invoke_m17(L_3, L_5, L_7, L_8, /*hidden argument*/NULL);
		((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_2, 2, sizeof(Vector3_t14 )))->___x_1 = L_9;
		Vector3U5BU5D_t16* L_10 = (__this->___vector3s_28);
		EasingFunction_t17 * L_11 = (__this->___ease_25);
		Vector3U5BU5D_t16* L_12 = (__this->___vector3s_28);
		float L_13 = (((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_12, 0, sizeof(Vector3_t14 )))->___y_2);
		Vector3U5BU5D_t16* L_14 = (__this->___vector3s_28);
		float L_15 = (((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_14, 1, sizeof(Vector3_t14 )))->___y_2);
		float L_16 = (__this->___percentage_15);
		float L_17 = EasingFunction_Invoke_m17(L_11, L_13, L_15, L_16, /*hidden argument*/NULL);
		((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_10, 2, sizeof(Vector3_t14 )))->___y_2 = L_17;
		Vector3U5BU5D_t16* L_18 = (__this->___vector3s_28);
		EasingFunction_t17 * L_19 = (__this->___ease_25);
		Vector3U5BU5D_t16* L_20 = (__this->___vector3s_28);
		float L_21 = (((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_20, 0, sizeof(Vector3_t14 )))->___z_3);
		Vector3U5BU5D_t16* L_22 = (__this->___vector3s_28);
		float L_23 = (((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_22, 1, sizeof(Vector3_t14 )))->___z_3);
		float L_24 = (__this->___percentage_15);
		float L_25 = EasingFunction_Invoke_m17(L_19, L_21, L_23, L_24, /*hidden argument*/NULL);
		((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_18, 2, sizeof(Vector3_t14 )))->___z_3 = L_25;
		Transform_t32 * L_26 = (__this->___thisTransform_39);
		Vector3U5BU5D_t16* L_27 = (__this->___vector3s_28);
		Vector3U5BU5D_t16* L_28 = (__this->___vector3s_28);
		Vector3_t14  L_29 = Vector3_op_Subtraction_m333(NULL /*static, unused*/, (*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_27, 2, sizeof(Vector3_t14 )))), (*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_28, 3, sizeof(Vector3_t14 )))), /*hidden argument*/NULL);
		int32_t L_30 = (__this->___space_24);
		Transform_Rotate_m412(L_26, L_29, L_30, /*hidden argument*/NULL);
		Vector3U5BU5D_t16* L_31 = (__this->___vector3s_28);
		Vector3U5BU5D_t16* L_32 = (__this->___vector3s_28);
		(*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_31, 3, sizeof(Vector3_t14 )))) = (*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_32, 2, sizeof(Vector3_t14 ))));
		Transform_t32 * L_33 = (__this->___thisTransform_39);
		Vector3_t14  L_34 = Transform_get_eulerAngles_m362(L_33, /*hidden argument*/NULL);
		__this->___postUpdate_35 = L_34;
		bool L_35 = (__this->___physics_22);
		if (!L_35)
		{
			goto IL_017a;
		}
	}
	{
		Transform_t32 * L_36 = (__this->___thisTransform_39);
		Vector3_t14  L_37 = (__this->___preUpdate_34);
		Transform_set_eulerAngles_m368(L_36, L_37, /*hidden argument*/NULL);
		Rigidbody_t65 * L_38 = Component_GetComponent_TisRigidbody_t65_m406(__this, /*hidden argument*/Component_GetComponent_TisRigidbody_t65_m406_MethodInfo_var);
		Vector3_t14  L_39 = (__this->___postUpdate_35);
		Quaternion_t44  L_40 = Quaternion_Euler_m408(NULL /*static, unused*/, L_39, /*hidden argument*/NULL);
		Rigidbody_MoveRotation_m411(L_38, L_40, /*hidden argument*/NULL);
	}

IL_017a:
	{
		return;
	}
}
// System.Void iTween::ApplyShakePositionTargets()
extern TypeInfo* Vector3_t14_il2cpp_TypeInfo_var;
extern const MethodInfo* Component_GetComponent_TisRigidbody_t65_m406_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral52;
extern "C" void iTween_ApplyShakePositionTargets_m144 (iTween_t23 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Vector3_t14_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13);
		Component_GetComponent_TisRigidbody_t65_m406_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483686);
		_stringLiteral52 = il2cpp_codegen_string_literal_from_index(52);
		s_Il2CppMethodIntialized = true;
	}
	Vector3_t14  V_0 = {0};
	float V_1 = 0.0f;
	{
		bool L_0 = (__this->___isLocal_18);
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		Transform_t32 * L_1 = (__this->___thisTransform_39);
		Vector3_t14  L_2 = Transform_get_localPosition_m372(L_1, /*hidden argument*/NULL);
		__this->___preUpdate_34 = L_2;
		goto IL_0032;
	}

IL_0021:
	{
		Transform_t32 * L_3 = (__this->___thisTransform_39);
		Vector3_t14  L_4 = Transform_get_position_m369(L_3, /*hidden argument*/NULL);
		__this->___preUpdate_34 = L_4;
	}

IL_0032:
	{
		Initobj (Vector3_t14_il2cpp_TypeInfo_var, (&V_0));
		Hashtable_t26 * L_5 = (__this->___tweenArguments_23);
		bool L_6 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(26 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_5, _stringLiteral52);
		if (!L_6)
		{
			goto IL_0077;
		}
	}
	{
		Transform_t32 * L_7 = (__this->___thisTransform_39);
		Vector3_t14  L_8 = Transform_get_eulerAngles_m362(L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		Transform_t32 * L_9 = (__this->___thisTransform_39);
		Vector3U5BU5D_t16* L_10 = (__this->___vector3s_28);
		Transform_set_eulerAngles_m368(L_9, (*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_10, 3, sizeof(Vector3_t14 )))), /*hidden argument*/NULL);
	}

IL_0077:
	{
		float L_11 = (__this->___percentage_15);
		if ((!(((float)L_11) == ((float)(0.0f)))))
		{
			goto IL_00a9;
		}
	}
	{
		Transform_t32 * L_12 = (__this->___thisTransform_39);
		Vector3U5BU5D_t16* L_13 = (__this->___vector3s_28);
		int32_t L_14 = (__this->___space_24);
		Transform_Translate_m394(L_12, (*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_13, 1, sizeof(Vector3_t14 )))), L_14, /*hidden argument*/NULL);
	}

IL_00a9:
	{
		bool L_15 = (__this->___isLocal_18);
		if (!L_15)
		{
			goto IL_00d5;
		}
	}
	{
		Transform_t32 * L_16 = (__this->___thisTransform_39);
		Vector3U5BU5D_t16* L_17 = (__this->___vector3s_28);
		Transform_set_localPosition_m373(L_16, (*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_17, 0, sizeof(Vector3_t14 )))), /*hidden argument*/NULL);
		goto IL_00f1;
	}

IL_00d5:
	{
		Transform_t32 * L_18 = (__this->___thisTransform_39);
		Vector3U5BU5D_t16* L_19 = (__this->___vector3s_28);
		Transform_set_position_m374(L_18, (*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_19, 0, sizeof(Vector3_t14 )))), /*hidden argument*/NULL);
	}

IL_00f1:
	{
		float L_20 = (__this->___percentage_15);
		V_1 = ((float)((float)(1.0f)-(float)L_20));
		Vector3U5BU5D_t16* L_21 = (__this->___vector3s_28);
		Vector3U5BU5D_t16* L_22 = (__this->___vector3s_28);
		float L_23 = (((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_22, 1, sizeof(Vector3_t14 )))->___x_1);
		float L_24 = V_1;
		Vector3U5BU5D_t16* L_25 = (__this->___vector3s_28);
		float L_26 = (((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_25, 1, sizeof(Vector3_t14 )))->___x_1);
		float L_27 = V_1;
		float L_28 = Random_Range_m413(NULL /*static, unused*/, ((float)((float)((-L_23))*(float)L_24)), ((float)((float)L_26*(float)L_27)), /*hidden argument*/NULL);
		((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_21, 2, sizeof(Vector3_t14 )))->___x_1 = L_28;
		Vector3U5BU5D_t16* L_29 = (__this->___vector3s_28);
		Vector3U5BU5D_t16* L_30 = (__this->___vector3s_28);
		float L_31 = (((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_30, 1, sizeof(Vector3_t14 )))->___y_2);
		float L_32 = V_1;
		Vector3U5BU5D_t16* L_33 = (__this->___vector3s_28);
		float L_34 = (((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_33, 1, sizeof(Vector3_t14 )))->___y_2);
		float L_35 = V_1;
		float L_36 = Random_Range_m413(NULL /*static, unused*/, ((float)((float)((-L_31))*(float)L_32)), ((float)((float)L_34*(float)L_35)), /*hidden argument*/NULL);
		((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_29, 2, sizeof(Vector3_t14 )))->___y_2 = L_36;
		Vector3U5BU5D_t16* L_37 = (__this->___vector3s_28);
		Vector3U5BU5D_t16* L_38 = (__this->___vector3s_28);
		float L_39 = (((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_38, 1, sizeof(Vector3_t14 )))->___z_3);
		float L_40 = V_1;
		Vector3U5BU5D_t16* L_41 = (__this->___vector3s_28);
		float L_42 = (((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_41, 1, sizeof(Vector3_t14 )))->___z_3);
		float L_43 = V_1;
		float L_44 = Random_Range_m413(NULL /*static, unused*/, ((float)((float)((-L_39))*(float)L_40)), ((float)((float)L_42*(float)L_43)), /*hidden argument*/NULL);
		((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_37, 2, sizeof(Vector3_t14 )))->___z_3 = L_44;
		bool L_45 = (__this->___isLocal_18);
		if (!L_45)
		{
			goto IL_01ec;
		}
	}
	{
		Transform_t32 * L_46 = (__this->___thisTransform_39);
		Transform_t32 * L_47 = L_46;
		Vector3_t14  L_48 = Transform_get_localPosition_m372(L_47, /*hidden argument*/NULL);
		Vector3U5BU5D_t16* L_49 = (__this->___vector3s_28);
		Vector3_t14  L_50 = Vector3_op_Addition_m332(NULL /*static, unused*/, L_48, (*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_49, 2, sizeof(Vector3_t14 )))), /*hidden argument*/NULL);
		Transform_set_localPosition_m373(L_47, L_50, /*hidden argument*/NULL);
		goto IL_0213;
	}

IL_01ec:
	{
		Transform_t32 * L_51 = (__this->___thisTransform_39);
		Transform_t32 * L_52 = L_51;
		Vector3_t14  L_53 = Transform_get_position_m369(L_52, /*hidden argument*/NULL);
		Vector3U5BU5D_t16* L_54 = (__this->___vector3s_28);
		Vector3_t14  L_55 = Vector3_op_Addition_m332(NULL /*static, unused*/, L_53, (*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_54, 2, sizeof(Vector3_t14 )))), /*hidden argument*/NULL);
		Transform_set_position_m374(L_52, L_55, /*hidden argument*/NULL);
	}

IL_0213:
	{
		Hashtable_t26 * L_56 = (__this->___tweenArguments_23);
		bool L_57 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(26 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_56, _stringLiteral52);
		if (!L_57)
		{
			goto IL_0234;
		}
	}
	{
		Transform_t32 * L_58 = (__this->___thisTransform_39);
		Vector3_t14  L_59 = V_0;
		Transform_set_eulerAngles_m368(L_58, L_59, /*hidden argument*/NULL);
	}

IL_0234:
	{
		Transform_t32 * L_60 = (__this->___thisTransform_39);
		Vector3_t14  L_61 = Transform_get_position_m369(L_60, /*hidden argument*/NULL);
		__this->___postUpdate_35 = L_61;
		bool L_62 = (__this->___physics_22);
		if (!L_62)
		{
			goto IL_0272;
		}
	}
	{
		Transform_t32 * L_63 = (__this->___thisTransform_39);
		Vector3_t14  L_64 = (__this->___preUpdate_34);
		Transform_set_position_m374(L_63, L_64, /*hidden argument*/NULL);
		Rigidbody_t65 * L_65 = Component_GetComponent_TisRigidbody_t65_m406(__this, /*hidden argument*/Component_GetComponent_TisRigidbody_t65_m406_MethodInfo_var);
		Vector3_t14  L_66 = (__this->___postUpdate_35);
		Rigidbody_MovePosition_m407(L_65, L_66, /*hidden argument*/NULL);
	}

IL_0272:
	{
		return;
	}
}
// System.Void iTween::ApplyShakeScaleTargets()
extern "C" void iTween_ApplyShakeScaleTargets_m145 (iTween_t23 * __this, const MethodInfo* method)
{
	float V_0 = 0.0f;
	{
		float L_0 = (__this->___percentage_15);
		if ((!(((float)L_0) == ((float)(0.0f)))))
		{
			goto IL_002c;
		}
	}
	{
		Transform_t32 * L_1 = (__this->___thisTransform_39);
		Vector3U5BU5D_t16* L_2 = (__this->___vector3s_28);
		Transform_set_localScale_m375(L_1, (*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_2, 1, sizeof(Vector3_t14 )))), /*hidden argument*/NULL);
	}

IL_002c:
	{
		Transform_t32 * L_3 = (__this->___thisTransform_39);
		Vector3U5BU5D_t16* L_4 = (__this->___vector3s_28);
		Transform_set_localScale_m375(L_3, (*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_4, 0, sizeof(Vector3_t14 )))), /*hidden argument*/NULL);
		float L_5 = (__this->___percentage_15);
		V_0 = ((float)((float)(1.0f)-(float)L_5));
		Vector3U5BU5D_t16* L_6 = (__this->___vector3s_28);
		Vector3U5BU5D_t16* L_7 = (__this->___vector3s_28);
		float L_8 = (((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_7, 1, sizeof(Vector3_t14 )))->___x_1);
		float L_9 = V_0;
		Vector3U5BU5D_t16* L_10 = (__this->___vector3s_28);
		float L_11 = (((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_10, 1, sizeof(Vector3_t14 )))->___x_1);
		float L_12 = V_0;
		float L_13 = Random_Range_m413(NULL /*static, unused*/, ((float)((float)((-L_8))*(float)L_9)), ((float)((float)L_11*(float)L_12)), /*hidden argument*/NULL);
		((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_6, 2, sizeof(Vector3_t14 )))->___x_1 = L_13;
		Vector3U5BU5D_t16* L_14 = (__this->___vector3s_28);
		Vector3U5BU5D_t16* L_15 = (__this->___vector3s_28);
		float L_16 = (((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_15, 1, sizeof(Vector3_t14 )))->___y_2);
		float L_17 = V_0;
		Vector3U5BU5D_t16* L_18 = (__this->___vector3s_28);
		float L_19 = (((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_18, 1, sizeof(Vector3_t14 )))->___y_2);
		float L_20 = V_0;
		float L_21 = Random_Range_m413(NULL /*static, unused*/, ((float)((float)((-L_16))*(float)L_17)), ((float)((float)L_19*(float)L_20)), /*hidden argument*/NULL);
		((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_14, 2, sizeof(Vector3_t14 )))->___y_2 = L_21;
		Vector3U5BU5D_t16* L_22 = (__this->___vector3s_28);
		Vector3U5BU5D_t16* L_23 = (__this->___vector3s_28);
		float L_24 = (((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_23, 1, sizeof(Vector3_t14 )))->___z_3);
		float L_25 = V_0;
		Vector3U5BU5D_t16* L_26 = (__this->___vector3s_28);
		float L_27 = (((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_26, 1, sizeof(Vector3_t14 )))->___z_3);
		float L_28 = V_0;
		float L_29 = Random_Range_m413(NULL /*static, unused*/, ((float)((float)((-L_24))*(float)L_25)), ((float)((float)L_27*(float)L_28)), /*hidden argument*/NULL);
		((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_22, 2, sizeof(Vector3_t14 )))->___z_3 = L_29;
		Transform_t32 * L_30 = (__this->___thisTransform_39);
		Transform_t32 * L_31 = L_30;
		Vector3_t14  L_32 = Transform_get_localScale_m370(L_31, /*hidden argument*/NULL);
		Vector3U5BU5D_t16* L_33 = (__this->___vector3s_28);
		Vector3_t14  L_34 = Vector3_op_Addition_m332(NULL /*static, unused*/, L_32, (*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_33, 2, sizeof(Vector3_t14 )))), /*hidden argument*/NULL);
		Transform_set_localScale_m375(L_31, L_34, /*hidden argument*/NULL);
		return;
	}
}
// System.Void iTween::ApplyShakeRotationTargets()
extern const MethodInfo* Component_GetComponent_TisRigidbody_t65_m406_MethodInfo_var;
extern "C" void iTween_ApplyShakeRotationTargets_m146 (iTween_t23 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponent_TisRigidbody_t65_m406_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483686);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	{
		Transform_t32 * L_0 = (__this->___thisTransform_39);
		Vector3_t14  L_1 = Transform_get_eulerAngles_m362(L_0, /*hidden argument*/NULL);
		__this->___preUpdate_34 = L_1;
		float L_2 = (__this->___percentage_15);
		if ((!(((float)L_2) == ((float)(0.0f)))))
		{
			goto IL_0043;
		}
	}
	{
		Transform_t32 * L_3 = (__this->___thisTransform_39);
		Vector3U5BU5D_t16* L_4 = (__this->___vector3s_28);
		int32_t L_5 = (__this->___space_24);
		Transform_Rotate_m412(L_3, (*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_4, 1, sizeof(Vector3_t14 )))), L_5, /*hidden argument*/NULL);
	}

IL_0043:
	{
		Transform_t32 * L_6 = (__this->___thisTransform_39);
		Vector3U5BU5D_t16* L_7 = (__this->___vector3s_28);
		Transform_set_eulerAngles_m368(L_6, (*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_7, 0, sizeof(Vector3_t14 )))), /*hidden argument*/NULL);
		float L_8 = (__this->___percentage_15);
		V_0 = ((float)((float)(1.0f)-(float)L_8));
		Vector3U5BU5D_t16* L_9 = (__this->___vector3s_28);
		Vector3U5BU5D_t16* L_10 = (__this->___vector3s_28);
		float L_11 = (((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_10, 1, sizeof(Vector3_t14 )))->___x_1);
		float L_12 = V_0;
		Vector3U5BU5D_t16* L_13 = (__this->___vector3s_28);
		float L_14 = (((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_13, 1, sizeof(Vector3_t14 )))->___x_1);
		float L_15 = V_0;
		float L_16 = Random_Range_m413(NULL /*static, unused*/, ((float)((float)((-L_11))*(float)L_12)), ((float)((float)L_14*(float)L_15)), /*hidden argument*/NULL);
		((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_9, 2, sizeof(Vector3_t14 )))->___x_1 = L_16;
		Vector3U5BU5D_t16* L_17 = (__this->___vector3s_28);
		Vector3U5BU5D_t16* L_18 = (__this->___vector3s_28);
		float L_19 = (((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_18, 1, sizeof(Vector3_t14 )))->___y_2);
		float L_20 = V_0;
		Vector3U5BU5D_t16* L_21 = (__this->___vector3s_28);
		float L_22 = (((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_21, 1, sizeof(Vector3_t14 )))->___y_2);
		float L_23 = V_0;
		float L_24 = Random_Range_m413(NULL /*static, unused*/, ((float)((float)((-L_19))*(float)L_20)), ((float)((float)L_22*(float)L_23)), /*hidden argument*/NULL);
		((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_17, 2, sizeof(Vector3_t14 )))->___y_2 = L_24;
		Vector3U5BU5D_t16* L_25 = (__this->___vector3s_28);
		Vector3U5BU5D_t16* L_26 = (__this->___vector3s_28);
		float L_27 = (((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_26, 1, sizeof(Vector3_t14 )))->___z_3);
		float L_28 = V_0;
		Vector3U5BU5D_t16* L_29 = (__this->___vector3s_28);
		float L_30 = (((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_29, 1, sizeof(Vector3_t14 )))->___z_3);
		float L_31 = V_0;
		float L_32 = Random_Range_m413(NULL /*static, unused*/, ((float)((float)((-L_27))*(float)L_28)), ((float)((float)L_30*(float)L_31)), /*hidden argument*/NULL);
		((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_25, 2, sizeof(Vector3_t14 )))->___z_3 = L_32;
		Transform_t32 * L_33 = (__this->___thisTransform_39);
		Vector3U5BU5D_t16* L_34 = (__this->___vector3s_28);
		int32_t L_35 = (__this->___space_24);
		Transform_Rotate_m412(L_33, (*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_34, 2, sizeof(Vector3_t14 )))), L_35, /*hidden argument*/NULL);
		Transform_t32 * L_36 = (__this->___thisTransform_39);
		Vector3_t14  L_37 = Transform_get_eulerAngles_m362(L_36, /*hidden argument*/NULL);
		__this->___postUpdate_35 = L_37;
		bool L_38 = (__this->___physics_22);
		if (!L_38)
		{
			goto IL_0188;
		}
	}
	{
		Transform_t32 * L_39 = (__this->___thisTransform_39);
		Vector3_t14  L_40 = (__this->___preUpdate_34);
		Transform_set_eulerAngles_m368(L_39, L_40, /*hidden argument*/NULL);
		Rigidbody_t65 * L_41 = Component_GetComponent_TisRigidbody_t65_m406(__this, /*hidden argument*/Component_GetComponent_TisRigidbody_t65_m406_MethodInfo_var);
		Vector3_t14  L_42 = (__this->___postUpdate_35);
		Quaternion_t44  L_43 = Quaternion_Euler_m408(NULL /*static, unused*/, L_42, /*hidden argument*/NULL);
		Rigidbody_MoveRotation_m411(L_41, L_43, /*hidden argument*/NULL);
	}

IL_0188:
	{
		return;
	}
}
// System.Void iTween::ApplyPunchPositionTargets()
extern TypeInfo* Vector3_t14_il2cpp_TypeInfo_var;
extern TypeInfo* Mathf_t46_il2cpp_TypeInfo_var;
extern const MethodInfo* Component_GetComponent_TisRigidbody_t65_m406_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral52;
extern "C" void iTween_ApplyPunchPositionTargets_m147 (iTween_t23 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Vector3_t14_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13);
		Mathf_t46_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		Component_GetComponent_TisRigidbody_t65_m406_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483686);
		_stringLiteral52 = il2cpp_codegen_string_literal_from_index(52);
		s_Il2CppMethodIntialized = true;
	}
	Vector3_t14  V_0 = {0};
	{
		Transform_t32 * L_0 = (__this->___thisTransform_39);
		Vector3_t14  L_1 = Transform_get_position_m369(L_0, /*hidden argument*/NULL);
		__this->___preUpdate_34 = L_1;
		Initobj (Vector3_t14_il2cpp_TypeInfo_var, (&V_0));
		Hashtable_t26 * L_2 = (__this->___tweenArguments_23);
		bool L_3 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(26 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_2, _stringLiteral52);
		if (!L_3)
		{
			goto IL_0056;
		}
	}
	{
		Transform_t32 * L_4 = (__this->___thisTransform_39);
		Vector3_t14  L_5 = Transform_get_eulerAngles_m362(L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		Transform_t32 * L_6 = (__this->___thisTransform_39);
		Vector3U5BU5D_t16* L_7 = (__this->___vector3s_28);
		Transform_set_eulerAngles_m368(L_6, (*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_7, 4, sizeof(Vector3_t14 )))), /*hidden argument*/NULL);
	}

IL_0056:
	{
		Vector3U5BU5D_t16* L_8 = (__this->___vector3s_28);
		float L_9 = (((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_8, 1, sizeof(Vector3_t14 )))->___x_1);
		if ((!(((float)L_9) > ((float)(0.0f)))))
		{
			goto IL_00a4;
		}
	}
	{
		Vector3U5BU5D_t16* L_10 = (__this->___vector3s_28);
		Vector3U5BU5D_t16* L_11 = (__this->___vector3s_28);
		float L_12 = (((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_11, 1, sizeof(Vector3_t14 )))->___x_1);
		float L_13 = (__this->___percentage_15);
		float L_14 = iTween_punch_m292(__this, L_12, L_13, /*hidden argument*/NULL);
		((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_10, 2, sizeof(Vector3_t14 )))->___x_1 = L_14;
		goto IL_00f3;
	}

IL_00a4:
	{
		Vector3U5BU5D_t16* L_15 = (__this->___vector3s_28);
		float L_16 = (((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_15, 1, sizeof(Vector3_t14 )))->___x_1);
		if ((!(((float)L_16) < ((float)(0.0f)))))
		{
			goto IL_00f3;
		}
	}
	{
		Vector3U5BU5D_t16* L_17 = (__this->___vector3s_28);
		Vector3U5BU5D_t16* L_18 = (__this->___vector3s_28);
		float L_19 = (((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_18, 1, sizeof(Vector3_t14 )))->___x_1);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t46_il2cpp_TypeInfo_var);
		float L_20 = fabsf(L_19);
		float L_21 = (__this->___percentage_15);
		float L_22 = iTween_punch_m292(__this, L_20, L_21, /*hidden argument*/NULL);
		((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_17, 2, sizeof(Vector3_t14 )))->___x_1 = ((-L_22));
	}

IL_00f3:
	{
		Vector3U5BU5D_t16* L_23 = (__this->___vector3s_28);
		float L_24 = (((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_23, 1, sizeof(Vector3_t14 )))->___y_2);
		if ((!(((float)L_24) > ((float)(0.0f)))))
		{
			goto IL_0141;
		}
	}
	{
		Vector3U5BU5D_t16* L_25 = (__this->___vector3s_28);
		Vector3U5BU5D_t16* L_26 = (__this->___vector3s_28);
		float L_27 = (((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_26, 1, sizeof(Vector3_t14 )))->___y_2);
		float L_28 = (__this->___percentage_15);
		float L_29 = iTween_punch_m292(__this, L_27, L_28, /*hidden argument*/NULL);
		((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_25, 2, sizeof(Vector3_t14 )))->___y_2 = L_29;
		goto IL_0190;
	}

IL_0141:
	{
		Vector3U5BU5D_t16* L_30 = (__this->___vector3s_28);
		float L_31 = (((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_30, 1, sizeof(Vector3_t14 )))->___y_2);
		if ((!(((float)L_31) < ((float)(0.0f)))))
		{
			goto IL_0190;
		}
	}
	{
		Vector3U5BU5D_t16* L_32 = (__this->___vector3s_28);
		Vector3U5BU5D_t16* L_33 = (__this->___vector3s_28);
		float L_34 = (((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_33, 1, sizeof(Vector3_t14 )))->___y_2);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t46_il2cpp_TypeInfo_var);
		float L_35 = fabsf(L_34);
		float L_36 = (__this->___percentage_15);
		float L_37 = iTween_punch_m292(__this, L_35, L_36, /*hidden argument*/NULL);
		((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_32, 2, sizeof(Vector3_t14 )))->___y_2 = ((-L_37));
	}

IL_0190:
	{
		Vector3U5BU5D_t16* L_38 = (__this->___vector3s_28);
		float L_39 = (((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_38, 1, sizeof(Vector3_t14 )))->___z_3);
		if ((!(((float)L_39) > ((float)(0.0f)))))
		{
			goto IL_01de;
		}
	}
	{
		Vector3U5BU5D_t16* L_40 = (__this->___vector3s_28);
		Vector3U5BU5D_t16* L_41 = (__this->___vector3s_28);
		float L_42 = (((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_41, 1, sizeof(Vector3_t14 )))->___z_3);
		float L_43 = (__this->___percentage_15);
		float L_44 = iTween_punch_m292(__this, L_42, L_43, /*hidden argument*/NULL);
		((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_40, 2, sizeof(Vector3_t14 )))->___z_3 = L_44;
		goto IL_022d;
	}

IL_01de:
	{
		Vector3U5BU5D_t16* L_45 = (__this->___vector3s_28);
		float L_46 = (((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_45, 1, sizeof(Vector3_t14 )))->___z_3);
		if ((!(((float)L_46) < ((float)(0.0f)))))
		{
			goto IL_022d;
		}
	}
	{
		Vector3U5BU5D_t16* L_47 = (__this->___vector3s_28);
		Vector3U5BU5D_t16* L_48 = (__this->___vector3s_28);
		float L_49 = (((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_48, 1, sizeof(Vector3_t14 )))->___z_3);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t46_il2cpp_TypeInfo_var);
		float L_50 = fabsf(L_49);
		float L_51 = (__this->___percentage_15);
		float L_52 = iTween_punch_m292(__this, L_50, L_51, /*hidden argument*/NULL);
		((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_47, 2, sizeof(Vector3_t14 )))->___z_3 = ((-L_52));
	}

IL_022d:
	{
		Transform_t32 * L_53 = (__this->___thisTransform_39);
		Vector3U5BU5D_t16* L_54 = (__this->___vector3s_28);
		Vector3U5BU5D_t16* L_55 = (__this->___vector3s_28);
		Vector3_t14  L_56 = Vector3_op_Subtraction_m333(NULL /*static, unused*/, (*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_54, 2, sizeof(Vector3_t14 )))), (*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_55, 3, sizeof(Vector3_t14 )))), /*hidden argument*/NULL);
		int32_t L_57 = (__this->___space_24);
		Transform_Translate_m394(L_53, L_56, L_57, /*hidden argument*/NULL);
		Vector3U5BU5D_t16* L_58 = (__this->___vector3s_28);
		Vector3U5BU5D_t16* L_59 = (__this->___vector3s_28);
		(*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_58, 3, sizeof(Vector3_t14 )))) = (*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_59, 2, sizeof(Vector3_t14 ))));
		Hashtable_t26 * L_60 = (__this->___tweenArguments_23);
		bool L_61 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(26 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_60, _stringLiteral52);
		if (!L_61)
		{
			goto IL_02a8;
		}
	}
	{
		Transform_t32 * L_62 = (__this->___thisTransform_39);
		Vector3_t14  L_63 = V_0;
		Transform_set_eulerAngles_m368(L_62, L_63, /*hidden argument*/NULL);
	}

IL_02a8:
	{
		Transform_t32 * L_64 = (__this->___thisTransform_39);
		Vector3_t14  L_65 = Transform_get_position_m369(L_64, /*hidden argument*/NULL);
		__this->___postUpdate_35 = L_65;
		bool L_66 = (__this->___physics_22);
		if (!L_66)
		{
			goto IL_02e6;
		}
	}
	{
		Transform_t32 * L_67 = (__this->___thisTransform_39);
		Vector3_t14  L_68 = (__this->___preUpdate_34);
		Transform_set_position_m374(L_67, L_68, /*hidden argument*/NULL);
		Rigidbody_t65 * L_69 = Component_GetComponent_TisRigidbody_t65_m406(__this, /*hidden argument*/Component_GetComponent_TisRigidbody_t65_m406_MethodInfo_var);
		Vector3_t14  L_70 = (__this->___postUpdate_35);
		Rigidbody_MovePosition_m407(L_69, L_70, /*hidden argument*/NULL);
	}

IL_02e6:
	{
		return;
	}
}
// System.Void iTween::ApplyPunchRotationTargets()
extern TypeInfo* Mathf_t46_il2cpp_TypeInfo_var;
extern const MethodInfo* Component_GetComponent_TisRigidbody_t65_m406_MethodInfo_var;
extern "C" void iTween_ApplyPunchRotationTargets_m148 (iTween_t23 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t46_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		Component_GetComponent_TisRigidbody_t65_m406_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483686);
		s_Il2CppMethodIntialized = true;
	}
	{
		Transform_t32 * L_0 = (__this->___thisTransform_39);
		Vector3_t14  L_1 = Transform_get_eulerAngles_m362(L_0, /*hidden argument*/NULL);
		__this->___preUpdate_34 = L_1;
		Vector3U5BU5D_t16* L_2 = (__this->___vector3s_28);
		float L_3 = (((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_2, 1, sizeof(Vector3_t14 )))->___x_1);
		if ((!(((float)L_3) > ((float)(0.0f)))))
		{
			goto IL_005f;
		}
	}
	{
		Vector3U5BU5D_t16* L_4 = (__this->___vector3s_28);
		Vector3U5BU5D_t16* L_5 = (__this->___vector3s_28);
		float L_6 = (((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_5, 1, sizeof(Vector3_t14 )))->___x_1);
		float L_7 = (__this->___percentage_15);
		float L_8 = iTween_punch_m292(__this, L_6, L_7, /*hidden argument*/NULL);
		((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_4, 2, sizeof(Vector3_t14 )))->___x_1 = L_8;
		goto IL_00ae;
	}

IL_005f:
	{
		Vector3U5BU5D_t16* L_9 = (__this->___vector3s_28);
		float L_10 = (((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_9, 1, sizeof(Vector3_t14 )))->___x_1);
		if ((!(((float)L_10) < ((float)(0.0f)))))
		{
			goto IL_00ae;
		}
	}
	{
		Vector3U5BU5D_t16* L_11 = (__this->___vector3s_28);
		Vector3U5BU5D_t16* L_12 = (__this->___vector3s_28);
		float L_13 = (((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_12, 1, sizeof(Vector3_t14 )))->___x_1);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t46_il2cpp_TypeInfo_var);
		float L_14 = fabsf(L_13);
		float L_15 = (__this->___percentage_15);
		float L_16 = iTween_punch_m292(__this, L_14, L_15, /*hidden argument*/NULL);
		((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_11, 2, sizeof(Vector3_t14 )))->___x_1 = ((-L_16));
	}

IL_00ae:
	{
		Vector3U5BU5D_t16* L_17 = (__this->___vector3s_28);
		float L_18 = (((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_17, 1, sizeof(Vector3_t14 )))->___y_2);
		if ((!(((float)L_18) > ((float)(0.0f)))))
		{
			goto IL_00fc;
		}
	}
	{
		Vector3U5BU5D_t16* L_19 = (__this->___vector3s_28);
		Vector3U5BU5D_t16* L_20 = (__this->___vector3s_28);
		float L_21 = (((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_20, 1, sizeof(Vector3_t14 )))->___y_2);
		float L_22 = (__this->___percentage_15);
		float L_23 = iTween_punch_m292(__this, L_21, L_22, /*hidden argument*/NULL);
		((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_19, 2, sizeof(Vector3_t14 )))->___y_2 = L_23;
		goto IL_014b;
	}

IL_00fc:
	{
		Vector3U5BU5D_t16* L_24 = (__this->___vector3s_28);
		float L_25 = (((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_24, 1, sizeof(Vector3_t14 )))->___y_2);
		if ((!(((float)L_25) < ((float)(0.0f)))))
		{
			goto IL_014b;
		}
	}
	{
		Vector3U5BU5D_t16* L_26 = (__this->___vector3s_28);
		Vector3U5BU5D_t16* L_27 = (__this->___vector3s_28);
		float L_28 = (((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_27, 1, sizeof(Vector3_t14 )))->___y_2);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t46_il2cpp_TypeInfo_var);
		float L_29 = fabsf(L_28);
		float L_30 = (__this->___percentage_15);
		float L_31 = iTween_punch_m292(__this, L_29, L_30, /*hidden argument*/NULL);
		((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_26, 2, sizeof(Vector3_t14 )))->___y_2 = ((-L_31));
	}

IL_014b:
	{
		Vector3U5BU5D_t16* L_32 = (__this->___vector3s_28);
		float L_33 = (((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_32, 1, sizeof(Vector3_t14 )))->___z_3);
		if ((!(((float)L_33) > ((float)(0.0f)))))
		{
			goto IL_0199;
		}
	}
	{
		Vector3U5BU5D_t16* L_34 = (__this->___vector3s_28);
		Vector3U5BU5D_t16* L_35 = (__this->___vector3s_28);
		float L_36 = (((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_35, 1, sizeof(Vector3_t14 )))->___z_3);
		float L_37 = (__this->___percentage_15);
		float L_38 = iTween_punch_m292(__this, L_36, L_37, /*hidden argument*/NULL);
		((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_34, 2, sizeof(Vector3_t14 )))->___z_3 = L_38;
		goto IL_01e8;
	}

IL_0199:
	{
		Vector3U5BU5D_t16* L_39 = (__this->___vector3s_28);
		float L_40 = (((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_39, 1, sizeof(Vector3_t14 )))->___z_3);
		if ((!(((float)L_40) < ((float)(0.0f)))))
		{
			goto IL_01e8;
		}
	}
	{
		Vector3U5BU5D_t16* L_41 = (__this->___vector3s_28);
		Vector3U5BU5D_t16* L_42 = (__this->___vector3s_28);
		float L_43 = (((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_42, 1, sizeof(Vector3_t14 )))->___z_3);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t46_il2cpp_TypeInfo_var);
		float L_44 = fabsf(L_43);
		float L_45 = (__this->___percentage_15);
		float L_46 = iTween_punch_m292(__this, L_44, L_45, /*hidden argument*/NULL);
		((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_41, 2, sizeof(Vector3_t14 )))->___z_3 = ((-L_46));
	}

IL_01e8:
	{
		Transform_t32 * L_47 = (__this->___thisTransform_39);
		Vector3U5BU5D_t16* L_48 = (__this->___vector3s_28);
		Vector3U5BU5D_t16* L_49 = (__this->___vector3s_28);
		Vector3_t14  L_50 = Vector3_op_Subtraction_m333(NULL /*static, unused*/, (*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_48, 2, sizeof(Vector3_t14 )))), (*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_49, 3, sizeof(Vector3_t14 )))), /*hidden argument*/NULL);
		int32_t L_51 = (__this->___space_24);
		Transform_Rotate_m412(L_47, L_50, L_51, /*hidden argument*/NULL);
		Vector3U5BU5D_t16* L_52 = (__this->___vector3s_28);
		Vector3U5BU5D_t16* L_53 = (__this->___vector3s_28);
		(*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_52, 3, sizeof(Vector3_t14 )))) = (*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_53, 2, sizeof(Vector3_t14 ))));
		Transform_t32 * L_54 = (__this->___thisTransform_39);
		Vector3_t14  L_55 = Transform_get_eulerAngles_m362(L_54, /*hidden argument*/NULL);
		__this->___postUpdate_35 = L_55;
		bool L_56 = (__this->___physics_22);
		if (!L_56)
		{
			goto IL_0285;
		}
	}
	{
		Transform_t32 * L_57 = (__this->___thisTransform_39);
		Vector3_t14  L_58 = (__this->___preUpdate_34);
		Transform_set_eulerAngles_m368(L_57, L_58, /*hidden argument*/NULL);
		Rigidbody_t65 * L_59 = Component_GetComponent_TisRigidbody_t65_m406(__this, /*hidden argument*/Component_GetComponent_TisRigidbody_t65_m406_MethodInfo_var);
		Vector3_t14  L_60 = (__this->___postUpdate_35);
		Quaternion_t44  L_61 = Quaternion_Euler_m408(NULL /*static, unused*/, L_60, /*hidden argument*/NULL);
		Rigidbody_MoveRotation_m411(L_59, L_61, /*hidden argument*/NULL);
	}

IL_0285:
	{
		return;
	}
}
// System.Void iTween::ApplyPunchScaleTargets()
extern TypeInfo* Mathf_t46_il2cpp_TypeInfo_var;
extern "C" void iTween_ApplyPunchScaleTargets_m149 (iTween_t23 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t46_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		s_Il2CppMethodIntialized = true;
	}
	{
		Vector3U5BU5D_t16* L_0 = (__this->___vector3s_28);
		float L_1 = (((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_0, 1, sizeof(Vector3_t14 )))->___x_1);
		if ((!(((float)L_1) > ((float)(0.0f)))))
		{
			goto IL_004e;
		}
	}
	{
		Vector3U5BU5D_t16* L_2 = (__this->___vector3s_28);
		Vector3U5BU5D_t16* L_3 = (__this->___vector3s_28);
		float L_4 = (((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_3, 1, sizeof(Vector3_t14 )))->___x_1);
		float L_5 = (__this->___percentage_15);
		float L_6 = iTween_punch_m292(__this, L_4, L_5, /*hidden argument*/NULL);
		((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_2, 2, sizeof(Vector3_t14 )))->___x_1 = L_6;
		goto IL_009d;
	}

IL_004e:
	{
		Vector3U5BU5D_t16* L_7 = (__this->___vector3s_28);
		float L_8 = (((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_7, 1, sizeof(Vector3_t14 )))->___x_1);
		if ((!(((float)L_8) < ((float)(0.0f)))))
		{
			goto IL_009d;
		}
	}
	{
		Vector3U5BU5D_t16* L_9 = (__this->___vector3s_28);
		Vector3U5BU5D_t16* L_10 = (__this->___vector3s_28);
		float L_11 = (((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_10, 1, sizeof(Vector3_t14 )))->___x_1);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t46_il2cpp_TypeInfo_var);
		float L_12 = fabsf(L_11);
		float L_13 = (__this->___percentage_15);
		float L_14 = iTween_punch_m292(__this, L_12, L_13, /*hidden argument*/NULL);
		((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_9, 2, sizeof(Vector3_t14 )))->___x_1 = ((-L_14));
	}

IL_009d:
	{
		Vector3U5BU5D_t16* L_15 = (__this->___vector3s_28);
		float L_16 = (((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_15, 1, sizeof(Vector3_t14 )))->___y_2);
		if ((!(((float)L_16) > ((float)(0.0f)))))
		{
			goto IL_00eb;
		}
	}
	{
		Vector3U5BU5D_t16* L_17 = (__this->___vector3s_28);
		Vector3U5BU5D_t16* L_18 = (__this->___vector3s_28);
		float L_19 = (((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_18, 1, sizeof(Vector3_t14 )))->___y_2);
		float L_20 = (__this->___percentage_15);
		float L_21 = iTween_punch_m292(__this, L_19, L_20, /*hidden argument*/NULL);
		((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_17, 2, sizeof(Vector3_t14 )))->___y_2 = L_21;
		goto IL_013a;
	}

IL_00eb:
	{
		Vector3U5BU5D_t16* L_22 = (__this->___vector3s_28);
		float L_23 = (((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_22, 1, sizeof(Vector3_t14 )))->___y_2);
		if ((!(((float)L_23) < ((float)(0.0f)))))
		{
			goto IL_013a;
		}
	}
	{
		Vector3U5BU5D_t16* L_24 = (__this->___vector3s_28);
		Vector3U5BU5D_t16* L_25 = (__this->___vector3s_28);
		float L_26 = (((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_25, 1, sizeof(Vector3_t14 )))->___y_2);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t46_il2cpp_TypeInfo_var);
		float L_27 = fabsf(L_26);
		float L_28 = (__this->___percentage_15);
		float L_29 = iTween_punch_m292(__this, L_27, L_28, /*hidden argument*/NULL);
		((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_24, 2, sizeof(Vector3_t14 )))->___y_2 = ((-L_29));
	}

IL_013a:
	{
		Vector3U5BU5D_t16* L_30 = (__this->___vector3s_28);
		float L_31 = (((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_30, 1, sizeof(Vector3_t14 )))->___z_3);
		if ((!(((float)L_31) > ((float)(0.0f)))))
		{
			goto IL_0188;
		}
	}
	{
		Vector3U5BU5D_t16* L_32 = (__this->___vector3s_28);
		Vector3U5BU5D_t16* L_33 = (__this->___vector3s_28);
		float L_34 = (((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_33, 1, sizeof(Vector3_t14 )))->___z_3);
		float L_35 = (__this->___percentage_15);
		float L_36 = iTween_punch_m292(__this, L_34, L_35, /*hidden argument*/NULL);
		((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_32, 2, sizeof(Vector3_t14 )))->___z_3 = L_36;
		goto IL_01d7;
	}

IL_0188:
	{
		Vector3U5BU5D_t16* L_37 = (__this->___vector3s_28);
		float L_38 = (((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_37, 1, sizeof(Vector3_t14 )))->___z_3);
		if ((!(((float)L_38) < ((float)(0.0f)))))
		{
			goto IL_01d7;
		}
	}
	{
		Vector3U5BU5D_t16* L_39 = (__this->___vector3s_28);
		Vector3U5BU5D_t16* L_40 = (__this->___vector3s_28);
		float L_41 = (((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_40, 1, sizeof(Vector3_t14 )))->___z_3);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t46_il2cpp_TypeInfo_var);
		float L_42 = fabsf(L_41);
		float L_43 = (__this->___percentage_15);
		float L_44 = iTween_punch_m292(__this, L_42, L_43, /*hidden argument*/NULL);
		((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_39, 2, sizeof(Vector3_t14 )))->___z_3 = ((-L_44));
	}

IL_01d7:
	{
		Transform_t32 * L_45 = (__this->___thisTransform_39);
		Vector3U5BU5D_t16* L_46 = (__this->___vector3s_28);
		Vector3U5BU5D_t16* L_47 = (__this->___vector3s_28);
		Vector3_t14  L_48 = Vector3_op_Addition_m332(NULL /*static, unused*/, (*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_46, 0, sizeof(Vector3_t14 )))), (*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_47, 2, sizeof(Vector3_t14 )))), /*hidden argument*/NULL);
		Transform_set_localScale_m375(L_45, L_48, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IEnumerator iTween::TweenDelay()
extern TypeInfo* U3CTweenDelayU3Ec__Iterator0_t22_il2cpp_TypeInfo_var;
extern "C" Object_t * iTween_TweenDelay_m150 (iTween_t23 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CTweenDelayU3Ec__Iterator0_t22_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(46);
		s_Il2CppMethodIntialized = true;
	}
	U3CTweenDelayU3Ec__Iterator0_t22 * V_0 = {0};
	{
		U3CTweenDelayU3Ec__Iterator0_t22 * L_0 = (U3CTweenDelayU3Ec__Iterator0_t22 *)il2cpp_codegen_object_new (U3CTweenDelayU3Ec__Iterator0_t22_il2cpp_TypeInfo_var);
		U3CTweenDelayU3Ec__Iterator0__ctor_m24(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CTweenDelayU3Ec__Iterator0_t22 * L_1 = V_0;
		L_1->___U3CU3Ef__this_2 = __this;
		U3CTweenDelayU3Ec__Iterator0_t22 * L_2 = V_0;
		return L_2;
	}
}
// System.Void iTween::TweenStart()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral77;
extern Il2CppCodeGenString* _stringLiteral51;
extern Il2CppCodeGenString* _stringLiteral62;
extern Il2CppCodeGenString* _stringLiteral61;
extern Il2CppCodeGenString* _stringLiteral58;
extern Il2CppCodeGenString* _stringLiteral68;
extern Il2CppCodeGenString* _stringLiteral67;
extern Il2CppCodeGenString* _stringLiteral78;
extern Il2CppCodeGenString* _stringLiteral60;
extern "C" void iTween_TweenStart_m151 (iTween_t23 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(33);
		_stringLiteral77 = il2cpp_codegen_string_literal_from_index(77);
		_stringLiteral51 = il2cpp_codegen_string_literal_from_index(51);
		_stringLiteral62 = il2cpp_codegen_string_literal_from_index(62);
		_stringLiteral61 = il2cpp_codegen_string_literal_from_index(61);
		_stringLiteral58 = il2cpp_codegen_string_literal_from_index(58);
		_stringLiteral68 = il2cpp_codegen_string_literal_from_index(68);
		_stringLiteral67 = il2cpp_codegen_string_literal_from_index(67);
		_stringLiteral78 = il2cpp_codegen_string_literal_from_index(78);
		_stringLiteral60 = il2cpp_codegen_string_literal_from_index(60);
		s_Il2CppMethodIntialized = true;
	}
	{
		iTween_CallBack_m256(__this, _stringLiteral77, /*hidden argument*/NULL);
		bool L_0 = (__this->___loop_19);
		if (L_0)
		{
			goto IL_0022;
		}
	}
	{
		iTween_ConflictCheck_m258(__this, /*hidden argument*/NULL);
		iTween_GenerateTargets_m104(__this, /*hidden argument*/NULL);
	}

IL_0022:
	{
		String_t* L_1 = (__this->___type_5);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_2 = String_op_Equality_m414(NULL /*static, unused*/, L_1, _stringLiteral51, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_004d;
		}
	}
	{
		AudioSource_t27 * L_3 = (__this->___audioSource_27);
		AudioSource_t27 * L_4 = (__this->___audioSource_27);
		AudioClip_t38 * L_5 = AudioSource_get_clip_m390(L_4, /*hidden argument*/NULL);
		AudioSource_PlayOneShot_m415(L_3, L_5, /*hidden argument*/NULL);
	}

IL_004d:
	{
		String_t* L_6 = (__this->___type_5);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_7 = String_op_Equality_m414(NULL /*static, unused*/, L_6, _stringLiteral62, /*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_00e0;
		}
	}
	{
		String_t* L_8 = (__this->___type_5);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_9 = String_op_Equality_m414(NULL /*static, unused*/, L_8, _stringLiteral61, /*hidden argument*/NULL);
		if (L_9)
		{
			goto IL_00e0;
		}
	}
	{
		String_t* L_10 = (__this->___type_5);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_11 = String_op_Equality_m414(NULL /*static, unused*/, L_10, _stringLiteral58, /*hidden argument*/NULL);
		if (L_11)
		{
			goto IL_00e0;
		}
	}
	{
		String_t* L_12 = (__this->___type_5);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_13 = String_op_Equality_m414(NULL /*static, unused*/, L_12, _stringLiteral68, /*hidden argument*/NULL);
		if (L_13)
		{
			goto IL_00e0;
		}
	}
	{
		String_t* L_14 = (__this->___type_5);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_15 = String_op_Equality_m414(NULL /*static, unused*/, L_14, _stringLiteral67, /*hidden argument*/NULL);
		if (L_15)
		{
			goto IL_00e0;
		}
	}
	{
		String_t* L_16 = (__this->___type_5);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_17 = String_op_Equality_m414(NULL /*static, unused*/, L_16, _stringLiteral78, /*hidden argument*/NULL);
		if (L_17)
		{
			goto IL_00e0;
		}
	}
	{
		String_t* L_18 = (__this->___type_5);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_19 = String_op_Equality_m414(NULL /*static, unused*/, L_18, _stringLiteral60, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_00e6;
		}
	}

IL_00e0:
	{
		iTween_EnableKinematic_m259(__this, /*hidden argument*/NULL);
	}

IL_00e6:
	{
		__this->___isRunning_11 = 1;
		return;
	}
}
// System.Collections.IEnumerator iTween::TweenRestart()
extern TypeInfo* U3CTweenRestartU3Ec__Iterator1_t24_il2cpp_TypeInfo_var;
extern "C" Object_t * iTween_TweenRestart_m152 (iTween_t23 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CTweenRestartU3Ec__Iterator1_t24_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(47);
		s_Il2CppMethodIntialized = true;
	}
	U3CTweenRestartU3Ec__Iterator1_t24 * V_0 = {0};
	{
		U3CTweenRestartU3Ec__Iterator1_t24 * L_0 = (U3CTweenRestartU3Ec__Iterator1_t24 *)il2cpp_codegen_object_new (U3CTweenRestartU3Ec__Iterator1_t24_il2cpp_TypeInfo_var);
		U3CTweenRestartU3Ec__Iterator1__ctor_m30(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CTweenRestartU3Ec__Iterator1_t24 * L_1 = V_0;
		L_1->___U3CU3Ef__this_2 = __this;
		U3CTweenRestartU3Ec__Iterator1_t24 * L_2 = V_0;
		return L_2;
	}
}
// System.Void iTween::TweenUpdate()
extern Il2CppCodeGenString* _stringLiteral24;
extern "C" void iTween_TweenUpdate_m153 (iTween_t23 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral24 = il2cpp_codegen_string_literal_from_index(24);
		s_Il2CppMethodIntialized = true;
	}
	{
		ApplyTween_t21 * L_0 = (__this->___apply_26);
		ApplyTween_Invoke_m21(L_0, /*hidden argument*/NULL);
		iTween_CallBack_m256(__this, _stringLiteral24, /*hidden argument*/NULL);
		iTween_UpdatePercentage_m255(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void iTween::TweenComplete()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral29;
extern Il2CppCodeGenString* _stringLiteral24;
extern Il2CppCodeGenString* _stringLiteral79;
extern "C" void iTween_TweenComplete_m154 (iTween_t23 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(33);
		_stringLiteral29 = il2cpp_codegen_string_literal_from_index(29);
		_stringLiteral24 = il2cpp_codegen_string_literal_from_index(24);
		_stringLiteral79 = il2cpp_codegen_string_literal_from_index(79);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___isRunning_11 = 0;
		float L_0 = (__this->___percentage_15);
		if ((!(((float)L_0) > ((float)(0.5f)))))
		{
			goto IL_0027;
		}
	}
	{
		__this->___percentage_15 = (1.0f);
		goto IL_0032;
	}

IL_0027:
	{
		__this->___percentage_15 = (0.0f);
	}

IL_0032:
	{
		ApplyTween_t21 * L_1 = (__this->___apply_26);
		ApplyTween_Invoke_m21(L_1, /*hidden argument*/NULL);
		String_t* L_2 = (__this->___type_5);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_3 = String_op_Equality_m414(NULL /*static, unused*/, L_2, _stringLiteral29, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_005d;
		}
	}
	{
		iTween_CallBack_m256(__this, _stringLiteral24, /*hidden argument*/NULL);
	}

IL_005d:
	{
		int32_t L_4 = (__this->___loopType_10);
		if (L_4)
		{
			goto IL_0073;
		}
	}
	{
		iTween_Dispose_m257(__this, /*hidden argument*/NULL);
		goto IL_0079;
	}

IL_0073:
	{
		iTween_TweenLoop_m155(__this, /*hidden argument*/NULL);
	}

IL_0079:
	{
		iTween_CallBack_m256(__this, _stringLiteral79, /*hidden argument*/NULL);
		return;
	}
}
// System.Void iTween::TweenLoop()
extern Il2CppCodeGenString* _stringLiteral80;
extern "C" void iTween_TweenLoop_m155 (iTween_t23 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral80 = il2cpp_codegen_string_literal_from_index(80);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = {0};
	{
		iTween_DisableKinematic_m260(__this, /*hidden argument*/NULL);
		int32_t L_0 = (__this->___loopType_10);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0052;
		}
	}
	{
		goto IL_007d;
	}

IL_0020:
	{
		__this->___percentage_15 = (0.0f);
		__this->___runningTime_14 = (0.0f);
		ApplyTween_t21 * L_3 = (__this->___apply_26);
		ApplyTween_Invoke_m21(L_3, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m338(__this, _stringLiteral80, /*hidden argument*/NULL);
		goto IL_007d;
	}

IL_0052:
	{
		bool L_4 = (__this->___reverse_20);
		__this->___reverse_20 = ((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		__this->___runningTime_14 = (0.0f);
		MonoBehaviour_StartCoroutine_m338(__this, _stringLiteral80, /*hidden argument*/NULL);
		goto IL_007d;
	}

IL_007d:
	{
		return;
	}
}
// UnityEngine.Rect iTween::RectUpdate(UnityEngine.Rect,UnityEngine.Rect,System.Single)
extern TypeInfo* iTween_t23_il2cpp_TypeInfo_var;
extern "C" Rect_t37  iTween_RectUpdate_m156 (Object_t * __this /* static, unused */, Rect_t37  ___currentValue, Rect_t37  ___targetValue, float ___speed, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		iTween_t23_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		s_Il2CppMethodIntialized = true;
	}
	Rect_t37  V_0 = {0};
	{
		float L_0 = Rect_get_x_m396((&___currentValue), /*hidden argument*/NULL);
		float L_1 = Rect_get_x_m396((&___targetValue), /*hidden argument*/NULL);
		float L_2 = ___speed;
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		float L_3 = iTween_FloatUpdate_m159(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/NULL);
		float L_4 = Rect_get_y_m398((&___currentValue), /*hidden argument*/NULL);
		float L_5 = Rect_get_y_m398((&___targetValue), /*hidden argument*/NULL);
		float L_6 = ___speed;
		float L_7 = iTween_FloatUpdate_m159(NULL /*static, unused*/, L_4, L_5, L_6, /*hidden argument*/NULL);
		float L_8 = Rect_get_width_m400((&___currentValue), /*hidden argument*/NULL);
		float L_9 = Rect_get_width_m400((&___targetValue), /*hidden argument*/NULL);
		float L_10 = ___speed;
		float L_11 = iTween_FloatUpdate_m159(NULL /*static, unused*/, L_8, L_9, L_10, /*hidden argument*/NULL);
		float L_12 = Rect_get_height_m402((&___currentValue), /*hidden argument*/NULL);
		float L_13 = Rect_get_height_m402((&___targetValue), /*hidden argument*/NULL);
		float L_14 = ___speed;
		float L_15 = iTween_FloatUpdate_m159(NULL /*static, unused*/, L_12, L_13, L_14, /*hidden argument*/NULL);
		Rect__ctor_m416((&V_0), L_3, L_7, L_11, L_15, /*hidden argument*/NULL);
		Rect_t37  L_16 = V_0;
		return L_16;
	}
}
// UnityEngine.Vector3 iTween::Vector3Update(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern "C" Vector3_t14  iTween_Vector3Update_m157 (Object_t * __this /* static, unused */, Vector3_t14  ___currentValue, Vector3_t14  ___targetValue, float ___speed, const MethodInfo* method)
{
	Vector3_t14  V_0 = {0};
	{
		Vector3_t14  L_0 = ___targetValue;
		Vector3_t14  L_1 = ___currentValue;
		Vector3_t14  L_2 = Vector3_op_Subtraction_m333(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		Vector3_t14  L_3 = ___currentValue;
		Vector3_t14  L_4 = V_0;
		float L_5 = ___speed;
		Vector3_t14  L_6 = Vector3_op_Multiply_m334(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/NULL);
		float L_7 = Time_get_deltaTime_m301(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t14  L_8 = Vector3_op_Multiply_m334(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/NULL);
		Vector3_t14  L_9 = Vector3_op_Addition_m332(NULL /*static, unused*/, L_3, L_8, /*hidden argument*/NULL);
		___currentValue = L_9;
		Vector3_t14  L_10 = ___currentValue;
		return L_10;
	}
}
// UnityEngine.Vector2 iTween::Vector2Update(UnityEngine.Vector2,UnityEngine.Vector2,System.Single)
extern "C" Vector2_t36  iTween_Vector2Update_m158 (Object_t * __this /* static, unused */, Vector2_t36  ___currentValue, Vector2_t36  ___targetValue, float ___speed, const MethodInfo* method)
{
	Vector2_t36  V_0 = {0};
	{
		Vector2_t36  L_0 = ___targetValue;
		Vector2_t36  L_1 = ___currentValue;
		Vector2_t36  L_2 = Vector2_op_Subtraction_m417(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		Vector2_t36  L_3 = ___currentValue;
		Vector2_t36  L_4 = V_0;
		float L_5 = ___speed;
		Vector2_t36  L_6 = Vector2_op_Multiply_m418(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/NULL);
		float L_7 = Time_get_deltaTime_m301(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector2_t36  L_8 = Vector2_op_Multiply_m418(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/NULL);
		Vector2_t36  L_9 = Vector2_op_Addition_m419(NULL /*static, unused*/, L_3, L_8, /*hidden argument*/NULL);
		___currentValue = L_9;
		Vector2_t36  L_10 = ___currentValue;
		return L_10;
	}
}
// System.Single iTween::FloatUpdate(System.Single,System.Single,System.Single)
extern "C" float iTween_FloatUpdate_m159 (Object_t * __this /* static, unused */, float ___currentValue, float ___targetValue, float ___speed, const MethodInfo* method)
{
	float V_0 = 0.0f;
	{
		float L_0 = ___targetValue;
		float L_1 = ___currentValue;
		V_0 = ((float)((float)L_0-(float)L_1));
		float L_2 = ___currentValue;
		float L_3 = V_0;
		float L_4 = ___speed;
		float L_5 = Time_get_deltaTime_m301(NULL /*static, unused*/, /*hidden argument*/NULL);
		___currentValue = ((float)((float)L_2+(float)((float)((float)((float)((float)L_3*(float)L_4))*(float)L_5))));
		float L_6 = ___currentValue;
		return L_6;
	}
}
// System.Void iTween::FadeUpdate(UnityEngine.GameObject,System.Collections.Hashtable)
extern TypeInfo* iTween_t23_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral44;
extern Il2CppCodeGenString* _stringLiteral38;
extern "C" void iTween_FadeUpdate_m160 (Object_t * __this /* static, unused */, GameObject_t34 * ___target, Hashtable_t26 * ___args, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		iTween_t23_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		_stringLiteral44 = il2cpp_codegen_string_literal_from_index(44);
		_stringLiteral38 = il2cpp_codegen_string_literal_from_index(38);
		s_Il2CppMethodIntialized = true;
	}
	{
		Hashtable_t26 * L_0 = ___args;
		Hashtable_t26 * L_1 = ___args;
		Object_t * L_2 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_1, _stringLiteral38);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(22 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_0, _stringLiteral44, L_2);
		GameObject_t34 * L_3 = ___target;
		Hashtable_t26 * L_4 = ___args;
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		iTween_ColorUpdate_m162(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void iTween::FadeUpdate(UnityEngine.GameObject,System.Single,System.Single)
extern TypeInfo* ObjectU5BU5D_t41_il2cpp_TypeInfo_var;
extern TypeInfo* Single_t51_il2cpp_TypeInfo_var;
extern TypeInfo* iTween_t23_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral38;
extern Il2CppCodeGenString* _stringLiteral22;
extern "C" void iTween_FadeUpdate_m161 (Object_t * __this /* static, unused */, GameObject_t34 * ___target, float ___alpha, float ___time, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t41_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5);
		Single_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		iTween_t23_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		_stringLiteral38 = il2cpp_codegen_string_literal_from_index(38);
		_stringLiteral22 = il2cpp_codegen_string_literal_from_index(22);
		s_Il2CppMethodIntialized = true;
	}
	{
		GameObject_t34 * L_0 = ___target;
		ObjectU5BU5D_t41* L_1 = ((ObjectU5BU5D_t41*)SZArrayNew(ObjectU5BU5D_t41_il2cpp_TypeInfo_var, 4));
		ArrayElementTypeCheck (L_1, _stringLiteral38);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_1, 0, sizeof(Object_t *))) = (Object_t *)_stringLiteral38;
		ObjectU5BU5D_t41* L_2 = L_1;
		float L_3 = ___alpha;
		float L_4 = L_3;
		Object_t * L_5 = Box(Single_t51_il2cpp_TypeInfo_var, &L_4);
		ArrayElementTypeCheck (L_2, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1, sizeof(Object_t *))) = (Object_t *)L_5;
		ObjectU5BU5D_t41* L_6 = L_2;
		ArrayElementTypeCheck (L_6, _stringLiteral22);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 2, sizeof(Object_t *))) = (Object_t *)_stringLiteral22;
		ObjectU5BU5D_t41* L_7 = L_6;
		float L_8 = ___time;
		float L_9 = L_8;
		Object_t * L_10 = Box(Single_t51_il2cpp_TypeInfo_var, &L_9);
		ArrayElementTypeCheck (L_7, L_10);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_7, 3, sizeof(Object_t *))) = (Object_t *)L_10;
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		Hashtable_t26 * L_11 = iTween_Hash_m238(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		iTween_FadeUpdate_m160(NULL /*static, unused*/, L_0, L_11, /*hidden argument*/NULL);
		return;
	}
}
// System.Void iTween::ColorUpdate(UnityEngine.GameObject,System.Collections.Hashtable)
extern TypeInfo* iTween_t23_il2cpp_TypeInfo_var;
extern TypeInfo* ColorU5BU5D_t66_il2cpp_TypeInfo_var;
extern TypeInfo* Boolean_t56_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t42_il2cpp_TypeInfo_var;
extern TypeInfo* Transform_t32_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t57_il2cpp_TypeInfo_var;
extern TypeInfo* Single_t51_il2cpp_TypeInfo_var;
extern TypeInfo* Defaults_t12_il2cpp_TypeInfo_var;
extern TypeInfo* Color_t13_il2cpp_TypeInfo_var;
extern TypeInfo* Mathf_t46_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisGUITexture_t58_m345_MethodInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisGUIText_t59_m347_MethodInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisRenderer_t61_m350_MethodInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisLight_t62_m352_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral39;
extern Il2CppCodeGenString* _stringLiteral22;
extern Il2CppCodeGenString* _stringLiteral35;
extern Il2CppCodeGenString* _stringLiteral41;
extern Il2CppCodeGenString* _stringLiteral42;
extern Il2CppCodeGenString* _stringLiteral43;
extern Il2CppCodeGenString* _stringLiteral44;
extern "C" void iTween_ColorUpdate_m162 (Object_t * __this /* static, unused */, GameObject_t34 * ___target, Hashtable_t26 * ___args, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		iTween_t23_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		ColorU5BU5D_t66_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(48);
		Boolean_t56_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(28);
		IEnumerator_t42_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(29);
		Transform_t32_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(30);
		IDisposable_t57_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(31);
		Single_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		Defaults_t12_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11);
		Color_t13_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(21);
		Mathf_t46_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		GameObject_GetComponent_TisGUITexture_t58_m345_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483651);
		GameObject_GetComponent_TisGUIText_t59_m347_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483652);
		GameObject_GetComponent_TisRenderer_t61_m350_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483653);
		GameObject_GetComponent_TisLight_t62_m352_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483654);
		_stringLiteral39 = il2cpp_codegen_string_literal_from_index(39);
		_stringLiteral22 = il2cpp_codegen_string_literal_from_index(22);
		_stringLiteral35 = il2cpp_codegen_string_literal_from_index(35);
		_stringLiteral41 = il2cpp_codegen_string_literal_from_index(41);
		_stringLiteral42 = il2cpp_codegen_string_literal_from_index(42);
		_stringLiteral43 = il2cpp_codegen_string_literal_from_index(43);
		_stringLiteral44 = il2cpp_codegen_string_literal_from_index(44);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	ColorU5BU5D_t66* V_1 = {0};
	Transform_t32 * V_2 = {0};
	Object_t * V_3 = {0};
	Object_t * V_4 = {0};
	Color_t13  V_5 = {0};
	Exception_t55 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t55 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Hashtable_t26 * L_0 = ___args;
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		iTween_CleanArgs_m251(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_1 = ((ColorU5BU5D_t66*)SZArrayNew(ColorU5BU5D_t66_il2cpp_TypeInfo_var, 4));
		Hashtable_t26 * L_1 = ___args;
		bool L_2 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(26 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_1, _stringLiteral39);
		if (!L_2)
		{
			goto IL_0033;
		}
	}
	{
		Hashtable_t26 * L_3 = ___args;
		Object_t * L_4 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_3, _stringLiteral39);
		if (!((*(bool*)((bool*)UnBox (L_4, Boolean_t56_il2cpp_TypeInfo_var)))))
		{
			goto IL_0081;
		}
	}

IL_0033:
	{
		GameObject_t34 * L_5 = ___target;
		Transform_t32 * L_6 = GameObject_get_transform_m344(L_5, /*hidden argument*/NULL);
		Object_t * L_7 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(4 /* System.Collections.IEnumerator UnityEngine.Transform::GetEnumerator() */, L_6);
		V_3 = L_7;
	}

IL_003f:
	try
	{ // begin try (depth: 1)
		{
			goto IL_005c;
		}

IL_0044:
		{
			Object_t * L_8 = V_3;
			Object_t * L_9 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t42_il2cpp_TypeInfo_var, L_8);
			V_2 = ((Transform_t32 *)CastclassClass(L_9, Transform_t32_il2cpp_TypeInfo_var));
			Transform_t32 * L_10 = V_2;
			GameObject_t34 * L_11 = Component_get_gameObject_m319(L_10, /*hidden argument*/NULL);
			Hashtable_t26 * L_12 = ___args;
			IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
			iTween_ColorUpdate_m162(NULL /*static, unused*/, L_11, L_12, /*hidden argument*/NULL);
		}

IL_005c:
		{
			Object_t * L_13 = V_3;
			bool L_14 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t42_il2cpp_TypeInfo_var, L_13);
			if (L_14)
			{
				goto IL_0044;
			}
		}

IL_0067:
		{
			IL2CPP_LEAVE(0x81, FINALLY_006c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t55 *)e.ex;
		goto FINALLY_006c;
	}

FINALLY_006c:
	{ // begin finally (depth: 1)
		{
			Object_t * L_15 = V_3;
			V_4 = ((Object_t *)IsInst(L_15, IDisposable_t57_il2cpp_TypeInfo_var));
			Object_t * L_16 = V_4;
			if (L_16)
			{
				goto IL_0079;
			}
		}

IL_0078:
		{
			IL2CPP_END_FINALLY(108)
		}

IL_0079:
		{
			Object_t * L_17 = V_4;
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t57_il2cpp_TypeInfo_var, L_17);
			IL2CPP_END_FINALLY(108)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(108)
	{
		IL2CPP_JUMP_TBL(0x81, IL_0081)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t55 *)
	}

IL_0081:
	{
		Hashtable_t26 * L_18 = ___args;
		bool L_19 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(26 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_18, _stringLiteral22);
		if (!L_19)
		{
			goto IL_00af;
		}
	}
	{
		Hashtable_t26 * L_20 = ___args;
		Object_t * L_21 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_20, _stringLiteral22);
		V_0 = ((*(float*)((float*)UnBox (L_21, Single_t51_il2cpp_TypeInfo_var))));
		float L_22 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Defaults_t12_il2cpp_TypeInfo_var);
		float L_23 = ((Defaults_t12_StaticFields*)Defaults_t12_il2cpp_TypeInfo_var->static_fields)->___updateTimePercentage_10;
		V_0 = ((float)((float)L_22*(float)L_23));
		goto IL_00b5;
	}

IL_00af:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Defaults_t12_il2cpp_TypeInfo_var);
		float L_24 = ((Defaults_t12_StaticFields*)Defaults_t12_il2cpp_TypeInfo_var->static_fields)->___updateTime_11;
		V_0 = L_24;
	}

IL_00b5:
	{
		GameObject_t34 * L_25 = ___target;
		GUITexture_t58 * L_26 = GameObject_GetComponent_TisGUITexture_t58_m345(L_25, /*hidden argument*/GameObject_GetComponent_TisGUITexture_t58_m345_MethodInfo_var);
		bool L_27 = Object_op_Implicit_m316(NULL /*static, unused*/, L_26, /*hidden argument*/NULL);
		if (!L_27)
		{
			goto IL_00f2;
		}
	}
	{
		ColorU5BU5D_t66* L_28 = V_1;
		ColorU5BU5D_t66* L_29 = V_1;
		GameObject_t34 * L_30 = ___target;
		GUITexture_t58 * L_31 = GameObject_GetComponent_TisGUITexture_t58_m345(L_30, /*hidden argument*/GameObject_GetComponent_TisGUITexture_t58_m345_MethodInfo_var);
		Color_t13  L_32 = GUITexture_get_color_m346(L_31, /*hidden argument*/NULL);
		Color_t13  L_33 = L_32;
		V_5 = L_33;
		(*(Color_t13 *)((Color_t13 *)(Color_t13 *)SZArrayLdElema(L_29, 1, sizeof(Color_t13 )))) = L_33;
		Color_t13  L_34 = V_5;
		(*(Color_t13 *)((Color_t13 *)(Color_t13 *)SZArrayLdElema(L_28, 0, sizeof(Color_t13 )))) = L_34;
		goto IL_01ae;
	}

IL_00f2:
	{
		GameObject_t34 * L_35 = ___target;
		GUIText_t59 * L_36 = GameObject_GetComponent_TisGUIText_t59_m347(L_35, /*hidden argument*/GameObject_GetComponent_TisGUIText_t59_m347_MethodInfo_var);
		bool L_37 = Object_op_Implicit_m316(NULL /*static, unused*/, L_36, /*hidden argument*/NULL);
		if (!L_37)
		{
			goto IL_0134;
		}
	}
	{
		ColorU5BU5D_t66* L_38 = V_1;
		ColorU5BU5D_t66* L_39 = V_1;
		GameObject_t34 * L_40 = ___target;
		GUIText_t59 * L_41 = GameObject_GetComponent_TisGUIText_t59_m347(L_40, /*hidden argument*/GameObject_GetComponent_TisGUIText_t59_m347_MethodInfo_var);
		Material_t60 * L_42 = GUIText_get_material_m348(L_41, /*hidden argument*/NULL);
		Color_t13  L_43 = Material_get_color_m349(L_42, /*hidden argument*/NULL);
		Color_t13  L_44 = L_43;
		V_5 = L_44;
		(*(Color_t13 *)((Color_t13 *)(Color_t13 *)SZArrayLdElema(L_39, 1, sizeof(Color_t13 )))) = L_44;
		Color_t13  L_45 = V_5;
		(*(Color_t13 *)((Color_t13 *)(Color_t13 *)SZArrayLdElema(L_38, 0, sizeof(Color_t13 )))) = L_45;
		goto IL_01ae;
	}

IL_0134:
	{
		GameObject_t34 * L_46 = ___target;
		Renderer_t61 * L_47 = GameObject_GetComponent_TisRenderer_t61_m350(L_46, /*hidden argument*/GameObject_GetComponent_TisRenderer_t61_m350_MethodInfo_var);
		bool L_48 = Object_op_Implicit_m316(NULL /*static, unused*/, L_47, /*hidden argument*/NULL);
		if (!L_48)
		{
			goto IL_0176;
		}
	}
	{
		ColorU5BU5D_t66* L_49 = V_1;
		ColorU5BU5D_t66* L_50 = V_1;
		GameObject_t34 * L_51 = ___target;
		Renderer_t61 * L_52 = GameObject_GetComponent_TisRenderer_t61_m350(L_51, /*hidden argument*/GameObject_GetComponent_TisRenderer_t61_m350_MethodInfo_var);
		Material_t60 * L_53 = Renderer_get_material_m351(L_52, /*hidden argument*/NULL);
		Color_t13  L_54 = Material_get_color_m349(L_53, /*hidden argument*/NULL);
		Color_t13  L_55 = L_54;
		V_5 = L_55;
		(*(Color_t13 *)((Color_t13 *)(Color_t13 *)SZArrayLdElema(L_50, 1, sizeof(Color_t13 )))) = L_55;
		Color_t13  L_56 = V_5;
		(*(Color_t13 *)((Color_t13 *)(Color_t13 *)SZArrayLdElema(L_49, 0, sizeof(Color_t13 )))) = L_56;
		goto IL_01ae;
	}

IL_0176:
	{
		GameObject_t34 * L_57 = ___target;
		Light_t62 * L_58 = GameObject_GetComponent_TisLight_t62_m352(L_57, /*hidden argument*/GameObject_GetComponent_TisLight_t62_m352_MethodInfo_var);
		bool L_59 = Object_op_Implicit_m316(NULL /*static, unused*/, L_58, /*hidden argument*/NULL);
		if (!L_59)
		{
			goto IL_01ae;
		}
	}
	{
		ColorU5BU5D_t66* L_60 = V_1;
		ColorU5BU5D_t66* L_61 = V_1;
		GameObject_t34 * L_62 = ___target;
		Light_t62 * L_63 = GameObject_GetComponent_TisLight_t62_m352(L_62, /*hidden argument*/GameObject_GetComponent_TisLight_t62_m352_MethodInfo_var);
		Color_t13  L_64 = Light_get_color_m353(L_63, /*hidden argument*/NULL);
		Color_t13  L_65 = L_64;
		V_5 = L_65;
		(*(Color_t13 *)((Color_t13 *)(Color_t13 *)SZArrayLdElema(L_61, 1, sizeof(Color_t13 )))) = L_65;
		Color_t13  L_66 = V_5;
		(*(Color_t13 *)((Color_t13 *)(Color_t13 *)SZArrayLdElema(L_60, 0, sizeof(Color_t13 )))) = L_66;
	}

IL_01ae:
	{
		Hashtable_t26 * L_67 = ___args;
		bool L_68 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(26 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_67, _stringLiteral35);
		if (!L_68)
		{
			goto IL_01df;
		}
	}
	{
		ColorU5BU5D_t66* L_69 = V_1;
		Hashtable_t26 * L_70 = ___args;
		Object_t * L_71 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_70, _stringLiteral35);
		(*(Color_t13 *)((Color_t13 *)(Color_t13 *)SZArrayLdElema(L_69, 1, sizeof(Color_t13 )))) = ((*(Color_t13 *)((Color_t13 *)UnBox (L_71, Color_t13_il2cpp_TypeInfo_var))));
		goto IL_028f;
	}

IL_01df:
	{
		Hashtable_t26 * L_72 = ___args;
		bool L_73 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(26 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_72, _stringLiteral41);
		if (!L_73)
		{
			goto IL_020b;
		}
	}
	{
		ColorU5BU5D_t66* L_74 = V_1;
		Hashtable_t26 * L_75 = ___args;
		Object_t * L_76 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_75, _stringLiteral41);
		((Color_t13 *)(Color_t13 *)SZArrayLdElema(L_74, 1, sizeof(Color_t13 )))->___r_0 = ((*(float*)((float*)UnBox (L_76, Single_t51_il2cpp_TypeInfo_var))));
	}

IL_020b:
	{
		Hashtable_t26 * L_77 = ___args;
		bool L_78 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(26 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_77, _stringLiteral42);
		if (!L_78)
		{
			goto IL_0237;
		}
	}
	{
		ColorU5BU5D_t66* L_79 = V_1;
		Hashtable_t26 * L_80 = ___args;
		Object_t * L_81 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_80, _stringLiteral42);
		((Color_t13 *)(Color_t13 *)SZArrayLdElema(L_79, 1, sizeof(Color_t13 )))->___g_1 = ((*(float*)((float*)UnBox (L_81, Single_t51_il2cpp_TypeInfo_var))));
	}

IL_0237:
	{
		Hashtable_t26 * L_82 = ___args;
		bool L_83 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(26 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_82, _stringLiteral43);
		if (!L_83)
		{
			goto IL_0263;
		}
	}
	{
		ColorU5BU5D_t66* L_84 = V_1;
		Hashtable_t26 * L_85 = ___args;
		Object_t * L_86 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_85, _stringLiteral43);
		((Color_t13 *)(Color_t13 *)SZArrayLdElema(L_84, 1, sizeof(Color_t13 )))->___b_2 = ((*(float*)((float*)UnBox (L_86, Single_t51_il2cpp_TypeInfo_var))));
	}

IL_0263:
	{
		Hashtable_t26 * L_87 = ___args;
		bool L_88 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(26 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_87, _stringLiteral44);
		if (!L_88)
		{
			goto IL_028f;
		}
	}
	{
		ColorU5BU5D_t66* L_89 = V_1;
		Hashtable_t26 * L_90 = ___args;
		Object_t * L_91 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_90, _stringLiteral44);
		((Color_t13 *)(Color_t13 *)SZArrayLdElema(L_89, 1, sizeof(Color_t13 )))->___a_3 = ((*(float*)((float*)UnBox (L_91, Single_t51_il2cpp_TypeInfo_var))));
	}

IL_028f:
	{
		ColorU5BU5D_t66* L_92 = V_1;
		ColorU5BU5D_t66* L_93 = V_1;
		float L_94 = (((Color_t13 *)(Color_t13 *)SZArrayLdElema(L_93, 0, sizeof(Color_t13 )))->___r_0);
		ColorU5BU5D_t66* L_95 = V_1;
		float L_96 = (((Color_t13 *)(Color_t13 *)SZArrayLdElema(L_95, 1, sizeof(Color_t13 )))->___r_0);
		ColorU5BU5D_t66* L_97 = V_1;
		float* L_98 = &(((Color_t13 *)(Color_t13 *)SZArrayLdElema(L_97, 2, sizeof(Color_t13 )))->___r_0);
		float L_99 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t46_il2cpp_TypeInfo_var);
		float L_100 = Mathf_SmoothDamp_m420(NULL /*static, unused*/, L_94, L_96, L_98, L_99, /*hidden argument*/NULL);
		((Color_t13 *)(Color_t13 *)SZArrayLdElema(L_92, 3, sizeof(Color_t13 )))->___r_0 = L_100;
		ColorU5BU5D_t66* L_101 = V_1;
		ColorU5BU5D_t66* L_102 = V_1;
		float L_103 = (((Color_t13 *)(Color_t13 *)SZArrayLdElema(L_102, 0, sizeof(Color_t13 )))->___g_1);
		ColorU5BU5D_t66* L_104 = V_1;
		float L_105 = (((Color_t13 *)(Color_t13 *)SZArrayLdElema(L_104, 1, sizeof(Color_t13 )))->___g_1);
		ColorU5BU5D_t66* L_106 = V_1;
		float* L_107 = &(((Color_t13 *)(Color_t13 *)SZArrayLdElema(L_106, 2, sizeof(Color_t13 )))->___g_1);
		float L_108 = V_0;
		float L_109 = Mathf_SmoothDamp_m420(NULL /*static, unused*/, L_103, L_105, L_107, L_108, /*hidden argument*/NULL);
		((Color_t13 *)(Color_t13 *)SZArrayLdElema(L_101, 3, sizeof(Color_t13 )))->___g_1 = L_109;
		ColorU5BU5D_t66* L_110 = V_1;
		ColorU5BU5D_t66* L_111 = V_1;
		float L_112 = (((Color_t13 *)(Color_t13 *)SZArrayLdElema(L_111, 0, sizeof(Color_t13 )))->___b_2);
		ColorU5BU5D_t66* L_113 = V_1;
		float L_114 = (((Color_t13 *)(Color_t13 *)SZArrayLdElema(L_113, 1, sizeof(Color_t13 )))->___b_2);
		ColorU5BU5D_t66* L_115 = V_1;
		float* L_116 = &(((Color_t13 *)(Color_t13 *)SZArrayLdElema(L_115, 2, sizeof(Color_t13 )))->___b_2);
		float L_117 = V_0;
		float L_118 = Mathf_SmoothDamp_m420(NULL /*static, unused*/, L_112, L_114, L_116, L_117, /*hidden argument*/NULL);
		((Color_t13 *)(Color_t13 *)SZArrayLdElema(L_110, 3, sizeof(Color_t13 )))->___b_2 = L_118;
		ColorU5BU5D_t66* L_119 = V_1;
		ColorU5BU5D_t66* L_120 = V_1;
		float L_121 = (((Color_t13 *)(Color_t13 *)SZArrayLdElema(L_120, 0, sizeof(Color_t13 )))->___a_3);
		ColorU5BU5D_t66* L_122 = V_1;
		float L_123 = (((Color_t13 *)(Color_t13 *)SZArrayLdElema(L_122, 1, sizeof(Color_t13 )))->___a_3);
		ColorU5BU5D_t66* L_124 = V_1;
		float* L_125 = &(((Color_t13 *)(Color_t13 *)SZArrayLdElema(L_124, 2, sizeof(Color_t13 )))->___a_3);
		float L_126 = V_0;
		float L_127 = Mathf_SmoothDamp_m420(NULL /*static, unused*/, L_121, L_123, L_125, L_126, /*hidden argument*/NULL);
		((Color_t13 *)(Color_t13 *)SZArrayLdElema(L_119, 3, sizeof(Color_t13 )))->___a_3 = L_127;
		GameObject_t34 * L_128 = ___target;
		GUITexture_t58 * L_129 = GameObject_GetComponent_TisGUITexture_t58_m345(L_128, /*hidden argument*/GameObject_GetComponent_TisGUITexture_t58_m345_MethodInfo_var);
		bool L_130 = Object_op_Implicit_m316(NULL /*static, unused*/, L_129, /*hidden argument*/NULL);
		if (!L_130)
		{
			goto IL_0393;
		}
	}
	{
		GameObject_t34 * L_131 = ___target;
		GUITexture_t58 * L_132 = GameObject_GetComponent_TisGUITexture_t58_m345(L_131, /*hidden argument*/GameObject_GetComponent_TisGUITexture_t58_m345_MethodInfo_var);
		ColorU5BU5D_t66* L_133 = V_1;
		GUITexture_set_color_m354(L_132, (*(Color_t13 *)((Color_t13 *)(Color_t13 *)SZArrayLdElema(L_133, 3, sizeof(Color_t13 )))), /*hidden argument*/NULL);
		goto IL_041c;
	}

IL_0393:
	{
		GameObject_t34 * L_134 = ___target;
		GUIText_t59 * L_135 = GameObject_GetComponent_TisGUIText_t59_m347(L_134, /*hidden argument*/GameObject_GetComponent_TisGUIText_t59_m347_MethodInfo_var);
		bool L_136 = Object_op_Implicit_m316(NULL /*static, unused*/, L_135, /*hidden argument*/NULL);
		if (!L_136)
		{
			goto IL_03c4;
		}
	}
	{
		GameObject_t34 * L_137 = ___target;
		GUIText_t59 * L_138 = GameObject_GetComponent_TisGUIText_t59_m347(L_137, /*hidden argument*/GameObject_GetComponent_TisGUIText_t59_m347_MethodInfo_var);
		Material_t60 * L_139 = GUIText_get_material_m348(L_138, /*hidden argument*/NULL);
		ColorU5BU5D_t66* L_140 = V_1;
		Material_set_color_m355(L_139, (*(Color_t13 *)((Color_t13 *)(Color_t13 *)SZArrayLdElema(L_140, 3, sizeof(Color_t13 )))), /*hidden argument*/NULL);
		goto IL_041c;
	}

IL_03c4:
	{
		GameObject_t34 * L_141 = ___target;
		Renderer_t61 * L_142 = GameObject_GetComponent_TisRenderer_t61_m350(L_141, /*hidden argument*/GameObject_GetComponent_TisRenderer_t61_m350_MethodInfo_var);
		bool L_143 = Object_op_Implicit_m316(NULL /*static, unused*/, L_142, /*hidden argument*/NULL);
		if (!L_143)
		{
			goto IL_03f5;
		}
	}
	{
		GameObject_t34 * L_144 = ___target;
		Renderer_t61 * L_145 = GameObject_GetComponent_TisRenderer_t61_m350(L_144, /*hidden argument*/GameObject_GetComponent_TisRenderer_t61_m350_MethodInfo_var);
		Material_t60 * L_146 = Renderer_get_material_m351(L_145, /*hidden argument*/NULL);
		ColorU5BU5D_t66* L_147 = V_1;
		Material_set_color_m355(L_146, (*(Color_t13 *)((Color_t13 *)(Color_t13 *)SZArrayLdElema(L_147, 3, sizeof(Color_t13 )))), /*hidden argument*/NULL);
		goto IL_041c;
	}

IL_03f5:
	{
		GameObject_t34 * L_148 = ___target;
		Light_t62 * L_149 = GameObject_GetComponent_TisLight_t62_m352(L_148, /*hidden argument*/GameObject_GetComponent_TisLight_t62_m352_MethodInfo_var);
		bool L_150 = Object_op_Implicit_m316(NULL /*static, unused*/, L_149, /*hidden argument*/NULL);
		if (!L_150)
		{
			goto IL_041c;
		}
	}
	{
		GameObject_t34 * L_151 = ___target;
		Light_t62 * L_152 = GameObject_GetComponent_TisLight_t62_m352(L_151, /*hidden argument*/GameObject_GetComponent_TisLight_t62_m352_MethodInfo_var);
		ColorU5BU5D_t66* L_153 = V_1;
		Light_set_color_m356(L_152, (*(Color_t13 *)((Color_t13 *)(Color_t13 *)SZArrayLdElema(L_153, 3, sizeof(Color_t13 )))), /*hidden argument*/NULL);
	}

IL_041c:
	{
		return;
	}
}
// System.Void iTween::ColorUpdate(UnityEngine.GameObject,UnityEngine.Color,System.Single)
extern TypeInfo* ObjectU5BU5D_t41_il2cpp_TypeInfo_var;
extern TypeInfo* Color_t13_il2cpp_TypeInfo_var;
extern TypeInfo* Single_t51_il2cpp_TypeInfo_var;
extern TypeInfo* iTween_t23_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral35;
extern Il2CppCodeGenString* _stringLiteral22;
extern "C" void iTween_ColorUpdate_m163 (Object_t * __this /* static, unused */, GameObject_t34 * ___target, Color_t13  ___color, float ___time, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t41_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5);
		Color_t13_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(21);
		Single_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		iTween_t23_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		_stringLiteral35 = il2cpp_codegen_string_literal_from_index(35);
		_stringLiteral22 = il2cpp_codegen_string_literal_from_index(22);
		s_Il2CppMethodIntialized = true;
	}
	{
		GameObject_t34 * L_0 = ___target;
		ObjectU5BU5D_t41* L_1 = ((ObjectU5BU5D_t41*)SZArrayNew(ObjectU5BU5D_t41_il2cpp_TypeInfo_var, 4));
		ArrayElementTypeCheck (L_1, _stringLiteral35);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_1, 0, sizeof(Object_t *))) = (Object_t *)_stringLiteral35;
		ObjectU5BU5D_t41* L_2 = L_1;
		Color_t13  L_3 = ___color;
		Color_t13  L_4 = L_3;
		Object_t * L_5 = Box(Color_t13_il2cpp_TypeInfo_var, &L_4);
		ArrayElementTypeCheck (L_2, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1, sizeof(Object_t *))) = (Object_t *)L_5;
		ObjectU5BU5D_t41* L_6 = L_2;
		ArrayElementTypeCheck (L_6, _stringLiteral22);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 2, sizeof(Object_t *))) = (Object_t *)_stringLiteral22;
		ObjectU5BU5D_t41* L_7 = L_6;
		float L_8 = ___time;
		float L_9 = L_8;
		Object_t * L_10 = Box(Single_t51_il2cpp_TypeInfo_var, &L_9);
		ArrayElementTypeCheck (L_7, L_10);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_7, 3, sizeof(Object_t *))) = (Object_t *)L_10;
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		Hashtable_t26 * L_11 = iTween_Hash_m238(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		iTween_ColorUpdate_m162(NULL /*static, unused*/, L_0, L_11, /*hidden argument*/NULL);
		return;
	}
}
// System.Void iTween::AudioUpdate(UnityEngine.GameObject,System.Collections.Hashtable)
extern TypeInfo* iTween_t23_il2cpp_TypeInfo_var;
extern TypeInfo* Vector2U5BU5D_t28_il2cpp_TypeInfo_var;
extern TypeInfo* Single_t51_il2cpp_TypeInfo_var;
extern TypeInfo* Defaults_t12_il2cpp_TypeInfo_var;
extern TypeInfo* AudioSource_t27_il2cpp_TypeInfo_var;
extern TypeInfo* Mathf_t46_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisAudioSource_t27_m357_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral22;
extern Il2CppCodeGenString* _stringLiteral47;
extern Il2CppCodeGenString* _stringLiteral81;
extern Il2CppCodeGenString* _stringLiteral45;
extern Il2CppCodeGenString* _stringLiteral46;
extern "C" void iTween_AudioUpdate_m164 (Object_t * __this /* static, unused */, GameObject_t34 * ___target, Hashtable_t26 * ___args, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		iTween_t23_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		Vector2U5BU5D_t28_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		Single_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		Defaults_t12_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11);
		AudioSource_t27_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(32);
		Mathf_t46_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		GameObject_GetComponent_TisAudioSource_t27_m357_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483655);
		_stringLiteral22 = il2cpp_codegen_string_literal_from_index(22);
		_stringLiteral47 = il2cpp_codegen_string_literal_from_index(47);
		_stringLiteral81 = il2cpp_codegen_string_literal_from_index(81);
		_stringLiteral45 = il2cpp_codegen_string_literal_from_index(45);
		_stringLiteral46 = il2cpp_codegen_string_literal_from_index(46);
		s_Il2CppMethodIntialized = true;
	}
	AudioSource_t27 * V_0 = {0};
	float V_1 = 0.0f;
	Vector2U5BU5D_t28* V_2 = {0};
	Vector2_t36  V_3 = {0};
	{
		Hashtable_t26 * L_0 = ___args;
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		iTween_CleanArgs_m251(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_2 = ((Vector2U5BU5D_t28*)SZArrayNew(Vector2U5BU5D_t28_il2cpp_TypeInfo_var, 4));
		Hashtable_t26 * L_1 = ___args;
		bool L_2 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(26 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_1, _stringLiteral22);
		if (!L_2)
		{
			goto IL_003c;
		}
	}
	{
		Hashtable_t26 * L_3 = ___args;
		Object_t * L_4 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_3, _stringLiteral22);
		V_1 = ((*(float*)((float*)UnBox (L_4, Single_t51_il2cpp_TypeInfo_var))));
		float L_5 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Defaults_t12_il2cpp_TypeInfo_var);
		float L_6 = ((Defaults_t12_StaticFields*)Defaults_t12_il2cpp_TypeInfo_var->static_fields)->___updateTimePercentage_10;
		V_1 = ((float)((float)L_5*(float)L_6));
		goto IL_0042;
	}

IL_003c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Defaults_t12_il2cpp_TypeInfo_var);
		float L_7 = ((Defaults_t12_StaticFields*)Defaults_t12_il2cpp_TypeInfo_var->static_fields)->___updateTime_11;
		V_1 = L_7;
	}

IL_0042:
	{
		Hashtable_t26 * L_8 = ___args;
		bool L_9 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(26 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_8, _stringLiteral47);
		if (!L_9)
		{
			goto IL_0068;
		}
	}
	{
		Hashtable_t26 * L_10 = ___args;
		Object_t * L_11 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_10, _stringLiteral47);
		V_0 = ((AudioSource_t27 *)CastclassSealed(L_11, AudioSource_t27_il2cpp_TypeInfo_var));
		goto IL_008f;
	}

IL_0068:
	{
		GameObject_t34 * L_12 = ___target;
		AudioSource_t27 * L_13 = GameObject_GetComponent_TisAudioSource_t27_m357(L_12, /*hidden argument*/GameObject_GetComponent_TisAudioSource_t27_m357_MethodInfo_var);
		bool L_14 = Object_op_Implicit_m316(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_0084;
		}
	}
	{
		GameObject_t34 * L_15 = ___target;
		AudioSource_t27 * L_16 = GameObject_GetComponent_TisAudioSource_t27_m357(L_15, /*hidden argument*/GameObject_GetComponent_TisAudioSource_t27_m357_MethodInfo_var);
		V_0 = L_16;
		goto IL_008f;
	}

IL_0084:
	{
		Debug_LogError_m341(NULL /*static, unused*/, _stringLiteral81, /*hidden argument*/NULL);
		return;
	}

IL_008f:
	{
		Vector2U5BU5D_t28* L_17 = V_2;
		Vector2U5BU5D_t28* L_18 = V_2;
		AudioSource_t27 * L_19 = V_0;
		float L_20 = AudioSource_get_volume_m358(L_19, /*hidden argument*/NULL);
		AudioSource_t27 * L_21 = V_0;
		float L_22 = AudioSource_get_pitch_m359(L_21, /*hidden argument*/NULL);
		Vector2_t36  L_23 = {0};
		Vector2__ctor_m310(&L_23, L_20, L_22, /*hidden argument*/NULL);
		Vector2_t36  L_24 = L_23;
		V_3 = L_24;
		(*(Vector2_t36 *)((Vector2_t36 *)(Vector2_t36 *)SZArrayLdElema(L_18, 1, sizeof(Vector2_t36 )))) = L_24;
		Vector2_t36  L_25 = V_3;
		(*(Vector2_t36 *)((Vector2_t36 *)(Vector2_t36 *)SZArrayLdElema(L_17, 0, sizeof(Vector2_t36 )))) = L_25;
		Hashtable_t26 * L_26 = ___args;
		bool L_27 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(26 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_26, _stringLiteral45);
		if (!L_27)
		{
			goto IL_00e7;
		}
	}
	{
		Vector2U5BU5D_t28* L_28 = V_2;
		Hashtable_t26 * L_29 = ___args;
		Object_t * L_30 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_29, _stringLiteral45);
		((Vector2_t36 *)(Vector2_t36 *)SZArrayLdElema(L_28, 1, sizeof(Vector2_t36 )))->___x_1 = ((*(float*)((float*)UnBox (L_30, Single_t51_il2cpp_TypeInfo_var))));
	}

IL_00e7:
	{
		Hashtable_t26 * L_31 = ___args;
		bool L_32 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(26 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_31, _stringLiteral46);
		if (!L_32)
		{
			goto IL_0113;
		}
	}
	{
		Vector2U5BU5D_t28* L_33 = V_2;
		Hashtable_t26 * L_34 = ___args;
		Object_t * L_35 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_34, _stringLiteral46);
		((Vector2_t36 *)(Vector2_t36 *)SZArrayLdElema(L_33, 1, sizeof(Vector2_t36 )))->___y_2 = ((*(float*)((float*)UnBox (L_35, Single_t51_il2cpp_TypeInfo_var))));
	}

IL_0113:
	{
		Vector2U5BU5D_t28* L_36 = V_2;
		Vector2U5BU5D_t28* L_37 = V_2;
		float L_38 = (((Vector2_t36 *)(Vector2_t36 *)SZArrayLdElema(L_37, 0, sizeof(Vector2_t36 )))->___x_1);
		Vector2U5BU5D_t28* L_39 = V_2;
		float L_40 = (((Vector2_t36 *)(Vector2_t36 *)SZArrayLdElema(L_39, 1, sizeof(Vector2_t36 )))->___x_1);
		Vector2U5BU5D_t28* L_41 = V_2;
		float* L_42 = &(((Vector2_t36 *)(Vector2_t36 *)SZArrayLdElema(L_41, 2, sizeof(Vector2_t36 )))->___x_1);
		float L_43 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t46_il2cpp_TypeInfo_var);
		float L_44 = Mathf_SmoothDampAngle_m421(NULL /*static, unused*/, L_38, L_40, L_42, L_43, /*hidden argument*/NULL);
		((Vector2_t36 *)(Vector2_t36 *)SZArrayLdElema(L_36, 3, sizeof(Vector2_t36 )))->___x_1 = L_44;
		Vector2U5BU5D_t28* L_45 = V_2;
		Vector2U5BU5D_t28* L_46 = V_2;
		float L_47 = (((Vector2_t36 *)(Vector2_t36 *)SZArrayLdElema(L_46, 0, sizeof(Vector2_t36 )))->___y_2);
		Vector2U5BU5D_t28* L_48 = V_2;
		float L_49 = (((Vector2_t36 *)(Vector2_t36 *)SZArrayLdElema(L_48, 1, sizeof(Vector2_t36 )))->___y_2);
		Vector2U5BU5D_t28* L_50 = V_2;
		float* L_51 = &(((Vector2_t36 *)(Vector2_t36 *)SZArrayLdElema(L_50, 2, sizeof(Vector2_t36 )))->___y_2);
		float L_52 = V_1;
		float L_53 = Mathf_SmoothDampAngle_m421(NULL /*static, unused*/, L_47, L_49, L_51, L_52, /*hidden argument*/NULL);
		((Vector2_t36 *)(Vector2_t36 *)SZArrayLdElema(L_45, 3, sizeof(Vector2_t36 )))->___y_2 = L_53;
		AudioSource_t27 * L_54 = V_0;
		Vector2U5BU5D_t28* L_55 = V_2;
		float L_56 = (((Vector2_t36 *)(Vector2_t36 *)SZArrayLdElema(L_55, 3, sizeof(Vector2_t36 )))->___x_1);
		AudioSource_set_volume_m360(L_54, L_56, /*hidden argument*/NULL);
		AudioSource_t27 * L_57 = V_0;
		Vector2U5BU5D_t28* L_58 = V_2;
		float L_59 = (((Vector2_t36 *)(Vector2_t36 *)SZArrayLdElema(L_58, 3, sizeof(Vector2_t36 )))->___y_2);
		AudioSource_set_pitch_m361(L_57, L_59, /*hidden argument*/NULL);
		return;
	}
}
// System.Void iTween::AudioUpdate(UnityEngine.GameObject,System.Single,System.Single,System.Single)
extern TypeInfo* ObjectU5BU5D_t41_il2cpp_TypeInfo_var;
extern TypeInfo* Single_t51_il2cpp_TypeInfo_var;
extern TypeInfo* iTween_t23_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral45;
extern Il2CppCodeGenString* _stringLiteral46;
extern Il2CppCodeGenString* _stringLiteral22;
extern "C" void iTween_AudioUpdate_m165 (Object_t * __this /* static, unused */, GameObject_t34 * ___target, float ___volume, float ___pitch, float ___time, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t41_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5);
		Single_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		iTween_t23_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		_stringLiteral45 = il2cpp_codegen_string_literal_from_index(45);
		_stringLiteral46 = il2cpp_codegen_string_literal_from_index(46);
		_stringLiteral22 = il2cpp_codegen_string_literal_from_index(22);
		s_Il2CppMethodIntialized = true;
	}
	{
		GameObject_t34 * L_0 = ___target;
		ObjectU5BU5D_t41* L_1 = ((ObjectU5BU5D_t41*)SZArrayNew(ObjectU5BU5D_t41_il2cpp_TypeInfo_var, 6));
		ArrayElementTypeCheck (L_1, _stringLiteral45);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_1, 0, sizeof(Object_t *))) = (Object_t *)_stringLiteral45;
		ObjectU5BU5D_t41* L_2 = L_1;
		float L_3 = ___volume;
		float L_4 = L_3;
		Object_t * L_5 = Box(Single_t51_il2cpp_TypeInfo_var, &L_4);
		ArrayElementTypeCheck (L_2, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1, sizeof(Object_t *))) = (Object_t *)L_5;
		ObjectU5BU5D_t41* L_6 = L_2;
		ArrayElementTypeCheck (L_6, _stringLiteral46);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 2, sizeof(Object_t *))) = (Object_t *)_stringLiteral46;
		ObjectU5BU5D_t41* L_7 = L_6;
		float L_8 = ___pitch;
		float L_9 = L_8;
		Object_t * L_10 = Box(Single_t51_il2cpp_TypeInfo_var, &L_9);
		ArrayElementTypeCheck (L_7, L_10);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_7, 3, sizeof(Object_t *))) = (Object_t *)L_10;
		ObjectU5BU5D_t41* L_11 = L_7;
		ArrayElementTypeCheck (L_11, _stringLiteral22);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_11, 4, sizeof(Object_t *))) = (Object_t *)_stringLiteral22;
		ObjectU5BU5D_t41* L_12 = L_11;
		float L_13 = ___time;
		float L_14 = L_13;
		Object_t * L_15 = Box(Single_t51_il2cpp_TypeInfo_var, &L_14);
		ArrayElementTypeCheck (L_12, L_15);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_12, 5, sizeof(Object_t *))) = (Object_t *)L_15;
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		Hashtable_t26 * L_16 = iTween_Hash_m238(NULL /*static, unused*/, L_12, /*hidden argument*/NULL);
		iTween_AudioUpdate_m164(NULL /*static, unused*/, L_0, L_16, /*hidden argument*/NULL);
		return;
	}
}
// System.Void iTween::RotateUpdate(UnityEngine.GameObject,System.Collections.Hashtable)
extern const Il2CppType* Transform_t32_0_0_0_var;
extern const Il2CppType* Vector3_t14_0_0_0_var;
extern TypeInfo* iTween_t23_il2cpp_TypeInfo_var;
extern TypeInfo* Vector3U5BU5D_t16_il2cpp_TypeInfo_var;
extern TypeInfo* Single_t51_il2cpp_TypeInfo_var;
extern TypeInfo* Defaults_t12_il2cpp_TypeInfo_var;
extern TypeInfo* Boolean_t56_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* Transform_t32_il2cpp_TypeInfo_var;
extern TypeInfo* Vector3_t14_il2cpp_TypeInfo_var;
extern TypeInfo* Mathf_t46_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisRigidbody_t65_m422_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral22;
extern Il2CppCodeGenString* _stringLiteral63;
extern Il2CppCodeGenString* _stringLiteral57;
extern "C" void iTween_RotateUpdate_m166 (Object_t * __this /* static, unused */, GameObject_t34 * ___target, Hashtable_t26 * ___args, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Transform_t32_0_0_0_var = il2cpp_codegen_type_from_index(30);
		Vector3_t14_0_0_0_var = il2cpp_codegen_type_from_index(13);
		iTween_t23_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		Vector3U5BU5D_t16_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(12);
		Single_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		Defaults_t12_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11);
		Boolean_t56_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(28);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		Transform_t32_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(30);
		Vector3_t14_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13);
		Mathf_t46_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		GameObject_GetComponent_TisRigidbody_t65_m422_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483687);
		_stringLiteral22 = il2cpp_codegen_string_literal_from_index(22);
		_stringLiteral63 = il2cpp_codegen_string_literal_from_index(63);
		_stringLiteral57 = il2cpp_codegen_string_literal_from_index(57);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	float V_1 = 0.0f;
	Vector3U5BU5D_t16* V_2 = {0};
	Vector3_t14  V_3 = {0};
	Transform_t32 * V_4 = {0};
	Vector3_t14  V_5 = {0};
	{
		Hashtable_t26 * L_0 = ___args;
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		iTween_CleanArgs_m251(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_2 = ((Vector3U5BU5D_t16*)SZArrayNew(Vector3U5BU5D_t16_il2cpp_TypeInfo_var, 4));
		GameObject_t34 * L_1 = ___target;
		Transform_t32 * L_2 = GameObject_get_transform_m344(L_1, /*hidden argument*/NULL);
		Vector3_t14  L_3 = Transform_get_eulerAngles_m362(L_2, /*hidden argument*/NULL);
		V_3 = L_3;
		Hashtable_t26 * L_4 = ___args;
		bool L_5 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(26 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_4, _stringLiteral22);
		if (!L_5)
		{
			goto IL_0048;
		}
	}
	{
		Hashtable_t26 * L_6 = ___args;
		Object_t * L_7 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_6, _stringLiteral22);
		V_1 = ((*(float*)((float*)UnBox (L_7, Single_t51_il2cpp_TypeInfo_var))));
		float L_8 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Defaults_t12_il2cpp_TypeInfo_var);
		float L_9 = ((Defaults_t12_StaticFields*)Defaults_t12_il2cpp_TypeInfo_var->static_fields)->___updateTimePercentage_10;
		V_1 = ((float)((float)L_8*(float)L_9));
		goto IL_004e;
	}

IL_0048:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Defaults_t12_il2cpp_TypeInfo_var);
		float L_10 = ((Defaults_t12_StaticFields*)Defaults_t12_il2cpp_TypeInfo_var->static_fields)->___updateTime_11;
		V_1 = L_10;
	}

IL_004e:
	{
		Hashtable_t26 * L_11 = ___args;
		bool L_12 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(26 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_11, _stringLiteral63);
		if (!L_12)
		{
			goto IL_0074;
		}
	}
	{
		Hashtable_t26 * L_13 = ___args;
		Object_t * L_14 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_13, _stringLiteral63);
		V_0 = ((*(bool*)((bool*)UnBox (L_14, Boolean_t56_il2cpp_TypeInfo_var))));
		goto IL_007a;
	}

IL_0074:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Defaults_t12_il2cpp_TypeInfo_var);
		bool L_15 = ((Defaults_t12_StaticFields*)Defaults_t12_il2cpp_TypeInfo_var->static_fields)->___isLocal_6;
		V_0 = L_15;
	}

IL_007a:
	{
		bool L_16 = V_0;
		if (!L_16)
		{
			goto IL_009c;
		}
	}
	{
		Vector3U5BU5D_t16* L_17 = V_2;
		GameObject_t34 * L_18 = ___target;
		Transform_t32 * L_19 = GameObject_get_transform_m344(L_18, /*hidden argument*/NULL);
		Vector3_t14  L_20 = Transform_get_localEulerAngles_m376(L_19, /*hidden argument*/NULL);
		(*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_17, 0, sizeof(Vector3_t14 )))) = L_20;
		goto IL_00b3;
	}

IL_009c:
	{
		Vector3U5BU5D_t16* L_21 = V_2;
		GameObject_t34 * L_22 = ___target;
		Transform_t32 * L_23 = GameObject_get_transform_m344(L_22, /*hidden argument*/NULL);
		Vector3_t14  L_24 = Transform_get_eulerAngles_m362(L_23, /*hidden argument*/NULL);
		(*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_21, 0, sizeof(Vector3_t14 )))) = L_24;
	}

IL_00b3:
	{
		Hashtable_t26 * L_25 = ___args;
		bool L_26 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(26 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_25, _stringLiteral57);
		if (!L_26)
		{
			goto IL_0147;
		}
	}
	{
		Hashtable_t26 * L_27 = ___args;
		Object_t * L_28 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_27, _stringLiteral57);
		Type_t * L_29 = Object_GetType_m342(L_28, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_30 = Type_GetTypeFromHandle_m343(NULL /*static, unused*/, LoadTypeToken(Transform_t32_0_0_0_var), /*hidden argument*/NULL);
		if ((!(((Object_t*)(Type_t *)L_29) == ((Object_t*)(Type_t *)L_30))))
		{
			goto IL_010c;
		}
	}
	{
		Hashtable_t26 * L_31 = ___args;
		Object_t * L_32 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_31, _stringLiteral57);
		V_4 = ((Transform_t32 *)CastclassClass(L_32, Transform_t32_il2cpp_TypeInfo_var));
		Vector3U5BU5D_t16* L_33 = V_2;
		Transform_t32 * L_34 = V_4;
		Vector3_t14  L_35 = Transform_get_eulerAngles_m362(L_34, /*hidden argument*/NULL);
		(*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_33, 1, sizeof(Vector3_t14 )))) = L_35;
		goto IL_0147;
	}

IL_010c:
	{
		Hashtable_t26 * L_36 = ___args;
		Object_t * L_37 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_36, _stringLiteral57);
		Type_t * L_38 = Object_GetType_m342(L_37, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_39 = Type_GetTypeFromHandle_m343(NULL /*static, unused*/, LoadTypeToken(Vector3_t14_0_0_0_var), /*hidden argument*/NULL);
		if ((!(((Object_t*)(Type_t *)L_38) == ((Object_t*)(Type_t *)L_39))))
		{
			goto IL_0147;
		}
	}
	{
		Vector3U5BU5D_t16* L_40 = V_2;
		Hashtable_t26 * L_41 = ___args;
		Object_t * L_42 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_41, _stringLiteral57);
		(*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_40, 1, sizeof(Vector3_t14 )))) = ((*(Vector3_t14 *)((Vector3_t14 *)UnBox (L_42, Vector3_t14_il2cpp_TypeInfo_var))));
	}

IL_0147:
	{
		Vector3U5BU5D_t16* L_43 = V_2;
		Vector3U5BU5D_t16* L_44 = V_2;
		float L_45 = (((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_44, 0, sizeof(Vector3_t14 )))->___x_1);
		Vector3U5BU5D_t16* L_46 = V_2;
		float L_47 = (((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_46, 1, sizeof(Vector3_t14 )))->___x_1);
		Vector3U5BU5D_t16* L_48 = V_2;
		float* L_49 = &(((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_48, 2, sizeof(Vector3_t14 )))->___x_1);
		float L_50 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t46_il2cpp_TypeInfo_var);
		float L_51 = Mathf_SmoothDampAngle_m421(NULL /*static, unused*/, L_45, L_47, L_49, L_50, /*hidden argument*/NULL);
		((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_43, 3, sizeof(Vector3_t14 )))->___x_1 = L_51;
		Vector3U5BU5D_t16* L_52 = V_2;
		Vector3U5BU5D_t16* L_53 = V_2;
		float L_54 = (((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_53, 0, sizeof(Vector3_t14 )))->___y_2);
		Vector3U5BU5D_t16* L_55 = V_2;
		float L_56 = (((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_55, 1, sizeof(Vector3_t14 )))->___y_2);
		Vector3U5BU5D_t16* L_57 = V_2;
		float* L_58 = &(((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_57, 2, sizeof(Vector3_t14 )))->___y_2);
		float L_59 = V_1;
		float L_60 = Mathf_SmoothDampAngle_m421(NULL /*static, unused*/, L_54, L_56, L_58, L_59, /*hidden argument*/NULL);
		((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_52, 3, sizeof(Vector3_t14 )))->___y_2 = L_60;
		Vector3U5BU5D_t16* L_61 = V_2;
		Vector3U5BU5D_t16* L_62 = V_2;
		float L_63 = (((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_62, 0, sizeof(Vector3_t14 )))->___z_3);
		Vector3U5BU5D_t16* L_64 = V_2;
		float L_65 = (((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_64, 1, sizeof(Vector3_t14 )))->___z_3);
		Vector3U5BU5D_t16* L_66 = V_2;
		float* L_67 = &(((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_66, 2, sizeof(Vector3_t14 )))->___z_3);
		float L_68 = V_1;
		float L_69 = Mathf_SmoothDampAngle_m421(NULL /*static, unused*/, L_63, L_65, L_67, L_68, /*hidden argument*/NULL);
		((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_61, 3, sizeof(Vector3_t14 )))->___z_3 = L_69;
		bool L_70 = V_0;
		if (!L_70)
		{
			goto IL_020b;
		}
	}
	{
		GameObject_t34 * L_71 = ___target;
		Transform_t32 * L_72 = GameObject_get_transform_m344(L_71, /*hidden argument*/NULL);
		Vector3U5BU5D_t16* L_73 = V_2;
		Transform_set_localEulerAngles_m377(L_72, (*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_73, 3, sizeof(Vector3_t14 )))), /*hidden argument*/NULL);
		goto IL_0222;
	}

IL_020b:
	{
		GameObject_t34 * L_74 = ___target;
		Transform_t32 * L_75 = GameObject_get_transform_m344(L_74, /*hidden argument*/NULL);
		Vector3U5BU5D_t16* L_76 = V_2;
		Transform_set_eulerAngles_m368(L_75, (*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_76, 3, sizeof(Vector3_t14 )))), /*hidden argument*/NULL);
	}

IL_0222:
	{
		GameObject_t34 * L_77 = ___target;
		Rigidbody_t65 * L_78 = GameObject_GetComponent_TisRigidbody_t65_m422(L_77, /*hidden argument*/GameObject_GetComponent_TisRigidbody_t65_m422_MethodInfo_var);
		bool L_79 = Object_op_Inequality_m423(NULL /*static, unused*/, L_78, (Object_t67 *)NULL, /*hidden argument*/NULL);
		if (!L_79)
		{
			goto IL_025e;
		}
	}
	{
		GameObject_t34 * L_80 = ___target;
		Transform_t32 * L_81 = GameObject_get_transform_m344(L_80, /*hidden argument*/NULL);
		Vector3_t14  L_82 = Transform_get_eulerAngles_m362(L_81, /*hidden argument*/NULL);
		V_5 = L_82;
		GameObject_t34 * L_83 = ___target;
		Transform_t32 * L_84 = GameObject_get_transform_m344(L_83, /*hidden argument*/NULL);
		Vector3_t14  L_85 = V_3;
		Transform_set_eulerAngles_m368(L_84, L_85, /*hidden argument*/NULL);
		GameObject_t34 * L_86 = ___target;
		Rigidbody_t65 * L_87 = GameObject_GetComponent_TisRigidbody_t65_m422(L_86, /*hidden argument*/GameObject_GetComponent_TisRigidbody_t65_m422_MethodInfo_var);
		Vector3_t14  L_88 = V_5;
		Quaternion_t44  L_89 = Quaternion_Euler_m408(NULL /*static, unused*/, L_88, /*hidden argument*/NULL);
		Rigidbody_MoveRotation_m411(L_87, L_89, /*hidden argument*/NULL);
	}

IL_025e:
	{
		return;
	}
}
// System.Void iTween::RotateUpdate(UnityEngine.GameObject,UnityEngine.Vector3,System.Single)
extern TypeInfo* ObjectU5BU5D_t41_il2cpp_TypeInfo_var;
extern TypeInfo* Vector3_t14_il2cpp_TypeInfo_var;
extern TypeInfo* Single_t51_il2cpp_TypeInfo_var;
extern TypeInfo* iTween_t23_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral57;
extern Il2CppCodeGenString* _stringLiteral22;
extern "C" void iTween_RotateUpdate_m167 (Object_t * __this /* static, unused */, GameObject_t34 * ___target, Vector3_t14  ___rotation, float ___time, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t41_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5);
		Vector3_t14_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13);
		Single_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		iTween_t23_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		_stringLiteral57 = il2cpp_codegen_string_literal_from_index(57);
		_stringLiteral22 = il2cpp_codegen_string_literal_from_index(22);
		s_Il2CppMethodIntialized = true;
	}
	{
		GameObject_t34 * L_0 = ___target;
		ObjectU5BU5D_t41* L_1 = ((ObjectU5BU5D_t41*)SZArrayNew(ObjectU5BU5D_t41_il2cpp_TypeInfo_var, 4));
		ArrayElementTypeCheck (L_1, _stringLiteral57);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_1, 0, sizeof(Object_t *))) = (Object_t *)_stringLiteral57;
		ObjectU5BU5D_t41* L_2 = L_1;
		Vector3_t14  L_3 = ___rotation;
		Vector3_t14  L_4 = L_3;
		Object_t * L_5 = Box(Vector3_t14_il2cpp_TypeInfo_var, &L_4);
		ArrayElementTypeCheck (L_2, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1, sizeof(Object_t *))) = (Object_t *)L_5;
		ObjectU5BU5D_t41* L_6 = L_2;
		ArrayElementTypeCheck (L_6, _stringLiteral22);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 2, sizeof(Object_t *))) = (Object_t *)_stringLiteral22;
		ObjectU5BU5D_t41* L_7 = L_6;
		float L_8 = ___time;
		float L_9 = L_8;
		Object_t * L_10 = Box(Single_t51_il2cpp_TypeInfo_var, &L_9);
		ArrayElementTypeCheck (L_7, L_10);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_7, 3, sizeof(Object_t *))) = (Object_t *)L_10;
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		Hashtable_t26 * L_11 = iTween_Hash_m238(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		iTween_RotateUpdate_m166(NULL /*static, unused*/, L_0, L_11, /*hidden argument*/NULL);
		return;
	}
}
// System.Void iTween::ScaleUpdate(UnityEngine.GameObject,System.Collections.Hashtable)
extern const Il2CppType* Transform_t32_0_0_0_var;
extern const Il2CppType* Vector3_t14_0_0_0_var;
extern TypeInfo* iTween_t23_il2cpp_TypeInfo_var;
extern TypeInfo* Vector3U5BU5D_t16_il2cpp_TypeInfo_var;
extern TypeInfo* Single_t51_il2cpp_TypeInfo_var;
extern TypeInfo* Defaults_t12_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* Transform_t32_il2cpp_TypeInfo_var;
extern TypeInfo* Vector3_t14_il2cpp_TypeInfo_var;
extern TypeInfo* Mathf_t46_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral22;
extern Il2CppCodeGenString* _stringLiteral61;
extern Il2CppCodeGenString* _stringLiteral10;
extern Il2CppCodeGenString* _stringLiteral55;
extern Il2CppCodeGenString* _stringLiteral56;
extern "C" void iTween_ScaleUpdate_m168 (Object_t * __this /* static, unused */, GameObject_t34 * ___target, Hashtable_t26 * ___args, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Transform_t32_0_0_0_var = il2cpp_codegen_type_from_index(30);
		Vector3_t14_0_0_0_var = il2cpp_codegen_type_from_index(13);
		iTween_t23_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		Vector3U5BU5D_t16_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(12);
		Single_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		Defaults_t12_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		Transform_t32_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(30);
		Vector3_t14_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13);
		Mathf_t46_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		_stringLiteral22 = il2cpp_codegen_string_literal_from_index(22);
		_stringLiteral61 = il2cpp_codegen_string_literal_from_index(61);
		_stringLiteral10 = il2cpp_codegen_string_literal_from_index(10);
		_stringLiteral55 = il2cpp_codegen_string_literal_from_index(55);
		_stringLiteral56 = il2cpp_codegen_string_literal_from_index(56);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	Vector3U5BU5D_t16* V_1 = {0};
	Transform_t32 * V_2 = {0};
	Vector3_t14  V_3 = {0};
	{
		Hashtable_t26 * L_0 = ___args;
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		iTween_CleanArgs_m251(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_1 = ((Vector3U5BU5D_t16*)SZArrayNew(Vector3U5BU5D_t16_il2cpp_TypeInfo_var, 4));
		Hashtable_t26 * L_1 = ___args;
		bool L_2 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(26 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_1, _stringLiteral22);
		if (!L_2)
		{
			goto IL_003c;
		}
	}
	{
		Hashtable_t26 * L_3 = ___args;
		Object_t * L_4 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_3, _stringLiteral22);
		V_0 = ((*(float*)((float*)UnBox (L_4, Single_t51_il2cpp_TypeInfo_var))));
		float L_5 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Defaults_t12_il2cpp_TypeInfo_var);
		float L_6 = ((Defaults_t12_StaticFields*)Defaults_t12_il2cpp_TypeInfo_var->static_fields)->___updateTimePercentage_10;
		V_0 = ((float)((float)L_5*(float)L_6));
		goto IL_0042;
	}

IL_003c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Defaults_t12_il2cpp_TypeInfo_var);
		float L_7 = ((Defaults_t12_StaticFields*)Defaults_t12_il2cpp_TypeInfo_var->static_fields)->___updateTime_11;
		V_0 = L_7;
	}

IL_0042:
	{
		Vector3U5BU5D_t16* L_8 = V_1;
		Vector3U5BU5D_t16* L_9 = V_1;
		GameObject_t34 * L_10 = ___target;
		Transform_t32 * L_11 = GameObject_get_transform_m344(L_10, /*hidden argument*/NULL);
		Vector3_t14  L_12 = Transform_get_localScale_m370(L_11, /*hidden argument*/NULL);
		Vector3_t14  L_13 = L_12;
		V_3 = L_13;
		(*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_9, 1, sizeof(Vector3_t14 )))) = L_13;
		Vector3_t14  L_14 = V_3;
		(*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_8, 0, sizeof(Vector3_t14 )))) = L_14;
		Hashtable_t26 * L_15 = ___args;
		bool L_16 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(26 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_15, _stringLiteral61);
		if (!L_16)
		{
			goto IL_00ff;
		}
	}
	{
		Hashtable_t26 * L_17 = ___args;
		Object_t * L_18 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_17, _stringLiteral61);
		Type_t * L_19 = Object_GetType_m342(L_18, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_20 = Type_GetTypeFromHandle_m343(NULL /*static, unused*/, LoadTypeToken(Transform_t32_0_0_0_var), /*hidden argument*/NULL);
		if ((!(((Object_t*)(Type_t *)L_19) == ((Object_t*)(Type_t *)L_20))))
		{
			goto IL_00bf;
		}
	}
	{
		Hashtable_t26 * L_21 = ___args;
		Object_t * L_22 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_21, _stringLiteral61);
		V_2 = ((Transform_t32 *)CastclassClass(L_22, Transform_t32_il2cpp_TypeInfo_var));
		Vector3U5BU5D_t16* L_23 = V_1;
		Transform_t32 * L_24 = V_2;
		Vector3_t14  L_25 = Transform_get_localScale_m370(L_24, /*hidden argument*/NULL);
		(*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_23, 1, sizeof(Vector3_t14 )))) = L_25;
		goto IL_00fa;
	}

IL_00bf:
	{
		Hashtable_t26 * L_26 = ___args;
		Object_t * L_27 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_26, _stringLiteral61);
		Type_t * L_28 = Object_GetType_m342(L_27, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_29 = Type_GetTypeFromHandle_m343(NULL /*static, unused*/, LoadTypeToken(Vector3_t14_0_0_0_var), /*hidden argument*/NULL);
		if ((!(((Object_t*)(Type_t *)L_28) == ((Object_t*)(Type_t *)L_29))))
		{
			goto IL_00fa;
		}
	}
	{
		Vector3U5BU5D_t16* L_30 = V_1;
		Hashtable_t26 * L_31 = ___args;
		Object_t * L_32 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_31, _stringLiteral61);
		(*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_30, 1, sizeof(Vector3_t14 )))) = ((*(Vector3_t14 *)((Vector3_t14 *)UnBox (L_32, Vector3_t14_il2cpp_TypeInfo_var))));
	}

IL_00fa:
	{
		goto IL_0183;
	}

IL_00ff:
	{
		Hashtable_t26 * L_33 = ___args;
		bool L_34 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(26 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_33, _stringLiteral10);
		if (!L_34)
		{
			goto IL_012b;
		}
	}
	{
		Vector3U5BU5D_t16* L_35 = V_1;
		Hashtable_t26 * L_36 = ___args;
		Object_t * L_37 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_36, _stringLiteral10);
		((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_35, 1, sizeof(Vector3_t14 )))->___x_1 = ((*(float*)((float*)UnBox (L_37, Single_t51_il2cpp_TypeInfo_var))));
	}

IL_012b:
	{
		Hashtable_t26 * L_38 = ___args;
		bool L_39 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(26 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_38, _stringLiteral55);
		if (!L_39)
		{
			goto IL_0157;
		}
	}
	{
		Vector3U5BU5D_t16* L_40 = V_1;
		Hashtable_t26 * L_41 = ___args;
		Object_t * L_42 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_41, _stringLiteral55);
		((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_40, 1, sizeof(Vector3_t14 )))->___y_2 = ((*(float*)((float*)UnBox (L_42, Single_t51_il2cpp_TypeInfo_var))));
	}

IL_0157:
	{
		Hashtable_t26 * L_43 = ___args;
		bool L_44 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(26 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_43, _stringLiteral56);
		if (!L_44)
		{
			goto IL_0183;
		}
	}
	{
		Vector3U5BU5D_t16* L_45 = V_1;
		Hashtable_t26 * L_46 = ___args;
		Object_t * L_47 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_46, _stringLiteral56);
		((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_45, 1, sizeof(Vector3_t14 )))->___z_3 = ((*(float*)((float*)UnBox (L_47, Single_t51_il2cpp_TypeInfo_var))));
	}

IL_0183:
	{
		Vector3U5BU5D_t16* L_48 = V_1;
		Vector3U5BU5D_t16* L_49 = V_1;
		float L_50 = (((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_49, 0, sizeof(Vector3_t14 )))->___x_1);
		Vector3U5BU5D_t16* L_51 = V_1;
		float L_52 = (((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_51, 1, sizeof(Vector3_t14 )))->___x_1);
		Vector3U5BU5D_t16* L_53 = V_1;
		float* L_54 = &(((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_53, 2, sizeof(Vector3_t14 )))->___x_1);
		float L_55 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t46_il2cpp_TypeInfo_var);
		float L_56 = Mathf_SmoothDamp_m420(NULL /*static, unused*/, L_50, L_52, L_54, L_55, /*hidden argument*/NULL);
		((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_48, 3, sizeof(Vector3_t14 )))->___x_1 = L_56;
		Vector3U5BU5D_t16* L_57 = V_1;
		Vector3U5BU5D_t16* L_58 = V_1;
		float L_59 = (((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_58, 0, sizeof(Vector3_t14 )))->___y_2);
		Vector3U5BU5D_t16* L_60 = V_1;
		float L_61 = (((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_60, 1, sizeof(Vector3_t14 )))->___y_2);
		Vector3U5BU5D_t16* L_62 = V_1;
		float* L_63 = &(((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_62, 2, sizeof(Vector3_t14 )))->___y_2);
		float L_64 = V_0;
		float L_65 = Mathf_SmoothDamp_m420(NULL /*static, unused*/, L_59, L_61, L_63, L_64, /*hidden argument*/NULL);
		((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_57, 3, sizeof(Vector3_t14 )))->___y_2 = L_65;
		Vector3U5BU5D_t16* L_66 = V_1;
		Vector3U5BU5D_t16* L_67 = V_1;
		float L_68 = (((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_67, 0, sizeof(Vector3_t14 )))->___z_3);
		Vector3U5BU5D_t16* L_69 = V_1;
		float L_70 = (((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_69, 1, sizeof(Vector3_t14 )))->___z_3);
		Vector3U5BU5D_t16* L_71 = V_1;
		float* L_72 = &(((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_71, 2, sizeof(Vector3_t14 )))->___z_3);
		float L_73 = V_0;
		float L_74 = Mathf_SmoothDamp_m420(NULL /*static, unused*/, L_68, L_70, L_72, L_73, /*hidden argument*/NULL);
		((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_66, 3, sizeof(Vector3_t14 )))->___z_3 = L_74;
		GameObject_t34 * L_75 = ___target;
		Transform_t32 * L_76 = GameObject_get_transform_m344(L_75, /*hidden argument*/NULL);
		Vector3U5BU5D_t16* L_77 = V_1;
		Transform_set_localScale_m375(L_76, (*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_77, 3, sizeof(Vector3_t14 )))), /*hidden argument*/NULL);
		return;
	}
}
// System.Void iTween::ScaleUpdate(UnityEngine.GameObject,UnityEngine.Vector3,System.Single)
extern TypeInfo* ObjectU5BU5D_t41_il2cpp_TypeInfo_var;
extern TypeInfo* Vector3_t14_il2cpp_TypeInfo_var;
extern TypeInfo* Single_t51_il2cpp_TypeInfo_var;
extern TypeInfo* iTween_t23_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral61;
extern Il2CppCodeGenString* _stringLiteral22;
extern "C" void iTween_ScaleUpdate_m169 (Object_t * __this /* static, unused */, GameObject_t34 * ___target, Vector3_t14  ___scale, float ___time, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t41_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5);
		Vector3_t14_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13);
		Single_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		iTween_t23_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		_stringLiteral61 = il2cpp_codegen_string_literal_from_index(61);
		_stringLiteral22 = il2cpp_codegen_string_literal_from_index(22);
		s_Il2CppMethodIntialized = true;
	}
	{
		GameObject_t34 * L_0 = ___target;
		ObjectU5BU5D_t41* L_1 = ((ObjectU5BU5D_t41*)SZArrayNew(ObjectU5BU5D_t41_il2cpp_TypeInfo_var, 4));
		ArrayElementTypeCheck (L_1, _stringLiteral61);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_1, 0, sizeof(Object_t *))) = (Object_t *)_stringLiteral61;
		ObjectU5BU5D_t41* L_2 = L_1;
		Vector3_t14  L_3 = ___scale;
		Vector3_t14  L_4 = L_3;
		Object_t * L_5 = Box(Vector3_t14_il2cpp_TypeInfo_var, &L_4);
		ArrayElementTypeCheck (L_2, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1, sizeof(Object_t *))) = (Object_t *)L_5;
		ObjectU5BU5D_t41* L_6 = L_2;
		ArrayElementTypeCheck (L_6, _stringLiteral22);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 2, sizeof(Object_t *))) = (Object_t *)_stringLiteral22;
		ObjectU5BU5D_t41* L_7 = L_6;
		float L_8 = ___time;
		float L_9 = L_8;
		Object_t * L_10 = Box(Single_t51_il2cpp_TypeInfo_var, &L_9);
		ArrayElementTypeCheck (L_7, L_10);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_7, 3, sizeof(Object_t *))) = (Object_t *)L_10;
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		Hashtable_t26 * L_11 = iTween_Hash_m238(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		iTween_ScaleUpdate_m168(NULL /*static, unused*/, L_0, L_11, /*hidden argument*/NULL);
		return;
	}
}
// System.Void iTween::MoveUpdate(UnityEngine.GameObject,System.Collections.Hashtable)
extern const Il2CppType* Transform_t32_0_0_0_var;
extern const Il2CppType* Vector3_t14_0_0_0_var;
extern TypeInfo* iTween_t23_il2cpp_TypeInfo_var;
extern TypeInfo* Vector3U5BU5D_t16_il2cpp_TypeInfo_var;
extern TypeInfo* Single_t51_il2cpp_TypeInfo_var;
extern TypeInfo* Defaults_t12_il2cpp_TypeInfo_var;
extern TypeInfo* Boolean_t56_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* Transform_t32_il2cpp_TypeInfo_var;
extern TypeInfo* Vector3_t14_il2cpp_TypeInfo_var;
extern TypeInfo* Mathf_t46_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisRigidbody_t65_m422_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral22;
extern Il2CppCodeGenString* _stringLiteral63;
extern Il2CppCodeGenString* _stringLiteral59;
extern Il2CppCodeGenString* _stringLiteral10;
extern Il2CppCodeGenString* _stringLiteral55;
extern Il2CppCodeGenString* _stringLiteral56;
extern Il2CppCodeGenString* _stringLiteral74;
extern Il2CppCodeGenString* _stringLiteral52;
extern "C" void iTween_MoveUpdate_m170 (Object_t * __this /* static, unused */, GameObject_t34 * ___target, Hashtable_t26 * ___args, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Transform_t32_0_0_0_var = il2cpp_codegen_type_from_index(30);
		Vector3_t14_0_0_0_var = il2cpp_codegen_type_from_index(13);
		iTween_t23_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		Vector3U5BU5D_t16_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(12);
		Single_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		Defaults_t12_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11);
		Boolean_t56_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(28);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		Transform_t32_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(30);
		Vector3_t14_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13);
		Mathf_t46_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		GameObject_GetComponent_TisRigidbody_t65_m422_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483687);
		_stringLiteral22 = il2cpp_codegen_string_literal_from_index(22);
		_stringLiteral63 = il2cpp_codegen_string_literal_from_index(63);
		_stringLiteral59 = il2cpp_codegen_string_literal_from_index(59);
		_stringLiteral10 = il2cpp_codegen_string_literal_from_index(10);
		_stringLiteral55 = il2cpp_codegen_string_literal_from_index(55);
		_stringLiteral56 = il2cpp_codegen_string_literal_from_index(56);
		_stringLiteral74 = il2cpp_codegen_string_literal_from_index(74);
		_stringLiteral52 = il2cpp_codegen_string_literal_from_index(52);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	Vector3U5BU5D_t16* V_1 = {0};
	bool V_2 = false;
	Vector3_t14  V_3 = {0};
	Transform_t32 * V_4 = {0};
	Vector3_t14  V_5 = {0};
	Vector3_t14  V_6 = {0};
	{
		Hashtable_t26 * L_0 = ___args;
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		iTween_CleanArgs_m251(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_1 = ((Vector3U5BU5D_t16*)SZArrayNew(Vector3U5BU5D_t16_il2cpp_TypeInfo_var, 4));
		GameObject_t34 * L_1 = ___target;
		Transform_t32 * L_2 = GameObject_get_transform_m344(L_1, /*hidden argument*/NULL);
		Vector3_t14  L_3 = Transform_get_position_m369(L_2, /*hidden argument*/NULL);
		V_3 = L_3;
		Hashtable_t26 * L_4 = ___args;
		bool L_5 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(26 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_4, _stringLiteral22);
		if (!L_5)
		{
			goto IL_0048;
		}
	}
	{
		Hashtable_t26 * L_6 = ___args;
		Object_t * L_7 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_6, _stringLiteral22);
		V_0 = ((*(float*)((float*)UnBox (L_7, Single_t51_il2cpp_TypeInfo_var))));
		float L_8 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Defaults_t12_il2cpp_TypeInfo_var);
		float L_9 = ((Defaults_t12_StaticFields*)Defaults_t12_il2cpp_TypeInfo_var->static_fields)->___updateTimePercentage_10;
		V_0 = ((float)((float)L_8*(float)L_9));
		goto IL_004e;
	}

IL_0048:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Defaults_t12_il2cpp_TypeInfo_var);
		float L_10 = ((Defaults_t12_StaticFields*)Defaults_t12_il2cpp_TypeInfo_var->static_fields)->___updateTime_11;
		V_0 = L_10;
	}

IL_004e:
	{
		Hashtable_t26 * L_11 = ___args;
		bool L_12 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(26 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_11, _stringLiteral63);
		if (!L_12)
		{
			goto IL_0074;
		}
	}
	{
		Hashtable_t26 * L_13 = ___args;
		Object_t * L_14 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_13, _stringLiteral63);
		V_2 = ((*(bool*)((bool*)UnBox (L_14, Boolean_t56_il2cpp_TypeInfo_var))));
		goto IL_007a;
	}

IL_0074:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Defaults_t12_il2cpp_TypeInfo_var);
		bool L_15 = ((Defaults_t12_StaticFields*)Defaults_t12_il2cpp_TypeInfo_var->static_fields)->___isLocal_6;
		V_2 = L_15;
	}

IL_007a:
	{
		bool L_16 = V_2;
		if (!L_16)
		{
			goto IL_00ad;
		}
	}
	{
		Vector3U5BU5D_t16* L_17 = V_1;
		Vector3U5BU5D_t16* L_18 = V_1;
		GameObject_t34 * L_19 = ___target;
		Transform_t32 * L_20 = GameObject_get_transform_m344(L_19, /*hidden argument*/NULL);
		Vector3_t14  L_21 = Transform_get_localPosition_m372(L_20, /*hidden argument*/NULL);
		Vector3_t14  L_22 = L_21;
		V_6 = L_22;
		(*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_18, 1, sizeof(Vector3_t14 )))) = L_22;
		Vector3_t14  L_23 = V_6;
		(*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_17, 0, sizeof(Vector3_t14 )))) = L_23;
		goto IL_00d5;
	}

IL_00ad:
	{
		Vector3U5BU5D_t16* L_24 = V_1;
		Vector3U5BU5D_t16* L_25 = V_1;
		GameObject_t34 * L_26 = ___target;
		Transform_t32 * L_27 = GameObject_get_transform_m344(L_26, /*hidden argument*/NULL);
		Vector3_t14  L_28 = Transform_get_position_m369(L_27, /*hidden argument*/NULL);
		Vector3_t14  L_29 = L_28;
		V_6 = L_29;
		(*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_25, 1, sizeof(Vector3_t14 )))) = L_29;
		Vector3_t14  L_30 = V_6;
		(*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_24, 0, sizeof(Vector3_t14 )))) = L_30;
	}

IL_00d5:
	{
		Hashtable_t26 * L_31 = ___args;
		bool L_32 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(26 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_31, _stringLiteral59);
		if (!L_32)
		{
			goto IL_016e;
		}
	}
	{
		Hashtable_t26 * L_33 = ___args;
		Object_t * L_34 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_33, _stringLiteral59);
		Type_t * L_35 = Object_GetType_m342(L_34, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_36 = Type_GetTypeFromHandle_m343(NULL /*static, unused*/, LoadTypeToken(Transform_t32_0_0_0_var), /*hidden argument*/NULL);
		if ((!(((Object_t*)(Type_t *)L_35) == ((Object_t*)(Type_t *)L_36))))
		{
			goto IL_012e;
		}
	}
	{
		Hashtable_t26 * L_37 = ___args;
		Object_t * L_38 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_37, _stringLiteral59);
		V_4 = ((Transform_t32 *)CastclassClass(L_38, Transform_t32_il2cpp_TypeInfo_var));
		Vector3U5BU5D_t16* L_39 = V_1;
		Transform_t32 * L_40 = V_4;
		Vector3_t14  L_41 = Transform_get_position_m369(L_40, /*hidden argument*/NULL);
		(*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_39, 1, sizeof(Vector3_t14 )))) = L_41;
		goto IL_0169;
	}

IL_012e:
	{
		Hashtable_t26 * L_42 = ___args;
		Object_t * L_43 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_42, _stringLiteral59);
		Type_t * L_44 = Object_GetType_m342(L_43, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_45 = Type_GetTypeFromHandle_m343(NULL /*static, unused*/, LoadTypeToken(Vector3_t14_0_0_0_var), /*hidden argument*/NULL);
		if ((!(((Object_t*)(Type_t *)L_44) == ((Object_t*)(Type_t *)L_45))))
		{
			goto IL_0169;
		}
	}
	{
		Vector3U5BU5D_t16* L_46 = V_1;
		Hashtable_t26 * L_47 = ___args;
		Object_t * L_48 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_47, _stringLiteral59);
		(*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_46, 1, sizeof(Vector3_t14 )))) = ((*(Vector3_t14 *)((Vector3_t14 *)UnBox (L_48, Vector3_t14_il2cpp_TypeInfo_var))));
	}

IL_0169:
	{
		goto IL_01f2;
	}

IL_016e:
	{
		Hashtable_t26 * L_49 = ___args;
		bool L_50 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(26 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_49, _stringLiteral10);
		if (!L_50)
		{
			goto IL_019a;
		}
	}
	{
		Vector3U5BU5D_t16* L_51 = V_1;
		Hashtable_t26 * L_52 = ___args;
		Object_t * L_53 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_52, _stringLiteral10);
		((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_51, 1, sizeof(Vector3_t14 )))->___x_1 = ((*(float*)((float*)UnBox (L_53, Single_t51_il2cpp_TypeInfo_var))));
	}

IL_019a:
	{
		Hashtable_t26 * L_54 = ___args;
		bool L_55 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(26 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_54, _stringLiteral55);
		if (!L_55)
		{
			goto IL_01c6;
		}
	}
	{
		Vector3U5BU5D_t16* L_56 = V_1;
		Hashtable_t26 * L_57 = ___args;
		Object_t * L_58 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_57, _stringLiteral55);
		((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_56, 1, sizeof(Vector3_t14 )))->___y_2 = ((*(float*)((float*)UnBox (L_58, Single_t51_il2cpp_TypeInfo_var))));
	}

IL_01c6:
	{
		Hashtable_t26 * L_59 = ___args;
		bool L_60 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(26 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_59, _stringLiteral56);
		if (!L_60)
		{
			goto IL_01f2;
		}
	}
	{
		Vector3U5BU5D_t16* L_61 = V_1;
		Hashtable_t26 * L_62 = ___args;
		Object_t * L_63 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_62, _stringLiteral56);
		((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_61, 1, sizeof(Vector3_t14 )))->___z_3 = ((*(float*)((float*)UnBox (L_63, Single_t51_il2cpp_TypeInfo_var))));
	}

IL_01f2:
	{
		Vector3U5BU5D_t16* L_64 = V_1;
		Vector3U5BU5D_t16* L_65 = V_1;
		float L_66 = (((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_65, 0, sizeof(Vector3_t14 )))->___x_1);
		Vector3U5BU5D_t16* L_67 = V_1;
		float L_68 = (((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_67, 1, sizeof(Vector3_t14 )))->___x_1);
		Vector3U5BU5D_t16* L_69 = V_1;
		float* L_70 = &(((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_69, 2, sizeof(Vector3_t14 )))->___x_1);
		float L_71 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t46_il2cpp_TypeInfo_var);
		float L_72 = Mathf_SmoothDamp_m420(NULL /*static, unused*/, L_66, L_68, L_70, L_71, /*hidden argument*/NULL);
		((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_64, 3, sizeof(Vector3_t14 )))->___x_1 = L_72;
		Vector3U5BU5D_t16* L_73 = V_1;
		Vector3U5BU5D_t16* L_74 = V_1;
		float L_75 = (((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_74, 0, sizeof(Vector3_t14 )))->___y_2);
		Vector3U5BU5D_t16* L_76 = V_1;
		float L_77 = (((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_76, 1, sizeof(Vector3_t14 )))->___y_2);
		Vector3U5BU5D_t16* L_78 = V_1;
		float* L_79 = &(((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_78, 2, sizeof(Vector3_t14 )))->___y_2);
		float L_80 = V_0;
		float L_81 = Mathf_SmoothDamp_m420(NULL /*static, unused*/, L_75, L_77, L_79, L_80, /*hidden argument*/NULL);
		((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_73, 3, sizeof(Vector3_t14 )))->___y_2 = L_81;
		Vector3U5BU5D_t16* L_82 = V_1;
		Vector3U5BU5D_t16* L_83 = V_1;
		float L_84 = (((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_83, 0, sizeof(Vector3_t14 )))->___z_3);
		Vector3U5BU5D_t16* L_85 = V_1;
		float L_86 = (((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_85, 1, sizeof(Vector3_t14 )))->___z_3);
		Vector3U5BU5D_t16* L_87 = V_1;
		float* L_88 = &(((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_87, 2, sizeof(Vector3_t14 )))->___z_3);
		float L_89 = V_0;
		float L_90 = Mathf_SmoothDamp_m420(NULL /*static, unused*/, L_84, L_86, L_88, L_89, /*hidden argument*/NULL);
		((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_82, 3, sizeof(Vector3_t14 )))->___z_3 = L_90;
		Hashtable_t26 * L_91 = ___args;
		bool L_92 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(26 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_91, _stringLiteral74);
		if (!L_92)
		{
			goto IL_02d5;
		}
	}
	{
		Hashtable_t26 * L_93 = ___args;
		Object_t * L_94 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_93, _stringLiteral74);
		if (!((*(bool*)((bool*)UnBox (L_94, Boolean_t56_il2cpp_TypeInfo_var)))))
		{
			goto IL_02d5;
		}
	}
	{
		Hashtable_t26 * L_95 = ___args;
		Vector3U5BU5D_t16* L_96 = V_1;
		Vector3_t14  L_97 = (*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_96, 3, sizeof(Vector3_t14 ))));
		Object_t * L_98 = Box(Vector3_t14_il2cpp_TypeInfo_var, &L_97);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(22 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_95, _stringLiteral52, L_98);
	}

IL_02d5:
	{
		Hashtable_t26 * L_99 = ___args;
		bool L_100 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(26 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_99, _stringLiteral52);
		if (!L_100)
		{
			goto IL_02ec;
		}
	}
	{
		GameObject_t34 * L_101 = ___target;
		Hashtable_t26 * L_102 = ___args;
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		iTween_LookUpdate_m172(NULL /*static, unused*/, L_101, L_102, /*hidden argument*/NULL);
	}

IL_02ec:
	{
		bool L_103 = V_2;
		if (!L_103)
		{
			goto IL_030e;
		}
	}
	{
		GameObject_t34 * L_104 = ___target;
		Transform_t32 * L_105 = GameObject_get_transform_m344(L_104, /*hidden argument*/NULL);
		Vector3U5BU5D_t16* L_106 = V_1;
		Transform_set_localPosition_m373(L_105, (*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_106, 3, sizeof(Vector3_t14 )))), /*hidden argument*/NULL);
		goto IL_0325;
	}

IL_030e:
	{
		GameObject_t34 * L_107 = ___target;
		Transform_t32 * L_108 = GameObject_get_transform_m344(L_107, /*hidden argument*/NULL);
		Vector3U5BU5D_t16* L_109 = V_1;
		Transform_set_position_m374(L_108, (*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_109, 3, sizeof(Vector3_t14 )))), /*hidden argument*/NULL);
	}

IL_0325:
	{
		GameObject_t34 * L_110 = ___target;
		Rigidbody_t65 * L_111 = GameObject_GetComponent_TisRigidbody_t65_m422(L_110, /*hidden argument*/GameObject_GetComponent_TisRigidbody_t65_m422_MethodInfo_var);
		bool L_112 = Object_op_Inequality_m423(NULL /*static, unused*/, L_111, (Object_t67 *)NULL, /*hidden argument*/NULL);
		if (!L_112)
		{
			goto IL_035c;
		}
	}
	{
		GameObject_t34 * L_113 = ___target;
		Transform_t32 * L_114 = GameObject_get_transform_m344(L_113, /*hidden argument*/NULL);
		Vector3_t14  L_115 = Transform_get_position_m369(L_114, /*hidden argument*/NULL);
		V_5 = L_115;
		GameObject_t34 * L_116 = ___target;
		Transform_t32 * L_117 = GameObject_get_transform_m344(L_116, /*hidden argument*/NULL);
		Vector3_t14  L_118 = V_3;
		Transform_set_position_m374(L_117, L_118, /*hidden argument*/NULL);
		GameObject_t34 * L_119 = ___target;
		Rigidbody_t65 * L_120 = GameObject_GetComponent_TisRigidbody_t65_m422(L_119, /*hidden argument*/GameObject_GetComponent_TisRigidbody_t65_m422_MethodInfo_var);
		Vector3_t14  L_121 = V_5;
		Rigidbody_MovePosition_m407(L_120, L_121, /*hidden argument*/NULL);
	}

IL_035c:
	{
		return;
	}
}
// System.Void iTween::MoveUpdate(UnityEngine.GameObject,UnityEngine.Vector3,System.Single)
extern TypeInfo* ObjectU5BU5D_t41_il2cpp_TypeInfo_var;
extern TypeInfo* Vector3_t14_il2cpp_TypeInfo_var;
extern TypeInfo* Single_t51_il2cpp_TypeInfo_var;
extern TypeInfo* iTween_t23_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral59;
extern Il2CppCodeGenString* _stringLiteral22;
extern "C" void iTween_MoveUpdate_m171 (Object_t * __this /* static, unused */, GameObject_t34 * ___target, Vector3_t14  ___position, float ___time, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t41_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5);
		Vector3_t14_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13);
		Single_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		iTween_t23_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		_stringLiteral59 = il2cpp_codegen_string_literal_from_index(59);
		_stringLiteral22 = il2cpp_codegen_string_literal_from_index(22);
		s_Il2CppMethodIntialized = true;
	}
	{
		GameObject_t34 * L_0 = ___target;
		ObjectU5BU5D_t41* L_1 = ((ObjectU5BU5D_t41*)SZArrayNew(ObjectU5BU5D_t41_il2cpp_TypeInfo_var, 4));
		ArrayElementTypeCheck (L_1, _stringLiteral59);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_1, 0, sizeof(Object_t *))) = (Object_t *)_stringLiteral59;
		ObjectU5BU5D_t41* L_2 = L_1;
		Vector3_t14  L_3 = ___position;
		Vector3_t14  L_4 = L_3;
		Object_t * L_5 = Box(Vector3_t14_il2cpp_TypeInfo_var, &L_4);
		ArrayElementTypeCheck (L_2, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1, sizeof(Object_t *))) = (Object_t *)L_5;
		ObjectU5BU5D_t41* L_6 = L_2;
		ArrayElementTypeCheck (L_6, _stringLiteral22);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 2, sizeof(Object_t *))) = (Object_t *)_stringLiteral22;
		ObjectU5BU5D_t41* L_7 = L_6;
		float L_8 = ___time;
		float L_9 = L_8;
		Object_t * L_10 = Box(Single_t51_il2cpp_TypeInfo_var, &L_9);
		ArrayElementTypeCheck (L_7, L_10);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_7, 3, sizeof(Object_t *))) = (Object_t *)L_10;
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		Hashtable_t26 * L_11 = iTween_Hash_m238(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		iTween_MoveUpdate_m170(NULL /*static, unused*/, L_0, L_11, /*hidden argument*/NULL);
		return;
	}
}
// System.Void iTween::LookUpdate(UnityEngine.GameObject,System.Collections.Hashtable)
extern const Il2CppType* Transform_t32_0_0_0_var;
extern const Il2CppType* Vector3_t14_0_0_0_var;
extern TypeInfo* iTween_t23_il2cpp_TypeInfo_var;
extern TypeInfo* Vector3U5BU5D_t16_il2cpp_TypeInfo_var;
extern TypeInfo* Single_t51_il2cpp_TypeInfo_var;
extern TypeInfo* Defaults_t12_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* Transform_t32_il2cpp_TypeInfo_var;
extern TypeInfo* Nullable_1_t63_il2cpp_TypeInfo_var;
extern TypeInfo* Vector3_t14_il2cpp_TypeInfo_var;
extern TypeInfo* Mathf_t46_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t35_il2cpp_TypeInfo_var;
extern const MethodInfo* Nullable_1_get_HasValue_m363_MethodInfo_var;
extern const MethodInfo* Nullable_1_get_Value_m364_MethodInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m367_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral82;
extern Il2CppCodeGenString* _stringLiteral22;
extern Il2CppCodeGenString* _stringLiteral52;
extern Il2CppCodeGenString* _stringLiteral53;
extern Il2CppCodeGenString* _stringLiteral83;
extern Il2CppCodeGenString* _stringLiteral54;
extern Il2CppCodeGenString* _stringLiteral10;
extern Il2CppCodeGenString* _stringLiteral55;
extern Il2CppCodeGenString* _stringLiteral56;
extern "C" void iTween_LookUpdate_m172 (Object_t * __this /* static, unused */, GameObject_t34 * ___target, Hashtable_t26 * ___args, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Transform_t32_0_0_0_var = il2cpp_codegen_type_from_index(30);
		Vector3_t14_0_0_0_var = il2cpp_codegen_type_from_index(13);
		iTween_t23_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		Vector3U5BU5D_t16_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(12);
		Single_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		Defaults_t12_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		Transform_t32_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(30);
		Nullable_1_t63_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(34);
		Vector3_t14_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13);
		Mathf_t46_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(33);
		Dictionary_2_t35_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(35);
		Nullable_1_get_HasValue_m363_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483656);
		Nullable_1_get_Value_m364_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483657);
		Dictionary_2__ctor_m367_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483658);
		_stringLiteral82 = il2cpp_codegen_string_literal_from_index(82);
		_stringLiteral22 = il2cpp_codegen_string_literal_from_index(22);
		_stringLiteral52 = il2cpp_codegen_string_literal_from_index(52);
		_stringLiteral53 = il2cpp_codegen_string_literal_from_index(53);
		_stringLiteral83 = il2cpp_codegen_string_literal_from_index(83);
		_stringLiteral54 = il2cpp_codegen_string_literal_from_index(54);
		_stringLiteral10 = il2cpp_codegen_string_literal_from_index(10);
		_stringLiteral55 = il2cpp_codegen_string_literal_from_index(55);
		_stringLiteral56 = il2cpp_codegen_string_literal_from_index(56);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	Vector3U5BU5D_t16* V_1 = {0};
	Nullable_1_t63  V_2 = {0};
	Nullable_1_t63  V_3 = {0};
	String_t* V_4 = {0};
	Dictionary_2_t35 * V_5 = {0};
	int32_t V_6 = 0;
	Transform_t32 * G_B9_0 = {0};
	Transform_t32 * G_B9_1 = {0};
	Transform_t32 * G_B8_0 = {0};
	Transform_t32 * G_B8_1 = {0};
	Vector3_t14  G_B10_0 = {0};
	Transform_t32 * G_B10_1 = {0};
	Transform_t32 * G_B10_2 = {0};
	Vector3_t14  G_B14_0 = {0};
	Transform_t32 * G_B14_1 = {0};
	Vector3_t14  G_B13_0 = {0};
	Transform_t32 * G_B13_1 = {0};
	Vector3_t14  G_B15_0 = {0};
	Vector3_t14  G_B15_1 = {0};
	Transform_t32 * G_B15_2 = {0};
	{
		Hashtable_t26 * L_0 = ___args;
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		iTween_CleanArgs_m251(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_1 = ((Vector3U5BU5D_t16*)SZArrayNew(Vector3U5BU5D_t16_il2cpp_TypeInfo_var, 5));
		Hashtable_t26 * L_1 = ___args;
		bool L_2 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(26 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_1, _stringLiteral82);
		if (!L_2)
		{
			goto IL_003c;
		}
	}
	{
		Hashtable_t26 * L_3 = ___args;
		Object_t * L_4 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_3, _stringLiteral82);
		V_0 = ((*(float*)((float*)UnBox (L_4, Single_t51_il2cpp_TypeInfo_var))));
		float L_5 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Defaults_t12_il2cpp_TypeInfo_var);
		float L_6 = ((Defaults_t12_StaticFields*)Defaults_t12_il2cpp_TypeInfo_var->static_fields)->___updateTimePercentage_10;
		V_0 = ((float)((float)L_5*(float)L_6));
		goto IL_0076;
	}

IL_003c:
	{
		Hashtable_t26 * L_7 = ___args;
		bool L_8 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(26 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_7, _stringLiteral22);
		if (!L_8)
		{
			goto IL_0070;
		}
	}
	{
		Hashtable_t26 * L_9 = ___args;
		Object_t * L_10 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_9, _stringLiteral22);
		V_0 = ((float)((float)((*(float*)((float*)UnBox (L_10, Single_t51_il2cpp_TypeInfo_var))))*(float)(0.15f)));
		float L_11 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Defaults_t12_il2cpp_TypeInfo_var);
		float L_12 = ((Defaults_t12_StaticFields*)Defaults_t12_il2cpp_TypeInfo_var->static_fields)->___updateTimePercentage_10;
		V_0 = ((float)((float)L_11*(float)L_12));
		goto IL_0076;
	}

IL_0070:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Defaults_t12_il2cpp_TypeInfo_var);
		float L_13 = ((Defaults_t12_StaticFields*)Defaults_t12_il2cpp_TypeInfo_var->static_fields)->___updateTime_11;
		V_0 = L_13;
	}

IL_0076:
	{
		Vector3U5BU5D_t16* L_14 = V_1;
		GameObject_t34 * L_15 = ___target;
		Transform_t32 * L_16 = GameObject_get_transform_m344(L_15, /*hidden argument*/NULL);
		Vector3_t14  L_17 = Transform_get_eulerAngles_m362(L_16, /*hidden argument*/NULL);
		(*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_14, 0, sizeof(Vector3_t14 )))) = L_17;
		Hashtable_t26 * L_18 = ___args;
		bool L_19 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(26 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_18, _stringLiteral52);
		if (!L_19)
		{
			goto IL_0177;
		}
	}
	{
		Hashtable_t26 * L_20 = ___args;
		Object_t * L_21 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_20, _stringLiteral52);
		Type_t * L_22 = Object_GetType_m342(L_21, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_23 = Type_GetTypeFromHandle_m343(NULL /*static, unused*/, LoadTypeToken(Transform_t32_0_0_0_var), /*hidden argument*/NULL);
		if ((!(((Object_t*)(Type_t *)L_22) == ((Object_t*)(Type_t *)L_23))))
		{
			goto IL_010a;
		}
	}
	{
		GameObject_t34 * L_24 = ___target;
		Transform_t32 * L_25 = GameObject_get_transform_m344(L_24, /*hidden argument*/NULL);
		Hashtable_t26 * L_26 = ___args;
		Object_t * L_27 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_26, _stringLiteral52);
		Hashtable_t26 * L_28 = ___args;
		Object_t * L_29 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_28, _stringLiteral53);
		void* L_30 = alloca(sizeof(Nullable_1_t63 ));
		UnBoxNullable(L_29, Nullable_1_t63_il2cpp_TypeInfo_var, L_30);
		V_2 = ((*(Nullable_1_t63 *)((Nullable_1_t63 *)L_30)));
		bool L_31 = Nullable_1_get_HasValue_m363((&V_2), /*hidden argument*/Nullable_1_get_HasValue_m363_MethodInfo_var);
		G_B8_0 = ((Transform_t32 *)CastclassClass(L_27, Transform_t32_il2cpp_TypeInfo_var));
		G_B8_1 = L_25;
		if (!L_31)
		{
			G_B9_0 = ((Transform_t32 *)CastclassClass(L_27, Transform_t32_il2cpp_TypeInfo_var));
			G_B9_1 = L_25;
			goto IL_00fb;
		}
	}
	{
		Vector3_t14  L_32 = Nullable_1_get_Value_m364((&V_2), /*hidden argument*/Nullable_1_get_Value_m364_MethodInfo_var);
		G_B10_0 = L_32;
		G_B10_1 = G_B8_0;
		G_B10_2 = G_B8_1;
		goto IL_0100;
	}

IL_00fb:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Defaults_t12_il2cpp_TypeInfo_var);
		Vector3_t14  L_33 = ((Defaults_t12_StaticFields*)Defaults_t12_il2cpp_TypeInfo_var->static_fields)->___up_15;
		G_B10_0 = L_33;
		G_B10_1 = G_B9_0;
		G_B10_2 = G_B9_1;
	}

IL_0100:
	{
		Transform_LookAt_m365(G_B10_2, G_B10_1, G_B10_0, /*hidden argument*/NULL);
		goto IL_0172;
	}

IL_010a:
	{
		Hashtable_t26 * L_34 = ___args;
		Object_t * L_35 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_34, _stringLiteral52);
		Type_t * L_36 = Object_GetType_m342(L_35, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_37 = Type_GetTypeFromHandle_m343(NULL /*static, unused*/, LoadTypeToken(Vector3_t14_0_0_0_var), /*hidden argument*/NULL);
		if ((!(((Object_t*)(Type_t *)L_36) == ((Object_t*)(Type_t *)L_37))))
		{
			goto IL_0172;
		}
	}
	{
		GameObject_t34 * L_38 = ___target;
		Transform_t32 * L_39 = GameObject_get_transform_m344(L_38, /*hidden argument*/NULL);
		Hashtable_t26 * L_40 = ___args;
		Object_t * L_41 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_40, _stringLiteral52);
		Hashtable_t26 * L_42 = ___args;
		Object_t * L_43 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_42, _stringLiteral53);
		void* L_44 = alloca(sizeof(Nullable_1_t63 ));
		UnBoxNullable(L_43, Nullable_1_t63_il2cpp_TypeInfo_var, L_44);
		V_3 = ((*(Nullable_1_t63 *)((Nullable_1_t63 *)L_44)));
		bool L_45 = Nullable_1_get_HasValue_m363((&V_3), /*hidden argument*/Nullable_1_get_HasValue_m363_MethodInfo_var);
		G_B13_0 = ((*(Vector3_t14 *)((Vector3_t14 *)UnBox (L_41, Vector3_t14_il2cpp_TypeInfo_var))));
		G_B13_1 = L_39;
		if (!L_45)
		{
			G_B14_0 = ((*(Vector3_t14 *)((Vector3_t14 *)UnBox (L_41, Vector3_t14_il2cpp_TypeInfo_var))));
			G_B14_1 = L_39;
			goto IL_0168;
		}
	}
	{
		Vector3_t14  L_46 = Nullable_1_get_Value_m364((&V_3), /*hidden argument*/Nullable_1_get_Value_m364_MethodInfo_var);
		G_B15_0 = L_46;
		G_B15_1 = G_B13_0;
		G_B15_2 = G_B13_1;
		goto IL_016d;
	}

IL_0168:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Defaults_t12_il2cpp_TypeInfo_var);
		Vector3_t14  L_47 = ((Defaults_t12_StaticFields*)Defaults_t12_il2cpp_TypeInfo_var->static_fields)->___up_15;
		G_B15_0 = L_47;
		G_B15_1 = G_B14_0;
		G_B15_2 = G_B14_1;
	}

IL_016d:
	{
		Transform_LookAt_m366(G_B15_2, G_B15_1, G_B15_0, /*hidden argument*/NULL);
	}

IL_0172:
	{
		goto IL_0182;
	}

IL_0177:
	{
		Debug_LogError_m341(NULL /*static, unused*/, _stringLiteral83, /*hidden argument*/NULL);
		return;
	}

IL_0182:
	{
		Vector3U5BU5D_t16* L_48 = V_1;
		GameObject_t34 * L_49 = ___target;
		Transform_t32 * L_50 = GameObject_get_transform_m344(L_49, /*hidden argument*/NULL);
		Vector3_t14  L_51 = Transform_get_eulerAngles_m362(L_50, /*hidden argument*/NULL);
		(*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_48, 1, sizeof(Vector3_t14 )))) = L_51;
		GameObject_t34 * L_52 = ___target;
		Transform_t32 * L_53 = GameObject_get_transform_m344(L_52, /*hidden argument*/NULL);
		Vector3U5BU5D_t16* L_54 = V_1;
		Transform_set_eulerAngles_m368(L_53, (*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_54, 0, sizeof(Vector3_t14 )))), /*hidden argument*/NULL);
		Vector3U5BU5D_t16* L_55 = V_1;
		Vector3U5BU5D_t16* L_56 = V_1;
		float L_57 = (((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_56, 0, sizeof(Vector3_t14 )))->___x_1);
		Vector3U5BU5D_t16* L_58 = V_1;
		float L_59 = (((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_58, 1, sizeof(Vector3_t14 )))->___x_1);
		Vector3U5BU5D_t16* L_60 = V_1;
		float* L_61 = &(((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_60, 2, sizeof(Vector3_t14 )))->___x_1);
		float L_62 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t46_il2cpp_TypeInfo_var);
		float L_63 = Mathf_SmoothDampAngle_m421(NULL /*static, unused*/, L_57, L_59, L_61, L_62, /*hidden argument*/NULL);
		((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_55, 3, sizeof(Vector3_t14 )))->___x_1 = L_63;
		Vector3U5BU5D_t16* L_64 = V_1;
		Vector3U5BU5D_t16* L_65 = V_1;
		float L_66 = (((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_65, 0, sizeof(Vector3_t14 )))->___y_2);
		Vector3U5BU5D_t16* L_67 = V_1;
		float L_68 = (((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_67, 1, sizeof(Vector3_t14 )))->___y_2);
		Vector3U5BU5D_t16* L_69 = V_1;
		float* L_70 = &(((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_69, 2, sizeof(Vector3_t14 )))->___y_2);
		float L_71 = V_0;
		float L_72 = Mathf_SmoothDampAngle_m421(NULL /*static, unused*/, L_66, L_68, L_70, L_71, /*hidden argument*/NULL);
		((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_64, 3, sizeof(Vector3_t14 )))->___y_2 = L_72;
		Vector3U5BU5D_t16* L_73 = V_1;
		Vector3U5BU5D_t16* L_74 = V_1;
		float L_75 = (((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_74, 0, sizeof(Vector3_t14 )))->___z_3);
		Vector3U5BU5D_t16* L_76 = V_1;
		float L_77 = (((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_76, 1, sizeof(Vector3_t14 )))->___z_3);
		Vector3U5BU5D_t16* L_78 = V_1;
		float* L_79 = &(((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_78, 2, sizeof(Vector3_t14 )))->___z_3);
		float L_80 = V_0;
		float L_81 = Mathf_SmoothDampAngle_m421(NULL /*static, unused*/, L_75, L_77, L_79, L_80, /*hidden argument*/NULL);
		((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_73, 3, sizeof(Vector3_t14 )))->___z_3 = L_81;
		GameObject_t34 * L_82 = ___target;
		Transform_t32 * L_83 = GameObject_get_transform_m344(L_82, /*hidden argument*/NULL);
		Vector3U5BU5D_t16* L_84 = V_1;
		Transform_set_eulerAngles_m368(L_83, (*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_84, 3, sizeof(Vector3_t14 )))), /*hidden argument*/NULL);
		Hashtable_t26 * L_85 = ___args;
		bool L_86 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(26 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_85, _stringLiteral54);
		if (!L_86)
		{
			goto IL_03ca;
		}
	}
	{
		Vector3U5BU5D_t16* L_87 = V_1;
		GameObject_t34 * L_88 = ___target;
		Transform_t32 * L_89 = GameObject_get_transform_m344(L_88, /*hidden argument*/NULL);
		Vector3_t14  L_90 = Transform_get_eulerAngles_m362(L_89, /*hidden argument*/NULL);
		(*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_87, 4, sizeof(Vector3_t14 )))) = L_90;
		Hashtable_t26 * L_91 = ___args;
		Object_t * L_92 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_91, _stringLiteral54);
		V_4 = ((String_t*)CastclassSealed(L_92, String_t_il2cpp_TypeInfo_var));
		String_t* L_93 = V_4;
		if (!L_93)
		{
			goto IL_03b3;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		Dictionary_2_t35 * L_94 = ((iTween_t23_StaticFields*)iTween_t23_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24mapC_52;
		if (L_94)
		{
			goto IL_02e9;
		}
	}
	{
		Dictionary_2_t35 * L_95 = (Dictionary_2_t35 *)il2cpp_codegen_object_new (Dictionary_2_t35_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m367(L_95, 3, /*hidden argument*/Dictionary_2__ctor_m367_MethodInfo_var);
		V_5 = L_95;
		Dictionary_2_t35 * L_96 = V_5;
		VirtActionInvoker2< String_t*, int32_t >::Invoke(26 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_96, _stringLiteral10, 0);
		Dictionary_2_t35 * L_97 = V_5;
		VirtActionInvoker2< String_t*, int32_t >::Invoke(26 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_97, _stringLiteral55, 1);
		Dictionary_2_t35 * L_98 = V_5;
		VirtActionInvoker2< String_t*, int32_t >::Invoke(26 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_98, _stringLiteral56, 2);
		Dictionary_2_t35 * L_99 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		((iTween_t23_StaticFields*)iTween_t23_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24mapC_52 = L_99;
	}

IL_02e9:
	{
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		Dictionary_2_t35 * L_100 = ((iTween_t23_StaticFields*)iTween_t23_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24mapC_52;
		String_t* L_101 = V_4;
		bool L_102 = (bool)VirtFuncInvoker2< bool, String_t*, int32_t* >::Invoke(31 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::TryGetValue(!0,!1&) */, L_100, L_101, (&V_6));
		if (!L_102)
		{
			goto IL_03b3;
		}
	}
	{
		int32_t L_103 = V_6;
		if (L_103 == 0)
		{
			goto IL_0314;
		}
		if (L_103 == 1)
		{
			goto IL_0349;
		}
		if (L_103 == 2)
		{
			goto IL_037e;
		}
	}
	{
		goto IL_03b3;
	}

IL_0314:
	{
		Vector3U5BU5D_t16* L_104 = V_1;
		Vector3U5BU5D_t16* L_105 = V_1;
		float L_106 = (((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_105, 0, sizeof(Vector3_t14 )))->___y_2);
		((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_104, 4, sizeof(Vector3_t14 )))->___y_2 = L_106;
		Vector3U5BU5D_t16* L_107 = V_1;
		Vector3U5BU5D_t16* L_108 = V_1;
		float L_109 = (((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_108, 0, sizeof(Vector3_t14 )))->___z_3);
		((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_107, 4, sizeof(Vector3_t14 )))->___z_3 = L_109;
		goto IL_03b3;
	}

IL_0349:
	{
		Vector3U5BU5D_t16* L_110 = V_1;
		Vector3U5BU5D_t16* L_111 = V_1;
		float L_112 = (((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_111, 0, sizeof(Vector3_t14 )))->___x_1);
		((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_110, 4, sizeof(Vector3_t14 )))->___x_1 = L_112;
		Vector3U5BU5D_t16* L_113 = V_1;
		Vector3U5BU5D_t16* L_114 = V_1;
		float L_115 = (((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_114, 0, sizeof(Vector3_t14 )))->___z_3);
		((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_113, 4, sizeof(Vector3_t14 )))->___z_3 = L_115;
		goto IL_03b3;
	}

IL_037e:
	{
		Vector3U5BU5D_t16* L_116 = V_1;
		Vector3U5BU5D_t16* L_117 = V_1;
		float L_118 = (((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_117, 0, sizeof(Vector3_t14 )))->___x_1);
		((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_116, 4, sizeof(Vector3_t14 )))->___x_1 = L_118;
		Vector3U5BU5D_t16* L_119 = V_1;
		Vector3U5BU5D_t16* L_120 = V_1;
		float L_121 = (((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_120, 0, sizeof(Vector3_t14 )))->___y_2);
		((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_119, 4, sizeof(Vector3_t14 )))->___y_2 = L_121;
		goto IL_03b3;
	}

IL_03b3:
	{
		GameObject_t34 * L_122 = ___target;
		Transform_t32 * L_123 = GameObject_get_transform_m344(L_122, /*hidden argument*/NULL);
		Vector3U5BU5D_t16* L_124 = V_1;
		Transform_set_eulerAngles_m368(L_123, (*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_124, 4, sizeof(Vector3_t14 )))), /*hidden argument*/NULL);
	}

IL_03ca:
	{
		return;
	}
}
// System.Void iTween::LookUpdate(UnityEngine.GameObject,UnityEngine.Vector3,System.Single)
extern TypeInfo* ObjectU5BU5D_t41_il2cpp_TypeInfo_var;
extern TypeInfo* Vector3_t14_il2cpp_TypeInfo_var;
extern TypeInfo* Single_t51_il2cpp_TypeInfo_var;
extern TypeInfo* iTween_t23_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral52;
extern Il2CppCodeGenString* _stringLiteral22;
extern "C" void iTween_LookUpdate_m173 (Object_t * __this /* static, unused */, GameObject_t34 * ___target, Vector3_t14  ___looktarget, float ___time, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t41_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5);
		Vector3_t14_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13);
		Single_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		iTween_t23_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		_stringLiteral52 = il2cpp_codegen_string_literal_from_index(52);
		_stringLiteral22 = il2cpp_codegen_string_literal_from_index(22);
		s_Il2CppMethodIntialized = true;
	}
	{
		GameObject_t34 * L_0 = ___target;
		ObjectU5BU5D_t41* L_1 = ((ObjectU5BU5D_t41*)SZArrayNew(ObjectU5BU5D_t41_il2cpp_TypeInfo_var, 4));
		ArrayElementTypeCheck (L_1, _stringLiteral52);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_1, 0, sizeof(Object_t *))) = (Object_t *)_stringLiteral52;
		ObjectU5BU5D_t41* L_2 = L_1;
		Vector3_t14  L_3 = ___looktarget;
		Vector3_t14  L_4 = L_3;
		Object_t * L_5 = Box(Vector3_t14_il2cpp_TypeInfo_var, &L_4);
		ArrayElementTypeCheck (L_2, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1, sizeof(Object_t *))) = (Object_t *)L_5;
		ObjectU5BU5D_t41* L_6 = L_2;
		ArrayElementTypeCheck (L_6, _stringLiteral22);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 2, sizeof(Object_t *))) = (Object_t *)_stringLiteral22;
		ObjectU5BU5D_t41* L_7 = L_6;
		float L_8 = ___time;
		float L_9 = L_8;
		Object_t * L_10 = Box(Single_t51_il2cpp_TypeInfo_var, &L_9);
		ArrayElementTypeCheck (L_7, L_10);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_7, 3, sizeof(Object_t *))) = (Object_t *)L_10;
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		Hashtable_t26 * L_11 = iTween_Hash_m238(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		iTween_LookUpdate_m172(NULL /*static, unused*/, L_0, L_11, /*hidden argument*/NULL);
		return;
	}
}
// System.Single iTween::PathLength(UnityEngine.Transform[])
extern TypeInfo* Vector3U5BU5D_t16_il2cpp_TypeInfo_var;
extern TypeInfo* iTween_t23_il2cpp_TypeInfo_var;
extern "C" float iTween_PathLength_m174 (Object_t * __this /* static, unused */, TransformU5BU5D_t39* ___path, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Vector3U5BU5D_t16_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(12);
		iTween_t23_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		s_Il2CppMethodIntialized = true;
	}
	Vector3U5BU5D_t16* V_0 = {0};
	float V_1 = 0.0f;
	int32_t V_2 = 0;
	Vector3U5BU5D_t16* V_3 = {0};
	Vector3_t14  V_4 = {0};
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	float V_7 = 0.0f;
	Vector3_t14  V_8 = {0};
	{
		TransformU5BU5D_t39* L_0 = ___path;
		V_0 = ((Vector3U5BU5D_t16*)SZArrayNew(Vector3U5BU5D_t16_il2cpp_TypeInfo_var, (((int32_t)((int32_t)(((Array_t *)L_0)->max_length))))));
		V_1 = (0.0f);
		V_2 = 0;
		goto IL_002e;
	}

IL_0016:
	{
		Vector3U5BU5D_t16* L_1 = V_0;
		int32_t L_2 = V_2;
		TransformU5BU5D_t39* L_3 = ___path;
		int32_t L_4 = V_2;
		int32_t L_5 = L_4;
		Vector3_t14  L_6 = Transform_get_position_m369((*(Transform_t32 **)(Transform_t32 **)SZArrayLdElema(L_3, L_5, sizeof(Transform_t32 *))), /*hidden argument*/NULL);
		(*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_1, L_2, sizeof(Vector3_t14 )))) = L_6;
		int32_t L_7 = V_2;
		V_2 = ((int32_t)((int32_t)L_7+(int32_t)1));
	}

IL_002e:
	{
		int32_t L_8 = V_2;
		TransformU5BU5D_t39* L_9 = ___path;
		if ((((int32_t)L_8) < ((int32_t)(((int32_t)((int32_t)(((Array_t *)L_9)->max_length)))))))
		{
			goto IL_0016;
		}
	}
	{
		Vector3U5BU5D_t16* L_10 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		Vector3U5BU5D_t16* L_11 = iTween_PathControlPointGenerator_m248(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		V_3 = L_11;
		Vector3U5BU5D_t16* L_12 = V_3;
		Vector3_t14  L_13 = iTween_Interp_m249(NULL /*static, unused*/, L_12, (0.0f), /*hidden argument*/NULL);
		V_4 = L_13;
		TransformU5BU5D_t39* L_14 = ___path;
		V_5 = ((int32_t)((int32_t)(((int32_t)((int32_t)(((Array_t *)L_14)->max_length))))*(int32_t)((int32_t)20)));
		V_6 = 1;
		goto IL_0084;
	}

IL_005b:
	{
		int32_t L_15 = V_6;
		int32_t L_16 = V_5;
		V_7 = ((float)((float)(((float)((float)L_15)))/(float)(((float)((float)L_16)))));
		Vector3U5BU5D_t16* L_17 = V_3;
		float L_18 = V_7;
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		Vector3_t14  L_19 = iTween_Interp_m249(NULL /*static, unused*/, L_17, L_18, /*hidden argument*/NULL);
		V_8 = L_19;
		float L_20 = V_1;
		Vector3_t14  L_21 = V_4;
		Vector3_t14  L_22 = V_8;
		float L_23 = Vector3_Distance_m378(NULL /*static, unused*/, L_21, L_22, /*hidden argument*/NULL);
		V_1 = ((float)((float)L_20+(float)L_23));
		Vector3_t14  L_24 = V_8;
		V_4 = L_24;
		int32_t L_25 = V_6;
		V_6 = ((int32_t)((int32_t)L_25+(int32_t)1));
	}

IL_0084:
	{
		int32_t L_26 = V_6;
		int32_t L_27 = V_5;
		if ((((int32_t)L_26) <= ((int32_t)L_27)))
		{
			goto IL_005b;
		}
	}
	{
		float L_28 = V_1;
		return L_28;
	}
}
// System.Single iTween::PathLength(UnityEngine.Vector3[])
extern TypeInfo* iTween_t23_il2cpp_TypeInfo_var;
extern "C" float iTween_PathLength_m175 (Object_t * __this /* static, unused */, Vector3U5BU5D_t16* ___path, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		iTween_t23_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	Vector3U5BU5D_t16* V_1 = {0};
	Vector3_t14  V_2 = {0};
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	float V_5 = 0.0f;
	Vector3_t14  V_6 = {0};
	{
		V_0 = (0.0f);
		Vector3U5BU5D_t16* L_0 = ___path;
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		Vector3U5BU5D_t16* L_1 = iTween_PathControlPointGenerator_m248(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_1 = L_1;
		Vector3U5BU5D_t16* L_2 = V_1;
		Vector3_t14  L_3 = iTween_Interp_m249(NULL /*static, unused*/, L_2, (0.0f), /*hidden argument*/NULL);
		V_2 = L_3;
		Vector3U5BU5D_t16* L_4 = ___path;
		V_3 = ((int32_t)((int32_t)(((int32_t)((int32_t)(((Array_t *)L_4)->max_length))))*(int32_t)((int32_t)20)));
		V_4 = 1;
		goto IL_004e;
	}

IL_0028:
	{
		int32_t L_5 = V_4;
		int32_t L_6 = V_3;
		V_5 = ((float)((float)(((float)((float)L_5)))/(float)(((float)((float)L_6)))));
		Vector3U5BU5D_t16* L_7 = V_1;
		float L_8 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		Vector3_t14  L_9 = iTween_Interp_m249(NULL /*static, unused*/, L_7, L_8, /*hidden argument*/NULL);
		V_6 = L_9;
		float L_10 = V_0;
		Vector3_t14  L_11 = V_2;
		Vector3_t14  L_12 = V_6;
		float L_13 = Vector3_Distance_m378(NULL /*static, unused*/, L_11, L_12, /*hidden argument*/NULL);
		V_0 = ((float)((float)L_10+(float)L_13));
		Vector3_t14  L_14 = V_6;
		V_2 = L_14;
		int32_t L_15 = V_4;
		V_4 = ((int32_t)((int32_t)L_15+(int32_t)1));
	}

IL_004e:
	{
		int32_t L_16 = V_4;
		int32_t L_17 = V_3;
		if ((((int32_t)L_16) <= ((int32_t)L_17)))
		{
			goto IL_0028;
		}
	}
	{
		float L_18 = V_0;
		return L_18;
	}
}
// UnityEngine.Texture2D iTween::CameraTexture(UnityEngine.Color)
extern TypeInfo* Texture2D_t40_il2cpp_TypeInfo_var;
extern TypeInfo* ColorU5BU5D_t66_il2cpp_TypeInfo_var;
extern "C" Texture2D_t40 * iTween_CameraTexture_m176 (Object_t * __this /* static, unused */, Color_t13  ___color, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Texture2D_t40_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(49);
		ColorU5BU5D_t66_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(48);
		s_Il2CppMethodIntialized = true;
	}
	Texture2D_t40 * V_0 = {0};
	ColorU5BU5D_t66* V_1 = {0};
	int32_t V_2 = 0;
	{
		int32_t L_0 = Screen_get_width_m424(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_1 = Screen_get_height_m425(NULL /*static, unused*/, /*hidden argument*/NULL);
		Texture2D_t40 * L_2 = (Texture2D_t40 *)il2cpp_codegen_object_new (Texture2D_t40_il2cpp_TypeInfo_var);
		Texture2D__ctor_m426(L_2, L_0, L_1, 5, 0, /*hidden argument*/NULL);
		V_0 = L_2;
		int32_t L_3 = Screen_get_width_m424(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_4 = Screen_get_height_m425(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_1 = ((ColorU5BU5D_t66*)SZArrayNew(ColorU5BU5D_t66_il2cpp_TypeInfo_var, ((int32_t)((int32_t)L_3*(int32_t)L_4))));
		V_2 = 0;
		goto IL_003b;
	}

IL_002a:
	{
		ColorU5BU5D_t66* L_5 = V_1;
		int32_t L_6 = V_2;
		Color_t13  L_7 = ___color;
		(*(Color_t13 *)((Color_t13 *)(Color_t13 *)SZArrayLdElema(L_5, L_6, sizeof(Color_t13 )))) = L_7;
		int32_t L_8 = V_2;
		V_2 = ((int32_t)((int32_t)L_8+(int32_t)1));
	}

IL_003b:
	{
		int32_t L_9 = V_2;
		ColorU5BU5D_t66* L_10 = V_1;
		if ((((int32_t)L_9) < ((int32_t)(((int32_t)((int32_t)(((Array_t *)L_10)->max_length)))))))
		{
			goto IL_002a;
		}
	}
	{
		Texture2D_t40 * L_11 = V_0;
		ColorU5BU5D_t66* L_12 = V_1;
		Texture2D_SetPixels_m427(L_11, L_12, /*hidden argument*/NULL);
		Texture2D_t40 * L_13 = V_0;
		Texture2D_Apply_m428(L_13, /*hidden argument*/NULL);
		Texture2D_t40 * L_14 = V_0;
		return L_14;
	}
}
// System.Void iTween::PutOnPath(UnityEngine.GameObject,UnityEngine.Vector3[],System.Single)
extern TypeInfo* iTween_t23_il2cpp_TypeInfo_var;
extern "C" void iTween_PutOnPath_m177 (Object_t * __this /* static, unused */, GameObject_t34 * ___target, Vector3U5BU5D_t16* ___path, float ___percent, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		iTween_t23_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		s_Il2CppMethodIntialized = true;
	}
	{
		GameObject_t34 * L_0 = ___target;
		Transform_t32 * L_1 = GameObject_get_transform_m344(L_0, /*hidden argument*/NULL);
		Vector3U5BU5D_t16* L_2 = ___path;
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		Vector3U5BU5D_t16* L_3 = iTween_PathControlPointGenerator_m248(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		float L_4 = ___percent;
		Vector3_t14  L_5 = iTween_Interp_m249(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		Transform_set_position_m374(L_1, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void iTween::PutOnPath(UnityEngine.Transform,UnityEngine.Vector3[],System.Single)
extern TypeInfo* iTween_t23_il2cpp_TypeInfo_var;
extern "C" void iTween_PutOnPath_m178 (Object_t * __this /* static, unused */, Transform_t32 * ___target, Vector3U5BU5D_t16* ___path, float ___percent, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		iTween_t23_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		s_Il2CppMethodIntialized = true;
	}
	{
		Transform_t32 * L_0 = ___target;
		Vector3U5BU5D_t16* L_1 = ___path;
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		Vector3U5BU5D_t16* L_2 = iTween_PathControlPointGenerator_m248(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		float L_3 = ___percent;
		Vector3_t14  L_4 = iTween_Interp_m249(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		Transform_set_position_m374(L_0, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void iTween::PutOnPath(UnityEngine.GameObject,UnityEngine.Transform[],System.Single)
extern TypeInfo* Vector3U5BU5D_t16_il2cpp_TypeInfo_var;
extern TypeInfo* iTween_t23_il2cpp_TypeInfo_var;
extern "C" void iTween_PutOnPath_m179 (Object_t * __this /* static, unused */, GameObject_t34 * ___target, TransformU5BU5D_t39* ___path, float ___percent, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Vector3U5BU5D_t16_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(12);
		iTween_t23_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		s_Il2CppMethodIntialized = true;
	}
	Vector3U5BU5D_t16* V_0 = {0};
	int32_t V_1 = 0;
	{
		TransformU5BU5D_t39* L_0 = ___path;
		V_0 = ((Vector3U5BU5D_t16*)SZArrayNew(Vector3U5BU5D_t16_il2cpp_TypeInfo_var, (((int32_t)((int32_t)(((Array_t *)L_0)->max_length))))));
		V_1 = 0;
		goto IL_0028;
	}

IL_0010:
	{
		Vector3U5BU5D_t16* L_1 = V_0;
		int32_t L_2 = V_1;
		TransformU5BU5D_t39* L_3 = ___path;
		int32_t L_4 = V_1;
		int32_t L_5 = L_4;
		Vector3_t14  L_6 = Transform_get_position_m369((*(Transform_t32 **)(Transform_t32 **)SZArrayLdElema(L_3, L_5, sizeof(Transform_t32 *))), /*hidden argument*/NULL);
		(*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_1, L_2, sizeof(Vector3_t14 )))) = L_6;
		int32_t L_7 = V_1;
		V_1 = ((int32_t)((int32_t)L_7+(int32_t)1));
	}

IL_0028:
	{
		int32_t L_8 = V_1;
		TransformU5BU5D_t39* L_9 = ___path;
		if ((((int32_t)L_8) < ((int32_t)(((int32_t)((int32_t)(((Array_t *)L_9)->max_length)))))))
		{
			goto IL_0010;
		}
	}
	{
		GameObject_t34 * L_10 = ___target;
		Transform_t32 * L_11 = GameObject_get_transform_m344(L_10, /*hidden argument*/NULL);
		Vector3U5BU5D_t16* L_12 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		Vector3U5BU5D_t16* L_13 = iTween_PathControlPointGenerator_m248(NULL /*static, unused*/, L_12, /*hidden argument*/NULL);
		float L_14 = ___percent;
		Vector3_t14  L_15 = iTween_Interp_m249(NULL /*static, unused*/, L_13, L_14, /*hidden argument*/NULL);
		Transform_set_position_m374(L_11, L_15, /*hidden argument*/NULL);
		return;
	}
}
// System.Void iTween::PutOnPath(UnityEngine.Transform,UnityEngine.Transform[],System.Single)
extern TypeInfo* Vector3U5BU5D_t16_il2cpp_TypeInfo_var;
extern TypeInfo* iTween_t23_il2cpp_TypeInfo_var;
extern "C" void iTween_PutOnPath_m180 (Object_t * __this /* static, unused */, Transform_t32 * ___target, TransformU5BU5D_t39* ___path, float ___percent, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Vector3U5BU5D_t16_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(12);
		iTween_t23_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		s_Il2CppMethodIntialized = true;
	}
	Vector3U5BU5D_t16* V_0 = {0};
	int32_t V_1 = 0;
	{
		TransformU5BU5D_t39* L_0 = ___path;
		V_0 = ((Vector3U5BU5D_t16*)SZArrayNew(Vector3U5BU5D_t16_il2cpp_TypeInfo_var, (((int32_t)((int32_t)(((Array_t *)L_0)->max_length))))));
		V_1 = 0;
		goto IL_0028;
	}

IL_0010:
	{
		Vector3U5BU5D_t16* L_1 = V_0;
		int32_t L_2 = V_1;
		TransformU5BU5D_t39* L_3 = ___path;
		int32_t L_4 = V_1;
		int32_t L_5 = L_4;
		Vector3_t14  L_6 = Transform_get_position_m369((*(Transform_t32 **)(Transform_t32 **)SZArrayLdElema(L_3, L_5, sizeof(Transform_t32 *))), /*hidden argument*/NULL);
		(*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_1, L_2, sizeof(Vector3_t14 )))) = L_6;
		int32_t L_7 = V_1;
		V_1 = ((int32_t)((int32_t)L_7+(int32_t)1));
	}

IL_0028:
	{
		int32_t L_8 = V_1;
		TransformU5BU5D_t39* L_9 = ___path;
		if ((((int32_t)L_8) < ((int32_t)(((int32_t)((int32_t)(((Array_t *)L_9)->max_length)))))))
		{
			goto IL_0010;
		}
	}
	{
		Transform_t32 * L_10 = ___target;
		Vector3U5BU5D_t16* L_11 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		Vector3U5BU5D_t16* L_12 = iTween_PathControlPointGenerator_m248(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		float L_13 = ___percent;
		Vector3_t14  L_14 = iTween_Interp_m249(NULL /*static, unused*/, L_12, L_13, /*hidden argument*/NULL);
		Transform_set_position_m374(L_10, L_14, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector3 iTween::PointOnPath(UnityEngine.Transform[],System.Single)
extern TypeInfo* Vector3U5BU5D_t16_il2cpp_TypeInfo_var;
extern TypeInfo* iTween_t23_il2cpp_TypeInfo_var;
extern "C" Vector3_t14  iTween_PointOnPath_m181 (Object_t * __this /* static, unused */, TransformU5BU5D_t39* ___path, float ___percent, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Vector3U5BU5D_t16_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(12);
		iTween_t23_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		s_Il2CppMethodIntialized = true;
	}
	Vector3U5BU5D_t16* V_0 = {0};
	int32_t V_1 = 0;
	{
		TransformU5BU5D_t39* L_0 = ___path;
		V_0 = ((Vector3U5BU5D_t16*)SZArrayNew(Vector3U5BU5D_t16_il2cpp_TypeInfo_var, (((int32_t)((int32_t)(((Array_t *)L_0)->max_length))))));
		V_1 = 0;
		goto IL_0028;
	}

IL_0010:
	{
		Vector3U5BU5D_t16* L_1 = V_0;
		int32_t L_2 = V_1;
		TransformU5BU5D_t39* L_3 = ___path;
		int32_t L_4 = V_1;
		int32_t L_5 = L_4;
		Vector3_t14  L_6 = Transform_get_position_m369((*(Transform_t32 **)(Transform_t32 **)SZArrayLdElema(L_3, L_5, sizeof(Transform_t32 *))), /*hidden argument*/NULL);
		(*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_1, L_2, sizeof(Vector3_t14 )))) = L_6;
		int32_t L_7 = V_1;
		V_1 = ((int32_t)((int32_t)L_7+(int32_t)1));
	}

IL_0028:
	{
		int32_t L_8 = V_1;
		TransformU5BU5D_t39* L_9 = ___path;
		if ((((int32_t)L_8) < ((int32_t)(((int32_t)((int32_t)(((Array_t *)L_9)->max_length)))))))
		{
			goto IL_0010;
		}
	}
	{
		Vector3U5BU5D_t16* L_10 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		Vector3U5BU5D_t16* L_11 = iTween_PathControlPointGenerator_m248(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		float L_12 = ___percent;
		Vector3_t14  L_13 = iTween_Interp_m249(NULL /*static, unused*/, L_11, L_12, /*hidden argument*/NULL);
		return L_13;
	}
}
// System.Void iTween::DrawLine(UnityEngine.Vector3[])
extern TypeInfo* Defaults_t12_il2cpp_TypeInfo_var;
extern TypeInfo* iTween_t23_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral84;
extern "C" void iTween_DrawLine_m182 (Object_t * __this /* static, unused */, Vector3U5BU5D_t16* ___line, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Defaults_t12_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11);
		iTween_t23_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		_stringLiteral84 = il2cpp_codegen_string_literal_from_index(84);
		s_Il2CppMethodIntialized = true;
	}
	{
		Vector3U5BU5D_t16* L_0 = ___line;
		if ((((int32_t)(((int32_t)((int32_t)(((Array_t *)L_0)->max_length))))) <= ((int32_t)0)))
		{
			goto IL_0019;
		}
	}
	{
		Vector3U5BU5D_t16* L_1 = ___line;
		IL2CPP_RUNTIME_CLASS_INIT(Defaults_t12_il2cpp_TypeInfo_var);
		Color_t13  L_2 = ((Defaults_t12_StaticFields*)Defaults_t12_il2cpp_TypeInfo_var->static_fields)->___color_9;
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		iTween_DrawLineHelper_m246(NULL /*static, unused*/, L_1, L_2, _stringLiteral84, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void iTween::DrawLine(UnityEngine.Vector3[],UnityEngine.Color)
extern TypeInfo* iTween_t23_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral84;
extern "C" void iTween_DrawLine_m183 (Object_t * __this /* static, unused */, Vector3U5BU5D_t16* ___line, Color_t13  ___color, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		iTween_t23_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		_stringLiteral84 = il2cpp_codegen_string_literal_from_index(84);
		s_Il2CppMethodIntialized = true;
	}
	{
		Vector3U5BU5D_t16* L_0 = ___line;
		if ((((int32_t)(((int32_t)((int32_t)(((Array_t *)L_0)->max_length))))) <= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		Vector3U5BU5D_t16* L_1 = ___line;
		Color_t13  L_2 = ___color;
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		iTween_DrawLineHelper_m246(NULL /*static, unused*/, L_1, L_2, _stringLiteral84, /*hidden argument*/NULL);
	}

IL_0015:
	{
		return;
	}
}
// System.Void iTween::DrawLine(UnityEngine.Transform[])
extern TypeInfo* Vector3U5BU5D_t16_il2cpp_TypeInfo_var;
extern TypeInfo* Defaults_t12_il2cpp_TypeInfo_var;
extern TypeInfo* iTween_t23_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral84;
extern "C" void iTween_DrawLine_m184 (Object_t * __this /* static, unused */, TransformU5BU5D_t39* ___line, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Vector3U5BU5D_t16_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(12);
		Defaults_t12_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11);
		iTween_t23_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		_stringLiteral84 = il2cpp_codegen_string_literal_from_index(84);
		s_Il2CppMethodIntialized = true;
	}
	Vector3U5BU5D_t16* V_0 = {0};
	int32_t V_1 = 0;
	{
		TransformU5BU5D_t39* L_0 = ___line;
		if ((((int32_t)(((int32_t)((int32_t)(((Array_t *)L_0)->max_length))))) <= ((int32_t)0)))
		{
			goto IL_004a;
		}
	}
	{
		TransformU5BU5D_t39* L_1 = ___line;
		V_0 = ((Vector3U5BU5D_t16*)SZArrayNew(Vector3U5BU5D_t16_il2cpp_TypeInfo_var, (((int32_t)((int32_t)(((Array_t *)L_1)->max_length))))));
		V_1 = 0;
		goto IL_0031;
	}

IL_0019:
	{
		Vector3U5BU5D_t16* L_2 = V_0;
		int32_t L_3 = V_1;
		TransformU5BU5D_t39* L_4 = ___line;
		int32_t L_5 = V_1;
		int32_t L_6 = L_5;
		Vector3_t14  L_7 = Transform_get_position_m369((*(Transform_t32 **)(Transform_t32 **)SZArrayLdElema(L_4, L_6, sizeof(Transform_t32 *))), /*hidden argument*/NULL);
		(*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_2, L_3, sizeof(Vector3_t14 )))) = L_7;
		int32_t L_8 = V_1;
		V_1 = ((int32_t)((int32_t)L_8+(int32_t)1));
	}

IL_0031:
	{
		int32_t L_9 = V_1;
		TransformU5BU5D_t39* L_10 = ___line;
		if ((((int32_t)L_9) < ((int32_t)(((int32_t)((int32_t)(((Array_t *)L_10)->max_length)))))))
		{
			goto IL_0019;
		}
	}
	{
		Vector3U5BU5D_t16* L_11 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Defaults_t12_il2cpp_TypeInfo_var);
		Color_t13  L_12 = ((Defaults_t12_StaticFields*)Defaults_t12_il2cpp_TypeInfo_var->static_fields)->___color_9;
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		iTween_DrawLineHelper_m246(NULL /*static, unused*/, L_11, L_12, _stringLiteral84, /*hidden argument*/NULL);
	}

IL_004a:
	{
		return;
	}
}
// System.Void iTween::DrawLine(UnityEngine.Transform[],UnityEngine.Color)
extern TypeInfo* Vector3U5BU5D_t16_il2cpp_TypeInfo_var;
extern TypeInfo* iTween_t23_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral84;
extern "C" void iTween_DrawLine_m185 (Object_t * __this /* static, unused */, TransformU5BU5D_t39* ___line, Color_t13  ___color, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Vector3U5BU5D_t16_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(12);
		iTween_t23_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		_stringLiteral84 = il2cpp_codegen_string_literal_from_index(84);
		s_Il2CppMethodIntialized = true;
	}
	Vector3U5BU5D_t16* V_0 = {0};
	int32_t V_1 = 0;
	{
		TransformU5BU5D_t39* L_0 = ___line;
		if ((((int32_t)(((int32_t)((int32_t)(((Array_t *)L_0)->max_length))))) <= ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		TransformU5BU5D_t39* L_1 = ___line;
		V_0 = ((Vector3U5BU5D_t16*)SZArrayNew(Vector3U5BU5D_t16_il2cpp_TypeInfo_var, (((int32_t)((int32_t)(((Array_t *)L_1)->max_length))))));
		V_1 = 0;
		goto IL_0031;
	}

IL_0019:
	{
		Vector3U5BU5D_t16* L_2 = V_0;
		int32_t L_3 = V_1;
		TransformU5BU5D_t39* L_4 = ___line;
		int32_t L_5 = V_1;
		int32_t L_6 = L_5;
		Vector3_t14  L_7 = Transform_get_position_m369((*(Transform_t32 **)(Transform_t32 **)SZArrayLdElema(L_4, L_6, sizeof(Transform_t32 *))), /*hidden argument*/NULL);
		(*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_2, L_3, sizeof(Vector3_t14 )))) = L_7;
		int32_t L_8 = V_1;
		V_1 = ((int32_t)((int32_t)L_8+(int32_t)1));
	}

IL_0031:
	{
		int32_t L_9 = V_1;
		TransformU5BU5D_t39* L_10 = ___line;
		if ((((int32_t)L_9) < ((int32_t)(((int32_t)((int32_t)(((Array_t *)L_10)->max_length)))))))
		{
			goto IL_0019;
		}
	}
	{
		Vector3U5BU5D_t16* L_11 = V_0;
		Color_t13  L_12 = ___color;
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		iTween_DrawLineHelper_m246(NULL /*static, unused*/, L_11, L_12, _stringLiteral84, /*hidden argument*/NULL);
	}

IL_0046:
	{
		return;
	}
}
// System.Void iTween::DrawLineGizmos(UnityEngine.Vector3[])
extern TypeInfo* Defaults_t12_il2cpp_TypeInfo_var;
extern TypeInfo* iTween_t23_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral84;
extern "C" void iTween_DrawLineGizmos_m186 (Object_t * __this /* static, unused */, Vector3U5BU5D_t16* ___line, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Defaults_t12_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11);
		iTween_t23_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		_stringLiteral84 = il2cpp_codegen_string_literal_from_index(84);
		s_Il2CppMethodIntialized = true;
	}
	{
		Vector3U5BU5D_t16* L_0 = ___line;
		if ((((int32_t)(((int32_t)((int32_t)(((Array_t *)L_0)->max_length))))) <= ((int32_t)0)))
		{
			goto IL_0019;
		}
	}
	{
		Vector3U5BU5D_t16* L_1 = ___line;
		IL2CPP_RUNTIME_CLASS_INIT(Defaults_t12_il2cpp_TypeInfo_var);
		Color_t13  L_2 = ((Defaults_t12_StaticFields*)Defaults_t12_il2cpp_TypeInfo_var->static_fields)->___color_9;
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		iTween_DrawLineHelper_m246(NULL /*static, unused*/, L_1, L_2, _stringLiteral84, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void iTween::DrawLineGizmos(UnityEngine.Vector3[],UnityEngine.Color)
extern TypeInfo* iTween_t23_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral84;
extern "C" void iTween_DrawLineGizmos_m187 (Object_t * __this /* static, unused */, Vector3U5BU5D_t16* ___line, Color_t13  ___color, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		iTween_t23_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		_stringLiteral84 = il2cpp_codegen_string_literal_from_index(84);
		s_Il2CppMethodIntialized = true;
	}
	{
		Vector3U5BU5D_t16* L_0 = ___line;
		if ((((int32_t)(((int32_t)((int32_t)(((Array_t *)L_0)->max_length))))) <= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		Vector3U5BU5D_t16* L_1 = ___line;
		Color_t13  L_2 = ___color;
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		iTween_DrawLineHelper_m246(NULL /*static, unused*/, L_1, L_2, _stringLiteral84, /*hidden argument*/NULL);
	}

IL_0015:
	{
		return;
	}
}
// System.Void iTween::DrawLineGizmos(UnityEngine.Transform[])
extern TypeInfo* Vector3U5BU5D_t16_il2cpp_TypeInfo_var;
extern TypeInfo* Defaults_t12_il2cpp_TypeInfo_var;
extern TypeInfo* iTween_t23_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral84;
extern "C" void iTween_DrawLineGizmos_m188 (Object_t * __this /* static, unused */, TransformU5BU5D_t39* ___line, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Vector3U5BU5D_t16_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(12);
		Defaults_t12_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11);
		iTween_t23_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		_stringLiteral84 = il2cpp_codegen_string_literal_from_index(84);
		s_Il2CppMethodIntialized = true;
	}
	Vector3U5BU5D_t16* V_0 = {0};
	int32_t V_1 = 0;
	{
		TransformU5BU5D_t39* L_0 = ___line;
		if ((((int32_t)(((int32_t)((int32_t)(((Array_t *)L_0)->max_length))))) <= ((int32_t)0)))
		{
			goto IL_004a;
		}
	}
	{
		TransformU5BU5D_t39* L_1 = ___line;
		V_0 = ((Vector3U5BU5D_t16*)SZArrayNew(Vector3U5BU5D_t16_il2cpp_TypeInfo_var, (((int32_t)((int32_t)(((Array_t *)L_1)->max_length))))));
		V_1 = 0;
		goto IL_0031;
	}

IL_0019:
	{
		Vector3U5BU5D_t16* L_2 = V_0;
		int32_t L_3 = V_1;
		TransformU5BU5D_t39* L_4 = ___line;
		int32_t L_5 = V_1;
		int32_t L_6 = L_5;
		Vector3_t14  L_7 = Transform_get_position_m369((*(Transform_t32 **)(Transform_t32 **)SZArrayLdElema(L_4, L_6, sizeof(Transform_t32 *))), /*hidden argument*/NULL);
		(*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_2, L_3, sizeof(Vector3_t14 )))) = L_7;
		int32_t L_8 = V_1;
		V_1 = ((int32_t)((int32_t)L_8+(int32_t)1));
	}

IL_0031:
	{
		int32_t L_9 = V_1;
		TransformU5BU5D_t39* L_10 = ___line;
		if ((((int32_t)L_9) < ((int32_t)(((int32_t)((int32_t)(((Array_t *)L_10)->max_length)))))))
		{
			goto IL_0019;
		}
	}
	{
		Vector3U5BU5D_t16* L_11 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Defaults_t12_il2cpp_TypeInfo_var);
		Color_t13  L_12 = ((Defaults_t12_StaticFields*)Defaults_t12_il2cpp_TypeInfo_var->static_fields)->___color_9;
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		iTween_DrawLineHelper_m246(NULL /*static, unused*/, L_11, L_12, _stringLiteral84, /*hidden argument*/NULL);
	}

IL_004a:
	{
		return;
	}
}
// System.Void iTween::DrawLineGizmos(UnityEngine.Transform[],UnityEngine.Color)
extern TypeInfo* Vector3U5BU5D_t16_il2cpp_TypeInfo_var;
extern TypeInfo* iTween_t23_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral84;
extern "C" void iTween_DrawLineGizmos_m189 (Object_t * __this /* static, unused */, TransformU5BU5D_t39* ___line, Color_t13  ___color, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Vector3U5BU5D_t16_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(12);
		iTween_t23_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		_stringLiteral84 = il2cpp_codegen_string_literal_from_index(84);
		s_Il2CppMethodIntialized = true;
	}
	Vector3U5BU5D_t16* V_0 = {0};
	int32_t V_1 = 0;
	{
		TransformU5BU5D_t39* L_0 = ___line;
		if ((((int32_t)(((int32_t)((int32_t)(((Array_t *)L_0)->max_length))))) <= ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		TransformU5BU5D_t39* L_1 = ___line;
		V_0 = ((Vector3U5BU5D_t16*)SZArrayNew(Vector3U5BU5D_t16_il2cpp_TypeInfo_var, (((int32_t)((int32_t)(((Array_t *)L_1)->max_length))))));
		V_1 = 0;
		goto IL_0031;
	}

IL_0019:
	{
		Vector3U5BU5D_t16* L_2 = V_0;
		int32_t L_3 = V_1;
		TransformU5BU5D_t39* L_4 = ___line;
		int32_t L_5 = V_1;
		int32_t L_6 = L_5;
		Vector3_t14  L_7 = Transform_get_position_m369((*(Transform_t32 **)(Transform_t32 **)SZArrayLdElema(L_4, L_6, sizeof(Transform_t32 *))), /*hidden argument*/NULL);
		(*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_2, L_3, sizeof(Vector3_t14 )))) = L_7;
		int32_t L_8 = V_1;
		V_1 = ((int32_t)((int32_t)L_8+(int32_t)1));
	}

IL_0031:
	{
		int32_t L_9 = V_1;
		TransformU5BU5D_t39* L_10 = ___line;
		if ((((int32_t)L_9) < ((int32_t)(((int32_t)((int32_t)(((Array_t *)L_10)->max_length)))))))
		{
			goto IL_0019;
		}
	}
	{
		Vector3U5BU5D_t16* L_11 = V_0;
		Color_t13  L_12 = ___color;
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		iTween_DrawLineHelper_m246(NULL /*static, unused*/, L_11, L_12, _stringLiteral84, /*hidden argument*/NULL);
	}

IL_0046:
	{
		return;
	}
}
// System.Void iTween::DrawLineHandles(UnityEngine.Vector3[])
extern TypeInfo* Defaults_t12_il2cpp_TypeInfo_var;
extern TypeInfo* iTween_t23_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral85;
extern "C" void iTween_DrawLineHandles_m190 (Object_t * __this /* static, unused */, Vector3U5BU5D_t16* ___line, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Defaults_t12_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11);
		iTween_t23_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		_stringLiteral85 = il2cpp_codegen_string_literal_from_index(85);
		s_Il2CppMethodIntialized = true;
	}
	{
		Vector3U5BU5D_t16* L_0 = ___line;
		if ((((int32_t)(((int32_t)((int32_t)(((Array_t *)L_0)->max_length))))) <= ((int32_t)0)))
		{
			goto IL_0019;
		}
	}
	{
		Vector3U5BU5D_t16* L_1 = ___line;
		IL2CPP_RUNTIME_CLASS_INIT(Defaults_t12_il2cpp_TypeInfo_var);
		Color_t13  L_2 = ((Defaults_t12_StaticFields*)Defaults_t12_il2cpp_TypeInfo_var->static_fields)->___color_9;
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		iTween_DrawLineHelper_m246(NULL /*static, unused*/, L_1, L_2, _stringLiteral85, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void iTween::DrawLineHandles(UnityEngine.Vector3[],UnityEngine.Color)
extern TypeInfo* iTween_t23_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral85;
extern "C" void iTween_DrawLineHandles_m191 (Object_t * __this /* static, unused */, Vector3U5BU5D_t16* ___line, Color_t13  ___color, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		iTween_t23_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		_stringLiteral85 = il2cpp_codegen_string_literal_from_index(85);
		s_Il2CppMethodIntialized = true;
	}
	{
		Vector3U5BU5D_t16* L_0 = ___line;
		if ((((int32_t)(((int32_t)((int32_t)(((Array_t *)L_0)->max_length))))) <= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		Vector3U5BU5D_t16* L_1 = ___line;
		Color_t13  L_2 = ___color;
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		iTween_DrawLineHelper_m246(NULL /*static, unused*/, L_1, L_2, _stringLiteral85, /*hidden argument*/NULL);
	}

IL_0015:
	{
		return;
	}
}
// System.Void iTween::DrawLineHandles(UnityEngine.Transform[])
extern TypeInfo* Vector3U5BU5D_t16_il2cpp_TypeInfo_var;
extern TypeInfo* Defaults_t12_il2cpp_TypeInfo_var;
extern TypeInfo* iTween_t23_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral85;
extern "C" void iTween_DrawLineHandles_m192 (Object_t * __this /* static, unused */, TransformU5BU5D_t39* ___line, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Vector3U5BU5D_t16_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(12);
		Defaults_t12_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11);
		iTween_t23_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		_stringLiteral85 = il2cpp_codegen_string_literal_from_index(85);
		s_Il2CppMethodIntialized = true;
	}
	Vector3U5BU5D_t16* V_0 = {0};
	int32_t V_1 = 0;
	{
		TransformU5BU5D_t39* L_0 = ___line;
		if ((((int32_t)(((int32_t)((int32_t)(((Array_t *)L_0)->max_length))))) <= ((int32_t)0)))
		{
			goto IL_004a;
		}
	}
	{
		TransformU5BU5D_t39* L_1 = ___line;
		V_0 = ((Vector3U5BU5D_t16*)SZArrayNew(Vector3U5BU5D_t16_il2cpp_TypeInfo_var, (((int32_t)((int32_t)(((Array_t *)L_1)->max_length))))));
		V_1 = 0;
		goto IL_0031;
	}

IL_0019:
	{
		Vector3U5BU5D_t16* L_2 = V_0;
		int32_t L_3 = V_1;
		TransformU5BU5D_t39* L_4 = ___line;
		int32_t L_5 = V_1;
		int32_t L_6 = L_5;
		Vector3_t14  L_7 = Transform_get_position_m369((*(Transform_t32 **)(Transform_t32 **)SZArrayLdElema(L_4, L_6, sizeof(Transform_t32 *))), /*hidden argument*/NULL);
		(*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_2, L_3, sizeof(Vector3_t14 )))) = L_7;
		int32_t L_8 = V_1;
		V_1 = ((int32_t)((int32_t)L_8+(int32_t)1));
	}

IL_0031:
	{
		int32_t L_9 = V_1;
		TransformU5BU5D_t39* L_10 = ___line;
		if ((((int32_t)L_9) < ((int32_t)(((int32_t)((int32_t)(((Array_t *)L_10)->max_length)))))))
		{
			goto IL_0019;
		}
	}
	{
		Vector3U5BU5D_t16* L_11 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Defaults_t12_il2cpp_TypeInfo_var);
		Color_t13  L_12 = ((Defaults_t12_StaticFields*)Defaults_t12_il2cpp_TypeInfo_var->static_fields)->___color_9;
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		iTween_DrawLineHelper_m246(NULL /*static, unused*/, L_11, L_12, _stringLiteral85, /*hidden argument*/NULL);
	}

IL_004a:
	{
		return;
	}
}
// System.Void iTween::DrawLineHandles(UnityEngine.Transform[],UnityEngine.Color)
extern TypeInfo* Vector3U5BU5D_t16_il2cpp_TypeInfo_var;
extern TypeInfo* iTween_t23_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral85;
extern "C" void iTween_DrawLineHandles_m193 (Object_t * __this /* static, unused */, TransformU5BU5D_t39* ___line, Color_t13  ___color, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Vector3U5BU5D_t16_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(12);
		iTween_t23_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		_stringLiteral85 = il2cpp_codegen_string_literal_from_index(85);
		s_Il2CppMethodIntialized = true;
	}
	Vector3U5BU5D_t16* V_0 = {0};
	int32_t V_1 = 0;
	{
		TransformU5BU5D_t39* L_0 = ___line;
		if ((((int32_t)(((int32_t)((int32_t)(((Array_t *)L_0)->max_length))))) <= ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		TransformU5BU5D_t39* L_1 = ___line;
		V_0 = ((Vector3U5BU5D_t16*)SZArrayNew(Vector3U5BU5D_t16_il2cpp_TypeInfo_var, (((int32_t)((int32_t)(((Array_t *)L_1)->max_length))))));
		V_1 = 0;
		goto IL_0031;
	}

IL_0019:
	{
		Vector3U5BU5D_t16* L_2 = V_0;
		int32_t L_3 = V_1;
		TransformU5BU5D_t39* L_4 = ___line;
		int32_t L_5 = V_1;
		int32_t L_6 = L_5;
		Vector3_t14  L_7 = Transform_get_position_m369((*(Transform_t32 **)(Transform_t32 **)SZArrayLdElema(L_4, L_6, sizeof(Transform_t32 *))), /*hidden argument*/NULL);
		(*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_2, L_3, sizeof(Vector3_t14 )))) = L_7;
		int32_t L_8 = V_1;
		V_1 = ((int32_t)((int32_t)L_8+(int32_t)1));
	}

IL_0031:
	{
		int32_t L_9 = V_1;
		TransformU5BU5D_t39* L_10 = ___line;
		if ((((int32_t)L_9) < ((int32_t)(((int32_t)((int32_t)(((Array_t *)L_10)->max_length)))))))
		{
			goto IL_0019;
		}
	}
	{
		Vector3U5BU5D_t16* L_11 = V_0;
		Color_t13  L_12 = ___color;
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		iTween_DrawLineHelper_m246(NULL /*static, unused*/, L_11, L_12, _stringLiteral85, /*hidden argument*/NULL);
	}

IL_0046:
	{
		return;
	}
}
// UnityEngine.Vector3 iTween::PointOnPath(UnityEngine.Vector3[],System.Single)
extern TypeInfo* iTween_t23_il2cpp_TypeInfo_var;
extern "C" Vector3_t14  iTween_PointOnPath_m194 (Object_t * __this /* static, unused */, Vector3U5BU5D_t16* ___path, float ___percent, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		iTween_t23_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		s_Il2CppMethodIntialized = true;
	}
	{
		Vector3U5BU5D_t16* L_0 = ___path;
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		Vector3U5BU5D_t16* L_1 = iTween_PathControlPointGenerator_m248(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		float L_2 = ___percent;
		Vector3_t14  L_3 = iTween_Interp_m249(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Void iTween::DrawPath(UnityEngine.Vector3[])
extern TypeInfo* Defaults_t12_il2cpp_TypeInfo_var;
extern TypeInfo* iTween_t23_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral84;
extern "C" void iTween_DrawPath_m195 (Object_t * __this /* static, unused */, Vector3U5BU5D_t16* ___path, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Defaults_t12_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11);
		iTween_t23_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		_stringLiteral84 = il2cpp_codegen_string_literal_from_index(84);
		s_Il2CppMethodIntialized = true;
	}
	{
		Vector3U5BU5D_t16* L_0 = ___path;
		if ((((int32_t)(((int32_t)((int32_t)(((Array_t *)L_0)->max_length))))) <= ((int32_t)0)))
		{
			goto IL_0019;
		}
	}
	{
		Vector3U5BU5D_t16* L_1 = ___path;
		IL2CPP_RUNTIME_CLASS_INIT(Defaults_t12_il2cpp_TypeInfo_var);
		Color_t13  L_2 = ((Defaults_t12_StaticFields*)Defaults_t12_il2cpp_TypeInfo_var->static_fields)->___color_9;
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		iTween_DrawPathHelper_m247(NULL /*static, unused*/, L_1, L_2, _stringLiteral84, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void iTween::DrawPath(UnityEngine.Vector3[],UnityEngine.Color)
extern TypeInfo* iTween_t23_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral84;
extern "C" void iTween_DrawPath_m196 (Object_t * __this /* static, unused */, Vector3U5BU5D_t16* ___path, Color_t13  ___color, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		iTween_t23_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		_stringLiteral84 = il2cpp_codegen_string_literal_from_index(84);
		s_Il2CppMethodIntialized = true;
	}
	{
		Vector3U5BU5D_t16* L_0 = ___path;
		if ((((int32_t)(((int32_t)((int32_t)(((Array_t *)L_0)->max_length))))) <= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		Vector3U5BU5D_t16* L_1 = ___path;
		Color_t13  L_2 = ___color;
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		iTween_DrawPathHelper_m247(NULL /*static, unused*/, L_1, L_2, _stringLiteral84, /*hidden argument*/NULL);
	}

IL_0015:
	{
		return;
	}
}
// System.Void iTween::DrawPath(UnityEngine.Transform[])
extern TypeInfo* Vector3U5BU5D_t16_il2cpp_TypeInfo_var;
extern TypeInfo* Defaults_t12_il2cpp_TypeInfo_var;
extern TypeInfo* iTween_t23_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral84;
extern "C" void iTween_DrawPath_m197 (Object_t * __this /* static, unused */, TransformU5BU5D_t39* ___path, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Vector3U5BU5D_t16_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(12);
		Defaults_t12_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11);
		iTween_t23_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		_stringLiteral84 = il2cpp_codegen_string_literal_from_index(84);
		s_Il2CppMethodIntialized = true;
	}
	Vector3U5BU5D_t16* V_0 = {0};
	int32_t V_1 = 0;
	{
		TransformU5BU5D_t39* L_0 = ___path;
		if ((((int32_t)(((int32_t)((int32_t)(((Array_t *)L_0)->max_length))))) <= ((int32_t)0)))
		{
			goto IL_004a;
		}
	}
	{
		TransformU5BU5D_t39* L_1 = ___path;
		V_0 = ((Vector3U5BU5D_t16*)SZArrayNew(Vector3U5BU5D_t16_il2cpp_TypeInfo_var, (((int32_t)((int32_t)(((Array_t *)L_1)->max_length))))));
		V_1 = 0;
		goto IL_0031;
	}

IL_0019:
	{
		Vector3U5BU5D_t16* L_2 = V_0;
		int32_t L_3 = V_1;
		TransformU5BU5D_t39* L_4 = ___path;
		int32_t L_5 = V_1;
		int32_t L_6 = L_5;
		Vector3_t14  L_7 = Transform_get_position_m369((*(Transform_t32 **)(Transform_t32 **)SZArrayLdElema(L_4, L_6, sizeof(Transform_t32 *))), /*hidden argument*/NULL);
		(*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_2, L_3, sizeof(Vector3_t14 )))) = L_7;
		int32_t L_8 = V_1;
		V_1 = ((int32_t)((int32_t)L_8+(int32_t)1));
	}

IL_0031:
	{
		int32_t L_9 = V_1;
		TransformU5BU5D_t39* L_10 = ___path;
		if ((((int32_t)L_9) < ((int32_t)(((int32_t)((int32_t)(((Array_t *)L_10)->max_length)))))))
		{
			goto IL_0019;
		}
	}
	{
		Vector3U5BU5D_t16* L_11 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Defaults_t12_il2cpp_TypeInfo_var);
		Color_t13  L_12 = ((Defaults_t12_StaticFields*)Defaults_t12_il2cpp_TypeInfo_var->static_fields)->___color_9;
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		iTween_DrawPathHelper_m247(NULL /*static, unused*/, L_11, L_12, _stringLiteral84, /*hidden argument*/NULL);
	}

IL_004a:
	{
		return;
	}
}
// System.Void iTween::DrawPath(UnityEngine.Transform[],UnityEngine.Color)
extern TypeInfo* Vector3U5BU5D_t16_il2cpp_TypeInfo_var;
extern TypeInfo* iTween_t23_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral84;
extern "C" void iTween_DrawPath_m198 (Object_t * __this /* static, unused */, TransformU5BU5D_t39* ___path, Color_t13  ___color, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Vector3U5BU5D_t16_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(12);
		iTween_t23_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		_stringLiteral84 = il2cpp_codegen_string_literal_from_index(84);
		s_Il2CppMethodIntialized = true;
	}
	Vector3U5BU5D_t16* V_0 = {0};
	int32_t V_1 = 0;
	{
		TransformU5BU5D_t39* L_0 = ___path;
		if ((((int32_t)(((int32_t)((int32_t)(((Array_t *)L_0)->max_length))))) <= ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		TransformU5BU5D_t39* L_1 = ___path;
		V_0 = ((Vector3U5BU5D_t16*)SZArrayNew(Vector3U5BU5D_t16_il2cpp_TypeInfo_var, (((int32_t)((int32_t)(((Array_t *)L_1)->max_length))))));
		V_1 = 0;
		goto IL_0031;
	}

IL_0019:
	{
		Vector3U5BU5D_t16* L_2 = V_0;
		int32_t L_3 = V_1;
		TransformU5BU5D_t39* L_4 = ___path;
		int32_t L_5 = V_1;
		int32_t L_6 = L_5;
		Vector3_t14  L_7 = Transform_get_position_m369((*(Transform_t32 **)(Transform_t32 **)SZArrayLdElema(L_4, L_6, sizeof(Transform_t32 *))), /*hidden argument*/NULL);
		(*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_2, L_3, sizeof(Vector3_t14 )))) = L_7;
		int32_t L_8 = V_1;
		V_1 = ((int32_t)((int32_t)L_8+(int32_t)1));
	}

IL_0031:
	{
		int32_t L_9 = V_1;
		TransformU5BU5D_t39* L_10 = ___path;
		if ((((int32_t)L_9) < ((int32_t)(((int32_t)((int32_t)(((Array_t *)L_10)->max_length)))))))
		{
			goto IL_0019;
		}
	}
	{
		Vector3U5BU5D_t16* L_11 = V_0;
		Color_t13  L_12 = ___color;
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		iTween_DrawPathHelper_m247(NULL /*static, unused*/, L_11, L_12, _stringLiteral84, /*hidden argument*/NULL);
	}

IL_0046:
	{
		return;
	}
}
// System.Void iTween::DrawPathGizmos(UnityEngine.Vector3[])
extern TypeInfo* Defaults_t12_il2cpp_TypeInfo_var;
extern TypeInfo* iTween_t23_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral84;
extern "C" void iTween_DrawPathGizmos_m199 (Object_t * __this /* static, unused */, Vector3U5BU5D_t16* ___path, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Defaults_t12_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11);
		iTween_t23_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		_stringLiteral84 = il2cpp_codegen_string_literal_from_index(84);
		s_Il2CppMethodIntialized = true;
	}
	{
		Vector3U5BU5D_t16* L_0 = ___path;
		if ((((int32_t)(((int32_t)((int32_t)(((Array_t *)L_0)->max_length))))) <= ((int32_t)0)))
		{
			goto IL_0019;
		}
	}
	{
		Vector3U5BU5D_t16* L_1 = ___path;
		IL2CPP_RUNTIME_CLASS_INIT(Defaults_t12_il2cpp_TypeInfo_var);
		Color_t13  L_2 = ((Defaults_t12_StaticFields*)Defaults_t12_il2cpp_TypeInfo_var->static_fields)->___color_9;
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		iTween_DrawPathHelper_m247(NULL /*static, unused*/, L_1, L_2, _stringLiteral84, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void iTween::DrawPathGizmos(UnityEngine.Vector3[],UnityEngine.Color)
extern TypeInfo* iTween_t23_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral84;
extern "C" void iTween_DrawPathGizmos_m200 (Object_t * __this /* static, unused */, Vector3U5BU5D_t16* ___path, Color_t13  ___color, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		iTween_t23_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		_stringLiteral84 = il2cpp_codegen_string_literal_from_index(84);
		s_Il2CppMethodIntialized = true;
	}
	{
		Vector3U5BU5D_t16* L_0 = ___path;
		if ((((int32_t)(((int32_t)((int32_t)(((Array_t *)L_0)->max_length))))) <= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		Vector3U5BU5D_t16* L_1 = ___path;
		Color_t13  L_2 = ___color;
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		iTween_DrawPathHelper_m247(NULL /*static, unused*/, L_1, L_2, _stringLiteral84, /*hidden argument*/NULL);
	}

IL_0015:
	{
		return;
	}
}
// System.Void iTween::DrawPathGizmos(UnityEngine.Transform[])
extern TypeInfo* Vector3U5BU5D_t16_il2cpp_TypeInfo_var;
extern TypeInfo* Defaults_t12_il2cpp_TypeInfo_var;
extern TypeInfo* iTween_t23_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral84;
extern "C" void iTween_DrawPathGizmos_m201 (Object_t * __this /* static, unused */, TransformU5BU5D_t39* ___path, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Vector3U5BU5D_t16_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(12);
		Defaults_t12_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11);
		iTween_t23_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		_stringLiteral84 = il2cpp_codegen_string_literal_from_index(84);
		s_Il2CppMethodIntialized = true;
	}
	Vector3U5BU5D_t16* V_0 = {0};
	int32_t V_1 = 0;
	{
		TransformU5BU5D_t39* L_0 = ___path;
		if ((((int32_t)(((int32_t)((int32_t)(((Array_t *)L_0)->max_length))))) <= ((int32_t)0)))
		{
			goto IL_004a;
		}
	}
	{
		TransformU5BU5D_t39* L_1 = ___path;
		V_0 = ((Vector3U5BU5D_t16*)SZArrayNew(Vector3U5BU5D_t16_il2cpp_TypeInfo_var, (((int32_t)((int32_t)(((Array_t *)L_1)->max_length))))));
		V_1 = 0;
		goto IL_0031;
	}

IL_0019:
	{
		Vector3U5BU5D_t16* L_2 = V_0;
		int32_t L_3 = V_1;
		TransformU5BU5D_t39* L_4 = ___path;
		int32_t L_5 = V_1;
		int32_t L_6 = L_5;
		Vector3_t14  L_7 = Transform_get_position_m369((*(Transform_t32 **)(Transform_t32 **)SZArrayLdElema(L_4, L_6, sizeof(Transform_t32 *))), /*hidden argument*/NULL);
		(*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_2, L_3, sizeof(Vector3_t14 )))) = L_7;
		int32_t L_8 = V_1;
		V_1 = ((int32_t)((int32_t)L_8+(int32_t)1));
	}

IL_0031:
	{
		int32_t L_9 = V_1;
		TransformU5BU5D_t39* L_10 = ___path;
		if ((((int32_t)L_9) < ((int32_t)(((int32_t)((int32_t)(((Array_t *)L_10)->max_length)))))))
		{
			goto IL_0019;
		}
	}
	{
		Vector3U5BU5D_t16* L_11 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Defaults_t12_il2cpp_TypeInfo_var);
		Color_t13  L_12 = ((Defaults_t12_StaticFields*)Defaults_t12_il2cpp_TypeInfo_var->static_fields)->___color_9;
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		iTween_DrawPathHelper_m247(NULL /*static, unused*/, L_11, L_12, _stringLiteral84, /*hidden argument*/NULL);
	}

IL_004a:
	{
		return;
	}
}
// System.Void iTween::DrawPathGizmos(UnityEngine.Transform[],UnityEngine.Color)
extern TypeInfo* Vector3U5BU5D_t16_il2cpp_TypeInfo_var;
extern TypeInfo* iTween_t23_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral84;
extern "C" void iTween_DrawPathGizmos_m202 (Object_t * __this /* static, unused */, TransformU5BU5D_t39* ___path, Color_t13  ___color, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Vector3U5BU5D_t16_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(12);
		iTween_t23_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		_stringLiteral84 = il2cpp_codegen_string_literal_from_index(84);
		s_Il2CppMethodIntialized = true;
	}
	Vector3U5BU5D_t16* V_0 = {0};
	int32_t V_1 = 0;
	{
		TransformU5BU5D_t39* L_0 = ___path;
		if ((((int32_t)(((int32_t)((int32_t)(((Array_t *)L_0)->max_length))))) <= ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		TransformU5BU5D_t39* L_1 = ___path;
		V_0 = ((Vector3U5BU5D_t16*)SZArrayNew(Vector3U5BU5D_t16_il2cpp_TypeInfo_var, (((int32_t)((int32_t)(((Array_t *)L_1)->max_length))))));
		V_1 = 0;
		goto IL_0031;
	}

IL_0019:
	{
		Vector3U5BU5D_t16* L_2 = V_0;
		int32_t L_3 = V_1;
		TransformU5BU5D_t39* L_4 = ___path;
		int32_t L_5 = V_1;
		int32_t L_6 = L_5;
		Vector3_t14  L_7 = Transform_get_position_m369((*(Transform_t32 **)(Transform_t32 **)SZArrayLdElema(L_4, L_6, sizeof(Transform_t32 *))), /*hidden argument*/NULL);
		(*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_2, L_3, sizeof(Vector3_t14 )))) = L_7;
		int32_t L_8 = V_1;
		V_1 = ((int32_t)((int32_t)L_8+(int32_t)1));
	}

IL_0031:
	{
		int32_t L_9 = V_1;
		TransformU5BU5D_t39* L_10 = ___path;
		if ((((int32_t)L_9) < ((int32_t)(((int32_t)((int32_t)(((Array_t *)L_10)->max_length)))))))
		{
			goto IL_0019;
		}
	}
	{
		Vector3U5BU5D_t16* L_11 = V_0;
		Color_t13  L_12 = ___color;
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		iTween_DrawPathHelper_m247(NULL /*static, unused*/, L_11, L_12, _stringLiteral84, /*hidden argument*/NULL);
	}

IL_0046:
	{
		return;
	}
}
// System.Void iTween::DrawPathHandles(UnityEngine.Vector3[])
extern TypeInfo* Defaults_t12_il2cpp_TypeInfo_var;
extern TypeInfo* iTween_t23_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral85;
extern "C" void iTween_DrawPathHandles_m203 (Object_t * __this /* static, unused */, Vector3U5BU5D_t16* ___path, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Defaults_t12_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11);
		iTween_t23_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		_stringLiteral85 = il2cpp_codegen_string_literal_from_index(85);
		s_Il2CppMethodIntialized = true;
	}
	{
		Vector3U5BU5D_t16* L_0 = ___path;
		if ((((int32_t)(((int32_t)((int32_t)(((Array_t *)L_0)->max_length))))) <= ((int32_t)0)))
		{
			goto IL_0019;
		}
	}
	{
		Vector3U5BU5D_t16* L_1 = ___path;
		IL2CPP_RUNTIME_CLASS_INIT(Defaults_t12_il2cpp_TypeInfo_var);
		Color_t13  L_2 = ((Defaults_t12_StaticFields*)Defaults_t12_il2cpp_TypeInfo_var->static_fields)->___color_9;
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		iTween_DrawPathHelper_m247(NULL /*static, unused*/, L_1, L_2, _stringLiteral85, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void iTween::DrawPathHandles(UnityEngine.Vector3[],UnityEngine.Color)
extern TypeInfo* iTween_t23_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral85;
extern "C" void iTween_DrawPathHandles_m204 (Object_t * __this /* static, unused */, Vector3U5BU5D_t16* ___path, Color_t13  ___color, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		iTween_t23_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		_stringLiteral85 = il2cpp_codegen_string_literal_from_index(85);
		s_Il2CppMethodIntialized = true;
	}
	{
		Vector3U5BU5D_t16* L_0 = ___path;
		if ((((int32_t)(((int32_t)((int32_t)(((Array_t *)L_0)->max_length))))) <= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		Vector3U5BU5D_t16* L_1 = ___path;
		Color_t13  L_2 = ___color;
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		iTween_DrawPathHelper_m247(NULL /*static, unused*/, L_1, L_2, _stringLiteral85, /*hidden argument*/NULL);
	}

IL_0015:
	{
		return;
	}
}
// System.Void iTween::DrawPathHandles(UnityEngine.Transform[])
extern TypeInfo* Vector3U5BU5D_t16_il2cpp_TypeInfo_var;
extern TypeInfo* Defaults_t12_il2cpp_TypeInfo_var;
extern TypeInfo* iTween_t23_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral85;
extern "C" void iTween_DrawPathHandles_m205 (Object_t * __this /* static, unused */, TransformU5BU5D_t39* ___path, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Vector3U5BU5D_t16_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(12);
		Defaults_t12_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11);
		iTween_t23_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		_stringLiteral85 = il2cpp_codegen_string_literal_from_index(85);
		s_Il2CppMethodIntialized = true;
	}
	Vector3U5BU5D_t16* V_0 = {0};
	int32_t V_1 = 0;
	{
		TransformU5BU5D_t39* L_0 = ___path;
		if ((((int32_t)(((int32_t)((int32_t)(((Array_t *)L_0)->max_length))))) <= ((int32_t)0)))
		{
			goto IL_004a;
		}
	}
	{
		TransformU5BU5D_t39* L_1 = ___path;
		V_0 = ((Vector3U5BU5D_t16*)SZArrayNew(Vector3U5BU5D_t16_il2cpp_TypeInfo_var, (((int32_t)((int32_t)(((Array_t *)L_1)->max_length))))));
		V_1 = 0;
		goto IL_0031;
	}

IL_0019:
	{
		Vector3U5BU5D_t16* L_2 = V_0;
		int32_t L_3 = V_1;
		TransformU5BU5D_t39* L_4 = ___path;
		int32_t L_5 = V_1;
		int32_t L_6 = L_5;
		Vector3_t14  L_7 = Transform_get_position_m369((*(Transform_t32 **)(Transform_t32 **)SZArrayLdElema(L_4, L_6, sizeof(Transform_t32 *))), /*hidden argument*/NULL);
		(*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_2, L_3, sizeof(Vector3_t14 )))) = L_7;
		int32_t L_8 = V_1;
		V_1 = ((int32_t)((int32_t)L_8+(int32_t)1));
	}

IL_0031:
	{
		int32_t L_9 = V_1;
		TransformU5BU5D_t39* L_10 = ___path;
		if ((((int32_t)L_9) < ((int32_t)(((int32_t)((int32_t)(((Array_t *)L_10)->max_length)))))))
		{
			goto IL_0019;
		}
	}
	{
		Vector3U5BU5D_t16* L_11 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Defaults_t12_il2cpp_TypeInfo_var);
		Color_t13  L_12 = ((Defaults_t12_StaticFields*)Defaults_t12_il2cpp_TypeInfo_var->static_fields)->___color_9;
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		iTween_DrawPathHelper_m247(NULL /*static, unused*/, L_11, L_12, _stringLiteral85, /*hidden argument*/NULL);
	}

IL_004a:
	{
		return;
	}
}
// System.Void iTween::DrawPathHandles(UnityEngine.Transform[],UnityEngine.Color)
extern TypeInfo* Vector3U5BU5D_t16_il2cpp_TypeInfo_var;
extern TypeInfo* iTween_t23_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral85;
extern "C" void iTween_DrawPathHandles_m206 (Object_t * __this /* static, unused */, TransformU5BU5D_t39* ___path, Color_t13  ___color, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Vector3U5BU5D_t16_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(12);
		iTween_t23_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		_stringLiteral85 = il2cpp_codegen_string_literal_from_index(85);
		s_Il2CppMethodIntialized = true;
	}
	Vector3U5BU5D_t16* V_0 = {0};
	int32_t V_1 = 0;
	{
		TransformU5BU5D_t39* L_0 = ___path;
		if ((((int32_t)(((int32_t)((int32_t)(((Array_t *)L_0)->max_length))))) <= ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		TransformU5BU5D_t39* L_1 = ___path;
		V_0 = ((Vector3U5BU5D_t16*)SZArrayNew(Vector3U5BU5D_t16_il2cpp_TypeInfo_var, (((int32_t)((int32_t)(((Array_t *)L_1)->max_length))))));
		V_1 = 0;
		goto IL_0031;
	}

IL_0019:
	{
		Vector3U5BU5D_t16* L_2 = V_0;
		int32_t L_3 = V_1;
		TransformU5BU5D_t39* L_4 = ___path;
		int32_t L_5 = V_1;
		int32_t L_6 = L_5;
		Vector3_t14  L_7 = Transform_get_position_m369((*(Transform_t32 **)(Transform_t32 **)SZArrayLdElema(L_4, L_6, sizeof(Transform_t32 *))), /*hidden argument*/NULL);
		(*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_2, L_3, sizeof(Vector3_t14 )))) = L_7;
		int32_t L_8 = V_1;
		V_1 = ((int32_t)((int32_t)L_8+(int32_t)1));
	}

IL_0031:
	{
		int32_t L_9 = V_1;
		TransformU5BU5D_t39* L_10 = ___path;
		if ((((int32_t)L_9) < ((int32_t)(((int32_t)((int32_t)(((Array_t *)L_10)->max_length)))))))
		{
			goto IL_0019;
		}
	}
	{
		Vector3U5BU5D_t16* L_11 = V_0;
		Color_t13  L_12 = ___color;
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		iTween_DrawPathHelper_m247(NULL /*static, unused*/, L_11, L_12, _stringLiteral85, /*hidden argument*/NULL);
	}

IL_0046:
	{
		return;
	}
}
// System.Void iTween::CameraFadeDepth(System.Int32)
extern TypeInfo* iTween_t23_il2cpp_TypeInfo_var;
extern "C" void iTween_CameraFadeDepth_m207 (Object_t * __this /* static, unused */, int32_t ___depth, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		iTween_t23_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		s_Il2CppMethodIntialized = true;
	}
	Vector3_t14  V_0 = {0};
	Vector3_t14  V_1 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		GameObject_t34 * L_0 = ((iTween_t23_StaticFields*)iTween_t23_il2cpp_TypeInfo_var->static_fields)->___cameraFade_3;
		bool L_1 = Object_op_Implicit_m316(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0053;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		GameObject_t34 * L_2 = ((iTween_t23_StaticFields*)iTween_t23_il2cpp_TypeInfo_var->static_fields)->___cameraFade_3;
		Transform_t32 * L_3 = GameObject_get_transform_m344(L_2, /*hidden argument*/NULL);
		GameObject_t34 * L_4 = ((iTween_t23_StaticFields*)iTween_t23_il2cpp_TypeInfo_var->static_fields)->___cameraFade_3;
		Transform_t32 * L_5 = GameObject_get_transform_m344(L_4, /*hidden argument*/NULL);
		Vector3_t14  L_6 = Transform_get_position_m369(L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		float L_7 = ((&V_0)->___x_1);
		GameObject_t34 * L_8 = ((iTween_t23_StaticFields*)iTween_t23_il2cpp_TypeInfo_var->static_fields)->___cameraFade_3;
		Transform_t32 * L_9 = GameObject_get_transform_m344(L_8, /*hidden argument*/NULL);
		Vector3_t14  L_10 = Transform_get_position_m369(L_9, /*hidden argument*/NULL);
		V_1 = L_10;
		float L_11 = ((&V_1)->___y_2);
		int32_t L_12 = ___depth;
		Vector3_t14  L_13 = {0};
		Vector3__ctor_m306(&L_13, L_7, L_11, (((float)((float)L_12))), /*hidden argument*/NULL);
		Transform_set_position_m374(L_3, L_13, /*hidden argument*/NULL);
	}

IL_0053:
	{
		return;
	}
}
// System.Void iTween::CameraFadeDestroy()
extern TypeInfo* iTween_t23_il2cpp_TypeInfo_var;
extern "C" void iTween_CameraFadeDestroy_m208 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		iTween_t23_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		GameObject_t34 * L_0 = ((iTween_t23_StaticFields*)iTween_t23_il2cpp_TypeInfo_var->static_fields)->___cameraFade_3;
		bool L_1 = Object_op_Implicit_m316(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		GameObject_t34 * L_2 = ((iTween_t23_StaticFields*)iTween_t23_il2cpp_TypeInfo_var->static_fields)->___cameraFade_3;
		Object_Destroy_m429(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void iTween::CameraFadeSwap(UnityEngine.Texture2D)
extern TypeInfo* iTween_t23_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisGUITexture_t58_m345_MethodInfo_var;
extern "C" void iTween_CameraFadeSwap_m209 (Object_t * __this /* static, unused */, Texture2D_t40 * ___texture, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		iTween_t23_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		GameObject_GetComponent_TisGUITexture_t58_m345_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483651);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		GameObject_t34 * L_0 = ((iTween_t23_StaticFields*)iTween_t23_il2cpp_TypeInfo_var->static_fields)->___cameraFade_3;
		bool L_1 = Object_op_Implicit_m316(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		GameObject_t34 * L_2 = ((iTween_t23_StaticFields*)iTween_t23_il2cpp_TypeInfo_var->static_fields)->___cameraFade_3;
		GUITexture_t58 * L_3 = GameObject_GetComponent_TisGUITexture_t58_m345(L_2, /*hidden argument*/GameObject_GetComponent_TisGUITexture_t58_m345_MethodInfo_var);
		Texture2D_t40 * L_4 = ___texture;
		GUITexture_set_texture_m430(L_3, L_4, /*hidden argument*/NULL);
	}

IL_001f:
	{
		return;
	}
}
// UnityEngine.GameObject iTween::CameraFadeAdd(UnityEngine.Texture2D,System.Int32)
extern TypeInfo* iTween_t23_il2cpp_TypeInfo_var;
extern TypeInfo* GameObject_t34_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_AddComponent_TisGUITexture_t58_m432_MethodInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisGUITexture_t58_m345_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral86;
extern "C" GameObject_t34 * iTween_CameraFadeAdd_m210 (Object_t * __this /* static, unused */, Texture2D_t40 * ___texture, int32_t ___depth, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		iTween_t23_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		GameObject_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(50);
		GameObject_AddComponent_TisGUITexture_t58_m432_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483688);
		GameObject_GetComponent_TisGUITexture_t58_m345_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483651);
		_stringLiteral86 = il2cpp_codegen_string_literal_from_index(86);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		GameObject_t34 * L_0 = ((iTween_t23_StaticFields*)iTween_t23_il2cpp_TypeInfo_var->static_fields)->___cameraFade_3;
		bool L_1 = Object_op_Implicit_m316(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		return (GameObject_t34 *)NULL;
	}

IL_0011:
	{
		GameObject_t34 * L_2 = (GameObject_t34 *)il2cpp_codegen_object_new (GameObject_t34_il2cpp_TypeInfo_var);
		GameObject__ctor_m431(L_2, _stringLiteral86, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		((iTween_t23_StaticFields*)iTween_t23_il2cpp_TypeInfo_var->static_fields)->___cameraFade_3 = L_2;
		GameObject_t34 * L_3 = ((iTween_t23_StaticFields*)iTween_t23_il2cpp_TypeInfo_var->static_fields)->___cameraFade_3;
		Transform_t32 * L_4 = GameObject_get_transform_m344(L_3, /*hidden argument*/NULL);
		int32_t L_5 = ___depth;
		Vector3_t14  L_6 = {0};
		Vector3__ctor_m306(&L_6, (0.5f), (0.5f), (((float)((float)L_5))), /*hidden argument*/NULL);
		Transform_set_position_m374(L_4, L_6, /*hidden argument*/NULL);
		GameObject_t34 * L_7 = ((iTween_t23_StaticFields*)iTween_t23_il2cpp_TypeInfo_var->static_fields)->___cameraFade_3;
		GameObject_AddComponent_TisGUITexture_t58_m432(L_7, /*hidden argument*/GameObject_AddComponent_TisGUITexture_t58_m432_MethodInfo_var);
		GameObject_t34 * L_8 = ((iTween_t23_StaticFields*)iTween_t23_il2cpp_TypeInfo_var->static_fields)->___cameraFade_3;
		GUITexture_t58 * L_9 = GameObject_GetComponent_TisGUITexture_t58_m345(L_8, /*hidden argument*/GameObject_GetComponent_TisGUITexture_t58_m345_MethodInfo_var);
		Texture2D_t40 * L_10 = ___texture;
		GUITexture_set_texture_m430(L_9, L_10, /*hidden argument*/NULL);
		GameObject_t34 * L_11 = ((iTween_t23_StaticFields*)iTween_t23_il2cpp_TypeInfo_var->static_fields)->___cameraFade_3;
		GUITexture_t58 * L_12 = GameObject_GetComponent_TisGUITexture_t58_m345(L_11, /*hidden argument*/GameObject_GetComponent_TisGUITexture_t58_m345_MethodInfo_var);
		Color_t13  L_13 = {0};
		Color__ctor_m433(&L_13, (0.5f), (0.5f), (0.5f), (0.0f), /*hidden argument*/NULL);
		GUITexture_set_color_m354(L_12, L_13, /*hidden argument*/NULL);
		GameObject_t34 * L_14 = ((iTween_t23_StaticFields*)iTween_t23_il2cpp_TypeInfo_var->static_fields)->___cameraFade_3;
		return L_14;
	}
}
// UnityEngine.GameObject iTween::CameraFadeAdd(UnityEngine.Texture2D)
extern TypeInfo* iTween_t23_il2cpp_TypeInfo_var;
extern TypeInfo* GameObject_t34_il2cpp_TypeInfo_var;
extern TypeInfo* Defaults_t12_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_AddComponent_TisGUITexture_t58_m432_MethodInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisGUITexture_t58_m345_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral86;
extern "C" GameObject_t34 * iTween_CameraFadeAdd_m211 (Object_t * __this /* static, unused */, Texture2D_t40 * ___texture, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		iTween_t23_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		GameObject_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(50);
		Defaults_t12_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11);
		GameObject_AddComponent_TisGUITexture_t58_m432_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483688);
		GameObject_GetComponent_TisGUITexture_t58_m345_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483651);
		_stringLiteral86 = il2cpp_codegen_string_literal_from_index(86);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		GameObject_t34 * L_0 = ((iTween_t23_StaticFields*)iTween_t23_il2cpp_TypeInfo_var->static_fields)->___cameraFade_3;
		bool L_1 = Object_op_Implicit_m316(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		return (GameObject_t34 *)NULL;
	}

IL_0011:
	{
		GameObject_t34 * L_2 = (GameObject_t34 *)il2cpp_codegen_object_new (GameObject_t34_il2cpp_TypeInfo_var);
		GameObject__ctor_m431(L_2, _stringLiteral86, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		((iTween_t23_StaticFields*)iTween_t23_il2cpp_TypeInfo_var->static_fields)->___cameraFade_3 = L_2;
		GameObject_t34 * L_3 = ((iTween_t23_StaticFields*)iTween_t23_il2cpp_TypeInfo_var->static_fields)->___cameraFade_3;
		Transform_t32 * L_4 = GameObject_get_transform_m344(L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Defaults_t12_il2cpp_TypeInfo_var);
		int32_t L_5 = ((Defaults_t12_StaticFields*)Defaults_t12_il2cpp_TypeInfo_var->static_fields)->___cameraFadeDepth_12;
		Vector3_t14  L_6 = {0};
		Vector3__ctor_m306(&L_6, (0.5f), (0.5f), (((float)((float)L_5))), /*hidden argument*/NULL);
		Transform_set_position_m374(L_4, L_6, /*hidden argument*/NULL);
		GameObject_t34 * L_7 = ((iTween_t23_StaticFields*)iTween_t23_il2cpp_TypeInfo_var->static_fields)->___cameraFade_3;
		GameObject_AddComponent_TisGUITexture_t58_m432(L_7, /*hidden argument*/GameObject_AddComponent_TisGUITexture_t58_m432_MethodInfo_var);
		GameObject_t34 * L_8 = ((iTween_t23_StaticFields*)iTween_t23_il2cpp_TypeInfo_var->static_fields)->___cameraFade_3;
		GUITexture_t58 * L_9 = GameObject_GetComponent_TisGUITexture_t58_m345(L_8, /*hidden argument*/GameObject_GetComponent_TisGUITexture_t58_m345_MethodInfo_var);
		Texture2D_t40 * L_10 = ___texture;
		GUITexture_set_texture_m430(L_9, L_10, /*hidden argument*/NULL);
		GameObject_t34 * L_11 = ((iTween_t23_StaticFields*)iTween_t23_il2cpp_TypeInfo_var->static_fields)->___cameraFade_3;
		GUITexture_t58 * L_12 = GameObject_GetComponent_TisGUITexture_t58_m345(L_11, /*hidden argument*/GameObject_GetComponent_TisGUITexture_t58_m345_MethodInfo_var);
		Color_t13  L_13 = {0};
		Color__ctor_m433(&L_13, (0.5f), (0.5f), (0.5f), (0.0f), /*hidden argument*/NULL);
		GUITexture_set_color_m354(L_12, L_13, /*hidden argument*/NULL);
		GameObject_t34 * L_14 = ((iTween_t23_StaticFields*)iTween_t23_il2cpp_TypeInfo_var->static_fields)->___cameraFade_3;
		return L_14;
	}
}
// UnityEngine.GameObject iTween::CameraFadeAdd()
extern TypeInfo* iTween_t23_il2cpp_TypeInfo_var;
extern TypeInfo* GameObject_t34_il2cpp_TypeInfo_var;
extern TypeInfo* Defaults_t12_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_AddComponent_TisGUITexture_t58_m432_MethodInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisGUITexture_t58_m345_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral86;
extern "C" GameObject_t34 * iTween_CameraFadeAdd_m212 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		iTween_t23_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		GameObject_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(50);
		Defaults_t12_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11);
		GameObject_AddComponent_TisGUITexture_t58_m432_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483688);
		GameObject_GetComponent_TisGUITexture_t58_m345_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483651);
		_stringLiteral86 = il2cpp_codegen_string_literal_from_index(86);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		GameObject_t34 * L_0 = ((iTween_t23_StaticFields*)iTween_t23_il2cpp_TypeInfo_var->static_fields)->___cameraFade_3;
		bool L_1 = Object_op_Implicit_m316(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		return (GameObject_t34 *)NULL;
	}

IL_0011:
	{
		GameObject_t34 * L_2 = (GameObject_t34 *)il2cpp_codegen_object_new (GameObject_t34_il2cpp_TypeInfo_var);
		GameObject__ctor_m431(L_2, _stringLiteral86, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		((iTween_t23_StaticFields*)iTween_t23_il2cpp_TypeInfo_var->static_fields)->___cameraFade_3 = L_2;
		GameObject_t34 * L_3 = ((iTween_t23_StaticFields*)iTween_t23_il2cpp_TypeInfo_var->static_fields)->___cameraFade_3;
		Transform_t32 * L_4 = GameObject_get_transform_m344(L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Defaults_t12_il2cpp_TypeInfo_var);
		int32_t L_5 = ((Defaults_t12_StaticFields*)Defaults_t12_il2cpp_TypeInfo_var->static_fields)->___cameraFadeDepth_12;
		Vector3_t14  L_6 = {0};
		Vector3__ctor_m306(&L_6, (0.5f), (0.5f), (((float)((float)L_5))), /*hidden argument*/NULL);
		Transform_set_position_m374(L_4, L_6, /*hidden argument*/NULL);
		GameObject_t34 * L_7 = ((iTween_t23_StaticFields*)iTween_t23_il2cpp_TypeInfo_var->static_fields)->___cameraFade_3;
		GameObject_AddComponent_TisGUITexture_t58_m432(L_7, /*hidden argument*/GameObject_AddComponent_TisGUITexture_t58_m432_MethodInfo_var);
		GameObject_t34 * L_8 = ((iTween_t23_StaticFields*)iTween_t23_il2cpp_TypeInfo_var->static_fields)->___cameraFade_3;
		GUITexture_t58 * L_9 = GameObject_GetComponent_TisGUITexture_t58_m345(L_8, /*hidden argument*/GameObject_GetComponent_TisGUITexture_t58_m345_MethodInfo_var);
		Color_t13  L_10 = Color_get_black_m434(NULL /*static, unused*/, /*hidden argument*/NULL);
		Texture2D_t40 * L_11 = iTween_CameraTexture_m176(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		GUITexture_set_texture_m430(L_9, L_11, /*hidden argument*/NULL);
		GameObject_t34 * L_12 = ((iTween_t23_StaticFields*)iTween_t23_il2cpp_TypeInfo_var->static_fields)->___cameraFade_3;
		GUITexture_t58 * L_13 = GameObject_GetComponent_TisGUITexture_t58_m345(L_12, /*hidden argument*/GameObject_GetComponent_TisGUITexture_t58_m345_MethodInfo_var);
		Color_t13  L_14 = {0};
		Color__ctor_m433(&L_14, (0.5f), (0.5f), (0.5f), (0.0f), /*hidden argument*/NULL);
		GUITexture_set_color_m354(L_13, L_14, /*hidden argument*/NULL);
		GameObject_t34 * L_15 = ((iTween_t23_StaticFields*)iTween_t23_il2cpp_TypeInfo_var->static_fields)->___cameraFade_3;
		return L_15;
	}
}
// System.Void iTween::Resume(UnityEngine.GameObject)
extern TypeInfo* iTween_t23_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_GetComponents_TisiTween_t23_m435_MethodInfo_var;
extern "C" void iTween_Resume_m213 (Object_t * __this /* static, unused */, GameObject_t34 * ___target, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		iTween_t23_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		GameObject_GetComponents_TisiTween_t23_m435_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483689);
		s_Il2CppMethodIntialized = true;
	}
	ComponentU5BU5D_t68* V_0 = {0};
	iTween_t23 * V_1 = {0};
	ComponentU5BU5D_t68* V_2 = {0};
	int32_t V_3 = 0;
	{
		GameObject_t34 * L_0 = ___target;
		iTweenU5BU5D_t69* L_1 = GameObject_GetComponents_TisiTween_t23_m435(L_0, /*hidden argument*/GameObject_GetComponents_TisiTween_t23_m435_MethodInfo_var);
		V_0 = (ComponentU5BU5D_t68*)L_1;
		ComponentU5BU5D_t68* L_2 = V_0;
		V_2 = L_2;
		V_3 = 0;
		goto IL_0024;
	}

IL_0010:
	{
		ComponentU5BU5D_t68* L_3 = V_2;
		int32_t L_4 = V_3;
		int32_t L_5 = L_4;
		V_1 = ((iTween_t23 *)CastclassClass((*(Component_t70 **)(Component_t70 **)SZArrayLdElema(L_3, L_5, sizeof(Component_t70 *))), iTween_t23_il2cpp_TypeInfo_var));
		iTween_t23 * L_6 = V_1;
		Behaviour_set_enabled_m436(L_6, 1, /*hidden argument*/NULL);
		int32_t L_7 = V_3;
		V_3 = ((int32_t)((int32_t)L_7+(int32_t)1));
	}

IL_0024:
	{
		int32_t L_8 = V_3;
		ComponentU5BU5D_t68* L_9 = V_2;
		if ((((int32_t)L_8) < ((int32_t)(((int32_t)((int32_t)(((Array_t *)L_9)->max_length)))))))
		{
			goto IL_0010;
		}
	}
	{
		return;
	}
}
// System.Void iTween::Resume(UnityEngine.GameObject,System.Boolean)
extern TypeInfo* iTween_t23_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t42_il2cpp_TypeInfo_var;
extern TypeInfo* Transform_t32_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t57_il2cpp_TypeInfo_var;
extern "C" void iTween_Resume_m214 (Object_t * __this /* static, unused */, GameObject_t34 * ___target, bool ___includechildren, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		iTween_t23_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		IEnumerator_t42_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(29);
		Transform_t32_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(30);
		IDisposable_t57_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(31);
		s_Il2CppMethodIntialized = true;
	}
	Transform_t32 * V_0 = {0};
	Object_t * V_1 = {0};
	Object_t * V_2 = {0};
	Exception_t55 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t55 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		GameObject_t34 * L_0 = ___target;
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		iTween_Resume_m213(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		bool L_1 = ___includechildren;
		if (!L_1)
		{
			goto IL_0057;
		}
	}
	{
		GameObject_t34 * L_2 = ___target;
		Transform_t32 * L_3 = GameObject_get_transform_m344(L_2, /*hidden argument*/NULL);
		Object_t * L_4 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(4 /* System.Collections.IEnumerator UnityEngine.Transform::GetEnumerator() */, L_3);
		V_1 = L_4;
	}

IL_0018:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0035;
		}

IL_001d:
		{
			Object_t * L_5 = V_1;
			Object_t * L_6 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t42_il2cpp_TypeInfo_var, L_5);
			V_0 = ((Transform_t32 *)CastclassClass(L_6, Transform_t32_il2cpp_TypeInfo_var));
			Transform_t32 * L_7 = V_0;
			GameObject_t34 * L_8 = Component_get_gameObject_m319(L_7, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
			iTween_Resume_m214(NULL /*static, unused*/, L_8, 1, /*hidden argument*/NULL);
		}

IL_0035:
		{
			Object_t * L_9 = V_1;
			bool L_10 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t42_il2cpp_TypeInfo_var, L_9);
			if (L_10)
			{
				goto IL_001d;
			}
		}

IL_0040:
		{
			IL2CPP_LEAVE(0x57, FINALLY_0045);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t55 *)e.ex;
		goto FINALLY_0045;
	}

FINALLY_0045:
	{ // begin finally (depth: 1)
		{
			Object_t * L_11 = V_1;
			V_2 = ((Object_t *)IsInst(L_11, IDisposable_t57_il2cpp_TypeInfo_var));
			Object_t * L_12 = V_2;
			if (L_12)
			{
				goto IL_0050;
			}
		}

IL_004f:
		{
			IL2CPP_END_FINALLY(69)
		}

IL_0050:
		{
			Object_t * L_13 = V_2;
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t57_il2cpp_TypeInfo_var, L_13);
			IL2CPP_END_FINALLY(69)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(69)
	{
		IL2CPP_JUMP_TBL(0x57, IL_0057)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t55 *)
	}

IL_0057:
	{
		return;
	}
}
// System.Void iTween::Resume(UnityEngine.GameObject,System.String)
extern TypeInfo* iTween_t23_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_GetComponents_TisiTween_t23_m435_MethodInfo_var;
extern "C" void iTween_Resume_m215 (Object_t * __this /* static, unused */, GameObject_t34 * ___target, String_t* ___type, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		iTween_t23_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(33);
		GameObject_GetComponents_TisiTween_t23_m435_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483689);
		s_Il2CppMethodIntialized = true;
	}
	ComponentU5BU5D_t68* V_0 = {0};
	iTween_t23 * V_1 = {0};
	ComponentU5BU5D_t68* V_2 = {0};
	int32_t V_3 = 0;
	String_t* V_4 = {0};
	{
		GameObject_t34 * L_0 = ___target;
		iTweenU5BU5D_t69* L_1 = GameObject_GetComponents_TisiTween_t23_m435(L_0, /*hidden argument*/GameObject_GetComponents_TisiTween_t23_m435_MethodInfo_var);
		V_0 = (ComponentU5BU5D_t68*)L_1;
		ComponentU5BU5D_t68* L_2 = V_0;
		V_2 = L_2;
		V_3 = 0;
		goto IL_005e;
	}

IL_0010:
	{
		ComponentU5BU5D_t68* L_3 = V_2;
		int32_t L_4 = V_3;
		int32_t L_5 = L_4;
		V_1 = ((iTween_t23 *)CastclassClass((*(Component_t70 **)(Component_t70 **)SZArrayLdElema(L_3, L_5, sizeof(Component_t70 *))), iTween_t23_il2cpp_TypeInfo_var));
		iTween_t23 * L_6 = V_1;
		String_t* L_7 = (L_6->___type_5);
		iTween_t23 * L_8 = V_1;
		String_t* L_9 = (L_8->___method_6);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_10 = String_Concat_m437(NULL /*static, unused*/, L_7, L_9, /*hidden argument*/NULL);
		V_4 = L_10;
		String_t* L_11 = V_4;
		String_t* L_12 = ___type;
		int32_t L_13 = String_get_Length_m438(L_12, /*hidden argument*/NULL);
		String_t* L_14 = String_Substring_m439(L_11, 0, L_13, /*hidden argument*/NULL);
		V_4 = L_14;
		String_t* L_15 = V_4;
		String_t* L_16 = String_ToLower_m440(L_15, /*hidden argument*/NULL);
		String_t* L_17 = ___type;
		String_t* L_18 = String_ToLower_m440(L_17, /*hidden argument*/NULL);
		bool L_19 = String_op_Equality_m414(NULL /*static, unused*/, L_16, L_18, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_005a;
		}
	}
	{
		iTween_t23 * L_20 = V_1;
		Behaviour_set_enabled_m436(L_20, 1, /*hidden argument*/NULL);
	}

IL_005a:
	{
		int32_t L_21 = V_3;
		V_3 = ((int32_t)((int32_t)L_21+(int32_t)1));
	}

IL_005e:
	{
		int32_t L_22 = V_3;
		ComponentU5BU5D_t68* L_23 = V_2;
		if ((((int32_t)L_22) < ((int32_t)(((int32_t)((int32_t)(((Array_t *)L_23)->max_length)))))))
		{
			goto IL_0010;
		}
	}
	{
		return;
	}
}
// System.Void iTween::Resume(UnityEngine.GameObject,System.String,System.Boolean)
extern TypeInfo* iTween_t23_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t42_il2cpp_TypeInfo_var;
extern TypeInfo* Transform_t32_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t57_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_GetComponents_TisiTween_t23_m435_MethodInfo_var;
extern "C" void iTween_Resume_m216 (Object_t * __this /* static, unused */, GameObject_t34 * ___target, String_t* ___type, bool ___includechildren, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		iTween_t23_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(33);
		IEnumerator_t42_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(29);
		Transform_t32_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(30);
		IDisposable_t57_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(31);
		GameObject_GetComponents_TisiTween_t23_m435_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483689);
		s_Il2CppMethodIntialized = true;
	}
	ComponentU5BU5D_t68* V_0 = {0};
	iTween_t23 * V_1 = {0};
	ComponentU5BU5D_t68* V_2 = {0};
	int32_t V_3 = 0;
	String_t* V_4 = {0};
	Transform_t32 * V_5 = {0};
	Object_t * V_6 = {0};
	Object_t * V_7 = {0};
	Exception_t55 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t55 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		GameObject_t34 * L_0 = ___target;
		iTweenU5BU5D_t69* L_1 = GameObject_GetComponents_TisiTween_t23_m435(L_0, /*hidden argument*/GameObject_GetComponents_TisiTween_t23_m435_MethodInfo_var);
		V_0 = (ComponentU5BU5D_t68*)L_1;
		ComponentU5BU5D_t68* L_2 = V_0;
		V_2 = L_2;
		V_3 = 0;
		goto IL_005e;
	}

IL_0010:
	{
		ComponentU5BU5D_t68* L_3 = V_2;
		int32_t L_4 = V_3;
		int32_t L_5 = L_4;
		V_1 = ((iTween_t23 *)CastclassClass((*(Component_t70 **)(Component_t70 **)SZArrayLdElema(L_3, L_5, sizeof(Component_t70 *))), iTween_t23_il2cpp_TypeInfo_var));
		iTween_t23 * L_6 = V_1;
		String_t* L_7 = (L_6->___type_5);
		iTween_t23 * L_8 = V_1;
		String_t* L_9 = (L_8->___method_6);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_10 = String_Concat_m437(NULL /*static, unused*/, L_7, L_9, /*hidden argument*/NULL);
		V_4 = L_10;
		String_t* L_11 = V_4;
		String_t* L_12 = ___type;
		int32_t L_13 = String_get_Length_m438(L_12, /*hidden argument*/NULL);
		String_t* L_14 = String_Substring_m439(L_11, 0, L_13, /*hidden argument*/NULL);
		V_4 = L_14;
		String_t* L_15 = V_4;
		String_t* L_16 = String_ToLower_m440(L_15, /*hidden argument*/NULL);
		String_t* L_17 = ___type;
		String_t* L_18 = String_ToLower_m440(L_17, /*hidden argument*/NULL);
		bool L_19 = String_op_Equality_m414(NULL /*static, unused*/, L_16, L_18, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_005a;
		}
	}
	{
		iTween_t23 * L_20 = V_1;
		Behaviour_set_enabled_m436(L_20, 1, /*hidden argument*/NULL);
	}

IL_005a:
	{
		int32_t L_21 = V_3;
		V_3 = ((int32_t)((int32_t)L_21+(int32_t)1));
	}

IL_005e:
	{
		int32_t L_22 = V_3;
		ComponentU5BU5D_t68* L_23 = V_2;
		if ((((int32_t)L_22) < ((int32_t)(((int32_t)((int32_t)(((Array_t *)L_23)->max_length)))))))
		{
			goto IL_0010;
		}
	}
	{
		bool L_24 = ___includechildren;
		if (!L_24)
		{
			goto IL_00c2;
		}
	}
	{
		GameObject_t34 * L_25 = ___target;
		Transform_t32 * L_26 = GameObject_get_transform_m344(L_25, /*hidden argument*/NULL);
		Object_t * L_27 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(4 /* System.Collections.IEnumerator UnityEngine.Transform::GetEnumerator() */, L_26);
		V_6 = L_27;
	}

IL_007a:
	try
	{ // begin try (depth: 1)
		{
			goto IL_009b;
		}

IL_007f:
		{
			Object_t * L_28 = V_6;
			Object_t * L_29 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t42_il2cpp_TypeInfo_var, L_28);
			V_5 = ((Transform_t32 *)CastclassClass(L_29, Transform_t32_il2cpp_TypeInfo_var));
			Transform_t32 * L_30 = V_5;
			GameObject_t34 * L_31 = Component_get_gameObject_m319(L_30, /*hidden argument*/NULL);
			String_t* L_32 = ___type;
			IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
			iTween_Resume_m216(NULL /*static, unused*/, L_31, L_32, 1, /*hidden argument*/NULL);
		}

IL_009b:
		{
			Object_t * L_33 = V_6;
			bool L_34 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t42_il2cpp_TypeInfo_var, L_33);
			if (L_34)
			{
				goto IL_007f;
			}
		}

IL_00a7:
		{
			IL2CPP_LEAVE(0xC2, FINALLY_00ac);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t55 *)e.ex;
		goto FINALLY_00ac;
	}

FINALLY_00ac:
	{ // begin finally (depth: 1)
		{
			Object_t * L_35 = V_6;
			V_7 = ((Object_t *)IsInst(L_35, IDisposable_t57_il2cpp_TypeInfo_var));
			Object_t * L_36 = V_7;
			if (L_36)
			{
				goto IL_00ba;
			}
		}

IL_00b9:
		{
			IL2CPP_END_FINALLY(172)
		}

IL_00ba:
		{
			Object_t * L_37 = V_7;
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t57_il2cpp_TypeInfo_var, L_37);
			IL2CPP_END_FINALLY(172)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(172)
	{
		IL2CPP_JUMP_TBL(0xC2, IL_00c2)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t55 *)
	}

IL_00c2:
	{
		return;
	}
}
// System.Void iTween::Resume()
extern TypeInfo* iTween_t23_il2cpp_TypeInfo_var;
extern TypeInfo* GameObject_t34_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral87;
extern "C" void iTween_Resume_m217 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		iTween_t23_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		GameObject_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(50);
		_stringLiteral87 = il2cpp_codegen_string_literal_from_index(87);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	Hashtable_t26 * V_1 = {0};
	GameObject_t34 * V_2 = {0};
	{
		V_0 = 0;
		goto IL_002e;
	}

IL_0007:
	{
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		List_1_t33 * L_0 = ((iTween_t23_StaticFields*)iTween_t23_il2cpp_TypeInfo_var->static_fields)->___tweens_2;
		int32_t L_1 = V_0;
		Hashtable_t26 * L_2 = (Hashtable_t26 *)VirtFuncInvoker1< Hashtable_t26 *, int32_t >::Invoke(28 /* !0 System.Collections.Generic.List`1<System.Collections.Hashtable>::get_Item(System.Int32) */, L_0, L_1);
		V_1 = L_2;
		Hashtable_t26 * L_3 = V_1;
		Object_t * L_4 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_3, _stringLiteral87);
		V_2 = ((GameObject_t34 *)CastclassSealed(L_4, GameObject_t34_il2cpp_TypeInfo_var));
		GameObject_t34 * L_5 = V_2;
		iTween_Resume_m213(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		int32_t L_6 = V_0;
		V_0 = ((int32_t)((int32_t)L_6+(int32_t)1));
	}

IL_002e:
	{
		int32_t L_7 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		List_1_t33 * L_8 = ((iTween_t23_StaticFields*)iTween_t23_il2cpp_TypeInfo_var->static_fields)->___tweens_2;
		int32_t L_9 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(17 /* System.Int32 System.Collections.Generic.List`1<System.Collections.Hashtable>::get_Count() */, L_8);
		if ((((int32_t)L_7) < ((int32_t)L_9)))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void iTween::Resume(System.String)
extern TypeInfo* ArrayList_t71_il2cpp_TypeInfo_var;
extern TypeInfo* iTween_t23_il2cpp_TypeInfo_var;
extern TypeInfo* GameObject_t34_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral87;
extern "C" void iTween_Resume_m218 (Object_t * __this /* static, unused */, String_t* ___type, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArrayList_t71_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(51);
		iTween_t23_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		GameObject_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(50);
		_stringLiteral87 = il2cpp_codegen_string_literal_from_index(87);
		s_Il2CppMethodIntialized = true;
	}
	ArrayList_t71 * V_0 = {0};
	int32_t V_1 = 0;
	Hashtable_t26 * V_2 = {0};
	GameObject_t34 * V_3 = {0};
	int32_t V_4 = 0;
	{
		ArrayList_t71 * L_0 = (ArrayList_t71 *)il2cpp_codegen_object_new (ArrayList_t71_il2cpp_TypeInfo_var);
		ArrayList__ctor_m441(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		V_1 = 0;
		goto IL_003b;
	}

IL_000d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		List_1_t33 * L_1 = ((iTween_t23_StaticFields*)iTween_t23_il2cpp_TypeInfo_var->static_fields)->___tweens_2;
		int32_t L_2 = V_1;
		Hashtable_t26 * L_3 = (Hashtable_t26 *)VirtFuncInvoker1< Hashtable_t26 *, int32_t >::Invoke(28 /* !0 System.Collections.Generic.List`1<System.Collections.Hashtable>::get_Item(System.Int32) */, L_1, L_2);
		V_2 = L_3;
		Hashtable_t26 * L_4 = V_2;
		Object_t * L_5 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_4, _stringLiteral87);
		V_3 = ((GameObject_t34 *)CastclassSealed(L_5, GameObject_t34_il2cpp_TypeInfo_var));
		ArrayList_t71 * L_6 = V_0;
		ArrayList_t71 * L_7 = V_0;
		int32_t L_8 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_7);
		GameObject_t34 * L_9 = V_3;
		VirtActionInvoker2< int32_t, Object_t * >::Invoke(32 /* System.Void System.Collections.ArrayList::Insert(System.Int32,System.Object) */, L_6, L_8, L_9);
		int32_t L_10 = V_1;
		V_1 = ((int32_t)((int32_t)L_10+(int32_t)1));
	}

IL_003b:
	{
		int32_t L_11 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		List_1_t33 * L_12 = ((iTween_t23_StaticFields*)iTween_t23_il2cpp_TypeInfo_var->static_fields)->___tweens_2;
		int32_t L_13 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(17 /* System.Int32 System.Collections.Generic.List`1<System.Collections.Hashtable>::get_Count() */, L_12);
		if ((((int32_t)L_11) < ((int32_t)L_13)))
		{
			goto IL_000d;
		}
	}
	{
		V_4 = 0;
		goto IL_006c;
	}

IL_0053:
	{
		ArrayList_t71 * L_14 = V_0;
		int32_t L_15 = V_4;
		Object_t * L_16 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(18 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_14, L_15);
		String_t* L_17 = ___type;
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		iTween_Resume_m215(NULL /*static, unused*/, ((GameObject_t34 *)CastclassSealed(L_16, GameObject_t34_il2cpp_TypeInfo_var)), L_17, /*hidden argument*/NULL);
		int32_t L_18 = V_4;
		V_4 = ((int32_t)((int32_t)L_18+(int32_t)1));
	}

IL_006c:
	{
		int32_t L_19 = V_4;
		ArrayList_t71 * L_20 = V_0;
		int32_t L_21 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_20);
		if ((((int32_t)L_19) < ((int32_t)L_21)))
		{
			goto IL_0053;
		}
	}
	{
		return;
	}
}
// System.Void iTween::Pause(UnityEngine.GameObject)
extern TypeInfo* iTween_t23_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_GetComponents_TisiTween_t23_m435_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral20;
extern "C" void iTween_Pause_m219 (Object_t * __this /* static, unused */, GameObject_t34 * ___target, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		iTween_t23_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		GameObject_GetComponents_TisiTween_t23_m435_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483689);
		_stringLiteral20 = il2cpp_codegen_string_literal_from_index(20);
		s_Il2CppMethodIntialized = true;
	}
	ComponentU5BU5D_t68* V_0 = {0};
	iTween_t23 * V_1 = {0};
	ComponentU5BU5D_t68* V_2 = {0};
	int32_t V_3 = 0;
	{
		GameObject_t34 * L_0 = ___target;
		iTweenU5BU5D_t69* L_1 = GameObject_GetComponents_TisiTween_t23_m435(L_0, /*hidden argument*/GameObject_GetComponents_TisiTween_t23_m435_MethodInfo_var);
		V_0 = (ComponentU5BU5D_t68*)L_1;
		ComponentU5BU5D_t68* L_2 = V_0;
		V_2 = L_2;
		V_3 = 0;
		goto IL_005f;
	}

IL_0010:
	{
		ComponentU5BU5D_t68* L_3 = V_2;
		int32_t L_4 = V_3;
		int32_t L_5 = L_4;
		V_1 = ((iTween_t23 *)CastclassClass((*(Component_t70 **)(Component_t70 **)SZArrayLdElema(L_3, L_5, sizeof(Component_t70 *))), iTween_t23_il2cpp_TypeInfo_var));
		iTween_t23 * L_6 = V_1;
		float L_7 = (L_6->___delay_9);
		if ((!(((float)L_7) > ((float)(0.0f)))))
		{
			goto IL_004d;
		}
	}
	{
		iTween_t23 * L_8 = V_1;
		iTween_t23 * L_9 = L_8;
		float L_10 = (L_9->___delay_9);
		float L_11 = Time_get_time_m335(NULL /*static, unused*/, /*hidden argument*/NULL);
		iTween_t23 * L_12 = V_1;
		float L_13 = (L_12->___delayStarted_16);
		L_9->___delay_9 = ((float)((float)L_10-(float)((float)((float)L_11-(float)L_13))));
		iTween_t23 * L_14 = V_1;
		MonoBehaviour_StopCoroutine_m442(L_14, _stringLiteral20, /*hidden argument*/NULL);
	}

IL_004d:
	{
		iTween_t23 * L_15 = V_1;
		L_15->___isPaused_12 = 1;
		iTween_t23 * L_16 = V_1;
		Behaviour_set_enabled_m436(L_16, 0, /*hidden argument*/NULL);
		int32_t L_17 = V_3;
		V_3 = ((int32_t)((int32_t)L_17+(int32_t)1));
	}

IL_005f:
	{
		int32_t L_18 = V_3;
		ComponentU5BU5D_t68* L_19 = V_2;
		if ((((int32_t)L_18) < ((int32_t)(((int32_t)((int32_t)(((Array_t *)L_19)->max_length)))))))
		{
			goto IL_0010;
		}
	}
	{
		return;
	}
}
// System.Void iTween::Pause(UnityEngine.GameObject,System.Boolean)
extern TypeInfo* iTween_t23_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t42_il2cpp_TypeInfo_var;
extern TypeInfo* Transform_t32_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t57_il2cpp_TypeInfo_var;
extern "C" void iTween_Pause_m220 (Object_t * __this /* static, unused */, GameObject_t34 * ___target, bool ___includechildren, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		iTween_t23_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		IEnumerator_t42_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(29);
		Transform_t32_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(30);
		IDisposable_t57_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(31);
		s_Il2CppMethodIntialized = true;
	}
	Transform_t32 * V_0 = {0};
	Object_t * V_1 = {0};
	Object_t * V_2 = {0};
	Exception_t55 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t55 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		GameObject_t34 * L_0 = ___target;
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		iTween_Pause_m219(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		bool L_1 = ___includechildren;
		if (!L_1)
		{
			goto IL_0057;
		}
	}
	{
		GameObject_t34 * L_2 = ___target;
		Transform_t32 * L_3 = GameObject_get_transform_m344(L_2, /*hidden argument*/NULL);
		Object_t * L_4 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(4 /* System.Collections.IEnumerator UnityEngine.Transform::GetEnumerator() */, L_3);
		V_1 = L_4;
	}

IL_0018:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0035;
		}

IL_001d:
		{
			Object_t * L_5 = V_1;
			Object_t * L_6 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t42_il2cpp_TypeInfo_var, L_5);
			V_0 = ((Transform_t32 *)CastclassClass(L_6, Transform_t32_il2cpp_TypeInfo_var));
			Transform_t32 * L_7 = V_0;
			GameObject_t34 * L_8 = Component_get_gameObject_m319(L_7, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
			iTween_Pause_m220(NULL /*static, unused*/, L_8, 1, /*hidden argument*/NULL);
		}

IL_0035:
		{
			Object_t * L_9 = V_1;
			bool L_10 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t42_il2cpp_TypeInfo_var, L_9);
			if (L_10)
			{
				goto IL_001d;
			}
		}

IL_0040:
		{
			IL2CPP_LEAVE(0x57, FINALLY_0045);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t55 *)e.ex;
		goto FINALLY_0045;
	}

FINALLY_0045:
	{ // begin finally (depth: 1)
		{
			Object_t * L_11 = V_1;
			V_2 = ((Object_t *)IsInst(L_11, IDisposable_t57_il2cpp_TypeInfo_var));
			Object_t * L_12 = V_2;
			if (L_12)
			{
				goto IL_0050;
			}
		}

IL_004f:
		{
			IL2CPP_END_FINALLY(69)
		}

IL_0050:
		{
			Object_t * L_13 = V_2;
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t57_il2cpp_TypeInfo_var, L_13);
			IL2CPP_END_FINALLY(69)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(69)
	{
		IL2CPP_JUMP_TBL(0x57, IL_0057)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t55 *)
	}

IL_0057:
	{
		return;
	}
}
// System.Void iTween::Pause(UnityEngine.GameObject,System.String)
extern TypeInfo* iTween_t23_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_GetComponents_TisiTween_t23_m435_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral20;
extern "C" void iTween_Pause_m221 (Object_t * __this /* static, unused */, GameObject_t34 * ___target, String_t* ___type, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		iTween_t23_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(33);
		GameObject_GetComponents_TisiTween_t23_m435_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483689);
		_stringLiteral20 = il2cpp_codegen_string_literal_from_index(20);
		s_Il2CppMethodIntialized = true;
	}
	ComponentU5BU5D_t68* V_0 = {0};
	iTween_t23 * V_1 = {0};
	ComponentU5BU5D_t68* V_2 = {0};
	int32_t V_3 = 0;
	String_t* V_4 = {0};
	{
		GameObject_t34 * L_0 = ___target;
		iTweenU5BU5D_t69* L_1 = GameObject_GetComponents_TisiTween_t23_m435(L_0, /*hidden argument*/GameObject_GetComponents_TisiTween_t23_m435_MethodInfo_var);
		V_0 = (ComponentU5BU5D_t68*)L_1;
		ComponentU5BU5D_t68* L_2 = V_0;
		V_2 = L_2;
		V_3 = 0;
		goto IL_0099;
	}

IL_0010:
	{
		ComponentU5BU5D_t68* L_3 = V_2;
		int32_t L_4 = V_3;
		int32_t L_5 = L_4;
		V_1 = ((iTween_t23 *)CastclassClass((*(Component_t70 **)(Component_t70 **)SZArrayLdElema(L_3, L_5, sizeof(Component_t70 *))), iTween_t23_il2cpp_TypeInfo_var));
		iTween_t23 * L_6 = V_1;
		String_t* L_7 = (L_6->___type_5);
		iTween_t23 * L_8 = V_1;
		String_t* L_9 = (L_8->___method_6);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_10 = String_Concat_m437(NULL /*static, unused*/, L_7, L_9, /*hidden argument*/NULL);
		V_4 = L_10;
		String_t* L_11 = V_4;
		String_t* L_12 = ___type;
		int32_t L_13 = String_get_Length_m438(L_12, /*hidden argument*/NULL);
		String_t* L_14 = String_Substring_m439(L_11, 0, L_13, /*hidden argument*/NULL);
		V_4 = L_14;
		String_t* L_15 = V_4;
		String_t* L_16 = String_ToLower_m440(L_15, /*hidden argument*/NULL);
		String_t* L_17 = ___type;
		String_t* L_18 = String_ToLower_m440(L_17, /*hidden argument*/NULL);
		bool L_19 = String_op_Equality_m414(NULL /*static, unused*/, L_16, L_18, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_0095;
		}
	}
	{
		iTween_t23 * L_20 = V_1;
		float L_21 = (L_20->___delay_9);
		if ((!(((float)L_21) > ((float)(0.0f)))))
		{
			goto IL_0087;
		}
	}
	{
		iTween_t23 * L_22 = V_1;
		iTween_t23 * L_23 = L_22;
		float L_24 = (L_23->___delay_9);
		float L_25 = Time_get_time_m335(NULL /*static, unused*/, /*hidden argument*/NULL);
		iTween_t23 * L_26 = V_1;
		float L_27 = (L_26->___delayStarted_16);
		L_23->___delay_9 = ((float)((float)L_24-(float)((float)((float)L_25-(float)L_27))));
		iTween_t23 * L_28 = V_1;
		MonoBehaviour_StopCoroutine_m442(L_28, _stringLiteral20, /*hidden argument*/NULL);
	}

IL_0087:
	{
		iTween_t23 * L_29 = V_1;
		L_29->___isPaused_12 = 1;
		iTween_t23 * L_30 = V_1;
		Behaviour_set_enabled_m436(L_30, 0, /*hidden argument*/NULL);
	}

IL_0095:
	{
		int32_t L_31 = V_3;
		V_3 = ((int32_t)((int32_t)L_31+(int32_t)1));
	}

IL_0099:
	{
		int32_t L_32 = V_3;
		ComponentU5BU5D_t68* L_33 = V_2;
		if ((((int32_t)L_32) < ((int32_t)(((int32_t)((int32_t)(((Array_t *)L_33)->max_length)))))))
		{
			goto IL_0010;
		}
	}
	{
		return;
	}
}
// System.Void iTween::Pause(UnityEngine.GameObject,System.String,System.Boolean)
extern TypeInfo* iTween_t23_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t42_il2cpp_TypeInfo_var;
extern TypeInfo* Transform_t32_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t57_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_GetComponents_TisiTween_t23_m435_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral20;
extern "C" void iTween_Pause_m222 (Object_t * __this /* static, unused */, GameObject_t34 * ___target, String_t* ___type, bool ___includechildren, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		iTween_t23_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(33);
		IEnumerator_t42_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(29);
		Transform_t32_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(30);
		IDisposable_t57_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(31);
		GameObject_GetComponents_TisiTween_t23_m435_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483689);
		_stringLiteral20 = il2cpp_codegen_string_literal_from_index(20);
		s_Il2CppMethodIntialized = true;
	}
	ComponentU5BU5D_t68* V_0 = {0};
	iTween_t23 * V_1 = {0};
	ComponentU5BU5D_t68* V_2 = {0};
	int32_t V_3 = 0;
	String_t* V_4 = {0};
	Transform_t32 * V_5 = {0};
	Object_t * V_6 = {0};
	Object_t * V_7 = {0};
	Exception_t55 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t55 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		GameObject_t34 * L_0 = ___target;
		iTweenU5BU5D_t69* L_1 = GameObject_GetComponents_TisiTween_t23_m435(L_0, /*hidden argument*/GameObject_GetComponents_TisiTween_t23_m435_MethodInfo_var);
		V_0 = (ComponentU5BU5D_t68*)L_1;
		ComponentU5BU5D_t68* L_2 = V_0;
		V_2 = L_2;
		V_3 = 0;
		goto IL_0099;
	}

IL_0010:
	{
		ComponentU5BU5D_t68* L_3 = V_2;
		int32_t L_4 = V_3;
		int32_t L_5 = L_4;
		V_1 = ((iTween_t23 *)CastclassClass((*(Component_t70 **)(Component_t70 **)SZArrayLdElema(L_3, L_5, sizeof(Component_t70 *))), iTween_t23_il2cpp_TypeInfo_var));
		iTween_t23 * L_6 = V_1;
		String_t* L_7 = (L_6->___type_5);
		iTween_t23 * L_8 = V_1;
		String_t* L_9 = (L_8->___method_6);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_10 = String_Concat_m437(NULL /*static, unused*/, L_7, L_9, /*hidden argument*/NULL);
		V_4 = L_10;
		String_t* L_11 = V_4;
		String_t* L_12 = ___type;
		int32_t L_13 = String_get_Length_m438(L_12, /*hidden argument*/NULL);
		String_t* L_14 = String_Substring_m439(L_11, 0, L_13, /*hidden argument*/NULL);
		V_4 = L_14;
		String_t* L_15 = V_4;
		String_t* L_16 = String_ToLower_m440(L_15, /*hidden argument*/NULL);
		String_t* L_17 = ___type;
		String_t* L_18 = String_ToLower_m440(L_17, /*hidden argument*/NULL);
		bool L_19 = String_op_Equality_m414(NULL /*static, unused*/, L_16, L_18, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_0095;
		}
	}
	{
		iTween_t23 * L_20 = V_1;
		float L_21 = (L_20->___delay_9);
		if ((!(((float)L_21) > ((float)(0.0f)))))
		{
			goto IL_0087;
		}
	}
	{
		iTween_t23 * L_22 = V_1;
		iTween_t23 * L_23 = L_22;
		float L_24 = (L_23->___delay_9);
		float L_25 = Time_get_time_m335(NULL /*static, unused*/, /*hidden argument*/NULL);
		iTween_t23 * L_26 = V_1;
		float L_27 = (L_26->___delayStarted_16);
		L_23->___delay_9 = ((float)((float)L_24-(float)((float)((float)L_25-(float)L_27))));
		iTween_t23 * L_28 = V_1;
		MonoBehaviour_StopCoroutine_m442(L_28, _stringLiteral20, /*hidden argument*/NULL);
	}

IL_0087:
	{
		iTween_t23 * L_29 = V_1;
		L_29->___isPaused_12 = 1;
		iTween_t23 * L_30 = V_1;
		Behaviour_set_enabled_m436(L_30, 0, /*hidden argument*/NULL);
	}

IL_0095:
	{
		int32_t L_31 = V_3;
		V_3 = ((int32_t)((int32_t)L_31+(int32_t)1));
	}

IL_0099:
	{
		int32_t L_32 = V_3;
		ComponentU5BU5D_t68* L_33 = V_2;
		if ((((int32_t)L_32) < ((int32_t)(((int32_t)((int32_t)(((Array_t *)L_33)->max_length)))))))
		{
			goto IL_0010;
		}
	}
	{
		bool L_34 = ___includechildren;
		if (!L_34)
		{
			goto IL_00fd;
		}
	}
	{
		GameObject_t34 * L_35 = ___target;
		Transform_t32 * L_36 = GameObject_get_transform_m344(L_35, /*hidden argument*/NULL);
		Object_t * L_37 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(4 /* System.Collections.IEnumerator UnityEngine.Transform::GetEnumerator() */, L_36);
		V_6 = L_37;
	}

IL_00b5:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00d6;
		}

IL_00ba:
		{
			Object_t * L_38 = V_6;
			Object_t * L_39 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t42_il2cpp_TypeInfo_var, L_38);
			V_5 = ((Transform_t32 *)CastclassClass(L_39, Transform_t32_il2cpp_TypeInfo_var));
			Transform_t32 * L_40 = V_5;
			GameObject_t34 * L_41 = Component_get_gameObject_m319(L_40, /*hidden argument*/NULL);
			String_t* L_42 = ___type;
			IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
			iTween_Pause_m222(NULL /*static, unused*/, L_41, L_42, 1, /*hidden argument*/NULL);
		}

IL_00d6:
		{
			Object_t * L_43 = V_6;
			bool L_44 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t42_il2cpp_TypeInfo_var, L_43);
			if (L_44)
			{
				goto IL_00ba;
			}
		}

IL_00e2:
		{
			IL2CPP_LEAVE(0xFD, FINALLY_00e7);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t55 *)e.ex;
		goto FINALLY_00e7;
	}

FINALLY_00e7:
	{ // begin finally (depth: 1)
		{
			Object_t * L_45 = V_6;
			V_7 = ((Object_t *)IsInst(L_45, IDisposable_t57_il2cpp_TypeInfo_var));
			Object_t * L_46 = V_7;
			if (L_46)
			{
				goto IL_00f5;
			}
		}

IL_00f4:
		{
			IL2CPP_END_FINALLY(231)
		}

IL_00f5:
		{
			Object_t * L_47 = V_7;
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t57_il2cpp_TypeInfo_var, L_47);
			IL2CPP_END_FINALLY(231)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(231)
	{
		IL2CPP_JUMP_TBL(0xFD, IL_00fd)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t55 *)
	}

IL_00fd:
	{
		return;
	}
}
// System.Void iTween::Pause()
extern TypeInfo* iTween_t23_il2cpp_TypeInfo_var;
extern TypeInfo* GameObject_t34_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral87;
extern "C" void iTween_Pause_m223 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		iTween_t23_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		GameObject_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(50);
		_stringLiteral87 = il2cpp_codegen_string_literal_from_index(87);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	Hashtable_t26 * V_1 = {0};
	GameObject_t34 * V_2 = {0};
	{
		V_0 = 0;
		goto IL_002e;
	}

IL_0007:
	{
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		List_1_t33 * L_0 = ((iTween_t23_StaticFields*)iTween_t23_il2cpp_TypeInfo_var->static_fields)->___tweens_2;
		int32_t L_1 = V_0;
		Hashtable_t26 * L_2 = (Hashtable_t26 *)VirtFuncInvoker1< Hashtable_t26 *, int32_t >::Invoke(28 /* !0 System.Collections.Generic.List`1<System.Collections.Hashtable>::get_Item(System.Int32) */, L_0, L_1);
		V_1 = L_2;
		Hashtable_t26 * L_3 = V_1;
		Object_t * L_4 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_3, _stringLiteral87);
		V_2 = ((GameObject_t34 *)CastclassSealed(L_4, GameObject_t34_il2cpp_TypeInfo_var));
		GameObject_t34 * L_5 = V_2;
		iTween_Pause_m219(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		int32_t L_6 = V_0;
		V_0 = ((int32_t)((int32_t)L_6+(int32_t)1));
	}

IL_002e:
	{
		int32_t L_7 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		List_1_t33 * L_8 = ((iTween_t23_StaticFields*)iTween_t23_il2cpp_TypeInfo_var->static_fields)->___tweens_2;
		int32_t L_9 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(17 /* System.Int32 System.Collections.Generic.List`1<System.Collections.Hashtable>::get_Count() */, L_8);
		if ((((int32_t)L_7) < ((int32_t)L_9)))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void iTween::Pause(System.String)
extern TypeInfo* ArrayList_t71_il2cpp_TypeInfo_var;
extern TypeInfo* iTween_t23_il2cpp_TypeInfo_var;
extern TypeInfo* GameObject_t34_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral87;
extern "C" void iTween_Pause_m224 (Object_t * __this /* static, unused */, String_t* ___type, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArrayList_t71_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(51);
		iTween_t23_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		GameObject_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(50);
		_stringLiteral87 = il2cpp_codegen_string_literal_from_index(87);
		s_Il2CppMethodIntialized = true;
	}
	ArrayList_t71 * V_0 = {0};
	int32_t V_1 = 0;
	Hashtable_t26 * V_2 = {0};
	GameObject_t34 * V_3 = {0};
	int32_t V_4 = 0;
	{
		ArrayList_t71 * L_0 = (ArrayList_t71 *)il2cpp_codegen_object_new (ArrayList_t71_il2cpp_TypeInfo_var);
		ArrayList__ctor_m441(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		V_1 = 0;
		goto IL_003b;
	}

IL_000d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		List_1_t33 * L_1 = ((iTween_t23_StaticFields*)iTween_t23_il2cpp_TypeInfo_var->static_fields)->___tweens_2;
		int32_t L_2 = V_1;
		Hashtable_t26 * L_3 = (Hashtable_t26 *)VirtFuncInvoker1< Hashtable_t26 *, int32_t >::Invoke(28 /* !0 System.Collections.Generic.List`1<System.Collections.Hashtable>::get_Item(System.Int32) */, L_1, L_2);
		V_2 = L_3;
		Hashtable_t26 * L_4 = V_2;
		Object_t * L_5 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_4, _stringLiteral87);
		V_3 = ((GameObject_t34 *)CastclassSealed(L_5, GameObject_t34_il2cpp_TypeInfo_var));
		ArrayList_t71 * L_6 = V_0;
		ArrayList_t71 * L_7 = V_0;
		int32_t L_8 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_7);
		GameObject_t34 * L_9 = V_3;
		VirtActionInvoker2< int32_t, Object_t * >::Invoke(32 /* System.Void System.Collections.ArrayList::Insert(System.Int32,System.Object) */, L_6, L_8, L_9);
		int32_t L_10 = V_1;
		V_1 = ((int32_t)((int32_t)L_10+(int32_t)1));
	}

IL_003b:
	{
		int32_t L_11 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		List_1_t33 * L_12 = ((iTween_t23_StaticFields*)iTween_t23_il2cpp_TypeInfo_var->static_fields)->___tweens_2;
		int32_t L_13 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(17 /* System.Int32 System.Collections.Generic.List`1<System.Collections.Hashtable>::get_Count() */, L_12);
		if ((((int32_t)L_11) < ((int32_t)L_13)))
		{
			goto IL_000d;
		}
	}
	{
		V_4 = 0;
		goto IL_006c;
	}

IL_0053:
	{
		ArrayList_t71 * L_14 = V_0;
		int32_t L_15 = V_4;
		Object_t * L_16 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(18 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_14, L_15);
		String_t* L_17 = ___type;
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		iTween_Pause_m221(NULL /*static, unused*/, ((GameObject_t34 *)CastclassSealed(L_16, GameObject_t34_il2cpp_TypeInfo_var)), L_17, /*hidden argument*/NULL);
		int32_t L_18 = V_4;
		V_4 = ((int32_t)((int32_t)L_18+(int32_t)1));
	}

IL_006c:
	{
		int32_t L_19 = V_4;
		ArrayList_t71 * L_20 = V_0;
		int32_t L_21 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_20);
		if ((((int32_t)L_19) < ((int32_t)L_21)))
		{
			goto IL_0053;
		}
	}
	{
		return;
	}
}
// System.Int32 iTween::Count()
extern TypeInfo* iTween_t23_il2cpp_TypeInfo_var;
extern "C" int32_t iTween_Count_m225 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		iTween_t23_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		List_1_t33 * L_0 = ((iTween_t23_StaticFields*)iTween_t23_il2cpp_TypeInfo_var->static_fields)->___tweens_2;
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(17 /* System.Int32 System.Collections.Generic.List`1<System.Collections.Hashtable>::get_Count() */, L_0);
		return L_1;
	}
}
// System.Int32 iTween::Count(System.String)
extern TypeInfo* iTween_t23_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral28;
extern Il2CppCodeGenString* _stringLiteral30;
extern "C" int32_t iTween_Count_m226 (Object_t * __this /* static, unused */, String_t* ___type, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		iTween_t23_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(33);
		_stringLiteral28 = il2cpp_codegen_string_literal_from_index(28);
		_stringLiteral30 = il2cpp_codegen_string_literal_from_index(30);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Hashtable_t26 * V_2 = {0};
	String_t* V_3 = {0};
	{
		V_0 = 0;
		V_1 = 0;
		goto IL_0067;
	}

IL_0009:
	{
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		List_1_t33 * L_0 = ((iTween_t23_StaticFields*)iTween_t23_il2cpp_TypeInfo_var->static_fields)->___tweens_2;
		int32_t L_1 = V_1;
		Hashtable_t26 * L_2 = (Hashtable_t26 *)VirtFuncInvoker1< Hashtable_t26 *, int32_t >::Invoke(28 /* !0 System.Collections.Generic.List`1<System.Collections.Hashtable>::get_Item(System.Int32) */, L_0, L_1);
		V_2 = L_2;
		Hashtable_t26 * L_3 = V_2;
		Object_t * L_4 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_3, _stringLiteral28);
		Hashtable_t26 * L_5 = V_2;
		Object_t * L_6 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_5, _stringLiteral30);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_7 = String_Concat_m437(NULL /*static, unused*/, ((String_t*)CastclassSealed(L_4, String_t_il2cpp_TypeInfo_var)), ((String_t*)CastclassSealed(L_6, String_t_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		V_3 = L_7;
		String_t* L_8 = V_3;
		String_t* L_9 = ___type;
		int32_t L_10 = String_get_Length_m438(L_9, /*hidden argument*/NULL);
		String_t* L_11 = String_Substring_m439(L_8, 0, L_10, /*hidden argument*/NULL);
		V_3 = L_11;
		String_t* L_12 = V_3;
		String_t* L_13 = String_ToLower_m440(L_12, /*hidden argument*/NULL);
		String_t* L_14 = ___type;
		String_t* L_15 = String_ToLower_m440(L_14, /*hidden argument*/NULL);
		bool L_16 = String_op_Equality_m414(NULL /*static, unused*/, L_13, L_15, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_0063;
		}
	}
	{
		int32_t L_17 = V_0;
		V_0 = ((int32_t)((int32_t)L_17+(int32_t)1));
	}

IL_0063:
	{
		int32_t L_18 = V_1;
		V_1 = ((int32_t)((int32_t)L_18+(int32_t)1));
	}

IL_0067:
	{
		int32_t L_19 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		List_1_t33 * L_20 = ((iTween_t23_StaticFields*)iTween_t23_il2cpp_TypeInfo_var->static_fields)->___tweens_2;
		int32_t L_21 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(17 /* System.Int32 System.Collections.Generic.List`1<System.Collections.Hashtable>::get_Count() */, L_20);
		if ((((int32_t)L_19) < ((int32_t)L_21)))
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_22 = V_0;
		return L_22;
	}
}
// System.Int32 iTween::Count(UnityEngine.GameObject)
extern const MethodInfo* GameObject_GetComponents_TisiTween_t23_m435_MethodInfo_var;
extern "C" int32_t iTween_Count_m227 (Object_t * __this /* static, unused */, GameObject_t34 * ___target, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameObject_GetComponents_TisiTween_t23_m435_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483689);
		s_Il2CppMethodIntialized = true;
	}
	ComponentU5BU5D_t68* V_0 = {0};
	{
		GameObject_t34 * L_0 = ___target;
		iTweenU5BU5D_t69* L_1 = GameObject_GetComponents_TisiTween_t23_m435(L_0, /*hidden argument*/GameObject_GetComponents_TisiTween_t23_m435_MethodInfo_var);
		V_0 = (ComponentU5BU5D_t68*)L_1;
		ComponentU5BU5D_t68* L_2 = V_0;
		return (((int32_t)((int32_t)(((Array_t *)L_2)->max_length))));
	}
}
// System.Int32 iTween::Count(UnityEngine.GameObject,System.String)
extern TypeInfo* iTween_t23_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_GetComponents_TisiTween_t23_m435_MethodInfo_var;
extern "C" int32_t iTween_Count_m228 (Object_t * __this /* static, unused */, GameObject_t34 * ___target, String_t* ___type, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		iTween_t23_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(33);
		GameObject_GetComponents_TisiTween_t23_m435_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483689);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	ComponentU5BU5D_t68* V_1 = {0};
	iTween_t23 * V_2 = {0};
	ComponentU5BU5D_t68* V_3 = {0};
	int32_t V_4 = 0;
	String_t* V_5 = {0};
	{
		V_0 = 0;
		GameObject_t34 * L_0 = ___target;
		iTweenU5BU5D_t69* L_1 = GameObject_GetComponents_TisiTween_t23_m435(L_0, /*hidden argument*/GameObject_GetComponents_TisiTween_t23_m435_MethodInfo_var);
		V_1 = (ComponentU5BU5D_t68*)L_1;
		ComponentU5BU5D_t68* L_2 = V_1;
		V_3 = L_2;
		V_4 = 0;
		goto IL_0061;
	}

IL_0013:
	{
		ComponentU5BU5D_t68* L_3 = V_3;
		int32_t L_4 = V_4;
		int32_t L_5 = L_4;
		V_2 = ((iTween_t23 *)CastclassClass((*(Component_t70 **)(Component_t70 **)SZArrayLdElema(L_3, L_5, sizeof(Component_t70 *))), iTween_t23_il2cpp_TypeInfo_var));
		iTween_t23 * L_6 = V_2;
		String_t* L_7 = (L_6->___type_5);
		iTween_t23 * L_8 = V_2;
		String_t* L_9 = (L_8->___method_6);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_10 = String_Concat_m437(NULL /*static, unused*/, L_7, L_9, /*hidden argument*/NULL);
		V_5 = L_10;
		String_t* L_11 = V_5;
		String_t* L_12 = ___type;
		int32_t L_13 = String_get_Length_m438(L_12, /*hidden argument*/NULL);
		String_t* L_14 = String_Substring_m439(L_11, 0, L_13, /*hidden argument*/NULL);
		V_5 = L_14;
		String_t* L_15 = V_5;
		String_t* L_16 = String_ToLower_m440(L_15, /*hidden argument*/NULL);
		String_t* L_17 = ___type;
		String_t* L_18 = String_ToLower_m440(L_17, /*hidden argument*/NULL);
		bool L_19 = String_op_Equality_m414(NULL /*static, unused*/, L_16, L_18, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_005b;
		}
	}
	{
		int32_t L_20 = V_0;
		V_0 = ((int32_t)((int32_t)L_20+(int32_t)1));
	}

IL_005b:
	{
		int32_t L_21 = V_4;
		V_4 = ((int32_t)((int32_t)L_21+(int32_t)1));
	}

IL_0061:
	{
		int32_t L_22 = V_4;
		ComponentU5BU5D_t68* L_23 = V_3;
		if ((((int32_t)L_22) < ((int32_t)(((int32_t)((int32_t)(((Array_t *)L_23)->max_length)))))))
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_24 = V_0;
		return L_24;
	}
}
// System.Void iTween::Stop()
extern TypeInfo* iTween_t23_il2cpp_TypeInfo_var;
extern TypeInfo* GameObject_t34_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral87;
extern "C" void iTween_Stop_m229 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		iTween_t23_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		GameObject_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(50);
		_stringLiteral87 = il2cpp_codegen_string_literal_from_index(87);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	Hashtable_t26 * V_1 = {0};
	GameObject_t34 * V_2 = {0};
	{
		V_0 = 0;
		goto IL_002e;
	}

IL_0007:
	{
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		List_1_t33 * L_0 = ((iTween_t23_StaticFields*)iTween_t23_il2cpp_TypeInfo_var->static_fields)->___tweens_2;
		int32_t L_1 = V_0;
		Hashtable_t26 * L_2 = (Hashtable_t26 *)VirtFuncInvoker1< Hashtable_t26 *, int32_t >::Invoke(28 /* !0 System.Collections.Generic.List`1<System.Collections.Hashtable>::get_Item(System.Int32) */, L_0, L_1);
		V_1 = L_2;
		Hashtable_t26 * L_3 = V_1;
		Object_t * L_4 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_3, _stringLiteral87);
		V_2 = ((GameObject_t34 *)CastclassSealed(L_4, GameObject_t34_il2cpp_TypeInfo_var));
		GameObject_t34 * L_5 = V_2;
		iTween_Stop_m232(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		int32_t L_6 = V_0;
		V_0 = ((int32_t)((int32_t)L_6+(int32_t)1));
	}

IL_002e:
	{
		int32_t L_7 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		List_1_t33 * L_8 = ((iTween_t23_StaticFields*)iTween_t23_il2cpp_TypeInfo_var->static_fields)->___tweens_2;
		int32_t L_9 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(17 /* System.Int32 System.Collections.Generic.List`1<System.Collections.Hashtable>::get_Count() */, L_8);
		if ((((int32_t)L_7) < ((int32_t)L_9)))
		{
			goto IL_0007;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		List_1_t33 * L_10 = ((iTween_t23_StaticFields*)iTween_t23_il2cpp_TypeInfo_var->static_fields)->___tweens_2;
		VirtActionInvoker0::Invoke(20 /* System.Void System.Collections.Generic.List`1<System.Collections.Hashtable>::Clear() */, L_10);
		return;
	}
}
// System.Void iTween::Stop(System.String)
extern TypeInfo* ArrayList_t71_il2cpp_TypeInfo_var;
extern TypeInfo* iTween_t23_il2cpp_TypeInfo_var;
extern TypeInfo* GameObject_t34_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral87;
extern "C" void iTween_Stop_m230 (Object_t * __this /* static, unused */, String_t* ___type, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArrayList_t71_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(51);
		iTween_t23_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		GameObject_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(50);
		_stringLiteral87 = il2cpp_codegen_string_literal_from_index(87);
		s_Il2CppMethodIntialized = true;
	}
	ArrayList_t71 * V_0 = {0};
	int32_t V_1 = 0;
	Hashtable_t26 * V_2 = {0};
	GameObject_t34 * V_3 = {0};
	int32_t V_4 = 0;
	{
		ArrayList_t71 * L_0 = (ArrayList_t71 *)il2cpp_codegen_object_new (ArrayList_t71_il2cpp_TypeInfo_var);
		ArrayList__ctor_m441(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		V_1 = 0;
		goto IL_003b;
	}

IL_000d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		List_1_t33 * L_1 = ((iTween_t23_StaticFields*)iTween_t23_il2cpp_TypeInfo_var->static_fields)->___tweens_2;
		int32_t L_2 = V_1;
		Hashtable_t26 * L_3 = (Hashtable_t26 *)VirtFuncInvoker1< Hashtable_t26 *, int32_t >::Invoke(28 /* !0 System.Collections.Generic.List`1<System.Collections.Hashtable>::get_Item(System.Int32) */, L_1, L_2);
		V_2 = L_3;
		Hashtable_t26 * L_4 = V_2;
		Object_t * L_5 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_4, _stringLiteral87);
		V_3 = ((GameObject_t34 *)CastclassSealed(L_5, GameObject_t34_il2cpp_TypeInfo_var));
		ArrayList_t71 * L_6 = V_0;
		ArrayList_t71 * L_7 = V_0;
		int32_t L_8 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_7);
		GameObject_t34 * L_9 = V_3;
		VirtActionInvoker2< int32_t, Object_t * >::Invoke(32 /* System.Void System.Collections.ArrayList::Insert(System.Int32,System.Object) */, L_6, L_8, L_9);
		int32_t L_10 = V_1;
		V_1 = ((int32_t)((int32_t)L_10+(int32_t)1));
	}

IL_003b:
	{
		int32_t L_11 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		List_1_t33 * L_12 = ((iTween_t23_StaticFields*)iTween_t23_il2cpp_TypeInfo_var->static_fields)->___tweens_2;
		int32_t L_13 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(17 /* System.Int32 System.Collections.Generic.List`1<System.Collections.Hashtable>::get_Count() */, L_12);
		if ((((int32_t)L_11) < ((int32_t)L_13)))
		{
			goto IL_000d;
		}
	}
	{
		V_4 = 0;
		goto IL_006c;
	}

IL_0053:
	{
		ArrayList_t71 * L_14 = V_0;
		int32_t L_15 = V_4;
		Object_t * L_16 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(18 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_14, L_15);
		String_t* L_17 = ___type;
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		iTween_Stop_m234(NULL /*static, unused*/, ((GameObject_t34 *)CastclassSealed(L_16, GameObject_t34_il2cpp_TypeInfo_var)), L_17, /*hidden argument*/NULL);
		int32_t L_18 = V_4;
		V_4 = ((int32_t)((int32_t)L_18+(int32_t)1));
	}

IL_006c:
	{
		int32_t L_19 = V_4;
		ArrayList_t71 * L_20 = V_0;
		int32_t L_21 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_20);
		if ((((int32_t)L_19) < ((int32_t)L_21)))
		{
			goto IL_0053;
		}
	}
	{
		return;
	}
}
// System.Void iTween::StopByName(System.String)
extern TypeInfo* ArrayList_t71_il2cpp_TypeInfo_var;
extern TypeInfo* iTween_t23_il2cpp_TypeInfo_var;
extern TypeInfo* GameObject_t34_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral87;
extern "C" void iTween_StopByName_m231 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArrayList_t71_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(51);
		iTween_t23_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		GameObject_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(50);
		_stringLiteral87 = il2cpp_codegen_string_literal_from_index(87);
		s_Il2CppMethodIntialized = true;
	}
	ArrayList_t71 * V_0 = {0};
	int32_t V_1 = 0;
	Hashtable_t26 * V_2 = {0};
	GameObject_t34 * V_3 = {0};
	int32_t V_4 = 0;
	{
		ArrayList_t71 * L_0 = (ArrayList_t71 *)il2cpp_codegen_object_new (ArrayList_t71_il2cpp_TypeInfo_var);
		ArrayList__ctor_m441(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		V_1 = 0;
		goto IL_003b;
	}

IL_000d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		List_1_t33 * L_1 = ((iTween_t23_StaticFields*)iTween_t23_il2cpp_TypeInfo_var->static_fields)->___tweens_2;
		int32_t L_2 = V_1;
		Hashtable_t26 * L_3 = (Hashtable_t26 *)VirtFuncInvoker1< Hashtable_t26 *, int32_t >::Invoke(28 /* !0 System.Collections.Generic.List`1<System.Collections.Hashtable>::get_Item(System.Int32) */, L_1, L_2);
		V_2 = L_3;
		Hashtable_t26 * L_4 = V_2;
		Object_t * L_5 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_4, _stringLiteral87);
		V_3 = ((GameObject_t34 *)CastclassSealed(L_5, GameObject_t34_il2cpp_TypeInfo_var));
		ArrayList_t71 * L_6 = V_0;
		ArrayList_t71 * L_7 = V_0;
		int32_t L_8 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_7);
		GameObject_t34 * L_9 = V_3;
		VirtActionInvoker2< int32_t, Object_t * >::Invoke(32 /* System.Void System.Collections.ArrayList::Insert(System.Int32,System.Object) */, L_6, L_8, L_9);
		int32_t L_10 = V_1;
		V_1 = ((int32_t)((int32_t)L_10+(int32_t)1));
	}

IL_003b:
	{
		int32_t L_11 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		List_1_t33 * L_12 = ((iTween_t23_StaticFields*)iTween_t23_il2cpp_TypeInfo_var->static_fields)->___tweens_2;
		int32_t L_13 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(17 /* System.Int32 System.Collections.Generic.List`1<System.Collections.Hashtable>::get_Count() */, L_12);
		if ((((int32_t)L_11) < ((int32_t)L_13)))
		{
			goto IL_000d;
		}
	}
	{
		V_4 = 0;
		goto IL_006c;
	}

IL_0053:
	{
		ArrayList_t71 * L_14 = V_0;
		int32_t L_15 = V_4;
		Object_t * L_16 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(18 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_14, L_15);
		String_t* L_17 = ___name;
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		iTween_StopByName_m235(NULL /*static, unused*/, ((GameObject_t34 *)CastclassSealed(L_16, GameObject_t34_il2cpp_TypeInfo_var)), L_17, /*hidden argument*/NULL);
		int32_t L_18 = V_4;
		V_4 = ((int32_t)((int32_t)L_18+(int32_t)1));
	}

IL_006c:
	{
		int32_t L_19 = V_4;
		ArrayList_t71 * L_20 = V_0;
		int32_t L_21 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_20);
		if ((((int32_t)L_19) < ((int32_t)L_21)))
		{
			goto IL_0053;
		}
	}
	{
		return;
	}
}
// System.Void iTween::Stop(UnityEngine.GameObject)
extern TypeInfo* iTween_t23_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_GetComponents_TisiTween_t23_m435_MethodInfo_var;
extern "C" void iTween_Stop_m232 (Object_t * __this /* static, unused */, GameObject_t34 * ___target, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		iTween_t23_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		GameObject_GetComponents_TisiTween_t23_m435_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483689);
		s_Il2CppMethodIntialized = true;
	}
	ComponentU5BU5D_t68* V_0 = {0};
	iTween_t23 * V_1 = {0};
	ComponentU5BU5D_t68* V_2 = {0};
	int32_t V_3 = 0;
	{
		GameObject_t34 * L_0 = ___target;
		iTweenU5BU5D_t69* L_1 = GameObject_GetComponents_TisiTween_t23_m435(L_0, /*hidden argument*/GameObject_GetComponents_TisiTween_t23_m435_MethodInfo_var);
		V_0 = (ComponentU5BU5D_t68*)L_1;
		ComponentU5BU5D_t68* L_2 = V_0;
		V_2 = L_2;
		V_3 = 0;
		goto IL_0023;
	}

IL_0010:
	{
		ComponentU5BU5D_t68* L_3 = V_2;
		int32_t L_4 = V_3;
		int32_t L_5 = L_4;
		V_1 = ((iTween_t23 *)CastclassClass((*(Component_t70 **)(Component_t70 **)SZArrayLdElema(L_3, L_5, sizeof(Component_t70 *))), iTween_t23_il2cpp_TypeInfo_var));
		iTween_t23 * L_6 = V_1;
		iTween_Dispose_m257(L_6, /*hidden argument*/NULL);
		int32_t L_7 = V_3;
		V_3 = ((int32_t)((int32_t)L_7+(int32_t)1));
	}

IL_0023:
	{
		int32_t L_8 = V_3;
		ComponentU5BU5D_t68* L_9 = V_2;
		if ((((int32_t)L_8) < ((int32_t)(((int32_t)((int32_t)(((Array_t *)L_9)->max_length)))))))
		{
			goto IL_0010;
		}
	}
	{
		return;
	}
}
// System.Void iTween::Stop(UnityEngine.GameObject,System.Boolean)
extern TypeInfo* iTween_t23_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t42_il2cpp_TypeInfo_var;
extern TypeInfo* Transform_t32_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t57_il2cpp_TypeInfo_var;
extern "C" void iTween_Stop_m233 (Object_t * __this /* static, unused */, GameObject_t34 * ___target, bool ___includechildren, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		iTween_t23_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		IEnumerator_t42_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(29);
		Transform_t32_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(30);
		IDisposable_t57_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(31);
		s_Il2CppMethodIntialized = true;
	}
	Transform_t32 * V_0 = {0};
	Object_t * V_1 = {0};
	Object_t * V_2 = {0};
	Exception_t55 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t55 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		GameObject_t34 * L_0 = ___target;
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		iTween_Stop_m232(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		bool L_1 = ___includechildren;
		if (!L_1)
		{
			goto IL_0057;
		}
	}
	{
		GameObject_t34 * L_2 = ___target;
		Transform_t32 * L_3 = GameObject_get_transform_m344(L_2, /*hidden argument*/NULL);
		Object_t * L_4 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(4 /* System.Collections.IEnumerator UnityEngine.Transform::GetEnumerator() */, L_3);
		V_1 = L_4;
	}

IL_0018:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0035;
		}

IL_001d:
		{
			Object_t * L_5 = V_1;
			Object_t * L_6 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t42_il2cpp_TypeInfo_var, L_5);
			V_0 = ((Transform_t32 *)CastclassClass(L_6, Transform_t32_il2cpp_TypeInfo_var));
			Transform_t32 * L_7 = V_0;
			GameObject_t34 * L_8 = Component_get_gameObject_m319(L_7, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
			iTween_Stop_m233(NULL /*static, unused*/, L_8, 1, /*hidden argument*/NULL);
		}

IL_0035:
		{
			Object_t * L_9 = V_1;
			bool L_10 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t42_il2cpp_TypeInfo_var, L_9);
			if (L_10)
			{
				goto IL_001d;
			}
		}

IL_0040:
		{
			IL2CPP_LEAVE(0x57, FINALLY_0045);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t55 *)e.ex;
		goto FINALLY_0045;
	}

FINALLY_0045:
	{ // begin finally (depth: 1)
		{
			Object_t * L_11 = V_1;
			V_2 = ((Object_t *)IsInst(L_11, IDisposable_t57_il2cpp_TypeInfo_var));
			Object_t * L_12 = V_2;
			if (L_12)
			{
				goto IL_0050;
			}
		}

IL_004f:
		{
			IL2CPP_END_FINALLY(69)
		}

IL_0050:
		{
			Object_t * L_13 = V_2;
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t57_il2cpp_TypeInfo_var, L_13);
			IL2CPP_END_FINALLY(69)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(69)
	{
		IL2CPP_JUMP_TBL(0x57, IL_0057)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t55 *)
	}

IL_0057:
	{
		return;
	}
}
// System.Void iTween::Stop(UnityEngine.GameObject,System.String)
extern TypeInfo* iTween_t23_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_GetComponents_TisiTween_t23_m435_MethodInfo_var;
extern "C" void iTween_Stop_m234 (Object_t * __this /* static, unused */, GameObject_t34 * ___target, String_t* ___type, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		iTween_t23_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(33);
		GameObject_GetComponents_TisiTween_t23_m435_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483689);
		s_Il2CppMethodIntialized = true;
	}
	ComponentU5BU5D_t68* V_0 = {0};
	iTween_t23 * V_1 = {0};
	ComponentU5BU5D_t68* V_2 = {0};
	int32_t V_3 = 0;
	String_t* V_4 = {0};
	{
		GameObject_t34 * L_0 = ___target;
		iTweenU5BU5D_t69* L_1 = GameObject_GetComponents_TisiTween_t23_m435(L_0, /*hidden argument*/GameObject_GetComponents_TisiTween_t23_m435_MethodInfo_var);
		V_0 = (ComponentU5BU5D_t68*)L_1;
		ComponentU5BU5D_t68* L_2 = V_0;
		V_2 = L_2;
		V_3 = 0;
		goto IL_005d;
	}

IL_0010:
	{
		ComponentU5BU5D_t68* L_3 = V_2;
		int32_t L_4 = V_3;
		int32_t L_5 = L_4;
		V_1 = ((iTween_t23 *)CastclassClass((*(Component_t70 **)(Component_t70 **)SZArrayLdElema(L_3, L_5, sizeof(Component_t70 *))), iTween_t23_il2cpp_TypeInfo_var));
		iTween_t23 * L_6 = V_1;
		String_t* L_7 = (L_6->___type_5);
		iTween_t23 * L_8 = V_1;
		String_t* L_9 = (L_8->___method_6);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_10 = String_Concat_m437(NULL /*static, unused*/, L_7, L_9, /*hidden argument*/NULL);
		V_4 = L_10;
		String_t* L_11 = V_4;
		String_t* L_12 = ___type;
		int32_t L_13 = String_get_Length_m438(L_12, /*hidden argument*/NULL);
		String_t* L_14 = String_Substring_m439(L_11, 0, L_13, /*hidden argument*/NULL);
		V_4 = L_14;
		String_t* L_15 = V_4;
		String_t* L_16 = String_ToLower_m440(L_15, /*hidden argument*/NULL);
		String_t* L_17 = ___type;
		String_t* L_18 = String_ToLower_m440(L_17, /*hidden argument*/NULL);
		bool L_19 = String_op_Equality_m414(NULL /*static, unused*/, L_16, L_18, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_0059;
		}
	}
	{
		iTween_t23 * L_20 = V_1;
		iTween_Dispose_m257(L_20, /*hidden argument*/NULL);
	}

IL_0059:
	{
		int32_t L_21 = V_3;
		V_3 = ((int32_t)((int32_t)L_21+(int32_t)1));
	}

IL_005d:
	{
		int32_t L_22 = V_3;
		ComponentU5BU5D_t68* L_23 = V_2;
		if ((((int32_t)L_22) < ((int32_t)(((int32_t)((int32_t)(((Array_t *)L_23)->max_length)))))))
		{
			goto IL_0010;
		}
	}
	{
		return;
	}
}
// System.Void iTween::StopByName(UnityEngine.GameObject,System.String)
extern TypeInfo* iTween_t23_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_GetComponents_TisiTween_t23_m435_MethodInfo_var;
extern "C" void iTween_StopByName_m235 (Object_t * __this /* static, unused */, GameObject_t34 * ___target, String_t* ___name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		iTween_t23_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(33);
		GameObject_GetComponents_TisiTween_t23_m435_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483689);
		s_Il2CppMethodIntialized = true;
	}
	ComponentU5BU5D_t68* V_0 = {0};
	iTween_t23 * V_1 = {0};
	ComponentU5BU5D_t68* V_2 = {0};
	int32_t V_3 = 0;
	{
		GameObject_t34 * L_0 = ___target;
		iTweenU5BU5D_t69* L_1 = GameObject_GetComponents_TisiTween_t23_m435(L_0, /*hidden argument*/GameObject_GetComponents_TisiTween_t23_m435_MethodInfo_var);
		V_0 = (ComponentU5BU5D_t68*)L_1;
		ComponentU5BU5D_t68* L_2 = V_0;
		V_2 = L_2;
		V_3 = 0;
		goto IL_0034;
	}

IL_0010:
	{
		ComponentU5BU5D_t68* L_3 = V_2;
		int32_t L_4 = V_3;
		int32_t L_5 = L_4;
		V_1 = ((iTween_t23 *)CastclassClass((*(Component_t70 **)(Component_t70 **)SZArrayLdElema(L_3, L_5, sizeof(Component_t70 *))), iTween_t23_il2cpp_TypeInfo_var));
		iTween_t23 * L_6 = V_1;
		String_t* L_7 = (L_6->____name_13);
		String_t* L_8 = ___name;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_9 = String_op_Equality_m414(NULL /*static, unused*/, L_7, L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0030;
		}
	}
	{
		iTween_t23 * L_10 = V_1;
		iTween_Dispose_m257(L_10, /*hidden argument*/NULL);
	}

IL_0030:
	{
		int32_t L_11 = V_3;
		V_3 = ((int32_t)((int32_t)L_11+(int32_t)1));
	}

IL_0034:
	{
		int32_t L_12 = V_3;
		ComponentU5BU5D_t68* L_13 = V_2;
		if ((((int32_t)L_12) < ((int32_t)(((int32_t)((int32_t)(((Array_t *)L_13)->max_length)))))))
		{
			goto IL_0010;
		}
	}
	{
		return;
	}
}
// System.Void iTween::Stop(UnityEngine.GameObject,System.String,System.Boolean)
extern TypeInfo* iTween_t23_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t42_il2cpp_TypeInfo_var;
extern TypeInfo* Transform_t32_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t57_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_GetComponents_TisiTween_t23_m435_MethodInfo_var;
extern "C" void iTween_Stop_m236 (Object_t * __this /* static, unused */, GameObject_t34 * ___target, String_t* ___type, bool ___includechildren, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		iTween_t23_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(33);
		IEnumerator_t42_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(29);
		Transform_t32_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(30);
		IDisposable_t57_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(31);
		GameObject_GetComponents_TisiTween_t23_m435_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483689);
		s_Il2CppMethodIntialized = true;
	}
	ComponentU5BU5D_t68* V_0 = {0};
	iTween_t23 * V_1 = {0};
	ComponentU5BU5D_t68* V_2 = {0};
	int32_t V_3 = 0;
	String_t* V_4 = {0};
	Transform_t32 * V_5 = {0};
	Object_t * V_6 = {0};
	Object_t * V_7 = {0};
	Exception_t55 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t55 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		GameObject_t34 * L_0 = ___target;
		iTweenU5BU5D_t69* L_1 = GameObject_GetComponents_TisiTween_t23_m435(L_0, /*hidden argument*/GameObject_GetComponents_TisiTween_t23_m435_MethodInfo_var);
		V_0 = (ComponentU5BU5D_t68*)L_1;
		ComponentU5BU5D_t68* L_2 = V_0;
		V_2 = L_2;
		V_3 = 0;
		goto IL_005d;
	}

IL_0010:
	{
		ComponentU5BU5D_t68* L_3 = V_2;
		int32_t L_4 = V_3;
		int32_t L_5 = L_4;
		V_1 = ((iTween_t23 *)CastclassClass((*(Component_t70 **)(Component_t70 **)SZArrayLdElema(L_3, L_5, sizeof(Component_t70 *))), iTween_t23_il2cpp_TypeInfo_var));
		iTween_t23 * L_6 = V_1;
		String_t* L_7 = (L_6->___type_5);
		iTween_t23 * L_8 = V_1;
		String_t* L_9 = (L_8->___method_6);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_10 = String_Concat_m437(NULL /*static, unused*/, L_7, L_9, /*hidden argument*/NULL);
		V_4 = L_10;
		String_t* L_11 = V_4;
		String_t* L_12 = ___type;
		int32_t L_13 = String_get_Length_m438(L_12, /*hidden argument*/NULL);
		String_t* L_14 = String_Substring_m439(L_11, 0, L_13, /*hidden argument*/NULL);
		V_4 = L_14;
		String_t* L_15 = V_4;
		String_t* L_16 = String_ToLower_m440(L_15, /*hidden argument*/NULL);
		String_t* L_17 = ___type;
		String_t* L_18 = String_ToLower_m440(L_17, /*hidden argument*/NULL);
		bool L_19 = String_op_Equality_m414(NULL /*static, unused*/, L_16, L_18, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_0059;
		}
	}
	{
		iTween_t23 * L_20 = V_1;
		iTween_Dispose_m257(L_20, /*hidden argument*/NULL);
	}

IL_0059:
	{
		int32_t L_21 = V_3;
		V_3 = ((int32_t)((int32_t)L_21+(int32_t)1));
	}

IL_005d:
	{
		int32_t L_22 = V_3;
		ComponentU5BU5D_t68* L_23 = V_2;
		if ((((int32_t)L_22) < ((int32_t)(((int32_t)((int32_t)(((Array_t *)L_23)->max_length)))))))
		{
			goto IL_0010;
		}
	}
	{
		bool L_24 = ___includechildren;
		if (!L_24)
		{
			goto IL_00c1;
		}
	}
	{
		GameObject_t34 * L_25 = ___target;
		Transform_t32 * L_26 = GameObject_get_transform_m344(L_25, /*hidden argument*/NULL);
		Object_t * L_27 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(4 /* System.Collections.IEnumerator UnityEngine.Transform::GetEnumerator() */, L_26);
		V_6 = L_27;
	}

IL_0079:
	try
	{ // begin try (depth: 1)
		{
			goto IL_009a;
		}

IL_007e:
		{
			Object_t * L_28 = V_6;
			Object_t * L_29 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t42_il2cpp_TypeInfo_var, L_28);
			V_5 = ((Transform_t32 *)CastclassClass(L_29, Transform_t32_il2cpp_TypeInfo_var));
			Transform_t32 * L_30 = V_5;
			GameObject_t34 * L_31 = Component_get_gameObject_m319(L_30, /*hidden argument*/NULL);
			String_t* L_32 = ___type;
			IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
			iTween_Stop_m236(NULL /*static, unused*/, L_31, L_32, 1, /*hidden argument*/NULL);
		}

IL_009a:
		{
			Object_t * L_33 = V_6;
			bool L_34 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t42_il2cpp_TypeInfo_var, L_33);
			if (L_34)
			{
				goto IL_007e;
			}
		}

IL_00a6:
		{
			IL2CPP_LEAVE(0xC1, FINALLY_00ab);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t55 *)e.ex;
		goto FINALLY_00ab;
	}

FINALLY_00ab:
	{ // begin finally (depth: 1)
		{
			Object_t * L_35 = V_6;
			V_7 = ((Object_t *)IsInst(L_35, IDisposable_t57_il2cpp_TypeInfo_var));
			Object_t * L_36 = V_7;
			if (L_36)
			{
				goto IL_00b9;
			}
		}

IL_00b8:
		{
			IL2CPP_END_FINALLY(171)
		}

IL_00b9:
		{
			Object_t * L_37 = V_7;
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t57_il2cpp_TypeInfo_var, L_37);
			IL2CPP_END_FINALLY(171)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(171)
	{
		IL2CPP_JUMP_TBL(0xC1, IL_00c1)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t55 *)
	}

IL_00c1:
	{
		return;
	}
}
// System.Void iTween::StopByName(UnityEngine.GameObject,System.String,System.Boolean)
extern TypeInfo* iTween_t23_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t42_il2cpp_TypeInfo_var;
extern TypeInfo* Transform_t32_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t57_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_GetComponents_TisiTween_t23_m435_MethodInfo_var;
extern "C" void iTween_StopByName_m237 (Object_t * __this /* static, unused */, GameObject_t34 * ___target, String_t* ___name, bool ___includechildren, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		iTween_t23_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(33);
		IEnumerator_t42_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(29);
		Transform_t32_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(30);
		IDisposable_t57_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(31);
		GameObject_GetComponents_TisiTween_t23_m435_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483689);
		s_Il2CppMethodIntialized = true;
	}
	ComponentU5BU5D_t68* V_0 = {0};
	iTween_t23 * V_1 = {0};
	ComponentU5BU5D_t68* V_2 = {0};
	int32_t V_3 = 0;
	Transform_t32 * V_4 = {0};
	Object_t * V_5 = {0};
	Object_t * V_6 = {0};
	Exception_t55 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t55 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		GameObject_t34 * L_0 = ___target;
		iTweenU5BU5D_t69* L_1 = GameObject_GetComponents_TisiTween_t23_m435(L_0, /*hidden argument*/GameObject_GetComponents_TisiTween_t23_m435_MethodInfo_var);
		V_0 = (ComponentU5BU5D_t68*)L_1;
		ComponentU5BU5D_t68* L_2 = V_0;
		V_2 = L_2;
		V_3 = 0;
		goto IL_0034;
	}

IL_0010:
	{
		ComponentU5BU5D_t68* L_3 = V_2;
		int32_t L_4 = V_3;
		int32_t L_5 = L_4;
		V_1 = ((iTween_t23 *)CastclassClass((*(Component_t70 **)(Component_t70 **)SZArrayLdElema(L_3, L_5, sizeof(Component_t70 *))), iTween_t23_il2cpp_TypeInfo_var));
		iTween_t23 * L_6 = V_1;
		String_t* L_7 = (L_6->____name_13);
		String_t* L_8 = ___name;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_9 = String_op_Equality_m414(NULL /*static, unused*/, L_7, L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0030;
		}
	}
	{
		iTween_t23 * L_10 = V_1;
		iTween_Dispose_m257(L_10, /*hidden argument*/NULL);
	}

IL_0030:
	{
		int32_t L_11 = V_3;
		V_3 = ((int32_t)((int32_t)L_11+(int32_t)1));
	}

IL_0034:
	{
		int32_t L_12 = V_3;
		ComponentU5BU5D_t68* L_13 = V_2;
		if ((((int32_t)L_12) < ((int32_t)(((int32_t)((int32_t)(((Array_t *)L_13)->max_length)))))))
		{
			goto IL_0010;
		}
	}
	{
		bool L_14 = ___includechildren;
		if (!L_14)
		{
			goto IL_0098;
		}
	}
	{
		GameObject_t34 * L_15 = ___target;
		Transform_t32 * L_16 = GameObject_get_transform_m344(L_15, /*hidden argument*/NULL);
		Object_t * L_17 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(4 /* System.Collections.IEnumerator UnityEngine.Transform::GetEnumerator() */, L_16);
		V_5 = L_17;
	}

IL_0050:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0071;
		}

IL_0055:
		{
			Object_t * L_18 = V_5;
			Object_t * L_19 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t42_il2cpp_TypeInfo_var, L_18);
			V_4 = ((Transform_t32 *)CastclassClass(L_19, Transform_t32_il2cpp_TypeInfo_var));
			Transform_t32 * L_20 = V_4;
			GameObject_t34 * L_21 = Component_get_gameObject_m319(L_20, /*hidden argument*/NULL);
			String_t* L_22 = ___name;
			IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
			iTween_StopByName_m237(NULL /*static, unused*/, L_21, L_22, 1, /*hidden argument*/NULL);
		}

IL_0071:
		{
			Object_t * L_23 = V_5;
			bool L_24 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t42_il2cpp_TypeInfo_var, L_23);
			if (L_24)
			{
				goto IL_0055;
			}
		}

IL_007d:
		{
			IL2CPP_LEAVE(0x98, FINALLY_0082);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t55 *)e.ex;
		goto FINALLY_0082;
	}

FINALLY_0082:
	{ // begin finally (depth: 1)
		{
			Object_t * L_25 = V_5;
			V_6 = ((Object_t *)IsInst(L_25, IDisposable_t57_il2cpp_TypeInfo_var));
			Object_t * L_26 = V_6;
			if (L_26)
			{
				goto IL_0090;
			}
		}

IL_008f:
		{
			IL2CPP_END_FINALLY(130)
		}

IL_0090:
		{
			Object_t * L_27 = V_6;
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t57_il2cpp_TypeInfo_var, L_27);
			IL2CPP_END_FINALLY(130)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(130)
	{
		IL2CPP_JUMP_TBL(0x98, IL_0098)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t55 *)
	}

IL_0098:
	{
		return;
	}
}
// System.Collections.Hashtable iTween::Hash(System.Object[])
extern TypeInfo* Hashtable_t26_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral88;
extern "C" Hashtable_t26 * iTween_Hash_m238 (Object_t * __this /* static, unused */, ObjectU5BU5D_t41* ___args, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Hashtable_t26_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(17);
		_stringLiteral88 = il2cpp_codegen_string_literal_from_index(88);
		s_Il2CppMethodIntialized = true;
	}
	Hashtable_t26 * V_0 = {0};
	int32_t V_1 = 0;
	{
		ObjectU5BU5D_t41* L_0 = ___args;
		Hashtable_t26 * L_1 = (Hashtable_t26 *)il2cpp_codegen_object_new (Hashtable_t26_il2cpp_TypeInfo_var);
		Hashtable__ctor_m443(L_1, ((int32_t)((int32_t)(((int32_t)((int32_t)(((Array_t *)L_0)->max_length))))/(int32_t)2)), /*hidden argument*/NULL);
		V_0 = L_1;
		ObjectU5BU5D_t41* L_2 = ___args;
		if (!((int32_t)((int32_t)(((int32_t)((int32_t)(((Array_t *)L_2)->max_length))))%(int32_t)2)))
		{
			goto IL_0021;
		}
	}
	{
		Debug_LogError_m341(NULL /*static, unused*/, _stringLiteral88, /*hidden argument*/NULL);
		return (Hashtable_t26 *)NULL;
	}

IL_0021:
	{
		V_1 = 0;
		goto IL_003a;
	}

IL_0028:
	{
		Hashtable_t26 * L_3 = V_0;
		ObjectU5BU5D_t41* L_4 = ___args;
		int32_t L_5 = V_1;
		int32_t L_6 = L_5;
		ObjectU5BU5D_t41* L_7 = ___args;
		int32_t L_8 = V_1;
		int32_t L_9 = ((int32_t)((int32_t)L_8+(int32_t)1));
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(24 /* System.Void System.Collections.Hashtable::Add(System.Object,System.Object) */, L_3, (*(Object_t **)(Object_t **)SZArrayLdElema(L_4, L_6, sizeof(Object_t *))), (*(Object_t **)(Object_t **)SZArrayLdElema(L_7, L_9, sizeof(Object_t *))));
		int32_t L_10 = V_1;
		V_1 = ((int32_t)((int32_t)L_10+(int32_t)2));
	}

IL_003a:
	{
		int32_t L_11 = V_1;
		ObjectU5BU5D_t41* L_12 = ___args;
		if ((((int32_t)L_11) < ((int32_t)((int32_t)((int32_t)(((int32_t)((int32_t)(((Array_t *)L_12)->max_length))))-(int32_t)1)))))
		{
			goto IL_0028;
		}
	}
	{
		Hashtable_t26 * L_13 = V_0;
		return L_13;
	}
}
// System.Void iTween::Awake()
extern "C" void iTween_Awake_m239 (iTween_t23 * __this, const MethodInfo* method)
{
	{
		Transform_t32 * L_0 = Component_get_transform_m318(__this, /*hidden argument*/NULL);
		__this->___thisTransform_39 = L_0;
		iTween_RetrieveArgs_m253(__this, /*hidden argument*/NULL);
		float L_1 = Time_get_realtimeSinceStartup_m444(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___lastRealTime_37 = L_1;
		return;
	}
}
// System.Collections.IEnumerator iTween::Start()
extern TypeInfo* U3CStartU3Ec__Iterator2_t25_il2cpp_TypeInfo_var;
extern "C" Object_t * iTween_Start_m240 (iTween_t23 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CStartU3Ec__Iterator2_t25_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(52);
		s_Il2CppMethodIntialized = true;
	}
	U3CStartU3Ec__Iterator2_t25 * V_0 = {0};
	{
		U3CStartU3Ec__Iterator2_t25 * L_0 = (U3CStartU3Ec__Iterator2_t25 *)il2cpp_codegen_object_new (U3CStartU3Ec__Iterator2_t25_il2cpp_TypeInfo_var);
		U3CStartU3Ec__Iterator2__ctor_m36(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CStartU3Ec__Iterator2_t25 * L_1 = V_0;
		L_1->___U3CU3Ef__this_2 = __this;
		U3CStartU3Ec__Iterator2_t25 * L_2 = V_0;
		return L_2;
	}
}
// System.Void iTween::Update()
extern "C" void iTween_Update_m241 (iTween_t23 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___isRunning_11);
		if (!L_0)
		{
			goto IL_0068;
		}
	}
	{
		bool L_1 = (__this->___physics_22);
		if (L_1)
		{
			goto IL_0068;
		}
	}
	{
		bool L_2 = (__this->___reverse_20);
		if (L_2)
		{
			goto IL_0047;
		}
	}
	{
		float L_3 = (__this->___percentage_15);
		if ((!(((float)L_3) < ((float)(1.0f)))))
		{
			goto IL_003c;
		}
	}
	{
		iTween_TweenUpdate_m153(__this, /*hidden argument*/NULL);
		goto IL_0042;
	}

IL_003c:
	{
		iTween_TweenComplete_m154(__this, /*hidden argument*/NULL);
	}

IL_0042:
	{
		goto IL_0068;
	}

IL_0047:
	{
		float L_4 = (__this->___percentage_15);
		if ((!(((float)L_4) > ((float)(0.0f)))))
		{
			goto IL_0062;
		}
	}
	{
		iTween_TweenUpdate_m153(__this, /*hidden argument*/NULL);
		goto IL_0068;
	}

IL_0062:
	{
		iTween_TweenComplete_m154(__this, /*hidden argument*/NULL);
	}

IL_0068:
	{
		return;
	}
}
// System.Void iTween::FixedUpdate()
extern "C" void iTween_FixedUpdate_m242 (iTween_t23 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___isRunning_11);
		if (!L_0)
		{
			goto IL_0068;
		}
	}
	{
		bool L_1 = (__this->___physics_22);
		if (!L_1)
		{
			goto IL_0068;
		}
	}
	{
		bool L_2 = (__this->___reverse_20);
		if (L_2)
		{
			goto IL_0047;
		}
	}
	{
		float L_3 = (__this->___percentage_15);
		if ((!(((float)L_3) < ((float)(1.0f)))))
		{
			goto IL_003c;
		}
	}
	{
		iTween_TweenUpdate_m153(__this, /*hidden argument*/NULL);
		goto IL_0042;
	}

IL_003c:
	{
		iTween_TweenComplete_m154(__this, /*hidden argument*/NULL);
	}

IL_0042:
	{
		goto IL_0068;
	}

IL_0047:
	{
		float L_4 = (__this->___percentage_15);
		if ((!(((float)L_4) > ((float)(0.0f)))))
		{
			goto IL_0062;
		}
	}
	{
		iTween_TweenUpdate_m153(__this, /*hidden argument*/NULL);
		goto IL_0068;
	}

IL_0062:
	{
		iTween_TweenComplete_m154(__this, /*hidden argument*/NULL);
	}

IL_0068:
	{
		return;
	}
}
// System.Void iTween::LateUpdate()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* iTween_t23_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral52;
extern Il2CppCodeGenString* _stringLiteral62;
extern Il2CppCodeGenString* _stringLiteral67;
extern Il2CppCodeGenString* _stringLiteral68;
extern "C" void iTween_LateUpdate_m243 (iTween_t23 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(33);
		iTween_t23_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		_stringLiteral52 = il2cpp_codegen_string_literal_from_index(52);
		_stringLiteral62 = il2cpp_codegen_string_literal_from_index(62);
		_stringLiteral67 = il2cpp_codegen_string_literal_from_index(67);
		_stringLiteral68 = il2cpp_codegen_string_literal_from_index(68);
		s_Il2CppMethodIntialized = true;
	}
	{
		Hashtable_t26 * L_0 = (__this->___tweenArguments_23);
		bool L_1 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(26 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_0, _stringLiteral52);
		if (!L_1)
		{
			goto IL_0070;
		}
	}
	{
		bool L_2 = (__this->___isRunning_11);
		if (!L_2)
		{
			goto IL_0070;
		}
	}
	{
		String_t* L_3 = (__this->___type_5);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_4 = String_op_Equality_m414(NULL /*static, unused*/, L_3, _stringLiteral62, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_005f;
		}
	}
	{
		String_t* L_5 = (__this->___type_5);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_6 = String_op_Equality_m414(NULL /*static, unused*/, L_5, _stringLiteral67, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_005f;
		}
	}
	{
		String_t* L_7 = (__this->___type_5);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_8 = String_op_Equality_m414(NULL /*static, unused*/, L_7, _stringLiteral68, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0070;
		}
	}

IL_005f:
	{
		GameObject_t34 * L_9 = Component_get_gameObject_m319(__this, /*hidden argument*/NULL);
		Hashtable_t26 * L_10 = (__this->___tweenArguments_23);
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		iTween_LookUpdate_m172(NULL /*static, unused*/, L_9, L_10, /*hidden argument*/NULL);
	}

IL_0070:
	{
		return;
	}
}
// System.Void iTween::OnEnable()
extern "C" void iTween_OnEnable_m244 (iTween_t23 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___isRunning_11);
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		iTween_EnableKinematic_m259(__this, /*hidden argument*/NULL);
	}

IL_0011:
	{
		bool L_1 = (__this->___isPaused_12);
		if (!L_1)
		{
			goto IL_0040;
		}
	}
	{
		__this->___isPaused_12 = 0;
		float L_2 = (__this->___delay_9);
		if ((!(((float)L_2) > ((float)(0.0f)))))
		{
			goto IL_0040;
		}
	}
	{
		__this->___wasPaused_21 = 1;
		iTween_ResumeDelay_m261(__this, /*hidden argument*/NULL);
	}

IL_0040:
	{
		return;
	}
}
// System.Void iTween::OnDisable()
extern "C" void iTween_OnDisable_m245 (iTween_t23 * __this, const MethodInfo* method)
{
	{
		iTween_DisableKinematic_m260(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void iTween::DrawLineHelper(UnityEngine.Vector3[],UnityEngine.Color,System.String)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral84;
extern Il2CppCodeGenString* _stringLiteral85;
extern Il2CppCodeGenString* _stringLiteral89;
extern "C" void iTween_DrawLineHelper_m246 (Object_t * __this /* static, unused */, Vector3U5BU5D_t16* ___line, Color_t13  ___color, String_t* ___method, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(33);
		_stringLiteral84 = il2cpp_codegen_string_literal_from_index(84);
		_stringLiteral85 = il2cpp_codegen_string_literal_from_index(85);
		_stringLiteral89 = il2cpp_codegen_string_literal_from_index(89);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		Color_t13  L_0 = ___color;
		Gizmos_set_color_m445(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = 0;
		goto IL_005f;
	}

IL_000d:
	{
		String_t* L_1 = ___method;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_2 = String_op_Equality_m414(NULL /*static, unused*/, L_1, _stringLiteral84, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0041;
		}
	}
	{
		Vector3U5BU5D_t16* L_3 = ___line;
		int32_t L_4 = V_0;
		Vector3U5BU5D_t16* L_5 = ___line;
		int32_t L_6 = V_0;
		Gizmos_DrawLine_m446(NULL /*static, unused*/, (*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_3, L_4, sizeof(Vector3_t14 )))), (*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_5, ((int32_t)((int32_t)L_6+(int32_t)1)), sizeof(Vector3_t14 )))), /*hidden argument*/NULL);
		goto IL_005b;
	}

IL_0041:
	{
		String_t* L_7 = ___method;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_8 = String_op_Equality_m414(NULL /*static, unused*/, L_7, _stringLiteral85, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_005b;
		}
	}
	{
		Debug_LogError_m341(NULL /*static, unused*/, _stringLiteral89, /*hidden argument*/NULL);
	}

IL_005b:
	{
		int32_t L_9 = V_0;
		V_0 = ((int32_t)((int32_t)L_9+(int32_t)1));
	}

IL_005f:
	{
		int32_t L_10 = V_0;
		Vector3U5BU5D_t16* L_11 = ___line;
		if ((((int32_t)L_10) < ((int32_t)((int32_t)((int32_t)(((int32_t)((int32_t)(((Array_t *)L_11)->max_length))))-(int32_t)1)))))
		{
			goto IL_000d;
		}
	}
	{
		return;
	}
}
// System.Void iTween::DrawPathHelper(UnityEngine.Vector3[],UnityEngine.Color,System.String)
extern TypeInfo* iTween_t23_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral84;
extern Il2CppCodeGenString* _stringLiteral85;
extern Il2CppCodeGenString* _stringLiteral90;
extern "C" void iTween_DrawPathHelper_m247 (Object_t * __this /* static, unused */, Vector3U5BU5D_t16* ___path, Color_t13  ___color, String_t* ___method, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		iTween_t23_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(33);
		_stringLiteral84 = il2cpp_codegen_string_literal_from_index(84);
		_stringLiteral85 = il2cpp_codegen_string_literal_from_index(85);
		_stringLiteral90 = il2cpp_codegen_string_literal_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	Vector3U5BU5D_t16* V_0 = {0};
	Vector3_t14  V_1 = {0};
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	float V_4 = 0.0f;
	Vector3_t14  V_5 = {0};
	{
		Vector3U5BU5D_t16* L_0 = ___path;
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		Vector3U5BU5D_t16* L_1 = iTween_PathControlPointGenerator_m248(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		Vector3U5BU5D_t16* L_2 = V_0;
		Vector3_t14  L_3 = iTween_Interp_m249(NULL /*static, unused*/, L_2, (0.0f), /*hidden argument*/NULL);
		V_1 = L_3;
		Color_t13  L_4 = ___color;
		Gizmos_set_color_m445(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		Vector3U5BU5D_t16* L_5 = ___path;
		V_2 = ((int32_t)((int32_t)(((int32_t)((int32_t)(((Array_t *)L_5)->max_length))))*(int32_t)((int32_t)20)));
		V_3 = 1;
		goto IL_0076;
	}

IL_0027:
	{
		int32_t L_6 = V_3;
		int32_t L_7 = V_2;
		V_4 = ((float)((float)(((float)((float)L_6)))/(float)(((float)((float)L_7)))));
		Vector3U5BU5D_t16* L_8 = V_0;
		float L_9 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		Vector3_t14  L_10 = iTween_Interp_m249(NULL /*static, unused*/, L_8, L_9, /*hidden argument*/NULL);
		V_5 = L_10;
		String_t* L_11 = ___method;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_12 = String_op_Equality_m414(NULL /*static, unused*/, L_11, _stringLiteral84, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_0055;
		}
	}
	{
		Vector3_t14  L_13 = V_5;
		Vector3_t14  L_14 = V_1;
		Gizmos_DrawLine_m446(NULL /*static, unused*/, L_13, L_14, /*hidden argument*/NULL);
		goto IL_006f;
	}

IL_0055:
	{
		String_t* L_15 = ___method;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_16 = String_op_Equality_m414(NULL /*static, unused*/, L_15, _stringLiteral85, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_006f;
		}
	}
	{
		Debug_LogError_m341(NULL /*static, unused*/, _stringLiteral90, /*hidden argument*/NULL);
	}

IL_006f:
	{
		Vector3_t14  L_17 = V_5;
		V_1 = L_17;
		int32_t L_18 = V_3;
		V_3 = ((int32_t)((int32_t)L_18+(int32_t)1));
	}

IL_0076:
	{
		int32_t L_19 = V_3;
		int32_t L_20 = V_2;
		if ((((int32_t)L_19) <= ((int32_t)L_20)))
		{
			goto IL_0027;
		}
	}
	{
		return;
	}
}
// UnityEngine.Vector3[] iTween::PathControlPointGenerator(UnityEngine.Vector3[])
extern TypeInfo* Vector3U5BU5D_t16_il2cpp_TypeInfo_var;
extern "C" Vector3U5BU5D_t16* iTween_PathControlPointGenerator_m248 (Object_t * __this /* static, unused */, Vector3U5BU5D_t16* ___path, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Vector3U5BU5D_t16_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(12);
		s_Il2CppMethodIntialized = true;
	}
	Vector3U5BU5D_t16* V_0 = {0};
	Vector3U5BU5D_t16* V_1 = {0};
	int32_t V_2 = 0;
	Vector3U5BU5D_t16* V_3 = {0};
	{
		Vector3U5BU5D_t16* L_0 = ___path;
		V_0 = L_0;
		V_2 = 2;
		Vector3U5BU5D_t16* L_1 = V_0;
		int32_t L_2 = V_2;
		V_1 = ((Vector3U5BU5D_t16*)SZArrayNew(Vector3U5BU5D_t16_il2cpp_TypeInfo_var, ((int32_t)((int32_t)(((int32_t)((int32_t)(((Array_t *)L_1)->max_length))))+(int32_t)L_2))));
		Vector3U5BU5D_t16* L_3 = V_0;
		Vector3U5BU5D_t16* L_4 = V_1;
		Vector3U5BU5D_t16* L_5 = V_0;
		Array_Copy_m392(NULL /*static, unused*/, (Array_t *)(Array_t *)L_3, 0, (Array_t *)(Array_t *)L_4, 1, (((int32_t)((int32_t)(((Array_t *)L_5)->max_length)))), /*hidden argument*/NULL);
		Vector3U5BU5D_t16* L_6 = V_1;
		Vector3U5BU5D_t16* L_7 = V_1;
		Vector3U5BU5D_t16* L_8 = V_1;
		Vector3U5BU5D_t16* L_9 = V_1;
		Vector3_t14  L_10 = Vector3_op_Subtraction_m333(NULL /*static, unused*/, (*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_8, 1, sizeof(Vector3_t14 )))), (*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_9, 2, sizeof(Vector3_t14 )))), /*hidden argument*/NULL);
		Vector3_t14  L_11 = Vector3_op_Addition_m332(NULL /*static, unused*/, (*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_7, 1, sizeof(Vector3_t14 )))), L_10, /*hidden argument*/NULL);
		(*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_6, 0, sizeof(Vector3_t14 )))) = L_11;
		Vector3U5BU5D_t16* L_12 = V_1;
		Vector3U5BU5D_t16* L_13 = V_1;
		Vector3U5BU5D_t16* L_14 = V_1;
		Vector3U5BU5D_t16* L_15 = V_1;
		Vector3U5BU5D_t16* L_16 = V_1;
		Vector3U5BU5D_t16* L_17 = V_1;
		Vector3U5BU5D_t16* L_18 = V_1;
		Vector3U5BU5D_t16* L_19 = V_1;
		Vector3_t14  L_20 = Vector3_op_Subtraction_m333(NULL /*static, unused*/, (*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_16, ((int32_t)((int32_t)(((int32_t)((int32_t)(((Array_t *)L_17)->max_length))))-(int32_t)2)), sizeof(Vector3_t14 )))), (*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_18, ((int32_t)((int32_t)(((int32_t)((int32_t)(((Array_t *)L_19)->max_length))))-(int32_t)3)), sizeof(Vector3_t14 )))), /*hidden argument*/NULL);
		Vector3_t14  L_21 = Vector3_op_Addition_m332(NULL /*static, unused*/, (*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_14, ((int32_t)((int32_t)(((int32_t)((int32_t)(((Array_t *)L_15)->max_length))))-(int32_t)2)), sizeof(Vector3_t14 )))), L_20, /*hidden argument*/NULL);
		(*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_12, ((int32_t)((int32_t)(((int32_t)((int32_t)(((Array_t *)L_13)->max_length))))-(int32_t)1)), sizeof(Vector3_t14 )))) = L_21;
		Vector3U5BU5D_t16* L_22 = V_1;
		Vector3U5BU5D_t16* L_23 = V_1;
		Vector3U5BU5D_t16* L_24 = V_1;
		bool L_25 = Vector3_op_Equality_m393(NULL /*static, unused*/, (*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_22, 1, sizeof(Vector3_t14 )))), (*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_23, ((int32_t)((int32_t)(((int32_t)((int32_t)(((Array_t *)L_24)->max_length))))-(int32_t)2)), sizeof(Vector3_t14 )))), /*hidden argument*/NULL);
		if (!L_25)
		{
			goto IL_0123;
		}
	}
	{
		Vector3U5BU5D_t16* L_26 = V_1;
		V_3 = ((Vector3U5BU5D_t16*)SZArrayNew(Vector3U5BU5D_t16_il2cpp_TypeInfo_var, (((int32_t)((int32_t)(((Array_t *)L_26)->max_length))))));
		Vector3U5BU5D_t16* L_27 = V_1;
		Vector3U5BU5D_t16* L_28 = V_3;
		Vector3U5BU5D_t16* L_29 = V_1;
		Array_Copy_m327(NULL /*static, unused*/, (Array_t *)(Array_t *)L_27, (Array_t *)(Array_t *)L_28, (((int32_t)((int32_t)(((Array_t *)L_29)->max_length)))), /*hidden argument*/NULL);
		Vector3U5BU5D_t16* L_30 = V_3;
		Vector3U5BU5D_t16* L_31 = V_3;
		Vector3U5BU5D_t16* L_32 = V_3;
		(*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_30, 0, sizeof(Vector3_t14 )))) = (*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_31, ((int32_t)((int32_t)(((int32_t)((int32_t)(((Array_t *)L_32)->max_length))))-(int32_t)3)), sizeof(Vector3_t14 ))));
		Vector3U5BU5D_t16* L_33 = V_3;
		Vector3U5BU5D_t16* L_34 = V_3;
		Vector3U5BU5D_t16* L_35 = V_3;
		(*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_33, ((int32_t)((int32_t)(((int32_t)((int32_t)(((Array_t *)L_34)->max_length))))-(int32_t)1)), sizeof(Vector3_t14 )))) = (*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_35, 2, sizeof(Vector3_t14 ))));
		Vector3U5BU5D_t16* L_36 = V_3;
		V_1 = ((Vector3U5BU5D_t16*)SZArrayNew(Vector3U5BU5D_t16_il2cpp_TypeInfo_var, (((int32_t)((int32_t)(((Array_t *)L_36)->max_length))))));
		Vector3U5BU5D_t16* L_37 = V_3;
		Vector3U5BU5D_t16* L_38 = V_1;
		Vector3U5BU5D_t16* L_39 = V_3;
		Array_Copy_m327(NULL /*static, unused*/, (Array_t *)(Array_t *)L_37, (Array_t *)(Array_t *)L_38, (((int32_t)((int32_t)(((Array_t *)L_39)->max_length)))), /*hidden argument*/NULL);
	}

IL_0123:
	{
		Vector3U5BU5D_t16* L_40 = V_1;
		return L_40;
	}
}
// UnityEngine.Vector3 iTween::Interp(UnityEngine.Vector3[],System.Single)
extern TypeInfo* Mathf_t46_il2cpp_TypeInfo_var;
extern "C" Vector3_t14  iTween_Interp_m249 (Object_t * __this /* static, unused */, Vector3U5BU5D_t16* ___pts, float ___t, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t46_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	Vector3_t14  V_3 = {0};
	Vector3_t14  V_4 = {0};
	Vector3_t14  V_5 = {0};
	Vector3_t14  V_6 = {0};
	{
		Vector3U5BU5D_t16* L_0 = ___pts;
		V_0 = ((int32_t)((int32_t)(((int32_t)((int32_t)(((Array_t *)L_0)->max_length))))-(int32_t)3));
		float L_1 = ___t;
		int32_t L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t46_il2cpp_TypeInfo_var);
		int32_t L_3 = Mathf_FloorToInt_m328(NULL /*static, unused*/, ((float)((float)L_1*(float)(((float)((float)L_2))))), /*hidden argument*/NULL);
		int32_t L_4 = V_0;
		int32_t L_5 = Mathf_Min_m329(NULL /*static, unused*/, L_3, ((int32_t)((int32_t)L_4-(int32_t)1)), /*hidden argument*/NULL);
		V_1 = L_5;
		float L_6 = ___t;
		int32_t L_7 = V_0;
		int32_t L_8 = V_1;
		V_2 = ((float)((float)((float)((float)L_6*(float)(((float)((float)L_7)))))-(float)(((float)((float)L_8)))));
		Vector3U5BU5D_t16* L_9 = ___pts;
		int32_t L_10 = V_1;
		V_3 = (*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_9, L_10, sizeof(Vector3_t14 ))));
		Vector3U5BU5D_t16* L_11 = ___pts;
		int32_t L_12 = V_1;
		V_4 = (*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_11, ((int32_t)((int32_t)L_12+(int32_t)1)), sizeof(Vector3_t14 ))));
		Vector3U5BU5D_t16* L_13 = ___pts;
		int32_t L_14 = V_1;
		V_5 = (*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_13, ((int32_t)((int32_t)L_14+(int32_t)2)), sizeof(Vector3_t14 ))));
		Vector3U5BU5D_t16* L_15 = ___pts;
		int32_t L_16 = V_1;
		V_6 = (*(Vector3_t14 *)((Vector3_t14 *)(Vector3_t14 *)SZArrayLdElema(L_15, ((int32_t)((int32_t)L_16+(int32_t)3)), sizeof(Vector3_t14 ))));
		Vector3_t14  L_17 = V_3;
		Vector3_t14  L_18 = Vector3_op_UnaryNegation_m330(NULL /*static, unused*/, L_17, /*hidden argument*/NULL);
		Vector3_t14  L_19 = V_4;
		Vector3_t14  L_20 = Vector3_op_Multiply_m331(NULL /*static, unused*/, (3.0f), L_19, /*hidden argument*/NULL);
		Vector3_t14  L_21 = Vector3_op_Addition_m332(NULL /*static, unused*/, L_18, L_20, /*hidden argument*/NULL);
		Vector3_t14  L_22 = V_5;
		Vector3_t14  L_23 = Vector3_op_Multiply_m331(NULL /*static, unused*/, (3.0f), L_22, /*hidden argument*/NULL);
		Vector3_t14  L_24 = Vector3_op_Subtraction_m333(NULL /*static, unused*/, L_21, L_23, /*hidden argument*/NULL);
		Vector3_t14  L_25 = V_6;
		Vector3_t14  L_26 = Vector3_op_Addition_m332(NULL /*static, unused*/, L_24, L_25, /*hidden argument*/NULL);
		float L_27 = V_2;
		float L_28 = V_2;
		float L_29 = V_2;
		Vector3_t14  L_30 = Vector3_op_Multiply_m334(NULL /*static, unused*/, L_26, ((float)((float)((float)((float)L_27*(float)L_28))*(float)L_29)), /*hidden argument*/NULL);
		Vector3_t14  L_31 = V_3;
		Vector3_t14  L_32 = Vector3_op_Multiply_m331(NULL /*static, unused*/, (2.0f), L_31, /*hidden argument*/NULL);
		Vector3_t14  L_33 = V_4;
		Vector3_t14  L_34 = Vector3_op_Multiply_m331(NULL /*static, unused*/, (5.0f), L_33, /*hidden argument*/NULL);
		Vector3_t14  L_35 = Vector3_op_Subtraction_m333(NULL /*static, unused*/, L_32, L_34, /*hidden argument*/NULL);
		Vector3_t14  L_36 = V_5;
		Vector3_t14  L_37 = Vector3_op_Multiply_m331(NULL /*static, unused*/, (4.0f), L_36, /*hidden argument*/NULL);
		Vector3_t14  L_38 = Vector3_op_Addition_m332(NULL /*static, unused*/, L_35, L_37, /*hidden argument*/NULL);
		Vector3_t14  L_39 = V_6;
		Vector3_t14  L_40 = Vector3_op_Subtraction_m333(NULL /*static, unused*/, L_38, L_39, /*hidden argument*/NULL);
		float L_41 = V_2;
		float L_42 = V_2;
		Vector3_t14  L_43 = Vector3_op_Multiply_m334(NULL /*static, unused*/, L_40, ((float)((float)L_41*(float)L_42)), /*hidden argument*/NULL);
		Vector3_t14  L_44 = Vector3_op_Addition_m332(NULL /*static, unused*/, L_30, L_43, /*hidden argument*/NULL);
		Vector3_t14  L_45 = V_3;
		Vector3_t14  L_46 = Vector3_op_UnaryNegation_m330(NULL /*static, unused*/, L_45, /*hidden argument*/NULL);
		Vector3_t14  L_47 = V_5;
		Vector3_t14  L_48 = Vector3_op_Addition_m332(NULL /*static, unused*/, L_46, L_47, /*hidden argument*/NULL);
		float L_49 = V_2;
		Vector3_t14  L_50 = Vector3_op_Multiply_m334(NULL /*static, unused*/, L_48, L_49, /*hidden argument*/NULL);
		Vector3_t14  L_51 = Vector3_op_Addition_m332(NULL /*static, unused*/, L_44, L_50, /*hidden argument*/NULL);
		Vector3_t14  L_52 = V_4;
		Vector3_t14  L_53 = Vector3_op_Multiply_m331(NULL /*static, unused*/, (2.0f), L_52, /*hidden argument*/NULL);
		Vector3_t14  L_54 = Vector3_op_Addition_m332(NULL /*static, unused*/, L_51, L_53, /*hidden argument*/NULL);
		Vector3_t14  L_55 = Vector3_op_Multiply_m331(NULL /*static, unused*/, (0.5f), L_54, /*hidden argument*/NULL);
		return L_55;
	}
}
// System.Void iTween::Launch(UnityEngine.GameObject,System.Collections.Hashtable)
extern TypeInfo* iTween_t23_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_AddComponent_TisiTween_t23_m447_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral91;
extern Il2CppCodeGenString* _stringLiteral87;
extern "C" void iTween_Launch_m250 (Object_t * __this /* static, unused */, GameObject_t34 * ___target, Hashtable_t26 * ___args, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		iTween_t23_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		GameObject_AddComponent_TisiTween_t23_m447_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483690);
		_stringLiteral91 = il2cpp_codegen_string_literal_from_index(91);
		_stringLiteral87 = il2cpp_codegen_string_literal_from_index(87);
		s_Il2CppMethodIntialized = true;
	}
	{
		Hashtable_t26 * L_0 = ___args;
		bool L_1 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(26 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_0, _stringLiteral91);
		if (L_1)
		{
			goto IL_0020;
		}
	}
	{
		Hashtable_t26 * L_2 = ___args;
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		String_t* L_3 = iTween_GenerateID_m252(NULL /*static, unused*/, /*hidden argument*/NULL);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(22 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_2, _stringLiteral91, L_3);
	}

IL_0020:
	{
		Hashtable_t26 * L_4 = ___args;
		bool L_5 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(26 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_4, _stringLiteral87);
		if (L_5)
		{
			goto IL_003c;
		}
	}
	{
		Hashtable_t26 * L_6 = ___args;
		GameObject_t34 * L_7 = ___target;
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(22 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_6, _stringLiteral87, L_7);
	}

IL_003c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		List_1_t33 * L_8 = ((iTween_t23_StaticFields*)iTween_t23_il2cpp_TypeInfo_var->static_fields)->___tweens_2;
		Hashtable_t26 * L_9 = ___args;
		VirtActionInvoker2< int32_t, Hashtable_t26 * >::Invoke(26 /* System.Void System.Collections.Generic.List`1<System.Collections.Hashtable>::Insert(System.Int32,!0) */, L_8, 0, L_9);
		GameObject_t34 * L_10 = ___target;
		GameObject_AddComponent_TisiTween_t23_m447(L_10, /*hidden argument*/GameObject_AddComponent_TisiTween_t23_m447_MethodInfo_var);
		return;
	}
}
// System.Collections.Hashtable iTween::CleanArgs(System.Collections.Hashtable)
extern const Il2CppType* Int32_t48_0_0_0_var;
extern const Il2CppType* Double_t49_0_0_0_var;
extern TypeInfo* Hashtable_t26_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t42_il2cpp_TypeInfo_var;
extern TypeInfo* DictionaryEntry_t72_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t57_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t48_il2cpp_TypeInfo_var;
extern TypeInfo* Single_t51_il2cpp_TypeInfo_var;
extern TypeInfo* Double_t49_il2cpp_TypeInfo_var;
extern "C" Hashtable_t26 * iTween_CleanArgs_m251 (Object_t * __this /* static, unused */, Hashtable_t26 * ___args, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32_t48_0_0_0_var = il2cpp_codegen_type_from_index(6);
		Double_t49_0_0_0_var = il2cpp_codegen_type_from_index(7);
		Hashtable_t26_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(17);
		IEnumerator_t42_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(29);
		DictionaryEntry_t72_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(53);
		IDisposable_t57_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(31);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		Int32_t48_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		Single_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		Double_t49_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7);
		s_Il2CppMethodIntialized = true;
	}
	Hashtable_t26 * V_0 = {0};
	Hashtable_t26 * V_1 = {0};
	DictionaryEntry_t72  V_2 = {0};
	Object_t * V_3 = {0};
	DictionaryEntry_t72  V_4 = {0};
	Object_t * V_5 = {0};
	int32_t V_6 = 0;
	float V_7 = 0.0f;
	double V_8 = 0.0;
	float V_9 = 0.0f;
	DictionaryEntry_t72  V_10 = {0};
	Object_t * V_11 = {0};
	Object_t * V_12 = {0};
	Object_t * V_13 = {0};
	Object_t * V_14 = {0};
	Exception_t55 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t55 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Hashtable_t26 * L_0 = ___args;
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(17 /* System.Int32 System.Collections.Hashtable::get_Count() */, L_0);
		Hashtable_t26 * L_2 = (Hashtable_t26 *)il2cpp_codegen_object_new (Hashtable_t26_il2cpp_TypeInfo_var);
		Hashtable__ctor_m443(L_2, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		Hashtable_t26 * L_3 = ___args;
		int32_t L_4 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(17 /* System.Int32 System.Collections.Hashtable::get_Count() */, L_3);
		Hashtable_t26 * L_5 = (Hashtable_t26 *)il2cpp_codegen_object_new (Hashtable_t26_il2cpp_TypeInfo_var);
		Hashtable__ctor_m443(L_5, L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		Hashtable_t26 * L_6 = ___args;
		Object_t * L_7 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(27 /* System.Collections.IDictionaryEnumerator System.Collections.Hashtable::GetEnumerator() */, L_6);
		V_3 = L_7;
	}

IL_001f:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0044;
		}

IL_0024:
		{
			Object_t * L_8 = V_3;
			Object_t * L_9 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t42_il2cpp_TypeInfo_var, L_8);
			V_2 = ((*(DictionaryEntry_t72 *)((DictionaryEntry_t72 *)UnBox (L_9, DictionaryEntry_t72_il2cpp_TypeInfo_var))));
			Hashtable_t26 * L_10 = V_0;
			Object_t * L_11 = DictionaryEntry_get_Key_m448((&V_2), /*hidden argument*/NULL);
			Object_t * L_12 = DictionaryEntry_get_Value_m449((&V_2), /*hidden argument*/NULL);
			VirtActionInvoker2< Object_t *, Object_t * >::Invoke(24 /* System.Void System.Collections.Hashtable::Add(System.Object,System.Object) */, L_10, L_11, L_12);
		}

IL_0044:
		{
			Object_t * L_13 = V_3;
			bool L_14 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t42_il2cpp_TypeInfo_var, L_13);
			if (L_14)
			{
				goto IL_0024;
			}
		}

IL_004f:
		{
			IL2CPP_LEAVE(0x69, FINALLY_0054);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t55 *)e.ex;
		goto FINALLY_0054;
	}

FINALLY_0054:
	{ // begin finally (depth: 1)
		{
			Object_t * L_15 = V_3;
			V_12 = ((Object_t *)IsInst(L_15, IDisposable_t57_il2cpp_TypeInfo_var));
			Object_t * L_16 = V_12;
			if (L_16)
			{
				goto IL_0061;
			}
		}

IL_0060:
		{
			IL2CPP_END_FINALLY(84)
		}

IL_0061:
		{
			Object_t * L_17 = V_12;
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t57_il2cpp_TypeInfo_var, L_17);
			IL2CPP_END_FINALLY(84)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(84)
	{
		IL2CPP_JUMP_TBL(0x69, IL_0069)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t55 *)
	}

IL_0069:
	{
		Hashtable_t26 * L_18 = V_0;
		Object_t * L_19 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(27 /* System.Collections.IDictionaryEnumerator System.Collections.Hashtable::GetEnumerator() */, L_18);
		V_5 = L_19;
	}

IL_0071:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0108;
		}

IL_0076:
		{
			Object_t * L_20 = V_5;
			Object_t * L_21 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t42_il2cpp_TypeInfo_var, L_20);
			V_4 = ((*(DictionaryEntry_t72 *)((DictionaryEntry_t72 *)UnBox (L_21, DictionaryEntry_t72_il2cpp_TypeInfo_var))));
			Object_t * L_22 = DictionaryEntry_get_Value_m449((&V_4), /*hidden argument*/NULL);
			Type_t * L_23 = Object_GetType_m342(L_22, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_24 = Type_GetTypeFromHandle_m343(NULL /*static, unused*/, LoadTypeToken(Int32_t48_0_0_0_var), /*hidden argument*/NULL);
			if ((!(((Object_t*)(Type_t *)L_23) == ((Object_t*)(Type_t *)L_24))))
			{
				goto IL_00c6;
			}
		}

IL_009f:
		{
			Object_t * L_25 = DictionaryEntry_get_Value_m449((&V_4), /*hidden argument*/NULL);
			V_6 = ((*(int32_t*)((int32_t*)UnBox (L_25, Int32_t48_il2cpp_TypeInfo_var))));
			int32_t L_26 = V_6;
			V_7 = (((float)((float)L_26)));
			Hashtable_t26 * L_27 = ___args;
			Object_t * L_28 = DictionaryEntry_get_Key_m448((&V_4), /*hidden argument*/NULL);
			float L_29 = V_7;
			float L_30 = L_29;
			Object_t * L_31 = Box(Single_t51_il2cpp_TypeInfo_var, &L_30);
			VirtActionInvoker2< Object_t *, Object_t * >::Invoke(22 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_27, L_28, L_31);
		}

IL_00c6:
		{
			Object_t * L_32 = DictionaryEntry_get_Value_m449((&V_4), /*hidden argument*/NULL);
			Type_t * L_33 = Object_GetType_m342(L_32, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_34 = Type_GetTypeFromHandle_m343(NULL /*static, unused*/, LoadTypeToken(Double_t49_0_0_0_var), /*hidden argument*/NULL);
			if ((!(((Object_t*)(Type_t *)L_33) == ((Object_t*)(Type_t *)L_34))))
			{
				goto IL_0108;
			}
		}

IL_00e1:
		{
			Object_t * L_35 = DictionaryEntry_get_Value_m449((&V_4), /*hidden argument*/NULL);
			V_8 = ((*(double*)((double*)UnBox (L_35, Double_t49_il2cpp_TypeInfo_var))));
			double L_36 = V_8;
			V_9 = (((float)((float)L_36)));
			Hashtable_t26 * L_37 = ___args;
			Object_t * L_38 = DictionaryEntry_get_Key_m448((&V_4), /*hidden argument*/NULL);
			float L_39 = V_9;
			float L_40 = L_39;
			Object_t * L_41 = Box(Single_t51_il2cpp_TypeInfo_var, &L_40);
			VirtActionInvoker2< Object_t *, Object_t * >::Invoke(22 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_37, L_38, L_41);
		}

IL_0108:
		{
			Object_t * L_42 = V_5;
			bool L_43 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t42_il2cpp_TypeInfo_var, L_42);
			if (L_43)
			{
				goto IL_0076;
			}
		}

IL_0114:
		{
			IL2CPP_LEAVE(0x12F, FINALLY_0119);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t55 *)e.ex;
		goto FINALLY_0119;
	}

FINALLY_0119:
	{ // begin finally (depth: 1)
		{
			Object_t * L_44 = V_5;
			V_13 = ((Object_t *)IsInst(L_44, IDisposable_t57_il2cpp_TypeInfo_var));
			Object_t * L_45 = V_13;
			if (L_45)
			{
				goto IL_0127;
			}
		}

IL_0126:
		{
			IL2CPP_END_FINALLY(281)
		}

IL_0127:
		{
			Object_t * L_46 = V_13;
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t57_il2cpp_TypeInfo_var, L_46);
			IL2CPP_END_FINALLY(281)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(281)
	{
		IL2CPP_JUMP_TBL(0x12F, IL_012f)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t55 *)
	}

IL_012f:
	{
		Hashtable_t26 * L_47 = ___args;
		Object_t * L_48 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(27 /* System.Collections.IDictionaryEnumerator System.Collections.Hashtable::GetEnumerator() */, L_47);
		V_11 = L_48;
	}

IL_0137:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0168;
		}

IL_013c:
		{
			Object_t * L_49 = V_11;
			Object_t * L_50 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t42_il2cpp_TypeInfo_var, L_49);
			V_10 = ((*(DictionaryEntry_t72 *)((DictionaryEntry_t72 *)UnBox (L_50, DictionaryEntry_t72_il2cpp_TypeInfo_var))));
			Hashtable_t26 * L_51 = V_1;
			Object_t * L_52 = DictionaryEntry_get_Key_m448((&V_10), /*hidden argument*/NULL);
			String_t* L_53 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_52);
			String_t* L_54 = String_ToLower_m440(L_53, /*hidden argument*/NULL);
			Object_t * L_55 = DictionaryEntry_get_Value_m449((&V_10), /*hidden argument*/NULL);
			VirtActionInvoker2< Object_t *, Object_t * >::Invoke(24 /* System.Void System.Collections.Hashtable::Add(System.Object,System.Object) */, L_51, L_54, L_55);
		}

IL_0168:
		{
			Object_t * L_56 = V_11;
			bool L_57 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t42_il2cpp_TypeInfo_var, L_56);
			if (L_57)
			{
				goto IL_013c;
			}
		}

IL_0174:
		{
			IL2CPP_LEAVE(0x18F, FINALLY_0179);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t55 *)e.ex;
		goto FINALLY_0179;
	}

FINALLY_0179:
	{ // begin finally (depth: 1)
		{
			Object_t * L_58 = V_11;
			V_14 = ((Object_t *)IsInst(L_58, IDisposable_t57_il2cpp_TypeInfo_var));
			Object_t * L_59 = V_14;
			if (L_59)
			{
				goto IL_0187;
			}
		}

IL_0186:
		{
			IL2CPP_END_FINALLY(377)
		}

IL_0187:
		{
			Object_t * L_60 = V_14;
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t57_il2cpp_TypeInfo_var, L_60);
			IL2CPP_END_FINALLY(377)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(377)
	{
		IL2CPP_JUMP_TBL(0x18F, IL_018f)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t55 *)
	}

IL_018f:
	{
		Hashtable_t26 * L_61 = V_1;
		___args = L_61;
		Hashtable_t26 * L_62 = ___args;
		return L_62;
	}
}
// System.String iTween::GenerateID()
extern TypeInfo* Guid_t73_il2cpp_TypeInfo_var;
extern "C" String_t* iTween_GenerateID_m252 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Guid_t73_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(54);
		s_Il2CppMethodIntialized = true;
	}
	Guid_t73  V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(Guid_t73_il2cpp_TypeInfo_var);
		Guid_t73  L_0 = Guid_NewGuid_m450(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		String_t* L_1 = Guid_ToString_m451((&V_0), /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void iTween::RetrieveArgs()
extern const Il2CppType* NamedValueColor_t11_0_0_0_var;
extern const Il2CppType* LoopType_t10_0_0_0_var;
extern const Il2CppType* EaseType_t9_0_0_0_var;
extern const Il2CppType* Space_t76_0_0_0_var;
extern TypeInfo* iTween_t23_il2cpp_TypeInfo_var;
extern TypeInfo* GameObject_t34_il2cpp_TypeInfo_var;
extern TypeInfo* Enumerator_t74_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t57_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Single_t51_il2cpp_TypeInfo_var;
extern TypeInfo* Defaults_t12_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t48_il2cpp_TypeInfo_var;
extern TypeInfo* Enum_t75_il2cpp_TypeInfo_var;
extern TypeInfo* Object_t_il2cpp_TypeInfo_var;
extern TypeInfo* Boolean_t56_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1_GetEnumerator_m452_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m453_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m455_MethodInfo_var;
extern const MethodInfo* Component_GetComponent_TisRigidbody_t65_m406_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral87;
extern Il2CppCodeGenString* _stringLiteral91;
extern Il2CppCodeGenString* _stringLiteral28;
extern Il2CppCodeGenString* _stringLiteral92;
extern Il2CppCodeGenString* _stringLiteral30;
extern Il2CppCodeGenString* _stringLiteral22;
extern Il2CppCodeGenString* _stringLiteral15;
extern Il2CppCodeGenString* _stringLiteral93;
extern Il2CppCodeGenString* _stringLiteral94;
extern Il2CppCodeGenString* _stringLiteral95;
extern Il2CppCodeGenString* _stringLiteral96;
extern Il2CppCodeGenString* _stringLiteral37;
extern Il2CppCodeGenString* _stringLiteral97;
extern Il2CppCodeGenString* _stringLiteral98;
extern Il2CppCodeGenString* _stringLiteral99;
extern Il2CppCodeGenString* _stringLiteral63;
extern Il2CppCodeGenString* _stringLiteral100;
extern "C" void iTween_RetrieveArgs_m253 (iTween_t23 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NamedValueColor_t11_0_0_0_var = il2cpp_codegen_type_from_index(42);
		LoopType_t10_0_0_0_var = il2cpp_codegen_type_from_index(55);
		EaseType_t9_0_0_0_var = il2cpp_codegen_type_from_index(23);
		Space_t76_0_0_0_var = il2cpp_codegen_type_from_index(56);
		iTween_t23_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		GameObject_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(50);
		Enumerator_t74_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(57);
		IDisposable_t57_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(31);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(33);
		Single_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		Defaults_t12_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		Int32_t48_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		Enum_t75_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		Object_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(0);
		Boolean_t56_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(28);
		List_1_GetEnumerator_m452_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483691);
		Enumerator_get_Current_m453_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483692);
		Enumerator_MoveNext_m455_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483693);
		Component_GetComponent_TisRigidbody_t65_m406_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483686);
		_stringLiteral87 = il2cpp_codegen_string_literal_from_index(87);
		_stringLiteral91 = il2cpp_codegen_string_literal_from_index(91);
		_stringLiteral28 = il2cpp_codegen_string_literal_from_index(28);
		_stringLiteral92 = il2cpp_codegen_string_literal_from_index(92);
		_stringLiteral30 = il2cpp_codegen_string_literal_from_index(30);
		_stringLiteral22 = il2cpp_codegen_string_literal_from_index(22);
		_stringLiteral15 = il2cpp_codegen_string_literal_from_index(15);
		_stringLiteral93 = il2cpp_codegen_string_literal_from_index(93);
		_stringLiteral94 = il2cpp_codegen_string_literal_from_index(94);
		_stringLiteral95 = il2cpp_codegen_string_literal_from_index(95);
		_stringLiteral96 = il2cpp_codegen_string_literal_from_index(96);
		_stringLiteral37 = il2cpp_codegen_string_literal_from_index(37);
		_stringLiteral97 = il2cpp_codegen_string_literal_from_index(97);
		_stringLiteral98 = il2cpp_codegen_string_literal_from_index(98);
		_stringLiteral99 = il2cpp_codegen_string_literal_from_index(99);
		_stringLiteral63 = il2cpp_codegen_string_literal_from_index(63);
		_stringLiteral100 = il2cpp_codegen_string_literal_from_index(100);
		s_Il2CppMethodIntialized = true;
	}
	Hashtable_t26 * V_0 = {0};
	Enumerator_t74  V_1 = {0};
	Exception_t55 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t55 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		List_1_t33 * L_0 = ((iTween_t23_StaticFields*)iTween_t23_il2cpp_TypeInfo_var->static_fields)->___tweens_2;
		Enumerator_t74  L_1 = List_1_GetEnumerator_m452(L_0, /*hidden argument*/List_1_GetEnumerator_m452_MethodInfo_var);
		V_1 = L_1;
	}

IL_000b:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0044;
		}

IL_0010:
		{
			Hashtable_t26 * L_2 = Enumerator_get_Current_m453((&V_1), /*hidden argument*/Enumerator_get_Current_m453_MethodInfo_var);
			V_0 = L_2;
			Hashtable_t26 * L_3 = V_0;
			Object_t * L_4 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_3, _stringLiteral87);
			GameObject_t34 * L_5 = Component_get_gameObject_m319(__this, /*hidden argument*/NULL);
			bool L_6 = Object_op_Equality_m454(NULL /*static, unused*/, ((GameObject_t34 *)CastclassSealed(L_4, GameObject_t34_il2cpp_TypeInfo_var)), L_5, /*hidden argument*/NULL);
			if (!L_6)
			{
				goto IL_0044;
			}
		}

IL_0038:
		{
			Hashtable_t26 * L_7 = V_0;
			__this->___tweenArguments_23 = L_7;
			goto IL_0050;
		}

IL_0044:
		{
			bool L_8 = Enumerator_MoveNext_m455((&V_1), /*hidden argument*/Enumerator_MoveNext_m455_MethodInfo_var);
			if (L_8)
			{
				goto IL_0010;
			}
		}

IL_0050:
		{
			IL2CPP_LEAVE(0x61, FINALLY_0055);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t55 *)e.ex;
		goto FINALLY_0055;
	}

FINALLY_0055:
	{ // begin finally (depth: 1)
		Enumerator_t74  L_9 = V_1;
		Enumerator_t74  L_10 = L_9;
		Object_t * L_11 = Box(Enumerator_t74_il2cpp_TypeInfo_var, &L_10);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t57_il2cpp_TypeInfo_var, L_11);
		IL2CPP_END_FINALLY(85)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(85)
	{
		IL2CPP_JUMP_TBL(0x61, IL_0061)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t55 *)
	}

IL_0061:
	{
		Hashtable_t26 * L_12 = (__this->___tweenArguments_23);
		Object_t * L_13 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_12, _stringLiteral91);
		__this->___id_4 = ((String_t*)CastclassSealed(L_13, String_t_il2cpp_TypeInfo_var));
		Hashtable_t26 * L_14 = (__this->___tweenArguments_23);
		Object_t * L_15 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_14, _stringLiteral28);
		__this->___type_5 = ((String_t*)CastclassSealed(L_15, String_t_il2cpp_TypeInfo_var));
		Hashtable_t26 * L_16 = (__this->___tweenArguments_23);
		Object_t * L_17 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_16, _stringLiteral92);
		__this->____name_13 = ((String_t*)CastclassSealed(L_17, String_t_il2cpp_TypeInfo_var));
		Hashtable_t26 * L_18 = (__this->___tweenArguments_23);
		Object_t * L_19 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_18, _stringLiteral30);
		__this->___method_6 = ((String_t*)CastclassSealed(L_19, String_t_il2cpp_TypeInfo_var));
		Hashtable_t26 * L_20 = (__this->___tweenArguments_23);
		bool L_21 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(26 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_20, _stringLiteral22);
		if (!L_21)
		{
			goto IL_0102;
		}
	}
	{
		Hashtable_t26 * L_22 = (__this->___tweenArguments_23);
		Object_t * L_23 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_22, _stringLiteral22);
		__this->___time_8 = ((*(float*)((float*)UnBox (L_23, Single_t51_il2cpp_TypeInfo_var))));
		goto IL_010d;
	}

IL_0102:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Defaults_t12_il2cpp_TypeInfo_var);
		float L_24 = ((Defaults_t12_StaticFields*)Defaults_t12_il2cpp_TypeInfo_var->static_fields)->___time_0;
		__this->___time_8 = L_24;
	}

IL_010d:
	{
		Rigidbody_t65 * L_25 = Component_GetComponent_TisRigidbody_t65_m406(__this, /*hidden argument*/Component_GetComponent_TisRigidbody_t65_m406_MethodInfo_var);
		bool L_26 = Object_op_Inequality_m423(NULL /*static, unused*/, L_25, (Object_t67 *)NULL, /*hidden argument*/NULL);
		if (!L_26)
		{
			goto IL_0125;
		}
	}
	{
		__this->___physics_22 = 1;
	}

IL_0125:
	{
		Hashtable_t26 * L_27 = (__this->___tweenArguments_23);
		bool L_28 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(26 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_27, _stringLiteral15);
		if (!L_28)
		{
			goto IL_015a;
		}
	}
	{
		Hashtable_t26 * L_29 = (__this->___tweenArguments_23);
		Object_t * L_30 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_29, _stringLiteral15);
		__this->___delay_9 = ((*(float*)((float*)UnBox (L_30, Single_t51_il2cpp_TypeInfo_var))));
		goto IL_0165;
	}

IL_015a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Defaults_t12_il2cpp_TypeInfo_var);
		float L_31 = ((Defaults_t12_StaticFields*)Defaults_t12_il2cpp_TypeInfo_var->static_fields)->___delay_1;
		__this->___delay_9 = L_31;
	}

IL_0165:
	{
		Hashtable_t26 * L_32 = (__this->___tweenArguments_23);
		bool L_33 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(26 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_32, _stringLiteral93);
		if (!L_33)
		{
			goto IL_020f;
		}
	}
	{
		Hashtable_t26 * L_34 = (__this->___tweenArguments_23);
		Object_t * L_35 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_34, _stringLiteral93);
		Type_t * L_36 = Object_GetType_m342(L_35, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_37 = Type_GetTypeFromHandle_m343(NULL /*static, unused*/, LoadTypeToken(NamedValueColor_t11_0_0_0_var), /*hidden argument*/NULL);
		if ((!(((Object_t*)(Type_t *)L_36) == ((Object_t*)(Type_t *)L_37))))
		{
			goto IL_01be;
		}
	}
	{
		Hashtable_t26 * L_38 = (__this->___tweenArguments_23);
		Object_t * L_39 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_38, _stringLiteral93);
		__this->___namedcolorvalue_36 = ((*(int32_t*)((int32_t*)UnBox (L_39, Int32_t48_il2cpp_TypeInfo_var))));
		goto IL_020a;
	}

IL_01be:
	try
	{ // begin try (depth: 1)
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_40 = Type_GetTypeFromHandle_m343(NULL /*static, unused*/, LoadTypeToken(NamedValueColor_t11_0_0_0_var), /*hidden argument*/NULL);
		Hashtable_t26 * L_41 = (__this->___tweenArguments_23);
		Object_t * L_42 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_41, _stringLiteral93);
		IL2CPP_RUNTIME_CLASS_INIT(Enum_t75_il2cpp_TypeInfo_var);
		Object_t * L_43 = Enum_Parse_m456(NULL /*static, unused*/, L_40, ((String_t*)CastclassSealed(L_42, String_t_il2cpp_TypeInfo_var)), 1, /*hidden argument*/NULL);
		__this->___namedcolorvalue_36 = ((*(int32_t*)((int32_t*)UnBox (L_43, Int32_t48_il2cpp_TypeInfo_var))));
		goto IL_020a;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t55 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Object_t_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_01f3;
		throw e;
	}

CATCH_01f3:
	{ // begin catch(System.Object)
		Debug_LogWarning_m457(NULL /*static, unused*/, _stringLiteral94, /*hidden argument*/NULL);
		__this->___namedcolorvalue_36 = 0;
		goto IL_020a;
	} // end catch (depth: 1)

IL_020a:
	{
		goto IL_021a;
	}

IL_020f:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Defaults_t12_il2cpp_TypeInfo_var);
		int32_t L_44 = ((Defaults_t12_StaticFields*)Defaults_t12_il2cpp_TypeInfo_var->static_fields)->___namedColorValue_2;
		__this->___namedcolorvalue_36 = L_44;
	}

IL_021a:
	{
		Hashtable_t26 * L_45 = (__this->___tweenArguments_23);
		bool L_46 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(26 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_45, _stringLiteral95);
		if (!L_46)
		{
			goto IL_02c4;
		}
	}
	{
		Hashtable_t26 * L_47 = (__this->___tweenArguments_23);
		Object_t * L_48 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_47, _stringLiteral95);
		Type_t * L_49 = Object_GetType_m342(L_48, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_50 = Type_GetTypeFromHandle_m343(NULL /*static, unused*/, LoadTypeToken(LoopType_t10_0_0_0_var), /*hidden argument*/NULL);
		if ((!(((Object_t*)(Type_t *)L_49) == ((Object_t*)(Type_t *)L_50))))
		{
			goto IL_0273;
		}
	}
	{
		Hashtable_t26 * L_51 = (__this->___tweenArguments_23);
		Object_t * L_52 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_51, _stringLiteral95);
		__this->___loopType_10 = ((*(int32_t*)((int32_t*)UnBox (L_52, Int32_t48_il2cpp_TypeInfo_var))));
		goto IL_02bf;
	}

IL_0273:
	try
	{ // begin try (depth: 1)
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_53 = Type_GetTypeFromHandle_m343(NULL /*static, unused*/, LoadTypeToken(LoopType_t10_0_0_0_var), /*hidden argument*/NULL);
		Hashtable_t26 * L_54 = (__this->___tweenArguments_23);
		Object_t * L_55 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_54, _stringLiteral95);
		IL2CPP_RUNTIME_CLASS_INIT(Enum_t75_il2cpp_TypeInfo_var);
		Object_t * L_56 = Enum_Parse_m456(NULL /*static, unused*/, L_53, ((String_t*)CastclassSealed(L_55, String_t_il2cpp_TypeInfo_var)), 1, /*hidden argument*/NULL);
		__this->___loopType_10 = ((*(int32_t*)((int32_t*)UnBox (L_56, Int32_t48_il2cpp_TypeInfo_var))));
		goto IL_02bf;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t55 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Object_t_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_02a8;
		throw e;
	}

CATCH_02a8:
	{ // begin catch(System.Object)
		Debug_LogWarning_m457(NULL /*static, unused*/, _stringLiteral96, /*hidden argument*/NULL);
		__this->___loopType_10 = 0;
		goto IL_02bf;
	} // end catch (depth: 1)

IL_02bf:
	{
		goto IL_02cb;
	}

IL_02c4:
	{
		__this->___loopType_10 = 0;
	}

IL_02cb:
	{
		Hashtable_t26 * L_57 = (__this->___tweenArguments_23);
		bool L_58 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(26 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_57, _stringLiteral37);
		if (!L_58)
		{
			goto IL_0379;
		}
	}
	{
		Hashtable_t26 * L_59 = (__this->___tweenArguments_23);
		Object_t * L_60 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_59, _stringLiteral37);
		Type_t * L_61 = Object_GetType_m342(L_60, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_62 = Type_GetTypeFromHandle_m343(NULL /*static, unused*/, LoadTypeToken(EaseType_t9_0_0_0_var), /*hidden argument*/NULL);
		if ((!(((Object_t*)(Type_t *)L_61) == ((Object_t*)(Type_t *)L_62))))
		{
			goto IL_0324;
		}
	}
	{
		Hashtable_t26 * L_63 = (__this->___tweenArguments_23);
		Object_t * L_64 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_63, _stringLiteral37);
		__this->___easeType_7 = ((*(int32_t*)((int32_t*)UnBox (L_64, Int32_t48_il2cpp_TypeInfo_var))));
		goto IL_0374;
	}

IL_0324:
	try
	{ // begin try (depth: 1)
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_65 = Type_GetTypeFromHandle_m343(NULL /*static, unused*/, LoadTypeToken(EaseType_t9_0_0_0_var), /*hidden argument*/NULL);
		Hashtable_t26 * L_66 = (__this->___tweenArguments_23);
		Object_t * L_67 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_66, _stringLiteral37);
		IL2CPP_RUNTIME_CLASS_INIT(Enum_t75_il2cpp_TypeInfo_var);
		Object_t * L_68 = Enum_Parse_m456(NULL /*static, unused*/, L_65, ((String_t*)CastclassSealed(L_67, String_t_il2cpp_TypeInfo_var)), 1, /*hidden argument*/NULL);
		__this->___easeType_7 = ((*(int32_t*)((int32_t*)UnBox (L_68, Int32_t48_il2cpp_TypeInfo_var))));
		goto IL_0374;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t55 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Object_t_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0359;
		throw e;
	}

CATCH_0359:
	{ // begin catch(System.Object)
		Debug_LogWarning_m457(NULL /*static, unused*/, _stringLiteral97, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Defaults_t12_il2cpp_TypeInfo_var);
		int32_t L_69 = ((Defaults_t12_StaticFields*)Defaults_t12_il2cpp_TypeInfo_var->static_fields)->___easeType_4;
		__this->___easeType_7 = L_69;
		goto IL_0374;
	} // end catch (depth: 1)

IL_0374:
	{
		goto IL_0384;
	}

IL_0379:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Defaults_t12_il2cpp_TypeInfo_var);
		int32_t L_70 = ((Defaults_t12_StaticFields*)Defaults_t12_il2cpp_TypeInfo_var->static_fields)->___easeType_4;
		__this->___easeType_7 = L_70;
	}

IL_0384:
	{
		Hashtable_t26 * L_71 = (__this->___tweenArguments_23);
		bool L_72 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(26 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_71, _stringLiteral98);
		if (!L_72)
		{
			goto IL_0432;
		}
	}
	{
		Hashtable_t26 * L_73 = (__this->___tweenArguments_23);
		Object_t * L_74 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_73, _stringLiteral98);
		Type_t * L_75 = Object_GetType_m342(L_74, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_76 = Type_GetTypeFromHandle_m343(NULL /*static, unused*/, LoadTypeToken(Space_t76_0_0_0_var), /*hidden argument*/NULL);
		if ((!(((Object_t*)(Type_t *)L_75) == ((Object_t*)(Type_t *)L_76))))
		{
			goto IL_03dd;
		}
	}
	{
		Hashtable_t26 * L_77 = (__this->___tweenArguments_23);
		Object_t * L_78 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_77, _stringLiteral98);
		__this->___space_24 = ((*(int32_t*)((int32_t*)UnBox (L_78, Int32_t48_il2cpp_TypeInfo_var))));
		goto IL_042d;
	}

IL_03dd:
	try
	{ // begin try (depth: 1)
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_79 = Type_GetTypeFromHandle_m343(NULL /*static, unused*/, LoadTypeToken(Space_t76_0_0_0_var), /*hidden argument*/NULL);
		Hashtable_t26 * L_80 = (__this->___tweenArguments_23);
		Object_t * L_81 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_80, _stringLiteral98);
		IL2CPP_RUNTIME_CLASS_INIT(Enum_t75_il2cpp_TypeInfo_var);
		Object_t * L_82 = Enum_Parse_m456(NULL /*static, unused*/, L_79, ((String_t*)CastclassSealed(L_81, String_t_il2cpp_TypeInfo_var)), 1, /*hidden argument*/NULL);
		__this->___space_24 = ((*(int32_t*)((int32_t*)UnBox (L_82, Int32_t48_il2cpp_TypeInfo_var))));
		goto IL_042d;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t55 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Object_t_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0412;
		throw e;
	}

CATCH_0412:
	{ // begin catch(System.Object)
		Debug_LogWarning_m457(NULL /*static, unused*/, _stringLiteral99, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Defaults_t12_il2cpp_TypeInfo_var);
		int32_t L_83 = ((Defaults_t12_StaticFields*)Defaults_t12_il2cpp_TypeInfo_var->static_fields)->___space_7;
		__this->___space_24 = L_83;
		goto IL_042d;
	} // end catch (depth: 1)

IL_042d:
	{
		goto IL_043d;
	}

IL_0432:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Defaults_t12_il2cpp_TypeInfo_var);
		int32_t L_84 = ((Defaults_t12_StaticFields*)Defaults_t12_il2cpp_TypeInfo_var->static_fields)->___space_7;
		__this->___space_24 = L_84;
	}

IL_043d:
	{
		Hashtable_t26 * L_85 = (__this->___tweenArguments_23);
		bool L_86 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(26 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_85, _stringLiteral63);
		if (!L_86)
		{
			goto IL_0472;
		}
	}
	{
		Hashtable_t26 * L_87 = (__this->___tweenArguments_23);
		Object_t * L_88 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_87, _stringLiteral63);
		__this->___isLocal_18 = ((*(bool*)((bool*)UnBox (L_88, Boolean_t56_il2cpp_TypeInfo_var))));
		goto IL_047d;
	}

IL_0472:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Defaults_t12_il2cpp_TypeInfo_var);
		bool L_89 = ((Defaults_t12_StaticFields*)Defaults_t12_il2cpp_TypeInfo_var->static_fields)->___isLocal_6;
		__this->___isLocal_18 = L_89;
	}

IL_047d:
	{
		Hashtable_t26 * L_90 = (__this->___tweenArguments_23);
		bool L_91 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(26 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_90, _stringLiteral100);
		if (!L_91)
		{
			goto IL_04b2;
		}
	}
	{
		Hashtable_t26 * L_92 = (__this->___tweenArguments_23);
		Object_t * L_93 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_92, _stringLiteral100);
		__this->___useRealTime_38 = ((*(bool*)((bool*)UnBox (L_93, Boolean_t56_il2cpp_TypeInfo_var))));
		goto IL_04bd;
	}

IL_04b2:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Defaults_t12_il2cpp_TypeInfo_var);
		bool L_94 = ((Defaults_t12_StaticFields*)Defaults_t12_il2cpp_TypeInfo_var->static_fields)->___useRealTime_14;
		__this->___useRealTime_38 = L_94;
	}

IL_04bd:
	{
		iTween_GetEasingFunction_m254(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void iTween::GetEasingFunction()
extern TypeInfo* EasingFunction_t17_il2cpp_TypeInfo_var;
extern const MethodInfo* iTween_easeInQuad_m265_MethodInfo_var;
extern const MethodInfo* iTween_easeOutQuad_m266_MethodInfo_var;
extern const MethodInfo* iTween_easeInOutQuad_m267_MethodInfo_var;
extern const MethodInfo* iTween_easeInCubic_m268_MethodInfo_var;
extern const MethodInfo* iTween_easeOutCubic_m269_MethodInfo_var;
extern const MethodInfo* iTween_easeInOutCubic_m270_MethodInfo_var;
extern const MethodInfo* iTween_easeInQuart_m271_MethodInfo_var;
extern const MethodInfo* iTween_easeOutQuart_m272_MethodInfo_var;
extern const MethodInfo* iTween_easeInOutQuart_m273_MethodInfo_var;
extern const MethodInfo* iTween_easeInQuint_m274_MethodInfo_var;
extern const MethodInfo* iTween_easeOutQuint_m275_MethodInfo_var;
extern const MethodInfo* iTween_easeInOutQuint_m276_MethodInfo_var;
extern const MethodInfo* iTween_easeInSine_m277_MethodInfo_var;
extern const MethodInfo* iTween_easeOutSine_m278_MethodInfo_var;
extern const MethodInfo* iTween_easeInOutSine_m279_MethodInfo_var;
extern const MethodInfo* iTween_easeInExpo_m280_MethodInfo_var;
extern const MethodInfo* iTween_easeOutExpo_m281_MethodInfo_var;
extern const MethodInfo* iTween_easeInOutExpo_m282_MethodInfo_var;
extern const MethodInfo* iTween_easeInCirc_m283_MethodInfo_var;
extern const MethodInfo* iTween_easeOutCirc_m284_MethodInfo_var;
extern const MethodInfo* iTween_easeInOutCirc_m285_MethodInfo_var;
extern const MethodInfo* iTween_linear_m262_MethodInfo_var;
extern const MethodInfo* iTween_spring_m264_MethodInfo_var;
extern const MethodInfo* iTween_easeInBounce_m286_MethodInfo_var;
extern const MethodInfo* iTween_easeOutBounce_m287_MethodInfo_var;
extern const MethodInfo* iTween_easeInOutBounce_m288_MethodInfo_var;
extern const MethodInfo* iTween_easeInBack_m289_MethodInfo_var;
extern const MethodInfo* iTween_easeOutBack_m290_MethodInfo_var;
extern const MethodInfo* iTween_easeInOutBack_m291_MethodInfo_var;
extern const MethodInfo* iTween_easeInElastic_m293_MethodInfo_var;
extern const MethodInfo* iTween_easeOutElastic_m294_MethodInfo_var;
extern const MethodInfo* iTween_easeInOutElastic_m295_MethodInfo_var;
extern "C" void iTween_GetEasingFunction_m254 (iTween_t23 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EasingFunction_t17_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(59);
		iTween_easeInQuad_m265_MethodInfo_var = il2cpp_codegen_method_info_from_index(46);
		iTween_easeOutQuad_m266_MethodInfo_var = il2cpp_codegen_method_info_from_index(47);
		iTween_easeInOutQuad_m267_MethodInfo_var = il2cpp_codegen_method_info_from_index(48);
		iTween_easeInCubic_m268_MethodInfo_var = il2cpp_codegen_method_info_from_index(49);
		iTween_easeOutCubic_m269_MethodInfo_var = il2cpp_codegen_method_info_from_index(50);
		iTween_easeInOutCubic_m270_MethodInfo_var = il2cpp_codegen_method_info_from_index(51);
		iTween_easeInQuart_m271_MethodInfo_var = il2cpp_codegen_method_info_from_index(52);
		iTween_easeOutQuart_m272_MethodInfo_var = il2cpp_codegen_method_info_from_index(53);
		iTween_easeInOutQuart_m273_MethodInfo_var = il2cpp_codegen_method_info_from_index(54);
		iTween_easeInQuint_m274_MethodInfo_var = il2cpp_codegen_method_info_from_index(55);
		iTween_easeOutQuint_m275_MethodInfo_var = il2cpp_codegen_method_info_from_index(56);
		iTween_easeInOutQuint_m276_MethodInfo_var = il2cpp_codegen_method_info_from_index(57);
		iTween_easeInSine_m277_MethodInfo_var = il2cpp_codegen_method_info_from_index(58);
		iTween_easeOutSine_m278_MethodInfo_var = il2cpp_codegen_method_info_from_index(59);
		iTween_easeInOutSine_m279_MethodInfo_var = il2cpp_codegen_method_info_from_index(60);
		iTween_easeInExpo_m280_MethodInfo_var = il2cpp_codegen_method_info_from_index(61);
		iTween_easeOutExpo_m281_MethodInfo_var = il2cpp_codegen_method_info_from_index(62);
		iTween_easeInOutExpo_m282_MethodInfo_var = il2cpp_codegen_method_info_from_index(63);
		iTween_easeInCirc_m283_MethodInfo_var = il2cpp_codegen_method_info_from_index(64);
		iTween_easeOutCirc_m284_MethodInfo_var = il2cpp_codegen_method_info_from_index(65);
		iTween_easeInOutCirc_m285_MethodInfo_var = il2cpp_codegen_method_info_from_index(66);
		iTween_linear_m262_MethodInfo_var = il2cpp_codegen_method_info_from_index(67);
		iTween_spring_m264_MethodInfo_var = il2cpp_codegen_method_info_from_index(68);
		iTween_easeInBounce_m286_MethodInfo_var = il2cpp_codegen_method_info_from_index(69);
		iTween_easeOutBounce_m287_MethodInfo_var = il2cpp_codegen_method_info_from_index(70);
		iTween_easeInOutBounce_m288_MethodInfo_var = il2cpp_codegen_method_info_from_index(71);
		iTween_easeInBack_m289_MethodInfo_var = il2cpp_codegen_method_info_from_index(72);
		iTween_easeOutBack_m290_MethodInfo_var = il2cpp_codegen_method_info_from_index(73);
		iTween_easeInOutBack_m291_MethodInfo_var = il2cpp_codegen_method_info_from_index(74);
		iTween_easeInElastic_m293_MethodInfo_var = il2cpp_codegen_method_info_from_index(75);
		iTween_easeOutElastic_m294_MethodInfo_var = il2cpp_codegen_method_info_from_index(76);
		iTween_easeInOutElastic_m295_MethodInfo_var = il2cpp_codegen_method_info_from_index(77);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = {0};
	{
		int32_t L_0 = (__this->___easeType_7);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0092;
		}
		if (L_1 == 1)
		{
			goto IL_00a9;
		}
		if (L_1 == 2)
		{
			goto IL_00c0;
		}
		if (L_1 == 3)
		{
			goto IL_00d7;
		}
		if (L_1 == 4)
		{
			goto IL_00ee;
		}
		if (L_1 == 5)
		{
			goto IL_0105;
		}
		if (L_1 == 6)
		{
			goto IL_011c;
		}
		if (L_1 == 7)
		{
			goto IL_0133;
		}
		if (L_1 == 8)
		{
			goto IL_014a;
		}
		if (L_1 == 9)
		{
			goto IL_0161;
		}
		if (L_1 == 10)
		{
			goto IL_0178;
		}
		if (L_1 == 11)
		{
			goto IL_018f;
		}
		if (L_1 == 12)
		{
			goto IL_01a6;
		}
		if (L_1 == 13)
		{
			goto IL_01bd;
		}
		if (L_1 == 14)
		{
			goto IL_01d4;
		}
		if (L_1 == 15)
		{
			goto IL_01eb;
		}
		if (L_1 == 16)
		{
			goto IL_0202;
		}
		if (L_1 == 17)
		{
			goto IL_0219;
		}
		if (L_1 == 18)
		{
			goto IL_0230;
		}
		if (L_1 == 19)
		{
			goto IL_0247;
		}
		if (L_1 == 20)
		{
			goto IL_025e;
		}
		if (L_1 == 21)
		{
			goto IL_0275;
		}
		if (L_1 == 22)
		{
			goto IL_028c;
		}
		if (L_1 == 23)
		{
			goto IL_02a3;
		}
		if (L_1 == 24)
		{
			goto IL_02ba;
		}
		if (L_1 == 25)
		{
			goto IL_02d1;
		}
		if (L_1 == 26)
		{
			goto IL_02e8;
		}
		if (L_1 == 27)
		{
			goto IL_02ff;
		}
		if (L_1 == 28)
		{
			goto IL_0316;
		}
		if (L_1 == 29)
		{
			goto IL_032d;
		}
		if (L_1 == 30)
		{
			goto IL_0344;
		}
		if (L_1 == 31)
		{
			goto IL_035b;
		}
	}
	{
		goto IL_0372;
	}

IL_0092:
	{
		IntPtr_t L_2 = { (void*)iTween_easeInQuad_m265_MethodInfo_var };
		EasingFunction_t17 * L_3 = (EasingFunction_t17 *)il2cpp_codegen_object_new (EasingFunction_t17_il2cpp_TypeInfo_var);
		EasingFunction__ctor_m16(L_3, __this, L_2, /*hidden argument*/NULL);
		__this->___ease_25 = L_3;
		goto IL_0372;
	}

IL_00a9:
	{
		IntPtr_t L_4 = { (void*)iTween_easeOutQuad_m266_MethodInfo_var };
		EasingFunction_t17 * L_5 = (EasingFunction_t17 *)il2cpp_codegen_object_new (EasingFunction_t17_il2cpp_TypeInfo_var);
		EasingFunction__ctor_m16(L_5, __this, L_4, /*hidden argument*/NULL);
		__this->___ease_25 = L_5;
		goto IL_0372;
	}

IL_00c0:
	{
		IntPtr_t L_6 = { (void*)iTween_easeInOutQuad_m267_MethodInfo_var };
		EasingFunction_t17 * L_7 = (EasingFunction_t17 *)il2cpp_codegen_object_new (EasingFunction_t17_il2cpp_TypeInfo_var);
		EasingFunction__ctor_m16(L_7, __this, L_6, /*hidden argument*/NULL);
		__this->___ease_25 = L_7;
		goto IL_0372;
	}

IL_00d7:
	{
		IntPtr_t L_8 = { (void*)iTween_easeInCubic_m268_MethodInfo_var };
		EasingFunction_t17 * L_9 = (EasingFunction_t17 *)il2cpp_codegen_object_new (EasingFunction_t17_il2cpp_TypeInfo_var);
		EasingFunction__ctor_m16(L_9, __this, L_8, /*hidden argument*/NULL);
		__this->___ease_25 = L_9;
		goto IL_0372;
	}

IL_00ee:
	{
		IntPtr_t L_10 = { (void*)iTween_easeOutCubic_m269_MethodInfo_var };
		EasingFunction_t17 * L_11 = (EasingFunction_t17 *)il2cpp_codegen_object_new (EasingFunction_t17_il2cpp_TypeInfo_var);
		EasingFunction__ctor_m16(L_11, __this, L_10, /*hidden argument*/NULL);
		__this->___ease_25 = L_11;
		goto IL_0372;
	}

IL_0105:
	{
		IntPtr_t L_12 = { (void*)iTween_easeInOutCubic_m270_MethodInfo_var };
		EasingFunction_t17 * L_13 = (EasingFunction_t17 *)il2cpp_codegen_object_new (EasingFunction_t17_il2cpp_TypeInfo_var);
		EasingFunction__ctor_m16(L_13, __this, L_12, /*hidden argument*/NULL);
		__this->___ease_25 = L_13;
		goto IL_0372;
	}

IL_011c:
	{
		IntPtr_t L_14 = { (void*)iTween_easeInQuart_m271_MethodInfo_var };
		EasingFunction_t17 * L_15 = (EasingFunction_t17 *)il2cpp_codegen_object_new (EasingFunction_t17_il2cpp_TypeInfo_var);
		EasingFunction__ctor_m16(L_15, __this, L_14, /*hidden argument*/NULL);
		__this->___ease_25 = L_15;
		goto IL_0372;
	}

IL_0133:
	{
		IntPtr_t L_16 = { (void*)iTween_easeOutQuart_m272_MethodInfo_var };
		EasingFunction_t17 * L_17 = (EasingFunction_t17 *)il2cpp_codegen_object_new (EasingFunction_t17_il2cpp_TypeInfo_var);
		EasingFunction__ctor_m16(L_17, __this, L_16, /*hidden argument*/NULL);
		__this->___ease_25 = L_17;
		goto IL_0372;
	}

IL_014a:
	{
		IntPtr_t L_18 = { (void*)iTween_easeInOutQuart_m273_MethodInfo_var };
		EasingFunction_t17 * L_19 = (EasingFunction_t17 *)il2cpp_codegen_object_new (EasingFunction_t17_il2cpp_TypeInfo_var);
		EasingFunction__ctor_m16(L_19, __this, L_18, /*hidden argument*/NULL);
		__this->___ease_25 = L_19;
		goto IL_0372;
	}

IL_0161:
	{
		IntPtr_t L_20 = { (void*)iTween_easeInQuint_m274_MethodInfo_var };
		EasingFunction_t17 * L_21 = (EasingFunction_t17 *)il2cpp_codegen_object_new (EasingFunction_t17_il2cpp_TypeInfo_var);
		EasingFunction__ctor_m16(L_21, __this, L_20, /*hidden argument*/NULL);
		__this->___ease_25 = L_21;
		goto IL_0372;
	}

IL_0178:
	{
		IntPtr_t L_22 = { (void*)iTween_easeOutQuint_m275_MethodInfo_var };
		EasingFunction_t17 * L_23 = (EasingFunction_t17 *)il2cpp_codegen_object_new (EasingFunction_t17_il2cpp_TypeInfo_var);
		EasingFunction__ctor_m16(L_23, __this, L_22, /*hidden argument*/NULL);
		__this->___ease_25 = L_23;
		goto IL_0372;
	}

IL_018f:
	{
		IntPtr_t L_24 = { (void*)iTween_easeInOutQuint_m276_MethodInfo_var };
		EasingFunction_t17 * L_25 = (EasingFunction_t17 *)il2cpp_codegen_object_new (EasingFunction_t17_il2cpp_TypeInfo_var);
		EasingFunction__ctor_m16(L_25, __this, L_24, /*hidden argument*/NULL);
		__this->___ease_25 = L_25;
		goto IL_0372;
	}

IL_01a6:
	{
		IntPtr_t L_26 = { (void*)iTween_easeInSine_m277_MethodInfo_var };
		EasingFunction_t17 * L_27 = (EasingFunction_t17 *)il2cpp_codegen_object_new (EasingFunction_t17_il2cpp_TypeInfo_var);
		EasingFunction__ctor_m16(L_27, __this, L_26, /*hidden argument*/NULL);
		__this->___ease_25 = L_27;
		goto IL_0372;
	}

IL_01bd:
	{
		IntPtr_t L_28 = { (void*)iTween_easeOutSine_m278_MethodInfo_var };
		EasingFunction_t17 * L_29 = (EasingFunction_t17 *)il2cpp_codegen_object_new (EasingFunction_t17_il2cpp_TypeInfo_var);
		EasingFunction__ctor_m16(L_29, __this, L_28, /*hidden argument*/NULL);
		__this->___ease_25 = L_29;
		goto IL_0372;
	}

IL_01d4:
	{
		IntPtr_t L_30 = { (void*)iTween_easeInOutSine_m279_MethodInfo_var };
		EasingFunction_t17 * L_31 = (EasingFunction_t17 *)il2cpp_codegen_object_new (EasingFunction_t17_il2cpp_TypeInfo_var);
		EasingFunction__ctor_m16(L_31, __this, L_30, /*hidden argument*/NULL);
		__this->___ease_25 = L_31;
		goto IL_0372;
	}

IL_01eb:
	{
		IntPtr_t L_32 = { (void*)iTween_easeInExpo_m280_MethodInfo_var };
		EasingFunction_t17 * L_33 = (EasingFunction_t17 *)il2cpp_codegen_object_new (EasingFunction_t17_il2cpp_TypeInfo_var);
		EasingFunction__ctor_m16(L_33, __this, L_32, /*hidden argument*/NULL);
		__this->___ease_25 = L_33;
		goto IL_0372;
	}

IL_0202:
	{
		IntPtr_t L_34 = { (void*)iTween_easeOutExpo_m281_MethodInfo_var };
		EasingFunction_t17 * L_35 = (EasingFunction_t17 *)il2cpp_codegen_object_new (EasingFunction_t17_il2cpp_TypeInfo_var);
		EasingFunction__ctor_m16(L_35, __this, L_34, /*hidden argument*/NULL);
		__this->___ease_25 = L_35;
		goto IL_0372;
	}

IL_0219:
	{
		IntPtr_t L_36 = { (void*)iTween_easeInOutExpo_m282_MethodInfo_var };
		EasingFunction_t17 * L_37 = (EasingFunction_t17 *)il2cpp_codegen_object_new (EasingFunction_t17_il2cpp_TypeInfo_var);
		EasingFunction__ctor_m16(L_37, __this, L_36, /*hidden argument*/NULL);
		__this->___ease_25 = L_37;
		goto IL_0372;
	}

IL_0230:
	{
		IntPtr_t L_38 = { (void*)iTween_easeInCirc_m283_MethodInfo_var };
		EasingFunction_t17 * L_39 = (EasingFunction_t17 *)il2cpp_codegen_object_new (EasingFunction_t17_il2cpp_TypeInfo_var);
		EasingFunction__ctor_m16(L_39, __this, L_38, /*hidden argument*/NULL);
		__this->___ease_25 = L_39;
		goto IL_0372;
	}

IL_0247:
	{
		IntPtr_t L_40 = { (void*)iTween_easeOutCirc_m284_MethodInfo_var };
		EasingFunction_t17 * L_41 = (EasingFunction_t17 *)il2cpp_codegen_object_new (EasingFunction_t17_il2cpp_TypeInfo_var);
		EasingFunction__ctor_m16(L_41, __this, L_40, /*hidden argument*/NULL);
		__this->___ease_25 = L_41;
		goto IL_0372;
	}

IL_025e:
	{
		IntPtr_t L_42 = { (void*)iTween_easeInOutCirc_m285_MethodInfo_var };
		EasingFunction_t17 * L_43 = (EasingFunction_t17 *)il2cpp_codegen_object_new (EasingFunction_t17_il2cpp_TypeInfo_var);
		EasingFunction__ctor_m16(L_43, __this, L_42, /*hidden argument*/NULL);
		__this->___ease_25 = L_43;
		goto IL_0372;
	}

IL_0275:
	{
		IntPtr_t L_44 = { (void*)iTween_linear_m262_MethodInfo_var };
		EasingFunction_t17 * L_45 = (EasingFunction_t17 *)il2cpp_codegen_object_new (EasingFunction_t17_il2cpp_TypeInfo_var);
		EasingFunction__ctor_m16(L_45, __this, L_44, /*hidden argument*/NULL);
		__this->___ease_25 = L_45;
		goto IL_0372;
	}

IL_028c:
	{
		IntPtr_t L_46 = { (void*)iTween_spring_m264_MethodInfo_var };
		EasingFunction_t17 * L_47 = (EasingFunction_t17 *)il2cpp_codegen_object_new (EasingFunction_t17_il2cpp_TypeInfo_var);
		EasingFunction__ctor_m16(L_47, __this, L_46, /*hidden argument*/NULL);
		__this->___ease_25 = L_47;
		goto IL_0372;
	}

IL_02a3:
	{
		IntPtr_t L_48 = { (void*)iTween_easeInBounce_m286_MethodInfo_var };
		EasingFunction_t17 * L_49 = (EasingFunction_t17 *)il2cpp_codegen_object_new (EasingFunction_t17_il2cpp_TypeInfo_var);
		EasingFunction__ctor_m16(L_49, __this, L_48, /*hidden argument*/NULL);
		__this->___ease_25 = L_49;
		goto IL_0372;
	}

IL_02ba:
	{
		IntPtr_t L_50 = { (void*)iTween_easeOutBounce_m287_MethodInfo_var };
		EasingFunction_t17 * L_51 = (EasingFunction_t17 *)il2cpp_codegen_object_new (EasingFunction_t17_il2cpp_TypeInfo_var);
		EasingFunction__ctor_m16(L_51, __this, L_50, /*hidden argument*/NULL);
		__this->___ease_25 = L_51;
		goto IL_0372;
	}

IL_02d1:
	{
		IntPtr_t L_52 = { (void*)iTween_easeInOutBounce_m288_MethodInfo_var };
		EasingFunction_t17 * L_53 = (EasingFunction_t17 *)il2cpp_codegen_object_new (EasingFunction_t17_il2cpp_TypeInfo_var);
		EasingFunction__ctor_m16(L_53, __this, L_52, /*hidden argument*/NULL);
		__this->___ease_25 = L_53;
		goto IL_0372;
	}

IL_02e8:
	{
		IntPtr_t L_54 = { (void*)iTween_easeInBack_m289_MethodInfo_var };
		EasingFunction_t17 * L_55 = (EasingFunction_t17 *)il2cpp_codegen_object_new (EasingFunction_t17_il2cpp_TypeInfo_var);
		EasingFunction__ctor_m16(L_55, __this, L_54, /*hidden argument*/NULL);
		__this->___ease_25 = L_55;
		goto IL_0372;
	}

IL_02ff:
	{
		IntPtr_t L_56 = { (void*)iTween_easeOutBack_m290_MethodInfo_var };
		EasingFunction_t17 * L_57 = (EasingFunction_t17 *)il2cpp_codegen_object_new (EasingFunction_t17_il2cpp_TypeInfo_var);
		EasingFunction__ctor_m16(L_57, __this, L_56, /*hidden argument*/NULL);
		__this->___ease_25 = L_57;
		goto IL_0372;
	}

IL_0316:
	{
		IntPtr_t L_58 = { (void*)iTween_easeInOutBack_m291_MethodInfo_var };
		EasingFunction_t17 * L_59 = (EasingFunction_t17 *)il2cpp_codegen_object_new (EasingFunction_t17_il2cpp_TypeInfo_var);
		EasingFunction__ctor_m16(L_59, __this, L_58, /*hidden argument*/NULL);
		__this->___ease_25 = L_59;
		goto IL_0372;
	}

IL_032d:
	{
		IntPtr_t L_60 = { (void*)iTween_easeInElastic_m293_MethodInfo_var };
		EasingFunction_t17 * L_61 = (EasingFunction_t17 *)il2cpp_codegen_object_new (EasingFunction_t17_il2cpp_TypeInfo_var);
		EasingFunction__ctor_m16(L_61, __this, L_60, /*hidden argument*/NULL);
		__this->___ease_25 = L_61;
		goto IL_0372;
	}

IL_0344:
	{
		IntPtr_t L_62 = { (void*)iTween_easeOutElastic_m294_MethodInfo_var };
		EasingFunction_t17 * L_63 = (EasingFunction_t17 *)il2cpp_codegen_object_new (EasingFunction_t17_il2cpp_TypeInfo_var);
		EasingFunction__ctor_m16(L_63, __this, L_62, /*hidden argument*/NULL);
		__this->___ease_25 = L_63;
		goto IL_0372;
	}

IL_035b:
	{
		IntPtr_t L_64 = { (void*)iTween_easeInOutElastic_m295_MethodInfo_var };
		EasingFunction_t17 * L_65 = (EasingFunction_t17 *)il2cpp_codegen_object_new (EasingFunction_t17_il2cpp_TypeInfo_var);
		EasingFunction__ctor_m16(L_65, __this, L_64, /*hidden argument*/NULL);
		__this->___ease_25 = L_65;
		goto IL_0372;
	}

IL_0372:
	{
		return;
	}
}
// System.Void iTween::UpdatePercentage()
extern "C" void iTween_UpdatePercentage_m255 (iTween_t23 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___useRealTime_38);
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		float L_1 = (__this->___runningTime_14);
		float L_2 = Time_get_realtimeSinceStartup_m444(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_3 = (__this->___lastRealTime_37);
		__this->___runningTime_14 = ((float)((float)L_1+(float)((float)((float)L_2-(float)L_3))));
		goto IL_003b;
	}

IL_0029:
	{
		float L_4 = (__this->___runningTime_14);
		float L_5 = Time_get_deltaTime_m301(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___runningTime_14 = ((float)((float)L_4+(float)L_5));
	}

IL_003b:
	{
		bool L_6 = (__this->___reverse_20);
		if (!L_6)
		{
			goto IL_0064;
		}
	}
	{
		float L_7 = (__this->___runningTime_14);
		float L_8 = (__this->___time_8);
		__this->___percentage_15 = ((float)((float)(1.0f)-(float)((float)((float)L_7/(float)L_8))));
		goto IL_0077;
	}

IL_0064:
	{
		float L_9 = (__this->___runningTime_14);
		float L_10 = (__this->___time_8);
		__this->___percentage_15 = ((float)((float)L_9/(float)L_10));
	}

IL_0077:
	{
		float L_11 = Time_get_realtimeSinceStartup_m444(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___lastRealTime_37 = L_11;
		return;
	}
}
// System.Void iTween::CallBack(System.String)
extern const Il2CppType* String_t_0_0_0_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* GameObject_t34_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral40;
extern Il2CppCodeGenString* _stringLiteral87;
extern Il2CppCodeGenString* _stringLiteral101;
extern Il2CppCodeGenString* _stringLiteral102;
extern "C" void iTween_CallBack_m256 (iTween_t23 * __this, String_t* ___callbackType, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_0_0_0_var = il2cpp_codegen_type_from_index(33);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(33);
		GameObject_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(50);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		_stringLiteral40 = il2cpp_codegen_string_literal_from_index(40);
		_stringLiteral87 = il2cpp_codegen_string_literal_from_index(87);
		_stringLiteral101 = il2cpp_codegen_string_literal_from_index(101);
		_stringLiteral102 = il2cpp_codegen_string_literal_from_index(102);
		s_Il2CppMethodIntialized = true;
	}
	GameObject_t34 * V_0 = {0};
	{
		Hashtable_t26 * L_0 = (__this->___tweenArguments_23);
		String_t* L_1 = ___callbackType;
		bool L_2 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(26 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_0, L_1);
		if (!L_2)
		{
			goto IL_00cc;
		}
	}
	{
		Hashtable_t26 * L_3 = (__this->___tweenArguments_23);
		bool L_4 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(26 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_3, _stringLiteral40);
		if (L_4)
		{
			goto IL_00cc;
		}
	}
	{
		Hashtable_t26 * L_5 = (__this->___tweenArguments_23);
		String_t* L_6 = ___callbackType;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_7 = String_Concat_m437(NULL /*static, unused*/, L_6, _stringLiteral87, /*hidden argument*/NULL);
		bool L_8 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(26 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_5, L_7);
		if (!L_8)
		{
			goto IL_0062;
		}
	}
	{
		Hashtable_t26 * L_9 = (__this->___tweenArguments_23);
		String_t* L_10 = ___callbackType;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_11 = String_Concat_m437(NULL /*static, unused*/, L_10, _stringLiteral87, /*hidden argument*/NULL);
		Object_t * L_12 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_9, L_11);
		V_0 = ((GameObject_t34 *)CastclassSealed(L_12, GameObject_t34_il2cpp_TypeInfo_var));
		goto IL_0069;
	}

IL_0062:
	{
		GameObject_t34 * L_13 = Component_get_gameObject_m319(__this, /*hidden argument*/NULL);
		V_0 = L_13;
	}

IL_0069:
	{
		Hashtable_t26 * L_14 = (__this->___tweenArguments_23);
		String_t* L_15 = ___callbackType;
		Object_t * L_16 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_14, L_15);
		Type_t * L_17 = Object_GetType_m342(L_16, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_18 = Type_GetTypeFromHandle_m343(NULL /*static, unused*/, LoadTypeToken(String_t_0_0_0_var), /*hidden argument*/NULL);
		if ((!(((Object_t*)(Type_t *)L_17) == ((Object_t*)(Type_t *)L_18))))
		{
			goto IL_00bc;
		}
	}
	{
		GameObject_t34 * L_19 = V_0;
		Hashtable_t26 * L_20 = (__this->___tweenArguments_23);
		String_t* L_21 = ___callbackType;
		Object_t * L_22 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_20, L_21);
		Hashtable_t26 * L_23 = (__this->___tweenArguments_23);
		String_t* L_24 = ___callbackType;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_25 = String_Concat_m437(NULL /*static, unused*/, L_24, _stringLiteral101, /*hidden argument*/NULL);
		Object_t * L_26 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_23, L_25);
		GameObject_SendMessage_m458(L_19, ((String_t*)CastclassSealed(L_22, String_t_il2cpp_TypeInfo_var)), L_26, 1, /*hidden argument*/NULL);
		goto IL_00cc;
	}

IL_00bc:
	{
		Debug_LogError_m341(NULL /*static, unused*/, _stringLiteral102, /*hidden argument*/NULL);
		Object_Destroy_m429(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
	}

IL_00cc:
	{
		return;
	}
}
// System.Void iTween::Dispose()
extern TypeInfo* iTween_t23_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral91;
extern "C" void iTween_Dispose_m257 (iTween_t23 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		iTween_t23_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(33);
		_stringLiteral91 = il2cpp_codegen_string_literal_from_index(91);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	Hashtable_t26 * V_1 = {0};
	{
		V_0 = 0;
		goto IL_0047;
	}

IL_0007:
	{
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		List_1_t33 * L_0 = ((iTween_t23_StaticFields*)iTween_t23_il2cpp_TypeInfo_var->static_fields)->___tweens_2;
		int32_t L_1 = V_0;
		Hashtable_t26 * L_2 = (Hashtable_t26 *)VirtFuncInvoker1< Hashtable_t26 *, int32_t >::Invoke(28 /* !0 System.Collections.Generic.List`1<System.Collections.Hashtable>::get_Item(System.Int32) */, L_0, L_1);
		V_1 = L_2;
		Hashtable_t26 * L_3 = V_1;
		Object_t * L_4 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_3, _stringLiteral91);
		String_t* L_5 = (__this->___id_4);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_6 = String_op_Equality_m414(NULL /*static, unused*/, ((String_t*)CastclassSealed(L_4, String_t_il2cpp_TypeInfo_var)), L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0043;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		List_1_t33 * L_7 = ((iTween_t23_StaticFields*)iTween_t23_il2cpp_TypeInfo_var->static_fields)->___tweens_2;
		int32_t L_8 = V_0;
		VirtActionInvoker1< int32_t >::Invoke(27 /* System.Void System.Collections.Generic.List`1<System.Collections.Hashtable>::RemoveAt(System.Int32) */, L_7, L_8);
		goto IL_0057;
	}

IL_0043:
	{
		int32_t L_9 = V_0;
		V_0 = ((int32_t)((int32_t)L_9+(int32_t)1));
	}

IL_0047:
	{
		int32_t L_10 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(iTween_t23_il2cpp_TypeInfo_var);
		List_1_t33 * L_11 = ((iTween_t23_StaticFields*)iTween_t23_il2cpp_TypeInfo_var->static_fields)->___tweens_2;
		int32_t L_12 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(17 /* System.Int32 System.Collections.Generic.List`1<System.Collections.Hashtable>::get_Count() */, L_11);
		if ((((int32_t)L_10) < ((int32_t)L_12)))
		{
			goto IL_0007;
		}
	}

IL_0057:
	{
		Object_Destroy_m429(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void iTween::ConflictCheck()
extern TypeInfo* iTween_t23_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t42_il2cpp_TypeInfo_var;
extern TypeInfo* DictionaryEntry_t72_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t57_il2cpp_TypeInfo_var;
extern const MethodInfo* Component_GetComponents_TisiTween_t23_m459_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral29;
extern Il2CppCodeGenString* _stringLiteral91;
extern "C" void iTween_ConflictCheck_m258 (iTween_t23 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		iTween_t23_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(33);
		IEnumerator_t42_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(29);
		DictionaryEntry_t72_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(53);
		IDisposable_t57_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(31);
		Component_GetComponents_TisiTween_t23_m459_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483726);
		_stringLiteral29 = il2cpp_codegen_string_literal_from_index(29);
		_stringLiteral91 = il2cpp_codegen_string_literal_from_index(91);
		s_Il2CppMethodIntialized = true;
	}
	ComponentU5BU5D_t68* V_0 = {0};
	iTween_t23 * V_1 = {0};
	ComponentU5BU5D_t68* V_2 = {0};
	int32_t V_3 = 0;
	DictionaryEntry_t72  V_4 = {0};
	Object_t * V_5 = {0};
	Object_t * V_6 = {0};
	Exception_t55 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t55 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		iTweenU5BU5D_t69* L_0 = Component_GetComponents_TisiTween_t23_m459(__this, /*hidden argument*/Component_GetComponents_TisiTween_t23_m459_MethodInfo_var);
		V_0 = (ComponentU5BU5D_t68*)L_0;
		ComponentU5BU5D_t68* L_1 = V_0;
		V_2 = L_1;
		V_3 = 0;
		goto IL_0150;
	}

IL_0010:
	{
		ComponentU5BU5D_t68* L_2 = V_2;
		int32_t L_3 = V_3;
		int32_t L_4 = L_3;
		V_1 = ((iTween_t23 *)CastclassClass((*(Component_t70 **)(Component_t70 **)SZArrayLdElema(L_2, L_4, sizeof(Component_t70 *))), iTween_t23_il2cpp_TypeInfo_var));
		iTween_t23 * L_5 = V_1;
		String_t* L_6 = (L_5->___type_5);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_7 = String_op_Equality_m414(NULL /*static, unused*/, L_6, _stringLiteral29, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_002f;
		}
	}
	{
		return;
	}

IL_002f:
	{
		iTween_t23 * L_8 = V_1;
		bool L_9 = (L_8->___isRunning_11);
		if (!L_9)
		{
			goto IL_014c;
		}
	}
	{
		iTween_t23 * L_10 = V_1;
		String_t* L_11 = (L_10->___type_5);
		String_t* L_12 = (__this->___type_5);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_13 = String_op_Equality_m414(NULL /*static, unused*/, L_11, L_12, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_014c;
		}
	}
	{
		iTween_t23 * L_14 = V_1;
		String_t* L_15 = (L_14->___method_6);
		String_t* L_16 = (__this->___method_6);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_17 = String_op_Inequality_m460(NULL /*static, unused*/, L_15, L_16, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_0067;
		}
	}
	{
		return;
	}

IL_0067:
	{
		iTween_t23 * L_18 = V_1;
		Hashtable_t26 * L_19 = (L_18->___tweenArguments_23);
		int32_t L_20 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(17 /* System.Int32 System.Collections.Hashtable::get_Count() */, L_19);
		Hashtable_t26 * L_21 = (__this->___tweenArguments_23);
		int32_t L_22 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(17 /* System.Int32 System.Collections.Hashtable::get_Count() */, L_21);
		if ((((int32_t)L_20) == ((int32_t)L_22)))
		{
			goto IL_0089;
		}
	}
	{
		iTween_t23 * L_23 = V_1;
		iTween_Dispose_m257(L_23, /*hidden argument*/NULL);
		return;
	}

IL_0089:
	{
		Hashtable_t26 * L_24 = (__this->___tweenArguments_23);
		Object_t * L_25 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(27 /* System.Collections.IDictionaryEnumerator System.Collections.Hashtable::GetEnumerator() */, L_24);
		V_5 = L_25;
	}

IL_0096:
	try
	{ // begin try (depth: 1)
		{
			goto IL_011f;
		}

IL_009b:
		{
			Object_t * L_26 = V_5;
			Object_t * L_27 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t42_il2cpp_TypeInfo_var, L_26);
			V_4 = ((*(DictionaryEntry_t72 *)((DictionaryEntry_t72 *)UnBox (L_27, DictionaryEntry_t72_il2cpp_TypeInfo_var))));
			iTween_t23 * L_28 = V_1;
			Hashtable_t26 * L_29 = (L_28->___tweenArguments_23);
			Object_t * L_30 = DictionaryEntry_get_Key_m448((&V_4), /*hidden argument*/NULL);
			bool L_31 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(26 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_29, L_30);
			if (L_31)
			{
				goto IL_00cb;
			}
		}

IL_00c0:
		{
			iTween_t23 * L_32 = V_1;
			iTween_Dispose_m257(L_32, /*hidden argument*/NULL);
			IL2CPP_LEAVE(0x159, FINALLY_0130);
		}

IL_00cb:
		{
			iTween_t23 * L_33 = V_1;
			Hashtable_t26 * L_34 = (L_33->___tweenArguments_23);
			Object_t * L_35 = DictionaryEntry_get_Key_m448((&V_4), /*hidden argument*/NULL);
			Object_t * L_36 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_34, L_35);
			Hashtable_t26 * L_37 = (__this->___tweenArguments_23);
			Object_t * L_38 = DictionaryEntry_get_Key_m448((&V_4), /*hidden argument*/NULL);
			Object_t * L_39 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_37, L_38);
			bool L_40 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_36, L_39);
			if (L_40)
			{
				goto IL_011f;
			}
		}

IL_00f9:
		{
			Object_t * L_41 = DictionaryEntry_get_Key_m448((&V_4), /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			bool L_42 = String_op_Inequality_m460(NULL /*static, unused*/, ((String_t*)CastclassSealed(L_41, String_t_il2cpp_TypeInfo_var)), _stringLiteral91, /*hidden argument*/NULL);
			if (!L_42)
			{
				goto IL_011f;
			}
		}

IL_0114:
		{
			iTween_t23 * L_43 = V_1;
			iTween_Dispose_m257(L_43, /*hidden argument*/NULL);
			IL2CPP_LEAVE(0x159, FINALLY_0130);
		}

IL_011f:
		{
			Object_t * L_44 = V_5;
			bool L_45 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t42_il2cpp_TypeInfo_var, L_44);
			if (L_45)
			{
				goto IL_009b;
			}
		}

IL_012b:
		{
			IL2CPP_LEAVE(0x146, FINALLY_0130);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t55 *)e.ex;
		goto FINALLY_0130;
	}

FINALLY_0130:
	{ // begin finally (depth: 1)
		{
			Object_t * L_46 = V_5;
			V_6 = ((Object_t *)IsInst(L_46, IDisposable_t57_il2cpp_TypeInfo_var));
			Object_t * L_47 = V_6;
			if (L_47)
			{
				goto IL_013e;
			}
		}

IL_013d:
		{
			IL2CPP_END_FINALLY(304)
		}

IL_013e:
		{
			Object_t * L_48 = V_6;
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t57_il2cpp_TypeInfo_var, L_48);
			IL2CPP_END_FINALLY(304)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(304)
	{
		IL2CPP_JUMP_TBL(0x159, IL_0159)
		IL2CPP_JUMP_TBL(0x146, IL_0146)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t55 *)
	}

IL_0146:
	{
		iTween_Dispose_m257(__this, /*hidden argument*/NULL);
	}

IL_014c:
	{
		int32_t L_49 = V_3;
		V_3 = ((int32_t)((int32_t)L_49+(int32_t)1));
	}

IL_0150:
	{
		int32_t L_50 = V_3;
		ComponentU5BU5D_t68* L_51 = V_2;
		if ((((int32_t)L_50) < ((int32_t)(((int32_t)((int32_t)(((Array_t *)L_51)->max_length)))))))
		{
			goto IL_0010;
		}
	}

IL_0159:
	{
		return;
	}
}
// System.Void iTween::EnableKinematic()
extern "C" void iTween_EnableKinematic_m259 (iTween_t23 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void iTween::DisableKinematic()
extern "C" void iTween_DisableKinematic_m260 (iTween_t23 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void iTween::ResumeDelay()
extern Il2CppCodeGenString* _stringLiteral20;
extern "C" void iTween_ResumeDelay_m261 (iTween_t23 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral20 = il2cpp_codegen_string_literal_from_index(20);
		s_Il2CppMethodIntialized = true;
	}
	{
		MonoBehaviour_StartCoroutine_m338(__this, _stringLiteral20, /*hidden argument*/NULL);
		return;
	}
}
// System.Single iTween::linear(System.Single,System.Single,System.Single)
extern TypeInfo* Mathf_t46_il2cpp_TypeInfo_var;
extern "C" float iTween_linear_m262 (iTween_t23 * __this, float ___start, float ___end, float ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t46_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		s_Il2CppMethodIntialized = true;
	}
	{
		float L_0 = ___start;
		float L_1 = ___end;
		float L_2 = ___value;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t46_il2cpp_TypeInfo_var);
		float L_3 = Mathf_Lerp_m461(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Single iTween::clerp(System.Single,System.Single,System.Single)
extern TypeInfo* Mathf_t46_il2cpp_TypeInfo_var;
extern "C" float iTween_clerp_m263 (iTween_t23 * __this, float ___start, float ___end, float ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t46_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	{
		V_0 = (0.0f);
		V_1 = (360.0f);
		float L_0 = V_1;
		float L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t46_il2cpp_TypeInfo_var);
		float L_2 = fabsf(((float)((float)((float)((float)L_0-(float)L_1))*(float)(0.5f))));
		V_2 = L_2;
		V_3 = (0.0f);
		V_4 = (0.0f);
		float L_3 = ___end;
		float L_4 = ___start;
		float L_5 = V_2;
		if ((!(((float)((float)((float)L_3-(float)L_4))) < ((float)((-L_5))))))
		{
			goto IL_0045;
		}
	}
	{
		float L_6 = V_1;
		float L_7 = ___start;
		float L_8 = ___end;
		float L_9 = ___value;
		V_4 = ((float)((float)((float)((float)((float)((float)L_6-(float)L_7))+(float)L_8))*(float)L_9));
		float L_10 = ___start;
		float L_11 = V_4;
		V_3 = ((float)((float)L_10+(float)L_11));
		goto IL_006a;
	}

IL_0045:
	{
		float L_12 = ___end;
		float L_13 = ___start;
		float L_14 = V_2;
		if ((!(((float)((float)((float)L_12-(float)L_13))) > ((float)L_14))))
		{
			goto IL_0062;
		}
	}
	{
		float L_15 = V_1;
		float L_16 = ___end;
		float L_17 = ___start;
		float L_18 = ___value;
		V_4 = ((float)((float)((-((float)((float)((float)((float)L_15-(float)L_16))+(float)L_17))))*(float)L_18));
		float L_19 = ___start;
		float L_20 = V_4;
		V_3 = ((float)((float)L_19+(float)L_20));
		goto IL_006a;
	}

IL_0062:
	{
		float L_21 = ___start;
		float L_22 = ___end;
		float L_23 = ___start;
		float L_24 = ___value;
		V_3 = ((float)((float)L_21+(float)((float)((float)((float)((float)L_22-(float)L_23))*(float)L_24))));
	}

IL_006a:
	{
		float L_25 = V_3;
		return L_25;
	}
}
// System.Single iTween::spring(System.Single,System.Single,System.Single)
extern TypeInfo* Mathf_t46_il2cpp_TypeInfo_var;
extern "C" float iTween_spring_m264 (iTween_t23 * __this, float ___start, float ___end, float ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t46_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		s_Il2CppMethodIntialized = true;
	}
	{
		float L_0 = ___value;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t46_il2cpp_TypeInfo_var);
		float L_1 = Mathf_Clamp01_m462(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		___value = L_1;
		float L_2 = ___value;
		float L_3 = ___value;
		float L_4 = ___value;
		float L_5 = ___value;
		float L_6 = sinf(((float)((float)((float)((float)L_2*(float)(3.14159274f)))*(float)((float)((float)(0.2f)+(float)((float)((float)((float)((float)((float)((float)(2.5f)*(float)L_3))*(float)L_4))*(float)L_5)))))));
		float L_7 = ___value;
		float L_8 = powf(((float)((float)(1.0f)-(float)L_7)), (2.2f));
		float L_9 = ___value;
		float L_10 = ___value;
		___value = ((float)((float)((float)((float)((float)((float)L_6*(float)L_8))+(float)L_9))*(float)((float)((float)(1.0f)+(float)((float)((float)(1.2f)*(float)((float)((float)(1.0f)-(float)L_10))))))));
		float L_11 = ___start;
		float L_12 = ___end;
		float L_13 = ___start;
		float L_14 = ___value;
		return ((float)((float)L_11+(float)((float)((float)((float)((float)L_12-(float)L_13))*(float)L_14))));
	}
}
// System.Single iTween::easeInQuad(System.Single,System.Single,System.Single)
extern "C" float iTween_easeInQuad_m265 (iTween_t23 * __this, float ___start, float ___end, float ___value, const MethodInfo* method)
{
	{
		float L_0 = ___end;
		float L_1 = ___start;
		___end = ((float)((float)L_0-(float)L_1));
		float L_2 = ___end;
		float L_3 = ___value;
		float L_4 = ___value;
		float L_5 = ___start;
		return ((float)((float)((float)((float)((float)((float)L_2*(float)L_3))*(float)L_4))+(float)L_5));
	}
}
// System.Single iTween::easeOutQuad(System.Single,System.Single,System.Single)
extern "C" float iTween_easeOutQuad_m266 (iTween_t23 * __this, float ___start, float ___end, float ___value, const MethodInfo* method)
{
	{
		float L_0 = ___end;
		float L_1 = ___start;
		___end = ((float)((float)L_0-(float)L_1));
		float L_2 = ___end;
		float L_3 = ___value;
		float L_4 = ___value;
		float L_5 = ___start;
		return ((float)((float)((float)((float)((float)((float)((-L_2))*(float)L_3))*(float)((float)((float)L_4-(float)(2.0f)))))+(float)L_5));
	}
}
// System.Single iTween::easeInOutQuad(System.Single,System.Single,System.Single)
extern "C" float iTween_easeInOutQuad_m267 (iTween_t23 * __this, float ___start, float ___end, float ___value, const MethodInfo* method)
{
	{
		float L_0 = ___value;
		___value = ((float)((float)L_0/(float)(0.5f)));
		float L_1 = ___end;
		float L_2 = ___start;
		___end = ((float)((float)L_1-(float)L_2));
		float L_3 = ___value;
		if ((!(((float)L_3) < ((float)(1.0f)))))
		{
			goto IL_0027;
		}
	}
	{
		float L_4 = ___end;
		float L_5 = ___value;
		float L_6 = ___value;
		float L_7 = ___start;
		return ((float)((float)((float)((float)((float)((float)((float)((float)L_4*(float)(0.5f)))*(float)L_5))*(float)L_6))+(float)L_7));
	}

IL_0027:
	{
		float L_8 = ___value;
		___value = ((float)((float)L_8-(float)(1.0f)));
		float L_9 = ___end;
		float L_10 = ___value;
		float L_11 = ___value;
		float L_12 = ___start;
		return ((float)((float)((float)((float)((float)((float)((-L_9))*(float)(0.5f)))*(float)((float)((float)((float)((float)L_10*(float)((float)((float)L_11-(float)(2.0f)))))-(float)(1.0f)))))+(float)L_12));
	}
}
// System.Single iTween::easeInCubic(System.Single,System.Single,System.Single)
extern "C" float iTween_easeInCubic_m268 (iTween_t23 * __this, float ___start, float ___end, float ___value, const MethodInfo* method)
{
	{
		float L_0 = ___end;
		float L_1 = ___start;
		___end = ((float)((float)L_0-(float)L_1));
		float L_2 = ___end;
		float L_3 = ___value;
		float L_4 = ___value;
		float L_5 = ___value;
		float L_6 = ___start;
		return ((float)((float)((float)((float)((float)((float)((float)((float)L_2*(float)L_3))*(float)L_4))*(float)L_5))+(float)L_6));
	}
}
// System.Single iTween::easeOutCubic(System.Single,System.Single,System.Single)
extern "C" float iTween_easeOutCubic_m269 (iTween_t23 * __this, float ___start, float ___end, float ___value, const MethodInfo* method)
{
	{
		float L_0 = ___value;
		___value = ((float)((float)L_0-(float)(1.0f)));
		float L_1 = ___end;
		float L_2 = ___start;
		___end = ((float)((float)L_1-(float)L_2));
		float L_3 = ___end;
		float L_4 = ___value;
		float L_5 = ___value;
		float L_6 = ___value;
		float L_7 = ___start;
		return ((float)((float)((float)((float)L_3*(float)((float)((float)((float)((float)((float)((float)L_4*(float)L_5))*(float)L_6))+(float)(1.0f)))))+(float)L_7));
	}
}
// System.Single iTween::easeInOutCubic(System.Single,System.Single,System.Single)
extern "C" float iTween_easeInOutCubic_m270 (iTween_t23 * __this, float ___start, float ___end, float ___value, const MethodInfo* method)
{
	{
		float L_0 = ___value;
		___value = ((float)((float)L_0/(float)(0.5f)));
		float L_1 = ___end;
		float L_2 = ___start;
		___end = ((float)((float)L_1-(float)L_2));
		float L_3 = ___value;
		if ((!(((float)L_3) < ((float)(1.0f)))))
		{
			goto IL_0029;
		}
	}
	{
		float L_4 = ___end;
		float L_5 = ___value;
		float L_6 = ___value;
		float L_7 = ___value;
		float L_8 = ___start;
		return ((float)((float)((float)((float)((float)((float)((float)((float)((float)((float)L_4*(float)(0.5f)))*(float)L_5))*(float)L_6))*(float)L_7))+(float)L_8));
	}

IL_0029:
	{
		float L_9 = ___value;
		___value = ((float)((float)L_9-(float)(2.0f)));
		float L_10 = ___end;
		float L_11 = ___value;
		float L_12 = ___value;
		float L_13 = ___value;
		float L_14 = ___start;
		return ((float)((float)((float)((float)((float)((float)L_10*(float)(0.5f)))*(float)((float)((float)((float)((float)((float)((float)L_11*(float)L_12))*(float)L_13))+(float)(2.0f)))))+(float)L_14));
	}
}
// System.Single iTween::easeInQuart(System.Single,System.Single,System.Single)
extern "C" float iTween_easeInQuart_m271 (iTween_t23 * __this, float ___start, float ___end, float ___value, const MethodInfo* method)
{
	{
		float L_0 = ___end;
		float L_1 = ___start;
		___end = ((float)((float)L_0-(float)L_1));
		float L_2 = ___end;
		float L_3 = ___value;
		float L_4 = ___value;
		float L_5 = ___value;
		float L_6 = ___value;
		float L_7 = ___start;
		return ((float)((float)((float)((float)((float)((float)((float)((float)((float)((float)L_2*(float)L_3))*(float)L_4))*(float)L_5))*(float)L_6))+(float)L_7));
	}
}
// System.Single iTween::easeOutQuart(System.Single,System.Single,System.Single)
extern "C" float iTween_easeOutQuart_m272 (iTween_t23 * __this, float ___start, float ___end, float ___value, const MethodInfo* method)
{
	{
		float L_0 = ___value;
		___value = ((float)((float)L_0-(float)(1.0f)));
		float L_1 = ___end;
		float L_2 = ___start;
		___end = ((float)((float)L_1-(float)L_2));
		float L_3 = ___end;
		float L_4 = ___value;
		float L_5 = ___value;
		float L_6 = ___value;
		float L_7 = ___value;
		float L_8 = ___start;
		return ((float)((float)((float)((float)((-L_3))*(float)((float)((float)((float)((float)((float)((float)((float)((float)L_4*(float)L_5))*(float)L_6))*(float)L_7))-(float)(1.0f)))))+(float)L_8));
	}
}
// System.Single iTween::easeInOutQuart(System.Single,System.Single,System.Single)
extern "C" float iTween_easeInOutQuart_m273 (iTween_t23 * __this, float ___start, float ___end, float ___value, const MethodInfo* method)
{
	{
		float L_0 = ___value;
		___value = ((float)((float)L_0/(float)(0.5f)));
		float L_1 = ___end;
		float L_2 = ___start;
		___end = ((float)((float)L_1-(float)L_2));
		float L_3 = ___value;
		if ((!(((float)L_3) < ((float)(1.0f)))))
		{
			goto IL_002b;
		}
	}
	{
		float L_4 = ___end;
		float L_5 = ___value;
		float L_6 = ___value;
		float L_7 = ___value;
		float L_8 = ___value;
		float L_9 = ___start;
		return ((float)((float)((float)((float)((float)((float)((float)((float)((float)((float)((float)((float)L_4*(float)(0.5f)))*(float)L_5))*(float)L_6))*(float)L_7))*(float)L_8))+(float)L_9));
	}

IL_002b:
	{
		float L_10 = ___value;
		___value = ((float)((float)L_10-(float)(2.0f)));
		float L_11 = ___end;
		float L_12 = ___value;
		float L_13 = ___value;
		float L_14 = ___value;
		float L_15 = ___value;
		float L_16 = ___start;
		return ((float)((float)((float)((float)((float)((float)((-L_11))*(float)(0.5f)))*(float)((float)((float)((float)((float)((float)((float)((float)((float)L_12*(float)L_13))*(float)L_14))*(float)L_15))-(float)(2.0f)))))+(float)L_16));
	}
}
// System.Single iTween::easeInQuint(System.Single,System.Single,System.Single)
extern "C" float iTween_easeInQuint_m274 (iTween_t23 * __this, float ___start, float ___end, float ___value, const MethodInfo* method)
{
	{
		float L_0 = ___end;
		float L_1 = ___start;
		___end = ((float)((float)L_0-(float)L_1));
		float L_2 = ___end;
		float L_3 = ___value;
		float L_4 = ___value;
		float L_5 = ___value;
		float L_6 = ___value;
		float L_7 = ___value;
		float L_8 = ___start;
		return ((float)((float)((float)((float)((float)((float)((float)((float)((float)((float)((float)((float)L_2*(float)L_3))*(float)L_4))*(float)L_5))*(float)L_6))*(float)L_7))+(float)L_8));
	}
}
// System.Single iTween::easeOutQuint(System.Single,System.Single,System.Single)
extern "C" float iTween_easeOutQuint_m275 (iTween_t23 * __this, float ___start, float ___end, float ___value, const MethodInfo* method)
{
	{
		float L_0 = ___value;
		___value = ((float)((float)L_0-(float)(1.0f)));
		float L_1 = ___end;
		float L_2 = ___start;
		___end = ((float)((float)L_1-(float)L_2));
		float L_3 = ___end;
		float L_4 = ___value;
		float L_5 = ___value;
		float L_6 = ___value;
		float L_7 = ___value;
		float L_8 = ___value;
		float L_9 = ___start;
		return ((float)((float)((float)((float)L_3*(float)((float)((float)((float)((float)((float)((float)((float)((float)((float)((float)L_4*(float)L_5))*(float)L_6))*(float)L_7))*(float)L_8))+(float)(1.0f)))))+(float)L_9));
	}
}
// System.Single iTween::easeInOutQuint(System.Single,System.Single,System.Single)
extern "C" float iTween_easeInOutQuint_m276 (iTween_t23 * __this, float ___start, float ___end, float ___value, const MethodInfo* method)
{
	{
		float L_0 = ___value;
		___value = ((float)((float)L_0/(float)(0.5f)));
		float L_1 = ___end;
		float L_2 = ___start;
		___end = ((float)((float)L_1-(float)L_2));
		float L_3 = ___value;
		if ((!(((float)L_3) < ((float)(1.0f)))))
		{
			goto IL_002d;
		}
	}
	{
		float L_4 = ___end;
		float L_5 = ___value;
		float L_6 = ___value;
		float L_7 = ___value;
		float L_8 = ___value;
		float L_9 = ___value;
		float L_10 = ___start;
		return ((float)((float)((float)((float)((float)((float)((float)((float)((float)((float)((float)((float)((float)((float)L_4*(float)(0.5f)))*(float)L_5))*(float)L_6))*(float)L_7))*(float)L_8))*(float)L_9))+(float)L_10));
	}

IL_002d:
	{
		float L_11 = ___value;
		___value = ((float)((float)L_11-(float)(2.0f)));
		float L_12 = ___end;
		float L_13 = ___value;
		float L_14 = ___value;
		float L_15 = ___value;
		float L_16 = ___value;
		float L_17 = ___value;
		float L_18 = ___start;
		return ((float)((float)((float)((float)((float)((float)L_12*(float)(0.5f)))*(float)((float)((float)((float)((float)((float)((float)((float)((float)((float)((float)L_13*(float)L_14))*(float)L_15))*(float)L_16))*(float)L_17))+(float)(2.0f)))))+(float)L_18));
	}
}
// System.Single iTween::easeInSine(System.Single,System.Single,System.Single)
extern TypeInfo* Mathf_t46_il2cpp_TypeInfo_var;
extern "C" float iTween_easeInSine_m277 (iTween_t23 * __this, float ___start, float ___end, float ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t46_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		s_Il2CppMethodIntialized = true;
	}
	{
		float L_0 = ___end;
		float L_1 = ___start;
		___end = ((float)((float)L_0-(float)L_1));
		float L_2 = ___end;
		float L_3 = ___value;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t46_il2cpp_TypeInfo_var);
		float L_4 = cosf(((float)((float)L_3*(float)(1.57079637f))));
		float L_5 = ___end;
		float L_6 = ___start;
		return ((float)((float)((float)((float)((float)((float)((-L_2))*(float)L_4))+(float)L_5))+(float)L_6));
	}
}
// System.Single iTween::easeOutSine(System.Single,System.Single,System.Single)
extern TypeInfo* Mathf_t46_il2cpp_TypeInfo_var;
extern "C" float iTween_easeOutSine_m278 (iTween_t23 * __this, float ___start, float ___end, float ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t46_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		s_Il2CppMethodIntialized = true;
	}
	{
		float L_0 = ___end;
		float L_1 = ___start;
		___end = ((float)((float)L_0-(float)L_1));
		float L_2 = ___end;
		float L_3 = ___value;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t46_il2cpp_TypeInfo_var);
		float L_4 = sinf(((float)((float)L_3*(float)(1.57079637f))));
		float L_5 = ___start;
		return ((float)((float)((float)((float)L_2*(float)L_4))+(float)L_5));
	}
}
// System.Single iTween::easeInOutSine(System.Single,System.Single,System.Single)
extern TypeInfo* Mathf_t46_il2cpp_TypeInfo_var;
extern "C" float iTween_easeInOutSine_m279 (iTween_t23 * __this, float ___start, float ___end, float ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t46_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		s_Il2CppMethodIntialized = true;
	}
	{
		float L_0 = ___end;
		float L_1 = ___start;
		___end = ((float)((float)L_0-(float)L_1));
		float L_2 = ___end;
		float L_3 = ___value;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t46_il2cpp_TypeInfo_var);
		float L_4 = cosf(((float)((float)(3.14159274f)*(float)L_3)));
		float L_5 = ___start;
		return ((float)((float)((float)((float)((float)((float)((-L_2))*(float)(0.5f)))*(float)((float)((float)L_4-(float)(1.0f)))))+(float)L_5));
	}
}
// System.Single iTween::easeInExpo(System.Single,System.Single,System.Single)
extern TypeInfo* Mathf_t46_il2cpp_TypeInfo_var;
extern "C" float iTween_easeInExpo_m280 (iTween_t23 * __this, float ___start, float ___end, float ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t46_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		s_Il2CppMethodIntialized = true;
	}
	{
		float L_0 = ___end;
		float L_1 = ___start;
		___end = ((float)((float)L_0-(float)L_1));
		float L_2 = ___end;
		float L_3 = ___value;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t46_il2cpp_TypeInfo_var);
		float L_4 = powf((2.0f), ((float)((float)(10.0f)*(float)((float)((float)L_3-(float)(1.0f))))));
		float L_5 = ___start;
		return ((float)((float)((float)((float)L_2*(float)L_4))+(float)L_5));
	}
}
// System.Single iTween::easeOutExpo(System.Single,System.Single,System.Single)
extern TypeInfo* Mathf_t46_il2cpp_TypeInfo_var;
extern "C" float iTween_easeOutExpo_m281 (iTween_t23 * __this, float ___start, float ___end, float ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t46_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		s_Il2CppMethodIntialized = true;
	}
	{
		float L_0 = ___end;
		float L_1 = ___start;
		___end = ((float)((float)L_0-(float)L_1));
		float L_2 = ___end;
		float L_3 = ___value;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t46_il2cpp_TypeInfo_var);
		float L_4 = powf((2.0f), ((float)((float)(-10.0f)*(float)L_3)));
		float L_5 = ___start;
		return ((float)((float)((float)((float)L_2*(float)((float)((float)((-L_4))+(float)(1.0f)))))+(float)L_5));
	}
}
// System.Single iTween::easeInOutExpo(System.Single,System.Single,System.Single)
extern TypeInfo* Mathf_t46_il2cpp_TypeInfo_var;
extern "C" float iTween_easeInOutExpo_m282 (iTween_t23 * __this, float ___start, float ___end, float ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t46_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		s_Il2CppMethodIntialized = true;
	}
	{
		float L_0 = ___value;
		___value = ((float)((float)L_0/(float)(0.5f)));
		float L_1 = ___end;
		float L_2 = ___start;
		___end = ((float)((float)L_1-(float)L_2));
		float L_3 = ___value;
		if ((!(((float)L_3) < ((float)(1.0f)))))
		{
			goto IL_003b;
		}
	}
	{
		float L_4 = ___end;
		float L_5 = ___value;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t46_il2cpp_TypeInfo_var);
		float L_6 = powf((2.0f), ((float)((float)(10.0f)*(float)((float)((float)L_5-(float)(1.0f))))));
		float L_7 = ___start;
		return ((float)((float)((float)((float)((float)((float)L_4*(float)(0.5f)))*(float)L_6))+(float)L_7));
	}

IL_003b:
	{
		float L_8 = ___value;
		___value = ((float)((float)L_8-(float)(1.0f)));
		float L_9 = ___end;
		float L_10 = ___value;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t46_il2cpp_TypeInfo_var);
		float L_11 = powf((2.0f), ((float)((float)(-10.0f)*(float)L_10)));
		float L_12 = ___start;
		return ((float)((float)((float)((float)((float)((float)L_9*(float)(0.5f)))*(float)((float)((float)((-L_11))+(float)(2.0f)))))+(float)L_12));
	}
}
// System.Single iTween::easeInCirc(System.Single,System.Single,System.Single)
extern TypeInfo* Mathf_t46_il2cpp_TypeInfo_var;
extern "C" float iTween_easeInCirc_m283 (iTween_t23 * __this, float ___start, float ___end, float ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t46_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		s_Il2CppMethodIntialized = true;
	}
	{
		float L_0 = ___end;
		float L_1 = ___start;
		___end = ((float)((float)L_0-(float)L_1));
		float L_2 = ___end;
		float L_3 = ___value;
		float L_4 = ___value;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t46_il2cpp_TypeInfo_var);
		float L_5 = sqrtf(((float)((float)(1.0f)-(float)((float)((float)L_3*(float)L_4)))));
		float L_6 = ___start;
		return ((float)((float)((float)((float)((-L_2))*(float)((float)((float)L_5-(float)(1.0f)))))+(float)L_6));
	}
}
// System.Single iTween::easeOutCirc(System.Single,System.Single,System.Single)
extern TypeInfo* Mathf_t46_il2cpp_TypeInfo_var;
extern "C" float iTween_easeOutCirc_m284 (iTween_t23 * __this, float ___start, float ___end, float ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t46_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		s_Il2CppMethodIntialized = true;
	}
	{
		float L_0 = ___value;
		___value = ((float)((float)L_0-(float)(1.0f)));
		float L_1 = ___end;
		float L_2 = ___start;
		___end = ((float)((float)L_1-(float)L_2));
		float L_3 = ___end;
		float L_4 = ___value;
		float L_5 = ___value;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t46_il2cpp_TypeInfo_var);
		float L_6 = sqrtf(((float)((float)(1.0f)-(float)((float)((float)L_4*(float)L_5)))));
		float L_7 = ___start;
		return ((float)((float)((float)((float)L_3*(float)L_6))+(float)L_7));
	}
}
// System.Single iTween::easeInOutCirc(System.Single,System.Single,System.Single)
extern TypeInfo* Mathf_t46_il2cpp_TypeInfo_var;
extern "C" float iTween_easeInOutCirc_m285 (iTween_t23 * __this, float ___start, float ___end, float ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t46_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		s_Il2CppMethodIntialized = true;
	}
	{
		float L_0 = ___value;
		___value = ((float)((float)L_0/(float)(0.5f)));
		float L_1 = ___end;
		float L_2 = ___start;
		___end = ((float)((float)L_1-(float)L_2));
		float L_3 = ___value;
		if ((!(((float)L_3) < ((float)(1.0f)))))
		{
			goto IL_0039;
		}
	}
	{
		float L_4 = ___end;
		float L_5 = ___value;
		float L_6 = ___value;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t46_il2cpp_TypeInfo_var);
		float L_7 = sqrtf(((float)((float)(1.0f)-(float)((float)((float)L_5*(float)L_6)))));
		float L_8 = ___start;
		return ((float)((float)((float)((float)((float)((float)((-L_4))*(float)(0.5f)))*(float)((float)((float)L_7-(float)(1.0f)))))+(float)L_8));
	}

IL_0039:
	{
		float L_9 = ___value;
		___value = ((float)((float)L_9-(float)(2.0f)));
		float L_10 = ___end;
		float L_11 = ___value;
		float L_12 = ___value;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t46_il2cpp_TypeInfo_var);
		float L_13 = sqrtf(((float)((float)(1.0f)-(float)((float)((float)L_11*(float)L_12)))));
		float L_14 = ___start;
		return ((float)((float)((float)((float)((float)((float)L_10*(float)(0.5f)))*(float)((float)((float)L_13+(float)(1.0f)))))+(float)L_14));
	}
}
// System.Single iTween::easeInBounce(System.Single,System.Single,System.Single)
extern "C" float iTween_easeInBounce_m286 (iTween_t23 * __this, float ___start, float ___end, float ___value, const MethodInfo* method)
{
	float V_0 = 0.0f;
	{
		float L_0 = ___end;
		float L_1 = ___start;
		___end = ((float)((float)L_0-(float)L_1));
		V_0 = (1.0f);
		float L_2 = ___end;
		float L_3 = ___end;
		float L_4 = V_0;
		float L_5 = ___value;
		float L_6 = iTween_easeOutBounce_m287(__this, (0.0f), L_3, ((float)((float)L_4-(float)L_5)), /*hidden argument*/NULL);
		float L_7 = ___start;
		return ((float)((float)((float)((float)L_2-(float)L_6))+(float)L_7));
	}
}
// System.Single iTween::easeOutBounce(System.Single,System.Single,System.Single)
extern "C" float iTween_easeOutBounce_m287 (iTween_t23 * __this, float ___start, float ___end, float ___value, const MethodInfo* method)
{
	{
		float L_0 = ___value;
		___value = ((float)((float)L_0/(float)(1.0f)));
		float L_1 = ___end;
		float L_2 = ___start;
		___end = ((float)((float)L_1-(float)L_2));
		float L_3 = ___value;
		if ((!(((float)L_3) < ((float)(0.363636374f)))))
		{
			goto IL_0027;
		}
	}
	{
		float L_4 = ___end;
		float L_5 = ___value;
		float L_6 = ___value;
		float L_7 = ___start;
		return ((float)((float)((float)((float)L_4*(float)((float)((float)((float)((float)(7.5625f)*(float)L_5))*(float)L_6))))+(float)L_7));
	}

IL_0027:
	{
		float L_8 = ___value;
		if ((!(((float)L_8) < ((float)(0.727272749f)))))
		{
			goto IL_004f;
		}
	}
	{
		float L_9 = ___value;
		___value = ((float)((float)L_9-(float)(0.545454562f)));
		float L_10 = ___end;
		float L_11 = ___value;
		float L_12 = ___value;
		float L_13 = ___start;
		return ((float)((float)((float)((float)L_10*(float)((float)((float)((float)((float)((float)((float)(7.5625f)*(float)L_11))*(float)L_12))+(float)(0.75f)))))+(float)L_13));
	}

IL_004f:
	{
		float L_14 = ___value;
		if ((!(((double)(((double)((double)L_14)))) < ((double)(0.90909090909090906)))))
		{
			goto IL_007c;
		}
	}
	{
		float L_15 = ___value;
		___value = ((float)((float)L_15-(float)(0.8181818f)));
		float L_16 = ___end;
		float L_17 = ___value;
		float L_18 = ___value;
		float L_19 = ___start;
		return ((float)((float)((float)((float)L_16*(float)((float)((float)((float)((float)((float)((float)(7.5625f)*(float)L_17))*(float)L_18))+(float)(0.9375f)))))+(float)L_19));
	}

IL_007c:
	{
		float L_20 = ___value;
		___value = ((float)((float)L_20-(float)(0.954545438f)));
		float L_21 = ___end;
		float L_22 = ___value;
		float L_23 = ___value;
		float L_24 = ___start;
		return ((float)((float)((float)((float)L_21*(float)((float)((float)((float)((float)((float)((float)(7.5625f)*(float)L_22))*(float)L_23))+(float)(0.984375f)))))+(float)L_24));
	}
}
// System.Single iTween::easeInOutBounce(System.Single,System.Single,System.Single)
extern "C" float iTween_easeInOutBounce_m288 (iTween_t23 * __this, float ___start, float ___end, float ___value, const MethodInfo* method)
{
	float V_0 = 0.0f;
	{
		float L_0 = ___end;
		float L_1 = ___start;
		___end = ((float)((float)L_0-(float)L_1));
		V_0 = (1.0f);
		float L_2 = ___value;
		float L_3 = V_0;
		if ((!(((float)L_2) < ((float)((float)((float)L_3*(float)(0.5f)))))))
		{
			goto IL_0034;
		}
	}
	{
		float L_4 = ___end;
		float L_5 = ___value;
		float L_6 = iTween_easeInBounce_m286(__this, (0.0f), L_4, ((float)((float)L_5*(float)(2.0f))), /*hidden argument*/NULL);
		float L_7 = ___start;
		return ((float)((float)((float)((float)L_6*(float)(0.5f)))+(float)L_7));
	}

IL_0034:
	{
		float L_8 = ___end;
		float L_9 = ___value;
		float L_10 = V_0;
		float L_11 = iTween_easeOutBounce_m287(__this, (0.0f), L_8, ((float)((float)((float)((float)L_9*(float)(2.0f)))-(float)L_10)), /*hidden argument*/NULL);
		float L_12 = ___end;
		float L_13 = ___start;
		return ((float)((float)((float)((float)((float)((float)L_11*(float)(0.5f)))+(float)((float)((float)L_12*(float)(0.5f)))))+(float)L_13));
	}
}
// System.Single iTween::easeInBack(System.Single,System.Single,System.Single)
extern "C" float iTween_easeInBack_m289 (iTween_t23 * __this, float ___start, float ___end, float ___value, const MethodInfo* method)
{
	float V_0 = 0.0f;
	{
		float L_0 = ___end;
		float L_1 = ___start;
		___end = ((float)((float)L_0-(float)L_1));
		float L_2 = ___value;
		___value = ((float)((float)L_2/(float)(1.0f)));
		V_0 = (1.70158f);
		float L_3 = ___end;
		float L_4 = ___value;
		float L_5 = ___value;
		float L_6 = V_0;
		float L_7 = ___value;
		float L_8 = V_0;
		float L_9 = ___start;
		return ((float)((float)((float)((float)((float)((float)((float)((float)L_3*(float)L_4))*(float)L_5))*(float)((float)((float)((float)((float)((float)((float)L_6+(float)(1.0f)))*(float)L_7))-(float)L_8))))+(float)L_9));
	}
}
// System.Single iTween::easeOutBack(System.Single,System.Single,System.Single)
extern "C" float iTween_easeOutBack_m290 (iTween_t23 * __this, float ___start, float ___end, float ___value, const MethodInfo* method)
{
	float V_0 = 0.0f;
	{
		V_0 = (1.70158f);
		float L_0 = ___end;
		float L_1 = ___start;
		___end = ((float)((float)L_0-(float)L_1));
		float L_2 = ___value;
		___value = ((float)((float)L_2-(float)(1.0f)));
		float L_3 = ___end;
		float L_4 = ___value;
		float L_5 = ___value;
		float L_6 = V_0;
		float L_7 = ___value;
		float L_8 = V_0;
		float L_9 = ___start;
		return ((float)((float)((float)((float)L_3*(float)((float)((float)((float)((float)((float)((float)L_4*(float)L_5))*(float)((float)((float)((float)((float)((float)((float)L_6+(float)(1.0f)))*(float)L_7))+(float)L_8))))+(float)(1.0f)))))+(float)L_9));
	}
}
// System.Single iTween::easeInOutBack(System.Single,System.Single,System.Single)
extern "C" float iTween_easeInOutBack_m291 (iTween_t23 * __this, float ___start, float ___end, float ___value, const MethodInfo* method)
{
	float V_0 = 0.0f;
	{
		V_0 = (1.70158f);
		float L_0 = ___end;
		float L_1 = ___start;
		___end = ((float)((float)L_0-(float)L_1));
		float L_2 = ___value;
		___value = ((float)((float)L_2/(float)(0.5f)));
		float L_3 = ___value;
		if ((!(((float)L_3) < ((float)(1.0f)))))
		{
			goto IL_0041;
		}
	}
	{
		float L_4 = V_0;
		V_0 = ((float)((float)L_4*(float)(1.525f)));
		float L_5 = ___end;
		float L_6 = ___value;
		float L_7 = ___value;
		float L_8 = V_0;
		float L_9 = ___value;
		float L_10 = V_0;
		float L_11 = ___start;
		return ((float)((float)((float)((float)((float)((float)L_5*(float)(0.5f)))*(float)((float)((float)((float)((float)L_6*(float)L_7))*(float)((float)((float)((float)((float)((float)((float)L_8+(float)(1.0f)))*(float)L_9))-(float)L_10))))))+(float)L_11));
	}

IL_0041:
	{
		float L_12 = ___value;
		___value = ((float)((float)L_12-(float)(2.0f)));
		float L_13 = V_0;
		V_0 = ((float)((float)L_13*(float)(1.525f)));
		float L_14 = ___end;
		float L_15 = ___value;
		float L_16 = ___value;
		float L_17 = V_0;
		float L_18 = ___value;
		float L_19 = V_0;
		float L_20 = ___start;
		return ((float)((float)((float)((float)((float)((float)L_14*(float)(0.5f)))*(float)((float)((float)((float)((float)((float)((float)L_15*(float)L_16))*(float)((float)((float)((float)((float)((float)((float)L_17+(float)(1.0f)))*(float)L_18))+(float)L_19))))+(float)(2.0f)))))+(float)L_20));
	}
}
// System.Single iTween::punch(System.Single,System.Single)
extern TypeInfo* Mathf_t46_il2cpp_TypeInfo_var;
extern "C" float iTween_punch_m292 (iTween_t23 * __this, float ___amplitude, float ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t46_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		V_0 = (9.0f);
		float L_0 = ___value;
		if ((!(((float)L_0) == ((float)(0.0f)))))
		{
			goto IL_0017;
		}
	}
	{
		return (0.0f);
	}

IL_0017:
	{
		float L_1 = ___value;
		if ((!(((float)L_1) == ((float)(1.0f)))))
		{
			goto IL_0028;
		}
	}
	{
		return (0.0f);
	}

IL_0028:
	{
		V_1 = (0.3f);
		float L_2 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t46_il2cpp_TypeInfo_var);
		float L_3 = asinf((0.0f));
		V_0 = ((float)((float)((float)((float)L_2/(float)(6.28318548f)))*(float)L_3));
		float L_4 = ___amplitude;
		float L_5 = ___value;
		float L_6 = powf((2.0f), ((float)((float)(-10.0f)*(float)L_5)));
		float L_7 = ___value;
		float L_8 = V_0;
		float L_9 = V_1;
		float L_10 = sinf(((float)((float)((float)((float)((float)((float)((float)((float)L_7*(float)(1.0f)))-(float)L_8))*(float)(6.28318548f)))/(float)L_9)));
		return ((float)((float)((float)((float)L_4*(float)L_6))*(float)L_10));
	}
}
// System.Single iTween::easeInElastic(System.Single,System.Single,System.Single)
extern TypeInfo* Mathf_t46_il2cpp_TypeInfo_var;
extern "C" float iTween_easeInElastic_m293 (iTween_t23 * __this, float ___start, float ___end, float ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t46_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		float L_0 = ___end;
		float L_1 = ___start;
		___end = ((float)((float)L_0-(float)L_1));
		V_0 = (1.0f);
		float L_2 = V_0;
		V_1 = ((float)((float)L_2*(float)(0.3f)));
		V_2 = (0.0f);
		V_3 = (0.0f);
		float L_3 = ___value;
		if ((!(((float)L_3) == ((float)(0.0f)))))
		{
			goto IL_002c;
		}
	}
	{
		float L_4 = ___start;
		return L_4;
	}

IL_002c:
	{
		float L_5 = ___value;
		float L_6 = V_0;
		float L_7 = ((float)((float)L_5/(float)L_6));
		___value = L_7;
		if ((!(((float)L_7) == ((float)(1.0f)))))
		{
			goto IL_0040;
		}
	}
	{
		float L_8 = ___start;
		float L_9 = ___end;
		return ((float)((float)L_8+(float)L_9));
	}

IL_0040:
	{
		float L_10 = V_3;
		if ((((float)L_10) == ((float)(0.0f))))
		{
			goto IL_0057;
		}
	}
	{
		float L_11 = V_3;
		float L_12 = ___end;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t46_il2cpp_TypeInfo_var);
		float L_13 = fabsf(L_12);
		if ((!(((float)L_11) < ((float)L_13))))
		{
			goto IL_0066;
		}
	}

IL_0057:
	{
		float L_14 = ___end;
		V_3 = L_14;
		float L_15 = V_1;
		V_2 = ((float)((float)L_15/(float)(4.0f)));
		goto IL_0077;
	}

IL_0066:
	{
		float L_16 = V_1;
		float L_17 = ___end;
		float L_18 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t46_il2cpp_TypeInfo_var);
		float L_19 = asinf(((float)((float)L_17/(float)L_18)));
		V_2 = ((float)((float)((float)((float)L_16/(float)(6.28318548f)))*(float)L_19));
	}

IL_0077:
	{
		float L_20 = V_3;
		float L_21 = ___value;
		float L_22 = ((float)((float)L_21-(float)(1.0f)));
		___value = L_22;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t46_il2cpp_TypeInfo_var);
		float L_23 = powf((2.0f), ((float)((float)(10.0f)*(float)L_22)));
		float L_24 = ___value;
		float L_25 = V_0;
		float L_26 = V_2;
		float L_27 = V_1;
		float L_28 = sinf(((float)((float)((float)((float)((float)((float)((float)((float)L_24*(float)L_25))-(float)L_26))*(float)(6.28318548f)))/(float)L_27)));
		float L_29 = ___start;
		return ((float)((float)((-((float)((float)((float)((float)L_20*(float)L_23))*(float)L_28))))+(float)L_29));
	}
}
// System.Single iTween::easeOutElastic(System.Single,System.Single,System.Single)
extern TypeInfo* Mathf_t46_il2cpp_TypeInfo_var;
extern "C" float iTween_easeOutElastic_m294 (iTween_t23 * __this, float ___start, float ___end, float ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t46_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		float L_0 = ___end;
		float L_1 = ___start;
		___end = ((float)((float)L_0-(float)L_1));
		V_0 = (1.0f);
		float L_2 = V_0;
		V_1 = ((float)((float)L_2*(float)(0.3f)));
		V_2 = (0.0f);
		V_3 = (0.0f);
		float L_3 = ___value;
		if ((!(((float)L_3) == ((float)(0.0f)))))
		{
			goto IL_002c;
		}
	}
	{
		float L_4 = ___start;
		return L_4;
	}

IL_002c:
	{
		float L_5 = ___value;
		float L_6 = V_0;
		float L_7 = ((float)((float)L_5/(float)L_6));
		___value = L_7;
		if ((!(((float)L_7) == ((float)(1.0f)))))
		{
			goto IL_0040;
		}
	}
	{
		float L_8 = ___start;
		float L_9 = ___end;
		return ((float)((float)L_8+(float)L_9));
	}

IL_0040:
	{
		float L_10 = V_3;
		if ((((float)L_10) == ((float)(0.0f))))
		{
			goto IL_0057;
		}
	}
	{
		float L_11 = V_3;
		float L_12 = ___end;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t46_il2cpp_TypeInfo_var);
		float L_13 = fabsf(L_12);
		if ((!(((float)L_11) < ((float)L_13))))
		{
			goto IL_0066;
		}
	}

IL_0057:
	{
		float L_14 = ___end;
		V_3 = L_14;
		float L_15 = V_1;
		V_2 = ((float)((float)L_15*(float)(0.25f)));
		goto IL_0077;
	}

IL_0066:
	{
		float L_16 = V_1;
		float L_17 = ___end;
		float L_18 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t46_il2cpp_TypeInfo_var);
		float L_19 = asinf(((float)((float)L_17/(float)L_18)));
		V_2 = ((float)((float)((float)((float)L_16/(float)(6.28318548f)))*(float)L_19));
	}

IL_0077:
	{
		float L_20 = V_3;
		float L_21 = ___value;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t46_il2cpp_TypeInfo_var);
		float L_22 = powf((2.0f), ((float)((float)(-10.0f)*(float)L_21)));
		float L_23 = ___value;
		float L_24 = V_0;
		float L_25 = V_2;
		float L_26 = V_1;
		float L_27 = sinf(((float)((float)((float)((float)((float)((float)((float)((float)L_23*(float)L_24))-(float)L_25))*(float)(6.28318548f)))/(float)L_26)));
		float L_28 = ___end;
		float L_29 = ___start;
		return ((float)((float)((float)((float)((float)((float)((float)((float)L_20*(float)L_22))*(float)L_27))+(float)L_28))+(float)L_29));
	}
}
// System.Single iTween::easeInOutElastic(System.Single,System.Single,System.Single)
extern TypeInfo* Mathf_t46_il2cpp_TypeInfo_var;
extern "C" float iTween_easeInOutElastic_m295 (iTween_t23 * __this, float ___start, float ___end, float ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t46_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		float L_0 = ___end;
		float L_1 = ___start;
		___end = ((float)((float)L_0-(float)L_1));
		V_0 = (1.0f);
		float L_2 = V_0;
		V_1 = ((float)((float)L_2*(float)(0.3f)));
		V_2 = (0.0f);
		V_3 = (0.0f);
		float L_3 = ___value;
		if ((!(((float)L_3) == ((float)(0.0f)))))
		{
			goto IL_002c;
		}
	}
	{
		float L_4 = ___start;
		return L_4;
	}

IL_002c:
	{
		float L_5 = ___value;
		float L_6 = V_0;
		float L_7 = ((float)((float)L_5/(float)((float)((float)L_6*(float)(0.5f)))));
		___value = L_7;
		if ((!(((float)L_7) == ((float)(2.0f)))))
		{
			goto IL_0046;
		}
	}
	{
		float L_8 = ___start;
		float L_9 = ___end;
		return ((float)((float)L_8+(float)L_9));
	}

IL_0046:
	{
		float L_10 = V_3;
		if ((((float)L_10) == ((float)(0.0f))))
		{
			goto IL_005d;
		}
	}
	{
		float L_11 = V_3;
		float L_12 = ___end;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t46_il2cpp_TypeInfo_var);
		float L_13 = fabsf(L_12);
		if ((!(((float)L_11) < ((float)L_13))))
		{
			goto IL_006c;
		}
	}

IL_005d:
	{
		float L_14 = ___end;
		V_3 = L_14;
		float L_15 = V_1;
		V_2 = ((float)((float)L_15/(float)(4.0f)));
		goto IL_007d;
	}

IL_006c:
	{
		float L_16 = V_1;
		float L_17 = ___end;
		float L_18 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t46_il2cpp_TypeInfo_var);
		float L_19 = asinf(((float)((float)L_17/(float)L_18)));
		V_2 = ((float)((float)((float)((float)L_16/(float)(6.28318548f)))*(float)L_19));
	}

IL_007d:
	{
		float L_20 = ___value;
		if ((!(((float)L_20) < ((float)(1.0f)))))
		{
			goto IL_00c0;
		}
	}
	{
		float L_21 = V_3;
		float L_22 = ___value;
		float L_23 = ((float)((float)L_22-(float)(1.0f)));
		___value = L_23;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t46_il2cpp_TypeInfo_var);
		float L_24 = powf((2.0f), ((float)((float)(10.0f)*(float)L_23)));
		float L_25 = ___value;
		float L_26 = V_0;
		float L_27 = V_2;
		float L_28 = V_1;
		float L_29 = sinf(((float)((float)((float)((float)((float)((float)((float)((float)L_25*(float)L_26))-(float)L_27))*(float)(6.28318548f)))/(float)L_28)));
		float L_30 = ___start;
		return ((float)((float)((float)((float)(-0.5f)*(float)((float)((float)((float)((float)L_21*(float)L_24))*(float)L_29))))+(float)L_30));
	}

IL_00c0:
	{
		float L_31 = V_3;
		float L_32 = ___value;
		float L_33 = ((float)((float)L_32-(float)(1.0f)));
		___value = L_33;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t46_il2cpp_TypeInfo_var);
		float L_34 = powf((2.0f), ((float)((float)(-10.0f)*(float)L_33)));
		float L_35 = ___value;
		float L_36 = V_0;
		float L_37 = V_2;
		float L_38 = V_1;
		float L_39 = sinf(((float)((float)((float)((float)((float)((float)((float)((float)L_35*(float)L_36))-(float)L_37))*(float)(6.28318548f)))/(float)L_38)));
		float L_40 = ___end;
		float L_41 = ___start;
		return ((float)((float)((float)((float)((float)((float)((float)((float)((float)((float)L_31*(float)L_34))*(float)L_39))*(float)(0.5f)))+(float)L_40))+(float)L_41));
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
