#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Globalization.CompareInfo
struct CompareInfo_t687;

#include "mscorlib_System_StringComparer.h"

// System.CultureAwareComparer
struct  CultureAwareComparer_t1327  : public StringComparer_t260
{
	// System.Boolean System.CultureAwareComparer::_ignoreCase
	bool ____ignoreCase_4;
	// System.Globalization.CompareInfo System.CultureAwareComparer::_compareInfo
	CompareInfo_t687 * ____compareInfo_5;
};
