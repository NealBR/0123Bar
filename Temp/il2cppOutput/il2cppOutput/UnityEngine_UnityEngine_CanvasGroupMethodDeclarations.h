#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.CanvasGroup
struct CanvasGroup_t293;
// UnityEngine.Camera
struct Camera_t7;
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Boolean UnityEngine.CanvasGroup::get_interactable()
extern "C" bool CanvasGroup_get_interactable_m1790 (CanvasGroup_t293 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.CanvasGroup::get_blocksRaycasts()
extern "C" bool CanvasGroup_get_blocksRaycasts_m2893 (CanvasGroup_t293 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.CanvasGroup::get_ignoreParentGroups()
extern "C" bool CanvasGroup_get_ignoreParentGroups_m1515 (CanvasGroup_t293 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.CanvasGroup::IsRaycastLocationValid(UnityEngine.Vector2,UnityEngine.Camera)
extern "C" bool CanvasGroup_IsRaycastLocationValid_m2894 (CanvasGroup_t293 * __this, Vector2_t12  ___sp, Camera_t7 * ___eventCamera, MethodInfo* method) IL2CPP_METHOD_ATTR;
