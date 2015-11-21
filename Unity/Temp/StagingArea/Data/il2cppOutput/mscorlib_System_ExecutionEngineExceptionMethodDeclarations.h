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

// System.ExecutionEngineException
struct ExecutionEngineException_t1344;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t369;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.ExecutionEngineException::.ctor()
extern "C" void ExecutionEngineException__ctor_m8542 (ExecutionEngineException_t1344 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ExecutionEngineException::.ctor(System.String)
extern "C" void ExecutionEngineException__ctor_m8543 (ExecutionEngineException_t1344 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ExecutionEngineException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void ExecutionEngineException__ctor_m8544 (ExecutionEngineException_t1344 * __this, SerializationInfo_t369 * ___info, StreamingContext_t534  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
