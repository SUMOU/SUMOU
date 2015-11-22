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

// System.Security.Cryptography.SHA256
struct SHA256_t678;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Security.Cryptography.SHA256::.ctor()
extern "C" void SHA256__ctor_m7071 (SHA256_t678 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.SHA256 System.Security.Cryptography.SHA256::Create()
extern "C" SHA256_t678 * SHA256_Create_m3214 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.SHA256 System.Security.Cryptography.SHA256::Create(System.String)
extern "C" SHA256_t678 * SHA256_Create_m7072 (Object_t * __this /* static, unused */, String_t* ___hashName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
