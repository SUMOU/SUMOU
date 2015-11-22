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

// UnityScript.Lang.Array
struct Array_t20;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.Array
struct Array_t;
// System.String
struct String_t;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array.h"
#include "UnityScript_Lang_U3CModuleU3E.h"
#include "UnityScript_Lang_U3CModuleU3EMethodDeclarations.h"
#include "UnityScript_Lang_UnityScript_Lang_Array.h"
#include "UnityScript_Lang_UnityScript_Lang_ArrayMethodDeclarations.h"
#include "mscorlib_System_Void.h"
#include "mscorlib_System_Collections_CollectionBaseMethodDeclarations.h"
#include "mscorlib_System_Object.h"
#include "mscorlib_System_Type.h"
#include "mscorlib_System_TypeMethodDeclarations.h"
#include "mscorlib_System_Boolean.h"
#include "mscorlib_System_Collections_ArrayList.h"
#include "mscorlib_System_Collections_ArrayListMethodDeclarations.h"
#include "mscorlib_System_String.h"
#include "Boo_Lang_Boo_Lang_BuiltinsMethodDeclarations.h"
#include "mscorlib_System_Int32.h"
#include "mscorlib_System_ArgumentOutOfRangeExceptionMethodDeclarations.h"
#include "mscorlib_System_Collections_CollectionBase.h"
#include "mscorlib_System_ArgumentOutOfRangeException.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityScript.Lang.Array::.ctor()
extern "C" void Array__ctor_m106 (Array_t20 * __this, const MethodInfo* method)
{
	{
		CollectionBase__ctor_m1142(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object UnityScript.Lang.Array::Coerce(System.Type)
extern "C" Object_t * Array_Coerce_m1136 (Array_t20 * __this, Type_t * ___toType, const MethodInfo* method)
{
	Array_t * G_B3_0 = {0};
	{
		Type_t * L_0 = ___toType;
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(21 /* System.Boolean System.Type::get_IsArray() */, L_0);
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		Type_t * L_2 = ___toType;
		Type_t * L_3 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(42 /* System.Type System.Type::GetElementType() */, L_2);
		Array_t * L_4 = Array_ToBuiltin_m1137(__this, L_3, /*hidden argument*/NULL);
		G_B3_0 = L_4;
		goto IL_001d;
	}

IL_001c:
	{
		G_B3_0 = ((Array_t *)(__this));
	}

IL_001d:
	{
		return G_B3_0;
	}
}
// System.Array UnityScript.Lang.Array::ToBuiltin(System.Type)
extern "C" Array_t * Array_ToBuiltin_m1137 (Array_t20 * __this, Type_t * ___type, const MethodInfo* method)
{
	{
		ArrayList_t277 * L_0 = CollectionBase_get_InnerList_m1143(__this, /*hidden argument*/NULL);
		Type_t * L_1 = ___type;
		Array_t * L_2 = (Array_t *)VirtFuncInvoker1< Array_t *, Type_t * >::Invoke(44 /* System.Array System.Collections.ArrayList::ToArray(System.Type) */, L_0, L_1);
		return L_2;
	}
}
// System.String UnityScript.Lang.Array::ToString()
extern Il2CppCodeGenString* _stringLiteral217;
extern "C" String_t* Array_ToString_m1138 (Array_t20 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral217 = il2cpp_codegen_string_literal_from_index(217);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = Array_Join_m1139(__this, _stringLiteral217, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.String UnityScript.Lang.Array::Join(System.String)
extern "C" String_t* Array_Join_m1139 (Array_t20 * __this, String_t* ___seperator, const MethodInfo* method)
{
	{
		ArrayList_t277 * L_0 = CollectionBase_get_InnerList_m1143(__this, /*hidden argument*/NULL);
		String_t* L_1 = ___seperator;
		String_t* L_2 = Builtins_join_m1144(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Object UnityScript.Lang.Array::get_Item(System.Int32)
extern "C" Object_t * Array_get_Item_m110 (Array_t20 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		ArrayList_t277 * L_0 = CollectionBase_get_InnerList_m1143(__this, /*hidden argument*/NULL);
		int32_t L_1 = ___index;
		Object_t * L_2 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(18 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_0, L_1);
		return L_2;
	}
}
// System.Void UnityScript.Lang.Array::set_Item(System.Int32,System.Object)
extern "C" void Array_set_Item_m115 (Array_t20 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		if (((int64_t)L_0 + (int64_t)1 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_0 + (int64_t)1 > (int64_t)kIl2CppInt32Max))
			il2cpp_codegen_raise_exception((Il2CppCodeGenException*)il2cpp_codegen_get_overflow_exception());
		Array_EnsureCapacity_m1141(__this, ((int32_t)((int32_t)L_0+(int32_t)1)), /*hidden argument*/NULL);
		ArrayList_t277 * L_1 = CollectionBase_get_InnerList_m1143(__this, /*hidden argument*/NULL);
		int32_t L_2 = ___index;
		Object_t * L_3 = ___value;
		VirtActionInvoker2< int32_t, Object_t * >::Invoke(19 /* System.Void System.Collections.ArrayList::set_Item(System.Int32,System.Object) */, L_1, L_2, L_3);
		return;
	}
}
// System.Void UnityScript.Lang.Array::OnValidate(System.Object)
extern "C" void Array_OnValidate_m1140 (Array_t20 * __this, Object_t * ___newValue, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void UnityScript.Lang.Array::EnsureCapacity(System.Int32)
extern TypeInfo* ArgumentOutOfRangeException_t278_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral218;
extern "C" void Array_EnsureCapacity_m1141 (Array_t20 * __this, int32_t ___capacity, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t278_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(134);
		_stringLiteral218 = il2cpp_codegen_string_literal_from_index(218);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___capacity;
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 System.Collections.CollectionBase::get_Count() */, __this);
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_0011;
		}
	}
	{
		goto IL_004d;
	}

IL_0011:
	{
		V_1 = 0;
		int32_t L_2 = ___capacity;
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 System.Collections.CollectionBase::get_Count() */, __this);
		if (((int64_t)L_2 - (int64_t)L_3 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_2 - (int64_t)L_3 > (int64_t)kIl2CppInt32Max))
			il2cpp_codegen_raise_exception((Il2CppCodeGenException*)il2cpp_codegen_get_overflow_exception());
		V_2 = ((int32_t)((int32_t)L_2-(int32_t)L_3));
		int32_t L_4 = V_2;
		if ((((int32_t)L_4) >= ((int32_t)0)))
		{
			goto IL_002e;
		}
	}
	{
		ArgumentOutOfRangeException_t278 * L_5 = (ArgumentOutOfRangeException_t278 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t278_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m1145(L_5, _stringLiteral218, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_5);
	}

IL_002e:
	{
		goto IL_0046;
	}

IL_0033:
	{
		int32_t L_6 = V_1;
		V_0 = L_6;
		int32_t L_7 = V_1;
		V_1 = ((int32_t)((int32_t)L_7+(int32_t)1));
		ArrayList_t277 * L_8 = CollectionBase_get_InnerList_m1143(__this, /*hidden argument*/NULL);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(26 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_8, NULL);
	}

IL_0046:
	{
		int32_t L_9 = V_1;
		int32_t L_10 = V_2;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0033;
		}
	}

IL_004d:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
