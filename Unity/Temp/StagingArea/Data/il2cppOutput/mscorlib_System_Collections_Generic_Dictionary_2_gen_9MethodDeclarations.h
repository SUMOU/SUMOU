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

// System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>
struct Dictionary_2_t1623;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1499;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t369;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>[]
struct KeyValuePair_2U5BU5D_t1770;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t42;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>
struct IEnumerator_1_t1771;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t533;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Boolean>
struct ValueCollection_t1628;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_8.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__8.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor()
extern "C" void Dictionary_2__ctor_m10596_gshared (Dictionary_2_t1623 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m10596(__this, method) (( void (*) (Dictionary_2_t1623 *, const MethodInfo*))Dictionary_2__ctor_m10596_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m10597_gshared (Dictionary_2_t1623 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m10597(__this, ___comparer, method) (( void (*) (Dictionary_2_t1623 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m10597_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m10599_gshared (Dictionary_2_t1623 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m10599(__this, ___capacity, method) (( void (*) (Dictionary_2_t1623 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m10599_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m10601_gshared (Dictionary_2_t1623 * __this, SerializationInfo_t369 * ___info, StreamingContext_t534  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m10601(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1623 *, SerializationInfo_t369 *, StreamingContext_t534 , const MethodInfo*))Dictionary_2__ctor_m10601_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m10603_gshared (Dictionary_2_t1623 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m10603(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1623 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m10603_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m10605_gshared (Dictionary_2_t1623 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m10605(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1623 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m10605_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m10607_gshared (Dictionary_2_t1623 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m10607(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1623 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m10607_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m10609_gshared (Dictionary_2_t1623 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m10609(__this, ___key, method) (( bool (*) (Dictionary_2_t1623 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m10609_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m10611_gshared (Dictionary_2_t1623 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m10611(__this, ___key, method) (( void (*) (Dictionary_2_t1623 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m10611_gshared)(__this, ___key, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m10613_gshared (Dictionary_2_t1623 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m10613(__this, method) (( Object_t * (*) (Dictionary_2_t1623 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m10613_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m10615_gshared (Dictionary_2_t1623 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m10615(__this, method) (( bool (*) (Dictionary_2_t1623 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m10615_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m10617_gshared (Dictionary_2_t1623 * __this, KeyValuePair_2_t1625  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m10617(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1623 *, KeyValuePair_2_t1625 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m10617_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m10619_gshared (Dictionary_2_t1623 * __this, KeyValuePair_2_t1625  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m10619(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1623 *, KeyValuePair_2_t1625 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m10619_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m10621_gshared (Dictionary_2_t1623 * __this, KeyValuePair_2U5BU5D_t1770* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m10621(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1623 *, KeyValuePair_2U5BU5D_t1770*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m10621_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m10623_gshared (Dictionary_2_t1623 * __this, KeyValuePair_2_t1625  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m10623(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1623 *, KeyValuePair_2_t1625 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m10623_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m10625_gshared (Dictionary_2_t1623 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m10625(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1623 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m10625_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m10627_gshared (Dictionary_2_t1623 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m10627(__this, method) (( Object_t * (*) (Dictionary_2_t1623 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m10627_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m10629_gshared (Dictionary_2_t1623 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m10629(__this, method) (( Object_t* (*) (Dictionary_2_t1623 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m10629_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m10631_gshared (Dictionary_2_t1623 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m10631(__this, method) (( Object_t * (*) (Dictionary_2_t1623 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m10631_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m10633_gshared (Dictionary_2_t1623 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m10633(__this, method) (( int32_t (*) (Dictionary_2_t1623 *, const MethodInfo*))Dictionary_2_get_Count_m10633_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Item(TKey)
extern "C" bool Dictionary_2_get_Item_m10635_gshared (Dictionary_2_t1623 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m10635(__this, ___key, method) (( bool (*) (Dictionary_2_t1623 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m10635_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m10637_gshared (Dictionary_2_t1623 * __this, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m10637(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1623 *, Object_t *, bool, const MethodInfo*))Dictionary_2_set_Item_m10637_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m10639_gshared (Dictionary_2_t1623 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m10639(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1623 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m10639_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m10641_gshared (Dictionary_2_t1623 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m10641(__this, ___size, method) (( void (*) (Dictionary_2_t1623 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m10641_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m10643_gshared (Dictionary_2_t1623 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m10643(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1623 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m10643_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t1625  Dictionary_2_make_pair_m10645_gshared (Object_t * __this /* static, unused */, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m10645(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t1625  (*) (Object_t * /* static, unused */, Object_t *, bool, const MethodInfo*))Dictionary_2_make_pair_m10645_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::pick_value(TKey,TValue)
extern "C" bool Dictionary_2_pick_value_m10647_gshared (Object_t * __this /* static, unused */, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m10647(__this /* static, unused */, ___key, ___value, method) (( bool (*) (Object_t * /* static, unused */, Object_t *, bool, const MethodInfo*))Dictionary_2_pick_value_m10647_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m10649_gshared (Dictionary_2_t1623 * __this, KeyValuePair_2U5BU5D_t1770* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m10649(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1623 *, KeyValuePair_2U5BU5D_t1770*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m10649_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Resize()
extern "C" void Dictionary_2_Resize_m10651_gshared (Dictionary_2_t1623 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m10651(__this, method) (( void (*) (Dictionary_2_t1623 *, const MethodInfo*))Dictionary_2_Resize_m10651_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m10653_gshared (Dictionary_2_t1623 * __this, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_Add_m10653(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1623 *, Object_t *, bool, const MethodInfo*))Dictionary_2_Add_m10653_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Clear()
extern "C" void Dictionary_2_Clear_m10655_gshared (Dictionary_2_t1623 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m10655(__this, method) (( void (*) (Dictionary_2_t1623 *, const MethodInfo*))Dictionary_2_Clear_m10655_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m10657_gshared (Dictionary_2_t1623 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m10657(__this, ___key, method) (( bool (*) (Dictionary_2_t1623 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m10657_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m10659_gshared (Dictionary_2_t1623 * __this, bool ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m10659(__this, ___value, method) (( bool (*) (Dictionary_2_t1623 *, bool, const MethodInfo*))Dictionary_2_ContainsValue_m10659_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m10661_gshared (Dictionary_2_t1623 * __this, SerializationInfo_t369 * ___info, StreamingContext_t534  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m10661(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1623 *, SerializationInfo_t369 *, StreamingContext_t534 , const MethodInfo*))Dictionary_2_GetObjectData_m10661_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m10663_gshared (Dictionary_2_t1623 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m10663(__this, ___sender, method) (( void (*) (Dictionary_2_t1623 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m10663_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m10665_gshared (Dictionary_2_t1623 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m10665(__this, ___key, method) (( bool (*) (Dictionary_2_t1623 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m10665_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m10667_gshared (Dictionary_2_t1623 * __this, Object_t * ___key, bool* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m10667(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1623 *, Object_t *, bool*, const MethodInfo*))Dictionary_2_TryGetValue_m10667_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Values()
extern "C" ValueCollection_t1628 * Dictionary_2_get_Values_m10669_gshared (Dictionary_2_t1623 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m10669(__this, method) (( ValueCollection_t1628 * (*) (Dictionary_2_t1623 *, const MethodInfo*))Dictionary_2_get_Values_m10669_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m10671_gshared (Dictionary_2_t1623 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m10671(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1623 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m10671_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ToTValue(System.Object)
extern "C" bool Dictionary_2_ToTValue_m10673_gshared (Dictionary_2_t1623 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m10673(__this, ___value, method) (( bool (*) (Dictionary_2_t1623 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m10673_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m10675_gshared (Dictionary_2_t1623 * __this, KeyValuePair_2_t1625  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m10675(__this, ___pair, method) (( bool (*) (Dictionary_2_t1623 *, KeyValuePair_2_t1625 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m10675_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::GetEnumerator()
extern "C" Enumerator_t1630  Dictionary_2_GetEnumerator_m10677_gshared (Dictionary_2_t1623 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m10677(__this, method) (( Enumerator_t1630  (*) (Dictionary_2_t1623 *, const MethodInfo*))Dictionary_2_GetEnumerator_m10677_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t72  Dictionary_2_U3CCopyToU3Em__0_m10679_gshared (Object_t * __this /* static, unused */, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m10679(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t72  (*) (Object_t * /* static, unused */, Object_t *, bool, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m10679_gshared)(__this /* static, unused */, ___key, ___value, method)
