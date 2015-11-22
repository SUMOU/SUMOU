#include "il2cpp-config.h"

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

// FadeManager/<TransScene>c__Iterator0
struct U3CTransSceneU3Ec__Iterator0_t1;
// System.Object
struct Object_t;
// FadeManager
struct FadeManager_t2;
// System.String
struct String_t;
// System.Collections.IEnumerator
struct IEnumerator_t5;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array.h"
#include "AssemblyU2DCSharp_U3CModuleU3E.h"
#include "AssemblyU2DCSharp_U3CModuleU3EMethodDeclarations.h"
#include "AssemblyU2DCSharp_FadeManager_U3CTransSceneU3Ec__Iterator0.h"
#include "AssemblyU2DCSharp_FadeManager_U3CTransSceneU3Ec__Iterator0MethodDeclarations.h"
#include "mscorlib_System_Void.h"
#include "mscorlib_System_ObjectMethodDeclarations.h"
#include "mscorlib_System_Object.h"
#include "mscorlib_System_Boolean.h"
#include "UnityEngine_UnityEngine_MathfMethodDeclarations.h"
#include "UnityEngine_UnityEngine_TimeMethodDeclarations.h"
#include "UnityEngine_UnityEngine_ApplicationMethodDeclarations.h"
#include "mscorlib_System_UInt32.h"
#include "mscorlib_System_Int32.h"
#include "AssemblyU2DCSharp_FadeManager.h"
#include "mscorlib_System_Single.h"
#include "mscorlib_System_String.h"
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"
#include "mscorlib_System_NotSupportedException.h"
#include "AssemblyU2DCSharp_FadeManagerMethodDeclarations.h"
#include "UnityEngine_UnityEngine_ColorMethodDeclarations.h"
#include "UnityEngine_UnityEngine_MonoBehaviourMethodDeclarations.h"
#include "UnityEngine_UnityEngine_Color.h"
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
#include "mscorlib_System_TypeMethodDeclarations.h"
#include "mscorlib_System_StringMethodDeclarations.h"
#include "UnityEngine_UnityEngine_DebugMethodDeclarations.h"
#include "UnityEngine_UnityEngine_Object.h"
#include "mscorlib_System_Type.h"
#include "mscorlib_System_RuntimeTypeHandle.h"
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
#include "UnityEngine_UnityEngine_GameObject.h"
#include "UnityEngine_UnityEngine_GUIMethodDeclarations.h"
#include "UnityEngine_UnityEngine_ScreenMethodDeclarations.h"
#include "UnityEngine_UnityEngine_RectMethodDeclarations.h"
#include "UnityEngine_UnityEngine_Texture2DMethodDeclarations.h"
#include "mscorlib_System_Collections_Generic_List_1_genMethodDeclarations.h"
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_genMethodDeclarations.h"
#include "mscorlib_System_Collections_Generic_List_1_gen.h"
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen.h"
#include "UnityEngine_UnityEngine_Rect.h"
#include "UnityEngine_UnityEngine_Texture2D.h"
#include "UnityEngine_UnityEngine_Texture.h"
#include "UnityEngine_UnityEngine_Coroutine.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void FadeManager/<TransScene>c__Iterator0::.ctor()
extern "C" void U3CTransSceneU3Ec__Iterator0__ctor_m0 (U3CTransSceneU3Ec__Iterator0_t1 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m12(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object FadeManager/<TransScene>c__Iterator0::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" Object_t * U3CTransSceneU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1 (U3CTransSceneU3Ec__Iterator0_t1 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_4);
		return L_0;
	}
}
// System.Object FadeManager/<TransScene>c__Iterator0::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3CTransSceneU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m2 (U3CTransSceneU3Ec__Iterator0_t1 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_4);
		return L_0;
	}
}
// System.Boolean FadeManager/<TransScene>c__Iterator0::MoveNext()
extern TypeInfo* Mathf_t6_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t7_il2cpp_TypeInfo_var;
extern "C" bool U3CTransSceneU3Ec__Iterator0_MoveNext_m3 (U3CTransSceneU3Ec__Iterator0_t1 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t6_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		Int32_t7_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		s_Il2CppMethodIntialized = true;
	}
	uint32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0 = (__this->___U24PC_3);
		V_0 = L_0;
		__this->___U24PC_3 = (-1);
		uint32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0025;
		}
		if (L_1 == 1)
		{
			goto IL_0092;
		}
		if (L_1 == 2)
		{
			goto IL_010f;
		}
	}
	{
		goto IL_0133;
	}

IL_0025:
	{
		FadeManager_t2 * L_2 = (__this->___U3CU3Ef__this_7);
		L_2->___isFading_5 = 1;
		__this->___U3CtimeU3E__0_0 = (0.0f);
		goto IL_0092;
	}

IL_0041:
	{
		FadeManager_t2 * L_3 = (__this->___U3CU3Ef__this_7);
		float L_4 = (__this->___U3CtimeU3E__0_0);
		float L_5 = (__this->___interval_1);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t6_il2cpp_TypeInfo_var);
		float L_6 = Mathf_Lerp_m13(NULL /*static, unused*/, (0.0f), (1.0f), ((float)((float)L_4/(float)L_5)), /*hidden argument*/NULL);
		L_3->___fadeAlpha_4 = L_6;
		float L_7 = (__this->___U3CtimeU3E__0_0);
		float L_8 = Time_get_deltaTime_m14(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___U3CtimeU3E__0_0 = ((float)((float)L_7+(float)L_8));
		int32_t L_9 = 0;
		Object_t * L_10 = Box(Int32_t7_il2cpp_TypeInfo_var, &L_9);
		__this->___U24current_4 = L_10;
		__this->___U24PC_3 = 1;
		goto IL_0135;
	}

IL_0092:
	{
		float L_11 = (__this->___U3CtimeU3E__0_0);
		float L_12 = (__this->___interval_1);
		if ((((float)L_11) <= ((float)L_12)))
		{
			goto IL_0041;
		}
	}
	{
		String_t* L_13 = (__this->___scene_2);
		Application_LoadLevel_m15(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
		__this->___U3CtimeU3E__0_0 = (0.0f);
		goto IL_010f;
	}

IL_00be:
	{
		FadeManager_t2 * L_14 = (__this->___U3CU3Ef__this_7);
		float L_15 = (__this->___U3CtimeU3E__0_0);
		float L_16 = (__this->___interval_1);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t6_il2cpp_TypeInfo_var);
		float L_17 = Mathf_Lerp_m13(NULL /*static, unused*/, (1.0f), (0.0f), ((float)((float)L_15/(float)L_16)), /*hidden argument*/NULL);
		L_14->___fadeAlpha_4 = L_17;
		float L_18 = (__this->___U3CtimeU3E__0_0);
		float L_19 = Time_get_deltaTime_m14(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___U3CtimeU3E__0_0 = ((float)((float)L_18+(float)L_19));
		int32_t L_20 = 0;
		Object_t * L_21 = Box(Int32_t7_il2cpp_TypeInfo_var, &L_20);
		__this->___U24current_4 = L_21;
		__this->___U24PC_3 = 2;
		goto IL_0135;
	}

IL_010f:
	{
		float L_22 = (__this->___U3CtimeU3E__0_0);
		float L_23 = (__this->___interval_1);
		if ((((float)L_22) <= ((float)L_23)))
		{
			goto IL_00be;
		}
	}
	{
		FadeManager_t2 * L_24 = (__this->___U3CU3Ef__this_7);
		L_24->___isFading_5 = 0;
		__this->___U24PC_3 = (-1);
	}

IL_0133:
	{
		return 0;
	}

IL_0135:
	{
		return 1;
	}
	// Dead block : IL_0137: ldloc.1
}
// System.Void FadeManager/<TransScene>c__Iterator0::Dispose()
extern "C" void U3CTransSceneU3Ec__Iterator0_Dispose_m4 (U3CTransSceneU3Ec__Iterator0_t1 * __this, const MethodInfo* method)
{
	{
		__this->___U24PC_3 = (-1);
		return;
	}
}
// System.Void FadeManager/<TransScene>c__Iterator0::Reset()
extern TypeInfo* NotSupportedException_t8_il2cpp_TypeInfo_var;
extern "C" void U3CTransSceneU3Ec__Iterator0_Reset_m5 (U3CTransSceneU3Ec__Iterator0_t1 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t8_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t8 * L_0 = (NotSupportedException_t8 *)il2cpp_codegen_object_new (NotSupportedException_t8_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m16(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_0);
	}
}
// System.Void FadeManager::.ctor()
extern "C" void FadeManager__ctor_m6 (FadeManager_t2 * __this, const MethodInfo* method)
{
	{
		__this->___DebugMode_3 = 1;
		Color_t4  L_0 = Color_get_black_m17(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___fadeColor_6 = L_0;
		MonoBehaviour__ctor_m18(__this, /*hidden argument*/NULL);
		return;
	}
}
// FadeManager FadeManager::get_Instance()
extern const Il2CppType* FadeManager_t2_0_0_0_var;
extern TypeInfo* FadeManager_t2_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral0;
extern "C" FadeManager_t2 * FadeManager_get_Instance_m7 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FadeManager_t2_0_0_0_var = il2cpp_codegen_type_from_index(4);
		FadeManager_t2_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		_stringLiteral0 = il2cpp_codegen_string_literal_from_index(0);
		s_Il2CppMethodIntialized = true;
	}
	{
		FadeManager_t2 * L_0 = ((FadeManager_t2_StaticFields*)FadeManager_t2_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		bool L_1 = Object_op_Equality_m19(NULL /*static, unused*/, L_0, (Object_t9 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0052;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2 = Type_GetTypeFromHandle_m20(NULL /*static, unused*/, LoadTypeToken(FadeManager_t2_0_0_0_var), /*hidden argument*/NULL);
		Object_t9 * L_3 = Object_FindObjectOfType_m21(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		((FadeManager_t2_StaticFields*)FadeManager_t2_il2cpp_TypeInfo_var->static_fields)->___instance_2 = ((FadeManager_t2 *)CastclassClass(L_3, FadeManager_t2_il2cpp_TypeInfo_var));
		FadeManager_t2 * L_4 = ((FadeManager_t2_StaticFields*)FadeManager_t2_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		bool L_5 = Object_op_Equality_m19(NULL /*static, unused*/, L_4, (Object_t9 *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0052;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_6 = Type_GetTypeFromHandle_m20(NULL /*static, unused*/, LoadTypeToken(FadeManager_t2_0_0_0_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_7 = String_Concat_m22(NULL /*static, unused*/, L_6, _stringLiteral0, /*hidden argument*/NULL);
		Debug_LogError_m23(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
	}

IL_0052:
	{
		FadeManager_t2 * L_8 = ((FadeManager_t2_StaticFields*)FadeManager_t2_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		return L_8;
	}
}
// System.Void FadeManager::Awake()
extern "C" void FadeManager_Awake_m8 (FadeManager_t2 * __this, const MethodInfo* method)
{
	{
		FadeManager_t2 * L_0 = FadeManager_get_Instance_m7(NULL /*static, unused*/, /*hidden argument*/NULL);
		bool L_1 = Object_op_Inequality_m24(NULL /*static, unused*/, __this, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		GameObject_t10 * L_2 = Component_get_gameObject_m25(__this, /*hidden argument*/NULL);
		Object_Destroy_m26(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		return;
	}

IL_001c:
	{
		GameObject_t10 * L_3 = Component_get_gameObject_m25(__this, /*hidden argument*/NULL);
		Object_DontDestroyOnLoad_m27(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void FadeManager::OnGUI()
extern TypeInfo* GUI_t14_il2cpp_TypeInfo_var;
extern TypeInfo* List_1_t11_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Enumerator_t12_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t17_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m34_MethodInfo_var;
extern const MethodInfo* List_1_GetEnumerator_m39_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m40_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m42_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral1;
extern Il2CppCodeGenString* _stringLiteral2;
extern Il2CppCodeGenString* _stringLiteral3;
extern Il2CppCodeGenString* _stringLiteral4;
extern Il2CppCodeGenString* _stringLiteral5;
extern "C" void FadeManager_OnGUI_m9 (FadeManager_t2 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUI_t14_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7);
		List_1_t11_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		Enumerator_t12_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		IDisposable_t17_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(10);
		List_1__ctor_m34_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483649);
		List_1_GetEnumerator_m39_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483650);
		Enumerator_get_Current_m40_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483651);
		Enumerator_MoveNext_m42_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483652);
		_stringLiteral1 = il2cpp_codegen_string_literal_from_index(1);
		_stringLiteral2 = il2cpp_codegen_string_literal_from_index(2);
		_stringLiteral3 = il2cpp_codegen_string_literal_from_index(3);
		_stringLiteral4 = il2cpp_codegen_string_literal_from_index(4);
		_stringLiteral5 = il2cpp_codegen_string_literal_from_index(5);
		s_Il2CppMethodIntialized = true;
	}
	List_1_t11 * V_0 = {0};
	int32_t V_1 = 0;
	String_t* V_2 = {0};
	Enumerator_t12  V_3 = {0};
	Exception_t13 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t13 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		bool L_0 = (__this->___isFading_5);
		if (!L_0)
		{
			goto IL_004c;
		}
	}
	{
		Color_t4 * L_1 = &(__this->___fadeColor_6);
		float L_2 = (__this->___fadeAlpha_4);
		L_1->___a_3 = L_2;
		Color_t4  L_3 = (__this->___fadeColor_6);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t14_il2cpp_TypeInfo_var);
		GUI_set_color_m28(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		int32_t L_4 = Screen_get_width_m29(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_5 = Screen_get_height_m30(NULL /*static, unused*/, /*hidden argument*/NULL);
		Rect_t15  L_6 = {0};
		Rect__ctor_m31(&L_6, (0.0f), (0.0f), (((float)((float)L_4))), (((float)((float)L_5))), /*hidden argument*/NULL);
		Texture2D_t16 * L_7 = Texture2D_get_whiteTexture_m32(NULL /*static, unused*/, /*hidden argument*/NULL);
		GUI_DrawTexture_m33(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/NULL);
	}

IL_004c:
	{
		bool L_8 = (__this->___DebugMode_3);
		if (!L_8)
		{
			goto IL_01ad;
		}
	}
	{
		bool L_9 = (__this->___isFading_5);
		if (L_9)
		{
			goto IL_01ad;
		}
	}
	{
		List_1_t11 * L_10 = (List_1_t11 *)il2cpp_codegen_object_new (List_1_t11_il2cpp_TypeInfo_var);
		List_1__ctor_m34(L_10, /*hidden argument*/List_1__ctor_m34_MethodInfo_var);
		V_0 = L_10;
		List_1_t11 * L_11 = V_0;
		VirtActionInvoker1< String_t* >::Invoke(19 /* System.Void System.Collections.Generic.List`1<System.String>::Add(!0) */, L_11, _stringLiteral1);
		List_1_t11 * L_12 = V_0;
		int32_t L_13 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(17 /* System.Int32 System.Collections.Generic.List`1<System.String>::get_Count() */, L_12);
		if (L_13)
		{
			goto IL_00c5;
		}
	}
	{
		Rect_t15  L_14 = {0};
		Rect__ctor_m31(&L_14, (10.0f), (10.0f), (200.0f), (50.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t14_il2cpp_TypeInfo_var);
		GUI_Box_m35(NULL /*static, unused*/, L_14, _stringLiteral2, /*hidden argument*/NULL);
		Rect_t15  L_15 = {0};
		Rect__ctor_m31(&L_15, (20.0f), (35.0f), (180.0f), (20.0f), /*hidden argument*/NULL);
		GUI_Label_m36(NULL /*static, unused*/, L_15, _stringLiteral3, /*hidden argument*/NULL);
		return;
	}

IL_00c5:
	{
		List_1_t11 * L_16 = V_0;
		int32_t L_17 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(17 /* System.Int32 System.Collections.Generic.List`1<System.String>::get_Count() */, L_16);
		Rect_t15  L_18 = {0};
		Rect__ctor_m31(&L_18, (10.0f), (10.0f), (300.0f), (((float)((float)((int32_t)((int32_t)((int32_t)50)+(int32_t)((int32_t)((int32_t)L_17*(int32_t)((int32_t)25)))))))), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t14_il2cpp_TypeInfo_var);
		GUI_Box_m35(NULL /*static, unused*/, L_18, _stringLiteral2, /*hidden argument*/NULL);
		Rect_t15  L_19 = {0};
		Rect__ctor_m31(&L_19, (20.0f), (30.0f), (280.0f), (20.0f), /*hidden argument*/NULL);
		String_t* L_20 = Application_get_loadedLevelName_m37(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_21 = String_Concat_m38(NULL /*static, unused*/, _stringLiteral4, L_20, /*hidden argument*/NULL);
		GUI_Label_m36(NULL /*static, unused*/, L_19, L_21, /*hidden argument*/NULL);
		V_1 = 0;
		List_1_t11 * L_22 = V_0;
		Enumerator_t12  L_23 = List_1_GetEnumerator_m39(L_22, /*hidden argument*/List_1_GetEnumerator_m39_MethodInfo_var);
		V_3 = L_23;
	}

IL_0126:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0190;
		}

IL_012b:
		{
			String_t* L_24 = Enumerator_get_Current_m40((&V_3), /*hidden argument*/Enumerator_get_Current_m40_MethodInfo_var);
			V_2 = L_24;
			int32_t L_25 = V_1;
			Rect_t15  L_26 = {0};
			Rect__ctor_m31(&L_26, (20.0f), (((float)((float)((int32_t)((int32_t)((int32_t)55)+(int32_t)((int32_t)((int32_t)L_25*(int32_t)((int32_t)25)))))))), (100.0f), (20.0f), /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(GUI_t14_il2cpp_TypeInfo_var);
			bool L_27 = GUI_Button_m41(NULL /*static, unused*/, L_26, _stringLiteral5, /*hidden argument*/NULL);
			if (!L_27)
			{
				goto IL_016a;
			}
		}

IL_015e:
		{
			String_t* L_28 = V_2;
			FadeManager_LoadLevel_m10(__this, L_28, (1.0f), /*hidden argument*/NULL);
		}

IL_016a:
		{
			int32_t L_29 = V_1;
			Rect_t15  L_30 = {0};
			Rect__ctor_m31(&L_30, (125.0f), (((float)((float)((int32_t)((int32_t)((int32_t)55)+(int32_t)((int32_t)((int32_t)L_29*(int32_t)((int32_t)25)))))))), (1000.0f), (20.0f), /*hidden argument*/NULL);
			String_t* L_31 = V_2;
			IL2CPP_RUNTIME_CLASS_INIT(GUI_t14_il2cpp_TypeInfo_var);
			GUI_Label_m36(NULL /*static, unused*/, L_30, L_31, /*hidden argument*/NULL);
			int32_t L_32 = V_1;
			V_1 = ((int32_t)((int32_t)L_32+(int32_t)1));
		}

IL_0190:
		{
			bool L_33 = Enumerator_MoveNext_m42((&V_3), /*hidden argument*/Enumerator_MoveNext_m42_MethodInfo_var);
			if (L_33)
			{
				goto IL_012b;
			}
		}

IL_019c:
		{
			IL2CPP_LEAVE(0x1AD, FINALLY_01a1);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t13 *)e.ex;
		goto FINALLY_01a1;
	}

FINALLY_01a1:
	{ // begin finally (depth: 1)
		Enumerator_t12  L_34 = V_3;
		Enumerator_t12  L_35 = L_34;
		Object_t * L_36 = Box(Enumerator_t12_il2cpp_TypeInfo_var, &L_35);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t17_il2cpp_TypeInfo_var, L_36);
		IL2CPP_END_FINALLY(417)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(417)
	{
		IL2CPP_JUMP_TBL(0x1AD, IL_01ad)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t13 *)
	}

IL_01ad:
	{
		return;
	}
}
// System.Void FadeManager::LoadLevel(System.String,System.Single)
extern "C" void FadeManager_LoadLevel_m10 (FadeManager_t2 * __this, String_t* ___scene, float ___interval, const MethodInfo* method)
{
	{
		String_t* L_0 = ___scene;
		float L_1 = ___interval;
		Object_t * L_2 = FadeManager_TransScene_m11(__this, L_0, L_1, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m43(__this, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IEnumerator FadeManager::TransScene(System.String,System.Single)
extern TypeInfo* U3CTransSceneU3Ec__Iterator0_t1_il2cpp_TypeInfo_var;
extern "C" Object_t * FadeManager_TransScene_m11 (FadeManager_t2 * __this, String_t* ___scene, float ___interval, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CTransSceneU3Ec__Iterator0_t1_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11);
		s_Il2CppMethodIntialized = true;
	}
	U3CTransSceneU3Ec__Iterator0_t1 * V_0 = {0};
	{
		U3CTransSceneU3Ec__Iterator0_t1 * L_0 = (U3CTransSceneU3Ec__Iterator0_t1 *)il2cpp_codegen_object_new (U3CTransSceneU3Ec__Iterator0_t1_il2cpp_TypeInfo_var);
		U3CTransSceneU3Ec__Iterator0__ctor_m0(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CTransSceneU3Ec__Iterator0_t1 * L_1 = V_0;
		float L_2 = ___interval;
		L_1->___interval_1 = L_2;
		U3CTransSceneU3Ec__Iterator0_t1 * L_3 = V_0;
		String_t* L_4 = ___scene;
		L_3->___scene_2 = L_4;
		U3CTransSceneU3Ec__Iterator0_t1 * L_5 = V_0;
		float L_6 = ___interval;
		L_5->___U3CU24U3Einterval_5 = L_6;
		U3CTransSceneU3Ec__Iterator0_t1 * L_7 = V_0;
		String_t* L_8 = ___scene;
		L_7->___U3CU24U3Escene_6 = L_8;
		U3CTransSceneU3Ec__Iterator0_t1 * L_9 = V_0;
		L_9->___U3CU3Ef__this_7 = __this;
		U3CTransSceneU3Ec__Iterator0_t1 * L_10 = V_0;
		return L_10;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
