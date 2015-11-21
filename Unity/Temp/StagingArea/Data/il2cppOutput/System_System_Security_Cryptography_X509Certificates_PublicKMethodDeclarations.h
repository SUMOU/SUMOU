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
struct PublicKey_t410;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t423;
// System.Security.Cryptography.AsnEncodedData
struct AsnEncodedData_t412;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t411;
// System.Security.Cryptography.Oid
struct Oid_t413;
// System.Byte[]
struct ByteU5BU5D_t424;
// System.Security.Cryptography.DSA
struct DSA_t535;
// System.Security.Cryptography.RSA
struct RSA_t536;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Security.Cryptography.X509Certificates.PublicKey::.ctor(Mono.Security.X509.X509Certificate)
extern "C" void PublicKey__ctor_m1940 (PublicKey_t410 * __this, X509Certificate_t423 * ___certificate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::get_EncodedKeyValue()
extern "C" AsnEncodedData_t412 * PublicKey_get_EncodedKeyValue_m1941 (PublicKey_t410 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::get_EncodedParameters()
extern "C" AsnEncodedData_t412 * PublicKey_get_EncodedParameters_m1942 (PublicKey_t410 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsymmetricAlgorithm System.Security.Cryptography.X509Certificates.PublicKey::get_Key()
extern "C" AsymmetricAlgorithm_t411 * PublicKey_get_Key_m1943 (PublicKey_t410 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.Oid System.Security.Cryptography.X509Certificates.PublicKey::get_Oid()
extern "C" Oid_t413 * PublicKey_get_Oid_m1944 (PublicKey_t410 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.X509Certificates.PublicKey::GetUnsignedBigInteger(System.Byte[])
extern "C" ByteU5BU5D_t424* PublicKey_GetUnsignedBigInteger_m1945 (Object_t * __this /* static, unused */, ByteU5BU5D_t424* ___integer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSA System.Security.Cryptography.X509Certificates.PublicKey::DecodeDSA(System.Byte[],System.Byte[])
extern "C" DSA_t535 * PublicKey_DecodeDSA_m1946 (Object_t * __this /* static, unused */, ByteU5BU5D_t424* ___rawPublicKey, ByteU5BU5D_t424* ___rawParameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA System.Security.Cryptography.X509Certificates.PublicKey::DecodeRSA(System.Byte[])
extern "C" RSA_t536 * PublicKey_DecodeRSA_m1947 (Object_t * __this /* static, unused */, ByteU5BU5D_t424* ___rawPublicKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
