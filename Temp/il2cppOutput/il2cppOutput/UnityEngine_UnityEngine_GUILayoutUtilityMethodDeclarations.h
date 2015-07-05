#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.GUILayoutUtility
struct GUILayoutUtility_t472;
// UnityEngine.GUIStyle
struct GUIStyle_t466;
// UnityEngine.GUILayoutUtility/LayoutCache
struct LayoutCache_t470;
// UnityEngine.GUILayoutOption[]
struct GUILayoutOptionU5BU5D_t473;
// UnityEngine.GUILayoutGroup
struct GUILayoutGroup_t469;
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"

// System.Void UnityEngine.GUILayoutUtility::.cctor()
extern "C" void GUILayoutUtility__cctor_m2254 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUILayoutUtility/LayoutCache UnityEngine.GUILayoutUtility::SelectIDList(System.Int32,System.Boolean)
extern "C" LayoutCache_t470 * GUILayoutUtility_SelectIDList_m2255 (Object_t * __this /* static, unused */, int32_t ___instanceID, bool ___isWindow, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutUtility::Begin(System.Int32)
extern "C" void GUILayoutUtility_Begin_m2256 (Object_t * __this /* static, unused */, int32_t ___instanceID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutUtility::BeginWindow(System.Int32,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C" void GUILayoutUtility_BeginWindow_m2257 (Object_t * __this /* static, unused */, int32_t ___windowID, GUIStyle_t466 * ___style, GUILayoutOptionU5BU5D_t473* ___options, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutUtility::Layout()
extern "C" void GUILayoutUtility_Layout_m2258 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutUtility::LayoutFromEditorWindow()
extern "C" void GUILayoutUtility_LayoutFromEditorWindow_m2259 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutUtility::LayoutFreeGroup(UnityEngine.GUILayoutGroup)
extern "C" void GUILayoutUtility_LayoutFreeGroup_m2260 (Object_t * __this /* static, unused */, GUILayoutGroup_t469 * ___toplevel, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutUtility::LayoutSingleGroup(UnityEngine.GUILayoutGroup)
extern "C" void GUILayoutUtility_LayoutSingleGroup_m2261 (Object_t * __this /* static, unused */, GUILayoutGroup_t469 * ___i, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.GUILayoutUtility::Internal_GetWindowRect(System.Int32)
extern "C" Rect_t141  GUILayoutUtility_Internal_GetWindowRect_m2262 (Object_t * __this /* static, unused */, int32_t ___windowID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutUtility::Internal_MoveWindow(System.Int32,UnityEngine.Rect)
extern "C" void GUILayoutUtility_Internal_MoveWindow_m2263 (Object_t * __this /* static, unused */, int32_t ___windowID, Rect_t141  ___r, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutUtility::INTERNAL_CALL_Internal_MoveWindow(System.Int32,UnityEngine.Rect&)
extern "C" void GUILayoutUtility_INTERNAL_CALL_Internal_MoveWindow_m2264 (Object_t * __this /* static, unused */, int32_t ___windowID, Rect_t141 * ___r, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUILayoutUtility::get_spaceStyle()
extern "C" GUIStyle_t466 * GUILayoutUtility_get_spaceStyle_m2265 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
