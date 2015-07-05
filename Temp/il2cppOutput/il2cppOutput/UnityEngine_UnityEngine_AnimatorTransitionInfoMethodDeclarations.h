#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.AnimatorTransitionInfo
struct AnimatorTransitionInfo_t549;
struct AnimatorTransitionInfo_t549_marshaled;
// System.String
struct String_t;

// System.Boolean UnityEngine.AnimatorTransitionInfo::IsName(System.String)
extern "C" bool AnimatorTransitionInfo_IsName_m2830 (AnimatorTransitionInfo_t549 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.AnimatorTransitionInfo::IsUserName(System.String)
extern "C" bool AnimatorTransitionInfo_IsUserName_m2831 (AnimatorTransitionInfo_t549 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.AnimatorTransitionInfo::get_fullPathHash()
extern "C" int32_t AnimatorTransitionInfo_get_fullPathHash_m2832 (AnimatorTransitionInfo_t549 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.AnimatorTransitionInfo::get_nameHash()
extern "C" int32_t AnimatorTransitionInfo_get_nameHash_m2833 (AnimatorTransitionInfo_t549 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.AnimatorTransitionInfo::get_userNameHash()
extern "C" int32_t AnimatorTransitionInfo_get_userNameHash_m2834 (AnimatorTransitionInfo_t549 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.AnimatorTransitionInfo::get_normalizedTime()
extern "C" float AnimatorTransitionInfo_get_normalizedTime_m2835 (AnimatorTransitionInfo_t549 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.AnimatorTransitionInfo::get_anyState()
extern "C" bool AnimatorTransitionInfo_get_anyState_m2836 (AnimatorTransitionInfo_t549 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.AnimatorTransitionInfo::get_entry()
extern "C" bool AnimatorTransitionInfo_get_entry_m2837 (AnimatorTransitionInfo_t549 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.AnimatorTransitionInfo::get_exit()
extern "C" bool AnimatorTransitionInfo_get_exit_m2838 (AnimatorTransitionInfo_t549 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
void AnimatorTransitionInfo_t549_marshal(const AnimatorTransitionInfo_t549& unmarshaled, AnimatorTransitionInfo_t549_marshaled& marshaled);
void AnimatorTransitionInfo_t549_marshal_back(const AnimatorTransitionInfo_t549_marshaled& marshaled, AnimatorTransitionInfo_t549& unmarshaled);
void AnimatorTransitionInfo_t549_marshal_cleanup(AnimatorTransitionInfo_t549_marshaled& marshaled);
