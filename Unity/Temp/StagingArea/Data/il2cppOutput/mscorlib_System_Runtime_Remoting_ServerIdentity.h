#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Type
struct Type_t;
// System.MarshalByRefObject
struct MarshalByRefObject_t408;
// System.Runtime.Remoting.Contexts.Context
struct Context_t1083;

#include "mscorlib_System_Runtime_Remoting_Identity.h"

// System.Runtime.Remoting.ServerIdentity
struct  ServerIdentity_t773  : public Identity_t1136
{
	// System.Type System.Runtime.Remoting.ServerIdentity::_objectType
	Type_t * ____objectType_7;
	// System.MarshalByRefObject System.Runtime.Remoting.ServerIdentity::_serverObject
	MarshalByRefObject_t408 * ____serverObject_8;
	// System.Runtime.Remoting.Contexts.Context System.Runtime.Remoting.ServerIdentity::_context
	Context_t1083 * ____context_9;
};
