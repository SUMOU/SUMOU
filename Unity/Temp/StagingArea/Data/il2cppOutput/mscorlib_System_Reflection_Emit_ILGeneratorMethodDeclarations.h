﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Reflection.Emit.ILGenerator
struct ILGenerator_t337;
// System.Reflection.Module
struct Module_t946;
// System.Reflection.Emit.TokenGenerator
struct TokenGenerator_t960;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t941;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Type
struct Type_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Reflection_Emit_OpCode.h"

// System.Void System.Reflection.Emit.ILGenerator::.ctor(System.Reflection.Module,System.Reflection.Emit.TokenGenerator,System.Int32)
extern "C" void ILGenerator__ctor_m6181 (ILGenerator_t337 * __this, Module_t946 * ___m, Object_t * ___token_gen, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ILGenerator::.cctor()
extern "C" void ILGenerator__cctor_m6182 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ILGenerator::add_token_fixup(System.Reflection.MemberInfo)
extern "C" void ILGenerator_add_token_fixup_m6183 (ILGenerator_t337 * __this, MemberInfo_t * ___mi, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ILGenerator::make_room(System.Int32)
extern "C" void ILGenerator_make_room_m6184 (ILGenerator_t337 * __this, int32_t ___nbytes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ILGenerator::emit_int(System.Int32)
extern "C" void ILGenerator_emit_int_m6185 (ILGenerator_t337 * __this, int32_t ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ILGenerator::ll_emit(System.Reflection.Emit.OpCode)
extern "C" void ILGenerator_ll_emit_m6186 (ILGenerator_t337 * __this, OpCode_t350  ___opcode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ILGenerator::Emit(System.Reflection.Emit.OpCode)
extern "C" void ILGenerator_Emit_m6187 (ILGenerator_t337 * __this, OpCode_t350  ___opcode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ILGenerator::Emit(System.Reflection.Emit.OpCode,System.Reflection.ConstructorInfo)
extern "C" void ILGenerator_Emit_m6188 (ILGenerator_t337 * __this, OpCode_t350  ___opcode, ConstructorInfo_t941 * ___con, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ILGenerator::Emit(System.Reflection.Emit.OpCode,System.Reflection.MethodInfo)
extern "C" void ILGenerator_Emit_m6189 (ILGenerator_t337 * __this, OpCode_t350  ___opcode, MethodInfo_t * ___meth, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ILGenerator::Emit(System.Reflection.Emit.OpCode,System.Type)
extern "C" void ILGenerator_Emit_m6190 (ILGenerator_t337 * __this, OpCode_t350  ___opcode, Type_t * ___cls, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ILGenerator::label_fixup()
extern "C" void ILGenerator_label_fixup_m6191 (ILGenerator_t337 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.ILGenerator::Mono_GetCurrentOffset(System.Reflection.Emit.ILGenerator)
extern "C" int32_t ILGenerator_Mono_GetCurrentOffset_m6192 (Object_t * __this /* static, unused */, ILGenerator_t337 * ___ig, const MethodInfo* method) IL2CPP_METHOD_ATTR;