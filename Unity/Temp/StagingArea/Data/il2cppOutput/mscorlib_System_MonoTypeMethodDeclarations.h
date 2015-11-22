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

// System.Type
struct Type_t;
// System.MonoType
struct MonoType_t;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t896;
// System.Reflection.Binder
struct Binder_t265;
// System.Type[]
struct TypeU5BU5D_t249;
// System.Reflection.ParameterModifier[]
struct ParameterModifierU5BU5D_t266;
// System.Reflection.ConstructorInfo[]
struct ConstructorInfoU5BU5D_t1374;
// System.Reflection.EventInfo
struct EventInfo_t;
// System.String
struct String_t;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// System.Reflection.FieldInfo[]
struct FieldInfoU5BU5D_t1375;
// System.Reflection.MethodInfo[]
struct MethodInfoU5BU5D_t309;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Reflection.PropertyInfo[]
struct PropertyInfoU5BU5D_t1377;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// System.Object
struct Object_t;
// System.Object[]
struct ObjectU5BU5D_t230;
// System.Globalization.CultureInfo
struct CultureInfo_t267;
// System.String[]
struct StringU5BU5D_t238;
// System.Reflection.Assembly
struct Assembly_t510;
// System.Reflection.Module
struct Module_t901;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t323;
// System.Reflection.MethodBase
struct MethodBase_t271;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Reflection_TypeAttributes.h"
#include "mscorlib_System_Reflection_BindingFlags.h"
#include "mscorlib_System_Reflection_CallingConventions.h"
#include "mscorlib_System_Reflection_MemberTypes.h"
#include "mscorlib_System_RuntimeTypeHandle.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Reflection.TypeAttributes System.MonoType::get_attributes(System.Type)
extern "C" int32_t MonoType_get_attributes_m8123 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo System.MonoType::GetDefaultConstructor()
extern "C" ConstructorInfo_t896 * MonoType_GetDefaultConstructor_m8124 (MonoType_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.TypeAttributes System.MonoType::GetAttributeFlagsImpl()
extern "C" int32_t MonoType_GetAttributeFlagsImpl_m8125 (MonoType_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo System.MonoType::GetConstructorImpl(System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
extern "C" ConstructorInfo_t896 * MonoType_GetConstructorImpl_m8126 (MonoType_t * __this, int32_t ___bindingAttr, Binder_t265 * ___binder, int32_t ___callConvention, TypeU5BU5D_t249* ___types, ParameterModifierU5BU5D_t266* ___modifiers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo[] System.MonoType::GetConstructors_internal(System.Reflection.BindingFlags,System.Type)
extern "C" ConstructorInfoU5BU5D_t1374* MonoType_GetConstructors_internal_m8127 (MonoType_t * __this, int32_t ___bindingAttr, Type_t * ___reflected_type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo[] System.MonoType::GetConstructors(System.Reflection.BindingFlags)
extern "C" ConstructorInfoU5BU5D_t1374* MonoType_GetConstructors_m8128 (MonoType_t * __this, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.EventInfo System.MonoType::InternalGetEvent(System.String,System.Reflection.BindingFlags)
extern "C" EventInfo_t * MonoType_InternalGetEvent_m8129 (MonoType_t * __this, String_t* ___name, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.EventInfo System.MonoType::GetEvent(System.String,System.Reflection.BindingFlags)
extern "C" EventInfo_t * MonoType_GetEvent_m8130 (MonoType_t * __this, String_t* ___name, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.FieldInfo System.MonoType::GetField(System.String,System.Reflection.BindingFlags)
extern "C" FieldInfo_t * MonoType_GetField_m8131 (MonoType_t * __this, String_t* ___name, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.FieldInfo[] System.MonoType::GetFields_internal(System.Reflection.BindingFlags,System.Type)
extern "C" FieldInfoU5BU5D_t1375* MonoType_GetFields_internal_m8132 (MonoType_t * __this, int32_t ___bindingAttr, Type_t * ___reflected_type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.FieldInfo[] System.MonoType::GetFields(System.Reflection.BindingFlags)
extern "C" FieldInfoU5BU5D_t1375* MonoType_GetFields_m8133 (MonoType_t * __this, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.MonoType::GetInterfaces()
extern "C" TypeU5BU5D_t249* MonoType_GetInterfaces_m8134 (MonoType_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo[] System.MonoType::GetMethodsByName(System.String,System.Reflection.BindingFlags,System.Boolean,System.Type)
extern "C" MethodInfoU5BU5D_t309* MonoType_GetMethodsByName_m8135 (MonoType_t * __this, String_t* ___name, int32_t ___bindingAttr, bool ___ignoreCase, Type_t * ___reflected_type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo[] System.MonoType::GetMethods(System.Reflection.BindingFlags)
extern "C" MethodInfoU5BU5D_t309* MonoType_GetMethods_m8136 (MonoType_t * __this, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.MonoType::GetMethodImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
extern "C" MethodInfo_t * MonoType_GetMethodImpl_m8137 (MonoType_t * __this, String_t* ___name, int32_t ___bindingAttr, Binder_t265 * ___binder, int32_t ___callConvention, TypeU5BU5D_t249* ___types, ParameterModifierU5BU5D_t266* ___modifiers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo[] System.MonoType::GetPropertiesByName(System.String,System.Reflection.BindingFlags,System.Boolean,System.Type)
extern "C" PropertyInfoU5BU5D_t1377* MonoType_GetPropertiesByName_m8138 (MonoType_t * __this, String_t* ___name, int32_t ___bindingAttr, bool ___icase, Type_t * ___reflected_type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo System.MonoType::GetPropertyImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Type,System.Type[],System.Reflection.ParameterModifier[])
extern "C" PropertyInfo_t * MonoType_GetPropertyImpl_m8139 (MonoType_t * __this, String_t* ___name, int32_t ___bindingAttr, Binder_t265 * ___binder, Type_t * ___returnType, TypeU5BU5D_t249* ___types, ParameterModifierU5BU5D_t266* ___modifiers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MonoType::HasElementTypeImpl()
extern "C" bool MonoType_HasElementTypeImpl_m8140 (MonoType_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MonoType::IsArrayImpl()
extern "C" bool MonoType_IsArrayImpl_m8141 (MonoType_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MonoType::IsByRefImpl()
extern "C" bool MonoType_IsByRefImpl_m8142 (MonoType_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MonoType::IsPointerImpl()
extern "C" bool MonoType_IsPointerImpl_m8143 (MonoType_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MonoType::IsPrimitiveImpl()
extern "C" bool MonoType_IsPrimitiveImpl_m8144 (MonoType_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MonoType::IsSubclassOf(System.Type)
extern "C" bool MonoType_IsSubclassOf_m8145 (MonoType_t * __this, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.MonoType::InvokeMember(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object,System.Object[],System.Reflection.ParameterModifier[],System.Globalization.CultureInfo,System.String[])
extern "C" Object_t * MonoType_InvokeMember_m8146 (MonoType_t * __this, String_t* ___name, int32_t ___invokeAttr, Binder_t265 * ___binder, Object_t * ___target, ObjectU5BU5D_t230* ___args, ParameterModifierU5BU5D_t266* ___modifiers, CultureInfo_t267 * ___culture, StringU5BU5D_t238* ___namedParameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.MonoType::GetElementType()
extern "C" Type_t * MonoType_GetElementType_m8147 (MonoType_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.MonoType::get_UnderlyingSystemType()
extern "C" Type_t * MonoType_get_UnderlyingSystemType_m8148 (MonoType_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.MonoType::get_Assembly()
extern "C" Assembly_t510 * MonoType_get_Assembly_m8149 (MonoType_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.MonoType::get_AssemblyQualifiedName()
extern "C" String_t* MonoType_get_AssemblyQualifiedName_m8150 (MonoType_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.MonoType::getFullName(System.Boolean,System.Boolean)
extern "C" String_t* MonoType_getFullName_m8151 (MonoType_t * __this, bool ___full_name, bool ___assembly_qualified, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.MonoType::get_BaseType()
extern "C" Type_t * MonoType_get_BaseType_m8152 (MonoType_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.MonoType::get_FullName()
extern "C" String_t* MonoType_get_FullName_m8153 (MonoType_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MonoType::IsDefined(System.Type,System.Boolean)
extern "C" bool MonoType_IsDefined_m8154 (MonoType_t * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.MonoType::GetCustomAttributes(System.Boolean)
extern "C" ObjectU5BU5D_t230* MonoType_GetCustomAttributes_m8155 (MonoType_t * __this, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.MonoType::GetCustomAttributes(System.Type,System.Boolean)
extern "C" ObjectU5BU5D_t230* MonoType_GetCustomAttributes_m8156 (MonoType_t * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MemberTypes System.MonoType::get_MemberType()
extern "C" int32_t MonoType_get_MemberType_m8157 (MonoType_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.MonoType::get_Name()
extern "C" String_t* MonoType_get_Name_m8158 (MonoType_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.MonoType::get_Namespace()
extern "C" String_t* MonoType_get_Namespace_m8159 (MonoType_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module System.MonoType::get_Module()
extern "C" Module_t901 * MonoType_get_Module_m8160 (MonoType_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.MonoType::get_DeclaringType()
extern "C" Type_t * MonoType_get_DeclaringType_m8161 (MonoType_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.MonoType::get_ReflectedType()
extern "C" Type_t * MonoType_get_ReflectedType_m8162 (MonoType_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.RuntimeTypeHandle System.MonoType::get_TypeHandle()
extern "C" RuntimeTypeHandle_t704  MonoType_get_TypeHandle_m8163 (MonoType_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.MonoType::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void MonoType_GetObjectData_m8164 (MonoType_t * __this, SerializationInfo_t323 * ___info, StreamingContext_t489  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.MonoType::ToString()
extern "C" String_t* MonoType_ToString_m8165 (MonoType_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.MonoType::GetGenericArguments()
extern "C" TypeU5BU5D_t249* MonoType_GetGenericArguments_m8166 (MonoType_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MonoType::get_ContainsGenericParameters()
extern "C" bool MonoType_get_ContainsGenericParameters_m8167 (MonoType_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MonoType::get_IsGenericParameter()
extern "C" bool MonoType_get_IsGenericParameter_m8168 (MonoType_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.MonoType::GetGenericTypeDefinition()
extern "C" Type_t * MonoType_GetGenericTypeDefinition_m8169 (MonoType_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodBase System.MonoType::CheckMethodSecurity(System.Reflection.MethodBase)
extern "C" MethodBase_t271 * MonoType_CheckMethodSecurity_m8170 (MonoType_t * __this, MethodBase_t271 * ___mb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.MonoType::ReorderParamArrayArguments(System.Object[]&,System.Reflection.MethodBase)
extern "C" void MonoType_ReorderParamArrayArguments_m8171 (MonoType_t * __this, ObjectU5BU5D_t230** ___args, MethodBase_t271 * ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
