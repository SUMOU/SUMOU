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

// System.Collections.Generic.List`1<System.Object>
struct List_1_t1484;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t105;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t42;
// System.Object
struct Object_t;
// System.Object[]
struct ObjectU5BU5D_t41;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_1.h"

// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C" void List_1__ctor_m9022_gshared (List_1_t1484 * __this, const MethodInfo* method);
#define List_1__ctor_m9022(__this, method) (( void (*) (List_1_t1484 *, const MethodInfo*))List_1__ctor_m9022_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
extern "C" void List_1__ctor_m9024_gshared (List_1_t1484 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m9024(__this, ___capacity, method) (( void (*) (List_1_t1484 *, int32_t, const MethodInfo*))List_1__ctor_m9024_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.cctor()
extern "C" void List_1__cctor_m9026_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m9026(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m9026_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m9028_gshared (List_1_t1484 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m9028(__this, method) (( Object_t* (*) (List_1_t1484 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m9028_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m9030_gshared (List_1_t1484 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m9030(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t1484 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m9030_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m9032_gshared (List_1_t1484 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m9032(__this, method) (( Object_t * (*) (List_1_t1484 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m9032_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m9034_gshared (List_1_t1484 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m9034(__this, ___item, method) (( int32_t (*) (List_1_t1484 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m9034_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m9036_gshared (List_1_t1484 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m9036(__this, ___item, method) (( bool (*) (List_1_t1484 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m9036_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m9038_gshared (List_1_t1484 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m9038(__this, ___item, method) (( int32_t (*) (List_1_t1484 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m9038_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m9040_gshared (List_1_t1484 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m9040(__this, ___index, ___item, method) (( void (*) (List_1_t1484 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m9040_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m9042_gshared (List_1_t1484 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m9042(__this, ___item, method) (( void (*) (List_1_t1484 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m9042_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m9044_gshared (List_1_t1484 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m9044(__this, method) (( bool (*) (List_1_t1484 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m9044_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m9046_gshared (List_1_t1484 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m9046(__this, method) (( Object_t * (*) (List_1_t1484 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m9046_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m9048_gshared (List_1_t1484 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m9048(__this, ___index, method) (( Object_t * (*) (List_1_t1484 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m9048_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m9050_gshared (List_1_t1484 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m9050(__this, ___index, ___value, method) (( void (*) (List_1_t1484 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m9050_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
extern "C" void List_1_Add_m9052_gshared (List_1_t1484 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Add_m9052(__this, ___item, method) (( void (*) (List_1_t1484 *, Object_t *, const MethodInfo*))List_1_Add_m9052_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m9054_gshared (List_1_t1484 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m9054(__this, ___newCount, method) (( void (*) (List_1_t1484 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m9054_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
extern "C" void List_1_Clear_m9056_gshared (List_1_t1484 * __this, const MethodInfo* method);
#define List_1_Clear_m9056(__this, method) (( void (*) (List_1_t1484 *, const MethodInfo*))List_1_Clear_m9056_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(T)
extern "C" bool List_1_Contains_m9058_gshared (List_1_t1484 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Contains_m9058(__this, ___item, method) (( bool (*) (List_1_t1484 *, Object_t *, const MethodInfo*))List_1_Contains_m9058_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m9060_gshared (List_1_t1484 * __this, ObjectU5BU5D_t41* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m9060(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t1484 *, ObjectU5BU5D_t41*, int32_t, const MethodInfo*))List_1_CopyTo_m9060_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
extern "C" Enumerator_t1485  List_1_GetEnumerator_m9061_gshared (List_1_t1484 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m9061(__this, method) (( Enumerator_t1485  (*) (List_1_t1484 *, const MethodInfo*))List_1_GetEnumerator_m9061_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m9063_gshared (List_1_t1484 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_IndexOf_m9063(__this, ___item, method) (( int32_t (*) (List_1_t1484 *, Object_t *, const MethodInfo*))List_1_IndexOf_m9063_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m9065_gshared (List_1_t1484 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m9065(__this, ___start, ___delta, method) (( void (*) (List_1_t1484 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m9065_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m9067_gshared (List_1_t1484 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m9067(__this, ___index, method) (( void (*) (List_1_t1484 *, int32_t, const MethodInfo*))List_1_CheckIndex_m9067_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m9069_gshared (List_1_t1484 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_Insert_m9069(__this, ___index, ___item, method) (( void (*) (List_1_t1484 *, int32_t, Object_t *, const MethodInfo*))List_1_Insert_m9069_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
extern "C" bool List_1_Remove_m9071_gshared (List_1_t1484 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Remove_m9071(__this, ___item, method) (( bool (*) (List_1_t1484 *, Object_t *, const MethodInfo*))List_1_Remove_m9071_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m9073_gshared (List_1_t1484 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m9073(__this, ___index, method) (( void (*) (List_1_t1484 *, int32_t, const MethodInfo*))List_1_RemoveAt_m9073_gshared)(__this, ___index, method)
// T[] System.Collections.Generic.List`1<System.Object>::ToArray()
extern "C" ObjectU5BU5D_t41* List_1_ToArray_m9075_gshared (List_1_t1484 * __this, const MethodInfo* method);
#define List_1_ToArray_m9075(__this, method) (( ObjectU5BU5D_t41* (*) (List_1_t1484 *, const MethodInfo*))List_1_ToArray_m9075_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m9077_gshared (List_1_t1484 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m9077(__this, method) (( int32_t (*) (List_1_t1484 *, const MethodInfo*))List_1_get_Capacity_m9077_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m9079_gshared (List_1_t1484 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m9079(__this, ___value, method) (( void (*) (List_1_t1484 *, int32_t, const MethodInfo*))List_1_set_Capacity_m9079_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
extern "C" int32_t List_1_get_Count_m9081_gshared (List_1_t1484 * __this, const MethodInfo* method);
#define List_1_get_Count_m9081(__this, method) (( int32_t (*) (List_1_t1484 *, const MethodInfo*))List_1_get_Count_m9081_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * List_1_get_Item_m9083_gshared (List_1_t1484 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m9083(__this, ___index, method) (( Object_t * (*) (List_1_t1484 *, int32_t, const MethodInfo*))List_1_get_Item_m9083_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m9085_gshared (List_1_t1484 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_set_Item_m9085(__this, ___index, ___value, method) (( void (*) (List_1_t1484 *, int32_t, Object_t *, const MethodInfo*))List_1_set_Item_m9085_gshared)(__this, ___index, ___value, method)
