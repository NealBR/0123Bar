#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.HumanBone
struct HumanBone_t552;
struct HumanBone_t552_marshaled;
// System.String
struct String_t;

// System.String UnityEngine.HumanBone::get_boneName()
extern "C" String_t* HumanBone_get_boneName_m2842 (HumanBone_t552 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.HumanBone::set_boneName(System.String)
extern "C" void HumanBone_set_boneName_m2843 (HumanBone_t552 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.HumanBone::get_humanName()
extern "C" String_t* HumanBone_get_humanName_m2844 (HumanBone_t552 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.HumanBone::set_humanName(System.String)
extern "C" void HumanBone_set_humanName_m2845 (HumanBone_t552 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
void HumanBone_t552_marshal(const HumanBone_t552& unmarshaled, HumanBone_t552_marshaled& marshaled);
void HumanBone_t552_marshal_back(const HumanBone_t552_marshaled& marshaled, HumanBone_t552& unmarshaled);
void HumanBone_t552_marshal_cleanup(HumanBone_t552_marshaled& marshaled);
