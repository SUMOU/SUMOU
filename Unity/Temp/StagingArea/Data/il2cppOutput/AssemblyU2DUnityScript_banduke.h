#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityScript.Lang.Array
struct Array_t92;
// UnityEngine.GameObject
struct GameObject_t34;
// UnityEngine.TextMesh
struct TextMesh_t93;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// banduke
struct  banduke_t91  : public MonoBehaviour_t4
{
	// UnityScript.Lang.Array banduke::names
	Array_t92 * ___names_2;
	// System.Int32 banduke::rikishi_No
	int32_t ___rikishi_No_3;
	// UnityEngine.GameObject banduke::rikishi_name
	GameObject_t34 * ___rikishi_name_4;
	// UnityEngine.TextMesh banduke::name_tm
	TextMesh_t93 * ___name_tm_5;
	// UnityEngine.GameObject banduke::cameras
	GameObject_t34 * ___cameras_6;
	// System.Int32 banduke::rote
	int32_t ___rote_7;
	// System.Int32 banduke::rote_count
	int32_t ___rote_count_8;
	// System.Single banduke::timer
	float ___timer_9;
	// System.Boolean banduke::rote_flg
	bool ___rote_flg_10;
};
