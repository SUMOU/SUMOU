﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Texture2D
struct Texture2D_t40;
// System.String
struct String_t;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "UnityEngine_UnityEngine_Color.h"

// fade
struct  fade_t99  : public MonoBehaviour_t4
{
	// UnityEngine.Texture2D fade::texture
	Texture2D_t40 * ___texture_2;
	// System.String fade::sequence
	String_t* ___sequence_3;
	// UnityEngine.Color fade::from
	Color_t13  ___from_4;
	// UnityEngine.Color fade::to
	Color_t13  ___to_5;
	// UnityEngine.Color fade::now
	Color_t13  ___now_6;
	// System.Single fade::time
	float ___time_7;
};