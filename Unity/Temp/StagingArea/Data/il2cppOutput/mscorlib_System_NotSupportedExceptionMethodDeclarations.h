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

// System.NotSupportedException
struct NotSupportedException_t53;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t369;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.NotSupportedException::.ctor()
extern "C" void NotSupportedException__ctor_m337 (NotSupportedException_t53 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NotSupportedException::.ctor(System.String)
extern "C" void NotSupportedException__ctor_m2643 (NotSupportedException_t53 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NotSupportedException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void NotSupportedException__ctor_m8688 (NotSupportedException_t53 * __this, SerializationInfo_t369 * ___info, StreamingContext_t534  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
