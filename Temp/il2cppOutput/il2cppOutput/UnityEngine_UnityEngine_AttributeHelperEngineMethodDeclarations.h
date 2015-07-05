#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.AttributeHelperEngine
struct AttributeHelperEngine_t627;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t606;

// System.Void UnityEngine.AttributeHelperEngine::.cctor()
extern "C" void AttributeHelperEngine__cctor_m3138 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type UnityEngine.AttributeHelperEngine::GetParentTypeDisallowingMultipleInclusion(System.Type)
extern "C" Type_t * AttributeHelperEngine_GetParentTypeDisallowingMultipleInclusion_m3139 (Object_t * __this /* static, unused */, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] UnityEngine.AttributeHelperEngine::GetRequiredComponents(System.Type)
extern "C" TypeU5BU5D_t606* AttributeHelperEngine_GetRequiredComponents_m3140 (Object_t * __this /* static, unused */, Type_t * ___klass, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.AttributeHelperEngine::CheckIsEditorScript(System.Type)
extern "C" bool AttributeHelperEngine_CheckIsEditorScript_m3141 (Object_t * __this /* static, unused */, Type_t * ___klass, MethodInfo* method) IL2CPP_METHOD_ATTR;
