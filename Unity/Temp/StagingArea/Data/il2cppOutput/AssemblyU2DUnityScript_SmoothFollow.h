#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t32;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// SmoothFollow
struct  SmoothFollow_t78  : public MonoBehaviour_t4
{
	// UnityEngine.Transform SmoothFollow::target
	Transform_t32 * ___target_2;
	// System.Single SmoothFollow::distance
	float ___distance_3;
	// System.Single SmoothFollow::height
	float ___height_4;
	// System.Single SmoothFollow::heightDamping
	float ___heightDamping_5;
	// System.Single SmoothFollow::rotationDamping
	float ___rotationDamping_6;
	// System.Single SmoothFollow::lookAtAngle
	float ___lookAtAngle_7;
};
