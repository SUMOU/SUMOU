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

// Mono.Security.X509.Extensions.KeyUsageExtension
struct KeyUsageExtension_t636;
// Mono.Security.X509.X509Extension
struct X509Extension_t540;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "Mono_Security_Mono_Security_X509_Extensions_KeyUsages.h"

// System.Void Mono.Security.X509.Extensions.KeyUsageExtension::.ctor(Mono.Security.X509.X509Extension)
extern "C" void KeyUsageExtension__ctor_m3178 (KeyUsageExtension_t636 * __this, X509Extension_t540 * ___extension, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.Extensions.KeyUsageExtension::Decode()
extern "C" void KeyUsageExtension_Decode_m3179 (KeyUsageExtension_t636 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.Extensions.KeyUsageExtension::Encode()
extern "C" void KeyUsageExtension_Encode_m3180 (KeyUsageExtension_t636 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.Extensions.KeyUsageExtension::Support(Mono.Security.X509.Extensions.KeyUsages)
extern "C" bool KeyUsageExtension_Support_m3181 (KeyUsageExtension_t636 * __this, int32_t ___usage, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.Extensions.KeyUsageExtension::ToString()
extern "C" String_t* KeyUsageExtension_ToString_m3182 (KeyUsageExtension_t636 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
