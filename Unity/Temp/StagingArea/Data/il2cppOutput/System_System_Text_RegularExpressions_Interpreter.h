﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.UInt16[]
struct UInt16U5BU5D_t398;
// System.String
struct String_t;
// System.Text.RegularExpressions.QuickSearch
struct QuickSearch_t489;
// System.Text.RegularExpressions.Interpreter/RepeatContext
struct RepeatContext_t486;
// System.Text.RegularExpressions.Mark[]
struct MarkU5BU5D_t490;
// System.Int32[]
struct Int32U5BU5D_t465;

#include "System_System_Text_RegularExpressions_BaseMachine.h"
#include "System_System_Text_RegularExpressions_Interpreter_IntStack.h"

// System.Text.RegularExpressions.Interpreter
struct  Interpreter_t488  : public BaseMachine_t455
{
	// System.UInt16[] System.Text.RegularExpressions.Interpreter::program
	UInt16U5BU5D_t398* ___program_1;
	// System.Int32 System.Text.RegularExpressions.Interpreter::program_start
	int32_t ___program_start_2;
	// System.String System.Text.RegularExpressions.Interpreter::text
	String_t* ___text_3;
	// System.Int32 System.Text.RegularExpressions.Interpreter::text_end
	int32_t ___text_end_4;
	// System.Int32 System.Text.RegularExpressions.Interpreter::group_count
	int32_t ___group_count_5;
	// System.Int32 System.Text.RegularExpressions.Interpreter::match_min
	int32_t ___match_min_6;
	// System.Text.RegularExpressions.QuickSearch System.Text.RegularExpressions.Interpreter::qs
	QuickSearch_t489 * ___qs_7;
	// System.Int32 System.Text.RegularExpressions.Interpreter::scan_ptr
	int32_t ___scan_ptr_8;
	// System.Text.RegularExpressions.Interpreter/RepeatContext System.Text.RegularExpressions.Interpreter::repeat
	RepeatContext_t486 * ___repeat_9;
	// System.Text.RegularExpressions.Interpreter/RepeatContext System.Text.RegularExpressions.Interpreter::fast
	RepeatContext_t486 * ___fast_10;
	// System.Text.RegularExpressions.Interpreter/IntStack System.Text.RegularExpressions.Interpreter::stack
	IntStack_t485  ___stack_11;
	// System.Text.RegularExpressions.Interpreter/RepeatContext System.Text.RegularExpressions.Interpreter::deep
	RepeatContext_t486 * ___deep_12;
	// System.Text.RegularExpressions.Mark[] System.Text.RegularExpressions.Interpreter::marks
	MarkU5BU5D_t490* ___marks_13;
	// System.Int32 System.Text.RegularExpressions.Interpreter::mark_start
	int32_t ___mark_start_14;
	// System.Int32 System.Text.RegularExpressions.Interpreter::mark_end
	int32_t ___mark_end_15;
	// System.Int32[] System.Text.RegularExpressions.Interpreter::groups
	Int32U5BU5D_t465* ___groups_16;
};