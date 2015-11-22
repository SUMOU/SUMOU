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

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
struct ValueCollection_t1513;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t1509;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t39;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t5;
// System.Object[]
struct ObjectU5BU5D_t230;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_8.h"

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ValueCollection__ctor_m9373_gshared (ValueCollection_t1513 * __this, Dictionary_2_t1509 * ___dictionary, const MethodInfo* method);
#define ValueCollection__ctor_m9373(__this, ___dictionary, method) (( void (*) (ValueCollection_t1513 *, Dictionary_2_t1509 *, const MethodInfo*))ValueCollection__ctor_m9373_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m9374_gshared (ValueCollection_t1513 * __this, Object_t * ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m9374(__this, ___item, method) (( void (*) (ValueCollection_t1513 *, Object_t *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m9374_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::System.Collections.Generic.ICollection<TValue>.Clear()
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m9375_gshared (ValueCollection_t1513 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m9375(__this, method) (( void (*) (ValueCollection_t1513 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m9375_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m9376_gshared (ValueCollection_t1513 * __this, Object_t * ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m9376(__this, ___item, method) (( bool (*) (ValueCollection_t1513 *, Object_t *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m9376_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m9377_gshared (ValueCollection_t1513 * __this, Object_t * ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m9377(__this, ___item, method) (( bool (*) (ValueCollection_t1513 *, Object_t *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m9377_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
extern "C" Object_t* ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m9378_gshared (ValueCollection_t1513 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m9378(__this, method) (( Object_t* (*) (ValueCollection_t1513 *, const MethodInfo*))ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m9378_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void ValueCollection_System_Collections_ICollection_CopyTo_m9379_gshared (ValueCollection_t1513 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_CopyTo_m9379(__this, ___array, ___index, method) (( void (*) (ValueCollection_t1513 *, Array_t *, int32_t, const MethodInfo*))ValueCollection_System_Collections_ICollection_CopyTo_m9379_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * ValueCollection_System_Collections_IEnumerable_GetEnumerator_m9380_gshared (ValueCollection_t1513 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_IEnumerable_GetEnumerator_m9380(__this, method) (( Object_t * (*) (ValueCollection_t1513 *, const MethodInfo*))ValueCollection_System_Collections_IEnumerable_GetEnumerator_m9380_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m9381_gshared (ValueCollection_t1513 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m9381(__this, method) (( bool (*) (ValueCollection_t1513 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m9381_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * ValueCollection_System_Collections_ICollection_get_SyncRoot_m9382_gshared (ValueCollection_t1513 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_get_SyncRoot_m9382(__this, method) (( Object_t * (*) (ValueCollection_t1513 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_SyncRoot_m9382_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::CopyTo(TValue[],System.Int32)
extern "C" void ValueCollection_CopyTo_m9383_gshared (ValueCollection_t1513 * __this, ObjectU5BU5D_t230* ___array, int32_t ___index, const MethodInfo* method);
#define ValueCollection_CopyTo_m9383(__this, ___array, ___index, method) (( void (*) (ValueCollection_t1513 *, ObjectU5BU5D_t230*, int32_t, const MethodInfo*))ValueCollection_CopyTo_m9383_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::GetEnumerator()
extern "C" Enumerator_t1514  ValueCollection_GetEnumerator_m9384_gshared (ValueCollection_t1513 * __this, const MethodInfo* method);
#define ValueCollection_GetEnumerator_m9384(__this, method) (( Enumerator_t1514  (*) (ValueCollection_t1513 *, const MethodInfo*))ValueCollection_GetEnumerator_m9384_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::get_Count()
extern "C" int32_t ValueCollection_get_Count_m9385_gshared (ValueCollection_t1513 * __this, const MethodInfo* method);
#define ValueCollection_get_Count_m9385(__this, method) (( int32_t (*) (ValueCollection_t1513 *, const MethodInfo*))ValueCollection_get_Count_m9385_gshared)(__this, method)
