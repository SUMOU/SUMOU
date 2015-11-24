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

// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t582;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Security.Cryptography.RandomNumberGenerator::.ctor()
extern "C" void RandomNumberGenerator__ctor_m7534 (RandomNumberGenerator_t582 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RandomNumberGenerator System.Security.Cryptography.RandomNumberGenerator::Create()
extern "C" RandomNumberGenerator_t582 * RandomNumberGenerator_Create_m2847 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RandomNumberGenerator System.Security.Cryptography.RandomNumberGenerator::Create(System.String)
extern "C" RandomNumberGenerator_t582 * RandomNumberGenerator_Create_m7535 (Object_t * __this /* static, unused */, String_t* ___rngName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
