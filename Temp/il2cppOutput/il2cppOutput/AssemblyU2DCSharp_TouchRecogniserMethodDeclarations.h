#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// TouchRecogniser
struct TouchRecogniser_t9;
// UnityEngine.GameObject
struct GameObject_t10;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void TouchRecogniser::.ctor()
extern "C" void TouchRecogniser__ctor_m20 (TouchRecogniser_t9 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchRecogniser::Start()
extern "C" void TouchRecogniser_Start_m21 (TouchRecogniser_t9 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchRecogniser::Update()
extern "C" void TouchRecogniser_Update_m22 (TouchRecogniser_t9 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchRecogniser::GotMousePosition(UnityEngine.Vector3)
extern "C" void TouchRecogniser_GotMousePosition_m23 (TouchRecogniser_t9 * __this, Vector3_t6  ___mousePosition, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchRecogniser::GotDeltaPosition(UnityEngine.Vector2)
extern "C" void TouchRecogniser_GotDeltaPosition_m24 (TouchRecogniser_t9 * __this, Vector2_t12  ___delta_, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchRecogniser::KickFootballWithDirectionAndPower(UnityEngine.Vector3,System.Single)
extern "C" void TouchRecogniser_KickFootballWithDirectionAndPower_m25 (TouchRecogniser_t9 * __this, Vector3_t6  ___direction_, float ___power_, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchRecogniser::SetFootball(UnityEngine.GameObject)
extern "C" void TouchRecogniser_SetFootball_m26 (TouchRecogniser_t9 * __this, GameObject_t10 * ___football_, MethodInfo* method) IL2CPP_METHOD_ATTR;
