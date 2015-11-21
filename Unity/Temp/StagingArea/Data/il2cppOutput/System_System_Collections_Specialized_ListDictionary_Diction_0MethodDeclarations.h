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

// System.Collections.Specialized.ListDictionary/DictionaryNodeEnumerator
struct DictionaryNodeEnumerator_t363;
// System.Collections.Specialized.ListDictionary
struct ListDictionary_t361;
// System.Object
struct Object_t;
// System.Collections.Specialized.ListDictionary/DictionaryNode
struct DictionaryNode_t362;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Specialized.ListDictionary/DictionaryNodeEnumerator::.ctor(System.Collections.Specialized.ListDictionary)
extern "C" void DictionaryNodeEnumerator__ctor_m1749 (DictionaryNodeEnumerator_t363 * __this, ListDictionary_t361 * ___dict, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.ListDictionary/DictionaryNodeEnumerator::FailFast()
extern "C" void DictionaryNodeEnumerator_FailFast_m1750 (DictionaryNodeEnumerator_t363 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Specialized.ListDictionary/DictionaryNodeEnumerator::MoveNext()
extern "C" bool DictionaryNodeEnumerator_MoveNext_m1751 (DictionaryNodeEnumerator_t363 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.ListDictionary/DictionaryNodeEnumerator::Reset()
extern "C" void DictionaryNodeEnumerator_Reset_m1752 (DictionaryNodeEnumerator_t363 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Specialized.ListDictionary/DictionaryNodeEnumerator::get_Current()
extern "C" Object_t * DictionaryNodeEnumerator_get_Current_m1753 (DictionaryNodeEnumerator_t363 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Specialized.ListDictionary/DictionaryNode System.Collections.Specialized.ListDictionary/DictionaryNodeEnumerator::get_DictionaryNode()
extern "C" DictionaryNode_t362 * DictionaryNodeEnumerator_get_DictionaryNode_m1754 (DictionaryNodeEnumerator_t363 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.DictionaryEntry System.Collections.Specialized.ListDictionary/DictionaryNodeEnumerator::get_Entry()
extern "C" DictionaryEntry_t72  DictionaryNodeEnumerator_get_Entry_m1755 (DictionaryNodeEnumerator_t363 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Specialized.ListDictionary/DictionaryNodeEnumerator::get_Key()
extern "C" Object_t * DictionaryNodeEnumerator_get_Key_m1756 (DictionaryNodeEnumerator_t363 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Specialized.ListDictionary/DictionaryNodeEnumerator::get_Value()
extern "C" Object_t * DictionaryNodeEnumerator_get_Value_m1757 (DictionaryNodeEnumerator_t363 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
