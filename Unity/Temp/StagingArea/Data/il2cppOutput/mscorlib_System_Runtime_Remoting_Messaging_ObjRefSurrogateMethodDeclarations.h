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

// System.Runtime.Remoting.Messaging.ObjRefSurrogate
struct ObjRefSurrogate_t1121;
// System.Object
struct Object_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t369;
// System.Runtime.Serialization.ISurrogateSelector
struct ISurrogateSelector_t1123;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Runtime.Remoting.Messaging.ObjRefSurrogate::.ctor()
extern "C" void ObjRefSurrogate__ctor_m6967 (ObjRefSurrogate_t1121 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.Messaging.ObjRefSurrogate::SetObjectData(System.Object,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext,System.Runtime.Serialization.ISurrogateSelector)
extern "C" Object_t * ObjRefSurrogate_SetObjectData_m6968 (ObjRefSurrogate_t1121 * __this, Object_t * ___obj, SerializationInfo_t369 * ___si, StreamingContext_t534  ___sc, Object_t * ___selector, const MethodInfo* method) IL2CPP_METHOD_ATTR;
