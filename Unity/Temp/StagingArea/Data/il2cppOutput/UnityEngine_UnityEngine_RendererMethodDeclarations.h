#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// UnityEngine.Renderer
struct Renderer_t61;
// UnityEngine.Material
struct Material_t60;
// UnityEngine.Material[]
struct MaterialU5BU5D_t64;

#include "codegen/il2cpp-codegen.h"

// UnityEngine.Material UnityEngine.Renderer::get_material()
extern "C" Material_t60 * Renderer_get_material_m351 (Renderer_t61 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Renderer::set_material(UnityEngine.Material)
extern "C" void Renderer_set_material_m605 (Renderer_t61 * __this, Material_t60 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material[] UnityEngine.Renderer::get_materials()
extern "C" MaterialU5BU5D_t64* Renderer_get_materials_m382 (Renderer_t61 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
