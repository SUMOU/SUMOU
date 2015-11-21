#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Text.RegularExpressions.Group
struct Group_t459;
// System.Text.RegularExpressions.CaptureCollection
struct CaptureCollection_t457;

#include "System_System_Text_RegularExpressions_Capture.h"

// System.Text.RegularExpressions.Group
struct  Group_t459  : public Capture_t456
{
	// System.Boolean System.Text.RegularExpressions.Group::success
	bool ___success_4;
	// System.Text.RegularExpressions.CaptureCollection System.Text.RegularExpressions.Group::captures
	CaptureCollection_t457 * ___captures_5;
};
struct Group_t459_StaticFields{
	// System.Text.RegularExpressions.Group System.Text.RegularExpressions.Group::Fail
	Group_t459 * ___Fail_3;
};
