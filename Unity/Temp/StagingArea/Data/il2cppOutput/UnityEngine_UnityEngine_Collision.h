#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Rigidbody
struct Rigidbody_t119;
// UnityEngine.Collider
struct Collider_t120;
// UnityEngine.ContactPoint[]
struct ContactPointU5BU5D_t121;

#include "mscorlib_System_Object.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// UnityEngine.Collision
struct  Collision_t118  : public Object_t
{
	// UnityEngine.Vector3 UnityEngine.Collision::m_Impulse
	Vector3_t84  ___m_Impulse_0;
	// UnityEngine.Vector3 UnityEngine.Collision::m_RelativeVelocity
	Vector3_t84  ___m_RelativeVelocity_1;
	// UnityEngine.Rigidbody UnityEngine.Collision::m_Rigidbody
	Rigidbody_t119 * ___m_Rigidbody_2;
	// UnityEngine.Collider UnityEngine.Collision::m_Collider
	Collider_t120 * ___m_Collider_3;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_Contacts
	ContactPointU5BU5D_t121* ___m_Contacts_4;
};
