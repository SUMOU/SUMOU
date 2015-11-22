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

// System.Text.RegularExpressions.Syntax.BackslashNumber
struct BackslashNumber_t468;
// System.String
struct String_t;
// System.Collections.Hashtable
struct Hashtable_t314;
// System.Text.RegularExpressions.ICompiler
struct ICompiler_t499;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Text.RegularExpressions.Syntax.BackslashNumber::.ctor(System.Boolean,System.Boolean)
extern "C" void BackslashNumber__ctor_m2009 (BackslashNumber_t468 * __this, bool ___ignore, bool ___ecma, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Syntax.BackslashNumber::ResolveReference(System.String,System.Collections.Hashtable)
extern "C" bool BackslashNumber_ResolveReference_m2010 (BackslashNumber_t468 * __this, String_t* ___num_str, Hashtable_t314 * ___groups, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.BackslashNumber::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
extern "C" void BackslashNumber_Compile_m2011 (BackslashNumber_t468 * __this, Object_t * ___cmp, bool ___reverse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
