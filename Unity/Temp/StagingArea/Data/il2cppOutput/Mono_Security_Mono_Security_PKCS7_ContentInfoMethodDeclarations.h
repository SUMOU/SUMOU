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

// Mono.Security.PKCS7/ContentInfo
struct ContentInfo_t611;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t424;
// Mono.Security.ASN1
struct ASN1_t537;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Security.PKCS7/ContentInfo::.ctor()
extern "C" void ContentInfo__ctor_m2950 (ContentInfo_t611 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.PKCS7/ContentInfo::.ctor(System.String)
extern "C" void ContentInfo__ctor_m2951 (ContentInfo_t611 * __this, String_t* ___oid, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.PKCS7/ContentInfo::.ctor(System.Byte[])
extern "C" void ContentInfo__ctor_m2952 (ContentInfo_t611 * __this, ByteU5BU5D_t424* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.PKCS7/ContentInfo::.ctor(Mono.Security.ASN1)
extern "C" void ContentInfo__ctor_m2953 (ContentInfo_t611 * __this, ASN1_t537 * ___asn1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.ASN1 Mono.Security.PKCS7/ContentInfo::get_ASN1()
extern "C" ASN1_t537 * ContentInfo_get_ASN1_m2954 (ContentInfo_t611 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.ASN1 Mono.Security.PKCS7/ContentInfo::get_Content()
extern "C" ASN1_t537 * ContentInfo_get_Content_m2955 (ContentInfo_t611 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.PKCS7/ContentInfo::set_Content(Mono.Security.ASN1)
extern "C" void ContentInfo_set_Content_m2956 (ContentInfo_t611 * __this, ASN1_t537 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.PKCS7/ContentInfo::get_ContentType()
extern "C" String_t* ContentInfo_get_ContentType_m2957 (ContentInfo_t611 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.PKCS7/ContentInfo::set_ContentType(System.String)
extern "C" void ContentInfo_set_ContentType_m2958 (ContentInfo_t611 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.ASN1 Mono.Security.PKCS7/ContentInfo::GetASN1()
extern "C" ASN1_t537 * ContentInfo_GetASN1_m2959 (ContentInfo_t611 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
