#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
// <Module>
#include "AssemblyU2DCSharp_U3CModuleU3E.h"
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
extern TypeInfo U3CModuleU3E_t0_il2cpp_TypeInfo;
// <Module>
#include "AssemblyU2DCSharp_U3CModuleU3EMethodDeclarations.h"


// System.Array
#include "mscorlib_System_Array.h"

// BallKillerScript
#include "AssemblyU2DCSharp_BallKillerScript.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo BallKillerScript_t2_il2cpp_TypeInfo;
// BallKillerScript
#include "AssemblyU2DCSharp_BallKillerScriptMethodDeclarations.h"

// System.Void
#include "mscorlib_System_Void.h"
// GameManager
#include "AssemblyU2DCSharp_GameManager.h"
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviourMethodDeclarations.h"
// GameManager
#include "AssemblyU2DCSharp_GameManagerMethodDeclarations.h"
extern MethodInfo MonoBehaviour__ctor_m27_MethodInfo;
extern MethodInfo GameManager_BallWentDead_m16_MethodInfo;


// System.Void BallKillerScript::.ctor()
extern MethodInfo BallKillerScript__ctor_m0_MethodInfo;
extern "C" void BallKillerScript__ctor_m0 (BallKillerScript_t2 * __this, MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m27(__this, /*hidden argument*/&MonoBehaviour__ctor_m27_MethodInfo);
		return;
	}
}
// System.Void BallKillerScript::Start()
extern MethodInfo BallKillerScript_Start_m1_MethodInfo;
extern "C" void BallKillerScript_Start_m1 (BallKillerScript_t2 * __this, MethodInfo* method)
{
	{
		return;
	}
}
// System.Void BallKillerScript::Update()
extern MethodInfo BallKillerScript_Update_m2_MethodInfo;
extern "C" void BallKillerScript_Update_m2 (BallKillerScript_t2 * __this, MethodInfo* method)
{
	{
		return;
	}
}
// System.Void BallKillerScript::OnTriggerEnter()
extern MethodInfo BallKillerScript_OnTriggerEnter_m3_MethodInfo;
extern "C" void BallKillerScript_OnTriggerEnter_m3 (BallKillerScript_t2 * __this, MethodInfo* method)
{
	{
		GameManager_t1 * L_0 = (__this->___gameManager_2);
		NullCheck(L_0);
		GameManager_BallWentDead_m16(L_0, /*hidden argument*/&GameManager_BallWentDead_m16_MethodInfo);
		return;
	}
}
// CrossbarScript
#include "AssemblyU2DCSharp_CrossbarScript.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CrossbarScript_t4_il2cpp_TypeInfo;
// CrossbarScript
#include "AssemblyU2DCSharp_CrossbarScriptMethodDeclarations.h"

extern MethodInfo GameManager_BallHitCrossbar_m17_MethodInfo;


// System.Void CrossbarScript::.ctor()
extern MethodInfo CrossbarScript__ctor_m4_MethodInfo;
extern "C" void CrossbarScript__ctor_m4 (CrossbarScript_t4 * __this, MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m27(__this, /*hidden argument*/&MonoBehaviour__ctor_m27_MethodInfo);
		return;
	}
}
// System.Void CrossbarScript::Start()
extern MethodInfo CrossbarScript_Start_m5_MethodInfo;
extern "C" void CrossbarScript_Start_m5 (CrossbarScript_t4 * __this, MethodInfo* method)
{
	{
		return;
	}
}
// System.Void CrossbarScript::Update()
extern MethodInfo CrossbarScript_Update_m6_MethodInfo;
extern "C" void CrossbarScript_Update_m6 (CrossbarScript_t4 * __this, MethodInfo* method)
{
	{
		return;
	}
}
// System.Void CrossbarScript::OnCollisionEnter()
extern MethodInfo CrossbarScript_OnCollisionEnter_m7_MethodInfo;
extern "C" void CrossbarScript_OnCollisionEnter_m7 (CrossbarScript_t4 * __this, MethodInfo* method)
{
	{
		GameManager_t1 * L_0 = (__this->___gameManager_2);
		NullCheck(L_0);
		GameManager_BallHitCrossbar_m17(L_0, /*hidden argument*/&GameManager_BallHitCrossbar_m17_MethodInfo);
		return;
	}
}
// FootballScript
#include "AssemblyU2DCSharp_FootballScript.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo FootballScript_t5_il2cpp_TypeInfo;
// FootballScript
#include "AssemblyU2DCSharp_FootballScriptMethodDeclarations.h"

// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// System.Single
#include "mscorlib_System_Single.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
// System.Object
#include "mscorlib_System_Object.h"
// UnityEngine.Transform
#include "UnityEngine_UnityEngine_Transform.h"
// UnityEngine.Renderer
#include "UnityEngine_UnityEngine_Renderer.h"
// UnityEngine.Rigidbody
#include "UnityEngine_UnityEngine_Rigidbody.h"
// System.String
#include "mscorlib_System_String.h"
extern TypeInfo Vector3_t6_il2cpp_TypeInfo;
extern TypeInfo Boolean_t13_il2cpp_TypeInfo;
extern TypeInfo Object_t_il2cpp_TypeInfo;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3MethodDeclarations.h"
// UnityEngine.Component
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
// UnityEngine.Transform
#include "UnityEngine_UnityEngine_TransformMethodDeclarations.h"
// UnityEngine.Renderer
#include "UnityEngine_UnityEngine_RendererMethodDeclarations.h"
// UnityEngine.Rigidbody
#include "UnityEngine_UnityEngine_RigidbodyMethodDeclarations.h"
extern MethodInfo Vector3__ctor_m28_MethodInfo;
extern MethodInfo Vector3_Equals_m29_MethodInfo;
extern MethodInfo Component_get_transform_m30_MethodInfo;
extern MethodInfo Transform_Rotate_m31_MethodInfo;
extern MethodInfo Transform_FindChild_m32_MethodInfo;
extern MethodInfo Renderer_set_enabled_m33_MethodInfo;
extern MethodInfo Rigidbody_AddForce_m34_MethodInfo;
struct Component_t15;
// UnityEngine.Component
#include "UnityEngine_UnityEngine_Component.h"
// UnityEngine.CastHelper`1<UnityEngine.Renderer>
#include "UnityEngine_UnityEngine_CastHelper_1_gen.h"
// System.Type
#include "mscorlib_System_Type.h"
// System.RuntimeTypeHandle
#include "mscorlib_System_RuntimeTypeHandle.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
struct Component_t15;
// UnityEngine.CastHelper`1<System.Object>
#include "UnityEngine_UnityEngine_CastHelper_1_gen_0.h"
// Declaration !!0 UnityEngine.Component::GetComponent<System.Object>()
// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C" Object_t * Component_GetComponent_TisObject_t_m36_gshared (Component_t15 * __this, MethodInfo* method);
#define Component_GetComponent_TisObject_t_m36(__this, method) (( Object_t * (*) (Component_t15 *, MethodInfo*))Component_GetComponent_TisObject_t_m36_gshared)(__this, method)
// Declaration !!0 UnityEngine.Component::GetComponent<UnityEngine.Renderer>()
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Renderer>()
#define Component_GetComponent_TisRenderer_t14_m35(__this, method) (( Renderer_t14 * (*) (Component_t15 *, MethodInfo*))Component_GetComponent_TisObject_t_m36_gshared)(__this, method)
struct Component_t15;
// UnityEngine.CastHelper`1<UnityEngine.Rigidbody>
#include "UnityEngine_UnityEngine_CastHelper_1_gen_1.h"
// Declaration !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody>()
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody>()
#define Component_GetComponent_TisRigidbody_t16_m37(__this, method) (( Rigidbody_t16 * (*) (Component_t15 *, MethodInfo*))Component_GetComponent_TisObject_t_m36_gshared)(__this, method)
extern Il2CppGenericMethod Component_GetComponent_TisRenderer_t14_m35_GenericMethod;
extern Il2CppGenericMethod Component_GetComponent_TisRigidbody_t16_m37_GenericMethod;


// System.Void FootballScript::.ctor()
extern MethodInfo FootballScript__ctor_m8_MethodInfo;
extern "C" void FootballScript__ctor_m8 (FootballScript_t5 * __this, MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m27(__this, /*hidden argument*/&MonoBehaviour__ctor_m27_MethodInfo);
		return;
	}
}
// System.Void FootballScript::Start()
extern MethodInfo FootballScript_Start_m9_MethodInfo;
extern "C" void FootballScript_Start_m9 (FootballScript_t5 * __this, MethodInfo* method)
{
	{
		return;
	}
}
// System.Void FootballScript::Update()
extern MethodInfo FootballScript_Update_m10_MethodInfo;
extern "C" void FootballScript_Update_m10 (FootballScript_t5 * __this, MethodInfo* method)
{
	{
		Vector3_t6 * L_0 = &(__this->___initialForce_2);
		Vector3_t6  L_1 = {0};
		Vector3__ctor_m28(&L_1, (0.0f), (0.0f), (0.0f), /*hidden argument*/&Vector3__ctor_m28_MethodInfo);
		Vector3_t6  L_2 = L_1;
		Object_t * L_3 = Box(InitializedTypeInfo(&Vector3_t6_il2cpp_TypeInfo), &L_2);
		bool L_4 = Vector3_Equals_m29(L_0, L_3, /*hidden argument*/&Vector3_Equals_m29_MethodInfo);
		if (L_4)
		{
			goto IL_0048;
		}
	}
	{
		Transform_t8 * L_5 = Component_get_transform_m30(__this, /*hidden argument*/&Component_get_transform_m30_MethodInfo);
		Vector3_t6  L_6 = {0};
		Vector3__ctor_m28(&L_6, (5.0f), (0.0f), (0.0f), /*hidden argument*/&Vector3__ctor_m28_MethodInfo);
		NullCheck(L_5);
		Transform_Rotate_m31(L_5, L_6, /*hidden argument*/&Transform_Rotate_m31_MethodInfo);
	}

IL_0048:
	{
		return;
	}
}
// System.Void FootballScript::setKickForceWithDirectionAndPower(UnityEngine.Vector3,System.Single)
extern MethodInfo FootballScript_setKickForceWithDirectionAndPower_m11_MethodInfo;
extern MethodInfo* Component_GetComponent_TisRenderer_t14_m35_MethodInfo_var;
extern MethodInfo* Component_GetComponent_TisRigidbody_t16_m37_MethodInfo_var;
extern "C" void FootballScript_setKickForceWithDirectionAndPower_m11 (FootballScript_t5 * __this, Vector3_t6  ___direction_, float ___power_, MethodInfo* method)
{
	static bool FootballScript_setKickForceWithDirectionAndPower_m11_init;
	if (!FootballScript_setKickForceWithDirectionAndPower_m11_init)
	{
		Component_GetComponent_TisRenderer_t14_m35_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Component_GetComponent_TisRenderer_t14_m35_GenericMethod);
		Component_GetComponent_TisRigidbody_t16_m37_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Component_GetComponent_TisRigidbody_t16_m37_GenericMethod);
		FootballScript_setKickForceWithDirectionAndPower_m11_init = true;
	}
	Transform_t8 * V_0 = {0};
	Renderer_t14 * V_1 = {0};
	float V_2 = 0.0f;
	Vector3_t6  V_3 = {0};
	Rigidbody_t16 * V_4 = {0};
	{
		Transform_t8 * L_0 = Component_get_transform_m30(__this, /*hidden argument*/&Component_get_transform_m30_MethodInfo);
		NullCheck(L_0);
		Transform_t8 * L_1 = Transform_FindChild_m32(L_0, (String_t*) &_stringLiteral1, /*hidden argument*/&Transform_FindChild_m32_MethodInfo);
		V_0 = L_1;
		Transform_t8 * L_2 = V_0;
		NullCheck(L_2);
		Renderer_t14 * L_3 = Component_GetComponent_TisRenderer_t14_m35(L_2, /*hidden argument*/Component_GetComponent_TisRenderer_t14_m35_MethodInfo_var);
		V_1 = L_3;
		Renderer_t14 * L_4 = V_1;
		NullCheck(L_4);
		Renderer_set_enabled_m33(L_4, 0, /*hidden argument*/&Renderer_set_enabled_m33_MethodInfo);
		V_2 = (3.0f);
		float L_5 = ((&___direction_)->___x_1);
		float L_6 = V_2;
		float L_7 = ___power_;
		float L_8 = V_2;
		float L_9 = ((&___direction_)->___y_2);
		float L_10 = V_2;
		Vector3__ctor_m28((&V_3), ((float)((float)((float)((float)L_5*(float)L_6))*(float)(5.0f))), ((float)((float)L_7*(float)L_8)), ((float)((float)((float)((float)L_9*(float)(5.0f)))*(float)L_10)), /*hidden argument*/&Vector3__ctor_m28_MethodInfo);
		Rigidbody_t16 * L_11 = Component_GetComponent_TisRigidbody_t16_m37(__this, /*hidden argument*/Component_GetComponent_TisRigidbody_t16_m37_MethodInfo_var);
		V_4 = L_11;
		Rigidbody_t16 * L_12 = V_4;
		Vector3_t6  L_13 = V_3;
		NullCheck(L_12);
		Rigidbody_AddForce_m34(L_12, L_13, /*hidden argument*/&Rigidbody_AddForce_m34_MethodInfo);
		Vector3_t6  L_14 = V_3;
		__this->___initialForce_2 = L_14;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo GameManager_t1_il2cpp_TypeInfo;

// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObject.h"
// UnityEngine.Camera
#include "UnityEngine_UnityEngine_Camera.h"
// System.Int32
#include "mscorlib_System_Int32.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_Object.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"
// TouchRecogniser
#include "AssemblyU2DCSharp_TouchRecogniser.h"
// UnityEngine.UI.Text
#include "UnityEngine_UI_UnityEngine_UI_Text.h"
extern TypeInfo GameObject_t10_il2cpp_TypeInfo;
extern TypeInfo Int32_t17_il2cpp_TypeInfo;
extern TypeInfo String_t_il2cpp_TypeInfo;
extern TypeInfo Text_t11_il2cpp_TypeInfo;
extern TypeInfo Void_t18_il2cpp_TypeInfo;
// UnityEngine.Time
#include "UnityEngine_UnityEngine_TimeMethodDeclarations.h"
// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObjectMethodDeclarations.h"
// UnityEngine.Behaviour
#include "UnityEngine_UnityEngine_BehaviourMethodDeclarations.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_QuaternionMethodDeclarations.h"
// TouchRecogniser
#include "AssemblyU2DCSharp_TouchRecogniserMethodDeclarations.h"
// UnityEngine.Random
#include "UnityEngine_UnityEngine_RandomMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// UnityEngine.UI.Text
#include "UnityEngine_UI_UnityEngine_UI_TextMethodDeclarations.h"
extern MethodInfo GameManager_CreateBall_m15_MethodInfo;
extern MethodInfo Time_get_deltaTime_m38_MethodInfo;
extern MethodInfo GameObject_get_transform_m39_MethodInfo;
extern MethodInfo Transform_get_position_m40_MethodInfo;
extern MethodInfo Behaviour_set_enabled_m41_MethodInfo;
extern MethodInfo Object_op_Implicit_m42_MethodInfo;
extern MethodInfo Object_Destroy_m43_MethodInfo;
extern MethodInfo Quaternion_get_identity_m44_MethodInfo;
extern MethodInfo Object_Instantiate_m45_MethodInfo;
extern MethodInfo TouchRecogniser_SetFootball_m26_MethodInfo;
extern MethodInfo Random_Range_m46_MethodInfo;
extern MethodInfo Transform_set_position_m47_MethodInfo;
extern MethodInfo Transform_LookAt_m48_MethodInfo;
extern MethodInfo MonoBehaviour_print_m49_MethodInfo;
extern MethodInfo GameManager_DidSetScore_m19_MethodInfo;
extern MethodInfo String_Concat_m50_MethodInfo;
extern MethodInfo Text_set_text_m51_MethodInfo;


// System.Void GameManager::.ctor()
extern MethodInfo GameManager__ctor_m12_MethodInfo;
extern "C" void GameManager__ctor_m12 (GameManager_t1 * __this, MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m27(__this, /*hidden argument*/&MonoBehaviour__ctor_m27_MethodInfo);
		return;
	}
}
// System.Void GameManager::Start()
extern MethodInfo GameManager_Start_m13_MethodInfo;
extern "C" void GameManager_Start_m13 (GameManager_t1 * __this, MethodInfo* method)
{
	{
		GameManager_CreateBall_m15(__this, /*hidden argument*/&GameManager_CreateBall_m15_MethodInfo);
		return;
	}
}
// System.Void GameManager::Update()
extern MethodInfo GameManager_Update_m14_MethodInfo;
extern "C" void GameManager_Update_m14 (GameManager_t1 * __this, MethodInfo* method)
{
	Vector3_t6  V_0 = {0};
	{
		bool L_0 = (__this->___hitCrossbar_9);
		if (!L_0)
		{
			goto IL_0045;
		}
	}
	{
		float L_1 = (__this->___crossbarWaitTime_10);
		float L_2 = Time_get_deltaTime_m38(NULL /*static, unused*/, /*hidden argument*/&Time_get_deltaTime_m38_MethodInfo);
		__this->___crossbarWaitTime_10 = ((float)((float)L_1+(float)L_2));
		float L_3 = (__this->___crossbarWaitTime_10);
		if ((!(((float)L_3) > ((float)(2.0f)))))
		{
			goto IL_0045;
		}
	}
	{
		__this->___crossbarWaitTime_10 = (0.0f);
		__this->___hitCrossbar_9 = 0;
		GameManager_CreateBall_m15(__this, /*hidden argument*/&GameManager_CreateBall_m15_MethodInfo);
	}

IL_0045:
	{
		GameObject_t10 * L_4 = (__this->___football_8);
		NullCheck(L_4);
		Transform_t8 * L_5 = GameObject_get_transform_m39(L_4, /*hidden argument*/&GameObject_get_transform_m39_MethodInfo);
		NullCheck(L_5);
		Vector3_t6  L_6 = Transform_get_position_m40(L_5, /*hidden argument*/&Transform_get_position_m40_MethodInfo);
		V_0 = L_6;
		float L_7 = ((&V_0)->___z_3);
		if ((!(((float)L_7) > ((float)(30.0f)))))
		{
			goto IL_0073;
		}
	}
	{
		Camera_t7 * L_8 = (__this->___closeUpCamera_2);
		NullCheck(L_8);
		Behaviour_set_enabled_m41(L_8, 1, /*hidden argument*/&Behaviour_set_enabled_m41_MethodInfo);
	}

IL_0073:
	{
		return;
	}
}
// System.Void GameManager::CreateBall()
extern MethodInfo* Component_GetComponent_TisRenderer_t14_m35_MethodInfo_var;
extern "C" void GameManager_CreateBall_m15 (GameManager_t1 * __this, MethodInfo* method)
{
	static bool GameManager_CreateBall_m15_init;
	if (!GameManager_CreateBall_m15_init)
	{
		Component_GetComponent_TisRenderer_t14_m35_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Component_GetComponent_TisRenderer_t14_m35_GenericMethod);
		GameManager_CreateBall_m15_init = true;
	}
	int32_t V_0 = 0;
	Transform_t8 * V_1 = {0};
	Renderer_t14 * V_2 = {0};
	Vector3_t6  V_3 = {0};
	Vector3_t6  V_4 = {0};
	{
		GameObject_t10 * L_0 = (__this->___football_8);
		bool L_1 = Object_op_Implicit_m42(NULL /*static, unused*/, L_0, /*hidden argument*/&Object_op_Implicit_m42_MethodInfo);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		GameObject_t10 * L_2 = (__this->___football_8);
		Object_Destroy_m43(NULL /*static, unused*/, L_2, /*hidden argument*/&Object_Destroy_m43_MethodInfo);
	}

IL_001b:
	{
		Camera_t7 * L_3 = (__this->___closeUpCamera_2);
		NullCheck(L_3);
		Behaviour_set_enabled_m41(L_3, 0, /*hidden argument*/&Behaviour_set_enabled_m41_MethodInfo);
		V_0 = ((int32_t)30);
		GameObject_t10 * L_4 = (__this->___footballObject_6);
		Vector3_t6  L_5 = {0};
		Vector3__ctor_m28(&L_5, (0.0f), (0.5f), (0.0f), /*hidden argument*/&Vector3__ctor_m28_MethodInfo);
		Quaternion_t19  L_6 = Quaternion_get_identity_m44(NULL /*static, unused*/, /*hidden argument*/&Quaternion_get_identity_m44_MethodInfo);
		Object_t20 * L_7 = Object_Instantiate_m45(NULL /*static, unused*/, L_4, L_5, L_6, /*hidden argument*/&Object_Instantiate_m45_MethodInfo);
		__this->___football_8 = ((GameObject_t10 *)Castclass(L_7, InitializedTypeInfo(&GameObject_t10_il2cpp_TypeInfo)));
		GameObject_t10 * L_8 = (__this->___football_8);
		NullCheck(L_8);
		Transform_t8 * L_9 = GameObject_get_transform_m39(L_8, /*hidden argument*/&GameObject_get_transform_m39_MethodInfo);
		NullCheck(L_9);
		Transform_t8 * L_10 = Transform_FindChild_m32(L_9, (String_t*) &_stringLiteral1, /*hidden argument*/&Transform_FindChild_m32_MethodInfo);
		V_1 = L_10;
		Transform_t8 * L_11 = V_1;
		NullCheck(L_11);
		Renderer_t14 * L_12 = Component_GetComponent_TisRenderer_t14_m35(L_11, /*hidden argument*/Component_GetComponent_TisRenderer_t14_m35_MethodInfo_var);
		V_2 = L_12;
		Renderer_t14 * L_13 = V_2;
		NullCheck(L_13);
		Renderer_set_enabled_m33(L_13, 0, /*hidden argument*/&Renderer_set_enabled_m33_MethodInfo);
		TouchRecogniser_t9 * L_14 = (__this->___touchRecogniser_5);
		GameObject_t10 * L_15 = (__this->___football_8);
		NullCheck(L_14);
		TouchRecogniser_SetFootball_m26(L_14, L_15, /*hidden argument*/&TouchRecogniser_SetFootball_m26_MethodInfo);
		GameObject_t10 * L_16 = (__this->___football_8);
		NullCheck(L_16);
		Transform_t8 * L_17 = GameObject_get_transform_m39(L_16, /*hidden argument*/&GameObject_get_transform_m39_MethodInfo);
		NullCheck(L_17);
		Vector3_t6  L_18 = Transform_get_position_m40(L_17, /*hidden argument*/&Transform_get_position_m40_MethodInfo);
		V_3 = L_18;
		int32_t L_19 = V_0;
		int32_t L_20 = V_0;
		int32_t L_21 = Random_Range_m46(NULL /*static, unused*/, ((-L_19)), L_20, /*hidden argument*/&Random_Range_m46_MethodInfo);
		float L_22 = ((&V_3)->___y_2);
		float L_23 = ((&V_3)->___z_3);
		Vector3__ctor_m28((&V_3), (((float)L_21)), L_22, L_23, /*hidden argument*/&Vector3__ctor_m28_MethodInfo);
		GameObject_t10 * L_24 = (__this->___football_8);
		NullCheck(L_24);
		Transform_t8 * L_25 = GameObject_get_transform_m39(L_24, /*hidden argument*/&GameObject_get_transform_m39_MethodInfo);
		Vector3_t6  L_26 = V_3;
		NullCheck(L_25);
		Transform_set_position_m47(L_25, L_26, /*hidden argument*/&Transform_set_position_m47_MethodInfo);
		Camera_t7 * L_27 = (__this->___mainCamera_3);
		NullCheck(L_27);
		Transform_t8 * L_28 = Component_get_transform_m30(L_27, /*hidden argument*/&Component_get_transform_m30_MethodInfo);
		NullCheck(L_28);
		Vector3_t6  L_29 = Transform_get_position_m40(L_28, /*hidden argument*/&Transform_get_position_m40_MethodInfo);
		V_4 = L_29;
		float L_30 = ((&V_3)->___x_1);
		float L_31 = ((&V_4)->___y_2);
		float L_32 = ((&V_4)->___z_3);
		Vector3__ctor_m28((&V_4), ((float)((float)L_30*(float)(1.2f))), L_31, L_32, /*hidden argument*/&Vector3__ctor_m28_MethodInfo);
		Camera_t7 * L_33 = (__this->___mainCamera_3);
		NullCheck(L_33);
		Transform_t8 * L_34 = Component_get_transform_m30(L_33, /*hidden argument*/&Component_get_transform_m30_MethodInfo);
		Vector3_t6  L_35 = V_4;
		NullCheck(L_34);
		Transform_set_position_m47(L_34, L_35, /*hidden argument*/&Transform_set_position_m47_MethodInfo);
		Camera_t7 * L_36 = (__this->___mainCamera_3);
		NullCheck(L_36);
		Transform_t8 * L_37 = Component_get_transform_m30(L_36, /*hidden argument*/&Component_get_transform_m30_MethodInfo);
		Transform_t8 * L_38 = (__this->___goals_4);
		NullCheck(L_38);
		Vector3_t6  L_39 = Transform_get_position_m40(L_38, /*hidden argument*/&Transform_get_position_m40_MethodInfo);
		NullCheck(L_37);
		Transform_LookAt_m48(L_37, L_39, /*hidden argument*/&Transform_LookAt_m48_MethodInfo);
		return;
	}
}
// System.Void GameManager::BallWentDead()
extern "C" void GameManager_BallWentDead_m16 (GameManager_t1 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->___hitCrossbar_9);
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}

IL_000c:
	{
		MonoBehaviour_print_m49(NULL /*static, unused*/, (String_t*) &_stringLiteral2, /*hidden argument*/&MonoBehaviour_print_m49_MethodInfo);
		__this->___score_11 = 0;
		GameManager_DidSetScore_m19(__this, /*hidden argument*/&GameManager_DidSetScore_m19_MethodInfo);
		GameManager_CreateBall_m15(__this, /*hidden argument*/&GameManager_CreateBall_m15_MethodInfo);
		return;
	}
}
// System.Void GameManager::BallHitCrossbar()
extern "C" void GameManager_BallHitCrossbar_m17 (GameManager_t1 * __this, MethodInfo* method)
{
	{
		MonoBehaviour_print_m49(NULL /*static, unused*/, (String_t*) &_stringLiteral3, /*hidden argument*/&MonoBehaviour_print_m49_MethodInfo);
		__this->___hitCrossbar_9 = 1;
		int32_t L_0 = (__this->___score_11);
		__this->___score_11 = ((int32_t)((int32_t)L_0+(int32_t)1));
		GameManager_DidSetScore_m19(__this, /*hidden argument*/&GameManager_DidSetScore_m19_MethodInfo);
		return;
	}
}
// System.Void GameManager::BallHitPost()
extern MethodInfo GameManager_BallHitPost_m18_MethodInfo;
extern "C" void GameManager_BallHitPost_m18 (GameManager_t1 * __this, MethodInfo* method)
{
	{
		MonoBehaviour_print_m49(NULL /*static, unused*/, (String_t*) &_stringLiteral4, /*hidden argument*/&MonoBehaviour_print_m49_MethodInfo);
		GameManager_CreateBall_m15(__this, /*hidden argument*/&GameManager_CreateBall_m15_MethodInfo);
		return;
	}
}
// System.Void GameManager::DidSetScore()
extern "C" void GameManager_DidSetScore_m19 (GameManager_t1 * __this, MethodInfo* method)
{
	{
		Text_t11 * L_0 = (__this->___scoreText_7);
		int32_t L_1 = (__this->___score_11);
		int32_t L_2 = L_1;
		Object_t * L_3 = Box(InitializedTypeInfo(&Int32_t17_il2cpp_TypeInfo), &L_2);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_4 = String_Concat_m50(NULL /*static, unused*/, (String_t*) &_stringLiteral5, L_3, /*hidden argument*/&String_Concat_m50_MethodInfo);
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(&Text_set_text_m51_MethodInfo, L_0, L_4);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo TouchRecogniser_t9_il2cpp_TypeInfo;

// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.Touch
#include "UnityEngine_UnityEngine_Touch.h"
// UnityEngine.TouchPhase
#include "UnityEngine_UnityEngine_TouchPhase.h"
extern TypeInfo Input_t21_il2cpp_TypeInfo;
// UnityEngine.Input
#include "UnityEngine_UnityEngine_InputMethodDeclarations.h"
// UnityEngine.Touch
#include "UnityEngine_UnityEngine_TouchMethodDeclarations.h"
extern MethodInfo Input_get_mousePosition_m52_MethodInfo;
extern MethodInfo TouchRecogniser_GotMousePosition_m23_MethodInfo;
extern MethodInfo Input_get_touchCount_m53_MethodInfo;
extern MethodInfo Input_GetTouch_m54_MethodInfo;
extern MethodInfo Touch_get_phase_m55_MethodInfo;
extern MethodInfo Touch_get_deltaPosition_m56_MethodInfo;
extern MethodInfo TouchRecogniser_GotDeltaPosition_m24_MethodInfo;
extern MethodInfo Input_GetMouseButtonDown_m57_MethodInfo;
extern MethodInfo Input_GetMouseButtonUp_m58_MethodInfo;
extern MethodInfo Vector3_Distance_m59_MethodInfo;
extern MethodInfo TouchRecogniser_KickFootballWithDirectionAndPower_m25_MethodInfo;
extern MethodInfo Transform_set_localScale_m60_MethodInfo;
extern MethodInfo Transform_set_localPosition_m61_MethodInfo;
extern MethodInfo Quaternion_LookRotation_m62_MethodInfo;
extern MethodInfo Transform_set_localRotation_m63_MethodInfo;
struct GameObject_t10;
// UnityEngine.CastHelper`1<FootballScript>
#include "UnityEngine_UnityEngine_CastHelper_1_gen_2.h"
struct GameObject_t10;
// Declaration !!0 UnityEngine.GameObject::GetComponent<System.Object>()
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
extern "C" Object_t * GameObject_GetComponent_TisObject_t_m65_gshared (GameObject_t10 * __this, MethodInfo* method);
#define GameObject_GetComponent_TisObject_t_m65(__this, method) (( Object_t * (*) (GameObject_t10 *, MethodInfo*))GameObject_GetComponent_TisObject_t_m65_gshared)(__this, method)
// Declaration !!0 UnityEngine.GameObject::GetComponent<FootballScript>()
// !!0 UnityEngine.GameObject::GetComponent<FootballScript>()
#define GameObject_GetComponent_TisFootballScript_t5_m64(__this, method) (( FootballScript_t5 * (*) (GameObject_t10 *, MethodInfo*))GameObject_GetComponent_TisObject_t_m65_gshared)(__this, method)
extern Il2CppGenericMethod GameObject_GetComponent_TisFootballScript_t5_m64_GenericMethod;


// System.Void TouchRecogniser::.ctor()
extern MethodInfo TouchRecogniser__ctor_m20_MethodInfo;
extern "C" void TouchRecogniser__ctor_m20 (TouchRecogniser_t9 * __this, MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m27(__this, /*hidden argument*/&MonoBehaviour__ctor_m27_MethodInfo);
		return;
	}
}
// System.Void TouchRecogniser::Start()
extern MethodInfo TouchRecogniser_Start_m21_MethodInfo;
extern "C" void TouchRecogniser_Start_m21 (TouchRecogniser_t9 * __this, MethodInfo* method)
{
	{
		Vector3_t6  L_0 = {0};
		Vector3__ctor_m28(&L_0, (0.0f), (0.0f), (0.0f), /*hidden argument*/&Vector3__ctor_m28_MethodInfo);
		__this->___startPosition_7 = L_0;
		return;
	}
}
// System.Void TouchRecogniser::Update()
extern MethodInfo TouchRecogniser_Update_m22_MethodInfo;
extern MethodInfo* Component_GetComponent_TisRenderer_t14_m35_MethodInfo_var;
extern "C" void TouchRecogniser_Update_m22 (TouchRecogniser_t9 * __this, MethodInfo* method)
{
	static bool TouchRecogniser_Update_m22_init;
	if (!TouchRecogniser_Update_m22_init)
	{
		Component_GetComponent_TisRenderer_t14_m35_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Component_GetComponent_TisRenderer_t14_m35_GenericMethod);
		TouchRecogniser_Update_m22_init = true;
	}
	Renderer_t14 * V_0 = {0};
	Vector3_t6  V_1 = {0};
	Vector2_t12  V_2 = {0};
	Vector3_t6  V_3 = {0};
	Vector3_t6  V_4 = {0};
	float V_5 = 0.0f;
	Touch_t22  V_6 = {0};
	Touch_t22  V_7 = {0};
	{
		bool L_0 = (__this->___isDragging_6);
		if (!L_0)
		{
			goto IL_002b;
		}
	}
	{
		Transform_t8 * L_1 = (__this->___arrow_5);
		NullCheck(L_1);
		Renderer_t14 * L_2 = Component_GetComponent_TisRenderer_t14_m35(L_1, /*hidden argument*/Component_GetComponent_TisRenderer_t14_m35_MethodInfo_var);
		V_0 = L_2;
		Renderer_t14 * L_3 = V_0;
		NullCheck(L_3);
		Renderer_set_enabled_m33(L_3, 1, /*hidden argument*/&Renderer_set_enabled_m33_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Input_t21_il2cpp_TypeInfo));
		Vector3_t6  L_4 = Input_get_mousePosition_m52(NULL /*static, unused*/, /*hidden argument*/&Input_get_mousePosition_m52_MethodInfo);
		V_1 = L_4;
		Vector3_t6  L_5 = V_1;
		TouchRecogniser_GotMousePosition_m23(__this, L_5, /*hidden argument*/&TouchRecogniser_GotMousePosition_m23_MethodInfo);
	}

IL_002b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Input_t21_il2cpp_TypeInfo));
		int32_t L_6 = Input_get_touchCount_m53(NULL /*static, unused*/, /*hidden argument*/&Input_get_touchCount_m53_MethodInfo);
		if ((((int32_t)L_6) <= ((int32_t)0)))
		{
			goto IL_0062;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Input_t21_il2cpp_TypeInfo));
		Touch_t22  L_7 = Input_GetTouch_m54(NULL /*static, unused*/, 0, /*hidden argument*/&Input_GetTouch_m54_MethodInfo);
		V_6 = L_7;
		int32_t L_8 = Touch_get_phase_m55((&V_6), /*hidden argument*/&Touch_get_phase_m55_MethodInfo);
		if ((!(((uint32_t)L_8) == ((uint32_t)1))))
		{
			goto IL_0062;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Input_t21_il2cpp_TypeInfo));
		Touch_t22  L_9 = Input_GetTouch_m54(NULL /*static, unused*/, 0, /*hidden argument*/&Input_GetTouch_m54_MethodInfo);
		V_7 = L_9;
		Vector2_t12  L_10 = Touch_get_deltaPosition_m56((&V_7), /*hidden argument*/&Touch_get_deltaPosition_m56_MethodInfo);
		V_2 = L_10;
		Vector2_t12  L_11 = V_2;
		TouchRecogniser_GotDeltaPosition_m24(__this, L_11, /*hidden argument*/&TouchRecogniser_GotDeltaPosition_m24_MethodInfo);
	}

IL_0062:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Input_t21_il2cpp_TypeInfo));
		bool L_12 = Input_GetMouseButtonDown_m57(NULL /*static, unused*/, 0, /*hidden argument*/&Input_GetMouseButtonDown_m57_MethodInfo);
		if (!L_12)
		{
			goto IL_0081;
		}
	}
	{
		__this->___isDragging_6 = 1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Input_t21_il2cpp_TypeInfo));
		Vector3_t6  L_13 = Input_get_mousePosition_m52(NULL /*static, unused*/, /*hidden argument*/&Input_get_mousePosition_m52_MethodInfo);
		V_3 = L_13;
		Vector3_t6  L_14 = V_3;
		TouchRecogniser_GotMousePosition_m23(__this, L_14, /*hidden argument*/&TouchRecogniser_GotMousePosition_m23_MethodInfo);
	}

IL_0081:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Input_t21_il2cpp_TypeInfo));
		bool L_15 = Input_GetMouseButtonUp_m58(NULL /*static, unused*/, 0, /*hidden argument*/&Input_GetMouseButtonUp_m58_MethodInfo);
		if (!L_15)
		{
			goto IL_00bf;
		}
	}
	{
		__this->___isDragging_6 = 0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Input_t21_il2cpp_TypeInfo));
		Vector3_t6  L_16 = Input_get_mousePosition_m52(NULL /*static, unused*/, /*hidden argument*/&Input_get_mousePosition_m52_MethodInfo);
		V_4 = L_16;
		Vector3_t6  L_17 = V_4;
		TouchRecogniser_GotMousePosition_m23(__this, L_17, /*hidden argument*/&TouchRecogniser_GotMousePosition_m23_MethodInfo);
		Vector3_t6  L_18 = (__this->___startPosition_7);
		Vector3_t6  L_19 = V_4;
		float L_20 = Vector3_Distance_m59(NULL /*static, unused*/, L_18, L_19, /*hidden argument*/&Vector3_Distance_m59_MethodInfo);
		V_5 = L_20;
		Vector3_t6  L_21 = (__this->___difference_8);
		float L_22 = V_5;
		TouchRecogniser_KickFootballWithDirectionAndPower_m25(__this, L_21, L_22, /*hidden argument*/&TouchRecogniser_KickFootballWithDirectionAndPower_m25_MethodInfo);
	}

IL_00bf:
	{
		return;
	}
}
// System.Void TouchRecogniser::GotMousePosition(UnityEngine.Vector3)
extern "C" void TouchRecogniser_GotMousePosition_m23 (TouchRecogniser_t9 * __this, Vector3_t6  ___mousePosition, MethodInfo* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		Vector3_t6 * L_0 = &(__this->___startPosition_7);
		Vector3_t6  L_1 = {0};
		Vector3__ctor_m28(&L_1, (0.0f), (0.0f), (0.0f), /*hidden argument*/&Vector3__ctor_m28_MethodInfo);
		Vector3_t6  L_2 = L_1;
		Object_t * L_3 = Box(InitializedTypeInfo(&Vector3_t6_il2cpp_TypeInfo), &L_2);
		bool L_4 = Vector3_Equals_m29(L_0, L_3, /*hidden argument*/&Vector3_Equals_m29_MethodInfo);
		if (!L_4)
		{
			goto IL_0031;
		}
	}
	{
		Vector3_t6  L_5 = ___mousePosition;
		__this->___startPosition_7 = L_5;
		return;
	}

IL_0031:
	{
		Vector3_t6 * L_6 = &(__this->___startPosition_7);
		float L_7 = (L_6->___x_1);
		float L_8 = ((&___mousePosition)->___x_1);
		Vector3_t6 * L_9 = &(__this->___startPosition_7);
		float L_10 = (L_9->___y_2);
		float L_11 = ((&___mousePosition)->___y_2);
		Vector3_t6 * L_12 = &(__this->___startPosition_7);
		float L_13 = (L_12->___z_3);
		float L_14 = ((&___mousePosition)->___z_3);
		Vector3_t6  L_15 = {0};
		Vector3__ctor_m28(&L_15, ((float)((float)L_7-(float)L_8)), ((float)((float)L_10-(float)L_11)), ((float)((float)L_13-(float)L_14)), /*hidden argument*/&Vector3__ctor_m28_MethodInfo);
		__this->___difference_8 = L_15;
		Vector3_t6  L_16 = (__this->___startPosition_7);
		Vector3_t6  L_17 = ___mousePosition;
		float L_18 = Vector3_Distance_m59(NULL /*static, unused*/, L_16, L_17, /*hidden argument*/&Vector3_Distance_m59_MethodInfo);
		V_0 = L_18;
		V_1 = (100.0f);
		float L_19 = V_0;
		float L_20 = V_1;
		if ((!(((float)L_19) > ((float)L_20))))
		{
			goto IL_008f;
		}
	}

IL_008f:
	{
		float L_21 = V_0;
		float L_22 = V_1;
		V_2 = ((float)((float)((float)((float)L_21/(float)L_22))*(float)(3.0f)));
		Transform_t8 * L_23 = (__this->___arrow_5);
		float L_24 = V_2;
		Vector3_t6  L_25 = {0};
		Vector3__ctor_m28(&L_25, (0.25f), (1.0f), L_24, /*hidden argument*/&Vector3__ctor_m28_MethodInfo);
		NullCheck(L_23);
		Transform_set_localScale_m60(L_23, L_25, /*hidden argument*/&Transform_set_localScale_m60_MethodInfo);
		Transform_t8 * L_26 = (__this->___arrow_5);
		NullCheck(L_26);
		Transform_t8 * L_27 = Component_get_transform_m30(L_26, /*hidden argument*/&Component_get_transform_m30_MethodInfo);
		float L_28 = V_2;
		Vector3_t6  L_29 = {0};
		Vector3__ctor_m28(&L_29, (1.0f), (1.0f), ((float)((float)L_28*(float)(3.0f))), /*hidden argument*/&Vector3__ctor_m28_MethodInfo);
		NullCheck(L_27);
		Transform_set_localPosition_m61(L_27, L_29, /*hidden argument*/&Transform_set_localPosition_m61_MethodInfo);
		Transform_t8 * L_30 = (__this->___arrow_5);
		Vector3_t6 * L_31 = &(__this->___difference_8);
		float L_32 = (L_31->___x_1);
		Vector3_t6 * L_33 = &(__this->___difference_8);
		float L_34 = (L_33->___z_3);
		Vector3_t6 * L_35 = &(__this->___difference_8);
		float L_36 = (L_35->___y_2);
		Vector3_t6  L_37 = {0};
		Vector3__ctor_m28(&L_37, ((-L_32)), ((-L_34)), ((-L_36)), /*hidden argument*/&Vector3__ctor_m28_MethodInfo);
		Quaternion_t19  L_38 = Quaternion_LookRotation_m62(NULL /*static, unused*/, L_37, /*hidden argument*/&Quaternion_LookRotation_m62_MethodInfo);
		NullCheck(L_30);
		Transform_set_localRotation_m63(L_30, L_38, /*hidden argument*/&Transform_set_localRotation_m63_MethodInfo);
		return;
	}
}
// System.Void TouchRecogniser::GotDeltaPosition(UnityEngine.Vector2)
extern "C" void TouchRecogniser_GotDeltaPosition_m24 (TouchRecogniser_t9 * __this, Vector2_t12  ___delta_, MethodInfo* method)
{
	{
		MonoBehaviour_print_m49(NULL /*static, unused*/, (String_t*) &_stringLiteral6, /*hidden argument*/&MonoBehaviour_print_m49_MethodInfo);
		return;
	}
}
// System.Void TouchRecogniser::KickFootballWithDirectionAndPower(UnityEngine.Vector3,System.Single)
extern "C" void TouchRecogniser_KickFootballWithDirectionAndPower_m25 (TouchRecogniser_t9 * __this, Vector3_t6  ___direction_, float ___power_, MethodInfo* method)
{
	{
		FootballScript_t5 * L_0 = (__this->___footballScript_4);
		Vector3_t6  L_1 = ___direction_;
		float L_2 = ___power_;
		NullCheck(L_0);
		FootballScript_setKickForceWithDirectionAndPower_m11(L_0, L_1, L_2, /*hidden argument*/&FootballScript_setKickForceWithDirectionAndPower_m11_MethodInfo);
		Vector3_t6  L_3 = {0};
		Vector3__ctor_m28(&L_3, (0.0f), (0.0f), (0.0f), /*hidden argument*/&Vector3__ctor_m28_MethodInfo);
		__this->___startPosition_7 = L_3;
		return;
	}
}
// System.Void TouchRecogniser::SetFootball(UnityEngine.GameObject)
extern MethodInfo* GameObject_GetComponent_TisFootballScript_t5_m64_MethodInfo_var;
extern "C" void TouchRecogniser_SetFootball_m26 (TouchRecogniser_t9 * __this, GameObject_t10 * ___football_, MethodInfo* method)
{
	static bool TouchRecogniser_SetFootball_m26_init;
	if (!TouchRecogniser_SetFootball_m26_init)
	{
		GameObject_GetComponent_TisFootballScript_t5_m64_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&GameObject_GetComponent_TisFootballScript_t5_m64_GenericMethod);
		TouchRecogniser_SetFootball_m26_init = true;
	}
	{
		MonoBehaviour_print_m49(NULL /*static, unused*/, (String_t*) &_stringLiteral7, /*hidden argument*/&MonoBehaviour_print_m49_MethodInfo);
		GameObject_t10 * L_0 = ___football_;
		__this->___football_3 = L_0;
		GameObject_t10 * L_1 = ___football_;
		NullCheck(L_1);
		FootballScript_t5 * L_2 = GameObject_GetComponent_TisFootballScript_t5_m64(L_1, /*hidden argument*/GameObject_GetComponent_TisFootballScript_t5_m64_MethodInfo_var);
		__this->___footballScript_4 = L_2;
		GameObject_t10 * L_3 = (__this->___football_3);
		NullCheck(L_3);
		Transform_t8 * L_4 = GameObject_get_transform_m39(L_3, /*hidden argument*/&GameObject_get_transform_m39_MethodInfo);
		NullCheck(L_4);
		Transform_t8 * L_5 = Transform_FindChild_m32(L_4, (String_t*) &_stringLiteral1, /*hidden argument*/&Transform_FindChild_m32_MethodInfo);
		__this->___arrow_5 = L_5;
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
