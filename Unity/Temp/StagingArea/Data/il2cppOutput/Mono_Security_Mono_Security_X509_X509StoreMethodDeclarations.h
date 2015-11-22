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

// Mono.Security.X509.X509Store
struct X509Store_t401;
// System.String
struct String_t;
// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t521;
// System.Collections.ArrayList
struct ArrayList_t277;
// System.Byte[]
struct ByteU5BU5D_t378;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t377;
// Mono.Security.X509.X509Crl
struct X509Crl_t494;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Security.X509.X509Store::.ctor(System.String,System.Boolean)
extern "C" void X509Store__ctor_m2639 (X509Store_t401 * __this, String_t* ___path, bool ___crl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509CertificateCollection Mono.Security.X509.X509Store::get_Certificates()
extern "C" X509CertificateCollection_t521 * X509Store_get_Certificates_m2248 (X509Store_t401 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList Mono.Security.X509.X509Store::get_Crls()
extern "C" ArrayList_t277 * X509Store_get_Crls_m2234 (X509Store_t401 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Store::Load(System.String)
extern "C" ByteU5BU5D_t378* X509Store_Load_m2640 (X509Store_t401 * __this, String_t* ___filename, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Certificate Mono.Security.X509.X509Store::LoadCertificate(System.String)
extern "C" X509Certificate_t377 * X509Store_LoadCertificate_m2641 (X509Store_t401 * __this, String_t* ___filename, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Crl Mono.Security.X509.X509Store::LoadCrl(System.String)
extern "C" X509Crl_t494 * X509Store_LoadCrl_m2642 (X509Store_t401 * __this, String_t* ___filename, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Store::CheckStore(System.String,System.Boolean)
extern "C" bool X509Store_CheckStore_m2643 (X509Store_t401 * __this, String_t* ___path, bool ___throwException, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509CertificateCollection Mono.Security.X509.X509Store::BuildCertificatesCollection(System.String)
extern "C" X509CertificateCollection_t521 * X509Store_BuildCertificatesCollection_m2644 (X509Store_t401 * __this, String_t* ___storeName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList Mono.Security.X509.X509Store::BuildCrlsCollection(System.String)
extern "C" ArrayList_t277 * X509Store_BuildCrlsCollection_m2645 (X509Store_t401 * __this, String_t* ___storeName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
