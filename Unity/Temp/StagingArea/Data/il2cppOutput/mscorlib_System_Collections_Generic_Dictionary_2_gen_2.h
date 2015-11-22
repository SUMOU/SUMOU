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
// Boo.Lang.Runtime.DynamicDispatching.DispatcherKey[]
struct DispatcherKeyU5BU5D_t1563;
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher[]
struct DispatcherU5BU5D_t1564;
// System.Collections.Generic.IEqualityComparer`1<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey>
struct IEqualityComparer_1_t287;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t323;
// System.Collections.Generic.Dictionary`2/Transform`1<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher,System.Collections.DictionaryEntry>
struct Transform_1_t1565;

#include "mscorlib_System_Object.h"

// System.Collections.Generic.Dictionary`2<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>
struct  Dictionary_2_t284  : public Object_t
{
	// System.Int32[] System.Collections.Generic.Dictionary`2<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>::table
	Int32U5BU5D_t419* ___table_0;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>::linkSlots
	LinkU5BU5D_t1466* ___linkSlots_1;
	// TKey[] System.Collections.Generic.Dictionary`2<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>::keySlots
	DispatcherKeyU5BU5D_t1563* ___keySlots_2;
	// TValue[] System.Collections.Generic.Dictionary`2<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>::valueSlots
	DispatcherU5BU5D_t1564* ___valueSlots_3;
	// System.Int32 System.Collections.Generic.Dictionary`2<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>::touchedSlots
	int32_t ___touchedSlots_4;
	// System.Int32 System.Collections.Generic.Dictionary`2<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>::emptySlot
	int32_t ___emptySlot_5;
	// System.Int32 System.Collections.Generic.Dictionary`2<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>::count
	int32_t ___count_6;
	// System.Int32 System.Collections.Generic.Dictionary`2<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>::threshold
	int32_t ___threshold_7;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>::hcp
	Object_t* ___hcp_8;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>::serialization_info
	SerializationInfo_t323 * ___serialization_info_9;
	// System.Int32 System.Collections.Generic.Dictionary`2<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>::generation
	int32_t ___generation_10;
};
struct Dictionary_2_t284_StaticFields{
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>::<>f__am$cacheB
	Transform_1_t1565 * ___U3CU3Ef__amU24cacheB_11;
};
