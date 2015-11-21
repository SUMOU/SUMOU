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

// System.Security.Cryptography.RIPEMD160Managed
struct RIPEMD160Managed_t1220;
// System.Byte[]
struct ByteU5BU5D_t424;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Security.Cryptography.RIPEMD160Managed::.ctor()
extern "C" void RIPEMD160Managed__ctor_m7475 (RIPEMD160Managed_t1220 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RIPEMD160Managed::Initialize()
extern "C" void RIPEMD160Managed_Initialize_m7476 (RIPEMD160Managed_t1220 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RIPEMD160Managed::HashCore(System.Byte[],System.Int32,System.Int32)
extern "C" void RIPEMD160Managed_HashCore_m7477 (RIPEMD160Managed_t1220 * __this, ByteU5BU5D_t424* ___rgb, int32_t ___ibStart, int32_t ___cbSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.RIPEMD160Managed::HashFinal()
extern "C" ByteU5BU5D_t424* RIPEMD160Managed_HashFinal_m7478 (RIPEMD160Managed_t1220 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RIPEMD160Managed::Finalize()
extern "C" void RIPEMD160Managed_Finalize_m7479 (RIPEMD160Managed_t1220 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RIPEMD160Managed::ProcessBlock(System.Byte[],System.Int32)
extern "C" void RIPEMD160Managed_ProcessBlock_m7480 (RIPEMD160Managed_t1220 * __this, ByteU5BU5D_t424* ___buffer, int32_t ___offset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RIPEMD160Managed::Compress()
extern "C" void RIPEMD160Managed_Compress_m7481 (RIPEMD160Managed_t1220 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RIPEMD160Managed::CompressFinal(System.UInt64)
extern "C" void RIPEMD160Managed_CompressFinal_m7482 (RIPEMD160Managed_t1220 * __this, uint64_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Security.Cryptography.RIPEMD160Managed::ROL(System.UInt32,System.Int32)
extern "C" uint32_t RIPEMD160Managed_ROL_m7483 (RIPEMD160Managed_t1220 * __this, uint32_t ___x, int32_t ___n, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Security.Cryptography.RIPEMD160Managed::F(System.UInt32,System.UInt32,System.UInt32)
extern "C" uint32_t RIPEMD160Managed_F_m7484 (RIPEMD160Managed_t1220 * __this, uint32_t ___x, uint32_t ___y, uint32_t ___z, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Security.Cryptography.RIPEMD160Managed::G(System.UInt32,System.UInt32,System.UInt32)
extern "C" uint32_t RIPEMD160Managed_G_m7485 (RIPEMD160Managed_t1220 * __this, uint32_t ___x, uint32_t ___y, uint32_t ___z, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Security.Cryptography.RIPEMD160Managed::H(System.UInt32,System.UInt32,System.UInt32)
extern "C" uint32_t RIPEMD160Managed_H_m7486 (RIPEMD160Managed_t1220 * __this, uint32_t ___x, uint32_t ___y, uint32_t ___z, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Security.Cryptography.RIPEMD160Managed::I(System.UInt32,System.UInt32,System.UInt32)
extern "C" uint32_t RIPEMD160Managed_I_m7487 (RIPEMD160Managed_t1220 * __this, uint32_t ___x, uint32_t ___y, uint32_t ___z, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Security.Cryptography.RIPEMD160Managed::J(System.UInt32,System.UInt32,System.UInt32)
extern "C" uint32_t RIPEMD160Managed_J_m7488 (RIPEMD160Managed_t1220 * __this, uint32_t ___x, uint32_t ___y, uint32_t ___z, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RIPEMD160Managed::FF(System.UInt32&,System.UInt32,System.UInt32&,System.UInt32,System.UInt32,System.UInt32,System.Int32)
extern "C" void RIPEMD160Managed_FF_m7489 (RIPEMD160Managed_t1220 * __this, uint32_t* ___a, uint32_t ___b, uint32_t* ___c, uint32_t ___d, uint32_t ___e, uint32_t ___x, int32_t ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RIPEMD160Managed::GG(System.UInt32&,System.UInt32,System.UInt32&,System.UInt32,System.UInt32,System.UInt32,System.Int32)
extern "C" void RIPEMD160Managed_GG_m7490 (RIPEMD160Managed_t1220 * __this, uint32_t* ___a, uint32_t ___b, uint32_t* ___c, uint32_t ___d, uint32_t ___e, uint32_t ___x, int32_t ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RIPEMD160Managed::HH(System.UInt32&,System.UInt32,System.UInt32&,System.UInt32,System.UInt32,System.UInt32,System.Int32)
extern "C" void RIPEMD160Managed_HH_m7491 (RIPEMD160Managed_t1220 * __this, uint32_t* ___a, uint32_t ___b, uint32_t* ___c, uint32_t ___d, uint32_t ___e, uint32_t ___x, int32_t ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RIPEMD160Managed::II(System.UInt32&,System.UInt32,System.UInt32&,System.UInt32,System.UInt32,System.UInt32,System.Int32)
extern "C" void RIPEMD160Managed_II_m7492 (RIPEMD160Managed_t1220 * __this, uint32_t* ___a, uint32_t ___b, uint32_t* ___c, uint32_t ___d, uint32_t ___e, uint32_t ___x, int32_t ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RIPEMD160Managed::JJ(System.UInt32&,System.UInt32,System.UInt32&,System.UInt32,System.UInt32,System.UInt32,System.Int32)
extern "C" void RIPEMD160Managed_JJ_m7493 (RIPEMD160Managed_t1220 * __this, uint32_t* ___a, uint32_t ___b, uint32_t* ___c, uint32_t ___d, uint32_t ___e, uint32_t ___x, int32_t ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RIPEMD160Managed::FFF(System.UInt32&,System.UInt32,System.UInt32&,System.UInt32,System.UInt32,System.UInt32,System.Int32)
extern "C" void RIPEMD160Managed_FFF_m7494 (RIPEMD160Managed_t1220 * __this, uint32_t* ___a, uint32_t ___b, uint32_t* ___c, uint32_t ___d, uint32_t ___e, uint32_t ___x, int32_t ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RIPEMD160Managed::GGG(System.UInt32&,System.UInt32,System.UInt32&,System.UInt32,System.UInt32,System.UInt32,System.Int32)
extern "C" void RIPEMD160Managed_GGG_m7495 (RIPEMD160Managed_t1220 * __this, uint32_t* ___a, uint32_t ___b, uint32_t* ___c, uint32_t ___d, uint32_t ___e, uint32_t ___x, int32_t ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RIPEMD160Managed::HHH(System.UInt32&,System.UInt32,System.UInt32&,System.UInt32,System.UInt32,System.UInt32,System.Int32)
extern "C" void RIPEMD160Managed_HHH_m7496 (RIPEMD160Managed_t1220 * __this, uint32_t* ___a, uint32_t ___b, uint32_t* ___c, uint32_t ___d, uint32_t ___e, uint32_t ___x, int32_t ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RIPEMD160Managed::III(System.UInt32&,System.UInt32,System.UInt32&,System.UInt32,System.UInt32,System.UInt32,System.Int32)
extern "C" void RIPEMD160Managed_III_m7497 (RIPEMD160Managed_t1220 * __this, uint32_t* ___a, uint32_t ___b, uint32_t* ___c, uint32_t ___d, uint32_t ___e, uint32_t ___x, int32_t ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RIPEMD160Managed::JJJ(System.UInt32&,System.UInt32,System.UInt32&,System.UInt32,System.UInt32,System.UInt32,System.Int32)
extern "C" void RIPEMD160Managed_JJJ_m7498 (RIPEMD160Managed_t1220 * __this, uint32_t* ___a, uint32_t ___b, uint32_t* ___c, uint32_t ___d, uint32_t ___e, uint32_t ___x, int32_t ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
