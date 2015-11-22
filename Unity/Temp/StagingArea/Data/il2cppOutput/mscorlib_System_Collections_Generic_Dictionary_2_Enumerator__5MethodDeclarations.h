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

// System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>
struct Dictionary_2_t1536;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__5.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_5.h"
#include "UnityEngine_UnityEngine_TextEditor_TextEditOp.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m9697_gshared (Enumerator_t1543 * __this, Dictionary_2_t1536 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m9697(__this, ___dictionary, method) (( void (*) (Enumerator_t1543 *, Dictionary_2_t1536 *, const MethodInfo*))Enumerator__ctor_m9697_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m9698_gshared (Enumerator_t1543 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m9698(__this, method) (( Object_t * (*) (Enumerator_t1543 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m9698_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m9699_gshared (Enumerator_t1543 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m9699(__this, method) (( void (*) (Enumerator_t1543 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m9699_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t488  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m9700_gshared (Enumerator_t1543 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m9700(__this, method) (( DictionaryEntry_t488  (*) (Enumerator_t1543 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m9700_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m9701_gshared (Enumerator_t1543 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m9701(__this, method) (( Object_t * (*) (Enumerator_t1543 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m9701_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m9702_gshared (Enumerator_t1543 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m9702(__this, method) (( Object_t * (*) (Enumerator_t1543 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m9702_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::MoveNext()
extern "C" bool Enumerator_MoveNext_m9703_gshared (Enumerator_t1543 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m9703(__this, method) (( bool (*) (Enumerator_t1543 *, const MethodInfo*))Enumerator_MoveNext_m9703_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::get_Current()
extern "C" KeyValuePair_2_t1538  Enumerator_get_Current_m9704_gshared (Enumerator_t1543 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m9704(__this, method) (( KeyValuePair_2_t1538  (*) (Enumerator_t1543 *, const MethodInfo*))Enumerator_get_Current_m9704_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m9705_gshared (Enumerator_t1543 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m9705(__this, method) (( Object_t * (*) (Enumerator_t1543 *, const MethodInfo*))Enumerator_get_CurrentKey_m9705_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::get_CurrentValue()
extern "C" int32_t Enumerator_get_CurrentValue_m9706_gshared (Enumerator_t1543 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m9706(__this, method) (( int32_t (*) (Enumerator_t1543 *, const MethodInfo*))Enumerator_get_CurrentValue_m9706_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::Reset()
extern "C" void Enumerator_Reset_m9707_gshared (Enumerator_t1543 * __this, const MethodInfo* method);
#define Enumerator_Reset_m9707(__this, method) (( void (*) (Enumerator_t1543 *, const MethodInfo*))Enumerator_Reset_m9707_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::VerifyState()
extern "C" void Enumerator_VerifyState_m9708_gshared (Enumerator_t1543 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m9708(__this, method) (( void (*) (Enumerator_t1543 *, const MethodInfo*))Enumerator_VerifyState_m9708_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m9709_gshared (Enumerator_t1543 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m9709(__this, method) (( void (*) (Enumerator_t1543 *, const MethodInfo*))Enumerator_VerifyCurrent_m9709_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::Dispose()
extern "C" void Enumerator_Dispose_m9710_gshared (Enumerator_t1543 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m9710(__this, method) (( void (*) (Enumerator_t1543 *, const MethodInfo*))Enumerator_Dispose_m9710_gshared)(__this, method)
