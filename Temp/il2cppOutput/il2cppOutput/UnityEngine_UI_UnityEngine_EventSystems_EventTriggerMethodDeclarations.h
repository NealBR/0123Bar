#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.EventSystems.EventTrigger
struct EventTrigger_t41;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>
struct List_1_t40;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t30;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t34;
// UnityEngine.EventSystems.AxisEventData
struct AxisEventData_t42;
// UnityEngine.EventSystems.EventTriggerType
#include "UnityEngine_UI_UnityEngine_EventSystems_EventTriggerType.h"

// System.Void UnityEngine.EventSystems.EventTrigger::.ctor()
extern "C" void EventTrigger__ctor_m103 (EventTrigger_t41 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry> UnityEngine.EventSystems.EventTrigger::get_triggers()
extern "C" List_1_t40 * EventTrigger_get_triggers_m104 (EventTrigger_t41 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventTrigger::set_triggers(System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>)
extern "C" void EventTrigger_set_triggers_m105 (EventTrigger_t41 * __this, List_1_t40 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventTrigger::Execute(UnityEngine.EventSystems.EventTriggerType,UnityEngine.EventSystems.BaseEventData)
extern "C" void EventTrigger_Execute_m106 (EventTrigger_t41 * __this, int32_t ___id, BaseEventData_t30 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventTrigger::OnPointerEnter(UnityEngine.EventSystems.PointerEventData)
extern "C" void EventTrigger_OnPointerEnter_m107 (EventTrigger_t41 * __this, PointerEventData_t34 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventTrigger::OnPointerExit(UnityEngine.EventSystems.PointerEventData)
extern "C" void EventTrigger_OnPointerExit_m108 (EventTrigger_t41 * __this, PointerEventData_t34 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventTrigger::OnDrag(UnityEngine.EventSystems.PointerEventData)
extern "C" void EventTrigger_OnDrag_m109 (EventTrigger_t41 * __this, PointerEventData_t34 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventTrigger::OnDrop(UnityEngine.EventSystems.PointerEventData)
extern "C" void EventTrigger_OnDrop_m110 (EventTrigger_t41 * __this, PointerEventData_t34 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventTrigger::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
extern "C" void EventTrigger_OnPointerDown_m111 (EventTrigger_t41 * __this, PointerEventData_t34 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventTrigger::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
extern "C" void EventTrigger_OnPointerUp_m112 (EventTrigger_t41 * __this, PointerEventData_t34 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventTrigger::OnPointerClick(UnityEngine.EventSystems.PointerEventData)
extern "C" void EventTrigger_OnPointerClick_m113 (EventTrigger_t41 * __this, PointerEventData_t34 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventTrigger::OnSelect(UnityEngine.EventSystems.BaseEventData)
extern "C" void EventTrigger_OnSelect_m114 (EventTrigger_t41 * __this, BaseEventData_t30 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventTrigger::OnDeselect(UnityEngine.EventSystems.BaseEventData)
extern "C" void EventTrigger_OnDeselect_m115 (EventTrigger_t41 * __this, BaseEventData_t30 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventTrigger::OnScroll(UnityEngine.EventSystems.PointerEventData)
extern "C" void EventTrigger_OnScroll_m116 (EventTrigger_t41 * __this, PointerEventData_t34 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventTrigger::OnMove(UnityEngine.EventSystems.AxisEventData)
extern "C" void EventTrigger_OnMove_m117 (EventTrigger_t41 * __this, AxisEventData_t42 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventTrigger::OnUpdateSelected(UnityEngine.EventSystems.BaseEventData)
extern "C" void EventTrigger_OnUpdateSelected_m118 (EventTrigger_t41 * __this, BaseEventData_t30 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventTrigger::OnInitializePotentialDrag(UnityEngine.EventSystems.PointerEventData)
extern "C" void EventTrigger_OnInitializePotentialDrag_m119 (EventTrigger_t41 * __this, PointerEventData_t34 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventTrigger::OnBeginDrag(UnityEngine.EventSystems.PointerEventData)
extern "C" void EventTrigger_OnBeginDrag_m120 (EventTrigger_t41 * __this, PointerEventData_t34 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventTrigger::OnEndDrag(UnityEngine.EventSystems.PointerEventData)
extern "C" void EventTrigger_OnEndDrag_m121 (EventTrigger_t41 * __this, PointerEventData_t34 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventTrigger::OnSubmit(UnityEngine.EventSystems.BaseEventData)
extern "C" void EventTrigger_OnSubmit_m122 (EventTrigger_t41 * __this, BaseEventData_t30 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventTrigger::OnCancel(UnityEngine.EventSystems.BaseEventData)
extern "C" void EventTrigger_OnCancel_m123 (EventTrigger_t41 * __this, BaseEventData_t30 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
