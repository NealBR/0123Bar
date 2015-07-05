#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SocialPlatforms.GameCenter.GcAchievementData
struct GcAchievementData_t442;
struct GcAchievementData_t442_marshaled;
// UnityEngine.SocialPlatforms.Impl.Achievement
struct Achievement_t633;

// UnityEngine.SocialPlatforms.Impl.Achievement UnityEngine.SocialPlatforms.GameCenter.GcAchievementData::ToAchievement()
extern "C" Achievement_t633 * GcAchievementData_ToAchievement_m3150 (GcAchievementData_t442 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
void GcAchievementData_t442_marshal(const GcAchievementData_t442& unmarshaled, GcAchievementData_t442_marshaled& marshaled);
void GcAchievementData_t442_marshal_back(const GcAchievementData_t442_marshaled& marshaled, GcAchievementData_t442& unmarshaled);
void GcAchievementData_t442_marshal_cleanup(GcAchievementData_t442_marshaled& marshaled);
