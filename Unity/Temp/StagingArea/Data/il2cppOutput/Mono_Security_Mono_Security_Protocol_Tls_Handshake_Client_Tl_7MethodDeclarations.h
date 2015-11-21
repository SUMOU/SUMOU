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

// Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHello
struct TlsServerHello_t701;
// Mono.Security.Protocol.Tls.Context
struct Context_t648;
// System.Byte[]
struct ByteU5BU5D_t424;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHello::.ctor(Mono.Security.Protocol.Tls.Context,System.Byte[])
extern "C" void TlsServerHello__ctor_m3663 (TlsServerHello_t701 * __this, Context_t648 * ___context, ByteU5BU5D_t424* ___buffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHello::Update()
extern "C" void TlsServerHello_Update_m3664 (TlsServerHello_t701 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHello::ProcessAsSsl3()
extern "C" void TlsServerHello_ProcessAsSsl3_m3665 (TlsServerHello_t701 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHello::ProcessAsTls1()
extern "C" void TlsServerHello_ProcessAsTls1_m3666 (TlsServerHello_t701 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHello::processProtocol(System.Int16)
extern "C" void TlsServerHello_processProtocol_m3667 (TlsServerHello_t701 * __this, int16_t ___protocol, const MethodInfo* method) IL2CPP_METHOD_ATTR;
