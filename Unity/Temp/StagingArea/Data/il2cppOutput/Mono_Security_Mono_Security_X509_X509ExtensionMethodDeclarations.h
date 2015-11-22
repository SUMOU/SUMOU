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

// Mono.Security.X509.X509Extension
struct X509Extension_t495;
// Mono.Security.ASN1
struct ASN1_t492;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Text.StringBuilder
struct StringBuilder_t268;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Security.X509.X509Extension::.ctor(Mono.Security.ASN1)
extern "C" void X509Extension__ctor_m2627 (X509Extension_t495 * __this, ASN1_t492 * ___asn1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Extension::.ctor(Mono.Security.X509.X509Extension)
extern "C" void X509Extension__ctor_m2628 (X509Extension_t495 * __this, X509Extension_t495 * ___extension, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Extension::Decode()
extern "C" void X509Extension_Decode_m2629 (X509Extension_t495 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Extension::Encode()
extern "C" void X509Extension_Encode_m2630 (X509Extension_t495 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X509Extension::get_Oid()
extern "C" String_t* X509Extension_get_Oid_m2237 (X509Extension_t495 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Extension::get_Critical()
extern "C" bool X509Extension_get_Critical_m2236 (X509Extension_t495 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.ASN1 Mono.Security.X509.X509Extension::get_Value()
extern "C" ASN1_t492 * X509Extension_get_Value_m2241 (X509Extension_t495 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Extension::Equals(System.Object)
extern "C" bool X509Extension_Equals_m2631 (X509Extension_t495 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.X509.X509Extension::GetHashCode()
extern "C" int32_t X509Extension_GetHashCode_m2632 (X509Extension_t495 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Extension::WriteLine(System.Text.StringBuilder,System.Int32,System.Int32)
extern "C" void X509Extension_WriteLine_m2633 (X509Extension_t495 * __this, StringBuilder_t268 * ___sb, int32_t ___n, int32_t ___pos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X509Extension::ToString()
extern "C" String_t* X509Extension_ToString_m2634 (X509Extension_t495 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
