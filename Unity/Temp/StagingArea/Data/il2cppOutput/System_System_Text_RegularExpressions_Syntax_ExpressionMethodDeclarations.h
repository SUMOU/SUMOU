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

// System.Text.RegularExpressions.Syntax.Expression
struct Expression_t453;
// System.Text.RegularExpressions.Syntax.AnchorInfo
struct AnchorInfo_t471;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Text.RegularExpressions.Syntax.Expression::.ctor()
extern "C" void Expression__ctor_m1931 (Expression_t453 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.Syntax.Expression::GetFixedWidth()
extern "C" int32_t Expression_GetFixedWidth_m1932 (Expression_t453 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Syntax.AnchorInfo System.Text.RegularExpressions.Syntax.Expression::GetAnchorInfo(System.Boolean)
extern "C" AnchorInfo_t471 * Expression_GetAnchorInfo_m1933 (Expression_t453 * __this, bool ___reverse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
