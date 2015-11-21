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

// Mono.Security.X509.X509Certificate
struct X509Certificate_t423;
// System.Byte[]
struct ByteU5BU5D_t424;
// System.Security.Cryptography.DSA
struct DSA_t535;
// Mono.Security.X509.X509ExtensionCollection
struct X509ExtensionCollection_t569;
// System.String
struct String_t;
// System.Security.Cryptography.RSA
struct RSA_t536;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t411;
// Mono.Security.ASN1
struct ASN1_t537;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t369;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_DateTime.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void Mono.Security.X509.X509Certificate::.ctor(System.Byte[])
extern "C" void X509Certificate__ctor_m2724 (X509Certificate_t423 * __this, ByteU5BU5D_t424* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Certificate::.cctor()
extern "C" void X509Certificate__cctor_m3079 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Certificate::Parse(System.Byte[])
extern "C" void X509Certificate_Parse_m3080 (X509Certificate_t423 * __this, ByteU5BU5D_t424* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Certificate::GetUnsignedBigInteger(System.Byte[])
extern "C" ByteU5BU5D_t424* X509Certificate_GetUnsignedBigInteger_m3081 (X509Certificate_t423 * __this, ByteU5BU5D_t424* ___integer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSA Mono.Security.X509.X509Certificate::get_DSA()
extern "C" DSA_t535 * X509Certificate_get_DSA_m2680 (X509Certificate_t423 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Certificate::set_DSA(System.Security.Cryptography.DSA)
extern "C" void X509Certificate_set_DSA_m2722 (X509Certificate_t423 * __this, DSA_t535 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509ExtensionCollection Mono.Security.X509.X509Certificate::get_Extensions()
extern "C" X509ExtensionCollection_t569 * X509Certificate_get_Extensions_m2739 (X509Certificate_t423 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Certificate::get_Hash()
extern "C" ByteU5BU5D_t424* X509Certificate_get_Hash_m3082 (X509Certificate_t423 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X509Certificate::get_IssuerName()
extern "C" String_t* X509Certificate_get_IssuerName_m3083 (X509Certificate_t423 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X509Certificate::get_KeyAlgorithm()
extern "C" String_t* X509Certificate_get_KeyAlgorithm_m3084 (X509Certificate_t423 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Certificate::get_KeyAlgorithmParameters()
extern "C" ByteU5BU5D_t424* X509Certificate_get_KeyAlgorithmParameters_m3085 (X509Certificate_t423 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Certificate::set_KeyAlgorithmParameters(System.Byte[])
extern "C" void X509Certificate_set_KeyAlgorithmParameters_m3086 (X509Certificate_t423 * __this, ByteU5BU5D_t424* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Certificate::get_PublicKey()
extern "C" ByteU5BU5D_t424* X509Certificate_get_PublicKey_m3087 (X509Certificate_t423 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA Mono.Security.X509.X509Certificate::get_RSA()
extern "C" RSA_t536 * X509Certificate_get_RSA_m3088 (X509Certificate_t423 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Certificate::set_RSA(System.Security.Cryptography.RSA)
extern "C" void X509Certificate_set_RSA_m3089 (X509Certificate_t423 * __this, RSA_t536 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Certificate::get_RawData()
extern "C" ByteU5BU5D_t424* X509Certificate_get_RawData_m3090 (X509Certificate_t423 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Certificate::get_SerialNumber()
extern "C" ByteU5BU5D_t424* X509Certificate_get_SerialNumber_m3091 (X509Certificate_t423 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Certificate::get_Signature()
extern "C" ByteU5BU5D_t424* X509Certificate_get_Signature_m3092 (X509Certificate_t423 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X509Certificate::get_SignatureAlgorithm()
extern "C" String_t* X509Certificate_get_SignatureAlgorithm_m3093 (X509Certificate_t423 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X509Certificate::get_SubjectName()
extern "C" String_t* X509Certificate_get_SubjectName_m3094 (X509Certificate_t423 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Mono.Security.X509.X509Certificate::get_ValidFrom()
extern "C" DateTime_t217  X509Certificate_get_ValidFrom_m3095 (X509Certificate_t423 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Mono.Security.X509.X509Certificate::get_ValidUntil()
extern "C" DateTime_t217  X509Certificate_get_ValidUntil_m3096 (X509Certificate_t423 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.X509.X509Certificate::get_Version()
extern "C" int32_t X509Certificate_get_Version_m2713 (X509Certificate_t423 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Certificate::get_IsCurrent()
extern "C" bool X509Certificate_get_IsCurrent_m3097 (X509Certificate_t423 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Certificate::WasCurrent(System.DateTime)
extern "C" bool X509Certificate_WasCurrent_m3098 (X509Certificate_t423 * __this, DateTime_t217  ___instant, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Certificate::VerifySignature(System.Security.Cryptography.DSA)
extern "C" bool X509Certificate_VerifySignature_m3099 (X509Certificate_t423 * __this, DSA_t535 * ___dsa, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Certificate::VerifySignature(System.Security.Cryptography.RSA)
extern "C" bool X509Certificate_VerifySignature_m3100 (X509Certificate_t423 * __this, RSA_t536 * ___rsa, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Certificate::VerifySignature(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C" bool X509Certificate_VerifySignature_m2738 (X509Certificate_t423 * __this, AsymmetricAlgorithm_t411 * ___aa, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Certificate::get_IsSelfSigned()
extern "C" bool X509Certificate_get_IsSelfSigned_m3101 (X509Certificate_t423 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.ASN1 Mono.Security.X509.X509Certificate::GetIssuerName()
extern "C" ASN1_t537 * X509Certificate_GetIssuerName_m2708 (X509Certificate_t423 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.ASN1 Mono.Security.X509.X509Certificate::GetSubjectName()
extern "C" ASN1_t537 * X509Certificate_GetSubjectName_m2711 (X509Certificate_t423 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Certificate::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void X509Certificate_GetObjectData_m3102 (X509Certificate_t423 * __this, SerializationInfo_t369 * ___info, StreamingContext_t534  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Certificate::PEM(System.String,System.Byte[])
extern "C" ByteU5BU5D_t424* X509Certificate_PEM_m3103 (Object_t * __this /* static, unused */, String_t* ___type, ByteU5BU5D_t424* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
