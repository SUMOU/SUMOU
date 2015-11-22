#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Reflection.Emit.TypeBuilder[]
struct TypeBuilderU5BU5D_t918;
// System.Byte[]
struct ByteU5BU5D_t378;
// System.Reflection.Emit.AssemblyBuilder
struct AssemblyBuilder_t889;
// System.Reflection.Emit.TypeBuilder
struct TypeBuilder_t897;
// System.Collections.Hashtable
struct Hashtable_t314;
// System.Int32[]
struct Int32U5BU5D_t419;
// System.Reflection.Emit.ModuleBuilderTokenGenerator
struct ModuleBuilderTokenGenerator_t919;
// System.Diagnostics.SymbolStore.ISymbolWriter
struct ISymbolWriter_t920;
// System.Char[]
struct CharU5BU5D_t269;

#include "mscorlib_System_Reflection_Module.h"

// System.Reflection.Emit.ModuleBuilder
struct  ModuleBuilder_t893  : public Module_t901
{
	// System.Int32 System.Reflection.Emit.ModuleBuilder::num_types
	int32_t ___num_types_10;
	// System.Reflection.Emit.TypeBuilder[] System.Reflection.Emit.ModuleBuilder::types
	TypeBuilderU5BU5D_t918* ___types_11;
	// System.Byte[] System.Reflection.Emit.ModuleBuilder::guid
	ByteU5BU5D_t378* ___guid_12;
	// System.Int32 System.Reflection.Emit.ModuleBuilder::table_idx
	int32_t ___table_idx_13;
	// System.Reflection.Emit.AssemblyBuilder System.Reflection.Emit.ModuleBuilder::assemblyb
	AssemblyBuilder_t889 * ___assemblyb_14;
	// System.Reflection.Emit.TypeBuilder System.Reflection.Emit.ModuleBuilder::global_type
	TypeBuilder_t897 * ___global_type_15;
	// System.Collections.Hashtable System.Reflection.Emit.ModuleBuilder::name_cache
	Hashtable_t314 * ___name_cache_16;
	// System.Collections.Hashtable System.Reflection.Emit.ModuleBuilder::us_string_cache
	Hashtable_t314 * ___us_string_cache_17;
	// System.Int32[] System.Reflection.Emit.ModuleBuilder::table_indexes
	Int32U5BU5D_t419* ___table_indexes_18;
	// System.Boolean System.Reflection.Emit.ModuleBuilder::transient
	bool ___transient_19;
	// System.Reflection.Emit.ModuleBuilderTokenGenerator System.Reflection.Emit.ModuleBuilder::token_gen
	ModuleBuilderTokenGenerator_t919 * ___token_gen_20;
	// System.Diagnostics.SymbolStore.ISymbolWriter System.Reflection.Emit.ModuleBuilder::symbolWriter
	Object_t * ___symbolWriter_21;
};
struct ModuleBuilder_t893_StaticFields{
	// System.Char[] System.Reflection.Emit.ModuleBuilder::type_modifiers
	CharU5BU5D_t269* ___type_modifiers_22;
};
