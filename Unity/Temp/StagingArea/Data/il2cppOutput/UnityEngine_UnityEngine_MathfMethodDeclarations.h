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


#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.Mathf::.cctor()
extern "C" void Mathf__cctor_m829 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::Sin(System.Single)
extern "C" float Mathf_Sin_m830 (Object_t * __this /* static, unused */, float ___f, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::Cos(System.Single)
extern "C" float Mathf_Cos_m831 (Object_t * __this /* static, unused */, float ___f, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::Asin(System.Single)
extern "C" float Mathf_Asin_m832 (Object_t * __this /* static, unused */, float ___f, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::Acos(System.Single)
extern "C" float Mathf_Acos_m833 (Object_t * __this /* static, unused */, float ___f, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::Sqrt(System.Single)
extern "C" float Mathf_Sqrt_m834 (Object_t * __this /* static, unused */, float ___f, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::Abs(System.Single)
extern "C" float Mathf_Abs_m835 (Object_t * __this /* static, unused */, float ___f, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::Min(System.Single,System.Single)
extern "C" float Mathf_Min_m405 (Object_t * __this /* static, unused */, float ___a, float ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Mathf::Min(System.Int32,System.Int32)
extern "C" int32_t Mathf_Min_m329 (Object_t * __this /* static, unused */, int32_t ___a, int32_t ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
extern "C" float Mathf_Max_m836 (Object_t * __this /* static, unused */, float ___a, float ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Mathf::Max(System.Int32,System.Int32)
extern "C" int32_t Mathf_Max_m837 (Object_t * __this /* static, unused */, int32_t ___a, int32_t ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::Pow(System.Single,System.Single)
extern "C" float Mathf_Pow_m838 (Object_t * __this /* static, unused */, float ___f, float ___p, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::Floor(System.Single)
extern "C" float Mathf_Floor_m839 (Object_t * __this /* static, unused */, float ___f, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::Round(System.Single)
extern "C" float Mathf_Round_m840 (Object_t * __this /* static, unused */, float ___f, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Mathf::FloorToInt(System.Single)
extern "C" int32_t Mathf_FloorToInt_m328 (Object_t * __this /* static, unused */, float ___f, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
extern "C" float Mathf_Clamp_m312 (Object_t * __this /* static, unused */, float ___value, float ___min, float ___max, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
extern "C" float Mathf_Clamp01_m462 (Object_t * __this /* static, unused */, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
extern "C" float Mathf_Lerp_m461 (Object_t * __this /* static, unused */, float ___a, float ___b, float ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::LerpAngle(System.Single,System.Single,System.Single)
extern "C" float Mathf_LerpAngle_m571 (Object_t * __this /* static, unused */, float ___a, float ___b, float ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Mathf::Approximately(System.Single,System.Single)
extern "C" bool Mathf_Approximately_m841 (Object_t * __this /* static, unused */, float ___a, float ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::SmoothDamp(System.Single,System.Single,System.Single&,System.Single)
extern "C" float Mathf_SmoothDamp_m420 (Object_t * __this /* static, unused */, float ___current, float ___target, float* ___currentVelocity, float ___smoothTime, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::SmoothDamp(System.Single,System.Single,System.Single&,System.Single,System.Single,System.Single)
extern "C" float Mathf_SmoothDamp_m842 (Object_t * __this /* static, unused */, float ___current, float ___target, float* ___currentVelocity, float ___smoothTime, float ___maxSpeed, float ___deltaTime, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::SmoothDampAngle(System.Single,System.Single,System.Single&,System.Single)
extern "C" float Mathf_SmoothDampAngle_m421 (Object_t * __this /* static, unused */, float ___current, float ___target, float* ___currentVelocity, float ___smoothTime, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::SmoothDampAngle(System.Single,System.Single,System.Single&,System.Single,System.Single,System.Single)
extern "C" float Mathf_SmoothDampAngle_m843 (Object_t * __this /* static, unused */, float ___current, float ___target, float* ___currentVelocity, float ___smoothTime, float ___maxSpeed, float ___deltaTime, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::Repeat(System.Single,System.Single)
extern "C" float Mathf_Repeat_m844 (Object_t * __this /* static, unused */, float ___t, float ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::DeltaAngle(System.Single,System.Single)
extern "C" float Mathf_DeltaAngle_m845 (Object_t * __this /* static, unused */, float ___current, float ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
