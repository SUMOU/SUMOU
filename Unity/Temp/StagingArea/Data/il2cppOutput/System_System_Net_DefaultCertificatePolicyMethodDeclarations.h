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

// System.Net.DefaultCertificatePolicy
struct DefaultCertificatePolicy_t380;
// System.Net.ServicePoint
struct ServicePoint_t396;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t421;
// System.Net.WebRequest
struct WebRequest_t382;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Net.DefaultCertificatePolicy::.ctor()
extern "C" void DefaultCertificatePolicy__ctor_m1817 (DefaultCertificatePolicy_t380 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.DefaultCertificatePolicy::CheckValidationResult(System.Net.ServicePoint,System.Security.Cryptography.X509Certificates.X509Certificate,System.Net.WebRequest,System.Int32)
extern "C" bool DefaultCertificatePolicy_CheckValidationResult_m1818 (DefaultCertificatePolicy_t380 * __this, ServicePoint_t396 * ___point, X509Certificate_t421 * ___certificate, WebRequest_t382 * ___request, int32_t ___certificateProblem, const MethodInfo* method) IL2CPP_METHOD_ATTR;
