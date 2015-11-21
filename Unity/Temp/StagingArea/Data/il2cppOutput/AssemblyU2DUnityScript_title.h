#pragma once

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
// UnityEngine.AudioSource
struct AudioSource_t27;
// UnityEngine.AudioClip
struct AudioClip_t38;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "UnityEngine_UnityEngine_Color.h"

// title
struct  title_t103  : public MonoBehaviour_t4
{
	// UnityEngine.Texture2D title::texture
	Texture2D_t40 * ___texture_2;
	// System.String title::sequence
	String_t* ___sequence_3;
	// UnityEngine.Color title::from
	Color_t13  ___from_4;
	// UnityEngine.Color title::to
	Color_t13  ___to_5;
	// UnityEngine.Color title::now
	Color_t13  ___now_6;
	// System.Single title::time
	float ___time_7;
	// UnityEngine.AudioSource title::sound
	AudioSource_t27 * ___sound_8;
	// UnityEngine.AudioClip title::SE_select
	AudioClip_t38 * ___SE_select_9;
};
