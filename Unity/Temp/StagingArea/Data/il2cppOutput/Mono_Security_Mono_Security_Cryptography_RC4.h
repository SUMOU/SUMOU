#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Security.Cryptography.KeySizes[]
struct KeySizesU5BU5D_t597;

#include "mscorlib_System_Security_Cryptography_SymmetricAlgorithm.h"

// Mono.Security.Cryptography.RC4
struct  RC4_t615  : public SymmetricAlgorithm_t584
{
};
struct RC4_t615_StaticFields{
	// System.Security.Cryptography.KeySizes[] Mono.Security.Cryptography.RC4::s_legalBlockSizes
	KeySizesU5BU5D_t597* ___s_legalBlockSizes_10;
	// System.Security.Cryptography.KeySizes[] Mono.Security.Cryptography.RC4::s_legalKeySizes
	KeySizesU5BU5D_t597* ___s_legalKeySizes_11;
};
