#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Security.Cryptography.RSA
struct RSA_t491;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t536;

#include "mscorlib_System_Security_Cryptography_AsymmetricKeyExchangeF.h"

// System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter
struct  RSAPKCS1KeyExchangeFormatter_t689  : public AsymmetricKeyExchangeFormatter_t1158
{
	// System.Security.Cryptography.RSA System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter::rsa
	RSA_t491 * ___rsa_0;
	// System.Security.Cryptography.RandomNumberGenerator System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter::random
	RandomNumberGenerator_t536 * ___random_1;
};
