#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SocialPlatforms.GameCenter.GcScoreData
struct GcScoreData_t444;
struct GcScoreData_t444_marshaled;
// UnityEngine.SocialPlatforms.Impl.Score
struct Score_t634;

// UnityEngine.SocialPlatforms.Impl.Score UnityEngine.SocialPlatforms.GameCenter.GcScoreData::ToScore()
extern "C" Score_t634 * GcScoreData_ToScore_m3151 (GcScoreData_t444 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
void GcScoreData_t444_marshal(const GcScoreData_t444& unmarshaled, GcScoreData_t444_marshaled& marshaled);
void GcScoreData_t444_marshal_back(const GcScoreData_t444_marshaled& marshaled, GcScoreData_t444& unmarshaled);
void GcScoreData_t444_marshal_cleanup(GcScoreData_t444_marshaled& marshaled);
