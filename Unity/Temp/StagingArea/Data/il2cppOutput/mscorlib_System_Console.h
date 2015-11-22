#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.IO.TextWriter
struct TextWriter_t530;
// System.IO.TextReader
struct TextReader_t799;
// System.Text.Encoding
struct Encoding_t519;

#include "mscorlib_System_Object.h"

// System.Console
struct  Console_t529  : public Object_t
{
};
struct Console_t529_StaticFields{
	// System.IO.TextWriter System.Console::stdout
	TextWriter_t530 * ___stdout_0;
	// System.IO.TextWriter System.Console::stderr
	TextWriter_t530 * ___stderr_1;
	// System.IO.TextReader System.Console::stdin
	TextReader_t799 * ___stdin_2;
	// System.Text.Encoding System.Console::inputEncoding
	Encoding_t519 * ___inputEncoding_3;
	// System.Text.Encoding System.Console::outputEncoding
	Encoding_t519 * ___outputEncoding_4;
};
