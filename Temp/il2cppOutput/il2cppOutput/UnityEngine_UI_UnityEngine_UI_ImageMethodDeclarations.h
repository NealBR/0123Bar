#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.Image
struct Image_t158;
// UnityEngine.Sprite
struct Sprite_t156;
// UnityEngine.Texture
struct Texture_t139;
// System.Collections.Generic.List`1<UnityEngine.UIVertex>
struct List_1_t140;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t157;
// UnityEngine.Camera
struct Camera_t7;
// UnityEngine.UI.Image/Type
#include "UnityEngine_UI_UnityEngine_UI_Image_Type.h"
// UnityEngine.UI.Image/FillMethod
#include "UnityEngine_UI_UnityEngine_UI_Image_FillMethod.h"
// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4.h"
// UnityEngine.UIVertex
#include "UnityEngine_UnityEngine_UIVertex.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"

// System.Void UnityEngine.UI.Image::.ctor()
extern "C" void Image__ctor_m512 (Image_t158 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Image::.cctor()
extern "C" void Image__cctor_m513 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Sprite UnityEngine.UI.Image::get_sprite()
extern "C" Sprite_t156 * Image_get_sprite_m514 (Image_t158 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Image::set_sprite(UnityEngine.Sprite)
extern "C" void Image_set_sprite_m515 (Image_t158 * __this, Sprite_t156 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Sprite UnityEngine.UI.Image::get_overrideSprite()
extern "C" Sprite_t156 * Image_get_overrideSprite_m516 (Image_t158 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Image::set_overrideSprite(UnityEngine.Sprite)
extern "C" void Image_set_overrideSprite_m517 (Image_t158 * __this, Sprite_t156 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Image/Type UnityEngine.UI.Image::get_type()
extern "C" int32_t Image_get_type_m518 (Image_t158 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Image::set_type(UnityEngine.UI.Image/Type)
extern "C" void Image_set_type_m519 (Image_t158 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Image::get_preserveAspect()
extern "C" bool Image_get_preserveAspect_m520 (Image_t158 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Image::set_preserveAspect(System.Boolean)
extern "C" void Image_set_preserveAspect_m521 (Image_t158 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Image::get_fillCenter()
extern "C" bool Image_get_fillCenter_m522 (Image_t158 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Image::set_fillCenter(System.Boolean)
extern "C" void Image_set_fillCenter_m523 (Image_t158 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::get_fillMethod()
extern "C" int32_t Image_get_fillMethod_m524 (Image_t158 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Image::set_fillMethod(UnityEngine.UI.Image/FillMethod)
extern "C" void Image_set_fillMethod_m525 (Image_t158 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Image::get_fillAmount()
extern "C" float Image_get_fillAmount_m526 (Image_t158 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Image::set_fillAmount(System.Single)
extern "C" void Image_set_fillAmount_m527 (Image_t158 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Image::get_fillClockwise()
extern "C" bool Image_get_fillClockwise_m528 (Image_t158 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Image::set_fillClockwise(System.Boolean)
extern "C" void Image_set_fillClockwise_m529 (Image_t158 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.Image::get_fillOrigin()
extern "C" int32_t Image_get_fillOrigin_m530 (Image_t158 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Image::set_fillOrigin(System.Int32)
extern "C" void Image_set_fillOrigin_m531 (Image_t158 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Image::get_eventAlphaThreshold()
extern "C" float Image_get_eventAlphaThreshold_m532 (Image_t158 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Image::set_eventAlphaThreshold(System.Single)
extern "C" void Image_set_eventAlphaThreshold_m533 (Image_t158 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture UnityEngine.UI.Image::get_mainTexture()
extern "C" Texture_t139 * Image_get_mainTexture_m534 (Image_t158 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Image::get_hasBorder()
extern "C" bool Image_get_hasBorder_m535 (Image_t158 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Image::get_pixelsPerUnit()
extern "C" float Image_get_pixelsPerUnit_m536 (Image_t158 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Image::OnBeforeSerialize()
extern "C" void Image_OnBeforeSerialize_m537 (Image_t158 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Image::OnAfterDeserialize()
extern "C" void Image_OnAfterDeserialize_m538 (Image_t158 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UnityEngine.UI.Image::GetDrawingDimensions(System.Boolean)
extern "C" Vector4_t160  Image_GetDrawingDimensions_m539 (Image_t158 * __this, bool ___shouldPreserveAspect, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Image::SetNativeSize()
extern "C" void Image_SetNativeSize_m540 (Image_t158 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Image::OnFillVBO(System.Collections.Generic.List`1<UnityEngine.UIVertex>)
extern "C" void Image_OnFillVBO_m541 (Image_t158 * __this, List_1_t140 * ___vbo, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Image::GenerateSimpleSprite(System.Collections.Generic.List`1<UnityEngine.UIVertex>,System.Boolean)
extern "C" void Image_GenerateSimpleSprite_m542 (Image_t158 * __this, List_1_t140 * ___vbo, bool ___preserveAspect, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Image::GenerateSlicedSprite(System.Collections.Generic.List`1<UnityEngine.UIVertex>)
extern "C" void Image_GenerateSlicedSprite_m543 (Image_t158 * __this, List_1_t140 * ___vbo, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Image::GenerateTiledSprite(System.Collections.Generic.List`1<UnityEngine.UIVertex>)
extern "C" void Image_GenerateTiledSprite_m544 (Image_t158 * __this, List_1_t140 * ___vbo, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Image::AddQuad(System.Collections.Generic.List`1<UnityEngine.UIVertex>,UnityEngine.UIVertex,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2)
extern "C" void Image_AddQuad_m545 (Image_t158 * __this, List_1_t140 * ___vbo, UIVertex_t161  ___v, Vector2_t12  ___posMin, Vector2_t12  ___posMax, Vector2_t12  ___uvMin, Vector2_t12  ___uvMax, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UnityEngine.UI.Image::GetAdjustedBorders(UnityEngine.Vector4,UnityEngine.Rect)
extern "C" Vector4_t160  Image_GetAdjustedBorders_m546 (Image_t158 * __this, Vector4_t160  ___border, Rect_t141  ___rect, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Image::GenerateFilledSprite(System.Collections.Generic.List`1<UnityEngine.UIVertex>,System.Boolean)
extern "C" void Image_GenerateFilledSprite_m547 (Image_t158 * __this, List_1_t140 * ___vbo, bool ___preserveAspect, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Image::RadialCut(UnityEngine.Vector2[],UnityEngine.Vector2[],System.Single,System.Boolean,System.Int32)
extern "C" bool Image_RadialCut_m548 (Object_t * __this /* static, unused */, Vector2U5BU5D_t157* ___xy, Vector2U5BU5D_t157* ___uv, float ___fill, bool ___invert, int32_t ___corner, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Image::RadialCut(UnityEngine.Vector2[],System.Single,System.Single,System.Boolean,System.Int32)
extern "C" void Image_RadialCut_m549 (Object_t * __this /* static, unused */, Vector2U5BU5D_t157* ___xy, float ___cos, float ___sin, bool ___invert, int32_t ___corner, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Image::CalculateLayoutInputHorizontal()
extern "C" void Image_CalculateLayoutInputHorizontal_m550 (Image_t158 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Image::CalculateLayoutInputVertical()
extern "C" void Image_CalculateLayoutInputVertical_m551 (Image_t158 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Image::get_minWidth()
extern "C" float Image_get_minWidth_m552 (Image_t158 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Image::get_preferredWidth()
extern "C" float Image_get_preferredWidth_m553 (Image_t158 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Image::get_flexibleWidth()
extern "C" float Image_get_flexibleWidth_m554 (Image_t158 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Image::get_minHeight()
extern "C" float Image_get_minHeight_m555 (Image_t158 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Image::get_preferredHeight()
extern "C" float Image_get_preferredHeight_m556 (Image_t158 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Image::get_flexibleHeight()
extern "C" float Image_get_flexibleHeight_m557 (Image_t158 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.Image::get_layoutPriority()
extern "C" int32_t Image_get_layoutPriority_m558 (Image_t158 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Image::IsRaycastLocationValid(UnityEngine.Vector2,UnityEngine.Camera)
extern "C" bool Image_IsRaycastLocationValid_m559 (Image_t158 * __this, Vector2_t12  ___screenPoint, Camera_t7 * ___eventCamera, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.UI.Image::MapCoordinate(UnityEngine.Vector2,UnityEngine.Rect)
extern "C" Vector2_t12  Image_MapCoordinate_m560 (Image_t158 * __this, Vector2_t12  ___local, Rect_t141  ___rect, MethodInfo* method) IL2CPP_METHOD_ATTR;
