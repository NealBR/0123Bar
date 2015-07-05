#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.AnimationCurve
struct AnimationCurve_t546;
struct AnimationCurve_t546_marshaled;
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_t547;

// System.Void UnityEngine.AnimationCurve::.ctor(UnityEngine.Keyframe[])
extern "C" void AnimationCurve__ctor_m2816 (AnimationCurve_t546 * __this, KeyframeU5BU5D_t547* ___keys, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::.ctor()
extern "C" void AnimationCurve__ctor_m2817 (AnimationCurve_t546 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Cleanup()
extern "C" void AnimationCurve_Cleanup_m2818 (AnimationCurve_t546 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Finalize()
extern "C" void AnimationCurve_Finalize_m2819 (AnimationCurve_t546 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Init(UnityEngine.Keyframe[])
extern "C" void AnimationCurve_Init_m2820 (AnimationCurve_t546 * __this, KeyframeU5BU5D_t547* ___keys, MethodInfo* method) IL2CPP_METHOD_ATTR;
void AnimationCurve_t546_marshal(const AnimationCurve_t546& unmarshaled, AnimationCurve_t546_marshaled& marshaled);
void AnimationCurve_t546_marshal_back(const AnimationCurve_t546_marshaled& marshaled, AnimationCurve_t546& unmarshaled);
void AnimationCurve_t546_marshal_cleanup(AnimationCurve_t546_marshaled& marshaled);
