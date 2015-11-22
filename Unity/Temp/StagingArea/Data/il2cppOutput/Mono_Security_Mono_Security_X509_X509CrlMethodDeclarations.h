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

// Mono.Security.X509.X509Crl
struct X509Crl_t494;
// System.Byte[]
struct ByteU5BU5D_t378;
// Mono.Security.X509.X509ExtensionCollection
struct X509ExtensionCollection_t524;
// System.String
struct String_t;
// Mono.Security.X509.X509Crl/X509CrlEntry
struct X509CrlEntry_t496;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t377;
// System.Security.Cryptography.DSA
struct DSA_t490;
// System.Security.Cryptography.RSA
struct RSA_t491;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t365;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_DateTime.h"

// System.Void Mono.Security.X509.X509Crl::.ctor(System.Byte[])
extern "C" void X509Crl__ctor_m2619 (X509Crl_t494 * __this, ByteU5BU5D_t378* ___crl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Crl::Parse(System.Byte[])
extern "C" void X509Crl_Parse_m2620 (X509Crl_t494 * __this, ByteU5BU5D_t378* ___crl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509ExtensionCollection Mono.Security.X509.X509Crl::get_Extensions()
extern "C" X509ExtensionCollection_t524 * X509Crl_get_Extensions_m2227 (X509Crl_t494 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Crl::get_Hash()
extern "C" ByteU5BU5D_t378* X509Crl_get_Hash_m2621 (X509Crl_t494 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X509Crl::get_IssuerName()
extern "C" String_t* X509Crl_get_IssuerName_m2235 (X509Crl_t494 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Mono.Security.X509.X509Crl::get_NextUpdate()
extern "C" DateTime_t167  X509Crl_get_NextUpdate_m2233 (X509Crl_t494 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Crl::Compare(System.Byte[],System.Byte[])
extern "C" bool X509Crl_Compare_m2622 (X509Crl_t494 * __this, ByteU5BU5D_t378* ___array1, ByteU5BU5D_t378* ___array2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Crl/X509CrlEntry Mono.Security.X509.X509Crl::GetCrlEntry(Mono.Security.X509.X509Certificate)
extern "C" X509CrlEntry_t496 * X509Crl_GetCrlEntry_m2231 (X509Crl_t494 * __this, X509Certificate_t377 * ___x509, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Crl/X509CrlEntry Mono.Security.X509.X509Crl::GetCrlEntry(System.Byte[])
extern "C" X509CrlEntry_t496 * X509Crl_GetCrlEntry_m2623 (X509Crl_t494 * __this, ByteU5BU5D_t378* ___serialNumber, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X509Crl::GetHashName()
extern "C" String_t* X509Crl_GetHashName_m2624 (X509Crl_t494 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Crl::VerifySignature(System.Security.Cryptography.DSA)
extern "C" bool X509Crl_VerifySignature_m2625 (X509Crl_t494 * __this, DSA_t490 * ___dsa, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Crl::VerifySignature(System.Security.Cryptography.RSA)
extern "C" bool X509Crl_VerifySignature_m2626 (X509Crl_t494 * __this, RSA_t491 * ___rsa, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Crl::VerifySignature(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C" bool X509Crl_VerifySignature_m2230 (X509Crl_t494 * __this, AsymmetricAlgorithm_t365 * ___aa, const MethodInfo* method) IL2CPP_METHOD_ATTR;
