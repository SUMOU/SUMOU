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

// System.Text.EncoderFallbackException
struct EncoderFallbackException_t1234;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Text.EncoderFallbackException::.ctor()
extern "C" void EncoderFallbackException__ctor_m7319 (EncoderFallbackException_t1234 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.EncoderFallbackException::.ctor(System.String)
extern "C" void EncoderFallbackException__ctor_m7320 (EncoderFallbackException_t1234 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.EncoderFallbackException::.ctor(System.Char,System.Int32)
extern "C" void EncoderFallbackException__ctor_m7321 (EncoderFallbackException_t1234 * __this, uint16_t ___charUnknown, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.EncoderFallbackException::.ctor(System.Char,System.Char,System.Int32)
extern "C" void EncoderFallbackException__ctor_m7322 (EncoderFallbackException_t1234 * __this, uint16_t ___charUnknownHigh, uint16_t ___charUnknownLow, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
