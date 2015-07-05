#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Matrix4x4
struct Matrix4x4_t314;
// System.Object
struct Object_t;
// System.String
struct String_t;
// UnityEngine.Matrix4x4
#include "UnityEngine_UnityEngine_Matrix4x4.h"
// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"

// System.Single UnityEngine.Matrix4x4::get_Item(System.Int32,System.Int32)
extern "C" float Matrix4x4_get_Item_m2474 (Matrix4x4_t314 * __this, int32_t ___row, int32_t ___column, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Matrix4x4::set_Item(System.Int32,System.Int32,System.Single)
extern "C" void Matrix4x4_set_Item_m2475 (Matrix4x4_t314 * __this, int32_t ___row, int32_t ___column, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Matrix4x4::get_Item(System.Int32)
extern "C" float Matrix4x4_get_Item_m2476 (Matrix4x4_t314 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Matrix4x4::set_Item(System.Int32,System.Single)
extern "C" void Matrix4x4_set_Item_m2477 (Matrix4x4_t314 * __this, int32_t ___index, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Matrix4x4::GetHashCode()
extern "C" int32_t Matrix4x4_GetHashCode_m2478 (Matrix4x4_t314 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Matrix4x4::Equals(System.Object)
extern "C" bool Matrix4x4_Equals_m2479 (Matrix4x4_t314 * __this, Object_t * ___other, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::Inverse(UnityEngine.Matrix4x4)
extern "C" Matrix4x4_t314  Matrix4x4_Inverse_m2480 (Object_t * __this /* static, unused */, Matrix4x4_t314  ___m, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::INTERNAL_CALL_Inverse(UnityEngine.Matrix4x4&)
extern "C" Matrix4x4_t314  Matrix4x4_INTERNAL_CALL_Inverse_m2481 (Object_t * __this /* static, unused */, Matrix4x4_t314 * ___m, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::Transpose(UnityEngine.Matrix4x4)
extern "C" Matrix4x4_t314  Matrix4x4_Transpose_m2482 (Object_t * __this /* static, unused */, Matrix4x4_t314  ___m, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::INTERNAL_CALL_Transpose(UnityEngine.Matrix4x4&)
extern "C" Matrix4x4_t314  Matrix4x4_INTERNAL_CALL_Transpose_m2483 (Object_t * __this /* static, unused */, Matrix4x4_t314 * ___m, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Matrix4x4::Invert(UnityEngine.Matrix4x4,UnityEngine.Matrix4x4&)
extern "C" bool Matrix4x4_Invert_m2484 (Object_t * __this /* static, unused */, Matrix4x4_t314  ___inMatrix, Matrix4x4_t314 * ___dest, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Matrix4x4::INTERNAL_CALL_Invert(UnityEngine.Matrix4x4&,UnityEngine.Matrix4x4&)
extern "C" bool Matrix4x4_INTERNAL_CALL_Invert_m2485 (Object_t * __this /* static, unused */, Matrix4x4_t314 * ___inMatrix, Matrix4x4_t314 * ___dest, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::get_inverse()
extern "C" Matrix4x4_t314  Matrix4x4_get_inverse_m2486 (Matrix4x4_t314 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::get_transpose()
extern "C" Matrix4x4_t314  Matrix4x4_get_transpose_m2487 (Matrix4x4_t314 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Matrix4x4::get_isIdentity()
extern "C" bool Matrix4x4_get_isIdentity_m2488 (Matrix4x4_t314 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UnityEngine.Matrix4x4::GetColumn(System.Int32)
extern "C" Vector4_t160  Matrix4x4_GetColumn_m2489 (Matrix4x4_t314 * __this, int32_t ___i, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UnityEngine.Matrix4x4::GetRow(System.Int32)
extern "C" Vector4_t160  Matrix4x4_GetRow_m2490 (Matrix4x4_t314 * __this, int32_t ___i, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Matrix4x4::SetColumn(System.Int32,UnityEngine.Vector4)
extern "C" void Matrix4x4_SetColumn_m2491 (Matrix4x4_t314 * __this, int32_t ___i, Vector4_t160  ___v, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Matrix4x4::SetRow(System.Int32,UnityEngine.Vector4)
extern "C" void Matrix4x4_SetRow_m2492 (Matrix4x4_t314 * __this, int32_t ___i, Vector4_t160  ___v, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Matrix4x4::MultiplyPoint(UnityEngine.Vector3)
extern "C" Vector3_t6  Matrix4x4_MultiplyPoint_m2493 (Matrix4x4_t314 * __this, Vector3_t6  ___v, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Matrix4x4::MultiplyPoint3x4(UnityEngine.Vector3)
extern "C" Vector3_t6  Matrix4x4_MultiplyPoint3x4_m1779 (Matrix4x4_t314 * __this, Vector3_t6  ___v, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Matrix4x4::MultiplyVector(UnityEngine.Vector3)
extern "C" Vector3_t6  Matrix4x4_MultiplyVector_m2494 (Matrix4x4_t314 * __this, Vector3_t6  ___v, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::Scale(UnityEngine.Vector3)
extern "C" Matrix4x4_t314  Matrix4x4_Scale_m2495 (Object_t * __this /* static, unused */, Vector3_t6  ___v, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::get_zero()
extern "C" Matrix4x4_t314  Matrix4x4_get_zero_m2496 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::get_identity()
extern "C" Matrix4x4_t314  Matrix4x4_get_identity_m2497 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Matrix4x4::SetTRS(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3)
extern "C" void Matrix4x4_SetTRS_m2498 (Matrix4x4_t314 * __this, Vector3_t6  ___pos, Quaternion_t19  ___q, Vector3_t6  ___s, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::TRS(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3)
extern "C" Matrix4x4_t314  Matrix4x4_TRS_m2499 (Object_t * __this /* static, unused */, Vector3_t6  ___pos, Quaternion_t19  ___q, Vector3_t6  ___s, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::INTERNAL_CALL_TRS(UnityEngine.Vector3&,UnityEngine.Quaternion&,UnityEngine.Vector3&)
extern "C" Matrix4x4_t314  Matrix4x4_INTERNAL_CALL_TRS_m2500 (Object_t * __this /* static, unused */, Vector3_t6 * ___pos, Quaternion_t19 * ___q, Vector3_t6 * ___s, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Matrix4x4::ToString()
extern "C" String_t* Matrix4x4_ToString_m2501 (Matrix4x4_t314 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Matrix4x4::ToString(System.String)
extern "C" String_t* Matrix4x4_ToString_m2502 (Matrix4x4_t314 * __this, String_t* ___format, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::Ortho(System.Single,System.Single,System.Single,System.Single,System.Single,System.Single)
extern "C" Matrix4x4_t314  Matrix4x4_Ortho_m2503 (Object_t * __this /* static, unused */, float ___left, float ___right, float ___bottom, float ___top, float ___zNear, float ___zFar, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::Perspective(System.Single,System.Single,System.Single,System.Single)
extern "C" Matrix4x4_t314  Matrix4x4_Perspective_m2504 (Object_t * __this /* static, unused */, float ___fov, float ___aspect, float ___zNear, float ___zFar, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::op_Multiply(UnityEngine.Matrix4x4,UnityEngine.Matrix4x4)
extern "C" Matrix4x4_t314  Matrix4x4_op_Multiply_m2505 (Object_t * __this /* static, unused */, Matrix4x4_t314  ___lhs, Matrix4x4_t314  ___rhs, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UnityEngine.Matrix4x4::op_Multiply(UnityEngine.Matrix4x4,UnityEngine.Vector4)
extern "C" Vector4_t160  Matrix4x4_op_Multiply_m2506 (Object_t * __this /* static, unused */, Matrix4x4_t314  ___lhs, Vector4_t160  ___v, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Matrix4x4::op_Equality(UnityEngine.Matrix4x4,UnityEngine.Matrix4x4)
extern "C" bool Matrix4x4_op_Equality_m2507 (Object_t * __this /* static, unused */, Matrix4x4_t314  ___lhs, Matrix4x4_t314  ___rhs, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Matrix4x4::op_Inequality(UnityEngine.Matrix4x4,UnityEngine.Matrix4x4)
extern "C" bool Matrix4x4_op_Inequality_m2508 (Object_t * __this /* static, unused */, Matrix4x4_t314  ___lhs, Matrix4x4_t314  ___rhs, MethodInfo* method) IL2CPP_METHOD_ATTR;
