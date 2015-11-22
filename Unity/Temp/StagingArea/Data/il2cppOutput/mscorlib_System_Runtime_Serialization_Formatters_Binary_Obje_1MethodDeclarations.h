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

// System.Runtime.Serialization.Formatters.Binary.ObjectReader
struct ObjectReader_t1132;
// System.Runtime.Serialization.Formatters.Binary.BinaryFormatter
struct BinaryFormatter_t1112;
// System.IO.BinaryReader
struct BinaryReader_t851;
// System.Object
struct Object_t;
// System.Runtime.Remoting.Messaging.Header[]
struct HeaderU5BU5D_t1342;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t323;
// System.Runtime.Serialization.Formatters.Binary.ObjectReader/TypeMetadata
struct TypeMetadata_t1129;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Int32[]
struct Int32U5BU5D_t419;
// System.Array
struct Array_t;
// System.Type
struct Type_t;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_Formatters_Binary_Bina_0.h"
#include "mscorlib_System_Runtime_Serialization_Formatters_Binary_Type.h"

// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectReader::.ctor(System.Runtime.Serialization.Formatters.Binary.BinaryFormatter)
extern "C" void ObjectReader__ctor_m6698 (ObjectReader_t1132 * __this, BinaryFormatter_t1112 * ___formatter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectReader::ReadObjectGraph(System.IO.BinaryReader,System.Boolean,System.Object&,System.Runtime.Remoting.Messaging.Header[]&)
extern "C" void ObjectReader_ReadObjectGraph_m6699 (ObjectReader_t1132 * __this, BinaryReader_t851 * ___reader, bool ___readHeaders, Object_t ** ___result, HeaderU5BU5D_t1342** ___headers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectReader::ReadObjectGraph(System.Runtime.Serialization.Formatters.Binary.BinaryElement,System.IO.BinaryReader,System.Boolean,System.Object&,System.Runtime.Remoting.Messaging.Header[]&)
extern "C" void ObjectReader_ReadObjectGraph_m6700 (ObjectReader_t1132 * __this, uint8_t ___elem, BinaryReader_t851 * ___reader, bool ___readHeaders, Object_t ** ___result, HeaderU5BU5D_t1342** ___headers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Serialization.Formatters.Binary.ObjectReader::ReadNextObject(System.Runtime.Serialization.Formatters.Binary.BinaryElement,System.IO.BinaryReader)
extern "C" bool ObjectReader_ReadNextObject_m6701 (ObjectReader_t1132 * __this, uint8_t ___element, BinaryReader_t851 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Serialization.Formatters.Binary.ObjectReader::ReadNextObject(System.IO.BinaryReader)
extern "C" bool ObjectReader_ReadNextObject_m6702 (ObjectReader_t1132 * __this, BinaryReader_t851 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Serialization.Formatters.Binary.ObjectReader::get_CurrentObject()
extern "C" Object_t * ObjectReader_get_CurrentObject_m6703 (ObjectReader_t1132 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectReader::ReadObject(System.Runtime.Serialization.Formatters.Binary.BinaryElement,System.IO.BinaryReader,System.Int64&,System.Object&,System.Runtime.Serialization.SerializationInfo&)
extern "C" void ObjectReader_ReadObject_m6704 (ObjectReader_t1132 * __this, uint8_t ___element, BinaryReader_t851 * ___reader, int64_t* ___objectId, Object_t ** ___value, SerializationInfo_t323 ** ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectReader::ReadAssembly(System.IO.BinaryReader)
extern "C" void ObjectReader_ReadAssembly_m6705 (ObjectReader_t1132 * __this, BinaryReader_t851 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectReader::ReadObjectInstance(System.IO.BinaryReader,System.Boolean,System.Boolean,System.Int64&,System.Object&,System.Runtime.Serialization.SerializationInfo&)
extern "C" void ObjectReader_ReadObjectInstance_m6706 (ObjectReader_t1132 * __this, BinaryReader_t851 * ___reader, bool ___isRuntimeObject, bool ___hasTypeInfo, int64_t* ___objectId, Object_t ** ___value, SerializationInfo_t323 ** ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectReader::ReadRefTypeObjectInstance(System.IO.BinaryReader,System.Int64&,System.Object&,System.Runtime.Serialization.SerializationInfo&)
extern "C" void ObjectReader_ReadRefTypeObjectInstance_m6707 (ObjectReader_t1132 * __this, BinaryReader_t851 * ___reader, int64_t* ___objectId, Object_t ** ___value, SerializationInfo_t323 ** ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectReader::ReadObjectContent(System.IO.BinaryReader,System.Runtime.Serialization.Formatters.Binary.ObjectReader/TypeMetadata,System.Int64,System.Object&,System.Runtime.Serialization.SerializationInfo&)
extern "C" void ObjectReader_ReadObjectContent_m6708 (ObjectReader_t1132 * __this, BinaryReader_t851 * ___reader, TypeMetadata_t1129 * ___metadata, int64_t ___objectId, Object_t ** ___objectInstance, SerializationInfo_t323 ** ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectReader::RegisterObject(System.Int64,System.Object,System.Runtime.Serialization.SerializationInfo,System.Int64,System.Reflection.MemberInfo,System.Int32[])
extern "C" void ObjectReader_RegisterObject_m6709 (ObjectReader_t1132 * __this, int64_t ___objectId, Object_t * ___objectInstance, SerializationInfo_t323 * ___info, int64_t ___parentObjectId, MemberInfo_t * ___parentObjectMemeber, Int32U5BU5D_t419* ___indices, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectReader::ReadStringIntance(System.IO.BinaryReader,System.Int64&,System.Object&)
extern "C" void ObjectReader_ReadStringIntance_m6710 (ObjectReader_t1132 * __this, BinaryReader_t851 * ___reader, int64_t* ___objectId, Object_t ** ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectReader::ReadGenericArray(System.IO.BinaryReader,System.Int64&,System.Object&)
extern "C" void ObjectReader_ReadGenericArray_m6711 (ObjectReader_t1132 * __this, BinaryReader_t851 * ___reader, int64_t* ___objectId, Object_t ** ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Serialization.Formatters.Binary.ObjectReader::ReadBoxedPrimitiveTypeValue(System.IO.BinaryReader)
extern "C" Object_t * ObjectReader_ReadBoxedPrimitiveTypeValue_m6712 (ObjectReader_t1132 * __this, BinaryReader_t851 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectReader::ReadArrayOfPrimitiveType(System.IO.BinaryReader,System.Int64&,System.Object&)
extern "C" void ObjectReader_ReadArrayOfPrimitiveType_m6713 (ObjectReader_t1132 * __this, BinaryReader_t851 * ___reader, int64_t* ___objectId, Object_t ** ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectReader::BlockRead(System.IO.BinaryReader,System.Array,System.Int32)
extern "C" void ObjectReader_BlockRead_m6714 (ObjectReader_t1132 * __this, BinaryReader_t851 * ___reader, Array_t * ___array, int32_t ___dataSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectReader::ReadArrayOfObject(System.IO.BinaryReader,System.Int64&,System.Object&)
extern "C" void ObjectReader_ReadArrayOfObject_m6715 (ObjectReader_t1132 * __this, BinaryReader_t851 * ___reader, int64_t* ___objectId, Object_t ** ___array, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectReader::ReadArrayOfString(System.IO.BinaryReader,System.Int64&,System.Object&)
extern "C" void ObjectReader_ReadArrayOfString_m6716 (ObjectReader_t1132 * __this, BinaryReader_t851 * ___reader, int64_t* ___objectId, Object_t ** ___array, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectReader::ReadSimpleArray(System.IO.BinaryReader,System.Type,System.Int64&,System.Object&)
extern "C" void ObjectReader_ReadSimpleArray_m6717 (ObjectReader_t1132 * __this, BinaryReader_t851 * ___reader, Type_t * ___elementType, int64_t* ___objectId, Object_t ** ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Serialization.Formatters.Binary.ObjectReader/TypeMetadata System.Runtime.Serialization.Formatters.Binary.ObjectReader::ReadTypeMetadata(System.IO.BinaryReader,System.Boolean,System.Boolean)
extern "C" TypeMetadata_t1129 * ObjectReader_ReadTypeMetadata_m6718 (ObjectReader_t1132 * __this, BinaryReader_t851 * ___reader, bool ___isRuntimeObject, bool ___hasTypeInfo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectReader::ReadValue(System.IO.BinaryReader,System.Object,System.Int64,System.Runtime.Serialization.SerializationInfo,System.Type,System.String,System.Reflection.MemberInfo,System.Int32[])
extern "C" void ObjectReader_ReadValue_m6719 (ObjectReader_t1132 * __this, BinaryReader_t851 * ___reader, Object_t * ___parentObject, int64_t ___parentObjectId, SerializationInfo_t323 * ___info, Type_t * ___valueType, String_t* ___fieldName, MemberInfo_t * ___memberInfo, Int32U5BU5D_t419* ___indices, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectReader::SetObjectValue(System.Object,System.String,System.Reflection.MemberInfo,System.Runtime.Serialization.SerializationInfo,System.Object,System.Type,System.Int32[])
extern "C" void ObjectReader_SetObjectValue_m6720 (ObjectReader_t1132 * __this, Object_t * ___parentObject, String_t* ___fieldName, MemberInfo_t * ___memberInfo, SerializationInfo_t323 * ___info, Object_t * ___value, Type_t * ___valueType, Int32U5BU5D_t419* ___indices, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectReader::RecordFixup(System.Int64,System.Int64,System.Object,System.Runtime.Serialization.SerializationInfo,System.String,System.Reflection.MemberInfo,System.Int32[])
extern "C" void ObjectReader_RecordFixup_m6721 (ObjectReader_t1132 * __this, int64_t ___parentObjectId, int64_t ___childObjectId, Object_t * ___parentObject, SerializationInfo_t323 * ___info, String_t* ___fieldName, MemberInfo_t * ___memberInfo, Int32U5BU5D_t419* ___indices, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Runtime.Serialization.Formatters.Binary.ObjectReader::GetDeserializationType(System.Int64,System.String)
extern "C" Type_t * ObjectReader_GetDeserializationType_m6722 (ObjectReader_t1132 * __this, int64_t ___assemblyId, String_t* ___className, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Runtime.Serialization.Formatters.Binary.ObjectReader::ReadType(System.IO.BinaryReader,System.Runtime.Serialization.Formatters.Binary.TypeTag)
extern "C" Type_t * ObjectReader_ReadType_m6723 (ObjectReader_t1132 * __this, BinaryReader_t851 * ___reader, uint8_t ___code, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Serialization.Formatters.Binary.ObjectReader::ReadPrimitiveTypeValue(System.IO.BinaryReader,System.Type)
extern "C" Object_t * ObjectReader_ReadPrimitiveTypeValue_m6724 (Object_t * __this /* static, unused */, BinaryReader_t851 * ___reader, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
