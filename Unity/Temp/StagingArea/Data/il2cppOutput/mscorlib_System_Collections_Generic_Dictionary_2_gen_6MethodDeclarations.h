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

// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t1560;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1499;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t369;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_t1760;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t42;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerator_1_t1761;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t533;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
struct ValueCollection_t1564;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_3.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__3.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m9830_gshared (Dictionary_2_t1560 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m9830(__this, method) (( void (*) (Dictionary_2_t1560 *, const MethodInfo*))Dictionary_2__ctor_m9830_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m9831_gshared (Dictionary_2_t1560 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m9831(__this, ___comparer, method) (( void (*) (Dictionary_2_t1560 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m9831_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m9833_gshared (Dictionary_2_t1560 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m9833(__this, ___capacity, method) (( void (*) (Dictionary_2_t1560 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m9833_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m9835_gshared (Dictionary_2_t1560 * __this, SerializationInfo_t369 * ___info, StreamingContext_t534  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m9835(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1560 *, SerializationInfo_t369 *, StreamingContext_t534 , const MethodInfo*))Dictionary_2__ctor_m9835_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m9837_gshared (Dictionary_2_t1560 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m9837(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1560 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m9837_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m9839_gshared (Dictionary_2_t1560 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m9839(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1560 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m9839_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m9841_gshared (Dictionary_2_t1560 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m9841(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1560 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m9841_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m9843_gshared (Dictionary_2_t1560 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m9843(__this, ___key, method) (( bool (*) (Dictionary_2_t1560 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m9843_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m9845_gshared (Dictionary_2_t1560 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m9845(__this, ___key, method) (( void (*) (Dictionary_2_t1560 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m9845_gshared)(__this, ___key, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m9847_gshared (Dictionary_2_t1560 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m9847(__this, method) (( Object_t * (*) (Dictionary_2_t1560 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m9847_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m9849_gshared (Dictionary_2_t1560 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m9849(__this, method) (( bool (*) (Dictionary_2_t1560 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m9849_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m9851_gshared (Dictionary_2_t1560 * __this, KeyValuePair_2_t1562  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m9851(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1560 *, KeyValuePair_2_t1562 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m9851_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m9853_gshared (Dictionary_2_t1560 * __this, KeyValuePair_2_t1562  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m9853(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1560 *, KeyValuePair_2_t1562 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m9853_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m9855_gshared (Dictionary_2_t1560 * __this, KeyValuePair_2U5BU5D_t1760* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m9855(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1560 *, KeyValuePair_2U5BU5D_t1760*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m9855_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m9857_gshared (Dictionary_2_t1560 * __this, KeyValuePair_2_t1562  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m9857(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1560 *, KeyValuePair_2_t1562 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m9857_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m9859_gshared (Dictionary_2_t1560 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m9859(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1560 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m9859_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m9861_gshared (Dictionary_2_t1560 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m9861(__this, method) (( Object_t * (*) (Dictionary_2_t1560 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m9861_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m9863_gshared (Dictionary_2_t1560 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m9863(__this, method) (( Object_t* (*) (Dictionary_2_t1560 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m9863_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m9865_gshared (Dictionary_2_t1560 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m9865(__this, method) (( Object_t * (*) (Dictionary_2_t1560 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m9865_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m9867_gshared (Dictionary_2_t1560 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m9867(__this, method) (( int32_t (*) (Dictionary_2_t1560 *, const MethodInfo*))Dictionary_2_get_Count_m9867_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m9869_gshared (Dictionary_2_t1560 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m9869(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1560 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m9869_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m9871_gshared (Dictionary_2_t1560 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m9871(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1560 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m9871_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m9873_gshared (Dictionary_2_t1560 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m9873(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1560 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m9873_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m9875_gshared (Dictionary_2_t1560 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m9875(__this, ___size, method) (( void (*) (Dictionary_2_t1560 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m9875_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m9877_gshared (Dictionary_2_t1560 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m9877(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1560 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m9877_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t1562  Dictionary_2_make_pair_m9879_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m9879(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t1562  (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m9879_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m9881_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m9881(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m9881_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m9883_gshared (Dictionary_2_t1560 * __this, KeyValuePair_2U5BU5D_t1760* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m9883(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1560 *, KeyValuePair_2U5BU5D_t1760*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m9883_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Resize()
extern "C" void Dictionary_2_Resize_m9885_gshared (Dictionary_2_t1560 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m9885(__this, method) (( void (*) (Dictionary_2_t1560 *, const MethodInfo*))Dictionary_2_Resize_m9885_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m9887_gshared (Dictionary_2_t1560 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_Add_m9887(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1560 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_Add_m9887_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m9889_gshared (Dictionary_2_t1560 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m9889(__this, method) (( void (*) (Dictionary_2_t1560 *, const MethodInfo*))Dictionary_2_Clear_m9889_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m9891_gshared (Dictionary_2_t1560 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m9891(__this, ___key, method) (( bool (*) (Dictionary_2_t1560 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m9891_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m9893_gshared (Dictionary_2_t1560 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m9893(__this, ___value, method) (( bool (*) (Dictionary_2_t1560 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m9893_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m9895_gshared (Dictionary_2_t1560 * __this, SerializationInfo_t369 * ___info, StreamingContext_t534  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m9895(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1560 *, SerializationInfo_t369 *, StreamingContext_t534 , const MethodInfo*))Dictionary_2_GetObjectData_m9895_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m9897_gshared (Dictionary_2_t1560 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m9897(__this, ___sender, method) (( void (*) (Dictionary_2_t1560 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m9897_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m9899_gshared (Dictionary_2_t1560 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m9899(__this, ___key, method) (( bool (*) (Dictionary_2_t1560 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m9899_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m9901_gshared (Dictionary_2_t1560 * __this, Object_t * ___key, Object_t ** ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m9901(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1560 *, Object_t *, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m9901_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Values()
extern "C" ValueCollection_t1564 * Dictionary_2_get_Values_m9902_gshared (Dictionary_2_t1560 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m9902(__this, method) (( ValueCollection_t1564 * (*) (Dictionary_2_t1560 *, const MethodInfo*))Dictionary_2_get_Values_m9902_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m9904_gshared (Dictionary_2_t1560 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m9904(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1560 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m9904_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m9906_gshared (Dictionary_2_t1560 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m9906(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t1560 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m9906_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m9908_gshared (Dictionary_2_t1560 * __this, KeyValuePair_2_t1562  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m9908(__this, ___pair, method) (( bool (*) (Dictionary_2_t1560 *, KeyValuePair_2_t1562 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m9908_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
extern "C" Enumerator_t1566  Dictionary_2_GetEnumerator_m9910_gshared (Dictionary_2_t1560 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m9910(__this, method) (( Enumerator_t1566  (*) (Dictionary_2_t1560 *, const MethodInfo*))Dictionary_2_GetEnumerator_m9910_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t72  Dictionary_2_U3CCopyToU3Em__0_m9912_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m9912(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t72  (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m9912_gshared)(__this /* static, unused */, ___key, ___value, method)
