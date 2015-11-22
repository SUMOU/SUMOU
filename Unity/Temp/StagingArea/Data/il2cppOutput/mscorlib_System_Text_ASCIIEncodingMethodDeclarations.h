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

// System.Text.ASCIIEncoding
struct ASCIIEncoding_t1222;
// System.Char[]
struct CharU5BU5D_t269;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t378;
// System.Text.EncoderFallbackBuffer
struct EncoderFallbackBuffer_t1233;
// System.Text.DecoderFallbackBuffer
struct DecoderFallbackBuffer_t1224;
// System.Text.Decoder
struct Decoder_t852;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Text.ASCIIEncoding::.ctor()
extern "C" void ASCIIEncoding__ctor_m7256 (ASCIIEncoding_t1222 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetByteCount(System.Char[],System.Int32,System.Int32)
extern "C" int32_t ASCIIEncoding_GetByteCount_m7257 (ASCIIEncoding_t1222 * __this, CharU5BU5D_t269* ___chars, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetByteCount(System.String)
extern "C" int32_t ASCIIEncoding_GetByteCount_m7258 (ASCIIEncoding_t1222 * __this, String_t* ___chars, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetBytes(System.Char[],System.Int32,System.Int32,System.Byte[],System.Int32)
extern "C" int32_t ASCIIEncoding_GetBytes_m7259 (ASCIIEncoding_t1222 * __this, CharU5BU5D_t269* ___chars, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t378* ___bytes, int32_t ___byteIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetBytes(System.Char[],System.Int32,System.Int32,System.Byte[],System.Int32,System.Text.EncoderFallbackBuffer&,System.Char[]&)
extern "C" int32_t ASCIIEncoding_GetBytes_m7260 (ASCIIEncoding_t1222 * __this, CharU5BU5D_t269* ___chars, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t378* ___bytes, int32_t ___byteIndex, EncoderFallbackBuffer_t1233 ** ___buffer, CharU5BU5D_t269** ___fallback_chars, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetBytes(System.String,System.Int32,System.Int32,System.Byte[],System.Int32)
extern "C" int32_t ASCIIEncoding_GetBytes_m7261 (ASCIIEncoding_t1222 * __this, String_t* ___chars, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t378* ___bytes, int32_t ___byteIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetBytes(System.String,System.Int32,System.Int32,System.Byte[],System.Int32,System.Text.EncoderFallbackBuffer&,System.Char[]&)
extern "C" int32_t ASCIIEncoding_GetBytes_m7262 (ASCIIEncoding_t1222 * __this, String_t* ___chars, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t378* ___bytes, int32_t ___byteIndex, EncoderFallbackBuffer_t1233 ** ___buffer, CharU5BU5D_t269** ___fallback_chars, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetCharCount(System.Byte[],System.Int32,System.Int32)
extern "C" int32_t ASCIIEncoding_GetCharCount_m7263 (ASCIIEncoding_t1222 * __this, ByteU5BU5D_t378* ___bytes, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32)
extern "C" int32_t ASCIIEncoding_GetChars_m7264 (ASCIIEncoding_t1222 * __this, ByteU5BU5D_t378* ___bytes, int32_t ___byteIndex, int32_t ___byteCount, CharU5BU5D_t269* ___chars, int32_t ___charIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32,System.Text.DecoderFallbackBuffer&)
extern "C" int32_t ASCIIEncoding_GetChars_m7265 (ASCIIEncoding_t1222 * __this, ByteU5BU5D_t378* ___bytes, int32_t ___byteIndex, int32_t ___byteCount, CharU5BU5D_t269* ___chars, int32_t ___charIndex, DecoderFallbackBuffer_t1224 ** ___buffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetMaxByteCount(System.Int32)
extern "C" int32_t ASCIIEncoding_GetMaxByteCount_m7266 (ASCIIEncoding_t1222 * __this, int32_t ___charCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetMaxCharCount(System.Int32)
extern "C" int32_t ASCIIEncoding_GetMaxCharCount_m7267 (ASCIIEncoding_t1222 * __this, int32_t ___byteCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.ASCIIEncoding::GetString(System.Byte[],System.Int32,System.Int32)
extern "C" String_t* ASCIIEncoding_GetString_m7268 (ASCIIEncoding_t1222 * __this, ByteU5BU5D_t378* ___bytes, int32_t ___byteIndex, int32_t ___byteCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetBytes(System.Char*,System.Int32,System.Byte*,System.Int32)
extern "C" int32_t ASCIIEncoding_GetBytes_m7269 (ASCIIEncoding_t1222 * __this, uint16_t* ___chars, int32_t ___charCount, uint8_t* ___bytes, int32_t ___byteCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetByteCount(System.Char*,System.Int32)
extern "C" int32_t ASCIIEncoding_GetByteCount_m7270 (ASCIIEncoding_t1222 * __this, uint16_t* ___chars, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Decoder System.Text.ASCIIEncoding::GetDecoder()
extern "C" Decoder_t852 * ASCIIEncoding_GetDecoder_m7271 (ASCIIEncoding_t1222 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
