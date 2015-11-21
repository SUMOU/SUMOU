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
// Locomotion
struct Locomotion_t1;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// LocomotionPlayer
struct  LocomotionPlayer_t5  : public MonoBehaviour_t4
{
	// UnityEngine.Animator LocomotionPlayer::animator
	Animator_t2 * ___animator_2;
	// System.Single LocomotionPlayer::speed
	float ___speed_3;
	// System.Single LocomotionPlayer::direction
	float ___direction_4;
	// Locomotion LocomotionPlayer::locomotion
	Locomotion_t1 * ___locomotion_5;
};
