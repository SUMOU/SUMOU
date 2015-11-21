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
struct ModulusRing_t602;
// Mono.Math.BigInteger
struct BigInteger_t603;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Math.BigInteger/ModulusRing::.ctor(Mono.Math.BigInteger)
extern "C" void ModulusRing__ctor_m2863 (ModulusRing_t602 * __this, BigInteger_t603 * ___modulus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/ModulusRing::BarrettReduction(Mono.Math.BigInteger)
extern "C" void ModulusRing_BarrettReduction_m2864 (ModulusRing_t602 * __this, BigInteger_t603 * ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Multiply(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t603 * ModulusRing_Multiply_m2865 (ModulusRing_t602 * __this, BigInteger_t603 * ___a, BigInteger_t603 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Difference(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t603 * ModulusRing_Difference_m2866 (ModulusRing_t602 * __this, BigInteger_t603 * ___a, BigInteger_t603 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t603 * ModulusRing_Pow_m2867 (ModulusRing_t602 * __this, BigInteger_t603 * ___a, BigInteger_t603 * ___k, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(System.UInt32,Mono.Math.BigInteger)
extern "C" BigInteger_t603 * ModulusRing_Pow_m2868 (ModulusRing_t602 * __this, uint32_t ___b, BigInteger_t603 * ___exp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
