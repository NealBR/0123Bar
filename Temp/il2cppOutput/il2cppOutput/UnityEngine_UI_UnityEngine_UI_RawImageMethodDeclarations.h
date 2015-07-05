#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.RawImage
struct RawImage_t188;
// UnityEngine.Texture
struct Texture_t139;
// System.Collections.Generic.List`1<UnityEngine.UIVertex>
struct List_1_t140;
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"

// System.Void UnityEngine.UI.RawImage::.ctor()
extern "C" void RawImage__ctor_m730 (RawImage_t188 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture UnityEngine.UI.RawImage::get_mainTexture()
extern "C" Texture_t139 * RawImage_get_mainTexture_m731 (RawImage_t188 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture UnityEngine.UI.RawImage::get_texture()
extern "C" Texture_t139 * RawImage_get_texture_m732 (RawImage_t188 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.RawImage::set_texture(UnityEngine.Texture)
extern "C" void RawImage_set_texture_m733 (RawImage_t188 * __this, Texture_t139 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.UI.RawImage::get_uvRect()
extern "C" Rect_t141  RawImage_get_uvRect_m734 (RawImage_t188 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.RawImage::set_uvRect(UnityEngine.Rect)
extern "C" void RawImage_set_uvRect_m735 (RawImage_t188 * __this, Rect_t141  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.RawImage::SetNativeSize()
extern "C" void RawImage_SetNativeSize_m736 (RawImage_t188 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.RawImage::OnFillVBO(System.Collections.Generic.List`1<UnityEngine.UIVertex>)
extern "C" void RawImage_OnFillVBO_m737 (RawImage_t188 * __this, List_1_t140 * ___vbo, MethodInfo* method) IL2CPP_METHOD_ATTR;
