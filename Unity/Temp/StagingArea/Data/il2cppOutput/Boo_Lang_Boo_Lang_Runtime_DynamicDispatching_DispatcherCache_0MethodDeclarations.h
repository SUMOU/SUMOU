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

// Boo.Lang.Runtime.DynamicDispatching.DispatcherCache
struct DispatcherCache_t283;
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher
struct Dispatcher_t282;
// Boo.Lang.Runtime.DynamicDispatching.DispatcherKey
struct DispatcherKey_t286;
// Boo.Lang.Runtime.DynamicDispatching.DispatcherCache/DispatcherFactory
struct DispatcherFactory_t281;

#include "codegen/il2cpp-codegen.h"

// System.Void Boo.Lang.Runtime.DynamicDispatching.DispatcherCache::.ctor()
extern "C" void DispatcherCache__ctor_m1150 (DispatcherCache_t283 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Boo.Lang.Runtime.DynamicDispatching.DispatcherCache::.cctor()
extern "C" void DispatcherCache__cctor_m1151 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher Boo.Lang.Runtime.DynamicDispatching.DispatcherCache::Get(Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.DispatcherCache/DispatcherFactory)
extern "C" Dispatcher_t282 * DispatcherCache_Get_m1152 (DispatcherCache_t283 * __this, DispatcherKey_t286 * ___key, DispatcherFactory_t281 * ___factory, const MethodInfo* method) IL2CPP_METHOD_ATTR;
