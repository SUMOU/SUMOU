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

// System.String
struct String_t;
// System.Runtime.Remoting.ActivatedClientTypeEntry
struct ActivatedClientTypeEntry_t1139;
// System.Type
struct Type_t;
// System.Runtime.Remoting.ActivatedServiceTypeEntry
struct ActivatedServiceTypeEntry_t1141;
// System.Runtime.Remoting.WellKnownClientTypeEntry
struct WellKnownClientTypeEntry_t1164;
// System.Runtime.Remoting.WellKnownServiceTypeEntry
struct WellKnownServiceTypeEntry_t1166;
// System.Runtime.Remoting.ChannelData
struct ChannelData_t1152;
// System.Runtime.Remoting.ProviderData
struct ProviderData_t1153;
// System.Collections.ArrayList
struct ArrayList_t71;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Runtime.Remoting.RemotingConfiguration::.cctor()
extern "C" void RemotingConfiguration__cctor_m7072 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.RemotingConfiguration::get_ApplicationName()
extern "C" String_t* RemotingConfiguration_get_ApplicationName_m7073 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.RemotingConfiguration::set_ApplicationName(System.String)
extern "C" void RemotingConfiguration_set_ApplicationName_m7074 (Object_t * __this /* static, unused */, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.RemotingConfiguration::get_ProcessId()
extern "C" String_t* RemotingConfiguration_get_ProcessId_m7075 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.RemotingConfiguration::LoadDefaultDelayedChannels()
extern "C" void RemotingConfiguration_LoadDefaultDelayedChannels_m7076 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.ActivatedClientTypeEntry System.Runtime.Remoting.RemotingConfiguration::IsRemotelyActivatedClientType(System.Type)
extern "C" ActivatedClientTypeEntry_t1139 * RemotingConfiguration_IsRemotelyActivatedClientType_m7077 (Object_t * __this /* static, unused */, Type_t * ___svrType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.RemotingConfiguration::RegisterActivatedClientType(System.Runtime.Remoting.ActivatedClientTypeEntry)
extern "C" void RemotingConfiguration_RegisterActivatedClientType_m7078 (Object_t * __this /* static, unused */, ActivatedClientTypeEntry_t1139 * ___entry, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.RemotingConfiguration::RegisterActivatedServiceType(System.Runtime.Remoting.ActivatedServiceTypeEntry)
extern "C" void RemotingConfiguration_RegisterActivatedServiceType_m7079 (Object_t * __this /* static, unused */, ActivatedServiceTypeEntry_t1141 * ___entry, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.RemotingConfiguration::RegisterWellKnownClientType(System.Runtime.Remoting.WellKnownClientTypeEntry)
extern "C" void RemotingConfiguration_RegisterWellKnownClientType_m7080 (Object_t * __this /* static, unused */, WellKnownClientTypeEntry_t1164 * ___entry, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.RemotingConfiguration::RegisterWellKnownServiceType(System.Runtime.Remoting.WellKnownServiceTypeEntry)
extern "C" void RemotingConfiguration_RegisterWellKnownServiceType_m7081 (Object_t * __this /* static, unused */, WellKnownServiceTypeEntry_t1166 * ___entry, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.RemotingConfiguration::RegisterChannelTemplate(System.Runtime.Remoting.ChannelData)
extern "C" void RemotingConfiguration_RegisterChannelTemplate_m7082 (Object_t * __this /* static, unused */, ChannelData_t1152 * ___channel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.RemotingConfiguration::RegisterClientProviderTemplate(System.Runtime.Remoting.ProviderData)
extern "C" void RemotingConfiguration_RegisterClientProviderTemplate_m7083 (Object_t * __this /* static, unused */, ProviderData_t1153 * ___prov, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.RemotingConfiguration::RegisterServerProviderTemplate(System.Runtime.Remoting.ProviderData)
extern "C" void RemotingConfiguration_RegisterServerProviderTemplate_m7084 (Object_t * __this /* static, unused */, ProviderData_t1153 * ___prov, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.RemotingConfiguration::RegisterChannels(System.Collections.ArrayList,System.Boolean)
extern "C" void RemotingConfiguration_RegisterChannels_m7085 (Object_t * __this /* static, unused */, ArrayList_t71 * ___channels, bool ___onlyDelayed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.RemotingConfiguration::RegisterTypes(System.Collections.ArrayList)
extern "C" void RemotingConfiguration_RegisterTypes_m7086 (Object_t * __this /* static, unused */, ArrayList_t71 * ___types, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.RemotingConfiguration::SetCustomErrorsMode(System.String)
extern "C" void RemotingConfiguration_SetCustomErrorsMode_m7087 (Object_t * __this /* static, unused */, String_t* ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
