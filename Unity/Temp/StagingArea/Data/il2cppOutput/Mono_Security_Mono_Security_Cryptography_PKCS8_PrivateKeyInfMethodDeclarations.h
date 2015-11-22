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

// Mono.Security.Cryptography.PKCS8/PrivateKeyInfo
struct PrivateKeyInfo_t576;
// System.Byte[]
struct ByteU5BU5D_t378;
// System.Security.Cryptography.RSA
struct RSA_t491;
// System.Security.Cryptography.DSA
struct DSA_t490;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Cryptography_DSAParameters.h"

// System.Void Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::.ctor()
extern "C" void PrivateKeyInfo__ctor_m2488 (PrivateKeyInfo_t576 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::.ctor(System.Byte[])
extern "C" void PrivateKeyInfo__ctor_m2489 (PrivateKeyInfo_t576 * __this, ByteU5BU5D_t378* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::get_PrivateKey()
extern "C" ByteU5BU5D_t378* PrivateKeyInfo_get_PrivateKey_m2490 (PrivateKeyInfo_t576 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::Decode(System.Byte[])
extern "C" void PrivateKeyInfo_Decode_m2491 (PrivateKeyInfo_t576 * __this, ByteU5BU5D_t378* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::RemoveLeadingZero(System.Byte[])
extern "C" ByteU5BU5D_t378* PrivateKeyInfo_RemoveLeadingZero_m2492 (Object_t * __this /* static, unused */, ByteU5BU5D_t378* ___bigInt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::Normalize(System.Byte[],System.Int32)
extern "C" ByteU5BU5D_t378* PrivateKeyInfo_Normalize_m2493 (Object_t * __this /* static, unused */, ByteU5BU5D_t378* ___bigInt, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::DecodeRSA(System.Byte[])
extern "C" RSA_t491 * PrivateKeyInfo_DecodeRSA_m2494 (Object_t * __this /* static, unused */, ByteU5BU5D_t378* ___keypair, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSA Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::DecodeDSA(System.Byte[],System.Security.Cryptography.DSAParameters)
extern "C" DSA_t490 * PrivateKeyInfo_DecodeDSA_m2495 (Object_t * __this /* static, unused */, ByteU5BU5D_t378* ___privateKey, DSAParameters_t516  ___dsaParameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
