#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Animator
struct Animator_t2;

#include "mscorlib_System_Object.h"

// Locomotion
struct  Locomotion_t1  : public Object_t
{
	// UnityEngine.Animator Locomotion::m_Animator
	Animator_t2 * ___m_Animator_0;
	// System.Int32 Locomotion::m_SpeedId
	int32_t ___m_SpeedId_1;
	// System.Int32 Locomotion::m_AgularSpeedId
	int32_t ___m_AgularSpeedId_2;
	// System.Int32 Locomotion::m_DirectionId
	int32_t ___m_DirectionId_3;
	// System.Single Locomotion::m_SpeedDampTime
	float ___m_SpeedDampTime_4;
	// System.Single Locomotion::m_AnguarSpeedDampTime
	float ___m_AnguarSpeedDampTime_5;
	// System.Single Locomotion::m_DirectionResponseTime
	float ___m_DirectionResponseTime_6;
};
