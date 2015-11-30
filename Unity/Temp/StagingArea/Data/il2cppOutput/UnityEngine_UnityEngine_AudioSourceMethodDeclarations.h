﻿#pragma once

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
struct AudioClip_t38;

#include "codegen/il2cpp-codegen.h"

// System.Single UnityEngine.AudioSource::get_volume()
extern "C" float AudioSource_get_volume_m358 (AudioSource_t27 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::set_volume(System.Single)
extern "C" void AudioSource_set_volume_m360 (AudioSource_t27 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.AudioSource::get_pitch()
extern "C" float AudioSource_get_pitch_m359 (AudioSource_t27 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::set_pitch(System.Single)
extern "C" void AudioSource_set_pitch_m361 (AudioSource_t27 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AudioClip UnityEngine.AudioSource::get_clip()
extern "C" AudioClip_t38 * AudioSource_get_clip_m390 (AudioSource_t27 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::set_clip(UnityEngine.AudioClip)
extern "C" void AudioSource_set_clip_m389 (AudioSource_t27 * __this, AudioClip_t38 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::PlayOneShot(UnityEngine.AudioClip,System.Single)
extern "C" void AudioSource_PlayOneShot_m1058 (AudioSource_t27 * __this, AudioClip_t38 * ___clip, float ___volumeScale, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::PlayOneShot(UnityEngine.AudioClip)
extern "C" void AudioSource_PlayOneShot_m415 (AudioSource_t27 * __this, AudioClip_t38 * ___clip, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::set_playOnAwake(System.Boolean)
extern "C" void AudioSource_set_playOnAwake_m388 (AudioSource_t27 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;