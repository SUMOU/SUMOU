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

// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t1497;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1499;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t369;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>[]
struct KeyValuePair_2U5BU5D_t1748;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t42;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
struct IEnumerator_1_t1749;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t533;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>
struct ValueCollection_t1505;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator_.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor()
extern "C" void Dictionary_2__ctor_m9143_gshared (Dictionary_2_t1497 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m9143(__this, method) (( void (*) (Dictionary_2_t1497 *, const MethodInfo*))Dictionary_2__ctor_m9143_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m9145_gshared (Dictionary_2_t1497 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m9145(__this, ___comparer, method) (( void (*) (Dictionary_2_t1497 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m9145_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m9146_gshared (Dictionary_2_t1497 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m9146(__this, ___capacity, method) (( void (*) (Dictionary_2_t1497 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m9146_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m9148_gshared (Dictionary_2_t1497 * __this, SerializationInfo_t369 * ___info, StreamingContext_t534  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m9148(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1497 *, SerializationInfo_t369 *, StreamingContext_t534 , const MethodInfo*))Dictionary_2__ctor_m9148_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m9150_gshared (Dictionary_2_t1497 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m9150(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1497 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m9150_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m9152_gshared (Dictionary_2_t1497 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m9152(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1497 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m9152_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m9154_gshared (Dictionary_2_t1497 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m9154(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1497 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m9154_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m9156_gshared (Dictionary_2_t1497 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m9156(__this, ___key, method) (( bool (*) (Dictionary_2_t1497 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m9156_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m9158_gshared (Dictionary_2_t1497 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m9158(__this, ___key, method) (( void (*) (Dictionary_2_t1497 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m9158_gshared)(__this, ___key, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m9160_gshared (Dictionary_2_t1497 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m9160(__this, method) (( Object_t * (*) (Dictionary_2_t1497 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m9160_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m9162_gshared (Dictionary_2_t1497 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m9162(__this, method) (( bool (*) (Dictionary_2_t1497 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m9162_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m9164_gshared (Dictionary_2_t1497 * __this, KeyValuePair_2_t1500  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m9164(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1497 *, KeyValuePair_2_t1500 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m9164_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m9166_gshared (Dictionary_2_t1497 * __this, KeyValuePair_2_t1500  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m9166(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1497 *, KeyValuePair_2_t1500 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m9166_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m9168_gshared (Dictionary_2_t1497 * __this, KeyValuePair_2U5BU5D_t1748* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m9168(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1497 *, KeyValuePair_2U5BU5D_t1748*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m9168_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m9170_gshared (Dictionary_2_t1497 * __this, KeyValuePair_2_t1500  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m9170(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1497 *, KeyValuePair_2_t1500 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m9170_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m9172_gshared (Dictionary_2_t1497 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m9172(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1497 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m9172_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m9174_gshared (Dictionary_2_t1497 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m9174(__this, method) (( Object_t * (*) (Dictionary_2_t1497 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m9174_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m9176_gshared (Dictionary_2_t1497 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m9176(__this, method) (( Object_t* (*) (Dictionary_2_t1497 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m9176_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m9178_gshared (Dictionary_2_t1497 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m9178(__this, method) (( Object_t * (*) (Dictionary_2_t1497 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m9178_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m9180_gshared (Dictionary_2_t1497 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m9180(__this, method) (( int32_t (*) (Dictionary_2_t1497 *, const MethodInfo*))Dictionary_2_get_Count_m9180_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Item(TKey)
extern "C" int32_t Dictionary_2_get_Item_m9182_gshared (Dictionary_2_t1497 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m9182(__this, ___key, method) (( int32_t (*) (Dictionary_2_t1497 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m9182_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m9184_gshared (Dictionary_2_t1497 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m9184(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1497 *, Object_t *, int32_t, const MethodInfo*))Dictionary_2_set_Item_m9184_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m9186_gshared (Dictionary_2_t1497 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m9186(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1497 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m9186_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m9188_gshared (Dictionary_2_t1497 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m9188(__this, ___size, method) (( void (*) (Dictionary_2_t1497 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m9188_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m9190_gshared (Dictionary_2_t1497 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m9190(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1497 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m9190_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t1500  Dictionary_2_make_pair_m9192_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m9192(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t1500  (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_make_pair_m9192_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::pick_value(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_value_m9194_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m9194(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_pick_value_m9194_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m9196_gshared (Dictionary_2_t1497 * __this, KeyValuePair_2U5BU5D_t1748* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m9196(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1497 *, KeyValuePair_2U5BU5D_t1748*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m9196_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Resize()
extern "C" void Dictionary_2_Resize_m9198_gshared (Dictionary_2_t1497 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m9198(__this, method) (( void (*) (Dictionary_2_t1497 *, const MethodInfo*))Dictionary_2_Resize_m9198_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m9200_gshared (Dictionary_2_t1497 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m9200(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1497 *, Object_t *, int32_t, const MethodInfo*))Dictionary_2_Add_m9200_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Clear()
extern "C" void Dictionary_2_Clear_m9202_gshared (Dictionary_2_t1497 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m9202(__this, method) (( void (*) (Dictionary_2_t1497 *, const MethodInfo*))Dictionary_2_Clear_m9202_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m9204_gshared (Dictionary_2_t1497 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m9204(__this, ___key, method) (( bool (*) (Dictionary_2_t1497 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m9204_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m9206_gshared (Dictionary_2_t1497 * __this, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m9206(__this, ___value, method) (( bool (*) (Dictionary_2_t1497 *, int32_t, const MethodInfo*))Dictionary_2_ContainsValue_m9206_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m9208_gshared (Dictionary_2_t1497 * __this, SerializationInfo_t369 * ___info, StreamingContext_t534  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m9208(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1497 *, SerializationInfo_t369 *, StreamingContext_t534 , const MethodInfo*))Dictionary_2_GetObjectData_m9208_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m9210_gshared (Dictionary_2_t1497 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m9210(__this, ___sender, method) (( void (*) (Dictionary_2_t1497 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m9210_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m9212_gshared (Dictionary_2_t1497 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m9212(__this, ___key, method) (( bool (*) (Dictionary_2_t1497 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m9212_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m9214_gshared (Dictionary_2_t1497 * __this, Object_t * ___key, int32_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m9214(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1497 *, Object_t *, int32_t*, const MethodInfo*))Dictionary_2_TryGetValue_m9214_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Values()
extern "C" ValueCollection_t1505 * Dictionary_2_get_Values_m9216_gshared (Dictionary_2_t1497 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m9216(__this, method) (( ValueCollection_t1505 * (*) (Dictionary_2_t1497 *, const MethodInfo*))Dictionary_2_get_Values_m9216_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m9218_gshared (Dictionary_2_t1497 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m9218(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1497 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m9218_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ToTValue(System.Object)
extern "C" int32_t Dictionary_2_ToTValue_m9220_gshared (Dictionary_2_t1497 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m9220(__this, ___value, method) (( int32_t (*) (Dictionary_2_t1497 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m9220_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m9222_gshared (Dictionary_2_t1497 * __this, KeyValuePair_2_t1500  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m9222(__this, ___pair, method) (( bool (*) (Dictionary_2_t1497 *, KeyValuePair_2_t1500 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m9222_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::GetEnumerator()
extern "C" Enumerator_t1507  Dictionary_2_GetEnumerator_m9224_gshared (Dictionary_2_t1497 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m9224(__this, method) (( Enumerator_t1507  (*) (Dictionary_2_t1497 *, const MethodInfo*))Dictionary_2_GetEnumerator_m9224_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t72  Dictionary_2_U3CCopyToU3Em__0_m9226_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m9226(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t72  (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m9226_gshared)(__this /* static, unused */, ___key, ___value, method)
