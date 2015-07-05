#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.GUI
struct GUI_t464;
// UnityEngine.GUISkin
struct GUISkin_t462;
// UnityEngine.GUI/WindowFunction
struct WindowFunction_t461;
// UnityEngine.GUIStyle
struct GUIStyle_t466;
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void UnityEngine.GUI::.cctor()
extern "C" void GUI__cctor_m2245 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::set_nextScrollStepTime(System.DateTime)
extern "C" void GUI_set_nextScrollStepTime_m2246 (Object_t * __this /* static, unused */, DateTime_t465  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::set_skin(UnityEngine.GUISkin)
extern "C" void GUI_set_skin_m2247 (Object_t * __this /* static, unused */, GUISkin_t462 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUISkin UnityEngine.GUI::get_skin()
extern "C" GUISkin_t462 * GUI_get_skin_m2248 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::set_changed(System.Boolean)
extern "C" void GUI_set_changed_m2249 (Object_t * __this /* static, unused */, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::CallWindowDelegate(UnityEngine.GUI/WindowFunction,System.Int32,UnityEngine.GUISkin,System.Int32,System.Single,System.Single,UnityEngine.GUIStyle)
extern "C" void GUI_CallWindowDelegate_m2250 (Object_t * __this /* static, unused */, WindowFunction_t461 * ___func, int32_t ___id, GUISkin_t462 * ____skin, int32_t ___forceRect, float ___width, float ___height, GUIStyle_t466 * ___style, MethodInfo* method) IL2CPP_METHOD_ATTR;
