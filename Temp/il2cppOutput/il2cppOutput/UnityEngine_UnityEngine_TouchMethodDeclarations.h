#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Touch
struct Touch_t22;
struct Touch_t22_marshaled;
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.TouchPhase
#include "UnityEngine_UnityEngine_TouchPhase.h"

// System.Int32 UnityEngine.Touch::get_fingerId()
extern "C" int32_t Touch_get_fingerId_m1374 (Touch_t22 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Touch::get_position()
extern "C" Vector2_t12  Touch_get_position_m1375 (Touch_t22 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Touch::get_deltaPosition()
extern "C" Vector2_t12  Touch_get_deltaPosition_m56 (Touch_t22 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.TouchPhase UnityEngine.Touch::get_phase()
extern "C" int32_t Touch_get_phase_m55 (Touch_t22 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
void Touch_t22_marshal(const Touch_t22& unmarshaled, Touch_t22_marshaled& marshaled);
void Touch_t22_marshal_back(const Touch_t22_marshaled& marshaled, Touch_t22& unmarshaled);
void Touch_t22_marshal_cleanup(Touch_t22_marshaled& marshaled);
