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

// Boo.Lang.Runtime.DynamicDispatching.Emitters.DispatcherEmitter
struct DispatcherEmitter_t288;
// System.Type
struct Type_t;
// System.String
struct String_t;
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher
struct Dispatcher_t282;

#include "codegen/il2cpp-codegen.h"

// System.Void Boo.Lang.Runtime.DynamicDispatching.Emitters.DispatcherEmitter::.ctor(System.Type,System.String)
extern "C" void DispatcherEmitter__ctor_m1158 (DispatcherEmitter_t288 * __this, Type_t * ___owner, String_t* ___dynamicMethodName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher Boo.Lang.Runtime.DynamicDispatching.Emitters.DispatcherEmitter::Emit()
extern "C" Dispatcher_t282 * DispatcherEmitter_Emit_m1159 (DispatcherEmitter_t288 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher Boo.Lang.Runtime.DynamicDispatching.Emitters.DispatcherEmitter::CreateMethodDispatcher()
extern "C" Dispatcher_t282 * DispatcherEmitter_CreateMethodDispatcher_m1160 (DispatcherEmitter_t288 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Boo.Lang.Runtime.DynamicDispatching.Emitters.DispatcherEmitter::EmitCastOrUnbox(System.Type)
extern "C" void DispatcherEmitter_EmitCastOrUnbox_m1161 (DispatcherEmitter_t288 * __this, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Boo.Lang.Runtime.DynamicDispatching.Emitters.DispatcherEmitter::BoxIfNeeded(System.Type)
extern "C" void DispatcherEmitter_BoxIfNeeded_m1162 (DispatcherEmitter_t288 * __this, Type_t * ___returnType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Boo.Lang.Runtime.DynamicDispatching.Emitters.DispatcherEmitter::EmitReturn(System.Type)
extern "C" void DispatcherEmitter_EmitReturn_m1163 (DispatcherEmitter_t288 * __this, Type_t * ___typeOnStack, const MethodInfo* method) IL2CPP_METHOD_ATTR;
