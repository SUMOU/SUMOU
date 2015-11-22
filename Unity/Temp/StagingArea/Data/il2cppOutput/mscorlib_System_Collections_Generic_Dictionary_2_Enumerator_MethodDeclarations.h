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
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator_.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m8956_gshared (Enumerator_t1478 * __this, Dictionary_2_t1469 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m8956(__this, ___dictionary, method) (( void (*) (Enumerator_t1478 *, Dictionary_2_t1469 *, const MethodInfo*))Enumerator__ctor_m8956_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m8957_gshared (Enumerator_t1478 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m8957(__this, method) (( Object_t * (*) (Enumerator_t1478 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m8957_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m8958_gshared (Enumerator_t1478 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m8958(__this, method) (( void (*) (Enumerator_t1478 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m8958_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t488  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m8959_gshared (Enumerator_t1478 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m8959(__this, method) (( DictionaryEntry_t488  (*) (Enumerator_t1478 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m8959_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m8960_gshared (Enumerator_t1478 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m8960(__this, method) (( Object_t * (*) (Enumerator_t1478 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m8960_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m8961_gshared (Enumerator_t1478 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m8961(__this, method) (( Object_t * (*) (Enumerator_t1478 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m8961_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::MoveNext()
extern "C" bool Enumerator_MoveNext_m8962_gshared (Enumerator_t1478 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m8962(__this, method) (( bool (*) (Enumerator_t1478 *, const MethodInfo*))Enumerator_MoveNext_m8962_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_Current()
extern "C" KeyValuePair_2_t1472  Enumerator_get_Current_m8963_gshared (Enumerator_t1478 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m8963(__this, method) (( KeyValuePair_2_t1472  (*) (Enumerator_t1478 *, const MethodInfo*))Enumerator_get_Current_m8963_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m8964_gshared (Enumerator_t1478 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m8964(__this, method) (( Object_t * (*) (Enumerator_t1478 *, const MethodInfo*))Enumerator_get_CurrentKey_m8964_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_CurrentValue()
extern "C" int32_t Enumerator_get_CurrentValue_m8965_gshared (Enumerator_t1478 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m8965(__this, method) (( int32_t (*) (Enumerator_t1478 *, const MethodInfo*))Enumerator_get_CurrentValue_m8965_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::Reset()
extern "C" void Enumerator_Reset_m8966_gshared (Enumerator_t1478 * __this, const MethodInfo* method);
#define Enumerator_Reset_m8966(__this, method) (( void (*) (Enumerator_t1478 *, const MethodInfo*))Enumerator_Reset_m8966_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::VerifyState()
extern "C" void Enumerator_VerifyState_m8967_gshared (Enumerator_t1478 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m8967(__this, method) (( void (*) (Enumerator_t1478 *, const MethodInfo*))Enumerator_VerifyState_m8967_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m8968_gshared (Enumerator_t1478 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m8968(__this, method) (( void (*) (Enumerator_t1478 *, const MethodInfo*))Enumerator_VerifyCurrent_m8968_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::Dispose()
extern "C" void Enumerator_Dispose_m8969_gshared (Enumerator_t1478 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m8969(__this, method) (( void (*) (Enumerator_t1478 *, const MethodInfo*))Enumerator_Dispose_m8969_gshared)(__this, method)
