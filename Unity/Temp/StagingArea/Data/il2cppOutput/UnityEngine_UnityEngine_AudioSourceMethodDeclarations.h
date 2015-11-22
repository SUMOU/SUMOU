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

// UnityEngine.AudioSource
struct AudioSource_t27;
// UnityEngine.AudioClip
struct AudioClip_t28;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.AudioSource::PlayOneShot(UnityEngine.AudioClip,System.Single)
extern "C" void AudioSource_PlayOneShot_m564 (AudioSource_t27 * __this, AudioClip_t28 * ___clip, float ___volumeScale, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::PlayOneShot(UnityEngine.AudioClip)
extern "C" void AudioSource_PlayOneShot_m122 (AudioSource_t27 * __this, AudioClip_t28 * ___clip, const MethodInfo* method) IL2CPP_METHOD_ATTR;
