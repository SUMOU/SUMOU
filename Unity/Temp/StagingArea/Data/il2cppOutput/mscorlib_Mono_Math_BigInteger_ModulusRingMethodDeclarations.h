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

// Mono.Math.BigInteger/ModulusRing
struct ModulusRing_t807;
// Mono.Math.BigInteger
struct BigInteger_t808;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Math.BigInteger/ModulusRing::.ctor(Mono.Math.BigInteger)
extern "C" void ModulusRing__ctor_m4776 (ModulusRing_t807 * __this, BigInteger_t808 * ___modulus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/ModulusRing::BarrettReduction(Mono.Math.BigInteger)
extern "C" void ModulusRing_BarrettReduction_m4777 (ModulusRing_t807 * __this, BigInteger_t808 * ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Multiply(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t808 * ModulusRing_Multiply_m4778 (ModulusRing_t807 * __this, BigInteger_t808 * ___a, BigInteger_t808 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Difference(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t808 * ModulusRing_Difference_m4779 (ModulusRing_t807 * __this, BigInteger_t808 * ___a, BigInteger_t808 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t808 * ModulusRing_Pow_m4780 (ModulusRing_t807 * __this, BigInteger_t808 * ___a, BigInteger_t808 * ___k, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(System.UInt32,Mono.Math.BigInteger)
extern "C" BigInteger_t808 * ModulusRing_Pow_m4781 (ModulusRing_t807 * __this, uint32_t ___b, BigInteger_t808 * ___exp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
