#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.Button
struct Button_t114;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t112;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t34;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t30;
// System.Collections.IEnumerator
struct IEnumerator_t117;

// System.Void UnityEngine.UI.Button::.ctor()
extern "C" void Button__ctor_m376 (Button_t114 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::get_onClick()
extern "C" ButtonClickedEvent_t112 * Button_get_onClick_m377 (Button_t114 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Button::set_onClick(UnityEngine.UI.Button/ButtonClickedEvent)
extern "C" void Button_set_onClick_m378 (Button_t114 * __this, ButtonClickedEvent_t112 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Button::Press()
extern "C" void Button_Press_m379 (Button_t114 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Button::OnPointerClick(UnityEngine.EventSystems.PointerEventData)
extern "C" void Button_OnPointerClick_m380 (Button_t114 * __this, PointerEventData_t34 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Button::OnSubmit(UnityEngine.EventSystems.BaseEventData)
extern "C" void Button_OnSubmit_m381 (Button_t114 * __this, BaseEventData_t30 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UnityEngine.UI.Button::OnFinishSubmit()
extern "C" Object_t * Button_OnFinishSubmit_m382 (Button_t114 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
