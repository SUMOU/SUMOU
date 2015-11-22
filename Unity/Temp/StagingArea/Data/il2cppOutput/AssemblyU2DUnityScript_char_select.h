#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Texture2D
struct Texture2D_t16;
// System.String
struct String_t;
// UnityEngine.AudioSource
struct AudioSource_t27;
// UnityEngine.AudioClip
struct AudioClip_t28;
// UnityEngine.GameObject
struct GameObject_t10;
// UnityEngine.TextMesh
struct TextMesh_t21;
// UnityScript.Lang.Array
struct Array_t20;
// UnityEngine.Material[]
struct MaterialU5BU5D_t29;
// System.Object
struct Object_t;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t30;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "UnityEngine_UnityEngine_Color.h"

// char_select
struct  char_select_t24  : public MonoBehaviour_t3
{
	// UnityEngine.Texture2D char_select::texture
	Texture2D_t16 * ___texture_2;
	// System.String char_select::sequence
	String_t* ___sequence_3;
	// UnityEngine.Color char_select::from
	Color_t4  ___from_4;
	// UnityEngine.Color char_select::to
	Color_t4  ___to_5;
	// UnityEngine.Color char_select::now
	Color_t4  ___now_6;
	// System.Single char_select::time
	float ___time_7;
	// UnityEngine.AudioSource char_select::sound
	AudioSource_t27 * ___sound_8;
	// UnityEngine.AudioClip char_select::SE_select
	AudioClip_t28 * ___SE_select_9;
	// UnityEngine.GameObject char_select::rikishi_name
	GameObject_t10 * ___rikishi_name_10;
	// UnityEngine.GameObject char_select::rikishi_detail
	GameObject_t10 * ___rikishi_detail_11;
	// UnityEngine.TextMesh char_select::name_tm
	TextMesh_t21 * ___name_tm_12;
	// UnityEngine.TextMesh char_select::detail_tm
	TextMesh_t21 * ___detail_tm_13;
	// UnityScript.Lang.Array char_select::names
	Array_t20 * ___names_14;
	// UnityScript.Lang.Array char_select::details
	Array_t20 * ___details_15;
	// UnityEngine.Material[] char_select::materials
	MaterialU5BU5D_t29* ___materials_16;
	// System.Object char_select::select_char
	Object_t * ___select_char_17;
	// System.Int32 char_select::select_No
	int32_t ___select_No_18;
	// UnityEngine.GameObject[] char_select::rikishi
	GameObjectU5BU5D_t30* ___rikishi_19;
};
