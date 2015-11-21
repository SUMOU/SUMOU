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

// System.Security.Cryptography.MACTripleDES
struct MACTripleDES_t1215;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t424;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Security.Cryptography.MACTripleDES::.ctor()
extern "C" void MACTripleDES__ctor_m7441 (MACTripleDES_t1215 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.MACTripleDES::Setup(System.String,System.Byte[])
extern "C" void MACTripleDES_Setup_m7442 (MACTripleDES_t1215 * __this, String_t* ___strTripleDES, ByteU5BU5D_t424* ___rgbKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.MACTripleDES::Finalize()
extern "C" void MACTripleDES_Finalize_m7443 (MACTripleDES_t1215 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.MACTripleDES::Dispose(System.Boolean)
extern "C" void MACTripleDES_Dispose_m7444 (MACTripleDES_t1215 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.MACTripleDES::Initialize()
extern "C" void MACTripleDES_Initialize_m7445 (MACTripleDES_t1215 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.MACTripleDES::HashCore(System.Byte[],System.Int32,System.Int32)
extern "C" void MACTripleDES_HashCore_m7446 (MACTripleDES_t1215 * __this, ByteU5BU5D_t424* ___rgbData, int32_t ___ibStart, int32_t ___cbSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.MACTripleDES::HashFinal()
extern "C" ByteU5BU5D_t424* MACTripleDES_HashFinal_m7447 (MACTripleDES_t1215 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
