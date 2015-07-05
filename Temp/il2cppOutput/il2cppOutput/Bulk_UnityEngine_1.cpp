#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include <cstring>
#include <string.h>
#include <stdio.h>
#ifndef _MSC_VER
#include <alloca.h>
#else
#include <malloc.h>
#endif
#include <cmath>
#include <limits>
#include <assert.h>
extern TypeInfo MonoBehaviour_t3_il2cpp_TypeInfo;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviourMethodDeclarations.h"

// System.Void
#include "mscorlib_System_Void.h"
// UnityEngine.Coroutine
#include "UnityEngine_UnityEngine_Coroutine.h"
// System.Object
#include "mscorlib_System_Object.h"
// UnityEngine.Behaviour
#include "UnityEngine_UnityEngine_BehaviourMethodDeclarations.h"
// UnityEngine.Debug
#include "UnityEngine_UnityEngine_DebugMethodDeclarations.h"
extern MethodInfo Behaviour__ctor_m2635_MethodInfo;
extern MethodInfo MonoBehaviour_StartCoroutine_Auto_m2693_MethodInfo;
extern MethodInfo MonoBehaviour_StopCoroutineViaEnumerator_Auto_m2695_MethodInfo;
extern MethodInfo MonoBehaviour_StopCoroutine_Auto_m2696_MethodInfo;
extern MethodInfo Debug_Log_m2658_MethodInfo;

// System.Array
#include "mscorlib_System_Array.h"

// System.Void UnityEngine.MonoBehaviour::.ctor()
extern MethodInfo MonoBehaviour__ctor_m27_MethodInfo;
extern "C" void MonoBehaviour__ctor_m27 (MonoBehaviour_t3 * __this, MethodInfo* method)
{
	{
		Behaviour__ctor_m2635(__this, /*hidden argument*/&Behaviour__ctor_m2635_MethodInfo);
		return;
	}
}
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
extern MethodInfo MonoBehaviour_StartCoroutine_m1455_MethodInfo;
extern "C" Coroutine_t182 * MonoBehaviour_StartCoroutine_m1455 (MonoBehaviour_t3 * __this, Object_t * ___routine, MethodInfo* method)
{
	{
		Object_t * L_0 = ___routine;
		Coroutine_t182 * L_1 = MonoBehaviour_StartCoroutine_Auto_m2693(__this, L_0, /*hidden argument*/&MonoBehaviour_StartCoroutine_Auto_m2693_MethodInfo);
		return L_1;
	}
}
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine_Auto(System.Collections.IEnumerator)
extern "C" Coroutine_t182 * MonoBehaviour_StartCoroutine_Auto_m2693 (MonoBehaviour_t3 * __this, Object_t * ___routine, MethodInfo* method)
{
	typedef Coroutine_t182 * (*MonoBehaviour_StartCoroutine_Auto_m2693_ftn) (MonoBehaviour_t3 *, Object_t *);
	static MonoBehaviour_StartCoroutine_Auto_m2693_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoBehaviour_StartCoroutine_Auto_m2693_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.MonoBehaviour::StartCoroutine_Auto(System.Collections.IEnumerator)");
	return _il2cpp_icall_func(__this, ___routine);
}
// System.Void UnityEngine.MonoBehaviour::StopCoroutine(System.Collections.IEnumerator)
extern MethodInfo MonoBehaviour_StopCoroutine_m2694_MethodInfo;
extern "C" void MonoBehaviour_StopCoroutine_m2694 (MonoBehaviour_t3 * __this, Object_t * ___routine, MethodInfo* method)
{
	{
		Object_t * L_0 = ___routine;
		MonoBehaviour_StopCoroutineViaEnumerator_Auto_m2695(__this, L_0, /*hidden argument*/&MonoBehaviour_StopCoroutineViaEnumerator_Auto_m2695_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.MonoBehaviour::StopCoroutine(UnityEngine.Coroutine)
extern MethodInfo MonoBehaviour_StopCoroutine_m1751_MethodInfo;
extern "C" void MonoBehaviour_StopCoroutine_m1751 (MonoBehaviour_t3 * __this, Coroutine_t182 * ___routine, MethodInfo* method)
{
	{
		Coroutine_t182 * L_0 = ___routine;
		MonoBehaviour_StopCoroutine_Auto_m2696(__this, L_0, /*hidden argument*/&MonoBehaviour_StopCoroutine_Auto_m2696_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.MonoBehaviour::StopCoroutineViaEnumerator_Auto(System.Collections.IEnumerator)
extern "C" void MonoBehaviour_StopCoroutineViaEnumerator_Auto_m2695 (MonoBehaviour_t3 * __this, Object_t * ___routine, MethodInfo* method)
{
	typedef void (*MonoBehaviour_StopCoroutineViaEnumerator_Auto_m2695_ftn) (MonoBehaviour_t3 *, Object_t *);
	static MonoBehaviour_StopCoroutineViaEnumerator_Auto_m2695_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoBehaviour_StopCoroutineViaEnumerator_Auto_m2695_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.MonoBehaviour::StopCoroutineViaEnumerator_Auto(System.Collections.IEnumerator)");
	_il2cpp_icall_func(__this, ___routine);
}
// System.Void UnityEngine.MonoBehaviour::StopCoroutine_Auto(UnityEngine.Coroutine)
extern "C" void MonoBehaviour_StopCoroutine_Auto_m2696 (MonoBehaviour_t3 * __this, Coroutine_t182 * ___routine, MethodInfo* method)
{
	typedef void (*MonoBehaviour_StopCoroutine_Auto_m2696_ftn) (MonoBehaviour_t3 *, Coroutine_t182 *);
	static MonoBehaviour_StopCoroutine_Auto_m2696_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoBehaviour_StopCoroutine_Auto_m2696_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.MonoBehaviour::StopCoroutine_Auto(UnityEngine.Coroutine)");
	_il2cpp_icall_func(__this, ___routine);
}
// System.Void UnityEngine.MonoBehaviour::print(System.Object)
extern MethodInfo MonoBehaviour_print_m49_MethodInfo;
extern "C" void MonoBehaviour_print_m49 (Object_t * __this /* static, unused */, Object_t * ___message, MethodInfo* method)
{
	{
		Object_t * L_0 = ___message;
		Debug_Log_m2658(NULL /*static, unused*/, L_0, /*hidden argument*/&Debug_Log_m2658_MethodInfo);
		return;
	}
}
// UnityEngine.TouchPhase
#include "UnityEngine_UnityEngine_TouchPhase.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo TouchPhase_t521_il2cpp_TypeInfo;
// UnityEngine.TouchPhase
#include "UnityEngine_UnityEngine_TouchPhaseMethodDeclarations.h"



// UnityEngine.IMECompositionMode
#include "UnityEngine_UnityEngine_IMECompositionMode.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IMECompositionMode_t522_il2cpp_TypeInfo;
// UnityEngine.IMECompositionMode
#include "UnityEngine_UnityEngine_IMECompositionModeMethodDeclarations.h"



// UnityEngine.Touch
#include "UnityEngine_UnityEngine_Touch.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Touch_t22_il2cpp_TypeInfo;
// UnityEngine.Touch
#include "UnityEngine_UnityEngine_TouchMethodDeclarations.h"

// System.Int32
#include "mscorlib_System_Int32.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"


// System.Int32 UnityEngine.Touch::get_fingerId()
extern MethodInfo Touch_get_fingerId_m1374_MethodInfo;
extern "C" int32_t Touch_get_fingerId_m1374 (Touch_t22 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_FingerId_0);
		return L_0;
	}
}
// UnityEngine.Vector2 UnityEngine.Touch::get_position()
extern MethodInfo Touch_get_position_m1375_MethodInfo;
extern "C" Vector2_t12  Touch_get_position_m1375 (Touch_t22 * __this, MethodInfo* method)
{
	{
		Vector2_t12  L_0 = (__this->___m_Position_1);
		return L_0;
	}
}
// UnityEngine.Vector2 UnityEngine.Touch::get_deltaPosition()
extern MethodInfo Touch_get_deltaPosition_m56_MethodInfo;
extern "C" Vector2_t12  Touch_get_deltaPosition_m56 (Touch_t22 * __this, MethodInfo* method)
{
	{
		Vector2_t12  L_0 = (__this->___m_PositionDelta_3);
		return L_0;
	}
}
// UnityEngine.TouchPhase UnityEngine.Touch::get_phase()
extern MethodInfo Touch_get_phase_m55_MethodInfo;
extern "C" int32_t Touch_get_phase_m55 (Touch_t22 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Phase_6);
		return L_0;
	}
}
// Conversion methods for marshalling of: UnityEngine.Touch
void Touch_t22_marshal(const Touch_t22& unmarshaled, Touch_t22_marshaled& marshaled)
{
	marshaled.___m_FingerId_0 = unmarshaled.___m_FingerId_0;
	marshaled.___m_Position_1 = unmarshaled.___m_Position_1;
	marshaled.___m_RawPosition_2 = unmarshaled.___m_RawPosition_2;
	marshaled.___m_PositionDelta_3 = unmarshaled.___m_PositionDelta_3;
	marshaled.___m_TimeDelta_4 = unmarshaled.___m_TimeDelta_4;
	marshaled.___m_TapCount_5 = unmarshaled.___m_TapCount_5;
	marshaled.___m_Phase_6 = unmarshaled.___m_Phase_6;
}
void Touch_t22_marshal_back(const Touch_t22_marshaled& marshaled, Touch_t22& unmarshaled)
{
	unmarshaled.___m_FingerId_0 = marshaled.___m_FingerId_0;
	unmarshaled.___m_Position_1 = marshaled.___m_Position_1;
	unmarshaled.___m_RawPosition_2 = marshaled.___m_RawPosition_2;
	unmarshaled.___m_PositionDelta_3 = marshaled.___m_PositionDelta_3;
	unmarshaled.___m_TimeDelta_4 = marshaled.___m_TimeDelta_4;
	unmarshaled.___m_TapCount_5 = marshaled.___m_TapCount_5;
	unmarshaled.___m_Phase_6 = marshaled.___m_Phase_6;
}
// Conversion method for clean up from marshalling of: UnityEngine.Touch
void Touch_t22_marshal_cleanup(Touch_t22_marshaled& marshaled)
{
}
// UnityEngine.Input
#include "UnityEngine_UnityEngine_Input.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Input_t21_il2cpp_TypeInfo;
// UnityEngine.Input
#include "UnityEngine_UnityEngine_InputMethodDeclarations.h"

// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
// System.String
#include "mscorlib_System_String.h"
// System.Single
#include "mscorlib_System_Single.h"
extern MethodInfo Input_INTERNAL_set_compositionCursorPos_m2698_MethodInfo;


// System.Void UnityEngine.Input::.cctor()
extern MethodInfo Input__cctor_m2697_MethodInfo;
extern "C" void Input__cctor_m2697 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		return;
	}
}
// System.Single UnityEngine.Input::GetAxisRaw(System.String)
extern MethodInfo Input_GetAxisRaw_m1399_MethodInfo;
extern "C" float Input_GetAxisRaw_m1399 (Object_t * __this /* static, unused */, String_t* ___axisName, MethodInfo* method)
{
	typedef float (*Input_GetAxisRaw_m1399_ftn) (String_t*);
	static Input_GetAxisRaw_m1399_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_GetAxisRaw_m1399_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::GetAxisRaw(System.String)");
	return _il2cpp_icall_func(___axisName);
}
// System.Boolean UnityEngine.Input::GetButtonDown(System.String)
extern MethodInfo Input_GetButtonDown_m1398_MethodInfo;
extern "C" bool Input_GetButtonDown_m1398 (Object_t * __this /* static, unused */, String_t* ___buttonName, MethodInfo* method)
{
	typedef bool (*Input_GetButtonDown_m1398_ftn) (String_t*);
	static Input_GetButtonDown_m1398_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_GetButtonDown_m1398_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::GetButtonDown(System.String)");
	return _il2cpp_icall_func(___buttonName);
}
// System.Boolean UnityEngine.Input::GetMouseButton(System.Int32)
extern MethodInfo Input_GetMouseButton_m1418_MethodInfo;
extern "C" bool Input_GetMouseButton_m1418 (Object_t * __this /* static, unused */, int32_t ___button, MethodInfo* method)
{
	typedef bool (*Input_GetMouseButton_m1418_ftn) (int32_t);
	static Input_GetMouseButton_m1418_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_GetMouseButton_m1418_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::GetMouseButton(System.Int32)");
	return _il2cpp_icall_func(___button);
}
// System.Boolean UnityEngine.Input::GetMouseButtonDown(System.Int32)
extern MethodInfo Input_GetMouseButtonDown_m57_MethodInfo;
extern "C" bool Input_GetMouseButtonDown_m57 (Object_t * __this /* static, unused */, int32_t ___button, MethodInfo* method)
{
	typedef bool (*Input_GetMouseButtonDown_m57_ftn) (int32_t);
	static Input_GetMouseButtonDown_m57_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_GetMouseButtonDown_m57_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::GetMouseButtonDown(System.Int32)");
	return _il2cpp_icall_func(___button);
}
// System.Boolean UnityEngine.Input::GetMouseButtonUp(System.Int32)
extern MethodInfo Input_GetMouseButtonUp_m58_MethodInfo;
extern "C" bool Input_GetMouseButtonUp_m58 (Object_t * __this /* static, unused */, int32_t ___button, MethodInfo* method)
{
	typedef bool (*Input_GetMouseButtonUp_m58_ftn) (int32_t);
	static Input_GetMouseButtonUp_m58_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_GetMouseButtonUp_m58_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::GetMouseButtonUp(System.Int32)");
	return _il2cpp_icall_func(___button);
}
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
extern MethodInfo Input_get_mousePosition_m52_MethodInfo;
extern "C" Vector3_t6  Input_get_mousePosition_m52 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef Vector3_t6  (*Input_get_mousePosition_m52_ftn) ();
	static Input_get_mousePosition_m52_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_get_mousePosition_m52_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::get_mousePosition()");
	return _il2cpp_icall_func();
}
// UnityEngine.Vector2 UnityEngine.Input::get_mouseScrollDelta()
extern MethodInfo Input_get_mouseScrollDelta_m1378_MethodInfo;
extern "C" Vector2_t12  Input_get_mouseScrollDelta_m1378 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef Vector2_t12  (*Input_get_mouseScrollDelta_m1378_ftn) ();
	static Input_get_mouseScrollDelta_m1378_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_get_mouseScrollDelta_m1378_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::get_mouseScrollDelta()");
	return _il2cpp_icall_func();
}
// System.Boolean UnityEngine.Input::get_mousePresent()
extern MethodInfo Input_get_mousePresent_m1397_MethodInfo;
extern "C" bool Input_get_mousePresent_m1397 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef bool (*Input_get_mousePresent_m1397_ftn) ();
	static Input_get_mousePresent_m1397_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_get_mousePresent_m1397_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::get_mousePresent()");
	return _il2cpp_icall_func();
}
// UnityEngine.Touch UnityEngine.Input::GetTouch(System.Int32)
extern MethodInfo Input_GetTouch_m54_MethodInfo;
extern "C" Touch_t22  Input_GetTouch_m54 (Object_t * __this /* static, unused */, int32_t ___index, MethodInfo* method)
{
	typedef Touch_t22  (*Input_GetTouch_m54_ftn) (int32_t);
	static Input_GetTouch_m54_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_GetTouch_m54_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::GetTouch(System.Int32)");
	return _il2cpp_icall_func(___index);
}
// System.Int32 UnityEngine.Input::get_touchCount()
extern MethodInfo Input_get_touchCount_m53_MethodInfo;
extern "C" int32_t Input_get_touchCount_m53 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef int32_t (*Input_get_touchCount_m53_ftn) ();
	static Input_get_touchCount_m53_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_get_touchCount_m53_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::get_touchCount()");
	return _il2cpp_icall_func();
}
// System.Boolean UnityEngine.Input::get_touchSupported()
extern MethodInfo Input_get_touchSupported_m1417_MethodInfo;
extern "C" bool Input_get_touchSupported_m1417 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Void UnityEngine.Input::set_imeCompositionMode(UnityEngine.IMECompositionMode)
extern MethodInfo Input_set_imeCompositionMode_m1724_MethodInfo;
extern "C" void Input_set_imeCompositionMode_m1724 (Object_t * __this /* static, unused */, int32_t ___value, MethodInfo* method)
{
	typedef void (*Input_set_imeCompositionMode_m1724_ftn) (int32_t);
	static Input_set_imeCompositionMode_m1724_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_set_imeCompositionMode_m1724_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::set_imeCompositionMode(UnityEngine.IMECompositionMode)");
	_il2cpp_icall_func(___value);
}
// System.String UnityEngine.Input::get_compositionString()
extern MethodInfo Input_get_compositionString_m1638_MethodInfo;
extern "C" String_t* Input_get_compositionString_m1638 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef String_t* (*Input_get_compositionString_m1638_ftn) ();
	static Input_get_compositionString_m1638_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_get_compositionString_m1638_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::get_compositionString()");
	return _il2cpp_icall_func();
}
// System.Void UnityEngine.Input::INTERNAL_set_compositionCursorPos(UnityEngine.Vector2&)
extern "C" void Input_INTERNAL_set_compositionCursorPos_m2698 (Object_t * __this /* static, unused */, Vector2_t12 * ___value, MethodInfo* method)
{
	typedef void (*Input_INTERNAL_set_compositionCursorPos_m2698_ftn) (Vector2_t12 *);
	static Input_INTERNAL_set_compositionCursorPos_m2698_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_INTERNAL_set_compositionCursorPos_m2698_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::INTERNAL_set_compositionCursorPos(UnityEngine.Vector2&)");
	_il2cpp_icall_func(___value);
}
// System.Void UnityEngine.Input::set_compositionCursorPos(UnityEngine.Vector2)
extern MethodInfo Input_set_compositionCursorPos_m1711_MethodInfo;
extern "C" void Input_set_compositionCursorPos_m1711 (Object_t * __this /* static, unused */, Vector2_t12  ___value, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Input_t21_il2cpp_TypeInfo));
		Input_INTERNAL_set_compositionCursorPos_m2698(NULL /*static, unused*/, (&___value), /*hidden argument*/&Input_INTERNAL_set_compositionCursorPos_m2698_MethodInfo);
		return;
	}
}
// UnityEngine.HideFlags
#include "UnityEngine_UnityEngine_HideFlags.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo HideFlags_t523_il2cpp_TypeInfo;
// UnityEngine.HideFlags
#include "UnityEngine_UnityEngine_HideFlagsMethodDeclarations.h"



// UnityEngine.Object
#include "UnityEngine_UnityEngine_Object.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Object_t20_il2cpp_TypeInfo;
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"

// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentException.h"
extern TypeInfo IntPtr_t_il2cpp_TypeInfo;
extern TypeInfo ArgumentException_t318_il2cpp_TypeInfo;
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.IntPtr
#include "mscorlib_System_IntPtrMethodDeclarations.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
extern MethodInfo Object__ctor_m1289_MethodInfo;
extern MethodInfo Object_INTERNAL_CALL_Internal_InstantiateSingle_m2701_MethodInfo;
extern MethodInfo Object_Destroy_m2702_MethodInfo;
extern MethodInfo Object_DestroyImmediate_m2703_MethodInfo;
extern MethodInfo Object_CompareBaseObjects_m2704_MethodInfo;
extern MethodInfo Object_GetInstanceID_m2706_MethodInfo;
extern MethodInfo Object_IsNativeObjectAlive_m2705_MethodInfo;
extern MethodInfo Object_GetCachedPtr_m2707_MethodInfo;
extern MethodInfo IntPtr_op_Inequality_m3412_MethodInfo;
extern MethodInfo Object_CheckNullArgument_m2708_MethodInfo;
extern MethodInfo Object_Internal_InstantiateSingle_m2700_MethodInfo;
extern MethodInfo ArgumentException__ctor_m1847_MethodInfo;


// System.Void UnityEngine.Object::.ctor()
extern MethodInfo Object__ctor_m2699_MethodInfo;
extern "C" void Object__ctor_m2699 (Object_t20 * __this, MethodInfo* method)
{
	{
		Object__ctor_m1289(__this, /*hidden argument*/&Object__ctor_m1289_MethodInfo);
		return;
	}
}
// UnityEngine.Object UnityEngine.Object::Internal_InstantiateSingle(UnityEngine.Object,UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C" Object_t20 * Object_Internal_InstantiateSingle_m2700 (Object_t * __this /* static, unused */, Object_t20 * ___data, Vector3_t6  ___pos, Quaternion_t19  ___rot, MethodInfo* method)
{
	{
		Object_t20 * L_0 = ___data;
		Object_t20 * L_1 = Object_INTERNAL_CALL_Internal_InstantiateSingle_m2701(NULL /*static, unused*/, L_0, (&___pos), (&___rot), /*hidden argument*/&Object_INTERNAL_CALL_Internal_InstantiateSingle_m2701_MethodInfo);
		return L_1;
	}
}
// UnityEngine.Object UnityEngine.Object::INTERNAL_CALL_Internal_InstantiateSingle(UnityEngine.Object,UnityEngine.Vector3&,UnityEngine.Quaternion&)
extern "C" Object_t20 * Object_INTERNAL_CALL_Internal_InstantiateSingle_m2701 (Object_t * __this /* static, unused */, Object_t20 * ___data, Vector3_t6 * ___pos, Quaternion_t19 * ___rot, MethodInfo* method)
{
	typedef Object_t20 * (*Object_INTERNAL_CALL_Internal_InstantiateSingle_m2701_ftn) (Object_t20 *, Vector3_t6 *, Quaternion_t19 *);
	static Object_INTERNAL_CALL_Internal_InstantiateSingle_m2701_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Object_INTERNAL_CALL_Internal_InstantiateSingle_m2701_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Object::INTERNAL_CALL_Internal_InstantiateSingle(UnityEngine.Object,UnityEngine.Vector3&,UnityEngine.Quaternion&)");
	return _il2cpp_icall_func(___data, ___pos, ___rot);
}
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object,System.Single)
extern "C" void Object_Destroy_m2702 (Object_t * __this /* static, unused */, Object_t20 * ___obj, float ___t, MethodInfo* method)
{
	typedef void (*Object_Destroy_m2702_ftn) (Object_t20 *, float);
	static Object_Destroy_m2702_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Object_Destroy_m2702_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Object::Destroy(UnityEngine.Object,System.Single)");
	_il2cpp_icall_func(___obj, ___t);
}
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
extern MethodInfo Object_Destroy_m43_MethodInfo;
extern "C" void Object_Destroy_m43 (Object_t * __this /* static, unused */, Object_t20 * ___obj, MethodInfo* method)
{
	float V_0 = 0.0f;
	{
		V_0 = (0.0f);
		Object_t20 * L_0 = ___obj;
		float L_1 = V_0;
		Object_Destroy_m2702(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Object_Destroy_m2702_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object,System.Boolean)
extern "C" void Object_DestroyImmediate_m2703 (Object_t * __this /* static, unused */, Object_t20 * ___obj, bool ___allowDestroyingAssets, MethodInfo* method)
{
	typedef void (*Object_DestroyImmediate_m2703_ftn) (Object_t20 *, bool);
	static Object_DestroyImmediate_m2703_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Object_DestroyImmediate_m2703_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Object::DestroyImmediate(UnityEngine.Object,System.Boolean)");
	_il2cpp_icall_func(___obj, ___allowDestroyingAssets);
}
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object)
extern MethodInfo Object_DestroyImmediate_m1745_MethodInfo;
extern "C" void Object_DestroyImmediate_m1745 (Object_t * __this /* static, unused */, Object_t20 * ___obj, MethodInfo* method)
{
	bool V_0 = false;
	{
		V_0 = 0;
		Object_t20 * L_0 = ___obj;
		bool L_1 = V_0;
		Object_DestroyImmediate_m2703(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Object_DestroyImmediate_m2703_MethodInfo);
		return;
	}
}
// System.String UnityEngine.Object::get_name()
extern MethodInfo Object_get_name_m1688_MethodInfo;
extern "C" String_t* Object_get_name_m1688 (Object_t20 * __this, MethodInfo* method)
{
	typedef String_t* (*Object_get_name_m1688_ftn) (Object_t20 *);
	static Object_get_name_m1688_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Object_get_name_m1688_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Object::get_name()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Object::set_name(System.String)
extern MethodInfo Object_set_name_m1824_MethodInfo;
extern "C" void Object_set_name_m1824 (Object_t20 * __this, String_t* ___value, MethodInfo* method)
{
	typedef void (*Object_set_name_m1824_ftn) (Object_t20 *, String_t*);
	static Object_set_name_m1824_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Object_set_name_m1824_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Object::set_name(System.String)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Object::set_hideFlags(UnityEngine.HideFlags)
extern MethodInfo Object_set_hideFlags_m1690_MethodInfo;
extern "C" void Object_set_hideFlags_m1690 (Object_t20 * __this, int32_t ___value, MethodInfo* method)
{
	typedef void (*Object_set_hideFlags_m1690_ftn) (Object_t20 *, int32_t);
	static Object_set_hideFlags_m1690_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Object_set_hideFlags_m1690_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Object::set_hideFlags(UnityEngine.HideFlags)");
	_il2cpp_icall_func(__this, ___value);
}
// System.String UnityEngine.Object::ToString()
extern MethodInfo Object_ToString_m69_MethodInfo;
extern "C" String_t* Object_ToString_m69 (Object_t20 * __this, MethodInfo* method)
{
	typedef String_t* (*Object_ToString_m69_ftn) (Object_t20 *);
	static Object_ToString_m69_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Object_ToString_m69_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Object::ToString()");
	return _il2cpp_icall_func(__this);
}
// System.Boolean UnityEngine.Object::Equals(System.Object)
extern MethodInfo Object_Equals_m66_MethodInfo;
extern "C" bool Object_Equals_m66 (Object_t20 * __this, Object_t * ___o, MethodInfo* method)
{
	{
		Object_t * L_0 = ___o;
		bool L_1 = Object_CompareBaseObjects_m2704(NULL /*static, unused*/, __this, ((Object_t20 *)IsInst(L_0, InitializedTypeInfo(&Object_t20_il2cpp_TypeInfo))), /*hidden argument*/&Object_CompareBaseObjects_m2704_MethodInfo);
		return L_1;
	}
}
// System.Int32 UnityEngine.Object::GetHashCode()
extern MethodInfo Object_GetHashCode_m68_MethodInfo;
extern "C" int32_t Object_GetHashCode_m68 (Object_t20 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = Object_GetInstanceID_m2706(__this, /*hidden argument*/&Object_GetInstanceID_m2706_MethodInfo);
		return L_0;
	}
}
// System.Boolean UnityEngine.Object::CompareBaseObjects(UnityEngine.Object,UnityEngine.Object)
extern "C" bool Object_CompareBaseObjects_m2704 (Object_t * __this /* static, unused */, Object_t20 * ___lhs, Object_t20 * ___rhs, MethodInfo* method)
{
	bool V_0 = false;
	bool V_1 = false;
	{
		Object_t20 * L_0 = ___lhs;
		V_0 = ((((Object_t*)(Object_t20 *)L_0) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
		Object_t20 * L_1 = ___rhs;
		V_1 = ((((Object_t*)(Object_t20 *)L_1) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0018;
		}
	}
	{
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0018;
		}
	}
	{
		return 1;
	}

IL_0018:
	{
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0028;
		}
	}
	{
		Object_t20 * L_5 = ___lhs;
		bool L_6 = Object_IsNativeObjectAlive_m2705(NULL /*static, unused*/, L_5, /*hidden argument*/&Object_IsNativeObjectAlive_m2705_MethodInfo);
		return ((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
	}

IL_0028:
	{
		bool L_7 = V_0;
		if (!L_7)
		{
			goto IL_0038;
		}
	}
	{
		Object_t20 * L_8 = ___rhs;
		bool L_9 = Object_IsNativeObjectAlive_m2705(NULL /*static, unused*/, L_8, /*hidden argument*/&Object_IsNativeObjectAlive_m2705_MethodInfo);
		return ((((int32_t)L_9) == ((int32_t)0))? 1 : 0);
	}

IL_0038:
	{
		Object_t20 * L_10 = ___lhs;
		NullCheck(L_10);
		int32_t L_11 = (L_10->___m_InstanceID_0);
		Object_t20 * L_12 = ___rhs;
		NullCheck(L_12);
		int32_t L_13 = (L_12->___m_InstanceID_0);
		return ((((int32_t)L_11) == ((int32_t)L_13))? 1 : 0);
	}
}
// System.Boolean UnityEngine.Object::IsNativeObjectAlive(UnityEngine.Object)
extern "C" bool Object_IsNativeObjectAlive_m2705 (Object_t * __this /* static, unused */, Object_t20 * ___o, MethodInfo* method)
{
	{
		Object_t20 * L_0 = ___o;
		NullCheck(L_0);
		IntPtr_t L_1 = Object_GetCachedPtr_m2707(L_0, /*hidden argument*/&Object_GetCachedPtr_m2707_MethodInfo);
		IntPtr_t L_2 = ((IntPtr_t_StaticFields*)InitializedTypeInfo(&IntPtr_t_il2cpp_TypeInfo)->static_fields)->___Zero_1;
		bool L_3 = IntPtr_op_Inequality_m3412(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/&IntPtr_op_Inequality_m3412_MethodInfo);
		return L_3;
	}
}
// System.Int32 UnityEngine.Object::GetInstanceID()
extern "C" int32_t Object_GetInstanceID_m2706 (Object_t20 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_InstanceID_0);
		return L_0;
	}
}
// System.IntPtr UnityEngine.Object::GetCachedPtr()
extern "C" IntPtr_t Object_GetCachedPtr_m2707 (Object_t20 * __this, MethodInfo* method)
{
	{
		IntPtr_t L_0 = (__this->___m_CachedPtr_1);
		return L_0;
	}
}
// UnityEngine.Object UnityEngine.Object::Instantiate(UnityEngine.Object,UnityEngine.Vector3,UnityEngine.Quaternion)
extern MethodInfo Object_Instantiate_m45_MethodInfo;
extern "C" Object_t20 * Object_Instantiate_m45 (Object_t * __this /* static, unused */, Object_t20 * ___original, Vector3_t6  ___position, Quaternion_t19  ___rotation, MethodInfo* method)
{
	{
		Object_t20 * L_0 = ___original;
		Object_CheckNullArgument_m2708(NULL /*static, unused*/, L_0, (String_t*) &_stringLiteral183, /*hidden argument*/&Object_CheckNullArgument_m2708_MethodInfo);
		Object_t20 * L_1 = ___original;
		Vector3_t6  L_2 = ___position;
		Quaternion_t19  L_3 = ___rotation;
		Object_t20 * L_4 = Object_Internal_InstantiateSingle_m2700(NULL /*static, unused*/, L_1, L_2, L_3, /*hidden argument*/&Object_Internal_InstantiateSingle_m2700_MethodInfo);
		return L_4;
	}
}
// System.Void UnityEngine.Object::CheckNullArgument(System.Object,System.String)
extern "C" void Object_CheckNullArgument_m2708 (Object_t * __this /* static, unused */, Object_t * ___arg, String_t* ___message, MethodInfo* method)
{
	{
		Object_t * L_0 = ___arg;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		String_t* L_1 = ___message;
		ArgumentException_t318 * L_2 = (ArgumentException_t318 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t318_il2cpp_TypeInfo));
		ArgumentException__ctor_m1847(L_2, L_1, /*hidden argument*/&ArgumentException__ctor_m1847_MethodInfo);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_000d:
	{
		return;
	}
}
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
extern MethodInfo Object_op_Implicit_m42_MethodInfo;
extern "C" bool Object_op_Implicit_m42 (Object_t * __this /* static, unused */, Object_t20 * ___exists, MethodInfo* method)
{
	{
		Object_t20 * L_0 = ___exists;
		bool L_1 = Object_CompareBaseObjects_m2704(NULL /*static, unused*/, L_0, (Object_t20 *)NULL, /*hidden argument*/&Object_CompareBaseObjects_m2704_MethodInfo);
		return ((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
extern MethodInfo Object_op_Equality_m1267_MethodInfo;
extern "C" bool Object_op_Equality_m1267 (Object_t * __this /* static, unused */, Object_t20 * ___x, Object_t20 * ___y, MethodInfo* method)
{
	{
		Object_t20 * L_0 = ___x;
		Object_t20 * L_1 = ___y;
		bool L_2 = Object_CompareBaseObjects_m2704(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Object_CompareBaseObjects_m2704_MethodInfo);
		return L_2;
	}
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
extern MethodInfo Object_op_Inequality_m1268_MethodInfo;
extern "C" bool Object_op_Inequality_m1268 (Object_t * __this /* static, unused */, Object_t20 * ___x, Object_t20 * ___y, MethodInfo* method)
{
	{
		Object_t20 * L_0 = ___x;
		Object_t20 * L_1 = ___y;
		bool L_2 = Object_CompareBaseObjects_m2704(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Object_CompareBaseObjects_m2704_MethodInfo);
		return ((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
// Conversion methods for marshalling of: UnityEngine.Object
void Object_t20_marshal(const Object_t20& unmarshaled, Object_t20_marshaled& marshaled)
{
	marshaled.___m_InstanceID_0 = unmarshaled.___m_InstanceID_0;
	marshaled.___m_CachedPtr_1 = unmarshaled.___m_CachedPtr_1;
}
void Object_t20_marshal_back(const Object_t20_marshaled& marshaled, Object_t20& unmarshaled)
{
	unmarshaled.___m_InstanceID_0 = marshaled.___m_InstanceID_0;
	unmarshaled.___m_CachedPtr_1 = marshaled.___m_CachedPtr_1;
}
// Conversion method for clean up from marshalling of: UnityEngine.Object
void Object_t20_marshal_cleanup(Object_t20_marshaled& marshaled)
{
}
// UnityEngine.Component
#include "UnityEngine_UnityEngine_Component.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Component_t15_il2cpp_TypeInfo;
// UnityEngine.Component
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"

// UnityEngine.Transform
#include "UnityEngine_UnityEngine_Transform.h"
// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObject.h"
// System.Type
#include "mscorlib_System_Type.h"
// System.Collections.Generic.List`1<UnityEngine.Component>
#include "mscorlib_System_Collections_Generic_List_1_gen_9.h"
// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObjectMethodDeclarations.h"
extern MethodInfo Component_get_gameObject_m1348_MethodInfo;
extern MethodInfo GameObject_GetComponent_m2712_MethodInfo;
extern MethodInfo Component_GetComponentsForListInternal_m2711_MethodInfo;


// System.Void UnityEngine.Component::.ctor()
extern MethodInfo Component__ctor_m2709_MethodInfo;
extern "C" void Component__ctor_m2709 (Component_t15 * __this, MethodInfo* method)
{
	{
		Object__ctor_m2699(__this, /*hidden argument*/&Object__ctor_m2699_MethodInfo);
		return;
	}
}
// UnityEngine.Transform UnityEngine.Component::get_transform()
extern MethodInfo Component_get_transform_m30_MethodInfo;
extern "C" Transform_t8 * Component_get_transform_m30 (Component_t15 * __this, MethodInfo* method)
{
	typedef Transform_t8 * (*Component_get_transform_m30_ftn) (Component_t15 *);
	static Component_get_transform_m30_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Component_get_transform_m30_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Component::get_transform()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
extern "C" GameObject_t10 * Component_get_gameObject_m1348 (Component_t15 * __this, MethodInfo* method)
{
	typedef GameObject_t10 * (*Component_get_gameObject_m1348_ftn) (Component_t15 *);
	static Component_get_gameObject_m1348_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Component_get_gameObject_m1348_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Component::get_gameObject()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.Component UnityEngine.Component::GetComponent(System.Type)
extern MethodInfo Component_GetComponent_m1884_MethodInfo;
extern "C" Component_t15 * Component_GetComponent_m1884 (Component_t15 * __this, Type_t * ___type, MethodInfo* method)
{
	{
		GameObject_t10 * L_0 = Component_get_gameObject_m1348(__this, /*hidden argument*/&Component_get_gameObject_m1348_MethodInfo);
		Type_t * L_1 = ___type;
		NullCheck(L_0);
		Component_t15 * L_2 = GameObject_GetComponent_m2712(L_0, L_1, /*hidden argument*/&GameObject_GetComponent_m2712_MethodInfo);
		return L_2;
	}
}
// System.Void UnityEngine.Component::GetComponentFastPath(System.Type,System.IntPtr)
extern MethodInfo Component_GetComponentFastPath_m2710_MethodInfo;
extern "C" void Component_GetComponentFastPath_m2710 (Component_t15 * __this, Type_t * ___type, IntPtr_t ___oneFurtherThanResultValue, MethodInfo* method)
{
	typedef void (*Component_GetComponentFastPath_m2710_ftn) (Component_t15 *, Type_t *, IntPtr_t);
	static Component_GetComponentFastPath_m2710_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Component_GetComponentFastPath_m2710_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Component::GetComponentFastPath(System.Type,System.IntPtr)");
	_il2cpp_icall_func(__this, ___type, ___oneFurtherThanResultValue);
}
// System.Void UnityEngine.Component::GetComponentsForListInternal(System.Type,System.Object)
extern "C" void Component_GetComponentsForListInternal_m2711 (Component_t15 * __this, Type_t * ___searchType, Object_t * ___resultList, MethodInfo* method)
{
	typedef void (*Component_GetComponentsForListInternal_m2711_ftn) (Component_t15 *, Type_t *, Object_t *);
	static Component_GetComponentsForListInternal_m2711_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Component_GetComponentsForListInternal_m2711_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Component::GetComponentsForListInternal(System.Type,System.Object)");
	_il2cpp_icall_func(__this, ___searchType, ___resultList);
}
// System.Void UnityEngine.Component::GetComponents(System.Type,System.Collections.Generic.List`1<UnityEngine.Component>)
extern MethodInfo Component_GetComponents_m1489_MethodInfo;
extern "C" void Component_GetComponents_m1489 (Component_t15 * __this, Type_t * ___type, List_1_t247 * ___results, MethodInfo* method)
{
	{
		Type_t * L_0 = ___type;
		List_1_t247 * L_1 = ___results;
		Component_GetComponentsForListInternal_m2711(__this, L_0, L_1, /*hidden argument*/&Component_GetComponentsForListInternal_m2711_MethodInfo);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo GameObject_t10_il2cpp_TypeInfo;

// UnityEngine.SendMessageOptions
#include "UnityEngine_UnityEngine_SendMessageOptions.h"
extern MethodInfo GameObject_Internal_CreateGameObject_m2718_MethodInfo;
extern MethodInfo GameObject_Internal_AddComponentWithType_m2716_MethodInfo;


// System.Void UnityEngine.GameObject::.ctor(System.String)
extern MethodInfo GameObject__ctor_m1689_MethodInfo;
extern "C" void GameObject__ctor_m1689 (GameObject_t10 * __this, String_t* ___name, MethodInfo* method)
{
	{
		Object__ctor_m2699(__this, /*hidden argument*/&Object__ctor_m2699_MethodInfo);
		String_t* L_0 = ___name;
		GameObject_Internal_CreateGameObject_m2718(NULL /*static, unused*/, __this, L_0, /*hidden argument*/&GameObject_Internal_CreateGameObject_m2718_MethodInfo);
		return;
	}
}
// UnityEngine.Component UnityEngine.GameObject::GetComponent(System.Type)
extern "C" Component_t15 * GameObject_GetComponent_m2712 (GameObject_t10 * __this, Type_t * ___type, MethodInfo* method)
{
	typedef Component_t15 * (*GameObject_GetComponent_m2712_ftn) (GameObject_t10 *, Type_t *);
	static GameObject_GetComponent_m2712_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_GetComponent_m2712_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::GetComponent(System.Type)");
	return _il2cpp_icall_func(__this, ___type);
}
// System.Void UnityEngine.GameObject::GetComponentFastPath(System.Type,System.IntPtr)
extern MethodInfo GameObject_GetComponentFastPath_m2713_MethodInfo;
extern "C" void GameObject_GetComponentFastPath_m2713 (GameObject_t10 * __this, Type_t * ___type, IntPtr_t ___oneFurtherThanResultValue, MethodInfo* method)
{
	typedef void (*GameObject_GetComponentFastPath_m2713_ftn) (GameObject_t10 *, Type_t *, IntPtr_t);
	static GameObject_GetComponentFastPath_m2713_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_GetComponentFastPath_m2713_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::GetComponentFastPath(System.Type,System.IntPtr)");
	_il2cpp_icall_func(__this, ___type, ___oneFurtherThanResultValue);
}
// System.Array UnityEngine.GameObject::GetComponentsInternal(System.Type,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.Object)
extern MethodInfo GameObject_GetComponentsInternal_m2714_MethodInfo;
extern "C" Array_t * GameObject_GetComponentsInternal_m2714 (GameObject_t10 * __this, Type_t * ___type, bool ___useSearchTypeAsArrayReturnType, bool ___recursive, bool ___includeInactive, bool ___reverse, Object_t * ___resultList, MethodInfo* method)
{
	typedef Array_t * (*GameObject_GetComponentsInternal_m2714_ftn) (GameObject_t10 *, Type_t *, bool, bool, bool, bool, Object_t *);
	static GameObject_GetComponentsInternal_m2714_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_GetComponentsInternal_m2714_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::GetComponentsInternal(System.Type,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.Object)");
	return _il2cpp_icall_func(__this, ___type, ___useSearchTypeAsArrayReturnType, ___recursive, ___includeInactive, ___reverse, ___resultList);
}
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
extern MethodInfo GameObject_get_transform_m39_MethodInfo;
extern "C" Transform_t8 * GameObject_get_transform_m39 (GameObject_t10 * __this, MethodInfo* method)
{
	typedef Transform_t8 * (*GameObject_get_transform_m39_ftn) (GameObject_t10 *);
	static GameObject_get_transform_m39_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_get_transform_m39_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::get_transform()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.GameObject::get_layer()
extern MethodInfo GameObject_get_layer_m1693_MethodInfo;
extern "C" int32_t GameObject_get_layer_m1693 (GameObject_t10 * __this, MethodInfo* method)
{
	typedef int32_t (*GameObject_get_layer_m1693_ftn) (GameObject_t10 *);
	static GameObject_get_layer_m1693_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_get_layer_m1693_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::get_layer()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.GameObject::set_layer(System.Int32)
extern MethodInfo GameObject_set_layer_m1694_MethodInfo;
extern "C" void GameObject_set_layer_m1694 (GameObject_t10 * __this, int32_t ___value, MethodInfo* method)
{
	typedef void (*GameObject_set_layer_m1694_ftn) (GameObject_t10 *, int32_t);
	static GameObject_set_layer_m1694_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_set_layer_m1694_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::set_layer(System.Int32)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Boolean UnityEngine.GameObject::get_activeInHierarchy()
extern MethodInfo GameObject_get_activeInHierarchy_m1349_MethodInfo;
extern "C" bool GameObject_get_activeInHierarchy_m1349 (GameObject_t10 * __this, MethodInfo* method)
{
	typedef bool (*GameObject_get_activeInHierarchy_m1349_ftn) (GameObject_t10 *);
	static GameObject_get_activeInHierarchy_m1349_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_get_activeInHierarchy_m1349_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::get_activeInHierarchy()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.GameObject::SendMessage(System.String,System.Object,UnityEngine.SendMessageOptions)
extern MethodInfo GameObject_SendMessage_m2715_MethodInfo;
extern "C" void GameObject_SendMessage_m2715 (GameObject_t10 * __this, String_t* ___methodName, Object_t * ___value, int32_t ___options, MethodInfo* method)
{
	typedef void (*GameObject_SendMessage_m2715_ftn) (GameObject_t10 *, String_t*, Object_t *, int32_t);
	static GameObject_SendMessage_m2715_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_SendMessage_m2715_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::SendMessage(System.String,System.Object,UnityEngine.SendMessageOptions)");
	_il2cpp_icall_func(__this, ___methodName, ___value, ___options);
}
// UnityEngine.Component UnityEngine.GameObject::Internal_AddComponentWithType(System.Type)
extern "C" Component_t15 * GameObject_Internal_AddComponentWithType_m2716 (GameObject_t10 * __this, Type_t * ___componentType, MethodInfo* method)
{
	typedef Component_t15 * (*GameObject_Internal_AddComponentWithType_m2716_ftn) (GameObject_t10 *, Type_t *);
	static GameObject_Internal_AddComponentWithType_m2716_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_Internal_AddComponentWithType_m2716_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::Internal_AddComponentWithType(System.Type)");
	return _il2cpp_icall_func(__this, ___componentType);
}
// UnityEngine.Component UnityEngine.GameObject::AddComponent(System.Type)
extern MethodInfo GameObject_AddComponent_m2717_MethodInfo;
extern "C" Component_t15 * GameObject_AddComponent_m2717 (GameObject_t10 * __this, Type_t * ___componentType, MethodInfo* method)
{
	{
		Type_t * L_0 = ___componentType;
		Component_t15 * L_1 = GameObject_Internal_AddComponentWithType_m2716(__this, L_0, /*hidden argument*/&GameObject_Internal_AddComponentWithType_m2716_MethodInfo);
		return L_1;
	}
}
// System.Void UnityEngine.GameObject::Internal_CreateGameObject(UnityEngine.GameObject,System.String)
extern "C" void GameObject_Internal_CreateGameObject_m2718 (Object_t * __this /* static, unused */, GameObject_t10 * ___mono, String_t* ___name, MethodInfo* method)
{
	typedef void (*GameObject_Internal_CreateGameObject_m2718_ftn) (GameObject_t10 *, String_t*);
	static GameObject_Internal_CreateGameObject_m2718_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_Internal_CreateGameObject_m2718_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::Internal_CreateGameObject(UnityEngine.GameObject,System.String)");
	_il2cpp_icall_func(___mono, ___name);
}
// UnityEngine.Transform/Enumerator
#include "UnityEngine_UnityEngine_Transform_Enumerator.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Enumerator_t524_il2cpp_TypeInfo;
// UnityEngine.Transform/Enumerator
#include "UnityEngine_UnityEngine_Transform_EnumeratorMethodDeclarations.h"

// UnityEngine.Transform
#include "UnityEngine_UnityEngine_TransformMethodDeclarations.h"
extern MethodInfo Transform_GetChild_m1888_MethodInfo;
extern MethodInfo Transform_get_childCount_m1891_MethodInfo;


// System.Void UnityEngine.Transform/Enumerator::.ctor(UnityEngine.Transform)
extern MethodInfo Enumerator__ctor_m2719_MethodInfo;
extern "C" void Enumerator__ctor_m2719 (Enumerator_t524 * __this, Transform_t8 * ___outer, MethodInfo* method)
{
	{
		__this->___currentIndex_1 = (-1);
		Object__ctor_m1289(__this, /*hidden argument*/&Object__ctor_m1289_MethodInfo);
		Transform_t8 * L_0 = ___outer;
		__this->___outer_0 = L_0;
		return;
	}
}
// System.Object UnityEngine.Transform/Enumerator::get_Current()
extern MethodInfo Enumerator_get_Current_m2720_MethodInfo;
extern "C" Object_t * Enumerator_get_Current_m2720 (Enumerator_t524 * __this, MethodInfo* method)
{
	{
		Transform_t8 * L_0 = (__this->___outer_0);
		int32_t L_1 = (__this->___currentIndex_1);
		NullCheck(L_0);
		Transform_t8 * L_2 = Transform_GetChild_m1888(L_0, L_1, /*hidden argument*/&Transform_GetChild_m1888_MethodInfo);
		return L_2;
	}
}
// System.Boolean UnityEngine.Transform/Enumerator::MoveNext()
extern MethodInfo Enumerator_MoveNext_m2721_MethodInfo;
extern "C" bool Enumerator_MoveNext_m2721 (Enumerator_t524 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Transform_t8 * L_0 = (__this->___outer_0);
		NullCheck(L_0);
		int32_t L_1 = Transform_get_childCount_m1891(L_0, /*hidden argument*/&Transform_get_childCount_m1891_MethodInfo);
		V_0 = L_1;
		int32_t L_2 = (__this->___currentIndex_1);
		int32_t L_3 = ((int32_t)((int32_t)L_2+(int32_t)1));
		V_1 = L_3;
		__this->___currentIndex_1 = L_3;
		int32_t L_4 = V_1;
		int32_t L_5 = V_0;
		return ((((int32_t)L_4) < ((int32_t)L_5))? 1 : 0);
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Transform_t8_il2cpp_TypeInfo;

// UnityEngine.RectTransform
#include "UnityEngine_UnityEngine_RectTransform.h"
// UnityEngine.Matrix4x4
#include "UnityEngine_UnityEngine_Matrix4x4.h"
// UnityEngine.Space
#include "UnityEngine_UnityEngine_Space.h"
extern TypeInfo RectTransform_t132_il2cpp_TypeInfo;
extern TypeInfo Vector3_t6_il2cpp_TypeInfo;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3MethodDeclarations.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_QuaternionMethodDeclarations.h"
extern MethodInfo Transform_INTERNAL_get_position_m2722_MethodInfo;
extern MethodInfo Transform_INTERNAL_set_position_m2723_MethodInfo;
extern MethodInfo Transform_INTERNAL_get_localPosition_m2724_MethodInfo;
extern MethodInfo Transform_INTERNAL_set_localPosition_m2725_MethodInfo;
extern MethodInfo Transform_get_rotation_m1552_MethodInfo;
extern MethodInfo Vector3_get_forward_m1553_MethodInfo;
extern MethodInfo Quaternion_op_Multiply_m1554_MethodInfo;
extern MethodInfo Transform_INTERNAL_get_rotation_m2726_MethodInfo;
extern MethodInfo Transform_INTERNAL_set_rotation_m2727_MethodInfo;
extern MethodInfo Transform_INTERNAL_get_localRotation_m2729_MethodInfo;
extern MethodInfo Transform_INTERNAL_set_localRotation_m2730_MethodInfo;
extern MethodInfo Transform_INTERNAL_get_localScale_m2731_MethodInfo;
extern MethodInfo Transform_INTERNAL_set_localScale_m2732_MethodInfo;
extern MethodInfo Transform_get_parentInternal_m2733_MethodInfo;
extern MethodInfo Debug_LogWarning_m1820_MethodInfo;
extern MethodInfo Transform_set_parentInternal_m2734_MethodInfo;
extern MethodInfo Transform_INTERNAL_get_worldToLocalMatrix_m2736_MethodInfo;
extern MethodInfo Transform_SetParent_m2735_MethodInfo;
extern MethodInfo Transform_Rotate_m2737_MethodInfo;
extern MethodInfo Quaternion_Euler_m2464_MethodInfo;
extern MethodInfo Transform_get_localRotation_m1698_MethodInfo;
extern MethodInfo Quaternion_op_Multiply_m2469_MethodInfo;
extern MethodInfo Transform_set_localRotation_m63_MethodInfo;
extern MethodInfo Quaternion_Inverse_m1796_MethodInfo;
extern MethodInfo Transform_set_rotation_m2728_MethodInfo;
extern MethodInfo Vector3_get_up_m1342_MethodInfo;
extern MethodInfo Transform_INTERNAL_CALL_LookAt_m2738_MethodInfo;
extern MethodInfo Transform_INTERNAL_CALL_TransformPoint_m2739_MethodInfo;
extern MethodInfo Transform_INTERNAL_CALL_InverseTransformPoint_m2740_MethodInfo;
extern MethodInfo Transform_Find_m2741_MethodInfo;


// System.Void UnityEngine.Transform::INTERNAL_get_position(UnityEngine.Vector3&)
extern "C" void Transform_INTERNAL_get_position_m2722 (Transform_t8 * __this, Vector3_t6 * ___value, MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_get_position_m2722_ftn) (Transform_t8 *, Vector3_t6 *);
	static Transform_INTERNAL_get_position_m2722_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_get_position_m2722_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_get_position(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Transform::INTERNAL_set_position(UnityEngine.Vector3&)
extern "C" void Transform_INTERNAL_set_position_m2723 (Transform_t8 * __this, Vector3_t6 * ___value, MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_set_position_m2723_ftn) (Transform_t8 *, Vector3_t6 *);
	static Transform_INTERNAL_set_position_m2723_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_set_position_m2723_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_set_position(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
extern MethodInfo Transform_get_position_m40_MethodInfo;
extern "C" Vector3_t6  Transform_get_position_m40 (Transform_t8 * __this, MethodInfo* method)
{
	Vector3_t6  V_0 = {0};
	{
		Transform_INTERNAL_get_position_m2722(__this, (&V_0), /*hidden argument*/&Transform_INTERNAL_get_position_m2722_MethodInfo);
		Vector3_t6  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
extern MethodInfo Transform_set_position_m47_MethodInfo;
extern "C" void Transform_set_position_m47 (Transform_t8 * __this, Vector3_t6  ___value, MethodInfo* method)
{
	{
		Transform_INTERNAL_set_position_m2723(__this, (&___value), /*hidden argument*/&Transform_INTERNAL_set_position_m2723_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Transform::INTERNAL_get_localPosition(UnityEngine.Vector3&)
extern "C" void Transform_INTERNAL_get_localPosition_m2724 (Transform_t8 * __this, Vector3_t6 * ___value, MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_get_localPosition_m2724_ftn) (Transform_t8 *, Vector3_t6 *);
	static Transform_INTERNAL_get_localPosition_m2724_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_get_localPosition_m2724_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_get_localPosition(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Transform::INTERNAL_set_localPosition(UnityEngine.Vector3&)
extern "C" void Transform_INTERNAL_set_localPosition_m2725 (Transform_t8 * __this, Vector3_t6 * ___value, MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_set_localPosition_m2725_ftn) (Transform_t8 *, Vector3_t6 *);
	static Transform_INTERNAL_set_localPosition_m2725_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_set_localPosition_m2725_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_set_localPosition(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
extern MethodInfo Transform_get_localPosition_m1696_MethodInfo;
extern "C" Vector3_t6  Transform_get_localPosition_m1696 (Transform_t8 * __this, MethodInfo* method)
{
	Vector3_t6  V_0 = {0};
	{
		Transform_INTERNAL_get_localPosition_m2724(__this, (&V_0), /*hidden argument*/&Transform_INTERNAL_get_localPosition_m2724_MethodInfo);
		Vector3_t6  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
extern MethodInfo Transform_set_localPosition_m61_MethodInfo;
extern "C" void Transform_set_localPosition_m61 (Transform_t8 * __this, Vector3_t6  ___value, MethodInfo* method)
{
	{
		Transform_INTERNAL_set_localPosition_m2725(__this, (&___value), /*hidden argument*/&Transform_INTERNAL_set_localPosition_m2725_MethodInfo);
		return;
	}
}
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
extern MethodInfo Transform_get_forward_m1556_MethodInfo;
extern "C" Vector3_t6  Transform_get_forward_m1556 (Transform_t8 * __this, MethodInfo* method)
{
	{
		Quaternion_t19  L_0 = Transform_get_rotation_m1552(__this, /*hidden argument*/&Transform_get_rotation_m1552_MethodInfo);
		Vector3_t6  L_1 = Vector3_get_forward_m1553(NULL /*static, unused*/, /*hidden argument*/&Vector3_get_forward_m1553_MethodInfo);
		Vector3_t6  L_2 = Quaternion_op_Multiply_m1554(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Quaternion_op_Multiply_m1554_MethodInfo);
		return L_2;
	}
}
// System.Void UnityEngine.Transform::INTERNAL_get_rotation(UnityEngine.Quaternion&)
extern "C" void Transform_INTERNAL_get_rotation_m2726 (Transform_t8 * __this, Quaternion_t19 * ___value, MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_get_rotation_m2726_ftn) (Transform_t8 *, Quaternion_t19 *);
	static Transform_INTERNAL_get_rotation_m2726_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_get_rotation_m2726_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_get_rotation(UnityEngine.Quaternion&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Transform::INTERNAL_set_rotation(UnityEngine.Quaternion&)
extern "C" void Transform_INTERNAL_set_rotation_m2727 (Transform_t8 * __this, Quaternion_t19 * ___value, MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_set_rotation_m2727_ftn) (Transform_t8 *, Quaternion_t19 *);
	static Transform_INTERNAL_set_rotation_m2727_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_set_rotation_m2727_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_set_rotation(UnityEngine.Quaternion&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
extern "C" Quaternion_t19  Transform_get_rotation_m1552 (Transform_t8 * __this, MethodInfo* method)
{
	Quaternion_t19  V_0 = {0};
	{
		Transform_INTERNAL_get_rotation_m2726(__this, (&V_0), /*hidden argument*/&Transform_INTERNAL_get_rotation_m2726_MethodInfo);
		Quaternion_t19  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
extern "C" void Transform_set_rotation_m2728 (Transform_t8 * __this, Quaternion_t19  ___value, MethodInfo* method)
{
	{
		Transform_INTERNAL_set_rotation_m2727(__this, (&___value), /*hidden argument*/&Transform_INTERNAL_set_rotation_m2727_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Transform::INTERNAL_get_localRotation(UnityEngine.Quaternion&)
extern "C" void Transform_INTERNAL_get_localRotation_m2729 (Transform_t8 * __this, Quaternion_t19 * ___value, MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_get_localRotation_m2729_ftn) (Transform_t8 *, Quaternion_t19 *);
	static Transform_INTERNAL_get_localRotation_m2729_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_get_localRotation_m2729_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_get_localRotation(UnityEngine.Quaternion&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Transform::INTERNAL_set_localRotation(UnityEngine.Quaternion&)
extern "C" void Transform_INTERNAL_set_localRotation_m2730 (Transform_t8 * __this, Quaternion_t19 * ___value, MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_set_localRotation_m2730_ftn) (Transform_t8 *, Quaternion_t19 *);
	static Transform_INTERNAL_set_localRotation_m2730_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_set_localRotation_m2730_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_set_localRotation(UnityEngine.Quaternion&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Quaternion UnityEngine.Transform::get_localRotation()
extern "C" Quaternion_t19  Transform_get_localRotation_m1698 (Transform_t8 * __this, MethodInfo* method)
{
	Quaternion_t19  V_0 = {0};
	{
		Transform_INTERNAL_get_localRotation_m2729(__this, (&V_0), /*hidden argument*/&Transform_INTERNAL_get_localRotation_m2729_MethodInfo);
		Quaternion_t19  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
extern "C" void Transform_set_localRotation_m63 (Transform_t8 * __this, Quaternion_t19  ___value, MethodInfo* method)
{
	{
		Transform_INTERNAL_set_localRotation_m2730(__this, (&___value), /*hidden argument*/&Transform_INTERNAL_set_localRotation_m2730_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Transform::INTERNAL_get_localScale(UnityEngine.Vector3&)
extern "C" void Transform_INTERNAL_get_localScale_m2731 (Transform_t8 * __this, Vector3_t6 * ___value, MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_get_localScale_m2731_ftn) (Transform_t8 *, Vector3_t6 *);
	static Transform_INTERNAL_get_localScale_m2731_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_get_localScale_m2731_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_get_localScale(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Transform::INTERNAL_set_localScale(UnityEngine.Vector3&)
extern "C" void Transform_INTERNAL_set_localScale_m2732 (Transform_t8 * __this, Vector3_t6 * ___value, MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_set_localScale_m2732_ftn) (Transform_t8 *, Vector3_t6 *);
	static Transform_INTERNAL_set_localScale_m2732_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_set_localScale_m2732_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_set_localScale(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
extern MethodInfo Transform_get_localScale_m1700_MethodInfo;
extern "C" Vector3_t6  Transform_get_localScale_m1700 (Transform_t8 * __this, MethodInfo* method)
{
	Vector3_t6  V_0 = {0};
	{
		Transform_INTERNAL_get_localScale_m2731(__this, (&V_0), /*hidden argument*/&Transform_INTERNAL_get_localScale_m2731_MethodInfo);
		Vector3_t6  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
extern MethodInfo Transform_set_localScale_m60_MethodInfo;
extern "C" void Transform_set_localScale_m60 (Transform_t8 * __this, Vector3_t6  ___value, MethodInfo* method)
{
	{
		Transform_INTERNAL_set_localScale_m2732(__this, (&___value), /*hidden argument*/&Transform_INTERNAL_set_localScale_m2732_MethodInfo);
		return;
	}
}
// UnityEngine.Transform UnityEngine.Transform::get_parent()
extern MethodInfo Transform_get_parent_m1333_MethodInfo;
extern "C" Transform_t8 * Transform_get_parent_m1333 (Transform_t8 * __this, MethodInfo* method)
{
	{
		Transform_t8 * L_0 = Transform_get_parentInternal_m2733(__this, /*hidden argument*/&Transform_get_parentInternal_m2733_MethodInfo);
		return L_0;
	}
}
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
extern MethodInfo Transform_set_parent_m1744_MethodInfo;
extern "C" void Transform_set_parent_m1744 (Transform_t8 * __this, Transform_t8 * ___value, MethodInfo* method)
{
	{
		if (!((RectTransform_t132 *)IsInst(__this, InitializedTypeInfo(&RectTransform_t132_il2cpp_TypeInfo))))
		{
			goto IL_0016;
		}
	}
	{
		Debug_LogWarning_m1820(NULL /*static, unused*/, (String_t*) &_stringLiteral184, __this, /*hidden argument*/&Debug_LogWarning_m1820_MethodInfo);
	}

IL_0016:
	{
		Transform_t8 * L_0 = ___value;
		Transform_set_parentInternal_m2734(__this, L_0, /*hidden argument*/&Transform_set_parentInternal_m2734_MethodInfo);
		return;
	}
}
// UnityEngine.Transform UnityEngine.Transform::get_parentInternal()
extern "C" Transform_t8 * Transform_get_parentInternal_m2733 (Transform_t8 * __this, MethodInfo* method)
{
	typedef Transform_t8 * (*Transform_get_parentInternal_m2733_ftn) (Transform_t8 *);
	static Transform_get_parentInternal_m2733_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_get_parentInternal_m2733_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::get_parentInternal()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Transform::set_parentInternal(UnityEngine.Transform)
extern "C" void Transform_set_parentInternal_m2734 (Transform_t8 * __this, Transform_t8 * ___value, MethodInfo* method)
{
	typedef void (*Transform_set_parentInternal_m2734_ftn) (Transform_t8 *, Transform_t8 *);
	static Transform_set_parentInternal_m2734_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_set_parentInternal_m2734_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::set_parentInternal(UnityEngine.Transform)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform)
extern MethodInfo Transform_SetParent_m1691_MethodInfo;
extern "C" void Transform_SetParent_m1691 (Transform_t8 * __this, Transform_t8 * ___parent, MethodInfo* method)
{
	{
		Transform_t8 * L_0 = ___parent;
		Transform_SetParent_m2735(__this, L_0, 1, /*hidden argument*/&Transform_SetParent_m2735_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)
extern "C" void Transform_SetParent_m2735 (Transform_t8 * __this, Transform_t8 * ___parent, bool ___worldPositionStays, MethodInfo* method)
{
	typedef void (*Transform_SetParent_m2735_ftn) (Transform_t8 *, Transform_t8 *, bool);
	static Transform_SetParent_m2735_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_SetParent_m2735_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)");
	_il2cpp_icall_func(__this, ___parent, ___worldPositionStays);
}
// System.Void UnityEngine.Transform::INTERNAL_get_worldToLocalMatrix(UnityEngine.Matrix4x4&)
extern "C" void Transform_INTERNAL_get_worldToLocalMatrix_m2736 (Transform_t8 * __this, Matrix4x4_t314 * ___value, MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_get_worldToLocalMatrix_m2736_ftn) (Transform_t8 *, Matrix4x4_t314 *);
	static Transform_INTERNAL_get_worldToLocalMatrix_m2736_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_get_worldToLocalMatrix_m2736_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_get_worldToLocalMatrix(UnityEngine.Matrix4x4&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Matrix4x4 UnityEngine.Transform::get_worldToLocalMatrix()
extern MethodInfo Transform_get_worldToLocalMatrix_m1777_MethodInfo;
extern "C" Matrix4x4_t314  Transform_get_worldToLocalMatrix_m1777 (Transform_t8 * __this, MethodInfo* method)
{
	Matrix4x4_t314  V_0 = {0};
	{
		Transform_INTERNAL_get_worldToLocalMatrix_m2736(__this, (&V_0), /*hidden argument*/&Transform_INTERNAL_get_worldToLocalMatrix_m2736_MethodInfo);
		Matrix4x4_t314  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3)
extern MethodInfo Transform_Rotate_m31_MethodInfo;
extern "C" void Transform_Rotate_m31 (Transform_t8 * __this, Vector3_t6  ___eulerAngles, MethodInfo* method)
{
	int32_t V_0 = {0};
	{
		V_0 = 1;
		Vector3_t6  L_0 = ___eulerAngles;
		int32_t L_1 = V_0;
		Transform_Rotate_m2737(__this, L_0, L_1, /*hidden argument*/&Transform_Rotate_m2737_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3,UnityEngine.Space)
extern "C" void Transform_Rotate_m2737 (Transform_t8 * __this, Vector3_t6  ___eulerAngles, int32_t ___relativeTo, MethodInfo* method)
{
	Quaternion_t19  V_0 = {0};
	{
		float L_0 = ((&___eulerAngles)->___x_1);
		float L_1 = ((&___eulerAngles)->___y_2);
		float L_2 = ((&___eulerAngles)->___z_3);
		Quaternion_t19  L_3 = Quaternion_Euler_m2464(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/&Quaternion_Euler_m2464_MethodInfo);
		V_0 = L_3;
		int32_t L_4 = ___relativeTo;
		if ((!(((uint32_t)L_4) == ((uint32_t)1))))
		{
			goto IL_0039;
		}
	}
	{
		Quaternion_t19  L_5 = Transform_get_localRotation_m1698(__this, /*hidden argument*/&Transform_get_localRotation_m1698_MethodInfo);
		Quaternion_t19  L_6 = V_0;
		Quaternion_t19  L_7 = Quaternion_op_Multiply_m2469(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/&Quaternion_op_Multiply_m2469_MethodInfo);
		Transform_set_localRotation_m63(__this, L_7, /*hidden argument*/&Transform_set_localRotation_m63_MethodInfo);
		goto IL_0066;
	}

IL_0039:
	{
		Quaternion_t19  L_8 = Transform_get_rotation_m1552(__this, /*hidden argument*/&Transform_get_rotation_m1552_MethodInfo);
		Quaternion_t19  L_9 = Transform_get_rotation_m1552(__this, /*hidden argument*/&Transform_get_rotation_m1552_MethodInfo);
		Quaternion_t19  L_10 = Quaternion_Inverse_m1796(NULL /*static, unused*/, L_9, /*hidden argument*/&Quaternion_Inverse_m1796_MethodInfo);
		Quaternion_t19  L_11 = V_0;
		Quaternion_t19  L_12 = Quaternion_op_Multiply_m2469(NULL /*static, unused*/, L_10, L_11, /*hidden argument*/&Quaternion_op_Multiply_m2469_MethodInfo);
		Quaternion_t19  L_13 = Transform_get_rotation_m1552(__this, /*hidden argument*/&Transform_get_rotation_m1552_MethodInfo);
		Quaternion_t19  L_14 = Quaternion_op_Multiply_m2469(NULL /*static, unused*/, L_12, L_13, /*hidden argument*/&Quaternion_op_Multiply_m2469_MethodInfo);
		Quaternion_t19  L_15 = Quaternion_op_Multiply_m2469(NULL /*static, unused*/, L_8, L_14, /*hidden argument*/&Quaternion_op_Multiply_m2469_MethodInfo);
		Transform_set_rotation_m2728(__this, L_15, /*hidden argument*/&Transform_set_rotation_m2728_MethodInfo);
	}

IL_0066:
	{
		return;
	}
}
// System.Void UnityEngine.Transform::LookAt(UnityEngine.Vector3)
extern MethodInfo Transform_LookAt_m48_MethodInfo;
extern "C" void Transform_LookAt_m48 (Transform_t8 * __this, Vector3_t6  ___worldPosition, MethodInfo* method)
{
	Vector3_t6  V_0 = {0};
	{
		Vector3_t6  L_0 = Vector3_get_up_m1342(NULL /*static, unused*/, /*hidden argument*/&Vector3_get_up_m1342_MethodInfo);
		V_0 = L_0;
		Transform_INTERNAL_CALL_LookAt_m2738(NULL /*static, unused*/, __this, (&___worldPosition), (&V_0), /*hidden argument*/&Transform_INTERNAL_CALL_LookAt_m2738_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Transform::INTERNAL_CALL_LookAt(UnityEngine.Transform,UnityEngine.Vector3&,UnityEngine.Vector3&)
extern "C" void Transform_INTERNAL_CALL_LookAt_m2738 (Object_t * __this /* static, unused */, Transform_t8 * ___self, Vector3_t6 * ___worldPosition, Vector3_t6 * ___worldUp, MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_CALL_LookAt_m2738_ftn) (Transform_t8 *, Vector3_t6 *, Vector3_t6 *);
	static Transform_INTERNAL_CALL_LookAt_m2738_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_CALL_LookAt_m2738_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_CALL_LookAt(UnityEngine.Transform,UnityEngine.Vector3&,UnityEngine.Vector3&)");
	_il2cpp_icall_func(___self, ___worldPosition, ___worldUp);
}
// UnityEngine.Vector3 UnityEngine.Transform::TransformPoint(UnityEngine.Vector3)
extern MethodInfo Transform_TransformPoint_m1797_MethodInfo;
extern "C" Vector3_t6  Transform_TransformPoint_m1797 (Transform_t8 * __this, Vector3_t6  ___position, MethodInfo* method)
{
	{
		Vector3_t6  L_0 = Transform_INTERNAL_CALL_TransformPoint_m2739(NULL /*static, unused*/, __this, (&___position), /*hidden argument*/&Transform_INTERNAL_CALL_TransformPoint_m2739_MethodInfo);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Transform::INTERNAL_CALL_TransformPoint(UnityEngine.Transform,UnityEngine.Vector3&)
extern "C" Vector3_t6  Transform_INTERNAL_CALL_TransformPoint_m2739 (Object_t * __this /* static, unused */, Transform_t8 * ___self, Vector3_t6 * ___position, MethodInfo* method)
{
	typedef Vector3_t6  (*Transform_INTERNAL_CALL_TransformPoint_m2739_ftn) (Transform_t8 *, Vector3_t6 *);
	static Transform_INTERNAL_CALL_TransformPoint_m2739_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_CALL_TransformPoint_m2739_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_CALL_TransformPoint(UnityEngine.Transform,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(___self, ___position);
}
// UnityEngine.Vector3 UnityEngine.Transform::InverseTransformPoint(UnityEngine.Vector3)
extern MethodInfo Transform_InverseTransformPoint_m1656_MethodInfo;
extern "C" Vector3_t6  Transform_InverseTransformPoint_m1656 (Transform_t8 * __this, Vector3_t6  ___position, MethodInfo* method)
{
	{
		Vector3_t6  L_0 = Transform_INTERNAL_CALL_InverseTransformPoint_m2740(NULL /*static, unused*/, __this, (&___position), /*hidden argument*/&Transform_INTERNAL_CALL_InverseTransformPoint_m2740_MethodInfo);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Transform::INTERNAL_CALL_InverseTransformPoint(UnityEngine.Transform,UnityEngine.Vector3&)
extern "C" Vector3_t6  Transform_INTERNAL_CALL_InverseTransformPoint_m2740 (Object_t * __this /* static, unused */, Transform_t8 * ___self, Vector3_t6 * ___position, MethodInfo* method)
{
	typedef Vector3_t6  (*Transform_INTERNAL_CALL_InverseTransformPoint_m2740_ftn) (Transform_t8 *, Vector3_t6 *);
	static Transform_INTERNAL_CALL_InverseTransformPoint_m2740_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_CALL_InverseTransformPoint_m2740_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_CALL_InverseTransformPoint(UnityEngine.Transform,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(___self, ___position);
}
// System.Int32 UnityEngine.Transform::get_childCount()
extern "C" int32_t Transform_get_childCount_m1891 (Transform_t8 * __this, MethodInfo* method)
{
	typedef int32_t (*Transform_get_childCount_m1891_ftn) (Transform_t8 *);
	static Transform_get_childCount_m1891_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_get_childCount_m1891_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::get_childCount()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Transform::SetAsFirstSibling()
extern MethodInfo Transform_SetAsFirstSibling_m1692_MethodInfo;
extern "C" void Transform_SetAsFirstSibling_m1692 (Transform_t8 * __this, MethodInfo* method)
{
	typedef void (*Transform_SetAsFirstSibling_m1692_ftn) (Transform_t8 *);
	static Transform_SetAsFirstSibling_m1692_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_SetAsFirstSibling_m1692_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::SetAsFirstSibling()");
	_il2cpp_icall_func(__this);
}
// UnityEngine.Transform UnityEngine.Transform::Find(System.String)
extern "C" Transform_t8 * Transform_Find_m2741 (Transform_t8 * __this, String_t* ___name, MethodInfo* method)
{
	typedef Transform_t8 * (*Transform_Find_m2741_ftn) (Transform_t8 *, String_t*);
	static Transform_Find_m2741_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_Find_m2741_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::Find(System.String)");
	return _il2cpp_icall_func(__this, ___name);
}
// UnityEngine.Transform UnityEngine.Transform::FindChild(System.String)
extern MethodInfo Transform_FindChild_m32_MethodInfo;
extern "C" Transform_t8 * Transform_FindChild_m32 (Transform_t8 * __this, String_t* ___name, MethodInfo* method)
{
	{
		String_t* L_0 = ___name;
		Transform_t8 * L_1 = Transform_Find_m2741(__this, L_0, /*hidden argument*/&Transform_Find_m2741_MethodInfo);
		return L_1;
	}
}
// System.Collections.IEnumerator UnityEngine.Transform::GetEnumerator()
extern MethodInfo Transform_GetEnumerator_m2742_MethodInfo;
extern "C" Object_t * Transform_GetEnumerator_m2742 (Transform_t8 * __this, MethodInfo* method)
{
	{
		Enumerator_t524 * L_0 = (Enumerator_t524 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Enumerator_t524_il2cpp_TypeInfo));
		Enumerator__ctor_m2719(L_0, __this, /*hidden argument*/&Enumerator__ctor_m2719_MethodInfo);
		return L_0;
	}
}
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
extern "C" Transform_t8 * Transform_GetChild_m1888 (Transform_t8 * __this, int32_t ___index, MethodInfo* method)
{
	typedef Transform_t8 * (*Transform_GetChild_m1888_ftn) (Transform_t8 *, int32_t);
	static Transform_GetChild_m1888_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_GetChild_m1888_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::GetChild(System.Int32)");
	return _il2cpp_icall_func(__this, ___index);
}
// UnityEngine.Time
#include "UnityEngine_UnityEngine_Time.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Time_t525_il2cpp_TypeInfo;
// UnityEngine.Time
#include "UnityEngine_UnityEngine_TimeMethodDeclarations.h"



// System.Single UnityEngine.Time::get_deltaTime()
extern MethodInfo Time_get_deltaTime_m38_MethodInfo;
extern "C" float Time_get_deltaTime_m38 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef float (*Time_get_deltaTime_m38_ftn) ();
	static Time_get_deltaTime_m38_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Time_get_deltaTime_m38_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Time::get_deltaTime()");
	return _il2cpp_icall_func();
}
// System.Single UnityEngine.Time::get_unscaledTime()
extern MethodInfo Time_get_unscaledTime_m1401_MethodInfo;
extern "C" float Time_get_unscaledTime_m1401 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef float (*Time_get_unscaledTime_m1401_ftn) ();
	static Time_get_unscaledTime_m1401_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Time_get_unscaledTime_m1401_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Time::get_unscaledTime()");
	return _il2cpp_icall_func();
}
// System.Single UnityEngine.Time::get_unscaledDeltaTime()
extern MethodInfo Time_get_unscaledDeltaTime_m1452_MethodInfo;
extern "C" float Time_get_unscaledDeltaTime_m1452 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef float (*Time_get_unscaledDeltaTime_m1452_ftn) ();
	static Time_get_unscaledDeltaTime_m1452_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Time_get_unscaledDeltaTime_m1452_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Time::get_unscaledDeltaTime()");
	return _il2cpp_icall_func();
}
// UnityEngine.Random
#include "UnityEngine_UnityEngine_Random.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Random_t526_il2cpp_TypeInfo;
// UnityEngine.Random
#include "UnityEngine_UnityEngine_RandomMethodDeclarations.h"

extern MethodInfo Random_RandomRangeInt_m2743_MethodInfo;


// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
extern MethodInfo Random_Range_m46_MethodInfo;
extern "C" int32_t Random_Range_m46 (Object_t * __this /* static, unused */, int32_t ___min, int32_t ___max, MethodInfo* method)
{
	{
		int32_t L_0 = ___min;
		int32_t L_1 = ___max;
		int32_t L_2 = Random_RandomRangeInt_m2743(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Random_RandomRangeInt_m2743_MethodInfo);
		return L_2;
	}
}
// System.Int32 UnityEngine.Random::RandomRangeInt(System.Int32,System.Int32)
extern "C" int32_t Random_RandomRangeInt_m2743 (Object_t * __this /* static, unused */, int32_t ___min, int32_t ___max, MethodInfo* method)
{
	typedef int32_t (*Random_RandomRangeInt_m2743_ftn) (int32_t, int32_t);
	static Random_RandomRangeInt_m2743_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Random_RandomRangeInt_m2743_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Random::RandomRangeInt(System.Int32,System.Int32)");
	return _il2cpp_icall_func(___min, ___max);
}
// UnityEngine.YieldInstruction
#include "UnityEngine_UnityEngine_YieldInstruction.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo YieldInstruction_t427_il2cpp_TypeInfo;
// UnityEngine.YieldInstruction
#include "UnityEngine_UnityEngine_YieldInstructionMethodDeclarations.h"



// System.Void UnityEngine.YieldInstruction::.ctor()
extern MethodInfo YieldInstruction__ctor_m2744_MethodInfo;
extern "C" void YieldInstruction__ctor_m2744 (YieldInstruction_t427 * __this, MethodInfo* method)
{
	{
		Object__ctor_m1289(__this, /*hidden argument*/&Object__ctor_m1289_MethodInfo);
		return;
	}
}
// Conversion methods for marshalling of: UnityEngine.YieldInstruction
void YieldInstruction_t427_marshal(const YieldInstruction_t427& unmarshaled, YieldInstruction_t427_marshaled& marshaled)
{
}
void YieldInstruction_t427_marshal_back(const YieldInstruction_t427_marshaled& marshaled, YieldInstruction_t427& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: UnityEngine.YieldInstruction
void YieldInstruction_t427_marshal_cleanup(YieldInstruction_t427_marshaled& marshaled)
{
}
// UnityEngine.PlayerPrefs
#include "UnityEngine_UnityEngine_PlayerPrefs.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo PlayerPrefs_t527_il2cpp_TypeInfo;
// UnityEngine.PlayerPrefs
#include "UnityEngine_UnityEngine_PlayerPrefsMethodDeclarations.h"

extern TypeInfo String_t_il2cpp_TypeInfo;
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
extern MethodInfo PlayerPrefs_GetString_m2745_MethodInfo;


// System.String UnityEngine.PlayerPrefs::GetString(System.String,System.String)
extern "C" String_t* PlayerPrefs_GetString_m2745 (Object_t * __this /* static, unused */, String_t* ___key, String_t* ___defaultValue, MethodInfo* method)
{
	typedef String_t* (*PlayerPrefs_GetString_m2745_ftn) (String_t*, String_t*);
	static PlayerPrefs_GetString_m2745_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (PlayerPrefs_GetString_m2745_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.PlayerPrefs::GetString(System.String,System.String)");
	return _il2cpp_icall_func(___key, ___defaultValue);
}
// System.String UnityEngine.PlayerPrefs::GetString(System.String)
extern MethodInfo PlayerPrefs_GetString_m2746_MethodInfo;
extern "C" String_t* PlayerPrefs_GetString_m2746 (Object_t * __this /* static, unused */, String_t* ___key, MethodInfo* method)
{
	String_t* V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_0 = ((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2;
		V_0 = L_0;
		String_t* L_1 = ___key;
		String_t* L_2 = V_0;
		String_t* L_3 = PlayerPrefs_GetString_m2745(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/&PlayerPrefs_GetString_m2745_MethodInfo);
		return L_3;
	}
}
// UnityEngine.Particle
#include "UnityEngine_UnityEngine_Particle.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Particle_t528_il2cpp_TypeInfo;
// UnityEngine.Particle
#include "UnityEngine_UnityEngine_ParticleMethodDeclarations.h"

// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"


// UnityEngine.Vector3 UnityEngine.Particle::get_position()
extern MethodInfo Particle_get_position_m2747_MethodInfo;
extern "C" Vector3_t6  Particle_get_position_m2747 (Particle_t528 * __this, MethodInfo* method)
{
	{
		Vector3_t6  L_0 = (__this->___m_Position_0);
		return L_0;
	}
}
// System.Void UnityEngine.Particle::set_position(UnityEngine.Vector3)
extern MethodInfo Particle_set_position_m2748_MethodInfo;
extern "C" void Particle_set_position_m2748 (Particle_t528 * __this, Vector3_t6  ___value, MethodInfo* method)
{
	{
		Vector3_t6  L_0 = ___value;
		__this->___m_Position_0 = L_0;
		return;
	}
}
// UnityEngine.Vector3 UnityEngine.Particle::get_velocity()
extern MethodInfo Particle_get_velocity_m2749_MethodInfo;
extern "C" Vector3_t6  Particle_get_velocity_m2749 (Particle_t528 * __this, MethodInfo* method)
{
	{
		Vector3_t6  L_0 = (__this->___m_Velocity_1);
		return L_0;
	}
}
// System.Void UnityEngine.Particle::set_velocity(UnityEngine.Vector3)
extern MethodInfo Particle_set_velocity_m2750_MethodInfo;
extern "C" void Particle_set_velocity_m2750 (Particle_t528 * __this, Vector3_t6  ___value, MethodInfo* method)
{
	{
		Vector3_t6  L_0 = ___value;
		__this->___m_Velocity_1 = L_0;
		return;
	}
}
// System.Single UnityEngine.Particle::get_energy()
extern MethodInfo Particle_get_energy_m2751_MethodInfo;
extern "C" float Particle_get_energy_m2751 (Particle_t528 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Energy_5);
		return L_0;
	}
}
// System.Void UnityEngine.Particle::set_energy(System.Single)
extern MethodInfo Particle_set_energy_m2752_MethodInfo;
extern "C" void Particle_set_energy_m2752 (Particle_t528 * __this, float ___value, MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___m_Energy_5 = L_0;
		return;
	}
}
// System.Single UnityEngine.Particle::get_startEnergy()
extern MethodInfo Particle_get_startEnergy_m2753_MethodInfo;
extern "C" float Particle_get_startEnergy_m2753 (Particle_t528 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->___m_StartEnergy_6);
		return L_0;
	}
}
// System.Void UnityEngine.Particle::set_startEnergy(System.Single)
extern MethodInfo Particle_set_startEnergy_m2754_MethodInfo;
extern "C" void Particle_set_startEnergy_m2754 (Particle_t528 * __this, float ___value, MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___m_StartEnergy_6 = L_0;
		return;
	}
}
// System.Single UnityEngine.Particle::get_size()
extern MethodInfo Particle_get_size_m2755_MethodInfo;
extern "C" float Particle_get_size_m2755 (Particle_t528 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Size_2);
		return L_0;
	}
}
// System.Void UnityEngine.Particle::set_size(System.Single)
extern MethodInfo Particle_set_size_m2756_MethodInfo;
extern "C" void Particle_set_size_m2756 (Particle_t528 * __this, float ___value, MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___m_Size_2 = L_0;
		return;
	}
}
// System.Single UnityEngine.Particle::get_rotation()
extern MethodInfo Particle_get_rotation_m2757_MethodInfo;
extern "C" float Particle_get_rotation_m2757 (Particle_t528 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Rotation_3);
		return L_0;
	}
}
// System.Void UnityEngine.Particle::set_rotation(System.Single)
extern MethodInfo Particle_set_rotation_m2758_MethodInfo;
extern "C" void Particle_set_rotation_m2758 (Particle_t528 * __this, float ___value, MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___m_Rotation_3 = L_0;
		return;
	}
}
// System.Single UnityEngine.Particle::get_angularVelocity()
extern MethodInfo Particle_get_angularVelocity_m2759_MethodInfo;
extern "C" float Particle_get_angularVelocity_m2759 (Particle_t528 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->___m_AngularVelocity_4);
		return L_0;
	}
}
// System.Void UnityEngine.Particle::set_angularVelocity(System.Single)
extern MethodInfo Particle_set_angularVelocity_m2760_MethodInfo;
extern "C" void Particle_set_angularVelocity_m2760 (Particle_t528 * __this, float ___value, MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___m_AngularVelocity_4 = L_0;
		return;
	}
}
// UnityEngine.Color UnityEngine.Particle::get_color()
extern MethodInfo Particle_get_color_m2761_MethodInfo;
extern "C" Color_t109  Particle_get_color_m2761 (Particle_t528 * __this, MethodInfo* method)
{
	{
		Color_t109  L_0 = (__this->___m_Color_7);
		return L_0;
	}
}
// System.Void UnityEngine.Particle::set_color(UnityEngine.Color)
extern MethodInfo Particle_set_color_m2762_MethodInfo;
extern "C" void Particle_set_color_m2762 (Particle_t528 * __this, Color_t109  ___value, MethodInfo* method)
{
	{
		Color_t109  L_0 = ___value;
		__this->___m_Color_7 = L_0;
		return;
	}
}
// UnityEngine.ForceMode
#include "UnityEngine_UnityEngine_ForceMode.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ForceMode_t529_il2cpp_TypeInfo;
// UnityEngine.ForceMode
#include "UnityEngine_UnityEngine_ForceModeMethodDeclarations.h"



// UnityEngine.Physics
#include "UnityEngine_UnityEngine_Physics.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Physics_t530_il2cpp_TypeInfo;
// UnityEngine.Physics
#include "UnityEngine_UnityEngine_PhysicsMethodDeclarations.h"

// UnityEngine.RaycastHit
#include "UnityEngine_UnityEngine_RaycastHit.h"
// UnityEngine.Ray
#include "UnityEngine_UnityEngine_Ray.h"
#include "UnityEngine_ArrayTypes.h"
// UnityEngine.Ray
#include "UnityEngine_UnityEngine_RayMethodDeclarations.h"
extern MethodInfo Physics_INTERNAL_CALL_Internal_Raycast_m2764_MethodInfo;
extern MethodInfo Physics_Internal_Raycast_m2763_MethodInfo;
extern MethodInfo Ray_get_origin_m1425_MethodInfo;
extern MethodInfo Ray_get_direction_m1426_MethodInfo;
extern MethodInfo Physics_Raycast_m2765_MethodInfo;
extern MethodInfo Physics_RaycastAll_m2766_MethodInfo;
extern MethodInfo Physics_INTERNAL_CALL_RaycastAll_m2767_MethodInfo;


// System.Boolean UnityEngine.Physics::Internal_Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single,System.Int32)
extern "C" bool Physics_Internal_Raycast_m2763 (Object_t * __this /* static, unused */, Vector3_t6  ___origin, Vector3_t6  ___direction, RaycastHit_t104 * ___hitInfo, float ___maxDistance, int32_t ___layermask, MethodInfo* method)
{
	{
		RaycastHit_t104 * L_0 = ___hitInfo;
		float L_1 = ___maxDistance;
		int32_t L_2 = ___layermask;
		bool L_3 = Physics_INTERNAL_CALL_Internal_Raycast_m2764(NULL /*static, unused*/, (&___origin), (&___direction), L_0, L_1, L_2, /*hidden argument*/&Physics_INTERNAL_CALL_Internal_Raycast_m2764_MethodInfo);
		return L_3;
	}
}
// System.Boolean UnityEngine.Physics::INTERNAL_CALL_Internal_Raycast(UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.RaycastHit&,System.Single,System.Int32)
extern "C" bool Physics_INTERNAL_CALL_Internal_Raycast_m2764 (Object_t * __this /* static, unused */, Vector3_t6 * ___origin, Vector3_t6 * ___direction, RaycastHit_t104 * ___hitInfo, float ___maxDistance, int32_t ___layermask, MethodInfo* method)
{
	typedef bool (*Physics_INTERNAL_CALL_Internal_Raycast_m2764_ftn) (Vector3_t6 *, Vector3_t6 *, RaycastHit_t104 *, float, int32_t);
	static Physics_INTERNAL_CALL_Internal_Raycast_m2764_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Physics_INTERNAL_CALL_Internal_Raycast_m2764_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Physics::INTERNAL_CALL_Internal_Raycast(UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.RaycastHit&,System.Single,System.Int32)");
	return _il2cpp_icall_func(___origin, ___direction, ___hitInfo, ___maxDistance, ___layermask);
}
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single,System.Int32)
extern "C" bool Physics_Raycast_m2765 (Object_t * __this /* static, unused */, Vector3_t6  ___origin, Vector3_t6  ___direction, RaycastHit_t104 * ___hitInfo, float ___maxDistance, int32_t ___layerMask, MethodInfo* method)
{
	{
		Vector3_t6  L_0 = ___origin;
		Vector3_t6  L_1 = ___direction;
		RaycastHit_t104 * L_2 = ___hitInfo;
		float L_3 = ___maxDistance;
		int32_t L_4 = ___layerMask;
		bool L_5 = Physics_Internal_Raycast_m2763(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, /*hidden argument*/&Physics_Internal_Raycast_m2763_MethodInfo);
		return L_5;
	}
}
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&,System.Single,System.Int32)
extern MethodInfo Physics_Raycast_m1547_MethodInfo;
extern "C" bool Physics_Raycast_m1547 (Object_t * __this /* static, unused */, Ray_t279  ___ray, RaycastHit_t104 * ___hitInfo, float ___maxDistance, int32_t ___layerMask, MethodInfo* method)
{
	{
		Vector3_t6  L_0 = Ray_get_origin_m1425((&___ray), /*hidden argument*/&Ray_get_origin_m1425_MethodInfo);
		Vector3_t6  L_1 = Ray_get_direction_m1426((&___ray), /*hidden argument*/&Ray_get_direction_m1426_MethodInfo);
		RaycastHit_t104 * L_2 = ___hitInfo;
		float L_3 = ___maxDistance;
		int32_t L_4 = ___layerMask;
		bool L_5 = Physics_Raycast_m2765(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, /*hidden argument*/&Physics_Raycast_m2765_MethodInfo);
		return L_5;
	}
}
// UnityEngine.RaycastHit[] UnityEngine.Physics::RaycastAll(UnityEngine.Ray,System.Single,System.Int32)
extern MethodInfo Physics_RaycastAll_m1440_MethodInfo;
extern "C" RaycastHitU5BU5D_t283* Physics_RaycastAll_m1440 (Object_t * __this /* static, unused */, Ray_t279  ___ray, float ___maxDistance, int32_t ___layerMask, MethodInfo* method)
{
	{
		Vector3_t6  L_0 = Ray_get_origin_m1425((&___ray), /*hidden argument*/&Ray_get_origin_m1425_MethodInfo);
		Vector3_t6  L_1 = Ray_get_direction_m1426((&___ray), /*hidden argument*/&Ray_get_direction_m1426_MethodInfo);
		float L_2 = ___maxDistance;
		int32_t L_3 = ___layerMask;
		RaycastHitU5BU5D_t283* L_4 = Physics_RaycastAll_m2766(NULL /*static, unused*/, L_0, L_1, L_2, L_3, /*hidden argument*/&Physics_RaycastAll_m2766_MethodInfo);
		return L_4;
	}
}
// UnityEngine.RaycastHit[] UnityEngine.Physics::RaycastAll(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Int32)
extern "C" RaycastHitU5BU5D_t283* Physics_RaycastAll_m2766 (Object_t * __this /* static, unused */, Vector3_t6  ___origin, Vector3_t6  ___direction, float ___maxDistance, int32_t ___layermask, MethodInfo* method)
{
	{
		float L_0 = ___maxDistance;
		int32_t L_1 = ___layermask;
		RaycastHitU5BU5D_t283* L_2 = Physics_INTERNAL_CALL_RaycastAll_m2767(NULL /*static, unused*/, (&___origin), (&___direction), L_0, L_1, /*hidden argument*/&Physics_INTERNAL_CALL_RaycastAll_m2767_MethodInfo);
		return L_2;
	}
}
// UnityEngine.RaycastHit[] UnityEngine.Physics::INTERNAL_CALL_RaycastAll(UnityEngine.Vector3&,UnityEngine.Vector3&,System.Single,System.Int32)
extern "C" RaycastHitU5BU5D_t283* Physics_INTERNAL_CALL_RaycastAll_m2767 (Object_t * __this /* static, unused */, Vector3_t6 * ___origin, Vector3_t6 * ___direction, float ___maxDistance, int32_t ___layermask, MethodInfo* method)
{
	typedef RaycastHitU5BU5D_t283* (*Physics_INTERNAL_CALL_RaycastAll_m2767_ftn) (Vector3_t6 *, Vector3_t6 *, float, int32_t);
	static Physics_INTERNAL_CALL_RaycastAll_m2767_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Physics_INTERNAL_CALL_RaycastAll_m2767_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Physics::INTERNAL_CALL_RaycastAll(UnityEngine.Vector3&,UnityEngine.Vector3&,System.Single,System.Int32)");
	return _il2cpp_icall_func(___origin, ___direction, ___maxDistance, ___layermask);
}
// UnityEngine.Rigidbody
#include "UnityEngine_UnityEngine_Rigidbody.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Rigidbody_t16_il2cpp_TypeInfo;
// UnityEngine.Rigidbody
#include "UnityEngine_UnityEngine_RigidbodyMethodDeclarations.h"

extern MethodInfo Rigidbody_INTERNAL_CALL_AddForce_m2768_MethodInfo;


// System.Void UnityEngine.Rigidbody::AddForce(UnityEngine.Vector3)
extern MethodInfo Rigidbody_AddForce_m34_MethodInfo;
extern "C" void Rigidbody_AddForce_m34 (Rigidbody_t16 * __this, Vector3_t6  ___force, MethodInfo* method)
{
	int32_t V_0 = {0};
	{
		V_0 = 0;
		int32_t L_0 = V_0;
		Rigidbody_INTERNAL_CALL_AddForce_m2768(NULL /*static, unused*/, __this, (&___force), L_0, /*hidden argument*/&Rigidbody_INTERNAL_CALL_AddForce_m2768_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Rigidbody::INTERNAL_CALL_AddForce(UnityEngine.Rigidbody,UnityEngine.Vector3&,UnityEngine.ForceMode)
extern "C" void Rigidbody_INTERNAL_CALL_AddForce_m2768 (Object_t * __this /* static, unused */, Rigidbody_t16 * ___self, Vector3_t6 * ___force, int32_t ___mode, MethodInfo* method)
{
	typedef void (*Rigidbody_INTERNAL_CALL_AddForce_m2768_ftn) (Rigidbody_t16 *, Vector3_t6 *, int32_t);
	static Rigidbody_INTERNAL_CALL_AddForce_m2768_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody_INTERNAL_CALL_AddForce_m2768_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::INTERNAL_CALL_AddForce(UnityEngine.Rigidbody,UnityEngine.Vector3&,UnityEngine.ForceMode)");
	_il2cpp_icall_func(___self, ___force, ___mode);
}
// UnityEngine.Collider
#include "UnityEngine_UnityEngine_Collider.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Collider_t284_il2cpp_TypeInfo;
// UnityEngine.Collider
#include "UnityEngine_UnityEngine_ColliderMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif
extern TypeInfo RaycastHit_t104_il2cpp_TypeInfo;
// UnityEngine.RaycastHit
#include "UnityEngine_UnityEngine_RaycastHitMethodDeclarations.h"



// UnityEngine.Vector3 UnityEngine.RaycastHit::get_point()
extern MethodInfo RaycastHit_get_point_m1444_MethodInfo;
extern "C" Vector3_t6  RaycastHit_get_point_m1444 (RaycastHit_t104 * __this, MethodInfo* method)
{
	{
		Vector3_t6  L_0 = (__this->___m_Point_0);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_normal()
extern MethodInfo RaycastHit_get_normal_m1445_MethodInfo;
extern "C" Vector3_t6  RaycastHit_get_normal_m1445 (RaycastHit_t104 * __this, MethodInfo* method)
{
	{
		Vector3_t6  L_0 = (__this->___m_Normal_1);
		return L_0;
	}
}
// System.Single UnityEngine.RaycastHit::get_distance()
extern MethodInfo RaycastHit_get_distance_m1443_MethodInfo;
extern "C" float RaycastHit_get_distance_m1443 (RaycastHit_t104 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Distance_3);
		return L_0;
	}
}
// UnityEngine.Collider UnityEngine.RaycastHit::get_collider()
extern MethodInfo RaycastHit_get_collider_m1442_MethodInfo;
extern "C" Collider_t284 * RaycastHit_get_collider_m1442 (RaycastHit_t104 * __this, MethodInfo* method)
{
	{
		Collider_t284 * L_0 = (__this->___m_Collider_5);
		return L_0;
	}
}
// UnityEngine.Physics2D
#include "UnityEngine_UnityEngine_Physics2D.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Physics2D_t277_il2cpp_TypeInfo;
// UnityEngine.Physics2D
#include "UnityEngine_UnityEngine_Physics2DMethodDeclarations.h"

// System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>
#include "mscorlib_System_Collections_Generic_List_1_gen_22.h"
// UnityEngine.RaycastHit2D
#include "UnityEngine_UnityEngine_RaycastHit2D.h"
extern TypeInfo List_1_t531_il2cpp_TypeInfo;
// System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>
#include "mscorlib_System_Collections_Generic_List_1_gen_22MethodDeclarations.h"
extern Il2CppType List_1_t531_0_0_0;
extern MethodInfo List_1__ctor_m3413_MethodInfo;
extern MethodInfo Physics2D_INTERNAL_CALL_Internal_Raycast_m2771_MethodInfo;
extern MethodInfo Physics2D_Raycast_m2772_MethodInfo;
extern MethodInfo Physics2D_Internal_Raycast_m2770_MethodInfo;
extern MethodInfo Physics2D_INTERNAL_CALL_RaycastAll_m2773_MethodInfo;
extern Il2CppGenericMethod List_1__ctor_m3413_GenericMethod;


// System.Void UnityEngine.Physics2D::.cctor()
extern MethodInfo Physics2D__cctor_m2769_MethodInfo;
extern TypeInfo* List_1_t531_il2cpp_TypeInfo_var;
extern MethodInfo* List_1__ctor_m3413_MethodInfo_var;
extern "C" void Physics2D__cctor_m2769 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	static bool Physics2D__cctor_m2769_init;
	if (!Physics2D__cctor_m2769_init)
	{
		List_1_t531_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&List_1_t531_0_0_0);
		List_1__ctor_m3413_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1__ctor_m3413_GenericMethod);
		Physics2D__cctor_m2769_init = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(List_1_t531_il2cpp_TypeInfo_var);
		List_1_t531 * L_0 = (List_1_t531 *)il2cpp_codegen_object_new (List_1_t531_il2cpp_TypeInfo_var);
		List_1__ctor_m3413(L_0, /*hidden argument*/List_1__ctor_m3413_MethodInfo_var);
		((Physics2D_t277_StaticFields*)InitializedTypeInfo(&Physics2D_t277_il2cpp_TypeInfo)->static_fields)->___m_LastDisabledRigidbody2D_0 = L_0;
		return;
	}
}
// System.Void UnityEngine.Physics2D::Internal_Raycast(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Int32,System.Single,System.Single,UnityEngine.RaycastHit2D&)
extern "C" void Physics2D_Internal_Raycast_m2770 (Object_t * __this /* static, unused */, Vector2_t12  ___origin, Vector2_t12  ___direction, float ___distance, int32_t ___layerMask, float ___minDepth, float ___maxDepth, RaycastHit2D_t281 * ___raycastHit, MethodInfo* method)
{
	{
		float L_0 = ___distance;
		int32_t L_1 = ___layerMask;
		float L_2 = ___minDepth;
		float L_3 = ___maxDepth;
		RaycastHit2D_t281 * L_4 = ___raycastHit;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Physics2D_t277_il2cpp_TypeInfo));
		Physics2D_INTERNAL_CALL_Internal_Raycast_m2771(NULL /*static, unused*/, (&___origin), (&___direction), L_0, L_1, L_2, L_3, L_4, /*hidden argument*/&Physics2D_INTERNAL_CALL_Internal_Raycast_m2771_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Physics2D::INTERNAL_CALL_Internal_Raycast(UnityEngine.Vector2&,UnityEngine.Vector2&,System.Single,System.Int32,System.Single,System.Single,UnityEngine.RaycastHit2D&)
extern "C" void Physics2D_INTERNAL_CALL_Internal_Raycast_m2771 (Object_t * __this /* static, unused */, Vector2_t12 * ___origin, Vector2_t12 * ___direction, float ___distance, int32_t ___layerMask, float ___minDepth, float ___maxDepth, RaycastHit2D_t281 * ___raycastHit, MethodInfo* method)
{
	typedef void (*Physics2D_INTERNAL_CALL_Internal_Raycast_m2771_ftn) (Vector2_t12 *, Vector2_t12 *, float, int32_t, float, float, RaycastHit2D_t281 *);
	static Physics2D_INTERNAL_CALL_Internal_Raycast_m2771_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Physics2D_INTERNAL_CALL_Internal_Raycast_m2771_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Physics2D::INTERNAL_CALL_Internal_Raycast(UnityEngine.Vector2&,UnityEngine.Vector2&,System.Single,System.Int32,System.Single,System.Single,UnityEngine.RaycastHit2D&)");
	_il2cpp_icall_func(___origin, ___direction, ___distance, ___layerMask, ___minDepth, ___maxDepth, ___raycastHit);
}
// UnityEngine.RaycastHit2D UnityEngine.Physics2D::Raycast(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Int32)
extern MethodInfo Physics2D_Raycast_m1548_MethodInfo;
extern "C" RaycastHit2D_t281  Physics2D_Raycast_m1548 (Object_t * __this /* static, unused */, Vector2_t12  ___origin, Vector2_t12  ___direction, float ___distance, int32_t ___layerMask, MethodInfo* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		V_0 = (std::numeric_limits<float>::infinity());
		V_1 = (-std::numeric_limits<float>::infinity());
		Vector2_t12  L_0 = ___origin;
		Vector2_t12  L_1 = ___direction;
		float L_2 = ___distance;
		int32_t L_3 = ___layerMask;
		float L_4 = V_1;
		float L_5 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Physics2D_t277_il2cpp_TypeInfo));
		RaycastHit2D_t281  L_6 = Physics2D_Raycast_m2772(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, L_5, /*hidden argument*/&Physics2D_Raycast_m2772_MethodInfo);
		return L_6;
	}
}
// UnityEngine.RaycastHit2D UnityEngine.Physics2D::Raycast(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Int32,System.Single,System.Single)
extern "C" RaycastHit2D_t281  Physics2D_Raycast_m2772 (Object_t * __this /* static, unused */, Vector2_t12  ___origin, Vector2_t12  ___direction, float ___distance, int32_t ___layerMask, float ___minDepth, float ___maxDepth, MethodInfo* method)
{
	RaycastHit2D_t281  V_0 = {0};
	{
		Vector2_t12  L_0 = ___origin;
		Vector2_t12  L_1 = ___direction;
		float L_2 = ___distance;
		int32_t L_3 = ___layerMask;
		float L_4 = ___minDepth;
		float L_5 = ___maxDepth;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Physics2D_t277_il2cpp_TypeInfo));
		Physics2D_Internal_Raycast_m2770(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, L_5, (&V_0), /*hidden argument*/&Physics2D_Internal_Raycast_m2770_MethodInfo);
		RaycastHit2D_t281  L_6 = V_0;
		return L_6;
	}
}
// UnityEngine.RaycastHit2D[] UnityEngine.Physics2D::RaycastAll(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Int32)
extern MethodInfo Physics2D_RaycastAll_m1427_MethodInfo;
extern "C" RaycastHit2DU5BU5D_t280* Physics2D_RaycastAll_m1427 (Object_t * __this /* static, unused */, Vector2_t12  ___origin, Vector2_t12  ___direction, float ___distance, int32_t ___layerMask, MethodInfo* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		V_0 = (std::numeric_limits<float>::infinity());
		V_1 = (-std::numeric_limits<float>::infinity());
		float L_0 = ___distance;
		int32_t L_1 = ___layerMask;
		float L_2 = V_1;
		float L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Physics2D_t277_il2cpp_TypeInfo));
		RaycastHit2DU5BU5D_t280* L_4 = Physics2D_INTERNAL_CALL_RaycastAll_m2773(NULL /*static, unused*/, (&___origin), (&___direction), L_0, L_1, L_2, L_3, /*hidden argument*/&Physics2D_INTERNAL_CALL_RaycastAll_m2773_MethodInfo);
		return L_4;
	}
}
// UnityEngine.RaycastHit2D[] UnityEngine.Physics2D::INTERNAL_CALL_RaycastAll(UnityEngine.Vector2&,UnityEngine.Vector2&,System.Single,System.Int32,System.Single,System.Single)
extern "C" RaycastHit2DU5BU5D_t280* Physics2D_INTERNAL_CALL_RaycastAll_m2773 (Object_t * __this /* static, unused */, Vector2_t12 * ___origin, Vector2_t12 * ___direction, float ___distance, int32_t ___layerMask, float ___minDepth, float ___maxDepth, MethodInfo* method)
{
	typedef RaycastHit2DU5BU5D_t280* (*Physics2D_INTERNAL_CALL_RaycastAll_m2773_ftn) (Vector2_t12 *, Vector2_t12 *, float, int32_t, float, float);
	static Physics2D_INTERNAL_CALL_RaycastAll_m2773_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Physics2D_INTERNAL_CALL_RaycastAll_m2773_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Physics2D::INTERNAL_CALL_RaycastAll(UnityEngine.Vector2&,UnityEngine.Vector2&,System.Single,System.Int32,System.Single,System.Single)");
	return _il2cpp_icall_func(___origin, ___direction, ___distance, ___layerMask, ___minDepth, ___maxDepth);
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo RaycastHit2D_t281_il2cpp_TypeInfo;
// UnityEngine.RaycastHit2D
#include "UnityEngine_UnityEngine_RaycastHit2DMethodDeclarations.h"

// UnityEngine.Collider2D
#include "UnityEngine_UnityEngine_Collider2D.h"
// UnityEngine.Rigidbody2D
#include "UnityEngine_UnityEngine_Rigidbody2D.h"
// UnityEngine.Collider2D
#include "UnityEngine_UnityEngine_Collider2DMethodDeclarations.h"
extern MethodInfo RaycastHit2D_get_collider_m1428_MethodInfo;
extern MethodInfo Collider2D_get_attachedRigidbody_m2775_MethodInfo;
extern MethodInfo RaycastHit2D_get_rigidbody_m2774_MethodInfo;


// UnityEngine.Vector2 UnityEngine.RaycastHit2D::get_point()
extern MethodInfo RaycastHit2D_get_point_m1430_MethodInfo;
extern "C" Vector2_t12  RaycastHit2D_get_point_m1430 (RaycastHit2D_t281 * __this, MethodInfo* method)
{
	{
		Vector2_t12  L_0 = (__this->___m_Point_1);
		return L_0;
	}
}
// UnityEngine.Vector2 UnityEngine.RaycastHit2D::get_normal()
extern MethodInfo RaycastHit2D_get_normal_m1431_MethodInfo;
extern "C" Vector2_t12  RaycastHit2D_get_normal_m1431 (RaycastHit2D_t281 * __this, MethodInfo* method)
{
	{
		Vector2_t12  L_0 = (__this->___m_Normal_2);
		return L_0;
	}
}
// System.Single UnityEngine.RaycastHit2D::get_fraction()
extern MethodInfo RaycastHit2D_get_fraction_m1549_MethodInfo;
extern "C" float RaycastHit2D_get_fraction_m1549 (RaycastHit2D_t281 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Fraction_4);
		return L_0;
	}
}
// UnityEngine.Collider2D UnityEngine.RaycastHit2D::get_collider()
extern "C" Collider2D_t282 * RaycastHit2D_get_collider_m1428 (RaycastHit2D_t281 * __this, MethodInfo* method)
{
	{
		Collider2D_t282 * L_0 = (__this->___m_Collider_5);
		return L_0;
	}
}
// UnityEngine.Rigidbody2D UnityEngine.RaycastHit2D::get_rigidbody()
extern "C" Rigidbody2D_t532 * RaycastHit2D_get_rigidbody_m2774 (RaycastHit2D_t281 * __this, MethodInfo* method)
{
	Rigidbody2D_t532 * G_B3_0 = {0};
	{
		Collider2D_t282 * L_0 = RaycastHit2D_get_collider_m1428(__this, /*hidden argument*/&RaycastHit2D_get_collider_m1428_MethodInfo);
		bool L_1 = Object_op_Inequality_m1268(NULL /*static, unused*/, L_0, (Object_t20 *)NULL, /*hidden argument*/&Object_op_Inequality_m1268_MethodInfo);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		Collider2D_t282 * L_2 = RaycastHit2D_get_collider_m1428(__this, /*hidden argument*/&RaycastHit2D_get_collider_m1428_MethodInfo);
		NullCheck(L_2);
		Rigidbody2D_t532 * L_3 = Collider2D_get_attachedRigidbody_m2775(L_2, /*hidden argument*/&Collider2D_get_attachedRigidbody_m2775_MethodInfo);
		G_B3_0 = L_3;
		goto IL_0022;
	}

IL_0021:
	{
		G_B3_0 = ((Rigidbody2D_t532 *)(NULL));
	}

IL_0022:
	{
		return G_B3_0;
	}
}
// UnityEngine.Transform UnityEngine.RaycastHit2D::get_transform()
extern MethodInfo RaycastHit2D_get_transform_m1429_MethodInfo;
extern "C" Transform_t8 * RaycastHit2D_get_transform_m1429 (RaycastHit2D_t281 * __this, MethodInfo* method)
{
	Rigidbody2D_t532 * V_0 = {0};
	{
		Rigidbody2D_t532 * L_0 = RaycastHit2D_get_rigidbody_m2774(__this, /*hidden argument*/&RaycastHit2D_get_rigidbody_m2774_MethodInfo);
		V_0 = L_0;
		Rigidbody2D_t532 * L_1 = V_0;
		bool L_2 = Object_op_Inequality_m1268(NULL /*static, unused*/, L_1, (Object_t20 *)NULL, /*hidden argument*/&Object_op_Inequality_m1268_MethodInfo);
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		Rigidbody2D_t532 * L_3 = V_0;
		NullCheck(L_3);
		Transform_t8 * L_4 = Component_get_transform_m30(L_3, /*hidden argument*/&Component_get_transform_m30_MethodInfo);
		return L_4;
	}

IL_001a:
	{
		Collider2D_t282 * L_5 = RaycastHit2D_get_collider_m1428(__this, /*hidden argument*/&RaycastHit2D_get_collider_m1428_MethodInfo);
		bool L_6 = Object_op_Inequality_m1268(NULL /*static, unused*/, L_5, (Object_t20 *)NULL, /*hidden argument*/&Object_op_Inequality_m1268_MethodInfo);
		if (!L_6)
		{
			goto IL_0037;
		}
	}
	{
		Collider2D_t282 * L_7 = RaycastHit2D_get_collider_m1428(__this, /*hidden argument*/&RaycastHit2D_get_collider_m1428_MethodInfo);
		NullCheck(L_7);
		Transform_t8 * L_8 = Component_get_transform_m30(L_7, /*hidden argument*/&Component_get_transform_m30_MethodInfo);
		return L_8;
	}

IL_0037:
	{
		return (Transform_t8 *)NULL;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Rigidbody2D_t532_il2cpp_TypeInfo;
// UnityEngine.Rigidbody2D
#include "UnityEngine_UnityEngine_Rigidbody2DMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif
extern TypeInfo Collider2D_t282_il2cpp_TypeInfo;



// UnityEngine.Rigidbody2D UnityEngine.Collider2D::get_attachedRigidbody()
extern "C" Rigidbody2D_t532 * Collider2D_get_attachedRigidbody_m2775 (Collider2D_t282 * __this, MethodInfo* method)
{
	typedef Rigidbody2D_t532 * (*Collider2D_get_attachedRigidbody_m2775_ftn) (Collider2D_t282 *);
	static Collider2D_get_attachedRigidbody_m2775_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Collider2D_get_attachedRigidbody_m2775_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Collider2D::get_attachedRigidbody()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.AudioSettings/AudioConfigurationChangeHandler
#include "UnityEngine_UnityEngine_AudioSettings_AudioConfigurationChan.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo AudioConfigurationChangeHandler_t533_il2cpp_TypeInfo;
// UnityEngine.AudioSettings/AudioConfigurationChangeHandler
#include "UnityEngine_UnityEngine_AudioSettings_AudioConfigurationChanMethodDeclarations.h"

// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"


// System.Void UnityEngine.AudioSettings/AudioConfigurationChangeHandler::.ctor(System.Object,System.IntPtr)
extern MethodInfo AudioConfigurationChangeHandler__ctor_m2776_MethodInfo;
extern "C" void AudioConfigurationChangeHandler__ctor_m2776 (AudioConfigurationChangeHandler_t533 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.AudioSettings/AudioConfigurationChangeHandler::Invoke(System.Boolean)
extern MethodInfo AudioConfigurationChangeHandler_Invoke_m2777_MethodInfo;
extern "C" void AudioConfigurationChangeHandler_Invoke_m2777 (AudioConfigurationChangeHandler_t533 * __this, bool ___deviceWasChanged, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		AudioConfigurationChangeHandler_Invoke_m2777((AudioConfigurationChangeHandler_t533 *)__this->___prev_9,___deviceWasChanged, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, bool ___deviceWasChanged, MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___deviceWasChanged,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	typedef void (*FunctionPointerType) (Object_t * __this, bool ___deviceWasChanged, MethodInfo* method);
	((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___deviceWasChanged,(MethodInfo*)(__this->___method_3.___m_value_0));
}
extern "C" void pinvoke_delegate_wrapper_AudioConfigurationChangeHandler_t533(Il2CppObject* delegate, bool ___deviceWasChanged)
{
	typedef void (STDCALL *native_function_ptr_type)(int32_t);
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Marshaling of parameter '___deviceWasChanged' to native representation

	// Native function invocation
	_il2cpp_pinvoke_func(___deviceWasChanged);

	// Marshaling cleanup of parameter '___deviceWasChanged' native representation

}
// System.IAsyncResult UnityEngine.AudioSettings/AudioConfigurationChangeHandler::BeginInvoke(System.Boolean,System.AsyncCallback,System.Object)
extern MethodInfo AudioConfigurationChangeHandler_BeginInvoke_m2778_MethodInfo;
extern "C" Object_t * AudioConfigurationChangeHandler_BeginInvoke_m2778 (AudioConfigurationChangeHandler_t533 * __this, bool ___deviceWasChanged, AsyncCallback_t171 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = Box(InitializedTypeInfo(&Boolean_t13_il2cpp_TypeInfo), &___deviceWasChanged);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.AudioSettings/AudioConfigurationChangeHandler::EndInvoke(System.IAsyncResult)
extern MethodInfo AudioConfigurationChangeHandler_EndInvoke_m2779_MethodInfo;
extern "C" void AudioConfigurationChangeHandler_EndInvoke_m2779 (AudioConfigurationChangeHandler_t533 * __this, Object_t * ___result, MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// UnityEngine.AudioSettings
#include "UnityEngine_UnityEngine_AudioSettings.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo AudioSettings_t534_il2cpp_TypeInfo;
// UnityEngine.AudioSettings
#include "UnityEngine_UnityEngine_AudioSettingsMethodDeclarations.h"

extern TypeInfo Void_t18_il2cpp_TypeInfo;
extern TypeInfo Boolean_t13_il2cpp_TypeInfo;


// System.Void UnityEngine.AudioSettings::InvokeOnAudioConfigurationChanged(System.Boolean)
extern MethodInfo AudioSettings_InvokeOnAudioConfigurationChanged_m2780_MethodInfo;
extern "C" void AudioSettings_InvokeOnAudioConfigurationChanged_m2780 (AudioSettings_t534 * __this, bool ___deviceWasChanged, MethodInfo* method)
{
	{
		AudioConfigurationChangeHandler_t533 * L_0 = ((AudioSettings_t534_StaticFields*)InitializedTypeInfo(&AudioSettings_t534_il2cpp_TypeInfo)->static_fields)->___OnAudioConfigurationChanged_0;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		AudioConfigurationChangeHandler_t533 * L_1 = ((AudioSettings_t534_StaticFields*)InitializedTypeInfo(&AudioSettings_t534_il2cpp_TypeInfo)->static_fields)->___OnAudioConfigurationChanged_0;
		bool L_2 = ___deviceWasChanged;
		NullCheck(L_1);
		VirtActionInvoker1< bool >::Invoke(&AudioConfigurationChangeHandler_Invoke_m2777_MethodInfo, L_1, L_2);
	}

IL_0015:
	{
		return;
	}
}
// UnityEngine.AudioClip/PCMReaderCallback
#include "UnityEngine_UnityEngine_AudioClip_PCMReaderCallback.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo PCMReaderCallback_t536_il2cpp_TypeInfo;
// UnityEngine.AudioClip/PCMReaderCallback
#include "UnityEngine_UnityEngine_AudioClip_PCMReaderCallbackMethodDeclarations.h"

#include "mscorlib_ArrayTypes.h"


// System.Void UnityEngine.AudioClip/PCMReaderCallback::.ctor(System.Object,System.IntPtr)
extern MethodInfo PCMReaderCallback__ctor_m2781_MethodInfo;
extern "C" void PCMReaderCallback__ctor_m2781 (PCMReaderCallback_t536 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.AudioClip/PCMReaderCallback::Invoke(System.Single[])
extern MethodInfo PCMReaderCallback_Invoke_m2782_MethodInfo;
extern "C" void PCMReaderCallback_Invoke_m2782 (PCMReaderCallback_t536 * __this, SingleU5BU5D_t535* ___data, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		PCMReaderCallback_Invoke_m2782((PCMReaderCallback_t536 *)__this->___prev_9,___data, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, SingleU5BU5D_t535* ___data, MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___data,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t * __this, SingleU5BU5D_t535* ___data, MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___data,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(___data,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern TypeInfo Single_t23_il2cpp_TypeInfo;
extern "C" void pinvoke_delegate_wrapper_PCMReaderCallback_t536(Il2CppObject* delegate, SingleU5BU5D_t535* ___data)
{
	typedef void (STDCALL *native_function_ptr_type)(float*);
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Marshaling of parameter '___data' to native representation
	float* ____data_marshaled = { 0 };
	____data_marshaled = il2cpp_codegen_marshal_array<float>((Il2CppCodeGenArray*)___data);

	// Native function invocation
	_il2cpp_pinvoke_func(____data_marshaled);

	// Marshaling cleanup of parameter '___data' native representation

}
// System.IAsyncResult UnityEngine.AudioClip/PCMReaderCallback::BeginInvoke(System.Single[],System.AsyncCallback,System.Object)
extern MethodInfo PCMReaderCallback_BeginInvoke_m2783_MethodInfo;
extern "C" Object_t * PCMReaderCallback_BeginInvoke_m2783 (PCMReaderCallback_t536 * __this, SingleU5BU5D_t535* ___data, AsyncCallback_t171 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___data;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.AudioClip/PCMReaderCallback::EndInvoke(System.IAsyncResult)
extern MethodInfo PCMReaderCallback_EndInvoke_m2784_MethodInfo;
extern "C" void PCMReaderCallback_EndInvoke_m2784 (PCMReaderCallback_t536 * __this, Object_t * ___result, MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// UnityEngine.AudioClip/PCMSetPositionCallback
#include "UnityEngine_UnityEngine_AudioClip_PCMSetPositionCallback.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo PCMSetPositionCallback_t537_il2cpp_TypeInfo;
// UnityEngine.AudioClip/PCMSetPositionCallback
#include "UnityEngine_UnityEngine_AudioClip_PCMSetPositionCallbackMethodDeclarations.h"



// System.Void UnityEngine.AudioClip/PCMSetPositionCallback::.ctor(System.Object,System.IntPtr)
extern MethodInfo PCMSetPositionCallback__ctor_m2785_MethodInfo;
extern "C" void PCMSetPositionCallback__ctor_m2785 (PCMSetPositionCallback_t537 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.AudioClip/PCMSetPositionCallback::Invoke(System.Int32)
extern MethodInfo PCMSetPositionCallback_Invoke_m2786_MethodInfo;
extern "C" void PCMSetPositionCallback_Invoke_m2786 (PCMSetPositionCallback_t537 * __this, int32_t ___position, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		PCMSetPositionCallback_Invoke_m2786((PCMSetPositionCallback_t537 *)__this->___prev_9,___position, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, int32_t ___position, MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___position,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	typedef void (*FunctionPointerType) (Object_t * __this, int32_t ___position, MethodInfo* method);
	((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___position,(MethodInfo*)(__this->___method_3.___m_value_0));
}
extern "C" void pinvoke_delegate_wrapper_PCMSetPositionCallback_t537(Il2CppObject* delegate, int32_t ___position)
{
	typedef void (STDCALL *native_function_ptr_type)(int32_t);
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Marshaling of parameter '___position' to native representation

	// Native function invocation
	_il2cpp_pinvoke_func(___position);

	// Marshaling cleanup of parameter '___position' native representation

}
// System.IAsyncResult UnityEngine.AudioClip/PCMSetPositionCallback::BeginInvoke(System.Int32,System.AsyncCallback,System.Object)
extern MethodInfo PCMSetPositionCallback_BeginInvoke_m2787_MethodInfo;
extern "C" Object_t * PCMSetPositionCallback_BeginInvoke_m2787 (PCMSetPositionCallback_t537 * __this, int32_t ___position, AsyncCallback_t171 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = Box(InitializedTypeInfo(&Int32_t17_il2cpp_TypeInfo), &___position);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.AudioClip/PCMSetPositionCallback::EndInvoke(System.IAsyncResult)
extern MethodInfo PCMSetPositionCallback_EndInvoke_m2788_MethodInfo;
extern "C" void PCMSetPositionCallback_EndInvoke_m2788 (PCMSetPositionCallback_t537 * __this, Object_t * ___result, MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// UnityEngine.AudioClip
#include "UnityEngine_UnityEngine_AudioClip.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo AudioClip_t538_il2cpp_TypeInfo;
// UnityEngine.AudioClip
#include "UnityEngine_UnityEngine_AudioClipMethodDeclarations.h"

extern TypeInfo SingleU5BU5D_t535_il2cpp_TypeInfo;
extern TypeInfo Int32_t17_il2cpp_TypeInfo;


// System.Void UnityEngine.AudioClip::InvokePCMReaderCallback_Internal(System.Single[])
extern MethodInfo AudioClip_InvokePCMReaderCallback_Internal_m2789_MethodInfo;
extern "C" void AudioClip_InvokePCMReaderCallback_Internal_m2789 (AudioClip_t538 * __this, SingleU5BU5D_t535* ___data, MethodInfo* method)
{
	{
		PCMReaderCallback_t536 * L_0 = (__this->___m_PCMReaderCallback_2);
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		PCMReaderCallback_t536 * L_1 = (__this->___m_PCMReaderCallback_2);
		SingleU5BU5D_t535* L_2 = ___data;
		NullCheck(L_1);
		VirtActionInvoker1< SingleU5BU5D_t535* >::Invoke(&PCMReaderCallback_Invoke_m2782_MethodInfo, L_1, L_2);
	}

IL_0017:
	{
		return;
	}
}
// System.Void UnityEngine.AudioClip::InvokePCMSetPositionCallback_Internal(System.Int32)
extern MethodInfo AudioClip_InvokePCMSetPositionCallback_Internal_m2790_MethodInfo;
extern "C" void AudioClip_InvokePCMSetPositionCallback_Internal_m2790 (AudioClip_t538 * __this, int32_t ___position, MethodInfo* method)
{
	{
		PCMSetPositionCallback_t537 * L_0 = (__this->___m_PCMSetPositionCallback_3);
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		PCMSetPositionCallback_t537 * L_1 = (__this->___m_PCMSetPositionCallback_3);
		int32_t L_2 = ___position;
		NullCheck(L_1);
		VirtActionInvoker1< int32_t >::Invoke(&PCMSetPositionCallback_Invoke_m2786_MethodInfo, L_1, L_2);
	}

IL_0017:
	{
		return;
	}
}
// UnityEngine.WebCamDevice
#include "UnityEngine_UnityEngine_WebCamDevice.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo WebCamDevice_t539_il2cpp_TypeInfo;
// UnityEngine.WebCamDevice
#include "UnityEngine_UnityEngine_WebCamDeviceMethodDeclarations.h"



// System.String UnityEngine.WebCamDevice::get_name()
extern MethodInfo WebCamDevice_get_name_m2791_MethodInfo;
extern "C" String_t* WebCamDevice_get_name_m2791 (WebCamDevice_t539 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_Name_0);
		return L_0;
	}
}
// System.Boolean UnityEngine.WebCamDevice::get_isFrontFacing()
extern MethodInfo WebCamDevice_get_isFrontFacing_m2792_MethodInfo;
extern "C" bool WebCamDevice_get_isFrontFacing_m2792 (WebCamDevice_t539 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Flags_1);
		return ((((int32_t)((int32_t)((int32_t)L_0&(int32_t)1))) == ((int32_t)1))? 1 : 0);
	}
}
// Conversion methods for marshalling of: UnityEngine.WebCamDevice
void WebCamDevice_t539_marshal(const WebCamDevice_t539& unmarshaled, WebCamDevice_t539_marshaled& marshaled)
{
	marshaled.___m_Name_0 = il2cpp_codegen_marshal_string(unmarshaled.___m_Name_0);
	marshaled.___m_Flags_1 = unmarshaled.___m_Flags_1;
}
void WebCamDevice_t539_marshal_back(const WebCamDevice_t539_marshaled& marshaled, WebCamDevice_t539& unmarshaled)
{
	unmarshaled.___m_Name_0 = il2cpp_codegen_marshal_string_result(marshaled.___m_Name_0);
	unmarshaled.___m_Flags_1 = marshaled.___m_Flags_1;
}
// Conversion method for clean up from marshalling of: UnityEngine.WebCamDevice
void WebCamDevice_t539_marshal_cleanup(WebCamDevice_t539_marshaled& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___m_Name_0);
	marshaled.___m_Name_0 = NULL;
}
// UnityEngine.AnimationEventSource
#include "UnityEngine_UnityEngine_AnimationEventSource.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo AnimationEventSource_t540_il2cpp_TypeInfo;
// UnityEngine.AnimationEventSource
#include "UnityEngine_UnityEngine_AnimationEventSourceMethodDeclarations.h"



// UnityEngine.AnimationEvent
#include "UnityEngine_UnityEngine_AnimationEvent.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo AnimationEvent_t542_il2cpp_TypeInfo;
// UnityEngine.AnimationEvent
#include "UnityEngine_UnityEngine_AnimationEventMethodDeclarations.h"

// UnityEngine.AnimationState
#include "UnityEngine_UnityEngine_AnimationState.h"
// UnityEngine.AnimatorStateInfo
#include "UnityEngine_UnityEngine_AnimatorStateInfo.h"
// UnityEngine.AnimatorClipInfo
#include "UnityEngine_UnityEngine_AnimatorClipInfo.h"
// System.Single
#include "mscorlib_System_SingleMethodDeclarations.h"
extern MethodInfo AnimationEvent_get_isFiredByLegacy_m2810_MethodInfo;
extern MethodInfo Debug_LogError_m1266_MethodInfo;
extern MethodInfo AnimationEvent_get_isFiredByAnimator_m2811_MethodInfo;
extern MethodInfo AnimationEvent_get_functionName_m2804_MethodInfo;
extern MethodInfo String_GetHashCode_m3335_MethodInfo;
extern MethodInfo AnimationEvent_get_time_m2806_MethodInfo;
extern MethodInfo Single_GetHashCode_m3333_MethodInfo;


// System.Void UnityEngine.AnimationEvent::.ctor()
extern MethodInfo AnimationEvent__ctor_m2793_MethodInfo;
extern "C" void AnimationEvent__ctor_m2793 (AnimationEvent_t542 * __this, MethodInfo* method)
{
	{
		Object__ctor_m1289(__this, /*hidden argument*/&Object__ctor_m1289_MethodInfo);
		__this->___m_Time_0 = (0.0f);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_0 = ((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2;
		__this->___m_FunctionName_1 = L_0;
		String_t* L_1 = ((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2;
		__this->___m_StringParameter_2 = L_1;
		__this->___m_ObjectReferenceParameter_3 = (Object_t20 *)NULL;
		__this->___m_FloatParameter_4 = (0.0f);
		__this->___m_IntParameter_5 = 0;
		__this->___m_MessageOptions_6 = 0;
		__this->___m_Source_7 = 0;
		__this->___m_StateSender_8 = (AnimationState_t541 *)NULL;
		return;
	}
}
// System.String UnityEngine.AnimationEvent::get_data()
extern MethodInfo AnimationEvent_get_data_m2794_MethodInfo;
extern "C" String_t* AnimationEvent_get_data_m2794 (AnimationEvent_t542 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_StringParameter_2);
		return L_0;
	}
}
// System.Void UnityEngine.AnimationEvent::set_data(System.String)
extern MethodInfo AnimationEvent_set_data_m2795_MethodInfo;
extern "C" void AnimationEvent_set_data_m2795 (AnimationEvent_t542 * __this, String_t* ___value, MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___m_StringParameter_2 = L_0;
		return;
	}
}
// System.String UnityEngine.AnimationEvent::get_stringParameter()
extern MethodInfo AnimationEvent_get_stringParameter_m2796_MethodInfo;
extern "C" String_t* AnimationEvent_get_stringParameter_m2796 (AnimationEvent_t542 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_StringParameter_2);
		return L_0;
	}
}
// System.Void UnityEngine.AnimationEvent::set_stringParameter(System.String)
extern MethodInfo AnimationEvent_set_stringParameter_m2797_MethodInfo;
extern "C" void AnimationEvent_set_stringParameter_m2797 (AnimationEvent_t542 * __this, String_t* ___value, MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___m_StringParameter_2 = L_0;
		return;
	}
}
// System.Single UnityEngine.AnimationEvent::get_floatParameter()
extern MethodInfo AnimationEvent_get_floatParameter_m2798_MethodInfo;
extern "C" float AnimationEvent_get_floatParameter_m2798 (AnimationEvent_t542 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->___m_FloatParameter_4);
		return L_0;
	}
}
// System.Void UnityEngine.AnimationEvent::set_floatParameter(System.Single)
extern MethodInfo AnimationEvent_set_floatParameter_m2799_MethodInfo;
extern "C" void AnimationEvent_set_floatParameter_m2799 (AnimationEvent_t542 * __this, float ___value, MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___m_FloatParameter_4 = L_0;
		return;
	}
}
// System.Int32 UnityEngine.AnimationEvent::get_intParameter()
extern MethodInfo AnimationEvent_get_intParameter_m2800_MethodInfo;
extern "C" int32_t AnimationEvent_get_intParameter_m2800 (AnimationEvent_t542 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_IntParameter_5);
		return L_0;
	}
}
// System.Void UnityEngine.AnimationEvent::set_intParameter(System.Int32)
extern MethodInfo AnimationEvent_set_intParameter_m2801_MethodInfo;
extern "C" void AnimationEvent_set_intParameter_m2801 (AnimationEvent_t542 * __this, int32_t ___value, MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___m_IntParameter_5 = L_0;
		return;
	}
}
// UnityEngine.Object UnityEngine.AnimationEvent::get_objectReferenceParameter()
extern MethodInfo AnimationEvent_get_objectReferenceParameter_m2802_MethodInfo;
extern "C" Object_t20 * AnimationEvent_get_objectReferenceParameter_m2802 (AnimationEvent_t542 * __this, MethodInfo* method)
{
	{
		Object_t20 * L_0 = (__this->___m_ObjectReferenceParameter_3);
		return L_0;
	}
}
// System.Void UnityEngine.AnimationEvent::set_objectReferenceParameter(UnityEngine.Object)
extern MethodInfo AnimationEvent_set_objectReferenceParameter_m2803_MethodInfo;
extern "C" void AnimationEvent_set_objectReferenceParameter_m2803 (AnimationEvent_t542 * __this, Object_t20 * ___value, MethodInfo* method)
{
	{
		Object_t20 * L_0 = ___value;
		__this->___m_ObjectReferenceParameter_3 = L_0;
		return;
	}
}
// System.String UnityEngine.AnimationEvent::get_functionName()
extern "C" String_t* AnimationEvent_get_functionName_m2804 (AnimationEvent_t542 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_FunctionName_1);
		return L_0;
	}
}
// System.Void UnityEngine.AnimationEvent::set_functionName(System.String)
extern MethodInfo AnimationEvent_set_functionName_m2805_MethodInfo;
extern "C" void AnimationEvent_set_functionName_m2805 (AnimationEvent_t542 * __this, String_t* ___value, MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___m_FunctionName_1 = L_0;
		return;
	}
}
// System.Single UnityEngine.AnimationEvent::get_time()
extern "C" float AnimationEvent_get_time_m2806 (AnimationEvent_t542 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Time_0);
		return L_0;
	}
}
// System.Void UnityEngine.AnimationEvent::set_time(System.Single)
extern MethodInfo AnimationEvent_set_time_m2807_MethodInfo;
extern "C" void AnimationEvent_set_time_m2807 (AnimationEvent_t542 * __this, float ___value, MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___m_Time_0 = L_0;
		return;
	}
}
// UnityEngine.SendMessageOptions UnityEngine.AnimationEvent::get_messageOptions()
extern MethodInfo AnimationEvent_get_messageOptions_m2808_MethodInfo;
extern "C" int32_t AnimationEvent_get_messageOptions_m2808 (AnimationEvent_t542 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_MessageOptions_6);
		return (int32_t)(L_0);
	}
}
// System.Void UnityEngine.AnimationEvent::set_messageOptions(UnityEngine.SendMessageOptions)
extern MethodInfo AnimationEvent_set_messageOptions_m2809_MethodInfo;
extern "C" void AnimationEvent_set_messageOptions_m2809 (AnimationEvent_t542 * __this, int32_t ___value, MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___m_MessageOptions_6 = L_0;
		return;
	}
}
// System.Boolean UnityEngine.AnimationEvent::get_isFiredByLegacy()
extern "C" bool AnimationEvent_get_isFiredByLegacy_m2810 (AnimationEvent_t542 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Source_7);
		return ((((int32_t)L_0) == ((int32_t)1))? 1 : 0);
	}
}
// System.Boolean UnityEngine.AnimationEvent::get_isFiredByAnimator()
extern "C" bool AnimationEvent_get_isFiredByAnimator_m2811 (AnimationEvent_t542 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Source_7);
		return ((((int32_t)L_0) == ((int32_t)2))? 1 : 0);
	}
}
// UnityEngine.AnimationState UnityEngine.AnimationEvent::get_animationState()
extern MethodInfo AnimationEvent_get_animationState_m2812_MethodInfo;
extern "C" AnimationState_t541 * AnimationEvent_get_animationState_m2812 (AnimationEvent_t542 * __this, MethodInfo* method)
{
	{
		bool L_0 = AnimationEvent_get_isFiredByLegacy_m2810(__this, /*hidden argument*/&AnimationEvent_get_isFiredByLegacy_m2810_MethodInfo);
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		Debug_LogError_m1266(NULL /*static, unused*/, (String_t*) &_stringLiteral185, /*hidden argument*/&Debug_LogError_m1266_MethodInfo);
	}

IL_0015:
	{
		AnimationState_t541 * L_1 = (__this->___m_StateSender_8);
		return L_1;
	}
}
// UnityEngine.AnimatorStateInfo UnityEngine.AnimationEvent::get_animatorStateInfo()
extern MethodInfo AnimationEvent_get_animatorStateInfo_m2813_MethodInfo;
extern "C" AnimatorStateInfo_t543  AnimationEvent_get_animatorStateInfo_m2813 (AnimationEvent_t542 * __this, MethodInfo* method)
{
	{
		bool L_0 = AnimationEvent_get_isFiredByAnimator_m2811(__this, /*hidden argument*/&AnimationEvent_get_isFiredByAnimator_m2811_MethodInfo);
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		Debug_LogError_m1266(NULL /*static, unused*/, (String_t*) &_stringLiteral186, /*hidden argument*/&Debug_LogError_m1266_MethodInfo);
	}

IL_0015:
	{
		AnimatorStateInfo_t543  L_1 = (__this->___m_AnimatorStateInfo_9);
		return L_1;
	}
}
// UnityEngine.AnimatorClipInfo UnityEngine.AnimationEvent::get_animatorClipInfo()
extern MethodInfo AnimationEvent_get_animatorClipInfo_m2814_MethodInfo;
extern "C" AnimatorClipInfo_t544  AnimationEvent_get_animatorClipInfo_m2814 (AnimationEvent_t542 * __this, MethodInfo* method)
{
	{
		bool L_0 = AnimationEvent_get_isFiredByAnimator_m2811(__this, /*hidden argument*/&AnimationEvent_get_isFiredByAnimator_m2811_MethodInfo);
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		Debug_LogError_m1266(NULL /*static, unused*/, (String_t*) &_stringLiteral187, /*hidden argument*/&Debug_LogError_m1266_MethodInfo);
	}

IL_0015:
	{
		AnimatorClipInfo_t544  L_1 = (__this->___m_AnimatorClipInfo_10);
		return L_1;
	}
}
// System.Int32 UnityEngine.AnimationEvent::GetHash()
extern MethodInfo AnimationEvent_GetHash_m2815_MethodInfo;
extern "C" int32_t AnimationEvent_GetHash_m2815 (AnimationEvent_t542 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	{
		V_0 = 0;
		String_t* L_0 = AnimationEvent_get_functionName_m2804(__this, /*hidden argument*/&AnimationEvent_get_functionName_m2804_MethodInfo);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&String_GetHashCode_m3335_MethodInfo, L_0);
		V_0 = L_1;
		int32_t L_2 = V_0;
		float L_3 = AnimationEvent_get_time_m2806(__this, /*hidden argument*/&AnimationEvent_get_time_m2806_MethodInfo);
		V_1 = L_3;
		int32_t L_4 = Single_GetHashCode_m3333((&V_1), /*hidden argument*/&Single_GetHashCode_m3333_MethodInfo);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)33)*(int32_t)L_2))+(int32_t)L_4));
		int32_t L_5 = V_0;
		return L_5;
	}
}
// UnityEngine.Keyframe
#include "UnityEngine_UnityEngine_Keyframe.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Keyframe_t545_il2cpp_TypeInfo;
// UnityEngine.Keyframe
#include "UnityEngine_UnityEngine_KeyframeMethodDeclarations.h"



// UnityEngine.AnimationCurve
#include "UnityEngine_UnityEngine_AnimationCurve.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo AnimationCurve_t546_il2cpp_TypeInfo;
// UnityEngine.AnimationCurve
#include "UnityEngine_UnityEngine_AnimationCurveMethodDeclarations.h"

extern TypeInfo Object_t_il2cpp_TypeInfo;
extern MethodInfo AnimationCurve_Init_m2820_MethodInfo;
extern MethodInfo AnimationCurve_Cleanup_m2818_MethodInfo;
extern MethodInfo Object_Finalize_m67_MethodInfo;


// System.Void UnityEngine.AnimationCurve::.ctor(UnityEngine.Keyframe[])
extern MethodInfo AnimationCurve__ctor_m2816_MethodInfo;
extern "C" void AnimationCurve__ctor_m2816 (AnimationCurve_t546 * __this, KeyframeU5BU5D_t547* ___keys, MethodInfo* method)
{
	{
		Object__ctor_m1289(__this, /*hidden argument*/&Object__ctor_m1289_MethodInfo);
		KeyframeU5BU5D_t547* L_0 = ___keys;
		AnimationCurve_Init_m2820(__this, L_0, /*hidden argument*/&AnimationCurve_Init_m2820_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.AnimationCurve::.ctor()
extern MethodInfo AnimationCurve__ctor_m2817_MethodInfo;
extern "C" void AnimationCurve__ctor_m2817 (AnimationCurve_t546 * __this, MethodInfo* method)
{
	{
		Object__ctor_m1289(__this, /*hidden argument*/&Object__ctor_m1289_MethodInfo);
		AnimationCurve_Init_m2820(__this, (KeyframeU5BU5D_t547*)(KeyframeU5BU5D_t547*)NULL, /*hidden argument*/&AnimationCurve_Init_m2820_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.AnimationCurve::Cleanup()
extern "C" void AnimationCurve_Cleanup_m2818 (AnimationCurve_t546 * __this, MethodInfo* method)
{
	typedef void (*AnimationCurve_Cleanup_m2818_ftn) (AnimationCurve_t546 *);
	static AnimationCurve_Cleanup_m2818_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationCurve_Cleanup_m2818_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationCurve::Cleanup()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.AnimationCurve::Finalize()
extern MethodInfo AnimationCurve_Finalize_m2819_MethodInfo;
extern "C" void AnimationCurve_Finalize_m2819 (AnimationCurve_t546 * __this, MethodInfo* method)
{
	Exception_t275 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t275 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		AnimationCurve_Cleanup_m2818(__this, /*hidden argument*/&AnimationCurve_Cleanup_m2818_MethodInfo);
		IL2CPP_LEAVE(0x12, FINALLY_000b);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t275 *)e.ex;
		goto FINALLY_000b;
	}

FINALLY_000b:
	{ // begin finally (depth: 1)
		Object_Finalize_m67(__this, /*hidden argument*/&Object_Finalize_m67_MethodInfo);
		IL2CPP_END_FINALLY(11)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(11)
	{
		IL2CPP_JUMP_TBL(0x12, IL_0012)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t275 *)
	}

IL_0012:
	{
		return;
	}
}
// System.Void UnityEngine.AnimationCurve::Init(UnityEngine.Keyframe[])
extern "C" void AnimationCurve_Init_m2820 (AnimationCurve_t546 * __this, KeyframeU5BU5D_t547* ___keys, MethodInfo* method)
{
	typedef void (*AnimationCurve_Init_m2820_ftn) (AnimationCurve_t546 *, KeyframeU5BU5D_t547*);
	static AnimationCurve_Init_m2820_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationCurve_Init_m2820_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationCurve::Init(UnityEngine.Keyframe[])");
	_il2cpp_icall_func(__this, ___keys);
}
// Conversion methods for marshalling of: UnityEngine.AnimationCurve
void AnimationCurve_t546_marshal(const AnimationCurve_t546& unmarshaled, AnimationCurve_t546_marshaled& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.___m_Ptr_0;
}
void AnimationCurve_t546_marshal_back(const AnimationCurve_t546_marshaled& marshaled, AnimationCurve_t546& unmarshaled)
{
	unmarshaled.___m_Ptr_0 = marshaled.___m_Ptr_0;
}
// Conversion method for clean up from marshalling of: UnityEngine.AnimationCurve
void AnimationCurve_t546_marshal_cleanup(AnimationCurve_t546_marshaled& marshaled)
{
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo AnimationState_t541_il2cpp_TypeInfo;
// UnityEngine.AnimationState
#include "UnityEngine_UnityEngine_AnimationStateMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif
extern TypeInfo AnimatorClipInfo_t544_il2cpp_TypeInfo;
// UnityEngine.AnimatorClipInfo
#include "UnityEngine_UnityEngine_AnimatorClipInfoMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif
extern TypeInfo AnimatorStateInfo_t543_il2cpp_TypeInfo;
// UnityEngine.AnimatorStateInfo
#include "UnityEngine_UnityEngine_AnimatorStateInfoMethodDeclarations.h"

// UnityEngine.Animator
#include "UnityEngine_UnityEngine_AnimatorMethodDeclarations.h"
extern MethodInfo Animator_StringToHash_m2839_MethodInfo;


// System.Boolean UnityEngine.AnimatorStateInfo::IsName(System.String)
extern MethodInfo AnimatorStateInfo_IsName_m2821_MethodInfo;
extern "C" bool AnimatorStateInfo_IsName_m2821 (AnimatorStateInfo_t543 * __this, String_t* ___name, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B4_0 = 0;
	{
		String_t* L_0 = ___name;
		int32_t L_1 = Animator_StringToHash_m2839(NULL /*static, unused*/, L_0, /*hidden argument*/&Animator_StringToHash_m2839_MethodInfo);
		V_0 = L_1;
		int32_t L_2 = V_0;
		int32_t L_3 = (__this->___m_FullPath_2);
		if ((((int32_t)L_2) == ((int32_t)L_3)))
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_4 = V_0;
		int32_t L_5 = (__this->___m_Name_0);
		if ((((int32_t)L_4) == ((int32_t)L_5)))
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_6 = V_0;
		int32_t L_7 = (__this->___m_Path_1);
		G_B4_0 = ((((int32_t)L_6) == ((int32_t)L_7))? 1 : 0);
		goto IL_002b;
	}

IL_002a:
	{
		G_B4_0 = 1;
	}

IL_002b:
	{
		return G_B4_0;
	}
}
// System.Int32 UnityEngine.AnimatorStateInfo::get_fullPathHash()
extern MethodInfo AnimatorStateInfo_get_fullPathHash_m2822_MethodInfo;
extern "C" int32_t AnimatorStateInfo_get_fullPathHash_m2822 (AnimatorStateInfo_t543 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_FullPath_2);
		return L_0;
	}
}
// System.Int32 UnityEngine.AnimatorStateInfo::get_nameHash()
extern MethodInfo AnimatorStateInfo_get_nameHash_m2823_MethodInfo;
extern "C" int32_t AnimatorStateInfo_get_nameHash_m2823 (AnimatorStateInfo_t543 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Path_1);
		return L_0;
	}
}
// System.Int32 UnityEngine.AnimatorStateInfo::get_shortNameHash()
extern MethodInfo AnimatorStateInfo_get_shortNameHash_m2824_MethodInfo;
extern "C" int32_t AnimatorStateInfo_get_shortNameHash_m2824 (AnimatorStateInfo_t543 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Name_0);
		return L_0;
	}
}
// System.Single UnityEngine.AnimatorStateInfo::get_normalizedTime()
extern MethodInfo AnimatorStateInfo_get_normalizedTime_m2825_MethodInfo;
extern "C" float AnimatorStateInfo_get_normalizedTime_m2825 (AnimatorStateInfo_t543 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->___m_NormalizedTime_3);
		return L_0;
	}
}
// System.Single UnityEngine.AnimatorStateInfo::get_length()
extern MethodInfo AnimatorStateInfo_get_length_m2826_MethodInfo;
extern "C" float AnimatorStateInfo_get_length_m2826 (AnimatorStateInfo_t543 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Length_4);
		return L_0;
	}
}
// System.Int32 UnityEngine.AnimatorStateInfo::get_tagHash()
extern MethodInfo AnimatorStateInfo_get_tagHash_m2827_MethodInfo;
extern "C" int32_t AnimatorStateInfo_get_tagHash_m2827 (AnimatorStateInfo_t543 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Tag_5);
		return L_0;
	}
}
// System.Boolean UnityEngine.AnimatorStateInfo::IsTag(System.String)
extern MethodInfo AnimatorStateInfo_IsTag_m2828_MethodInfo;
extern "C" bool AnimatorStateInfo_IsTag_m2828 (AnimatorStateInfo_t543 * __this, String_t* ___tag, MethodInfo* method)
{
	{
		String_t* L_0 = ___tag;
		int32_t L_1 = Animator_StringToHash_m2839(NULL /*static, unused*/, L_0, /*hidden argument*/&Animator_StringToHash_m2839_MethodInfo);
		int32_t L_2 = (__this->___m_Tag_5);
		return ((((int32_t)L_1) == ((int32_t)L_2))? 1 : 0);
	}
}
// System.Boolean UnityEngine.AnimatorStateInfo::get_loop()
extern MethodInfo AnimatorStateInfo_get_loop_m2829_MethodInfo;
extern "C" bool AnimatorStateInfo_get_loop_m2829 (AnimatorStateInfo_t543 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Loop_6);
		return ((((int32_t)((((int32_t)L_0) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// UnityEngine.AnimatorTransitionInfo
#include "UnityEngine_UnityEngine_AnimatorTransitionInfo.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo AnimatorTransitionInfo_t549_il2cpp_TypeInfo;
// UnityEngine.AnimatorTransitionInfo
#include "UnityEngine_UnityEngine_AnimatorTransitionInfoMethodDeclarations.h"



// System.Boolean UnityEngine.AnimatorTransitionInfo::IsName(System.String)
extern MethodInfo AnimatorTransitionInfo_IsName_m2830_MethodInfo;
extern "C" bool AnimatorTransitionInfo_IsName_m2830 (AnimatorTransitionInfo_t549 * __this, String_t* ___name, MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		String_t* L_0 = ___name;
		int32_t L_1 = Animator_StringToHash_m2839(NULL /*static, unused*/, L_0, /*hidden argument*/&Animator_StringToHash_m2839_MethodInfo);
		int32_t L_2 = (__this->___m_Name_2);
		if ((((int32_t)L_1) == ((int32_t)L_2)))
		{
			goto IL_0021;
		}
	}
	{
		String_t* L_3 = ___name;
		int32_t L_4 = Animator_StringToHash_m2839(NULL /*static, unused*/, L_3, /*hidden argument*/&Animator_StringToHash_m2839_MethodInfo);
		int32_t L_5 = (__this->___m_FullPath_0);
		G_B3_0 = ((((int32_t)L_4) == ((int32_t)L_5))? 1 : 0);
		goto IL_0022;
	}

IL_0021:
	{
		G_B3_0 = 1;
	}

IL_0022:
	{
		return G_B3_0;
	}
}
// System.Boolean UnityEngine.AnimatorTransitionInfo::IsUserName(System.String)
extern MethodInfo AnimatorTransitionInfo_IsUserName_m2831_MethodInfo;
extern "C" bool AnimatorTransitionInfo_IsUserName_m2831 (AnimatorTransitionInfo_t549 * __this, String_t* ___name, MethodInfo* method)
{
	{
		String_t* L_0 = ___name;
		int32_t L_1 = Animator_StringToHash_m2839(NULL /*static, unused*/, L_0, /*hidden argument*/&Animator_StringToHash_m2839_MethodInfo);
		int32_t L_2 = (__this->___m_UserName_1);
		return ((((int32_t)L_1) == ((int32_t)L_2))? 1 : 0);
	}
}
// System.Int32 UnityEngine.AnimatorTransitionInfo::get_fullPathHash()
extern MethodInfo AnimatorTransitionInfo_get_fullPathHash_m2832_MethodInfo;
extern "C" int32_t AnimatorTransitionInfo_get_fullPathHash_m2832 (AnimatorTransitionInfo_t549 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_FullPath_0);
		return L_0;
	}
}
// System.Int32 UnityEngine.AnimatorTransitionInfo::get_nameHash()
extern MethodInfo AnimatorTransitionInfo_get_nameHash_m2833_MethodInfo;
extern "C" int32_t AnimatorTransitionInfo_get_nameHash_m2833 (AnimatorTransitionInfo_t549 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Name_2);
		return L_0;
	}
}
// System.Int32 UnityEngine.AnimatorTransitionInfo::get_userNameHash()
extern MethodInfo AnimatorTransitionInfo_get_userNameHash_m2834_MethodInfo;
extern "C" int32_t AnimatorTransitionInfo_get_userNameHash_m2834 (AnimatorTransitionInfo_t549 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_UserName_1);
		return L_0;
	}
}
// System.Single UnityEngine.AnimatorTransitionInfo::get_normalizedTime()
extern MethodInfo AnimatorTransitionInfo_get_normalizedTime_m2835_MethodInfo;
extern "C" float AnimatorTransitionInfo_get_normalizedTime_m2835 (AnimatorTransitionInfo_t549 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->___m_NormalizedTime_3);
		return L_0;
	}
}
// System.Boolean UnityEngine.AnimatorTransitionInfo::get_anyState()
extern MethodInfo AnimatorTransitionInfo_get_anyState_m2836_MethodInfo;
extern "C" bool AnimatorTransitionInfo_get_anyState_m2836 (AnimatorTransitionInfo_t549 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_AnyState_4);
		return L_0;
	}
}
// System.Boolean UnityEngine.AnimatorTransitionInfo::get_entry()
extern MethodInfo AnimatorTransitionInfo_get_entry_m2837_MethodInfo;
extern "C" bool AnimatorTransitionInfo_get_entry_m2837 (AnimatorTransitionInfo_t549 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_TransitionType_5);
		return ((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)2))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean UnityEngine.AnimatorTransitionInfo::get_exit()
extern MethodInfo AnimatorTransitionInfo_get_exit_m2838_MethodInfo;
extern "C" bool AnimatorTransitionInfo_get_exit_m2838 (AnimatorTransitionInfo_t549 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_TransitionType_5);
		return ((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)4))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// Conversion methods for marshalling of: UnityEngine.AnimatorTransitionInfo
void AnimatorTransitionInfo_t549_marshal(const AnimatorTransitionInfo_t549& unmarshaled, AnimatorTransitionInfo_t549_marshaled& marshaled)
{
	marshaled.___m_FullPath_0 = unmarshaled.___m_FullPath_0;
	marshaled.___m_UserName_1 = unmarshaled.___m_UserName_1;
	marshaled.___m_Name_2 = unmarshaled.___m_Name_2;
	marshaled.___m_NormalizedTime_3 = unmarshaled.___m_NormalizedTime_3;
	marshaled.___m_AnyState_4 = unmarshaled.___m_AnyState_4;
	marshaled.___m_TransitionType_5 = unmarshaled.___m_TransitionType_5;
}
void AnimatorTransitionInfo_t549_marshal_back(const AnimatorTransitionInfo_t549_marshaled& marshaled, AnimatorTransitionInfo_t549& unmarshaled)
{
	unmarshaled.___m_FullPath_0 = marshaled.___m_FullPath_0;
	unmarshaled.___m_UserName_1 = marshaled.___m_UserName_1;
	unmarshaled.___m_Name_2 = marshaled.___m_Name_2;
	unmarshaled.___m_NormalizedTime_3 = marshaled.___m_NormalizedTime_3;
	unmarshaled.___m_AnyState_4 = marshaled.___m_AnyState_4;
	unmarshaled.___m_TransitionType_5 = marshaled.___m_TransitionType_5;
}
// Conversion method for clean up from marshalling of: UnityEngine.AnimatorTransitionInfo
void AnimatorTransitionInfo_t549_marshal_cleanup(AnimatorTransitionInfo_t549_marshaled& marshaled)
{
}
// UnityEngine.Animator
#include "UnityEngine_UnityEngine_Animator.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Animator_t207_il2cpp_TypeInfo;

// UnityEngine.RuntimeAnimatorController
#include "UnityEngine_UnityEngine_RuntimeAnimatorController.h"
extern MethodInfo Animator_SetTriggerString_m2840_MethodInfo;
extern MethodInfo Animator_ResetTriggerString_m2841_MethodInfo;


// System.Void UnityEngine.Animator::SetTrigger(System.String)
extern MethodInfo Animator_SetTrigger_m1807_MethodInfo;
extern "C" void Animator_SetTrigger_m1807 (Animator_t207 * __this, String_t* ___name, MethodInfo* method)
{
	{
		String_t* L_0 = ___name;
		Animator_SetTriggerString_m2840(__this, L_0, /*hidden argument*/&Animator_SetTriggerString_m2840_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Animator::ResetTrigger(System.String)
extern MethodInfo Animator_ResetTrigger_m1806_MethodInfo;
extern "C" void Animator_ResetTrigger_m1806 (Animator_t207 * __this, String_t* ___name, MethodInfo* method)
{
	{
		String_t* L_0 = ___name;
		Animator_ResetTriggerString_m2841(__this, L_0, /*hidden argument*/&Animator_ResetTriggerString_m2841_MethodInfo);
		return;
	}
}
// UnityEngine.RuntimeAnimatorController UnityEngine.Animator::get_runtimeAnimatorController()
extern MethodInfo Animator_get_runtimeAnimatorController_m1805_MethodInfo;
extern "C" RuntimeAnimatorController_t315 * Animator_get_runtimeAnimatorController_m1805 (Animator_t207 * __this, MethodInfo* method)
{
	typedef RuntimeAnimatorController_t315 * (*Animator_get_runtimeAnimatorController_m1805_ftn) (Animator_t207 *);
	static Animator_get_runtimeAnimatorController_m1805_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_runtimeAnimatorController_m1805_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_runtimeAnimatorController()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.Animator::StringToHash(System.String)
extern "C" int32_t Animator_StringToHash_m2839 (Object_t * __this /* static, unused */, String_t* ___name, MethodInfo* method)
{
	typedef int32_t (*Animator_StringToHash_m2839_ftn) (String_t*);
	static Animator_StringToHash_m2839_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_StringToHash_m2839_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::StringToHash(System.String)");
	return _il2cpp_icall_func(___name);
}
// System.Void UnityEngine.Animator::SetTriggerString(System.String)
extern "C" void Animator_SetTriggerString_m2840 (Animator_t207 * __this, String_t* ___name, MethodInfo* method)
{
	typedef void (*Animator_SetTriggerString_m2840_ftn) (Animator_t207 *, String_t*);
	static Animator_SetTriggerString_m2840_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_SetTriggerString_m2840_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::SetTriggerString(System.String)");
	_il2cpp_icall_func(__this, ___name);
}
// System.Void UnityEngine.Animator::ResetTriggerString(System.String)
extern "C" void Animator_ResetTriggerString_m2841 (Animator_t207 * __this, String_t* ___name, MethodInfo* method)
{
	typedef void (*Animator_ResetTriggerString_m2841_ftn) (Animator_t207 *, String_t*);
	static Animator_ResetTriggerString_m2841_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_ResetTriggerString_m2841_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::ResetTriggerString(System.String)");
	_il2cpp_icall_func(__this, ___name);
}
// UnityEngine.SkeletonBone
#include "UnityEngine_UnityEngine_SkeletonBone.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo SkeletonBone_t550_il2cpp_TypeInfo;
// UnityEngine.SkeletonBone
#include "UnityEngine_UnityEngine_SkeletonBoneMethodDeclarations.h"



// Conversion methods for marshalling of: UnityEngine.SkeletonBone
void SkeletonBone_t550_marshal(const SkeletonBone_t550& unmarshaled, SkeletonBone_t550_marshaled& marshaled)
{
	marshaled.___name_0 = il2cpp_codegen_marshal_string(unmarshaled.___name_0);
	marshaled.___position_1 = unmarshaled.___position_1;
	marshaled.___rotation_2 = unmarshaled.___rotation_2;
	marshaled.___scale_3 = unmarshaled.___scale_3;
	marshaled.___transformModified_4 = unmarshaled.___transformModified_4;
}
void SkeletonBone_t550_marshal_back(const SkeletonBone_t550_marshaled& marshaled, SkeletonBone_t550& unmarshaled)
{
	unmarshaled.___name_0 = il2cpp_codegen_marshal_string_result(marshaled.___name_0);
	unmarshaled.___position_1 = marshaled.___position_1;
	unmarshaled.___rotation_2 = marshaled.___rotation_2;
	unmarshaled.___scale_3 = marshaled.___scale_3;
	unmarshaled.___transformModified_4 = marshaled.___transformModified_4;
}
// Conversion method for clean up from marshalling of: UnityEngine.SkeletonBone
void SkeletonBone_t550_marshal_cleanup(SkeletonBone_t550_marshaled& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___name_0);
	marshaled.___name_0 = NULL;
}
// UnityEngine.HumanLimit
#include "UnityEngine_UnityEngine_HumanLimit.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo HumanLimit_t551_il2cpp_TypeInfo;
// UnityEngine.HumanLimit
#include "UnityEngine_UnityEngine_HumanLimitMethodDeclarations.h"



// UnityEngine.HumanBone
#include "UnityEngine_UnityEngine_HumanBone.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo HumanBone_t552_il2cpp_TypeInfo;
// UnityEngine.HumanBone
#include "UnityEngine_UnityEngine_HumanBoneMethodDeclarations.h"



// System.String UnityEngine.HumanBone::get_boneName()
extern MethodInfo HumanBone_get_boneName_m2842_MethodInfo;
extern "C" String_t* HumanBone_get_boneName_m2842 (HumanBone_t552 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_BoneName_0);
		return L_0;
	}
}
// System.Void UnityEngine.HumanBone::set_boneName(System.String)
extern MethodInfo HumanBone_set_boneName_m2843_MethodInfo;
extern "C" void HumanBone_set_boneName_m2843 (HumanBone_t552 * __this, String_t* ___value, MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___m_BoneName_0 = L_0;
		return;
	}
}
// System.String UnityEngine.HumanBone::get_humanName()
extern MethodInfo HumanBone_get_humanName_m2844_MethodInfo;
extern "C" String_t* HumanBone_get_humanName_m2844 (HumanBone_t552 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_HumanName_1);
		return L_0;
	}
}
// System.Void UnityEngine.HumanBone::set_humanName(System.String)
extern MethodInfo HumanBone_set_humanName_m2845_MethodInfo;
extern "C" void HumanBone_set_humanName_m2845 (HumanBone_t552 * __this, String_t* ___value, MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___m_HumanName_1 = L_0;
		return;
	}
}
// Conversion methods for marshalling of: UnityEngine.HumanBone
void HumanBone_t552_marshal(const HumanBone_t552& unmarshaled, HumanBone_t552_marshaled& marshaled)
{
	marshaled.___m_BoneName_0 = il2cpp_codegen_marshal_string(unmarshaled.___m_BoneName_0);
	marshaled.___m_HumanName_1 = il2cpp_codegen_marshal_string(unmarshaled.___m_HumanName_1);
	marshaled.___limit_2 = unmarshaled.___limit_2;
}
void HumanBone_t552_marshal_back(const HumanBone_t552_marshaled& marshaled, HumanBone_t552& unmarshaled)
{
	unmarshaled.___m_BoneName_0 = il2cpp_codegen_marshal_string_result(marshaled.___m_BoneName_0);
	unmarshaled.___m_HumanName_1 = il2cpp_codegen_marshal_string_result(marshaled.___m_HumanName_1);
	unmarshaled.___limit_2 = marshaled.___limit_2;
}
// Conversion method for clean up from marshalling of: UnityEngine.HumanBone
void HumanBone_t552_marshal_cleanup(HumanBone_t552_marshaled& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___m_BoneName_0);
	marshaled.___m_BoneName_0 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___m_HumanName_1);
	marshaled.___m_HumanName_1 = NULL;
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo RuntimeAnimatorController_t315_il2cpp_TypeInfo;
// UnityEngine.RuntimeAnimatorController
#include "UnityEngine_UnityEngine_RuntimeAnimatorControllerMethodDeclarations.h"



// UnityEngine.TextAnchor
#include "UnityEngine_UnityEngine_TextAnchor.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo TextAnchor_t324_il2cpp_TypeInfo;
// UnityEngine.TextAnchor
#include "UnityEngine_UnityEngine_TextAnchorMethodDeclarations.h"



// UnityEngine.HorizontalWrapMode
#include "UnityEngine_UnityEngine_HorizontalWrapMode.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo HorizontalWrapMode_t371_il2cpp_TypeInfo;
// UnityEngine.HorizontalWrapMode
#include "UnityEngine_UnityEngine_HorizontalWrapModeMethodDeclarations.h"



// UnityEngine.VerticalWrapMode
#include "UnityEngine_UnityEngine_VerticalWrapMode.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo VerticalWrapMode_t372_il2cpp_TypeInfo;
// UnityEngine.VerticalWrapMode
#include "UnityEngine_UnityEngine_VerticalWrapModeMethodDeclarations.h"



// UnityEngine.CharacterInfo
#include "UnityEngine_UnityEngine_CharacterInfo.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CharacterInfo_t553_il2cpp_TypeInfo;
// UnityEngine.CharacterInfo
#include "UnityEngine_UnityEngine_CharacterInfoMethodDeclarations.h"

// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
extern TypeInfo Vector2_t12_il2cpp_TypeInfo;
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_RectMethodDeclarations.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2MethodDeclarations.h"
extern MethodInfo Rect_get_width_m1504_MethodInfo;
extern MethodInfo Rect_get_height_m1505_MethodInfo;
extern MethodInfo Rect_get_x_m1509_MethodInfo;
extern MethodInfo Rect_get_y_m1510_MethodInfo;
extern MethodInfo Vector2__ctor_m1356_MethodInfo;
extern MethodInfo CharacterInfo_get_uvBottomLeftUnFlipped_m2854_MethodInfo;
extern MethodInfo CharacterInfo_get_uvTopLeftUnFlipped_m2857_MethodInfo;
extern MethodInfo CharacterInfo_get_uvBottomRightUnFlipped_m2855_MethodInfo;
extern MethodInfo CharacterInfo_get_uvTopRightUnFlipped_m2856_MethodInfo;


// System.Int32 UnityEngine.CharacterInfo::get_advance()
extern MethodInfo CharacterInfo_get_advance_m2846_MethodInfo;
extern "C" int32_t CharacterInfo_get_advance_m2846 (CharacterInfo_t553 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->___width_3);
		return (((int32_t)L_0));
	}
}
// System.Int32 UnityEngine.CharacterInfo::get_glyphWidth()
extern MethodInfo CharacterInfo_get_glyphWidth_m2847_MethodInfo;
extern "C" int32_t CharacterInfo_get_glyphWidth_m2847 (CharacterInfo_t553 * __this, MethodInfo* method)
{
	{
		Rect_t141 * L_0 = &(__this->___vert_2);
		float L_1 = Rect_get_width_m1504(L_0, /*hidden argument*/&Rect_get_width_m1504_MethodInfo);
		return (((int32_t)L_1));
	}
}
// System.Int32 UnityEngine.CharacterInfo::get_glyphHeight()
extern MethodInfo CharacterInfo_get_glyphHeight_m2848_MethodInfo;
extern "C" int32_t CharacterInfo_get_glyphHeight_m2848 (CharacterInfo_t553 * __this, MethodInfo* method)
{
	{
		Rect_t141 * L_0 = &(__this->___vert_2);
		float L_1 = Rect_get_height_m1505(L_0, /*hidden argument*/&Rect_get_height_m1505_MethodInfo);
		return (((int32_t)((-L_1))));
	}
}
// System.Int32 UnityEngine.CharacterInfo::get_bearing()
extern MethodInfo CharacterInfo_get_bearing_m2849_MethodInfo;
extern "C" int32_t CharacterInfo_get_bearing_m2849 (CharacterInfo_t553 * __this, MethodInfo* method)
{
	{
		Rect_t141 * L_0 = &(__this->___vert_2);
		float L_1 = Rect_get_x_m1509(L_0, /*hidden argument*/&Rect_get_x_m1509_MethodInfo);
		return (((int32_t)L_1));
	}
}
// System.Int32 UnityEngine.CharacterInfo::get_minY()
extern MethodInfo CharacterInfo_get_minY_m2850_MethodInfo;
extern "C" int32_t CharacterInfo_get_minY_m2850 (CharacterInfo_t553 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___ascent_7);
		Rect_t141 * L_1 = &(__this->___vert_2);
		float L_2 = Rect_get_y_m1510(L_1, /*hidden argument*/&Rect_get_y_m1510_MethodInfo);
		Rect_t141 * L_3 = &(__this->___vert_2);
		float L_4 = Rect_get_height_m1505(L_3, /*hidden argument*/&Rect_get_height_m1505_MethodInfo);
		return ((int32_t)((int32_t)L_0+(int32_t)(((int32_t)((float)((float)L_2+(float)L_4))))));
	}
}
// System.Int32 UnityEngine.CharacterInfo::get_maxY()
extern MethodInfo CharacterInfo_get_maxY_m2851_MethodInfo;
extern "C" int32_t CharacterInfo_get_maxY_m2851 (CharacterInfo_t553 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___ascent_7);
		Rect_t141 * L_1 = &(__this->___vert_2);
		float L_2 = Rect_get_y_m1510(L_1, /*hidden argument*/&Rect_get_y_m1510_MethodInfo);
		return ((int32_t)((int32_t)L_0+(int32_t)(((int32_t)L_2))));
	}
}
// System.Int32 UnityEngine.CharacterInfo::get_minX()
extern MethodInfo CharacterInfo_get_minX_m2852_MethodInfo;
extern "C" int32_t CharacterInfo_get_minX_m2852 (CharacterInfo_t553 * __this, MethodInfo* method)
{
	{
		Rect_t141 * L_0 = &(__this->___vert_2);
		float L_1 = Rect_get_x_m1509(L_0, /*hidden argument*/&Rect_get_x_m1509_MethodInfo);
		return (((int32_t)L_1));
	}
}
// System.Int32 UnityEngine.CharacterInfo::get_maxX()
extern MethodInfo CharacterInfo_get_maxX_m2853_MethodInfo;
extern "C" int32_t CharacterInfo_get_maxX_m2853 (CharacterInfo_t553 * __this, MethodInfo* method)
{
	{
		Rect_t141 * L_0 = &(__this->___vert_2);
		float L_1 = Rect_get_x_m1509(L_0, /*hidden argument*/&Rect_get_x_m1509_MethodInfo);
		Rect_t141 * L_2 = &(__this->___vert_2);
		float L_3 = Rect_get_width_m1504(L_2, /*hidden argument*/&Rect_get_width_m1504_MethodInfo);
		return (((int32_t)((float)((float)L_1+(float)L_3))));
	}
}
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvBottomLeftUnFlipped()
extern "C" Vector2_t12  CharacterInfo_get_uvBottomLeftUnFlipped_m2854 (CharacterInfo_t553 * __this, MethodInfo* method)
{
	{
		Rect_t141 * L_0 = &(__this->___uv_1);
		float L_1 = Rect_get_x_m1509(L_0, /*hidden argument*/&Rect_get_x_m1509_MethodInfo);
		Rect_t141 * L_2 = &(__this->___uv_1);
		float L_3 = Rect_get_y_m1510(L_2, /*hidden argument*/&Rect_get_y_m1510_MethodInfo);
		Vector2_t12  L_4 = {0};
		Vector2__ctor_m1356(&L_4, L_1, L_3, /*hidden argument*/&Vector2__ctor_m1356_MethodInfo);
		return L_4;
	}
}
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvBottomRightUnFlipped()
extern "C" Vector2_t12  CharacterInfo_get_uvBottomRightUnFlipped_m2855 (CharacterInfo_t553 * __this, MethodInfo* method)
{
	{
		Rect_t141 * L_0 = &(__this->___uv_1);
		float L_1 = Rect_get_x_m1509(L_0, /*hidden argument*/&Rect_get_x_m1509_MethodInfo);
		Rect_t141 * L_2 = &(__this->___uv_1);
		float L_3 = Rect_get_width_m1504(L_2, /*hidden argument*/&Rect_get_width_m1504_MethodInfo);
		Rect_t141 * L_4 = &(__this->___uv_1);
		float L_5 = Rect_get_y_m1510(L_4, /*hidden argument*/&Rect_get_y_m1510_MethodInfo);
		Vector2_t12  L_6 = {0};
		Vector2__ctor_m1356(&L_6, ((float)((float)L_1+(float)L_3)), L_5, /*hidden argument*/&Vector2__ctor_m1356_MethodInfo);
		return L_6;
	}
}
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvTopRightUnFlipped()
extern "C" Vector2_t12  CharacterInfo_get_uvTopRightUnFlipped_m2856 (CharacterInfo_t553 * __this, MethodInfo* method)
{
	{
		Rect_t141 * L_0 = &(__this->___uv_1);
		float L_1 = Rect_get_x_m1509(L_0, /*hidden argument*/&Rect_get_x_m1509_MethodInfo);
		Rect_t141 * L_2 = &(__this->___uv_1);
		float L_3 = Rect_get_width_m1504(L_2, /*hidden argument*/&Rect_get_width_m1504_MethodInfo);
		Rect_t141 * L_4 = &(__this->___uv_1);
		float L_5 = Rect_get_y_m1510(L_4, /*hidden argument*/&Rect_get_y_m1510_MethodInfo);
		Rect_t141 * L_6 = &(__this->___uv_1);
		float L_7 = Rect_get_height_m1505(L_6, /*hidden argument*/&Rect_get_height_m1505_MethodInfo);
		Vector2_t12  L_8 = {0};
		Vector2__ctor_m1356(&L_8, ((float)((float)L_1+(float)L_3)), ((float)((float)L_5+(float)L_7)), /*hidden argument*/&Vector2__ctor_m1356_MethodInfo);
		return L_8;
	}
}
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvTopLeftUnFlipped()
extern "C" Vector2_t12  CharacterInfo_get_uvTopLeftUnFlipped_m2857 (CharacterInfo_t553 * __this, MethodInfo* method)
{
	{
		Rect_t141 * L_0 = &(__this->___uv_1);
		float L_1 = Rect_get_x_m1509(L_0, /*hidden argument*/&Rect_get_x_m1509_MethodInfo);
		Rect_t141 * L_2 = &(__this->___uv_1);
		float L_3 = Rect_get_y_m1510(L_2, /*hidden argument*/&Rect_get_y_m1510_MethodInfo);
		Rect_t141 * L_4 = &(__this->___uv_1);
		float L_5 = Rect_get_height_m1505(L_4, /*hidden argument*/&Rect_get_height_m1505_MethodInfo);
		Vector2_t12  L_6 = {0};
		Vector2__ctor_m1356(&L_6, L_1, ((float)((float)L_3+(float)L_5)), /*hidden argument*/&Vector2__ctor_m1356_MethodInfo);
		return L_6;
	}
}
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvBottomLeft()
extern MethodInfo CharacterInfo_get_uvBottomLeft_m2858_MethodInfo;
extern "C" Vector2_t12  CharacterInfo_get_uvBottomLeft_m2858 (CharacterInfo_t553 * __this, MethodInfo* method)
{
	Vector2_t12  G_B3_0 = {0};
	{
		bool L_0 = (__this->___flipped_6);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		Vector2_t12  L_1 = CharacterInfo_get_uvBottomLeftUnFlipped_m2854(__this, /*hidden argument*/&CharacterInfo_get_uvBottomLeftUnFlipped_m2854_MethodInfo);
		G_B3_0 = L_1;
		goto IL_001c;
	}

IL_0016:
	{
		Vector2_t12  L_2 = CharacterInfo_get_uvBottomLeftUnFlipped_m2854(__this, /*hidden argument*/&CharacterInfo_get_uvBottomLeftUnFlipped_m2854_MethodInfo);
		G_B3_0 = L_2;
	}

IL_001c:
	{
		return G_B3_0;
	}
}
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvBottomRight()
extern MethodInfo CharacterInfo_get_uvBottomRight_m2859_MethodInfo;
extern "C" Vector2_t12  CharacterInfo_get_uvBottomRight_m2859 (CharacterInfo_t553 * __this, MethodInfo* method)
{
	Vector2_t12  G_B3_0 = {0};
	{
		bool L_0 = (__this->___flipped_6);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		Vector2_t12  L_1 = CharacterInfo_get_uvTopLeftUnFlipped_m2857(__this, /*hidden argument*/&CharacterInfo_get_uvTopLeftUnFlipped_m2857_MethodInfo);
		G_B3_0 = L_1;
		goto IL_001c;
	}

IL_0016:
	{
		Vector2_t12  L_2 = CharacterInfo_get_uvBottomRightUnFlipped_m2855(__this, /*hidden argument*/&CharacterInfo_get_uvBottomRightUnFlipped_m2855_MethodInfo);
		G_B3_0 = L_2;
	}

IL_001c:
	{
		return G_B3_0;
	}
}
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvTopRight()
extern MethodInfo CharacterInfo_get_uvTopRight_m2860_MethodInfo;
extern "C" Vector2_t12  CharacterInfo_get_uvTopRight_m2860 (CharacterInfo_t553 * __this, MethodInfo* method)
{
	Vector2_t12  G_B3_0 = {0};
	{
		bool L_0 = (__this->___flipped_6);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		Vector2_t12  L_1 = CharacterInfo_get_uvTopRightUnFlipped_m2856(__this, /*hidden argument*/&CharacterInfo_get_uvTopRightUnFlipped_m2856_MethodInfo);
		G_B3_0 = L_1;
		goto IL_001c;
	}

IL_0016:
	{
		Vector2_t12  L_2 = CharacterInfo_get_uvTopRightUnFlipped_m2856(__this, /*hidden argument*/&CharacterInfo_get_uvTopRightUnFlipped_m2856_MethodInfo);
		G_B3_0 = L_2;
	}

IL_001c:
	{
		return G_B3_0;
	}
}
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvTopLeft()
extern MethodInfo CharacterInfo_get_uvTopLeft_m2861_MethodInfo;
extern "C" Vector2_t12  CharacterInfo_get_uvTopLeft_m2861 (CharacterInfo_t553 * __this, MethodInfo* method)
{
	Vector2_t12  G_B3_0 = {0};
	{
		bool L_0 = (__this->___flipped_6);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		Vector2_t12  L_1 = CharacterInfo_get_uvBottomRightUnFlipped_m2855(__this, /*hidden argument*/&CharacterInfo_get_uvBottomRightUnFlipped_m2855_MethodInfo);
		G_B3_0 = L_1;
		goto IL_001c;
	}

IL_0016:
	{
		Vector2_t12  L_2 = CharacterInfo_get_uvTopLeftUnFlipped_m2857(__this, /*hidden argument*/&CharacterInfo_get_uvTopLeftUnFlipped_m2857_MethodInfo);
		G_B3_0 = L_2;
	}

IL_001c:
	{
		return G_B3_0;
	}
}
// UnityEngine.FontStyle
#include "UnityEngine_UnityEngine_FontStyle.h"
// Conversion methods for marshalling of: UnityEngine.CharacterInfo
void CharacterInfo_t553_marshal(const CharacterInfo_t553& unmarshaled, CharacterInfo_t553_marshaled& marshaled)
{
	marshaled.___index_0 = unmarshaled.___index_0;
	marshaled.___uv_1 = unmarshaled.___uv_1;
	marshaled.___vert_2 = unmarshaled.___vert_2;
	marshaled.___width_3 = unmarshaled.___width_3;
	marshaled.___size_4 = unmarshaled.___size_4;
	marshaled.___style_5 = unmarshaled.___style_5;
	marshaled.___flipped_6 = unmarshaled.___flipped_6;
	marshaled.___ascent_7 = unmarshaled.___ascent_7;
}
void CharacterInfo_t553_marshal_back(const CharacterInfo_t553_marshaled& marshaled, CharacterInfo_t553& unmarshaled)
{
	unmarshaled.___index_0 = marshaled.___index_0;
	unmarshaled.___uv_1 = marshaled.___uv_1;
	unmarshaled.___vert_2 = marshaled.___vert_2;
	unmarshaled.___width_3 = marshaled.___width_3;
	unmarshaled.___size_4 = marshaled.___size_4;
	unmarshaled.___style_5 = marshaled.___style_5;
	unmarshaled.___flipped_6 = marshaled.___flipped_6;
	unmarshaled.___ascent_7 = marshaled.___ascent_7;
}
// Conversion method for clean up from marshalling of: UnityEngine.CharacterInfo
void CharacterInfo_t553_marshal_cleanup(CharacterInfo_t553_marshaled& marshaled)
{
}
// UnityEngine.Font/FontTextureRebuildCallback
#include "UnityEngine_UnityEngine_Font_FontTextureRebuildCallback.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo FontTextureRebuildCallback_t554_il2cpp_TypeInfo;
// UnityEngine.Font/FontTextureRebuildCallback
#include "UnityEngine_UnityEngine_Font_FontTextureRebuildCallbackMethodDeclarations.h"



// System.Void UnityEngine.Font/FontTextureRebuildCallback::.ctor(System.Object,System.IntPtr)
extern MethodInfo FontTextureRebuildCallback__ctor_m2862_MethodInfo;
extern "C" void FontTextureRebuildCallback__ctor_m2862 (FontTextureRebuildCallback_t554 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.Font/FontTextureRebuildCallback::Invoke()
extern MethodInfo FontTextureRebuildCallback_Invoke_m2863_MethodInfo;
extern "C" void FontTextureRebuildCallback_Invoke_m2863 (FontTextureRebuildCallback_t554 * __this, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		FontTextureRebuildCallback_Invoke_m2863((FontTextureRebuildCallback_t554 *)__this->___prev_9, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	typedef void (*FunctionPointerType) (Object_t * __this, MethodInfo* method);
	((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,(MethodInfo*)(__this->___method_3.___m_value_0));
}
extern "C" void pinvoke_delegate_wrapper_FontTextureRebuildCallback_t554(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.IAsyncResult UnityEngine.Font/FontTextureRebuildCallback::BeginInvoke(System.AsyncCallback,System.Object)
extern MethodInfo FontTextureRebuildCallback_BeginInvoke_m2864_MethodInfo;
extern "C" Object_t * FontTextureRebuildCallback_BeginInvoke_m2864 (FontTextureRebuildCallback_t554 * __this, AsyncCallback_t171 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.Font/FontTextureRebuildCallback::EndInvoke(System.IAsyncResult)
extern MethodInfo FontTextureRebuildCallback_EndInvoke_m2865_MethodInfo;
extern "C" void FontTextureRebuildCallback_EndInvoke_m2865 (FontTextureRebuildCallback_t554 * __this, Object_t * ___result, MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// UnityEngine.Font
#include "UnityEngine_UnityEngine_Font.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Font_t125_il2cpp_TypeInfo;
// UnityEngine.Font
#include "UnityEngine_UnityEngine_FontMethodDeclarations.h"

// UnityEngine.Material
#include "UnityEngine_UnityEngine_Material.h"
// System.Action`1<UnityEngine.Font>
#include "mscorlib_System_Action_1_gen.h"
// System.Delegate
#include "mscorlib_System_Delegate.h"
// System.Char
#include "mscorlib_System_Char.h"
extern TypeInfo Action_1_t288_il2cpp_TypeInfo;
// System.Delegate
#include "mscorlib_System_DelegateMethodDeclarations.h"
// System.Action`1<UnityEngine.Font>
#include "mscorlib_System_Action_1_genMethodDeclarations.h"
extern Il2CppType Action_1_t288_0_0_0;
extern MethodInfo Delegate_Combine_m1525_MethodInfo;
extern MethodInfo Delegate_Remove_m1526_MethodInfo;
extern MethodInfo Action_1_Invoke_m3414_MethodInfo;
extern Il2CppGenericMethod Action_1_Invoke_m3414_GenericMethod;


// System.Void UnityEngine.Font::add_textureRebuilt(System.Action`1<UnityEngine.Font>)
extern MethodInfo Font_add_textureRebuilt_m1481_MethodInfo;
extern TypeInfo* Action_1_t288_il2cpp_TypeInfo_var;
extern "C" void Font_add_textureRebuilt_m1481 (Object_t * __this /* static, unused */, Action_1_t288 * ___value, MethodInfo* method)
{
	static bool Font_add_textureRebuilt_m1481_init;
	if (!Font_add_textureRebuilt_m1481_init)
	{
		Action_1_t288_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Action_1_t288_0_0_0);
		Font_add_textureRebuilt_m1481_init = true;
	}
	{
		Action_1_t288 * L_0 = ((Font_t125_StaticFields*)InitializedTypeInfo(&Font_t125_il2cpp_TypeInfo)->static_fields)->___textureRebuilt_2;
		Action_1_t288 * L_1 = ___value;
		Delegate_t295 * L_2 = Delegate_Combine_m1525(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Delegate_Combine_m1525_MethodInfo);
		((Font_t125_StaticFields*)InitializedTypeInfo(&Font_t125_il2cpp_TypeInfo)->static_fields)->___textureRebuilt_2 = ((Action_1_t288 *)Castclass(L_2, Action_1_t288_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void UnityEngine.Font::remove_textureRebuilt(System.Action`1<UnityEngine.Font>)
extern MethodInfo Font_remove_textureRebuilt_m2866_MethodInfo;
extern TypeInfo* Action_1_t288_il2cpp_TypeInfo_var;
extern "C" void Font_remove_textureRebuilt_m2866 (Object_t * __this /* static, unused */, Action_1_t288 * ___value, MethodInfo* method)
{
	static bool Font_remove_textureRebuilt_m2866_init;
	if (!Font_remove_textureRebuilt_m2866_init)
	{
		Action_1_t288_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Action_1_t288_0_0_0);
		Font_remove_textureRebuilt_m2866_init = true;
	}
	{
		Action_1_t288 * L_0 = ((Font_t125_StaticFields*)InitializedTypeInfo(&Font_t125_il2cpp_TypeInfo)->static_fields)->___textureRebuilt_2;
		Action_1_t288 * L_1 = ___value;
		Delegate_t295 * L_2 = Delegate_Remove_m1526(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Delegate_Remove_m1526_MethodInfo);
		((Font_t125_StaticFields*)InitializedTypeInfo(&Font_t125_il2cpp_TypeInfo)->static_fields)->___textureRebuilt_2 = ((Action_1_t288 *)Castclass(L_2, Action_1_t288_il2cpp_TypeInfo_var));
		return;
	}
}
// UnityEngine.Material UnityEngine.Font::get_material()
extern MethodInfo Font_get_material_m1830_MethodInfo;
extern "C" Material_t129 * Font_get_material_m1830 (Font_t125 * __this, MethodInfo* method)
{
	typedef Material_t129 * (*Font_get_material_m1830_ftn) (Font_t125 *);
	static Font_get_material_m1830_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Font_get_material_m1830_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Font::get_material()");
	return _il2cpp_icall_func(__this);
}
// System.Boolean UnityEngine.Font::HasCharacter(System.Char)
extern MethodInfo Font_HasCharacter_m1670_MethodInfo;
extern "C" bool Font_HasCharacter_m1670 (Font_t125 * __this, uint16_t ___c, MethodInfo* method)
{
	typedef bool (*Font_HasCharacter_m1670_ftn) (Font_t125 *, uint16_t);
	static Font_HasCharacter_m1670_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Font_HasCharacter_m1670_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Font::HasCharacter(System.Char)");
	return _il2cpp_icall_func(__this, ___c);
}
// System.Void UnityEngine.Font::InvokeTextureRebuilt_Internal(UnityEngine.Font)
extern MethodInfo Font_InvokeTextureRebuilt_Internal_m2867_MethodInfo;
extern MethodInfo* Action_1_Invoke_m3414_MethodInfo_var;
extern "C" void Font_InvokeTextureRebuilt_Internal_m2867 (Object_t * __this /* static, unused */, Font_t125 * ___font, MethodInfo* method)
{
	static bool Font_InvokeTextureRebuilt_Internal_m2867_init;
	if (!Font_InvokeTextureRebuilt_Internal_m2867_init)
	{
		Action_1_Invoke_m3414_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Action_1_Invoke_m3414_GenericMethod);
		Font_InvokeTextureRebuilt_Internal_m2867_init = true;
	}
	Action_1_t288 * V_0 = {0};
	{
		Action_1_t288 * L_0 = ((Font_t125_StaticFields*)InitializedTypeInfo(&Font_t125_il2cpp_TypeInfo)->static_fields)->___textureRebuilt_2;
		V_0 = L_0;
		Action_1_t288 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		Action_1_t288 * L_2 = V_0;
		Font_t125 * L_3 = ___font;
		NullCheck(L_2);
		VirtActionInvoker1< Font_t125 * >::Invoke(Action_1_Invoke_m3414_MethodInfo_var, L_2, L_3);
	}

IL_0013:
	{
		Font_t125 * L_4 = ___font;
		NullCheck(L_4);
		FontTextureRebuildCallback_t554 * L_5 = (L_4->___m_FontTextureRebuildCallback_3);
		if (!L_5)
		{
			goto IL_0029;
		}
	}
	{
		Font_t125 * L_6 = ___font;
		NullCheck(L_6);
		FontTextureRebuildCallback_t554 * L_7 = (L_6->___m_FontTextureRebuildCallback_3);
		NullCheck(L_7);
		VirtActionInvoker0::Invoke(&FontTextureRebuildCallback_Invoke_m2863_MethodInfo, L_7);
	}

IL_0029:
	{
		return;
	}
}
// System.Boolean UnityEngine.Font::get_dynamic()
extern MethodInfo Font_get_dynamic_m1832_MethodInfo;
extern "C" bool Font_get_dynamic_m1832 (Font_t125 * __this, MethodInfo* method)
{
	typedef bool (*Font_get_dynamic_m1832_ftn) (Font_t125 *);
	static Font_get_dynamic_m1832_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Font_get_dynamic_m1832_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Font::get_dynamic()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.Font::get_fontSize()
extern MethodInfo Font_get_fontSize_m1834_MethodInfo;
extern "C" int32_t Font_get_fontSize_m1834 (Font_t125 * __this, MethodInfo* method)
{
	typedef int32_t (*Font_get_fontSize_m1834_ftn) (Font_t125 *);
	static Font_get_fontSize_m1834_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Font_get_fontSize_m1834_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Font::get_fontSize()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.UICharInfo
#include "UnityEngine_UnityEngine_UICharInfo.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo UICharInfo_t307_il2cpp_TypeInfo;
// UnityEngine.UICharInfo
#include "UnityEngine_UnityEngine_UICharInfoMethodDeclarations.h"



// UnityEngine.UILineInfo
#include "UnityEngine_UnityEngine_UILineInfo.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo UILineInfo_t305_il2cpp_TypeInfo;
// UnityEngine.UILineInfo
#include "UnityEngine_UnityEngine_UILineInfoMethodDeclarations.h"



// UnityEngine.TextGenerator
#include "UnityEngine_UnityEngine_TextGenerator.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo TextGenerator_t181_il2cpp_TypeInfo;
// UnityEngine.TextGenerator
#include "UnityEngine_UnityEngine_TextGeneratorMethodDeclarations.h"

// System.Collections.Generic.List`1<UnityEngine.UIVertex>
#include "mscorlib_System_Collections_Generic_List_1_gen_10.h"
// System.Collections.Generic.List`1<UnityEngine.UICharInfo>
#include "mscorlib_System_Collections_Generic_List_1_gen_23.h"
// System.Collections.Generic.List`1<UnityEngine.UILineInfo>
#include "mscorlib_System_Collections_Generic_List_1_gen_24.h"
// UnityEngine.UIVertex
#include "UnityEngine_UnityEngine_UIVertex.h"
// UnityEngine.TextGenerationSettings
#include "UnityEngine_UnityEngine_TextGenerationSettings.h"
extern TypeInfo Mathf_t270_il2cpp_TypeInfo;
extern TypeInfo List_1_t140_il2cpp_TypeInfo;
extern TypeInfo List_1_t555_il2cpp_TypeInfo;
extern TypeInfo List_1_t556_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t272_il2cpp_TypeInfo;
extern TypeInfo TextGenerationSettings_t216_il2cpp_TypeInfo;
// UnityEngine.Mathf
#include "UnityEngine_UnityEngine_MathfMethodDeclarations.h"
// System.Collections.Generic.List`1<UnityEngine.UIVertex>
#include "mscorlib_System_Collections_Generic_List_1_gen_10MethodDeclarations.h"
// System.Collections.Generic.List`1<UnityEngine.UICharInfo>
#include "mscorlib_System_Collections_Generic_List_1_gen_23MethodDeclarations.h"
// System.Collections.Generic.List`1<UnityEngine.UILineInfo>
#include "mscorlib_System_Collections_Generic_List_1_gen_24MethodDeclarations.h"
// UnityEngine.TextGenerationSettings
#include "UnityEngine_UnityEngine_TextGenerationSettingsMethodDeclarations.h"
extern Il2CppType List_1_t140_0_0_0;
extern Il2CppType List_1_t555_0_0_0;
extern Il2CppType List_1_t556_0_0_0;
extern MethodInfo String_IsNullOrEmpty_m1684_MethodInfo;
extern MethodInfo String_get_Length_m1637_MethodInfo;
extern MethodInfo TextGenerator_get_vertexCount_m2874_MethodInfo;
extern MethodInfo Mathf_Max_m1675_MethodInfo;
extern MethodInfo Mathf_Min_m1677_MethodInfo;
extern MethodInfo TextGenerator_GetVertices_m2886_MethodInfo;
extern MethodInfo TextGenerator_GetCharacters_m2884_MethodInfo;
extern MethodInfo TextGenerator_GetLines_m2885_MethodInfo;
extern MethodInfo TextGenerator__ctor_m1828_MethodInfo;
extern MethodInfo List_1__ctor_m3415_MethodInfo;
extern MethodInfo List_1__ctor_m3416_MethodInfo;
extern MethodInfo List_1__ctor_m3417_MethodInfo;
extern MethodInfo TextGenerator_Init_m2869_MethodInfo;
extern MethodInfo TextGenerator_Dispose_cpp_m2870_MethodInfo;
extern MethodInfo TextGenerator_Populate_Internal_cpp_m2872_MethodInfo;
extern MethodInfo TextGenerator_INTERNAL_CALL_Populate_Internal_cpp_m2873_MethodInfo;
extern MethodInfo IDisposable_Dispose_m1379_MethodInfo;
extern MethodInfo Debug_LogWarning_m2660_MethodInfo;
extern MethodInfo TextGenerator_GetCharactersInternal_m2878_MethodInfo;
extern MethodInfo TextGenerator_GetLinesInternal_m2880_MethodInfo;
extern MethodInfo TextGenerator_GetVerticesInternal_m2875_MethodInfo;
extern MethodInfo TextGenerator_Populate_m1685_MethodInfo;
extern MethodInfo TextGenerator_get_rectExtents_m1687_MethodInfo;
extern MethodInfo String_op_Equality_m1635_MethodInfo;
extern MethodInfo TextGenerationSettings_Equals_m3256_MethodInfo;
extern MethodInfo TextGenerator_PopulateAlways_m2887_MethodInfo;
extern MethodInfo TextGenerator_ValidatedSettings_m2883_MethodInfo;
extern MethodInfo TextGenerator_Populate_Internal_m2871_MethodInfo;
extern Il2CppGenericMethod List_1__ctor_m3415_GenericMethod;
extern Il2CppGenericMethod List_1__ctor_m3416_GenericMethod;
extern Il2CppGenericMethod List_1__ctor_m3417_GenericMethod;


// System.Void UnityEngine.TextGenerator::.ctor()
extern MethodInfo TextGenerator__ctor_m1631_MethodInfo;
extern "C" void TextGenerator__ctor_m1631 (TextGenerator_t181 * __this, MethodInfo* method)
{
	{
		TextGenerator__ctor_m1828(__this, ((int32_t)50), /*hidden argument*/&TextGenerator__ctor_m1828_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.TextGenerator::.ctor(System.Int32)
extern TypeInfo* List_1_t140_il2cpp_TypeInfo_var;
extern TypeInfo* List_1_t555_il2cpp_TypeInfo_var;
extern TypeInfo* List_1_t556_il2cpp_TypeInfo_var;
extern MethodInfo* List_1__ctor_m3415_MethodInfo_var;
extern MethodInfo* List_1__ctor_m3416_MethodInfo_var;
extern MethodInfo* List_1__ctor_m3417_MethodInfo_var;
extern "C" void TextGenerator__ctor_m1828 (TextGenerator_t181 * __this, int32_t ___initialCapacity, MethodInfo* method)
{
	static bool TextGenerator__ctor_m1828_init;
	if (!TextGenerator__ctor_m1828_init)
	{
		List_1_t140_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&List_1_t140_0_0_0);
		List_1_t555_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&List_1_t555_0_0_0);
		List_1_t556_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&List_1_t556_0_0_0);
		List_1__ctor_m3415_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1__ctor_m3415_GenericMethod);
		List_1__ctor_m3416_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1__ctor_m3416_GenericMethod);
		List_1__ctor_m3417_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1__ctor_m3417_GenericMethod);
		TextGenerator__ctor_m1828_init = true;
	}
	{
		Object__ctor_m1289(__this, /*hidden argument*/&Object__ctor_m1289_MethodInfo);
		int32_t L_0 = ___initialCapacity;
		IL2CPP_RUNTIME_CLASS_INIT(List_1_t140_il2cpp_TypeInfo_var);
		List_1_t140 * L_1 = (List_1_t140 *)il2cpp_codegen_object_new (List_1_t140_il2cpp_TypeInfo_var);
		List_1__ctor_m3415(L_1, ((int32_t)((int32_t)((int32_t)((int32_t)L_0+(int32_t)1))*(int32_t)4)), /*hidden argument*/List_1__ctor_m3415_MethodInfo_var);
		__this->___m_Verts_5 = L_1;
		int32_t L_2 = ___initialCapacity;
		IL2CPP_RUNTIME_CLASS_INIT(List_1_t555_il2cpp_TypeInfo_var);
		List_1_t555 * L_3 = (List_1_t555 *)il2cpp_codegen_object_new (List_1_t555_il2cpp_TypeInfo_var);
		List_1__ctor_m3416(L_3, ((int32_t)((int32_t)L_2+(int32_t)1)), /*hidden argument*/List_1__ctor_m3416_MethodInfo_var);
		__this->___m_Characters_6 = L_3;
		IL2CPP_RUNTIME_CLASS_INIT(List_1_t556_il2cpp_TypeInfo_var);
		List_1_t556 * L_4 = (List_1_t556 *)il2cpp_codegen_object_new (List_1_t556_il2cpp_TypeInfo_var);
		List_1__ctor_m3417(L_4, ((int32_t)20), /*hidden argument*/List_1__ctor_m3417_MethodInfo_var);
		__this->___m_Lines_7 = L_4;
		TextGenerator_Init_m2869(__this, /*hidden argument*/&TextGenerator_Init_m2869_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.TextGenerator::System.IDisposable.Dispose()
extern MethodInfo TextGenerator_System_IDisposable_Dispose_m2868_MethodInfo;
extern "C" void TextGenerator_System_IDisposable_Dispose_m2868 (TextGenerator_t181 * __this, MethodInfo* method)
{
	{
		TextGenerator_Dispose_cpp_m2870(__this, /*hidden argument*/&TextGenerator_Dispose_cpp_m2870_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.TextGenerator::Init()
extern "C" void TextGenerator_Init_m2869 (TextGenerator_t181 * __this, MethodInfo* method)
{
	typedef void (*TextGenerator_Init_m2869_ftn) (TextGenerator_t181 *);
	static TextGenerator_Init_m2869_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_Init_m2869_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::Init()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.TextGenerator::Dispose_cpp()
extern "C" void TextGenerator_Dispose_cpp_m2870 (TextGenerator_t181 * __this, MethodInfo* method)
{
	typedef void (*TextGenerator_Dispose_cpp_m2870_ftn) (TextGenerator_t181 *);
	static TextGenerator_Dispose_cpp_m2870_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_Dispose_cpp_m2870_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::Dispose_cpp()");
	_il2cpp_icall_func(__this);
}
// System.Boolean UnityEngine.TextGenerator::Populate_Internal(System.String,UnityEngine.Font,UnityEngine.Color,System.Int32,System.Single,System.Single,UnityEngine.FontStyle,System.Boolean,System.Boolean,System.Int32,System.Int32,UnityEngine.VerticalWrapMode,UnityEngine.HorizontalWrapMode,System.Boolean,UnityEngine.TextAnchor,UnityEngine.Vector2,UnityEngine.Vector2,System.Boolean)
extern "C" bool TextGenerator_Populate_Internal_m2871 (TextGenerator_t181 * __this, String_t* ___str, Font_t125 * ___font, Color_t109  ___color, int32_t ___fontSize, float ___scaleFactor, float ___lineSpacing, int32_t ___style, bool ___richText, bool ___resizeTextForBestFit, int32_t ___resizeTextMinSize, int32_t ___resizeTextMaxSize, int32_t ___verticalOverFlow, int32_t ___horizontalOverflow, bool ___updateBounds, int32_t ___anchor, Vector2_t12  ___extents, Vector2_t12  ___pivot, bool ___generateOutOfBounds, MethodInfo* method)
{
	{
		String_t* L_0 = ___str;
		Font_t125 * L_1 = ___font;
		Color_t109  L_2 = ___color;
		int32_t L_3 = ___fontSize;
		float L_4 = ___scaleFactor;
		float L_5 = ___lineSpacing;
		int32_t L_6 = ___style;
		bool L_7 = ___richText;
		bool L_8 = ___resizeTextForBestFit;
		int32_t L_9 = ___resizeTextMinSize;
		int32_t L_10 = ___resizeTextMaxSize;
		int32_t L_11 = ___verticalOverFlow;
		int32_t L_12 = ___horizontalOverflow;
		bool L_13 = ___updateBounds;
		int32_t L_14 = ___anchor;
		float L_15 = ((&___extents)->___x_1);
		float L_16 = ((&___extents)->___y_2);
		float L_17 = ((&___pivot)->___x_1);
		float L_18 = ((&___pivot)->___y_2);
		bool L_19 = ___generateOutOfBounds;
		bool L_20 = TextGenerator_Populate_Internal_cpp_m2872(__this, L_0, L_1, L_2, L_3, L_4, L_5, L_6, L_7, L_8, L_9, L_10, L_11, L_12, L_13, L_14, L_15, L_16, L_17, L_18, L_19, /*hidden argument*/&TextGenerator_Populate_Internal_cpp_m2872_MethodInfo);
		return L_20;
	}
}
// System.Boolean UnityEngine.TextGenerator::Populate_Internal_cpp(System.String,UnityEngine.Font,UnityEngine.Color,System.Int32,System.Single,System.Single,UnityEngine.FontStyle,System.Boolean,System.Boolean,System.Int32,System.Int32,System.Int32,System.Int32,System.Boolean,UnityEngine.TextAnchor,System.Single,System.Single,System.Single,System.Single,System.Boolean)
extern "C" bool TextGenerator_Populate_Internal_cpp_m2872 (TextGenerator_t181 * __this, String_t* ___str, Font_t125 * ___font, Color_t109  ___color, int32_t ___fontSize, float ___scaleFactor, float ___lineSpacing, int32_t ___style, bool ___richText, bool ___resizeTextForBestFit, int32_t ___resizeTextMinSize, int32_t ___resizeTextMaxSize, int32_t ___verticalOverFlow, int32_t ___horizontalOverflow, bool ___updateBounds, int32_t ___anchor, float ___extentsX, float ___extentsY, float ___pivotX, float ___pivotY, bool ___generateOutOfBounds, MethodInfo* method)
{
	{
		String_t* L_0 = ___str;
		Font_t125 * L_1 = ___font;
		int32_t L_2 = ___fontSize;
		float L_3 = ___scaleFactor;
		float L_4 = ___lineSpacing;
		int32_t L_5 = ___style;
		bool L_6 = ___richText;
		bool L_7 = ___resizeTextForBestFit;
		int32_t L_8 = ___resizeTextMinSize;
		int32_t L_9 = ___resizeTextMaxSize;
		int32_t L_10 = ___verticalOverFlow;
		int32_t L_11 = ___horizontalOverflow;
		bool L_12 = ___updateBounds;
		int32_t L_13 = ___anchor;
		float L_14 = ___extentsX;
		float L_15 = ___extentsY;
		float L_16 = ___pivotX;
		float L_17 = ___pivotY;
		bool L_18 = ___generateOutOfBounds;
		bool L_19 = TextGenerator_INTERNAL_CALL_Populate_Internal_cpp_m2873(NULL /*static, unused*/, __this, L_0, L_1, (&___color), L_2, L_3, L_4, L_5, L_6, L_7, L_8, L_9, L_10, L_11, L_12, L_13, L_14, L_15, L_16, L_17, L_18, /*hidden argument*/&TextGenerator_INTERNAL_CALL_Populate_Internal_cpp_m2873_MethodInfo);
		return L_19;
	}
}
// System.Boolean UnityEngine.TextGenerator::INTERNAL_CALL_Populate_Internal_cpp(UnityEngine.TextGenerator,System.String,UnityEngine.Font,UnityEngine.Color&,System.Int32,System.Single,System.Single,UnityEngine.FontStyle,System.Boolean,System.Boolean,System.Int32,System.Int32,System.Int32,System.Int32,System.Boolean,UnityEngine.TextAnchor,System.Single,System.Single,System.Single,System.Single,System.Boolean)
extern "C" bool TextGenerator_INTERNAL_CALL_Populate_Internal_cpp_m2873 (Object_t * __this /* static, unused */, TextGenerator_t181 * ___self, String_t* ___str, Font_t125 * ___font, Color_t109 * ___color, int32_t ___fontSize, float ___scaleFactor, float ___lineSpacing, int32_t ___style, bool ___richText, bool ___resizeTextForBestFit, int32_t ___resizeTextMinSize, int32_t ___resizeTextMaxSize, int32_t ___verticalOverFlow, int32_t ___horizontalOverflow, bool ___updateBounds, int32_t ___anchor, float ___extentsX, float ___extentsY, float ___pivotX, float ___pivotY, bool ___generateOutOfBounds, MethodInfo* method)
{
	typedef bool (*TextGenerator_INTERNAL_CALL_Populate_Internal_cpp_m2873_ftn) (TextGenerator_t181 *, String_t*, Font_t125 *, Color_t109 *, int32_t, float, float, int32_t, bool, bool, int32_t, int32_t, int32_t, int32_t, bool, int32_t, float, float, float, float, bool);
	static TextGenerator_INTERNAL_CALL_Populate_Internal_cpp_m2873_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_INTERNAL_CALL_Populate_Internal_cpp_m2873_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::INTERNAL_CALL_Populate_Internal_cpp(UnityEngine.TextGenerator,System.String,UnityEngine.Font,UnityEngine.Color&,System.Int32,System.Single,System.Single,UnityEngine.FontStyle,System.Boolean,System.Boolean,System.Int32,System.Int32,System.Int32,System.Int32,System.Boolean,UnityEngine.TextAnchor,System.Single,System.Single,System.Single,System.Single,System.Boolean)");
	return _il2cpp_icall_func(___self, ___str, ___font, ___color, ___fontSize, ___scaleFactor, ___lineSpacing, ___style, ___richText, ___resizeTextForBestFit, ___resizeTextMinSize, ___resizeTextMaxSize, ___verticalOverFlow, ___horizontalOverflow, ___updateBounds, ___anchor, ___extentsX, ___extentsY, ___pivotX, ___pivotY, ___generateOutOfBounds);
}
// UnityEngine.Rect UnityEngine.TextGenerator::get_rectExtents()
extern "C" Rect_t141  TextGenerator_get_rectExtents_m1687 (TextGenerator_t181 * __this, MethodInfo* method)
{
	typedef Rect_t141  (*TextGenerator_get_rectExtents_m1687_ftn) (TextGenerator_t181 *);
	static TextGenerator_get_rectExtents_m1687_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_get_rectExtents_m1687_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::get_rectExtents()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.TextGenerator::get_vertexCount()
extern "C" int32_t TextGenerator_get_vertexCount_m2874 (TextGenerator_t181 * __this, MethodInfo* method)
{
	typedef int32_t (*TextGenerator_get_vertexCount_m2874_ftn) (TextGenerator_t181 *);
	static TextGenerator_get_vertexCount_m2874_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_get_vertexCount_m2874_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::get_vertexCount()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.TextGenerator::GetVerticesInternal(System.Object)
extern "C" void TextGenerator_GetVerticesInternal_m2875 (TextGenerator_t181 * __this, Object_t * ___vertices, MethodInfo* method)
{
	typedef void (*TextGenerator_GetVerticesInternal_m2875_ftn) (TextGenerator_t181 *, Object_t *);
	static TextGenerator_GetVerticesInternal_m2875_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_GetVerticesInternal_m2875_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::GetVerticesInternal(System.Object)");
	_il2cpp_icall_func(__this, ___vertices);
}
// UnityEngine.UIVertex[] UnityEngine.TextGenerator::GetVerticesArray()
extern MethodInfo TextGenerator_GetVerticesArray_m2876_MethodInfo;
extern "C" UIVertexU5BU5D_t180* TextGenerator_GetVerticesArray_m2876 (TextGenerator_t181 * __this, MethodInfo* method)
{
	typedef UIVertexU5BU5D_t180* (*TextGenerator_GetVerticesArray_m2876_ftn) (TextGenerator_t181 *);
	static TextGenerator_GetVerticesArray_m2876_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_GetVerticesArray_m2876_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::GetVerticesArray()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.TextGenerator::get_characterCount()
extern MethodInfo TextGenerator_get_characterCount_m2877_MethodInfo;
extern "C" int32_t TextGenerator_get_characterCount_m2877 (TextGenerator_t181 * __this, MethodInfo* method)
{
	typedef int32_t (*TextGenerator_get_characterCount_m2877_ftn) (TextGenerator_t181 *);
	static TextGenerator_get_characterCount_m2877_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_get_characterCount_m2877_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::get_characterCount()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.TextGenerator::get_characterCountVisible()
extern MethodInfo TextGenerator_get_characterCountVisible_m1663_MethodInfo;
extern "C" int32_t TextGenerator_get_characterCountVisible_m1663 (TextGenerator_t181 * __this, MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		String_t* L_0 = (__this->___m_LastString_1);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		bool L_1 = String_IsNullOrEmpty_m1684(NULL /*static, unused*/, L_0, /*hidden argument*/&String_IsNullOrEmpty_m1684_MethodInfo);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_0036;
	}

IL_0016:
	{
		String_t* L_2 = (__this->___m_LastString_1);
		NullCheck(L_2);
		int32_t L_3 = String_get_Length_m1637(L_2, /*hidden argument*/&String_get_Length_m1637_MethodInfo);
		int32_t L_4 = TextGenerator_get_vertexCount_m2874(__this, /*hidden argument*/&TextGenerator_get_vertexCount_m2874_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t270_il2cpp_TypeInfo));
		int32_t L_5 = Mathf_Max_m1675(NULL /*static, unused*/, 0, ((int32_t)((int32_t)((int32_t)((int32_t)L_4-(int32_t)4))/(int32_t)4)), /*hidden argument*/&Mathf_Max_m1675_MethodInfo);
		int32_t L_6 = Mathf_Min_m1677(NULL /*static, unused*/, L_3, L_5, /*hidden argument*/&Mathf_Min_m1677_MethodInfo);
		G_B3_0 = L_6;
	}

IL_0036:
	{
		return G_B3_0;
	}
}
// System.Void UnityEngine.TextGenerator::GetCharactersInternal(System.Object)
extern "C" void TextGenerator_GetCharactersInternal_m2878 (TextGenerator_t181 * __this, Object_t * ___characters, MethodInfo* method)
{
	typedef void (*TextGenerator_GetCharactersInternal_m2878_ftn) (TextGenerator_t181 *, Object_t *);
	static TextGenerator_GetCharactersInternal_m2878_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_GetCharactersInternal_m2878_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::GetCharactersInternal(System.Object)");
	_il2cpp_icall_func(__this, ___characters);
}
// UnityEngine.UICharInfo[] UnityEngine.TextGenerator::GetCharactersArray()
extern MethodInfo TextGenerator_GetCharactersArray_m2879_MethodInfo;
extern "C" UICharInfoU5BU5D_t557* TextGenerator_GetCharactersArray_m2879 (TextGenerator_t181 * __this, MethodInfo* method)
{
	typedef UICharInfoU5BU5D_t557* (*TextGenerator_GetCharactersArray_m2879_ftn) (TextGenerator_t181 *);
	static TextGenerator_GetCharactersArray_m2879_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_GetCharactersArray_m2879_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::GetCharactersArray()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.TextGenerator::get_lineCount()
extern MethodInfo TextGenerator_get_lineCount_m1662_MethodInfo;
extern "C" int32_t TextGenerator_get_lineCount_m1662 (TextGenerator_t181 * __this, MethodInfo* method)
{
	typedef int32_t (*TextGenerator_get_lineCount_m1662_ftn) (TextGenerator_t181 *);
	static TextGenerator_get_lineCount_m1662_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_get_lineCount_m1662_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::get_lineCount()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.TextGenerator::GetLinesInternal(System.Object)
extern "C" void TextGenerator_GetLinesInternal_m2880 (TextGenerator_t181 * __this, Object_t * ___lines, MethodInfo* method)
{
	typedef void (*TextGenerator_GetLinesInternal_m2880_ftn) (TextGenerator_t181 *, Object_t *);
	static TextGenerator_GetLinesInternal_m2880_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_GetLinesInternal_m2880_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::GetLinesInternal(System.Object)");
	_il2cpp_icall_func(__this, ___lines);
}
// UnityEngine.UILineInfo[] UnityEngine.TextGenerator::GetLinesArray()
extern MethodInfo TextGenerator_GetLinesArray_m2881_MethodInfo;
extern "C" UILineInfoU5BU5D_t558* TextGenerator_GetLinesArray_m2881 (TextGenerator_t181 * __this, MethodInfo* method)
{
	typedef UILineInfoU5BU5D_t558* (*TextGenerator_GetLinesArray_m2881_ftn) (TextGenerator_t181 *);
	static TextGenerator_GetLinesArray_m2881_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_GetLinesArray_m2881_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::GetLinesArray()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.TextGenerator::get_fontSizeUsedForBestFit()
extern MethodInfo TextGenerator_get_fontSizeUsedForBestFit_m1710_MethodInfo;
extern "C" int32_t TextGenerator_get_fontSizeUsedForBestFit_m1710 (TextGenerator_t181 * __this, MethodInfo* method)
{
	typedef int32_t (*TextGenerator_get_fontSizeUsedForBestFit_m1710_ftn) (TextGenerator_t181 *);
	static TextGenerator_get_fontSizeUsedForBestFit_m1710_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_get_fontSizeUsedForBestFit_m1710_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::get_fontSizeUsedForBestFit()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.TextGenerator::Finalize()
extern MethodInfo TextGenerator_Finalize_m2882_MethodInfo;
extern "C" void TextGenerator_Finalize_m2882 (TextGenerator_t181 * __this, MethodInfo* method)
{
	Exception_t275 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t275 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		InterfaceActionInvoker0::Invoke(&IDisposable_Dispose_m1379_MethodInfo, __this);
		IL2CPP_LEAVE(0x12, FINALLY_000b);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t275 *)e.ex;
		goto FINALLY_000b;
	}

FINALLY_000b:
	{ // begin finally (depth: 1)
		Object_Finalize_m67(__this, /*hidden argument*/&Object_Finalize_m67_MethodInfo);
		IL2CPP_END_FINALLY(11)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(11)
	{
		IL2CPP_JUMP_TBL(0x12, IL_0012)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t275 *)
	}

IL_0012:
	{
		return;
	}
}
// UnityEngine.TextGenerationSettings UnityEngine.TextGenerator::ValidatedSettings(UnityEngine.TextGenerationSettings)
extern "C" TextGenerationSettings_t216  TextGenerator_ValidatedSettings_m2883 (TextGenerator_t181 * __this, TextGenerationSettings_t216  ___settings, MethodInfo* method)
{
	{
		Font_t125 * L_0 = ((&___settings)->___font_0);
		bool L_1 = Object_op_Inequality_m1268(NULL /*static, unused*/, L_0, (Object_t20 *)NULL, /*hidden argument*/&Object_op_Inequality_m1268_MethodInfo);
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		Font_t125 * L_2 = ((&___settings)->___font_0);
		NullCheck(L_2);
		bool L_3 = Font_get_dynamic_m1832(L_2, /*hidden argument*/&Font_get_dynamic_m1832_MethodInfo);
		if (!L_3)
		{
			goto IL_0025;
		}
	}
	{
		TextGenerationSettings_t216  L_4 = ___settings;
		return L_4;
	}

IL_0025:
	{
		int32_t L_5 = ((&___settings)->___fontSize_2);
		if (L_5)
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_6 = ((&___settings)->___fontStyle_6);
		if (!L_6)
		{
			goto IL_0057;
		}
	}

IL_003d:
	{
		Debug_LogWarning_m2660(NULL /*static, unused*/, (String_t*) &_stringLiteral188, /*hidden argument*/&Debug_LogWarning_m2660_MethodInfo);
		(&___settings)->___fontSize_2 = 0;
		(&___settings)->___fontStyle_6 = 0;
	}

IL_0057:
	{
		bool L_7 = ((&___settings)->___resizeTextForBestFit_8);
		if (!L_7)
		{
			goto IL_0075;
		}
	}
	{
		Debug_LogWarning_m2660(NULL /*static, unused*/, (String_t*) &_stringLiteral189, /*hidden argument*/&Debug_LogWarning_m2660_MethodInfo);
		(&___settings)->___resizeTextForBestFit_8 = 0;
	}

IL_0075:
	{
		TextGenerationSettings_t216  L_8 = ___settings;
		return L_8;
	}
}
// System.Void UnityEngine.TextGenerator::Invalidate()
extern MethodInfo TextGenerator_Invalidate_m1837_MethodInfo;
extern "C" void TextGenerator_Invalidate_m1837 (TextGenerator_t181 * __this, MethodInfo* method)
{
	{
		__this->___m_HasGenerated_3 = 0;
		return;
	}
}
// System.Void UnityEngine.TextGenerator::GetCharacters(System.Collections.Generic.List`1<UnityEngine.UICharInfo>)
extern "C" void TextGenerator_GetCharacters_m2884 (TextGenerator_t181 * __this, List_1_t555 * ___characters, MethodInfo* method)
{
	{
		List_1_t555 * L_0 = ___characters;
		TextGenerator_GetCharactersInternal_m2878(__this, L_0, /*hidden argument*/&TextGenerator_GetCharactersInternal_m2878_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.TextGenerator::GetLines(System.Collections.Generic.List`1<UnityEngine.UILineInfo>)
extern "C" void TextGenerator_GetLines_m2885 (TextGenerator_t181 * __this, List_1_t556 * ___lines, MethodInfo* method)
{
	{
		List_1_t556 * L_0 = ___lines;
		TextGenerator_GetLinesInternal_m2880(__this, L_0, /*hidden argument*/&TextGenerator_GetLinesInternal_m2880_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.TextGenerator::GetVertices(System.Collections.Generic.List`1<UnityEngine.UIVertex>)
extern "C" void TextGenerator_GetVertices_m2886 (TextGenerator_t181 * __this, List_1_t140 * ___vertices, MethodInfo* method)
{
	{
		List_1_t140 * L_0 = ___vertices;
		TextGenerator_GetVerticesInternal_m2875(__this, L_0, /*hidden argument*/&TextGenerator_GetVerticesInternal_m2875_MethodInfo);
		return;
	}
}
// System.Single UnityEngine.TextGenerator::GetPreferredWidth(System.String,UnityEngine.TextGenerationSettings)
extern MethodInfo TextGenerator_GetPreferredWidth_m1835_MethodInfo;
extern "C" float TextGenerator_GetPreferredWidth_m1835 (TextGenerator_t181 * __this, String_t* ___str, TextGenerationSettings_t216  ___settings, MethodInfo* method)
{
	Rect_t141  V_0 = {0};
	{
		(&___settings)->___horizontalOverflow_13 = 1;
		(&___settings)->___verticalOverflow_12 = 1;
		(&___settings)->___updateBounds_11 = 1;
		String_t* L_0 = ___str;
		TextGenerationSettings_t216  L_1 = ___settings;
		TextGenerator_Populate_m1685(__this, L_0, L_1, /*hidden argument*/&TextGenerator_Populate_m1685_MethodInfo);
		Rect_t141  L_2 = TextGenerator_get_rectExtents_m1687(__this, /*hidden argument*/&TextGenerator_get_rectExtents_m1687_MethodInfo);
		V_0 = L_2;
		float L_3 = Rect_get_width_m1504((&V_0), /*hidden argument*/&Rect_get_width_m1504_MethodInfo);
		return L_3;
	}
}
// System.Single UnityEngine.TextGenerator::GetPreferredHeight(System.String,UnityEngine.TextGenerationSettings)
extern MethodInfo TextGenerator_GetPreferredHeight_m1836_MethodInfo;
extern "C" float TextGenerator_GetPreferredHeight_m1836 (TextGenerator_t181 * __this, String_t* ___str, TextGenerationSettings_t216  ___settings, MethodInfo* method)
{
	Rect_t141  V_0 = {0};
	{
		(&___settings)->___verticalOverflow_12 = 1;
		(&___settings)->___updateBounds_11 = 1;
		String_t* L_0 = ___str;
		TextGenerationSettings_t216  L_1 = ___settings;
		TextGenerator_Populate_m1685(__this, L_0, L_1, /*hidden argument*/&TextGenerator_Populate_m1685_MethodInfo);
		Rect_t141  L_2 = TextGenerator_get_rectExtents_m1687(__this, /*hidden argument*/&TextGenerator_get_rectExtents_m1687_MethodInfo);
		V_0 = L_2;
		float L_3 = Rect_get_height_m1505((&V_0), /*hidden argument*/&Rect_get_height_m1505_MethodInfo);
		return L_3;
	}
}
// System.Boolean UnityEngine.TextGenerator::Populate(System.String,UnityEngine.TextGenerationSettings)
extern "C" bool TextGenerator_Populate_m1685 (TextGenerator_t181 * __this, String_t* ___str, TextGenerationSettings_t216  ___settings, MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_HasGenerated_3);
		if (!L_0)
		{
			goto IL_0035;
		}
	}
	{
		String_t* L_1 = ___str;
		String_t* L_2 = (__this->___m_LastString_1);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		bool L_3 = String_op_Equality_m1635(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/&String_op_Equality_m1635_MethodInfo);
		if (!L_3)
		{
			goto IL_0035;
		}
	}
	{
		TextGenerationSettings_t216  L_4 = (__this->___m_LastSettings_2);
		bool L_5 = TextGenerationSettings_Equals_m3256((&___settings), L_4, /*hidden argument*/&TextGenerationSettings_Equals_m3256_MethodInfo);
		if (!L_5)
		{
			goto IL_0035;
		}
	}
	{
		bool L_6 = (__this->___m_LastValid_4);
		return L_6;
	}

IL_0035:
	{
		String_t* L_7 = ___str;
		TextGenerationSettings_t216  L_8 = ___settings;
		bool L_9 = TextGenerator_PopulateAlways_m2887(__this, L_7, L_8, /*hidden argument*/&TextGenerator_PopulateAlways_m2887_MethodInfo);
		return L_9;
	}
}
// System.Boolean UnityEngine.TextGenerator::PopulateAlways(System.String,UnityEngine.TextGenerationSettings)
extern "C" bool TextGenerator_PopulateAlways_m2887 (TextGenerator_t181 * __this, String_t* ___str, TextGenerationSettings_t216  ___settings, MethodInfo* method)
{
	TextGenerationSettings_t216  V_0 = {0};
	{
		String_t* L_0 = ___str;
		__this->___m_LastString_1 = L_0;
		__this->___m_HasGenerated_3 = 1;
		__this->___m_CachedVerts_8 = 0;
		__this->___m_CachedCharacters_9 = 0;
		__this->___m_CachedLines_10 = 0;
		TextGenerationSettings_t216  L_1 = ___settings;
		__this->___m_LastSettings_2 = L_1;
		TextGenerationSettings_t216  L_2 = ___settings;
		TextGenerationSettings_t216  L_3 = TextGenerator_ValidatedSettings_m2883(__this, L_2, /*hidden argument*/&TextGenerator_ValidatedSettings_m2883_MethodInfo);
		V_0 = L_3;
		String_t* L_4 = ___str;
		Font_t125 * L_5 = ((&V_0)->___font_0);
		Color_t109  L_6 = ((&V_0)->___color_1);
		int32_t L_7 = ((&V_0)->___fontSize_2);
		float L_8 = ((&V_0)->___scaleFactor_5);
		float L_9 = ((&V_0)->___lineSpacing_3);
		int32_t L_10 = ((&V_0)->___fontStyle_6);
		bool L_11 = ((&V_0)->___richText_4);
		bool L_12 = ((&V_0)->___resizeTextForBestFit_8);
		int32_t L_13 = ((&V_0)->___resizeTextMinSize_9);
		int32_t L_14 = ((&V_0)->___resizeTextMaxSize_10);
		int32_t L_15 = ((&V_0)->___verticalOverflow_12);
		int32_t L_16 = ((&V_0)->___horizontalOverflow_13);
		bool L_17 = ((&V_0)->___updateBounds_11);
		int32_t L_18 = ((&V_0)->___textAnchor_7);
		Vector2_t12  L_19 = ((&V_0)->___generationExtents_14);
		Vector2_t12  L_20 = ((&V_0)->___pivot_15);
		bool L_21 = ((&V_0)->___generateOutOfBounds_16);
		bool L_22 = TextGenerator_Populate_Internal_m2871(__this, L_4, L_5, L_6, L_7, L_8, L_9, L_10, L_11, L_12, L_13, L_14, L_15, L_16, L_17, L_18, L_19, L_20, L_21, /*hidden argument*/&TextGenerator_Populate_Internal_m2871_MethodInfo);
		__this->___m_LastValid_4 = L_22;
		bool L_23 = (__this->___m_LastValid_4);
		return L_23;
	}
}
// System.Collections.Generic.IList`1<UnityEngine.UIVertex> UnityEngine.TextGenerator::get_verts()
extern MethodInfo TextGenerator_get_verts_m1838_MethodInfo;
extern "C" Object_t* TextGenerator_get_verts_m1838 (TextGenerator_t181 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_CachedVerts_8);
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		List_1_t140 * L_1 = (__this->___m_Verts_5);
		TextGenerator_GetVertices_m2886(__this, L_1, /*hidden argument*/&TextGenerator_GetVertices_m2886_MethodInfo);
		__this->___m_CachedVerts_8 = 1;
	}

IL_001e:
	{
		List_1_t140 * L_2 = (__this->___m_Verts_5);
		return L_2;
	}
}
// System.Collections.Generic.IList`1<UnityEngine.UICharInfo> UnityEngine.TextGenerator::get_characters()
extern MethodInfo TextGenerator_get_characters_m1664_MethodInfo;
extern "C" Object_t* TextGenerator_get_characters_m1664 (TextGenerator_t181 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_CachedCharacters_9);
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		List_1_t555 * L_1 = (__this->___m_Characters_6);
		TextGenerator_GetCharacters_m2884(__this, L_1, /*hidden argument*/&TextGenerator_GetCharacters_m2884_MethodInfo);
		__this->___m_CachedCharacters_9 = 1;
	}

IL_001e:
	{
		List_1_t555 * L_2 = (__this->___m_Characters_6);
		return L_2;
	}
}
// System.Collections.Generic.IList`1<UnityEngine.UILineInfo> UnityEngine.TextGenerator::get_lines()
extern MethodInfo TextGenerator_get_lines_m1660_MethodInfo;
extern "C" Object_t* TextGenerator_get_lines_m1660 (TextGenerator_t181 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_CachedLines_10);
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		List_1_t556 * L_1 = (__this->___m_Lines_7);
		TextGenerator_GetLines_m2885(__this, L_1, /*hidden argument*/&TextGenerator_GetLines_m2885_MethodInfo);
		__this->___m_CachedLines_10 = 1;
	}

IL_001e:
	{
		List_1_t556 * L_2 = (__this->___m_Lines_7);
		return L_2;
	}
}
// UnityEngine.RenderMode
#include "UnityEngine_UnityEngine_RenderMode.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo RenderMode_t559_il2cpp_TypeInfo;
// UnityEngine.RenderMode
#include "UnityEngine_UnityEngine_RenderModeMethodDeclarations.h"



// UnityEngine.Canvas/WillRenderCanvases
#include "UnityEngine_UnityEngine_Canvas_WillRenderCanvases.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo WillRenderCanvases_t286_il2cpp_TypeInfo;
// UnityEngine.Canvas/WillRenderCanvases
#include "UnityEngine_UnityEngine_Canvas_WillRenderCanvasesMethodDeclarations.h"



// System.Void UnityEngine.Canvas/WillRenderCanvases::.ctor(System.Object,System.IntPtr)
extern MethodInfo WillRenderCanvases__ctor_m1457_MethodInfo;
extern "C" void WillRenderCanvases__ctor_m1457 (WillRenderCanvases_t286 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.Canvas/WillRenderCanvases::Invoke()
extern MethodInfo WillRenderCanvases_Invoke_m2888_MethodInfo;
extern "C" void WillRenderCanvases_Invoke_m2888 (WillRenderCanvases_t286 * __this, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		WillRenderCanvases_Invoke_m2888((WillRenderCanvases_t286 *)__this->___prev_9, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	typedef void (*FunctionPointerType) (Object_t * __this, MethodInfo* method);
	((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,(MethodInfo*)(__this->___method_3.___m_value_0));
}
extern "C" void pinvoke_delegate_wrapper_WillRenderCanvases_t286(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.IAsyncResult UnityEngine.Canvas/WillRenderCanvases::BeginInvoke(System.AsyncCallback,System.Object)
extern MethodInfo WillRenderCanvases_BeginInvoke_m2889_MethodInfo;
extern "C" Object_t * WillRenderCanvases_BeginInvoke_m2889 (WillRenderCanvases_t286 * __this, AsyncCallback_t171 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.Canvas/WillRenderCanvases::EndInvoke(System.IAsyncResult)
extern MethodInfo WillRenderCanvases_EndInvoke_m2890_MethodInfo;
extern "C" void WillRenderCanvases_EndInvoke_m2890 (WillRenderCanvases_t286 * __this, Object_t * ___result, MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// UnityEngine.Canvas
#include "UnityEngine_UnityEngine_Canvas.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Canvas_t134_il2cpp_TypeInfo;
// UnityEngine.Canvas
#include "UnityEngine_UnityEngine_CanvasMethodDeclarations.h"

// UnityEngine.Camera
#include "UnityEngine_UnityEngine_Camera.h"
extern MethodInfo Canvas_SendWillRenderCanvases_m2892_MethodInfo;


// System.Void UnityEngine.Canvas::add_willRenderCanvases(UnityEngine.Canvas/WillRenderCanvases)
extern MethodInfo Canvas_add_willRenderCanvases_m1458_MethodInfo;
extern "C" void Canvas_add_willRenderCanvases_m1458 (Object_t * __this /* static, unused */, WillRenderCanvases_t286 * ___value, MethodInfo* method)
{
	{
		WillRenderCanvases_t286 * L_0 = ((Canvas_t134_StaticFields*)InitializedTypeInfo(&Canvas_t134_il2cpp_TypeInfo)->static_fields)->___willRenderCanvases_2;
		WillRenderCanvases_t286 * L_1 = ___value;
		Delegate_t295 * L_2 = Delegate_Combine_m1525(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Delegate_Combine_m1525_MethodInfo);
		((Canvas_t134_StaticFields*)InitializedTypeInfo(&Canvas_t134_il2cpp_TypeInfo)->static_fields)->___willRenderCanvases_2 = ((WillRenderCanvases_t286 *)Castclass(L_2, InitializedTypeInfo(&WillRenderCanvases_t286_il2cpp_TypeInfo)));
		return;
	}
}
// System.Void UnityEngine.Canvas::remove_willRenderCanvases(UnityEngine.Canvas/WillRenderCanvases)
extern MethodInfo Canvas_remove_willRenderCanvases_m2891_MethodInfo;
extern "C" void Canvas_remove_willRenderCanvases_m2891 (Object_t * __this /* static, unused */, WillRenderCanvases_t286 * ___value, MethodInfo* method)
{
	{
		WillRenderCanvases_t286 * L_0 = ((Canvas_t134_StaticFields*)InitializedTypeInfo(&Canvas_t134_il2cpp_TypeInfo)->static_fields)->___willRenderCanvases_2;
		WillRenderCanvases_t286 * L_1 = ___value;
		Delegate_t295 * L_2 = Delegate_Remove_m1526(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Delegate_Remove_m1526_MethodInfo);
		((Canvas_t134_StaticFields*)InitializedTypeInfo(&Canvas_t134_il2cpp_TypeInfo)->static_fields)->___willRenderCanvases_2 = ((WillRenderCanvases_t286 *)Castclass(L_2, InitializedTypeInfo(&WillRenderCanvases_t286_il2cpp_TypeInfo)));
		return;
	}
}
// UnityEngine.RenderMode UnityEngine.Canvas::get_renderMode()
extern MethodInfo Canvas_get_renderMode_m1539_MethodInfo;
extern "C" int32_t Canvas_get_renderMode_m1539 (Canvas_t134 * __this, MethodInfo* method)
{
	typedef int32_t (*Canvas_get_renderMode_m1539_ftn) (Canvas_t134 *);
	static Canvas_get_renderMode_m1539_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_get_renderMode_m1539_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::get_renderMode()");
	return _il2cpp_icall_func(__this);
}
// System.Boolean UnityEngine.Canvas::get_isRootCanvas()
extern MethodInfo Canvas_get_isRootCanvas_m1859_MethodInfo;
extern "C" bool Canvas_get_isRootCanvas_m1859 (Canvas_t134 * __this, MethodInfo* method)
{
	typedef bool (*Canvas_get_isRootCanvas_m1859_ftn) (Canvas_t134 *);
	static Canvas_get_isRootCanvas_m1859_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_get_isRootCanvas_m1859_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::get_isRootCanvas()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.Camera UnityEngine.Canvas::get_worldCamera()
extern MethodInfo Canvas_get_worldCamera_m1542_MethodInfo;
extern "C" Camera_t7 * Canvas_get_worldCamera_m1542 (Canvas_t134 * __this, MethodInfo* method)
{
	typedef Camera_t7 * (*Canvas_get_worldCamera_m1542_ftn) (Canvas_t134 *);
	static Canvas_get_worldCamera_m1542_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_get_worldCamera_m1542_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::get_worldCamera()");
	return _il2cpp_icall_func(__this);
}
// System.Single UnityEngine.Canvas::get_scaleFactor()
extern MethodInfo Canvas_get_scaleFactor_m1833_MethodInfo;
extern "C" float Canvas_get_scaleFactor_m1833 (Canvas_t134 * __this, MethodInfo* method)
{
	typedef float (*Canvas_get_scaleFactor_m1833_ftn) (Canvas_t134 *);
	static Canvas_get_scaleFactor_m1833_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_get_scaleFactor_m1833_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::get_scaleFactor()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Canvas::set_scaleFactor(System.Single)
extern MethodInfo Canvas_set_scaleFactor_m1863_MethodInfo;
extern "C" void Canvas_set_scaleFactor_m1863 (Canvas_t134 * __this, float ___value, MethodInfo* method)
{
	typedef void (*Canvas_set_scaleFactor_m1863_ftn) (Canvas_t134 *, float);
	static Canvas_set_scaleFactor_m1863_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_set_scaleFactor_m1863_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::set_scaleFactor(System.Single)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Single UnityEngine.Canvas::get_referencePixelsPerUnit()
extern MethodInfo Canvas_get_referencePixelsPerUnit_m1578_MethodInfo;
extern "C" float Canvas_get_referencePixelsPerUnit_m1578 (Canvas_t134 * __this, MethodInfo* method)
{
	typedef float (*Canvas_get_referencePixelsPerUnit_m1578_ftn) (Canvas_t134 *);
	static Canvas_get_referencePixelsPerUnit_m1578_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_get_referencePixelsPerUnit_m1578_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::get_referencePixelsPerUnit()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Canvas::set_referencePixelsPerUnit(System.Single)
extern MethodInfo Canvas_set_referencePixelsPerUnit_m1864_MethodInfo;
extern "C" void Canvas_set_referencePixelsPerUnit_m1864 (Canvas_t134 * __this, float ___value, MethodInfo* method)
{
	typedef void (*Canvas_set_referencePixelsPerUnit_m1864_ftn) (Canvas_t134 *, float);
	static Canvas_set_referencePixelsPerUnit_m1864_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_set_referencePixelsPerUnit_m1864_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::set_referencePixelsPerUnit(System.Single)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Boolean UnityEngine.Canvas::get_pixelPerfect()
extern MethodInfo Canvas_get_pixelPerfect_m1517_MethodInfo;
extern "C" bool Canvas_get_pixelPerfect_m1517 (Canvas_t134 * __this, MethodInfo* method)
{
	typedef bool (*Canvas_get_pixelPerfect_m1517_ftn) (Canvas_t134 *);
	static Canvas_get_pixelPerfect_m1517_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_get_pixelPerfect_m1517_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::get_pixelPerfect()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.Canvas::get_renderOrder()
extern MethodInfo Canvas_get_renderOrder_m1541_MethodInfo;
extern "C" int32_t Canvas_get_renderOrder_m1541 (Canvas_t134 * __this, MethodInfo* method)
{
	typedef int32_t (*Canvas_get_renderOrder_m1541_ftn) (Canvas_t134 *);
	static Canvas_get_renderOrder_m1541_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_get_renderOrder_m1541_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::get_renderOrder()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.Canvas::get_sortingOrder()
extern MethodInfo Canvas_get_sortingOrder_m1540_MethodInfo;
extern "C" int32_t Canvas_get_sortingOrder_m1540 (Canvas_t134 * __this, MethodInfo* method)
{
	typedef int32_t (*Canvas_get_sortingOrder_m1540_ftn) (Canvas_t134 *);
	static Canvas_get_sortingOrder_m1540_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_get_sortingOrder_m1540_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::get_sortingOrder()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.Canvas::get_cachedSortingLayerValue()
extern MethodInfo Canvas_get_cachedSortingLayerValue_m1558_MethodInfo;
extern "C" int32_t Canvas_get_cachedSortingLayerValue_m1558 (Canvas_t134 * __this, MethodInfo* method)
{
	typedef int32_t (*Canvas_get_cachedSortingLayerValue_m1558_ftn) (Canvas_t134 *);
	static Canvas_get_cachedSortingLayerValue_m1558_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_get_cachedSortingLayerValue_m1558_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::get_cachedSortingLayerValue()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.Material UnityEngine.Canvas::GetDefaultCanvasMaterial()
extern MethodInfo Canvas_GetDefaultCanvasMaterial_m1486_MethodInfo;
extern "C" Material_t129 * Canvas_GetDefaultCanvasMaterial_m1486 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef Material_t129 * (*Canvas_GetDefaultCanvasMaterial_m1486_ftn) ();
	static Canvas_GetDefaultCanvasMaterial_m1486_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_GetDefaultCanvasMaterial_m1486_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::GetDefaultCanvasMaterial()");
	return _il2cpp_icall_func();
}
// UnityEngine.Material UnityEngine.Canvas::GetDefaultCanvasTextMaterial()
extern MethodInfo Canvas_GetDefaultCanvasTextMaterial_m1829_MethodInfo;
extern "C" Material_t129 * Canvas_GetDefaultCanvasTextMaterial_m1829 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef Material_t129 * (*Canvas_GetDefaultCanvasTextMaterial_m1829_ftn) ();
	static Canvas_GetDefaultCanvasTextMaterial_m1829_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_GetDefaultCanvasTextMaterial_m1829_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::GetDefaultCanvasTextMaterial()");
	return _il2cpp_icall_func();
}
// System.Void UnityEngine.Canvas::SendWillRenderCanvases()
extern "C" void Canvas_SendWillRenderCanvases_m2892 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		WillRenderCanvases_t286 * L_0 = ((Canvas_t134_StaticFields*)InitializedTypeInfo(&Canvas_t134_il2cpp_TypeInfo)->static_fields)->___willRenderCanvases_2;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		WillRenderCanvases_t286 * L_1 = ((Canvas_t134_StaticFields*)InitializedTypeInfo(&Canvas_t134_il2cpp_TypeInfo)->static_fields)->___willRenderCanvases_2;
		NullCheck(L_1);
		VirtActionInvoker0::Invoke(&WillRenderCanvases_Invoke_m2888_MethodInfo, L_1);
	}

IL_0014:
	{
		return;
	}
}
// System.Void UnityEngine.Canvas::ForceUpdateCanvases()
extern MethodInfo Canvas_ForceUpdateCanvases_m1765_MethodInfo;
extern "C" void Canvas_ForceUpdateCanvases_m1765 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		Canvas_SendWillRenderCanvases_m2892(NULL /*static, unused*/, /*hidden argument*/&Canvas_SendWillRenderCanvases_m2892_MethodInfo);
		return;
	}
}
// UnityEngine.CanvasGroup
#include "UnityEngine_UnityEngine_CanvasGroup.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CanvasGroup_t293_il2cpp_TypeInfo;
// UnityEngine.CanvasGroup
#include "UnityEngine_UnityEngine_CanvasGroupMethodDeclarations.h"

extern MethodInfo CanvasGroup_get_blocksRaycasts_m2893_MethodInfo;


// System.Boolean UnityEngine.CanvasGroup::get_interactable()
extern MethodInfo CanvasGroup_get_interactable_m1790_MethodInfo;
extern "C" bool CanvasGroup_get_interactable_m1790 (CanvasGroup_t293 * __this, MethodInfo* method)
{
	typedef bool (*CanvasGroup_get_interactable_m1790_ftn) (CanvasGroup_t293 *);
	static CanvasGroup_get_interactable_m1790_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasGroup_get_interactable_m1790_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasGroup::get_interactable()");
	return _il2cpp_icall_func(__this);
}
// System.Boolean UnityEngine.CanvasGroup::get_blocksRaycasts()
extern "C" bool CanvasGroup_get_blocksRaycasts_m2893 (CanvasGroup_t293 * __this, MethodInfo* method)
{
	typedef bool (*CanvasGroup_get_blocksRaycasts_m2893_ftn) (CanvasGroup_t293 *);
	static CanvasGroup_get_blocksRaycasts_m2893_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasGroup_get_blocksRaycasts_m2893_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasGroup::get_blocksRaycasts()");
	return _il2cpp_icall_func(__this);
}
// System.Boolean UnityEngine.CanvasGroup::get_ignoreParentGroups()
extern MethodInfo CanvasGroup_get_ignoreParentGroups_m1515_MethodInfo;
extern "C" bool CanvasGroup_get_ignoreParentGroups_m1515 (CanvasGroup_t293 * __this, MethodInfo* method)
{
	typedef bool (*CanvasGroup_get_ignoreParentGroups_m1515_ftn) (CanvasGroup_t293 *);
	static CanvasGroup_get_ignoreParentGroups_m1515_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasGroup_get_ignoreParentGroups_m1515_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasGroup::get_ignoreParentGroups()");
	return _il2cpp_icall_func(__this);
}
// System.Boolean UnityEngine.CanvasGroup::IsRaycastLocationValid(UnityEngine.Vector2,UnityEngine.Camera)
extern MethodInfo CanvasGroup_IsRaycastLocationValid_m2894_MethodInfo;
extern "C" bool CanvasGroup_IsRaycastLocationValid_m2894 (CanvasGroup_t293 * __this, Vector2_t12  ___sp, Camera_t7 * ___eventCamera, MethodInfo* method)
{
	{
		bool L_0 = CanvasGroup_get_blocksRaycasts_m2893(__this, /*hidden argument*/&CanvasGroup_get_blocksRaycasts_m2893_MethodInfo);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo UIVertex_t161_il2cpp_TypeInfo;
// UnityEngine.UIVertex
#include "UnityEngine_UnityEngine_UIVertexMethodDeclarations.h"

// UnityEngine.Color32
#include "UnityEngine_UnityEngine_Color32.h"
// System.Byte
#include "mscorlib_System_Byte.h"
// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4.h"
extern TypeInfo Color32_t264_il2cpp_TypeInfo;
extern TypeInfo Vector4_t160_il2cpp_TypeInfo;
// UnityEngine.Color32
#include "UnityEngine_UnityEngine_Color32MethodDeclarations.h"
// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4MethodDeclarations.h"
extern MethodInfo Color32__ctor_m1473_MethodInfo;
extern MethodInfo Vector4__ctor_m1511_MethodInfo;
extern MethodInfo Vector3_get_zero_m1343_MethodInfo;
extern MethodInfo Vector3_get_back_m2450_MethodInfo;
extern MethodInfo Vector2_get_zero_m1350_MethodInfo;


// System.Void UnityEngine.UIVertex::.cctor()
extern MethodInfo UIVertex__cctor_m2895_MethodInfo;
extern "C" void UIVertex__cctor_m2895 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	UIVertex_t161  V_0 = {0};
	{
		Color32_t264  L_0 = {0};
		Color32__ctor_m1473(&L_0, ((int32_t)255), ((int32_t)255), ((int32_t)255), ((int32_t)255), /*hidden argument*/&Color32__ctor_m1473_MethodInfo);
		((UIVertex_t161_StaticFields*)InitializedTypeInfo(&UIVertex_t161_il2cpp_TypeInfo)->static_fields)->___s_DefaultColor_6 = L_0;
		Vector4_t160  L_1 = {0};
		Vector4__ctor_m1511(&L_1, (1.0f), (0.0f), (0.0f), (-1.0f), /*hidden argument*/&Vector4__ctor_m1511_MethodInfo);
		((UIVertex_t161_StaticFields*)InitializedTypeInfo(&UIVertex_t161_il2cpp_TypeInfo)->static_fields)->___s_DefaultTangent_7 = L_1;
		Initobj (InitializedTypeInfo(&UIVertex_t161_il2cpp_TypeInfo), (&V_0));
		Vector3_t6  L_2 = Vector3_get_zero_m1343(NULL /*static, unused*/, /*hidden argument*/&Vector3_get_zero_m1343_MethodInfo);
		(&V_0)->___position_0 = L_2;
		Vector3_t6  L_3 = Vector3_get_back_m2450(NULL /*static, unused*/, /*hidden argument*/&Vector3_get_back_m2450_MethodInfo);
		(&V_0)->___normal_1 = L_3;
		Vector4_t160  L_4 = ((UIVertex_t161_StaticFields*)InitializedTypeInfo(&UIVertex_t161_il2cpp_TypeInfo)->static_fields)->___s_DefaultTangent_7;
		(&V_0)->___tangent_5 = L_4;
		Color32_t264  L_5 = ((UIVertex_t161_StaticFields*)InitializedTypeInfo(&UIVertex_t161_il2cpp_TypeInfo)->static_fields)->___s_DefaultColor_6;
		(&V_0)->___color_2 = L_5;
		Vector2_t12  L_6 = Vector2_get_zero_m1350(NULL /*static, unused*/, /*hidden argument*/&Vector2_get_zero_m1350_MethodInfo);
		(&V_0)->___uv0_3 = L_6;
		Vector2_t12  L_7 = Vector2_get_zero_m1350(NULL /*static, unused*/, /*hidden argument*/&Vector2_get_zero_m1350_MethodInfo);
		(&V_0)->___uv1_4 = L_7;
		UIVertex_t161  L_8 = V_0;
		((UIVertex_t161_StaticFields*)InitializedTypeInfo(&UIVertex_t161_il2cpp_TypeInfo)->static_fields)->___simpleVert_8 = L_8;
		return;
	}
}
// UnityEngine.CanvasRenderer
#include "UnityEngine_UnityEngine_CanvasRenderer.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CanvasRenderer_t133_il2cpp_TypeInfo;
// UnityEngine.CanvasRenderer
#include "UnityEngine_UnityEngine_CanvasRendererMethodDeclarations.h"

// UnityEngine.Texture
#include "UnityEngine_UnityEngine_Texture.h"
// System.UInt16
#include "mscorlib_System_UInt16.h"
extern TypeInfo ObjectU5BU5D_t269_il2cpp_TypeInfo;
extern TypeInfo UInt16_t695_il2cpp_TypeInfo;
// UnityEngine.UnityString
#include "UnityEngine_UnityEngine_UnityStringMethodDeclarations.h"
extern Il2CppType ObjectU5BU5D_t269_0_0_0;
extern MethodInfo CanvasRenderer_INTERNAL_CALL_SetColor_m2896_MethodInfo;
extern MethodInfo List_1_get_Count_m1695_MethodInfo;
extern MethodInfo UnityString_Format_m2626_MethodInfo;
extern MethodInfo List_1_Clear_m1527_MethodInfo;
extern MethodInfo CanvasRenderer_SetVerticesInternal_m2897_MethodInfo;
extern MethodInfo CanvasRenderer_SetVerticesInternalArray_m2898_MethodInfo;
extern Il2CppGenericMethod List_1_get_Count_m1695_GenericMethod;
extern Il2CppGenericMethod List_1_Clear_m1527_GenericMethod;


// System.Void UnityEngine.CanvasRenderer::SetColor(UnityEngine.Color)
extern MethodInfo CanvasRenderer_SetColor_m1522_MethodInfo;
extern "C" void CanvasRenderer_SetColor_m1522 (CanvasRenderer_t133 * __this, Color_t109  ___color, MethodInfo* method)
{
	{
		CanvasRenderer_INTERNAL_CALL_SetColor_m2896(NULL /*static, unused*/, __this, (&___color), /*hidden argument*/&CanvasRenderer_INTERNAL_CALL_SetColor_m2896_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.CanvasRenderer::INTERNAL_CALL_SetColor(UnityEngine.CanvasRenderer,UnityEngine.Color&)
extern "C" void CanvasRenderer_INTERNAL_CALL_SetColor_m2896 (Object_t * __this /* static, unused */, CanvasRenderer_t133 * ___self, Color_t109 * ___color, MethodInfo* method)
{
	typedef void (*CanvasRenderer_INTERNAL_CALL_SetColor_m2896_ftn) (CanvasRenderer_t133 *, Color_t109 *);
	static CanvasRenderer_INTERNAL_CALL_SetColor_m2896_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasRenderer_INTERNAL_CALL_SetColor_m2896_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::INTERNAL_CALL_SetColor(UnityEngine.CanvasRenderer,UnityEngine.Color&)");
	_il2cpp_icall_func(___self, ___color);
}
// UnityEngine.Color UnityEngine.CanvasRenderer::GetColor()
extern MethodInfo CanvasRenderer_GetColor_m1520_MethodInfo;
extern "C" Color_t109  CanvasRenderer_GetColor_m1520 (CanvasRenderer_t133 * __this, MethodInfo* method)
{
	typedef Color_t109  (*CanvasRenderer_GetColor_m1520_ftn) (CanvasRenderer_t133 *);
	static CanvasRenderer_GetColor_m1520_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasRenderer_GetColor_m1520_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::GetColor()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.CanvasRenderer::set_isMask(System.Boolean)
extern MethodInfo CanvasRenderer_set_isMask_m1915_MethodInfo;
extern "C" void CanvasRenderer_set_isMask_m1915 (CanvasRenderer_t133 * __this, bool ___value, MethodInfo* method)
{
	typedef void (*CanvasRenderer_set_isMask_m1915_ftn) (CanvasRenderer_t133 *, bool);
	static CanvasRenderer_set_isMask_m1915_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasRenderer_set_isMask_m1915_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::set_isMask(System.Boolean)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.CanvasRenderer::SetMaterial(UnityEngine.Material,UnityEngine.Texture)
extern MethodInfo CanvasRenderer_SetMaterial_m1508_MethodInfo;
extern "C" void CanvasRenderer_SetMaterial_m1508 (CanvasRenderer_t133 * __this, Material_t129 * ___material, Texture_t139 * ___texture, MethodInfo* method)
{
	typedef void (*CanvasRenderer_SetMaterial_m1508_ftn) (CanvasRenderer_t133 *, Material_t129 *, Texture_t139 *);
	static CanvasRenderer_SetMaterial_m1508_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasRenderer_SetMaterial_m1508_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::SetMaterial(UnityEngine.Material,UnityEngine.Texture)");
	_il2cpp_icall_func(__this, ___material, ___texture);
}
// System.Void UnityEngine.CanvasRenderer::SetVertices(System.Collections.Generic.List`1<UnityEngine.UIVertex>)
extern MethodInfo CanvasRenderer_SetVertices_m1507_MethodInfo;
extern TypeInfo* ObjectU5BU5D_t269_il2cpp_TypeInfo_var;
extern MethodInfo* List_1_get_Count_m1695_MethodInfo_var;
extern MethodInfo* List_1_Clear_m1527_MethodInfo_var;
extern "C" void CanvasRenderer_SetVertices_m1507 (CanvasRenderer_t133 * __this, List_1_t140 * ___vertices, MethodInfo* method)
{
	static bool CanvasRenderer_SetVertices_m1507_init;
	if (!CanvasRenderer_SetVertices_m1507_init)
	{
		ObjectU5BU5D_t269_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t269_0_0_0);
		List_1_get_Count_m1695_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1_get_Count_m1695_GenericMethod);
		List_1_Clear_m1527_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1_Clear_m1527_GenericMethod);
		CanvasRenderer_SetVertices_m1507_init = true;
	}
	{
		List_1_t140 * L_0 = ___vertices;
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(List_1_get_Count_m1695_MethodInfo_var, L_0);
		if ((((int32_t)L_1) <= ((int32_t)((int32_t)65535))))
		{
			goto IL_0039;
		}
	}
	{
		ObjectU5BU5D_t269* L_2 = ((ObjectU5BU5D_t269*)SZArrayNew(ObjectU5BU5D_t269_il2cpp_TypeInfo_var, 1));
		uint16_t L_3 = ((int32_t)65535);
		Object_t * L_4 = Box(InitializedTypeInfo(&UInt16_t695_il2cpp_TypeInfo), &L_3);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		ArrayElementTypeCheck (L_2, L_4);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 0)) = (Object_t *)L_4;
		String_t* L_5 = UnityString_Format_m2626(NULL /*static, unused*/, (String_t*) &_stringLiteral190, L_2, /*hidden argument*/&UnityString_Format_m2626_MethodInfo);
		Debug_LogWarning_m1820(NULL /*static, unused*/, L_5, __this, /*hidden argument*/&Debug_LogWarning_m1820_MethodInfo);
		List_1_t140 * L_6 = ___vertices;
		NullCheck(L_6);
		VirtActionInvoker0::Invoke(List_1_Clear_m1527_MethodInfo_var, L_6);
	}

IL_0039:
	{
		List_1_t140 * L_7 = ___vertices;
		CanvasRenderer_SetVerticesInternal_m2897(__this, L_7, /*hidden argument*/&CanvasRenderer_SetVerticesInternal_m2897_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.CanvasRenderer::SetVerticesInternal(System.Object)
extern "C" void CanvasRenderer_SetVerticesInternal_m2897 (CanvasRenderer_t133 * __this, Object_t * ___vertices, MethodInfo* method)
{
	typedef void (*CanvasRenderer_SetVerticesInternal_m2897_ftn) (CanvasRenderer_t133 *, Object_t *);
	static CanvasRenderer_SetVerticesInternal_m2897_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasRenderer_SetVerticesInternal_m2897_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::SetVerticesInternal(System.Object)");
	_il2cpp_icall_func(__this, ___vertices);
}
// System.Void UnityEngine.CanvasRenderer::SetVertices(UnityEngine.UIVertex[],System.Int32)
extern MethodInfo CanvasRenderer_SetVertices_m1649_MethodInfo;
extern TypeInfo* ObjectU5BU5D_t269_il2cpp_TypeInfo_var;
extern "C" void CanvasRenderer_SetVertices_m1649 (CanvasRenderer_t133 * __this, UIVertexU5BU5D_t180* ___vertices, int32_t ___size, MethodInfo* method)
{
	static bool CanvasRenderer_SetVertices_m1649_init;
	if (!CanvasRenderer_SetVertices_m1649_init)
	{
		ObjectU5BU5D_t269_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t269_0_0_0);
		CanvasRenderer_SetVertices_m1649_init = true;
	}
	{
		int32_t L_0 = ___size;
		if ((((int32_t)L_0) <= ((int32_t)((int32_t)65535))))
		{
			goto IL_0031;
		}
	}
	{
		ObjectU5BU5D_t269* L_1 = ((ObjectU5BU5D_t269*)SZArrayNew(ObjectU5BU5D_t269_il2cpp_TypeInfo_var, 1));
		uint16_t L_2 = ((int32_t)65535);
		Object_t * L_3 = Box(InitializedTypeInfo(&UInt16_t695_il2cpp_TypeInfo), &L_2);
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 0);
		ArrayElementTypeCheck (L_1, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_1, 0)) = (Object_t *)L_3;
		String_t* L_4 = UnityString_Format_m2626(NULL /*static, unused*/, (String_t*) &_stringLiteral190, L_1, /*hidden argument*/&UnityString_Format_m2626_MethodInfo);
		Debug_LogWarning_m1820(NULL /*static, unused*/, L_4, __this, /*hidden argument*/&Debug_LogWarning_m1820_MethodInfo);
		___size = 0;
	}

IL_0031:
	{
		UIVertexU5BU5D_t180* L_5 = ___vertices;
		int32_t L_6 = ___size;
		CanvasRenderer_SetVerticesInternalArray_m2898(__this, L_5, L_6, /*hidden argument*/&CanvasRenderer_SetVerticesInternalArray_m2898_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.CanvasRenderer::SetVerticesInternalArray(UnityEngine.UIVertex[],System.Int32)
extern "C" void CanvasRenderer_SetVerticesInternalArray_m2898 (CanvasRenderer_t133 * __this, UIVertexU5BU5D_t180* ___vertices, int32_t ___size, MethodInfo* method)
{
	typedef void (*CanvasRenderer_SetVerticesInternalArray_m2898_ftn) (CanvasRenderer_t133 *, UIVertexU5BU5D_t180*, int32_t);
	static CanvasRenderer_SetVerticesInternalArray_m2898_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasRenderer_SetVerticesInternalArray_m2898_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::SetVerticesInternalArray(UnityEngine.UIVertex[],System.Int32)");
	_il2cpp_icall_func(__this, ___vertices, ___size);
}
// System.Void UnityEngine.CanvasRenderer::Clear()
extern MethodInfo CanvasRenderer_Clear_m1501_MethodInfo;
extern "C" void CanvasRenderer_Clear_m1501 (CanvasRenderer_t133 * __this, MethodInfo* method)
{
	typedef void (*CanvasRenderer_Clear_m1501_ftn) (CanvasRenderer_t133 *);
	static CanvasRenderer_Clear_m1501_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasRenderer_Clear_m1501_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::Clear()");
	_il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.CanvasRenderer::get_absoluteDepth()
extern MethodInfo CanvasRenderer_get_absoluteDepth_m1487_MethodInfo;
extern "C" int32_t CanvasRenderer_get_absoluteDepth_m1487 (CanvasRenderer_t133 * __this, MethodInfo* method)
{
	typedef int32_t (*CanvasRenderer_get_absoluteDepth_m1487_ftn) (CanvasRenderer_t133 *);
	static CanvasRenderer_get_absoluteDepth_m1487_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasRenderer_get_absoluteDepth_m1487_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::get_absoluteDepth()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.RectTransformUtility
#include "UnityEngine_UnityEngine_RectTransformUtility.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo RectTransformUtility_t294_il2cpp_TypeInfo;
// UnityEngine.RectTransformUtility
#include "UnityEngine_UnityEngine_RectTransformUtilityMethodDeclarations.h"

// UnityEngine.Plane
#include "UnityEngine_UnityEngine_Plane.h"
extern TypeInfo Vector3U5BU5D_t199_il2cpp_TypeInfo;
extern TypeInfo Ray_t279_il2cpp_TypeInfo;
// UnityEngine.Plane
#include "UnityEngine_UnityEngine_PlaneMethodDeclarations.h"
// UnityEngine.Camera
#include "UnityEngine_UnityEngine_CameraMethodDeclarations.h"
// UnityEngine.RectTransform
#include "UnityEngine_UnityEngine_RectTransformMethodDeclarations.h"
extern Il2CppType Vector3U5BU5D_t199_0_0_0;
extern MethodInfo RectTransformUtility_INTERNAL_CALL_RectangleContainsScreenPoint_m2900_MethodInfo;
extern MethodInfo RectTransformUtility_PixelAdjustPoint_m2901_MethodInfo;
extern MethodInfo RectTransformUtility_INTERNAL_CALL_PixelAdjustPoint_m2902_MethodInfo;
extern MethodInfo Vector2_op_Implicit_m1421_MethodInfo;
extern MethodInfo RectTransformUtility_ScreenPointToRay_m2904_MethodInfo;
extern MethodInfo Plane__ctor_m1657_MethodInfo;
extern MethodInfo Plane_Raycast_m1658_MethodInfo;
extern MethodInfo Ray_GetPoint_m1659_MethodInfo;
extern MethodInfo RectTransformUtility_ScreenPointToWorldPointInRectangle_m2903_MethodInfo;
extern MethodInfo Vector2_op_Implicit_m1377_MethodInfo;
extern MethodInfo Camera_ScreenPointToRay_m1422_MethodInfo;
extern MethodInfo Ray__ctor_m2543_MethodInfo;
extern MethodInfo RectTransformUtility_FlipLayoutOnAxis_m1757_MethodInfo;
extern MethodInfo RectTransform_get_pivot_m1587_MethodInfo;
extern MethodInfo Vector2_get_Item_m1602_MethodInfo;
extern MethodInfo Vector2_set_Item_m1617_MethodInfo;
extern MethodInfo RectTransform_set_pivot_m1707_MethodInfo;
extern MethodInfo RectTransform_get_anchoredPosition_m1703_MethodInfo;
extern MethodInfo RectTransform_set_anchoredPosition_m1706_MethodInfo;
extern MethodInfo RectTransform_get_anchorMin_m1591_MethodInfo;
extern MethodInfo RectTransform_get_anchorMax_m1702_MethodInfo;
extern MethodInfo RectTransform_set_anchorMin_m1705_MethodInfo;
extern MethodInfo RectTransform_set_anchorMax_m1592_MethodInfo;
extern MethodInfo RectTransformUtility_FlipLayoutAxes_m1756_MethodInfo;
extern MethodInfo RectTransformUtility_GetTransposed_m2905_MethodInfo;
extern MethodInfo RectTransform_get_sizeDelta_m1704_MethodInfo;
extern MethodInfo RectTransform_set_sizeDelta_m1593_MethodInfo;


// System.Void UnityEngine.RectTransformUtility::.cctor()
extern MethodInfo RectTransformUtility__cctor_m2899_MethodInfo;
extern TypeInfo* Vector3U5BU5D_t199_il2cpp_TypeInfo_var;
extern "C" void RectTransformUtility__cctor_m2899 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	static bool RectTransformUtility__cctor_m2899_init;
	if (!RectTransformUtility__cctor_m2899_init)
	{
		Vector3U5BU5D_t199_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Vector3U5BU5D_t199_0_0_0);
		RectTransformUtility__cctor_m2899_init = true;
	}
	{
		((RectTransformUtility_t294_StaticFields*)InitializedTypeInfo(&RectTransformUtility_t294_il2cpp_TypeInfo)->static_fields)->___s_Corners_0 = ((Vector3U5BU5D_t199*)SZArrayNew(Vector3U5BU5D_t199_il2cpp_TypeInfo_var, 4));
		return;
	}
}
// System.Boolean UnityEngine.RectTransformUtility::RectangleContainsScreenPoint(UnityEngine.RectTransform,UnityEngine.Vector2,UnityEngine.Camera)
extern MethodInfo RectTransformUtility_RectangleContainsScreenPoint_m1561_MethodInfo;
extern "C" bool RectTransformUtility_RectangleContainsScreenPoint_m1561 (Object_t * __this /* static, unused */, RectTransform_t132 * ___rect, Vector2_t12  ___screenPoint, Camera_t7 * ___cam, MethodInfo* method)
{
	{
		RectTransform_t132 * L_0 = ___rect;
		Camera_t7 * L_1 = ___cam;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RectTransformUtility_t294_il2cpp_TypeInfo));
		bool L_2 = RectTransformUtility_INTERNAL_CALL_RectangleContainsScreenPoint_m2900(NULL /*static, unused*/, L_0, (&___screenPoint), L_1, /*hidden argument*/&RectTransformUtility_INTERNAL_CALL_RectangleContainsScreenPoint_m2900_MethodInfo);
		return L_2;
	}
}
// System.Boolean UnityEngine.RectTransformUtility::INTERNAL_CALL_RectangleContainsScreenPoint(UnityEngine.RectTransform,UnityEngine.Vector2&,UnityEngine.Camera)
extern "C" bool RectTransformUtility_INTERNAL_CALL_RectangleContainsScreenPoint_m2900 (Object_t * __this /* static, unused */, RectTransform_t132 * ___rect, Vector2_t12 * ___screenPoint, Camera_t7 * ___cam, MethodInfo* method)
{
	typedef bool (*RectTransformUtility_INTERNAL_CALL_RectangleContainsScreenPoint_m2900_ftn) (RectTransform_t132 *, Vector2_t12 *, Camera_t7 *);
	static RectTransformUtility_INTERNAL_CALL_RectangleContainsScreenPoint_m2900_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectTransformUtility_INTERNAL_CALL_RectangleContainsScreenPoint_m2900_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectTransformUtility::INTERNAL_CALL_RectangleContainsScreenPoint(UnityEngine.RectTransform,UnityEngine.Vector2&,UnityEngine.Camera)");
	return _il2cpp_icall_func(___rect, ___screenPoint, ___cam);
}
// UnityEngine.Vector2 UnityEngine.RectTransformUtility::PixelAdjustPoint(UnityEngine.Vector2,UnityEngine.Transform,UnityEngine.Canvas)
extern MethodInfo RectTransformUtility_PixelAdjustPoint_m1518_MethodInfo;
extern "C" Vector2_t12  RectTransformUtility_PixelAdjustPoint_m1518 (Object_t * __this /* static, unused */, Vector2_t12  ___point, Transform_t8 * ___elementTransform, Canvas_t134 * ___canvas, MethodInfo* method)
{
	Vector2_t12  V_0 = {0};
	{
		Vector2_t12  L_0 = ___point;
		Transform_t8 * L_1 = ___elementTransform;
		Canvas_t134 * L_2 = ___canvas;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RectTransformUtility_t294_il2cpp_TypeInfo));
		RectTransformUtility_PixelAdjustPoint_m2901(NULL /*static, unused*/, L_0, L_1, L_2, (&V_0), /*hidden argument*/&RectTransformUtility_PixelAdjustPoint_m2901_MethodInfo);
		Vector2_t12  L_3 = V_0;
		return L_3;
	}
}
// System.Void UnityEngine.RectTransformUtility::PixelAdjustPoint(UnityEngine.Vector2,UnityEngine.Transform,UnityEngine.Canvas,UnityEngine.Vector2&)
extern "C" void RectTransformUtility_PixelAdjustPoint_m2901 (Object_t * __this /* static, unused */, Vector2_t12  ___point, Transform_t8 * ___elementTransform, Canvas_t134 * ___canvas, Vector2_t12 * ___output, MethodInfo* method)
{
	{
		Transform_t8 * L_0 = ___elementTransform;
		Canvas_t134 * L_1 = ___canvas;
		Vector2_t12 * L_2 = ___output;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RectTransformUtility_t294_il2cpp_TypeInfo));
		RectTransformUtility_INTERNAL_CALL_PixelAdjustPoint_m2902(NULL /*static, unused*/, (&___point), L_0, L_1, L_2, /*hidden argument*/&RectTransformUtility_INTERNAL_CALL_PixelAdjustPoint_m2902_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.RectTransformUtility::INTERNAL_CALL_PixelAdjustPoint(UnityEngine.Vector2&,UnityEngine.Transform,UnityEngine.Canvas,UnityEngine.Vector2&)
extern "C" void RectTransformUtility_INTERNAL_CALL_PixelAdjustPoint_m2902 (Object_t * __this /* static, unused */, Vector2_t12 * ___point, Transform_t8 * ___elementTransform, Canvas_t134 * ___canvas, Vector2_t12 * ___output, MethodInfo* method)
{
	typedef void (*RectTransformUtility_INTERNAL_CALL_PixelAdjustPoint_m2902_ftn) (Vector2_t12 *, Transform_t8 *, Canvas_t134 *, Vector2_t12 *);
	static RectTransformUtility_INTERNAL_CALL_PixelAdjustPoint_m2902_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectTransformUtility_INTERNAL_CALL_PixelAdjustPoint_m2902_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectTransformUtility::INTERNAL_CALL_PixelAdjustPoint(UnityEngine.Vector2&,UnityEngine.Transform,UnityEngine.Canvas,UnityEngine.Vector2&)");
	_il2cpp_icall_func(___point, ___elementTransform, ___canvas, ___output);
}
// UnityEngine.Rect UnityEngine.RectTransformUtility::PixelAdjustRect(UnityEngine.RectTransform,UnityEngine.Canvas)
extern MethodInfo RectTransformUtility_PixelAdjustRect_m1519_MethodInfo;
extern "C" Rect_t141  RectTransformUtility_PixelAdjustRect_m1519 (Object_t * __this /* static, unused */, RectTransform_t132 * ___rectTransform, Canvas_t134 * ___canvas, MethodInfo* method)
{
	typedef Rect_t141  (*RectTransformUtility_PixelAdjustRect_m1519_ftn) (RectTransform_t132 *, Canvas_t134 *);
	static RectTransformUtility_PixelAdjustRect_m1519_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectTransformUtility_PixelAdjustRect_m1519_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectTransformUtility::PixelAdjustRect(UnityEngine.RectTransform,UnityEngine.Canvas)");
	return _il2cpp_icall_func(___rectTransform, ___canvas);
}
// System.Boolean UnityEngine.RectTransformUtility::ScreenPointToWorldPointInRectangle(UnityEngine.RectTransform,UnityEngine.Vector2,UnityEngine.Camera,UnityEngine.Vector3&)
extern "C" bool RectTransformUtility_ScreenPointToWorldPointInRectangle_m2903 (Object_t * __this /* static, unused */, RectTransform_t132 * ___rect, Vector2_t12  ___screenPoint, Camera_t7 * ___cam, Vector3_t6 * ___worldPoint, MethodInfo* method)
{
	Ray_t279  V_0 = {0};
	Plane_t310  V_1 = {0};
	float V_2 = 0.0f;
	{
		Vector3_t6 * L_0 = ___worldPoint;
		Vector2_t12  L_1 = Vector2_get_zero_m1350(NULL /*static, unused*/, /*hidden argument*/&Vector2_get_zero_m1350_MethodInfo);
		Vector3_t6  L_2 = Vector2_op_Implicit_m1421(NULL /*static, unused*/, L_1, /*hidden argument*/&Vector2_op_Implicit_m1421_MethodInfo);
		*L_0 = L_2;
		Camera_t7 * L_3 = ___cam;
		Vector2_t12  L_4 = ___screenPoint;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RectTransformUtility_t294_il2cpp_TypeInfo));
		Ray_t279  L_5 = RectTransformUtility_ScreenPointToRay_m2904(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/&RectTransformUtility_ScreenPointToRay_m2904_MethodInfo);
		V_0 = L_5;
		RectTransform_t132 * L_6 = ___rect;
		NullCheck(L_6);
		Quaternion_t19  L_7 = Transform_get_rotation_m1552(L_6, /*hidden argument*/&Transform_get_rotation_m1552_MethodInfo);
		Vector3_t6  L_8 = Vector3_get_back_m2450(NULL /*static, unused*/, /*hidden argument*/&Vector3_get_back_m2450_MethodInfo);
		Vector3_t6  L_9 = Quaternion_op_Multiply_m1554(NULL /*static, unused*/, L_7, L_8, /*hidden argument*/&Quaternion_op_Multiply_m1554_MethodInfo);
		RectTransform_t132 * L_10 = ___rect;
		NullCheck(L_10);
		Vector3_t6  L_11 = Transform_get_position_m40(L_10, /*hidden argument*/&Transform_get_position_m40_MethodInfo);
		Plane__ctor_m1657((&V_1), L_9, L_11, /*hidden argument*/&Plane__ctor_m1657_MethodInfo);
		Ray_t279  L_12 = V_0;
		bool L_13 = Plane_Raycast_m1658((&V_1), L_12, (&V_2), /*hidden argument*/&Plane_Raycast_m1658_MethodInfo);
		if (L_13)
		{
			goto IL_0046;
		}
	}
	{
		return 0;
	}

IL_0046:
	{
		Vector3_t6 * L_14 = ___worldPoint;
		float L_15 = V_2;
		Vector3_t6  L_16 = Ray_GetPoint_m1659((&V_0), L_15, /*hidden argument*/&Ray_GetPoint_m1659_MethodInfo);
		*L_14 = L_16;
		return 1;
	}
}
// System.Boolean UnityEngine.RectTransformUtility::ScreenPointToLocalPointInRectangle(UnityEngine.RectTransform,UnityEngine.Vector2,UnityEngine.Camera,UnityEngine.Vector2&)
extern MethodInfo RectTransformUtility_ScreenPointToLocalPointInRectangle_m1607_MethodInfo;
extern "C" bool RectTransformUtility_ScreenPointToLocalPointInRectangle_m1607 (Object_t * __this /* static, unused */, RectTransform_t132 * ___rect, Vector2_t12  ___screenPoint, Camera_t7 * ___cam, Vector2_t12 * ___localPoint, MethodInfo* method)
{
	Vector3_t6  V_0 = {0};
	{
		Vector2_t12 * L_0 = ___localPoint;
		Vector2_t12  L_1 = Vector2_get_zero_m1350(NULL /*static, unused*/, /*hidden argument*/&Vector2_get_zero_m1350_MethodInfo);
		*L_0 = L_1;
		RectTransform_t132 * L_2 = ___rect;
		Vector2_t12  L_3 = ___screenPoint;
		Camera_t7 * L_4 = ___cam;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RectTransformUtility_t294_il2cpp_TypeInfo));
		bool L_5 = RectTransformUtility_ScreenPointToWorldPointInRectangle_m2903(NULL /*static, unused*/, L_2, L_3, L_4, (&V_0), /*hidden argument*/&RectTransformUtility_ScreenPointToWorldPointInRectangle_m2903_MethodInfo);
		if (!L_5)
		{
			goto IL_002e;
		}
	}
	{
		Vector2_t12 * L_6 = ___localPoint;
		RectTransform_t132 * L_7 = ___rect;
		Vector3_t6  L_8 = V_0;
		NullCheck(L_7);
		Vector3_t6  L_9 = Transform_InverseTransformPoint_m1656(L_7, L_8, /*hidden argument*/&Transform_InverseTransformPoint_m1656_MethodInfo);
		Vector2_t12  L_10 = Vector2_op_Implicit_m1377(NULL /*static, unused*/, L_9, /*hidden argument*/&Vector2_op_Implicit_m1377_MethodInfo);
		*L_6 = L_10;
		return 1;
	}

IL_002e:
	{
		return 0;
	}
}
// UnityEngine.Ray UnityEngine.RectTransformUtility::ScreenPointToRay(UnityEngine.Camera,UnityEngine.Vector2)
extern "C" Ray_t279  RectTransformUtility_ScreenPointToRay_m2904 (Object_t * __this /* static, unused */, Camera_t7 * ___cam, Vector2_t12  ___screenPos, MethodInfo* method)
{
	Vector3_t6  V_0 = {0};
	{
		Camera_t7 * L_0 = ___cam;
		bool L_1 = Object_op_Inequality_m1268(NULL /*static, unused*/, L_0, (Object_t20 *)NULL, /*hidden argument*/&Object_op_Inequality_m1268_MethodInfo);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		Camera_t7 * L_2 = ___cam;
		Vector2_t12  L_3 = ___screenPos;
		Vector3_t6  L_4 = Vector2_op_Implicit_m1421(NULL /*static, unused*/, L_3, /*hidden argument*/&Vector2_op_Implicit_m1421_MethodInfo);
		NullCheck(L_2);
		Ray_t279  L_5 = Camera_ScreenPointToRay_m1422(L_2, L_4, /*hidden argument*/&Camera_ScreenPointToRay_m1422_MethodInfo);
		return L_5;
	}

IL_0019:
	{
		Vector2_t12  L_6 = ___screenPos;
		Vector3_t6  L_7 = Vector2_op_Implicit_m1421(NULL /*static, unused*/, L_6, /*hidden argument*/&Vector2_op_Implicit_m1421_MethodInfo);
		V_0 = L_7;
		Vector3_t6 * L_8 = (&V_0);
		float L_9 = (L_8->___z_3);
		L_8->___z_3 = ((float)((float)L_9-(float)(100.0f)));
		Vector3_t6  L_10 = V_0;
		Vector3_t6  L_11 = Vector3_get_forward_m1553(NULL /*static, unused*/, /*hidden argument*/&Vector3_get_forward_m1553_MethodInfo);
		Ray_t279  L_12 = {0};
		Ray__ctor_m2543(&L_12, L_10, L_11, /*hidden argument*/&Ray__ctor_m2543_MethodInfo);
		return L_12;
	}
}
// System.Void UnityEngine.RectTransformUtility::FlipLayoutOnAxis(UnityEngine.RectTransform,System.Int32,System.Boolean,System.Boolean)
extern "C" void RectTransformUtility_FlipLayoutOnAxis_m1757 (Object_t * __this /* static, unused */, RectTransform_t132 * ___rect, int32_t ___axis, bool ___keepPositioning, bool ___recursive, MethodInfo* method)
{
	int32_t V_0 = 0;
	RectTransform_t132 * V_1 = {0};
	Vector2_t12  V_2 = {0};
	Vector2_t12  V_3 = {0};
	Vector2_t12  V_4 = {0};
	Vector2_t12  V_5 = {0};
	float V_6 = 0.0f;
	{
		RectTransform_t132 * L_0 = ___rect;
		bool L_1 = Object_op_Equality_m1267(NULL /*static, unused*/, L_0, (Object_t20 *)NULL, /*hidden argument*/&Object_op_Equality_m1267_MethodInfo);
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		return;
	}

IL_000d:
	{
		bool L_2 = ___recursive;
		if (!L_2)
		{
			goto IL_004c;
		}
	}
	{
		V_0 = 0;
		goto IL_0040;
	}

IL_001a:
	{
		RectTransform_t132 * L_3 = ___rect;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		Transform_t8 * L_5 = Transform_GetChild_m1888(L_3, L_4, /*hidden argument*/&Transform_GetChild_m1888_MethodInfo);
		V_1 = ((RectTransform_t132 *)IsInst(L_5, InitializedTypeInfo(&RectTransform_t132_il2cpp_TypeInfo)));
		RectTransform_t132 * L_6 = V_1;
		bool L_7 = Object_op_Inequality_m1268(NULL /*static, unused*/, L_6, (Object_t20 *)NULL, /*hidden argument*/&Object_op_Inequality_m1268_MethodInfo);
		if (!L_7)
		{
			goto IL_003c;
		}
	}
	{
		RectTransform_t132 * L_8 = V_1;
		int32_t L_9 = ___axis;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RectTransformUtility_t294_il2cpp_TypeInfo));
		RectTransformUtility_FlipLayoutOnAxis_m1757(NULL /*static, unused*/, L_8, L_9, 0, 1, /*hidden argument*/&RectTransformUtility_FlipLayoutOnAxis_m1757_MethodInfo);
	}

IL_003c:
	{
		int32_t L_10 = V_0;
		V_0 = ((int32_t)((int32_t)L_10+(int32_t)1));
	}

IL_0040:
	{
		int32_t L_11 = V_0;
		RectTransform_t132 * L_12 = ___rect;
		NullCheck(L_12);
		int32_t L_13 = Transform_get_childCount_m1891(L_12, /*hidden argument*/&Transform_get_childCount_m1891_MethodInfo);
		if ((((int32_t)L_11) < ((int32_t)L_13)))
		{
			goto IL_001a;
		}
	}

IL_004c:
	{
		RectTransform_t132 * L_14 = ___rect;
		NullCheck(L_14);
		Vector2_t12  L_15 = RectTransform_get_pivot_m1587(L_14, /*hidden argument*/&RectTransform_get_pivot_m1587_MethodInfo);
		V_2 = L_15;
		int32_t L_16 = ___axis;
		int32_t L_17 = ___axis;
		float L_18 = Vector2_get_Item_m1602((&V_2), L_17, /*hidden argument*/&Vector2_get_Item_m1602_MethodInfo);
		Vector2_set_Item_m1617((&V_2), L_16, ((float)((float)(1.0f)-(float)L_18)), /*hidden argument*/&Vector2_set_Item_m1617_MethodInfo);
		RectTransform_t132 * L_19 = ___rect;
		Vector2_t12  L_20 = V_2;
		NullCheck(L_19);
		RectTransform_set_pivot_m1707(L_19, L_20, /*hidden argument*/&RectTransform_set_pivot_m1707_MethodInfo);
		bool L_21 = ___keepPositioning;
		if (!L_21)
		{
			goto IL_0077;
		}
	}
	{
		return;
	}

IL_0077:
	{
		RectTransform_t132 * L_22 = ___rect;
		NullCheck(L_22);
		Vector2_t12  L_23 = RectTransform_get_anchoredPosition_m1703(L_22, /*hidden argument*/&RectTransform_get_anchoredPosition_m1703_MethodInfo);
		V_3 = L_23;
		int32_t L_24 = ___axis;
		int32_t L_25 = ___axis;
		float L_26 = Vector2_get_Item_m1602((&V_3), L_25, /*hidden argument*/&Vector2_get_Item_m1602_MethodInfo);
		Vector2_set_Item_m1617((&V_3), L_24, ((-L_26)), /*hidden argument*/&Vector2_set_Item_m1617_MethodInfo);
		RectTransform_t132 * L_27 = ___rect;
		Vector2_t12  L_28 = V_3;
		NullCheck(L_27);
		RectTransform_set_anchoredPosition_m1706(L_27, L_28, /*hidden argument*/&RectTransform_set_anchoredPosition_m1706_MethodInfo);
		RectTransform_t132 * L_29 = ___rect;
		NullCheck(L_29);
		Vector2_t12  L_30 = RectTransform_get_anchorMin_m1591(L_29, /*hidden argument*/&RectTransform_get_anchorMin_m1591_MethodInfo);
		V_4 = L_30;
		RectTransform_t132 * L_31 = ___rect;
		NullCheck(L_31);
		Vector2_t12  L_32 = RectTransform_get_anchorMax_m1702(L_31, /*hidden argument*/&RectTransform_get_anchorMax_m1702_MethodInfo);
		V_5 = L_32;
		int32_t L_33 = ___axis;
		float L_34 = Vector2_get_Item_m1602((&V_4), L_33, /*hidden argument*/&Vector2_get_Item_m1602_MethodInfo);
		V_6 = L_34;
		int32_t L_35 = ___axis;
		int32_t L_36 = ___axis;
		float L_37 = Vector2_get_Item_m1602((&V_5), L_36, /*hidden argument*/&Vector2_get_Item_m1602_MethodInfo);
		Vector2_set_Item_m1617((&V_4), L_35, ((float)((float)(1.0f)-(float)L_37)), /*hidden argument*/&Vector2_set_Item_m1617_MethodInfo);
		int32_t L_38 = ___axis;
		float L_39 = V_6;
		Vector2_set_Item_m1617((&V_5), L_38, ((float)((float)(1.0f)-(float)L_39)), /*hidden argument*/&Vector2_set_Item_m1617_MethodInfo);
		RectTransform_t132 * L_40 = ___rect;
		Vector2_t12  L_41 = V_4;
		NullCheck(L_40);
		RectTransform_set_anchorMin_m1705(L_40, L_41, /*hidden argument*/&RectTransform_set_anchorMin_m1705_MethodInfo);
		RectTransform_t132 * L_42 = ___rect;
		Vector2_t12  L_43 = V_5;
		NullCheck(L_42);
		RectTransform_set_anchorMax_m1592(L_42, L_43, /*hidden argument*/&RectTransform_set_anchorMax_m1592_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.RectTransformUtility::FlipLayoutAxes(UnityEngine.RectTransform,System.Boolean,System.Boolean)
extern "C" void RectTransformUtility_FlipLayoutAxes_m1756 (Object_t * __this /* static, unused */, RectTransform_t132 * ___rect, bool ___keepPositioning, bool ___recursive, MethodInfo* method)
{
	int32_t V_0 = 0;
	RectTransform_t132 * V_1 = {0};
	{
		RectTransform_t132 * L_0 = ___rect;
		bool L_1 = Object_op_Equality_m1267(NULL /*static, unused*/, L_0, (Object_t20 *)NULL, /*hidden argument*/&Object_op_Equality_m1267_MethodInfo);
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		return;
	}

IL_000d:
	{
		bool L_2 = ___recursive;
		if (!L_2)
		{
			goto IL_004b;
		}
	}
	{
		V_0 = 0;
		goto IL_003f;
	}

IL_001a:
	{
		RectTransform_t132 * L_3 = ___rect;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		Transform_t8 * L_5 = Transform_GetChild_m1888(L_3, L_4, /*hidden argument*/&Transform_GetChild_m1888_MethodInfo);
		V_1 = ((RectTransform_t132 *)IsInst(L_5, InitializedTypeInfo(&RectTransform_t132_il2cpp_TypeInfo)));
		RectTransform_t132 * L_6 = V_1;
		bool L_7 = Object_op_Inequality_m1268(NULL /*static, unused*/, L_6, (Object_t20 *)NULL, /*hidden argument*/&Object_op_Inequality_m1268_MethodInfo);
		if (!L_7)
		{
			goto IL_003b;
		}
	}
	{
		RectTransform_t132 * L_8 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RectTransformUtility_t294_il2cpp_TypeInfo));
		RectTransformUtility_FlipLayoutAxes_m1756(NULL /*static, unused*/, L_8, 0, 1, /*hidden argument*/&RectTransformUtility_FlipLayoutAxes_m1756_MethodInfo);
	}

IL_003b:
	{
		int32_t L_9 = V_0;
		V_0 = ((int32_t)((int32_t)L_9+(int32_t)1));
	}

IL_003f:
	{
		int32_t L_10 = V_0;
		RectTransform_t132 * L_11 = ___rect;
		NullCheck(L_11);
		int32_t L_12 = Transform_get_childCount_m1891(L_11, /*hidden argument*/&Transform_get_childCount_m1891_MethodInfo);
		if ((((int32_t)L_10) < ((int32_t)L_12)))
		{
			goto IL_001a;
		}
	}

IL_004b:
	{
		RectTransform_t132 * L_13 = ___rect;
		RectTransform_t132 * L_14 = ___rect;
		NullCheck(L_14);
		Vector2_t12  L_15 = RectTransform_get_pivot_m1587(L_14, /*hidden argument*/&RectTransform_get_pivot_m1587_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RectTransformUtility_t294_il2cpp_TypeInfo));
		Vector2_t12  L_16 = RectTransformUtility_GetTransposed_m2905(NULL /*static, unused*/, L_15, /*hidden argument*/&RectTransformUtility_GetTransposed_m2905_MethodInfo);
		NullCheck(L_13);
		RectTransform_set_pivot_m1707(L_13, L_16, /*hidden argument*/&RectTransform_set_pivot_m1707_MethodInfo);
		RectTransform_t132 * L_17 = ___rect;
		RectTransform_t132 * L_18 = ___rect;
		NullCheck(L_18);
		Vector2_t12  L_19 = RectTransform_get_sizeDelta_m1704(L_18, /*hidden argument*/&RectTransform_get_sizeDelta_m1704_MethodInfo);
		Vector2_t12  L_20 = RectTransformUtility_GetTransposed_m2905(NULL /*static, unused*/, L_19, /*hidden argument*/&RectTransformUtility_GetTransposed_m2905_MethodInfo);
		NullCheck(L_17);
		RectTransform_set_sizeDelta_m1593(L_17, L_20, /*hidden argument*/&RectTransform_set_sizeDelta_m1593_MethodInfo);
		bool L_21 = ___keepPositioning;
		if (!L_21)
		{
			goto IL_0074;
		}
	}
	{
		return;
	}

IL_0074:
	{
		RectTransform_t132 * L_22 = ___rect;
		RectTransform_t132 * L_23 = ___rect;
		NullCheck(L_23);
		Vector2_t12  L_24 = RectTransform_get_anchoredPosition_m1703(L_23, /*hidden argument*/&RectTransform_get_anchoredPosition_m1703_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RectTransformUtility_t294_il2cpp_TypeInfo));
		Vector2_t12  L_25 = RectTransformUtility_GetTransposed_m2905(NULL /*static, unused*/, L_24, /*hidden argument*/&RectTransformUtility_GetTransposed_m2905_MethodInfo);
		NullCheck(L_22);
		RectTransform_set_anchoredPosition_m1706(L_22, L_25, /*hidden argument*/&RectTransform_set_anchoredPosition_m1706_MethodInfo);
		RectTransform_t132 * L_26 = ___rect;
		RectTransform_t132 * L_27 = ___rect;
		NullCheck(L_27);
		Vector2_t12  L_28 = RectTransform_get_anchorMin_m1591(L_27, /*hidden argument*/&RectTransform_get_anchorMin_m1591_MethodInfo);
		Vector2_t12  L_29 = RectTransformUtility_GetTransposed_m2905(NULL /*static, unused*/, L_28, /*hidden argument*/&RectTransformUtility_GetTransposed_m2905_MethodInfo);
		NullCheck(L_26);
		RectTransform_set_anchorMin_m1705(L_26, L_29, /*hidden argument*/&RectTransform_set_anchorMin_m1705_MethodInfo);
		RectTransform_t132 * L_30 = ___rect;
		RectTransform_t132 * L_31 = ___rect;
		NullCheck(L_31);
		Vector2_t12  L_32 = RectTransform_get_anchorMax_m1702(L_31, /*hidden argument*/&RectTransform_get_anchorMax_m1702_MethodInfo);
		Vector2_t12  L_33 = RectTransformUtility_GetTransposed_m2905(NULL /*static, unused*/, L_32, /*hidden argument*/&RectTransformUtility_GetTransposed_m2905_MethodInfo);
		NullCheck(L_30);
		RectTransform_set_anchorMax_m1592(L_30, L_33, /*hidden argument*/&RectTransform_set_anchorMax_m1592_MethodInfo);
		return;
	}
}
// UnityEngine.Vector2 UnityEngine.RectTransformUtility::GetTransposed(UnityEngine.Vector2)
extern "C" Vector2_t12  RectTransformUtility_GetTransposed_m2905 (Object_t * __this /* static, unused */, Vector2_t12  ___input, MethodInfo* method)
{
	{
		float L_0 = ((&___input)->___y_2);
		float L_1 = ((&___input)->___x_1);
		Vector2_t12  L_2 = {0};
		Vector2__ctor_m1356(&L_2, L_0, L_1, /*hidden argument*/&Vector2__ctor_m1356_MethodInfo);
		return L_2;
	}
}
// UnityEngine.Networking.Match.Request
#include "UnityEngine_UnityEngine_Networking_Match_Request.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Request_t560_il2cpp_TypeInfo;
// UnityEngine.Networking.Match.Request
#include "UnityEngine_UnityEngine_Networking_Match_RequestMethodDeclarations.h"

// UnityEngine.Networking.Types.SourceID
#include "UnityEngine_UnityEngine_Networking_Types_SourceID.h"
// UnityEngine.Networking.Types.AppID
#include "UnityEngine_UnityEngine_Networking_Types_AppID.h"
extern TypeInfo SourceID_t579_il2cpp_TypeInfo;
extern TypeInfo AppID_t578_il2cpp_TypeInfo;
// System.Enum
#include "mscorlib_System_EnumMethodDeclarations.h"
extern MethodInfo Object_ToString_m1967_MethodInfo;
extern MethodInfo Request_get_sourceId_m2907_MethodInfo;
extern MethodInfo Enum_ToString_m3418_MethodInfo;
extern MethodInfo Request_get_appId_m2908_MethodInfo;
extern MethodInfo Request_get_domain_m2909_MethodInfo;


// System.Void UnityEngine.Networking.Match.Request::.ctor()
extern MethodInfo Request__ctor_m2906_MethodInfo;
extern "C" void Request__ctor_m2906 (Request_t560 * __this, MethodInfo* method)
{
	{
		__this->___version_0 = 1;
		Object__ctor_m1289(__this, /*hidden argument*/&Object__ctor_m1289_MethodInfo);
		return;
	}
}
// UnityEngine.Networking.Types.SourceID UnityEngine.Networking.Match.Request::get_sourceId()
extern "C" uint64_t Request_get_sourceId_m2907 (Request_t560 * __this, MethodInfo* method)
{
	{
		uint64_t L_0 = (__this->___U3CsourceIdU3Ek__BackingField_1);
		return L_0;
	}
}
// UnityEngine.Networking.Types.AppID UnityEngine.Networking.Match.Request::get_appId()
extern "C" uint64_t Request_get_appId_m2908 (Request_t560 * __this, MethodInfo* method)
{
	{
		uint64_t L_0 = (__this->___U3CappIdU3Ek__BackingField_2);
		return L_0;
	}
}
// System.Int32 UnityEngine.Networking.Match.Request::get_domain()
extern "C" int32_t Request_get_domain_m2909 (Request_t560 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___U3CdomainU3Ek__BackingField_3);
		return L_0;
	}
}
// System.String UnityEngine.Networking.Match.Request::ToString()
extern MethodInfo Request_ToString_m2910_MethodInfo;
extern TypeInfo* ObjectU5BU5D_t269_il2cpp_TypeInfo_var;
extern "C" String_t* Request_ToString_m2910 (Request_t560 * __this, MethodInfo* method)
{
	static bool Request_ToString_m2910_init;
	if (!Request_ToString_m2910_init)
	{
		ObjectU5BU5D_t269_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t269_0_0_0);
		Request_ToString_m2910_init = true;
	}
	{
		ObjectU5BU5D_t269* L_0 = ((ObjectU5BU5D_t269*)SZArrayNew(ObjectU5BU5D_t269_il2cpp_TypeInfo_var, 4));
		String_t* L_1 = Object_ToString_m1967(__this, /*hidden argument*/&Object_ToString_m1967_MethodInfo);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t269* L_2 = L_0;
		uint64_t L_3 = Request_get_sourceId_m2907(__this, /*hidden argument*/&Request_get_sourceId_m2907_MethodInfo);
		uint64_t L_4 = L_3;
		Object_t * L_5 = Box(InitializedTypeInfo(&SourceID_t579_il2cpp_TypeInfo), &L_4);
		NullCheck(L_5);
		String_t* L_6 = Enum_ToString_m3418(L_5, (String_t*) &_stringLiteral192, /*hidden argument*/&Enum_ToString_m3418_MethodInfo);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_6);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_6;
		ObjectU5BU5D_t269* L_7 = L_2;
		uint64_t L_8 = Request_get_appId_m2908(__this, /*hidden argument*/&Request_get_appId_m2908_MethodInfo);
		uint64_t L_9 = L_8;
		Object_t * L_10 = Box(InitializedTypeInfo(&AppID_t578_il2cpp_TypeInfo), &L_9);
		NullCheck(L_10);
		String_t* L_11 = Enum_ToString_m3418(L_10, (String_t*) &_stringLiteral192, /*hidden argument*/&Enum_ToString_m3418_MethodInfo);
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 2);
		ArrayElementTypeCheck (L_7, L_11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_7, 2)) = (Object_t *)L_11;
		ObjectU5BU5D_t269* L_12 = L_7;
		int32_t L_13 = Request_get_domain_m2909(__this, /*hidden argument*/&Request_get_domain_m2909_MethodInfo);
		int32_t L_14 = L_13;
		Object_t * L_15 = Box(InitializedTypeInfo(&Int32_t17_il2cpp_TypeInfo), &L_14);
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 3);
		ArrayElementTypeCheck (L_12, L_15);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_12, 3)) = (Object_t *)L_15;
		String_t* L_16 = UnityString_Format_m2626(NULL /*static, unused*/, (String_t*) &_stringLiteral191, L_12, /*hidden argument*/&UnityString_Format_m2626_MethodInfo);
		return L_16;
	}
}
// UnityEngine.Networking.Match.ResponseBase
#include "UnityEngine_UnityEngine_Networking_Match_ResponseBase.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ResponseBase_t561_il2cpp_TypeInfo;
// UnityEngine.Networking.Match.ResponseBase
#include "UnityEngine_UnityEngine_Networking_Match_ResponseBaseMethodDeclarations.h"

// System.FormatException
#include "mscorlib_System_FormatException.h"
// System.UInt64
#include "mscorlib_System_UInt64.h"
extern TypeInfo IDictionary_2_t562_il2cpp_TypeInfo;
extern TypeInfo FormatException_t696_il2cpp_TypeInfo;
extern TypeInfo Convert_t689_il2cpp_TypeInfo;
// System.FormatException
#include "mscorlib_System_FormatExceptionMethodDeclarations.h"
// System.Convert
#include "mscorlib_System_ConvertMethodDeclarations.h"
extern Il2CppType IDictionary_2_t562_0_0_0;
extern MethodInfo IDictionary_2_TryGetValue_m3419_MethodInfo;
extern MethodInfo String_Concat_m1678_MethodInfo;
extern MethodInfo FormatException__ctor_m3420_MethodInfo;
extern MethodInfo Convert_ToInt32_m3421_MethodInfo;
extern MethodInfo Convert_ToUInt16_m3422_MethodInfo;
extern MethodInfo Convert_ToUInt64_m3423_MethodInfo;
extern MethodInfo Convert_ToBoolean_m3424_MethodInfo;
extern Il2CppGenericMethod IDictionary_2_TryGetValue_m3419_GenericMethod;


// System.Void UnityEngine.Networking.Match.ResponseBase::.ctor()
extern MethodInfo ResponseBase__ctor_m2911_MethodInfo;
extern "C" void ResponseBase__ctor_m2911 (ResponseBase_t561 * __this, MethodInfo* method)
{
	{
		Object__ctor_m1289(__this, /*hidden argument*/&Object__ctor_m1289_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Networking.Match.ResponseBase::Parse(System.Object)
// System.String UnityEngine.Networking.Match.ResponseBase::ParseJSONString(System.String,System.Object,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern MethodInfo ResponseBase_ParseJSONString_m2912_MethodInfo;
extern MethodInfo* IDictionary_2_TryGetValue_m3419_MethodInfo_var;
extern "C" String_t* ResponseBase_ParseJSONString_m2912 (ResponseBase_t561 * __this, String_t* ___name, Object_t * ___obj, Object_t* ___dictJsonObj, MethodInfo* method)
{
	static bool ResponseBase_ParseJSONString_m2912_init;
	if (!ResponseBase_ParseJSONString_m2912_init)
	{
		IDictionary_2_TryGetValue_m3419_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&IDictionary_2_TryGetValue_m3419_GenericMethod);
		ResponseBase_ParseJSONString_m2912_init = true;
	}
	{
		Object_t* L_0 = ___dictJsonObj;
		String_t* L_1 = ___name;
		NullCheck(L_0);
		bool L_2 = (bool)InterfaceFuncInvoker2< bool, String_t*, Object_t ** >::Invoke(IDictionary_2_TryGetValue_m3419_MethodInfo_var, L_0, L_1, (&___obj));
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		Object_t * L_3 = ___obj;
		return ((String_t*)IsInst(L_3, (&String_t_il2cpp_TypeInfo)));
	}

IL_0015:
	{
		String_t* L_4 = ___name;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_5 = String_Concat_m1678(NULL /*static, unused*/, L_4, (String_t*) &_stringLiteral193, /*hidden argument*/&String_Concat_m1678_MethodInfo);
		FormatException_t696 * L_6 = (FormatException_t696 *)il2cpp_codegen_object_new (InitializedTypeInfo(&FormatException_t696_il2cpp_TypeInfo));
		FormatException__ctor_m3420(L_6, L_5, /*hidden argument*/&FormatException__ctor_m3420_MethodInfo);
		il2cpp_codegen_raise_exception(L_6);
	}
}
// System.Int32 UnityEngine.Networking.Match.ResponseBase::ParseJSONInt32(System.String,System.Object,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern MethodInfo ResponseBase_ParseJSONInt32_m2913_MethodInfo;
extern MethodInfo* IDictionary_2_TryGetValue_m3419_MethodInfo_var;
extern "C" int32_t ResponseBase_ParseJSONInt32_m2913 (ResponseBase_t561 * __this, String_t* ___name, Object_t * ___obj, Object_t* ___dictJsonObj, MethodInfo* method)
{
	static bool ResponseBase_ParseJSONInt32_m2913_init;
	if (!ResponseBase_ParseJSONInt32_m2913_init)
	{
		IDictionary_2_TryGetValue_m3419_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&IDictionary_2_TryGetValue_m3419_GenericMethod);
		ResponseBase_ParseJSONInt32_m2913_init = true;
	}
	{
		Object_t* L_0 = ___dictJsonObj;
		String_t* L_1 = ___name;
		NullCheck(L_0);
		bool L_2 = (bool)InterfaceFuncInvoker2< bool, String_t*, Object_t ** >::Invoke(IDictionary_2_TryGetValue_m3419_MethodInfo_var, L_0, L_1, (&___obj));
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		Object_t * L_3 = ___obj;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Convert_t689_il2cpp_TypeInfo));
		int32_t L_4 = Convert_ToInt32_m3421(NULL /*static, unused*/, L_3, /*hidden argument*/&Convert_ToInt32_m3421_MethodInfo);
		return L_4;
	}

IL_0015:
	{
		String_t* L_5 = ___name;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_6 = String_Concat_m1678(NULL /*static, unused*/, L_5, (String_t*) &_stringLiteral193, /*hidden argument*/&String_Concat_m1678_MethodInfo);
		FormatException_t696 * L_7 = (FormatException_t696 *)il2cpp_codegen_object_new (InitializedTypeInfo(&FormatException_t696_il2cpp_TypeInfo));
		FormatException__ctor_m3420(L_7, L_6, /*hidden argument*/&FormatException__ctor_m3420_MethodInfo);
		il2cpp_codegen_raise_exception(L_7);
	}
}
// System.UInt16 UnityEngine.Networking.Match.ResponseBase::ParseJSONUInt16(System.String,System.Object,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern MethodInfo ResponseBase_ParseJSONUInt16_m2914_MethodInfo;
extern MethodInfo* IDictionary_2_TryGetValue_m3419_MethodInfo_var;
extern "C" uint16_t ResponseBase_ParseJSONUInt16_m2914 (ResponseBase_t561 * __this, String_t* ___name, Object_t * ___obj, Object_t* ___dictJsonObj, MethodInfo* method)
{
	static bool ResponseBase_ParseJSONUInt16_m2914_init;
	if (!ResponseBase_ParseJSONUInt16_m2914_init)
	{
		IDictionary_2_TryGetValue_m3419_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&IDictionary_2_TryGetValue_m3419_GenericMethod);
		ResponseBase_ParseJSONUInt16_m2914_init = true;
	}
	{
		Object_t* L_0 = ___dictJsonObj;
		String_t* L_1 = ___name;
		NullCheck(L_0);
		bool L_2 = (bool)InterfaceFuncInvoker2< bool, String_t*, Object_t ** >::Invoke(IDictionary_2_TryGetValue_m3419_MethodInfo_var, L_0, L_1, (&___obj));
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		Object_t * L_3 = ___obj;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Convert_t689_il2cpp_TypeInfo));
		uint16_t L_4 = Convert_ToUInt16_m3422(NULL /*static, unused*/, L_3, /*hidden argument*/&Convert_ToUInt16_m3422_MethodInfo);
		return L_4;
	}

IL_0015:
	{
		String_t* L_5 = ___name;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_6 = String_Concat_m1678(NULL /*static, unused*/, L_5, (String_t*) &_stringLiteral193, /*hidden argument*/&String_Concat_m1678_MethodInfo);
		FormatException_t696 * L_7 = (FormatException_t696 *)il2cpp_codegen_object_new (InitializedTypeInfo(&FormatException_t696_il2cpp_TypeInfo));
		FormatException__ctor_m3420(L_7, L_6, /*hidden argument*/&FormatException__ctor_m3420_MethodInfo);
		il2cpp_codegen_raise_exception(L_7);
	}
}
// System.UInt64 UnityEngine.Networking.Match.ResponseBase::ParseJSONUInt64(System.String,System.Object,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern MethodInfo ResponseBase_ParseJSONUInt64_m2915_MethodInfo;
extern MethodInfo* IDictionary_2_TryGetValue_m3419_MethodInfo_var;
extern "C" uint64_t ResponseBase_ParseJSONUInt64_m2915 (ResponseBase_t561 * __this, String_t* ___name, Object_t * ___obj, Object_t* ___dictJsonObj, MethodInfo* method)
{
	static bool ResponseBase_ParseJSONUInt64_m2915_init;
	if (!ResponseBase_ParseJSONUInt64_m2915_init)
	{
		IDictionary_2_TryGetValue_m3419_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&IDictionary_2_TryGetValue_m3419_GenericMethod);
		ResponseBase_ParseJSONUInt64_m2915_init = true;
	}
	{
		Object_t* L_0 = ___dictJsonObj;
		String_t* L_1 = ___name;
		NullCheck(L_0);
		bool L_2 = (bool)InterfaceFuncInvoker2< bool, String_t*, Object_t ** >::Invoke(IDictionary_2_TryGetValue_m3419_MethodInfo_var, L_0, L_1, (&___obj));
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		Object_t * L_3 = ___obj;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Convert_t689_il2cpp_TypeInfo));
		uint64_t L_4 = Convert_ToUInt64_m3423(NULL /*static, unused*/, L_3, /*hidden argument*/&Convert_ToUInt64_m3423_MethodInfo);
		return L_4;
	}

IL_0015:
	{
		String_t* L_5 = ___name;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_6 = String_Concat_m1678(NULL /*static, unused*/, L_5, (String_t*) &_stringLiteral193, /*hidden argument*/&String_Concat_m1678_MethodInfo);
		FormatException_t696 * L_7 = (FormatException_t696 *)il2cpp_codegen_object_new (InitializedTypeInfo(&FormatException_t696_il2cpp_TypeInfo));
		FormatException__ctor_m3420(L_7, L_6, /*hidden argument*/&FormatException__ctor_m3420_MethodInfo);
		il2cpp_codegen_raise_exception(L_7);
	}
}
// System.Boolean UnityEngine.Networking.Match.ResponseBase::ParseJSONBool(System.String,System.Object,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern MethodInfo ResponseBase_ParseJSONBool_m2916_MethodInfo;
extern MethodInfo* IDictionary_2_TryGetValue_m3419_MethodInfo_var;
extern "C" bool ResponseBase_ParseJSONBool_m2916 (ResponseBase_t561 * __this, String_t* ___name, Object_t * ___obj, Object_t* ___dictJsonObj, MethodInfo* method)
{
	static bool ResponseBase_ParseJSONBool_m2916_init;
	if (!ResponseBase_ParseJSONBool_m2916_init)
	{
		IDictionary_2_TryGetValue_m3419_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&IDictionary_2_TryGetValue_m3419_GenericMethod);
		ResponseBase_ParseJSONBool_m2916_init = true;
	}
	{
		Object_t* L_0 = ___dictJsonObj;
		String_t* L_1 = ___name;
		NullCheck(L_0);
		bool L_2 = (bool)InterfaceFuncInvoker2< bool, String_t*, Object_t ** >::Invoke(IDictionary_2_TryGetValue_m3419_MethodInfo_var, L_0, L_1, (&___obj));
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		Object_t * L_3 = ___obj;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Convert_t689_il2cpp_TypeInfo));
		bool L_4 = Convert_ToBoolean_m3424(NULL /*static, unused*/, L_3, /*hidden argument*/&Convert_ToBoolean_m3424_MethodInfo);
		return L_4;
	}

IL_0015:
	{
		String_t* L_5 = ___name;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_6 = String_Concat_m1678(NULL /*static, unused*/, L_5, (String_t*) &_stringLiteral193, /*hidden argument*/&String_Concat_m1678_MethodInfo);
		FormatException_t696 * L_7 = (FormatException_t696 *)il2cpp_codegen_object_new (InitializedTypeInfo(&FormatException_t696_il2cpp_TypeInfo));
		FormatException__ctor_m3420(L_7, L_6, /*hidden argument*/&FormatException__ctor_m3420_MethodInfo);
		il2cpp_codegen_raise_exception(L_7);
	}
}
// UnityEngine.Networking.Match.Response
#include "UnityEngine_UnityEngine_Networking_Match_Response.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Response_t563_il2cpp_TypeInfo;
// UnityEngine.Networking.Match.Response
#include "UnityEngine_UnityEngine_Networking_Match_ResponseMethodDeclarations.h"

extern MethodInfo Response_get_success_m2918_MethodInfo;
extern MethodInfo Response_get_extendedInfo_m2920_MethodInfo;
extern MethodInfo Response_set_success_m2919_MethodInfo;
extern MethodInfo Response_set_extendedInfo_m2921_MethodInfo;


// System.Void UnityEngine.Networking.Match.Response::.ctor()
extern MethodInfo Response__ctor_m2917_MethodInfo;
extern "C" void Response__ctor_m2917 (Response_t563 * __this, MethodInfo* method)
{
	{
		ResponseBase__ctor_m2911(__this, /*hidden argument*/&ResponseBase__ctor_m2911_MethodInfo);
		return;
	}
}
// System.Boolean UnityEngine.Networking.Match.Response::get_success()
extern "C" bool Response_get_success_m2918 (Response_t563 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->___U3CsuccessU3Ek__BackingField_0);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.Response::set_success(System.Boolean)
extern "C" void Response_set_success_m2919 (Response_t563 * __this, bool ___value, MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___U3CsuccessU3Ek__BackingField_0 = L_0;
		return;
	}
}
// System.String UnityEngine.Networking.Match.Response::get_extendedInfo()
extern "C" String_t* Response_get_extendedInfo_m2920 (Response_t563 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CextendedInfoU3Ek__BackingField_1);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.Response::set_extendedInfo(System.String)
extern "C" void Response_set_extendedInfo_m2921 (Response_t563 * __this, String_t* ___value, MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CextendedInfoU3Ek__BackingField_1 = L_0;
		return;
	}
}
// System.String UnityEngine.Networking.Match.Response::ToString()
extern MethodInfo Response_ToString_m2922_MethodInfo;
extern TypeInfo* ObjectU5BU5D_t269_il2cpp_TypeInfo_var;
extern "C" String_t* Response_ToString_m2922 (Response_t563 * __this, MethodInfo* method)
{
	static bool Response_ToString_m2922_init;
	if (!Response_ToString_m2922_init)
	{
		ObjectU5BU5D_t269_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t269_0_0_0);
		Response_ToString_m2922_init = true;
	}
	{
		ObjectU5BU5D_t269* L_0 = ((ObjectU5BU5D_t269*)SZArrayNew(ObjectU5BU5D_t269_il2cpp_TypeInfo_var, 3));
		String_t* L_1 = Object_ToString_m1967(__this, /*hidden argument*/&Object_ToString_m1967_MethodInfo);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t269* L_2 = L_0;
		bool L_3 = Response_get_success_m2918(__this, /*hidden argument*/&Response_get_success_m2918_MethodInfo);
		bool L_4 = L_3;
		Object_t * L_5 = Box(InitializedTypeInfo(&Boolean_t13_il2cpp_TypeInfo), &L_4);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_5;
		ObjectU5BU5D_t269* L_6 = L_2;
		String_t* L_7 = Response_get_extendedInfo_m2920(__this, /*hidden argument*/&Response_get_extendedInfo_m2920_MethodInfo);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 2);
		ArrayElementTypeCheck (L_6, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 2)) = (Object_t *)L_7;
		String_t* L_8 = UnityString_Format_m2626(NULL /*static, unused*/, (String_t*) &_stringLiteral194, L_6, /*hidden argument*/&UnityString_Format_m2626_MethodInfo);
		return L_8;
	}
}
// System.Void UnityEngine.Networking.Match.Response::Parse(System.Object)
extern MethodInfo Response_Parse_m2923_MethodInfo;
extern TypeInfo* IDictionary_2_t562_il2cpp_TypeInfo_var;
extern "C" void Response_Parse_m2923 (Response_t563 * __this, Object_t * ___obj, MethodInfo* method)
{
	static bool Response_Parse_m2923_init;
	if (!Response_Parse_m2923_init)
	{
		IDictionary_2_t562_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&IDictionary_2_t562_0_0_0);
		Response_Parse_m2923_init = true;
	}
	Object_t* V_0 = {0};
	{
		Object_t * L_0 = ___obj;
		V_0 = ((Object_t*)IsInst(L_0, IDictionary_2_t562_il2cpp_TypeInfo_var));
		Object_t* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0054;
		}
	}
	{
		Object_t * L_2 = ___obj;
		Object_t* L_3 = V_0;
		bool L_4 = ResponseBase_ParseJSONBool_m2916(__this, (String_t*) &_stringLiteral195, L_2, L_3, /*hidden argument*/&ResponseBase_ParseJSONBool_m2916_MethodInfo);
		Response_set_success_m2919(__this, L_4, /*hidden argument*/&Response_set_success_m2919_MethodInfo);
		Object_t * L_5 = ___obj;
		Object_t* L_6 = V_0;
		String_t* L_7 = ResponseBase_ParseJSONString_m2912(__this, (String_t*) &_stringLiteral196, L_5, L_6, /*hidden argument*/&ResponseBase_ParseJSONString_m2912_MethodInfo);
		Response_set_extendedInfo_m2921(__this, L_7, /*hidden argument*/&Response_set_extendedInfo_m2921_MethodInfo);
		bool L_8 = Response_get_success_m2918(__this, /*hidden argument*/&Response_get_success_m2918_MethodInfo);
		if (L_8)
		{
			goto IL_0054;
		}
	}
	{
		String_t* L_9 = Response_get_extendedInfo_m2920(__this, /*hidden argument*/&Response_get_extendedInfo_m2920_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_10 = String_Concat_m1678(NULL /*static, unused*/, (String_t*) &_stringLiteral197, L_9, /*hidden argument*/&String_Concat_m1678_MethodInfo);
		FormatException_t696 * L_11 = (FormatException_t696 *)il2cpp_codegen_object_new (InitializedTypeInfo(&FormatException_t696_il2cpp_TypeInfo));
		FormatException__ctor_m3420(L_11, L_10, /*hidden argument*/&FormatException__ctor_m3420_MethodInfo);
		il2cpp_codegen_raise_exception(L_11);
	}

IL_0054:
	{
		return;
	}
}
// UnityEngine.Networking.Match.BasicResponse
#include "UnityEngine_UnityEngine_Networking_Match_BasicResponse.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo BasicResponse_t564_il2cpp_TypeInfo;
// UnityEngine.Networking.Match.BasicResponse
#include "UnityEngine_UnityEngine_Networking_Match_BasicResponseMethodDeclarations.h"



// System.Void UnityEngine.Networking.Match.BasicResponse::.ctor()
extern MethodInfo BasicResponse__ctor_m2924_MethodInfo;
extern "C" void BasicResponse__ctor_m2924 (BasicResponse_t564 * __this, MethodInfo* method)
{
	{
		Response__ctor_m2917(__this, /*hidden argument*/&Response__ctor_m2917_MethodInfo);
		return;
	}
}
// UnityEngine.Networking.Match.CreateMatchRequest
#include "UnityEngine_UnityEngine_Networking_Match_CreateMatchRequest.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CreateMatchRequest_t566_il2cpp_TypeInfo;
// UnityEngine.Networking.Match.CreateMatchRequest
#include "UnityEngine_UnityEngine_Networking_Match_CreateMatchRequestMethodDeclarations.h"

// System.UInt32
#include "mscorlib_System_UInt32.h"
// System.Collections.Generic.Dictionary`2<System.String,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_7.h"
extern TypeInfo UInt32_t697_il2cpp_TypeInfo;
extern TypeInfo Dictionary_2_t565_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2<System.String,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_7MethodDeclarations.h"
extern Il2CppType Dictionary_2_t565_0_0_0;
extern MethodInfo CreateMatchRequest_get_name_m2926_MethodInfo;
extern MethodInfo CreateMatchRequest_get_size_m2928_MethodInfo;
extern MethodInfo CreateMatchRequest_get_advertise_m2930_MethodInfo;
extern MethodInfo CreateMatchRequest_get_password_m2932_MethodInfo;
extern MethodInfo CreateMatchRequest_get_matchAttributes_m2934_MethodInfo;
extern MethodInfo Dictionary_2_get_Count_m3425_MethodInfo;
extern Il2CppGenericMethod Dictionary_2_get_Count_m3425_GenericMethod;


// System.Void UnityEngine.Networking.Match.CreateMatchRequest::.ctor()
extern MethodInfo CreateMatchRequest__ctor_m2925_MethodInfo;
extern "C" void CreateMatchRequest__ctor_m2925 (CreateMatchRequest_t566 * __this, MethodInfo* method)
{
	{
		Request__ctor_m2906(__this, /*hidden argument*/&Request__ctor_m2906_MethodInfo);
		return;
	}
}
// System.String UnityEngine.Networking.Match.CreateMatchRequest::get_name()
extern "C" String_t* CreateMatchRequest_get_name_m2926 (CreateMatchRequest_t566 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CnameU3Ek__BackingField_4);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.CreateMatchRequest::set_name(System.String)
extern MethodInfo CreateMatchRequest_set_name_m2927_MethodInfo;
extern "C" void CreateMatchRequest_set_name_m2927 (CreateMatchRequest_t566 * __this, String_t* ___value, MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CnameU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.UInt32 UnityEngine.Networking.Match.CreateMatchRequest::get_size()
extern "C" uint32_t CreateMatchRequest_get_size_m2928 (CreateMatchRequest_t566 * __this, MethodInfo* method)
{
	{
		uint32_t L_0 = (__this->___U3CsizeU3Ek__BackingField_5);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.CreateMatchRequest::set_size(System.UInt32)
extern MethodInfo CreateMatchRequest_set_size_m2929_MethodInfo;
extern "C" void CreateMatchRequest_set_size_m2929 (CreateMatchRequest_t566 * __this, uint32_t ___value, MethodInfo* method)
{
	{
		uint32_t L_0 = ___value;
		__this->___U3CsizeU3Ek__BackingField_5 = L_0;
		return;
	}
}
// System.Boolean UnityEngine.Networking.Match.CreateMatchRequest::get_advertise()
extern "C" bool CreateMatchRequest_get_advertise_m2930 (CreateMatchRequest_t566 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->___U3CadvertiseU3Ek__BackingField_6);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.CreateMatchRequest::set_advertise(System.Boolean)
extern MethodInfo CreateMatchRequest_set_advertise_m2931_MethodInfo;
extern "C" void CreateMatchRequest_set_advertise_m2931 (CreateMatchRequest_t566 * __this, bool ___value, MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___U3CadvertiseU3Ek__BackingField_6 = L_0;
		return;
	}
}
// System.String UnityEngine.Networking.Match.CreateMatchRequest::get_password()
extern "C" String_t* CreateMatchRequest_get_password_m2932 (CreateMatchRequest_t566 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CpasswordU3Ek__BackingField_7);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.CreateMatchRequest::set_password(System.String)
extern MethodInfo CreateMatchRequest_set_password_m2933_MethodInfo;
extern "C" void CreateMatchRequest_set_password_m2933 (CreateMatchRequest_t566 * __this, String_t* ___value, MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CpasswordU3Ek__BackingField_7 = L_0;
		return;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.Int64> UnityEngine.Networking.Match.CreateMatchRequest::get_matchAttributes()
extern "C" Dictionary_2_t565 * CreateMatchRequest_get_matchAttributes_m2934 (CreateMatchRequest_t566 * __this, MethodInfo* method)
{
	{
		Dictionary_2_t565 * L_0 = (__this->___U3CmatchAttributesU3Ek__BackingField_8);
		return L_0;
	}
}
// System.String UnityEngine.Networking.Match.CreateMatchRequest::ToString()
extern MethodInfo CreateMatchRequest_ToString_m2935_MethodInfo;
extern TypeInfo* ObjectU5BU5D_t269_il2cpp_TypeInfo_var;
extern MethodInfo* Dictionary_2_get_Count_m3425_MethodInfo_var;
extern "C" String_t* CreateMatchRequest_ToString_m2935 (CreateMatchRequest_t566 * __this, MethodInfo* method)
{
	static bool CreateMatchRequest_ToString_m2935_init;
	if (!CreateMatchRequest_ToString_m2935_init)
	{
		ObjectU5BU5D_t269_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t269_0_0_0);
		Dictionary_2_get_Count_m3425_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2_get_Count_m3425_GenericMethod);
		CreateMatchRequest_ToString_m2935_init = true;
	}
	int32_t G_B2_0 = 0;
	ObjectU5BU5D_t269* G_B2_1 = {0};
	ObjectU5BU5D_t269* G_B2_2 = {0};
	String_t* G_B2_3 = {0};
	int32_t G_B1_0 = 0;
	ObjectU5BU5D_t269* G_B1_1 = {0};
	ObjectU5BU5D_t269* G_B1_2 = {0};
	String_t* G_B1_3 = {0};
	String_t* G_B3_0 = {0};
	int32_t G_B3_1 = 0;
	ObjectU5BU5D_t269* G_B3_2 = {0};
	ObjectU5BU5D_t269* G_B3_3 = {0};
	String_t* G_B3_4 = {0};
	int32_t G_B5_0 = 0;
	ObjectU5BU5D_t269* G_B5_1 = {0};
	ObjectU5BU5D_t269* G_B5_2 = {0};
	String_t* G_B5_3 = {0};
	int32_t G_B4_0 = 0;
	ObjectU5BU5D_t269* G_B4_1 = {0};
	ObjectU5BU5D_t269* G_B4_2 = {0};
	String_t* G_B4_3 = {0};
	int32_t G_B6_0 = 0;
	int32_t G_B6_1 = 0;
	ObjectU5BU5D_t269* G_B6_2 = {0};
	ObjectU5BU5D_t269* G_B6_3 = {0};
	String_t* G_B6_4 = {0};
	{
		ObjectU5BU5D_t269* L_0 = ((ObjectU5BU5D_t269*)SZArrayNew(ObjectU5BU5D_t269_il2cpp_TypeInfo_var, 6));
		String_t* L_1 = Request_ToString_m2910(__this, /*hidden argument*/&Request_ToString_m2910_MethodInfo);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t269* L_2 = L_0;
		String_t* L_3 = CreateMatchRequest_get_name_m2926(__this, /*hidden argument*/&CreateMatchRequest_get_name_m2926_MethodInfo);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_3;
		ObjectU5BU5D_t269* L_4 = L_2;
		uint32_t L_5 = CreateMatchRequest_get_size_m2928(__this, /*hidden argument*/&CreateMatchRequest_get_size_m2928_MethodInfo);
		uint32_t L_6 = L_5;
		Object_t * L_7 = Box(InitializedTypeInfo(&UInt32_t697_il2cpp_TypeInfo), &L_6);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 2);
		ArrayElementTypeCheck (L_4, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 2)) = (Object_t *)L_7;
		ObjectU5BU5D_t269* L_8 = L_4;
		bool L_9 = CreateMatchRequest_get_advertise_m2930(__this, /*hidden argument*/&CreateMatchRequest_get_advertise_m2930_MethodInfo);
		bool L_10 = L_9;
		Object_t * L_11 = Box(InitializedTypeInfo(&Boolean_t13_il2cpp_TypeInfo), &L_10);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 3);
		ArrayElementTypeCheck (L_8, L_11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 3)) = (Object_t *)L_11;
		ObjectU5BU5D_t269* L_12 = L_8;
		String_t* L_13 = CreateMatchRequest_get_password_m2932(__this, /*hidden argument*/&CreateMatchRequest_get_password_m2932_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_14 = ((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2;
		bool L_15 = String_op_Equality_m1635(NULL /*static, unused*/, L_13, L_14, /*hidden argument*/&String_op_Equality_m1635_MethodInfo);
		G_B1_0 = 4;
		G_B1_1 = L_12;
		G_B1_2 = L_12;
		G_B1_3 = (String_t*) &_stringLiteral198;
		if (!L_15)
		{
			G_B2_0 = 4;
			G_B2_1 = L_12;
			G_B2_2 = L_12;
			G_B2_3 = (String_t*) &_stringLiteral198;
			goto IL_005a;
		}
	}
	{
		G_B3_0 = (String_t*) &_stringLiteral199;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		G_B3_4 = G_B1_3;
		goto IL_005f;
	}

IL_005a:
	{
		G_B3_0 = (String_t*) &_stringLiteral200;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
		G_B3_4 = G_B2_3;
	}

IL_005f:
	{
		NullCheck(G_B3_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B3_2, G_B3_1);
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		*((Object_t **)(Object_t **)SZArrayLdElema(G_B3_2, G_B3_1)) = (Object_t *)G_B3_0;
		ObjectU5BU5D_t269* L_16 = G_B3_3;
		Dictionary_2_t565 * L_17 = CreateMatchRequest_get_matchAttributes_m2934(__this, /*hidden argument*/&CreateMatchRequest_get_matchAttributes_m2934_MethodInfo);
		G_B4_0 = 5;
		G_B4_1 = L_16;
		G_B4_2 = L_16;
		G_B4_3 = G_B3_4;
		if (L_17)
		{
			G_B5_0 = 5;
			G_B5_1 = L_16;
			G_B5_2 = L_16;
			G_B5_3 = G_B3_4;
			goto IL_0073;
		}
	}
	{
		G_B6_0 = 0;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		G_B6_4 = G_B4_3;
		goto IL_007e;
	}

IL_0073:
	{
		Dictionary_2_t565 * L_18 = CreateMatchRequest_get_matchAttributes_m2934(__this, /*hidden argument*/&CreateMatchRequest_get_matchAttributes_m2934_MethodInfo);
		NullCheck(L_18);
		int32_t L_19 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(Dictionary_2_get_Count_m3425_MethodInfo_var, L_18);
		G_B6_0 = L_19;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
		G_B6_4 = G_B5_3;
	}

IL_007e:
	{
		int32_t L_20 = G_B6_0;
		Object_t * L_21 = Box(InitializedTypeInfo(&Int32_t17_il2cpp_TypeInfo), &L_20);
		NullCheck(G_B6_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B6_2, G_B6_1);
		ArrayElementTypeCheck (G_B6_2, L_21);
		*((Object_t **)(Object_t **)SZArrayLdElema(G_B6_2, G_B6_1)) = (Object_t *)L_21;
		String_t* L_22 = UnityString_Format_m2626(NULL /*static, unused*/, G_B6_4, G_B6_3, /*hidden argument*/&UnityString_Format_m2626_MethodInfo);
		return L_22;
	}
}
// UnityEngine.Networking.Match.CreateMatchResponse
#include "UnityEngine_UnityEngine_Networking_Match_CreateMatchResponse.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CreateMatchResponse_t567_il2cpp_TypeInfo;
// UnityEngine.Networking.Match.CreateMatchResponse
#include "UnityEngine_UnityEngine_Networking_Match_CreateMatchResponseMethodDeclarations.h"

// UnityEngine.Networking.Types.NetworkID
#include "UnityEngine_UnityEngine_Networking_Types_NetworkID.h"
// UnityEngine.Networking.Types.NodeID
#include "UnityEngine_UnityEngine_Networking_Types_NodeID.h"
extern TypeInfo NetworkID_t580_il2cpp_TypeInfo;
extern TypeInfo NodeID_t581_il2cpp_TypeInfo;
extern MethodInfo CreateMatchResponse_get_address_m2937_MethodInfo;
extern MethodInfo CreateMatchResponse_get_port_m2939_MethodInfo;
extern MethodInfo CreateMatchResponse_get_networkId_m2941_MethodInfo;
extern MethodInfo CreateMatchResponse_get_nodeId_m2945_MethodInfo;
extern MethodInfo CreateMatchResponse_get_usingRelay_m2947_MethodInfo;
extern MethodInfo CreateMatchResponse_set_address_m2938_MethodInfo;
extern MethodInfo CreateMatchResponse_set_port_m2940_MethodInfo;
extern MethodInfo CreateMatchResponse_set_networkId_m2942_MethodInfo;
extern MethodInfo CreateMatchResponse_set_accessTokenString_m2944_MethodInfo;
extern MethodInfo CreateMatchResponse_set_nodeId_m2946_MethodInfo;
extern MethodInfo CreateMatchResponse_set_usingRelay_m2948_MethodInfo;


// System.Void UnityEngine.Networking.Match.CreateMatchResponse::.ctor()
extern MethodInfo CreateMatchResponse__ctor_m2936_MethodInfo;
extern "C" void CreateMatchResponse__ctor_m2936 (CreateMatchResponse_t567 * __this, MethodInfo* method)
{
	{
		BasicResponse__ctor_m2924(__this, /*hidden argument*/&BasicResponse__ctor_m2924_MethodInfo);
		return;
	}
}
// System.String UnityEngine.Networking.Match.CreateMatchResponse::get_address()
extern "C" String_t* CreateMatchResponse_get_address_m2937 (CreateMatchResponse_t567 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CaddressU3Ek__BackingField_2);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.CreateMatchResponse::set_address(System.String)
extern "C" void CreateMatchResponse_set_address_m2938 (CreateMatchResponse_t567 * __this, String_t* ___value, MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CaddressU3Ek__BackingField_2 = L_0;
		return;
	}
}
// System.Int32 UnityEngine.Networking.Match.CreateMatchResponse::get_port()
extern "C" int32_t CreateMatchResponse_get_port_m2939 (CreateMatchResponse_t567 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___U3CportU3Ek__BackingField_3);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.CreateMatchResponse::set_port(System.Int32)
extern "C" void CreateMatchResponse_set_port_m2940 (CreateMatchResponse_t567 * __this, int32_t ___value, MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___U3CportU3Ek__BackingField_3 = L_0;
		return;
	}
}
// UnityEngine.Networking.Types.NetworkID UnityEngine.Networking.Match.CreateMatchResponse::get_networkId()
extern "C" uint64_t CreateMatchResponse_get_networkId_m2941 (CreateMatchResponse_t567 * __this, MethodInfo* method)
{
	{
		uint64_t L_0 = (__this->___U3CnetworkIdU3Ek__BackingField_4);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.CreateMatchResponse::set_networkId(UnityEngine.Networking.Types.NetworkID)
extern "C" void CreateMatchResponse_set_networkId_m2942 (CreateMatchResponse_t567 * __this, uint64_t ___value, MethodInfo* method)
{
	{
		uint64_t L_0 = ___value;
		__this->___U3CnetworkIdU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.String UnityEngine.Networking.Match.CreateMatchResponse::get_accessTokenString()
extern MethodInfo CreateMatchResponse_get_accessTokenString_m2943_MethodInfo;
extern "C" String_t* CreateMatchResponse_get_accessTokenString_m2943 (CreateMatchResponse_t567 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CaccessTokenStringU3Ek__BackingField_5);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.CreateMatchResponse::set_accessTokenString(System.String)
extern "C" void CreateMatchResponse_set_accessTokenString_m2944 (CreateMatchResponse_t567 * __this, String_t* ___value, MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CaccessTokenStringU3Ek__BackingField_5 = L_0;
		return;
	}
}
// UnityEngine.Networking.Types.NodeID UnityEngine.Networking.Match.CreateMatchResponse::get_nodeId()
extern "C" uint16_t CreateMatchResponse_get_nodeId_m2945 (CreateMatchResponse_t567 * __this, MethodInfo* method)
{
	{
		uint16_t L_0 = (__this->___U3CnodeIdU3Ek__BackingField_6);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.CreateMatchResponse::set_nodeId(UnityEngine.Networking.Types.NodeID)
extern "C" void CreateMatchResponse_set_nodeId_m2946 (CreateMatchResponse_t567 * __this, uint16_t ___value, MethodInfo* method)
{
	{
		uint16_t L_0 = ___value;
		__this->___U3CnodeIdU3Ek__BackingField_6 = L_0;
		return;
	}
}
// System.Boolean UnityEngine.Networking.Match.CreateMatchResponse::get_usingRelay()
extern "C" bool CreateMatchResponse_get_usingRelay_m2947 (CreateMatchResponse_t567 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->___U3CusingRelayU3Ek__BackingField_7);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.CreateMatchResponse::set_usingRelay(System.Boolean)
extern "C" void CreateMatchResponse_set_usingRelay_m2948 (CreateMatchResponse_t567 * __this, bool ___value, MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___U3CusingRelayU3Ek__BackingField_7 = L_0;
		return;
	}
}
// System.String UnityEngine.Networking.Match.CreateMatchResponse::ToString()
extern MethodInfo CreateMatchResponse_ToString_m2949_MethodInfo;
extern TypeInfo* ObjectU5BU5D_t269_il2cpp_TypeInfo_var;
extern "C" String_t* CreateMatchResponse_ToString_m2949 (CreateMatchResponse_t567 * __this, MethodInfo* method)
{
	static bool CreateMatchResponse_ToString_m2949_init;
	if (!CreateMatchResponse_ToString_m2949_init)
	{
		ObjectU5BU5D_t269_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t269_0_0_0);
		CreateMatchResponse_ToString_m2949_init = true;
	}
	{
		ObjectU5BU5D_t269* L_0 = ((ObjectU5BU5D_t269*)SZArrayNew(ObjectU5BU5D_t269_il2cpp_TypeInfo_var, 6));
		String_t* L_1 = Response_ToString_m2922(__this, /*hidden argument*/&Response_ToString_m2922_MethodInfo);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t269* L_2 = L_0;
		String_t* L_3 = CreateMatchResponse_get_address_m2937(__this, /*hidden argument*/&CreateMatchResponse_get_address_m2937_MethodInfo);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_3;
		ObjectU5BU5D_t269* L_4 = L_2;
		int32_t L_5 = CreateMatchResponse_get_port_m2939(__this, /*hidden argument*/&CreateMatchResponse_get_port_m2939_MethodInfo);
		int32_t L_6 = L_5;
		Object_t * L_7 = Box(InitializedTypeInfo(&Int32_t17_il2cpp_TypeInfo), &L_6);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 2);
		ArrayElementTypeCheck (L_4, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 2)) = (Object_t *)L_7;
		ObjectU5BU5D_t269* L_8 = L_4;
		uint64_t L_9 = CreateMatchResponse_get_networkId_m2941(__this, /*hidden argument*/&CreateMatchResponse_get_networkId_m2941_MethodInfo);
		uint64_t L_10 = L_9;
		Object_t * L_11 = Box(InitializedTypeInfo(&NetworkID_t580_il2cpp_TypeInfo), &L_10);
		NullCheck(L_11);
		String_t* L_12 = Enum_ToString_m3418(L_11, (String_t*) &_stringLiteral192, /*hidden argument*/&Enum_ToString_m3418_MethodInfo);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 3);
		ArrayElementTypeCheck (L_8, L_12);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 3)) = (Object_t *)L_12;
		ObjectU5BU5D_t269* L_13 = L_8;
		uint16_t L_14 = CreateMatchResponse_get_nodeId_m2945(__this, /*hidden argument*/&CreateMatchResponse_get_nodeId_m2945_MethodInfo);
		uint16_t L_15 = L_14;
		Object_t * L_16 = Box(InitializedTypeInfo(&NodeID_t581_il2cpp_TypeInfo), &L_15);
		NullCheck(L_16);
		String_t* L_17 = Enum_ToString_m3418(L_16, (String_t*) &_stringLiteral192, /*hidden argument*/&Enum_ToString_m3418_MethodInfo);
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, 4);
		ArrayElementTypeCheck (L_13, L_17);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_13, 4)) = (Object_t *)L_17;
		ObjectU5BU5D_t269* L_18 = L_13;
		bool L_19 = CreateMatchResponse_get_usingRelay_m2947(__this, /*hidden argument*/&CreateMatchResponse_get_usingRelay_m2947_MethodInfo);
		bool L_20 = L_19;
		Object_t * L_21 = Box(InitializedTypeInfo(&Boolean_t13_il2cpp_TypeInfo), &L_20);
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, 5);
		ArrayElementTypeCheck (L_18, L_21);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_18, 5)) = (Object_t *)L_21;
		String_t* L_22 = UnityString_Format_m2626(NULL /*static, unused*/, (String_t*) &_stringLiteral201, L_18, /*hidden argument*/&UnityString_Format_m2626_MethodInfo);
		return L_22;
	}
}
// System.Void UnityEngine.Networking.Match.CreateMatchResponse::Parse(System.Object)
extern MethodInfo CreateMatchResponse_Parse_m2950_MethodInfo;
extern TypeInfo* IDictionary_2_t562_il2cpp_TypeInfo_var;
extern "C" void CreateMatchResponse_Parse_m2950 (CreateMatchResponse_t567 * __this, Object_t * ___obj, MethodInfo* method)
{
	static bool CreateMatchResponse_Parse_m2950_init;
	if (!CreateMatchResponse_Parse_m2950_init)
	{
		IDictionary_2_t562_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&IDictionary_2_t562_0_0_0);
		CreateMatchResponse_Parse_m2950_init = true;
	}
	Object_t* V_0 = {0};
	{
		Object_t * L_0 = ___obj;
		Response_Parse_m2923(__this, L_0, /*hidden argument*/&Response_Parse_m2923_MethodInfo);
		Object_t * L_1 = ___obj;
		V_0 = ((Object_t*)IsInst(L_1, IDictionary_2_t562_il2cpp_TypeInfo_var));
		Object_t* L_2 = V_0;
		if (!L_2)
		{
			goto IL_008b;
		}
	}
	{
		Object_t * L_3 = ___obj;
		Object_t* L_4 = V_0;
		String_t* L_5 = ResponseBase_ParseJSONString_m2912(__this, (String_t*) &_stringLiteral202, L_3, L_4, /*hidden argument*/&ResponseBase_ParseJSONString_m2912_MethodInfo);
		CreateMatchResponse_set_address_m2938(__this, L_5, /*hidden argument*/&CreateMatchResponse_set_address_m2938_MethodInfo);
		Object_t * L_6 = ___obj;
		Object_t* L_7 = V_0;
		int32_t L_8 = ResponseBase_ParseJSONInt32_m2913(__this, (String_t*) &_stringLiteral203, L_6, L_7, /*hidden argument*/&ResponseBase_ParseJSONInt32_m2913_MethodInfo);
		CreateMatchResponse_set_port_m2940(__this, L_8, /*hidden argument*/&CreateMatchResponse_set_port_m2940_MethodInfo);
		Object_t * L_9 = ___obj;
		Object_t* L_10 = V_0;
		uint64_t L_11 = ResponseBase_ParseJSONUInt64_m2915(__this, (String_t*) &_stringLiteral204, L_9, L_10, /*hidden argument*/&ResponseBase_ParseJSONUInt64_m2915_MethodInfo);
		CreateMatchResponse_set_networkId_m2942(__this, L_11, /*hidden argument*/&CreateMatchResponse_set_networkId_m2942_MethodInfo);
		Object_t * L_12 = ___obj;
		Object_t* L_13 = V_0;
		String_t* L_14 = ResponseBase_ParseJSONString_m2912(__this, (String_t*) &_stringLiteral205, L_12, L_13, /*hidden argument*/&ResponseBase_ParseJSONString_m2912_MethodInfo);
		CreateMatchResponse_set_accessTokenString_m2944(__this, L_14, /*hidden argument*/&CreateMatchResponse_set_accessTokenString_m2944_MethodInfo);
		Object_t * L_15 = ___obj;
		Object_t* L_16 = V_0;
		uint16_t L_17 = ResponseBase_ParseJSONUInt16_m2914(__this, (String_t*) &_stringLiteral206, L_15, L_16, /*hidden argument*/&ResponseBase_ParseJSONUInt16_m2914_MethodInfo);
		CreateMatchResponse_set_nodeId_m2946(__this, L_17, /*hidden argument*/&CreateMatchResponse_set_nodeId_m2946_MethodInfo);
		Object_t * L_18 = ___obj;
		Object_t* L_19 = V_0;
		bool L_20 = ResponseBase_ParseJSONBool_m2916(__this, (String_t*) &_stringLiteral207, L_18, L_19, /*hidden argument*/&ResponseBase_ParseJSONBool_m2916_MethodInfo);
		CreateMatchResponse_set_usingRelay_m2948(__this, L_20, /*hidden argument*/&CreateMatchResponse_set_usingRelay_m2948_MethodInfo);
		goto IL_00a1;
	}

IL_008b:
	{
		Object_t * L_21 = ___obj;
		NullCheck(L_21);
		String_t* L_22 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Object_ToString_m1967_MethodInfo, L_21);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_23 = String_Concat_m1678(NULL /*static, unused*/, (String_t*) &_stringLiteral208, L_22, /*hidden argument*/&String_Concat_m1678_MethodInfo);
		FormatException_t696 * L_24 = (FormatException_t696 *)il2cpp_codegen_object_new (InitializedTypeInfo(&FormatException_t696_il2cpp_TypeInfo));
		FormatException__ctor_m3420(L_24, L_23, /*hidden argument*/&FormatException__ctor_m3420_MethodInfo);
		il2cpp_codegen_raise_exception(L_24);
	}

IL_00a1:
	{
		return;
	}
}
// UnityEngine.Networking.Match.JoinMatchRequest
#include "UnityEngine_UnityEngine_Networking_Match_JoinMatchRequest.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo JoinMatchRequest_t568_il2cpp_TypeInfo;
// UnityEngine.Networking.Match.JoinMatchRequest
#include "UnityEngine_UnityEngine_Networking_Match_JoinMatchRequestMethodDeclarations.h"

extern MethodInfo JoinMatchRequest_get_networkId_m2952_MethodInfo;
extern MethodInfo JoinMatchRequest_get_password_m2954_MethodInfo;


// System.Void UnityEngine.Networking.Match.JoinMatchRequest::.ctor()
extern MethodInfo JoinMatchRequest__ctor_m2951_MethodInfo;
extern "C" void JoinMatchRequest__ctor_m2951 (JoinMatchRequest_t568 * __this, MethodInfo* method)
{
	{
		Request__ctor_m2906(__this, /*hidden argument*/&Request__ctor_m2906_MethodInfo);
		return;
	}
}
// UnityEngine.Networking.Types.NetworkID UnityEngine.Networking.Match.JoinMatchRequest::get_networkId()
extern "C" uint64_t JoinMatchRequest_get_networkId_m2952 (JoinMatchRequest_t568 * __this, MethodInfo* method)
{
	{
		uint64_t L_0 = (__this->___U3CnetworkIdU3Ek__BackingField_4);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.JoinMatchRequest::set_networkId(UnityEngine.Networking.Types.NetworkID)
extern MethodInfo JoinMatchRequest_set_networkId_m2953_MethodInfo;
extern "C" void JoinMatchRequest_set_networkId_m2953 (JoinMatchRequest_t568 * __this, uint64_t ___value, MethodInfo* method)
{
	{
		uint64_t L_0 = ___value;
		__this->___U3CnetworkIdU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.String UnityEngine.Networking.Match.JoinMatchRequest::get_password()
extern "C" String_t* JoinMatchRequest_get_password_m2954 (JoinMatchRequest_t568 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CpasswordU3Ek__BackingField_5);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.JoinMatchRequest::set_password(System.String)
extern MethodInfo JoinMatchRequest_set_password_m2955_MethodInfo;
extern "C" void JoinMatchRequest_set_password_m2955 (JoinMatchRequest_t568 * __this, String_t* ___value, MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CpasswordU3Ek__BackingField_5 = L_0;
		return;
	}
}
// System.String UnityEngine.Networking.Match.JoinMatchRequest::ToString()
extern MethodInfo JoinMatchRequest_ToString_m2956_MethodInfo;
extern TypeInfo* ObjectU5BU5D_t269_il2cpp_TypeInfo_var;
extern "C" String_t* JoinMatchRequest_ToString_m2956 (JoinMatchRequest_t568 * __this, MethodInfo* method)
{
	static bool JoinMatchRequest_ToString_m2956_init;
	if (!JoinMatchRequest_ToString_m2956_init)
	{
		ObjectU5BU5D_t269_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t269_0_0_0);
		JoinMatchRequest_ToString_m2956_init = true;
	}
	int32_t G_B2_0 = 0;
	ObjectU5BU5D_t269* G_B2_1 = {0};
	ObjectU5BU5D_t269* G_B2_2 = {0};
	String_t* G_B2_3 = {0};
	int32_t G_B1_0 = 0;
	ObjectU5BU5D_t269* G_B1_1 = {0};
	ObjectU5BU5D_t269* G_B1_2 = {0};
	String_t* G_B1_3 = {0};
	String_t* G_B3_0 = {0};
	int32_t G_B3_1 = 0;
	ObjectU5BU5D_t269* G_B3_2 = {0};
	ObjectU5BU5D_t269* G_B3_3 = {0};
	String_t* G_B3_4 = {0};
	{
		ObjectU5BU5D_t269* L_0 = ((ObjectU5BU5D_t269*)SZArrayNew(ObjectU5BU5D_t269_il2cpp_TypeInfo_var, 3));
		String_t* L_1 = Request_ToString_m2910(__this, /*hidden argument*/&Request_ToString_m2910_MethodInfo);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t269* L_2 = L_0;
		uint64_t L_3 = JoinMatchRequest_get_networkId_m2952(__this, /*hidden argument*/&JoinMatchRequest_get_networkId_m2952_MethodInfo);
		uint64_t L_4 = L_3;
		Object_t * L_5 = Box(InitializedTypeInfo(&NetworkID_t580_il2cpp_TypeInfo), &L_4);
		NullCheck(L_5);
		String_t* L_6 = Enum_ToString_m3418(L_5, (String_t*) &_stringLiteral192, /*hidden argument*/&Enum_ToString_m3418_MethodInfo);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_6);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_6;
		ObjectU5BU5D_t269* L_7 = L_2;
		String_t* L_8 = JoinMatchRequest_get_password_m2954(__this, /*hidden argument*/&JoinMatchRequest_get_password_m2954_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_9 = ((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2;
		bool L_10 = String_op_Equality_m1635(NULL /*static, unused*/, L_8, L_9, /*hidden argument*/&String_op_Equality_m1635_MethodInfo);
		G_B1_0 = 2;
		G_B1_1 = L_7;
		G_B1_2 = L_7;
		G_B1_3 = (String_t*) &_stringLiteral209;
		if (!L_10)
		{
			G_B2_0 = 2;
			G_B2_1 = L_7;
			G_B2_2 = L_7;
			G_B2_3 = (String_t*) &_stringLiteral209;
			goto IL_004d;
		}
	}
	{
		G_B3_0 = (String_t*) &_stringLiteral199;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		G_B3_4 = G_B1_3;
		goto IL_0052;
	}

IL_004d:
	{
		G_B3_0 = (String_t*) &_stringLiteral200;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
		G_B3_4 = G_B2_3;
	}

IL_0052:
	{
		NullCheck(G_B3_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B3_2, G_B3_1);
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		*((Object_t **)(Object_t **)SZArrayLdElema(G_B3_2, G_B3_1)) = (Object_t *)G_B3_0;
		String_t* L_11 = UnityString_Format_m2626(NULL /*static, unused*/, G_B3_4, G_B3_3, /*hidden argument*/&UnityString_Format_m2626_MethodInfo);
		return L_11;
	}
}
// UnityEngine.Networking.Match.JoinMatchResponse
#include "UnityEngine_UnityEngine_Networking_Match_JoinMatchResponse.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo JoinMatchResponse_t569_il2cpp_TypeInfo;
// UnityEngine.Networking.Match.JoinMatchResponse
#include "UnityEngine_UnityEngine_Networking_Match_JoinMatchResponseMethodDeclarations.h"

extern MethodInfo JoinMatchResponse_get_address_m2958_MethodInfo;
extern MethodInfo JoinMatchResponse_get_port_m2960_MethodInfo;
extern MethodInfo JoinMatchResponse_get_networkId_m2962_MethodInfo;
extern MethodInfo JoinMatchResponse_get_nodeId_m2966_MethodInfo;
extern MethodInfo JoinMatchResponse_get_usingRelay_m2968_MethodInfo;
extern MethodInfo JoinMatchResponse_set_address_m2959_MethodInfo;
extern MethodInfo JoinMatchResponse_set_port_m2961_MethodInfo;
extern MethodInfo JoinMatchResponse_set_networkId_m2963_MethodInfo;
extern MethodInfo JoinMatchResponse_set_accessTokenString_m2965_MethodInfo;
extern MethodInfo JoinMatchResponse_set_nodeId_m2967_MethodInfo;
extern MethodInfo JoinMatchResponse_set_usingRelay_m2969_MethodInfo;


// System.Void UnityEngine.Networking.Match.JoinMatchResponse::.ctor()
extern MethodInfo JoinMatchResponse__ctor_m2957_MethodInfo;
extern "C" void JoinMatchResponse__ctor_m2957 (JoinMatchResponse_t569 * __this, MethodInfo* method)
{
	{
		BasicResponse__ctor_m2924(__this, /*hidden argument*/&BasicResponse__ctor_m2924_MethodInfo);
		return;
	}
}
// System.String UnityEngine.Networking.Match.JoinMatchResponse::get_address()
extern "C" String_t* JoinMatchResponse_get_address_m2958 (JoinMatchResponse_t569 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CaddressU3Ek__BackingField_2);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.JoinMatchResponse::set_address(System.String)
extern "C" void JoinMatchResponse_set_address_m2959 (JoinMatchResponse_t569 * __this, String_t* ___value, MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CaddressU3Ek__BackingField_2 = L_0;
		return;
	}
}
// System.Int32 UnityEngine.Networking.Match.JoinMatchResponse::get_port()
extern "C" int32_t JoinMatchResponse_get_port_m2960 (JoinMatchResponse_t569 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___U3CportU3Ek__BackingField_3);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.JoinMatchResponse::set_port(System.Int32)
extern "C" void JoinMatchResponse_set_port_m2961 (JoinMatchResponse_t569 * __this, int32_t ___value, MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___U3CportU3Ek__BackingField_3 = L_0;
		return;
	}
}
// UnityEngine.Networking.Types.NetworkID UnityEngine.Networking.Match.JoinMatchResponse::get_networkId()
extern "C" uint64_t JoinMatchResponse_get_networkId_m2962 (JoinMatchResponse_t569 * __this, MethodInfo* method)
{
	{
		uint64_t L_0 = (__this->___U3CnetworkIdU3Ek__BackingField_4);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.JoinMatchResponse::set_networkId(UnityEngine.Networking.Types.NetworkID)
extern "C" void JoinMatchResponse_set_networkId_m2963 (JoinMatchResponse_t569 * __this, uint64_t ___value, MethodInfo* method)
{
	{
		uint64_t L_0 = ___value;
		__this->___U3CnetworkIdU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.String UnityEngine.Networking.Match.JoinMatchResponse::get_accessTokenString()
extern MethodInfo JoinMatchResponse_get_accessTokenString_m2964_MethodInfo;
extern "C" String_t* JoinMatchResponse_get_accessTokenString_m2964 (JoinMatchResponse_t569 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CaccessTokenStringU3Ek__BackingField_5);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.JoinMatchResponse::set_accessTokenString(System.String)
extern "C" void JoinMatchResponse_set_accessTokenString_m2965 (JoinMatchResponse_t569 * __this, String_t* ___value, MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CaccessTokenStringU3Ek__BackingField_5 = L_0;
		return;
	}
}
// UnityEngine.Networking.Types.NodeID UnityEngine.Networking.Match.JoinMatchResponse::get_nodeId()
extern "C" uint16_t JoinMatchResponse_get_nodeId_m2966 (JoinMatchResponse_t569 * __this, MethodInfo* method)
{
	{
		uint16_t L_0 = (__this->___U3CnodeIdU3Ek__BackingField_6);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.JoinMatchResponse::set_nodeId(UnityEngine.Networking.Types.NodeID)
extern "C" void JoinMatchResponse_set_nodeId_m2967 (JoinMatchResponse_t569 * __this, uint16_t ___value, MethodInfo* method)
{
	{
		uint16_t L_0 = ___value;
		__this->___U3CnodeIdU3Ek__BackingField_6 = L_0;
		return;
	}
}
// System.Boolean UnityEngine.Networking.Match.JoinMatchResponse::get_usingRelay()
extern "C" bool JoinMatchResponse_get_usingRelay_m2968 (JoinMatchResponse_t569 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->___U3CusingRelayU3Ek__BackingField_7);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.JoinMatchResponse::set_usingRelay(System.Boolean)
extern "C" void JoinMatchResponse_set_usingRelay_m2969 (JoinMatchResponse_t569 * __this, bool ___value, MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___U3CusingRelayU3Ek__BackingField_7 = L_0;
		return;
	}
}
// System.String UnityEngine.Networking.Match.JoinMatchResponse::ToString()
extern MethodInfo JoinMatchResponse_ToString_m2970_MethodInfo;
extern TypeInfo* ObjectU5BU5D_t269_il2cpp_TypeInfo_var;
extern "C" String_t* JoinMatchResponse_ToString_m2970 (JoinMatchResponse_t569 * __this, MethodInfo* method)
{
	static bool JoinMatchResponse_ToString_m2970_init;
	if (!JoinMatchResponse_ToString_m2970_init)
	{
		ObjectU5BU5D_t269_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t269_0_0_0);
		JoinMatchResponse_ToString_m2970_init = true;
	}
	{
		ObjectU5BU5D_t269* L_0 = ((ObjectU5BU5D_t269*)SZArrayNew(ObjectU5BU5D_t269_il2cpp_TypeInfo_var, 6));
		String_t* L_1 = Response_ToString_m2922(__this, /*hidden argument*/&Response_ToString_m2922_MethodInfo);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t269* L_2 = L_0;
		String_t* L_3 = JoinMatchResponse_get_address_m2958(__this, /*hidden argument*/&JoinMatchResponse_get_address_m2958_MethodInfo);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_3;
		ObjectU5BU5D_t269* L_4 = L_2;
		int32_t L_5 = JoinMatchResponse_get_port_m2960(__this, /*hidden argument*/&JoinMatchResponse_get_port_m2960_MethodInfo);
		int32_t L_6 = L_5;
		Object_t * L_7 = Box(InitializedTypeInfo(&Int32_t17_il2cpp_TypeInfo), &L_6);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 2);
		ArrayElementTypeCheck (L_4, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 2)) = (Object_t *)L_7;
		ObjectU5BU5D_t269* L_8 = L_4;
		uint64_t L_9 = JoinMatchResponse_get_networkId_m2962(__this, /*hidden argument*/&JoinMatchResponse_get_networkId_m2962_MethodInfo);
		uint64_t L_10 = L_9;
		Object_t * L_11 = Box(InitializedTypeInfo(&NetworkID_t580_il2cpp_TypeInfo), &L_10);
		NullCheck(L_11);
		String_t* L_12 = Enum_ToString_m3418(L_11, (String_t*) &_stringLiteral192, /*hidden argument*/&Enum_ToString_m3418_MethodInfo);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 3);
		ArrayElementTypeCheck (L_8, L_12);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 3)) = (Object_t *)L_12;
		ObjectU5BU5D_t269* L_13 = L_8;
		uint16_t L_14 = JoinMatchResponse_get_nodeId_m2966(__this, /*hidden argument*/&JoinMatchResponse_get_nodeId_m2966_MethodInfo);
		uint16_t L_15 = L_14;
		Object_t * L_16 = Box(InitializedTypeInfo(&NodeID_t581_il2cpp_TypeInfo), &L_15);
		NullCheck(L_16);
		String_t* L_17 = Enum_ToString_m3418(L_16, (String_t*) &_stringLiteral192, /*hidden argument*/&Enum_ToString_m3418_MethodInfo);
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, 4);
		ArrayElementTypeCheck (L_13, L_17);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_13, 4)) = (Object_t *)L_17;
		ObjectU5BU5D_t269* L_18 = L_13;
		bool L_19 = JoinMatchResponse_get_usingRelay_m2968(__this, /*hidden argument*/&JoinMatchResponse_get_usingRelay_m2968_MethodInfo);
		bool L_20 = L_19;
		Object_t * L_21 = Box(InitializedTypeInfo(&Boolean_t13_il2cpp_TypeInfo), &L_20);
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, 5);
		ArrayElementTypeCheck (L_18, L_21);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_18, 5)) = (Object_t *)L_21;
		String_t* L_22 = UnityString_Format_m2626(NULL /*static, unused*/, (String_t*) &_stringLiteral201, L_18, /*hidden argument*/&UnityString_Format_m2626_MethodInfo);
		return L_22;
	}
}
// System.Void UnityEngine.Networking.Match.JoinMatchResponse::Parse(System.Object)
extern MethodInfo JoinMatchResponse_Parse_m2971_MethodInfo;
extern TypeInfo* IDictionary_2_t562_il2cpp_TypeInfo_var;
extern "C" void JoinMatchResponse_Parse_m2971 (JoinMatchResponse_t569 * __this, Object_t * ___obj, MethodInfo* method)
{
	static bool JoinMatchResponse_Parse_m2971_init;
	if (!JoinMatchResponse_Parse_m2971_init)
	{
		IDictionary_2_t562_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&IDictionary_2_t562_0_0_0);
		JoinMatchResponse_Parse_m2971_init = true;
	}
	Object_t* V_0 = {0};
	{
		Object_t * L_0 = ___obj;
		Response_Parse_m2923(__this, L_0, /*hidden argument*/&Response_Parse_m2923_MethodInfo);
		Object_t * L_1 = ___obj;
		V_0 = ((Object_t*)IsInst(L_1, IDictionary_2_t562_il2cpp_TypeInfo_var));
		Object_t* L_2 = V_0;
		if (!L_2)
		{
			goto IL_008b;
		}
	}
	{
		Object_t * L_3 = ___obj;
		Object_t* L_4 = V_0;
		String_t* L_5 = ResponseBase_ParseJSONString_m2912(__this, (String_t*) &_stringLiteral202, L_3, L_4, /*hidden argument*/&ResponseBase_ParseJSONString_m2912_MethodInfo);
		JoinMatchResponse_set_address_m2959(__this, L_5, /*hidden argument*/&JoinMatchResponse_set_address_m2959_MethodInfo);
		Object_t * L_6 = ___obj;
		Object_t* L_7 = V_0;
		int32_t L_8 = ResponseBase_ParseJSONInt32_m2913(__this, (String_t*) &_stringLiteral203, L_6, L_7, /*hidden argument*/&ResponseBase_ParseJSONInt32_m2913_MethodInfo);
		JoinMatchResponse_set_port_m2961(__this, L_8, /*hidden argument*/&JoinMatchResponse_set_port_m2961_MethodInfo);
		Object_t * L_9 = ___obj;
		Object_t* L_10 = V_0;
		uint64_t L_11 = ResponseBase_ParseJSONUInt64_m2915(__this, (String_t*) &_stringLiteral204, L_9, L_10, /*hidden argument*/&ResponseBase_ParseJSONUInt64_m2915_MethodInfo);
		JoinMatchResponse_set_networkId_m2963(__this, L_11, /*hidden argument*/&JoinMatchResponse_set_networkId_m2963_MethodInfo);
		Object_t * L_12 = ___obj;
		Object_t* L_13 = V_0;
		String_t* L_14 = ResponseBase_ParseJSONString_m2912(__this, (String_t*) &_stringLiteral205, L_12, L_13, /*hidden argument*/&ResponseBase_ParseJSONString_m2912_MethodInfo);
		JoinMatchResponse_set_accessTokenString_m2965(__this, L_14, /*hidden argument*/&JoinMatchResponse_set_accessTokenString_m2965_MethodInfo);
		Object_t * L_15 = ___obj;
		Object_t* L_16 = V_0;
		uint16_t L_17 = ResponseBase_ParseJSONUInt16_m2914(__this, (String_t*) &_stringLiteral206, L_15, L_16, /*hidden argument*/&ResponseBase_ParseJSONUInt16_m2914_MethodInfo);
		JoinMatchResponse_set_nodeId_m2967(__this, L_17, /*hidden argument*/&JoinMatchResponse_set_nodeId_m2967_MethodInfo);
		Object_t * L_18 = ___obj;
		Object_t* L_19 = V_0;
		bool L_20 = ResponseBase_ParseJSONBool_m2916(__this, (String_t*) &_stringLiteral207, L_18, L_19, /*hidden argument*/&ResponseBase_ParseJSONBool_m2916_MethodInfo);
		JoinMatchResponse_set_usingRelay_m2969(__this, L_20, /*hidden argument*/&JoinMatchResponse_set_usingRelay_m2969_MethodInfo);
		goto IL_00a1;
	}

IL_008b:
	{
		Object_t * L_21 = ___obj;
		NullCheck(L_21);
		String_t* L_22 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Object_ToString_m1967_MethodInfo, L_21);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_23 = String_Concat_m1678(NULL /*static, unused*/, (String_t*) &_stringLiteral208, L_22, /*hidden argument*/&String_Concat_m1678_MethodInfo);
		FormatException_t696 * L_24 = (FormatException_t696 *)il2cpp_codegen_object_new (InitializedTypeInfo(&FormatException_t696_il2cpp_TypeInfo));
		FormatException__ctor_m3420(L_24, L_23, /*hidden argument*/&FormatException__ctor_m3420_MethodInfo);
		il2cpp_codegen_raise_exception(L_24);
	}

IL_00a1:
	{
		return;
	}
}
// UnityEngine.Networking.Match.DestroyMatchRequest
#include "UnityEngine_UnityEngine_Networking_Match_DestroyMatchRequest.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo DestroyMatchRequest_t570_il2cpp_TypeInfo;
// UnityEngine.Networking.Match.DestroyMatchRequest
#include "UnityEngine_UnityEngine_Networking_Match_DestroyMatchRequestMethodDeclarations.h"

extern MethodInfo DestroyMatchRequest_get_networkId_m2973_MethodInfo;


// System.Void UnityEngine.Networking.Match.DestroyMatchRequest::.ctor()
extern MethodInfo DestroyMatchRequest__ctor_m2972_MethodInfo;
extern "C" void DestroyMatchRequest__ctor_m2972 (DestroyMatchRequest_t570 * __this, MethodInfo* method)
{
	{
		Request__ctor_m2906(__this, /*hidden argument*/&Request__ctor_m2906_MethodInfo);
		return;
	}
}
// UnityEngine.Networking.Types.NetworkID UnityEngine.Networking.Match.DestroyMatchRequest::get_networkId()
extern "C" uint64_t DestroyMatchRequest_get_networkId_m2973 (DestroyMatchRequest_t570 * __this, MethodInfo* method)
{
	{
		uint64_t L_0 = (__this->___U3CnetworkIdU3Ek__BackingField_4);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.DestroyMatchRequest::set_networkId(UnityEngine.Networking.Types.NetworkID)
extern MethodInfo DestroyMatchRequest_set_networkId_m2974_MethodInfo;
extern "C" void DestroyMatchRequest_set_networkId_m2974 (DestroyMatchRequest_t570 * __this, uint64_t ___value, MethodInfo* method)
{
	{
		uint64_t L_0 = ___value;
		__this->___U3CnetworkIdU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.String UnityEngine.Networking.Match.DestroyMatchRequest::ToString()
extern MethodInfo DestroyMatchRequest_ToString_m2975_MethodInfo;
extern TypeInfo* ObjectU5BU5D_t269_il2cpp_TypeInfo_var;
extern "C" String_t* DestroyMatchRequest_ToString_m2975 (DestroyMatchRequest_t570 * __this, MethodInfo* method)
{
	static bool DestroyMatchRequest_ToString_m2975_init;
	if (!DestroyMatchRequest_ToString_m2975_init)
	{
		ObjectU5BU5D_t269_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t269_0_0_0);
		DestroyMatchRequest_ToString_m2975_init = true;
	}
	{
		ObjectU5BU5D_t269* L_0 = ((ObjectU5BU5D_t269*)SZArrayNew(ObjectU5BU5D_t269_il2cpp_TypeInfo_var, 2));
		String_t* L_1 = Request_ToString_m2910(__this, /*hidden argument*/&Request_ToString_m2910_MethodInfo);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t269* L_2 = L_0;
		uint64_t L_3 = DestroyMatchRequest_get_networkId_m2973(__this, /*hidden argument*/&DestroyMatchRequest_get_networkId_m2973_MethodInfo);
		uint64_t L_4 = L_3;
		Object_t * L_5 = Box(InitializedTypeInfo(&NetworkID_t580_il2cpp_TypeInfo), &L_4);
		NullCheck(L_5);
		String_t* L_6 = Enum_ToString_m3418(L_5, (String_t*) &_stringLiteral192, /*hidden argument*/&Enum_ToString_m3418_MethodInfo);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_6);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_6;
		String_t* L_7 = UnityString_Format_m2626(NULL /*static, unused*/, (String_t*) &_stringLiteral210, L_2, /*hidden argument*/&UnityString_Format_m2626_MethodInfo);
		return L_7;
	}
}
// UnityEngine.Networking.Match.DropConnectionRequest
#include "UnityEngine_UnityEngine_Networking_Match_DropConnectionReque.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo DropConnectionRequest_t571_il2cpp_TypeInfo;
// UnityEngine.Networking.Match.DropConnectionRequest
#include "UnityEngine_UnityEngine_Networking_Match_DropConnectionRequeMethodDeclarations.h"

extern MethodInfo DropConnectionRequest_get_networkId_m2977_MethodInfo;
extern MethodInfo DropConnectionRequest_get_nodeId_m2979_MethodInfo;


// System.Void UnityEngine.Networking.Match.DropConnectionRequest::.ctor()
extern MethodInfo DropConnectionRequest__ctor_m2976_MethodInfo;
extern "C" void DropConnectionRequest__ctor_m2976 (DropConnectionRequest_t571 * __this, MethodInfo* method)
{
	{
		Request__ctor_m2906(__this, /*hidden argument*/&Request__ctor_m2906_MethodInfo);
		return;
	}
}
// UnityEngine.Networking.Types.NetworkID UnityEngine.Networking.Match.DropConnectionRequest::get_networkId()
extern "C" uint64_t DropConnectionRequest_get_networkId_m2977 (DropConnectionRequest_t571 * __this, MethodInfo* method)
{
	{
		uint64_t L_0 = (__this->___U3CnetworkIdU3Ek__BackingField_4);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.DropConnectionRequest::set_networkId(UnityEngine.Networking.Types.NetworkID)
extern MethodInfo DropConnectionRequest_set_networkId_m2978_MethodInfo;
extern "C" void DropConnectionRequest_set_networkId_m2978 (DropConnectionRequest_t571 * __this, uint64_t ___value, MethodInfo* method)
{
	{
		uint64_t L_0 = ___value;
		__this->___U3CnetworkIdU3Ek__BackingField_4 = L_0;
		return;
	}
}
// UnityEngine.Networking.Types.NodeID UnityEngine.Networking.Match.DropConnectionRequest::get_nodeId()
extern "C" uint16_t DropConnectionRequest_get_nodeId_m2979 (DropConnectionRequest_t571 * __this, MethodInfo* method)
{
	{
		uint16_t L_0 = (__this->___U3CnodeIdU3Ek__BackingField_5);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.DropConnectionRequest::set_nodeId(UnityEngine.Networking.Types.NodeID)
extern MethodInfo DropConnectionRequest_set_nodeId_m2980_MethodInfo;
extern "C" void DropConnectionRequest_set_nodeId_m2980 (DropConnectionRequest_t571 * __this, uint16_t ___value, MethodInfo* method)
{
	{
		uint16_t L_0 = ___value;
		__this->___U3CnodeIdU3Ek__BackingField_5 = L_0;
		return;
	}
}
// System.String UnityEngine.Networking.Match.DropConnectionRequest::ToString()
extern MethodInfo DropConnectionRequest_ToString_m2981_MethodInfo;
extern TypeInfo* ObjectU5BU5D_t269_il2cpp_TypeInfo_var;
extern "C" String_t* DropConnectionRequest_ToString_m2981 (DropConnectionRequest_t571 * __this, MethodInfo* method)
{
	static bool DropConnectionRequest_ToString_m2981_init;
	if (!DropConnectionRequest_ToString_m2981_init)
	{
		ObjectU5BU5D_t269_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t269_0_0_0);
		DropConnectionRequest_ToString_m2981_init = true;
	}
	{
		ObjectU5BU5D_t269* L_0 = ((ObjectU5BU5D_t269*)SZArrayNew(ObjectU5BU5D_t269_il2cpp_TypeInfo_var, 3));
		String_t* L_1 = Request_ToString_m2910(__this, /*hidden argument*/&Request_ToString_m2910_MethodInfo);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t269* L_2 = L_0;
		uint64_t L_3 = DropConnectionRequest_get_networkId_m2977(__this, /*hidden argument*/&DropConnectionRequest_get_networkId_m2977_MethodInfo);
		uint64_t L_4 = L_3;
		Object_t * L_5 = Box(InitializedTypeInfo(&NetworkID_t580_il2cpp_TypeInfo), &L_4);
		NullCheck(L_5);
		String_t* L_6 = Enum_ToString_m3418(L_5, (String_t*) &_stringLiteral192, /*hidden argument*/&Enum_ToString_m3418_MethodInfo);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_6);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_6;
		ObjectU5BU5D_t269* L_7 = L_2;
		uint16_t L_8 = DropConnectionRequest_get_nodeId_m2979(__this, /*hidden argument*/&DropConnectionRequest_get_nodeId_m2979_MethodInfo);
		uint16_t L_9 = L_8;
		Object_t * L_10 = Box(InitializedTypeInfo(&NodeID_t581_il2cpp_TypeInfo), &L_9);
		NullCheck(L_10);
		String_t* L_11 = Enum_ToString_m3418(L_10, (String_t*) &_stringLiteral192, /*hidden argument*/&Enum_ToString_m3418_MethodInfo);
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 2);
		ArrayElementTypeCheck (L_7, L_11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_7, 2)) = (Object_t *)L_11;
		String_t* L_12 = UnityString_Format_m2626(NULL /*static, unused*/, (String_t*) &_stringLiteral211, L_7, /*hidden argument*/&UnityString_Format_m2626_MethodInfo);
		return L_12;
	}
}
// UnityEngine.Networking.Match.ListMatchRequest
#include "UnityEngine_UnityEngine_Networking_Match_ListMatchRequest.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ListMatchRequest_t572_il2cpp_TypeInfo;
// UnityEngine.Networking.Match.ListMatchRequest
#include "UnityEngine_UnityEngine_Networking_Match_ListMatchRequestMethodDeclarations.h"

extern MethodInfo ListMatchRequest_get_pageSize_m2983_MethodInfo;
extern MethodInfo ListMatchRequest_get_pageNum_m2985_MethodInfo;
extern MethodInfo ListMatchRequest_get_nameFilter_m2987_MethodInfo;
extern MethodInfo ListMatchRequest_get_matchAttributeFilterLessThan_m2989_MethodInfo;
extern MethodInfo ListMatchRequest_get_matchAttributeFilterGreaterThan_m2990_MethodInfo;


// System.Void UnityEngine.Networking.Match.ListMatchRequest::.ctor()
extern MethodInfo ListMatchRequest__ctor_m2982_MethodInfo;
extern "C" void ListMatchRequest__ctor_m2982 (ListMatchRequest_t572 * __this, MethodInfo* method)
{
	{
		Request__ctor_m2906(__this, /*hidden argument*/&Request__ctor_m2906_MethodInfo);
		return;
	}
}
// System.Int32 UnityEngine.Networking.Match.ListMatchRequest::get_pageSize()
extern "C" int32_t ListMatchRequest_get_pageSize_m2983 (ListMatchRequest_t572 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___U3CpageSizeU3Ek__BackingField_4);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.ListMatchRequest::set_pageSize(System.Int32)
extern MethodInfo ListMatchRequest_set_pageSize_m2984_MethodInfo;
extern "C" void ListMatchRequest_set_pageSize_m2984 (ListMatchRequest_t572 * __this, int32_t ___value, MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___U3CpageSizeU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.Int32 UnityEngine.Networking.Match.ListMatchRequest::get_pageNum()
extern "C" int32_t ListMatchRequest_get_pageNum_m2985 (ListMatchRequest_t572 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___U3CpageNumU3Ek__BackingField_5);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.ListMatchRequest::set_pageNum(System.Int32)
extern MethodInfo ListMatchRequest_set_pageNum_m2986_MethodInfo;
extern "C" void ListMatchRequest_set_pageNum_m2986 (ListMatchRequest_t572 * __this, int32_t ___value, MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___U3CpageNumU3Ek__BackingField_5 = L_0;
		return;
	}
}
// System.String UnityEngine.Networking.Match.ListMatchRequest::get_nameFilter()
extern "C" String_t* ListMatchRequest_get_nameFilter_m2987 (ListMatchRequest_t572 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CnameFilterU3Ek__BackingField_6);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.ListMatchRequest::set_nameFilter(System.String)
extern MethodInfo ListMatchRequest_set_nameFilter_m2988_MethodInfo;
extern "C" void ListMatchRequest_set_nameFilter_m2988 (ListMatchRequest_t572 * __this, String_t* ___value, MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CnameFilterU3Ek__BackingField_6 = L_0;
		return;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.Int64> UnityEngine.Networking.Match.ListMatchRequest::get_matchAttributeFilterLessThan()
extern "C" Dictionary_2_t565 * ListMatchRequest_get_matchAttributeFilterLessThan_m2989 (ListMatchRequest_t572 * __this, MethodInfo* method)
{
	{
		Dictionary_2_t565 * L_0 = (__this->___U3CmatchAttributeFilterLessThanU3Ek__BackingField_7);
		return L_0;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.Int64> UnityEngine.Networking.Match.ListMatchRequest::get_matchAttributeFilterGreaterThan()
extern "C" Dictionary_2_t565 * ListMatchRequest_get_matchAttributeFilterGreaterThan_m2990 (ListMatchRequest_t572 * __this, MethodInfo* method)
{
	{
		Dictionary_2_t565 * L_0 = (__this->___U3CmatchAttributeFilterGreaterThanU3Ek__BackingField_8);
		return L_0;
	}
}
// System.String UnityEngine.Networking.Match.ListMatchRequest::ToString()
extern MethodInfo ListMatchRequest_ToString_m2991_MethodInfo;
extern TypeInfo* ObjectU5BU5D_t269_il2cpp_TypeInfo_var;
extern MethodInfo* Dictionary_2_get_Count_m3425_MethodInfo_var;
extern "C" String_t* ListMatchRequest_ToString_m2991 (ListMatchRequest_t572 * __this, MethodInfo* method)
{
	static bool ListMatchRequest_ToString_m2991_init;
	if (!ListMatchRequest_ToString_m2991_init)
	{
		ObjectU5BU5D_t269_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t269_0_0_0);
		Dictionary_2_get_Count_m3425_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2_get_Count_m3425_GenericMethod);
		ListMatchRequest_ToString_m2991_init = true;
	}
	int32_t G_B2_0 = 0;
	ObjectU5BU5D_t269* G_B2_1 = {0};
	ObjectU5BU5D_t269* G_B2_2 = {0};
	String_t* G_B2_3 = {0};
	int32_t G_B1_0 = 0;
	ObjectU5BU5D_t269* G_B1_1 = {0};
	ObjectU5BU5D_t269* G_B1_2 = {0};
	String_t* G_B1_3 = {0};
	int32_t G_B3_0 = 0;
	int32_t G_B3_1 = 0;
	ObjectU5BU5D_t269* G_B3_2 = {0};
	ObjectU5BU5D_t269* G_B3_3 = {0};
	String_t* G_B3_4 = {0};
	int32_t G_B5_0 = 0;
	ObjectU5BU5D_t269* G_B5_1 = {0};
	ObjectU5BU5D_t269* G_B5_2 = {0};
	String_t* G_B5_3 = {0};
	int32_t G_B4_0 = 0;
	ObjectU5BU5D_t269* G_B4_1 = {0};
	ObjectU5BU5D_t269* G_B4_2 = {0};
	String_t* G_B4_3 = {0};
	int32_t G_B6_0 = 0;
	int32_t G_B6_1 = 0;
	ObjectU5BU5D_t269* G_B6_2 = {0};
	ObjectU5BU5D_t269* G_B6_3 = {0};
	String_t* G_B6_4 = {0};
	{
		ObjectU5BU5D_t269* L_0 = ((ObjectU5BU5D_t269*)SZArrayNew(ObjectU5BU5D_t269_il2cpp_TypeInfo_var, 6));
		String_t* L_1 = Request_ToString_m2910(__this, /*hidden argument*/&Request_ToString_m2910_MethodInfo);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t269* L_2 = L_0;
		int32_t L_3 = ListMatchRequest_get_pageSize_m2983(__this, /*hidden argument*/&ListMatchRequest_get_pageSize_m2983_MethodInfo);
		int32_t L_4 = L_3;
		Object_t * L_5 = Box(InitializedTypeInfo(&Int32_t17_il2cpp_TypeInfo), &L_4);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_5;
		ObjectU5BU5D_t269* L_6 = L_2;
		int32_t L_7 = ListMatchRequest_get_pageNum_m2985(__this, /*hidden argument*/&ListMatchRequest_get_pageNum_m2985_MethodInfo);
		int32_t L_8 = L_7;
		Object_t * L_9 = Box(InitializedTypeInfo(&Int32_t17_il2cpp_TypeInfo), &L_8);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 2);
		ArrayElementTypeCheck (L_6, L_9);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 2)) = (Object_t *)L_9;
		ObjectU5BU5D_t269* L_10 = L_6;
		String_t* L_11 = ListMatchRequest_get_nameFilter_m2987(__this, /*hidden argument*/&ListMatchRequest_get_nameFilter_m2987_MethodInfo);
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 3);
		ArrayElementTypeCheck (L_10, L_11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_10, 3)) = (Object_t *)L_11;
		ObjectU5BU5D_t269* L_12 = L_10;
		Dictionary_2_t565 * L_13 = ListMatchRequest_get_matchAttributeFilterLessThan_m2989(__this, /*hidden argument*/&ListMatchRequest_get_matchAttributeFilterLessThan_m2989_MethodInfo);
		G_B1_0 = 4;
		G_B1_1 = L_12;
		G_B1_2 = L_12;
		G_B1_3 = (String_t*) &_stringLiteral212;
		if (L_13)
		{
			G_B2_0 = 4;
			G_B2_1 = L_12;
			G_B2_2 = L_12;
			G_B2_3 = (String_t*) &_stringLiteral212;
			goto IL_004c;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		G_B3_4 = G_B1_3;
		goto IL_0057;
	}

IL_004c:
	{
		Dictionary_2_t565 * L_14 = ListMatchRequest_get_matchAttributeFilterLessThan_m2989(__this, /*hidden argument*/&ListMatchRequest_get_matchAttributeFilterLessThan_m2989_MethodInfo);
		NullCheck(L_14);
		int32_t L_15 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(Dictionary_2_get_Count_m3425_MethodInfo_var, L_14);
		G_B3_0 = L_15;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
		G_B3_4 = G_B2_3;
	}

IL_0057:
	{
		int32_t L_16 = G_B3_0;
		Object_t * L_17 = Box(InitializedTypeInfo(&Int32_t17_il2cpp_TypeInfo), &L_16);
		NullCheck(G_B3_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B3_2, G_B3_1);
		ArrayElementTypeCheck (G_B3_2, L_17);
		*((Object_t **)(Object_t **)SZArrayLdElema(G_B3_2, G_B3_1)) = (Object_t *)L_17;
		ObjectU5BU5D_t269* L_18 = G_B3_3;
		Dictionary_2_t565 * L_19 = ListMatchRequest_get_matchAttributeFilterGreaterThan_m2990(__this, /*hidden argument*/&ListMatchRequest_get_matchAttributeFilterGreaterThan_m2990_MethodInfo);
		G_B4_0 = 5;
		G_B4_1 = L_18;
		G_B4_2 = L_18;
		G_B4_3 = G_B3_4;
		if (L_19)
		{
			G_B5_0 = 5;
			G_B5_1 = L_18;
			G_B5_2 = L_18;
			G_B5_3 = G_B3_4;
			goto IL_0070;
		}
	}
	{
		G_B6_0 = 0;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		G_B6_4 = G_B4_3;
		goto IL_007b;
	}

IL_0070:
	{
		Dictionary_2_t565 * L_20 = ListMatchRequest_get_matchAttributeFilterGreaterThan_m2990(__this, /*hidden argument*/&ListMatchRequest_get_matchAttributeFilterGreaterThan_m2990_MethodInfo);
		NullCheck(L_20);
		int32_t L_21 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(Dictionary_2_get_Count_m3425_MethodInfo_var, L_20);
		G_B6_0 = L_21;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
		G_B6_4 = G_B5_3;
	}

IL_007b:
	{
		int32_t L_22 = G_B6_0;
		Object_t * L_23 = Box(InitializedTypeInfo(&Int32_t17_il2cpp_TypeInfo), &L_22);
		NullCheck(G_B6_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B6_2, G_B6_1);
		ArrayElementTypeCheck (G_B6_2, L_23);
		*((Object_t **)(Object_t **)SZArrayLdElema(G_B6_2, G_B6_1)) = (Object_t *)L_23;
		String_t* L_24 = UnityString_Format_m2626(NULL /*static, unused*/, G_B6_4, G_B6_3, /*hidden argument*/&UnityString_Format_m2626_MethodInfo);
		return L_24;
	}
}
// UnityEngine.Networking.Match.MatchDirectConnectInfo
#include "UnityEngine_UnityEngine_Networking_Match_MatchDirectConnectI.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo MatchDirectConnectInfo_t573_il2cpp_TypeInfo;
// UnityEngine.Networking.Match.MatchDirectConnectInfo
#include "UnityEngine_UnityEngine_Networking_Match_MatchDirectConnectIMethodDeclarations.h"

extern MethodInfo MatchDirectConnectInfo_get_nodeId_m2993_MethodInfo;
extern MethodInfo MatchDirectConnectInfo_get_publicAddress_m2995_MethodInfo;
extern MethodInfo MatchDirectConnectInfo_get_privateAddress_m2997_MethodInfo;
extern MethodInfo MatchDirectConnectInfo_set_nodeId_m2994_MethodInfo;
extern MethodInfo MatchDirectConnectInfo_set_publicAddress_m2996_MethodInfo;
extern MethodInfo MatchDirectConnectInfo_set_privateAddress_m2998_MethodInfo;


// System.Void UnityEngine.Networking.Match.MatchDirectConnectInfo::.ctor()
extern MethodInfo MatchDirectConnectInfo__ctor_m2992_MethodInfo;
extern "C" void MatchDirectConnectInfo__ctor_m2992 (MatchDirectConnectInfo_t573 * __this, MethodInfo* method)
{
	{
		ResponseBase__ctor_m2911(__this, /*hidden argument*/&ResponseBase__ctor_m2911_MethodInfo);
		return;
	}
}
// UnityEngine.Networking.Types.NodeID UnityEngine.Networking.Match.MatchDirectConnectInfo::get_nodeId()
extern "C" uint16_t MatchDirectConnectInfo_get_nodeId_m2993 (MatchDirectConnectInfo_t573 * __this, MethodInfo* method)
{
	{
		uint16_t L_0 = (__this->___U3CnodeIdU3Ek__BackingField_0);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.MatchDirectConnectInfo::set_nodeId(UnityEngine.Networking.Types.NodeID)
extern "C" void MatchDirectConnectInfo_set_nodeId_m2994 (MatchDirectConnectInfo_t573 * __this, uint16_t ___value, MethodInfo* method)
{
	{
		uint16_t L_0 = ___value;
		__this->___U3CnodeIdU3Ek__BackingField_0 = L_0;
		return;
	}
}
// System.String UnityEngine.Networking.Match.MatchDirectConnectInfo::get_publicAddress()
extern "C" String_t* MatchDirectConnectInfo_get_publicAddress_m2995 (MatchDirectConnectInfo_t573 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CpublicAddressU3Ek__BackingField_1);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.MatchDirectConnectInfo::set_publicAddress(System.String)
extern "C" void MatchDirectConnectInfo_set_publicAddress_m2996 (MatchDirectConnectInfo_t573 * __this, String_t* ___value, MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CpublicAddressU3Ek__BackingField_1 = L_0;
		return;
	}
}
// System.String UnityEngine.Networking.Match.MatchDirectConnectInfo::get_privateAddress()
extern "C" String_t* MatchDirectConnectInfo_get_privateAddress_m2997 (MatchDirectConnectInfo_t573 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CprivateAddressU3Ek__BackingField_2);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.MatchDirectConnectInfo::set_privateAddress(System.String)
extern "C" void MatchDirectConnectInfo_set_privateAddress_m2998 (MatchDirectConnectInfo_t573 * __this, String_t* ___value, MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CprivateAddressU3Ek__BackingField_2 = L_0;
		return;
	}
}
// System.String UnityEngine.Networking.Match.MatchDirectConnectInfo::ToString()
extern MethodInfo MatchDirectConnectInfo_ToString_m2999_MethodInfo;
extern TypeInfo* ObjectU5BU5D_t269_il2cpp_TypeInfo_var;
extern "C" String_t* MatchDirectConnectInfo_ToString_m2999 (MatchDirectConnectInfo_t573 * __this, MethodInfo* method)
{
	static bool MatchDirectConnectInfo_ToString_m2999_init;
	if (!MatchDirectConnectInfo_ToString_m2999_init)
	{
		ObjectU5BU5D_t269_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t269_0_0_0);
		MatchDirectConnectInfo_ToString_m2999_init = true;
	}
	{
		ObjectU5BU5D_t269* L_0 = ((ObjectU5BU5D_t269*)SZArrayNew(ObjectU5BU5D_t269_il2cpp_TypeInfo_var, 4));
		String_t* L_1 = Object_ToString_m1967(__this, /*hidden argument*/&Object_ToString_m1967_MethodInfo);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t269* L_2 = L_0;
		uint16_t L_3 = MatchDirectConnectInfo_get_nodeId_m2993(__this, /*hidden argument*/&MatchDirectConnectInfo_get_nodeId_m2993_MethodInfo);
		uint16_t L_4 = L_3;
		Object_t * L_5 = Box(InitializedTypeInfo(&NodeID_t581_il2cpp_TypeInfo), &L_4);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_5;
		ObjectU5BU5D_t269* L_6 = L_2;
		String_t* L_7 = MatchDirectConnectInfo_get_publicAddress_m2995(__this, /*hidden argument*/&MatchDirectConnectInfo_get_publicAddress_m2995_MethodInfo);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 2);
		ArrayElementTypeCheck (L_6, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 2)) = (Object_t *)L_7;
		ObjectU5BU5D_t269* L_8 = L_6;
		String_t* L_9 = MatchDirectConnectInfo_get_privateAddress_m2997(__this, /*hidden argument*/&MatchDirectConnectInfo_get_privateAddress_m2997_MethodInfo);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 3);
		ArrayElementTypeCheck (L_8, L_9);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 3)) = (Object_t *)L_9;
		String_t* L_10 = UnityString_Format_m2626(NULL /*static, unused*/, (String_t*) &_stringLiteral213, L_8, /*hidden argument*/&UnityString_Format_m2626_MethodInfo);
		return L_10;
	}
}
// System.Void UnityEngine.Networking.Match.MatchDirectConnectInfo::Parse(System.Object)
extern MethodInfo MatchDirectConnectInfo_Parse_m3000_MethodInfo;
extern TypeInfo* IDictionary_2_t562_il2cpp_TypeInfo_var;
extern "C" void MatchDirectConnectInfo_Parse_m3000 (MatchDirectConnectInfo_t573 * __this, Object_t * ___obj, MethodInfo* method)
{
	static bool MatchDirectConnectInfo_Parse_m3000_init;
	if (!MatchDirectConnectInfo_Parse_m3000_init)
	{
		IDictionary_2_t562_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&IDictionary_2_t562_0_0_0);
		MatchDirectConnectInfo_Parse_m3000_init = true;
	}
	Object_t* V_0 = {0};
	{
		Object_t * L_0 = ___obj;
		V_0 = ((Object_t*)IsInst(L_0, IDictionary_2_t562_il2cpp_TypeInfo_var));
		Object_t* L_1 = V_0;
		if (!L_1)
		{
			goto IL_004b;
		}
	}
	{
		Object_t * L_2 = ___obj;
		Object_t* L_3 = V_0;
		uint16_t L_4 = ResponseBase_ParseJSONUInt16_m2914(__this, (String_t*) &_stringLiteral206, L_2, L_3, /*hidden argument*/&ResponseBase_ParseJSONUInt16_m2914_MethodInfo);
		MatchDirectConnectInfo_set_nodeId_m2994(__this, L_4, /*hidden argument*/&MatchDirectConnectInfo_set_nodeId_m2994_MethodInfo);
		Object_t * L_5 = ___obj;
		Object_t* L_6 = V_0;
		String_t* L_7 = ResponseBase_ParseJSONString_m2912(__this, (String_t*) &_stringLiteral214, L_5, L_6, /*hidden argument*/&ResponseBase_ParseJSONString_m2912_MethodInfo);
		MatchDirectConnectInfo_set_publicAddress_m2996(__this, L_7, /*hidden argument*/&MatchDirectConnectInfo_set_publicAddress_m2996_MethodInfo);
		Object_t * L_8 = ___obj;
		Object_t* L_9 = V_0;
		String_t* L_10 = ResponseBase_ParseJSONString_m2912(__this, (String_t*) &_stringLiteral215, L_8, L_9, /*hidden argument*/&ResponseBase_ParseJSONString_m2912_MethodInfo);
		MatchDirectConnectInfo_set_privateAddress_m2998(__this, L_10, /*hidden argument*/&MatchDirectConnectInfo_set_privateAddress_m2998_MethodInfo);
		goto IL_0061;
	}

IL_004b:
	{
		Object_t * L_11 = ___obj;
		NullCheck(L_11);
		String_t* L_12 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Object_ToString_m1967_MethodInfo, L_11);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_13 = String_Concat_m1678(NULL /*static, unused*/, (String_t*) &_stringLiteral208, L_12, /*hidden argument*/&String_Concat_m1678_MethodInfo);
		FormatException_t696 * L_14 = (FormatException_t696 *)il2cpp_codegen_object_new (InitializedTypeInfo(&FormatException_t696_il2cpp_TypeInfo));
		FormatException__ctor_m3420(L_14, L_13, /*hidden argument*/&FormatException__ctor_m3420_MethodInfo);
		il2cpp_codegen_raise_exception(L_14);
	}

IL_0061:
	{
		return;
	}
}
// UnityEngine.Networking.Match.MatchDesc
#include "UnityEngine_UnityEngine_Networking_Match_MatchDesc.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo MatchDesc_t575_il2cpp_TypeInfo;
// UnityEngine.Networking.Match.MatchDesc
#include "UnityEngine_UnityEngine_Networking_Match_MatchDescMethodDeclarations.h"

// System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>
#include "mscorlib_System_Collections_Generic_List_1_gen_25.h"
extern TypeInfo List_1_t574_il2cpp_TypeInfo;
// System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>
#include "mscorlib_System_Collections_Generic_List_1_gen_25MethodDeclarations.h"
extern Il2CppType List_1_t574_0_0_0;
extern MethodInfo MatchDesc_get_networkId_m3002_MethodInfo;
extern MethodInfo MatchDesc_get_name_m3004_MethodInfo;
extern MethodInfo MatchDesc_get_averageEloScore_m3006_MethodInfo;
extern MethodInfo MatchDesc_get_maxSize_m3007_MethodInfo;
extern MethodInfo MatchDesc_get_currentSize_m3009_MethodInfo;
extern MethodInfo MatchDesc_get_isPrivate_m3011_MethodInfo;
extern MethodInfo MatchDesc_get_matchAttributes_m3013_MethodInfo;
extern MethodInfo MatchDesc_get_directConnectInfos_m3015_MethodInfo;
extern MethodInfo List_1_get_Count_m3426_MethodInfo;
extern MethodInfo MatchDesc_set_networkId_m3003_MethodInfo;
extern MethodInfo MatchDesc_set_name_m3005_MethodInfo;
extern MethodInfo MatchDesc_set_maxSize_m3008_MethodInfo;
extern MethodInfo MatchDesc_set_currentSize_m3010_MethodInfo;
extern MethodInfo MatchDesc_set_isPrivate_m3012_MethodInfo;
extern MethodInfo MatchDesc_set_directConnectInfos_m3016_MethodInfo;
struct ResponseBase_t561;
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_2.h"
// System.Collections.Generic.List`1/Enumerator<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_1.h"
// Declaration System.Collections.Generic.List`1<!!0> UnityEngine.Networking.Match.ResponseBase::ParseJSONList<UnityEngine.Networking.Match.MatchDirectConnectInfo>(System.String,System.Object,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
// System.Collections.Generic.List`1<!!0> UnityEngine.Networking.Match.ResponseBase::ParseJSONList<UnityEngine.Networking.Match.MatchDirectConnectInfo>(System.String,System.Object,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C" List_1_t574 * ResponseBase_ParseJSONList_TisMatchDirectConnectInfo_t573_m3427 (ResponseBase_t561 * __this, String_t* p0, Object_t * p1, Object_t* p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern Il2CppGenericMethod List_1_get_Count_m3426_GenericMethod;
extern Il2CppGenericMethod ResponseBase_ParseJSONList_TisMatchDirectConnectInfo_t573_m3427_GenericMethod;


// System.Void UnityEngine.Networking.Match.MatchDesc::.ctor()
extern MethodInfo MatchDesc__ctor_m3001_MethodInfo;
extern "C" void MatchDesc__ctor_m3001 (MatchDesc_t575 * __this, MethodInfo* method)
{
	{
		ResponseBase__ctor_m2911(__this, /*hidden argument*/&ResponseBase__ctor_m2911_MethodInfo);
		return;
	}
}
// UnityEngine.Networking.Types.NetworkID UnityEngine.Networking.Match.MatchDesc::get_networkId()
extern "C" uint64_t MatchDesc_get_networkId_m3002 (MatchDesc_t575 * __this, MethodInfo* method)
{
	{
		uint64_t L_0 = (__this->___U3CnetworkIdU3Ek__BackingField_0);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.MatchDesc::set_networkId(UnityEngine.Networking.Types.NetworkID)
extern "C" void MatchDesc_set_networkId_m3003 (MatchDesc_t575 * __this, uint64_t ___value, MethodInfo* method)
{
	{
		uint64_t L_0 = ___value;
		__this->___U3CnetworkIdU3Ek__BackingField_0 = L_0;
		return;
	}
}
// System.String UnityEngine.Networking.Match.MatchDesc::get_name()
extern "C" String_t* MatchDesc_get_name_m3004 (MatchDesc_t575 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CnameU3Ek__BackingField_1);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.MatchDesc::set_name(System.String)
extern "C" void MatchDesc_set_name_m3005 (MatchDesc_t575 * __this, String_t* ___value, MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CnameU3Ek__BackingField_1 = L_0;
		return;
	}
}
// System.Int32 UnityEngine.Networking.Match.MatchDesc::get_averageEloScore()
extern "C" int32_t MatchDesc_get_averageEloScore_m3006 (MatchDesc_t575 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___U3CaverageEloScoreU3Ek__BackingField_2);
		return L_0;
	}
}
// System.Int32 UnityEngine.Networking.Match.MatchDesc::get_maxSize()
extern "C" int32_t MatchDesc_get_maxSize_m3007 (MatchDesc_t575 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___U3CmaxSizeU3Ek__BackingField_3);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.MatchDesc::set_maxSize(System.Int32)
extern "C" void MatchDesc_set_maxSize_m3008 (MatchDesc_t575 * __this, int32_t ___value, MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___U3CmaxSizeU3Ek__BackingField_3 = L_0;
		return;
	}
}
// System.Int32 UnityEngine.Networking.Match.MatchDesc::get_currentSize()
extern "C" int32_t MatchDesc_get_currentSize_m3009 (MatchDesc_t575 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___U3CcurrentSizeU3Ek__BackingField_4);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.MatchDesc::set_currentSize(System.Int32)
extern "C" void MatchDesc_set_currentSize_m3010 (MatchDesc_t575 * __this, int32_t ___value, MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___U3CcurrentSizeU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.Boolean UnityEngine.Networking.Match.MatchDesc::get_isPrivate()
extern "C" bool MatchDesc_get_isPrivate_m3011 (MatchDesc_t575 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->___U3CisPrivateU3Ek__BackingField_5);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.MatchDesc::set_isPrivate(System.Boolean)
extern "C" void MatchDesc_set_isPrivate_m3012 (MatchDesc_t575 * __this, bool ___value, MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___U3CisPrivateU3Ek__BackingField_5 = L_0;
		return;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.Int64> UnityEngine.Networking.Match.MatchDesc::get_matchAttributes()
extern "C" Dictionary_2_t565 * MatchDesc_get_matchAttributes_m3013 (MatchDesc_t575 * __this, MethodInfo* method)
{
	{
		Dictionary_2_t565 * L_0 = (__this->___U3CmatchAttributesU3Ek__BackingField_6);
		return L_0;
	}
}
// UnityEngine.Networking.Types.NodeID UnityEngine.Networking.Match.MatchDesc::get_hostNodeId()
extern MethodInfo MatchDesc_get_hostNodeId_m3014_MethodInfo;
extern "C" uint16_t MatchDesc_get_hostNodeId_m3014 (MatchDesc_t575 * __this, MethodInfo* method)
{
	{
		uint16_t L_0 = (__this->___U3ChostNodeIdU3Ek__BackingField_7);
		return L_0;
	}
}
// System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo> UnityEngine.Networking.Match.MatchDesc::get_directConnectInfos()
extern "C" List_1_t574 * MatchDesc_get_directConnectInfos_m3015 (MatchDesc_t575 * __this, MethodInfo* method)
{
	{
		List_1_t574 * L_0 = (__this->___U3CdirectConnectInfosU3Ek__BackingField_8);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.MatchDesc::set_directConnectInfos(System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>)
extern "C" void MatchDesc_set_directConnectInfos_m3016 (MatchDesc_t575 * __this, List_1_t574 * ___value, MethodInfo* method)
{
	{
		List_1_t574 * L_0 = ___value;
		__this->___U3CdirectConnectInfosU3Ek__BackingField_8 = L_0;
		return;
	}
}
// System.String UnityEngine.Networking.Match.MatchDesc::ToString()
extern MethodInfo MatchDesc_ToString_m3017_MethodInfo;
extern TypeInfo* ObjectU5BU5D_t269_il2cpp_TypeInfo_var;
extern MethodInfo* Dictionary_2_get_Count_m3425_MethodInfo_var;
extern MethodInfo* List_1_get_Count_m3426_MethodInfo_var;
extern "C" String_t* MatchDesc_ToString_m3017 (MatchDesc_t575 * __this, MethodInfo* method)
{
	static bool MatchDesc_ToString_m3017_init;
	if (!MatchDesc_ToString_m3017_init)
	{
		ObjectU5BU5D_t269_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t269_0_0_0);
		Dictionary_2_get_Count_m3425_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2_get_Count_m3425_GenericMethod);
		List_1_get_Count_m3426_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1_get_Count_m3426_GenericMethod);
		MatchDesc_ToString_m3017_init = true;
	}
	int32_t G_B2_0 = 0;
	ObjectU5BU5D_t269* G_B2_1 = {0};
	ObjectU5BU5D_t269* G_B2_2 = {0};
	String_t* G_B2_3 = {0};
	int32_t G_B1_0 = 0;
	ObjectU5BU5D_t269* G_B1_1 = {0};
	ObjectU5BU5D_t269* G_B1_2 = {0};
	String_t* G_B1_3 = {0};
	int32_t G_B3_0 = 0;
	int32_t G_B3_1 = 0;
	ObjectU5BU5D_t269* G_B3_2 = {0};
	ObjectU5BU5D_t269* G_B3_3 = {0};
	String_t* G_B3_4 = {0};
	{
		ObjectU5BU5D_t269* L_0 = ((ObjectU5BU5D_t269*)SZArrayNew(ObjectU5BU5D_t269_il2cpp_TypeInfo_var, ((int32_t)9)));
		String_t* L_1 = Object_ToString_m1967(__this, /*hidden argument*/&Object_ToString_m1967_MethodInfo);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t269* L_2 = L_0;
		uint64_t L_3 = MatchDesc_get_networkId_m3002(__this, /*hidden argument*/&MatchDesc_get_networkId_m3002_MethodInfo);
		uint64_t L_4 = L_3;
		Object_t * L_5 = Box(InitializedTypeInfo(&NetworkID_t580_il2cpp_TypeInfo), &L_4);
		NullCheck(L_5);
		String_t* L_6 = Enum_ToString_m3418(L_5, (String_t*) &_stringLiteral192, /*hidden argument*/&Enum_ToString_m3418_MethodInfo);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_6);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_6;
		ObjectU5BU5D_t269* L_7 = L_2;
		String_t* L_8 = MatchDesc_get_name_m3004(__this, /*hidden argument*/&MatchDesc_get_name_m3004_MethodInfo);
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 2);
		ArrayElementTypeCheck (L_7, L_8);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_7, 2)) = (Object_t *)L_8;
		ObjectU5BU5D_t269* L_9 = L_7;
		int32_t L_10 = MatchDesc_get_averageEloScore_m3006(__this, /*hidden argument*/&MatchDesc_get_averageEloScore_m3006_MethodInfo);
		int32_t L_11 = L_10;
		Object_t * L_12 = Box(InitializedTypeInfo(&Int32_t17_il2cpp_TypeInfo), &L_11);
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, 3);
		ArrayElementTypeCheck (L_9, L_12);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_9, 3)) = (Object_t *)L_12;
		ObjectU5BU5D_t269* L_13 = L_9;
		int32_t L_14 = MatchDesc_get_maxSize_m3007(__this, /*hidden argument*/&MatchDesc_get_maxSize_m3007_MethodInfo);
		int32_t L_15 = L_14;
		Object_t * L_16 = Box(InitializedTypeInfo(&Int32_t17_il2cpp_TypeInfo), &L_15);
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, 4);
		ArrayElementTypeCheck (L_13, L_16);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_13, 4)) = (Object_t *)L_16;
		ObjectU5BU5D_t269* L_17 = L_13;
		int32_t L_18 = MatchDesc_get_currentSize_m3009(__this, /*hidden argument*/&MatchDesc_get_currentSize_m3009_MethodInfo);
		int32_t L_19 = L_18;
		Object_t * L_20 = Box(InitializedTypeInfo(&Int32_t17_il2cpp_TypeInfo), &L_19);
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, 5);
		ArrayElementTypeCheck (L_17, L_20);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_17, 5)) = (Object_t *)L_20;
		ObjectU5BU5D_t269* L_21 = L_17;
		bool L_22 = MatchDesc_get_isPrivate_m3011(__this, /*hidden argument*/&MatchDesc_get_isPrivate_m3011_MethodInfo);
		bool L_23 = L_22;
		Object_t * L_24 = Box(InitializedTypeInfo(&Boolean_t13_il2cpp_TypeInfo), &L_23);
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, 6);
		ArrayElementTypeCheck (L_21, L_24);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_21, 6)) = (Object_t *)L_24;
		ObjectU5BU5D_t269* L_25 = L_21;
		Dictionary_2_t565 * L_26 = MatchDesc_get_matchAttributes_m3013(__this, /*hidden argument*/&MatchDesc_get_matchAttributes_m3013_MethodInfo);
		G_B1_0 = 7;
		G_B1_1 = L_25;
		G_B1_2 = L_25;
		G_B1_3 = (String_t*) &_stringLiteral216;
		if (L_26)
		{
			G_B2_0 = 7;
			G_B2_1 = L_25;
			G_B2_2 = L_25;
			G_B2_3 = (String_t*) &_stringLiteral216;
			goto IL_0081;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		G_B3_4 = G_B1_3;
		goto IL_008c;
	}

IL_0081:
	{
		Dictionary_2_t565 * L_27 = MatchDesc_get_matchAttributes_m3013(__this, /*hidden argument*/&MatchDesc_get_matchAttributes_m3013_MethodInfo);
		NullCheck(L_27);
		int32_t L_28 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(Dictionary_2_get_Count_m3425_MethodInfo_var, L_27);
		G_B3_0 = L_28;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
		G_B3_4 = G_B2_3;
	}

IL_008c:
	{
		int32_t L_29 = G_B3_0;
		Object_t * L_30 = Box(InitializedTypeInfo(&Int32_t17_il2cpp_TypeInfo), &L_29);
		NullCheck(G_B3_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B3_2, G_B3_1);
		ArrayElementTypeCheck (G_B3_2, L_30);
		*((Object_t **)(Object_t **)SZArrayLdElema(G_B3_2, G_B3_1)) = (Object_t *)L_30;
		ObjectU5BU5D_t269* L_31 = G_B3_3;
		List_1_t574 * L_32 = MatchDesc_get_directConnectInfos_m3015(__this, /*hidden argument*/&MatchDesc_get_directConnectInfos_m3015_MethodInfo);
		NullCheck(L_32);
		int32_t L_33 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(List_1_get_Count_m3426_MethodInfo_var, L_32);
		int32_t L_34 = L_33;
		Object_t * L_35 = Box(InitializedTypeInfo(&Int32_t17_il2cpp_TypeInfo), &L_34);
		NullCheck(L_31);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_31, 8);
		ArrayElementTypeCheck (L_31, L_35);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_31, 8)) = (Object_t *)L_35;
		String_t* L_36 = UnityString_Format_m2626(NULL /*static, unused*/, G_B3_4, L_31, /*hidden argument*/&UnityString_Format_m2626_MethodInfo);
		return L_36;
	}
}
// System.Void UnityEngine.Networking.Match.MatchDesc::Parse(System.Object)
extern MethodInfo MatchDesc_Parse_m3018_MethodInfo;
extern TypeInfo* IDictionary_2_t562_il2cpp_TypeInfo_var;
extern MethodInfo* ResponseBase_ParseJSONList_TisMatchDirectConnectInfo_t573_m3427_MethodInfo_var;
extern "C" void MatchDesc_Parse_m3018 (MatchDesc_t575 * __this, Object_t * ___obj, MethodInfo* method)
{
	static bool MatchDesc_Parse_m3018_init;
	if (!MatchDesc_Parse_m3018_init)
	{
		IDictionary_2_t562_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&IDictionary_2_t562_0_0_0);
		ResponseBase_ParseJSONList_TisMatchDirectConnectInfo_t573_m3427_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&ResponseBase_ParseJSONList_TisMatchDirectConnectInfo_t573_m3427_GenericMethod);
		MatchDesc_Parse_m3018_init = true;
	}
	Object_t* V_0 = {0};
	{
		Object_t * L_0 = ___obj;
		V_0 = ((Object_t*)IsInst(L_0, IDictionary_2_t562_il2cpp_TypeInfo_var));
		Object_t* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0084;
		}
	}
	{
		Object_t * L_2 = ___obj;
		Object_t* L_3 = V_0;
		uint64_t L_4 = ResponseBase_ParseJSONUInt64_m2915(__this, (String_t*) &_stringLiteral204, L_2, L_3, /*hidden argument*/&ResponseBase_ParseJSONUInt64_m2915_MethodInfo);
		MatchDesc_set_networkId_m3003(__this, L_4, /*hidden argument*/&MatchDesc_set_networkId_m3003_MethodInfo);
		Object_t * L_5 = ___obj;
		Object_t* L_6 = V_0;
		String_t* L_7 = ResponseBase_ParseJSONString_m2912(__this, (String_t*) &_stringLiteral217, L_5, L_6, /*hidden argument*/&ResponseBase_ParseJSONString_m2912_MethodInfo);
		MatchDesc_set_name_m3005(__this, L_7, /*hidden argument*/&MatchDesc_set_name_m3005_MethodInfo);
		Object_t * L_8 = ___obj;
		Object_t* L_9 = V_0;
		int32_t L_10 = ResponseBase_ParseJSONInt32_m2913(__this, (String_t*) &_stringLiteral218, L_8, L_9, /*hidden argument*/&ResponseBase_ParseJSONInt32_m2913_MethodInfo);
		MatchDesc_set_maxSize_m3008(__this, L_10, /*hidden argument*/&MatchDesc_set_maxSize_m3008_MethodInfo);
		Object_t * L_11 = ___obj;
		Object_t* L_12 = V_0;
		int32_t L_13 = ResponseBase_ParseJSONInt32_m2913(__this, (String_t*) &_stringLiteral219, L_11, L_12, /*hidden argument*/&ResponseBase_ParseJSONInt32_m2913_MethodInfo);
		MatchDesc_set_currentSize_m3010(__this, L_13, /*hidden argument*/&MatchDesc_set_currentSize_m3010_MethodInfo);
		Object_t * L_14 = ___obj;
		Object_t* L_15 = V_0;
		bool L_16 = ResponseBase_ParseJSONBool_m2916(__this, (String_t*) &_stringLiteral220, L_14, L_15, /*hidden argument*/&ResponseBase_ParseJSONBool_m2916_MethodInfo);
		MatchDesc_set_isPrivate_m3012(__this, L_16, /*hidden argument*/&MatchDesc_set_isPrivate_m3012_MethodInfo);
		Object_t * L_17 = ___obj;
		Object_t* L_18 = V_0;
		List_1_t574 * L_19 = ResponseBase_ParseJSONList_TisMatchDirectConnectInfo_t573_m3427(__this, (String_t*) &_stringLiteral221, L_17, L_18, /*hidden argument*/ResponseBase_ParseJSONList_TisMatchDirectConnectInfo_t573_m3427_MethodInfo_var);
		MatchDesc_set_directConnectInfos_m3016(__this, L_19, /*hidden argument*/&MatchDesc_set_directConnectInfos_m3016_MethodInfo);
		goto IL_009a;
	}

IL_0084:
	{
		Object_t * L_20 = ___obj;
		NullCheck(L_20);
		String_t* L_21 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Object_ToString_m1967_MethodInfo, L_20);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_22 = String_Concat_m1678(NULL /*static, unused*/, (String_t*) &_stringLiteral208, L_21, /*hidden argument*/&String_Concat_m1678_MethodInfo);
		FormatException_t696 * L_23 = (FormatException_t696 *)il2cpp_codegen_object_new (InitializedTypeInfo(&FormatException_t696_il2cpp_TypeInfo));
		FormatException__ctor_m3420(L_23, L_22, /*hidden argument*/&FormatException__ctor_m3420_MethodInfo);
		il2cpp_codegen_raise_exception(L_23);
	}

IL_009a:
	{
		return;
	}
}
// UnityEngine.Networking.Match.ListMatchResponse
#include "UnityEngine_UnityEngine_Networking_Match_ListMatchResponse.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ListMatchResponse_t577_il2cpp_TypeInfo;
// UnityEngine.Networking.Match.ListMatchResponse
#include "UnityEngine_UnityEngine_Networking_Match_ListMatchResponseMethodDeclarations.h"

// System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>
#include "mscorlib_System_Collections_Generic_List_1_gen_26.h"
extern TypeInfo List_1_t576_il2cpp_TypeInfo;
// System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>
#include "mscorlib_System_Collections_Generic_List_1_gen_26MethodDeclarations.h"
extern Il2CppType List_1_t576_0_0_0;
extern MethodInfo ListMatchResponse_get_matches_m3020_MethodInfo;
extern MethodInfo List_1_get_Count_m3428_MethodInfo;
extern MethodInfo ListMatchResponse_set_matches_m3021_MethodInfo;
struct ResponseBase_t561;
// Declaration System.Collections.Generic.List`1<!!0> UnityEngine.Networking.Match.ResponseBase::ParseJSONList<UnityEngine.Networking.Match.MatchDesc>(System.String,System.Object,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
// System.Collections.Generic.List`1<!!0> UnityEngine.Networking.Match.ResponseBase::ParseJSONList<UnityEngine.Networking.Match.MatchDesc>(System.String,System.Object,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C" List_1_t576 * ResponseBase_ParseJSONList_TisMatchDesc_t575_m3429 (ResponseBase_t561 * __this, String_t* p0, Object_t * p1, Object_t* p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern Il2CppGenericMethod List_1_get_Count_m3428_GenericMethod;
extern Il2CppGenericMethod ResponseBase_ParseJSONList_TisMatchDesc_t575_m3429_GenericMethod;


// System.Void UnityEngine.Networking.Match.ListMatchResponse::.ctor()
extern MethodInfo ListMatchResponse__ctor_m3019_MethodInfo;
extern "C" void ListMatchResponse__ctor_m3019 (ListMatchResponse_t577 * __this, MethodInfo* method)
{
	{
		BasicResponse__ctor_m2924(__this, /*hidden argument*/&BasicResponse__ctor_m2924_MethodInfo);
		return;
	}
}
// System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc> UnityEngine.Networking.Match.ListMatchResponse::get_matches()
extern "C" List_1_t576 * ListMatchResponse_get_matches_m3020 (ListMatchResponse_t577 * __this, MethodInfo* method)
{
	{
		List_1_t576 * L_0 = (__this->___U3CmatchesU3Ek__BackingField_2);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.ListMatchResponse::set_matches(System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>)
extern "C" void ListMatchResponse_set_matches_m3021 (ListMatchResponse_t577 * __this, List_1_t576 * ___value, MethodInfo* method)
{
	{
		List_1_t576 * L_0 = ___value;
		__this->___U3CmatchesU3Ek__BackingField_2 = L_0;
		return;
	}
}
// System.String UnityEngine.Networking.Match.ListMatchResponse::ToString()
extern MethodInfo ListMatchResponse_ToString_m3022_MethodInfo;
extern TypeInfo* ObjectU5BU5D_t269_il2cpp_TypeInfo_var;
extern MethodInfo* List_1_get_Count_m3428_MethodInfo_var;
extern "C" String_t* ListMatchResponse_ToString_m3022 (ListMatchResponse_t577 * __this, MethodInfo* method)
{
	static bool ListMatchResponse_ToString_m3022_init;
	if (!ListMatchResponse_ToString_m3022_init)
	{
		ObjectU5BU5D_t269_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t269_0_0_0);
		List_1_get_Count_m3428_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1_get_Count_m3428_GenericMethod);
		ListMatchResponse_ToString_m3022_init = true;
	}
	{
		ObjectU5BU5D_t269* L_0 = ((ObjectU5BU5D_t269*)SZArrayNew(ObjectU5BU5D_t269_il2cpp_TypeInfo_var, 2));
		String_t* L_1 = Response_ToString_m2922(__this, /*hidden argument*/&Response_ToString_m2922_MethodInfo);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t269* L_2 = L_0;
		List_1_t576 * L_3 = ListMatchResponse_get_matches_m3020(__this, /*hidden argument*/&ListMatchResponse_get_matches_m3020_MethodInfo);
		NullCheck(L_3);
		int32_t L_4 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(List_1_get_Count_m3428_MethodInfo_var, L_3);
		int32_t L_5 = L_4;
		Object_t * L_6 = Box(InitializedTypeInfo(&Int32_t17_il2cpp_TypeInfo), &L_5);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_6);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_6;
		String_t* L_7 = UnityString_Format_m2626(NULL /*static, unused*/, (String_t*) &_stringLiteral222, L_2, /*hidden argument*/&UnityString_Format_m2626_MethodInfo);
		return L_7;
	}
}
// System.Void UnityEngine.Networking.Match.ListMatchResponse::Parse(System.Object)
extern MethodInfo ListMatchResponse_Parse_m3023_MethodInfo;
extern TypeInfo* IDictionary_2_t562_il2cpp_TypeInfo_var;
extern MethodInfo* ResponseBase_ParseJSONList_TisMatchDesc_t575_m3429_MethodInfo_var;
extern "C" void ListMatchResponse_Parse_m3023 (ListMatchResponse_t577 * __this, Object_t * ___obj, MethodInfo* method)
{
	static bool ListMatchResponse_Parse_m3023_init;
	if (!ListMatchResponse_Parse_m3023_init)
	{
		IDictionary_2_t562_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&IDictionary_2_t562_0_0_0);
		ResponseBase_ParseJSONList_TisMatchDesc_t575_m3429_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&ResponseBase_ParseJSONList_TisMatchDesc_t575_m3429_GenericMethod);
		ListMatchResponse_Parse_m3023_init = true;
	}
	Object_t* V_0 = {0};
	{
		Object_t * L_0 = ___obj;
		Response_Parse_m2923(__this, L_0, /*hidden argument*/&Response_Parse_m2923_MethodInfo);
		Object_t * L_1 = ___obj;
		V_0 = ((Object_t*)IsInst(L_1, IDictionary_2_t562_il2cpp_TypeInfo_var));
		Object_t* L_2 = V_0;
		if (!L_2)
		{
			goto IL_002c;
		}
	}
	{
		Object_t * L_3 = ___obj;
		Object_t* L_4 = V_0;
		List_1_t576 * L_5 = ResponseBase_ParseJSONList_TisMatchDesc_t575_m3429(__this, (String_t*) &_stringLiteral223, L_3, L_4, /*hidden argument*/ResponseBase_ParseJSONList_TisMatchDesc_t575_m3429_MethodInfo_var);
		ListMatchResponse_set_matches_m3021(__this, L_5, /*hidden argument*/&ListMatchResponse_set_matches_m3021_MethodInfo);
		goto IL_0042;
	}

IL_002c:
	{
		Object_t * L_6 = ___obj;
		NullCheck(L_6);
		String_t* L_7 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Object_ToString_m1967_MethodInfo, L_6);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_8 = String_Concat_m1678(NULL /*static, unused*/, (String_t*) &_stringLiteral208, L_7, /*hidden argument*/&String_Concat_m1678_MethodInfo);
		FormatException_t696 * L_9 = (FormatException_t696 *)il2cpp_codegen_object_new (InitializedTypeInfo(&FormatException_t696_il2cpp_TypeInfo));
		FormatException__ctor_m3420(L_9, L_8, /*hidden argument*/&FormatException__ctor_m3420_MethodInfo);
		il2cpp_codegen_raise_exception(L_9);
	}

IL_0042:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Networking.Types.AppID
#include "UnityEngine_UnityEngine_Networking_Types_AppIDMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif
// UnityEngine.Networking.Types.SourceID
#include "UnityEngine_UnityEngine_Networking_Types_SourceIDMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif
// UnityEngine.Networking.Types.NetworkID
#include "UnityEngine_UnityEngine_Networking_Types_NetworkIDMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif
// UnityEngine.Networking.Types.NodeID
#include "UnityEngine_UnityEngine_Networking_Types_NodeIDMethodDeclarations.h"



// UnityEngine.Networking.Types.NetworkAccessToken
#include "UnityEngine_UnityEngine_Networking_Types_NetworkAccessToken.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo NetworkAccessToken_t582_il2cpp_TypeInfo;
// UnityEngine.Networking.Types.NetworkAccessToken
#include "UnityEngine_UnityEngine_Networking_Types_NetworkAccessTokenMethodDeclarations.h"

extern TypeInfo ByteU5BU5D_t504_il2cpp_TypeInfo;
extern TypeInfo Byte_t321_il2cpp_TypeInfo;
extern Il2CppType ByteU5BU5D_t504_0_0_0;
extern MethodInfo Convert_ToBase64String_m3430_MethodInfo;


// System.Void UnityEngine.Networking.Types.NetworkAccessToken::.ctor()
extern MethodInfo NetworkAccessToken__ctor_m3024_MethodInfo;
extern TypeInfo* ByteU5BU5D_t504_il2cpp_TypeInfo_var;
extern "C" void NetworkAccessToken__ctor_m3024 (NetworkAccessToken_t582 * __this, MethodInfo* method)
{
	static bool NetworkAccessToken__ctor_m3024_init;
	if (!NetworkAccessToken__ctor_m3024_init)
	{
		ByteU5BU5D_t504_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ByteU5BU5D_t504_0_0_0);
		NetworkAccessToken__ctor_m3024_init = true;
	}
	{
		Object__ctor_m1289(__this, /*hidden argument*/&Object__ctor_m1289_MethodInfo);
		__this->___array_0 = ((ByteU5BU5D_t504*)SZArrayNew(ByteU5BU5D_t504_il2cpp_TypeInfo_var, ((int32_t)64)));
		return;
	}
}
// System.String UnityEngine.Networking.Types.NetworkAccessToken::GetByteString()
extern MethodInfo NetworkAccessToken_GetByteString_m3025_MethodInfo;
extern "C" String_t* NetworkAccessToken_GetByteString_m3025 (NetworkAccessToken_t582 * __this, MethodInfo* method)
{
	{
		ByteU5BU5D_t504* L_0 = (__this->___array_0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Convert_t689_il2cpp_TypeInfo));
		String_t* L_1 = Convert_ToBase64String_m3430(NULL /*static, unused*/, L_0, /*hidden argument*/&Convert_ToBase64String_m3430_MethodInfo);
		return L_1;
	}
}
// UnityEngine.Networking.Utility
#include "UnityEngine_UnityEngine_Networking_Utility.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Utility_t585_il2cpp_TypeInfo;
// UnityEngine.Networking.Utility
#include "UnityEngine_UnityEngine_Networking_UtilityMethodDeclarations.h"

// System.Random
#include "mscorlib_System_Random.h"
// System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_8.h"
extern TypeInfo Random_t583_il2cpp_TypeInfo;
extern TypeInfo Dictionary_2_t584_il2cpp_TypeInfo;
// System.Environment
#include "mscorlib_System_EnvironmentMethodDeclarations.h"
// System.Random
#include "mscorlib_System_RandomMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_8MethodDeclarations.h"
// UnityEngine.SystemInfo
#include "UnityEngine_UnityEngine_SystemInfoMethodDeclarations.h"
extern Il2CppType Dictionary_2_t584_0_0_0;
extern MethodInfo Environment_get_TickCount_m3431_MethodInfo;
extern MethodInfo Random__ctor_m3432_MethodInfo;
extern MethodInfo Dictionary_2__ctor_m3433_MethodInfo;
extern MethodInfo SystemInfo_get_deviceUniqueIdentifier_m2121_MethodInfo;
extern MethodInfo String_Concat_m50_MethodInfo;
extern MethodInfo Dictionary_2_TryGetValue_m3434_MethodInfo;
extern Il2CppGenericMethod Dictionary_2__ctor_m3433_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_TryGetValue_m3434_GenericMethod;


// System.Void UnityEngine.Networking.Utility::.cctor()
extern MethodInfo Utility__cctor_m3026_MethodInfo;
extern TypeInfo* Dictionary_2_t584_il2cpp_TypeInfo_var;
extern MethodInfo* Dictionary_2__ctor_m3433_MethodInfo_var;
extern "C" void Utility__cctor_m3026 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	static bool Utility__cctor_m3026_init;
	if (!Utility__cctor_m3026_init)
	{
		Dictionary_2_t584_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Dictionary_2_t584_0_0_0);
		Dictionary_2__ctor_m3433_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2__ctor_m3433_GenericMethod);
		Utility__cctor_m3026_init = true;
	}
	{
		int32_t L_0 = Environment_get_TickCount_m3431(NULL /*static, unused*/, /*hidden argument*/&Environment_get_TickCount_m3431_MethodInfo);
		Random_t583 * L_1 = (Random_t583 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Random_t583_il2cpp_TypeInfo));
		Random__ctor_m3432(L_1, L_0, /*hidden argument*/&Random__ctor_m3432_MethodInfo);
		((Utility_t585_StaticFields*)InitializedTypeInfo(&Utility_t585_il2cpp_TypeInfo)->static_fields)->___s_randomGenerator_0 = L_1;
		((Utility_t585_StaticFields*)InitializedTypeInfo(&Utility_t585_il2cpp_TypeInfo)->static_fields)->___s_useRandomSourceID_1 = 0;
		((Utility_t585_StaticFields*)InitializedTypeInfo(&Utility_t585_il2cpp_TypeInfo)->static_fields)->___s_randomSourceComponent_2 = 0;
		((Utility_t585_StaticFields*)InitializedTypeInfo(&Utility_t585_il2cpp_TypeInfo)->static_fields)->___s_programAppID_3 = (((int64_t)(-1)));
		Dictionary_2_t584 * L_2 = (Dictionary_2_t584 *)il2cpp_codegen_object_new (Dictionary_2_t584_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3433(L_2, /*hidden argument*/Dictionary_2__ctor_m3433_MethodInfo_var);
		((Utility_t585_StaticFields*)InitializedTypeInfo(&Utility_t585_il2cpp_TypeInfo)->static_fields)->___s_dictTokens_4 = L_2;
		return;
	}
}
// UnityEngine.Networking.Types.SourceID UnityEngine.Networking.Utility::GetSourceID()
extern MethodInfo Utility_GetSourceID_m3027_MethodInfo;
extern "C" uint64_t Utility_GetSourceID_m3027 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		String_t* L_0 = SystemInfo_get_deviceUniqueIdentifier_m2121(NULL /*static, unused*/, /*hidden argument*/&SystemInfo_get_deviceUniqueIdentifier_m2121_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Utility_t585_il2cpp_TypeInfo));
		int32_t L_1 = ((Utility_t585_StaticFields*)InitializedTypeInfo(&Utility_t585_il2cpp_TypeInfo)->static_fields)->___s_randomSourceComponent_2;
		int32_t L_2 = L_1;
		Object_t * L_3 = Box(InitializedTypeInfo(&Int32_t17_il2cpp_TypeInfo), &L_2);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_4 = String_Concat_m50(NULL /*static, unused*/, L_0, L_3, /*hidden argument*/&String_Concat_m50_MethodInfo);
		NullCheck(L_4);
		int32_t L_5 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&String_GetHashCode_m3335_MethodInfo, L_4);
		return (uint64_t)((((int64_t)L_5)));
	}
}
// System.Void UnityEngine.Networking.Utility::SetAppID(UnityEngine.Networking.Types.AppID)
extern MethodInfo Utility_SetAppID_m3028_MethodInfo;
extern "C" void Utility_SetAppID_m3028 (Object_t * __this /* static, unused */, uint64_t ___newAppID, MethodInfo* method)
{
	{
		uint64_t L_0 = ___newAppID;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Utility_t585_il2cpp_TypeInfo));
		((Utility_t585_StaticFields*)InitializedTypeInfo(&Utility_t585_il2cpp_TypeInfo)->static_fields)->___s_programAppID_3 = L_0;
		return;
	}
}
// UnityEngine.Networking.Types.AppID UnityEngine.Networking.Utility::GetAppID()
extern MethodInfo Utility_GetAppID_m3029_MethodInfo;
extern "C" uint64_t Utility_GetAppID_m3029 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Utility_t585_il2cpp_TypeInfo));
		uint64_t L_0 = ((Utility_t585_StaticFields*)InitializedTypeInfo(&Utility_t585_il2cpp_TypeInfo)->static_fields)->___s_programAppID_3;
		return L_0;
	}
}
// UnityEngine.Networking.Types.NetworkAccessToken UnityEngine.Networking.Utility::GetAccessTokenForNetwork(UnityEngine.Networking.Types.NetworkID)
extern MethodInfo Utility_GetAccessTokenForNetwork_m3030_MethodInfo;
extern MethodInfo* Dictionary_2_TryGetValue_m3434_MethodInfo_var;
extern "C" NetworkAccessToken_t582 * Utility_GetAccessTokenForNetwork_m3030 (Object_t * __this /* static, unused */, uint64_t ___netId, MethodInfo* method)
{
	static bool Utility_GetAccessTokenForNetwork_m3030_init;
	if (!Utility_GetAccessTokenForNetwork_m3030_init)
	{
		Dictionary_2_TryGetValue_m3434_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2_TryGetValue_m3434_GenericMethod);
		Utility_GetAccessTokenForNetwork_m3030_init = true;
	}
	NetworkAccessToken_t582 * V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Utility_t585_il2cpp_TypeInfo));
		Dictionary_2_t584 * L_0 = ((Utility_t585_StaticFields*)InitializedTypeInfo(&Utility_t585_il2cpp_TypeInfo)->static_fields)->___s_dictTokens_4;
		uint64_t L_1 = ___netId;
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker2< bool, uint64_t, NetworkAccessToken_t582 ** >::Invoke(Dictionary_2_TryGetValue_m3434_MethodInfo_var, L_0, L_1, (&V_0));
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		NetworkAccessToken_t582 * L_3 = (NetworkAccessToken_t582 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NetworkAccessToken_t582_il2cpp_TypeInfo));
		NetworkAccessToken__ctor_m3024(L_3, /*hidden argument*/&NetworkAccessToken__ctor_m3024_MethodInfo);
		V_0 = L_3;
	}

IL_0018:
	{
		NetworkAccessToken_t582 * L_4 = V_0;
		return L_4;
	}
}
// UnityEngine.Networking.Match.NetworkMatch
#include "UnityEngine_UnityEngine_Networking_Match_NetworkMatch.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo NetworkMatch_t587_il2cpp_TypeInfo;
// UnityEngine.Networking.Match.NetworkMatch
#include "UnityEngine_UnityEngine_Networking_Match_NetworkMatchMethodDeclarations.h"

// System.Uri
#include "System_System_Uri.h"
// UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.CreateMatchResponse>
#include "UnityEngine_UnityEngine_Networking_Match_NetworkMatch_Respon.h"
// UnityEngine.WWWForm
#include "UnityEngine_UnityEngine_WWWForm.h"
// UnityEngine.WWW
#include "UnityEngine_UnityEngine_WWW.h"
// System.Enum
#include "mscorlib_System_Enum.h"
// System.Collections.Generic.Dictionary`2<System.String,System.String>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_6.h"
// UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.JoinMatchResponse>
#include "UnityEngine_UnityEngine_Networking_Match_NetworkMatch_Respon_0.h"
// UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.BasicResponse>
#include "UnityEngine_UnityEngine_Networking_Match_NetworkMatch_Respon_1.h"
// UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.ListMatchResponse>
#include "UnityEngine_UnityEngine_Networking_Match_NetworkMatch_Respon_2.h"
extern TypeInfo Uri_t586_il2cpp_TypeInfo;
extern TypeInfo WWWForm_t505_il2cpp_TypeInfo;
extern TypeInfo Enum_t334_il2cpp_TypeInfo;
extern TypeInfo Dictionary_2_t502_il2cpp_TypeInfo;
extern TypeInfo WWW_t501_il2cpp_TypeInfo;
// System.Uri
#include "System_System_UriMethodDeclarations.h"
// System.UInt64
#include "mscorlib_System_UInt64MethodDeclarations.h"
// UnityEngine.WWWForm
#include "UnityEngine_UnityEngine_WWWFormMethodDeclarations.h"
// System.UInt32
#include "mscorlib_System_UInt32MethodDeclarations.h"
// System.Boolean
#include "mscorlib_System_BooleanMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2<System.String,System.String>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_6MethodDeclarations.h"
// UnityEngine.WWW
#include "UnityEngine_UnityEngine_WWWMethodDeclarations.h"
extern Il2CppType Dictionary_2_t502_0_0_0;
extern MethodInfo Uri__ctor_m3435_MethodInfo;
extern MethodInfo UInt64_TryParse_m3436_MethodInfo;
extern MethodInfo NetworkMatch_SetProgramAppID_m3034_MethodInfo;
extern MethodInfo NetworkMatch_CreateMatch_m3036_MethodInfo;
extern MethodInfo NetworkMatch_get_baseUri_m3032_MethodInfo;
extern MethodInfo Uri__ctor_m3437_MethodInfo;
extern MethodInfo WWWForm__ctor_m2612_MethodInfo;
extern MethodInfo Enum_ToString_m1934_MethodInfo;
extern MethodInfo WWWForm_AddField_m2613_MethodInfo;
extern MethodInfo WWWForm_AddField_m2615_MethodInfo;
extern MethodInfo UInt32_ToString_m3438_MethodInfo;
extern MethodInfo Boolean_ToString_m3439_MethodInfo;
extern MethodInfo WWWForm_get_headers_m2616_MethodInfo;
extern MethodInfo Dictionary_2_set_Item_m3386_MethodInfo;
extern MethodInfo Uri_ToString_m3440_MethodInfo;
extern MethodInfo WWW__ctor_m2597_MethodInfo;
extern MethodInfo NetworkMatch_JoinMatch_m3038_MethodInfo;
extern MethodInfo NetworkMatch_DestroyMatch_m3040_MethodInfo;
extern MethodInfo NetworkMatch_DropConnection_m3042_MethodInfo;
extern MethodInfo NetworkMatch_ListMatches_m3044_MethodInfo;
struct NetworkMatch_t587;
// UnityEngine.Networking.Match.NetworkMatch/<ProcessMatchResponse>c__Iterator0`1<UnityEngine.Networking.Match.CreateMatchResponse>
#include "UnityEngine_UnityEngine_Networking_Match_NetworkMatch_U3CPro.h"
// Declaration System.Collections.IEnumerator UnityEngine.Networking.Match.NetworkMatch::ProcessMatchResponse<UnityEngine.Networking.Match.CreateMatchResponse>(UnityEngine.WWW,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<!!0>)
// System.Collections.IEnumerator UnityEngine.Networking.Match.NetworkMatch::ProcessMatchResponse<UnityEngine.Networking.Match.CreateMatchResponse>(UnityEngine.WWW,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<!!0>)
extern "C" Object_t * NetworkMatch_ProcessMatchResponse_TisCreateMatchResponse_t567_m3441 (NetworkMatch_t587 * __this, WWW_t501 * p0, ResponseDelegate_1_t588 * p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
struct NetworkMatch_t587;
// UnityEngine.Networking.Match.NetworkMatch/<ProcessMatchResponse>c__Iterator0`1<UnityEngine.Networking.Match.JoinMatchResponse>
#include "UnityEngine_UnityEngine_Networking_Match_NetworkMatch_U3CPro_0.h"
// Declaration System.Collections.IEnumerator UnityEngine.Networking.Match.NetworkMatch::ProcessMatchResponse<UnityEngine.Networking.Match.JoinMatchResponse>(UnityEngine.WWW,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<!!0>)
// System.Collections.IEnumerator UnityEngine.Networking.Match.NetworkMatch::ProcessMatchResponse<UnityEngine.Networking.Match.JoinMatchResponse>(UnityEngine.WWW,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<!!0>)
extern "C" Object_t * NetworkMatch_ProcessMatchResponse_TisJoinMatchResponse_t569_m3442 (NetworkMatch_t587 * __this, WWW_t501 * p0, ResponseDelegate_1_t589 * p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
struct NetworkMatch_t587;
// UnityEngine.Networking.Match.NetworkMatch/<ProcessMatchResponse>c__Iterator0`1<UnityEngine.Networking.Match.BasicResponse>
#include "UnityEngine_UnityEngine_Networking_Match_NetworkMatch_U3CPro_1.h"
// Declaration System.Collections.IEnumerator UnityEngine.Networking.Match.NetworkMatch::ProcessMatchResponse<UnityEngine.Networking.Match.BasicResponse>(UnityEngine.WWW,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<!!0>)
// System.Collections.IEnumerator UnityEngine.Networking.Match.NetworkMatch::ProcessMatchResponse<UnityEngine.Networking.Match.BasicResponse>(UnityEngine.WWW,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<!!0>)
extern "C" Object_t * NetworkMatch_ProcessMatchResponse_TisBasicResponse_t564_m3443 (NetworkMatch_t587 * __this, WWW_t501 * p0, ResponseDelegate_1_t590 * p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
struct NetworkMatch_t587;
// UnityEngine.Networking.Match.NetworkMatch/<ProcessMatchResponse>c__Iterator0`1<UnityEngine.Networking.Match.ListMatchResponse>
#include "UnityEngine_UnityEngine_Networking_Match_NetworkMatch_U3CPro_2.h"
// Declaration System.Collections.IEnumerator UnityEngine.Networking.Match.NetworkMatch::ProcessMatchResponse<UnityEngine.Networking.Match.ListMatchResponse>(UnityEngine.WWW,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<!!0>)
// System.Collections.IEnumerator UnityEngine.Networking.Match.NetworkMatch::ProcessMatchResponse<UnityEngine.Networking.Match.ListMatchResponse>(UnityEngine.WWW,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<!!0>)
extern "C" Object_t * NetworkMatch_ProcessMatchResponse_TisListMatchResponse_t577_m3444 (NetworkMatch_t587 * __this, WWW_t501 * p0, ResponseDelegate_1_t591 * p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern Il2CppGenericMethod Dictionary_2_set_Item_m3386_GenericMethod;
extern Il2CppGenericMethod NetworkMatch_ProcessMatchResponse_TisCreateMatchResponse_t567_m3441_GenericMethod;
extern Il2CppGenericMethod NetworkMatch_ProcessMatchResponse_TisJoinMatchResponse_t569_m3442_GenericMethod;
extern Il2CppGenericMethod NetworkMatch_ProcessMatchResponse_TisBasicResponse_t564_m3443_GenericMethod;
extern Il2CppGenericMethod NetworkMatch_ProcessMatchResponse_TisListMatchResponse_t577_m3444_GenericMethod;


// System.Void UnityEngine.Networking.Match.NetworkMatch::.ctor()
extern MethodInfo NetworkMatch__ctor_m3031_MethodInfo;
extern "C" void NetworkMatch__ctor_m3031 (NetworkMatch_t587 * __this, MethodInfo* method)
{
	String_t* V_0 = {0};
	uint64_t V_1 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Uri_t586_il2cpp_TypeInfo));
		Uri_t586 * L_0 = (Uri_t586 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Uri_t586_il2cpp_TypeInfo));
		Uri__ctor_m3435(L_0, (String_t*) &_stringLiteral224, /*hidden argument*/&Uri__ctor_m3435_MethodInfo);
		__this->___m_BaseUri_3 = L_0;
		MonoBehaviour__ctor_m27(__this, /*hidden argument*/&MonoBehaviour__ctor_m27_MethodInfo);
		String_t* L_1 = PlayerPrefs_GetString_m2746(NULL /*static, unused*/, (String_t*) &_stringLiteral225, /*hidden argument*/&PlayerPrefs_GetString_m2746_MethodInfo);
		V_0 = L_1;
		String_t* L_2 = V_0;
		bool L_3 = UInt64_TryParse_m3436(NULL /*static, unused*/, L_2, (&V_1), /*hidden argument*/&UInt64_TryParse_m3436_MethodInfo);
		if (L_3)
		{
			goto IL_003d;
		}
	}
	{
		Debug_Log_m2658(NULL /*static, unused*/, (String_t*) &_stringLiteral226, /*hidden argument*/&Debug_Log_m2658_MethodInfo);
		goto IL_0044;
	}

IL_003d:
	{
		uint64_t L_4 = V_1;
		NetworkMatch_SetProgramAppID_m3034(__this, L_4, /*hidden argument*/&NetworkMatch_SetProgramAppID_m3034_MethodInfo);
	}

IL_0044:
	{
		return;
	}
}
// System.Uri UnityEngine.Networking.Match.NetworkMatch::get_baseUri()
extern "C" Uri_t586 * NetworkMatch_get_baseUri_m3032 (NetworkMatch_t587 * __this, MethodInfo* method)
{
	{
		Uri_t586 * L_0 = (__this->___m_BaseUri_3);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.NetworkMatch::set_baseUri(System.Uri)
extern MethodInfo NetworkMatch_set_baseUri_m3033_MethodInfo;
extern "C" void NetworkMatch_set_baseUri_m3033 (NetworkMatch_t587 * __this, Uri_t586 * ___value, MethodInfo* method)
{
	{
		Uri_t586 * L_0 = ___value;
		__this->___m_BaseUri_3 = L_0;
		return;
	}
}
// System.Void UnityEngine.Networking.Match.NetworkMatch::SetProgramAppID(UnityEngine.Networking.Types.AppID)
extern "C" void NetworkMatch_SetProgramAppID_m3034 (NetworkMatch_t587 * __this, uint64_t ___programAppID, MethodInfo* method)
{
	{
		uint64_t L_0 = ___programAppID;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Utility_t585_il2cpp_TypeInfo));
		Utility_SetAppID_m3028(NULL /*static, unused*/, L_0, /*hidden argument*/&Utility_SetAppID_m3028_MethodInfo);
		return;
	}
}
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::CreateMatch(System.String,System.UInt32,System.Boolean,System.String,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.CreateMatchResponse>)
extern MethodInfo NetworkMatch_CreateMatch_m3035_MethodInfo;
extern "C" Coroutine_t182 * NetworkMatch_CreateMatch_m3035 (NetworkMatch_t587 * __this, String_t* ___matchName, uint32_t ___matchSize, bool ___matchAdvertise, String_t* ___matchPassword, ResponseDelegate_1_t588 * ___callback, MethodInfo* method)
{
	CreateMatchRequest_t566 * V_0 = {0};
	{
		CreateMatchRequest_t566 * L_0 = (CreateMatchRequest_t566 *)il2cpp_codegen_object_new (InitializedTypeInfo(&CreateMatchRequest_t566_il2cpp_TypeInfo));
		CreateMatchRequest__ctor_m2925(L_0, /*hidden argument*/&CreateMatchRequest__ctor_m2925_MethodInfo);
		V_0 = L_0;
		CreateMatchRequest_t566 * L_1 = V_0;
		String_t* L_2 = ___matchName;
		NullCheck(L_1);
		CreateMatchRequest_set_name_m2927(L_1, L_2, /*hidden argument*/&CreateMatchRequest_set_name_m2927_MethodInfo);
		CreateMatchRequest_t566 * L_3 = V_0;
		uint32_t L_4 = ___matchSize;
		NullCheck(L_3);
		CreateMatchRequest_set_size_m2929(L_3, L_4, /*hidden argument*/&CreateMatchRequest_set_size_m2929_MethodInfo);
		CreateMatchRequest_t566 * L_5 = V_0;
		bool L_6 = ___matchAdvertise;
		NullCheck(L_5);
		CreateMatchRequest_set_advertise_m2931(L_5, L_6, /*hidden argument*/&CreateMatchRequest_set_advertise_m2931_MethodInfo);
		CreateMatchRequest_t566 * L_7 = V_0;
		String_t* L_8 = ___matchPassword;
		NullCheck(L_7);
		CreateMatchRequest_set_password_m2933(L_7, L_8, /*hidden argument*/&CreateMatchRequest_set_password_m2933_MethodInfo);
		CreateMatchRequest_t566 * L_9 = V_0;
		ResponseDelegate_1_t588 * L_10 = ___callback;
		Coroutine_t182 * L_11 = NetworkMatch_CreateMatch_m3036(__this, L_9, L_10, /*hidden argument*/&NetworkMatch_CreateMatch_m3036_MethodInfo);
		return L_11;
	}
}
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::CreateMatch(UnityEngine.Networking.Match.CreateMatchRequest,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.CreateMatchResponse>)
extern MethodInfo* Dictionary_2_set_Item_m3386_MethodInfo_var;
extern MethodInfo* NetworkMatch_ProcessMatchResponse_TisCreateMatchResponse_t567_m3441_MethodInfo_var;
extern "C" Coroutine_t182 * NetworkMatch_CreateMatch_m3036 (NetworkMatch_t587 * __this, CreateMatchRequest_t566 * ___req, ResponseDelegate_1_t588 * ___callback, MethodInfo* method)
{
	static bool NetworkMatch_CreateMatch_m3036_init;
	if (!NetworkMatch_CreateMatch_m3036_init)
	{
		Dictionary_2_set_Item_m3386_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2_set_Item_m3386_GenericMethod);
		NetworkMatch_ProcessMatchResponse_TisCreateMatchResponse_t567_m3441_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&NetworkMatch_ProcessMatchResponse_TisCreateMatchResponse_t567_m3441_GenericMethod);
		NetworkMatch_CreateMatch_m3036_init = true;
	}
	Uri_t586 * V_0 = {0};
	WWWForm_t505 * V_1 = {0};
	WWW_t501 * V_2 = {0};
	uint32_t V_3 = 0;
	bool V_4 = false;
	{
		Uri_t586 * L_0 = NetworkMatch_get_baseUri_m3032(__this, /*hidden argument*/&NetworkMatch_get_baseUri_m3032_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Uri_t586_il2cpp_TypeInfo));
		Uri_t586 * L_1 = (Uri_t586 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Uri_t586_il2cpp_TypeInfo));
		Uri__ctor_m3437(L_1, L_0, (String_t*) &_stringLiteral227, /*hidden argument*/&Uri__ctor_m3437_MethodInfo);
		V_0 = L_1;
		Uri_t586 * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_3 = String_Concat_m50(NULL /*static, unused*/, (String_t*) &_stringLiteral228, L_2, /*hidden argument*/&String_Concat_m50_MethodInfo);
		Debug_Log_m2658(NULL /*static, unused*/, L_3, /*hidden argument*/&Debug_Log_m2658_MethodInfo);
		WWWForm_t505 * L_4 = (WWWForm_t505 *)il2cpp_codegen_object_new (InitializedTypeInfo(&WWWForm_t505_il2cpp_TypeInfo));
		WWWForm__ctor_m2612(L_4, /*hidden argument*/&WWWForm__ctor_m2612_MethodInfo);
		V_1 = L_4;
		WWWForm_t505 * L_5 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Utility_t585_il2cpp_TypeInfo));
		uint64_t L_6 = Utility_GetSourceID_m3027(NULL /*static, unused*/, /*hidden argument*/&Utility_GetSourceID_m3027_MethodInfo);
		uint64_t L_7 = L_6;
		Object_t * L_8 = Box(InitializedTypeInfo(&SourceID_t579_il2cpp_TypeInfo), &L_7);
		NullCheck(L_8);
		String_t* L_9 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Enum_ToString_m1934_MethodInfo, L_8);
		NullCheck(L_5);
		WWWForm_AddField_m2613(L_5, (String_t*) &_stringLiteral229, L_9, /*hidden argument*/&WWWForm_AddField_m2613_MethodInfo);
		WWWForm_t505 * L_10 = V_1;
		uint64_t L_11 = Utility_GetAppID_m3029(NULL /*static, unused*/, /*hidden argument*/&Utility_GetAppID_m3029_MethodInfo);
		uint64_t L_12 = L_11;
		Object_t * L_13 = Box(InitializedTypeInfo(&AppID_t578_il2cpp_TypeInfo), &L_12);
		NullCheck(L_13);
		String_t* L_14 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Enum_ToString_m1934_MethodInfo, L_13);
		NullCheck(L_10);
		WWWForm_AddField_m2613(L_10, (String_t*) &_stringLiteral230, L_14, /*hidden argument*/&WWWForm_AddField_m2613_MethodInfo);
		WWWForm_t505 * L_15 = V_1;
		NullCheck(L_15);
		WWWForm_AddField_m2615(L_15, (String_t*) &_stringLiteral205, 0, /*hidden argument*/&WWWForm_AddField_m2615_MethodInfo);
		WWWForm_t505 * L_16 = V_1;
		NullCheck(L_16);
		WWWForm_AddField_m2615(L_16, (String_t*) &_stringLiteral231, 0, /*hidden argument*/&WWWForm_AddField_m2615_MethodInfo);
		WWWForm_t505 * L_17 = V_1;
		CreateMatchRequest_t566 * L_18 = ___req;
		NullCheck(L_18);
		String_t* L_19 = CreateMatchRequest_get_name_m2926(L_18, /*hidden argument*/&CreateMatchRequest_get_name_m2926_MethodInfo);
		NullCheck(L_17);
		WWWForm_AddField_m2613(L_17, (String_t*) &_stringLiteral217, L_19, /*hidden argument*/&WWWForm_AddField_m2613_MethodInfo);
		WWWForm_t505 * L_20 = V_1;
		CreateMatchRequest_t566 * L_21 = ___req;
		NullCheck(L_21);
		uint32_t L_22 = CreateMatchRequest_get_size_m2928(L_21, /*hidden argument*/&CreateMatchRequest_get_size_m2928_MethodInfo);
		V_3 = L_22;
		String_t* L_23 = UInt32_ToString_m3438((&V_3), /*hidden argument*/&UInt32_ToString_m3438_MethodInfo);
		NullCheck(L_20);
		WWWForm_AddField_m2613(L_20, (String_t*) &_stringLiteral232, L_23, /*hidden argument*/&WWWForm_AddField_m2613_MethodInfo);
		WWWForm_t505 * L_24 = V_1;
		CreateMatchRequest_t566 * L_25 = ___req;
		NullCheck(L_25);
		bool L_26 = CreateMatchRequest_get_advertise_m2930(L_25, /*hidden argument*/&CreateMatchRequest_get_advertise_m2930_MethodInfo);
		V_4 = L_26;
		String_t* L_27 = Boolean_ToString_m3439((&V_4), /*hidden argument*/&Boolean_ToString_m3439_MethodInfo);
		NullCheck(L_24);
		WWWForm_AddField_m2613(L_24, (String_t*) &_stringLiteral233, L_27, /*hidden argument*/&WWWForm_AddField_m2613_MethodInfo);
		WWWForm_t505 * L_28 = V_1;
		CreateMatchRequest_t566 * L_29 = ___req;
		NullCheck(L_29);
		String_t* L_30 = CreateMatchRequest_get_password_m2932(L_29, /*hidden argument*/&CreateMatchRequest_get_password_m2932_MethodInfo);
		NullCheck(L_28);
		WWWForm_AddField_m2613(L_28, (String_t*) &_stringLiteral234, L_30, /*hidden argument*/&WWWForm_AddField_m2613_MethodInfo);
		WWWForm_t505 * L_31 = V_1;
		NullCheck(L_31);
		Dictionary_2_t502 * L_32 = WWWForm_get_headers_m2616(L_31, /*hidden argument*/&WWWForm_get_headers_m2616_MethodInfo);
		NullCheck(L_32);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(Dictionary_2_set_Item_m3386_MethodInfo_var, L_32, (String_t*) &_stringLiteral235, (String_t*) &_stringLiteral236);
		Uri_t586 * L_33 = V_0;
		NullCheck(L_33);
		String_t* L_34 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Uri_ToString_m3440_MethodInfo, L_33);
		WWWForm_t505 * L_35 = V_1;
		WWW_t501 * L_36 = (WWW_t501 *)il2cpp_codegen_object_new (InitializedTypeInfo(&WWW_t501_il2cpp_TypeInfo));
		WWW__ctor_m2597(L_36, L_34, L_35, /*hidden argument*/&WWW__ctor_m2597_MethodInfo);
		V_2 = L_36;
		WWW_t501 * L_37 = V_2;
		ResponseDelegate_1_t588 * L_38 = ___callback;
		Object_t * L_39 = NetworkMatch_ProcessMatchResponse_TisCreateMatchResponse_t567_m3441(__this, L_37, L_38, /*hidden argument*/NetworkMatch_ProcessMatchResponse_TisCreateMatchResponse_t567_m3441_MethodInfo_var);
		Coroutine_t182 * L_40 = MonoBehaviour_StartCoroutine_m1455(__this, L_39, /*hidden argument*/&MonoBehaviour_StartCoroutine_m1455_MethodInfo);
		return L_40;
	}
}
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::JoinMatch(UnityEngine.Networking.Types.NetworkID,System.String,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.JoinMatchResponse>)
extern MethodInfo NetworkMatch_JoinMatch_m3037_MethodInfo;
extern "C" Coroutine_t182 * NetworkMatch_JoinMatch_m3037 (NetworkMatch_t587 * __this, uint64_t ___netId, String_t* ___matchPassword, ResponseDelegate_1_t589 * ___callback, MethodInfo* method)
{
	JoinMatchRequest_t568 * V_0 = {0};
	{
		JoinMatchRequest_t568 * L_0 = (JoinMatchRequest_t568 *)il2cpp_codegen_object_new (InitializedTypeInfo(&JoinMatchRequest_t568_il2cpp_TypeInfo));
		JoinMatchRequest__ctor_m2951(L_0, /*hidden argument*/&JoinMatchRequest__ctor_m2951_MethodInfo);
		V_0 = L_0;
		JoinMatchRequest_t568 * L_1 = V_0;
		uint64_t L_2 = ___netId;
		NullCheck(L_1);
		JoinMatchRequest_set_networkId_m2953(L_1, L_2, /*hidden argument*/&JoinMatchRequest_set_networkId_m2953_MethodInfo);
		JoinMatchRequest_t568 * L_3 = V_0;
		String_t* L_4 = ___matchPassword;
		NullCheck(L_3);
		JoinMatchRequest_set_password_m2955(L_3, L_4, /*hidden argument*/&JoinMatchRequest_set_password_m2955_MethodInfo);
		JoinMatchRequest_t568 * L_5 = V_0;
		ResponseDelegate_1_t589 * L_6 = ___callback;
		Coroutine_t182 * L_7 = NetworkMatch_JoinMatch_m3038(__this, L_5, L_6, /*hidden argument*/&NetworkMatch_JoinMatch_m3038_MethodInfo);
		return L_7;
	}
}
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::JoinMatch(UnityEngine.Networking.Match.JoinMatchRequest,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.JoinMatchResponse>)
extern MethodInfo* Dictionary_2_set_Item_m3386_MethodInfo_var;
extern MethodInfo* NetworkMatch_ProcessMatchResponse_TisJoinMatchResponse_t569_m3442_MethodInfo_var;
extern "C" Coroutine_t182 * NetworkMatch_JoinMatch_m3038 (NetworkMatch_t587 * __this, JoinMatchRequest_t568 * ___req, ResponseDelegate_1_t589 * ___callback, MethodInfo* method)
{
	static bool NetworkMatch_JoinMatch_m3038_init;
	if (!NetworkMatch_JoinMatch_m3038_init)
	{
		Dictionary_2_set_Item_m3386_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2_set_Item_m3386_GenericMethod);
		NetworkMatch_ProcessMatchResponse_TisJoinMatchResponse_t569_m3442_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&NetworkMatch_ProcessMatchResponse_TisJoinMatchResponse_t569_m3442_GenericMethod);
		NetworkMatch_JoinMatch_m3038_init = true;
	}
	Uri_t586 * V_0 = {0};
	WWWForm_t505 * V_1 = {0};
	WWW_t501 * V_2 = {0};
	{
		Uri_t586 * L_0 = NetworkMatch_get_baseUri_m3032(__this, /*hidden argument*/&NetworkMatch_get_baseUri_m3032_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Uri_t586_il2cpp_TypeInfo));
		Uri_t586 * L_1 = (Uri_t586 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Uri_t586_il2cpp_TypeInfo));
		Uri__ctor_m3437(L_1, L_0, (String_t*) &_stringLiteral237, /*hidden argument*/&Uri__ctor_m3437_MethodInfo);
		V_0 = L_1;
		Uri_t586 * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_3 = String_Concat_m50(NULL /*static, unused*/, (String_t*) &_stringLiteral238, L_2, /*hidden argument*/&String_Concat_m50_MethodInfo);
		Debug_Log_m2658(NULL /*static, unused*/, L_3, /*hidden argument*/&Debug_Log_m2658_MethodInfo);
		WWWForm_t505 * L_4 = (WWWForm_t505 *)il2cpp_codegen_object_new (InitializedTypeInfo(&WWWForm_t505_il2cpp_TypeInfo));
		WWWForm__ctor_m2612(L_4, /*hidden argument*/&WWWForm__ctor_m2612_MethodInfo);
		V_1 = L_4;
		WWWForm_t505 * L_5 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Utility_t585_il2cpp_TypeInfo));
		uint64_t L_6 = Utility_GetSourceID_m3027(NULL /*static, unused*/, /*hidden argument*/&Utility_GetSourceID_m3027_MethodInfo);
		uint64_t L_7 = L_6;
		Object_t * L_8 = Box(InitializedTypeInfo(&SourceID_t579_il2cpp_TypeInfo), &L_7);
		NullCheck(L_8);
		String_t* L_9 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Enum_ToString_m1934_MethodInfo, L_8);
		NullCheck(L_5);
		WWWForm_AddField_m2613(L_5, (String_t*) &_stringLiteral229, L_9, /*hidden argument*/&WWWForm_AddField_m2613_MethodInfo);
		WWWForm_t505 * L_10 = V_1;
		uint64_t L_11 = Utility_GetAppID_m3029(NULL /*static, unused*/, /*hidden argument*/&Utility_GetAppID_m3029_MethodInfo);
		uint64_t L_12 = L_11;
		Object_t * L_13 = Box(InitializedTypeInfo(&AppID_t578_il2cpp_TypeInfo), &L_12);
		NullCheck(L_13);
		String_t* L_14 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Enum_ToString_m1934_MethodInfo, L_13);
		NullCheck(L_10);
		WWWForm_AddField_m2613(L_10, (String_t*) &_stringLiteral230, L_14, /*hidden argument*/&WWWForm_AddField_m2613_MethodInfo);
		WWWForm_t505 * L_15 = V_1;
		NullCheck(L_15);
		WWWForm_AddField_m2615(L_15, (String_t*) &_stringLiteral205, 0, /*hidden argument*/&WWWForm_AddField_m2615_MethodInfo);
		WWWForm_t505 * L_16 = V_1;
		NullCheck(L_16);
		WWWForm_AddField_m2615(L_16, (String_t*) &_stringLiteral231, 0, /*hidden argument*/&WWWForm_AddField_m2615_MethodInfo);
		WWWForm_t505 * L_17 = V_1;
		JoinMatchRequest_t568 * L_18 = ___req;
		NullCheck(L_18);
		uint64_t L_19 = JoinMatchRequest_get_networkId_m2952(L_18, /*hidden argument*/&JoinMatchRequest_get_networkId_m2952_MethodInfo);
		uint64_t L_20 = L_19;
		Object_t * L_21 = Box(InitializedTypeInfo(&NetworkID_t580_il2cpp_TypeInfo), &L_20);
		NullCheck(L_21);
		String_t* L_22 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Enum_ToString_m1934_MethodInfo, L_21);
		NullCheck(L_17);
		WWWForm_AddField_m2613(L_17, (String_t*) &_stringLiteral204, L_22, /*hidden argument*/&WWWForm_AddField_m2613_MethodInfo);
		WWWForm_t505 * L_23 = V_1;
		JoinMatchRequest_t568 * L_24 = ___req;
		NullCheck(L_24);
		String_t* L_25 = JoinMatchRequest_get_password_m2954(L_24, /*hidden argument*/&JoinMatchRequest_get_password_m2954_MethodInfo);
		NullCheck(L_23);
		WWWForm_AddField_m2613(L_23, (String_t*) &_stringLiteral234, L_25, /*hidden argument*/&WWWForm_AddField_m2613_MethodInfo);
		WWWForm_t505 * L_26 = V_1;
		NullCheck(L_26);
		Dictionary_2_t502 * L_27 = WWWForm_get_headers_m2616(L_26, /*hidden argument*/&WWWForm_get_headers_m2616_MethodInfo);
		NullCheck(L_27);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(Dictionary_2_set_Item_m3386_MethodInfo_var, L_27, (String_t*) &_stringLiteral235, (String_t*) &_stringLiteral236);
		Uri_t586 * L_28 = V_0;
		NullCheck(L_28);
		String_t* L_29 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Uri_ToString_m3440_MethodInfo, L_28);
		WWWForm_t505 * L_30 = V_1;
		WWW_t501 * L_31 = (WWW_t501 *)il2cpp_codegen_object_new (InitializedTypeInfo(&WWW_t501_il2cpp_TypeInfo));
		WWW__ctor_m2597(L_31, L_29, L_30, /*hidden argument*/&WWW__ctor_m2597_MethodInfo);
		V_2 = L_31;
		WWW_t501 * L_32 = V_2;
		ResponseDelegate_1_t589 * L_33 = ___callback;
		Object_t * L_34 = NetworkMatch_ProcessMatchResponse_TisJoinMatchResponse_t569_m3442(__this, L_32, L_33, /*hidden argument*/NetworkMatch_ProcessMatchResponse_TisJoinMatchResponse_t569_m3442_MethodInfo_var);
		Coroutine_t182 * L_35 = MonoBehaviour_StartCoroutine_m1455(__this, L_34, /*hidden argument*/&MonoBehaviour_StartCoroutine_m1455_MethodInfo);
		return L_35;
	}
}
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::DestroyMatch(UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.BasicResponse>)
extern MethodInfo NetworkMatch_DestroyMatch_m3039_MethodInfo;
extern "C" Coroutine_t182 * NetworkMatch_DestroyMatch_m3039 (NetworkMatch_t587 * __this, uint64_t ___netId, ResponseDelegate_1_t590 * ___callback, MethodInfo* method)
{
	DestroyMatchRequest_t570 * V_0 = {0};
	{
		DestroyMatchRequest_t570 * L_0 = (DestroyMatchRequest_t570 *)il2cpp_codegen_object_new (InitializedTypeInfo(&DestroyMatchRequest_t570_il2cpp_TypeInfo));
		DestroyMatchRequest__ctor_m2972(L_0, /*hidden argument*/&DestroyMatchRequest__ctor_m2972_MethodInfo);
		V_0 = L_0;
		DestroyMatchRequest_t570 * L_1 = V_0;
		uint64_t L_2 = ___netId;
		NullCheck(L_1);
		DestroyMatchRequest_set_networkId_m2974(L_1, L_2, /*hidden argument*/&DestroyMatchRequest_set_networkId_m2974_MethodInfo);
		DestroyMatchRequest_t570 * L_3 = V_0;
		ResponseDelegate_1_t590 * L_4 = ___callback;
		Coroutine_t182 * L_5 = NetworkMatch_DestroyMatch_m3040(__this, L_3, L_4, /*hidden argument*/&NetworkMatch_DestroyMatch_m3040_MethodInfo);
		return L_5;
	}
}
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::DestroyMatch(UnityEngine.Networking.Match.DestroyMatchRequest,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.BasicResponse>)
extern MethodInfo* Dictionary_2_set_Item_m3386_MethodInfo_var;
extern MethodInfo* NetworkMatch_ProcessMatchResponse_TisBasicResponse_t564_m3443_MethodInfo_var;
extern "C" Coroutine_t182 * NetworkMatch_DestroyMatch_m3040 (NetworkMatch_t587 * __this, DestroyMatchRequest_t570 * ___req, ResponseDelegate_1_t590 * ___callback, MethodInfo* method)
{
	static bool NetworkMatch_DestroyMatch_m3040_init;
	if (!NetworkMatch_DestroyMatch_m3040_init)
	{
		Dictionary_2_set_Item_m3386_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2_set_Item_m3386_GenericMethod);
		NetworkMatch_ProcessMatchResponse_TisBasicResponse_t564_m3443_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&NetworkMatch_ProcessMatchResponse_TisBasicResponse_t564_m3443_GenericMethod);
		NetworkMatch_DestroyMatch_m3040_init = true;
	}
	Uri_t586 * V_0 = {0};
	WWWForm_t505 * V_1 = {0};
	WWW_t501 * V_2 = {0};
	{
		Uri_t586 * L_0 = NetworkMatch_get_baseUri_m3032(__this, /*hidden argument*/&NetworkMatch_get_baseUri_m3032_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Uri_t586_il2cpp_TypeInfo));
		Uri_t586 * L_1 = (Uri_t586 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Uri_t586_il2cpp_TypeInfo));
		Uri__ctor_m3437(L_1, L_0, (String_t*) &_stringLiteral239, /*hidden argument*/&Uri__ctor_m3437_MethodInfo);
		V_0 = L_1;
		Uri_t586 * L_2 = V_0;
		NullCheck(L_2);
		String_t* L_3 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Uri_ToString_m3440_MethodInfo, L_2);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_4 = String_Concat_m1678(NULL /*static, unused*/, (String_t*) &_stringLiteral240, L_3, /*hidden argument*/&String_Concat_m1678_MethodInfo);
		Debug_Log_m2658(NULL /*static, unused*/, L_4, /*hidden argument*/&Debug_Log_m2658_MethodInfo);
		WWWForm_t505 * L_5 = (WWWForm_t505 *)il2cpp_codegen_object_new (InitializedTypeInfo(&WWWForm_t505_il2cpp_TypeInfo));
		WWWForm__ctor_m2612(L_5, /*hidden argument*/&WWWForm__ctor_m2612_MethodInfo);
		V_1 = L_5;
		WWWForm_t505 * L_6 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Utility_t585_il2cpp_TypeInfo));
		uint64_t L_7 = Utility_GetSourceID_m3027(NULL /*static, unused*/, /*hidden argument*/&Utility_GetSourceID_m3027_MethodInfo);
		uint64_t L_8 = L_7;
		Object_t * L_9 = Box(InitializedTypeInfo(&SourceID_t579_il2cpp_TypeInfo), &L_8);
		NullCheck(L_9);
		String_t* L_10 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Enum_ToString_m1934_MethodInfo, L_9);
		NullCheck(L_6);
		WWWForm_AddField_m2613(L_6, (String_t*) &_stringLiteral229, L_10, /*hidden argument*/&WWWForm_AddField_m2613_MethodInfo);
		WWWForm_t505 * L_11 = V_1;
		uint64_t L_12 = Utility_GetAppID_m3029(NULL /*static, unused*/, /*hidden argument*/&Utility_GetAppID_m3029_MethodInfo);
		uint64_t L_13 = L_12;
		Object_t * L_14 = Box(InitializedTypeInfo(&AppID_t578_il2cpp_TypeInfo), &L_13);
		NullCheck(L_14);
		String_t* L_15 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Enum_ToString_m1934_MethodInfo, L_14);
		NullCheck(L_11);
		WWWForm_AddField_m2613(L_11, (String_t*) &_stringLiteral230, L_15, /*hidden argument*/&WWWForm_AddField_m2613_MethodInfo);
		WWWForm_t505 * L_16 = V_1;
		DestroyMatchRequest_t570 * L_17 = ___req;
		NullCheck(L_17);
		uint64_t L_18 = DestroyMatchRequest_get_networkId_m2973(L_17, /*hidden argument*/&DestroyMatchRequest_get_networkId_m2973_MethodInfo);
		NetworkAccessToken_t582 * L_19 = Utility_GetAccessTokenForNetwork_m3030(NULL /*static, unused*/, L_18, /*hidden argument*/&Utility_GetAccessTokenForNetwork_m3030_MethodInfo);
		NullCheck(L_19);
		String_t* L_20 = NetworkAccessToken_GetByteString_m3025(L_19, /*hidden argument*/&NetworkAccessToken_GetByteString_m3025_MethodInfo);
		NullCheck(L_16);
		WWWForm_AddField_m2613(L_16, (String_t*) &_stringLiteral205, L_20, /*hidden argument*/&WWWForm_AddField_m2613_MethodInfo);
		WWWForm_t505 * L_21 = V_1;
		NullCheck(L_21);
		WWWForm_AddField_m2615(L_21, (String_t*) &_stringLiteral231, 0, /*hidden argument*/&WWWForm_AddField_m2615_MethodInfo);
		WWWForm_t505 * L_22 = V_1;
		DestroyMatchRequest_t570 * L_23 = ___req;
		NullCheck(L_23);
		uint64_t L_24 = DestroyMatchRequest_get_networkId_m2973(L_23, /*hidden argument*/&DestroyMatchRequest_get_networkId_m2973_MethodInfo);
		uint64_t L_25 = L_24;
		Object_t * L_26 = Box(InitializedTypeInfo(&NetworkID_t580_il2cpp_TypeInfo), &L_25);
		NullCheck(L_26);
		String_t* L_27 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Enum_ToString_m1934_MethodInfo, L_26);
		NullCheck(L_22);
		WWWForm_AddField_m2613(L_22, (String_t*) &_stringLiteral204, L_27, /*hidden argument*/&WWWForm_AddField_m2613_MethodInfo);
		WWWForm_t505 * L_28 = V_1;
		NullCheck(L_28);
		Dictionary_2_t502 * L_29 = WWWForm_get_headers_m2616(L_28, /*hidden argument*/&WWWForm_get_headers_m2616_MethodInfo);
		NullCheck(L_29);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(Dictionary_2_set_Item_m3386_MethodInfo_var, L_29, (String_t*) &_stringLiteral235, (String_t*) &_stringLiteral236);
		Uri_t586 * L_30 = V_0;
		NullCheck(L_30);
		String_t* L_31 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Uri_ToString_m3440_MethodInfo, L_30);
		WWWForm_t505 * L_32 = V_1;
		WWW_t501 * L_33 = (WWW_t501 *)il2cpp_codegen_object_new (InitializedTypeInfo(&WWW_t501_il2cpp_TypeInfo));
		WWW__ctor_m2597(L_33, L_31, L_32, /*hidden argument*/&WWW__ctor_m2597_MethodInfo);
		V_2 = L_33;
		WWW_t501 * L_34 = V_2;
		ResponseDelegate_1_t590 * L_35 = ___callback;
		Object_t * L_36 = NetworkMatch_ProcessMatchResponse_TisBasicResponse_t564_m3443(__this, L_34, L_35, /*hidden argument*/NetworkMatch_ProcessMatchResponse_TisBasicResponse_t564_m3443_MethodInfo_var);
		Coroutine_t182 * L_37 = MonoBehaviour_StartCoroutine_m1455(__this, L_36, /*hidden argument*/&MonoBehaviour_StartCoroutine_m1455_MethodInfo);
		return L_37;
	}
}
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::DropConnection(UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NodeID,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.BasicResponse>)
extern MethodInfo NetworkMatch_DropConnection_m3041_MethodInfo;
extern "C" Coroutine_t182 * NetworkMatch_DropConnection_m3041 (NetworkMatch_t587 * __this, uint64_t ___netId, uint16_t ___dropNodeId, ResponseDelegate_1_t590 * ___callback, MethodInfo* method)
{
	DropConnectionRequest_t571 * V_0 = {0};
	{
		DropConnectionRequest_t571 * L_0 = (DropConnectionRequest_t571 *)il2cpp_codegen_object_new (InitializedTypeInfo(&DropConnectionRequest_t571_il2cpp_TypeInfo));
		DropConnectionRequest__ctor_m2976(L_0, /*hidden argument*/&DropConnectionRequest__ctor_m2976_MethodInfo);
		V_0 = L_0;
		DropConnectionRequest_t571 * L_1 = V_0;
		uint64_t L_2 = ___netId;
		NullCheck(L_1);
		DropConnectionRequest_set_networkId_m2978(L_1, L_2, /*hidden argument*/&DropConnectionRequest_set_networkId_m2978_MethodInfo);
		DropConnectionRequest_t571 * L_3 = V_0;
		uint16_t L_4 = ___dropNodeId;
		NullCheck(L_3);
		DropConnectionRequest_set_nodeId_m2980(L_3, L_4, /*hidden argument*/&DropConnectionRequest_set_nodeId_m2980_MethodInfo);
		DropConnectionRequest_t571 * L_5 = V_0;
		ResponseDelegate_1_t590 * L_6 = ___callback;
		Coroutine_t182 * L_7 = NetworkMatch_DropConnection_m3042(__this, L_5, L_6, /*hidden argument*/&NetworkMatch_DropConnection_m3042_MethodInfo);
		return L_7;
	}
}
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::DropConnection(UnityEngine.Networking.Match.DropConnectionRequest,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.BasicResponse>)
extern MethodInfo* Dictionary_2_set_Item_m3386_MethodInfo_var;
extern MethodInfo* NetworkMatch_ProcessMatchResponse_TisBasicResponse_t564_m3443_MethodInfo_var;
extern "C" Coroutine_t182 * NetworkMatch_DropConnection_m3042 (NetworkMatch_t587 * __this, DropConnectionRequest_t571 * ___req, ResponseDelegate_1_t590 * ___callback, MethodInfo* method)
{
	static bool NetworkMatch_DropConnection_m3042_init;
	if (!NetworkMatch_DropConnection_m3042_init)
	{
		Dictionary_2_set_Item_m3386_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2_set_Item_m3386_GenericMethod);
		NetworkMatch_ProcessMatchResponse_TisBasicResponse_t564_m3443_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&NetworkMatch_ProcessMatchResponse_TisBasicResponse_t564_m3443_GenericMethod);
		NetworkMatch_DropConnection_m3042_init = true;
	}
	Uri_t586 * V_0 = {0};
	WWWForm_t505 * V_1 = {0};
	WWW_t501 * V_2 = {0};
	{
		Uri_t586 * L_0 = NetworkMatch_get_baseUri_m3032(__this, /*hidden argument*/&NetworkMatch_get_baseUri_m3032_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Uri_t586_il2cpp_TypeInfo));
		Uri_t586 * L_1 = (Uri_t586 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Uri_t586_il2cpp_TypeInfo));
		Uri__ctor_m3437(L_1, L_0, (String_t*) &_stringLiteral241, /*hidden argument*/&Uri__ctor_m3437_MethodInfo);
		V_0 = L_1;
		Uri_t586 * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_3 = String_Concat_m50(NULL /*static, unused*/, (String_t*) &_stringLiteral242, L_2, /*hidden argument*/&String_Concat_m50_MethodInfo);
		Debug_Log_m2658(NULL /*static, unused*/, L_3, /*hidden argument*/&Debug_Log_m2658_MethodInfo);
		WWWForm_t505 * L_4 = (WWWForm_t505 *)il2cpp_codegen_object_new (InitializedTypeInfo(&WWWForm_t505_il2cpp_TypeInfo));
		WWWForm__ctor_m2612(L_4, /*hidden argument*/&WWWForm__ctor_m2612_MethodInfo);
		V_1 = L_4;
		WWWForm_t505 * L_5 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Utility_t585_il2cpp_TypeInfo));
		uint64_t L_6 = Utility_GetSourceID_m3027(NULL /*static, unused*/, /*hidden argument*/&Utility_GetSourceID_m3027_MethodInfo);
		uint64_t L_7 = L_6;
		Object_t * L_8 = Box(InitializedTypeInfo(&SourceID_t579_il2cpp_TypeInfo), &L_7);
		NullCheck(L_8);
		String_t* L_9 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Enum_ToString_m1934_MethodInfo, L_8);
		NullCheck(L_5);
		WWWForm_AddField_m2613(L_5, (String_t*) &_stringLiteral229, L_9, /*hidden argument*/&WWWForm_AddField_m2613_MethodInfo);
		WWWForm_t505 * L_10 = V_1;
		uint64_t L_11 = Utility_GetAppID_m3029(NULL /*static, unused*/, /*hidden argument*/&Utility_GetAppID_m3029_MethodInfo);
		uint64_t L_12 = L_11;
		Object_t * L_13 = Box(InitializedTypeInfo(&AppID_t578_il2cpp_TypeInfo), &L_12);
		NullCheck(L_13);
		String_t* L_14 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Enum_ToString_m1934_MethodInfo, L_13);
		NullCheck(L_10);
		WWWForm_AddField_m2613(L_10, (String_t*) &_stringLiteral230, L_14, /*hidden argument*/&WWWForm_AddField_m2613_MethodInfo);
		WWWForm_t505 * L_15 = V_1;
		DropConnectionRequest_t571 * L_16 = ___req;
		NullCheck(L_16);
		uint64_t L_17 = DropConnectionRequest_get_networkId_m2977(L_16, /*hidden argument*/&DropConnectionRequest_get_networkId_m2977_MethodInfo);
		NetworkAccessToken_t582 * L_18 = Utility_GetAccessTokenForNetwork_m3030(NULL /*static, unused*/, L_17, /*hidden argument*/&Utility_GetAccessTokenForNetwork_m3030_MethodInfo);
		NullCheck(L_18);
		String_t* L_19 = NetworkAccessToken_GetByteString_m3025(L_18, /*hidden argument*/&NetworkAccessToken_GetByteString_m3025_MethodInfo);
		NullCheck(L_15);
		WWWForm_AddField_m2613(L_15, (String_t*) &_stringLiteral205, L_19, /*hidden argument*/&WWWForm_AddField_m2613_MethodInfo);
		WWWForm_t505 * L_20 = V_1;
		NullCheck(L_20);
		WWWForm_AddField_m2615(L_20, (String_t*) &_stringLiteral231, 0, /*hidden argument*/&WWWForm_AddField_m2615_MethodInfo);
		WWWForm_t505 * L_21 = V_1;
		DropConnectionRequest_t571 * L_22 = ___req;
		NullCheck(L_22);
		uint64_t L_23 = DropConnectionRequest_get_networkId_m2977(L_22, /*hidden argument*/&DropConnectionRequest_get_networkId_m2977_MethodInfo);
		uint64_t L_24 = L_23;
		Object_t * L_25 = Box(InitializedTypeInfo(&NetworkID_t580_il2cpp_TypeInfo), &L_24);
		NullCheck(L_25);
		String_t* L_26 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Enum_ToString_m1934_MethodInfo, L_25);
		NullCheck(L_21);
		WWWForm_AddField_m2613(L_21, (String_t*) &_stringLiteral204, L_26, /*hidden argument*/&WWWForm_AddField_m2613_MethodInfo);
		WWWForm_t505 * L_27 = V_1;
		DropConnectionRequest_t571 * L_28 = ___req;
		NullCheck(L_28);
		uint16_t L_29 = DropConnectionRequest_get_nodeId_m2979(L_28, /*hidden argument*/&DropConnectionRequest_get_nodeId_m2979_MethodInfo);
		uint16_t L_30 = L_29;
		Object_t * L_31 = Box(InitializedTypeInfo(&NodeID_t581_il2cpp_TypeInfo), &L_30);
		NullCheck(L_31);
		String_t* L_32 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Enum_ToString_m1934_MethodInfo, L_31);
		NullCheck(L_27);
		WWWForm_AddField_m2613(L_27, (String_t*) &_stringLiteral206, L_32, /*hidden argument*/&WWWForm_AddField_m2613_MethodInfo);
		WWWForm_t505 * L_33 = V_1;
		NullCheck(L_33);
		Dictionary_2_t502 * L_34 = WWWForm_get_headers_m2616(L_33, /*hidden argument*/&WWWForm_get_headers_m2616_MethodInfo);
		NullCheck(L_34);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(Dictionary_2_set_Item_m3386_MethodInfo_var, L_34, (String_t*) &_stringLiteral235, (String_t*) &_stringLiteral236);
		Uri_t586 * L_35 = V_0;
		NullCheck(L_35);
		String_t* L_36 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Uri_ToString_m3440_MethodInfo, L_35);
		WWWForm_t505 * L_37 = V_1;
		WWW_t501 * L_38 = (WWW_t501 *)il2cpp_codegen_object_new (InitializedTypeInfo(&WWW_t501_il2cpp_TypeInfo));
		WWW__ctor_m2597(L_38, L_36, L_37, /*hidden argument*/&WWW__ctor_m2597_MethodInfo);
		V_2 = L_38;
		WWW_t501 * L_39 = V_2;
		ResponseDelegate_1_t590 * L_40 = ___callback;
		Object_t * L_41 = NetworkMatch_ProcessMatchResponse_TisBasicResponse_t564_m3443(__this, L_39, L_40, /*hidden argument*/NetworkMatch_ProcessMatchResponse_TisBasicResponse_t564_m3443_MethodInfo_var);
		Coroutine_t182 * L_42 = MonoBehaviour_StartCoroutine_m1455(__this, L_41, /*hidden argument*/&MonoBehaviour_StartCoroutine_m1455_MethodInfo);
		return L_42;
	}
}
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::ListMatches(System.Int32,System.Int32,System.String,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.ListMatchResponse>)
extern MethodInfo NetworkMatch_ListMatches_m3043_MethodInfo;
extern "C" Coroutine_t182 * NetworkMatch_ListMatches_m3043 (NetworkMatch_t587 * __this, int32_t ___startPageNumber, int32_t ___resultPageSize, String_t* ___matchNameFilter, ResponseDelegate_1_t591 * ___callback, MethodInfo* method)
{
	ListMatchRequest_t572 * V_0 = {0};
	{
		ListMatchRequest_t572 * L_0 = (ListMatchRequest_t572 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ListMatchRequest_t572_il2cpp_TypeInfo));
		ListMatchRequest__ctor_m2982(L_0, /*hidden argument*/&ListMatchRequest__ctor_m2982_MethodInfo);
		V_0 = L_0;
		ListMatchRequest_t572 * L_1 = V_0;
		int32_t L_2 = ___startPageNumber;
		NullCheck(L_1);
		ListMatchRequest_set_pageNum_m2986(L_1, L_2, /*hidden argument*/&ListMatchRequest_set_pageNum_m2986_MethodInfo);
		ListMatchRequest_t572 * L_3 = V_0;
		int32_t L_4 = ___resultPageSize;
		NullCheck(L_3);
		ListMatchRequest_set_pageSize_m2984(L_3, L_4, /*hidden argument*/&ListMatchRequest_set_pageSize_m2984_MethodInfo);
		ListMatchRequest_t572 * L_5 = V_0;
		String_t* L_6 = ___matchNameFilter;
		NullCheck(L_5);
		ListMatchRequest_set_nameFilter_m2988(L_5, L_6, /*hidden argument*/&ListMatchRequest_set_nameFilter_m2988_MethodInfo);
		ListMatchRequest_t572 * L_7 = V_0;
		ResponseDelegate_1_t591 * L_8 = ___callback;
		Coroutine_t182 * L_9 = NetworkMatch_ListMatches_m3044(__this, L_7, L_8, /*hidden argument*/&NetworkMatch_ListMatches_m3044_MethodInfo);
		return L_9;
	}
}
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::ListMatches(UnityEngine.Networking.Match.ListMatchRequest,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.ListMatchResponse>)
extern MethodInfo* Dictionary_2_set_Item_m3386_MethodInfo_var;
extern MethodInfo* NetworkMatch_ProcessMatchResponse_TisListMatchResponse_t577_m3444_MethodInfo_var;
extern "C" Coroutine_t182 * NetworkMatch_ListMatches_m3044 (NetworkMatch_t587 * __this, ListMatchRequest_t572 * ___req, ResponseDelegate_1_t591 * ___callback, MethodInfo* method)
{
	static bool NetworkMatch_ListMatches_m3044_init;
	if (!NetworkMatch_ListMatches_m3044_init)
	{
		Dictionary_2_set_Item_m3386_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2_set_Item_m3386_GenericMethod);
		NetworkMatch_ProcessMatchResponse_TisListMatchResponse_t577_m3444_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&NetworkMatch_ProcessMatchResponse_TisListMatchResponse_t577_m3444_GenericMethod);
		NetworkMatch_ListMatches_m3044_init = true;
	}
	Uri_t586 * V_0 = {0};
	WWWForm_t505 * V_1 = {0};
	WWW_t501 * V_2 = {0};
	{
		Uri_t586 * L_0 = NetworkMatch_get_baseUri_m3032(__this, /*hidden argument*/&NetworkMatch_get_baseUri_m3032_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Uri_t586_il2cpp_TypeInfo));
		Uri_t586 * L_1 = (Uri_t586 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Uri_t586_il2cpp_TypeInfo));
		Uri__ctor_m3437(L_1, L_0, (String_t*) &_stringLiteral243, /*hidden argument*/&Uri__ctor_m3437_MethodInfo);
		V_0 = L_1;
		Uri_t586 * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_3 = String_Concat_m50(NULL /*static, unused*/, (String_t*) &_stringLiteral244, L_2, /*hidden argument*/&String_Concat_m50_MethodInfo);
		Debug_Log_m2658(NULL /*static, unused*/, L_3, /*hidden argument*/&Debug_Log_m2658_MethodInfo);
		WWWForm_t505 * L_4 = (WWWForm_t505 *)il2cpp_codegen_object_new (InitializedTypeInfo(&WWWForm_t505_il2cpp_TypeInfo));
		WWWForm__ctor_m2612(L_4, /*hidden argument*/&WWWForm__ctor_m2612_MethodInfo);
		V_1 = L_4;
		WWWForm_t505 * L_5 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Utility_t585_il2cpp_TypeInfo));
		uint64_t L_6 = Utility_GetSourceID_m3027(NULL /*static, unused*/, /*hidden argument*/&Utility_GetSourceID_m3027_MethodInfo);
		uint64_t L_7 = L_6;
		Object_t * L_8 = Box(InitializedTypeInfo(&SourceID_t579_il2cpp_TypeInfo), &L_7);
		NullCheck(L_8);
		String_t* L_9 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Enum_ToString_m1934_MethodInfo, L_8);
		NullCheck(L_5);
		WWWForm_AddField_m2613(L_5, (String_t*) &_stringLiteral229, L_9, /*hidden argument*/&WWWForm_AddField_m2613_MethodInfo);
		WWWForm_t505 * L_10 = V_1;
		uint64_t L_11 = Utility_GetAppID_m3029(NULL /*static, unused*/, /*hidden argument*/&Utility_GetAppID_m3029_MethodInfo);
		uint64_t L_12 = L_11;
		Object_t * L_13 = Box(InitializedTypeInfo(&AppID_t578_il2cpp_TypeInfo), &L_12);
		NullCheck(L_13);
		String_t* L_14 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Enum_ToString_m1934_MethodInfo, L_13);
		NullCheck(L_10);
		WWWForm_AddField_m2613(L_10, (String_t*) &_stringLiteral230, L_14, /*hidden argument*/&WWWForm_AddField_m2613_MethodInfo);
		WWWForm_t505 * L_15 = V_1;
		NullCheck(L_15);
		WWWForm_AddField_m2615(L_15, (String_t*) &_stringLiteral205, 0, /*hidden argument*/&WWWForm_AddField_m2615_MethodInfo);
		WWWForm_t505 * L_16 = V_1;
		NullCheck(L_16);
		WWWForm_AddField_m2615(L_16, (String_t*) &_stringLiteral231, 0, /*hidden argument*/&WWWForm_AddField_m2615_MethodInfo);
		WWWForm_t505 * L_17 = V_1;
		ListMatchRequest_t572 * L_18 = ___req;
		NullCheck(L_18);
		int32_t L_19 = ListMatchRequest_get_pageSize_m2983(L_18, /*hidden argument*/&ListMatchRequest_get_pageSize_m2983_MethodInfo);
		NullCheck(L_17);
		WWWForm_AddField_m2615(L_17, (String_t*) &_stringLiteral245, L_19, /*hidden argument*/&WWWForm_AddField_m2615_MethodInfo);
		WWWForm_t505 * L_20 = V_1;
		ListMatchRequest_t572 * L_21 = ___req;
		NullCheck(L_21);
		int32_t L_22 = ListMatchRequest_get_pageNum_m2985(L_21, /*hidden argument*/&ListMatchRequest_get_pageNum_m2985_MethodInfo);
		NullCheck(L_20);
		WWWForm_AddField_m2615(L_20, (String_t*) &_stringLiteral246, L_22, /*hidden argument*/&WWWForm_AddField_m2615_MethodInfo);
		WWWForm_t505 * L_23 = V_1;
		ListMatchRequest_t572 * L_24 = ___req;
		NullCheck(L_24);
		String_t* L_25 = ListMatchRequest_get_nameFilter_m2987(L_24, /*hidden argument*/&ListMatchRequest_get_nameFilter_m2987_MethodInfo);
		NullCheck(L_23);
		WWWForm_AddField_m2613(L_23, (String_t*) &_stringLiteral247, L_25, /*hidden argument*/&WWWForm_AddField_m2613_MethodInfo);
		WWWForm_t505 * L_26 = V_1;
		NullCheck(L_26);
		Dictionary_2_t502 * L_27 = WWWForm_get_headers_m2616(L_26, /*hidden argument*/&WWWForm_get_headers_m2616_MethodInfo);
		NullCheck(L_27);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(Dictionary_2_set_Item_m3386_MethodInfo_var, L_27, (String_t*) &_stringLiteral235, (String_t*) &_stringLiteral236);
		Uri_t586 * L_28 = V_0;
		NullCheck(L_28);
		String_t* L_29 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Uri_ToString_m3440_MethodInfo, L_28);
		WWWForm_t505 * L_30 = V_1;
		WWW_t501 * L_31 = (WWW_t501 *)il2cpp_codegen_object_new (InitializedTypeInfo(&WWW_t501_il2cpp_TypeInfo));
		WWW__ctor_m2597(L_31, L_29, L_30, /*hidden argument*/&WWW__ctor_m2597_MethodInfo);
		V_2 = L_31;
		WWW_t501 * L_32 = V_2;
		ResponseDelegate_1_t591 * L_33 = ___callback;
		Object_t * L_34 = NetworkMatch_ProcessMatchResponse_TisListMatchResponse_t577_m3444(__this, L_32, L_33, /*hidden argument*/NetworkMatch_ProcessMatchResponse_TisListMatchResponse_t577_m3444_MethodInfo_var);
		Coroutine_t182 * L_35 = MonoBehaviour_StartCoroutine_m1455(__this, L_34, /*hidden argument*/&MonoBehaviour_StartCoroutine_m1455_MethodInfo);
		return L_35;
	}
}
// SimpleJson.JsonArray
#include "UnityEngine_SimpleJson_JsonArray.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo JsonArray_t592_il2cpp_TypeInfo;
// SimpleJson.JsonArray
#include "UnityEngine_SimpleJson_JsonArrayMethodDeclarations.h"

// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_2MethodDeclarations.h"
// SimpleJson.SimpleJson
#include "UnityEngine_SimpleJson_SimpleJsonMethodDeclarations.h"
extern MethodInfo SimpleJson_SerializeObject_m3067_MethodInfo;
extern Il2CppGenericMethod List_1__ctor_m3445_GenericMethod;


// System.Void SimpleJson.JsonArray::.ctor()
extern MethodInfo JsonArray__ctor_m3045_MethodInfo;
extern MethodInfo* List_1__ctor_m3445_MethodInfo_var;
extern "C" void JsonArray__ctor_m3045 (JsonArray_t592 * __this, MethodInfo* method)
{
	static bool JsonArray__ctor_m3045_init;
	if (!JsonArray__ctor_m3045_init)
	{
		List_1__ctor_m3445_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1__ctor_m3445_GenericMethod);
		JsonArray__ctor_m3045_init = true;
	}
	{
		List_1__ctor_m3445(__this, /*hidden argument*/List_1__ctor_m3445_MethodInfo_var);
		return;
	}
}
// System.String SimpleJson.JsonArray::ToString()
extern MethodInfo JsonArray_ToString_m3046_MethodInfo;
extern "C" String_t* JsonArray_ToString_m3046 (JsonArray_t592 * __this, MethodInfo* method)
{
	String_t* G_B2_0 = {0};
	String_t* G_B1_0 = {0};
	{
		String_t* L_0 = SimpleJson_SerializeObject_m3067(NULL /*static, unused*/, __this, /*hidden argument*/&SimpleJson_SerializeObject_m3067_MethodInfo);
		String_t* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0012;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_2 = ((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2;
		G_B2_0 = L_2;
	}

IL_0012:
	{
		return G_B2_0;
	}
}
// SimpleJson.JsonObject
#include "UnityEngine_SimpleJson_JsonObject.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo JsonObject_t594_il2cpp_TypeInfo;
// SimpleJson.JsonObject
#include "UnityEngine_SimpleJson_JsonObjectMethodDeclarations.h"

// System.Collections.Generic.Dictionary`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_9.h"
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti.h"
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_3.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__1.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullException.h"
extern TypeInfo Dictionary_2_t593_il2cpp_TypeInfo;
extern TypeInfo Enumerator_t698_il2cpp_TypeInfo;
extern TypeInfo ArgumentNullException_t699_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t599_il2cpp_TypeInfo;
extern TypeInfo KeyValuePair_2_t598_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_t117_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_9MethodDeclarations.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0MethodDeclarations.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullExceptionMethodDeclarations.h"
extern Il2CppType Dictionary_2_t593_0_0_0;
extern Il2CppType Enumerator_t698_0_0_0;
extern Il2CppType IEnumerator_1_t599_0_0_0;
extern MethodInfo Dictionary_2_get_Item_m3446_MethodInfo;
extern MethodInfo Dictionary_2_set_Item_m3447_MethodInfo;
extern MethodInfo Dictionary_2_get_Count_m3448_MethodInfo;
extern MethodInfo Dictionary_2__ctor_m3449_MethodInfo;
extern MethodInfo Dictionary_2_Add_m3450_MethodInfo;
extern MethodInfo Dictionary_2_Remove_m3451_MethodInfo;
extern MethodInfo Dictionary_2_TryGetValue_m3452_MethodInfo;
extern MethodInfo Dictionary_2_Clear_m3453_MethodInfo;
extern MethodInfo Dictionary_2_ContainsKey_m3454_MethodInfo;
extern MethodInfo ArgumentNullException__ctor_m3455_MethodInfo;
extern MethodInfo JsonObject_get_Count_m3060_MethodInfo;
extern MethodInfo JsonObject_GetEnumerator_m3063_MethodInfo;
extern MethodInfo IEnumerator_1_get_Current_m3456_MethodInfo;
extern MethodInfo IEnumerator_MoveNext_m3457_MethodInfo;
extern Il2CppGenericMethod Dictionary_2_get_Keys_m3458_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_get_Values_m3459_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_get_Item_m3446_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_set_Item_m3447_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_get_Count_m3448_GenericMethod;
extern Il2CppGenericMethod Dictionary_2__ctor_m3449_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_GetEnumerator_m3460_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Add_m3450_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Remove_m3451_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_TryGetValue_m3452_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2_get_Key_m3461_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2_get_Value_m3462_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Clear_m3453_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_ContainsKey_m3454_GenericMethod;
extern Il2CppGenericMethod IEnumerator_1_get_Current_m3456_GenericMethod;


// System.Void SimpleJson.JsonObject::.ctor()
extern MethodInfo JsonObject__ctor_m3047_MethodInfo;
extern TypeInfo* Dictionary_2_t593_il2cpp_TypeInfo_var;
extern MethodInfo* Dictionary_2__ctor_m3449_MethodInfo_var;
extern "C" void JsonObject__ctor_m3047 (JsonObject_t594 * __this, MethodInfo* method)
{
	static bool JsonObject__ctor_m3047_init;
	if (!JsonObject__ctor_m3047_init)
	{
		Dictionary_2_t593_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Dictionary_2_t593_0_0_0);
		Dictionary_2__ctor_m3449_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2__ctor_m3449_GenericMethod);
		JsonObject__ctor_m3047_init = true;
	}
	{
		Object__ctor_m1289(__this, /*hidden argument*/&Object__ctor_m1289_MethodInfo);
		Dictionary_2_t593 * L_0 = (Dictionary_2_t593 *)il2cpp_codegen_object_new (Dictionary_2_t593_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3449(L_0, /*hidden argument*/Dictionary_2__ctor_m3449_MethodInfo_var);
		__this->____members_0 = L_0;
		return;
	}
}
// System.Collections.IEnumerator SimpleJson.JsonObject::System.Collections.IEnumerable.GetEnumerator()
extern MethodInfo JsonObject_System_Collections_IEnumerable_GetEnumerator_m3048_MethodInfo;
extern TypeInfo* Enumerator_t698_il2cpp_TypeInfo_var;
extern MethodInfo* Dictionary_2_GetEnumerator_m3460_MethodInfo_var;
extern "C" Object_t * JsonObject_System_Collections_IEnumerable_GetEnumerator_m3048 (JsonObject_t594 * __this, MethodInfo* method)
{
	static bool JsonObject_System_Collections_IEnumerable_GetEnumerator_m3048_init;
	if (!JsonObject_System_Collections_IEnumerable_GetEnumerator_m3048_init)
	{
		Enumerator_t698_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Enumerator_t698_0_0_0);
		Dictionary_2_GetEnumerator_m3460_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2_GetEnumerator_m3460_GenericMethod);
		JsonObject_System_Collections_IEnumerable_GetEnumerator_m3048_init = true;
	}
	{
		Dictionary_2_t593 * L_0 = (__this->____members_0);
		NullCheck(L_0);
		Enumerator_t698  L_1 = Dictionary_2_GetEnumerator_m3460(L_0, /*hidden argument*/Dictionary_2_GetEnumerator_m3460_MethodInfo_var);
		Enumerator_t698  L_2 = L_1;
		Object_t * L_3 = Box(Enumerator_t698_il2cpp_TypeInfo_var, &L_2);
		return (Object_t *)L_3;
	}
}
// System.Void SimpleJson.JsonObject::Add(System.String,System.Object)
extern MethodInfo JsonObject_Add_m3049_MethodInfo;
extern MethodInfo* Dictionary_2_Add_m3450_MethodInfo_var;
extern "C" void JsonObject_Add_m3049 (JsonObject_t594 * __this, String_t* ___key, Object_t * ___value, MethodInfo* method)
{
	static bool JsonObject_Add_m3049_init;
	if (!JsonObject_Add_m3049_init)
	{
		Dictionary_2_Add_m3450_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2_Add_m3450_GenericMethod);
		JsonObject_Add_m3049_init = true;
	}
	{
		Dictionary_2_t593 * L_0 = (__this->____members_0);
		String_t* L_1 = ___key;
		Object_t * L_2 = ___value;
		NullCheck(L_0);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(Dictionary_2_Add_m3450_MethodInfo_var, L_0, L_1, L_2);
		return;
	}
}
// System.Collections.Generic.ICollection`1<System.String> SimpleJson.JsonObject::get_Keys()
extern MethodInfo JsonObject_get_Keys_m3050_MethodInfo;
extern MethodInfo* Dictionary_2_get_Keys_m3458_MethodInfo_var;
extern "C" Object_t* JsonObject_get_Keys_m3050 (JsonObject_t594 * __this, MethodInfo* method)
{
	static bool JsonObject_get_Keys_m3050_init;
	if (!JsonObject_get_Keys_m3050_init)
	{
		Dictionary_2_get_Keys_m3458_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2_get_Keys_m3458_GenericMethod);
		JsonObject_get_Keys_m3050_init = true;
	}
	{
		Dictionary_2_t593 * L_0 = (__this->____members_0);
		NullCheck(L_0);
		KeyCollection_t700 * L_1 = Dictionary_2_get_Keys_m3458(L_0, /*hidden argument*/Dictionary_2_get_Keys_m3458_MethodInfo_var);
		return L_1;
	}
}
// System.Boolean SimpleJson.JsonObject::Remove(System.String)
extern MethodInfo JsonObject_Remove_m3051_MethodInfo;
extern MethodInfo* Dictionary_2_Remove_m3451_MethodInfo_var;
extern "C" bool JsonObject_Remove_m3051 (JsonObject_t594 * __this, String_t* ___key, MethodInfo* method)
{
	static bool JsonObject_Remove_m3051_init;
	if (!JsonObject_Remove_m3051_init)
	{
		Dictionary_2_Remove_m3451_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2_Remove_m3451_GenericMethod);
		JsonObject_Remove_m3051_init = true;
	}
	{
		Dictionary_2_t593 * L_0 = (__this->____members_0);
		String_t* L_1 = ___key;
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(Dictionary_2_Remove_m3451_MethodInfo_var, L_0, L_1);
		return L_2;
	}
}
// System.Boolean SimpleJson.JsonObject::TryGetValue(System.String,System.Object&)
extern MethodInfo JsonObject_TryGetValue_m3052_MethodInfo;
extern MethodInfo* Dictionary_2_TryGetValue_m3452_MethodInfo_var;
extern "C" bool JsonObject_TryGetValue_m3052 (JsonObject_t594 * __this, String_t* ___key, Object_t ** ___value, MethodInfo* method)
{
	static bool JsonObject_TryGetValue_m3052_init;
	if (!JsonObject_TryGetValue_m3052_init)
	{
		Dictionary_2_TryGetValue_m3452_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2_TryGetValue_m3452_GenericMethod);
		JsonObject_TryGetValue_m3052_init = true;
	}
	{
		Dictionary_2_t593 * L_0 = (__this->____members_0);
		String_t* L_1 = ___key;
		Object_t ** L_2 = ___value;
		NullCheck(L_0);
		bool L_3 = (bool)VirtFuncInvoker2< bool, String_t*, Object_t ** >::Invoke(Dictionary_2_TryGetValue_m3452_MethodInfo_var, L_0, L_1, L_2);
		return L_3;
	}
}
// System.Collections.Generic.ICollection`1<System.Object> SimpleJson.JsonObject::get_Values()
extern MethodInfo JsonObject_get_Values_m3053_MethodInfo;
extern MethodInfo* Dictionary_2_get_Values_m3459_MethodInfo_var;
extern "C" Object_t* JsonObject_get_Values_m3053 (JsonObject_t594 * __this, MethodInfo* method)
{
	static bool JsonObject_get_Values_m3053_init;
	if (!JsonObject_get_Values_m3053_init)
	{
		Dictionary_2_get_Values_m3459_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2_get_Values_m3459_GenericMethod);
		JsonObject_get_Values_m3053_init = true;
	}
	{
		Dictionary_2_t593 * L_0 = (__this->____members_0);
		NullCheck(L_0);
		ValueCollection_t701 * L_1 = Dictionary_2_get_Values_m3459(L_0, /*hidden argument*/Dictionary_2_get_Values_m3459_MethodInfo_var);
		return L_1;
	}
}
// System.Object SimpleJson.JsonObject::get_Item(System.String)
extern MethodInfo JsonObject_get_Item_m3054_MethodInfo;
extern MethodInfo* Dictionary_2_get_Item_m3446_MethodInfo_var;
extern "C" Object_t * JsonObject_get_Item_m3054 (JsonObject_t594 * __this, String_t* ___key, MethodInfo* method)
{
	static bool JsonObject_get_Item_m3054_init;
	if (!JsonObject_get_Item_m3054_init)
	{
		Dictionary_2_get_Item_m3446_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2_get_Item_m3446_GenericMethod);
		JsonObject_get_Item_m3054_init = true;
	}
	{
		Dictionary_2_t593 * L_0 = (__this->____members_0);
		String_t* L_1 = ___key;
		NullCheck(L_0);
		Object_t * L_2 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(Dictionary_2_get_Item_m3446_MethodInfo_var, L_0, L_1);
		return L_2;
	}
}
// System.Void SimpleJson.JsonObject::set_Item(System.String,System.Object)
extern MethodInfo JsonObject_set_Item_m3055_MethodInfo;
extern MethodInfo* Dictionary_2_set_Item_m3447_MethodInfo_var;
extern "C" void JsonObject_set_Item_m3055 (JsonObject_t594 * __this, String_t* ___key, Object_t * ___value, MethodInfo* method)
{
	static bool JsonObject_set_Item_m3055_init;
	if (!JsonObject_set_Item_m3055_init)
	{
		Dictionary_2_set_Item_m3447_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2_set_Item_m3447_GenericMethod);
		JsonObject_set_Item_m3055_init = true;
	}
	{
		Dictionary_2_t593 * L_0 = (__this->____members_0);
		String_t* L_1 = ___key;
		Object_t * L_2 = ___value;
		NullCheck(L_0);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(Dictionary_2_set_Item_m3447_MethodInfo_var, L_0, L_1, L_2);
		return;
	}
}
// System.Void SimpleJson.JsonObject::Add(System.Collections.Generic.KeyValuePair`2<System.String,System.Object>)
extern MethodInfo JsonObject_Add_m3056_MethodInfo;
extern MethodInfo* KeyValuePair_2_get_Key_m3461_MethodInfo_var;
extern MethodInfo* KeyValuePair_2_get_Value_m3462_MethodInfo_var;
extern MethodInfo* Dictionary_2_Add_m3450_MethodInfo_var;
extern "C" void JsonObject_Add_m3056 (JsonObject_t594 * __this, KeyValuePair_2_t598  ___item, MethodInfo* method)
{
	static bool JsonObject_Add_m3056_init;
	if (!JsonObject_Add_m3056_init)
	{
		KeyValuePair_2_get_Key_m3461_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&KeyValuePair_2_get_Key_m3461_GenericMethod);
		KeyValuePair_2_get_Value_m3462_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&KeyValuePair_2_get_Value_m3462_GenericMethod);
		Dictionary_2_Add_m3450_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2_Add_m3450_GenericMethod);
		JsonObject_Add_m3056_init = true;
	}
	{
		Dictionary_2_t593 * L_0 = (__this->____members_0);
		String_t* L_1 = KeyValuePair_2_get_Key_m3461((&___item), /*hidden argument*/KeyValuePair_2_get_Key_m3461_MethodInfo_var);
		Object_t * L_2 = KeyValuePair_2_get_Value_m3462((&___item), /*hidden argument*/KeyValuePair_2_get_Value_m3462_MethodInfo_var);
		NullCheck(L_0);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(Dictionary_2_Add_m3450_MethodInfo_var, L_0, L_1, L_2);
		return;
	}
}
// System.Void SimpleJson.JsonObject::Clear()
extern MethodInfo JsonObject_Clear_m3057_MethodInfo;
extern MethodInfo* Dictionary_2_Clear_m3453_MethodInfo_var;
extern "C" void JsonObject_Clear_m3057 (JsonObject_t594 * __this, MethodInfo* method)
{
	static bool JsonObject_Clear_m3057_init;
	if (!JsonObject_Clear_m3057_init)
	{
		Dictionary_2_Clear_m3453_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2_Clear_m3453_GenericMethod);
		JsonObject_Clear_m3057_init = true;
	}
	{
		Dictionary_2_t593 * L_0 = (__this->____members_0);
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(Dictionary_2_Clear_m3453_MethodInfo_var, L_0);
		return;
	}
}
// System.Boolean SimpleJson.JsonObject::Contains(System.Collections.Generic.KeyValuePair`2<System.String,System.Object>)
extern MethodInfo JsonObject_Contains_m3058_MethodInfo;
extern MethodInfo* KeyValuePair_2_get_Key_m3461_MethodInfo_var;
extern MethodInfo* Dictionary_2_ContainsKey_m3454_MethodInfo_var;
extern MethodInfo* Dictionary_2_get_Item_m3446_MethodInfo_var;
extern MethodInfo* KeyValuePair_2_get_Value_m3462_MethodInfo_var;
extern "C" bool JsonObject_Contains_m3058 (JsonObject_t594 * __this, KeyValuePair_2_t598  ___item, MethodInfo* method)
{
	static bool JsonObject_Contains_m3058_init;
	if (!JsonObject_Contains_m3058_init)
	{
		KeyValuePair_2_get_Key_m3461_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&KeyValuePair_2_get_Key_m3461_GenericMethod);
		Dictionary_2_ContainsKey_m3454_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2_ContainsKey_m3454_GenericMethod);
		Dictionary_2_get_Item_m3446_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2_get_Item_m3446_GenericMethod);
		KeyValuePair_2_get_Value_m3462_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&KeyValuePair_2_get_Value_m3462_GenericMethod);
		JsonObject_Contains_m3058_init = true;
	}
	int32_t G_B3_0 = 0;
	{
		Dictionary_2_t593 * L_0 = (__this->____members_0);
		String_t* L_1 = KeyValuePair_2_get_Key_m3461((&___item), /*hidden argument*/KeyValuePair_2_get_Key_m3461_MethodInfo_var);
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(Dictionary_2_ContainsKey_m3454_MethodInfo_var, L_0, L_1);
		if (!L_2)
		{
			goto IL_0034;
		}
	}
	{
		Dictionary_2_t593 * L_3 = (__this->____members_0);
		String_t* L_4 = KeyValuePair_2_get_Key_m3461((&___item), /*hidden argument*/KeyValuePair_2_get_Key_m3461_MethodInfo_var);
		NullCheck(L_3);
		Object_t * L_5 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(Dictionary_2_get_Item_m3446_MethodInfo_var, L_3, L_4);
		Object_t * L_6 = KeyValuePair_2_get_Value_m3462((&___item), /*hidden argument*/KeyValuePair_2_get_Value_m3462_MethodInfo_var);
		G_B3_0 = ((((Object_t*)(Object_t *)L_5) == ((Object_t*)(Object_t *)L_6))? 1 : 0);
		goto IL_0035;
	}

IL_0034:
	{
		G_B3_0 = 0;
	}

IL_0035:
	{
		return G_B3_0;
	}
}
// System.Void SimpleJson.JsonObject::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,System.Object>[],System.Int32)
extern MethodInfo JsonObject_CopyTo_m3059_MethodInfo;
extern MethodInfo* IEnumerator_1_get_Current_m3456_MethodInfo_var;
extern "C" void JsonObject_CopyTo_m3059 (JsonObject_t594 * __this, KeyValuePair_2U5BU5D_t597* ___array, int32_t ___arrayIndex, MethodInfo* method)
{
	static bool JsonObject_CopyTo_m3059_init;
	if (!JsonObject_CopyTo_m3059_init)
	{
		IEnumerator_1_get_Current_m3456_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&IEnumerator_1_get_Current_m3456_GenericMethod);
		JsonObject_CopyTo_m3059_init = true;
	}
	int32_t V_0 = 0;
	KeyValuePair_2_t598  V_1 = {0};
	Object_t* V_2 = {0};
	Exception_t275 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t275 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		KeyValuePair_2U5BU5D_t597* L_0 = ___array;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t699 * L_1 = (ArgumentNullException_t699 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t699_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3455(L_1, (String_t*) &_stringLiteral252, /*hidden argument*/&ArgumentNullException__ctor_m3455_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0011:
	{
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&JsonObject_get_Count_m3060_MethodInfo, __this);
		V_0 = L_2;
		Object_t* L_3 = (Object_t*)VirtFuncInvoker0< Object_t* >::Invoke(&JsonObject_GetEnumerator_m3063_MethodInfo, __this);
		V_2 = L_3;
	}

IL_001f:
	try
	{ // begin try (depth: 1)
		{
			goto IL_004d;
		}

IL_0024:
		{
			Object_t* L_4 = V_2;
			NullCheck(L_4);
			KeyValuePair_2_t598  L_5 = (KeyValuePair_2_t598 )InterfaceFuncInvoker0< KeyValuePair_2_t598  >::Invoke(IEnumerator_1_get_Current_m3456_MethodInfo_var, L_4);
			V_1 = L_5;
			KeyValuePair_2U5BU5D_t597* L_6 = ___array;
			int32_t L_7 = ___arrayIndex;
			int32_t L_8 = L_7;
			___arrayIndex = ((int32_t)((int32_t)L_8+(int32_t)1));
			NullCheck(L_6);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_6, L_8);
			KeyValuePair_2_t598  L_9 = V_1;
			*((KeyValuePair_2_t598 *)(KeyValuePair_2_t598 *)SZArrayLdElema(L_6, L_8)) = L_9;
			int32_t L_10 = V_0;
			int32_t L_11 = ((int32_t)((int32_t)L_10-(int32_t)1));
			V_0 = L_11;
			if ((((int32_t)L_11) > ((int32_t)0)))
			{
				goto IL_004d;
			}
		}

IL_0048:
		{
			IL2CPP_LEAVE(0x68, FINALLY_005d);
		}

IL_004d:
		{
			Object_t* L_12 = V_2;
			NullCheck(L_12);
			bool L_13 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&IEnumerator_MoveNext_m3457_MethodInfo, L_12);
			if (L_13)
			{
				goto IL_0024;
			}
		}

IL_0058:
		{
			IL2CPP_LEAVE(0x68, FINALLY_005d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t275 *)e.ex;
		goto FINALLY_005d;
	}

FINALLY_005d:
	{ // begin finally (depth: 1)
		{
			Object_t* L_14 = V_2;
			if (L_14)
			{
				goto IL_0061;
			}
		}

IL_0060:
		{
			IL2CPP_END_FINALLY(93)
		}

IL_0061:
		{
			Object_t* L_15 = V_2;
			NullCheck(L_15);
			InterfaceActionInvoker0::Invoke(&IDisposable_Dispose_m1379_MethodInfo, L_15);
			IL2CPP_END_FINALLY(93)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(93)
	{
		IL2CPP_JUMP_TBL(0x68, IL_0068)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t275 *)
	}

IL_0068:
	{
		return;
	}
}
// System.Int32 SimpleJson.JsonObject::get_Count()
extern MethodInfo* Dictionary_2_get_Count_m3448_MethodInfo_var;
extern "C" int32_t JsonObject_get_Count_m3060 (JsonObject_t594 * __this, MethodInfo* method)
{
	static bool JsonObject_get_Count_m3060_init;
	if (!JsonObject_get_Count_m3060_init)
	{
		Dictionary_2_get_Count_m3448_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2_get_Count_m3448_GenericMethod);
		JsonObject_get_Count_m3060_init = true;
	}
	{
		Dictionary_2_t593 * L_0 = (__this->____members_0);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(Dictionary_2_get_Count_m3448_MethodInfo_var, L_0);
		return L_1;
	}
}
// System.Boolean SimpleJson.JsonObject::get_IsReadOnly()
extern MethodInfo JsonObject_get_IsReadOnly_m3061_MethodInfo;
extern "C" bool JsonObject_get_IsReadOnly_m3061 (JsonObject_t594 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Boolean SimpleJson.JsonObject::Remove(System.Collections.Generic.KeyValuePair`2<System.String,System.Object>)
extern MethodInfo JsonObject_Remove_m3062_MethodInfo;
extern MethodInfo* KeyValuePair_2_get_Key_m3461_MethodInfo_var;
extern MethodInfo* Dictionary_2_Remove_m3451_MethodInfo_var;
extern "C" bool JsonObject_Remove_m3062 (JsonObject_t594 * __this, KeyValuePair_2_t598  ___item, MethodInfo* method)
{
	static bool JsonObject_Remove_m3062_init;
	if (!JsonObject_Remove_m3062_init)
	{
		KeyValuePair_2_get_Key_m3461_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&KeyValuePair_2_get_Key_m3461_GenericMethod);
		Dictionary_2_Remove_m3451_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2_Remove_m3451_GenericMethod);
		JsonObject_Remove_m3062_init = true;
	}
	{
		Dictionary_2_t593 * L_0 = (__this->____members_0);
		String_t* L_1 = KeyValuePair_2_get_Key_m3461((&___item), /*hidden argument*/KeyValuePair_2_get_Key_m3461_MethodInfo_var);
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(Dictionary_2_Remove_m3451_MethodInfo_var, L_0, L_1);
		return L_2;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>> SimpleJson.JsonObject::GetEnumerator()
extern TypeInfo* Enumerator_t698_il2cpp_TypeInfo_var;
extern MethodInfo* Dictionary_2_GetEnumerator_m3460_MethodInfo_var;
extern "C" Object_t* JsonObject_GetEnumerator_m3063 (JsonObject_t594 * __this, MethodInfo* method)
{
	static bool JsonObject_GetEnumerator_m3063_init;
	if (!JsonObject_GetEnumerator_m3063_init)
	{
		Enumerator_t698_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Enumerator_t698_0_0_0);
		Dictionary_2_GetEnumerator_m3460_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2_GetEnumerator_m3460_GenericMethod);
		JsonObject_GetEnumerator_m3063_init = true;
	}
	{
		Dictionary_2_t593 * L_0 = (__this->____members_0);
		NullCheck(L_0);
		Enumerator_t698  L_1 = Dictionary_2_GetEnumerator_m3460(L_0, /*hidden argument*/Dictionary_2_GetEnumerator_m3460_MethodInfo_var);
		Enumerator_t698  L_2 = L_1;
		Object_t * L_3 = Box(Enumerator_t698_il2cpp_TypeInfo_var, &L_2);
		return (Object_t*)L_3;
	}
}
// System.String SimpleJson.JsonObject::ToString()
extern MethodInfo JsonObject_ToString_m3064_MethodInfo;
extern "C" String_t* JsonObject_ToString_m3064 (JsonObject_t594 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = SimpleJson_SerializeObject_m3067(NULL /*static, unused*/, __this, /*hidden argument*/&SimpleJson_SerializeObject_m3067_MethodInfo);
		return L_0;
	}
}
// SimpleJson.SimpleJson
#include "UnityEngine_SimpleJson_SimpleJson.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo SimpleJson_t602_il2cpp_TypeInfo;

// SimpleJson.PocoJsonSerializerStrategy
#include "UnityEngine_SimpleJson_PocoJsonSerializerStrategy.h"
// System.Text.StringBuilder
#include "mscorlib_System_Text_StringBuilder.h"
// System.Globalization.CultureInfo
#include "mscorlib_System_Globalization_CultureInfo.h"
// System.Globalization.NumberStyles
#include "mscorlib_System_Globalization_NumberStyles.h"
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeException.h"
// System.Double
#include "mscorlib_System_Double.h"
// System.Int64
#include "mscorlib_System_Int64.h"
// System.StringComparison
#include "mscorlib_System_StringComparison.h"
// System.Decimal
#include "mscorlib_System_Decimal.h"
// System.SByte
#include "mscorlib_System_SByte.h"
// System.Int16
#include "mscorlib_System_Int16.h"
extern TypeInfo PocoJsonSerializerStrategy_t601_il2cpp_TypeInfo;
extern TypeInfo StringBuilder_t265_il2cpp_TypeInfo;
extern TypeInfo List_1_t266_il2cpp_TypeInfo;
extern TypeInfo CultureInfo_t702_il2cpp_TypeInfo;
extern TypeInfo ArgumentOutOfRangeException_t703_il2cpp_TypeInfo;
extern TypeInfo CharU5BU5D_t179_il2cpp_TypeInfo;
extern TypeInfo Char_t172_il2cpp_TypeInfo;
extern TypeInfo Double_t704_il2cpp_TypeInfo;
extern TypeInfo Int64_t705_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t595_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t596_il2cpp_TypeInfo;
extern TypeInfo IDictionary_2_t706_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_t399_il2cpp_TypeInfo;
extern TypeInfo IJsonSerializerStrategy_t600_il2cpp_TypeInfo;
extern TypeInfo IFormatProvider_t707_il2cpp_TypeInfo;
extern TypeInfo UInt64_t708_il2cpp_TypeInfo;
extern TypeInfo Decimal_t709_il2cpp_TypeInfo;
extern TypeInfo SByte_t336_il2cpp_TypeInfo;
extern TypeInfo Int16_t375_il2cpp_TypeInfo;
// SimpleJson.PocoJsonSerializerStrategy
#include "UnityEngine_SimpleJson_PocoJsonSerializerStrategyMethodDeclarations.h"
// System.Text.StringBuilder
#include "mscorlib_System_Text_StringBuilderMethodDeclarations.h"
// System.Globalization.CultureInfo
#include "mscorlib_System_Globalization_CultureInfoMethodDeclarations.h"
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeExceptionMethodDeclarations.h"
// System.Double
#include "mscorlib_System_DoubleMethodDeclarations.h"
// System.Int64
#include "mscorlib_System_Int64MethodDeclarations.h"
// System.Int32
#include "mscorlib_System_Int32MethodDeclarations.h"
// System.Decimal
#include "mscorlib_System_DecimalMethodDeclarations.h"
extern Il2CppType List_1_t266_0_0_0;
extern Il2CppType CharU5BU5D_t179_0_0_0;
extern Il2CppType IDictionary_2_t706_0_0_0;
extern MethodInfo SimpleJson_get_PocoJsonSerializerStrategy_m3085_MethodInfo;
extern MethodInfo PocoJsonSerializerStrategy__ctor_m3086_MethodInfo;
extern MethodInfo String_ToCharArray_m3463_MethodInfo;
extern MethodInfo SimpleJson_ParseValue_m3070_MethodInfo;
extern MethodInfo StringBuilder__ctor_m3464_MethodInfo;
extern MethodInfo SimpleJson_SerializeValue_m3078_MethodInfo;
extern MethodInfo StringBuilder_ToString_m1281_MethodInfo;
extern MethodInfo SimpleJson_get_CurrentJsonSerializerStrategy_m3084_MethodInfo;
extern MethodInfo SimpleJson_SerializeObject_m3066_MethodInfo;
extern MethodInfo SimpleJson_NextToken_m3077_MethodInfo;
extern MethodInfo SimpleJson_LookAhead_m3076_MethodInfo;
extern MethodInfo SimpleJson_ParseString_m3071_MethodInfo;
extern MethodInfo IDictionary_2_set_Item_m3465_MethodInfo;
extern MethodInfo List_1_Add_m3466_MethodInfo;
extern MethodInfo SimpleJson_ParseNumber_m3073_MethodInfo;
extern MethodInfo SimpleJson_ParseObject_m3068_MethodInfo;
extern MethodInfo SimpleJson_ParseArray_m3069_MethodInfo;
extern MethodInfo SimpleJson_EatWhitespace_m3075_MethodInfo;
extern MethodInfo StringBuilder_Append_m1673_MethodInfo;
extern MethodInfo String__ctor_m3467_MethodInfo;
extern MethodInfo CultureInfo_get_InvariantCulture_m3468_MethodInfo;
extern MethodInfo UInt32_TryParse_m3469_MethodInfo;
extern MethodInfo SimpleJson_ConvertFromUtf32_m3072_MethodInfo;
extern MethodInfo StringBuilder_Append_m3470_MethodInfo;
extern MethodInfo ArgumentOutOfRangeException__ctor_m3471_MethodInfo;
extern MethodInfo String__ctor_m1683_MethodInfo;
extern MethodInfo String__ctor_m3472_MethodInfo;
extern MethodInfo SimpleJson_GetLastIndexOfNumber_m3074_MethodInfo;
extern MethodInfo String_IndexOf_m3374_MethodInfo;
extern MethodInfo Double_TryParse_m3473_MethodInfo;
extern MethodInfo Int64_TryParse_m3474_MethodInfo;
extern MethodInfo String_IndexOf_m1719_MethodInfo;
extern MethodInfo SimpleJson_SerializeString_m3081_MethodInfo;
extern MethodInfo IDictionary_2_get_Keys_m3475_MethodInfo;
extern MethodInfo IDictionary_2_get_Values_m3476_MethodInfo;
extern MethodInfo SimpleJson_SerializeObject_m3079_MethodInfo;
extern MethodInfo IDictionary_2_get_Keys_m3477_MethodInfo;
extern MethodInfo IDictionary_2_get_Values_m3478_MethodInfo;
extern MethodInfo SimpleJson_SerializeArray_m3080_MethodInfo;
extern MethodInfo SimpleJson_IsNumeric_m3083_MethodInfo;
extern MethodInfo SimpleJson_SerializeNumber_m3082_MethodInfo;
extern MethodInfo IJsonSerializerStrategy_TrySerializeNonPrimitiveObject_m3479_MethodInfo;
extern MethodInfo IEnumerable_GetEnumerator_m3480_MethodInfo;
extern MethodInfo IEnumerator_get_Current_m3481_MethodInfo;
extern MethodInfo Int64_ToString_m3482_MethodInfo;
extern MethodInfo UInt64_ToString_m3483_MethodInfo;
extern MethodInfo Int32_ToString_m3484_MethodInfo;
extern MethodInfo UInt32_ToString_m3485_MethodInfo;
extern MethodInfo Decimal_ToString_m3486_MethodInfo;
extern MethodInfo Single_ToString_m3487_MethodInfo;
extern MethodInfo Convert_ToDouble_m3488_MethodInfo;
extern MethodInfo Double_ToString_m3489_MethodInfo;
extern Il2CppGenericMethod IDictionary_2_set_Item_m3465_GenericMethod;
extern Il2CppGenericMethod List_1_Add_m3466_GenericMethod;
extern Il2CppGenericMethod IDictionary_2_get_Keys_m3475_GenericMethod;
extern Il2CppGenericMethod IDictionary_2_get_Values_m3476_GenericMethod;
extern Il2CppGenericMethod IDictionary_2_get_Keys_m3477_GenericMethod;
extern Il2CppGenericMethod IDictionary_2_get_Values_m3478_GenericMethod;


// System.Boolean SimpleJson.SimpleJson::TryDeserializeObject(System.String,System.Object&)
extern MethodInfo SimpleJson_TryDeserializeObject_m3065_MethodInfo;
extern "C" bool SimpleJson_TryDeserializeObject_m3065 (Object_t * __this /* static, unused */, String_t* ___json, Object_t ** ___obj, MethodInfo* method)
{
	bool V_0 = false;
	CharU5BU5D_t179* V_1 = {0};
	int32_t V_2 = 0;
	{
		V_0 = 1;
		String_t* L_0 = ___json;
		if (!L_0)
		{
			goto IL_0022;
		}
	}
	{
		String_t* L_1 = ___json;
		NullCheck(L_1);
		CharU5BU5D_t179* L_2 = String_ToCharArray_m3463(L_1, /*hidden argument*/&String_ToCharArray_m3463_MethodInfo);
		V_1 = L_2;
		V_2 = 0;
		Object_t ** L_3 = ___obj;
		CharU5BU5D_t179* L_4 = V_1;
		Object_t * L_5 = SimpleJson_ParseValue_m3070(NULL /*static, unused*/, L_4, (&V_2), (&V_0), /*hidden argument*/&SimpleJson_ParseValue_m3070_MethodInfo);
		*((Object_t **)(L_3)) = (Object_t *)L_5;
		goto IL_0025;
	}

IL_0022:
	{
		Object_t ** L_6 = ___obj;
		*((Object_t **)(L_6)) = (Object_t *)NULL;
	}

IL_0025:
	{
		bool L_7 = V_0;
		return L_7;
	}
}
// System.String SimpleJson.SimpleJson::SerializeObject(System.Object,SimpleJson.IJsonSerializerStrategy)
extern "C" String_t* SimpleJson_SerializeObject_m3066 (Object_t * __this /* static, unused */, Object_t * ___json, Object_t * ___jsonSerializerStrategy, MethodInfo* method)
{
	StringBuilder_t265 * V_0 = {0};
	bool V_1 = false;
	String_t* G_B3_0 = {0};
	{
		StringBuilder_t265 * L_0 = (StringBuilder_t265 *)il2cpp_codegen_object_new (InitializedTypeInfo(&StringBuilder_t265_il2cpp_TypeInfo));
		StringBuilder__ctor_m3464(L_0, ((int32_t)2000), /*hidden argument*/&StringBuilder__ctor_m3464_MethodInfo);
		V_0 = L_0;
		Object_t * L_1 = ___jsonSerializerStrategy;
		Object_t * L_2 = ___json;
		StringBuilder_t265 * L_3 = V_0;
		bool L_4 = SimpleJson_SerializeValue_m3078(NULL /*static, unused*/, L_1, L_2, L_3, /*hidden argument*/&SimpleJson_SerializeValue_m3078_MethodInfo);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0025;
		}
	}
	{
		StringBuilder_t265 * L_6 = V_0;
		NullCheck(L_6);
		String_t* L_7 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&StringBuilder_ToString_m1281_MethodInfo, L_6);
		G_B3_0 = L_7;
		goto IL_0026;
	}

IL_0025:
	{
		G_B3_0 = ((String_t*)(NULL));
	}

IL_0026:
	{
		return G_B3_0;
	}
}
// System.String SimpleJson.SimpleJson::SerializeObject(System.Object)
extern "C" String_t* SimpleJson_SerializeObject_m3067 (Object_t * __this /* static, unused */, Object_t * ___json, MethodInfo* method)
{
	{
		Object_t * L_0 = ___json;
		Object_t * L_1 = SimpleJson_get_CurrentJsonSerializerStrategy_m3084(NULL /*static, unused*/, /*hidden argument*/&SimpleJson_get_CurrentJsonSerializerStrategy_m3084_MethodInfo);
		String_t* L_2 = SimpleJson_SerializeObject_m3066(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&SimpleJson_SerializeObject_m3066_MethodInfo);
		return L_2;
	}
}
// System.Collections.Generic.IDictionary`2<System.String,System.Object> SimpleJson.SimpleJson::ParseObject(System.Char[],System.Int32&,System.Boolean&)
extern MethodInfo* IDictionary_2_set_Item_m3465_MethodInfo_var;
extern "C" Object_t* SimpleJson_ParseObject_m3068 (Object_t * __this /* static, unused */, CharU5BU5D_t179* ___json, int32_t* ___index, bool* ___success, MethodInfo* method)
{
	static bool SimpleJson_ParseObject_m3068_init;
	if (!SimpleJson_ParseObject_m3068_init)
	{
		IDictionary_2_set_Item_m3465_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&IDictionary_2_set_Item_m3465_GenericMethod);
		SimpleJson_ParseObject_m3068_init = true;
	}
	Object_t* V_0 = {0};
	int32_t V_1 = 0;
	bool V_2 = false;
	String_t* V_3 = {0};
	Object_t * V_4 = {0};
	{
		JsonObject_t594 * L_0 = (JsonObject_t594 *)il2cpp_codegen_object_new (InitializedTypeInfo(&JsonObject_t594_il2cpp_TypeInfo));
		JsonObject__ctor_m3047(L_0, /*hidden argument*/&JsonObject__ctor_m3047_MethodInfo);
		V_0 = L_0;
		CharU5BU5D_t179* L_1 = ___json;
		int32_t* L_2 = ___index;
		SimpleJson_NextToken_m3077(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/&SimpleJson_NextToken_m3077_MethodInfo);
		V_2 = 0;
		goto IL_0096;
	}

IL_0015:
	{
		CharU5BU5D_t179* L_3 = ___json;
		int32_t* L_4 = ___index;
		int32_t L_5 = SimpleJson_LookAhead_m3076(NULL /*static, unused*/, L_3, (*((int32_t*)L_4)), /*hidden argument*/&SimpleJson_LookAhead_m3076_MethodInfo);
		V_1 = L_5;
		int32_t L_6 = V_1;
		if (L_6)
		{
			goto IL_0029;
		}
	}
	{
		bool* L_7 = ___success;
		*((int8_t*)(L_7)) = (int8_t)0;
		return (Object_t*)NULL;
	}

IL_0029:
	{
		int32_t L_8 = V_1;
		if ((!(((uint32_t)L_8) == ((uint32_t)6))))
		{
			goto IL_003d;
		}
	}
	{
		CharU5BU5D_t179* L_9 = ___json;
		int32_t* L_10 = ___index;
		SimpleJson_NextToken_m3077(NULL /*static, unused*/, L_9, L_10, /*hidden argument*/&SimpleJson_NextToken_m3077_MethodInfo);
		goto IL_0096;
	}

IL_003d:
	{
		int32_t L_11 = V_1;
		if ((!(((uint32_t)L_11) == ((uint32_t)2))))
		{
			goto IL_004e;
		}
	}
	{
		CharU5BU5D_t179* L_12 = ___json;
		int32_t* L_13 = ___index;
		SimpleJson_NextToken_m3077(NULL /*static, unused*/, L_12, L_13, /*hidden argument*/&SimpleJson_NextToken_m3077_MethodInfo);
		Object_t* L_14 = V_0;
		return L_14;
	}

IL_004e:
	{
		CharU5BU5D_t179* L_15 = ___json;
		int32_t* L_16 = ___index;
		bool* L_17 = ___success;
		String_t* L_18 = SimpleJson_ParseString_m3071(NULL /*static, unused*/, L_15, L_16, L_17, /*hidden argument*/&SimpleJson_ParseString_m3071_MethodInfo);
		V_3 = L_18;
		bool* L_19 = ___success;
		if ((*((int8_t*)L_19)))
		{
			goto IL_0063;
		}
	}
	{
		bool* L_20 = ___success;
		*((int8_t*)(L_20)) = (int8_t)0;
		return (Object_t*)NULL;
	}

IL_0063:
	{
		CharU5BU5D_t179* L_21 = ___json;
		int32_t* L_22 = ___index;
		int32_t L_23 = SimpleJson_NextToken_m3077(NULL /*static, unused*/, L_21, L_22, /*hidden argument*/&SimpleJson_NextToken_m3077_MethodInfo);
		V_1 = L_23;
		int32_t L_24 = V_1;
		if ((((int32_t)L_24) == ((int32_t)5)))
		{
			goto IL_0077;
		}
	}
	{
		bool* L_25 = ___success;
		*((int8_t*)(L_25)) = (int8_t)0;
		return (Object_t*)NULL;
	}

IL_0077:
	{
		CharU5BU5D_t179* L_26 = ___json;
		int32_t* L_27 = ___index;
		bool* L_28 = ___success;
		Object_t * L_29 = SimpleJson_ParseValue_m3070(NULL /*static, unused*/, L_26, L_27, L_28, /*hidden argument*/&SimpleJson_ParseValue_m3070_MethodInfo);
		V_4 = L_29;
		bool* L_30 = ___success;
		if ((*((int8_t*)L_30)))
		{
			goto IL_008d;
		}
	}
	{
		bool* L_31 = ___success;
		*((int8_t*)(L_31)) = (int8_t)0;
		return (Object_t*)NULL;
	}

IL_008d:
	{
		Object_t* L_32 = V_0;
		String_t* L_33 = V_3;
		Object_t * L_34 = V_4;
		NullCheck(L_32);
		InterfaceActionInvoker2< String_t*, Object_t * >::Invoke(IDictionary_2_set_Item_m3465_MethodInfo_var, L_32, L_33, L_34);
	}

IL_0096:
	{
		bool L_35 = V_2;
		if (!L_35)
		{
			goto IL_0015;
		}
	}
	{
		Object_t* L_36 = V_0;
		return L_36;
	}
}
// SimpleJson.JsonArray SimpleJson.SimpleJson::ParseArray(System.Char[],System.Int32&,System.Boolean&)
extern MethodInfo* List_1_Add_m3466_MethodInfo_var;
extern "C" JsonArray_t592 * SimpleJson_ParseArray_m3069 (Object_t * __this /* static, unused */, CharU5BU5D_t179* ___json, int32_t* ___index, bool* ___success, MethodInfo* method)
{
	static bool SimpleJson_ParseArray_m3069_init;
	if (!SimpleJson_ParseArray_m3069_init)
	{
		List_1_Add_m3466_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1_Add_m3466_GenericMethod);
		SimpleJson_ParseArray_m3069_init = true;
	}
	JsonArray_t592 * V_0 = {0};
	bool V_1 = false;
	int32_t V_2 = 0;
	Object_t * V_3 = {0};
	{
		JsonArray_t592 * L_0 = (JsonArray_t592 *)il2cpp_codegen_object_new (InitializedTypeInfo(&JsonArray_t592_il2cpp_TypeInfo));
		JsonArray__ctor_m3045(L_0, /*hidden argument*/&JsonArray__ctor_m3045_MethodInfo);
		V_0 = L_0;
		CharU5BU5D_t179* L_1 = ___json;
		int32_t* L_2 = ___index;
		SimpleJson_NextToken_m3077(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/&SimpleJson_NextToken_m3077_MethodInfo);
		V_1 = 0;
		goto IL_006a;
	}

IL_0015:
	{
		CharU5BU5D_t179* L_3 = ___json;
		int32_t* L_4 = ___index;
		int32_t L_5 = SimpleJson_LookAhead_m3076(NULL /*static, unused*/, L_3, (*((int32_t*)L_4)), /*hidden argument*/&SimpleJson_LookAhead_m3076_MethodInfo);
		V_2 = L_5;
		int32_t L_6 = V_2;
		if (L_6)
		{
			goto IL_0029;
		}
	}
	{
		bool* L_7 = ___success;
		*((int8_t*)(L_7)) = (int8_t)0;
		return (JsonArray_t592 *)NULL;
	}

IL_0029:
	{
		int32_t L_8 = V_2;
		if ((!(((uint32_t)L_8) == ((uint32_t)6))))
		{
			goto IL_003d;
		}
	}
	{
		CharU5BU5D_t179* L_9 = ___json;
		int32_t* L_10 = ___index;
		SimpleJson_NextToken_m3077(NULL /*static, unused*/, L_9, L_10, /*hidden argument*/&SimpleJson_NextToken_m3077_MethodInfo);
		goto IL_006a;
	}

IL_003d:
	{
		int32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) == ((uint32_t)4))))
		{
			goto IL_0051;
		}
	}
	{
		CharU5BU5D_t179* L_12 = ___json;
		int32_t* L_13 = ___index;
		SimpleJson_NextToken_m3077(NULL /*static, unused*/, L_12, L_13, /*hidden argument*/&SimpleJson_NextToken_m3077_MethodInfo);
		goto IL_0070;
	}

IL_0051:
	{
		CharU5BU5D_t179* L_14 = ___json;
		int32_t* L_15 = ___index;
		bool* L_16 = ___success;
		Object_t * L_17 = SimpleJson_ParseValue_m3070(NULL /*static, unused*/, L_14, L_15, L_16, /*hidden argument*/&SimpleJson_ParseValue_m3070_MethodInfo);
		V_3 = L_17;
		bool* L_18 = ___success;
		if ((*((int8_t*)L_18)))
		{
			goto IL_0063;
		}
	}
	{
		return (JsonArray_t592 *)NULL;
	}

IL_0063:
	{
		JsonArray_t592 * L_19 = V_0;
		Object_t * L_20 = V_3;
		NullCheck(L_19);
		VirtActionInvoker1< Object_t * >::Invoke(List_1_Add_m3466_MethodInfo_var, L_19, L_20);
	}

IL_006a:
	{
		bool L_21 = V_1;
		if (!L_21)
		{
			goto IL_0015;
		}
	}

IL_0070:
	{
		JsonArray_t592 * L_22 = V_0;
		return L_22;
	}
}
// System.Object SimpleJson.SimpleJson::ParseValue(System.Char[],System.Int32&,System.Boolean&)
extern "C" Object_t * SimpleJson_ParseValue_m3070 (Object_t * __this /* static, unused */, CharU5BU5D_t179* ___json, int32_t* ___index, bool* ___success, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		CharU5BU5D_t179* L_0 = ___json;
		int32_t* L_1 = ___index;
		int32_t L_2 = SimpleJson_LookAhead_m3076(NULL /*static, unused*/, L_0, (*((int32_t*)L_1)), /*hidden argument*/&SimpleJson_LookAhead_m3076_MethodInfo);
		V_0 = L_2;
		int32_t L_3 = V_0;
		if (L_3 == 0)
		{
			goto IL_0090;
		}
		if (L_3 == 1)
		{
			goto IL_0056;
		}
		if (L_3 == 2)
		{
			goto IL_0095;
		}
		if (L_3 == 3)
		{
			goto IL_005f;
		}
		if (L_3 == 4)
		{
			goto IL_0095;
		}
		if (L_3 == 5)
		{
			goto IL_0095;
		}
		if (L_3 == 6)
		{
			goto IL_0095;
		}
		if (L_3 == 7)
		{
			goto IL_0044;
		}
		if (L_3 == 8)
		{
			goto IL_004d;
		}
		if (L_3 == 9)
		{
			goto IL_0068;
		}
		if (L_3 == 10)
		{
			goto IL_0077;
		}
		if (L_3 == 11)
		{
			goto IL_0086;
		}
	}
	{
		goto IL_0095;
	}

IL_0044:
	{
		CharU5BU5D_t179* L_4 = ___json;
		int32_t* L_5 = ___index;
		bool* L_6 = ___success;
		String_t* L_7 = SimpleJson_ParseString_m3071(NULL /*static, unused*/, L_4, L_5, L_6, /*hidden argument*/&SimpleJson_ParseString_m3071_MethodInfo);
		return L_7;
	}

IL_004d:
	{
		CharU5BU5D_t179* L_8 = ___json;
		int32_t* L_9 = ___index;
		bool* L_10 = ___success;
		Object_t * L_11 = SimpleJson_ParseNumber_m3073(NULL /*static, unused*/, L_8, L_9, L_10, /*hidden argument*/&SimpleJson_ParseNumber_m3073_MethodInfo);
		return L_11;
	}

IL_0056:
	{
		CharU5BU5D_t179* L_12 = ___json;
		int32_t* L_13 = ___index;
		bool* L_14 = ___success;
		Object_t* L_15 = SimpleJson_ParseObject_m3068(NULL /*static, unused*/, L_12, L_13, L_14, /*hidden argument*/&SimpleJson_ParseObject_m3068_MethodInfo);
		return L_15;
	}

IL_005f:
	{
		CharU5BU5D_t179* L_16 = ___json;
		int32_t* L_17 = ___index;
		bool* L_18 = ___success;
		JsonArray_t592 * L_19 = SimpleJson_ParseArray_m3069(NULL /*static, unused*/, L_16, L_17, L_18, /*hidden argument*/&SimpleJson_ParseArray_m3069_MethodInfo);
		return L_19;
	}

IL_0068:
	{
		CharU5BU5D_t179* L_20 = ___json;
		int32_t* L_21 = ___index;
		SimpleJson_NextToken_m3077(NULL /*static, unused*/, L_20, L_21, /*hidden argument*/&SimpleJson_NextToken_m3077_MethodInfo);
		bool L_22 = 1;
		Object_t * L_23 = Box(InitializedTypeInfo(&Boolean_t13_il2cpp_TypeInfo), &L_22);
		return L_23;
	}

IL_0077:
	{
		CharU5BU5D_t179* L_24 = ___json;
		int32_t* L_25 = ___index;
		SimpleJson_NextToken_m3077(NULL /*static, unused*/, L_24, L_25, /*hidden argument*/&SimpleJson_NextToken_m3077_MethodInfo);
		bool L_26 = 0;
		Object_t * L_27 = Box(InitializedTypeInfo(&Boolean_t13_il2cpp_TypeInfo), &L_26);
		return L_27;
	}

IL_0086:
	{
		CharU5BU5D_t179* L_28 = ___json;
		int32_t* L_29 = ___index;
		SimpleJson_NextToken_m3077(NULL /*static, unused*/, L_28, L_29, /*hidden argument*/&SimpleJson_NextToken_m3077_MethodInfo);
		return NULL;
	}

IL_0090:
	{
		goto IL_0095;
	}

IL_0095:
	{
		bool* L_30 = ___success;
		*((int8_t*)(L_30)) = (int8_t)0;
		return NULL;
	}
}
// System.String SimpleJson.SimpleJson::ParseString(System.Char[],System.Int32&,System.Boolean&)
extern "C" String_t* SimpleJson_ParseString_m3071 (Object_t * __this /* static, unused */, CharU5BU5D_t179* ___json, int32_t* ___index, bool* ___success, MethodInfo* method)
{
	StringBuilder_t265 * V_0 = {0};
	uint16_t V_1 = 0x0;
	bool V_2 = false;
	int32_t V_3 = 0;
	uint32_t V_4 = 0;
	uint32_t V_5 = 0;
	int32_t V_6 = 0;
	bool V_7 = false;
	{
		StringBuilder_t265 * L_0 = (StringBuilder_t265 *)il2cpp_codegen_object_new (InitializedTypeInfo(&StringBuilder_t265_il2cpp_TypeInfo));
		StringBuilder__ctor_m3464(L_0, ((int32_t)2000), /*hidden argument*/&StringBuilder__ctor_m3464_MethodInfo);
		V_0 = L_0;
		CharU5BU5D_t179* L_1 = ___json;
		int32_t* L_2 = ___index;
		SimpleJson_EatWhitespace_m3075(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/&SimpleJson_EatWhitespace_m3075_MethodInfo);
		CharU5BU5D_t179* L_3 = ___json;
		int32_t* L_4 = ___index;
		int32_t* L_5 = ___index;
		int32_t L_6 = (*((int32_t*)L_5));
		V_6 = L_6;
		*((int32_t*)(L_4)) = (int32_t)((int32_t)((int32_t)L_6+(int32_t)1));
		int32_t L_7 = V_6;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_7);
		int32_t L_8 = L_7;
		V_1 = (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_3, L_8));
		V_2 = 0;
		goto IL_0239;
	}

IL_0027:
	{
		int32_t* L_9 = ___index;
		CharU5BU5D_t179* L_10 = ___json;
		NullCheck(L_10);
		if ((!(((uint32_t)(*((int32_t*)L_9))) == ((uint32_t)(((int32_t)(((Array_t *)L_10)->max_length)))))))
		{
			goto IL_0036;
		}
	}
	{
		goto IL_023f;
	}

IL_0036:
	{
		CharU5BU5D_t179* L_11 = ___json;
		int32_t* L_12 = ___index;
		int32_t* L_13 = ___index;
		int32_t L_14 = (*((int32_t*)L_13));
		V_6 = L_14;
		*((int32_t*)(L_12)) = (int32_t)((int32_t)((int32_t)L_14+(int32_t)1));
		int32_t L_15 = V_6;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, L_15);
		int32_t L_16 = L_15;
		V_1 = (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_11, L_16));
		uint16_t L_17 = V_1;
		if ((!(((uint32_t)L_17) == ((uint32_t)((int32_t)34)))))
		{
			goto IL_0053;
		}
	}
	{
		V_2 = 1;
		goto IL_023f;
	}

IL_0053:
	{
		uint16_t L_18 = V_1;
		if ((!(((uint32_t)L_18) == ((uint32_t)((int32_t)92)))))
		{
			goto IL_0231;
		}
	}
	{
		int32_t* L_19 = ___index;
		CharU5BU5D_t179* L_20 = ___json;
		NullCheck(L_20);
		if ((!(((uint32_t)(*((int32_t*)L_19))) == ((uint32_t)(((int32_t)(((Array_t *)L_20)->max_length)))))))
		{
			goto IL_006a;
		}
	}
	{
		goto IL_023f;
	}

IL_006a:
	{
		CharU5BU5D_t179* L_21 = ___json;
		int32_t* L_22 = ___index;
		int32_t* L_23 = ___index;
		int32_t L_24 = (*((int32_t*)L_23));
		V_6 = L_24;
		*((int32_t*)(L_22)) = (int32_t)((int32_t)((int32_t)L_24+(int32_t)1));
		int32_t L_25 = V_6;
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, L_25);
		int32_t L_26 = L_25;
		V_1 = (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_21, L_26));
		uint16_t L_27 = V_1;
		if ((!(((uint32_t)L_27) == ((uint32_t)((int32_t)34)))))
		{
			goto IL_008e;
		}
	}
	{
		StringBuilder_t265 * L_28 = V_0;
		NullCheck(L_28);
		StringBuilder_Append_m1673(L_28, ((int32_t)34), /*hidden argument*/&StringBuilder_Append_m1673_MethodInfo);
		goto IL_022c;
	}

IL_008e:
	{
		uint16_t L_29 = V_1;
		if ((!(((uint32_t)L_29) == ((uint32_t)((int32_t)92)))))
		{
			goto IL_00a4;
		}
	}
	{
		StringBuilder_t265 * L_30 = V_0;
		NullCheck(L_30);
		StringBuilder_Append_m1673(L_30, ((int32_t)92), /*hidden argument*/&StringBuilder_Append_m1673_MethodInfo);
		goto IL_022c;
	}

IL_00a4:
	{
		uint16_t L_31 = V_1;
		if ((!(((uint32_t)L_31) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_00ba;
		}
	}
	{
		StringBuilder_t265 * L_32 = V_0;
		NullCheck(L_32);
		StringBuilder_Append_m1673(L_32, ((int32_t)47), /*hidden argument*/&StringBuilder_Append_m1673_MethodInfo);
		goto IL_022c;
	}

IL_00ba:
	{
		uint16_t L_33 = V_1;
		if ((!(((uint32_t)L_33) == ((uint32_t)((int32_t)98)))))
		{
			goto IL_00cf;
		}
	}
	{
		StringBuilder_t265 * L_34 = V_0;
		NullCheck(L_34);
		StringBuilder_Append_m1673(L_34, 8, /*hidden argument*/&StringBuilder_Append_m1673_MethodInfo);
		goto IL_022c;
	}

IL_00cf:
	{
		uint16_t L_35 = V_1;
		if ((!(((uint32_t)L_35) == ((uint32_t)((int32_t)102)))))
		{
			goto IL_00e5;
		}
	}
	{
		StringBuilder_t265 * L_36 = V_0;
		NullCheck(L_36);
		StringBuilder_Append_m1673(L_36, ((int32_t)12), /*hidden argument*/&StringBuilder_Append_m1673_MethodInfo);
		goto IL_022c;
	}

IL_00e5:
	{
		uint16_t L_37 = V_1;
		if ((!(((uint32_t)L_37) == ((uint32_t)((int32_t)110)))))
		{
			goto IL_00fb;
		}
	}
	{
		StringBuilder_t265 * L_38 = V_0;
		NullCheck(L_38);
		StringBuilder_Append_m1673(L_38, ((int32_t)10), /*hidden argument*/&StringBuilder_Append_m1673_MethodInfo);
		goto IL_022c;
	}

IL_00fb:
	{
		uint16_t L_39 = V_1;
		if ((!(((uint32_t)L_39) == ((uint32_t)((int32_t)114)))))
		{
			goto IL_0111;
		}
	}
	{
		StringBuilder_t265 * L_40 = V_0;
		NullCheck(L_40);
		StringBuilder_Append_m1673(L_40, ((int32_t)13), /*hidden argument*/&StringBuilder_Append_m1673_MethodInfo);
		goto IL_022c;
	}

IL_0111:
	{
		uint16_t L_41 = V_1;
		if ((!(((uint32_t)L_41) == ((uint32_t)((int32_t)116)))))
		{
			goto IL_0127;
		}
	}
	{
		StringBuilder_t265 * L_42 = V_0;
		NullCheck(L_42);
		StringBuilder_Append_m1673(L_42, ((int32_t)9), /*hidden argument*/&StringBuilder_Append_m1673_MethodInfo);
		goto IL_022c;
	}

IL_0127:
	{
		uint16_t L_43 = V_1;
		if ((!(((uint32_t)L_43) == ((uint32_t)((int32_t)117)))))
		{
			goto IL_022c;
		}
	}
	{
		CharU5BU5D_t179* L_44 = ___json;
		NullCheck(L_44);
		int32_t* L_45 = ___index;
		V_3 = ((int32_t)((int32_t)(((int32_t)(((Array_t *)L_44)->max_length)))-(int32_t)(*((int32_t*)L_45))));
		int32_t L_46 = V_3;
		if ((((int32_t)L_46) < ((int32_t)4)))
		{
			goto IL_0227;
		}
	}
	{
		bool* L_47 = ___success;
		CharU5BU5D_t179* L_48 = ___json;
		int32_t* L_49 = ___index;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_50 = (String_t*)il2cpp_codegen_object_new ((&String_t_il2cpp_TypeInfo));
		L_50 = String_CreateString_m3490(L_50, L_48, (*((int32_t*)L_49)), 4, /*hidden argument*/&String__ctor_m3467_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CultureInfo_t702_il2cpp_TypeInfo));
		CultureInfo_t702 * L_51 = CultureInfo_get_InvariantCulture_m3468(NULL /*static, unused*/, /*hidden argument*/&CultureInfo_get_InvariantCulture_m3468_MethodInfo);
		bool L_52 = UInt32_TryParse_m3469(NULL /*static, unused*/, L_50, ((int32_t)515), L_51, (&V_4), /*hidden argument*/&UInt32_TryParse_m3469_MethodInfo);
		bool L_53 = L_52;
		V_7 = L_53;
		*((int8_t*)(L_47)) = (int8_t)L_53;
		bool L_54 = V_7;
		if (L_54)
		{
			goto IL_0169;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_55 = ((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2;
		return L_55;
	}

IL_0169:
	{
		uint32_t L_56 = V_4;
		if ((!(((uint32_t)((int32_t)55296)) <= ((uint32_t)L_56))))
		{
			goto IL_020e;
		}
	}
	{
		uint32_t L_57 = V_4;
		if ((!(((uint32_t)L_57) <= ((uint32_t)((int32_t)56319)))))
		{
			goto IL_020e;
		}
	}
	{
		int32_t* L_58 = ___index;
		int32_t* L_59 = ___index;
		*((int32_t*)(L_58)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_59))+(int32_t)4));
		CharU5BU5D_t179* L_60 = ___json;
		NullCheck(L_60);
		int32_t* L_61 = ___index;
		V_3 = ((int32_t)((int32_t)(((int32_t)(((Array_t *)L_60)->max_length)))-(int32_t)(*((int32_t*)L_61))));
		int32_t L_62 = V_3;
		if ((((int32_t)L_62) < ((int32_t)6)))
		{
			goto IL_0205;
		}
	}
	{
		CharU5BU5D_t179* L_63 = ___json;
		int32_t* L_64 = ___index;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_65 = (String_t*)il2cpp_codegen_object_new ((&String_t_il2cpp_TypeInfo));
		L_65 = String_CreateString_m3490(L_65, L_63, (*((int32_t*)L_64)), 2, /*hidden argument*/&String__ctor_m3467_MethodInfo);
		bool L_66 = String_op_Equality_m1635(NULL /*static, unused*/, L_65, (String_t*) &_stringLiteral253, /*hidden argument*/&String_op_Equality_m1635_MethodInfo);
		if (!L_66)
		{
			goto IL_0205;
		}
	}
	{
		CharU5BU5D_t179* L_67 = ___json;
		int32_t* L_68 = ___index;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_69 = (String_t*)il2cpp_codegen_object_new ((&String_t_il2cpp_TypeInfo));
		L_69 = String_CreateString_m3490(L_69, L_67, ((int32_t)((int32_t)(*((int32_t*)L_68))+(int32_t)2)), 4, /*hidden argument*/&String__ctor_m3467_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CultureInfo_t702_il2cpp_TypeInfo));
		CultureInfo_t702 * L_70 = CultureInfo_get_InvariantCulture_m3468(NULL /*static, unused*/, /*hidden argument*/&CultureInfo_get_InvariantCulture_m3468_MethodInfo);
		bool L_71 = UInt32_TryParse_m3469(NULL /*static, unused*/, L_69, ((int32_t)515), L_70, (&V_5), /*hidden argument*/&UInt32_TryParse_m3469_MethodInfo);
		if (!L_71)
		{
			goto IL_0205;
		}
	}
	{
		uint32_t L_72 = V_5;
		if ((!(((uint32_t)((int32_t)56320)) <= ((uint32_t)L_72))))
		{
			goto IL_0205;
		}
	}
	{
		uint32_t L_73 = V_5;
		if ((!(((uint32_t)L_73) <= ((uint32_t)((int32_t)57343)))))
		{
			goto IL_0205;
		}
	}
	{
		StringBuilder_t265 * L_74 = V_0;
		uint32_t L_75 = V_4;
		NullCheck(L_74);
		StringBuilder_Append_m1673(L_74, (((uint16_t)L_75)), /*hidden argument*/&StringBuilder_Append_m1673_MethodInfo);
		StringBuilder_t265 * L_76 = V_0;
		uint32_t L_77 = V_5;
		NullCheck(L_76);
		StringBuilder_Append_m1673(L_76, (((uint16_t)L_77)), /*hidden argument*/&StringBuilder_Append_m1673_MethodInfo);
		int32_t* L_78 = ___index;
		int32_t* L_79 = ___index;
		*((int32_t*)(L_78)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_79))+(int32_t)6));
		goto IL_0239;
	}

IL_0205:
	{
		bool* L_80 = ___success;
		*((int8_t*)(L_80)) = (int8_t)0;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_81 = ((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2;
		return L_81;
	}

IL_020e:
	{
		StringBuilder_t265 * L_82 = V_0;
		uint32_t L_83 = V_4;
		String_t* L_84 = SimpleJson_ConvertFromUtf32_m3072(NULL /*static, unused*/, L_83, /*hidden argument*/&SimpleJson_ConvertFromUtf32_m3072_MethodInfo);
		NullCheck(L_82);
		StringBuilder_Append_m3470(L_82, L_84, /*hidden argument*/&StringBuilder_Append_m3470_MethodInfo);
		int32_t* L_85 = ___index;
		int32_t* L_86 = ___index;
		*((int32_t*)(L_85)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_86))+(int32_t)4));
		goto IL_022c;
	}

IL_0227:
	{
		goto IL_023f;
	}

IL_022c:
	{
		goto IL_0239;
	}

IL_0231:
	{
		StringBuilder_t265 * L_87 = V_0;
		uint16_t L_88 = V_1;
		NullCheck(L_87);
		StringBuilder_Append_m1673(L_87, L_88, /*hidden argument*/&StringBuilder_Append_m1673_MethodInfo);
	}

IL_0239:
	{
		bool L_89 = V_2;
		if (!L_89)
		{
			goto IL_0027;
		}
	}

IL_023f:
	{
		bool L_90 = V_2;
		if (L_90)
		{
			goto IL_024a;
		}
	}
	{
		bool* L_91 = ___success;
		*((int8_t*)(L_91)) = (int8_t)0;
		return (String_t*)NULL;
	}

IL_024a:
	{
		StringBuilder_t265 * L_92 = V_0;
		NullCheck(L_92);
		String_t* L_93 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&StringBuilder_ToString_m1281_MethodInfo, L_92);
		return L_93;
	}
}
// System.String SimpleJson.SimpleJson::ConvertFromUtf32(System.Int32)
extern TypeInfo* CharU5BU5D_t179_il2cpp_TypeInfo_var;
extern "C" String_t* SimpleJson_ConvertFromUtf32_m3072 (Object_t * __this /* static, unused */, int32_t ___utf32, MethodInfo* method)
{
	static bool SimpleJson_ConvertFromUtf32_m3072_init;
	if (!SimpleJson_ConvertFromUtf32_m3072_init)
	{
		CharU5BU5D_t179_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&CharU5BU5D_t179_0_0_0);
		SimpleJson_ConvertFromUtf32_m3072_init = true;
	}
	{
		int32_t L_0 = ___utf32;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_1 = ___utf32;
		if ((((int32_t)L_1) <= ((int32_t)((int32_t)1114111))))
		{
			goto IL_0022;
		}
	}

IL_0012:
	{
		ArgumentOutOfRangeException_t703 * L_2 = (ArgumentOutOfRangeException_t703 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentOutOfRangeException_t703_il2cpp_TypeInfo));
		ArgumentOutOfRangeException__ctor_m3471(L_2, (String_t*) &_stringLiteral254, (String_t*) &_stringLiteral255, /*hidden argument*/&ArgumentOutOfRangeException__ctor_m3471_MethodInfo);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0022:
	{
		int32_t L_3 = ___utf32;
		if ((((int32_t)((int32_t)55296)) > ((int32_t)L_3)))
		{
			goto IL_0048;
		}
	}
	{
		int32_t L_4 = ___utf32;
		if ((((int32_t)L_4) > ((int32_t)((int32_t)57343))))
		{
			goto IL_0048;
		}
	}
	{
		ArgumentOutOfRangeException_t703 * L_5 = (ArgumentOutOfRangeException_t703 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentOutOfRangeException_t703_il2cpp_TypeInfo));
		ArgumentOutOfRangeException__ctor_m3471(L_5, (String_t*) &_stringLiteral254, (String_t*) &_stringLiteral256, /*hidden argument*/&ArgumentOutOfRangeException__ctor_m3471_MethodInfo);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0048:
	{
		int32_t L_6 = ___utf32;
		if ((((int32_t)L_6) >= ((int32_t)((int32_t)65536))))
		{
			goto IL_005c;
		}
	}
	{
		int32_t L_7 = ___utf32;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_8 = (String_t*)il2cpp_codegen_object_new ((&String_t_il2cpp_TypeInfo));
		L_8 = String_CreateString_m1741(L_8, (((uint16_t)L_7)), 1, /*hidden argument*/&String__ctor_m1683_MethodInfo);
		return L_8;
	}

IL_005c:
	{
		int32_t L_9 = ___utf32;
		___utf32 = ((int32_t)((int32_t)L_9-(int32_t)((int32_t)65536)));
		CharU5BU5D_t179* L_10 = ((CharU5BU5D_t179*)SZArrayNew(CharU5BU5D_t179_il2cpp_TypeInfo_var, 2));
		int32_t L_11 = ___utf32;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 0);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_10, 0)) = (uint16_t)(((uint16_t)((int32_t)((int32_t)((int32_t)((int32_t)L_11>>(int32_t)((int32_t)10)))+(int32_t)((int32_t)55296)))));
		CharU5BU5D_t179* L_12 = L_10;
		int32_t L_13 = ___utf32;
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 1);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_12, 1)) = (uint16_t)(((uint16_t)((int32_t)((int32_t)((int32_t)((int32_t)L_13%(int32_t)((int32_t)1024)))+(int32_t)((int32_t)56320)))));
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_14 = (String_t*)il2cpp_codegen_object_new ((&String_t_il2cpp_TypeInfo));
		L_14 = String_CreateString_m3491(L_14, L_12, /*hidden argument*/&String__ctor_m3472_MethodInfo);
		return L_14;
	}
}
// System.Object SimpleJson.SimpleJson::ParseNumber(System.Char[],System.Int32&,System.Boolean&)
extern "C" Object_t * SimpleJson_ParseNumber_m3073 (Object_t * __this /* static, unused */, CharU5BU5D_t179* ___json, int32_t* ___index, bool* ___success, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Object_t * V_2 = {0};
	String_t* V_3 = {0};
	double V_4 = 0.0;
	int64_t V_5 = 0;
	{
		CharU5BU5D_t179* L_0 = ___json;
		int32_t* L_1 = ___index;
		SimpleJson_EatWhitespace_m3075(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&SimpleJson_EatWhitespace_m3075_MethodInfo);
		CharU5BU5D_t179* L_2 = ___json;
		int32_t* L_3 = ___index;
		int32_t L_4 = SimpleJson_GetLastIndexOfNumber_m3074(NULL /*static, unused*/, L_2, (*((int32_t*)L_3)), /*hidden argument*/&SimpleJson_GetLastIndexOfNumber_m3074_MethodInfo);
		V_0 = L_4;
		int32_t L_5 = V_0;
		int32_t* L_6 = ___index;
		V_1 = ((int32_t)((int32_t)((int32_t)((int32_t)L_5-(int32_t)(*((int32_t*)L_6))))+(int32_t)1));
		CharU5BU5D_t179* L_7 = ___json;
		int32_t* L_8 = ___index;
		int32_t L_9 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_10 = (String_t*)il2cpp_codegen_object_new ((&String_t_il2cpp_TypeInfo));
		L_10 = String_CreateString_m3490(L_10, L_7, (*((int32_t*)L_8)), L_9, /*hidden argument*/&String__ctor_m3467_MethodInfo);
		V_3 = L_10;
		String_t* L_11 = V_3;
		NullCheck(L_11);
		int32_t L_12 = String_IndexOf_m3374(L_11, (String_t*) &_stringLiteral55, 5, /*hidden argument*/&String_IndexOf_m3374_MethodInfo);
		if ((!(((uint32_t)L_12) == ((uint32_t)(-1)))))
		{
			goto IL_0045;
		}
	}
	{
		String_t* L_13 = V_3;
		NullCheck(L_13);
		int32_t L_14 = String_IndexOf_m3374(L_13, (String_t*) &_stringLiteral257, 5, /*hidden argument*/&String_IndexOf_m3374_MethodInfo);
		if ((((int32_t)L_14) == ((int32_t)(-1))))
		{
			goto IL_006e;
		}
	}

IL_0045:
	{
		bool* L_15 = ___success;
		CharU5BU5D_t179* L_16 = ___json;
		int32_t* L_17 = ___index;
		int32_t L_18 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_19 = (String_t*)il2cpp_codegen_object_new ((&String_t_il2cpp_TypeInfo));
		L_19 = String_CreateString_m3490(L_19, L_16, (*((int32_t*)L_17)), L_18, /*hidden argument*/&String__ctor_m3467_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CultureInfo_t702_il2cpp_TypeInfo));
		CultureInfo_t702 * L_20 = CultureInfo_get_InvariantCulture_m3468(NULL /*static, unused*/, /*hidden argument*/&CultureInfo_get_InvariantCulture_m3468_MethodInfo);
		bool L_21 = Double_TryParse_m3473(NULL /*static, unused*/, L_19, ((int32_t)511), L_20, (&V_4), /*hidden argument*/&Double_TryParse_m3473_MethodInfo);
		*((int8_t*)(L_15)) = (int8_t)L_21;
		double L_22 = V_4;
		double L_23 = L_22;
		Object_t * L_24 = Box(InitializedTypeInfo(&Double_t704_il2cpp_TypeInfo), &L_23);
		V_2 = L_24;
		goto IL_0092;
	}

IL_006e:
	{
		bool* L_25 = ___success;
		CharU5BU5D_t179* L_26 = ___json;
		int32_t* L_27 = ___index;
		int32_t L_28 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_29 = (String_t*)il2cpp_codegen_object_new ((&String_t_il2cpp_TypeInfo));
		L_29 = String_CreateString_m3490(L_29, L_26, (*((int32_t*)L_27)), L_28, /*hidden argument*/&String__ctor_m3467_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CultureInfo_t702_il2cpp_TypeInfo));
		CultureInfo_t702 * L_30 = CultureInfo_get_InvariantCulture_m3468(NULL /*static, unused*/, /*hidden argument*/&CultureInfo_get_InvariantCulture_m3468_MethodInfo);
		bool L_31 = Int64_TryParse_m3474(NULL /*static, unused*/, L_29, ((int32_t)511), L_30, (&V_5), /*hidden argument*/&Int64_TryParse_m3474_MethodInfo);
		*((int8_t*)(L_25)) = (int8_t)L_31;
		int64_t L_32 = V_5;
		int64_t L_33 = L_32;
		Object_t * L_34 = Box(InitializedTypeInfo(&Int64_t705_il2cpp_TypeInfo), &L_33);
		V_2 = L_34;
	}

IL_0092:
	{
		int32_t* L_35 = ___index;
		int32_t L_36 = V_0;
		*((int32_t*)(L_35)) = (int32_t)((int32_t)((int32_t)L_36+(int32_t)1));
		Object_t * L_37 = V_2;
		return L_37;
	}
}
// System.Int32 SimpleJson.SimpleJson::GetLastIndexOfNumber(System.Char[],System.Int32)
extern "C" int32_t SimpleJson_GetLastIndexOfNumber_m3074 (Object_t * __this /* static, unused */, CharU5BU5D_t179* ___json, int32_t ___index, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___index;
		V_0 = L_0;
		goto IL_0023;
	}

IL_0007:
	{
		CharU5BU5D_t179* L_1 = ___json;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		int32_t L_3 = L_2;
		NullCheck((String_t*) &_stringLiteral258);
		int32_t L_4 = String_IndexOf_m1719((String_t*) &_stringLiteral258, (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_1, L_3)), /*hidden argument*/&String_IndexOf_m1719_MethodInfo);
		if ((!(((uint32_t)L_4) == ((uint32_t)(-1)))))
		{
			goto IL_001f;
		}
	}
	{
		goto IL_002c;
	}

IL_001f:
	{
		int32_t L_5 = V_0;
		V_0 = ((int32_t)((int32_t)L_5+(int32_t)1));
	}

IL_0023:
	{
		int32_t L_6 = V_0;
		CharU5BU5D_t179* L_7 = ___json;
		NullCheck(L_7);
		if ((((int32_t)L_6) < ((int32_t)(((int32_t)(((Array_t *)L_7)->max_length))))))
		{
			goto IL_0007;
		}
	}

IL_002c:
	{
		int32_t L_8 = V_0;
		return ((int32_t)((int32_t)L_8-(int32_t)1));
	}
}
// System.Void SimpleJson.SimpleJson::EatWhitespace(System.Char[],System.Int32&)
extern "C" void SimpleJson_EatWhitespace_m3075 (Object_t * __this /* static, unused */, CharU5BU5D_t179* ___json, int32_t* ___index, MethodInfo* method)
{
	{
		goto IL_0024;
	}

IL_0005:
	{
		CharU5BU5D_t179* L_0 = ___json;
		int32_t* L_1 = ___index;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, (*((int32_t*)L_1)));
		int32_t L_2 = (*((int32_t*)L_1));
		NullCheck((String_t*) &_stringLiteral259);
		int32_t L_3 = String_IndexOf_m1719((String_t*) &_stringLiteral259, (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_0, L_2)), /*hidden argument*/&String_IndexOf_m1719_MethodInfo);
		if ((!(((uint32_t)L_3) == ((uint32_t)(-1)))))
		{
			goto IL_001e;
		}
	}
	{
		goto IL_002e;
	}

IL_001e:
	{
		int32_t* L_4 = ___index;
		int32_t* L_5 = ___index;
		*((int32_t*)(L_4)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_5))+(int32_t)1));
	}

IL_0024:
	{
		int32_t* L_6 = ___index;
		CharU5BU5D_t179* L_7 = ___json;
		NullCheck(L_7);
		if ((((int32_t)(*((int32_t*)L_6))) < ((int32_t)(((int32_t)(((Array_t *)L_7)->max_length))))))
		{
			goto IL_0005;
		}
	}

IL_002e:
	{
		return;
	}
}
// System.Int32 SimpleJson.SimpleJson::LookAhead(System.Char[],System.Int32)
extern "C" int32_t SimpleJson_LookAhead_m3076 (Object_t * __this /* static, unused */, CharU5BU5D_t179* ___json, int32_t ___index, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___index;
		V_0 = L_0;
		CharU5BU5D_t179* L_1 = ___json;
		int32_t L_2 = SimpleJson_NextToken_m3077(NULL /*static, unused*/, L_1, (&V_0), /*hidden argument*/&SimpleJson_NextToken_m3077_MethodInfo);
		return L_2;
	}
}
// System.Int32 SimpleJson.SimpleJson::NextToken(System.Char[],System.Int32&)
extern "C" int32_t SimpleJson_NextToken_m3077 (Object_t * __this /* static, unused */, CharU5BU5D_t179* ___json, int32_t* ___index, MethodInfo* method)
{
	uint16_t V_0 = 0x0;
	int32_t V_1 = 0;
	uint16_t V_2 = 0x0;
	{
		CharU5BU5D_t179* L_0 = ___json;
		int32_t* L_1 = ___index;
		SimpleJson_EatWhitespace_m3075(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&SimpleJson_EatWhitespace_m3075_MethodInfo);
		int32_t* L_2 = ___index;
		CharU5BU5D_t179* L_3 = ___json;
		NullCheck(L_3);
		if ((!(((uint32_t)(*((int32_t*)L_2))) == ((uint32_t)(((int32_t)(((Array_t *)L_3)->max_length)))))))
		{
			goto IL_0013;
		}
	}
	{
		return 0;
	}

IL_0013:
	{
		CharU5BU5D_t179* L_4 = ___json;
		int32_t* L_5 = ___index;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, (*((int32_t*)L_5)));
		int32_t L_6 = (*((int32_t*)L_5));
		V_0 = (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_4, L_6));
		int32_t* L_7 = ___index;
		int32_t* L_8 = ___index;
		*((int32_t*)(L_7)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_8))+(int32_t)1));
		uint16_t L_9 = V_0;
		V_2 = L_9;
		uint16_t L_10 = V_2;
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 0)
		{
			goto IL_00c6;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 1)
		{
			goto IL_008d;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 2)
		{
			goto IL_008d;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 3)
		{
			goto IL_008d;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 4)
		{
			goto IL_008d;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 5)
		{
			goto IL_008d;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 6)
		{
			goto IL_008d;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 7)
		{
			goto IL_008d;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 8)
		{
			goto IL_008d;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 9)
		{
			goto IL_008d;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 10)
		{
			goto IL_00c4;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 11)
		{
			goto IL_00c8;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 12)
		{
			goto IL_008d;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 13)
		{
			goto IL_008d;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 14)
		{
			goto IL_00c8;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 15)
		{
			goto IL_00c8;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 16)
		{
			goto IL_00c8;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 17)
		{
			goto IL_00c8;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 18)
		{
			goto IL_00c8;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 19)
		{
			goto IL_00c8;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 20)
		{
			goto IL_00c8;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 21)
		{
			goto IL_00c8;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 22)
		{
			goto IL_00c8;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 23)
		{
			goto IL_00c8;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 24)
		{
			goto IL_00ca;
		}
	}

IL_008d:
	{
		uint16_t L_11 = V_2;
		if (((int32_t)((int32_t)L_11-(int32_t)((int32_t)91))) == 0)
		{
			goto IL_00c0;
		}
		if (((int32_t)((int32_t)L_11-(int32_t)((int32_t)91))) == 1)
		{
			goto IL_00a2;
		}
		if (((int32_t)((int32_t)L_11-(int32_t)((int32_t)91))) == 2)
		{
			goto IL_00c2;
		}
	}

IL_00a2:
	{
		uint16_t L_12 = V_2;
		if (((int32_t)((int32_t)L_12-(int32_t)((int32_t)123))) == 0)
		{
			goto IL_00bc;
		}
		if (((int32_t)((int32_t)L_12-(int32_t)((int32_t)123))) == 1)
		{
			goto IL_00cc;
		}
		if (((int32_t)((int32_t)L_12-(int32_t)((int32_t)123))) == 2)
		{
			goto IL_00be;
		}
	}
	{
		goto IL_00cc;
	}

IL_00bc:
	{
		return 1;
	}

IL_00be:
	{
		return 2;
	}

IL_00c0:
	{
		return 3;
	}

IL_00c2:
	{
		return 4;
	}

IL_00c4:
	{
		return 6;
	}

IL_00c6:
	{
		return 7;
	}

IL_00c8:
	{
		return 8;
	}

IL_00ca:
	{
		return 5;
	}

IL_00cc:
	{
		int32_t* L_13 = ___index;
		int32_t* L_14 = ___index;
		*((int32_t*)(L_13)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_14))-(int32_t)1));
		CharU5BU5D_t179* L_15 = ___json;
		NullCheck(L_15);
		int32_t* L_16 = ___index;
		V_1 = ((int32_t)((int32_t)(((int32_t)(((Array_t *)L_15)->max_length)))-(int32_t)(*((int32_t*)L_16))));
		int32_t L_17 = V_1;
		if ((((int32_t)L_17) < ((int32_t)5)))
		{
			goto IL_0128;
		}
	}
	{
		CharU5BU5D_t179* L_18 = ___json;
		int32_t* L_19 = ___index;
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, (*((int32_t*)L_19)));
		int32_t L_20 = (*((int32_t*)L_19));
		if ((!(((uint32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_18, L_20))) == ((uint32_t)((int32_t)102)))))
		{
			goto IL_0128;
		}
	}
	{
		CharU5BU5D_t179* L_21 = ___json;
		int32_t* L_22 = ___index;
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, ((int32_t)((int32_t)(*((int32_t*)L_22))+(int32_t)1)));
		int32_t L_23 = ((int32_t)((int32_t)(*((int32_t*)L_22))+(int32_t)1));
		if ((!(((uint32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_21, L_23))) == ((uint32_t)((int32_t)97)))))
		{
			goto IL_0128;
		}
	}
	{
		CharU5BU5D_t179* L_24 = ___json;
		int32_t* L_25 = ___index;
		NullCheck(L_24);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_24, ((int32_t)((int32_t)(*((int32_t*)L_25))+(int32_t)2)));
		int32_t L_26 = ((int32_t)((int32_t)(*((int32_t*)L_25))+(int32_t)2));
		if ((!(((uint32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_24, L_26))) == ((uint32_t)((int32_t)108)))))
		{
			goto IL_0128;
		}
	}
	{
		CharU5BU5D_t179* L_27 = ___json;
		int32_t* L_28 = ___index;
		NullCheck(L_27);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_27, ((int32_t)((int32_t)(*((int32_t*)L_28))+(int32_t)3)));
		int32_t L_29 = ((int32_t)((int32_t)(*((int32_t*)L_28))+(int32_t)3));
		if ((!(((uint32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_27, L_29))) == ((uint32_t)((int32_t)115)))))
		{
			goto IL_0128;
		}
	}
	{
		CharU5BU5D_t179* L_30 = ___json;
		int32_t* L_31 = ___index;
		NullCheck(L_30);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_30, ((int32_t)((int32_t)(*((int32_t*)L_31))+(int32_t)4)));
		int32_t L_32 = ((int32_t)((int32_t)(*((int32_t*)L_31))+(int32_t)4));
		if ((!(((uint32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_30, L_32))) == ((uint32_t)((int32_t)101)))))
		{
			goto IL_0128;
		}
	}
	{
		int32_t* L_33 = ___index;
		int32_t* L_34 = ___index;
		*((int32_t*)(L_33)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_34))+(int32_t)5));
		return ((int32_t)10);
	}

IL_0128:
	{
		int32_t L_35 = V_1;
		if ((((int32_t)L_35) < ((int32_t)4)))
		{
			goto IL_016a;
		}
	}
	{
		CharU5BU5D_t179* L_36 = ___json;
		int32_t* L_37 = ___index;
		NullCheck(L_36);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_36, (*((int32_t*)L_37)));
		int32_t L_38 = (*((int32_t*)L_37));
		if ((!(((uint32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_36, L_38))) == ((uint32_t)((int32_t)116)))))
		{
			goto IL_016a;
		}
	}
	{
		CharU5BU5D_t179* L_39 = ___json;
		int32_t* L_40 = ___index;
		NullCheck(L_39);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_39, ((int32_t)((int32_t)(*((int32_t*)L_40))+(int32_t)1)));
		int32_t L_41 = ((int32_t)((int32_t)(*((int32_t*)L_40))+(int32_t)1));
		if ((!(((uint32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_39, L_41))) == ((uint32_t)((int32_t)114)))))
		{
			goto IL_016a;
		}
	}
	{
		CharU5BU5D_t179* L_42 = ___json;
		int32_t* L_43 = ___index;
		NullCheck(L_42);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_42, ((int32_t)((int32_t)(*((int32_t*)L_43))+(int32_t)2)));
		int32_t L_44 = ((int32_t)((int32_t)(*((int32_t*)L_43))+(int32_t)2));
		if ((!(((uint32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_42, L_44))) == ((uint32_t)((int32_t)117)))))
		{
			goto IL_016a;
		}
	}
	{
		CharU5BU5D_t179* L_45 = ___json;
		int32_t* L_46 = ___index;
		NullCheck(L_45);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_45, ((int32_t)((int32_t)(*((int32_t*)L_46))+(int32_t)3)));
		int32_t L_47 = ((int32_t)((int32_t)(*((int32_t*)L_46))+(int32_t)3));
		if ((!(((uint32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_45, L_47))) == ((uint32_t)((int32_t)101)))))
		{
			goto IL_016a;
		}
	}
	{
		int32_t* L_48 = ___index;
		int32_t* L_49 = ___index;
		*((int32_t*)(L_48)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_49))+(int32_t)4));
		return ((int32_t)9);
	}

IL_016a:
	{
		int32_t L_50 = V_1;
		if ((((int32_t)L_50) < ((int32_t)4)))
		{
			goto IL_01ac;
		}
	}
	{
		CharU5BU5D_t179* L_51 = ___json;
		int32_t* L_52 = ___index;
		NullCheck(L_51);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_51, (*((int32_t*)L_52)));
		int32_t L_53 = (*((int32_t*)L_52));
		if ((!(((uint32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_51, L_53))) == ((uint32_t)((int32_t)110)))))
		{
			goto IL_01ac;
		}
	}
	{
		CharU5BU5D_t179* L_54 = ___json;
		int32_t* L_55 = ___index;
		NullCheck(L_54);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_54, ((int32_t)((int32_t)(*((int32_t*)L_55))+(int32_t)1)));
		int32_t L_56 = ((int32_t)((int32_t)(*((int32_t*)L_55))+(int32_t)1));
		if ((!(((uint32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_54, L_56))) == ((uint32_t)((int32_t)117)))))
		{
			goto IL_01ac;
		}
	}
	{
		CharU5BU5D_t179* L_57 = ___json;
		int32_t* L_58 = ___index;
		NullCheck(L_57);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_57, ((int32_t)((int32_t)(*((int32_t*)L_58))+(int32_t)2)));
		int32_t L_59 = ((int32_t)((int32_t)(*((int32_t*)L_58))+(int32_t)2));
		if ((!(((uint32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_57, L_59))) == ((uint32_t)((int32_t)108)))))
		{
			goto IL_01ac;
		}
	}
	{
		CharU5BU5D_t179* L_60 = ___json;
		int32_t* L_61 = ___index;
		NullCheck(L_60);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_60, ((int32_t)((int32_t)(*((int32_t*)L_61))+(int32_t)3)));
		int32_t L_62 = ((int32_t)((int32_t)(*((int32_t*)L_61))+(int32_t)3));
		if ((!(((uint32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_60, L_62))) == ((uint32_t)((int32_t)108)))))
		{
			goto IL_01ac;
		}
	}
	{
		int32_t* L_63 = ___index;
		int32_t* L_64 = ___index;
		*((int32_t*)(L_63)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_64))+(int32_t)4));
		return ((int32_t)11);
	}

IL_01ac:
	{
		return 0;
	}
}
// System.Boolean SimpleJson.SimpleJson::SerializeValue(SimpleJson.IJsonSerializerStrategy,System.Object,System.Text.StringBuilder)
extern TypeInfo* IDictionary_2_t562_il2cpp_TypeInfo_var;
extern TypeInfo* IDictionary_2_t706_il2cpp_TypeInfo_var;
extern MethodInfo* IDictionary_2_get_Keys_m3475_MethodInfo_var;
extern MethodInfo* IDictionary_2_get_Values_m3476_MethodInfo_var;
extern MethodInfo* IDictionary_2_get_Keys_m3477_MethodInfo_var;
extern MethodInfo* IDictionary_2_get_Values_m3478_MethodInfo_var;
extern "C" bool SimpleJson_SerializeValue_m3078 (Object_t * __this /* static, unused */, Object_t * ___jsonSerializerStrategy, Object_t * ___value, StringBuilder_t265 * ___builder, MethodInfo* method)
{
	static bool SimpleJson_SerializeValue_m3078_init;
	if (!SimpleJson_SerializeValue_m3078_init)
	{
		IDictionary_2_t562_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&IDictionary_2_t562_0_0_0);
		IDictionary_2_t706_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&IDictionary_2_t706_0_0_0);
		IDictionary_2_get_Keys_m3475_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&IDictionary_2_get_Keys_m3475_GenericMethod);
		IDictionary_2_get_Values_m3476_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&IDictionary_2_get_Values_m3476_GenericMethod);
		IDictionary_2_get_Keys_m3477_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&IDictionary_2_get_Keys_m3477_GenericMethod);
		IDictionary_2_get_Values_m3478_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&IDictionary_2_get_Values_m3478_GenericMethod);
		SimpleJson_SerializeValue_m3078_init = true;
	}
	bool V_0 = false;
	String_t* V_1 = {0};
	Object_t* V_2 = {0};
	Object_t* V_3 = {0};
	Object_t * V_4 = {0};
	Object_t * V_5 = {0};
	StringBuilder_t265 * G_B13_0 = {0};
	StringBuilder_t265 * G_B12_0 = {0};
	String_t* G_B14_0 = {0};
	StringBuilder_t265 * G_B14_1 = {0};
	{
		V_0 = 1;
		Object_t * L_0 = ___value;
		V_1 = ((String_t*)IsInst(L_0, (&String_t_il2cpp_TypeInfo)));
		String_t* L_1 = V_1;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		String_t* L_2 = V_1;
		StringBuilder_t265 * L_3 = ___builder;
		bool L_4 = SimpleJson_SerializeString_m3081(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/&SimpleJson_SerializeString_m3081_MethodInfo);
		V_0 = L_4;
		goto IL_0100;
	}

IL_001c:
	{
		Object_t * L_5 = ___value;
		V_2 = ((Object_t*)IsInst(L_5, IDictionary_2_t562_il2cpp_TypeInfo_var));
		Object_t* L_6 = V_2;
		if (!L_6)
		{
			goto IL_0042;
		}
	}
	{
		Object_t * L_7 = ___jsonSerializerStrategy;
		Object_t* L_8 = V_2;
		NullCheck(L_8);
		Object_t* L_9 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(IDictionary_2_get_Keys_m3475_MethodInfo_var, L_8);
		Object_t* L_10 = V_2;
		NullCheck(L_10);
		Object_t* L_11 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(IDictionary_2_get_Values_m3476_MethodInfo_var, L_10);
		StringBuilder_t265 * L_12 = ___builder;
		bool L_13 = SimpleJson_SerializeObject_m3079(NULL /*static, unused*/, L_7, L_9, L_11, L_12, /*hidden argument*/&SimpleJson_SerializeObject_m3079_MethodInfo);
		V_0 = L_13;
		goto IL_0100;
	}

IL_0042:
	{
		Object_t * L_14 = ___value;
		V_3 = ((Object_t*)IsInst(L_14, IDictionary_2_t706_il2cpp_TypeInfo_var));
		Object_t* L_15 = V_3;
		if (!L_15)
		{
			goto IL_0068;
		}
	}
	{
		Object_t * L_16 = ___jsonSerializerStrategy;
		Object_t* L_17 = V_3;
		NullCheck(L_17);
		Object_t* L_18 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(IDictionary_2_get_Keys_m3477_MethodInfo_var, L_17);
		Object_t* L_19 = V_3;
		NullCheck(L_19);
		Object_t* L_20 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(IDictionary_2_get_Values_m3478_MethodInfo_var, L_19);
		StringBuilder_t265 * L_21 = ___builder;
		bool L_22 = SimpleJson_SerializeObject_m3079(NULL /*static, unused*/, L_16, L_18, L_20, L_21, /*hidden argument*/&SimpleJson_SerializeObject_m3079_MethodInfo);
		V_0 = L_22;
		goto IL_0100;
	}

IL_0068:
	{
		Object_t * L_23 = ___value;
		V_4 = ((Object_t *)IsInst(L_23, InitializedTypeInfo(&IEnumerable_t399_il2cpp_TypeInfo)));
		Object_t * L_24 = V_4;
		if (!L_24)
		{
			goto IL_0086;
		}
	}
	{
		Object_t * L_25 = ___jsonSerializerStrategy;
		Object_t * L_26 = V_4;
		StringBuilder_t265 * L_27 = ___builder;
		bool L_28 = SimpleJson_SerializeArray_m3080(NULL /*static, unused*/, L_25, L_26, L_27, /*hidden argument*/&SimpleJson_SerializeArray_m3080_MethodInfo);
		V_0 = L_28;
		goto IL_0100;
	}

IL_0086:
	{
		Object_t * L_29 = ___value;
		bool L_30 = SimpleJson_IsNumeric_m3083(NULL /*static, unused*/, L_29, /*hidden argument*/&SimpleJson_IsNumeric_m3083_MethodInfo);
		if (!L_30)
		{
			goto IL_009e;
		}
	}
	{
		Object_t * L_31 = ___value;
		StringBuilder_t265 * L_32 = ___builder;
		bool L_33 = SimpleJson_SerializeNumber_m3082(NULL /*static, unused*/, L_31, L_32, /*hidden argument*/&SimpleJson_SerializeNumber_m3082_MethodInfo);
		V_0 = L_33;
		goto IL_0100;
	}

IL_009e:
	{
		Object_t * L_34 = ___value;
		if (!((Object_t *)IsInst(L_34, InitializedTypeInfo(&Boolean_t13_il2cpp_TypeInfo))))
		{
			goto IL_00cf;
		}
	}
	{
		StringBuilder_t265 * L_35 = ___builder;
		Object_t * L_36 = ___value;
		G_B12_0 = L_35;
		if (!((*(bool*)((bool*)UnBox (L_36, InitializedTypeInfo(&Boolean_t13_il2cpp_TypeInfo))))))
		{
			G_B13_0 = L_35;
			goto IL_00bf;
		}
	}
	{
		G_B14_0 = (String_t*) &_stringLiteral260;
		G_B14_1 = G_B12_0;
		goto IL_00c4;
	}

IL_00bf:
	{
		G_B14_0 = (String_t*) &_stringLiteral261;
		G_B14_1 = G_B13_0;
	}

IL_00c4:
	{
		NullCheck(G_B14_1);
		StringBuilder_Append_m3470(G_B14_1, G_B14_0, /*hidden argument*/&StringBuilder_Append_m3470_MethodInfo);
		goto IL_0100;
	}

IL_00cf:
	{
		Object_t * L_37 = ___value;
		if (L_37)
		{
			goto IL_00e6;
		}
	}
	{
		StringBuilder_t265 * L_38 = ___builder;
		NullCheck(L_38);
		StringBuilder_Append_m3470(L_38, (String_t*) &_stringLiteral262, /*hidden argument*/&StringBuilder_Append_m3470_MethodInfo);
		goto IL_0100;
	}

IL_00e6:
	{
		Object_t * L_39 = ___jsonSerializerStrategy;
		Object_t * L_40 = ___value;
		NullCheck(L_39);
		bool L_41 = (bool)InterfaceFuncInvoker2< bool, Object_t *, Object_t ** >::Invoke(&IJsonSerializerStrategy_TrySerializeNonPrimitiveObject_m3479_MethodInfo, L_39, L_40, (&V_5));
		V_0 = L_41;
		bool L_42 = V_0;
		if (!L_42)
		{
			goto IL_0100;
		}
	}
	{
		Object_t * L_43 = ___jsonSerializerStrategy;
		Object_t * L_44 = V_5;
		StringBuilder_t265 * L_45 = ___builder;
		SimpleJson_SerializeValue_m3078(NULL /*static, unused*/, L_43, L_44, L_45, /*hidden argument*/&SimpleJson_SerializeValue_m3078_MethodInfo);
	}

IL_0100:
	{
		bool L_46 = V_0;
		return L_46;
	}
}
// System.Boolean SimpleJson.SimpleJson::SerializeObject(SimpleJson.IJsonSerializerStrategy,System.Collections.IEnumerable,System.Collections.IEnumerable,System.Text.StringBuilder)
extern "C" bool SimpleJson_SerializeObject_m3079 (Object_t * __this /* static, unused */, Object_t * ___jsonSerializerStrategy, Object_t * ___keys, Object_t * ___values, StringBuilder_t265 * ___builder, MethodInfo* method)
{
	Object_t * V_0 = {0};
	Object_t * V_1 = {0};
	bool V_2 = false;
	Object_t * V_3 = {0};
	Object_t * V_4 = {0};
	String_t* V_5 = {0};
	{
		StringBuilder_t265 * L_0 = ___builder;
		NullCheck(L_0);
		StringBuilder_Append_m3470(L_0, (String_t*) &_stringLiteral263, /*hidden argument*/&StringBuilder_Append_m3470_MethodInfo);
		Object_t * L_1 = ___keys;
		NullCheck(L_1);
		Object_t * L_2 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(&IEnumerable_GetEnumerator_m3480_MethodInfo, L_1);
		V_0 = L_2;
		Object_t * L_3 = ___values;
		NullCheck(L_3);
		Object_t * L_4 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(&IEnumerable_GetEnumerator_m3480_MethodInfo, L_3);
		V_1 = L_4;
		V_2 = 1;
		goto IL_008d;
	}

IL_0021:
	{
		Object_t * L_5 = V_0;
		NullCheck(L_5);
		Object_t * L_6 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(&IEnumerator_get_Current_m3481_MethodInfo, L_5);
		V_3 = L_6;
		Object_t * L_7 = V_1;
		NullCheck(L_7);
		Object_t * L_8 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(&IEnumerator_get_Current_m3481_MethodInfo, L_7);
		V_4 = L_8;
		bool L_9 = V_2;
		if (L_9)
		{
			goto IL_0042;
		}
	}
	{
		StringBuilder_t265 * L_10 = ___builder;
		NullCheck(L_10);
		StringBuilder_Append_m3470(L_10, (String_t*) &_stringLiteral264, /*hidden argument*/&StringBuilder_Append_m3470_MethodInfo);
	}

IL_0042:
	{
		Object_t * L_11 = V_3;
		V_5 = ((String_t*)IsInst(L_11, (&String_t_il2cpp_TypeInfo)));
		String_t* L_12 = V_5;
		if (!L_12)
		{
			goto IL_005f;
		}
	}
	{
		String_t* L_13 = V_5;
		StringBuilder_t265 * L_14 = ___builder;
		SimpleJson_SerializeString_m3081(NULL /*static, unused*/, L_13, L_14, /*hidden argument*/&SimpleJson_SerializeString_m3081_MethodInfo);
		goto IL_006f;
	}

IL_005f:
	{
		Object_t * L_15 = ___jsonSerializerStrategy;
		Object_t * L_16 = V_4;
		StringBuilder_t265 * L_17 = ___builder;
		bool L_18 = SimpleJson_SerializeValue_m3078(NULL /*static, unused*/, L_15, L_16, L_17, /*hidden argument*/&SimpleJson_SerializeValue_m3078_MethodInfo);
		if (L_18)
		{
			goto IL_006f;
		}
	}
	{
		return 0;
	}

IL_006f:
	{
		StringBuilder_t265 * L_19 = ___builder;
		NullCheck(L_19);
		StringBuilder_Append_m3470(L_19, (String_t*) &_stringLiteral265, /*hidden argument*/&StringBuilder_Append_m3470_MethodInfo);
		Object_t * L_20 = ___jsonSerializerStrategy;
		Object_t * L_21 = V_4;
		StringBuilder_t265 * L_22 = ___builder;
		bool L_23 = SimpleJson_SerializeValue_m3078(NULL /*static, unused*/, L_20, L_21, L_22, /*hidden argument*/&SimpleJson_SerializeValue_m3078_MethodInfo);
		if (L_23)
		{
			goto IL_008b;
		}
	}
	{
		return 0;
	}

IL_008b:
	{
		V_2 = 0;
	}

IL_008d:
	{
		Object_t * L_24 = V_0;
		NullCheck(L_24);
		bool L_25 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&IEnumerator_MoveNext_m3457_MethodInfo, L_24);
		if (!L_25)
		{
			goto IL_00a3;
		}
	}
	{
		Object_t * L_26 = V_1;
		NullCheck(L_26);
		bool L_27 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&IEnumerator_MoveNext_m3457_MethodInfo, L_26);
		if (L_27)
		{
			goto IL_0021;
		}
	}

IL_00a3:
	{
		StringBuilder_t265 * L_28 = ___builder;
		NullCheck(L_28);
		StringBuilder_Append_m3470(L_28, (String_t*) &_stringLiteral99, /*hidden argument*/&StringBuilder_Append_m3470_MethodInfo);
		return 1;
	}
}
// System.Boolean SimpleJson.SimpleJson::SerializeArray(SimpleJson.IJsonSerializerStrategy,System.Collections.IEnumerable,System.Text.StringBuilder)
extern "C" bool SimpleJson_SerializeArray_m3080 (Object_t * __this /* static, unused */, Object_t * ___jsonSerializerStrategy, Object_t * ___anArray, StringBuilder_t265 * ___builder, MethodInfo* method)
{
	bool V_0 = false;
	Object_t * V_1 = {0};
	Object_t * V_2 = {0};
	bool V_3 = false;
	Object_t * V_4 = {0};
	Exception_t275 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t275 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		StringBuilder_t265 * L_0 = ___builder;
		NullCheck(L_0);
		StringBuilder_Append_m3470(L_0, (String_t*) &_stringLiteral266, /*hidden argument*/&StringBuilder_Append_m3470_MethodInfo);
		V_0 = 1;
		Object_t * L_1 = ___anArray;
		NullCheck(L_1);
		Object_t * L_2 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(&IEnumerable_GetEnumerator_m3480_MethodInfo, L_1);
		V_2 = L_2;
	}

IL_0015:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0049;
		}

IL_001a:
		{
			Object_t * L_3 = V_2;
			NullCheck(L_3);
			Object_t * L_4 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(&IEnumerator_get_Current_m3481_MethodInfo, L_3);
			V_1 = L_4;
			bool L_5 = V_0;
			if (L_5)
			{
				goto IL_0033;
			}
		}

IL_0027:
		{
			StringBuilder_t265 * L_6 = ___builder;
			NullCheck(L_6);
			StringBuilder_Append_m3470(L_6, (String_t*) &_stringLiteral264, /*hidden argument*/&StringBuilder_Append_m3470_MethodInfo);
		}

IL_0033:
		{
			Object_t * L_7 = ___jsonSerializerStrategy;
			Object_t * L_8 = V_1;
			StringBuilder_t265 * L_9 = ___builder;
			bool L_10 = SimpleJson_SerializeValue_m3078(NULL /*static, unused*/, L_7, L_8, L_9, /*hidden argument*/&SimpleJson_SerializeValue_m3078_MethodInfo);
			if (L_10)
			{
				goto IL_0047;
			}
		}

IL_0040:
		{
			V_3 = 0;
			IL2CPP_LEAVE(0x7C, FINALLY_0059);
		}

IL_0047:
		{
			V_0 = 0;
		}

IL_0049:
		{
			Object_t * L_11 = V_2;
			NullCheck(L_11);
			bool L_12 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&IEnumerator_MoveNext_m3457_MethodInfo, L_11);
			if (L_12)
			{
				goto IL_001a;
			}
		}

IL_0054:
		{
			IL2CPP_LEAVE(0x6E, FINALLY_0059);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t275 *)e.ex;
		goto FINALLY_0059;
	}

FINALLY_0059:
	{ // begin finally (depth: 1)
		{
			Object_t * L_13 = V_2;
			V_4 = ((Object_t *)IsInst(L_13, InitializedTypeInfo(&IDisposable_t272_il2cpp_TypeInfo)));
			Object_t * L_14 = V_4;
			if (L_14)
			{
				goto IL_0066;
			}
		}

IL_0065:
		{
			IL2CPP_END_FINALLY(89)
		}

IL_0066:
		{
			Object_t * L_15 = V_4;
			NullCheck(L_15);
			InterfaceActionInvoker0::Invoke(&IDisposable_Dispose_m1379_MethodInfo, L_15);
			IL2CPP_END_FINALLY(89)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(89)
	{
		IL2CPP_JUMP_TBL(0x7C, IL_007c)
		IL2CPP_JUMP_TBL(0x6E, IL_006e)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t275 *)
	}

IL_006e:
	{
		StringBuilder_t265 * L_16 = ___builder;
		NullCheck(L_16);
		StringBuilder_Append_m3470(L_16, (String_t*) &_stringLiteral267, /*hidden argument*/&StringBuilder_Append_m3470_MethodInfo);
		return 1;
	}

IL_007c:
	{
		bool L_17 = V_3;
		return L_17;
	}
}
// System.Boolean SimpleJson.SimpleJson::SerializeString(System.String,System.Text.StringBuilder)
extern "C" bool SimpleJson_SerializeString_m3081 (Object_t * __this /* static, unused */, String_t* ___aString, StringBuilder_t265 * ___builder, MethodInfo* method)
{
	CharU5BU5D_t179* V_0 = {0};
	int32_t V_1 = 0;
	uint16_t V_2 = 0x0;
	{
		StringBuilder_t265 * L_0 = ___builder;
		NullCheck(L_0);
		StringBuilder_Append_m3470(L_0, (String_t*) &_stringLiteral165, /*hidden argument*/&StringBuilder_Append_m3470_MethodInfo);
		String_t* L_1 = ___aString;
		NullCheck(L_1);
		CharU5BU5D_t179* L_2 = String_ToCharArray_m3463(L_1, /*hidden argument*/&String_ToCharArray_m3463_MethodInfo);
		V_0 = L_2;
		V_1 = 0;
		goto IL_00d8;
	}

IL_001a:
	{
		CharU5BU5D_t179* L_3 = V_0;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = L_4;
		V_2 = (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_3, L_5));
		uint16_t L_6 = V_2;
		if ((!(((uint32_t)L_6) == ((uint32_t)((int32_t)34)))))
		{
			goto IL_0037;
		}
	}
	{
		StringBuilder_t265 * L_7 = ___builder;
		NullCheck(L_7);
		StringBuilder_Append_m3470(L_7, (String_t*) &_stringLiteral268, /*hidden argument*/&StringBuilder_Append_m3470_MethodInfo);
		goto IL_00d4;
	}

IL_0037:
	{
		uint16_t L_8 = V_2;
		if ((!(((uint32_t)L_8) == ((uint32_t)((int32_t)92)))))
		{
			goto IL_0050;
		}
	}
	{
		StringBuilder_t265 * L_9 = ___builder;
		NullCheck(L_9);
		StringBuilder_Append_m3470(L_9, (String_t*) &_stringLiteral269, /*hidden argument*/&StringBuilder_Append_m3470_MethodInfo);
		goto IL_00d4;
	}

IL_0050:
	{
		uint16_t L_10 = V_2;
		if ((!(((uint32_t)L_10) == ((uint32_t)8))))
		{
			goto IL_0068;
		}
	}
	{
		StringBuilder_t265 * L_11 = ___builder;
		NullCheck(L_11);
		StringBuilder_Append_m3470(L_11, (String_t*) &_stringLiteral270, /*hidden argument*/&StringBuilder_Append_m3470_MethodInfo);
		goto IL_00d4;
	}

IL_0068:
	{
		uint16_t L_12 = V_2;
		if ((!(((uint32_t)L_12) == ((uint32_t)((int32_t)12)))))
		{
			goto IL_0081;
		}
	}
	{
		StringBuilder_t265 * L_13 = ___builder;
		NullCheck(L_13);
		StringBuilder_Append_m3470(L_13, (String_t*) &_stringLiteral271, /*hidden argument*/&StringBuilder_Append_m3470_MethodInfo);
		goto IL_00d4;
	}

IL_0081:
	{
		uint16_t L_14 = V_2;
		if ((!(((uint32_t)L_14) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_009a;
		}
	}
	{
		StringBuilder_t265 * L_15 = ___builder;
		NullCheck(L_15);
		StringBuilder_Append_m3470(L_15, (String_t*) &_stringLiteral272, /*hidden argument*/&StringBuilder_Append_m3470_MethodInfo);
		goto IL_00d4;
	}

IL_009a:
	{
		uint16_t L_16 = V_2;
		if ((!(((uint32_t)L_16) == ((uint32_t)((int32_t)13)))))
		{
			goto IL_00b3;
		}
	}
	{
		StringBuilder_t265 * L_17 = ___builder;
		NullCheck(L_17);
		StringBuilder_Append_m3470(L_17, (String_t*) &_stringLiteral273, /*hidden argument*/&StringBuilder_Append_m3470_MethodInfo);
		goto IL_00d4;
	}

IL_00b3:
	{
		uint16_t L_18 = V_2;
		if ((!(((uint32_t)L_18) == ((uint32_t)((int32_t)9)))))
		{
			goto IL_00cc;
		}
	}
	{
		StringBuilder_t265 * L_19 = ___builder;
		NullCheck(L_19);
		StringBuilder_Append_m3470(L_19, (String_t*) &_stringLiteral274, /*hidden argument*/&StringBuilder_Append_m3470_MethodInfo);
		goto IL_00d4;
	}

IL_00cc:
	{
		StringBuilder_t265 * L_20 = ___builder;
		uint16_t L_21 = V_2;
		NullCheck(L_20);
		StringBuilder_Append_m1673(L_20, L_21, /*hidden argument*/&StringBuilder_Append_m1673_MethodInfo);
	}

IL_00d4:
	{
		int32_t L_22 = V_1;
		V_1 = ((int32_t)((int32_t)L_22+(int32_t)1));
	}

IL_00d8:
	{
		int32_t L_23 = V_1;
		CharU5BU5D_t179* L_24 = V_0;
		NullCheck(L_24);
		if ((((int32_t)L_23) < ((int32_t)(((int32_t)(((Array_t *)L_24)->max_length))))))
		{
			goto IL_001a;
		}
	}
	{
		StringBuilder_t265 * L_25 = ___builder;
		NullCheck(L_25);
		StringBuilder_Append_m3470(L_25, (String_t*) &_stringLiteral165, /*hidden argument*/&StringBuilder_Append_m3470_MethodInfo);
		return 1;
	}
}
// System.Boolean SimpleJson.SimpleJson::SerializeNumber(System.Object,System.Text.StringBuilder)
extern "C" bool SimpleJson_SerializeNumber_m3082 (Object_t * __this /* static, unused */, Object_t * ___number, StringBuilder_t265 * ___builder, MethodInfo* method)
{
	int64_t V_0 = 0;
	uint64_t V_1 = 0;
	int32_t V_2 = 0;
	uint32_t V_3 = 0;
	Decimal_t709  V_4 = {0};
	float V_5 = 0.0f;
	double V_6 = 0.0;
	{
		Object_t * L_0 = ___number;
		if (!((Object_t *)IsInst(L_0, InitializedTypeInfo(&Int64_t705_il2cpp_TypeInfo))))
		{
			goto IL_002a;
		}
	}
	{
		StringBuilder_t265 * L_1 = ___builder;
		Object_t * L_2 = ___number;
		V_0 = ((*(int64_t*)((int64_t*)UnBox (L_2, InitializedTypeInfo(&Int64_t705_il2cpp_TypeInfo)))));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CultureInfo_t702_il2cpp_TypeInfo));
		CultureInfo_t702 * L_3 = CultureInfo_get_InvariantCulture_m3468(NULL /*static, unused*/, /*hidden argument*/&CultureInfo_get_InvariantCulture_m3468_MethodInfo);
		String_t* L_4 = Int64_ToString_m3482((&V_0), L_3, /*hidden argument*/&Int64_ToString_m3482_MethodInfo);
		NullCheck(L_1);
		StringBuilder_Append_m3470(L_1, L_4, /*hidden argument*/&StringBuilder_Append_m3470_MethodInfo);
		goto IL_0123;
	}

IL_002a:
	{
		Object_t * L_5 = ___number;
		if (!((Object_t *)IsInst(L_5, InitializedTypeInfo(&UInt64_t708_il2cpp_TypeInfo))))
		{
			goto IL_0054;
		}
	}
	{
		StringBuilder_t265 * L_6 = ___builder;
		Object_t * L_7 = ___number;
		V_1 = ((*(uint64_t*)((uint64_t*)UnBox (L_7, InitializedTypeInfo(&UInt64_t708_il2cpp_TypeInfo)))));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CultureInfo_t702_il2cpp_TypeInfo));
		CultureInfo_t702 * L_8 = CultureInfo_get_InvariantCulture_m3468(NULL /*static, unused*/, /*hidden argument*/&CultureInfo_get_InvariantCulture_m3468_MethodInfo);
		String_t* L_9 = UInt64_ToString_m3483((&V_1), L_8, /*hidden argument*/&UInt64_ToString_m3483_MethodInfo);
		NullCheck(L_6);
		StringBuilder_Append_m3470(L_6, L_9, /*hidden argument*/&StringBuilder_Append_m3470_MethodInfo);
		goto IL_0123;
	}

IL_0054:
	{
		Object_t * L_10 = ___number;
		if (!((Object_t *)IsInst(L_10, InitializedTypeInfo(&Int32_t17_il2cpp_TypeInfo))))
		{
			goto IL_007e;
		}
	}
	{
		StringBuilder_t265 * L_11 = ___builder;
		Object_t * L_12 = ___number;
		V_2 = ((*(int32_t*)((int32_t*)UnBox (L_12, InitializedTypeInfo(&Int32_t17_il2cpp_TypeInfo)))));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CultureInfo_t702_il2cpp_TypeInfo));
		CultureInfo_t702 * L_13 = CultureInfo_get_InvariantCulture_m3468(NULL /*static, unused*/, /*hidden argument*/&CultureInfo_get_InvariantCulture_m3468_MethodInfo);
		String_t* L_14 = Int32_ToString_m3484((&V_2), L_13, /*hidden argument*/&Int32_ToString_m3484_MethodInfo);
		NullCheck(L_11);
		StringBuilder_Append_m3470(L_11, L_14, /*hidden argument*/&StringBuilder_Append_m3470_MethodInfo);
		goto IL_0123;
	}

IL_007e:
	{
		Object_t * L_15 = ___number;
		if (!((Object_t *)IsInst(L_15, InitializedTypeInfo(&UInt32_t697_il2cpp_TypeInfo))))
		{
			goto IL_00a8;
		}
	}
	{
		StringBuilder_t265 * L_16 = ___builder;
		Object_t * L_17 = ___number;
		V_3 = ((*(uint32_t*)((uint32_t*)UnBox (L_17, InitializedTypeInfo(&UInt32_t697_il2cpp_TypeInfo)))));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CultureInfo_t702_il2cpp_TypeInfo));
		CultureInfo_t702 * L_18 = CultureInfo_get_InvariantCulture_m3468(NULL /*static, unused*/, /*hidden argument*/&CultureInfo_get_InvariantCulture_m3468_MethodInfo);
		String_t* L_19 = UInt32_ToString_m3485((&V_3), L_18, /*hidden argument*/&UInt32_ToString_m3485_MethodInfo);
		NullCheck(L_16);
		StringBuilder_Append_m3470(L_16, L_19, /*hidden argument*/&StringBuilder_Append_m3470_MethodInfo);
		goto IL_0123;
	}

IL_00a8:
	{
		Object_t * L_20 = ___number;
		if (!((Object_t *)IsInst(L_20, InitializedTypeInfo(&Decimal_t709_il2cpp_TypeInfo))))
		{
			goto IL_00d3;
		}
	}
	{
		StringBuilder_t265 * L_21 = ___builder;
		Object_t * L_22 = ___number;
		V_4 = ((*(Decimal_t709 *)((Decimal_t709 *)UnBox (L_22, InitializedTypeInfo(&Decimal_t709_il2cpp_TypeInfo)))));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CultureInfo_t702_il2cpp_TypeInfo));
		CultureInfo_t702 * L_23 = CultureInfo_get_InvariantCulture_m3468(NULL /*static, unused*/, /*hidden argument*/&CultureInfo_get_InvariantCulture_m3468_MethodInfo);
		String_t* L_24 = Decimal_ToString_m3486((&V_4), L_23, /*hidden argument*/&Decimal_ToString_m3486_MethodInfo);
		NullCheck(L_21);
		StringBuilder_Append_m3470(L_21, L_24, /*hidden argument*/&StringBuilder_Append_m3470_MethodInfo);
		goto IL_0123;
	}

IL_00d3:
	{
		Object_t * L_25 = ___number;
		if (!((Object_t *)IsInst(L_25, InitializedTypeInfo(&Single_t23_il2cpp_TypeInfo))))
		{
			goto IL_00fe;
		}
	}
	{
		StringBuilder_t265 * L_26 = ___builder;
		Object_t * L_27 = ___number;
		V_5 = ((*(float*)((float*)UnBox (L_27, InitializedTypeInfo(&Single_t23_il2cpp_TypeInfo)))));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CultureInfo_t702_il2cpp_TypeInfo));
		CultureInfo_t702 * L_28 = CultureInfo_get_InvariantCulture_m3468(NULL /*static, unused*/, /*hidden argument*/&CultureInfo_get_InvariantCulture_m3468_MethodInfo);
		String_t* L_29 = Single_ToString_m3487((&V_5), L_28, /*hidden argument*/&Single_ToString_m3487_MethodInfo);
		NullCheck(L_26);
		StringBuilder_Append_m3470(L_26, L_29, /*hidden argument*/&StringBuilder_Append_m3470_MethodInfo);
		goto IL_0123;
	}

IL_00fe:
	{
		StringBuilder_t265 * L_30 = ___builder;
		Object_t * L_31 = ___number;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CultureInfo_t702_il2cpp_TypeInfo));
		CultureInfo_t702 * L_32 = CultureInfo_get_InvariantCulture_m3468(NULL /*static, unused*/, /*hidden argument*/&CultureInfo_get_InvariantCulture_m3468_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Convert_t689_il2cpp_TypeInfo));
		double L_33 = Convert_ToDouble_m3488(NULL /*static, unused*/, L_31, L_32, /*hidden argument*/&Convert_ToDouble_m3488_MethodInfo);
		V_6 = L_33;
		CultureInfo_t702 * L_34 = CultureInfo_get_InvariantCulture_m3468(NULL /*static, unused*/, /*hidden argument*/&CultureInfo_get_InvariantCulture_m3468_MethodInfo);
		String_t* L_35 = Double_ToString_m3489((&V_6), (String_t*) &_stringLiteral275, L_34, /*hidden argument*/&Double_ToString_m3489_MethodInfo);
		NullCheck(L_30);
		StringBuilder_Append_m3470(L_30, L_35, /*hidden argument*/&StringBuilder_Append_m3470_MethodInfo);
	}

IL_0123:
	{
		return 1;
	}
}
// System.Boolean SimpleJson.SimpleJson::IsNumeric(System.Object)
extern "C" bool SimpleJson_IsNumeric_m3083 (Object_t * __this /* static, unused */, Object_t * ___value, MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		if (!((Object_t *)IsInst(L_0, InitializedTypeInfo(&SByte_t336_il2cpp_TypeInfo))))
		{
			goto IL_000d;
		}
	}
	{
		return 1;
	}

IL_000d:
	{
		Object_t * L_1 = ___value;
		if (!((Object_t *)IsInst(L_1, InitializedTypeInfo(&Byte_t321_il2cpp_TypeInfo))))
		{
			goto IL_001a;
		}
	}
	{
		return 1;
	}

IL_001a:
	{
		Object_t * L_2 = ___value;
		if (!((Object_t *)IsInst(L_2, InitializedTypeInfo(&Int16_t375_il2cpp_TypeInfo))))
		{
			goto IL_0027;
		}
	}
	{
		return 1;
	}

IL_0027:
	{
		Object_t * L_3 = ___value;
		if (!((Object_t *)IsInst(L_3, InitializedTypeInfo(&UInt16_t695_il2cpp_TypeInfo))))
		{
			goto IL_0034;
		}
	}
	{
		return 1;
	}

IL_0034:
	{
		Object_t * L_4 = ___value;
		if (!((Object_t *)IsInst(L_4, InitializedTypeInfo(&Int32_t17_il2cpp_TypeInfo))))
		{
			goto IL_0041;
		}
	}
	{
		return 1;
	}

IL_0041:
	{
		Object_t * L_5 = ___value;
		if (!((Object_t *)IsInst(L_5, InitializedTypeInfo(&UInt32_t697_il2cpp_TypeInfo))))
		{
			goto IL_004e;
		}
	}
	{
		return 1;
	}

IL_004e:
	{
		Object_t * L_6 = ___value;
		if (!((Object_t *)IsInst(L_6, InitializedTypeInfo(&Int64_t705_il2cpp_TypeInfo))))
		{
			goto IL_005b;
		}
	}
	{
		return 1;
	}

IL_005b:
	{
		Object_t * L_7 = ___value;
		if (!((Object_t *)IsInst(L_7, InitializedTypeInfo(&UInt64_t708_il2cpp_TypeInfo))))
		{
			goto IL_0068;
		}
	}
	{
		return 1;
	}

IL_0068:
	{
		Object_t * L_8 = ___value;
		if (!((Object_t *)IsInst(L_8, InitializedTypeInfo(&Single_t23_il2cpp_TypeInfo))))
		{
			goto IL_0075;
		}
	}
	{
		return 1;
	}

IL_0075:
	{
		Object_t * L_9 = ___value;
		if (!((Object_t *)IsInst(L_9, InitializedTypeInfo(&Double_t704_il2cpp_TypeInfo))))
		{
			goto IL_0082;
		}
	}
	{
		return 1;
	}

IL_0082:
	{
		Object_t * L_10 = ___value;
		if (!((Object_t *)IsInst(L_10, InitializedTypeInfo(&Decimal_t709_il2cpp_TypeInfo))))
		{
			goto IL_008f;
		}
	}
	{
		return 1;
	}

IL_008f:
	{
		return 0;
	}
}
// SimpleJson.IJsonSerializerStrategy SimpleJson.SimpleJson::get_CurrentJsonSerializerStrategy()
extern "C" Object_t * SimpleJson_get_CurrentJsonSerializerStrategy_m3084 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	Object_t * G_B2_0 = {0};
	Object_t * G_B1_0 = {0};
	{
		Object_t * L_0 = ((SimpleJson_t602_StaticFields*)InitializedTypeInfo(&SimpleJson_t602_il2cpp_TypeInfo)->static_fields)->____currentJsonSerializerStrategy_0;
		Object_t * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0017;
		}
	}
	{
		PocoJsonSerializerStrategy_t601 * L_2 = SimpleJson_get_PocoJsonSerializerStrategy_m3085(NULL /*static, unused*/, /*hidden argument*/&SimpleJson_get_PocoJsonSerializerStrategy_m3085_MethodInfo);
		PocoJsonSerializerStrategy_t601 * L_3 = L_2;
		((SimpleJson_t602_StaticFields*)InitializedTypeInfo(&SimpleJson_t602_il2cpp_TypeInfo)->static_fields)->____currentJsonSerializerStrategy_0 = L_3;
		G_B2_0 = ((Object_t *)(L_3));
	}

IL_0017:
	{
		return G_B2_0;
	}
}
// SimpleJson.PocoJsonSerializerStrategy SimpleJson.SimpleJson::get_PocoJsonSerializerStrategy()
extern "C" PocoJsonSerializerStrategy_t601 * SimpleJson_get_PocoJsonSerializerStrategy_m3085 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	PocoJsonSerializerStrategy_t601 * G_B2_0 = {0};
	PocoJsonSerializerStrategy_t601 * G_B1_0 = {0};
	{
		PocoJsonSerializerStrategy_t601 * L_0 = ((SimpleJson_t602_StaticFields*)InitializedTypeInfo(&SimpleJson_t602_il2cpp_TypeInfo)->static_fields)->____pocoJsonSerializerStrategy_1;
		PocoJsonSerializerStrategy_t601 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0017;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&PocoJsonSerializerStrategy_t601_il2cpp_TypeInfo));
		PocoJsonSerializerStrategy_t601 * L_2 = (PocoJsonSerializerStrategy_t601 *)il2cpp_codegen_object_new (InitializedTypeInfo(&PocoJsonSerializerStrategy_t601_il2cpp_TypeInfo));
		PocoJsonSerializerStrategy__ctor_m3086(L_2, /*hidden argument*/&PocoJsonSerializerStrategy__ctor_m3086_MethodInfo);
		PocoJsonSerializerStrategy_t601 * L_3 = L_2;
		((SimpleJson_t602_StaticFields*)InitializedTypeInfo(&SimpleJson_t602_il2cpp_TypeInfo)->static_fields)->____pocoJsonSerializerStrategy_1 = L_3;
		G_B2_0 = L_3;
	}

IL_0017:
	{
		return G_B2_0;
	}
}
#ifndef _MSC_VER
#else
#endif

// SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_Constructo.h"
// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_ThreadSafe.h"
// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_ThreadSafe_0.h"
// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_ThreadSafe_1.h"
// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_ThreadSafe_2.h"
// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>>
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_ThreadSafe_3.h"
// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>>
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_ThreadSafe_4.h"
// System.RuntimeTypeHandle
#include "mscorlib_System_RuntimeTypeHandle.h"
// System.Reflection.PropertyInfo
#include "mscorlib_System_Reflection_PropertyInfo.h"
// System.Reflection.MethodInfo
#include "mscorlib_System_Reflection_MethodInfo.h"
// System.Reflection.FieldInfo
#include "mscorlib_System_Reflection_FieldInfo.h"
// System.Collections.Generic.Dictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_10.h"
// System.Reflection.MethodBase
#include "mscorlib_System_Reflection_MethodBase.h"
// System.Reflection.MemberInfo
#include "mscorlib_System_Reflection_MemberInfo.h"
// SimpleJson.Reflection.ReflectionUtils/GetDelegate
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_GetDelegat.h"
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_11.h"
// SimpleJson.Reflection.ReflectionUtils/SetDelegate
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_SetDelegat.h"
// System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_2.h"
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.DateTimeOffset
#include "mscorlib_System_DateTimeOffset.h"
// System.Guid
#include "mscorlib_System_Guid.h"
// System.Collections.Generic.KeyValuePair`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_3.h"
extern TypeInfo ConstructorDelegate_t607_il2cpp_TypeInfo;
extern TypeInfo Type_t_il2cpp_TypeInfo;
extern TypeInfo ThreadSafeDictionaryValueFactory_2_t710_il2cpp_TypeInfo;
extern TypeInfo ThreadSafeDictionary_2_t711_il2cpp_TypeInfo;
extern TypeInfo IDictionary_2_t608_il2cpp_TypeInfo;
extern TypeInfo ThreadSafeDictionaryValueFactory_2_t712_il2cpp_TypeInfo;
extern TypeInfo ThreadSafeDictionary_2_t713_il2cpp_TypeInfo;
extern TypeInfo IDictionary_2_t609_il2cpp_TypeInfo;
extern TypeInfo ThreadSafeDictionaryValueFactory_2_t714_il2cpp_TypeInfo;
extern TypeInfo ThreadSafeDictionary_2_t715_il2cpp_TypeInfo;
extern TypeInfo TypeU5BU5D_t606_il2cpp_TypeInfo;
extern TypeInfo StringU5BU5D_t423_il2cpp_TypeInfo;
extern TypeInfo ReflectionUtils_t618_il2cpp_TypeInfo;
extern TypeInfo Dictionary_2_t716_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t620_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t717_il2cpp_TypeInfo;
extern TypeInfo PropertyInfo_t_il2cpp_TypeInfo;
extern TypeInfo MethodBase_t718_il2cpp_TypeInfo;
extern TypeInfo MemberInfo_t_il2cpp_TypeInfo;
extern TypeInfo GetDelegate_t610_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t621_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t719_il2cpp_TypeInfo;
extern TypeInfo FieldInfo_t_il2cpp_TypeInfo;
extern TypeInfo Dictionary_2_t720_il2cpp_TypeInfo;
extern TypeInfo KeyValuePair_2_t721_il2cpp_TypeInfo;
extern TypeInfo DateTime_t465_il2cpp_TypeInfo;
extern TypeInfo DateTimeOffset_t722_il2cpp_TypeInfo;
extern TypeInfo Guid_t723_il2cpp_TypeInfo;
extern TypeInfo IDictionary_2_t604_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t724_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t725_il2cpp_TypeInfo;
extern TypeInfo KeyValuePair_2_t726_il2cpp_TypeInfo;
// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_ThreadSafeMethodDeclarations.h"
// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_ThreadSafe_0MethodDeclarations.h"
// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_ThreadSafe_1MethodDeclarations.h"
// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_ThreadSafe_2MethodDeclarations.h"
// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>>
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_ThreadSafe_3MethodDeclarations.h"
// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>>
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_ThreadSafe_4MethodDeclarations.h"
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// SimpleJson.Reflection.ReflectionUtils
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtilsMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_10MethodDeclarations.h"
// System.Reflection.PropertyInfo
#include "mscorlib_System_Reflection_PropertyInfoMethodDeclarations.h"
// System.Reflection.MethodBase
#include "mscorlib_System_Reflection_MethodBaseMethodDeclarations.h"
// System.Reflection.MemberInfo
#include "mscorlib_System_Reflection_MemberInfoMethodDeclarations.h"
// System.Reflection.FieldInfo
#include "mscorlib_System_Reflection_FieldInfoMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_11MethodDeclarations.h"
// System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_2MethodDeclarations.h"
// System.DateTime
#include "mscorlib_System_DateTimeMethodDeclarations.h"
// System.DateTimeOffset
#include "mscorlib_System_DateTimeOffsetMethodDeclarations.h"
// System.Guid
#include "mscorlib_System_GuidMethodDeclarations.h"
// System.Collections.Generic.KeyValuePair`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_3MethodDeclarations.h"
// SimpleJson.Reflection.ReflectionUtils/GetDelegate
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_GetDelegatMethodDeclarations.h"
extern Il2CppType ThreadSafeDictionaryValueFactory_2_t710_0_0_0;
extern Il2CppType ThreadSafeDictionary_2_t711_0_0_0;
extern Il2CppType ThreadSafeDictionaryValueFactory_2_t712_0_0_0;
extern Il2CppType ThreadSafeDictionary_2_t713_0_0_0;
extern Il2CppType ThreadSafeDictionaryValueFactory_2_t714_0_0_0;
extern Il2CppType ThreadSafeDictionary_2_t715_0_0_0;
extern Il2CppType TypeU5BU5D_t606_0_0_0;
extern Il2CppType Int32_t17_0_0_0;
extern Il2CppType StringU5BU5D_t423_0_0_0;
extern Il2CppType Dictionary_2_t716_0_0_0;
extern Il2CppType IEnumerable_1_t620_0_0_0;
extern Il2CppType IEnumerator_1_t717_0_0_0;
extern Il2CppType IDictionary_2_t608_0_0_0;
extern Il2CppType IEnumerable_1_t621_0_0_0;
extern Il2CppType IEnumerator_1_t719_0_0_0;
extern Il2CppType Dictionary_2_t720_0_0_0;
extern Il2CppType KeyValuePair_2_t721_0_0_0;
extern Il2CppType IDictionary_2_t609_0_0_0;
extern Il2CppType IDictionary_2_t604_0_0_0;
extern Il2CppType IEnumerable_1_t724_0_0_0;
extern Il2CppType IEnumerator_1_t725_0_0_0;
extern MethodInfo PocoJsonSerializerStrategy_ContructorDelegateFactory_m3089_MethodInfo;
extern MethodInfo ThreadSafeDictionaryValueFactory_2__ctor_m3492_MethodInfo;
extern MethodInfo ThreadSafeDictionary_2__ctor_m3493_MethodInfo;
extern MethodInfo PocoJsonSerializerStrategy_GetterValueFactory_m3090_MethodInfo;
extern MethodInfo ThreadSafeDictionaryValueFactory_2__ctor_m3494_MethodInfo;
extern MethodInfo ThreadSafeDictionary_2__ctor_m3495_MethodInfo;
extern MethodInfo PocoJsonSerializerStrategy_SetterValueFactory_m3091_MethodInfo;
extern MethodInfo ThreadSafeDictionaryValueFactory_2__ctor_m3496_MethodInfo;
extern MethodInfo ThreadSafeDictionary_2__ctor_m3497_MethodInfo;
extern MethodInfo Type_GetTypeFromHandle_m1488_MethodInfo;
extern MethodInfo Type_get_IsArray_m3498_MethodInfo;
extern MethodInfo ReflectionUtils_GetContructor_m3125_MethodInfo;
extern MethodInfo Dictionary_2__ctor_m3499_MethodInfo;
extern MethodInfo ReflectionUtils_GetProperties_m3121_MethodInfo;
extern MethodInfo IEnumerable_1_GetEnumerator_m3500_MethodInfo;
extern MethodInfo IEnumerator_1_get_Current_m3501_MethodInfo;
extern MethodInfo PropertyInfo_get_CanRead_m3502_MethodInfo;
extern MethodInfo ReflectionUtils_GetGetterMethodInfo_m3123_MethodInfo;
extern MethodInfo MethodBase_get_IsStatic_m3503_MethodInfo;
extern MethodInfo MethodBase_get_IsPublic_m3504_MethodInfo;
extern MethodInfo MemberInfo_get_Name_m3505_MethodInfo;
extern MethodInfo PocoJsonSerializerStrategy_MapClrMemberNameToJsonFieldName_m3088_MethodInfo;
extern MethodInfo ReflectionUtils_GetGetMethod_m3128_MethodInfo;
extern MethodInfo IDictionary_2_set_Item_m3506_MethodInfo;
extern MethodInfo ReflectionUtils_GetFields_m3122_MethodInfo;
extern MethodInfo IEnumerable_1_GetEnumerator_m3507_MethodInfo;
extern MethodInfo IEnumerator_1_get_Current_m3508_MethodInfo;
extern MethodInfo FieldInfo_get_IsStatic_m3509_MethodInfo;
extern MethodInfo FieldInfo_get_IsPublic_m3510_MethodInfo;
extern MethodInfo ReflectionUtils_GetGetMethod_m3129_MethodInfo;
extern MethodInfo Dictionary_2__ctor_m3511_MethodInfo;
extern MethodInfo PropertyInfo_get_CanWrite_m3512_MethodInfo;
extern MethodInfo ReflectionUtils_GetSetterMethodInfo_m3124_MethodInfo;
extern MethodInfo PropertyInfo_get_PropertyType_m3513_MethodInfo;
extern MethodInfo ReflectionUtils_GetSetMethod_m3132_MethodInfo;
extern MethodInfo KeyValuePair_2__ctor_m3514_MethodInfo;
extern MethodInfo IDictionary_2_set_Item_m3515_MethodInfo;
extern MethodInfo FieldInfo_get_IsInitOnly_m3516_MethodInfo;
extern MethodInfo FieldInfo_get_FieldType_m3517_MethodInfo;
extern MethodInfo ReflectionUtils_GetSetMethod_m3133_MethodInfo;
extern MethodInfo PocoJsonSerializerStrategy_TrySerializeKnownTypes_m3094_MethodInfo;
extern MethodInfo PocoJsonSerializerStrategy_TrySerializeUnknownTypes_m3095_MethodInfo;
extern MethodInfo DateTime_ToUniversalTime_m3518_MethodInfo;
extern MethodInfo DateTime_ToString_m3519_MethodInfo;
extern MethodInfo DateTimeOffset_ToUniversalTime_m3520_MethodInfo;
extern MethodInfo DateTimeOffset_ToString_m3521_MethodInfo;
extern MethodInfo Guid_ToString_m3522_MethodInfo;
extern MethodInfo PocoJsonSerializerStrategy_SerializeEnum_m3093_MethodInfo;
extern MethodInfo Object_GetType_m1381_MethodInfo;
extern MethodInfo Type_get_FullName_m3523_MethodInfo;
extern MethodInfo IDictionary_2_get_Item_m3524_MethodInfo;
extern MethodInfo IEnumerable_1_GetEnumerator_m3525_MethodInfo;
extern MethodInfo IEnumerator_1_get_Current_m3526_MethodInfo;
extern MethodInfo GetDelegate_Invoke_m3097_MethodInfo;
extern MethodInfo IDictionary_2_Add_m3527_MethodInfo;
extern Il2CppGenericMethod ThreadSafeDictionaryValueFactory_2__ctor_m3492_GenericMethod;
extern Il2CppGenericMethod ThreadSafeDictionary_2__ctor_m3493_GenericMethod;
extern Il2CppGenericMethod ThreadSafeDictionaryValueFactory_2__ctor_m3494_GenericMethod;
extern Il2CppGenericMethod ThreadSafeDictionary_2__ctor_m3495_GenericMethod;
extern Il2CppGenericMethod ThreadSafeDictionaryValueFactory_2__ctor_m3496_GenericMethod;
extern Il2CppGenericMethod ThreadSafeDictionary_2__ctor_m3497_GenericMethod;
extern Il2CppGenericMethod Dictionary_2__ctor_m3499_GenericMethod;
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m3500_GenericMethod;
extern Il2CppGenericMethod IEnumerator_1_get_Current_m3501_GenericMethod;
extern Il2CppGenericMethod IDictionary_2_set_Item_m3506_GenericMethod;
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m3507_GenericMethod;
extern Il2CppGenericMethod IEnumerator_1_get_Current_m3508_GenericMethod;
extern Il2CppGenericMethod Dictionary_2__ctor_m3511_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2__ctor_m3514_GenericMethod;
extern Il2CppGenericMethod IDictionary_2_set_Item_m3515_GenericMethod;
extern Il2CppGenericMethod IDictionary_2_get_Item_m3524_GenericMethod;
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m3525_GenericMethod;
extern Il2CppGenericMethod IEnumerator_1_get_Current_m3526_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2_get_Value_m3528_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2_get_Key_m3529_GenericMethod;
extern Il2CppGenericMethod IDictionary_2_Add_m3527_GenericMethod;


// System.Void SimpleJson.PocoJsonSerializerStrategy::.ctor()
extern TypeInfo* ThreadSafeDictionaryValueFactory_2_t710_il2cpp_TypeInfo_var;
extern TypeInfo* ThreadSafeDictionary_2_t711_il2cpp_TypeInfo_var;
extern TypeInfo* ThreadSafeDictionaryValueFactory_2_t712_il2cpp_TypeInfo_var;
extern TypeInfo* ThreadSafeDictionary_2_t713_il2cpp_TypeInfo_var;
extern TypeInfo* ThreadSafeDictionaryValueFactory_2_t714_il2cpp_TypeInfo_var;
extern TypeInfo* ThreadSafeDictionary_2_t715_il2cpp_TypeInfo_var;
extern MethodInfo* ThreadSafeDictionaryValueFactory_2__ctor_m3492_MethodInfo_var;
extern MethodInfo* ThreadSafeDictionary_2__ctor_m3493_MethodInfo_var;
extern MethodInfo* ThreadSafeDictionaryValueFactory_2__ctor_m3494_MethodInfo_var;
extern MethodInfo* ThreadSafeDictionary_2__ctor_m3495_MethodInfo_var;
extern MethodInfo* ThreadSafeDictionaryValueFactory_2__ctor_m3496_MethodInfo_var;
extern MethodInfo* ThreadSafeDictionary_2__ctor_m3497_MethodInfo_var;
extern "C" void PocoJsonSerializerStrategy__ctor_m3086 (PocoJsonSerializerStrategy_t601 * __this, MethodInfo* method)
{
	static bool PocoJsonSerializerStrategy__ctor_m3086_init;
	if (!PocoJsonSerializerStrategy__ctor_m3086_init)
	{
		ThreadSafeDictionaryValueFactory_2_t710_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ThreadSafeDictionaryValueFactory_2_t710_0_0_0);
		ThreadSafeDictionary_2_t711_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ThreadSafeDictionary_2_t711_0_0_0);
		ThreadSafeDictionaryValueFactory_2_t712_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ThreadSafeDictionaryValueFactory_2_t712_0_0_0);
		ThreadSafeDictionary_2_t713_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ThreadSafeDictionary_2_t713_0_0_0);
		ThreadSafeDictionaryValueFactory_2_t714_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ThreadSafeDictionaryValueFactory_2_t714_0_0_0);
		ThreadSafeDictionary_2_t715_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ThreadSafeDictionary_2_t715_0_0_0);
		ThreadSafeDictionaryValueFactory_2__ctor_m3492_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&ThreadSafeDictionaryValueFactory_2__ctor_m3492_GenericMethod);
		ThreadSafeDictionary_2__ctor_m3493_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&ThreadSafeDictionary_2__ctor_m3493_GenericMethod);
		ThreadSafeDictionaryValueFactory_2__ctor_m3494_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&ThreadSafeDictionaryValueFactory_2__ctor_m3494_GenericMethod);
		ThreadSafeDictionary_2__ctor_m3495_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&ThreadSafeDictionary_2__ctor_m3495_GenericMethod);
		ThreadSafeDictionaryValueFactory_2__ctor_m3496_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&ThreadSafeDictionaryValueFactory_2__ctor_m3496_GenericMethod);
		ThreadSafeDictionary_2__ctor_m3497_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&ThreadSafeDictionary_2__ctor_m3497_GenericMethod);
		PocoJsonSerializerStrategy__ctor_m3086_init = true;
	}
	{
		Object__ctor_m1289(__this, /*hidden argument*/&Object__ctor_m1289_MethodInfo);
		IntPtr_t L_0 = { GetVirtualMethodInfo(__this, &PocoJsonSerializerStrategy_ContructorDelegateFactory_m3089_MethodInfo) };
		ThreadSafeDictionaryValueFactory_2_t710 * L_1 = (ThreadSafeDictionaryValueFactory_2_t710 *)il2cpp_codegen_object_new (ThreadSafeDictionaryValueFactory_2_t710_il2cpp_TypeInfo_var);
		ThreadSafeDictionaryValueFactory_2__ctor_m3492(L_1, __this, L_0, /*hidden argument*/ThreadSafeDictionaryValueFactory_2__ctor_m3492_MethodInfo_var);
		ThreadSafeDictionary_2_t711 * L_2 = (ThreadSafeDictionary_2_t711 *)il2cpp_codegen_object_new (ThreadSafeDictionary_2_t711_il2cpp_TypeInfo_var);
		ThreadSafeDictionary_2__ctor_m3493(L_2, L_1, /*hidden argument*/ThreadSafeDictionary_2__ctor_m3493_MethodInfo_var);
		__this->___ConstructorCache_0 = L_2;
		IntPtr_t L_3 = { GetVirtualMethodInfo(__this, &PocoJsonSerializerStrategy_GetterValueFactory_m3090_MethodInfo) };
		ThreadSafeDictionaryValueFactory_2_t712 * L_4 = (ThreadSafeDictionaryValueFactory_2_t712 *)il2cpp_codegen_object_new (ThreadSafeDictionaryValueFactory_2_t712_il2cpp_TypeInfo_var);
		ThreadSafeDictionaryValueFactory_2__ctor_m3494(L_4, __this, L_3, /*hidden argument*/ThreadSafeDictionaryValueFactory_2__ctor_m3494_MethodInfo_var);
		ThreadSafeDictionary_2_t713 * L_5 = (ThreadSafeDictionary_2_t713 *)il2cpp_codegen_object_new (ThreadSafeDictionary_2_t713_il2cpp_TypeInfo_var);
		ThreadSafeDictionary_2__ctor_m3495(L_5, L_4, /*hidden argument*/ThreadSafeDictionary_2__ctor_m3495_MethodInfo_var);
		__this->___GetCache_1 = L_5;
		IntPtr_t L_6 = { GetVirtualMethodInfo(__this, &PocoJsonSerializerStrategy_SetterValueFactory_m3091_MethodInfo) };
		ThreadSafeDictionaryValueFactory_2_t714 * L_7 = (ThreadSafeDictionaryValueFactory_2_t714 *)il2cpp_codegen_object_new (ThreadSafeDictionaryValueFactory_2_t714_il2cpp_TypeInfo_var);
		ThreadSafeDictionaryValueFactory_2__ctor_m3496(L_7, __this, L_6, /*hidden argument*/ThreadSafeDictionaryValueFactory_2__ctor_m3496_MethodInfo_var);
		ThreadSafeDictionary_2_t715 * L_8 = (ThreadSafeDictionary_2_t715 *)il2cpp_codegen_object_new (ThreadSafeDictionary_2_t715_il2cpp_TypeInfo_var);
		ThreadSafeDictionary_2__ctor_m3497(L_8, L_7, /*hidden argument*/ThreadSafeDictionary_2__ctor_m3497_MethodInfo_var);
		__this->___SetCache_2 = L_8;
		return;
	}
}
// System.Void SimpleJson.PocoJsonSerializerStrategy::.cctor()
extern MethodInfo PocoJsonSerializerStrategy__cctor_m3087_MethodInfo;
extern TypeInfo* TypeU5BU5D_t606_il2cpp_TypeInfo_var;
extern TypeInfo* StringU5BU5D_t423_il2cpp_TypeInfo_var;
extern "C" void PocoJsonSerializerStrategy__cctor_m3087 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	static bool PocoJsonSerializerStrategy__cctor_m3087_init;
	if (!PocoJsonSerializerStrategy__cctor_m3087_init)
	{
		TypeU5BU5D_t606_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&TypeU5BU5D_t606_0_0_0);
		StringU5BU5D_t423_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&StringU5BU5D_t423_0_0_0);
		PocoJsonSerializerStrategy__cctor_m3087_init = true;
	}
	{
		((PocoJsonSerializerStrategy_t601_StaticFields*)InitializedTypeInfo(&PocoJsonSerializerStrategy_t601_il2cpp_TypeInfo)->static_fields)->___EmptyTypes_3 = ((TypeU5BU5D_t606*)SZArrayNew(TypeU5BU5D_t606_il2cpp_TypeInfo_var, 0));
		TypeU5BU5D_t606* L_0 = ((TypeU5BU5D_t606*)SZArrayNew(TypeU5BU5D_t606_il2cpp_TypeInfo_var, 1));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_1 = Type_GetTypeFromHandle_m1488(NULL /*static, unused*/, LoadTypeToken(&Int32_t17_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m1488_MethodInfo);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_0, 0)) = (Type_t *)L_1;
		((PocoJsonSerializerStrategy_t601_StaticFields*)InitializedTypeInfo(&PocoJsonSerializerStrategy_t601_il2cpp_TypeInfo)->static_fields)->___ArrayConstructorParameterTypes_4 = L_0;
		StringU5BU5D_t423* L_2 = ((StringU5BU5D_t423*)SZArrayNew(StringU5BU5D_t423_il2cpp_TypeInfo_var, 3));
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		ArrayElementTypeCheck (L_2, (String_t*) &_stringLiteral276);
		*((String_t**)(String_t**)SZArrayLdElema(L_2, 0)) = (String_t*)(String_t*) &_stringLiteral276;
		StringU5BU5D_t423* L_3 = L_2;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 1);
		ArrayElementTypeCheck (L_3, (String_t*) &_stringLiteral277);
		*((String_t**)(String_t**)SZArrayLdElema(L_3, 1)) = (String_t*)(String_t*) &_stringLiteral277;
		StringU5BU5D_t423* L_4 = L_3;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 2);
		ArrayElementTypeCheck (L_4, (String_t*) &_stringLiteral278);
		*((String_t**)(String_t**)SZArrayLdElema(L_4, 2)) = (String_t*)(String_t*) &_stringLiteral278;
		((PocoJsonSerializerStrategy_t601_StaticFields*)InitializedTypeInfo(&PocoJsonSerializerStrategy_t601_il2cpp_TypeInfo)->static_fields)->___Iso8601Format_5 = L_4;
		return;
	}
}
// System.String SimpleJson.PocoJsonSerializerStrategy::MapClrMemberNameToJsonFieldName(System.String)
extern "C" String_t* PocoJsonSerializerStrategy_MapClrMemberNameToJsonFieldName_m3088 (PocoJsonSerializerStrategy_t601 * __this, String_t* ___clrPropertyName, MethodInfo* method)
{
	{
		String_t* L_0 = ___clrPropertyName;
		return L_0;
	}
}
// SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate SimpleJson.PocoJsonSerializerStrategy::ContructorDelegateFactory(System.Type)
extern "C" ConstructorDelegate_t607 * PocoJsonSerializerStrategy_ContructorDelegateFactory_m3089 (PocoJsonSerializerStrategy_t601 * __this, Type_t * ___key, MethodInfo* method)
{
	Type_t * G_B2_0 = {0};
	Type_t * G_B1_0 = {0};
	TypeU5BU5D_t606* G_B3_0 = {0};
	Type_t * G_B3_1 = {0};
	{
		Type_t * L_0 = ___key;
		Type_t * L_1 = ___key;
		NullCheck(L_1);
		bool L_2 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsArray_m3498_MethodInfo, L_1);
		G_B1_0 = L_0;
		if (!L_2)
		{
			G_B2_0 = L_0;
			goto IL_0016;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&PocoJsonSerializerStrategy_t601_il2cpp_TypeInfo));
		TypeU5BU5D_t606* L_3 = ((PocoJsonSerializerStrategy_t601_StaticFields*)InitializedTypeInfo(&PocoJsonSerializerStrategy_t601_il2cpp_TypeInfo)->static_fields)->___ArrayConstructorParameterTypes_4;
		G_B3_0 = L_3;
		G_B3_1 = G_B1_0;
		goto IL_001b;
	}

IL_0016:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&PocoJsonSerializerStrategy_t601_il2cpp_TypeInfo));
		TypeU5BU5D_t606* L_4 = ((PocoJsonSerializerStrategy_t601_StaticFields*)InitializedTypeInfo(&PocoJsonSerializerStrategy_t601_il2cpp_TypeInfo)->static_fields)->___EmptyTypes_3;
		G_B3_0 = L_4;
		G_B3_1 = G_B2_0;
	}

IL_001b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ReflectionUtils_t618_il2cpp_TypeInfo));
		ConstructorDelegate_t607 * L_5 = ReflectionUtils_GetContructor_m3125(NULL /*static, unused*/, G_B3_1, G_B3_0, /*hidden argument*/&ReflectionUtils_GetContructor_m3125_MethodInfo);
		return L_5;
	}
}
// System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate> SimpleJson.PocoJsonSerializerStrategy::GetterValueFactory(System.Type)
extern TypeInfo* Dictionary_2_t716_il2cpp_TypeInfo_var;
extern MethodInfo* Dictionary_2__ctor_m3499_MethodInfo_var;
extern MethodInfo* IEnumerable_1_GetEnumerator_m3500_MethodInfo_var;
extern MethodInfo* IEnumerator_1_get_Current_m3501_MethodInfo_var;
extern MethodInfo* IDictionary_2_set_Item_m3506_MethodInfo_var;
extern MethodInfo* IEnumerable_1_GetEnumerator_m3507_MethodInfo_var;
extern MethodInfo* IEnumerator_1_get_Current_m3508_MethodInfo_var;
extern "C" Object_t* PocoJsonSerializerStrategy_GetterValueFactory_m3090 (PocoJsonSerializerStrategy_t601 * __this, Type_t * ___type, MethodInfo* method)
{
	static bool PocoJsonSerializerStrategy_GetterValueFactory_m3090_init;
	if (!PocoJsonSerializerStrategy_GetterValueFactory_m3090_init)
	{
		Dictionary_2_t716_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Dictionary_2_t716_0_0_0);
		Dictionary_2__ctor_m3499_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2__ctor_m3499_GenericMethod);
		IEnumerable_1_GetEnumerator_m3500_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&IEnumerable_1_GetEnumerator_m3500_GenericMethod);
		IEnumerator_1_get_Current_m3501_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&IEnumerator_1_get_Current_m3501_GenericMethod);
		IDictionary_2_set_Item_m3506_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&IDictionary_2_set_Item_m3506_GenericMethod);
		IEnumerable_1_GetEnumerator_m3507_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&IEnumerable_1_GetEnumerator_m3507_GenericMethod);
		IEnumerator_1_get_Current_m3508_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&IEnumerator_1_get_Current_m3508_GenericMethod);
		PocoJsonSerializerStrategy_GetterValueFactory_m3090_init = true;
	}
	Object_t* V_0 = {0};
	PropertyInfo_t * V_1 = {0};
	Object_t* V_2 = {0};
	MethodInfo_t * V_3 = {0};
	FieldInfo_t * V_4 = {0};
	Object_t* V_5 = {0};
	Exception_t275 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t275 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Dictionary_2_t716 * L_0 = (Dictionary_2_t716 *)il2cpp_codegen_object_new (Dictionary_2_t716_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3499(L_0, /*hidden argument*/Dictionary_2__ctor_m3499_MethodInfo_var);
		V_0 = L_0;
		Type_t * L_1 = ___type;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ReflectionUtils_t618_il2cpp_TypeInfo));
		Object_t* L_2 = ReflectionUtils_GetProperties_m3121(NULL /*static, unused*/, L_1, /*hidden argument*/&ReflectionUtils_GetProperties_m3121_MethodInfo);
		NullCheck(L_2);
		Object_t* L_3 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(IEnumerable_1_GetEnumerator_m3500_MethodInfo_var, L_2);
		V_2 = L_3;
	}

IL_0012:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0063;
		}

IL_0017:
		{
			Object_t* L_4 = V_2;
			NullCheck(L_4);
			PropertyInfo_t * L_5 = (PropertyInfo_t *)InterfaceFuncInvoker0< PropertyInfo_t * >::Invoke(IEnumerator_1_get_Current_m3501_MethodInfo_var, L_4);
			V_1 = L_5;
			PropertyInfo_t * L_6 = V_1;
			NullCheck(L_6);
			bool L_7 = (bool)VirtFuncInvoker0< bool >::Invoke(&PropertyInfo_get_CanRead_m3502_MethodInfo, L_6);
			if (!L_7)
			{
				goto IL_0063;
			}
		}

IL_0029:
		{
			PropertyInfo_t * L_8 = V_1;
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ReflectionUtils_t618_il2cpp_TypeInfo));
			MethodInfo_t * L_9 = ReflectionUtils_GetGetterMethodInfo_m3123(NULL /*static, unused*/, L_8, /*hidden argument*/&ReflectionUtils_GetGetterMethodInfo_m3123_MethodInfo);
			V_3 = L_9;
			MethodInfo_t * L_10 = V_3;
			NullCheck(L_10);
			bool L_11 = (bool)VirtFuncInvoker0< bool >::Invoke(&MethodBase_get_IsStatic_m3503_MethodInfo, L_10);
			if (L_11)
			{
				goto IL_0046;
			}
		}

IL_003b:
		{
			MethodInfo_t * L_12 = V_3;
			NullCheck(L_12);
			bool L_13 = (bool)VirtFuncInvoker0< bool >::Invoke(&MethodBase_get_IsPublic_m3504_MethodInfo, L_12);
			if (L_13)
			{
				goto IL_004b;
			}
		}

IL_0046:
		{
			goto IL_0063;
		}

IL_004b:
		{
			Object_t* L_14 = V_0;
			PropertyInfo_t * L_15 = V_1;
			NullCheck(L_15);
			String_t* L_16 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&MemberInfo_get_Name_m3505_MethodInfo, L_15);
			String_t* L_17 = (String_t*)VirtFuncInvoker1< String_t*, String_t* >::Invoke(&PocoJsonSerializerStrategy_MapClrMemberNameToJsonFieldName_m3088_MethodInfo, __this, L_16);
			PropertyInfo_t * L_18 = V_1;
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ReflectionUtils_t618_il2cpp_TypeInfo));
			GetDelegate_t610 * L_19 = ReflectionUtils_GetGetMethod_m3128(NULL /*static, unused*/, L_18, /*hidden argument*/&ReflectionUtils_GetGetMethod_m3128_MethodInfo);
			NullCheck(L_14);
			InterfaceActionInvoker2< String_t*, GetDelegate_t610 * >::Invoke(IDictionary_2_set_Item_m3506_MethodInfo_var, L_14, L_17, L_19);
		}

IL_0063:
		{
			Object_t* L_20 = V_2;
			NullCheck(L_20);
			bool L_21 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&IEnumerator_MoveNext_m3457_MethodInfo, L_20);
			if (L_21)
			{
				goto IL_0017;
			}
		}

IL_006e:
		{
			IL2CPP_LEAVE(0x7E, FINALLY_0073);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t275 *)e.ex;
		goto FINALLY_0073;
	}

FINALLY_0073:
	{ // begin finally (depth: 1)
		{
			Object_t* L_22 = V_2;
			if (L_22)
			{
				goto IL_0077;
			}
		}

IL_0076:
		{
			IL2CPP_END_FINALLY(115)
		}

IL_0077:
		{
			Object_t* L_23 = V_2;
			NullCheck(L_23);
			InterfaceActionInvoker0::Invoke(&IDisposable_Dispose_m1379_MethodInfo, L_23);
			IL2CPP_END_FINALLY(115)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(115)
	{
		IL2CPP_JUMP_TBL(0x7E, IL_007e)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t275 *)
	}

IL_007e:
	{
		Type_t * L_24 = ___type;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ReflectionUtils_t618_il2cpp_TypeInfo));
		Object_t* L_25 = ReflectionUtils_GetFields_m3122(NULL /*static, unused*/, L_24, /*hidden argument*/&ReflectionUtils_GetFields_m3122_MethodInfo);
		NullCheck(L_25);
		Object_t* L_26 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(IEnumerable_1_GetEnumerator_m3507_MethodInfo_var, L_25);
		V_5 = L_26;
	}

IL_008b:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00d0;
		}

IL_0090:
		{
			Object_t* L_27 = V_5;
			NullCheck(L_27);
			FieldInfo_t * L_28 = (FieldInfo_t *)InterfaceFuncInvoker0< FieldInfo_t * >::Invoke(IEnumerator_1_get_Current_m3508_MethodInfo_var, L_27);
			V_4 = L_28;
			FieldInfo_t * L_29 = V_4;
			NullCheck(L_29);
			bool L_30 = (bool)VirtFuncInvoker0< bool >::Invoke(&FieldInfo_get_IsStatic_m3509_MethodInfo, L_29);
			if (L_30)
			{
				goto IL_00b1;
			}
		}

IL_00a5:
		{
			FieldInfo_t * L_31 = V_4;
			NullCheck(L_31);
			bool L_32 = (bool)VirtFuncInvoker0< bool >::Invoke(&FieldInfo_get_IsPublic_m3510_MethodInfo, L_31);
			if (L_32)
			{
				goto IL_00b6;
			}
		}

IL_00b1:
		{
			goto IL_00d0;
		}

IL_00b6:
		{
			Object_t* L_33 = V_0;
			FieldInfo_t * L_34 = V_4;
			NullCheck(L_34);
			String_t* L_35 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&MemberInfo_get_Name_m3505_MethodInfo, L_34);
			String_t* L_36 = (String_t*)VirtFuncInvoker1< String_t*, String_t* >::Invoke(&PocoJsonSerializerStrategy_MapClrMemberNameToJsonFieldName_m3088_MethodInfo, __this, L_35);
			FieldInfo_t * L_37 = V_4;
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ReflectionUtils_t618_il2cpp_TypeInfo));
			GetDelegate_t610 * L_38 = ReflectionUtils_GetGetMethod_m3129(NULL /*static, unused*/, L_37, /*hidden argument*/&ReflectionUtils_GetGetMethod_m3129_MethodInfo);
			NullCheck(L_33);
			InterfaceActionInvoker2< String_t*, GetDelegate_t610 * >::Invoke(IDictionary_2_set_Item_m3506_MethodInfo_var, L_33, L_36, L_38);
		}

IL_00d0:
		{
			Object_t* L_39 = V_5;
			NullCheck(L_39);
			bool L_40 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&IEnumerator_MoveNext_m3457_MethodInfo, L_39);
			if (L_40)
			{
				goto IL_0090;
			}
		}

IL_00dc:
		{
			IL2CPP_LEAVE(0xEE, FINALLY_00e1);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t275 *)e.ex;
		goto FINALLY_00e1;
	}

FINALLY_00e1:
	{ // begin finally (depth: 1)
		{
			Object_t* L_41 = V_5;
			if (L_41)
			{
				goto IL_00e6;
			}
		}

IL_00e5:
		{
			IL2CPP_END_FINALLY(225)
		}

IL_00e6:
		{
			Object_t* L_42 = V_5;
			NullCheck(L_42);
			InterfaceActionInvoker0::Invoke(&IDisposable_Dispose_m1379_MethodInfo, L_42);
			IL2CPP_END_FINALLY(225)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(225)
	{
		IL2CPP_JUMP_TBL(0xEE, IL_00ee)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t275 *)
	}

IL_00ee:
	{
		Object_t* L_43 = V_0;
		return L_43;
	}
}
// System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>> SimpleJson.PocoJsonSerializerStrategy::SetterValueFactory(System.Type)
extern TypeInfo* Dictionary_2_t720_il2cpp_TypeInfo_var;
extern MethodInfo* Dictionary_2__ctor_m3511_MethodInfo_var;
extern MethodInfo* IEnumerable_1_GetEnumerator_m3500_MethodInfo_var;
extern MethodInfo* IEnumerator_1_get_Current_m3501_MethodInfo_var;
extern MethodInfo* KeyValuePair_2__ctor_m3514_MethodInfo_var;
extern MethodInfo* IDictionary_2_set_Item_m3515_MethodInfo_var;
extern MethodInfo* IEnumerable_1_GetEnumerator_m3507_MethodInfo_var;
extern MethodInfo* IEnumerator_1_get_Current_m3508_MethodInfo_var;
extern "C" Object_t* PocoJsonSerializerStrategy_SetterValueFactory_m3091 (PocoJsonSerializerStrategy_t601 * __this, Type_t * ___type, MethodInfo* method)
{
	static bool PocoJsonSerializerStrategy_SetterValueFactory_m3091_init;
	if (!PocoJsonSerializerStrategy_SetterValueFactory_m3091_init)
	{
		Dictionary_2_t720_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Dictionary_2_t720_0_0_0);
		Dictionary_2__ctor_m3511_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2__ctor_m3511_GenericMethod);
		IEnumerable_1_GetEnumerator_m3500_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&IEnumerable_1_GetEnumerator_m3500_GenericMethod);
		IEnumerator_1_get_Current_m3501_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&IEnumerator_1_get_Current_m3501_GenericMethod);
		KeyValuePair_2__ctor_m3514_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&KeyValuePair_2__ctor_m3514_GenericMethod);
		IDictionary_2_set_Item_m3515_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&IDictionary_2_set_Item_m3515_GenericMethod);
		IEnumerable_1_GetEnumerator_m3507_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&IEnumerable_1_GetEnumerator_m3507_GenericMethod);
		IEnumerator_1_get_Current_m3508_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&IEnumerator_1_get_Current_m3508_GenericMethod);
		PocoJsonSerializerStrategy_SetterValueFactory_m3091_init = true;
	}
	Object_t* V_0 = {0};
	PropertyInfo_t * V_1 = {0};
	Object_t* V_2 = {0};
	MethodInfo_t * V_3 = {0};
	FieldInfo_t * V_4 = {0};
	Object_t* V_5 = {0};
	Exception_t275 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t275 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Dictionary_2_t720 * L_0 = (Dictionary_2_t720 *)il2cpp_codegen_object_new (Dictionary_2_t720_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3511(L_0, /*hidden argument*/Dictionary_2__ctor_m3511_MethodInfo_var);
		V_0 = L_0;
		Type_t * L_1 = ___type;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ReflectionUtils_t618_il2cpp_TypeInfo));
		Object_t* L_2 = ReflectionUtils_GetProperties_m3121(NULL /*static, unused*/, L_1, /*hidden argument*/&ReflectionUtils_GetProperties_m3121_MethodInfo);
		NullCheck(L_2);
		Object_t* L_3 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(IEnumerable_1_GetEnumerator_m3500_MethodInfo_var, L_2);
		V_2 = L_3;
	}

IL_0012:
	try
	{ // begin try (depth: 1)
		{
			goto IL_006e;
		}

IL_0017:
		{
			Object_t* L_4 = V_2;
			NullCheck(L_4);
			PropertyInfo_t * L_5 = (PropertyInfo_t *)InterfaceFuncInvoker0< PropertyInfo_t * >::Invoke(IEnumerator_1_get_Current_m3501_MethodInfo_var, L_4);
			V_1 = L_5;
			PropertyInfo_t * L_6 = V_1;
			NullCheck(L_6);
			bool L_7 = (bool)VirtFuncInvoker0< bool >::Invoke(&PropertyInfo_get_CanWrite_m3512_MethodInfo, L_6);
			if (!L_7)
			{
				goto IL_006e;
			}
		}

IL_0029:
		{
			PropertyInfo_t * L_8 = V_1;
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ReflectionUtils_t618_il2cpp_TypeInfo));
			MethodInfo_t * L_9 = ReflectionUtils_GetSetterMethodInfo_m3124(NULL /*static, unused*/, L_8, /*hidden argument*/&ReflectionUtils_GetSetterMethodInfo_m3124_MethodInfo);
			V_3 = L_9;
			MethodInfo_t * L_10 = V_3;
			NullCheck(L_10);
			bool L_11 = (bool)VirtFuncInvoker0< bool >::Invoke(&MethodBase_get_IsStatic_m3503_MethodInfo, L_10);
			if (L_11)
			{
				goto IL_0046;
			}
		}

IL_003b:
		{
			MethodInfo_t * L_12 = V_3;
			NullCheck(L_12);
			bool L_13 = (bool)VirtFuncInvoker0< bool >::Invoke(&MethodBase_get_IsPublic_m3504_MethodInfo, L_12);
			if (L_13)
			{
				goto IL_004b;
			}
		}

IL_0046:
		{
			goto IL_006e;
		}

IL_004b:
		{
			Object_t* L_14 = V_0;
			PropertyInfo_t * L_15 = V_1;
			NullCheck(L_15);
			String_t* L_16 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&MemberInfo_get_Name_m3505_MethodInfo, L_15);
			String_t* L_17 = (String_t*)VirtFuncInvoker1< String_t*, String_t* >::Invoke(&PocoJsonSerializerStrategy_MapClrMemberNameToJsonFieldName_m3088_MethodInfo, __this, L_16);
			PropertyInfo_t * L_18 = V_1;
			NullCheck(L_18);
			Type_t * L_19 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&PropertyInfo_get_PropertyType_m3513_MethodInfo, L_18);
			PropertyInfo_t * L_20 = V_1;
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ReflectionUtils_t618_il2cpp_TypeInfo));
			SetDelegate_t611 * L_21 = ReflectionUtils_GetSetMethod_m3132(NULL /*static, unused*/, L_20, /*hidden argument*/&ReflectionUtils_GetSetMethod_m3132_MethodInfo);
			KeyValuePair_2_t721  L_22 = {0};
			KeyValuePair_2__ctor_m3514(&L_22, L_19, L_21, /*hidden argument*/KeyValuePair_2__ctor_m3514_MethodInfo_var);
			NullCheck(L_14);
			InterfaceActionInvoker2< String_t*, KeyValuePair_2_t721  >::Invoke(IDictionary_2_set_Item_m3515_MethodInfo_var, L_14, L_17, L_22);
		}

IL_006e:
		{
			Object_t* L_23 = V_2;
			NullCheck(L_23);
			bool L_24 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&IEnumerator_MoveNext_m3457_MethodInfo, L_23);
			if (L_24)
			{
				goto IL_0017;
			}
		}

IL_0079:
		{
			IL2CPP_LEAVE(0x89, FINALLY_007e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t275 *)e.ex;
		goto FINALLY_007e;
	}

FINALLY_007e:
	{ // begin finally (depth: 1)
		{
			Object_t* L_25 = V_2;
			if (L_25)
			{
				goto IL_0082;
			}
		}

IL_0081:
		{
			IL2CPP_END_FINALLY(126)
		}

IL_0082:
		{
			Object_t* L_26 = V_2;
			NullCheck(L_26);
			InterfaceActionInvoker0::Invoke(&IDisposable_Dispose_m1379_MethodInfo, L_26);
			IL2CPP_END_FINALLY(126)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(126)
	{
		IL2CPP_JUMP_TBL(0x89, IL_0089)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t275 *)
	}

IL_0089:
	{
		Type_t * L_27 = ___type;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ReflectionUtils_t618_il2cpp_TypeInfo));
		Object_t* L_28 = ReflectionUtils_GetFields_m3122(NULL /*static, unused*/, L_27, /*hidden argument*/&ReflectionUtils_GetFields_m3122_MethodInfo);
		NullCheck(L_28);
		Object_t* L_29 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(IEnumerable_1_GetEnumerator_m3507_MethodInfo_var, L_28);
		V_5 = L_29;
	}

IL_0096:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00f3;
		}

IL_009b:
		{
			Object_t* L_30 = V_5;
			NullCheck(L_30);
			FieldInfo_t * L_31 = (FieldInfo_t *)InterfaceFuncInvoker0< FieldInfo_t * >::Invoke(IEnumerator_1_get_Current_m3508_MethodInfo_var, L_30);
			V_4 = L_31;
			FieldInfo_t * L_32 = V_4;
			NullCheck(L_32);
			bool L_33 = (bool)VirtFuncInvoker0< bool >::Invoke(&FieldInfo_get_IsInitOnly_m3516_MethodInfo, L_32);
			if (L_33)
			{
				goto IL_00c8;
			}
		}

IL_00b0:
		{
			FieldInfo_t * L_34 = V_4;
			NullCheck(L_34);
			bool L_35 = (bool)VirtFuncInvoker0< bool >::Invoke(&FieldInfo_get_IsStatic_m3509_MethodInfo, L_34);
			if (L_35)
			{
				goto IL_00c8;
			}
		}

IL_00bc:
		{
			FieldInfo_t * L_36 = V_4;
			NullCheck(L_36);
			bool L_37 = (bool)VirtFuncInvoker0< bool >::Invoke(&FieldInfo_get_IsPublic_m3510_MethodInfo, L_36);
			if (L_37)
			{
				goto IL_00cd;
			}
		}

IL_00c8:
		{
			goto IL_00f3;
		}

IL_00cd:
		{
			Object_t* L_38 = V_0;
			FieldInfo_t * L_39 = V_4;
			NullCheck(L_39);
			String_t* L_40 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&MemberInfo_get_Name_m3505_MethodInfo, L_39);
			String_t* L_41 = (String_t*)VirtFuncInvoker1< String_t*, String_t* >::Invoke(&PocoJsonSerializerStrategy_MapClrMemberNameToJsonFieldName_m3088_MethodInfo, __this, L_40);
			FieldInfo_t * L_42 = V_4;
			NullCheck(L_42);
			Type_t * L_43 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&FieldInfo_get_FieldType_m3517_MethodInfo, L_42);
			FieldInfo_t * L_44 = V_4;
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ReflectionUtils_t618_il2cpp_TypeInfo));
			SetDelegate_t611 * L_45 = ReflectionUtils_GetSetMethod_m3133(NULL /*static, unused*/, L_44, /*hidden argument*/&ReflectionUtils_GetSetMethod_m3133_MethodInfo);
			KeyValuePair_2_t721  L_46 = {0};
			KeyValuePair_2__ctor_m3514(&L_46, L_43, L_45, /*hidden argument*/KeyValuePair_2__ctor_m3514_MethodInfo_var);
			NullCheck(L_38);
			InterfaceActionInvoker2< String_t*, KeyValuePair_2_t721  >::Invoke(IDictionary_2_set_Item_m3515_MethodInfo_var, L_38, L_41, L_46);
		}

IL_00f3:
		{
			Object_t* L_47 = V_5;
			NullCheck(L_47);
			bool L_48 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&IEnumerator_MoveNext_m3457_MethodInfo, L_47);
			if (L_48)
			{
				goto IL_009b;
			}
		}

IL_00ff:
		{
			IL2CPP_LEAVE(0x111, FINALLY_0104);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t275 *)e.ex;
		goto FINALLY_0104;
	}

FINALLY_0104:
	{ // begin finally (depth: 1)
		{
			Object_t* L_49 = V_5;
			if (L_49)
			{
				goto IL_0109;
			}
		}

IL_0108:
		{
			IL2CPP_END_FINALLY(260)
		}

IL_0109:
		{
			Object_t* L_50 = V_5;
			NullCheck(L_50);
			InterfaceActionInvoker0::Invoke(&IDisposable_Dispose_m1379_MethodInfo, L_50);
			IL2CPP_END_FINALLY(260)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(260)
	{
		IL2CPP_JUMP_TBL(0x111, IL_0111)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t275 *)
	}

IL_0111:
	{
		Object_t* L_51 = V_0;
		return L_51;
	}
}
// System.Boolean SimpleJson.PocoJsonSerializerStrategy::TrySerializeNonPrimitiveObject(System.Object,System.Object&)
extern MethodInfo PocoJsonSerializerStrategy_TrySerializeNonPrimitiveObject_m3092_MethodInfo;
extern "C" bool PocoJsonSerializerStrategy_TrySerializeNonPrimitiveObject_m3092 (PocoJsonSerializerStrategy_t601 * __this, Object_t * ___input, Object_t ** ___output, MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		Object_t * L_0 = ___input;
		Object_t ** L_1 = ___output;
		bool L_2 = (bool)VirtFuncInvoker2< bool, Object_t *, Object_t ** >::Invoke(&PocoJsonSerializerStrategy_TrySerializeKnownTypes_m3094_MethodInfo, __this, L_0, L_1);
		if (L_2)
		{
			goto IL_0017;
		}
	}
	{
		Object_t * L_3 = ___input;
		Object_t ** L_4 = ___output;
		bool L_5 = (bool)VirtFuncInvoker2< bool, Object_t *, Object_t ** >::Invoke(&PocoJsonSerializerStrategy_TrySerializeUnknownTypes_m3095_MethodInfo, __this, L_3, L_4);
		G_B3_0 = ((int32_t)(L_5));
		goto IL_0018;
	}

IL_0017:
	{
		G_B3_0 = 1;
	}

IL_0018:
	{
		return G_B3_0;
	}
}
// System.Object SimpleJson.PocoJsonSerializerStrategy::SerializeEnum(System.Enum)
extern "C" Object_t * PocoJsonSerializerStrategy_SerializeEnum_m3093 (PocoJsonSerializerStrategy_t601 * __this, Enum_t334 * ___p, MethodInfo* method)
{
	{
		Enum_t334 * L_0 = ___p;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CultureInfo_t702_il2cpp_TypeInfo));
		CultureInfo_t702 * L_1 = CultureInfo_get_InvariantCulture_m3468(NULL /*static, unused*/, /*hidden argument*/&CultureInfo_get_InvariantCulture_m3468_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Convert_t689_il2cpp_TypeInfo));
		double L_2 = Convert_ToDouble_m3488(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Convert_ToDouble_m3488_MethodInfo);
		double L_3 = L_2;
		Object_t * L_4 = Box(InitializedTypeInfo(&Double_t704_il2cpp_TypeInfo), &L_3);
		return L_4;
	}
}
// System.Boolean SimpleJson.PocoJsonSerializerStrategy::TrySerializeKnownTypes(System.Object,System.Object&)
extern "C" bool PocoJsonSerializerStrategy_TrySerializeKnownTypes_m3094 (PocoJsonSerializerStrategy_t601 * __this, Object_t * ___input, Object_t ** ___output, MethodInfo* method)
{
	bool V_0 = false;
	Enum_t334 * V_1 = {0};
	DateTime_t465  V_2 = {0};
	DateTime_t465  V_3 = {0};
	DateTimeOffset_t722  V_4 = {0};
	DateTimeOffset_t722  V_5 = {0};
	Guid_t723  V_6 = {0};
	{
		V_0 = 1;
		Object_t * L_0 = ___input;
		if (!((Object_t *)IsInst(L_0, InitializedTypeInfo(&DateTime_t465_il2cpp_TypeInfo))))
		{
			goto IL_0036;
		}
	}
	{
		Object_t ** L_1 = ___output;
		Object_t * L_2 = ___input;
		V_2 = ((*(DateTime_t465 *)((DateTime_t465 *)UnBox (L_2, InitializedTypeInfo(&DateTime_t465_il2cpp_TypeInfo)))));
		DateTime_t465  L_3 = DateTime_ToUniversalTime_m3518((&V_2), /*hidden argument*/&DateTime_ToUniversalTime_m3518_MethodInfo);
		V_3 = L_3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&PocoJsonSerializerStrategy_t601_il2cpp_TypeInfo));
		StringU5BU5D_t423* L_4 = ((PocoJsonSerializerStrategy_t601_StaticFields*)InitializedTypeInfo(&PocoJsonSerializerStrategy_t601_il2cpp_TypeInfo)->static_fields)->___Iso8601Format_5;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 0);
		int32_t L_5 = 0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CultureInfo_t702_il2cpp_TypeInfo));
		CultureInfo_t702 * L_6 = CultureInfo_get_InvariantCulture_m3468(NULL /*static, unused*/, /*hidden argument*/&CultureInfo_get_InvariantCulture_m3468_MethodInfo);
		String_t* L_7 = DateTime_ToString_m3519((&V_3), (*(String_t**)(String_t**)SZArrayLdElema(L_4, L_5)), L_6, /*hidden argument*/&DateTime_ToString_m3519_MethodInfo);
		*((Object_t **)(L_1)) = (Object_t *)L_7;
		goto IL_00ca;
	}

IL_0036:
	{
		Object_t * L_8 = ___input;
		if (!((Object_t *)IsInst(L_8, InitializedTypeInfo(&DateTimeOffset_t722_il2cpp_TypeInfo))))
		{
			goto IL_006c;
		}
	}
	{
		Object_t ** L_9 = ___output;
		Object_t * L_10 = ___input;
		V_4 = ((*(DateTimeOffset_t722 *)((DateTimeOffset_t722 *)UnBox (L_10, InitializedTypeInfo(&DateTimeOffset_t722_il2cpp_TypeInfo)))));
		DateTimeOffset_t722  L_11 = DateTimeOffset_ToUniversalTime_m3520((&V_4), /*hidden argument*/&DateTimeOffset_ToUniversalTime_m3520_MethodInfo);
		V_5 = L_11;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&PocoJsonSerializerStrategy_t601_il2cpp_TypeInfo));
		StringU5BU5D_t423* L_12 = ((PocoJsonSerializerStrategy_t601_StaticFields*)InitializedTypeInfo(&PocoJsonSerializerStrategy_t601_il2cpp_TypeInfo)->static_fields)->___Iso8601Format_5;
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 0);
		int32_t L_13 = 0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CultureInfo_t702_il2cpp_TypeInfo));
		CultureInfo_t702 * L_14 = CultureInfo_get_InvariantCulture_m3468(NULL /*static, unused*/, /*hidden argument*/&CultureInfo_get_InvariantCulture_m3468_MethodInfo);
		String_t* L_15 = DateTimeOffset_ToString_m3521((&V_5), (*(String_t**)(String_t**)SZArrayLdElema(L_12, L_13)), L_14, /*hidden argument*/&DateTimeOffset_ToString_m3521_MethodInfo);
		*((Object_t **)(L_9)) = (Object_t *)L_15;
		goto IL_00ca;
	}

IL_006c:
	{
		Object_t * L_16 = ___input;
		if (!((Object_t *)IsInst(L_16, InitializedTypeInfo(&Guid_t723_il2cpp_TypeInfo))))
		{
			goto IL_0092;
		}
	}
	{
		Object_t ** L_17 = ___output;
		Object_t * L_18 = ___input;
		V_6 = ((*(Guid_t723 *)((Guid_t723 *)UnBox (L_18, InitializedTypeInfo(&Guid_t723_il2cpp_TypeInfo)))));
		String_t* L_19 = Guid_ToString_m3522((&V_6), (String_t*) &_stringLiteral279, /*hidden argument*/&Guid_ToString_m3522_MethodInfo);
		*((Object_t **)(L_17)) = (Object_t *)L_19;
		goto IL_00ca;
	}

IL_0092:
	{
		Object_t * L_20 = ___input;
		if (!((Uri_t586 *)IsInst(L_20, InitializedTypeInfo(&Uri_t586_il2cpp_TypeInfo))))
		{
			goto IL_00aa;
		}
	}
	{
		Object_t ** L_21 = ___output;
		Object_t * L_22 = ___input;
		NullCheck(L_22);
		String_t* L_23 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Object_ToString_m1967_MethodInfo, L_22);
		*((Object_t **)(L_21)) = (Object_t *)L_23;
		goto IL_00ca;
	}

IL_00aa:
	{
		Object_t * L_24 = ___input;
		V_1 = ((Enum_t334 *)IsInst(L_24, InitializedTypeInfo(&Enum_t334_il2cpp_TypeInfo)));
		Enum_t334 * L_25 = V_1;
		if (!L_25)
		{
			goto IL_00c5;
		}
	}
	{
		Object_t ** L_26 = ___output;
		Enum_t334 * L_27 = V_1;
		Object_t * L_28 = (Object_t *)VirtFuncInvoker1< Object_t *, Enum_t334 * >::Invoke(&PocoJsonSerializerStrategy_SerializeEnum_m3093_MethodInfo, __this, L_27);
		*((Object_t **)(L_26)) = (Object_t *)L_28;
		goto IL_00ca;
	}

IL_00c5:
	{
		V_0 = 0;
		Object_t ** L_29 = ___output;
		*((Object_t **)(L_29)) = (Object_t *)NULL;
	}

IL_00ca:
	{
		bool L_30 = V_0;
		return L_30;
	}
}
// System.Boolean SimpleJson.PocoJsonSerializerStrategy::TrySerializeUnknownTypes(System.Object,System.Object&)
extern MethodInfo* IDictionary_2_get_Item_m3524_MethodInfo_var;
extern MethodInfo* IEnumerable_1_GetEnumerator_m3525_MethodInfo_var;
extern MethodInfo* IEnumerator_1_get_Current_m3526_MethodInfo_var;
extern MethodInfo* KeyValuePair_2_get_Value_m3528_MethodInfo_var;
extern MethodInfo* KeyValuePair_2_get_Key_m3529_MethodInfo_var;
extern MethodInfo* IDictionary_2_Add_m3527_MethodInfo_var;
extern "C" bool PocoJsonSerializerStrategy_TrySerializeUnknownTypes_m3095 (PocoJsonSerializerStrategy_t601 * __this, Object_t * ___input, Object_t ** ___output, MethodInfo* method)
{
	static bool PocoJsonSerializerStrategy_TrySerializeUnknownTypes_m3095_init;
	if (!PocoJsonSerializerStrategy_TrySerializeUnknownTypes_m3095_init)
	{
		IDictionary_2_get_Item_m3524_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&IDictionary_2_get_Item_m3524_GenericMethod);
		IEnumerable_1_GetEnumerator_m3525_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&IEnumerable_1_GetEnumerator_m3525_GenericMethod);
		IEnumerator_1_get_Current_m3526_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&IEnumerator_1_get_Current_m3526_GenericMethod);
		KeyValuePair_2_get_Value_m3528_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&KeyValuePair_2_get_Value_m3528_GenericMethod);
		KeyValuePair_2_get_Key_m3529_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&KeyValuePair_2_get_Key_m3529_GenericMethod);
		IDictionary_2_Add_m3527_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&IDictionary_2_Add_m3527_GenericMethod);
		PocoJsonSerializerStrategy_TrySerializeUnknownTypes_m3095_init = true;
	}
	Type_t * V_0 = {0};
	Object_t* V_1 = {0};
	Object_t* V_2 = {0};
	KeyValuePair_2_t726  V_3 = {0};
	Object_t* V_4 = {0};
	Exception_t275 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t275 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Object_t * L_0 = ___input;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t699 * L_1 = (ArgumentNullException_t699 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t699_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3455(L_1, (String_t*) &_stringLiteral280, /*hidden argument*/&ArgumentNullException__ctor_m3455_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0011:
	{
		Object_t ** L_2 = ___output;
		*((Object_t **)(L_2)) = (Object_t *)NULL;
		Object_t * L_3 = ___input;
		NullCheck(L_3);
		Type_t * L_4 = Object_GetType_m1381(L_3, /*hidden argument*/&Object_GetType_m1381_MethodInfo);
		V_0 = L_4;
		Type_t * L_5 = V_0;
		NullCheck(L_5);
		String_t* L_6 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Type_get_FullName_m3523_MethodInfo, L_5);
		if (L_6)
		{
			goto IL_0028;
		}
	}
	{
		return 0;
	}

IL_0028:
	{
		JsonObject_t594 * L_7 = (JsonObject_t594 *)il2cpp_codegen_object_new (InitializedTypeInfo(&JsonObject_t594_il2cpp_TypeInfo));
		JsonObject__ctor_m3047(L_7, /*hidden argument*/&JsonObject__ctor_m3047_MethodInfo);
		V_1 = L_7;
		Object_t* L_8 = (__this->___GetCache_1);
		Type_t * L_9 = V_0;
		NullCheck(L_8);
		Object_t* L_10 = (Object_t*)InterfaceFuncInvoker1< Object_t*, Type_t * >::Invoke(IDictionary_2_get_Item_m3524_MethodInfo_var, L_8, L_9);
		V_2 = L_10;
		Object_t* L_11 = V_2;
		NullCheck(L_11);
		Object_t* L_12 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(IEnumerable_1_GetEnumerator_m3525_MethodInfo_var, L_11);
		V_4 = L_12;
	}

IL_0043:
	try
	{ // begin try (depth: 1)
		{
			goto IL_007c;
		}

IL_0048:
		{
			Object_t* L_13 = V_4;
			NullCheck(L_13);
			KeyValuePair_2_t726  L_14 = (KeyValuePair_2_t726 )InterfaceFuncInvoker0< KeyValuePair_2_t726  >::Invoke(IEnumerator_1_get_Current_m3526_MethodInfo_var, L_13);
			V_3 = L_14;
			GetDelegate_t610 * L_15 = KeyValuePair_2_get_Value_m3528((&V_3), /*hidden argument*/KeyValuePair_2_get_Value_m3528_MethodInfo_var);
			if (!L_15)
			{
				goto IL_007c;
			}
		}

IL_005c:
		{
			Object_t* L_16 = V_1;
			String_t* L_17 = KeyValuePair_2_get_Key_m3529((&V_3), /*hidden argument*/KeyValuePair_2_get_Key_m3529_MethodInfo_var);
			String_t* L_18 = (String_t*)VirtFuncInvoker1< String_t*, String_t* >::Invoke(&PocoJsonSerializerStrategy_MapClrMemberNameToJsonFieldName_m3088_MethodInfo, __this, L_17);
			GetDelegate_t610 * L_19 = KeyValuePair_2_get_Value_m3528((&V_3), /*hidden argument*/KeyValuePair_2_get_Value_m3528_MethodInfo_var);
			Object_t * L_20 = ___input;
			NullCheck(L_19);
			Object_t * L_21 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(&GetDelegate_Invoke_m3097_MethodInfo, L_19, L_20);
			NullCheck(L_16);
			InterfaceActionInvoker2< String_t*, Object_t * >::Invoke(IDictionary_2_Add_m3527_MethodInfo_var, L_16, L_18, L_21);
		}

IL_007c:
		{
			Object_t* L_22 = V_4;
			NullCheck(L_22);
			bool L_23 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&IEnumerator_MoveNext_m3457_MethodInfo, L_22);
			if (L_23)
			{
				goto IL_0048;
			}
		}

IL_0088:
		{
			IL2CPP_LEAVE(0x9A, FINALLY_008d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t275 *)e.ex;
		goto FINALLY_008d;
	}

FINALLY_008d:
	{ // begin finally (depth: 1)
		{
			Object_t* L_24 = V_4;
			if (L_24)
			{
				goto IL_0092;
			}
		}

IL_0091:
		{
			IL2CPP_END_FINALLY(141)
		}

IL_0092:
		{
			Object_t* L_25 = V_4;
			NullCheck(L_25);
			InterfaceActionInvoker0::Invoke(&IDisposable_Dispose_m1379_MethodInfo, L_25);
			IL2CPP_END_FINALLY(141)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(141)
	{
		IL2CPP_JUMP_TBL(0x9A, IL_009a)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t275 *)
	}

IL_009a:
	{
		Object_t ** L_26 = ___output;
		Object_t* L_27 = V_1;
		*((Object_t **)(L_26)) = (Object_t *)L_27;
		return 1;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void SimpleJson.Reflection.ReflectionUtils/GetDelegate::.ctor(System.Object,System.IntPtr)
extern MethodInfo GetDelegate__ctor_m3096_MethodInfo;
extern "C" void GetDelegate__ctor_m3096 (GetDelegate_t610 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Object SimpleJson.Reflection.ReflectionUtils/GetDelegate::Invoke(System.Object)
extern "C" Object_t * GetDelegate_Invoke_m3097 (GetDelegate_t610 * __this, Object_t * ___source, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		GetDelegate_Invoke_m3097((GetDelegate_t610 *)__this->___prev_9,___source, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef Object_t * (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___source, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___source,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef Object_t * (*FunctionPointerType) (Object_t * __this, Object_t * ___source, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___source,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef Object_t * (*FunctionPointerType) (Object_t * __this, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___source,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" Object_t * pinvoke_delegate_wrapper_GetDelegate_t610(Il2CppObject* delegate, Object_t * ___source)
{
	// Marshaling of parameter '___source' to native representation
	Object_t * ____source_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Object'."));
}
// System.IAsyncResult SimpleJson.Reflection.ReflectionUtils/GetDelegate::BeginInvoke(System.Object,System.AsyncCallback,System.Object)
extern MethodInfo GetDelegate_BeginInvoke_m3098_MethodInfo;
extern "C" Object_t * GetDelegate_BeginInvoke_m3098 (GetDelegate_t610 * __this, Object_t * ___source, AsyncCallback_t171 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___source;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Object SimpleJson.Reflection.ReflectionUtils/GetDelegate::EndInvoke(System.IAsyncResult)
extern MethodInfo GetDelegate_EndInvoke_m3099_MethodInfo;
extern "C" Object_t * GetDelegate_EndInvoke_m3099 (GetDelegate_t610 * __this, Object_t * ___result, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return (Object_t *)__result;
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo SetDelegate_t611_il2cpp_TypeInfo;
// SimpleJson.Reflection.ReflectionUtils/SetDelegate
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_SetDelegatMethodDeclarations.h"



// System.Void SimpleJson.Reflection.ReflectionUtils/SetDelegate::.ctor(System.Object,System.IntPtr)
extern MethodInfo SetDelegate__ctor_m3100_MethodInfo;
extern "C" void SetDelegate__ctor_m3100 (SetDelegate_t611 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void SimpleJson.Reflection.ReflectionUtils/SetDelegate::Invoke(System.Object,System.Object)
extern MethodInfo SetDelegate_Invoke_m3101_MethodInfo;
extern "C" void SetDelegate_Invoke_m3101 (SetDelegate_t611 * __this, Object_t * ___source, Object_t * ___value, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		SetDelegate_Invoke_m3101((SetDelegate_t611 *)__this->___prev_9,___source, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___source, Object_t * ___value, MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___source, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t * __this, Object_t * ___source, Object_t * ___value, MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___source, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, Object_t * ___value, MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(___source, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_SetDelegate_t611(Il2CppObject* delegate, Object_t * ___source, Object_t * ___value)
{
	// Marshaling of parameter '___source' to native representation
	Object_t * ____source_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Object'."));
}
// System.IAsyncResult SimpleJson.Reflection.ReflectionUtils/SetDelegate::BeginInvoke(System.Object,System.Object,System.AsyncCallback,System.Object)
extern MethodInfo SetDelegate_BeginInvoke_m3102_MethodInfo;
extern "C" Object_t * SetDelegate_BeginInvoke_m3102 (SetDelegate_t611 * __this, Object_t * ___source, Object_t * ___value, AsyncCallback_t171 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___source;
	__d_args[1] = ___value;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void SimpleJson.Reflection.ReflectionUtils/SetDelegate::EndInvoke(System.IAsyncResult)
extern MethodInfo SetDelegate_EndInvoke_m3103_MethodInfo;
extern "C" void SetDelegate_EndInvoke_m3103 (SetDelegate_t611 * __this, Object_t * ___result, MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
#ifndef _MSC_VER
#else
#endif
// SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_ConstructoMethodDeclarations.h"



// System.Void SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate::.ctor(System.Object,System.IntPtr)
extern MethodInfo ConstructorDelegate__ctor_m3104_MethodInfo;
extern "C" void ConstructorDelegate__ctor_m3104 (ConstructorDelegate_t607 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Object SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate::Invoke(System.Object[])
extern MethodInfo ConstructorDelegate_Invoke_m3105_MethodInfo;
extern "C" Object_t * ConstructorDelegate_Invoke_m3105 (ConstructorDelegate_t607 * __this, ObjectU5BU5D_t269* ___args, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		ConstructorDelegate_Invoke_m3105((ConstructorDelegate_t607 *)__this->___prev_9,___args, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef Object_t * (*FunctionPointerType) (Object_t *, Object_t * __this, ObjectU5BU5D_t269* ___args, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___args,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef Object_t * (*FunctionPointerType) (Object_t * __this, ObjectU5BU5D_t269* ___args, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___args,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef Object_t * (*FunctionPointerType) (Object_t * __this, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___args,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" Object_t * pinvoke_delegate_wrapper_ConstructorDelegate_t607(Il2CppObject* delegate, ObjectU5BU5D_t269* ___args)
{
	typedef Object_t * (STDCALL *native_function_ptr_type)(Object_t **);
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Marshaling of parameter '___args' to native representation
	Object_t ** ____args_marshaled = { 0 };
	____args_marshaled = il2cpp_codegen_marshal_array<Object_t *>((Il2CppCodeGenArray*)___args);

	// Native function invocation and marshaling of return value back from native representation
	Object_t * _return_value = _il2cpp_pinvoke_func(____args_marshaled);
	Object_t * __return_value_unmarshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Object'."));

	// Marshaling cleanup of parameter '___args' native representation

	return __return_value_unmarshaled;
}
// System.IAsyncResult SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate::BeginInvoke(System.Object[],System.AsyncCallback,System.Object)
extern MethodInfo ConstructorDelegate_BeginInvoke_m3106_MethodInfo;
extern "C" Object_t * ConstructorDelegate_BeginInvoke_m3106 (ConstructorDelegate_t607 * __this, ObjectU5BU5D_t269* ___args, AsyncCallback_t171 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___args;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Object SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate::EndInvoke(System.IAsyncResult)
extern MethodInfo ConstructorDelegate_EndInvoke_m3107_MethodInfo;
extern "C" Object_t * ConstructorDelegate_EndInvoke_m3107 (ConstructorDelegate_t607 * __this, Object_t * ___result, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return (Object_t *)__result;
}
// SimpleJson.Reflection.ReflectionUtils/<GetConstructorByReflection>c__AnonStorey1
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_U3CGetCons.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo U3CGetConstructorByReflectionU3Ec__AnonStorey1_t613_il2cpp_TypeInfo;
// SimpleJson.Reflection.ReflectionUtils/<GetConstructorByReflection>c__AnonStorey1
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_U3CGetConsMethodDeclarations.h"

// System.Reflection.ConstructorInfo
#include "mscorlib_System_Reflection_ConstructorInfo.h"
// System.Reflection.ConstructorInfo
#include "mscorlib_System_Reflection_ConstructorInfoMethodDeclarations.h"
extern MethodInfo ConstructorInfo_Invoke_m3530_MethodInfo;


// System.Void SimpleJson.Reflection.ReflectionUtils/<GetConstructorByReflection>c__AnonStorey1::.ctor()
extern MethodInfo U3CGetConstructorByReflectionU3Ec__AnonStorey1__ctor_m3108_MethodInfo;
extern "C" void U3CGetConstructorByReflectionU3Ec__AnonStorey1__ctor_m3108 (U3CGetConstructorByReflectionU3Ec__AnonStorey1_t613 * __this, MethodInfo* method)
{
	{
		Object__ctor_m1289(__this, /*hidden argument*/&Object__ctor_m1289_MethodInfo);
		return;
	}
}
// System.Object SimpleJson.Reflection.ReflectionUtils/<GetConstructorByReflection>c__AnonStorey1::<>m__0(System.Object[])
extern MethodInfo U3CGetConstructorByReflectionU3Ec__AnonStorey1_U3CU3Em__0_m3109_MethodInfo;
extern "C" Object_t * U3CGetConstructorByReflectionU3Ec__AnonStorey1_U3CU3Em__0_m3109 (U3CGetConstructorByReflectionU3Ec__AnonStorey1_t613 * __this, ObjectU5BU5D_t269* ___args, MethodInfo* method)
{
	{
		ConstructorInfo_t612 * L_0 = (__this->___constructorInfo_0);
		ObjectU5BU5D_t269* L_1 = ___args;
		NullCheck(L_0);
		Object_t * L_2 = ConstructorInfo_Invoke_m3530(L_0, L_1, /*hidden argument*/&ConstructorInfo_Invoke_m3530_MethodInfo);
		return L_2;
	}
}
// SimpleJson.Reflection.ReflectionUtils/<GetGetMethodByReflection>c__AnonStorey2
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_U3CGetGetM.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t614_il2cpp_TypeInfo;
// SimpleJson.Reflection.ReflectionUtils/<GetGetMethodByReflection>c__AnonStorey2
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_U3CGetGetMMethodDeclarations.h"

// SimpleJson.Reflection.ReflectionUtils
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils.h"
extern MethodInfo MethodBase_Invoke_m3531_MethodInfo;


// System.Void SimpleJson.Reflection.ReflectionUtils/<GetGetMethodByReflection>c__AnonStorey2::.ctor()
extern MethodInfo U3CGetGetMethodByReflectionU3Ec__AnonStorey2__ctor_m3110_MethodInfo;
extern "C" void U3CGetGetMethodByReflectionU3Ec__AnonStorey2__ctor_m3110 (U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t614 * __this, MethodInfo* method)
{
	{
		Object__ctor_m1289(__this, /*hidden argument*/&Object__ctor_m1289_MethodInfo);
		return;
	}
}
// System.Object SimpleJson.Reflection.ReflectionUtils/<GetGetMethodByReflection>c__AnonStorey2::<>m__1(System.Object)
extern MethodInfo U3CGetGetMethodByReflectionU3Ec__AnonStorey2_U3CU3Em__1_m3111_MethodInfo;
extern "C" Object_t * U3CGetGetMethodByReflectionU3Ec__AnonStorey2_U3CU3Em__1_m3111 (U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t614 * __this, Object_t * ___source, MethodInfo* method)
{
	{
		MethodInfo_t * L_0 = (__this->___methodInfo_0);
		Object_t * L_1 = ___source;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ReflectionUtils_t618_il2cpp_TypeInfo));
		ObjectU5BU5D_t269* L_2 = ((ReflectionUtils_t618_StaticFields*)InitializedTypeInfo(&ReflectionUtils_t618_il2cpp_TypeInfo)->static_fields)->___EmptyObjects_0;
		NullCheck(L_0);
		Object_t * L_3 = (Object_t *)VirtFuncInvoker2< Object_t *, Object_t *, ObjectU5BU5D_t269* >::Invoke(&MethodBase_Invoke_m3531_MethodInfo, L_0, L_1, L_2);
		return L_3;
	}
}
// SimpleJson.Reflection.ReflectionUtils/<GetGetMethodByReflection>c__AnonStorey3
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_U3CGetGetM_0.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo U3CGetGetMethodByReflectionU3Ec__AnonStorey3_t615_il2cpp_TypeInfo;
// SimpleJson.Reflection.ReflectionUtils/<GetGetMethodByReflection>c__AnonStorey3
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_U3CGetGetM_0MethodDeclarations.h"

extern MethodInfo FieldInfo_GetValue_m3532_MethodInfo;


// System.Void SimpleJson.Reflection.ReflectionUtils/<GetGetMethodByReflection>c__AnonStorey3::.ctor()
extern MethodInfo U3CGetGetMethodByReflectionU3Ec__AnonStorey3__ctor_m3112_MethodInfo;
extern "C" void U3CGetGetMethodByReflectionU3Ec__AnonStorey3__ctor_m3112 (U3CGetGetMethodByReflectionU3Ec__AnonStorey3_t615 * __this, MethodInfo* method)
{
	{
		Object__ctor_m1289(__this, /*hidden argument*/&Object__ctor_m1289_MethodInfo);
		return;
	}
}
// System.Object SimpleJson.Reflection.ReflectionUtils/<GetGetMethodByReflection>c__AnonStorey3::<>m__2(System.Object)
extern MethodInfo U3CGetGetMethodByReflectionU3Ec__AnonStorey3_U3CU3Em__2_m3113_MethodInfo;
extern "C" Object_t * U3CGetGetMethodByReflectionU3Ec__AnonStorey3_U3CU3Em__2_m3113 (U3CGetGetMethodByReflectionU3Ec__AnonStorey3_t615 * __this, Object_t * ___source, MethodInfo* method)
{
	{
		FieldInfo_t * L_0 = (__this->___fieldInfo_0);
		Object_t * L_1 = ___source;
		NullCheck(L_0);
		Object_t * L_2 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(&FieldInfo_GetValue_m3532_MethodInfo, L_0, L_1);
		return L_2;
	}
}
// SimpleJson.Reflection.ReflectionUtils/<GetSetMethodByReflection>c__AnonStorey4
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_U3CGetSetM.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t616_il2cpp_TypeInfo;
// SimpleJson.Reflection.ReflectionUtils/<GetSetMethodByReflection>c__AnonStorey4
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_U3CGetSetMMethodDeclarations.h"



// System.Void SimpleJson.Reflection.ReflectionUtils/<GetSetMethodByReflection>c__AnonStorey4::.ctor()
extern MethodInfo U3CGetSetMethodByReflectionU3Ec__AnonStorey4__ctor_m3114_MethodInfo;
extern "C" void U3CGetSetMethodByReflectionU3Ec__AnonStorey4__ctor_m3114 (U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t616 * __this, MethodInfo* method)
{
	{
		Object__ctor_m1289(__this, /*hidden argument*/&Object__ctor_m1289_MethodInfo);
		return;
	}
}
// System.Void SimpleJson.Reflection.ReflectionUtils/<GetSetMethodByReflection>c__AnonStorey4::<>m__3(System.Object,System.Object)
extern MethodInfo U3CGetSetMethodByReflectionU3Ec__AnonStorey4_U3CU3Em__3_m3115_MethodInfo;
extern TypeInfo* ObjectU5BU5D_t269_il2cpp_TypeInfo_var;
extern "C" void U3CGetSetMethodByReflectionU3Ec__AnonStorey4_U3CU3Em__3_m3115 (U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t616 * __this, Object_t * ___source, Object_t * ___value, MethodInfo* method)
{
	static bool U3CGetSetMethodByReflectionU3Ec__AnonStorey4_U3CU3Em__3_m3115_init;
	if (!U3CGetSetMethodByReflectionU3Ec__AnonStorey4_U3CU3Em__3_m3115_init)
	{
		ObjectU5BU5D_t269_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t269_0_0_0);
		U3CGetSetMethodByReflectionU3Ec__AnonStorey4_U3CU3Em__3_m3115_init = true;
	}
	{
		MethodInfo_t * L_0 = (__this->___methodInfo_0);
		Object_t * L_1 = ___source;
		ObjectU5BU5D_t269* L_2 = ((ObjectU5BU5D_t269*)SZArrayNew(ObjectU5BU5D_t269_il2cpp_TypeInfo_var, 1));
		Object_t * L_3 = ___value;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		ArrayElementTypeCheck (L_2, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 0)) = (Object_t *)L_3;
		NullCheck(L_0);
		VirtFuncInvoker2< Object_t *, Object_t *, ObjectU5BU5D_t269* >::Invoke(&MethodBase_Invoke_m3531_MethodInfo, L_0, L_1, L_2);
		return;
	}
}
// SimpleJson.Reflection.ReflectionUtils/<GetSetMethodByReflection>c__AnonStorey5
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_U3CGetSetM_0.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo U3CGetSetMethodByReflectionU3Ec__AnonStorey5_t617_il2cpp_TypeInfo;
// SimpleJson.Reflection.ReflectionUtils/<GetSetMethodByReflection>c__AnonStorey5
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_U3CGetSetM_0MethodDeclarations.h"

extern MethodInfo FieldInfo_SetValue_m3533_MethodInfo;


// System.Void SimpleJson.Reflection.ReflectionUtils/<GetSetMethodByReflection>c__AnonStorey5::.ctor()
extern MethodInfo U3CGetSetMethodByReflectionU3Ec__AnonStorey5__ctor_m3116_MethodInfo;
extern "C" void U3CGetSetMethodByReflectionU3Ec__AnonStorey5__ctor_m3116 (U3CGetSetMethodByReflectionU3Ec__AnonStorey5_t617 * __this, MethodInfo* method)
{
	{
		Object__ctor_m1289(__this, /*hidden argument*/&Object__ctor_m1289_MethodInfo);
		return;
	}
}
// System.Void SimpleJson.Reflection.ReflectionUtils/<GetSetMethodByReflection>c__AnonStorey5::<>m__4(System.Object,System.Object)
extern MethodInfo U3CGetSetMethodByReflectionU3Ec__AnonStorey5_U3CU3Em__4_m3117_MethodInfo;
extern "C" void U3CGetSetMethodByReflectionU3Ec__AnonStorey5_U3CU3Em__4_m3117 (U3CGetSetMethodByReflectionU3Ec__AnonStorey5_t617 * __this, Object_t * ___source, Object_t * ___value, MethodInfo* method)
{
	{
		FieldInfo_t * L_0 = (__this->___fieldInfo_0);
		Object_t * L_1 = ___source;
		Object_t * L_2 = ___value;
		NullCheck(L_0);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(&FieldInfo_SetValue_m3533_MethodInfo, L_0, L_1, L_2);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Reflection.ParameterInfo
#include "mscorlib_System_Reflection_ParameterInfo.h"
// System.Reflection.BindingFlags
#include "mscorlib_System_Reflection_BindingFlags.h"
extern TypeInfo ConstructorInfoU5BU5D_t727_il2cpp_TypeInfo;
extern TypeInfo ConstructorInfo_t612_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t619_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t728_il2cpp_TypeInfo;
extern TypeInfo ParameterInfoU5BU5D_t729_il2cpp_TypeInfo;
extern TypeInfo ParameterInfo_t730_il2cpp_TypeInfo;
extern TypeInfo PropertyInfoU5BU5D_t731_il2cpp_TypeInfo;
extern TypeInfo BindingFlags_t732_il2cpp_TypeInfo;
extern TypeInfo FieldInfoU5BU5D_t733_il2cpp_TypeInfo;
extern TypeInfo MethodInfo_t_il2cpp_TypeInfo;
// System.Reflection.ParameterInfo
#include "mscorlib_System_Reflection_ParameterInfoMethodDeclarations.h"
extern Il2CppType IEnumerable_1_t619_0_0_0;
extern Il2CppType IEnumerator_1_t728_0_0_0;
extern MethodInfo Type_GetConstructors_m3534_MethodInfo;
extern MethodInfo ReflectionUtils_GetConstructors_m3119_MethodInfo;
extern MethodInfo IEnumerable_1_GetEnumerator_m3535_MethodInfo;
extern MethodInfo IEnumerator_1_get_Current_m3536_MethodInfo;
extern MethodInfo MethodBase_GetParameters_m3537_MethodInfo;
extern MethodInfo ParameterInfo_get_ParameterType_m3538_MethodInfo;
extern MethodInfo Type_GetProperties_m3539_MethodInfo;
extern MethodInfo Type_GetFields_m3540_MethodInfo;
extern MethodInfo PropertyInfo_GetGetMethod_m3541_MethodInfo;
extern MethodInfo PropertyInfo_GetSetMethod_m3542_MethodInfo;
extern MethodInfo ReflectionUtils_GetConstructorByReflection_m3127_MethodInfo;
extern MethodInfo ReflectionUtils_GetConstructorInfo_m3120_MethodInfo;
extern MethodInfo ReflectionUtils_GetConstructorByReflection_m3126_MethodInfo;
extern MethodInfo ReflectionUtils_GetGetMethodByReflection_m3130_MethodInfo;
extern MethodInfo ReflectionUtils_GetGetMethodByReflection_m3131_MethodInfo;
extern MethodInfo ReflectionUtils_GetSetMethodByReflection_m3134_MethodInfo;
extern MethodInfo ReflectionUtils_GetSetMethodByReflection_m3135_MethodInfo;
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m3535_GenericMethod;
extern Il2CppGenericMethod IEnumerator_1_get_Current_m3536_GenericMethod;


// System.Void SimpleJson.Reflection.ReflectionUtils::.cctor()
extern MethodInfo ReflectionUtils__cctor_m3118_MethodInfo;
extern TypeInfo* ObjectU5BU5D_t269_il2cpp_TypeInfo_var;
extern "C" void ReflectionUtils__cctor_m3118 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	static bool ReflectionUtils__cctor_m3118_init;
	if (!ReflectionUtils__cctor_m3118_init)
	{
		ObjectU5BU5D_t269_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t269_0_0_0);
		ReflectionUtils__cctor_m3118_init = true;
	}
	{
		((ReflectionUtils_t618_StaticFields*)InitializedTypeInfo(&ReflectionUtils_t618_il2cpp_TypeInfo)->static_fields)->___EmptyObjects_0 = ((ObjectU5BU5D_t269*)SZArrayNew(ObjectU5BU5D_t269_il2cpp_TypeInfo_var, 0));
		return;
	}
}
// System.Collections.Generic.IEnumerable`1<System.Reflection.ConstructorInfo> SimpleJson.Reflection.ReflectionUtils::GetConstructors(System.Type)
extern "C" Object_t* ReflectionUtils_GetConstructors_m3119 (Object_t * __this /* static, unused */, Type_t * ___type, MethodInfo* method)
{
	{
		Type_t * L_0 = ___type;
		NullCheck(L_0);
		ConstructorInfoU5BU5D_t727* L_1 = (ConstructorInfoU5BU5D_t727*)VirtFuncInvoker0< ConstructorInfoU5BU5D_t727* >::Invoke(&Type_GetConstructors_m3534_MethodInfo, L_0);
		return (Object_t*)L_1;
	}
}
// System.Reflection.ConstructorInfo SimpleJson.Reflection.ReflectionUtils::GetConstructorInfo(System.Type,System.Type[])
extern MethodInfo* IEnumerable_1_GetEnumerator_m3535_MethodInfo_var;
extern MethodInfo* IEnumerator_1_get_Current_m3536_MethodInfo_var;
extern "C" ConstructorInfo_t612 * ReflectionUtils_GetConstructorInfo_m3120 (Object_t * __this /* static, unused */, Type_t * ___type, TypeU5BU5D_t606* ___argsType, MethodInfo* method)
{
	static bool ReflectionUtils_GetConstructorInfo_m3120_init;
	if (!ReflectionUtils_GetConstructorInfo_m3120_init)
	{
		IEnumerable_1_GetEnumerator_m3535_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&IEnumerable_1_GetEnumerator_m3535_GenericMethod);
		IEnumerator_1_get_Current_m3536_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&IEnumerator_1_get_Current_m3536_GenericMethod);
		ReflectionUtils_GetConstructorInfo_m3120_init = true;
	}
	Object_t* V_0 = {0};
	int32_t V_1 = 0;
	bool V_2 = false;
	ConstructorInfo_t612 * V_3 = {0};
	Object_t* V_4 = {0};
	ParameterInfoU5BU5D_t729* V_5 = {0};
	ParameterInfo_t730 * V_6 = {0};
	ParameterInfoU5BU5D_t729* V_7 = {0};
	int32_t V_8 = 0;
	ConstructorInfo_t612 * V_9 = {0};
	Exception_t275 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t275 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Type_t * L_0 = ___type;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ReflectionUtils_t618_il2cpp_TypeInfo));
		Object_t* L_1 = ReflectionUtils_GetConstructors_m3119(NULL /*static, unused*/, L_0, /*hidden argument*/&ReflectionUtils_GetConstructors_m3119_MethodInfo);
		V_0 = L_1;
		Object_t* L_2 = V_0;
		NullCheck(L_2);
		Object_t* L_3 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(IEnumerable_1_GetEnumerator_m3535_MethodInfo_var, L_2);
		V_4 = L_3;
	}

IL_000f:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0085;
		}

IL_0014:
		{
			Object_t* L_4 = V_4;
			NullCheck(L_4);
			ConstructorInfo_t612 * L_5 = (ConstructorInfo_t612 *)InterfaceFuncInvoker0< ConstructorInfo_t612 * >::Invoke(IEnumerator_1_get_Current_m3536_MethodInfo_var, L_4);
			V_3 = L_5;
			ConstructorInfo_t612 * L_6 = V_3;
			NullCheck(L_6);
			ParameterInfoU5BU5D_t729* L_7 = (ParameterInfoU5BU5D_t729*)VirtFuncInvoker0< ParameterInfoU5BU5D_t729* >::Invoke(&MethodBase_GetParameters_m3537_MethodInfo, L_6);
			V_5 = L_7;
			TypeU5BU5D_t606* L_8 = ___argsType;
			NullCheck(L_8);
			ParameterInfoU5BU5D_t729* L_9 = V_5;
			NullCheck(L_9);
			if ((((int32_t)(((int32_t)(((Array_t *)L_8)->max_length)))) == ((int32_t)(((int32_t)(((Array_t *)L_9)->max_length))))))
			{
				goto IL_0035;
			}
		}

IL_0030:
		{
			goto IL_0085;
		}

IL_0035:
		{
			V_1 = 0;
			V_2 = 1;
			ConstructorInfo_t612 * L_10 = V_3;
			NullCheck(L_10);
			ParameterInfoU5BU5D_t729* L_11 = (ParameterInfoU5BU5D_t729*)VirtFuncInvoker0< ParameterInfoU5BU5D_t729* >::Invoke(&MethodBase_GetParameters_m3537_MethodInfo, L_10);
			V_7 = L_11;
			V_8 = 0;
			goto IL_006c;
		}

IL_0049:
		{
			ParameterInfoU5BU5D_t729* L_12 = V_7;
			int32_t L_13 = V_8;
			NullCheck(L_12);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_12, L_13);
			int32_t L_14 = L_13;
			V_6 = (*(ParameterInfo_t730 **)(ParameterInfo_t730 **)SZArrayLdElema(L_12, L_14));
			ParameterInfo_t730 * L_15 = V_6;
			NullCheck(L_15);
			Type_t * L_16 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&ParameterInfo_get_ParameterType_m3538_MethodInfo, L_15);
			TypeU5BU5D_t606* L_17 = ___argsType;
			int32_t L_18 = V_1;
			NullCheck(L_17);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_17, L_18);
			int32_t L_19 = L_18;
			if ((((Object_t*)(Type_t *)L_16) == ((Object_t*)(Type_t *)(*(Type_t **)(Type_t **)SZArrayLdElema(L_17, L_19)))))
			{
				goto IL_0066;
			}
		}

IL_005f:
		{
			V_2 = 0;
			goto IL_0077;
		}

IL_0066:
		{
			int32_t L_20 = V_8;
			V_8 = ((int32_t)((int32_t)L_20+(int32_t)1));
		}

IL_006c:
		{
			int32_t L_21 = V_8;
			ParameterInfoU5BU5D_t729* L_22 = V_7;
			NullCheck(L_22);
			if ((((int32_t)L_21) < ((int32_t)(((int32_t)(((Array_t *)L_22)->max_length))))))
			{
				goto IL_0049;
			}
		}

IL_0077:
		{
			bool L_23 = V_2;
			if (!L_23)
			{
				goto IL_0085;
			}
		}

IL_007d:
		{
			ConstructorInfo_t612 * L_24 = V_3;
			V_9 = L_24;
			IL2CPP_LEAVE(0xA5, FINALLY_0096);
		}

IL_0085:
		{
			Object_t* L_25 = V_4;
			NullCheck(L_25);
			bool L_26 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&IEnumerator_MoveNext_m3457_MethodInfo, L_25);
			if (L_26)
			{
				goto IL_0014;
			}
		}

IL_0091:
		{
			IL2CPP_LEAVE(0xA3, FINALLY_0096);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t275 *)e.ex;
		goto FINALLY_0096;
	}

FINALLY_0096:
	{ // begin finally (depth: 1)
		{
			Object_t* L_27 = V_4;
			if (L_27)
			{
				goto IL_009b;
			}
		}

IL_009a:
		{
			IL2CPP_END_FINALLY(150)
		}

IL_009b:
		{
			Object_t* L_28 = V_4;
			NullCheck(L_28);
			InterfaceActionInvoker0::Invoke(&IDisposable_Dispose_m1379_MethodInfo, L_28);
			IL2CPP_END_FINALLY(150)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(150)
	{
		IL2CPP_JUMP_TBL(0xA5, IL_00a5)
		IL2CPP_JUMP_TBL(0xA3, IL_00a3)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t275 *)
	}

IL_00a3:
	{
		return (ConstructorInfo_t612 *)NULL;
	}

IL_00a5:
	{
		ConstructorInfo_t612 * L_29 = V_9;
		return L_29;
	}
}
// System.Collections.Generic.IEnumerable`1<System.Reflection.PropertyInfo> SimpleJson.Reflection.ReflectionUtils::GetProperties(System.Type)
extern "C" Object_t* ReflectionUtils_GetProperties_m3121 (Object_t * __this /* static, unused */, Type_t * ___type, MethodInfo* method)
{
	{
		Type_t * L_0 = ___type;
		NullCheck(L_0);
		PropertyInfoU5BU5D_t731* L_1 = (PropertyInfoU5BU5D_t731*)VirtFuncInvoker1< PropertyInfoU5BU5D_t731*, int32_t >::Invoke(&Type_GetProperties_m3539_MethodInfo, L_0, ((int32_t)60));
		return (Object_t*)L_1;
	}
}
// System.Collections.Generic.IEnumerable`1<System.Reflection.FieldInfo> SimpleJson.Reflection.ReflectionUtils::GetFields(System.Type)
extern "C" Object_t* ReflectionUtils_GetFields_m3122 (Object_t * __this /* static, unused */, Type_t * ___type, MethodInfo* method)
{
	{
		Type_t * L_0 = ___type;
		NullCheck(L_0);
		FieldInfoU5BU5D_t733* L_1 = (FieldInfoU5BU5D_t733*)VirtFuncInvoker1< FieldInfoU5BU5D_t733*, int32_t >::Invoke(&Type_GetFields_m3540_MethodInfo, L_0, ((int32_t)60));
		return (Object_t*)L_1;
	}
}
// System.Reflection.MethodInfo SimpleJson.Reflection.ReflectionUtils::GetGetterMethodInfo(System.Reflection.PropertyInfo)
extern "C" MethodInfo_t * ReflectionUtils_GetGetterMethodInfo_m3123 (Object_t * __this /* static, unused */, PropertyInfo_t * ___propertyInfo, MethodInfo* method)
{
	{
		PropertyInfo_t * L_0 = ___propertyInfo;
		NullCheck(L_0);
		MethodInfo_t * L_1 = (MethodInfo_t *)VirtFuncInvoker1< MethodInfo_t *, bool >::Invoke(&PropertyInfo_GetGetMethod_m3541_MethodInfo, L_0, 1);
		return L_1;
	}
}
// System.Reflection.MethodInfo SimpleJson.Reflection.ReflectionUtils::GetSetterMethodInfo(System.Reflection.PropertyInfo)
extern "C" MethodInfo_t * ReflectionUtils_GetSetterMethodInfo_m3124 (Object_t * __this /* static, unused */, PropertyInfo_t * ___propertyInfo, MethodInfo* method)
{
	{
		PropertyInfo_t * L_0 = ___propertyInfo;
		NullCheck(L_0);
		MethodInfo_t * L_1 = (MethodInfo_t *)VirtFuncInvoker1< MethodInfo_t *, bool >::Invoke(&PropertyInfo_GetSetMethod_m3542_MethodInfo, L_0, 1);
		return L_1;
	}
}
// SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate SimpleJson.Reflection.ReflectionUtils::GetContructor(System.Type,System.Type[])
extern "C" ConstructorDelegate_t607 * ReflectionUtils_GetContructor_m3125 (Object_t * __this /* static, unused */, Type_t * ___type, TypeU5BU5D_t606* ___argsType, MethodInfo* method)
{
	{
		Type_t * L_0 = ___type;
		TypeU5BU5D_t606* L_1 = ___argsType;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ReflectionUtils_t618_il2cpp_TypeInfo));
		ConstructorDelegate_t607 * L_2 = ReflectionUtils_GetConstructorByReflection_m3127(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&ReflectionUtils_GetConstructorByReflection_m3127_MethodInfo);
		return L_2;
	}
}
// SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate SimpleJson.Reflection.ReflectionUtils::GetConstructorByReflection(System.Reflection.ConstructorInfo)
extern "C" ConstructorDelegate_t607 * ReflectionUtils_GetConstructorByReflection_m3126 (Object_t * __this /* static, unused */, ConstructorInfo_t612 * ___constructorInfo, MethodInfo* method)
{
	U3CGetConstructorByReflectionU3Ec__AnonStorey1_t613 * V_0 = {0};
	{
		U3CGetConstructorByReflectionU3Ec__AnonStorey1_t613 * L_0 = (U3CGetConstructorByReflectionU3Ec__AnonStorey1_t613 *)il2cpp_codegen_object_new (InitializedTypeInfo(&U3CGetConstructorByReflectionU3Ec__AnonStorey1_t613_il2cpp_TypeInfo));
		U3CGetConstructorByReflectionU3Ec__AnonStorey1__ctor_m3108(L_0, /*hidden argument*/&U3CGetConstructorByReflectionU3Ec__AnonStorey1__ctor_m3108_MethodInfo);
		V_0 = L_0;
		U3CGetConstructorByReflectionU3Ec__AnonStorey1_t613 * L_1 = V_0;
		ConstructorInfo_t612 * L_2 = ___constructorInfo;
		NullCheck(L_1);
		L_1->___constructorInfo_0 = L_2;
		U3CGetConstructorByReflectionU3Ec__AnonStorey1_t613 * L_3 = V_0;
		IntPtr_t L_4 = { &U3CGetConstructorByReflectionU3Ec__AnonStorey1_U3CU3Em__0_m3109_MethodInfo };
		ConstructorDelegate_t607 * L_5 = (ConstructorDelegate_t607 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ConstructorDelegate_t607_il2cpp_TypeInfo));
		ConstructorDelegate__ctor_m3104(L_5, L_3, L_4, /*hidden argument*/&ConstructorDelegate__ctor_m3104_MethodInfo);
		return L_5;
	}
}
// SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate SimpleJson.Reflection.ReflectionUtils::GetConstructorByReflection(System.Type,System.Type[])
extern "C" ConstructorDelegate_t607 * ReflectionUtils_GetConstructorByReflection_m3127 (Object_t * __this /* static, unused */, Type_t * ___type, TypeU5BU5D_t606* ___argsType, MethodInfo* method)
{
	ConstructorInfo_t612 * V_0 = {0};
	ConstructorDelegate_t607 * G_B3_0 = {0};
	{
		Type_t * L_0 = ___type;
		TypeU5BU5D_t606* L_1 = ___argsType;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ReflectionUtils_t618_il2cpp_TypeInfo));
		ConstructorInfo_t612 * L_2 = ReflectionUtils_GetConstructorInfo_m3120(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&ReflectionUtils_GetConstructorInfo_m3120_MethodInfo);
		V_0 = L_2;
		ConstructorInfo_t612 * L_3 = V_0;
		if (L_3)
		{
			goto IL_0014;
		}
	}
	{
		G_B3_0 = ((ConstructorDelegate_t607 *)(NULL));
		goto IL_001a;
	}

IL_0014:
	{
		ConstructorInfo_t612 * L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ReflectionUtils_t618_il2cpp_TypeInfo));
		ConstructorDelegate_t607 * L_5 = ReflectionUtils_GetConstructorByReflection_m3126(NULL /*static, unused*/, L_4, /*hidden argument*/&ReflectionUtils_GetConstructorByReflection_m3126_MethodInfo);
		G_B3_0 = L_5;
	}

IL_001a:
	{
		return G_B3_0;
	}
}
// SimpleJson.Reflection.ReflectionUtils/GetDelegate SimpleJson.Reflection.ReflectionUtils::GetGetMethod(System.Reflection.PropertyInfo)
extern "C" GetDelegate_t610 * ReflectionUtils_GetGetMethod_m3128 (Object_t * __this /* static, unused */, PropertyInfo_t * ___propertyInfo, MethodInfo* method)
{
	{
		PropertyInfo_t * L_0 = ___propertyInfo;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ReflectionUtils_t618_il2cpp_TypeInfo));
		GetDelegate_t610 * L_1 = ReflectionUtils_GetGetMethodByReflection_m3130(NULL /*static, unused*/, L_0, /*hidden argument*/&ReflectionUtils_GetGetMethodByReflection_m3130_MethodInfo);
		return L_1;
	}
}
// SimpleJson.Reflection.ReflectionUtils/GetDelegate SimpleJson.Reflection.ReflectionUtils::GetGetMethod(System.Reflection.FieldInfo)
extern "C" GetDelegate_t610 * ReflectionUtils_GetGetMethod_m3129 (Object_t * __this /* static, unused */, FieldInfo_t * ___fieldInfo, MethodInfo* method)
{
	{
		FieldInfo_t * L_0 = ___fieldInfo;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ReflectionUtils_t618_il2cpp_TypeInfo));
		GetDelegate_t610 * L_1 = ReflectionUtils_GetGetMethodByReflection_m3131(NULL /*static, unused*/, L_0, /*hidden argument*/&ReflectionUtils_GetGetMethodByReflection_m3131_MethodInfo);
		return L_1;
	}
}
// SimpleJson.Reflection.ReflectionUtils/GetDelegate SimpleJson.Reflection.ReflectionUtils::GetGetMethodByReflection(System.Reflection.PropertyInfo)
extern "C" GetDelegate_t610 * ReflectionUtils_GetGetMethodByReflection_m3130 (Object_t * __this /* static, unused */, PropertyInfo_t * ___propertyInfo, MethodInfo* method)
{
	U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t614 * V_0 = {0};
	{
		U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t614 * L_0 = (U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t614 *)il2cpp_codegen_object_new (InitializedTypeInfo(&U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t614_il2cpp_TypeInfo));
		U3CGetGetMethodByReflectionU3Ec__AnonStorey2__ctor_m3110(L_0, /*hidden argument*/&U3CGetGetMethodByReflectionU3Ec__AnonStorey2__ctor_m3110_MethodInfo);
		V_0 = L_0;
		U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t614 * L_1 = V_0;
		PropertyInfo_t * L_2 = ___propertyInfo;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ReflectionUtils_t618_il2cpp_TypeInfo));
		MethodInfo_t * L_3 = ReflectionUtils_GetGetterMethodInfo_m3123(NULL /*static, unused*/, L_2, /*hidden argument*/&ReflectionUtils_GetGetterMethodInfo_m3123_MethodInfo);
		NullCheck(L_1);
		L_1->___methodInfo_0 = L_3;
		U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t614 * L_4 = V_0;
		IntPtr_t L_5 = { &U3CGetGetMethodByReflectionU3Ec__AnonStorey2_U3CU3Em__1_m3111_MethodInfo };
		GetDelegate_t610 * L_6 = (GetDelegate_t610 *)il2cpp_codegen_object_new (InitializedTypeInfo(&GetDelegate_t610_il2cpp_TypeInfo));
		GetDelegate__ctor_m3096(L_6, L_4, L_5, /*hidden argument*/&GetDelegate__ctor_m3096_MethodInfo);
		return L_6;
	}
}
// SimpleJson.Reflection.ReflectionUtils/GetDelegate SimpleJson.Reflection.ReflectionUtils::GetGetMethodByReflection(System.Reflection.FieldInfo)
extern "C" GetDelegate_t610 * ReflectionUtils_GetGetMethodByReflection_m3131 (Object_t * __this /* static, unused */, FieldInfo_t * ___fieldInfo, MethodInfo* method)
{
	U3CGetGetMethodByReflectionU3Ec__AnonStorey3_t615 * V_0 = {0};
	{
		U3CGetGetMethodByReflectionU3Ec__AnonStorey3_t615 * L_0 = (U3CGetGetMethodByReflectionU3Ec__AnonStorey3_t615 *)il2cpp_codegen_object_new (InitializedTypeInfo(&U3CGetGetMethodByReflectionU3Ec__AnonStorey3_t615_il2cpp_TypeInfo));
		U3CGetGetMethodByReflectionU3Ec__AnonStorey3__ctor_m3112(L_0, /*hidden argument*/&U3CGetGetMethodByReflectionU3Ec__AnonStorey3__ctor_m3112_MethodInfo);
		V_0 = L_0;
		U3CGetGetMethodByReflectionU3Ec__AnonStorey3_t615 * L_1 = V_0;
		FieldInfo_t * L_2 = ___fieldInfo;
		NullCheck(L_1);
		L_1->___fieldInfo_0 = L_2;
		U3CGetGetMethodByReflectionU3Ec__AnonStorey3_t615 * L_3 = V_0;
		IntPtr_t L_4 = { &U3CGetGetMethodByReflectionU3Ec__AnonStorey3_U3CU3Em__2_m3113_MethodInfo };
		GetDelegate_t610 * L_5 = (GetDelegate_t610 *)il2cpp_codegen_object_new (InitializedTypeInfo(&GetDelegate_t610_il2cpp_TypeInfo));
		GetDelegate__ctor_m3096(L_5, L_3, L_4, /*hidden argument*/&GetDelegate__ctor_m3096_MethodInfo);
		return L_5;
	}
}
// SimpleJson.Reflection.ReflectionUtils/SetDelegate SimpleJson.Reflection.ReflectionUtils::GetSetMethod(System.Reflection.PropertyInfo)
extern "C" SetDelegate_t611 * ReflectionUtils_GetSetMethod_m3132 (Object_t * __this /* static, unused */, PropertyInfo_t * ___propertyInfo, MethodInfo* method)
{
	{
		PropertyInfo_t * L_0 = ___propertyInfo;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ReflectionUtils_t618_il2cpp_TypeInfo));
		SetDelegate_t611 * L_1 = ReflectionUtils_GetSetMethodByReflection_m3134(NULL /*static, unused*/, L_0, /*hidden argument*/&ReflectionUtils_GetSetMethodByReflection_m3134_MethodInfo);
		return L_1;
	}
}
// SimpleJson.Reflection.ReflectionUtils/SetDelegate SimpleJson.Reflection.ReflectionUtils::GetSetMethod(System.Reflection.FieldInfo)
extern "C" SetDelegate_t611 * ReflectionUtils_GetSetMethod_m3133 (Object_t * __this /* static, unused */, FieldInfo_t * ___fieldInfo, MethodInfo* method)
{
	{
		FieldInfo_t * L_0 = ___fieldInfo;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ReflectionUtils_t618_il2cpp_TypeInfo));
		SetDelegate_t611 * L_1 = ReflectionUtils_GetSetMethodByReflection_m3135(NULL /*static, unused*/, L_0, /*hidden argument*/&ReflectionUtils_GetSetMethodByReflection_m3135_MethodInfo);
		return L_1;
	}
}
// SimpleJson.Reflection.ReflectionUtils/SetDelegate SimpleJson.Reflection.ReflectionUtils::GetSetMethodByReflection(System.Reflection.PropertyInfo)
extern "C" SetDelegate_t611 * ReflectionUtils_GetSetMethodByReflection_m3134 (Object_t * __this /* static, unused */, PropertyInfo_t * ___propertyInfo, MethodInfo* method)
{
	U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t616 * V_0 = {0};
	{
		U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t616 * L_0 = (U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t616 *)il2cpp_codegen_object_new (InitializedTypeInfo(&U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t616_il2cpp_TypeInfo));
		U3CGetSetMethodByReflectionU3Ec__AnonStorey4__ctor_m3114(L_0, /*hidden argument*/&U3CGetSetMethodByReflectionU3Ec__AnonStorey4__ctor_m3114_MethodInfo);
		V_0 = L_0;
		U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t616 * L_1 = V_0;
		PropertyInfo_t * L_2 = ___propertyInfo;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ReflectionUtils_t618_il2cpp_TypeInfo));
		MethodInfo_t * L_3 = ReflectionUtils_GetSetterMethodInfo_m3124(NULL /*static, unused*/, L_2, /*hidden argument*/&ReflectionUtils_GetSetterMethodInfo_m3124_MethodInfo);
		NullCheck(L_1);
		L_1->___methodInfo_0 = L_3;
		U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t616 * L_4 = V_0;
		IntPtr_t L_5 = { &U3CGetSetMethodByReflectionU3Ec__AnonStorey4_U3CU3Em__3_m3115_MethodInfo };
		SetDelegate_t611 * L_6 = (SetDelegate_t611 *)il2cpp_codegen_object_new (InitializedTypeInfo(&SetDelegate_t611_il2cpp_TypeInfo));
		SetDelegate__ctor_m3100(L_6, L_4, L_5, /*hidden argument*/&SetDelegate__ctor_m3100_MethodInfo);
		return L_6;
	}
}
// SimpleJson.Reflection.ReflectionUtils/SetDelegate SimpleJson.Reflection.ReflectionUtils::GetSetMethodByReflection(System.Reflection.FieldInfo)
extern "C" SetDelegate_t611 * ReflectionUtils_GetSetMethodByReflection_m3135 (Object_t * __this /* static, unused */, FieldInfo_t * ___fieldInfo, MethodInfo* method)
{
	U3CGetSetMethodByReflectionU3Ec__AnonStorey5_t617 * V_0 = {0};
	{
		U3CGetSetMethodByReflectionU3Ec__AnonStorey5_t617 * L_0 = (U3CGetSetMethodByReflectionU3Ec__AnonStorey5_t617 *)il2cpp_codegen_object_new (InitializedTypeInfo(&U3CGetSetMethodByReflectionU3Ec__AnonStorey5_t617_il2cpp_TypeInfo));
		U3CGetSetMethodByReflectionU3Ec__AnonStorey5__ctor_m3116(L_0, /*hidden argument*/&U3CGetSetMethodByReflectionU3Ec__AnonStorey5__ctor_m3116_MethodInfo);
		V_0 = L_0;
		U3CGetSetMethodByReflectionU3Ec__AnonStorey5_t617 * L_1 = V_0;
		FieldInfo_t * L_2 = ___fieldInfo;
		NullCheck(L_1);
		L_1->___fieldInfo_0 = L_2;
		U3CGetSetMethodByReflectionU3Ec__AnonStorey5_t617 * L_3 = V_0;
		IntPtr_t L_4 = { &U3CGetSetMethodByReflectionU3Ec__AnonStorey5_U3CU3Em__4_m3117_MethodInfo };
		SetDelegate_t611 * L_5 = (SetDelegate_t611 *)il2cpp_codegen_object_new (InitializedTypeInfo(&SetDelegate_t611_il2cpp_TypeInfo));
		SetDelegate__ctor_m3100(L_5, L_3, L_4, /*hidden argument*/&SetDelegate__ctor_m3100_MethodInfo);
		return L_5;
	}
}
// UnityEngine.WrapperlessIcall
#include "UnityEngine_UnityEngine_WrapperlessIcall.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo WrapperlessIcall_t622_il2cpp_TypeInfo;
// UnityEngine.WrapperlessIcall
#include "UnityEngine_UnityEngine_WrapperlessIcallMethodDeclarations.h"

// System.Attribute
#include "mscorlib_System_AttributeMethodDeclarations.h"
extern MethodInfo Attribute__ctor_m3370_MethodInfo;


// System.Void UnityEngine.WrapperlessIcall::.ctor()
extern MethodInfo WrapperlessIcall__ctor_m3136_MethodInfo;
extern "C" void WrapperlessIcall__ctor_m3136 (WrapperlessIcall_t622 * __this, MethodInfo* method)
{
	{
		Attribute__ctor_m3370(__this, /*hidden argument*/&Attribute__ctor_m3370_MethodInfo);
		return;
	}
}
// UnityEngine.IL2CPPStructAlignmentAttribute
#include "UnityEngine_UnityEngine_IL2CPPStructAlignmentAttribute.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IL2CPPStructAlignmentAttribute_t623_il2cpp_TypeInfo;
// UnityEngine.IL2CPPStructAlignmentAttribute
#include "UnityEngine_UnityEngine_IL2CPPStructAlignmentAttributeMethodDeclarations.h"



// System.Void UnityEngine.IL2CPPStructAlignmentAttribute::.ctor()
extern MethodInfo IL2CPPStructAlignmentAttribute__ctor_m3137_MethodInfo;
extern "C" void IL2CPPStructAlignmentAttribute__ctor_m3137 (IL2CPPStructAlignmentAttribute_t623 * __this, MethodInfo* method)
{
	{
		Attribute__ctor_m3370(__this, /*hidden argument*/&Attribute__ctor_m3370_MethodInfo);
		__this->___Align_0 = 1;
		return;
	}
}
// UnityEngine.AttributeHelperEngine
#include "UnityEngine_UnityEngine_AttributeHelperEngine.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo AttributeHelperEngine_t627_il2cpp_TypeInfo;
// UnityEngine.AttributeHelperEngine
#include "UnityEngine_UnityEngine_AttributeHelperEngineMethodDeclarations.h"

// UnityEngine.DisallowMultipleComponent
#include "UnityEngine_UnityEngine_DisallowMultipleComponent.h"
// UnityEngine.ExecuteInEditMode
#include "UnityEngine_UnityEngine_ExecuteInEditMode.h"
// UnityEngine.RequireComponent
#include "UnityEngine_UnityEngine_RequireComponent.h"
// System.Collections.Generic.Stack`1<System.Type>
#include "System_System_Collections_Generic_Stack_1_gen.h"
// System.Collections.Generic.List`1<System.Type>
#include "mscorlib_System_Collections_Generic_List_1_gen_27.h"
extern TypeInfo DisallowMultipleComponentU5BU5D_t624_il2cpp_TypeInfo;
extern TypeInfo DisallowMultipleComponent_t373_il2cpp_TypeInfo;
extern TypeInfo ExecuteInEditModeU5BU5D_t625_il2cpp_TypeInfo;
extern TypeInfo ExecuteInEditMode_t374_il2cpp_TypeInfo;
extern TypeInfo RequireComponentU5BU5D_t626_il2cpp_TypeInfo;
extern TypeInfo RequireComponent_t358_il2cpp_TypeInfo;
extern TypeInfo Stack_1_t734_il2cpp_TypeInfo;
extern TypeInfo List_1_t735_il2cpp_TypeInfo;
// System.Collections.Generic.Stack`1<System.Type>
#include "System_System_Collections_Generic_Stack_1_genMethodDeclarations.h"
// System.Collections.Generic.List`1<System.Type>
#include "mscorlib_System_Collections_Generic_List_1_gen_27MethodDeclarations.h"
extern Il2CppType DisallowMultipleComponentU5BU5D_t624_0_0_0;
extern Il2CppType ExecuteInEditModeU5BU5D_t625_0_0_0;
extern Il2CppType RequireComponentU5BU5D_t626_0_0_0;
extern Il2CppType Stack_1_t734_0_0_0;
extern Il2CppType MonoBehaviour_t3_0_0_0;
extern Il2CppType DisallowMultipleComponent_t373_0_0_0;
extern Il2CppType RequireComponent_t358_0_0_0;
extern Il2CppType List_1_t735_0_0_0;
extern Il2CppType ExecuteInEditMode_t374_0_0_0;
extern MethodInfo Stack_1__ctor_m3543_MethodInfo;
extern MethodInfo Type_get_BaseType_m3544_MethodInfo;
extern MethodInfo MemberInfo_GetCustomAttributes_m3545_MethodInfo;
extern MethodInfo Stack_1_get_Count_m3546_MethodInfo;
extern MethodInfo List_1__ctor_m3547_MethodInfo;
extern MethodInfo List_1_Add_m3548_MethodInfo;
extern Il2CppGenericMethod Stack_1__ctor_m3543_GenericMethod;
extern Il2CppGenericMethod Stack_1_Push_m3549_GenericMethod;
extern Il2CppGenericMethod Stack_1_Pop_m3550_GenericMethod;
extern Il2CppGenericMethod Stack_1_get_Count_m3546_GenericMethod;
extern Il2CppGenericMethod List_1__ctor_m3547_GenericMethod;
extern Il2CppGenericMethod List_1_Add_m3548_GenericMethod;
extern Il2CppGenericMethod List_1_ToArray_m3551_GenericMethod;


// System.Void UnityEngine.AttributeHelperEngine::.cctor()
extern MethodInfo AttributeHelperEngine__cctor_m3138_MethodInfo;
extern TypeInfo* DisallowMultipleComponentU5BU5D_t624_il2cpp_TypeInfo_var;
extern TypeInfo* ExecuteInEditModeU5BU5D_t625_il2cpp_TypeInfo_var;
extern TypeInfo* RequireComponentU5BU5D_t626_il2cpp_TypeInfo_var;
extern "C" void AttributeHelperEngine__cctor_m3138 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	static bool AttributeHelperEngine__cctor_m3138_init;
	if (!AttributeHelperEngine__cctor_m3138_init)
	{
		DisallowMultipleComponentU5BU5D_t624_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&DisallowMultipleComponentU5BU5D_t624_0_0_0);
		ExecuteInEditModeU5BU5D_t625_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ExecuteInEditModeU5BU5D_t625_0_0_0);
		RequireComponentU5BU5D_t626_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&RequireComponentU5BU5D_t626_0_0_0);
		AttributeHelperEngine__cctor_m3138_init = true;
	}
	{
		((AttributeHelperEngine_t627_StaticFields*)InitializedTypeInfo(&AttributeHelperEngine_t627_il2cpp_TypeInfo)->static_fields)->____disallowMultipleComponentArray_0 = ((DisallowMultipleComponentU5BU5D_t624*)SZArrayNew(DisallowMultipleComponentU5BU5D_t624_il2cpp_TypeInfo_var, 1));
		((AttributeHelperEngine_t627_StaticFields*)InitializedTypeInfo(&AttributeHelperEngine_t627_il2cpp_TypeInfo)->static_fields)->____executeInEditModeArray_1 = ((ExecuteInEditModeU5BU5D_t625*)SZArrayNew(ExecuteInEditModeU5BU5D_t625_il2cpp_TypeInfo_var, 1));
		((AttributeHelperEngine_t627_StaticFields*)InitializedTypeInfo(&AttributeHelperEngine_t627_il2cpp_TypeInfo)->static_fields)->____requireComponentArray_2 = ((RequireComponentU5BU5D_t626*)SZArrayNew(RequireComponentU5BU5D_t626_il2cpp_TypeInfo_var, 1));
		return;
	}
}
// System.Type UnityEngine.AttributeHelperEngine::GetParentTypeDisallowingMultipleInclusion(System.Type)
extern MethodInfo AttributeHelperEngine_GetParentTypeDisallowingMultipleInclusion_m3139_MethodInfo;
extern TypeInfo* Stack_1_t734_il2cpp_TypeInfo_var;
extern MethodInfo* Stack_1__ctor_m3543_MethodInfo_var;
extern MethodInfo* Stack_1_Push_m3549_MethodInfo_var;
extern MethodInfo* Stack_1_Pop_m3550_MethodInfo_var;
extern MethodInfo* Stack_1_get_Count_m3546_MethodInfo_var;
extern "C" Type_t * AttributeHelperEngine_GetParentTypeDisallowingMultipleInclusion_m3139 (Object_t * __this /* static, unused */, Type_t * ___type, MethodInfo* method)
{
	static bool AttributeHelperEngine_GetParentTypeDisallowingMultipleInclusion_m3139_init;
	if (!AttributeHelperEngine_GetParentTypeDisallowingMultipleInclusion_m3139_init)
	{
		Stack_1_t734_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Stack_1_t734_0_0_0);
		Stack_1__ctor_m3543_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Stack_1__ctor_m3543_GenericMethod);
		Stack_1_Push_m3549_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Stack_1_Push_m3549_GenericMethod);
		Stack_1_Pop_m3550_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Stack_1_Pop_m3550_GenericMethod);
		Stack_1_get_Count_m3546_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Stack_1_get_Count_m3546_GenericMethod);
		AttributeHelperEngine_GetParentTypeDisallowingMultipleInclusion_m3139_init = true;
	}
	Stack_1_t734 * V_0 = {0};
	Type_t * V_1 = {0};
	ObjectU5BU5D_t269* V_2 = {0};
	{
		Stack_1_t734 * L_0 = (Stack_1_t734 *)il2cpp_codegen_object_new (Stack_1_t734_il2cpp_TypeInfo_var);
		Stack_1__ctor_m3543(L_0, /*hidden argument*/Stack_1__ctor_m3543_MethodInfo_var);
		V_0 = L_0;
		goto IL_001a;
	}

IL_000b:
	{
		Stack_1_t734 * L_1 = V_0;
		Type_t * L_2 = ___type;
		NullCheck(L_1);
		Stack_1_Push_m3549(L_1, L_2, /*hidden argument*/Stack_1_Push_m3549_MethodInfo_var);
		Type_t * L_3 = ___type;
		NullCheck(L_3);
		Type_t * L_4 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&Type_get_BaseType_m3544_MethodInfo, L_3);
		___type = L_4;
	}

IL_001a:
	{
		Type_t * L_5 = ___type;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		Type_t * L_6 = ___type;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_7 = Type_GetTypeFromHandle_m1488(NULL /*static, unused*/, LoadTypeToken(&MonoBehaviour_t3_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m1488_MethodInfo);
		if ((!(((Object_t*)(Type_t *)L_6) == ((Object_t*)(Type_t *)L_7))))
		{
			goto IL_000b;
		}
	}

IL_0030:
	{
		V_1 = (Type_t *)NULL;
		goto IL_005a;
	}

IL_0037:
	{
		Stack_1_t734 * L_8 = V_0;
		NullCheck(L_8);
		Type_t * L_9 = Stack_1_Pop_m3550(L_8, /*hidden argument*/Stack_1_Pop_m3550_MethodInfo_var);
		V_1 = L_9;
		Type_t * L_10 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_11 = Type_GetTypeFromHandle_m1488(NULL /*static, unused*/, LoadTypeToken(&DisallowMultipleComponent_t373_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m1488_MethodInfo);
		NullCheck(L_10);
		ObjectU5BU5D_t269* L_12 = (ObjectU5BU5D_t269*)VirtFuncInvoker2< ObjectU5BU5D_t269*, Type_t *, bool >::Invoke(&MemberInfo_GetCustomAttributes_m3545_MethodInfo, L_10, L_11, 0);
		V_2 = L_12;
		ObjectU5BU5D_t269* L_13 = V_2;
		NullCheck(L_13);
		if (!(((int32_t)(((Array_t *)L_13)->max_length))))
		{
			goto IL_005a;
		}
	}
	{
		Type_t * L_14 = V_1;
		return L_14;
	}

IL_005a:
	{
		Stack_1_t734 * L_15 = V_0;
		NullCheck(L_15);
		int32_t L_16 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(Stack_1_get_Count_m3546_MethodInfo_var, L_15);
		if ((((int32_t)L_16) > ((int32_t)0)))
		{
			goto IL_0037;
		}
	}
	{
		return (Type_t *)NULL;
	}
}
// System.Type[] UnityEngine.AttributeHelperEngine::GetRequiredComponents(System.Type)
extern MethodInfo AttributeHelperEngine_GetRequiredComponents_m3140_MethodInfo;
extern TypeInfo* TypeU5BU5D_t606_il2cpp_TypeInfo_var;
extern TypeInfo* List_1_t735_il2cpp_TypeInfo_var;
extern MethodInfo* List_1__ctor_m3547_MethodInfo_var;
extern MethodInfo* List_1_Add_m3548_MethodInfo_var;
extern MethodInfo* List_1_ToArray_m3551_MethodInfo_var;
extern "C" TypeU5BU5D_t606* AttributeHelperEngine_GetRequiredComponents_m3140 (Object_t * __this /* static, unused */, Type_t * ___klass, MethodInfo* method)
{
	static bool AttributeHelperEngine_GetRequiredComponents_m3140_init;
	if (!AttributeHelperEngine_GetRequiredComponents_m3140_init)
	{
		TypeU5BU5D_t606_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&TypeU5BU5D_t606_0_0_0);
		List_1_t735_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&List_1_t735_0_0_0);
		List_1__ctor_m3547_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1__ctor_m3547_GenericMethod);
		List_1_Add_m3548_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1_Add_m3548_GenericMethod);
		List_1_ToArray_m3551_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1_ToArray_m3551_GenericMethod);
		AttributeHelperEngine_GetRequiredComponents_m3140_init = true;
	}
	List_1_t735 * V_0 = {0};
	ObjectU5BU5D_t269* V_1 = {0};
	int32_t V_2 = 0;
	RequireComponent_t358 * V_3 = {0};
	TypeU5BU5D_t606* V_4 = {0};
	{
		V_0 = (List_1_t735 *)NULL;
		goto IL_00d9;
	}

IL_0007:
	{
		Type_t * L_0 = ___klass;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_1 = Type_GetTypeFromHandle_m1488(NULL /*static, unused*/, LoadTypeToken(&RequireComponent_t358_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m1488_MethodInfo);
		NullCheck(L_0);
		ObjectU5BU5D_t269* L_2 = (ObjectU5BU5D_t269*)VirtFuncInvoker2< ObjectU5BU5D_t269*, Type_t *, bool >::Invoke(&MemberInfo_GetCustomAttributes_m3545_MethodInfo, L_0, L_1, 0);
		V_1 = L_2;
		V_2 = 0;
		goto IL_00c8;
	}

IL_0020:
	{
		ObjectU5BU5D_t269* L_3 = V_1;
		int32_t L_4 = V_2;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = L_4;
		V_3 = ((RequireComponent_t358 *)Castclass((*(Object_t **)(Object_t **)SZArrayLdElema(L_3, L_5)), InitializedTypeInfo(&RequireComponent_t358_il2cpp_TypeInfo)));
		List_1_t735 * L_6 = V_0;
		if (L_6)
		{
			goto IL_0073;
		}
	}
	{
		ObjectU5BU5D_t269* L_7 = V_1;
		NullCheck(L_7);
		if ((!(((uint32_t)(((int32_t)(((Array_t *)L_7)->max_length)))) == ((uint32_t)1))))
		{
			goto IL_0073;
		}
	}
	{
		Type_t * L_8 = ___klass;
		NullCheck(L_8);
		Type_t * L_9 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&Type_get_BaseType_m3544_MethodInfo, L_8);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_10 = Type_GetTypeFromHandle_m1488(NULL /*static, unused*/, LoadTypeToken(&MonoBehaviour_t3_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m1488_MethodInfo);
		if ((!(((Object_t*)(Type_t *)L_9) == ((Object_t*)(Type_t *)L_10))))
		{
			goto IL_0073;
		}
	}
	{
		TypeU5BU5D_t606* L_11 = ((TypeU5BU5D_t606*)SZArrayNew(TypeU5BU5D_t606_il2cpp_TypeInfo_var, 3));
		RequireComponent_t358 * L_12 = V_3;
		NullCheck(L_12);
		Type_t * L_13 = (L_12->___m_Type0_0);
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 0);
		ArrayElementTypeCheck (L_11, L_13);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_11, 0)) = (Type_t *)L_13;
		TypeU5BU5D_t606* L_14 = L_11;
		RequireComponent_t358 * L_15 = V_3;
		NullCheck(L_15);
		Type_t * L_16 = (L_15->___m_Type1_1);
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, 1);
		ArrayElementTypeCheck (L_14, L_16);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_14, 1)) = (Type_t *)L_16;
		TypeU5BU5D_t606* L_17 = L_14;
		RequireComponent_t358 * L_18 = V_3;
		NullCheck(L_18);
		Type_t * L_19 = (L_18->___m_Type2_2);
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, 2);
		ArrayElementTypeCheck (L_17, L_19);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_17, 2)) = (Type_t *)L_19;
		V_4 = L_17;
		TypeU5BU5D_t606* L_20 = V_4;
		return L_20;
	}

IL_0073:
	{
		List_1_t735 * L_21 = V_0;
		if (L_21)
		{
			goto IL_007f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(List_1_t735_il2cpp_TypeInfo_var);
		List_1_t735 * L_22 = (List_1_t735 *)il2cpp_codegen_object_new (List_1_t735_il2cpp_TypeInfo_var);
		List_1__ctor_m3547(L_22, /*hidden argument*/List_1__ctor_m3547_MethodInfo_var);
		V_0 = L_22;
	}

IL_007f:
	{
		RequireComponent_t358 * L_23 = V_3;
		NullCheck(L_23);
		Type_t * L_24 = (L_23->___m_Type0_0);
		if (!L_24)
		{
			goto IL_0096;
		}
	}
	{
		List_1_t735 * L_25 = V_0;
		RequireComponent_t358 * L_26 = V_3;
		NullCheck(L_26);
		Type_t * L_27 = (L_26->___m_Type0_0);
		NullCheck(L_25);
		VirtActionInvoker1< Type_t * >::Invoke(List_1_Add_m3548_MethodInfo_var, L_25, L_27);
	}

IL_0096:
	{
		RequireComponent_t358 * L_28 = V_3;
		NullCheck(L_28);
		Type_t * L_29 = (L_28->___m_Type1_1);
		if (!L_29)
		{
			goto IL_00ad;
		}
	}
	{
		List_1_t735 * L_30 = V_0;
		RequireComponent_t358 * L_31 = V_3;
		NullCheck(L_31);
		Type_t * L_32 = (L_31->___m_Type1_1);
		NullCheck(L_30);
		VirtActionInvoker1< Type_t * >::Invoke(List_1_Add_m3548_MethodInfo_var, L_30, L_32);
	}

IL_00ad:
	{
		RequireComponent_t358 * L_33 = V_3;
		NullCheck(L_33);
		Type_t * L_34 = (L_33->___m_Type2_2);
		if (!L_34)
		{
			goto IL_00c4;
		}
	}
	{
		List_1_t735 * L_35 = V_0;
		RequireComponent_t358 * L_36 = V_3;
		NullCheck(L_36);
		Type_t * L_37 = (L_36->___m_Type2_2);
		NullCheck(L_35);
		VirtActionInvoker1< Type_t * >::Invoke(List_1_Add_m3548_MethodInfo_var, L_35, L_37);
	}

IL_00c4:
	{
		int32_t L_38 = V_2;
		V_2 = ((int32_t)((int32_t)L_38+(int32_t)1));
	}

IL_00c8:
	{
		int32_t L_39 = V_2;
		ObjectU5BU5D_t269* L_40 = V_1;
		NullCheck(L_40);
		if ((((int32_t)L_39) < ((int32_t)(((int32_t)(((Array_t *)L_40)->max_length))))))
		{
			goto IL_0020;
		}
	}
	{
		Type_t * L_41 = ___klass;
		NullCheck(L_41);
		Type_t * L_42 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&Type_get_BaseType_m3544_MethodInfo, L_41);
		___klass = L_42;
	}

IL_00d9:
	{
		Type_t * L_43 = ___klass;
		if (!L_43)
		{
			goto IL_00ef;
		}
	}
	{
		Type_t * L_44 = ___klass;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_45 = Type_GetTypeFromHandle_m1488(NULL /*static, unused*/, LoadTypeToken(&MonoBehaviour_t3_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m1488_MethodInfo);
		if ((!(((Object_t*)(Type_t *)L_44) == ((Object_t*)(Type_t *)L_45))))
		{
			goto IL_0007;
		}
	}

IL_00ef:
	{
		List_1_t735 * L_46 = V_0;
		if (L_46)
		{
			goto IL_00f7;
		}
	}
	{
		return (TypeU5BU5D_t606*)NULL;
	}

IL_00f7:
	{
		List_1_t735 * L_47 = V_0;
		NullCheck(L_47);
		TypeU5BU5D_t606* L_48 = List_1_ToArray_m3551(L_47, /*hidden argument*/List_1_ToArray_m3551_MethodInfo_var);
		return L_48;
	}
}
// System.Boolean UnityEngine.AttributeHelperEngine::CheckIsEditorScript(System.Type)
extern MethodInfo AttributeHelperEngine_CheckIsEditorScript_m3141_MethodInfo;
extern "C" bool AttributeHelperEngine_CheckIsEditorScript_m3141 (Object_t * __this /* static, unused */, Type_t * ___klass, MethodInfo* method)
{
	ObjectU5BU5D_t269* V_0 = {0};
	{
		goto IL_0029;
	}

IL_0005:
	{
		Type_t * L_0 = ___klass;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_1 = Type_GetTypeFromHandle_m1488(NULL /*static, unused*/, LoadTypeToken(&ExecuteInEditMode_t374_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m1488_MethodInfo);
		NullCheck(L_0);
		ObjectU5BU5D_t269* L_2 = (ObjectU5BU5D_t269*)VirtFuncInvoker2< ObjectU5BU5D_t269*, Type_t *, bool >::Invoke(&MemberInfo_GetCustomAttributes_m3545_MethodInfo, L_0, L_1, 0);
		V_0 = L_2;
		ObjectU5BU5D_t269* L_3 = V_0;
		NullCheck(L_3);
		if (!(((int32_t)(((Array_t *)L_3)->max_length))))
		{
			goto IL_0021;
		}
	}
	{
		return 1;
	}

IL_0021:
	{
		Type_t * L_4 = ___klass;
		NullCheck(L_4);
		Type_t * L_5 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&Type_get_BaseType_m3544_MethodInfo, L_4);
		___klass = L_5;
	}

IL_0029:
	{
		Type_t * L_6 = ___klass;
		if (!L_6)
		{
			goto IL_003f;
		}
	}
	{
		Type_t * L_7 = ___klass;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_8 = Type_GetTypeFromHandle_m1488(NULL /*static, unused*/, LoadTypeToken(&MonoBehaviour_t3_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m1488_MethodInfo);
		if ((!(((Object_t*)(Type_t *)L_7) == ((Object_t*)(Type_t *)L_8))))
		{
			goto IL_0005;
		}
	}

IL_003f:
	{
		return 0;
	}
}
#ifndef _MSC_VER
#else
#endif
// UnityEngine.DisallowMultipleComponent
#include "UnityEngine_UnityEngine_DisallowMultipleComponentMethodDeclarations.h"



// System.Void UnityEngine.DisallowMultipleComponent::.ctor()
extern MethodInfo DisallowMultipleComponent__ctor_m2020_MethodInfo;
extern "C" void DisallowMultipleComponent__ctor_m2020 (DisallowMultipleComponent_t373 * __this, MethodInfo* method)
{
	{
		Attribute__ctor_m3370(__this, /*hidden argument*/&Attribute__ctor_m3370_MethodInfo);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
// UnityEngine.RequireComponent
#include "UnityEngine_UnityEngine_RequireComponentMethodDeclarations.h"



// System.Void UnityEngine.RequireComponent::.ctor(System.Type)
extern MethodInfo RequireComponent__ctor_m1995_MethodInfo;
extern "C" void RequireComponent__ctor_m1995 (RequireComponent_t358 * __this, Type_t * ___requiredComponent, MethodInfo* method)
{
	{
		Attribute__ctor_m3370(__this, /*hidden argument*/&Attribute__ctor_m3370_MethodInfo);
		Type_t * L_0 = ___requiredComponent;
		__this->___m_Type0_0 = L_0;
		return;
	}
}
// UnityEngine.AddComponentMenu
#include "UnityEngine_UnityEngine_AddComponentMenu.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo AddComponentMenu_t337_il2cpp_TypeInfo;
// UnityEngine.AddComponentMenu
#include "UnityEngine_UnityEngine_AddComponentMenuMethodDeclarations.h"



// System.Void UnityEngine.AddComponentMenu::.ctor(System.String)
extern MethodInfo AddComponentMenu__ctor_m1955_MethodInfo;
extern "C" void AddComponentMenu__ctor_m1955 (AddComponentMenu_t337 * __this, String_t* ___menuName, MethodInfo* method)
{
	{
		Attribute__ctor_m3370(__this, /*hidden argument*/&Attribute__ctor_m3370_MethodInfo);
		String_t* L_0 = ___menuName;
		__this->___m_AddComponentMenu_0 = L_0;
		__this->___m_Ordering_1 = 0;
		return;
	}
}
// System.Void UnityEngine.AddComponentMenu::.ctor(System.String,System.Int32)
extern MethodInfo AddComponentMenu__ctor_m2018_MethodInfo;
extern "C" void AddComponentMenu__ctor_m2018 (AddComponentMenu_t337 * __this, String_t* ___menuName, int32_t ___order, MethodInfo* method)
{
	{
		Attribute__ctor_m3370(__this, /*hidden argument*/&Attribute__ctor_m3370_MethodInfo);
		String_t* L_0 = ___menuName;
		__this->___m_AddComponentMenu_0 = L_0;
		int32_t L_1 = ___order;
		__this->___m_Ordering_1 = L_1;
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
