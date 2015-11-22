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

// Mono.Security.Protocol.Tls.RSASslSignatureDeformatter
struct RSASslSignatureDeformatter_t627;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t365;
// System.Byte[]
struct ByteU5BU5D_t378;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Security.Protocol.Tls.RSASslSignatureDeformatter::.ctor(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C" void RSASslSignatureDeformatter__ctor_m2905 (RSASslSignatureDeformatter_t627 * __this, AsymmetricAlgorithm_t365 * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.RSASslSignatureDeformatter::VerifySignature(System.Byte[],System.Byte[])
extern "C" bool RSASslSignatureDeformatter_VerifySignature_m2906 (RSASslSignatureDeformatter_t627 * __this, ByteU5BU5D_t378* ___rgbHash, ByteU5BU5D_t378* ___rgbSignature, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RSASslSignatureDeformatter::SetHashAlgorithm(System.String)
extern "C" void RSASslSignatureDeformatter_SetHashAlgorithm_m2907 (RSASslSignatureDeformatter_t627 * __this, String_t* ___strName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RSASslSignatureDeformatter::SetKey(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C" void RSASslSignatureDeformatter_SetKey_m2908 (RSASslSignatureDeformatter_t627 * __this, AsymmetricAlgorithm_t365 * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
