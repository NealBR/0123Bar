#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Rigidbody
struct Rigidbody_t16;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.ForceMode
#include "UnityEngine_UnityEngine_ForceMode.h"

// System.Void UnityEngine.Rigidbody::AddForce(UnityEngine.Vector3)
extern "C" void Rigidbody_AddForce_m34 (Rigidbody_t16 * __this, Vector3_t6  ___force, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::INTERNAL_CALL_AddForce(UnityEngine.Rigidbody,UnityEngine.Vector3&,UnityEngine.ForceMode)
extern "C" void Rigidbody_INTERNAL_CALL_AddForce_m2768 (Object_t * __this /* static, unused */, Rigidbody_t16 * ___self, Vector3_t6 * ___force, int32_t ___mode, MethodInfo* method) IL2CPP_METHOD_ATTR;
