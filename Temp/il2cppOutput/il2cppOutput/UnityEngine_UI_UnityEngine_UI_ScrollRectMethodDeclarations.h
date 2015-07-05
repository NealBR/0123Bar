﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.ScrollRect
struct ScrollRect_t200;
// UnityEngine.RectTransform
struct RectTransform_t132;
// UnityEngine.UI.Scrollbar
struct Scrollbar_t193;
// UnityEngine.UI.ScrollRect/ScrollRectEvent
struct ScrollRectEvent_t197;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t34;
// UnityEngine.Transform
struct Transform_t8;
// UnityEngine.UI.ScrollRect/MovementType
#include "UnityEngine_UI_UnityEngine_UI_ScrollRect_MovementType.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.UI.CanvasUpdate
#include "UnityEngine_UI_UnityEngine_UI_CanvasUpdate.h"
// UnityEngine.Bounds
#include "UnityEngine_UnityEngine_Bounds.h"

// System.Void UnityEngine.UI.ScrollRect::.ctor()
extern "C" void ScrollRect__ctor_m786 (ScrollRect_t200 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::get_content()
extern "C" RectTransform_t132 * ScrollRect_get_content_m787 (ScrollRect_t200 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_content(UnityEngine.RectTransform)
extern "C" void ScrollRect_set_content_m788 (ScrollRect_t200 * __this, RectTransform_t132 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.ScrollRect::get_horizontal()
extern "C" bool ScrollRect_get_horizontal_m789 (ScrollRect_t200 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_horizontal(System.Boolean)
extern "C" void ScrollRect_set_horizontal_m790 (ScrollRect_t200 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.ScrollRect::get_vertical()
extern "C" bool ScrollRect_get_vertical_m791 (ScrollRect_t200 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_vertical(System.Boolean)
extern "C" void ScrollRect_set_vertical_m792 (ScrollRect_t200 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.ScrollRect/MovementType UnityEngine.UI.ScrollRect::get_movementType()
extern "C" int32_t ScrollRect_get_movementType_m793 (ScrollRect_t200 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_movementType(UnityEngine.UI.ScrollRect/MovementType)
extern "C" void ScrollRect_set_movementType_m794 (ScrollRect_t200 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.ScrollRect::get_elasticity()
extern "C" float ScrollRect_get_elasticity_m795 (ScrollRect_t200 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_elasticity(System.Single)
extern "C" void ScrollRect_set_elasticity_m796 (ScrollRect_t200 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.ScrollRect::get_inertia()
extern "C" bool ScrollRect_get_inertia_m797 (ScrollRect_t200 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_inertia(System.Boolean)
extern "C" void ScrollRect_set_inertia_m798 (ScrollRect_t200 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.ScrollRect::get_decelerationRate()
extern "C" float ScrollRect_get_decelerationRate_m799 (ScrollRect_t200 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_decelerationRate(System.Single)
extern "C" void ScrollRect_set_decelerationRate_m800 (ScrollRect_t200 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.ScrollRect::get_scrollSensitivity()
extern "C" float ScrollRect_get_scrollSensitivity_m801 (ScrollRect_t200 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_scrollSensitivity(System.Single)
extern "C" void ScrollRect_set_scrollSensitivity_m802 (ScrollRect_t200 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Scrollbar UnityEngine.UI.ScrollRect::get_horizontalScrollbar()
extern "C" Scrollbar_t193 * ScrollRect_get_horizontalScrollbar_m803 (ScrollRect_t200 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_horizontalScrollbar(UnityEngine.UI.Scrollbar)
extern "C" void ScrollRect_set_horizontalScrollbar_m804 (ScrollRect_t200 * __this, Scrollbar_t193 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Scrollbar UnityEngine.UI.ScrollRect::get_verticalScrollbar()
extern "C" Scrollbar_t193 * ScrollRect_get_verticalScrollbar_m805 (ScrollRect_t200 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_verticalScrollbar(UnityEngine.UI.Scrollbar)
extern "C" void ScrollRect_set_verticalScrollbar_m806 (ScrollRect_t200 * __this, Scrollbar_t193 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.ScrollRect/ScrollRectEvent UnityEngine.UI.ScrollRect::get_onValueChanged()
extern "C" ScrollRectEvent_t197 * ScrollRect_get_onValueChanged_m807 (ScrollRect_t200 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_onValueChanged(UnityEngine.UI.ScrollRect/ScrollRectEvent)
extern "C" void ScrollRect_set_onValueChanged_m808 (ScrollRect_t200 * __this, ScrollRectEvent_t197 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::get_viewRect()
extern "C" RectTransform_t132 * ScrollRect_get_viewRect_m809 (ScrollRect_t200 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.UI.ScrollRect::get_velocity()
extern "C" Vector2_t12  ScrollRect_get_velocity_m810 (ScrollRect_t200 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_velocity(UnityEngine.Vector2)
extern "C" void ScrollRect_set_velocity_m811 (ScrollRect_t200 * __this, Vector2_t12  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::Rebuild(UnityEngine.UI.CanvasUpdate)
extern "C" void ScrollRect_Rebuild_m812 (ScrollRect_t200 * __this, int32_t ___executing, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::OnEnable()
extern "C" void ScrollRect_OnEnable_m813 (ScrollRect_t200 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::OnDisable()
extern "C" void ScrollRect_OnDisable_m814 (ScrollRect_t200 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.ScrollRect::IsActive()
extern "C" bool ScrollRect_IsActive_m815 (ScrollRect_t200 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::EnsureLayoutHasRebuilt()
extern "C" void ScrollRect_EnsureLayoutHasRebuilt_m816 (ScrollRect_t200 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::StopMovement()
extern "C" void ScrollRect_StopMovement_m817 (ScrollRect_t200 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::OnScroll(UnityEngine.EventSystems.PointerEventData)
extern "C" void ScrollRect_OnScroll_m818 (ScrollRect_t200 * __this, PointerEventData_t34 * ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::OnInitializePotentialDrag(UnityEngine.EventSystems.PointerEventData)
extern "C" void ScrollRect_OnInitializePotentialDrag_m819 (ScrollRect_t200 * __this, PointerEventData_t34 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::OnBeginDrag(UnityEngine.EventSystems.PointerEventData)
extern "C" void ScrollRect_OnBeginDrag_m820 (ScrollRect_t200 * __this, PointerEventData_t34 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::OnEndDrag(UnityEngine.EventSystems.PointerEventData)
extern "C" void ScrollRect_OnEndDrag_m821 (ScrollRect_t200 * __this, PointerEventData_t34 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::OnDrag(UnityEngine.EventSystems.PointerEventData)
extern "C" void ScrollRect_OnDrag_m822 (ScrollRect_t200 * __this, PointerEventData_t34 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::SetContentAnchoredPosition(UnityEngine.Vector2)
extern "C" void ScrollRect_SetContentAnchoredPosition_m823 (ScrollRect_t200 * __this, Vector2_t12  ___position, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::LateUpdate()
extern "C" void ScrollRect_LateUpdate_m824 (ScrollRect_t200 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::UpdatePrevData()
extern "C" void ScrollRect_UpdatePrevData_m825 (ScrollRect_t200 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::UpdateScrollbars(UnityEngine.Vector2)
extern "C" void ScrollRect_UpdateScrollbars_m826 (ScrollRect_t200 * __this, Vector2_t12  ___offset, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.UI.ScrollRect::get_normalizedPosition()
extern "C" Vector2_t12  ScrollRect_get_normalizedPosition_m827 (ScrollRect_t200 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_normalizedPosition(UnityEngine.Vector2)
extern "C" void ScrollRect_set_normalizedPosition_m828 (ScrollRect_t200 * __this, Vector2_t12  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.ScrollRect::get_horizontalNormalizedPosition()
extern "C" float ScrollRect_get_horizontalNormalizedPosition_m829 (ScrollRect_t200 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_horizontalNormalizedPosition(System.Single)
extern "C" void ScrollRect_set_horizontalNormalizedPosition_m830 (ScrollRect_t200 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.ScrollRect::get_verticalNormalizedPosition()
extern "C" float ScrollRect_get_verticalNormalizedPosition_m831 (ScrollRect_t200 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_verticalNormalizedPosition(System.Single)
extern "C" void ScrollRect_set_verticalNormalizedPosition_m832 (ScrollRect_t200 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::SetHorizontalNormalizedPosition(System.Single)
extern "C" void ScrollRect_SetHorizontalNormalizedPosition_m833 (ScrollRect_t200 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::SetVerticalNormalizedPosition(System.Single)
extern "C" void ScrollRect_SetVerticalNormalizedPosition_m834 (ScrollRect_t200 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::SetNormalizedPosition(System.Single,System.Int32)
extern "C" void ScrollRect_SetNormalizedPosition_m835 (ScrollRect_t200 * __this, float ___value, int32_t ___axis, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.ScrollRect::RubberDelta(System.Single,System.Single)
extern "C" float ScrollRect_RubberDelta_m836 (Object_t * __this /* static, unused */, float ___overStretching, float ___viewSize, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::UpdateBounds()
extern "C" void ScrollRect_UpdateBounds_m837 (ScrollRect_t200 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Bounds UnityEngine.UI.ScrollRect::GetBounds()
extern "C" Bounds_t201  ScrollRect_GetBounds_m838 (ScrollRect_t200 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.UI.ScrollRect::CalculateOffset(UnityEngine.Vector2)
extern "C" Vector2_t12  ScrollRect_CalculateOffset_m839 (ScrollRect_t200 * __this, Vector2_t12  ___delta, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.ScrollRect::UnityEngine.UI.ICanvasElement.IsDestroyed()
extern "C" bool ScrollRect_UnityEngine_UI_ICanvasElement_IsDestroyed_m840 (ScrollRect_t200 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.UI.ScrollRect::UnityEngine.UI.ICanvasElement.get_transform()
extern "C" Transform_t8 * ScrollRect_UnityEngine_UI_ICanvasElement_get_transform_m841 (ScrollRect_t200 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
