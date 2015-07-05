#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.EventSystems.PointerInputModule
struct PointerInputModule_t96;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t34;
// UnityEngine.EventSystems.PointerInputModule/MouseState
struct MouseState_t94;
// System.String
struct String_t;
// UnityEngine.GameObject
struct GameObject_t10;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t30;
// UnityEngine.Touch
#include "UnityEngine_UnityEngine_Touch.h"
// UnityEngine.EventSystems.PointerEventData/FramePressState
#include "UnityEngine_UI_UnityEngine_EventSystems_PointerEventData_Fra.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void UnityEngine.EventSystems.PointerInputModule::.ctor()
extern "C" void PointerInputModule__ctor_m272 (PointerInputModule_t96 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.PointerInputModule::GetPointerData(System.Int32,UnityEngine.EventSystems.PointerEventData&,System.Boolean)
extern "C" bool PointerInputModule_GetPointerData_m273 (PointerInputModule_t96 * __this, int32_t ___id, PointerEventData_t34 ** ___data, bool ___create, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerInputModule::RemovePointerData(UnityEngine.EventSystems.PointerEventData)
extern "C" void PointerInputModule_RemovePointerData_m274 (PointerInputModule_t96 * __this, PointerEventData_t34 * ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.PointerEventData UnityEngine.EventSystems.PointerInputModule::GetTouchPointerEventData(UnityEngine.Touch,System.Boolean&,System.Boolean&)
extern "C" PointerEventData_t34 * PointerInputModule_GetTouchPointerEventData_m275 (PointerInputModule_t96 * __this, Touch_t22  ___input, bool* ___pressed, bool* ___released, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerInputModule::CopyFromTo(UnityEngine.EventSystems.PointerEventData,UnityEngine.EventSystems.PointerEventData)
extern "C" void PointerInputModule_CopyFromTo_m276 (PointerInputModule_t96 * __this, PointerEventData_t34 * ___from, PointerEventData_t34 * ___to, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.PointerEventData/FramePressState UnityEngine.EventSystems.PointerInputModule::StateForMouseButton(System.Int32)
extern "C" int32_t PointerInputModule_StateForMouseButton_m277 (Object_t * __this /* static, unused */, int32_t ___buttonId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.PointerInputModule/MouseState UnityEngine.EventSystems.PointerInputModule::GetMousePointerEventData()
extern "C" MouseState_t94 * PointerInputModule_GetMousePointerEventData_m278 (PointerInputModule_t96 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.PointerEventData UnityEngine.EventSystems.PointerInputModule::GetLastPointerEventData(System.Int32)
extern "C" PointerEventData_t34 * PointerInputModule_GetLastPointerEventData_m279 (PointerInputModule_t96 * __this, int32_t ___id, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.PointerInputModule::ShouldStartDrag(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Boolean)
extern "C" bool PointerInputModule_ShouldStartDrag_m280 (Object_t * __this /* static, unused */, Vector2_t12  ___pressPos, Vector2_t12  ___currentPos, float ___threshold, bool ___useDragThreshold, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerInputModule::ProcessMove(UnityEngine.EventSystems.PointerEventData)
extern "C" void PointerInputModule_ProcessMove_m281 (PointerInputModule_t96 * __this, PointerEventData_t34 * ___pointerEvent, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerInputModule::ProcessDrag(UnityEngine.EventSystems.PointerEventData)
extern "C" void PointerInputModule_ProcessDrag_m282 (PointerInputModule_t96 * __this, PointerEventData_t34 * ___pointerEvent, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.PointerInputModule::IsPointerOverGameObject(System.Int32)
extern "C" bool PointerInputModule_IsPointerOverGameObject_m283 (PointerInputModule_t96 * __this, int32_t ___pointerId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerInputModule::ClearSelection()
extern "C" void PointerInputModule_ClearSelection_m284 (PointerInputModule_t96 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.EventSystems.PointerInputModule::ToString()
extern "C" String_t* PointerInputModule_ToString_m285 (PointerInputModule_t96 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerInputModule::DeselectIfSelectionChanged(UnityEngine.GameObject,UnityEngine.EventSystems.BaseEventData)
extern "C" void PointerInputModule_DeselectIfSelectionChanged_m286 (PointerInputModule_t96 * __this, GameObject_t10 * ___currentOverGo, BaseEventData_t30 * ___pointerEvent, MethodInfo* method) IL2CPP_METHOD_ATTR;
