#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.Toggle
struct Toggle_t221;
// UnityEngine.UI.ToggleGroup
struct ToggleGroup_t220;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t34;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t30;
// UnityEngine.Transform
struct Transform_t8;
// UnityEngine.UI.CanvasUpdate
#include "UnityEngine_UI_UnityEngine_UI_CanvasUpdate.h"

// System.Void UnityEngine.UI.Toggle::.ctor()
extern "C" void Toggle__ctor_m1004 (Toggle_t221 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.ToggleGroup UnityEngine.UI.Toggle::get_group()
extern "C" ToggleGroup_t220 * Toggle_get_group_m1005 (Toggle_t221 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Toggle::set_group(UnityEngine.UI.ToggleGroup)
extern "C" void Toggle_set_group_m1006 (Toggle_t221 * __this, ToggleGroup_t220 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Toggle::Rebuild(UnityEngine.UI.CanvasUpdate)
extern "C" void Toggle_Rebuild_m1007 (Toggle_t221 * __this, int32_t ___executing, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Toggle::OnEnable()
extern "C" void Toggle_OnEnable_m1008 (Toggle_t221 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Toggle::OnDisable()
extern "C" void Toggle_OnDisable_m1009 (Toggle_t221 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Toggle::SetToggleGroup(UnityEngine.UI.ToggleGroup,System.Boolean)
extern "C" void Toggle_SetToggleGroup_m1010 (Toggle_t221 * __this, ToggleGroup_t220 * ___newGroup, bool ___setMemberValue, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Toggle::get_isOn()
extern "C" bool Toggle_get_isOn_m1011 (Toggle_t221 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Toggle::set_isOn(System.Boolean)
extern "C" void Toggle_set_isOn_m1012 (Toggle_t221 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Toggle::Set(System.Boolean)
extern "C" void Toggle_Set_m1013 (Toggle_t221 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Toggle::Set(System.Boolean,System.Boolean)
extern "C" void Toggle_Set_m1014 (Toggle_t221 * __this, bool ___value, bool ___sendCallback, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Toggle::PlayEffect(System.Boolean)
extern "C" void Toggle_PlayEffect_m1015 (Toggle_t221 * __this, bool ___instant, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Toggle::Start()
extern "C" void Toggle_Start_m1016 (Toggle_t221 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Toggle::InternalToggle()
extern "C" void Toggle_InternalToggle_m1017 (Toggle_t221 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Toggle::OnPointerClick(UnityEngine.EventSystems.PointerEventData)
extern "C" void Toggle_OnPointerClick_m1018 (Toggle_t221 * __this, PointerEventData_t34 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Toggle::OnSubmit(UnityEngine.EventSystems.BaseEventData)
extern "C" void Toggle_OnSubmit_m1019 (Toggle_t221 * __this, BaseEventData_t30 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Toggle::UnityEngine.UI.ICanvasElement.IsDestroyed()
extern "C" bool Toggle_UnityEngine_UI_ICanvasElement_IsDestroyed_m1020 (Toggle_t221 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.UI.Toggle::UnityEngine.UI.ICanvasElement.get_transform()
extern "C" Transform_t8 * Toggle_UnityEngine_UI_ICanvasElement_get_transform_m1021 (Toggle_t221 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
