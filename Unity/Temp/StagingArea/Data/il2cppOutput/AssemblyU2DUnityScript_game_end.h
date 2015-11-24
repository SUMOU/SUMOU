#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t34;
// UnityEngine.Material[]
struct MaterialU5BU5D_t64;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// game_end
struct  game_end_t101  : public MonoBehaviour_t4
{
	// UnityEngine.GameObject game_end::end
	GameObject_t34 * ___end_2;
	// UnityEngine.GameObject game_end::bar
	GameObject_t34 * ___bar_3;
	// UnityEngine.Material[] game_end::materials
	MaterialU5BU5D_t64* ___materials_4;
	// System.Int32 game_end::select_No
	int32_t ___select_No_5;
	// System.Boolean game_end::result
	bool ___result_6;
	// System.Boolean game_end::end_flg
	bool ___end_flg_7;
};
