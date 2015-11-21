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

// System.Text.Decoder
struct Decoder_t897;
// System.Text.DecoderFallback
struct DecoderFallback_t1268;
// System.Text.DecoderFallbackBuffer
struct DecoderFallbackBuffer_t1269;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Text.Decoder::.ctor()
extern "C" void Decoder__ctor_m7781 (Decoder_t897 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.Decoder::set_Fallback(System.Text.DecoderFallback)
extern "C" void Decoder_set_Fallback_m7782 (Decoder_t897 * __this, DecoderFallback_t1268 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.DecoderFallbackBuffer System.Text.Decoder::get_FallbackBuffer()
extern "C" DecoderFallbackBuffer_t1269 * Decoder_get_FallbackBuffer_m7783 (Decoder_t897 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
