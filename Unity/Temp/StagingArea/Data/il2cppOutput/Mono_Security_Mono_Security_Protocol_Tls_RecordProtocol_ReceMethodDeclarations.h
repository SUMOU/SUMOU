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

// Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult
struct ReceiveRecordAsyncResult_t622;
// System.AsyncCallback
struct AsyncCallback_t76;
// System.Object
struct Object_t;
// System.Byte[]
struct ByteU5BU5D_t378;
// System.IO.Stream
struct Stream_t624;
// System.Exception
struct Exception_t13;
// System.Threading.WaitHandle
struct WaitHandle_t670;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::.ctor(System.AsyncCallback,System.Object,System.Byte[],System.IO.Stream)
extern "C" void ReceiveRecordAsyncResult__ctor_m2854 (ReceiveRecordAsyncResult_t622 * __this, AsyncCallback_t76 * ___userCallback, Object_t * ___userState, ByteU5BU5D_t378* ___initialBuffer, Stream_t624 * ___record, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_Record()
extern "C" Stream_t624 * ReceiveRecordAsyncResult_get_Record_m2855 (ReceiveRecordAsyncResult_t622 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_ResultingBuffer()
extern "C" ByteU5BU5D_t378* ReceiveRecordAsyncResult_get_ResultingBuffer_m2856 (ReceiveRecordAsyncResult_t622 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_InitialBuffer()
extern "C" ByteU5BU5D_t378* ReceiveRecordAsyncResult_get_InitialBuffer_m2857 (ReceiveRecordAsyncResult_t622 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncState()
extern "C" Object_t * ReceiveRecordAsyncResult_get_AsyncState_m2858 (ReceiveRecordAsyncResult_t622 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncException()
extern "C" Exception_t13 * ReceiveRecordAsyncResult_get_AsyncException_m2859 (ReceiveRecordAsyncResult_t622 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_CompletedWithError()
extern "C" bool ReceiveRecordAsyncResult_get_CompletedWithError_m2860 (ReceiveRecordAsyncResult_t622 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.WaitHandle Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncWaitHandle()
extern "C" WaitHandle_t670 * ReceiveRecordAsyncResult_get_AsyncWaitHandle_m2861 (ReceiveRecordAsyncResult_t622 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_IsCompleted()
extern "C" bool ReceiveRecordAsyncResult_get_IsCompleted_m2862 (ReceiveRecordAsyncResult_t622 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Exception,System.Byte[])
extern "C" void ReceiveRecordAsyncResult_SetComplete_m2863 (ReceiveRecordAsyncResult_t622 * __this, Exception_t13 * ___ex, ByteU5BU5D_t378* ___resultingBuffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Exception)
extern "C" void ReceiveRecordAsyncResult_SetComplete_m2864 (ReceiveRecordAsyncResult_t622 * __this, Exception_t13 * ___ex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Byte[])
extern "C" void ReceiveRecordAsyncResult_SetComplete_m2865 (ReceiveRecordAsyncResult_t622 * __this, ByteU5BU5D_t378* ___resultingBuffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
