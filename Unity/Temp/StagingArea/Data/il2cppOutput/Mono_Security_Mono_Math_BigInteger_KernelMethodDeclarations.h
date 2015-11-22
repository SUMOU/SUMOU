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

// Mono.Math.BigInteger
struct BigInteger_t557;
// Mono.Math.BigInteger[]
struct BigIntegerU5BU5D_t669;
// System.UInt32[]
struct UInt32U5BU5D_t542;

#include "codegen/il2cpp-codegen.h"
#include "Mono_Security_Mono_Math_BigInteger_Sign.h"

// Mono.Math.BigInteger Mono.Math.BigInteger/Kernel::AddSameSign(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t557 * Kernel_AddSameSign_m2356 (Object_t * __this /* static, unused */, BigInteger_t557 * ___bi1, BigInteger_t557 * ___bi2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/Kernel::Subtract(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t557 * Kernel_Subtract_m2357 (Object_t * __this /* static, unused */, BigInteger_t557 * ___big, BigInteger_t557 * ___small, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/Kernel::MinusEq(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" void Kernel_MinusEq_m2358 (Object_t * __this /* static, unused */, BigInteger_t557 * ___big, BigInteger_t557 * ___small, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/Kernel::PlusEq(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" void Kernel_PlusEq_m2359 (Object_t * __this /* static, unused */, BigInteger_t557 * ___bi1, BigInteger_t557 * ___bi2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger/Sign Mono.Math.BigInteger/Kernel::Compare(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" int32_t Kernel_Compare_m2360 (Object_t * __this /* static, unused */, BigInteger_t557 * ___bi1, BigInteger_t557 * ___bi2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Mono.Math.BigInteger/Kernel::SingleByteDivideInPlace(Mono.Math.BigInteger,System.UInt32)
extern "C" uint32_t Kernel_SingleByteDivideInPlace_m2361 (Object_t * __this /* static, unused */, BigInteger_t557 * ___n, uint32_t ___d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Mono.Math.BigInteger/Kernel::DwordMod(Mono.Math.BigInteger,System.UInt32)
extern "C" uint32_t Kernel_DwordMod_m2362 (Object_t * __this /* static, unused */, BigInteger_t557 * ___n, uint32_t ___d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger[] Mono.Math.BigInteger/Kernel::DwordDivMod(Mono.Math.BigInteger,System.UInt32)
extern "C" BigIntegerU5BU5D_t669* Kernel_DwordDivMod_m2363 (Object_t * __this /* static, unused */, BigInteger_t557 * ___n, uint32_t ___d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger[] Mono.Math.BigInteger/Kernel::multiByteDivide(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigIntegerU5BU5D_t669* Kernel_multiByteDivide_m2364 (Object_t * __this /* static, unused */, BigInteger_t557 * ___bi1, BigInteger_t557 * ___bi2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/Kernel::LeftShift(Mono.Math.BigInteger,System.Int32)
extern "C" BigInteger_t557 * Kernel_LeftShift_m2365 (Object_t * __this /* static, unused */, BigInteger_t557 * ___bi, int32_t ___n, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/Kernel::RightShift(Mono.Math.BigInteger,System.Int32)
extern "C" BigInteger_t557 * Kernel_RightShift_m2366 (Object_t * __this /* static, unused */, BigInteger_t557 * ___bi, int32_t ___n, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/Kernel::Multiply(System.UInt32[],System.UInt32,System.UInt32,System.UInt32[],System.UInt32,System.UInt32,System.UInt32[],System.UInt32)
extern "C" void Kernel_Multiply_m2367 (Object_t * __this /* static, unused */, UInt32U5BU5D_t542* ___x, uint32_t ___xOffset, uint32_t ___xLen, UInt32U5BU5D_t542* ___y, uint32_t ___yOffset, uint32_t ___yLen, UInt32U5BU5D_t542* ___d, uint32_t ___dOffset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/Kernel::MultiplyMod2p32pmod(System.UInt32[],System.Int32,System.Int32,System.UInt32[],System.Int32,System.Int32,System.UInt32[],System.Int32,System.Int32)
extern "C" void Kernel_MultiplyMod2p32pmod_m2368 (Object_t * __this /* static, unused */, UInt32U5BU5D_t542* ___x, int32_t ___xOffset, int32_t ___xLen, UInt32U5BU5D_t542* ___y, int32_t ___yOffest, int32_t ___yLen, UInt32U5BU5D_t542* ___d, int32_t ___dOffset, int32_t ___mod, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Mono.Math.BigInteger/Kernel::modInverse(Mono.Math.BigInteger,System.UInt32)
extern "C" uint32_t Kernel_modInverse_m2369 (Object_t * __this /* static, unused */, BigInteger_t557 * ___bi, uint32_t ___modulus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/Kernel::modInverse(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t557 * Kernel_modInverse_m2370 (Object_t * __this /* static, unused */, BigInteger_t557 * ___bi, BigInteger_t557 * ___modulus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
