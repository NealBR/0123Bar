#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.EventSystems.PhysicsRaycaster
struct PhysicsRaycaster_t101;
// UnityEngine.Camera
struct Camera_t7;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t34;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>
struct List_1_t35;
// UnityEngine.LayerMask
#include "UnityEngine_UnityEngine_LayerMask.h"
// UnityEngine.RaycastHit
#include "UnityEngine_UnityEngine_RaycastHit.h"

// System.Void UnityEngine.EventSystems.PhysicsRaycaster::.ctor()
extern "C" void PhysicsRaycaster__ctor_m336 (PhysicsRaycaster_t101 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera UnityEngine.EventSystems.PhysicsRaycaster::get_eventCamera()
extern "C" Camera_t7 * PhysicsRaycaster_get_eventCamera_m337 (PhysicsRaycaster_t101 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.EventSystems.PhysicsRaycaster::get_depth()
extern "C" int32_t PhysicsRaycaster_get_depth_m338 (PhysicsRaycaster_t101 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.EventSystems.PhysicsRaycaster::get_finalEventMask()
extern "C" int32_t PhysicsRaycaster_get_finalEventMask_m339 (PhysicsRaycaster_t101 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.LayerMask UnityEngine.EventSystems.PhysicsRaycaster::get_eventMask()
extern "C" LayerMask_t103  PhysicsRaycaster_get_eventMask_m340 (PhysicsRaycaster_t101 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PhysicsRaycaster::set_eventMask(UnityEngine.LayerMask)
extern "C" void PhysicsRaycaster_set_eventMask_m341 (PhysicsRaycaster_t101 * __this, LayerMask_t103  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PhysicsRaycaster::Raycast(UnityEngine.EventSystems.PointerEventData,System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>)
extern "C" void PhysicsRaycaster_Raycast_m342 (PhysicsRaycaster_t101 * __this, PointerEventData_t34 * ___eventData, List_1_t35 * ___resultAppendList, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.EventSystems.PhysicsRaycaster::<Raycast>m__1(UnityEngine.RaycastHit,UnityEngine.RaycastHit)
extern "C" int32_t PhysicsRaycaster_U3CRaycastU3Em__1_m343 (Object_t * __this /* static, unused */, RaycastHit_t104  ___r1, RaycastHit_t104  ___r2, MethodInfo* method) IL2CPP_METHOD_ATTR;
