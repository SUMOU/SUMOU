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

// System.SystemException
struct SystemException_t528;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t323;
// System.Exception
struct Exception_t13;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.SystemException::.ctor()
extern "C" void SystemException__ctor_m8316 (SystemException_t528 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.SystemException::.ctor(System.String)
extern "C" void SystemException__ctor_m2258 (SystemException_t528 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.SystemException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void SystemException__ctor_m8317 (SystemException_t528 * __this, SerializationInfo_t323 * ___info, StreamingContext_t489  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.SystemException::.ctor(System.String,System.Exception)
extern "C" void SystemException__ctor_m8318 (SystemException_t528 * __this, String_t* ___message, Exception_t13 * ___innerException, const MethodInfo* method) IL2CPP_METHOD_ATTR;
