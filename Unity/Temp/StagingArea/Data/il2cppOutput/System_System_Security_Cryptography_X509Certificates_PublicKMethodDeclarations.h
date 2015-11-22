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

// System.Security.Cryptography.X509Certificates.PublicKey
struct PublicKey_t364;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t377;
// System.Security.Cryptography.AsnEncodedData
struct AsnEncodedData_t366;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t365;
// System.Security.Cryptography.Oid
struct Oid_t367;
// System.Byte[]
struct ByteU5BU5D_t378;
// System.Security.Cryptography.DSA
struct DSA_t490;
// System.Security.Cryptography.RSA
struct RSA_t491;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Security.Cryptography.X509Certificates.PublicKey::.ctor(Mono.Security.X509.X509Certificate)
extern "C" void PublicKey__ctor_m1425 (PublicKey_t364 * __this, X509Certificate_t377 * ___certificate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::get_EncodedKeyValue()
extern "C" AsnEncodedData_t366 * PublicKey_get_EncodedKeyValue_m1426 (PublicKey_t364 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::get_EncodedParameters()
extern "C" AsnEncodedData_t366 * PublicKey_get_EncodedParameters_m1427 (PublicKey_t364 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsymmetricAlgorithm System.Security.Cryptography.X509Certificates.PublicKey::get_Key()
extern "C" AsymmetricAlgorithm_t365 * PublicKey_get_Key_m1428 (PublicKey_t364 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.Oid System.Security.Cryptography.X509Certificates.PublicKey::get_Oid()
extern "C" Oid_t367 * PublicKey_get_Oid_m1429 (PublicKey_t364 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.X509Certificates.PublicKey::GetUnsignedBigInteger(System.Byte[])
extern "C" ByteU5BU5D_t378* PublicKey_GetUnsignedBigInteger_m1430 (Object_t * __this /* static, unused */, ByteU5BU5D_t378* ___integer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSA System.Security.Cryptography.X509Certificates.PublicKey::DecodeDSA(System.Byte[],System.Byte[])
extern "C" DSA_t490 * PublicKey_DecodeDSA_m1431 (Object_t * __this /* static, unused */, ByteU5BU5D_t378* ___rawPublicKey, ByteU5BU5D_t378* ___rawParameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA System.Security.Cryptography.X509Certificates.PublicKey::DecodeRSA(System.Byte[])
extern "C" RSA_t491 * PublicKey_DecodeRSA_m1432 (Object_t * __this /* static, unused */, ByteU5BU5D_t378* ___rawPublicKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
