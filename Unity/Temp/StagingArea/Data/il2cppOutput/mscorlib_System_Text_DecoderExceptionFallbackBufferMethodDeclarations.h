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

// System.Text.DecoderExceptionFallbackBuffer
struct DecoderExceptionFallbackBuffer_t1271;
// System.Byte[]
struct ByteU5BU5D_t424;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Text.DecoderExceptionFallbackBuffer::.ctor()
extern "C" void DecoderExceptionFallbackBuffer__ctor_m7788 (DecoderExceptionFallbackBuffer_t1271 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.DecoderExceptionFallbackBuffer::get_Remaining()
extern "C" int32_t DecoderExceptionFallbackBuffer_get_Remaining_m7789 (DecoderExceptionFallbackBuffer_t1271 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.DecoderExceptionFallbackBuffer::Fallback(System.Byte[],System.Int32)
extern "C" bool DecoderExceptionFallbackBuffer_Fallback_m7790 (DecoderExceptionFallbackBuffer_t1271 * __this, ByteU5BU5D_t424* ___bytesUnknown, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Text.DecoderExceptionFallbackBuffer::GetNextChar()
extern "C" uint16_t DecoderExceptionFallbackBuffer_GetNextChar_m7791 (DecoderExceptionFallbackBuffer_t1271 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
