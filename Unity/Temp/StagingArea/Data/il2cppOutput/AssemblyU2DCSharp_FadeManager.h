#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// FadeManager
struct FadeManager_t2;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "UnityEngine_UnityEngine_Color.h"

// FadeManager
struct  FadeManager_t2  : public MonoBehaviour_t3
{
	// System.Boolean FadeManager::DebugMode
	bool ___DebugMode_3;
	// System.Single FadeManager::fadeAlpha
	float ___fadeAlpha_4;
	// System.Boolean FadeManager::isFading
	bool ___isFading_5;
	// UnityEngine.Color FadeManager::fadeColor
	Color_t4  ___fadeColor_6;
};
struct FadeManager_t2_StaticFields{
	// FadeManager FadeManager::instance
	FadeManager_t2 * ___instance_2;
};
