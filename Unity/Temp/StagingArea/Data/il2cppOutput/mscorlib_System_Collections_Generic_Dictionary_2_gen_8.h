#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Int32[]
struct Int32U5BU5D_t419;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t1466;
// System.Object[]
struct ObjectU5BU5D_t230;
// UnityEngine.TextEditor/TextEditOp[]
struct TextEditOpU5BU5D_t1533;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1471;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t323;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,UnityEngine.TextEditor/TextEditOp,System.Collections.DictionaryEntry>
struct Transform_1_t1537;

#include "mscorlib_System_Object.h"

// System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>
struct  Dictionary_2_t1536  : public Object_t
{
	// System.Int32[] System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::table
	Int32U5BU5D_t419* ___table_0;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::linkSlots
	LinkU5BU5D_t1466* ___linkSlots_1;
	// TKey[] System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::keySlots
	ObjectU5BU5D_t230* ___keySlots_2;
	// TValue[] System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::valueSlots
	TextEditOpU5BU5D_t1533* ___valueSlots_3;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::touchedSlots
	int32_t ___touchedSlots_4;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::emptySlot
	int32_t ___emptySlot_5;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::count
	int32_t ___count_6;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::threshold
	int32_t ___threshold_7;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::hcp
	Object_t* ___hcp_8;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::serialization_info
	SerializationInfo_t323 * ___serialization_info_9;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::generation
	int32_t ___generation_10;
};
struct Dictionary_2_t1536_StaticFields{
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::<>f__am$cacheB
	Transform_1_t1537 * ___U3CU3Ef__amU24cacheB_11;
};
