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

// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t1493;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t1492;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t323;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>[]
struct KeyValuePair_2U5BU5D_t1704;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t5;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>
struct IEnumerator_1_t1705;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t487;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>
struct ValueCollection_t1497;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_1.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__1.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m9049_gshared (Dictionary_2_t1493 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m9049(__this, method) (( void (*) (Dictionary_2_t1493 *, const MethodInfo*))Dictionary_2__ctor_m9049_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m9051_gshared (Dictionary_2_t1493 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m9051(__this, ___comparer, method) (( void (*) (Dictionary_2_t1493 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m9051_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m9053_gshared (Dictionary_2_t1493 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m9053(__this, ___capacity, method) (( void (*) (Dictionary_2_t1493 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m9053_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m9055_gshared (Dictionary_2_t1493 * __this, SerializationInfo_t323 * ___info, StreamingContext_t489  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m9055(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1493 *, SerializationInfo_t323 *, StreamingContext_t489 , const MethodInfo*))Dictionary_2__ctor_m9055_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m9057_gshared (Dictionary_2_t1493 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m9057(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1493 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m9057_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m9059_gshared (Dictionary_2_t1493 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m9059(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1493 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m9059_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m9061_gshared (Dictionary_2_t1493 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m9061(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1493 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m9061_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m9063_gshared (Dictionary_2_t1493 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m9063(__this, ___key, method) (( bool (*) (Dictionary_2_t1493 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m9063_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m9065_gshared (Dictionary_2_t1493 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m9065(__this, ___key, method) (( void (*) (Dictionary_2_t1493 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m9065_gshared)(__this, ___key, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m9067_gshared (Dictionary_2_t1493 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m9067(__this, method) (( Object_t * (*) (Dictionary_2_t1493 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m9067_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m9069_gshared (Dictionary_2_t1493 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m9069(__this, method) (( bool (*) (Dictionary_2_t1493 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m9069_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m9071_gshared (Dictionary_2_t1493 * __this, KeyValuePair_2_t1495  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m9071(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1493 *, KeyValuePair_2_t1495 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m9071_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m9073_gshared (Dictionary_2_t1493 * __this, KeyValuePair_2_t1495  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m9073(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1493 *, KeyValuePair_2_t1495 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m9073_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m9075_gshared (Dictionary_2_t1493 * __this, KeyValuePair_2U5BU5D_t1704* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m9075(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1493 *, KeyValuePair_2U5BU5D_t1704*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m9075_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m9077_gshared (Dictionary_2_t1493 * __this, KeyValuePair_2_t1495  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m9077(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1493 *, KeyValuePair_2_t1495 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m9077_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m9079_gshared (Dictionary_2_t1493 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m9079(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1493 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m9079_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m9081_gshared (Dictionary_2_t1493 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m9081(__this, method) (( Object_t * (*) (Dictionary_2_t1493 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m9081_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m9083_gshared (Dictionary_2_t1493 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m9083(__this, method) (( Object_t* (*) (Dictionary_2_t1493 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m9083_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m9085_gshared (Dictionary_2_t1493 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m9085(__this, method) (( Object_t * (*) (Dictionary_2_t1493 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m9085_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m9087_gshared (Dictionary_2_t1493 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m9087(__this, method) (( int32_t (*) (Dictionary_2_t1493 *, const MethodInfo*))Dictionary_2_get_Count_m9087_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m9089_gshared (Dictionary_2_t1493 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m9089(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1493 *, int32_t, const MethodInfo*))Dictionary_2_get_Item_m9089_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m9091_gshared (Dictionary_2_t1493 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m9091(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1493 *, int32_t, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m9091_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m9093_gshared (Dictionary_2_t1493 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m9093(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1493 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m9093_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m9095_gshared (Dictionary_2_t1493 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m9095(__this, ___size, method) (( void (*) (Dictionary_2_t1493 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m9095_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m9097_gshared (Dictionary_2_t1493 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m9097(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1493 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m9097_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t1495  Dictionary_2_make_pair_m9099_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m9099(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t1495  (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m9099_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m9101_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m9101(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m9101_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m9103_gshared (Dictionary_2_t1493 * __this, KeyValuePair_2U5BU5D_t1704* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m9103(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1493 *, KeyValuePair_2U5BU5D_t1704*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m9103_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Resize()
extern "C" void Dictionary_2_Resize_m9105_gshared (Dictionary_2_t1493 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m9105(__this, method) (( void (*) (Dictionary_2_t1493 *, const MethodInfo*))Dictionary_2_Resize_m9105_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m9107_gshared (Dictionary_2_t1493 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_Add_m9107(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1493 *, int32_t, Object_t *, const MethodInfo*))Dictionary_2_Add_m9107_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m9109_gshared (Dictionary_2_t1493 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m9109(__this, method) (( void (*) (Dictionary_2_t1493 *, const MethodInfo*))Dictionary_2_Clear_m9109_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m9111_gshared (Dictionary_2_t1493 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m9111(__this, ___key, method) (( bool (*) (Dictionary_2_t1493 *, int32_t, const MethodInfo*))Dictionary_2_ContainsKey_m9111_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m9113_gshared (Dictionary_2_t1493 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m9113(__this, ___value, method) (( bool (*) (Dictionary_2_t1493 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m9113_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m9115_gshared (Dictionary_2_t1493 * __this, SerializationInfo_t323 * ___info, StreamingContext_t489  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m9115(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1493 *, SerializationInfo_t323 *, StreamingContext_t489 , const MethodInfo*))Dictionary_2_GetObjectData_m9115_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m9117_gshared (Dictionary_2_t1493 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m9117(__this, ___sender, method) (( void (*) (Dictionary_2_t1493 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m9117_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m9119_gshared (Dictionary_2_t1493 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m9119(__this, ___key, method) (( bool (*) (Dictionary_2_t1493 *, int32_t, const MethodInfo*))Dictionary_2_Remove_m9119_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m9121_gshared (Dictionary_2_t1493 * __this, int32_t ___key, Object_t ** ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m9121(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1493 *, int32_t, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m9121_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Values()
extern "C" ValueCollection_t1497 * Dictionary_2_get_Values_m9123_gshared (Dictionary_2_t1493 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m9123(__this, method) (( ValueCollection_t1497 * (*) (Dictionary_2_t1493 *, const MethodInfo*))Dictionary_2_get_Values_m9123_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ToTKey(System.Object)
extern "C" int32_t Dictionary_2_ToTKey_m9125_gshared (Dictionary_2_t1493 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m9125(__this, ___key, method) (( int32_t (*) (Dictionary_2_t1493 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m9125_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m9127_gshared (Dictionary_2_t1493 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m9127(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t1493 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m9127_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m9129_gshared (Dictionary_2_t1493 * __this, KeyValuePair_2_t1495  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m9129(__this, ___pair, method) (( bool (*) (Dictionary_2_t1493 *, KeyValuePair_2_t1495 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m9129_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetEnumerator()
extern "C" Enumerator_t1499  Dictionary_2_GetEnumerator_m9131_gshared (Dictionary_2_t1493 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m9131(__this, method) (( Enumerator_t1499  (*) (Dictionary_2_t1493 *, const MethodInfo*))Dictionary_2_GetEnumerator_m9131_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t488  Dictionary_2_U3CCopyToU3Em__0_m9133_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m9133(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t488  (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m9133_gshared)(__this /* static, unused */, ___key, ___value, method)
