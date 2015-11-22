#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Threading.ManualResetEvent
struct ManualResetEvent_t623;
// System.IO.Stream
struct Stream_t624;
// Mono.Security.Protocol.Tls.Context
struct Context_t602;

#include "mscorlib_System_Object.h"

// Mono.Security.Protocol.Tls.RecordProtocol
struct  RecordProtocol_t608  : public Object_t
{
	// System.IO.Stream Mono.Security.Protocol.Tls.RecordProtocol::innerStream
	Stream_t624 * ___innerStream_1;
	// Mono.Security.Protocol.Tls.Context Mono.Security.Protocol.Tls.RecordProtocol::context
	Context_t602 * ___context_2;
};
struct RecordProtocol_t608_StaticFields{
	// System.Threading.ManualResetEvent Mono.Security.Protocol.Tls.RecordProtocol::record_processing
	ManualResetEvent_t623 * ___record_processing_0;
};
