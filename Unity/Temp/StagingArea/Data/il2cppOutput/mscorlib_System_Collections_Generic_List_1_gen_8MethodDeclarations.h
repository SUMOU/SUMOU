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
struct List_1_t1437;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t39;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t5;
// System.Object
struct Object_t;
// System.Object[]
struct ObjectU5BU5D_t230;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_1.h"

// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C" void List_1__ctor_m8500_gshared (List_1_t1437 * __this, const MethodInfo* method);
#define List_1__ctor_m8500(__this, method) (( void (*) (List_1_t1437 *, const MethodInfo*))List_1__ctor_m8500_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
extern "C" void List_1__ctor_m8502_gshared (List_1_t1437 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m8502(__this, ___capacity, method) (( void (*) (List_1_t1437 *, int32_t, const MethodInfo*))List_1__ctor_m8502_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.cctor()
extern "C" void List_1__cctor_m8504_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m8504(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m8504_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m8506_gshared (List_1_t1437 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m8506(__this, method) (( Object_t* (*) (List_1_t1437 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m8506_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m8508_gshared (List_1_t1437 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m8508(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t1437 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m8508_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m8510_gshared (List_1_t1437 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m8510(__this, method) (( Object_t * (*) (List_1_t1437 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m8510_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m8512_gshared (List_1_t1437 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m8512(__this, ___item, method) (( int32_t (*) (List_1_t1437 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m8512_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m8514_gshared (List_1_t1437 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m8514(__this, ___item, method) (( bool (*) (List_1_t1437 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m8514_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m8516_gshared (List_1_t1437 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m8516(__this, ___item, method) (( int32_t (*) (List_1_t1437 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m8516_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m8518_gshared (List_1_t1437 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m8518(__this, ___index, ___item, method) (( void (*) (List_1_t1437 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m8518_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m8520_gshared (List_1_t1437 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m8520(__this, ___item, method) (( void (*) (List_1_t1437 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m8520_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m8522_gshared (List_1_t1437 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m8522(__this, method) (( bool (*) (List_1_t1437 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m8522_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m8524_gshared (List_1_t1437 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m8524(__this, method) (( Object_t * (*) (List_1_t1437 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m8524_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m8526_gshared (List_1_t1437 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m8526(__this, ___index, method) (( Object_t * (*) (List_1_t1437 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m8526_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m8528_gshared (List_1_t1437 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m8528(__this, ___index, ___value, method) (( void (*) (List_1_t1437 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m8528_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
extern "C" void List_1_Add_m8530_gshared (List_1_t1437 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Add_m8530(__this, ___item, method) (( void (*) (List_1_t1437 *, Object_t *, const MethodInfo*))List_1_Add_m8530_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m8532_gshared (List_1_t1437 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m8532(__this, ___newCount, method) (( void (*) (List_1_t1437 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m8532_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
extern "C" void List_1_Clear_m8534_gshared (List_1_t1437 * __this, const MethodInfo* method);
#define List_1_Clear_m8534(__this, method) (( void (*) (List_1_t1437 *, const MethodInfo*))List_1_Clear_m8534_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(T)
extern "C" bool List_1_Contains_m8536_gshared (List_1_t1437 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Contains_m8536(__this, ___item, method) (( bool (*) (List_1_t1437 *, Object_t *, const MethodInfo*))List_1_Contains_m8536_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m8538_gshared (List_1_t1437 * __this, ObjectU5BU5D_t230* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m8538(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t1437 *, ObjectU5BU5D_t230*, int32_t, const MethodInfo*))List_1_CopyTo_m8538_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
extern "C" Enumerator_t1439  List_1_GetEnumerator_m8539_gshared (List_1_t1437 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m8539(__this, method) (( Enumerator_t1439  (*) (List_1_t1437 *, const MethodInfo*))List_1_GetEnumerator_m8539_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m8541_gshared (List_1_t1437 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_IndexOf_m8541(__this, ___item, method) (( int32_t (*) (List_1_t1437 *, Object_t *, const MethodInfo*))List_1_IndexOf_m8541_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m8543_gshared (List_1_t1437 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m8543(__this, ___start, ___delta, method) (( void (*) (List_1_t1437 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m8543_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m8545_gshared (List_1_t1437 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m8545(__this, ___index, method) (( void (*) (List_1_t1437 *, int32_t, const MethodInfo*))List_1_CheckIndex_m8545_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m8547_gshared (List_1_t1437 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_Insert_m8547(__this, ___index, ___item, method) (( void (*) (List_1_t1437 *, int32_t, Object_t *, const MethodInfo*))List_1_Insert_m8547_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
extern "C" bool List_1_Remove_m8549_gshared (List_1_t1437 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Remove_m8549(__this, ___item, method) (( bool (*) (List_1_t1437 *, Object_t *, const MethodInfo*))List_1_Remove_m8549_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m8551_gshared (List_1_t1437 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m8551(__this, ___index, method) (( void (*) (List_1_t1437 *, int32_t, const MethodInfo*))List_1_RemoveAt_m8551_gshared)(__this, ___index, method)
// T[] System.Collections.Generic.List`1<System.Object>::ToArray()
extern "C" ObjectU5BU5D_t230* List_1_ToArray_m8552_gshared (List_1_t1437 * __this, const MethodInfo* method);
#define List_1_ToArray_m8552(__this, method) (( ObjectU5BU5D_t230* (*) (List_1_t1437 *, const MethodInfo*))List_1_ToArray_m8552_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m8554_gshared (List_1_t1437 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m8554(__this, method) (( int32_t (*) (List_1_t1437 *, const MethodInfo*))List_1_get_Capacity_m8554_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m8556_gshared (List_1_t1437 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m8556(__this, ___value, method) (( void (*) (List_1_t1437 *, int32_t, const MethodInfo*))List_1_set_Capacity_m8556_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
extern "C" int32_t List_1_get_Count_m8558_gshared (List_1_t1437 * __this, const MethodInfo* method);
#define List_1_get_Count_m8558(__this, method) (( int32_t (*) (List_1_t1437 *, const MethodInfo*))List_1_get_Count_m8558_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * List_1_get_Item_m8560_gshared (List_1_t1437 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m8560(__this, ___index, method) (( Object_t * (*) (List_1_t1437 *, int32_t, const MethodInfo*))List_1_get_Item_m8560_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m8562_gshared (List_1_t1437 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_set_Item_m8562(__this, ___index, ___value, method) (( void (*) (List_1_t1437 *, int32_t, Object_t *, const MethodInfo*))List_1_set_Item_m8562_gshared)(__this, ___index, ___value, method)
