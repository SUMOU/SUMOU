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
struct Dictionary_2_t1544;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t1543;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t369;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>[]
struct KeyValuePair_2U5BU5D_t1756;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t42;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>
struct IEnumerator_1_t1757;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t533;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>
struct ValueCollection_t1548;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_1.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__1.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m9601_gshared (Dictionary_2_t1544 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m9601(__this, method) (( void (*) (Dictionary_2_t1544 *, const MethodInfo*))Dictionary_2__ctor_m9601_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m9603_gshared (Dictionary_2_t1544 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m9603(__this, ___comparer, method) (( void (*) (Dictionary_2_t1544 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m9603_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m9605_gshared (Dictionary_2_t1544 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m9605(__this, ___capacity, method) (( void (*) (Dictionary_2_t1544 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m9605_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m9607_gshared (Dictionary_2_t1544 * __this, SerializationInfo_t369 * ___info, StreamingContext_t534  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m9607(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1544 *, SerializationInfo_t369 *, StreamingContext_t534 , const MethodInfo*))Dictionary_2__ctor_m9607_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m9609_gshared (Dictionary_2_t1544 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m9609(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1544 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m9609_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m9611_gshared (Dictionary_2_t1544 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m9611(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1544 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m9611_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m9613_gshared (Dictionary_2_t1544 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m9613(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1544 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m9613_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m9615_gshared (Dictionary_2_t1544 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m9615(__this, ___key, method) (( bool (*) (Dictionary_2_t1544 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m9615_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m9617_gshared (Dictionary_2_t1544 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m9617(__this, ___key, method) (( void (*) (Dictionary_2_t1544 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m9617_gshared)(__this, ___key, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m9619_gshared (Dictionary_2_t1544 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m9619(__this, method) (( Object_t * (*) (Dictionary_2_t1544 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m9619_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m9621_gshared (Dictionary_2_t1544 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m9621(__this, method) (( bool (*) (Dictionary_2_t1544 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m9621_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m9623_gshared (Dictionary_2_t1544 * __this, KeyValuePair_2_t1546  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m9623(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1544 *, KeyValuePair_2_t1546 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m9623_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m9625_gshared (Dictionary_2_t1544 * __this, KeyValuePair_2_t1546  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m9625(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1544 *, KeyValuePair_2_t1546 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m9625_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m9627_gshared (Dictionary_2_t1544 * __this, KeyValuePair_2U5BU5D_t1756* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m9627(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1544 *, KeyValuePair_2U5BU5D_t1756*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m9627_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m9629_gshared (Dictionary_2_t1544 * __this, KeyValuePair_2_t1546  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m9629(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1544 *, KeyValuePair_2_t1546 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m9629_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m9631_gshared (Dictionary_2_t1544 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m9631(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1544 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m9631_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m9633_gshared (Dictionary_2_t1544 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m9633(__this, method) (( Object_t * (*) (Dictionary_2_t1544 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m9633_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m9635_gshared (Dictionary_2_t1544 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m9635(__this, method) (( Object_t* (*) (Dictionary_2_t1544 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m9635_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m9637_gshared (Dictionary_2_t1544 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m9637(__this, method) (( Object_t * (*) (Dictionary_2_t1544 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m9637_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m9639_gshared (Dictionary_2_t1544 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m9639(__this, method) (( int32_t (*) (Dictionary_2_t1544 *, const MethodInfo*))Dictionary_2_get_Count_m9639_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m9641_gshared (Dictionary_2_t1544 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m9641(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1544 *, int32_t, const MethodInfo*))Dictionary_2_get_Item_m9641_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m9643_gshared (Dictionary_2_t1544 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m9643(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1544 *, int32_t, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m9643_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m9645_gshared (Dictionary_2_t1544 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m9645(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1544 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m9645_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m9647_gshared (Dictionary_2_t1544 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m9647(__this, ___size, method) (( void (*) (Dictionary_2_t1544 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m9647_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m9649_gshared (Dictionary_2_t1544 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m9649(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1544 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m9649_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t1546  Dictionary_2_make_pair_m9651_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m9651(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t1546  (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m9651_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m9653_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m9653(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m9653_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m9655_gshared (Dictionary_2_t1544 * __this, KeyValuePair_2U5BU5D_t1756* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m9655(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1544 *, KeyValuePair_2U5BU5D_t1756*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m9655_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Resize()
extern "C" void Dictionary_2_Resize_m9657_gshared (Dictionary_2_t1544 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m9657(__this, method) (( void (*) (Dictionary_2_t1544 *, const MethodInfo*))Dictionary_2_Resize_m9657_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m9659_gshared (Dictionary_2_t1544 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_Add_m9659(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1544 *, int32_t, Object_t *, const MethodInfo*))Dictionary_2_Add_m9659_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m9661_gshared (Dictionary_2_t1544 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m9661(__this, method) (( void (*) (Dictionary_2_t1544 *, const MethodInfo*))Dictionary_2_Clear_m9661_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m9663_gshared (Dictionary_2_t1544 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m9663(__this, ___key, method) (( bool (*) (Dictionary_2_t1544 *, int32_t, const MethodInfo*))Dictionary_2_ContainsKey_m9663_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m9665_gshared (Dictionary_2_t1544 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m9665(__this, ___value, method) (( bool (*) (Dictionary_2_t1544 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m9665_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m9667_gshared (Dictionary_2_t1544 * __this, SerializationInfo_t369 * ___info, StreamingContext_t534  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m9667(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1544 *, SerializationInfo_t369 *, StreamingContext_t534 , const MethodInfo*))Dictionary_2_GetObjectData_m9667_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m9669_gshared (Dictionary_2_t1544 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m9669(__this, ___sender, method) (( void (*) (Dictionary_2_t1544 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m9669_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m9671_gshared (Dictionary_2_t1544 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m9671(__this, ___key, method) (( bool (*) (Dictionary_2_t1544 *, int32_t, const MethodInfo*))Dictionary_2_Remove_m9671_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m9673_gshared (Dictionary_2_t1544 * __this, int32_t ___key, Object_t ** ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m9673(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1544 *, int32_t, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m9673_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Values()
extern "C" ValueCollection_t1548 * Dictionary_2_get_Values_m9675_gshared (Dictionary_2_t1544 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m9675(__this, method) (( ValueCollection_t1548 * (*) (Dictionary_2_t1544 *, const MethodInfo*))Dictionary_2_get_Values_m9675_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ToTKey(System.Object)
extern "C" int32_t Dictionary_2_ToTKey_m9677_gshared (Dictionary_2_t1544 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m9677(__this, ___key, method) (( int32_t (*) (Dictionary_2_t1544 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m9677_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m9679_gshared (Dictionary_2_t1544 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m9679(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t1544 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m9679_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m9681_gshared (Dictionary_2_t1544 * __this, KeyValuePair_2_t1546  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m9681(__this, ___pair, method) (( bool (*) (Dictionary_2_t1544 *, KeyValuePair_2_t1546 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m9681_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetEnumerator()
extern "C" Enumerator_t1550  Dictionary_2_GetEnumerator_m9683_gshared (Dictionary_2_t1544 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m9683(__this, method) (( Enumerator_t1550  (*) (Dictionary_2_t1544 *, const MethodInfo*))Dictionary_2_GetEnumerator_m9683_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t72  Dictionary_2_U3CCopyToU3Em__0_m9685_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m9685(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t72  (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m9685_gshared)(__this /* static, unused */, ___key, ___value, method)
