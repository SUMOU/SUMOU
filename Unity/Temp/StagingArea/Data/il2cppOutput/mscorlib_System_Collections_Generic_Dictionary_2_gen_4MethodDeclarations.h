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
struct Dictionary_2_t1469;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1471;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t323;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>[]
struct KeyValuePair_2U5BU5D_t1699;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t5;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
struct IEnumerator_1_t1700;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t487;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>
struct ValueCollection_t1476;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator_.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor()
extern "C" void Dictionary_2__ctor_m8829_gshared (Dictionary_2_t1469 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m8829(__this, method) (( void (*) (Dictionary_2_t1469 *, const MethodInfo*))Dictionary_2__ctor_m8829_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m8831_gshared (Dictionary_2_t1469 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m8831(__this, ___comparer, method) (( void (*) (Dictionary_2_t1469 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m8831_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m8832_gshared (Dictionary_2_t1469 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m8832(__this, ___capacity, method) (( void (*) (Dictionary_2_t1469 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m8832_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m8834_gshared (Dictionary_2_t1469 * __this, SerializationInfo_t323 * ___info, StreamingContext_t489  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m8834(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1469 *, SerializationInfo_t323 *, StreamingContext_t489 , const MethodInfo*))Dictionary_2__ctor_m8834_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m8836_gshared (Dictionary_2_t1469 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m8836(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1469 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m8836_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m8838_gshared (Dictionary_2_t1469 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m8838(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1469 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m8838_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m8840_gshared (Dictionary_2_t1469 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m8840(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1469 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m8840_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m8842_gshared (Dictionary_2_t1469 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m8842(__this, ___key, method) (( bool (*) (Dictionary_2_t1469 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m8842_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m8844_gshared (Dictionary_2_t1469 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m8844(__this, ___key, method) (( void (*) (Dictionary_2_t1469 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m8844_gshared)(__this, ___key, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m8846_gshared (Dictionary_2_t1469 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m8846(__this, method) (( Object_t * (*) (Dictionary_2_t1469 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m8846_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m8848_gshared (Dictionary_2_t1469 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m8848(__this, method) (( bool (*) (Dictionary_2_t1469 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m8848_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m8850_gshared (Dictionary_2_t1469 * __this, KeyValuePair_2_t1472  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m8850(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1469 *, KeyValuePair_2_t1472 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m8850_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m8852_gshared (Dictionary_2_t1469 * __this, KeyValuePair_2_t1472  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m8852(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1469 *, KeyValuePair_2_t1472 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m8852_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m8854_gshared (Dictionary_2_t1469 * __this, KeyValuePair_2U5BU5D_t1699* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m8854(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1469 *, KeyValuePair_2U5BU5D_t1699*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m8854_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m8856_gshared (Dictionary_2_t1469 * __this, KeyValuePair_2_t1472  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m8856(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1469 *, KeyValuePair_2_t1472 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m8856_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m8858_gshared (Dictionary_2_t1469 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m8858(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1469 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m8858_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m8860_gshared (Dictionary_2_t1469 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m8860(__this, method) (( Object_t * (*) (Dictionary_2_t1469 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m8860_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m8862_gshared (Dictionary_2_t1469 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m8862(__this, method) (( Object_t* (*) (Dictionary_2_t1469 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m8862_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m8864_gshared (Dictionary_2_t1469 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m8864(__this, method) (( Object_t * (*) (Dictionary_2_t1469 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m8864_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m8866_gshared (Dictionary_2_t1469 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m8866(__this, method) (( int32_t (*) (Dictionary_2_t1469 *, const MethodInfo*))Dictionary_2_get_Count_m8866_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Item(TKey)
extern "C" int32_t Dictionary_2_get_Item_m8868_gshared (Dictionary_2_t1469 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m8868(__this, ___key, method) (( int32_t (*) (Dictionary_2_t1469 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m8868_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m8870_gshared (Dictionary_2_t1469 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m8870(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1469 *, Object_t *, int32_t, const MethodInfo*))Dictionary_2_set_Item_m8870_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m8872_gshared (Dictionary_2_t1469 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m8872(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1469 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m8872_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m8874_gshared (Dictionary_2_t1469 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m8874(__this, ___size, method) (( void (*) (Dictionary_2_t1469 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m8874_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m8876_gshared (Dictionary_2_t1469 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m8876(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1469 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m8876_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t1472  Dictionary_2_make_pair_m8878_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m8878(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t1472  (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_make_pair_m8878_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::pick_value(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_value_m8880_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m8880(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_pick_value_m8880_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m8882_gshared (Dictionary_2_t1469 * __this, KeyValuePair_2U5BU5D_t1699* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m8882(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1469 *, KeyValuePair_2U5BU5D_t1699*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m8882_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Resize()
extern "C" void Dictionary_2_Resize_m8884_gshared (Dictionary_2_t1469 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m8884(__this, method) (( void (*) (Dictionary_2_t1469 *, const MethodInfo*))Dictionary_2_Resize_m8884_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m8886_gshared (Dictionary_2_t1469 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m8886(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1469 *, Object_t *, int32_t, const MethodInfo*))Dictionary_2_Add_m8886_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Clear()
extern "C" void Dictionary_2_Clear_m8888_gshared (Dictionary_2_t1469 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m8888(__this, method) (( void (*) (Dictionary_2_t1469 *, const MethodInfo*))Dictionary_2_Clear_m8888_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m8890_gshared (Dictionary_2_t1469 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m8890(__this, ___key, method) (( bool (*) (Dictionary_2_t1469 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m8890_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m8892_gshared (Dictionary_2_t1469 * __this, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m8892(__this, ___value, method) (( bool (*) (Dictionary_2_t1469 *, int32_t, const MethodInfo*))Dictionary_2_ContainsValue_m8892_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m8894_gshared (Dictionary_2_t1469 * __this, SerializationInfo_t323 * ___info, StreamingContext_t489  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m8894(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1469 *, SerializationInfo_t323 *, StreamingContext_t489 , const MethodInfo*))Dictionary_2_GetObjectData_m8894_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m8896_gshared (Dictionary_2_t1469 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m8896(__this, ___sender, method) (( void (*) (Dictionary_2_t1469 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m8896_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m8898_gshared (Dictionary_2_t1469 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m8898(__this, ___key, method) (( bool (*) (Dictionary_2_t1469 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m8898_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m8900_gshared (Dictionary_2_t1469 * __this, Object_t * ___key, int32_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m8900(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1469 *, Object_t *, int32_t*, const MethodInfo*))Dictionary_2_TryGetValue_m8900_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Values()
extern "C" ValueCollection_t1476 * Dictionary_2_get_Values_m8902_gshared (Dictionary_2_t1469 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m8902(__this, method) (( ValueCollection_t1476 * (*) (Dictionary_2_t1469 *, const MethodInfo*))Dictionary_2_get_Values_m8902_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m8904_gshared (Dictionary_2_t1469 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m8904(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1469 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m8904_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ToTValue(System.Object)
extern "C" int32_t Dictionary_2_ToTValue_m8906_gshared (Dictionary_2_t1469 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m8906(__this, ___value, method) (( int32_t (*) (Dictionary_2_t1469 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m8906_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m8908_gshared (Dictionary_2_t1469 * __this, KeyValuePair_2_t1472  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m8908(__this, ___pair, method) (( bool (*) (Dictionary_2_t1469 *, KeyValuePair_2_t1472 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m8908_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::GetEnumerator()
extern "C" Enumerator_t1478  Dictionary_2_GetEnumerator_m8910_gshared (Dictionary_2_t1469 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m8910(__this, method) (( Enumerator_t1478  (*) (Dictionary_2_t1469 *, const MethodInfo*))Dictionary_2_GetEnumerator_m8910_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t488  Dictionary_2_U3CCopyToU3Em__0_m8912_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m8912(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t488  (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m8912_gshared)(__this /* static, unused */, ___key, ___value, method)
