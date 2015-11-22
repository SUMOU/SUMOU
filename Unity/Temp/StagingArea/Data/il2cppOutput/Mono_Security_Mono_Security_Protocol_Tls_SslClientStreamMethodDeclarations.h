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

// Mono.Security.Protocol.Tls.SslClientStream
struct SslClientStream_t606;
// System.IO.Stream
struct Stream_t624;
// System.String
struct String_t;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t375;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct X509CertificateCollection_t349;
// Mono.Security.Protocol.Tls.CertificateValidationCallback
struct CertificateValidationCallback_t636;
// Mono.Security.Protocol.Tls.CertificateSelectionCallback
struct CertificateSelectionCallback_t620;
// Mono.Security.Protocol.Tls.PrivateKeySelectionCallback
struct PrivateKeySelectionCallback_t621;
// Mono.Security.Protocol.Tls.CertificateValidationCallback2
struct CertificateValidationCallback2_t637;
// System.IAsyncResult
struct IAsyncResult_t75;
// System.AsyncCallback
struct AsyncCallback_t76;
// System.Object
struct Object_t;
// Mono.Security.Protocol.Tls.ValidationResult
struct ValidationResult_t634;
// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t521;
// System.Int32[]
struct Int32U5BU5D_t419;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t365;

#include "codegen/il2cpp-codegen.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_SecurityProtocolTyp.h"

// System.Void Mono.Security.Protocol.Tls.SslClientStream::.ctor(System.IO.Stream,System.String,System.Boolean)
extern "C" void SslClientStream__ctor_m2923 (SslClientStream_t606 * __this, Stream_t624 * ___stream, String_t* ___targetHost, bool ___ownsStream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::.ctor(System.IO.Stream,System.String,System.Security.Cryptography.X509Certificates.X509Certificate)
extern "C" void SslClientStream__ctor_m2924 (SslClientStream_t606 * __this, Stream_t624 * ___stream, String_t* ___targetHost, X509Certificate_t375 * ___clientCertificate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::.ctor(System.IO.Stream,System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection)
extern "C" void SslClientStream__ctor_m2925 (SslClientStream_t606 * __this, Stream_t624 * ___stream, String_t* ___targetHost, X509CertificateCollection_t349 * ___clientCertificates, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::.ctor(System.IO.Stream,System.String,System.Boolean,Mono.Security.Protocol.Tls.SecurityProtocolType)
extern "C" void SslClientStream__ctor_m2926 (SslClientStream_t606 * __this, Stream_t624 * ___stream, String_t* ___targetHost, bool ___ownsStream, int32_t ___securityProtocolType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::.ctor(System.IO.Stream,System.String,System.Boolean,Mono.Security.Protocol.Tls.SecurityProtocolType,System.Security.Cryptography.X509Certificates.X509CertificateCollection)
extern "C" void SslClientStream__ctor_m2927 (SslClientStream_t606 * __this, Stream_t624 * ___stream, String_t* ___targetHost, bool ___ownsStream, int32_t ___securityProtocolType, X509CertificateCollection_t349 * ___clientCertificates, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::add_ServerCertValidation(Mono.Security.Protocol.Tls.CertificateValidationCallback)
extern "C" void SslClientStream_add_ServerCertValidation_m2928 (SslClientStream_t606 * __this, CertificateValidationCallback_t636 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::remove_ServerCertValidation(Mono.Security.Protocol.Tls.CertificateValidationCallback)
extern "C" void SslClientStream_remove_ServerCertValidation_m2929 (SslClientStream_t606 * __this, CertificateValidationCallback_t636 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::add_ClientCertSelection(Mono.Security.Protocol.Tls.CertificateSelectionCallback)
extern "C" void SslClientStream_add_ClientCertSelection_m2930 (SslClientStream_t606 * __this, CertificateSelectionCallback_t620 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::remove_ClientCertSelection(Mono.Security.Protocol.Tls.CertificateSelectionCallback)
extern "C" void SslClientStream_remove_ClientCertSelection_m2931 (SslClientStream_t606 * __this, CertificateSelectionCallback_t620 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::add_PrivateKeySelection(Mono.Security.Protocol.Tls.PrivateKeySelectionCallback)
extern "C" void SslClientStream_add_PrivateKeySelection_m2932 (SslClientStream_t606 * __this, PrivateKeySelectionCallback_t621 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::remove_PrivateKeySelection(Mono.Security.Protocol.Tls.PrivateKeySelectionCallback)
extern "C" void SslClientStream_remove_PrivateKeySelection_m2933 (SslClientStream_t606 * __this, PrivateKeySelectionCallback_t621 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::add_ServerCertValidation2(Mono.Security.Protocol.Tls.CertificateValidationCallback2)
extern "C" void SslClientStream_add_ServerCertValidation2_m2934 (SslClientStream_t606 * __this, CertificateValidationCallback2_t637 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::remove_ServerCertValidation2(Mono.Security.Protocol.Tls.CertificateValidationCallback2)
extern "C" void SslClientStream_remove_ServerCertValidation2_m2935 (SslClientStream_t606 * __this, CertificateValidationCallback2_t637 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream Mono.Security.Protocol.Tls.SslClientStream::get_InputBuffer()
extern "C" Stream_t624 * SslClientStream_get_InputBuffer_m2936 (SslClientStream_t606 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection Mono.Security.Protocol.Tls.SslClientStream::get_ClientCertificates()
extern "C" X509CertificateCollection_t349 * SslClientStream_get_ClientCertificates_m2937 (SslClientStream_t606 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate Mono.Security.Protocol.Tls.SslClientStream::get_SelectedClientCertificate()
extern "C" X509Certificate_t375 * SslClientStream_get_SelectedClientCertificate_m2938 (SslClientStream_t606 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.CertificateValidationCallback Mono.Security.Protocol.Tls.SslClientStream::get_ServerCertValidationDelegate()
extern "C" CertificateValidationCallback_t636 * SslClientStream_get_ServerCertValidationDelegate_m2939 (SslClientStream_t606 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::set_ServerCertValidationDelegate(Mono.Security.Protocol.Tls.CertificateValidationCallback)
extern "C" void SslClientStream_set_ServerCertValidationDelegate_m2940 (SslClientStream_t606 * __this, CertificateValidationCallback_t636 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.CertificateSelectionCallback Mono.Security.Protocol.Tls.SslClientStream::get_ClientCertSelectionDelegate()
extern "C" CertificateSelectionCallback_t620 * SslClientStream_get_ClientCertSelectionDelegate_m2941 (SslClientStream_t606 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::set_ClientCertSelectionDelegate(Mono.Security.Protocol.Tls.CertificateSelectionCallback)
extern "C" void SslClientStream_set_ClientCertSelectionDelegate_m2942 (SslClientStream_t606 * __this, CertificateSelectionCallback_t620 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.PrivateKeySelectionCallback Mono.Security.Protocol.Tls.SslClientStream::get_PrivateKeyCertSelectionDelegate()
extern "C" PrivateKeySelectionCallback_t621 * SslClientStream_get_PrivateKeyCertSelectionDelegate_m2943 (SslClientStream_t606 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::set_PrivateKeyCertSelectionDelegate(Mono.Security.Protocol.Tls.PrivateKeySelectionCallback)
extern "C" void SslClientStream_set_PrivateKeyCertSelectionDelegate_m2944 (SslClientStream_t606 * __this, PrivateKeySelectionCallback_t621 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::Finalize()
extern "C" void SslClientStream_Finalize_m2945 (SslClientStream_t606 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::Dispose(System.Boolean)
extern "C" void SslClientStream_Dispose_m2946 (SslClientStream_t606 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult Mono.Security.Protocol.Tls.SslClientStream::OnBeginNegotiateHandshake(System.AsyncCallback,System.Object)
extern "C" Object_t * SslClientStream_OnBeginNegotiateHandshake_m2947 (SslClientStream_t606 * __this, AsyncCallback_t76 * ___callback, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::SafeReceiveRecord(System.IO.Stream)
extern "C" void SslClientStream_SafeReceiveRecord_m2948 (SslClientStream_t606 * __this, Stream_t624 * ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::OnNegotiateHandshakeCallback(System.IAsyncResult)
extern "C" void SslClientStream_OnNegotiateHandshakeCallback_m2949 (SslClientStream_t606 * __this, Object_t * ___asyncResult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate Mono.Security.Protocol.Tls.SslClientStream::OnLocalCertificateSelection(System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Cryptography.X509Certificates.X509Certificate,System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection)
extern "C" X509Certificate_t375 * SslClientStream_OnLocalCertificateSelection_m2950 (SslClientStream_t606 * __this, X509CertificateCollection_t349 * ___clientCertificates, X509Certificate_t375 * ___serverCertificate, String_t* ___targetHost, X509CertificateCollection_t349 * ___serverRequestedCertificates, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.SslClientStream::get_HaveRemoteValidation2Callback()
extern "C" bool SslClientStream_get_HaveRemoteValidation2Callback_m2951 (SslClientStream_t606 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.ValidationResult Mono.Security.Protocol.Tls.SslClientStream::OnRemoteCertificateValidation2(Mono.Security.X509.X509CertificateCollection)
extern "C" ValidationResult_t634 * SslClientStream_OnRemoteCertificateValidation2_m2952 (SslClientStream_t606 * __this, X509CertificateCollection_t521 * ___collection, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.SslClientStream::OnRemoteCertificateValidation(System.Security.Cryptography.X509Certificates.X509Certificate,System.Int32[])
extern "C" bool SslClientStream_OnRemoteCertificateValidation_m2953 (SslClientStream_t606 * __this, X509Certificate_t375 * ___certificate, Int32U5BU5D_t419* ___errors, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.SslClientStream::RaiseServerCertificateValidation(System.Security.Cryptography.X509Certificates.X509Certificate,System.Int32[])
extern "C" bool SslClientStream_RaiseServerCertificateValidation_m2954 (SslClientStream_t606 * __this, X509Certificate_t375 * ___certificate, Int32U5BU5D_t419* ___certificateErrors, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.ValidationResult Mono.Security.Protocol.Tls.SslClientStream::RaiseServerCertificateValidation2(Mono.Security.X509.X509CertificateCollection)
extern "C" ValidationResult_t634 * SslClientStream_RaiseServerCertificateValidation2_m2955 (SslClientStream_t606 * __this, X509CertificateCollection_t521 * ___collection, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate Mono.Security.Protocol.Tls.SslClientStream::RaiseClientCertificateSelection(System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Cryptography.X509Certificates.X509Certificate,System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection)
extern "C" X509Certificate_t375 * SslClientStream_RaiseClientCertificateSelection_m2956 (SslClientStream_t606 * __this, X509CertificateCollection_t349 * ___clientCertificates, X509Certificate_t375 * ___serverCertificate, String_t* ___targetHost, X509CertificateCollection_t349 * ___serverRequestedCertificates, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsymmetricAlgorithm Mono.Security.Protocol.Tls.SslClientStream::OnLocalPrivateKeySelection(System.Security.Cryptography.X509Certificates.X509Certificate,System.String)
extern "C" AsymmetricAlgorithm_t365 * SslClientStream_OnLocalPrivateKeySelection_m2957 (SslClientStream_t606 * __this, X509Certificate_t375 * ___certificate, String_t* ___targetHost, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsymmetricAlgorithm Mono.Security.Protocol.Tls.SslClientStream::RaisePrivateKeySelection(System.Security.Cryptography.X509Certificates.X509Certificate,System.String)
extern "C" AsymmetricAlgorithm_t365 * SslClientStream_RaisePrivateKeySelection_m2958 (SslClientStream_t606 * __this, X509Certificate_t375 * ___certificate, String_t* ___targetHost, const MethodInfo* method) IL2CPP_METHOD_ATTR;
