#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
// UnityEngine.ExecuteInEditMode
#include "UnityEngine_UnityEngine_ExecuteInEditMode.h"
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
extern TypeInfo ExecuteInEditMode_t374_il2cpp_TypeInfo;
// UnityEngine.ExecuteInEditMode
#include "UnityEngine_UnityEngine_ExecuteInEditModeMethodDeclarations.h"

// System.Void
#include "mscorlib_System_Void.h"
// System.Attribute
#include "mscorlib_System_AttributeMethodDeclarations.h"
extern MethodInfo Attribute__ctor_m3370_MethodInfo;

// System.Array
#include "mscorlib_System_Array.h"

// System.Void UnityEngine.ExecuteInEditMode::.ctor()
extern MethodInfo ExecuteInEditMode__ctor_m2021_MethodInfo;
extern "C" void ExecuteInEditMode__ctor_m2021 (ExecuteInEditMode_t374 * __this, MethodInfo* method)
{
	{
		Attribute__ctor_m3370(__this, /*hidden argument*/&Attribute__ctor_m3370_MethodInfo);
		return;
	}
}
// UnityEngine.HideInInspector
#include "UnityEngine_UnityEngine_HideInInspector.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo HideInInspector_t24_il2cpp_TypeInfo;
// UnityEngine.HideInInspector
#include "UnityEngine_UnityEngine_HideInInspectorMethodDeclarations.h"



// System.Void UnityEngine.HideInInspector::.ctor()
extern MethodInfo HideInInspector__ctor_m70_MethodInfo;
extern "C" void HideInInspector__ctor_m70 (HideInInspector_t24 * __this, MethodInfo* method)
{
	{
		Attribute__ctor_m3370(__this, /*hidden argument*/&Attribute__ctor_m3370_MethodInfo);
		return;
	}
}
// UnityEngine.SetupCoroutine
#include "UnityEngine_UnityEngine_SetupCoroutine.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo SetupCoroutine_t628_il2cpp_TypeInfo;
// UnityEngine.SetupCoroutine
#include "UnityEngine_UnityEngine_SetupCoroutineMethodDeclarations.h"

// System.Object
#include "mscorlib_System_Object.h"
// System.String
#include "mscorlib_System_String.h"
#include "mscorlib_ArrayTypes.h"
// System.Type
#include "mscorlib_System_Type.h"
// System.Reflection.BindingFlags
#include "mscorlib_System_Reflection_BindingFlags.h"
// System.Reflection.Binder
#include "mscorlib_System_Reflection_Binder.h"
// System.Reflection.ParameterModifier
#include "mscorlib_System_Reflection_ParameterModifier.h"
// System.Globalization.CultureInfo
#include "mscorlib_System_Globalization_CultureInfo.h"
extern TypeInfo ObjectU5BU5D_t269_il2cpp_TypeInfo;
extern TypeInfo Object_t_il2cpp_TypeInfo;
extern TypeInfo Type_t_il2cpp_TypeInfo;
extern TypeInfo String_t_il2cpp_TypeInfo;
extern TypeInfo BindingFlags_t732_il2cpp_TypeInfo;
extern TypeInfo Binder_t736_il2cpp_TypeInfo;
extern TypeInfo ParameterModifierU5BU5D_t737_il2cpp_TypeInfo;
extern TypeInfo ParameterModifier_t738_il2cpp_TypeInfo;
extern TypeInfo CultureInfo_t702_il2cpp_TypeInfo;
extern TypeInfo StringU5BU5D_t423_il2cpp_TypeInfo;
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
extern Il2CppType ObjectU5BU5D_t269_0_0_0;
extern MethodInfo Object__ctor_m1289_MethodInfo;
extern MethodInfo Object_GetType_m1381_MethodInfo;
extern MethodInfo Type_InvokeMember_m3552_MethodInfo;


// System.Void UnityEngine.SetupCoroutine::.ctor()
extern MethodInfo SetupCoroutine__ctor_m3142_MethodInfo;
extern "C" void SetupCoroutine__ctor_m3142 (SetupCoroutine_t628 * __this, MethodInfo* method)
{
	{
		Object__ctor_m1289(__this, /*hidden argument*/&Object__ctor_m1289_MethodInfo);
		return;
	}
}
// System.Object UnityEngine.SetupCoroutine::InvokeMember(System.Object,System.String,System.Object)
extern MethodInfo SetupCoroutine_InvokeMember_m3143_MethodInfo;
extern TypeInfo* ObjectU5BU5D_t269_il2cpp_TypeInfo_var;
extern "C" Object_t * SetupCoroutine_InvokeMember_m3143 (Object_t * __this /* static, unused */, Object_t * ___behaviour, String_t* ___name, Object_t * ___variable, MethodInfo* method)
{
	static bool SetupCoroutine_InvokeMember_m3143_init;
	if (!SetupCoroutine_InvokeMember_m3143_init)
	{
		ObjectU5BU5D_t269_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t269_0_0_0);
		SetupCoroutine_InvokeMember_m3143_init = true;
	}
	ObjectU5BU5D_t269* V_0 = {0};
	{
		V_0 = (ObjectU5BU5D_t269*)NULL;
		Object_t * L_0 = ___variable;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		V_0 = ((ObjectU5BU5D_t269*)SZArrayNew(ObjectU5BU5D_t269_il2cpp_TypeInfo_var, 1));
		ObjectU5BU5D_t269* L_1 = V_0;
		Object_t * L_2 = ___variable;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 0);
		ArrayElementTypeCheck (L_1, L_2);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_1, 0)) = (Object_t *)L_2;
	}

IL_0013:
	{
		Object_t * L_3 = ___behaviour;
		NullCheck(L_3);
		Type_t * L_4 = Object_GetType_m1381(L_3, /*hidden argument*/&Object_GetType_m1381_MethodInfo);
		String_t* L_5 = ___name;
		Object_t * L_6 = ___behaviour;
		ObjectU5BU5D_t269* L_7 = V_0;
		NullCheck(L_4);
		Object_t * L_8 = (Object_t *)VirtFuncInvoker8< Object_t *, String_t*, int32_t, Binder_t736 *, Object_t *, ObjectU5BU5D_t269*, ParameterModifierU5BU5D_t737*, CultureInfo_t702 *, StringU5BU5D_t423* >::Invoke(&Type_InvokeMember_m3552_MethodInfo, L_4, L_5, ((int32_t)308), (Binder_t736 *)NULL, L_6, L_7, (ParameterModifierU5BU5D_t737*)(ParameterModifierU5BU5D_t737*)NULL, (CultureInfo_t702 *)NULL, (StringU5BU5D_t423*)(StringU5BU5D_t423*)NULL);
		return L_8;
	}
}
// System.Object UnityEngine.SetupCoroutine::InvokeStatic(System.Type,System.String,System.Object)
extern MethodInfo SetupCoroutine_InvokeStatic_m3144_MethodInfo;
extern TypeInfo* ObjectU5BU5D_t269_il2cpp_TypeInfo_var;
extern "C" Object_t * SetupCoroutine_InvokeStatic_m3144 (Object_t * __this /* static, unused */, Type_t * ___klass, String_t* ___name, Object_t * ___variable, MethodInfo* method)
{
	static bool SetupCoroutine_InvokeStatic_m3144_init;
	if (!SetupCoroutine_InvokeStatic_m3144_init)
	{
		ObjectU5BU5D_t269_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t269_0_0_0);
		SetupCoroutine_InvokeStatic_m3144_init = true;
	}
	ObjectU5BU5D_t269* V_0 = {0};
	{
		V_0 = (ObjectU5BU5D_t269*)NULL;
		Object_t * L_0 = ___variable;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		V_0 = ((ObjectU5BU5D_t269*)SZArrayNew(ObjectU5BU5D_t269_il2cpp_TypeInfo_var, 1));
		ObjectU5BU5D_t269* L_1 = V_0;
		Object_t * L_2 = ___variable;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 0);
		ArrayElementTypeCheck (L_1, L_2);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_1, 0)) = (Object_t *)L_2;
	}

IL_0013:
	{
		Type_t * L_3 = ___klass;
		String_t* L_4 = ___name;
		ObjectU5BU5D_t269* L_5 = V_0;
		NullCheck(L_3);
		Object_t * L_6 = (Object_t *)VirtFuncInvoker8< Object_t *, String_t*, int32_t, Binder_t736 *, Object_t *, ObjectU5BU5D_t269*, ParameterModifierU5BU5D_t737*, CultureInfo_t702 *, StringU5BU5D_t423* >::Invoke(&Type_InvokeMember_m3552_MethodInfo, L_3, L_4, ((int32_t)312), (Binder_t736 *)NULL, NULL, L_5, (ParameterModifierU5BU5D_t737*)(ParameterModifierU5BU5D_t737*)NULL, (CultureInfo_t702 *)NULL, (StringU5BU5D_t423*)(StringU5BU5D_t423*)NULL);
		return L_6;
	}
}
// UnityEngine.WritableAttribute
#include "UnityEngine_UnityEngine_WritableAttribute.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo WritableAttribute_t629_il2cpp_TypeInfo;
// UnityEngine.WritableAttribute
#include "UnityEngine_UnityEngine_WritableAttributeMethodDeclarations.h"



// System.Void UnityEngine.WritableAttribute::.ctor()
extern MethodInfo WritableAttribute__ctor_m3145_MethodInfo;
extern "C" void WritableAttribute__ctor_m3145 (WritableAttribute_t629 * __this, MethodInfo* method)
{
	{
		Attribute__ctor_m3370(__this, /*hidden argument*/&Attribute__ctor_m3370_MethodInfo);
		return;
	}
}
// UnityEngine.AssemblyIsEditorAssembly
#include "UnityEngine_UnityEngine_AssemblyIsEditorAssembly.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo AssemblyIsEditorAssembly_t630_il2cpp_TypeInfo;
// UnityEngine.AssemblyIsEditorAssembly
#include "UnityEngine_UnityEngine_AssemblyIsEditorAssemblyMethodDeclarations.h"



// System.Void UnityEngine.AssemblyIsEditorAssembly::.ctor()
extern MethodInfo AssemblyIsEditorAssembly__ctor_m3146_MethodInfo;
extern "C" void AssemblyIsEditorAssembly__ctor_m3146 (AssemblyIsEditorAssembly_t630 * __this, MethodInfo* method)
{
	{
		Attribute__ctor_m3370(__this, /*hidden argument*/&Attribute__ctor_m3370_MethodInfo);
		return;
	}
}
// UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcUserPro.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo GcUserProfileData_t448_il2cpp_TypeInfo;
// UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcUserProMethodDeclarations.h"

// UnityEngine.SocialPlatforms.Impl.UserProfile
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_UserProfile.h"
// System.Int32
#include "mscorlib_System_Int32.h"
// UnityEngine.Texture2D
#include "UnityEngine_UnityEngine_Texture2D.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
// UnityEngine.SocialPlatforms.UserState
#include "UnityEngine_UnityEngine_SocialPlatforms_UserState.h"
#include "UnityEngine_ArrayTypes.h"
extern TypeInfo UserProfile_t631_il2cpp_TypeInfo;
// UnityEngine.SocialPlatforms.Impl.UserProfile
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_UserProfileMethodDeclarations.h"
// UnityEngine.Debug
#include "UnityEngine_UnityEngine_DebugMethodDeclarations.h"
extern MethodInfo UserProfile__ctor_m3165_MethodInfo;
extern MethodInfo GcUserProfileData_ToUserProfile_m3147_MethodInfo;
extern MethodInfo Debug_Log_m2658_MethodInfo;


// UnityEngine.SocialPlatforms.Impl.UserProfile UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData::ToUserProfile()
extern "C" UserProfile_t631 * GcUserProfileData_ToUserProfile_m3147 (GcUserProfileData_t448 * __this, MethodInfo* method)
{
	String_t* G_B2_0 = {0};
	String_t* G_B2_1 = {0};
	String_t* G_B1_0 = {0};
	String_t* G_B1_1 = {0};
	int32_t G_B3_0 = 0;
	String_t* G_B3_1 = {0};
	String_t* G_B3_2 = {0};
	{
		String_t* L_0 = (__this->___userName_0);
		String_t* L_1 = (__this->___userID_1);
		int32_t L_2 = (__this->___isFriend_2);
		G_B1_0 = L_1;
		G_B1_1 = L_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			G_B2_0 = L_1;
			G_B2_1 = L_0;
			goto IL_001e;
		}
	}
	{
		G_B3_0 = 1;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_001f;
	}

IL_001e:
	{
		G_B3_0 = 0;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_001f:
	{
		Texture2D_t130 * L_3 = (__this->___image_3);
		UserProfile_t631 * L_4 = (UserProfile_t631 *)il2cpp_codegen_object_new (InitializedTypeInfo(&UserProfile_t631_il2cpp_TypeInfo));
		UserProfile__ctor_m3165(L_4, G_B3_2, G_B3_1, G_B3_0, 3, L_3, /*hidden argument*/&UserProfile__ctor_m3165_MethodInfo);
		return L_4;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData::AddToArray(UnityEngine.SocialPlatforms.Impl.UserProfile[]&,System.Int32)
extern MethodInfo GcUserProfileData_AddToArray_m3148_MethodInfo;
extern "C" void GcUserProfileData_AddToArray_m3148 (GcUserProfileData_t448 * __this, UserProfileU5BU5D_t436** ___array, int32_t ___number, MethodInfo* method)
{
	{
		UserProfileU5BU5D_t436** L_0 = ___array;
		NullCheck((*((UserProfileU5BU5D_t436**)L_0)));
		int32_t L_1 = ___number;
		if ((((int32_t)(((int32_t)(((Array_t *)(*((UserProfileU5BU5D_t436**)L_0)))->max_length)))) <= ((int32_t)L_1)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_2 = ___number;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		UserProfileU5BU5D_t436** L_3 = ___array;
		int32_t L_4 = ___number;
		UserProfile_t631 * L_5 = GcUserProfileData_ToUserProfile_m3147(__this, /*hidden argument*/&GcUserProfileData_ToUserProfile_m3147_MethodInfo);
		NullCheck((*((UserProfileU5BU5D_t436**)L_3)));
		IL2CPP_ARRAY_BOUNDS_CHECK((*((UserProfileU5BU5D_t436**)L_3)), L_4);
		ArrayElementTypeCheck ((*((UserProfileU5BU5D_t436**)L_3)), L_5);
		*((UserProfile_t631 **)(UserProfile_t631 **)SZArrayLdElema((*((UserProfileU5BU5D_t436**)L_3)), L_4)) = (UserProfile_t631 *)L_5;
		goto IL_002a;
	}

IL_0020:
	{
		Debug_Log_m2658(NULL /*static, unused*/, (String_t*) &_stringLiteral281, /*hidden argument*/&Debug_Log_m2658_MethodInfo);
	}

IL_002a:
	{
		return;
	}
}
// UnityEngine.SocialPlatforms.GameCenter.GcAchievementDescriptionData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcAchieve.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo GcAchievementDescriptionData_t447_il2cpp_TypeInfo;
// UnityEngine.SocialPlatforms.GameCenter.GcAchievementDescriptionData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcAchieveMethodDeclarations.h"

// UnityEngine.SocialPlatforms.Impl.AchievementDescription
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_AchievementDesc.h"
extern TypeInfo AchievementDescription_t632_il2cpp_TypeInfo;
// UnityEngine.SocialPlatforms.Impl.AchievementDescription
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_AchievementDescMethodDeclarations.h"
extern MethodInfo AchievementDescription__ctor_m3185_MethodInfo;


// UnityEngine.SocialPlatforms.Impl.AchievementDescription UnityEngine.SocialPlatforms.GameCenter.GcAchievementDescriptionData::ToAchievementDescription()
extern MethodInfo GcAchievementDescriptionData_ToAchievementDescription_m3149_MethodInfo;
extern "C" AchievementDescription_t632 * GcAchievementDescriptionData_ToAchievementDescription_m3149 (GcAchievementDescriptionData_t447 * __this, MethodInfo* method)
{
	String_t* G_B2_0 = {0};
	String_t* G_B2_1 = {0};
	Texture2D_t130 * G_B2_2 = {0};
	String_t* G_B2_3 = {0};
	String_t* G_B2_4 = {0};
	String_t* G_B1_0 = {0};
	String_t* G_B1_1 = {0};
	Texture2D_t130 * G_B1_2 = {0};
	String_t* G_B1_3 = {0};
	String_t* G_B1_4 = {0};
	int32_t G_B3_0 = 0;
	String_t* G_B3_1 = {0};
	String_t* G_B3_2 = {0};
	Texture2D_t130 * G_B3_3 = {0};
	String_t* G_B3_4 = {0};
	String_t* G_B3_5 = {0};
	{
		String_t* L_0 = (__this->___m_Identifier_0);
		String_t* L_1 = (__this->___m_Title_1);
		Texture2D_t130 * L_2 = (__this->___m_Image_2);
		String_t* L_3 = (__this->___m_AchievedDescription_3);
		String_t* L_4 = (__this->___m_UnachievedDescription_4);
		int32_t L_5 = (__this->___m_Hidden_5);
		G_B1_0 = L_4;
		G_B1_1 = L_3;
		G_B1_2 = L_2;
		G_B1_3 = L_1;
		G_B1_4 = L_0;
		if (L_5)
		{
			G_B2_0 = L_4;
			G_B2_1 = L_3;
			G_B2_2 = L_2;
			G_B2_3 = L_1;
			G_B2_4 = L_0;
			goto IL_002f;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		G_B3_4 = G_B1_3;
		G_B3_5 = G_B1_4;
		goto IL_0030;
	}

IL_002f:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
		G_B3_4 = G_B2_3;
		G_B3_5 = G_B2_4;
	}

IL_0030:
	{
		int32_t L_6 = (__this->___m_Points_6);
		AchievementDescription_t632 * L_7 = (AchievementDescription_t632 *)il2cpp_codegen_object_new (InitializedTypeInfo(&AchievementDescription_t632_il2cpp_TypeInfo));
		AchievementDescription__ctor_m3185(L_7, G_B3_5, G_B3_4, G_B3_3, G_B3_2, G_B3_1, G_B3_0, L_6, /*hidden argument*/&AchievementDescription__ctor_m3185_MethodInfo);
		return L_7;
	}
}
// UnityEngine.SocialPlatforms.GameCenter.GcAchievementData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcAchieve_0.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo GcAchievementData_t442_il2cpp_TypeInfo;
// UnityEngine.SocialPlatforms.GameCenter.GcAchievementData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcAchieve_0MethodDeclarations.h"

// UnityEngine.SocialPlatforms.Impl.Achievement
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_Achievement.h"
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.Double
#include "mscorlib_System_Double.h"
extern TypeInfo Achievement_t633_il2cpp_TypeInfo;
// System.DateTime
#include "mscorlib_System_DateTimeMethodDeclarations.h"
// UnityEngine.SocialPlatforms.Impl.Achievement
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_AchievementMethodDeclarations.h"
extern MethodInfo DateTime__ctor_m3553_MethodInfo;
extern MethodInfo DateTime_AddSeconds_m3554_MethodInfo;
extern MethodInfo Achievement__ctor_m3174_MethodInfo;


// UnityEngine.SocialPlatforms.Impl.Achievement UnityEngine.SocialPlatforms.GameCenter.GcAchievementData::ToAchievement()
extern MethodInfo GcAchievementData_ToAchievement_m3150_MethodInfo;
extern "C" Achievement_t633 * GcAchievementData_ToAchievement_m3150 (GcAchievementData_t442 * __this, MethodInfo* method)
{
	DateTime_t465  V_0 = {0};
	double G_B2_0 = 0.0;
	String_t* G_B2_1 = {0};
	double G_B1_0 = 0.0;
	String_t* G_B1_1 = {0};
	int32_t G_B3_0 = 0;
	double G_B3_1 = 0.0;
	String_t* G_B3_2 = {0};
	int32_t G_B5_0 = 0;
	double G_B5_1 = 0.0;
	String_t* G_B5_2 = {0};
	int32_t G_B4_0 = 0;
	double G_B4_1 = 0.0;
	String_t* G_B4_2 = {0};
	int32_t G_B6_0 = 0;
	int32_t G_B6_1 = 0;
	double G_B6_2 = 0.0;
	String_t* G_B6_3 = {0};
	{
		String_t* L_0 = (__this->___m_Identifier_0);
		double L_1 = (__this->___m_PercentCompleted_1);
		int32_t L_2 = (__this->___m_Completed_2);
		G_B1_0 = L_1;
		G_B1_1 = L_0;
		if (L_2)
		{
			G_B2_0 = L_1;
			G_B2_1 = L_0;
			goto IL_001d;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_001e;
	}

IL_001d:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_001e:
	{
		int32_t L_3 = (__this->___m_Hidden_3);
		G_B4_0 = G_B3_0;
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
		if (L_3)
		{
			G_B5_0 = G_B3_0;
			G_B5_1 = G_B3_1;
			G_B5_2 = G_B3_2;
			goto IL_002f;
		}
	}
	{
		G_B6_0 = 0;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		goto IL_0030;
	}

IL_002f:
	{
		G_B6_0 = 1;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
	}

IL_0030:
	{
		DateTime__ctor_m3553((&V_0), ((int32_t)1970), 1, 1, 0, 0, 0, 0, /*hidden argument*/&DateTime__ctor_m3553_MethodInfo);
		int32_t L_4 = (__this->___m_LastReportedDate_4);
		DateTime_t465  L_5 = DateTime_AddSeconds_m3554((&V_0), (((double)L_4)), /*hidden argument*/&DateTime_AddSeconds_m3554_MethodInfo);
		Achievement_t633 * L_6 = (Achievement_t633 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Achievement_t633_il2cpp_TypeInfo));
		Achievement__ctor_m3174(L_6, G_B6_3, G_B6_2, G_B6_1, G_B6_0, L_5, /*hidden argument*/&Achievement__ctor_m3174_MethodInfo);
		return L_6;
	}
}
// Conversion methods for marshalling of: UnityEngine.SocialPlatforms.GameCenter.GcAchievementData
void GcAchievementData_t442_marshal(const GcAchievementData_t442& unmarshaled, GcAchievementData_t442_marshaled& marshaled)
{
	marshaled.___m_Identifier_0 = il2cpp_codegen_marshal_string(unmarshaled.___m_Identifier_0);
	marshaled.___m_PercentCompleted_1 = unmarshaled.___m_PercentCompleted_1;
	marshaled.___m_Completed_2 = unmarshaled.___m_Completed_2;
	marshaled.___m_Hidden_3 = unmarshaled.___m_Hidden_3;
	marshaled.___m_LastReportedDate_4 = unmarshaled.___m_LastReportedDate_4;
}
void GcAchievementData_t442_marshal_back(const GcAchievementData_t442_marshaled& marshaled, GcAchievementData_t442& unmarshaled)
{
	unmarshaled.___m_Identifier_0 = il2cpp_codegen_marshal_string_result(marshaled.___m_Identifier_0);
	unmarshaled.___m_PercentCompleted_1 = marshaled.___m_PercentCompleted_1;
	unmarshaled.___m_Completed_2 = marshaled.___m_Completed_2;
	unmarshaled.___m_Hidden_3 = marshaled.___m_Hidden_3;
	unmarshaled.___m_LastReportedDate_4 = marshaled.___m_LastReportedDate_4;
}
// Conversion method for clean up from marshalling of: UnityEngine.SocialPlatforms.GameCenter.GcAchievementData
void GcAchievementData_t442_marshal_cleanup(GcAchievementData_t442_marshaled& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___m_Identifier_0);
	marshaled.___m_Identifier_0 = NULL;
}
// UnityEngine.SocialPlatforms.GameCenter.GcScoreData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcScoreDa.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo GcScoreData_t444_il2cpp_TypeInfo;
// UnityEngine.SocialPlatforms.GameCenter.GcScoreData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcScoreDaMethodDeclarations.h"

// UnityEngine.SocialPlatforms.Impl.Score
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_Score.h"
// System.Int64
#include "mscorlib_System_Int64.h"
extern TypeInfo Score_t634_il2cpp_TypeInfo;
// UnityEngine.SocialPlatforms.Impl.Score
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_ScoreMethodDeclarations.h"
extern MethodInfo Score__ctor_m3196_MethodInfo;


// UnityEngine.SocialPlatforms.Impl.Score UnityEngine.SocialPlatforms.GameCenter.GcScoreData::ToScore()
extern MethodInfo GcScoreData_ToScore_m3151_MethodInfo;
extern "C" Score_t634 * GcScoreData_ToScore_m3151 (GcScoreData_t444 * __this, MethodInfo* method)
{
	DateTime_t465  V_0 = {0};
	{
		String_t* L_0 = (__this->___m_Category_0);
		int32_t L_1 = (__this->___m_ValueHigh_2);
		int32_t L_2 = (__this->___m_ValueLow_1);
		String_t* L_3 = (__this->___m_PlayerID_5);
		DateTime__ctor_m3553((&V_0), ((int32_t)1970), 1, 1, 0, 0, 0, 0, /*hidden argument*/&DateTime__ctor_m3553_MethodInfo);
		int32_t L_4 = (__this->___m_Date_3);
		DateTime_t465  L_5 = DateTime_AddSeconds_m3554((&V_0), (((double)L_4)), /*hidden argument*/&DateTime_AddSeconds_m3554_MethodInfo);
		String_t* L_6 = (__this->___m_FormattedValue_4);
		int32_t L_7 = (__this->___m_Rank_6);
		Score_t634 * L_8 = (Score_t634 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Score_t634_il2cpp_TypeInfo));
		Score__ctor_m3196(L_8, L_0, ((int64_t)((int64_t)((int64_t)((int64_t)(((int64_t)L_1))<<(int32_t)((int32_t)32)))+(int64_t)(((int64_t)L_2)))), L_3, L_5, L_6, L_7, /*hidden argument*/&Score__ctor_m3196_MethodInfo);
		return L_8;
	}
}
// Conversion methods for marshalling of: UnityEngine.SocialPlatforms.GameCenter.GcScoreData
void GcScoreData_t444_marshal(const GcScoreData_t444& unmarshaled, GcScoreData_t444_marshaled& marshaled)
{
	marshaled.___m_Category_0 = il2cpp_codegen_marshal_string(unmarshaled.___m_Category_0);
	marshaled.___m_ValueLow_1 = unmarshaled.___m_ValueLow_1;
	marshaled.___m_ValueHigh_2 = unmarshaled.___m_ValueHigh_2;
	marshaled.___m_Date_3 = unmarshaled.___m_Date_3;
	marshaled.___m_FormattedValue_4 = il2cpp_codegen_marshal_string(unmarshaled.___m_FormattedValue_4);
	marshaled.___m_PlayerID_5 = il2cpp_codegen_marshal_string(unmarshaled.___m_PlayerID_5);
	marshaled.___m_Rank_6 = unmarshaled.___m_Rank_6;
}
void GcScoreData_t444_marshal_back(const GcScoreData_t444_marshaled& marshaled, GcScoreData_t444& unmarshaled)
{
	unmarshaled.___m_Category_0 = il2cpp_codegen_marshal_string_result(marshaled.___m_Category_0);
	unmarshaled.___m_ValueLow_1 = marshaled.___m_ValueLow_1;
	unmarshaled.___m_ValueHigh_2 = marshaled.___m_ValueHigh_2;
	unmarshaled.___m_Date_3 = marshaled.___m_Date_3;
	unmarshaled.___m_FormattedValue_4 = il2cpp_codegen_marshal_string_result(marshaled.___m_FormattedValue_4);
	unmarshaled.___m_PlayerID_5 = il2cpp_codegen_marshal_string_result(marshaled.___m_PlayerID_5);
	unmarshaled.___m_Rank_6 = marshaled.___m_Rank_6;
}
// Conversion method for clean up from marshalling of: UnityEngine.SocialPlatforms.GameCenter.GcScoreData
void GcScoreData_t444_marshal_cleanup(GcScoreData_t444_marshaled& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___m_Category_0);
	marshaled.___m_Category_0 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___m_FormattedValue_4);
	marshaled.___m_FormattedValue_4 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___m_PlayerID_5);
	marshaled.___m_PlayerID_5 = NULL;
}
// UnityEngine.Resolution
#include "UnityEngine_UnityEngine_Resolution.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Resolution_t635_il2cpp_TypeInfo;
// UnityEngine.Resolution
#include "UnityEngine_UnityEngine_ResolutionMethodDeclarations.h"

extern TypeInfo Int32_t17_il2cpp_TypeInfo;
// UnityEngine.UnityString
#include "UnityEngine_UnityEngine_UnityStringMethodDeclarations.h"
extern MethodInfo UnityString_Format_m2626_MethodInfo;


// System.Int32 UnityEngine.Resolution::get_width()
extern MethodInfo Resolution_get_width_m3152_MethodInfo;
extern "C" int32_t Resolution_get_width_m3152 (Resolution_t635 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Width_0);
		return L_0;
	}
}
// System.Void UnityEngine.Resolution::set_width(System.Int32)
extern MethodInfo Resolution_set_width_m3153_MethodInfo;
extern "C" void Resolution_set_width_m3153 (Resolution_t635 * __this, int32_t ___value, MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___m_Width_0 = L_0;
		return;
	}
}
// System.Int32 UnityEngine.Resolution::get_height()
extern MethodInfo Resolution_get_height_m3154_MethodInfo;
extern "C" int32_t Resolution_get_height_m3154 (Resolution_t635 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Height_1);
		return L_0;
	}
}
// System.Void UnityEngine.Resolution::set_height(System.Int32)
extern MethodInfo Resolution_set_height_m3155_MethodInfo;
extern "C" void Resolution_set_height_m3155 (Resolution_t635 * __this, int32_t ___value, MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___m_Height_1 = L_0;
		return;
	}
}
// System.Int32 UnityEngine.Resolution::get_refreshRate()
extern MethodInfo Resolution_get_refreshRate_m3156_MethodInfo;
extern "C" int32_t Resolution_get_refreshRate_m3156 (Resolution_t635 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_RefreshRate_2);
		return L_0;
	}
}
// System.Void UnityEngine.Resolution::set_refreshRate(System.Int32)
extern MethodInfo Resolution_set_refreshRate_m3157_MethodInfo;
extern "C" void Resolution_set_refreshRate_m3157 (Resolution_t635 * __this, int32_t ___value, MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___m_RefreshRate_2 = L_0;
		return;
	}
}
// System.String UnityEngine.Resolution::ToString()
extern MethodInfo Resolution_ToString_m3158_MethodInfo;
extern TypeInfo* ObjectU5BU5D_t269_il2cpp_TypeInfo_var;
extern "C" String_t* Resolution_ToString_m3158 (Resolution_t635 * __this, MethodInfo* method)
{
	static bool Resolution_ToString_m3158_init;
	if (!Resolution_ToString_m3158_init)
	{
		ObjectU5BU5D_t269_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t269_0_0_0);
		Resolution_ToString_m3158_init = true;
	}
	{
		ObjectU5BU5D_t269* L_0 = ((ObjectU5BU5D_t269*)SZArrayNew(ObjectU5BU5D_t269_il2cpp_TypeInfo_var, 3));
		int32_t L_1 = (__this->___m_Width_0);
		int32_t L_2 = L_1;
		Object_t * L_3 = Box(InitializedTypeInfo(&Int32_t17_il2cpp_TypeInfo), &L_2);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_3;
		ObjectU5BU5D_t269* L_4 = L_0;
		int32_t L_5 = (__this->___m_Height_1);
		int32_t L_6 = L_5;
		Object_t * L_7 = Box(InitializedTypeInfo(&Int32_t17_il2cpp_TypeInfo), &L_6);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 1)) = (Object_t *)L_7;
		ObjectU5BU5D_t269* L_8 = L_4;
		int32_t L_9 = (__this->___m_RefreshRate_2);
		int32_t L_10 = L_9;
		Object_t * L_11 = Box(InitializedTypeInfo(&Int32_t17_il2cpp_TypeInfo), &L_10);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 2);
		ArrayElementTypeCheck (L_8, L_11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 2)) = (Object_t *)L_11;
		String_t* L_12 = UnityString_Format_m2626(NULL /*static, unused*/, (String_t*) &_stringLiteral282, L_8, /*hidden argument*/&UnityString_Format_m2626_MethodInfo);
		return L_12;
	}
}
// UnityEngine.RenderBuffer
#include "UnityEngine_UnityEngine_RenderBuffer.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo RenderBuffer_t520_il2cpp_TypeInfo;
// UnityEngine.RenderBuffer
#include "UnityEngine_UnityEngine_RenderBufferMethodDeclarations.h"



// UnityEngine.CameraClearFlags
#include "UnityEngine_UnityEngine_CameraClearFlags.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CameraClearFlags_t636_il2cpp_TypeInfo;
// UnityEngine.CameraClearFlags
#include "UnityEngine_UnityEngine_CameraClearFlagsMethodDeclarations.h"



// UnityEngine.TextureFormat
#include "UnityEngine_UnityEngine_TextureFormat.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo TextureFormat_t637_il2cpp_TypeInfo;
// UnityEngine.TextureFormat
#include "UnityEngine_UnityEngine_TextureFormatMethodDeclarations.h"



// UnityEngine.Rendering.ReflectionProbeBlendInfo
#include "UnityEngine_UnityEngine_Rendering_ReflectionProbeBlendInfo.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ReflectionProbeBlendInfo_t638_il2cpp_TypeInfo;
// UnityEngine.Rendering.ReflectionProbeBlendInfo
#include "UnityEngine_UnityEngine_Rendering_ReflectionProbeBlendInfoMethodDeclarations.h"



// UnityEngine.SocialPlatforms.Impl.LocalUser
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_LocalUser.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo LocalUser_t437_il2cpp_TypeInfo;
// UnityEngine.SocialPlatforms.Impl.LocalUser
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_LocalUserMethodDeclarations.h"

extern TypeInfo UserProfileU5BU5D_t436_il2cpp_TypeInfo;
extern Il2CppType UserProfileU5BU5D_t436_0_0_0;
extern MethodInfo UserProfile__ctor_m3164_MethodInfo;


// System.Void UnityEngine.SocialPlatforms.Impl.LocalUser::.ctor()
extern MethodInfo LocalUser__ctor_m3159_MethodInfo;
extern TypeInfo* UserProfileU5BU5D_t436_il2cpp_TypeInfo_var;
extern "C" void LocalUser__ctor_m3159 (LocalUser_t437 * __this, MethodInfo* method)
{
	static bool LocalUser__ctor_m3159_init;
	if (!LocalUser__ctor_m3159_init)
	{
		UserProfileU5BU5D_t436_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&UserProfileU5BU5D_t436_0_0_0);
		LocalUser__ctor_m3159_init = true;
	}
	{
		UserProfile__ctor_m3164(__this, /*hidden argument*/&UserProfile__ctor_m3164_MethodInfo);
		__this->___m_Friends_5 = (IUserProfileU5BU5D_t639*)((UserProfileU5BU5D_t436*)SZArrayNew(UserProfileU5BU5D_t436_il2cpp_TypeInfo_var, 0));
		__this->___m_Authenticated_6 = 0;
		__this->___m_Underage_7 = 0;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.LocalUser::SetFriends(UnityEngine.SocialPlatforms.IUserProfile[])
extern MethodInfo LocalUser_SetFriends_m3160_MethodInfo;
extern "C" void LocalUser_SetFriends_m3160 (LocalUser_t437 * __this, IUserProfileU5BU5D_t639* ___friends, MethodInfo* method)
{
	{
		IUserProfileU5BU5D_t639* L_0 = ___friends;
		__this->___m_Friends_5 = L_0;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.LocalUser::SetAuthenticated(System.Boolean)
extern MethodInfo LocalUser_SetAuthenticated_m3161_MethodInfo;
extern "C" void LocalUser_SetAuthenticated_m3161 (LocalUser_t437 * __this, bool ___value, MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___m_Authenticated_6 = L_0;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.LocalUser::SetUnderage(System.Boolean)
extern MethodInfo LocalUser_SetUnderage_m3162_MethodInfo;
extern "C" void LocalUser_SetUnderage_m3162 (LocalUser_t437 * __this, bool ___value, MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___m_Underage_7 = L_0;
		return;
	}
}
// System.Boolean UnityEngine.SocialPlatforms.Impl.LocalUser::get_authenticated()
extern MethodInfo LocalUser_get_authenticated_m3163_MethodInfo;
extern "C" bool LocalUser_get_authenticated_m3163 (LocalUser_t437 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_Authenticated_6);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif

extern TypeInfo Texture2D_t130_il2cpp_TypeInfo;
extern TypeInfo Boolean_t13_il2cpp_TypeInfo;
extern TypeInfo UserState_t646_il2cpp_TypeInfo;
// UnityEngine.Texture2D
#include "UnityEngine_UnityEngine_Texture2DMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
extern MethodInfo Texture2D__ctor_m2226_MethodInfo;
extern MethodInfo UserProfile_get_id_m3171_MethodInfo;
extern MethodInfo UserProfile_get_userName_m3170_MethodInfo;
extern MethodInfo UserProfile_get_isFriend_m3172_MethodInfo;
extern MethodInfo UserProfile_get_state_m3173_MethodInfo;
extern MethodInfo String_Concat_m1344_MethodInfo;


// System.Void UnityEngine.SocialPlatforms.Impl.UserProfile::.ctor()
extern "C" void UserProfile__ctor_m3164 (UserProfile_t631 * __this, MethodInfo* method)
{
	{
		Object__ctor_m1289(__this, /*hidden argument*/&Object__ctor_m1289_MethodInfo);
		__this->___m_UserName_0 = (String_t*) &_stringLiteral283;
		__this->___m_ID_1 = (String_t*) &_stringLiteral75;
		__this->___m_IsFriend_2 = 0;
		__this->___m_State_3 = 3;
		Texture2D_t130 * L_0 = (Texture2D_t130 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Texture2D_t130_il2cpp_TypeInfo));
		Texture2D__ctor_m2226(L_0, ((int32_t)32), ((int32_t)32), /*hidden argument*/&Texture2D__ctor_m2226_MethodInfo);
		__this->___m_Image_4 = L_0;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.UserProfile::.ctor(System.String,System.String,System.Boolean,UnityEngine.SocialPlatforms.UserState,UnityEngine.Texture2D)
extern "C" void UserProfile__ctor_m3165 (UserProfile_t631 * __this, String_t* ___name, String_t* ___id, bool ___friend, int32_t ___state, Texture2D_t130 * ___image, MethodInfo* method)
{
	{
		Object__ctor_m1289(__this, /*hidden argument*/&Object__ctor_m1289_MethodInfo);
		String_t* L_0 = ___name;
		__this->___m_UserName_0 = L_0;
		String_t* L_1 = ___id;
		__this->___m_ID_1 = L_1;
		bool L_2 = ___friend;
		__this->___m_IsFriend_2 = L_2;
		int32_t L_3 = ___state;
		__this->___m_State_3 = L_3;
		Texture2D_t130 * L_4 = ___image;
		__this->___m_Image_4 = L_4;
		return;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.UserProfile::ToString()
extern MethodInfo UserProfile_ToString_m3166_MethodInfo;
extern TypeInfo* ObjectU5BU5D_t269_il2cpp_TypeInfo_var;
extern "C" String_t* UserProfile_ToString_m3166 (UserProfile_t631 * __this, MethodInfo* method)
{
	static bool UserProfile_ToString_m3166_init;
	if (!UserProfile_ToString_m3166_init)
	{
		ObjectU5BU5D_t269_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t269_0_0_0);
		UserProfile_ToString_m3166_init = true;
	}
	{
		ObjectU5BU5D_t269* L_0 = ((ObjectU5BU5D_t269*)SZArrayNew(ObjectU5BU5D_t269_il2cpp_TypeInfo_var, 7));
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&UserProfile_get_id_m3171_MethodInfo, __this);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t269* L_2 = L_0;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, (String_t*) &_stringLiteral284);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)(String_t*) &_stringLiteral284;
		ObjectU5BU5D_t269* L_3 = L_2;
		String_t* L_4 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&UserProfile_get_userName_m3170_MethodInfo, __this);
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 2);
		ArrayElementTypeCheck (L_3, L_4);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_3, 2)) = (Object_t *)L_4;
		ObjectU5BU5D_t269* L_5 = L_3;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 3);
		ArrayElementTypeCheck (L_5, (String_t*) &_stringLiteral284);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_5, 3)) = (Object_t *)(String_t*) &_stringLiteral284;
		ObjectU5BU5D_t269* L_6 = L_5;
		bool L_7 = (bool)VirtFuncInvoker0< bool >::Invoke(&UserProfile_get_isFriend_m3172_MethodInfo, __this);
		bool L_8 = L_7;
		Object_t * L_9 = Box(InitializedTypeInfo(&Boolean_t13_il2cpp_TypeInfo), &L_8);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 4);
		ArrayElementTypeCheck (L_6, L_9);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 4)) = (Object_t *)L_9;
		ObjectU5BU5D_t269* L_10 = L_6;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 5);
		ArrayElementTypeCheck (L_10, (String_t*) &_stringLiteral284);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_10, 5)) = (Object_t *)(String_t*) &_stringLiteral284;
		ObjectU5BU5D_t269* L_11 = L_10;
		int32_t L_12 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&UserProfile_get_state_m3173_MethodInfo, __this);
		int32_t L_13 = L_12;
		Object_t * L_14 = Box(InitializedTypeInfo(&UserState_t646_il2cpp_TypeInfo), &L_13);
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 6);
		ArrayElementTypeCheck (L_11, L_14);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_11, 6)) = (Object_t *)L_14;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_15 = String_Concat_m1344(NULL /*static, unused*/, L_11, /*hidden argument*/&String_Concat_m1344_MethodInfo);
		return L_15;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.UserProfile::SetUserName(System.String)
extern MethodInfo UserProfile_SetUserName_m3167_MethodInfo;
extern "C" void UserProfile_SetUserName_m3167 (UserProfile_t631 * __this, String_t* ___name, MethodInfo* method)
{
	{
		String_t* L_0 = ___name;
		__this->___m_UserName_0 = L_0;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.UserProfile::SetUserID(System.String)
extern MethodInfo UserProfile_SetUserID_m3168_MethodInfo;
extern "C" void UserProfile_SetUserID_m3168 (UserProfile_t631 * __this, String_t* ___id, MethodInfo* method)
{
	{
		String_t* L_0 = ___id;
		__this->___m_ID_1 = L_0;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.UserProfile::SetImage(UnityEngine.Texture2D)
extern MethodInfo UserProfile_SetImage_m3169_MethodInfo;
extern "C" void UserProfile_SetImage_m3169 (UserProfile_t631 * __this, Texture2D_t130 * ___image, MethodInfo* method)
{
	{
		Texture2D_t130 * L_0 = ___image;
		__this->___m_Image_4 = L_0;
		return;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.UserProfile::get_userName()
extern "C" String_t* UserProfile_get_userName_m3170 (UserProfile_t631 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_UserName_0);
		return L_0;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.UserProfile::get_id()
extern "C" String_t* UserProfile_get_id_m3171 (UserProfile_t631 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_ID_1);
		return L_0;
	}
}
// System.Boolean UnityEngine.SocialPlatforms.Impl.UserProfile::get_isFriend()
extern "C" bool UserProfile_get_isFriend_m3172 (UserProfile_t631 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_IsFriend_2);
		return L_0;
	}
}
// UnityEngine.SocialPlatforms.UserState UnityEngine.SocialPlatforms.Impl.UserProfile::get_state()
extern "C" int32_t UserProfile_get_state_m3173 (UserProfile_t631 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_State_3);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif

extern TypeInfo Void_t18_il2cpp_TypeInfo;
extern TypeInfo Double_t704_il2cpp_TypeInfo;
extern TypeInfo DateTime_t465_il2cpp_TypeInfo;
extern MethodInfo Achievement_set_id_m3179_MethodInfo;
extern MethodInfo Achievement_set_percentCompleted_m3181_MethodInfo;
extern MethodInfo Achievement__ctor_m3175_MethodInfo;
extern MethodInfo Achievement_get_id_m3178_MethodInfo;
extern MethodInfo Achievement_get_percentCompleted_m3180_MethodInfo;
extern MethodInfo Achievement_get_completed_m3182_MethodInfo;
extern MethodInfo Achievement_get_hidden_m3183_MethodInfo;
extern MethodInfo Achievement_get_lastReportedDate_m3184_MethodInfo;


// System.Void UnityEngine.SocialPlatforms.Impl.Achievement::.ctor(System.String,System.Double,System.Boolean,System.Boolean,System.DateTime)
extern "C" void Achievement__ctor_m3174 (Achievement_t633 * __this, String_t* ___id, double ___percentCompleted, bool ___completed, bool ___hidden, DateTime_t465  ___lastReportedDate, MethodInfo* method)
{
	{
		Object__ctor_m1289(__this, /*hidden argument*/&Object__ctor_m1289_MethodInfo);
		String_t* L_0 = ___id;
		VirtActionInvoker1< String_t* >::Invoke(&Achievement_set_id_m3179_MethodInfo, __this, L_0);
		double L_1 = ___percentCompleted;
		VirtActionInvoker1< double >::Invoke(&Achievement_set_percentCompleted_m3181_MethodInfo, __this, L_1);
		bool L_2 = ___completed;
		__this->___m_Completed_0 = L_2;
		bool L_3 = ___hidden;
		__this->___m_Hidden_1 = L_3;
		DateTime_t465  L_4 = ___lastReportedDate;
		__this->___m_LastReportedDate_2 = L_4;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Achievement::.ctor(System.String,System.Double)
extern "C" void Achievement__ctor_m3175 (Achievement_t633 * __this, String_t* ___id, double ___percent, MethodInfo* method)
{
	{
		Object__ctor_m1289(__this, /*hidden argument*/&Object__ctor_m1289_MethodInfo);
		String_t* L_0 = ___id;
		VirtActionInvoker1< String_t* >::Invoke(&Achievement_set_id_m3179_MethodInfo, __this, L_0);
		double L_1 = ___percent;
		VirtActionInvoker1< double >::Invoke(&Achievement_set_percentCompleted_m3181_MethodInfo, __this, L_1);
		__this->___m_Hidden_1 = 0;
		__this->___m_Completed_0 = 0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&DateTime_t465_il2cpp_TypeInfo));
		DateTime_t465  L_2 = ((DateTime_t465_StaticFields*)InitializedTypeInfo(&DateTime_t465_il2cpp_TypeInfo)->static_fields)->___MinValue_3;
		__this->___m_LastReportedDate_2 = L_2;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Achievement::.ctor()
extern MethodInfo Achievement__ctor_m3176_MethodInfo;
extern "C" void Achievement__ctor_m3176 (Achievement_t633 * __this, MethodInfo* method)
{
	{
		Achievement__ctor_m3175(__this, (String_t*) &_stringLiteral285, (0.0), /*hidden argument*/&Achievement__ctor_m3175_MethodInfo);
		return;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.Achievement::ToString()
extern MethodInfo Achievement_ToString_m3177_MethodInfo;
extern TypeInfo* ObjectU5BU5D_t269_il2cpp_TypeInfo_var;
extern "C" String_t* Achievement_ToString_m3177 (Achievement_t633 * __this, MethodInfo* method)
{
	static bool Achievement_ToString_m3177_init;
	if (!Achievement_ToString_m3177_init)
	{
		ObjectU5BU5D_t269_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t269_0_0_0);
		Achievement_ToString_m3177_init = true;
	}
	{
		ObjectU5BU5D_t269* L_0 = ((ObjectU5BU5D_t269*)SZArrayNew(ObjectU5BU5D_t269_il2cpp_TypeInfo_var, ((int32_t)9)));
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Achievement_get_id_m3178_MethodInfo, __this);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t269* L_2 = L_0;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, (String_t*) &_stringLiteral284);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)(String_t*) &_stringLiteral284;
		ObjectU5BU5D_t269* L_3 = L_2;
		double L_4 = (double)VirtFuncInvoker0< double >::Invoke(&Achievement_get_percentCompleted_m3180_MethodInfo, __this);
		double L_5 = L_4;
		Object_t * L_6 = Box(InitializedTypeInfo(&Double_t704_il2cpp_TypeInfo), &L_5);
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 2);
		ArrayElementTypeCheck (L_3, L_6);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_3, 2)) = (Object_t *)L_6;
		ObjectU5BU5D_t269* L_7 = L_3;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 3);
		ArrayElementTypeCheck (L_7, (String_t*) &_stringLiteral284);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_7, 3)) = (Object_t *)(String_t*) &_stringLiteral284;
		ObjectU5BU5D_t269* L_8 = L_7;
		bool L_9 = (bool)VirtFuncInvoker0< bool >::Invoke(&Achievement_get_completed_m3182_MethodInfo, __this);
		bool L_10 = L_9;
		Object_t * L_11 = Box(InitializedTypeInfo(&Boolean_t13_il2cpp_TypeInfo), &L_10);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 4);
		ArrayElementTypeCheck (L_8, L_11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 4)) = (Object_t *)L_11;
		ObjectU5BU5D_t269* L_12 = L_8;
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 5);
		ArrayElementTypeCheck (L_12, (String_t*) &_stringLiteral284);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_12, 5)) = (Object_t *)(String_t*) &_stringLiteral284;
		ObjectU5BU5D_t269* L_13 = L_12;
		bool L_14 = (bool)VirtFuncInvoker0< bool >::Invoke(&Achievement_get_hidden_m3183_MethodInfo, __this);
		bool L_15 = L_14;
		Object_t * L_16 = Box(InitializedTypeInfo(&Boolean_t13_il2cpp_TypeInfo), &L_15);
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, 6);
		ArrayElementTypeCheck (L_13, L_16);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_13, 6)) = (Object_t *)L_16;
		ObjectU5BU5D_t269* L_17 = L_13;
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, 7);
		ArrayElementTypeCheck (L_17, (String_t*) &_stringLiteral284);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_17, 7)) = (Object_t *)(String_t*) &_stringLiteral284;
		ObjectU5BU5D_t269* L_18 = L_17;
		DateTime_t465  L_19 = (DateTime_t465 )VirtFuncInvoker0< DateTime_t465  >::Invoke(&Achievement_get_lastReportedDate_m3184_MethodInfo, __this);
		DateTime_t465  L_20 = L_19;
		Object_t * L_21 = Box(InitializedTypeInfo(&DateTime_t465_il2cpp_TypeInfo), &L_20);
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, 8);
		ArrayElementTypeCheck (L_18, L_21);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_18, 8)) = (Object_t *)L_21;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_22 = String_Concat_m1344(NULL /*static, unused*/, L_18, /*hidden argument*/&String_Concat_m1344_MethodInfo);
		return L_22;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.Achievement::get_id()
extern "C" String_t* Achievement_get_id_m3178 (Achievement_t633 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CidU3Ek__BackingField_3);
		return L_0;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Achievement::set_id(System.String)
extern "C" void Achievement_set_id_m3179 (Achievement_t633 * __this, String_t* ___value, MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CidU3Ek__BackingField_3 = L_0;
		return;
	}
}
// System.Double UnityEngine.SocialPlatforms.Impl.Achievement::get_percentCompleted()
extern "C" double Achievement_get_percentCompleted_m3180 (Achievement_t633 * __this, MethodInfo* method)
{
	{
		double L_0 = (__this->___U3CpercentCompletedU3Ek__BackingField_4);
		return L_0;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Achievement::set_percentCompleted(System.Double)
extern "C" void Achievement_set_percentCompleted_m3181 (Achievement_t633 * __this, double ___value, MethodInfo* method)
{
	{
		double L_0 = ___value;
		__this->___U3CpercentCompletedU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.Boolean UnityEngine.SocialPlatforms.Impl.Achievement::get_completed()
extern "C" bool Achievement_get_completed_m3182 (Achievement_t633 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_Completed_0);
		return L_0;
	}
}
// System.Boolean UnityEngine.SocialPlatforms.Impl.Achievement::get_hidden()
extern "C" bool Achievement_get_hidden_m3183 (Achievement_t633 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_Hidden_1);
		return L_0;
	}
}
// System.DateTime UnityEngine.SocialPlatforms.Impl.Achievement::get_lastReportedDate()
extern "C" DateTime_t465  Achievement_get_lastReportedDate_m3184 (Achievement_t633 * __this, MethodInfo* method)
{
	{
		DateTime_t465  L_0 = (__this->___m_LastReportedDate_2);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif

extern MethodInfo AchievementDescription_set_id_m3189_MethodInfo;
extern MethodInfo AchievementDescription_get_id_m3188_MethodInfo;
extern MethodInfo AchievementDescription_get_title_m3190_MethodInfo;
extern MethodInfo AchievementDescription_get_achievedDescription_m3191_MethodInfo;
extern MethodInfo AchievementDescription_get_unachievedDescription_m3192_MethodInfo;
extern MethodInfo AchievementDescription_get_points_m3194_MethodInfo;
extern MethodInfo AchievementDescription_get_hidden_m3193_MethodInfo;


// System.Void UnityEngine.SocialPlatforms.Impl.AchievementDescription::.ctor(System.String,System.String,UnityEngine.Texture2D,System.String,System.String,System.Boolean,System.Int32)
extern "C" void AchievementDescription__ctor_m3185 (AchievementDescription_t632 * __this, String_t* ___id, String_t* ___title, Texture2D_t130 * ___image, String_t* ___achievedDescription, String_t* ___unachievedDescription, bool ___hidden, int32_t ___points, MethodInfo* method)
{
	{
		Object__ctor_m1289(__this, /*hidden argument*/&Object__ctor_m1289_MethodInfo);
		String_t* L_0 = ___id;
		VirtActionInvoker1< String_t* >::Invoke(&AchievementDescription_set_id_m3189_MethodInfo, __this, L_0);
		String_t* L_1 = ___title;
		__this->___m_Title_0 = L_1;
		Texture2D_t130 * L_2 = ___image;
		__this->___m_Image_1 = L_2;
		String_t* L_3 = ___achievedDescription;
		__this->___m_AchievedDescription_2 = L_3;
		String_t* L_4 = ___unachievedDescription;
		__this->___m_UnachievedDescription_3 = L_4;
		bool L_5 = ___hidden;
		__this->___m_Hidden_4 = L_5;
		int32_t L_6 = ___points;
		__this->___m_Points_5 = L_6;
		return;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::ToString()
extern MethodInfo AchievementDescription_ToString_m3186_MethodInfo;
extern TypeInfo* ObjectU5BU5D_t269_il2cpp_TypeInfo_var;
extern "C" String_t* AchievementDescription_ToString_m3186 (AchievementDescription_t632 * __this, MethodInfo* method)
{
	static bool AchievementDescription_ToString_m3186_init;
	if (!AchievementDescription_ToString_m3186_init)
	{
		ObjectU5BU5D_t269_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t269_0_0_0);
		AchievementDescription_ToString_m3186_init = true;
	}
	{
		ObjectU5BU5D_t269* L_0 = ((ObjectU5BU5D_t269*)SZArrayNew(ObjectU5BU5D_t269_il2cpp_TypeInfo_var, ((int32_t)11)));
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&AchievementDescription_get_id_m3188_MethodInfo, __this);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t269* L_2 = L_0;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, (String_t*) &_stringLiteral284);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)(String_t*) &_stringLiteral284;
		ObjectU5BU5D_t269* L_3 = L_2;
		String_t* L_4 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&AchievementDescription_get_title_m3190_MethodInfo, __this);
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 2);
		ArrayElementTypeCheck (L_3, L_4);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_3, 2)) = (Object_t *)L_4;
		ObjectU5BU5D_t269* L_5 = L_3;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 3);
		ArrayElementTypeCheck (L_5, (String_t*) &_stringLiteral284);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_5, 3)) = (Object_t *)(String_t*) &_stringLiteral284;
		ObjectU5BU5D_t269* L_6 = L_5;
		String_t* L_7 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&AchievementDescription_get_achievedDescription_m3191_MethodInfo, __this);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 4);
		ArrayElementTypeCheck (L_6, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 4)) = (Object_t *)L_7;
		ObjectU5BU5D_t269* L_8 = L_6;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 5);
		ArrayElementTypeCheck (L_8, (String_t*) &_stringLiteral284);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 5)) = (Object_t *)(String_t*) &_stringLiteral284;
		ObjectU5BU5D_t269* L_9 = L_8;
		String_t* L_10 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&AchievementDescription_get_unachievedDescription_m3192_MethodInfo, __this);
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, 6);
		ArrayElementTypeCheck (L_9, L_10);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_9, 6)) = (Object_t *)L_10;
		ObjectU5BU5D_t269* L_11 = L_9;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 7);
		ArrayElementTypeCheck (L_11, (String_t*) &_stringLiteral284);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_11, 7)) = (Object_t *)(String_t*) &_stringLiteral284;
		ObjectU5BU5D_t269* L_12 = L_11;
		int32_t L_13 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&AchievementDescription_get_points_m3194_MethodInfo, __this);
		int32_t L_14 = L_13;
		Object_t * L_15 = Box(InitializedTypeInfo(&Int32_t17_il2cpp_TypeInfo), &L_14);
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 8);
		ArrayElementTypeCheck (L_12, L_15);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_12, 8)) = (Object_t *)L_15;
		ObjectU5BU5D_t269* L_16 = L_12;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, ((int32_t)9));
		ArrayElementTypeCheck (L_16, (String_t*) &_stringLiteral284);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_16, ((int32_t)9))) = (Object_t *)(String_t*) &_stringLiteral284;
		ObjectU5BU5D_t269* L_17 = L_16;
		bool L_18 = (bool)VirtFuncInvoker0< bool >::Invoke(&AchievementDescription_get_hidden_m3193_MethodInfo, __this);
		bool L_19 = L_18;
		Object_t * L_20 = Box(InitializedTypeInfo(&Boolean_t13_il2cpp_TypeInfo), &L_19);
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, ((int32_t)10));
		ArrayElementTypeCheck (L_17, L_20);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_17, ((int32_t)10))) = (Object_t *)L_20;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_21 = String_Concat_m1344(NULL /*static, unused*/, L_17, /*hidden argument*/&String_Concat_m1344_MethodInfo);
		return L_21;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.AchievementDescription::SetImage(UnityEngine.Texture2D)
extern MethodInfo AchievementDescription_SetImage_m3187_MethodInfo;
extern "C" void AchievementDescription_SetImage_m3187 (AchievementDescription_t632 * __this, Texture2D_t130 * ___image, MethodInfo* method)
{
	{
		Texture2D_t130 * L_0 = ___image;
		__this->___m_Image_1 = L_0;
		return;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_id()
extern "C" String_t* AchievementDescription_get_id_m3188 (AchievementDescription_t632 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CidU3Ek__BackingField_6);
		return L_0;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.AchievementDescription::set_id(System.String)
extern "C" void AchievementDescription_set_id_m3189 (AchievementDescription_t632 * __this, String_t* ___value, MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CidU3Ek__BackingField_6 = L_0;
		return;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_title()
extern "C" String_t* AchievementDescription_get_title_m3190 (AchievementDescription_t632 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_Title_0);
		return L_0;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_achievedDescription()
extern "C" String_t* AchievementDescription_get_achievedDescription_m3191 (AchievementDescription_t632 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_AchievedDescription_2);
		return L_0;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_unachievedDescription()
extern "C" String_t* AchievementDescription_get_unachievedDescription_m3192 (AchievementDescription_t632 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_UnachievedDescription_3);
		return L_0;
	}
}
// System.Boolean UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_hidden()
extern "C" bool AchievementDescription_get_hidden_m3193 (AchievementDescription_t632 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_Hidden_4);
		return L_0;
	}
}
// System.Int32 UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_points()
extern "C" int32_t AchievementDescription_get_points_m3194 (AchievementDescription_t632 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Points_5);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif

extern TypeInfo Int64_t705_il2cpp_TypeInfo;
extern MethodInfo DateTime_get_Now_m3336_MethodInfo;
extern MethodInfo Score_set_leaderboardID_m3199_MethodInfo;
extern MethodInfo Score_set_value_m3201_MethodInfo;
extern MethodInfo Score_get_value_m3200_MethodInfo;
extern MethodInfo Score_get_leaderboardID_m3198_MethodInfo;


// System.Void UnityEngine.SocialPlatforms.Impl.Score::.ctor(System.String,System.Int64)
extern MethodInfo Score__ctor_m3195_MethodInfo;
extern "C" void Score__ctor_m3195 (Score_t634 * __this, String_t* ___leaderboardID, int64_t ___value, MethodInfo* method)
{
	{
		String_t* L_0 = ___leaderboardID;
		int64_t L_1 = ___value;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&DateTime_t465_il2cpp_TypeInfo));
		DateTime_t465  L_2 = DateTime_get_Now_m3336(NULL /*static, unused*/, /*hidden argument*/&DateTime_get_Now_m3336_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_3 = ((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2;
		Score__ctor_m3196(__this, L_0, L_1, (String_t*) &_stringLiteral75, L_2, L_3, (-1), /*hidden argument*/&Score__ctor_m3196_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Score::.ctor(System.String,System.Int64,System.String,System.DateTime,System.String,System.Int32)
extern "C" void Score__ctor_m3196 (Score_t634 * __this, String_t* ___leaderboardID, int64_t ___value, String_t* ___userID, DateTime_t465  ___date, String_t* ___formattedValue, int32_t ___rank, MethodInfo* method)
{
	{
		Object__ctor_m1289(__this, /*hidden argument*/&Object__ctor_m1289_MethodInfo);
		String_t* L_0 = ___leaderboardID;
		VirtActionInvoker1< String_t* >::Invoke(&Score_set_leaderboardID_m3199_MethodInfo, __this, L_0);
		int64_t L_1 = ___value;
		VirtActionInvoker1< int64_t >::Invoke(&Score_set_value_m3201_MethodInfo, __this, L_1);
		String_t* L_2 = ___userID;
		__this->___m_UserID_2 = L_2;
		DateTime_t465  L_3 = ___date;
		__this->___m_Date_0 = L_3;
		String_t* L_4 = ___formattedValue;
		__this->___m_FormattedValue_1 = L_4;
		int32_t L_5 = ___rank;
		__this->___m_Rank_3 = L_5;
		return;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.Score::ToString()
extern MethodInfo Score_ToString_m3197_MethodInfo;
extern TypeInfo* ObjectU5BU5D_t269_il2cpp_TypeInfo_var;
extern "C" String_t* Score_ToString_m3197 (Score_t634 * __this, MethodInfo* method)
{
	static bool Score_ToString_m3197_init;
	if (!Score_ToString_m3197_init)
	{
		ObjectU5BU5D_t269_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t269_0_0_0);
		Score_ToString_m3197_init = true;
	}
	{
		ObjectU5BU5D_t269* L_0 = ((ObjectU5BU5D_t269*)SZArrayNew(ObjectU5BU5D_t269_il2cpp_TypeInfo_var, ((int32_t)10)));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, (String_t*) &_stringLiteral286);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)(String_t*) &_stringLiteral286;
		ObjectU5BU5D_t269* L_1 = L_0;
		int32_t L_2 = (__this->___m_Rank_3);
		int32_t L_3 = L_2;
		Object_t * L_4 = Box(InitializedTypeInfo(&Int32_t17_il2cpp_TypeInfo), &L_3);
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 1);
		ArrayElementTypeCheck (L_1, L_4);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_1, 1)) = (Object_t *)L_4;
		ObjectU5BU5D_t269* L_5 = L_1;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 2);
		ArrayElementTypeCheck (L_5, (String_t*) &_stringLiteral287);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_5, 2)) = (Object_t *)(String_t*) &_stringLiteral287;
		ObjectU5BU5D_t269* L_6 = L_5;
		int64_t L_7 = (int64_t)VirtFuncInvoker0< int64_t >::Invoke(&Score_get_value_m3200_MethodInfo, __this);
		int64_t L_8 = L_7;
		Object_t * L_9 = Box(InitializedTypeInfo(&Int64_t705_il2cpp_TypeInfo), &L_8);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 3);
		ArrayElementTypeCheck (L_6, L_9);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 3)) = (Object_t *)L_9;
		ObjectU5BU5D_t269* L_10 = L_6;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 4);
		ArrayElementTypeCheck (L_10, (String_t*) &_stringLiteral288);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_10, 4)) = (Object_t *)(String_t*) &_stringLiteral288;
		ObjectU5BU5D_t269* L_11 = L_10;
		String_t* L_12 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Score_get_leaderboardID_m3198_MethodInfo, __this);
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 5);
		ArrayElementTypeCheck (L_11, L_12);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_11, 5)) = (Object_t *)L_12;
		ObjectU5BU5D_t269* L_13 = L_11;
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, 6);
		ArrayElementTypeCheck (L_13, (String_t*) &_stringLiteral289);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_13, 6)) = (Object_t *)(String_t*) &_stringLiteral289;
		ObjectU5BU5D_t269* L_14 = L_13;
		String_t* L_15 = (__this->___m_UserID_2);
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, 7);
		ArrayElementTypeCheck (L_14, L_15);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_14, 7)) = (Object_t *)L_15;
		ObjectU5BU5D_t269* L_16 = L_14;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, 8);
		ArrayElementTypeCheck (L_16, (String_t*) &_stringLiteral290);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_16, 8)) = (Object_t *)(String_t*) &_stringLiteral290;
		ObjectU5BU5D_t269* L_17 = L_16;
		DateTime_t465  L_18 = (__this->___m_Date_0);
		DateTime_t465  L_19 = L_18;
		Object_t * L_20 = Box(InitializedTypeInfo(&DateTime_t465_il2cpp_TypeInfo), &L_19);
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, ((int32_t)9));
		ArrayElementTypeCheck (L_17, L_20);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_17, ((int32_t)9))) = (Object_t *)L_20;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_21 = String_Concat_m1344(NULL /*static, unused*/, L_17, /*hidden argument*/&String_Concat_m1344_MethodInfo);
		return L_21;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.Score::get_leaderboardID()
extern "C" String_t* Score_get_leaderboardID_m3198 (Score_t634 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CleaderboardIDU3Ek__BackingField_4);
		return L_0;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Score::set_leaderboardID(System.String)
extern "C" void Score_set_leaderboardID_m3199 (Score_t634 * __this, String_t* ___value, MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CleaderboardIDU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.Int64 UnityEngine.SocialPlatforms.Impl.Score::get_value()
extern "C" int64_t Score_get_value_m3200 (Score_t634 * __this, MethodInfo* method)
{
	{
		int64_t L_0 = (__this->___U3CvalueU3Ek__BackingField_5);
		return L_0;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Score::set_value(System.Int64)
extern "C" void Score_set_value_m3201 (Score_t634 * __this, int64_t ___value, MethodInfo* method)
{
	{
		int64_t L_0 = ___value;
		__this->___U3CvalueU3Ek__BackingField_5 = L_0;
		return;
	}
}
// UnityEngine.SocialPlatforms.Impl.Leaderboard
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_Leaderboard.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Leaderboard_t449_il2cpp_TypeInfo;
// UnityEngine.SocialPlatforms.Impl.Leaderboard
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_LeaderboardMethodDeclarations.h"

// UnityEngine.SocialPlatforms.UserScope
#include "UnityEngine_UnityEngine_SocialPlatforms_UserScope.h"
// UnityEngine.SocialPlatforms.Range
#include "UnityEngine_UnityEngine_SocialPlatforms_Range.h"
// UnityEngine.SocialPlatforms.TimeScope
#include "UnityEngine_UnityEngine_SocialPlatforms_TimeScope.h"
// System.UInt32
#include "mscorlib_System_UInt32.h"
extern TypeInfo Range_t642_il2cpp_TypeInfo;
extern TypeInfo UserScope_t647_il2cpp_TypeInfo;
extern TypeInfo TimeScope_t648_il2cpp_TypeInfo;
extern TypeInfo ScoreU5BU5D_t682_il2cpp_TypeInfo;
extern TypeInfo UInt32_t697_il2cpp_TypeInfo;
// UnityEngine.SocialPlatforms.Range
#include "UnityEngine_UnityEngine_SocialPlatforms_RangeMethodDeclarations.h"
extern Il2CppType ScoreU5BU5D_t682_0_0_0;
extern Il2CppType StringU5BU5D_t423_0_0_0;
extern MethodInfo Leaderboard_set_id_m3210_MethodInfo;
extern MethodInfo Range__ctor_m3223_MethodInfo;
extern MethodInfo Leaderboard_set_range_m3214_MethodInfo;
extern MethodInfo Leaderboard_set_userScope_m3212_MethodInfo;
extern MethodInfo Leaderboard_set_timeScope_m3216_MethodInfo;
extern MethodInfo Leaderboard_get_id_m3209_MethodInfo;
extern MethodInfo Leaderboard_get_range_m3213_MethodInfo;
extern MethodInfo Leaderboard_get_userScope_m3211_MethodInfo;
extern MethodInfo Leaderboard_get_timeScope_m3215_MethodInfo;


// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::.ctor()
extern MethodInfo Leaderboard__ctor_m3202_MethodInfo;
extern TypeInfo* ScoreU5BU5D_t682_il2cpp_TypeInfo_var;
extern TypeInfo* StringU5BU5D_t423_il2cpp_TypeInfo_var;
extern "C" void Leaderboard__ctor_m3202 (Leaderboard_t449 * __this, MethodInfo* method)
{
	static bool Leaderboard__ctor_m3202_init;
	if (!Leaderboard__ctor_m3202_init)
	{
		ScoreU5BU5D_t682_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ScoreU5BU5D_t682_0_0_0);
		StringU5BU5D_t423_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&StringU5BU5D_t423_0_0_0);
		Leaderboard__ctor_m3202_init = true;
	}
	{
		Object__ctor_m1289(__this, /*hidden argument*/&Object__ctor_m1289_MethodInfo);
		VirtActionInvoker1< String_t* >::Invoke(&Leaderboard_set_id_m3210_MethodInfo, __this, (String_t*) &_stringLiteral291);
		Range_t642  L_0 = {0};
		Range__ctor_m3223(&L_0, 1, ((int32_t)10), /*hidden argument*/&Range__ctor_m3223_MethodInfo);
		VirtActionInvoker1< Range_t642  >::Invoke(&Leaderboard_set_range_m3214_MethodInfo, __this, L_0);
		VirtActionInvoker1< int32_t >::Invoke(&Leaderboard_set_userScope_m3212_MethodInfo, __this, 0);
		VirtActionInvoker1< int32_t >::Invoke(&Leaderboard_set_timeScope_m3216_MethodInfo, __this, 2);
		__this->___m_Loading_0 = 0;
		Score_t634 * L_1 = (Score_t634 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Score_t634_il2cpp_TypeInfo));
		Score__ctor_m3195(L_1, (String_t*) &_stringLiteral291, (((int64_t)0)), /*hidden argument*/&Score__ctor_m3195_MethodInfo);
		__this->___m_LocalUserScore_1 = L_1;
		__this->___m_MaxRange_2 = 0;
		__this->___m_Scores_3 = (IScoreU5BU5D_t641*)((ScoreU5BU5D_t682*)SZArrayNew(ScoreU5BU5D_t682_il2cpp_TypeInfo_var, 0));
		__this->___m_Title_4 = (String_t*) &_stringLiteral291;
		__this->___m_UserIDs_5 = ((StringU5BU5D_t423*)SZArrayNew(StringU5BU5D_t423_il2cpp_TypeInfo_var, 0));
		return;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.Leaderboard::ToString()
extern MethodInfo Leaderboard_ToString_m3203_MethodInfo;
extern TypeInfo* ObjectU5BU5D_t269_il2cpp_TypeInfo_var;
extern "C" String_t* Leaderboard_ToString_m3203 (Leaderboard_t449 * __this, MethodInfo* method)
{
	static bool Leaderboard_ToString_m3203_init;
	if (!Leaderboard_ToString_m3203_init)
	{
		ObjectU5BU5D_t269_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t269_0_0_0);
		Leaderboard_ToString_m3203_init = true;
	}
	Range_t642  V_0 = {0};
	Range_t642  V_1 = {0};
	{
		ObjectU5BU5D_t269* L_0 = ((ObjectU5BU5D_t269*)SZArrayNew(ObjectU5BU5D_t269_il2cpp_TypeInfo_var, ((int32_t)20)));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, (String_t*) &_stringLiteral292);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)(String_t*) &_stringLiteral292;
		ObjectU5BU5D_t269* L_1 = L_0;
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Leaderboard_get_id_m3209_MethodInfo, __this);
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 1);
		ArrayElementTypeCheck (L_1, L_2);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_1, 1)) = (Object_t *)L_2;
		ObjectU5BU5D_t269* L_3 = L_1;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 2);
		ArrayElementTypeCheck (L_3, (String_t*) &_stringLiteral293);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_3, 2)) = (Object_t *)(String_t*) &_stringLiteral293;
		ObjectU5BU5D_t269* L_4 = L_3;
		String_t* L_5 = (__this->___m_Title_4);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 3);
		ArrayElementTypeCheck (L_4, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 3)) = (Object_t *)L_5;
		ObjectU5BU5D_t269* L_6 = L_4;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 4);
		ArrayElementTypeCheck (L_6, (String_t*) &_stringLiteral294);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 4)) = (Object_t *)(String_t*) &_stringLiteral294;
		ObjectU5BU5D_t269* L_7 = L_6;
		bool L_8 = (__this->___m_Loading_0);
		bool L_9 = L_8;
		Object_t * L_10 = Box(InitializedTypeInfo(&Boolean_t13_il2cpp_TypeInfo), &L_9);
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 5);
		ArrayElementTypeCheck (L_7, L_10);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_7, 5)) = (Object_t *)L_10;
		ObjectU5BU5D_t269* L_11 = L_7;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 6);
		ArrayElementTypeCheck (L_11, (String_t*) &_stringLiteral295);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_11, 6)) = (Object_t *)(String_t*) &_stringLiteral295;
		ObjectU5BU5D_t269* L_12 = L_11;
		Range_t642  L_13 = (Range_t642 )VirtFuncInvoker0< Range_t642  >::Invoke(&Leaderboard_get_range_m3213_MethodInfo, __this);
		V_0 = L_13;
		int32_t L_14 = ((&V_0)->___from_0);
		int32_t L_15 = L_14;
		Object_t * L_16 = Box(InitializedTypeInfo(&Int32_t17_il2cpp_TypeInfo), &L_15);
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 7);
		ArrayElementTypeCheck (L_12, L_16);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_12, 7)) = (Object_t *)L_16;
		ObjectU5BU5D_t269* L_17 = L_12;
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, 8);
		ArrayElementTypeCheck (L_17, (String_t*) &_stringLiteral264);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_17, 8)) = (Object_t *)(String_t*) &_stringLiteral264;
		ObjectU5BU5D_t269* L_18 = L_17;
		Range_t642  L_19 = (Range_t642 )VirtFuncInvoker0< Range_t642  >::Invoke(&Leaderboard_get_range_m3213_MethodInfo, __this);
		V_1 = L_19;
		int32_t L_20 = ((&V_1)->___count_1);
		int32_t L_21 = L_20;
		Object_t * L_22 = Box(InitializedTypeInfo(&Int32_t17_il2cpp_TypeInfo), &L_21);
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, ((int32_t)9));
		ArrayElementTypeCheck (L_18, L_22);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_18, ((int32_t)9))) = (Object_t *)L_22;
		ObjectU5BU5D_t269* L_23 = L_18;
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, ((int32_t)10));
		ArrayElementTypeCheck (L_23, (String_t*) &_stringLiteral296);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_23, ((int32_t)10))) = (Object_t *)(String_t*) &_stringLiteral296;
		ObjectU5BU5D_t269* L_24 = L_23;
		uint32_t L_25 = (__this->___m_MaxRange_2);
		uint32_t L_26 = L_25;
		Object_t * L_27 = Box(InitializedTypeInfo(&UInt32_t697_il2cpp_TypeInfo), &L_26);
		NullCheck(L_24);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_24, ((int32_t)11));
		ArrayElementTypeCheck (L_24, L_27);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_24, ((int32_t)11))) = (Object_t *)L_27;
		ObjectU5BU5D_t269* L_28 = L_24;
		NullCheck(L_28);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_28, ((int32_t)12));
		ArrayElementTypeCheck (L_28, (String_t*) &_stringLiteral297);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_28, ((int32_t)12))) = (Object_t *)(String_t*) &_stringLiteral297;
		ObjectU5BU5D_t269* L_29 = L_28;
		IScoreU5BU5D_t641* L_30 = (__this->___m_Scores_3);
		NullCheck(L_30);
		int32_t L_31 = (((int32_t)(((Array_t *)L_30)->max_length)));
		Object_t * L_32 = Box(InitializedTypeInfo(&Int32_t17_il2cpp_TypeInfo), &L_31);
		NullCheck(L_29);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_29, ((int32_t)13));
		ArrayElementTypeCheck (L_29, L_32);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_29, ((int32_t)13))) = (Object_t *)L_32;
		ObjectU5BU5D_t269* L_33 = L_29;
		NullCheck(L_33);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_33, ((int32_t)14));
		ArrayElementTypeCheck (L_33, (String_t*) &_stringLiteral298);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_33, ((int32_t)14))) = (Object_t *)(String_t*) &_stringLiteral298;
		ObjectU5BU5D_t269* L_34 = L_33;
		int32_t L_35 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&Leaderboard_get_userScope_m3211_MethodInfo, __this);
		int32_t L_36 = L_35;
		Object_t * L_37 = Box(InitializedTypeInfo(&UserScope_t647_il2cpp_TypeInfo), &L_36);
		NullCheck(L_34);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_34, ((int32_t)15));
		ArrayElementTypeCheck (L_34, L_37);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_34, ((int32_t)15))) = (Object_t *)L_37;
		ObjectU5BU5D_t269* L_38 = L_34;
		NullCheck(L_38);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_38, ((int32_t)16));
		ArrayElementTypeCheck (L_38, (String_t*) &_stringLiteral299);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_38, ((int32_t)16))) = (Object_t *)(String_t*) &_stringLiteral299;
		ObjectU5BU5D_t269* L_39 = L_38;
		int32_t L_40 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&Leaderboard_get_timeScope_m3215_MethodInfo, __this);
		int32_t L_41 = L_40;
		Object_t * L_42 = Box(InitializedTypeInfo(&TimeScope_t648_il2cpp_TypeInfo), &L_41);
		NullCheck(L_39);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_39, ((int32_t)17));
		ArrayElementTypeCheck (L_39, L_42);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_39, ((int32_t)17))) = (Object_t *)L_42;
		ObjectU5BU5D_t269* L_43 = L_39;
		NullCheck(L_43);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_43, ((int32_t)18));
		ArrayElementTypeCheck (L_43, (String_t*) &_stringLiteral300);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_43, ((int32_t)18))) = (Object_t *)(String_t*) &_stringLiteral300;
		ObjectU5BU5D_t269* L_44 = L_43;
		StringU5BU5D_t423* L_45 = (__this->___m_UserIDs_5);
		NullCheck(L_45);
		int32_t L_46 = (((int32_t)(((Array_t *)L_45)->max_length)));
		Object_t * L_47 = Box(InitializedTypeInfo(&Int32_t17_il2cpp_TypeInfo), &L_46);
		NullCheck(L_44);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_44, ((int32_t)19));
		ArrayElementTypeCheck (L_44, L_47);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_44, ((int32_t)19))) = (Object_t *)L_47;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_48 = String_Concat_m1344(NULL /*static, unused*/, L_44, /*hidden argument*/&String_Concat_m1344_MethodInfo);
		return L_48;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::SetLocalUserScore(UnityEngine.SocialPlatforms.IScore)
extern MethodInfo Leaderboard_SetLocalUserScore_m3204_MethodInfo;
extern "C" void Leaderboard_SetLocalUserScore_m3204 (Leaderboard_t449 * __this, Object_t * ___score, MethodInfo* method)
{
	{
		Object_t * L_0 = ___score;
		__this->___m_LocalUserScore_1 = L_0;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::SetMaxRange(System.UInt32)
extern MethodInfo Leaderboard_SetMaxRange_m3205_MethodInfo;
extern "C" void Leaderboard_SetMaxRange_m3205 (Leaderboard_t449 * __this, uint32_t ___maxRange, MethodInfo* method)
{
	{
		uint32_t L_0 = ___maxRange;
		__this->___m_MaxRange_2 = L_0;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::SetScores(UnityEngine.SocialPlatforms.IScore[])
extern MethodInfo Leaderboard_SetScores_m3206_MethodInfo;
extern "C" void Leaderboard_SetScores_m3206 (Leaderboard_t449 * __this, IScoreU5BU5D_t641* ___scores, MethodInfo* method)
{
	{
		IScoreU5BU5D_t641* L_0 = ___scores;
		__this->___m_Scores_3 = L_0;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::SetTitle(System.String)
extern MethodInfo Leaderboard_SetTitle_m3207_MethodInfo;
extern "C" void Leaderboard_SetTitle_m3207 (Leaderboard_t449 * __this, String_t* ___title, MethodInfo* method)
{
	{
		String_t* L_0 = ___title;
		__this->___m_Title_4 = L_0;
		return;
	}
}
// System.String[] UnityEngine.SocialPlatforms.Impl.Leaderboard::GetUserFilter()
extern MethodInfo Leaderboard_GetUserFilter_m3208_MethodInfo;
extern "C" StringU5BU5D_t423* Leaderboard_GetUserFilter_m3208 (Leaderboard_t449 * __this, MethodInfo* method)
{
	{
		StringU5BU5D_t423* L_0 = (__this->___m_UserIDs_5);
		return L_0;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.Leaderboard::get_id()
extern "C" String_t* Leaderboard_get_id_m3209 (Leaderboard_t449 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CidU3Ek__BackingField_6);
		return L_0;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_id(System.String)
extern "C" void Leaderboard_set_id_m3210 (Leaderboard_t449 * __this, String_t* ___value, MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CidU3Ek__BackingField_6 = L_0;
		return;
	}
}
// UnityEngine.SocialPlatforms.UserScope UnityEngine.SocialPlatforms.Impl.Leaderboard::get_userScope()
extern "C" int32_t Leaderboard_get_userScope_m3211 (Leaderboard_t449 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___U3CuserScopeU3Ek__BackingField_7);
		return L_0;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_userScope(UnityEngine.SocialPlatforms.UserScope)
extern "C" void Leaderboard_set_userScope_m3212 (Leaderboard_t449 * __this, int32_t ___value, MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___U3CuserScopeU3Ek__BackingField_7 = L_0;
		return;
	}
}
// UnityEngine.SocialPlatforms.Range UnityEngine.SocialPlatforms.Impl.Leaderboard::get_range()
extern "C" Range_t642  Leaderboard_get_range_m3213 (Leaderboard_t449 * __this, MethodInfo* method)
{
	{
		Range_t642  L_0 = (__this->___U3CrangeU3Ek__BackingField_8);
		return L_0;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_range(UnityEngine.SocialPlatforms.Range)
extern "C" void Leaderboard_set_range_m3214 (Leaderboard_t449 * __this, Range_t642  ___value, MethodInfo* method)
{
	{
		Range_t642  L_0 = ___value;
		__this->___U3CrangeU3Ek__BackingField_8 = L_0;
		return;
	}
}
// UnityEngine.SocialPlatforms.TimeScope UnityEngine.SocialPlatforms.Impl.Leaderboard::get_timeScope()
extern "C" int32_t Leaderboard_get_timeScope_m3215 (Leaderboard_t449 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___U3CtimeScopeU3Ek__BackingField_9);
		return L_0;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_timeScope(UnityEngine.SocialPlatforms.TimeScope)
extern "C" void Leaderboard_set_timeScope_m3216 (Leaderboard_t449 * __this, int32_t ___value, MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___U3CtimeScopeU3Ek__BackingField_9 = L_0;
		return;
	}
}
// UnityEngine.SendMouseEvents/HitInfo
#include "UnityEngine_UnityEngine_SendMouseEvents_HitInfo.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo HitInfo_t643_il2cpp_TypeInfo;
// UnityEngine.SendMouseEvents/HitInfo
#include "UnityEngine_UnityEngine_SendMouseEvents_HitInfoMethodDeclarations.h"

// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObject.h"
// UnityEngine.SendMessageOptions
#include "UnityEngine_UnityEngine_SendMessageOptions.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_Object.h"
// UnityEngine.Camera
#include "UnityEngine_UnityEngine_Camera.h"
// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObjectMethodDeclarations.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
extern MethodInfo GameObject_SendMessage_m2715_MethodInfo;
extern MethodInfo Object_op_Equality_m1267_MethodInfo;
extern MethodInfo Object_op_Inequality_m1268_MethodInfo;


// System.Void UnityEngine.SendMouseEvents/HitInfo::SendMessage(System.String)
extern MethodInfo HitInfo_SendMessage_m3217_MethodInfo;
extern "C" void HitInfo_SendMessage_m3217 (HitInfo_t643 * __this, String_t* ___name, MethodInfo* method)
{
	{
		GameObject_t10 * L_0 = (__this->___target_0);
		String_t* L_1 = ___name;
		NullCheck(L_0);
		GameObject_SendMessage_m2715(L_0, L_1, NULL, 1, /*hidden argument*/&GameObject_SendMessage_m2715_MethodInfo);
		return;
	}
}
// System.Boolean UnityEngine.SendMouseEvents/HitInfo::Compare(UnityEngine.SendMouseEvents/HitInfo,UnityEngine.SendMouseEvents/HitInfo)
extern MethodInfo HitInfo_Compare_m3218_MethodInfo;
extern "C" bool HitInfo_Compare_m3218 (Object_t * __this /* static, unused */, HitInfo_t643  ___lhs, HitInfo_t643  ___rhs, MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		GameObject_t10 * L_0 = ((&___lhs)->___target_0);
		GameObject_t10 * L_1 = ((&___rhs)->___target_0);
		bool L_2 = Object_op_Equality_m1267(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Object_op_Equality_m1267_MethodInfo);
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		Camera_t7 * L_3 = ((&___lhs)->___camera_1);
		Camera_t7 * L_4 = ((&___rhs)->___camera_1);
		bool L_5 = Object_op_Equality_m1267(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/&Object_op_Equality_m1267_MethodInfo);
		G_B3_0 = ((int32_t)(L_5));
		goto IL_002e;
	}

IL_002d:
	{
		G_B3_0 = 0;
	}

IL_002e:
	{
		return G_B3_0;
	}
}
// System.Boolean UnityEngine.SendMouseEvents/HitInfo::op_Implicit(UnityEngine.SendMouseEvents/HitInfo)
extern MethodInfo HitInfo_op_Implicit_m3219_MethodInfo;
extern "C" bool HitInfo_op_Implicit_m3219 (Object_t * __this /* static, unused */, HitInfo_t643  ___exists, MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		GameObject_t10 * L_0 = ((&___exists)->___target_0);
		bool L_1 = Object_op_Inequality_m1268(NULL /*static, unused*/, L_0, (Object_t20 *)NULL, /*hidden argument*/&Object_op_Inequality_m1268_MethodInfo);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		Camera_t7 * L_2 = ((&___exists)->___camera_1);
		bool L_3 = Object_op_Inequality_m1268(NULL /*static, unused*/, L_2, (Object_t20 *)NULL, /*hidden argument*/&Object_op_Inequality_m1268_MethodInfo);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_0022;
	}

IL_0021:
	{
		G_B3_0 = 0;
	}

IL_0022:
	{
		return G_B3_0;
	}
}
// UnityEngine.SendMouseEvents
#include "UnityEngine_UnityEngine_SendMouseEvents.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo SendMouseEvents_t645_il2cpp_TypeInfo;
// UnityEngine.SendMouseEvents
#include "UnityEngine_UnityEngine_SendMouseEventsMethodDeclarations.h"

// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// UnityEngine.GUILayer
#include "UnityEngine_UnityEngine_GUILayer.h"
// UnityEngine.GUIElement
#include "UnityEngine_UnityEngine_GUIElement.h"
// UnityEngine.Ray
#include "UnityEngine_UnityEngine_Ray.h"
// System.Single
#include "mscorlib_System_Single.h"
// UnityEngine.RenderTexture
#include "UnityEngine_UnityEngine_RenderTexture.h"
extern TypeInfo HitInfoU5BU5D_t644_il2cpp_TypeInfo;
extern TypeInfo Input_t21_il2cpp_TypeInfo;
extern TypeInfo CameraU5BU5D_t514_il2cpp_TypeInfo;
extern TypeInfo Camera_t7_il2cpp_TypeInfo;
extern TypeInfo Vector3_t6_il2cpp_TypeInfo;
extern TypeInfo Mathf_t270_il2cpp_TypeInfo;
// UnityEngine.Input
#include "UnityEngine_UnityEngine_InputMethodDeclarations.h"
// UnityEngine.Camera
#include "UnityEngine_UnityEngine_CameraMethodDeclarations.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_RectMethodDeclarations.h"
// UnityEngine.Component
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
// UnityEngine.GUILayer
#include "UnityEngine_UnityEngine_GUILayerMethodDeclarations.h"
// UnityEngine.Ray
#include "UnityEngine_UnityEngine_RayMethodDeclarations.h"
// UnityEngine.Mathf
#include "UnityEngine_UnityEngine_MathfMethodDeclarations.h"
extern Il2CppType HitInfoU5BU5D_t644_0_0_0;
extern Il2CppType CameraU5BU5D_t514_0_0_0;
extern MethodInfo Input_get_mousePosition_m52_MethodInfo;
extern MethodInfo Camera_get_allCamerasCount_m2647_MethodInfo;
extern MethodInfo Camera_GetAllCameras_m2648_MethodInfo;
extern MethodInfo Camera_get_targetTexture_m2643_MethodInfo;
extern MethodInfo Camera_get_pixelRect_m2642_MethodInfo;
extern MethodInfo Rect_Contains_m2471_MethodInfo;
extern MethodInfo Object_op_Implicit_m42_MethodInfo;
extern MethodInfo GUILayer_HitTest_m2232_MethodInfo;
extern MethodInfo Component_get_gameObject_m1348_MethodInfo;
extern MethodInfo Camera_get_eventMask_m2640_MethodInfo;
extern MethodInfo Camera_ScreenPointToRay_m1422_MethodInfo;
extern MethodInfo Ray_get_direction_m1426_MethodInfo;
extern MethodInfo Mathf_Approximately_m1400_MethodInfo;
extern MethodInfo Camera_get_farClipPlane_m1423_MethodInfo;
extern MethodInfo Camera_get_nearClipPlane_m1424_MethodInfo;
extern MethodInfo Mathf_Abs_m1357_MethodInfo;
extern MethodInfo Camera_get_cullingMask_m1437_MethodInfo;
extern MethodInfo Camera_RaycastTry_m2652_MethodInfo;
extern MethodInfo Camera_get_clearFlags_m2644_MethodInfo;
extern MethodInfo Camera_RaycastTry2D_m2654_MethodInfo;
extern MethodInfo SendMouseEvents_SendEvents_m3222_MethodInfo;
extern MethodInfo Input_GetMouseButtonDown_m57_MethodInfo;
extern MethodInfo Input_GetMouseButton_m1418_MethodInfo;
struct Component_t15;
// UnityEngine.Component
#include "UnityEngine_UnityEngine_Component.h"
// UnityEngine.CastHelper`1<UnityEngine.GUILayer>
#include "UnityEngine_UnityEngine_CastHelper_1_gen_12.h"
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
// Declaration !!0 UnityEngine.Component::GetComponent<UnityEngine.GUILayer>()
// !!0 UnityEngine.Component::GetComponent<UnityEngine.GUILayer>()
#define Component_GetComponent_TisGUILayer_t456_m3555(__this, method) (( GUILayer_t456 * (*) (Component_t15 *, MethodInfo*))Component_GetComponent_TisObject_t_m36_gshared)(__this, method)
extern Il2CppGenericMethod Component_GetComponent_TisGUILayer_t456_m3555_GenericMethod;


// System.Void UnityEngine.SendMouseEvents::.cctor()
extern MethodInfo SendMouseEvents__cctor_m3220_MethodInfo;
extern TypeInfo* HitInfoU5BU5D_t644_il2cpp_TypeInfo_var;
extern "C" void SendMouseEvents__cctor_m3220 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	static bool SendMouseEvents__cctor_m3220_init;
	if (!SendMouseEvents__cctor_m3220_init)
	{
		HitInfoU5BU5D_t644_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&HitInfoU5BU5D_t644_0_0_0);
		SendMouseEvents__cctor_m3220_init = true;
	}
	HitInfo_t643  V_0 = {0};
	HitInfo_t643  V_1 = {0};
	HitInfo_t643  V_2 = {0};
	HitInfo_t643  V_3 = {0};
	HitInfo_t643  V_4 = {0};
	HitInfo_t643  V_5 = {0};
	HitInfo_t643  V_6 = {0};
	HitInfo_t643  V_7 = {0};
	HitInfo_t643  V_8 = {0};
	{
		HitInfoU5BU5D_t644* L_0 = ((HitInfoU5BU5D_t644*)SZArrayNew(HitInfoU5BU5D_t644_il2cpp_TypeInfo_var, 3));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		Initobj (InitializedTypeInfo(&HitInfo_t643_il2cpp_TypeInfo), (&V_0));
		HitInfo_t643  L_1 = V_0;
		*((HitInfo_t643 *)(HitInfo_t643 *)SZArrayLdElema(L_0, 0)) = L_1;
		HitInfoU5BU5D_t644* L_2 = L_0;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		Initobj (InitializedTypeInfo(&HitInfo_t643_il2cpp_TypeInfo), (&V_1));
		HitInfo_t643  L_3 = V_1;
		*((HitInfo_t643 *)(HitInfo_t643 *)SZArrayLdElema(L_2, 1)) = L_3;
		HitInfoU5BU5D_t644* L_4 = L_2;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 2);
		Initobj (InitializedTypeInfo(&HitInfo_t643_il2cpp_TypeInfo), (&V_2));
		HitInfo_t643  L_5 = V_2;
		*((HitInfo_t643 *)(HitInfo_t643 *)SZArrayLdElema(L_4, 2)) = L_5;
		((SendMouseEvents_t645_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t645_il2cpp_TypeInfo)->static_fields)->___m_LastHit_3 = L_4;
		HitInfoU5BU5D_t644* L_6 = ((HitInfoU5BU5D_t644*)SZArrayNew(HitInfoU5BU5D_t644_il2cpp_TypeInfo_var, 3));
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 0);
		Initobj (InitializedTypeInfo(&HitInfo_t643_il2cpp_TypeInfo), (&V_3));
		HitInfo_t643  L_7 = V_3;
		*((HitInfo_t643 *)(HitInfo_t643 *)SZArrayLdElema(L_6, 0)) = L_7;
		HitInfoU5BU5D_t644* L_8 = L_6;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 1);
		Initobj (InitializedTypeInfo(&HitInfo_t643_il2cpp_TypeInfo), (&V_4));
		HitInfo_t643  L_9 = V_4;
		*((HitInfo_t643 *)(HitInfo_t643 *)SZArrayLdElema(L_8, 1)) = L_9;
		HitInfoU5BU5D_t644* L_10 = L_8;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 2);
		Initobj (InitializedTypeInfo(&HitInfo_t643_il2cpp_TypeInfo), (&V_5));
		HitInfo_t643  L_11 = V_5;
		*((HitInfo_t643 *)(HitInfo_t643 *)SZArrayLdElema(L_10, 2)) = L_11;
		((SendMouseEvents_t645_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t645_il2cpp_TypeInfo)->static_fields)->___m_MouseDownHit_4 = L_10;
		HitInfoU5BU5D_t644* L_12 = ((HitInfoU5BU5D_t644*)SZArrayNew(HitInfoU5BU5D_t644_il2cpp_TypeInfo_var, 3));
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 0);
		Initobj (InitializedTypeInfo(&HitInfo_t643_il2cpp_TypeInfo), (&V_6));
		HitInfo_t643  L_13 = V_6;
		*((HitInfo_t643 *)(HitInfo_t643 *)SZArrayLdElema(L_12, 0)) = L_13;
		HitInfoU5BU5D_t644* L_14 = L_12;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, 1);
		Initobj (InitializedTypeInfo(&HitInfo_t643_il2cpp_TypeInfo), (&V_7));
		HitInfo_t643  L_15 = V_7;
		*((HitInfo_t643 *)(HitInfo_t643 *)SZArrayLdElema(L_14, 1)) = L_15;
		HitInfoU5BU5D_t644* L_16 = L_14;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, 2);
		Initobj (InitializedTypeInfo(&HitInfo_t643_il2cpp_TypeInfo), (&V_8));
		HitInfo_t643  L_17 = V_8;
		*((HitInfo_t643 *)(HitInfo_t643 *)SZArrayLdElema(L_16, 2)) = L_17;
		((SendMouseEvents_t645_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t645_il2cpp_TypeInfo)->static_fields)->___m_CurrentHit_5 = L_16;
		return;
	}
}
// System.Void UnityEngine.SendMouseEvents::DoSendMouseEvents(System.Int32,System.Int32)
extern MethodInfo SendMouseEvents_DoSendMouseEvents_m3221_MethodInfo;
extern TypeInfo* CameraU5BU5D_t514_il2cpp_TypeInfo_var;
extern MethodInfo* Component_GetComponent_TisGUILayer_t456_m3555_MethodInfo_var;
extern "C" void SendMouseEvents_DoSendMouseEvents_m3221 (Object_t * __this /* static, unused */, int32_t ___mouseUsed, int32_t ___skipRTCameras, MethodInfo* method)
{
	static bool SendMouseEvents_DoSendMouseEvents_m3221_init;
	if (!SendMouseEvents_DoSendMouseEvents_m3221_init)
	{
		CameraU5BU5D_t514_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&CameraU5BU5D_t514_0_0_0);
		Component_GetComponent_TisGUILayer_t456_m3555_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Component_GetComponent_TisGUILayer_t456_m3555_GenericMethod);
		SendMouseEvents_DoSendMouseEvents_m3221_init = true;
	}
	Vector3_t6  V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Camera_t7 * V_3 = {0};
	CameraU5BU5D_t514* V_4 = {0};
	int32_t V_5 = 0;
	Rect_t141  V_6 = {0};
	GUILayer_t456 * V_7 = {0};
	GUIElement_t455 * V_8 = {0};
	Ray_t279  V_9 = {0};
	float V_10 = 0.0f;
	float V_11 = 0.0f;
	GameObject_t10 * V_12 = {0};
	GameObject_t10 * V_13 = {0};
	int32_t V_14 = 0;
	HitInfo_t643  V_15 = {0};
	Vector3_t6  V_16 = {0};
	float G_B23_0 = 0.0f;
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Input_t21_il2cpp_TypeInfo));
		Vector3_t6  L_0 = Input_get_mousePosition_m52(NULL /*static, unused*/, /*hidden argument*/&Input_get_mousePosition_m52_MethodInfo);
		V_0 = L_0;
		int32_t L_1 = Camera_get_allCamerasCount_m2647(NULL /*static, unused*/, /*hidden argument*/&Camera_get_allCamerasCount_m2647_MethodInfo);
		V_1 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&SendMouseEvents_t645_il2cpp_TypeInfo));
		CameraU5BU5D_t514* L_2 = ((SendMouseEvents_t645_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t645_il2cpp_TypeInfo)->static_fields)->___m_Cameras_6;
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&SendMouseEvents_t645_il2cpp_TypeInfo));
		CameraU5BU5D_t514* L_3 = ((SendMouseEvents_t645_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t645_il2cpp_TypeInfo)->static_fields)->___m_Cameras_6;
		NullCheck(L_3);
		int32_t L_4 = V_1;
		if ((((int32_t)(((int32_t)(((Array_t *)L_3)->max_length)))) == ((int32_t)L_4)))
		{
			goto IL_002e;
		}
	}

IL_0023:
	{
		int32_t L_5 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&SendMouseEvents_t645_il2cpp_TypeInfo));
		((SendMouseEvents_t645_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t645_il2cpp_TypeInfo)->static_fields)->___m_Cameras_6 = ((CameraU5BU5D_t514*)SZArrayNew(CameraU5BU5D_t514_il2cpp_TypeInfo_var, L_5));
	}

IL_002e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&SendMouseEvents_t645_il2cpp_TypeInfo));
		CameraU5BU5D_t514* L_6 = ((SendMouseEvents_t645_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t645_il2cpp_TypeInfo)->static_fields)->___m_Cameras_6;
		Camera_GetAllCameras_m2648(NULL /*static, unused*/, L_6, /*hidden argument*/&Camera_GetAllCameras_m2648_MethodInfo);
		V_2 = 0;
		goto IL_005e;
	}

IL_0040:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&SendMouseEvents_t645_il2cpp_TypeInfo));
		HitInfoU5BU5D_t644* L_7 = ((SendMouseEvents_t645_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t645_il2cpp_TypeInfo)->static_fields)->___m_CurrentHit_5;
		int32_t L_8 = V_2;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		Initobj (InitializedTypeInfo(&HitInfo_t643_il2cpp_TypeInfo), (&V_15));
		HitInfo_t643  L_9 = V_15;
		*((HitInfo_t643 *)(HitInfo_t643 *)SZArrayLdElema(L_7, L_8)) = L_9;
		int32_t L_10 = V_2;
		V_2 = ((int32_t)((int32_t)L_10+(int32_t)1));
	}

IL_005e:
	{
		int32_t L_11 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&SendMouseEvents_t645_il2cpp_TypeInfo));
		HitInfoU5BU5D_t644* L_12 = ((SendMouseEvents_t645_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t645_il2cpp_TypeInfo)->static_fields)->___m_CurrentHit_5;
		NullCheck(L_12);
		if ((((int32_t)L_11) < ((int32_t)(((int32_t)(((Array_t *)L_12)->max_length))))))
		{
			goto IL_0040;
		}
	}
	{
		int32_t L_13 = ___mouseUsed;
		if (L_13)
		{
			goto IL_02bf;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&SendMouseEvents_t645_il2cpp_TypeInfo));
		CameraU5BU5D_t514* L_14 = ((SendMouseEvents_t645_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t645_il2cpp_TypeInfo)->static_fields)->___m_Cameras_6;
		V_4 = L_14;
		V_5 = 0;
		goto IL_02b4;
	}

IL_0080:
	{
		CameraU5BU5D_t514* L_15 = V_4;
		int32_t L_16 = V_5;
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, L_16);
		int32_t L_17 = L_16;
		V_3 = (*(Camera_t7 **)(Camera_t7 **)SZArrayLdElema(L_15, L_17));
		Camera_t7 * L_18 = V_3;
		bool L_19 = Object_op_Equality_m1267(NULL /*static, unused*/, L_18, (Object_t20 *)NULL, /*hidden argument*/&Object_op_Equality_m1267_MethodInfo);
		if (L_19)
		{
			goto IL_00a9;
		}
	}
	{
		int32_t L_20 = ___skipRTCameras;
		if (!L_20)
		{
			goto IL_00ae;
		}
	}
	{
		Camera_t7 * L_21 = V_3;
		NullCheck(L_21);
		RenderTexture_t453 * L_22 = Camera_get_targetTexture_m2643(L_21, /*hidden argument*/&Camera_get_targetTexture_m2643_MethodInfo);
		bool L_23 = Object_op_Inequality_m1268(NULL /*static, unused*/, L_22, (Object_t20 *)NULL, /*hidden argument*/&Object_op_Inequality_m1268_MethodInfo);
		if (!L_23)
		{
			goto IL_00ae;
		}
	}

IL_00a9:
	{
		goto IL_02ae;
	}

IL_00ae:
	{
		Camera_t7 * L_24 = V_3;
		NullCheck(L_24);
		Rect_t141  L_25 = Camera_get_pixelRect_m2642(L_24, /*hidden argument*/&Camera_get_pixelRect_m2642_MethodInfo);
		V_6 = L_25;
		Vector3_t6  L_26 = V_0;
		bool L_27 = Rect_Contains_m2471((&V_6), L_26, /*hidden argument*/&Rect_Contains_m2471_MethodInfo);
		if (L_27)
		{
			goto IL_00c8;
		}
	}
	{
		goto IL_02ae;
	}

IL_00c8:
	{
		Camera_t7 * L_28 = V_3;
		NullCheck(L_28);
		GUILayer_t456 * L_29 = Component_GetComponent_TisGUILayer_t456_m3555(L_28, /*hidden argument*/Component_GetComponent_TisGUILayer_t456_m3555_MethodInfo_var);
		V_7 = L_29;
		GUILayer_t456 * L_30 = V_7;
		bool L_31 = Object_op_Implicit_m42(NULL /*static, unused*/, L_30, /*hidden argument*/&Object_op_Implicit_m42_MethodInfo);
		if (!L_31)
		{
			goto IL_0141;
		}
	}
	{
		GUILayer_t456 * L_32 = V_7;
		Vector3_t6  L_33 = V_0;
		NullCheck(L_32);
		GUIElement_t455 * L_34 = GUILayer_HitTest_m2232(L_32, L_33, /*hidden argument*/&GUILayer_HitTest_m2232_MethodInfo);
		V_8 = L_34;
		GUIElement_t455 * L_35 = V_8;
		bool L_36 = Object_op_Implicit_m42(NULL /*static, unused*/, L_35, /*hidden argument*/&Object_op_Implicit_m42_MethodInfo);
		if (!L_36)
		{
			goto IL_011f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&SendMouseEvents_t645_il2cpp_TypeInfo));
		HitInfoU5BU5D_t644* L_37 = ((SendMouseEvents_t645_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t645_il2cpp_TypeInfo)->static_fields)->___m_CurrentHit_5;
		NullCheck(L_37);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_37, 0);
		GUIElement_t455 * L_38 = V_8;
		NullCheck(L_38);
		GameObject_t10 * L_39 = Component_get_gameObject_m1348(L_38, /*hidden argument*/&Component_get_gameObject_m1348_MethodInfo);
		((HitInfo_t643 *)(HitInfo_t643 *)SZArrayLdElema(L_37, 0))->___target_0 = L_39;
		HitInfoU5BU5D_t644* L_40 = ((SendMouseEvents_t645_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t645_il2cpp_TypeInfo)->static_fields)->___m_CurrentHit_5;
		NullCheck(L_40);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_40, 0);
		Camera_t7 * L_41 = V_3;
		((HitInfo_t643 *)(HitInfo_t643 *)SZArrayLdElema(L_40, 0))->___camera_1 = L_41;
		goto IL_0141;
	}

IL_011f:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&SendMouseEvents_t645_il2cpp_TypeInfo));
		HitInfoU5BU5D_t644* L_42 = ((SendMouseEvents_t645_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t645_il2cpp_TypeInfo)->static_fields)->___m_CurrentHit_5;
		NullCheck(L_42);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_42, 0);
		((HitInfo_t643 *)(HitInfo_t643 *)SZArrayLdElema(L_42, 0))->___target_0 = (GameObject_t10 *)NULL;
		HitInfoU5BU5D_t644* L_43 = ((SendMouseEvents_t645_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t645_il2cpp_TypeInfo)->static_fields)->___m_CurrentHit_5;
		NullCheck(L_43);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_43, 0);
		((HitInfo_t643 *)(HitInfo_t643 *)SZArrayLdElema(L_43, 0))->___camera_1 = (Camera_t7 *)NULL;
	}

IL_0141:
	{
		Camera_t7 * L_44 = V_3;
		NullCheck(L_44);
		int32_t L_45 = Camera_get_eventMask_m2640(L_44, /*hidden argument*/&Camera_get_eventMask_m2640_MethodInfo);
		if (L_45)
		{
			goto IL_0151;
		}
	}
	{
		goto IL_02ae;
	}

IL_0151:
	{
		Camera_t7 * L_46 = V_3;
		Vector3_t6  L_47 = V_0;
		NullCheck(L_46);
		Ray_t279  L_48 = Camera_ScreenPointToRay_m1422(L_46, L_47, /*hidden argument*/&Camera_ScreenPointToRay_m1422_MethodInfo);
		V_9 = L_48;
		Vector3_t6  L_49 = Ray_get_direction_m1426((&V_9), /*hidden argument*/&Ray_get_direction_m1426_MethodInfo);
		V_16 = L_49;
		float L_50 = ((&V_16)->___z_3);
		V_10 = L_50;
		float L_51 = V_10;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t270_il2cpp_TypeInfo));
		bool L_52 = Mathf_Approximately_m1400(NULL /*static, unused*/, (0.0f), L_51, /*hidden argument*/&Mathf_Approximately_m1400_MethodInfo);
		if (!L_52)
		{
			goto IL_0187;
		}
	}
	{
		G_B23_0 = (std::numeric_limits<float>::infinity());
		goto IL_019c;
	}

IL_0187:
	{
		Camera_t7 * L_53 = V_3;
		NullCheck(L_53);
		float L_54 = Camera_get_farClipPlane_m1423(L_53, /*hidden argument*/&Camera_get_farClipPlane_m1423_MethodInfo);
		Camera_t7 * L_55 = V_3;
		NullCheck(L_55);
		float L_56 = Camera_get_nearClipPlane_m1424(L_55, /*hidden argument*/&Camera_get_nearClipPlane_m1424_MethodInfo);
		float L_57 = V_10;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t270_il2cpp_TypeInfo));
		float L_58 = fabsf(((float)((float)((float)((float)L_54-(float)L_56))/(float)L_57)));
		G_B23_0 = L_58;
	}

IL_019c:
	{
		V_11 = G_B23_0;
		Camera_t7 * L_59 = V_3;
		Ray_t279  L_60 = V_9;
		float L_61 = V_11;
		Camera_t7 * L_62 = V_3;
		NullCheck(L_62);
		int32_t L_63 = Camera_get_cullingMask_m1437(L_62, /*hidden argument*/&Camera_get_cullingMask_m1437_MethodInfo);
		Camera_t7 * L_64 = V_3;
		NullCheck(L_64);
		int32_t L_65 = Camera_get_eventMask_m2640(L_64, /*hidden argument*/&Camera_get_eventMask_m2640_MethodInfo);
		NullCheck(L_59);
		GameObject_t10 * L_66 = Camera_RaycastTry_m2652(L_59, L_60, L_61, ((int32_t)((int32_t)L_63&(int32_t)L_65)), /*hidden argument*/&Camera_RaycastTry_m2652_MethodInfo);
		V_12 = L_66;
		GameObject_t10 * L_67 = V_12;
		bool L_68 = Object_op_Inequality_m1268(NULL /*static, unused*/, L_67, (Object_t20 *)NULL, /*hidden argument*/&Object_op_Inequality_m1268_MethodInfo);
		if (!L_68)
		{
			goto IL_01ec;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&SendMouseEvents_t645_il2cpp_TypeInfo));
		HitInfoU5BU5D_t644* L_69 = ((SendMouseEvents_t645_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t645_il2cpp_TypeInfo)->static_fields)->___m_CurrentHit_5;
		NullCheck(L_69);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_69, 1);
		GameObject_t10 * L_70 = V_12;
		((HitInfo_t643 *)(HitInfo_t643 *)SZArrayLdElema(L_69, 1))->___target_0 = L_70;
		HitInfoU5BU5D_t644* L_71 = ((SendMouseEvents_t645_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t645_il2cpp_TypeInfo)->static_fields)->___m_CurrentHit_5;
		NullCheck(L_71);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_71, 1);
		Camera_t7 * L_72 = V_3;
		((HitInfo_t643 *)(HitInfo_t643 *)SZArrayLdElema(L_71, 1))->___camera_1 = L_72;
		goto IL_0226;
	}

IL_01ec:
	{
		Camera_t7 * L_73 = V_3;
		NullCheck(L_73);
		int32_t L_74 = Camera_get_clearFlags_m2644(L_73, /*hidden argument*/&Camera_get_clearFlags_m2644_MethodInfo);
		if ((((int32_t)L_74) == ((int32_t)1)))
		{
			goto IL_0204;
		}
	}
	{
		Camera_t7 * L_75 = V_3;
		NullCheck(L_75);
		int32_t L_76 = Camera_get_clearFlags_m2644(L_75, /*hidden argument*/&Camera_get_clearFlags_m2644_MethodInfo);
		if ((!(((uint32_t)L_76) == ((uint32_t)2))))
		{
			goto IL_0226;
		}
	}

IL_0204:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&SendMouseEvents_t645_il2cpp_TypeInfo));
		HitInfoU5BU5D_t644* L_77 = ((SendMouseEvents_t645_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t645_il2cpp_TypeInfo)->static_fields)->___m_CurrentHit_5;
		NullCheck(L_77);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_77, 1);
		((HitInfo_t643 *)(HitInfo_t643 *)SZArrayLdElema(L_77, 1))->___target_0 = (GameObject_t10 *)NULL;
		HitInfoU5BU5D_t644* L_78 = ((SendMouseEvents_t645_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t645_il2cpp_TypeInfo)->static_fields)->___m_CurrentHit_5;
		NullCheck(L_78);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_78, 1);
		((HitInfo_t643 *)(HitInfo_t643 *)SZArrayLdElema(L_78, 1))->___camera_1 = (Camera_t7 *)NULL;
	}

IL_0226:
	{
		Camera_t7 * L_79 = V_3;
		Ray_t279  L_80 = V_9;
		float L_81 = V_11;
		Camera_t7 * L_82 = V_3;
		NullCheck(L_82);
		int32_t L_83 = Camera_get_cullingMask_m1437(L_82, /*hidden argument*/&Camera_get_cullingMask_m1437_MethodInfo);
		Camera_t7 * L_84 = V_3;
		NullCheck(L_84);
		int32_t L_85 = Camera_get_eventMask_m2640(L_84, /*hidden argument*/&Camera_get_eventMask_m2640_MethodInfo);
		NullCheck(L_79);
		GameObject_t10 * L_86 = Camera_RaycastTry2D_m2654(L_79, L_80, L_81, ((int32_t)((int32_t)L_83&(int32_t)L_85)), /*hidden argument*/&Camera_RaycastTry2D_m2654_MethodInfo);
		V_13 = L_86;
		GameObject_t10 * L_87 = V_13;
		bool L_88 = Object_op_Inequality_m1268(NULL /*static, unused*/, L_87, (Object_t20 *)NULL, /*hidden argument*/&Object_op_Inequality_m1268_MethodInfo);
		if (!L_88)
		{
			goto IL_0274;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&SendMouseEvents_t645_il2cpp_TypeInfo));
		HitInfoU5BU5D_t644* L_89 = ((SendMouseEvents_t645_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t645_il2cpp_TypeInfo)->static_fields)->___m_CurrentHit_5;
		NullCheck(L_89);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_89, 2);
		GameObject_t10 * L_90 = V_13;
		((HitInfo_t643 *)(HitInfo_t643 *)SZArrayLdElema(L_89, 2))->___target_0 = L_90;
		HitInfoU5BU5D_t644* L_91 = ((SendMouseEvents_t645_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t645_il2cpp_TypeInfo)->static_fields)->___m_CurrentHit_5;
		NullCheck(L_91);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_91, 2);
		Camera_t7 * L_92 = V_3;
		((HitInfo_t643 *)(HitInfo_t643 *)SZArrayLdElema(L_91, 2))->___camera_1 = L_92;
		goto IL_02ae;
	}

IL_0274:
	{
		Camera_t7 * L_93 = V_3;
		NullCheck(L_93);
		int32_t L_94 = Camera_get_clearFlags_m2644(L_93, /*hidden argument*/&Camera_get_clearFlags_m2644_MethodInfo);
		if ((((int32_t)L_94) == ((int32_t)1)))
		{
			goto IL_028c;
		}
	}
	{
		Camera_t7 * L_95 = V_3;
		NullCheck(L_95);
		int32_t L_96 = Camera_get_clearFlags_m2644(L_95, /*hidden argument*/&Camera_get_clearFlags_m2644_MethodInfo);
		if ((!(((uint32_t)L_96) == ((uint32_t)2))))
		{
			goto IL_02ae;
		}
	}

IL_028c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&SendMouseEvents_t645_il2cpp_TypeInfo));
		HitInfoU5BU5D_t644* L_97 = ((SendMouseEvents_t645_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t645_il2cpp_TypeInfo)->static_fields)->___m_CurrentHit_5;
		NullCheck(L_97);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_97, 2);
		((HitInfo_t643 *)(HitInfo_t643 *)SZArrayLdElema(L_97, 2))->___target_0 = (GameObject_t10 *)NULL;
		HitInfoU5BU5D_t644* L_98 = ((SendMouseEvents_t645_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t645_il2cpp_TypeInfo)->static_fields)->___m_CurrentHit_5;
		NullCheck(L_98);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_98, 2);
		((HitInfo_t643 *)(HitInfo_t643 *)SZArrayLdElema(L_98, 2))->___camera_1 = (Camera_t7 *)NULL;
	}

IL_02ae:
	{
		int32_t L_99 = V_5;
		V_5 = ((int32_t)((int32_t)L_99+(int32_t)1));
	}

IL_02b4:
	{
		int32_t L_100 = V_5;
		CameraU5BU5D_t514* L_101 = V_4;
		NullCheck(L_101);
		if ((((int32_t)L_100) < ((int32_t)(((int32_t)(((Array_t *)L_101)->max_length))))))
		{
			goto IL_0080;
		}
	}

IL_02bf:
	{
		V_14 = 0;
		goto IL_02e5;
	}

IL_02c7:
	{
		int32_t L_102 = V_14;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&SendMouseEvents_t645_il2cpp_TypeInfo));
		HitInfoU5BU5D_t644* L_103 = ((SendMouseEvents_t645_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t645_il2cpp_TypeInfo)->static_fields)->___m_CurrentHit_5;
		int32_t L_104 = V_14;
		NullCheck(L_103);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_103, L_104);
		SendMouseEvents_SendEvents_m3222(NULL /*static, unused*/, L_102, (*(HitInfo_t643 *)((HitInfo_t643 *)(HitInfo_t643 *)SZArrayLdElema(L_103, L_104))), /*hidden argument*/&SendMouseEvents_SendEvents_m3222_MethodInfo);
		int32_t L_105 = V_14;
		V_14 = ((int32_t)((int32_t)L_105+(int32_t)1));
	}

IL_02e5:
	{
		int32_t L_106 = V_14;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&SendMouseEvents_t645_il2cpp_TypeInfo));
		HitInfoU5BU5D_t644* L_107 = ((SendMouseEvents_t645_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t645_il2cpp_TypeInfo)->static_fields)->___m_CurrentHit_5;
		NullCheck(L_107);
		if ((((int32_t)L_106) < ((int32_t)(((int32_t)(((Array_t *)L_107)->max_length))))))
		{
			goto IL_02c7;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.SendMouseEvents::SendEvents(System.Int32,UnityEngine.SendMouseEvents/HitInfo)
extern "C" void SendMouseEvents_SendEvents_m3222 (Object_t * __this /* static, unused */, int32_t ___i, HitInfo_t643  ___hit, MethodInfo* method)
{
	bool V_0 = false;
	bool V_1 = false;
	HitInfo_t643  V_2 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Input_t21_il2cpp_TypeInfo));
		bool L_0 = Input_GetMouseButtonDown_m57(NULL /*static, unused*/, 0, /*hidden argument*/&Input_GetMouseButtonDown_m57_MethodInfo);
		V_0 = L_0;
		bool L_1 = Input_GetMouseButton_m1418(NULL /*static, unused*/, 0, /*hidden argument*/&Input_GetMouseButton_m1418_MethodInfo);
		V_1 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_004a;
		}
	}
	{
		HitInfo_t643  L_3 = ___hit;
		bool L_4 = HitInfo_op_Implicit_m3219(NULL /*static, unused*/, L_3, /*hidden argument*/&HitInfo_op_Implicit_m3219_MethodInfo);
		if (!L_4)
		{
			goto IL_0045;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&SendMouseEvents_t645_il2cpp_TypeInfo));
		HitInfoU5BU5D_t644* L_5 = ((SendMouseEvents_t645_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t645_il2cpp_TypeInfo)->static_fields)->___m_MouseDownHit_4;
		int32_t L_6 = ___i;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		HitInfo_t643  L_7 = ___hit;
		*((HitInfo_t643 *)(HitInfo_t643 *)SZArrayLdElema(L_5, L_6)) = L_7;
		HitInfoU5BU5D_t644* L_8 = ((SendMouseEvents_t645_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t645_il2cpp_TypeInfo)->static_fields)->___m_MouseDownHit_4;
		int32_t L_9 = ___i;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, L_9);
		HitInfo_SendMessage_m3217(((HitInfo_t643 *)(HitInfo_t643 *)SZArrayLdElema(L_8, L_9)), (String_t*) &_stringLiteral301, /*hidden argument*/&HitInfo_SendMessage_m3217_MethodInfo);
	}

IL_0045:
	{
		goto IL_00fc;
	}

IL_004a:
	{
		bool L_10 = V_1;
		if (L_10)
		{
			goto IL_00cd;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&SendMouseEvents_t645_il2cpp_TypeInfo));
		HitInfoU5BU5D_t644* L_11 = ((SendMouseEvents_t645_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t645_il2cpp_TypeInfo)->static_fields)->___m_MouseDownHit_4;
		int32_t L_12 = ___i;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, L_12);
		bool L_13 = HitInfo_op_Implicit_m3219(NULL /*static, unused*/, (*(HitInfo_t643 *)((HitInfo_t643 *)(HitInfo_t643 *)SZArrayLdElema(L_11, L_12))), /*hidden argument*/&HitInfo_op_Implicit_m3219_MethodInfo);
		if (!L_13)
		{
			goto IL_00c8;
		}
	}
	{
		HitInfo_t643  L_14 = ___hit;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&SendMouseEvents_t645_il2cpp_TypeInfo));
		HitInfoU5BU5D_t644* L_15 = ((SendMouseEvents_t645_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t645_il2cpp_TypeInfo)->static_fields)->___m_MouseDownHit_4;
		int32_t L_16 = ___i;
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, L_16);
		bool L_17 = HitInfo_Compare_m3218(NULL /*static, unused*/, L_14, (*(HitInfo_t643 *)((HitInfo_t643 *)(HitInfo_t643 *)SZArrayLdElema(L_15, L_16))), /*hidden argument*/&HitInfo_Compare_m3218_MethodInfo);
		if (!L_17)
		{
			goto IL_009a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&SendMouseEvents_t645_il2cpp_TypeInfo));
		HitInfoU5BU5D_t644* L_18 = ((SendMouseEvents_t645_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t645_il2cpp_TypeInfo)->static_fields)->___m_MouseDownHit_4;
		int32_t L_19 = ___i;
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, L_19);
		HitInfo_SendMessage_m3217(((HitInfo_t643 *)(HitInfo_t643 *)SZArrayLdElema(L_18, L_19)), (String_t*) &_stringLiteral302, /*hidden argument*/&HitInfo_SendMessage_m3217_MethodInfo);
	}

IL_009a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&SendMouseEvents_t645_il2cpp_TypeInfo));
		HitInfoU5BU5D_t644* L_20 = ((SendMouseEvents_t645_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t645_il2cpp_TypeInfo)->static_fields)->___m_MouseDownHit_4;
		int32_t L_21 = ___i;
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, L_21);
		HitInfo_SendMessage_m3217(((HitInfo_t643 *)(HitInfo_t643 *)SZArrayLdElema(L_20, L_21)), (String_t*) &_stringLiteral303, /*hidden argument*/&HitInfo_SendMessage_m3217_MethodInfo);
		HitInfoU5BU5D_t644* L_22 = ((SendMouseEvents_t645_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t645_il2cpp_TypeInfo)->static_fields)->___m_MouseDownHit_4;
		int32_t L_23 = ___i;
		NullCheck(L_22);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_22, L_23);
		Initobj (InitializedTypeInfo(&HitInfo_t643_il2cpp_TypeInfo), (&V_2));
		HitInfo_t643  L_24 = V_2;
		*((HitInfo_t643 *)(HitInfo_t643 *)SZArrayLdElema(L_22, L_23)) = L_24;
	}

IL_00c8:
	{
		goto IL_00fc;
	}

IL_00cd:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&SendMouseEvents_t645_il2cpp_TypeInfo));
		HitInfoU5BU5D_t644* L_25 = ((SendMouseEvents_t645_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t645_il2cpp_TypeInfo)->static_fields)->___m_MouseDownHit_4;
		int32_t L_26 = ___i;
		NullCheck(L_25);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_25, L_26);
		bool L_27 = HitInfo_op_Implicit_m3219(NULL /*static, unused*/, (*(HitInfo_t643 *)((HitInfo_t643 *)(HitInfo_t643 *)SZArrayLdElema(L_25, L_26))), /*hidden argument*/&HitInfo_op_Implicit_m3219_MethodInfo);
		if (!L_27)
		{
			goto IL_00fc;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&SendMouseEvents_t645_il2cpp_TypeInfo));
		HitInfoU5BU5D_t644* L_28 = ((SendMouseEvents_t645_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t645_il2cpp_TypeInfo)->static_fields)->___m_MouseDownHit_4;
		int32_t L_29 = ___i;
		NullCheck(L_28);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_28, L_29);
		HitInfo_SendMessage_m3217(((HitInfo_t643 *)(HitInfo_t643 *)SZArrayLdElema(L_28, L_29)), (String_t*) &_stringLiteral304, /*hidden argument*/&HitInfo_SendMessage_m3217_MethodInfo);
	}

IL_00fc:
	{
		HitInfo_t643  L_30 = ___hit;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&SendMouseEvents_t645_il2cpp_TypeInfo));
		HitInfoU5BU5D_t644* L_31 = ((SendMouseEvents_t645_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t645_il2cpp_TypeInfo)->static_fields)->___m_LastHit_3;
		int32_t L_32 = ___i;
		NullCheck(L_31);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_31, L_32);
		bool L_33 = HitInfo_Compare_m3218(NULL /*static, unused*/, L_30, (*(HitInfo_t643 *)((HitInfo_t643 *)(HitInfo_t643 *)SZArrayLdElema(L_31, L_32))), /*hidden argument*/&HitInfo_Compare_m3218_MethodInfo);
		if (!L_33)
		{
			goto IL_0133;
		}
	}
	{
		HitInfo_t643  L_34 = ___hit;
		bool L_35 = HitInfo_op_Implicit_m3219(NULL /*static, unused*/, L_34, /*hidden argument*/&HitInfo_op_Implicit_m3219_MethodInfo);
		if (!L_35)
		{
			goto IL_012e;
		}
	}
	{
		HitInfo_SendMessage_m3217((&___hit), (String_t*) &_stringLiteral305, /*hidden argument*/&HitInfo_SendMessage_m3217_MethodInfo);
	}

IL_012e:
	{
		goto IL_0185;
	}

IL_0133:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&SendMouseEvents_t645_il2cpp_TypeInfo));
		HitInfoU5BU5D_t644* L_36 = ((SendMouseEvents_t645_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t645_il2cpp_TypeInfo)->static_fields)->___m_LastHit_3;
		int32_t L_37 = ___i;
		NullCheck(L_36);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_36, L_37);
		bool L_38 = HitInfo_op_Implicit_m3219(NULL /*static, unused*/, (*(HitInfo_t643 *)((HitInfo_t643 *)(HitInfo_t643 *)SZArrayLdElema(L_36, L_37))), /*hidden argument*/&HitInfo_op_Implicit_m3219_MethodInfo);
		if (!L_38)
		{
			goto IL_0162;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&SendMouseEvents_t645_il2cpp_TypeInfo));
		HitInfoU5BU5D_t644* L_39 = ((SendMouseEvents_t645_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t645_il2cpp_TypeInfo)->static_fields)->___m_LastHit_3;
		int32_t L_40 = ___i;
		NullCheck(L_39);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_39, L_40);
		HitInfo_SendMessage_m3217(((HitInfo_t643 *)(HitInfo_t643 *)SZArrayLdElema(L_39, L_40)), (String_t*) &_stringLiteral306, /*hidden argument*/&HitInfo_SendMessage_m3217_MethodInfo);
	}

IL_0162:
	{
		HitInfo_t643  L_41 = ___hit;
		bool L_42 = HitInfo_op_Implicit_m3219(NULL /*static, unused*/, L_41, /*hidden argument*/&HitInfo_op_Implicit_m3219_MethodInfo);
		if (!L_42)
		{
			goto IL_0185;
		}
	}
	{
		HitInfo_SendMessage_m3217((&___hit), (String_t*) &_stringLiteral307, /*hidden argument*/&HitInfo_SendMessage_m3217_MethodInfo);
		HitInfo_SendMessage_m3217((&___hit), (String_t*) &_stringLiteral305, /*hidden argument*/&HitInfo_SendMessage_m3217_MethodInfo);
	}

IL_0185:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&SendMouseEvents_t645_il2cpp_TypeInfo));
		HitInfoU5BU5D_t644* L_43 = ((SendMouseEvents_t645_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t645_il2cpp_TypeInfo)->static_fields)->___m_LastHit_3;
		int32_t L_44 = ___i;
		NullCheck(L_43);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_43, L_44);
		HitInfo_t643  L_45 = ___hit;
		*((HitInfo_t643 *)(HitInfo_t643 *)SZArrayLdElema(L_43, L_44)) = L_45;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
// UnityEngine.SocialPlatforms.UserState
#include "UnityEngine_UnityEngine_SocialPlatforms_UserStateMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif
// UnityEngine.SocialPlatforms.UserScope
#include "UnityEngine_UnityEngine_SocialPlatforms_UserScopeMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif
// UnityEngine.SocialPlatforms.TimeScope
#include "UnityEngine_UnityEngine_SocialPlatforms_TimeScopeMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif



// System.Void UnityEngine.SocialPlatforms.Range::.ctor(System.Int32,System.Int32)
extern "C" void Range__ctor_m3223 (Range_t642 * __this, int32_t ___fromValue, int32_t ___valueCount, MethodInfo* method)
{
	{
		int32_t L_0 = ___fromValue;
		__this->___from_0 = L_0;
		int32_t L_1 = ___valueCount;
		__this->___count_1 = L_1;
		return;
	}
}
// UnityEngine.PropertyAttribute
#include "UnityEngine_UnityEngine_PropertyAttribute.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo PropertyAttribute_t649_il2cpp_TypeInfo;
// UnityEngine.PropertyAttribute
#include "UnityEngine_UnityEngine_PropertyAttributeMethodDeclarations.h"



// System.Void UnityEngine.PropertyAttribute::.ctor()
extern MethodInfo PropertyAttribute__ctor_m3224_MethodInfo;
extern "C" void PropertyAttribute__ctor_m3224 (PropertyAttribute_t649 * __this, MethodInfo* method)
{
	{
		Attribute__ctor_m3370(__this, /*hidden argument*/&Attribute__ctor_m3370_MethodInfo);
		return;
	}
}
// UnityEngine.TooltipAttribute
#include "UnityEngine_UnityEngine_TooltipAttribute.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo TooltipAttribute_t380_il2cpp_TypeInfo;
// UnityEngine.TooltipAttribute
#include "UnityEngine_UnityEngine_TooltipAttributeMethodDeclarations.h"



// System.Void UnityEngine.TooltipAttribute::.ctor(System.String)
extern MethodInfo TooltipAttribute__ctor_m2031_MethodInfo;
extern "C" void TooltipAttribute__ctor_m2031 (TooltipAttribute_t380 * __this, String_t* ___tooltip, MethodInfo* method)
{
	{
		PropertyAttribute__ctor_m3224(__this, /*hidden argument*/&PropertyAttribute__ctor_m3224_MethodInfo);
		String_t* L_0 = ___tooltip;
		__this->___tooltip_0 = L_0;
		return;
	}
}
// UnityEngine.SpaceAttribute
#include "UnityEngine_UnityEngine_SpaceAttribute.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo SpaceAttribute_t378_il2cpp_TypeInfo;
// UnityEngine.SpaceAttribute
#include "UnityEngine_UnityEngine_SpaceAttributeMethodDeclarations.h"



// System.Void UnityEngine.SpaceAttribute::.ctor(System.Single)
extern MethodInfo SpaceAttribute__ctor_m2027_MethodInfo;
extern "C" void SpaceAttribute__ctor_m2027 (SpaceAttribute_t378 * __this, float ___height, MethodInfo* method)
{
	{
		PropertyAttribute__ctor_m3224(__this, /*hidden argument*/&PropertyAttribute__ctor_m3224_MethodInfo);
		float L_0 = ___height;
		__this->___height_0 = L_0;
		return;
	}
}
// UnityEngine.RangeAttribute
#include "UnityEngine_UnityEngine_RangeAttribute.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo RangeAttribute_t369_il2cpp_TypeInfo;
// UnityEngine.RangeAttribute
#include "UnityEngine_UnityEngine_RangeAttributeMethodDeclarations.h"



// System.Void UnityEngine.RangeAttribute::.ctor(System.Single,System.Single)
extern MethodInfo RangeAttribute__ctor_m2019_MethodInfo;
extern "C" void RangeAttribute__ctor_m2019 (RangeAttribute_t369 * __this, float ___min, float ___max, MethodInfo* method)
{
	{
		PropertyAttribute__ctor_m3224(__this, /*hidden argument*/&PropertyAttribute__ctor_m3224_MethodInfo);
		float L_0 = ___min;
		__this->___min_0 = L_0;
		float L_1 = ___max;
		__this->___max_1 = L_1;
		return;
	}
}
// UnityEngine.TextAreaAttribute
#include "UnityEngine_UnityEngine_TextAreaAttribute.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo TextAreaAttribute_t384_il2cpp_TypeInfo;
// UnityEngine.TextAreaAttribute
#include "UnityEngine_UnityEngine_TextAreaAttributeMethodDeclarations.h"



// System.Void UnityEngine.TextAreaAttribute::.ctor(System.Int32,System.Int32)
extern MethodInfo TextAreaAttribute__ctor_m2034_MethodInfo;
extern "C" void TextAreaAttribute__ctor_m2034 (TextAreaAttribute_t384 * __this, int32_t ___minLines, int32_t ___maxLines, MethodInfo* method)
{
	{
		PropertyAttribute__ctor_m3224(__this, /*hidden argument*/&PropertyAttribute__ctor_m3224_MethodInfo);
		int32_t L_0 = ___minLines;
		__this->___minLines_0 = L_0;
		int32_t L_1 = ___maxLines;
		__this->___maxLines_1 = L_1;
		return;
	}
}
// UnityEngine.SelectionBaseAttribute
#include "UnityEngine_UnityEngine_SelectionBaseAttribute.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo SelectionBaseAttribute_t379_il2cpp_TypeInfo;
// UnityEngine.SelectionBaseAttribute
#include "UnityEngine_UnityEngine_SelectionBaseAttributeMethodDeclarations.h"



// System.Void UnityEngine.SelectionBaseAttribute::.ctor()
extern MethodInfo SelectionBaseAttribute__ctor_m2030_MethodInfo;
extern "C" void SelectionBaseAttribute__ctor_m2030 (SelectionBaseAttribute_t379 * __this, MethodInfo* method)
{
	{
		Attribute__ctor_m3370(__this, /*hidden argument*/&Attribute__ctor_m3370_MethodInfo);
		return;
	}
}
// UnityEngine.SliderState
#include "UnityEngine_UnityEngine_SliderState.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo SliderState_t650_il2cpp_TypeInfo;
// UnityEngine.SliderState
#include "UnityEngine_UnityEngine_SliderStateMethodDeclarations.h"



// System.Void UnityEngine.SliderState::.ctor()
extern MethodInfo SliderState__ctor_m3225_MethodInfo;
extern "C" void SliderState__ctor_m3225 (SliderState_t650 * __this, MethodInfo* method)
{
	{
		Object__ctor_m1289(__this, /*hidden argument*/&Object__ctor_m1289_MethodInfo);
		return;
	}
}
// UnityEngine.StackTraceUtility
#include "UnityEngine_UnityEngine_StackTraceUtility.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo StackTraceUtility_t651_il2cpp_TypeInfo;
// UnityEngine.StackTraceUtility
#include "UnityEngine_UnityEngine_StackTraceUtilityMethodDeclarations.h"

// System.Diagnostics.StackTrace
#include "mscorlib_System_Diagnostics_StackTrace.h"
// System.Exception
#include "mscorlib_System_Exception.h"
// System.Text.StringBuilder
#include "mscorlib_System_Text_StringBuilder.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentException.h"
// System.Reflection.MemberInfo
#include "mscorlib_System_Reflection_MemberInfo.h"
// System.Char
#include "mscorlib_System_Char.h"
// System.Diagnostics.StackFrame
#include "mscorlib_System_Diagnostics_StackFrame.h"
// System.Reflection.MethodBase
#include "mscorlib_System_Reflection_MethodBase.h"
// System.Reflection.ParameterInfo
#include "mscorlib_System_Reflection_ParameterInfo.h"
extern TypeInfo StackTrace_t652_il2cpp_TypeInfo;
extern TypeInfo ArgumentException_t318_il2cpp_TypeInfo;
extern TypeInfo Exception_t275_il2cpp_TypeInfo;
extern TypeInfo StringBuilder_t265_il2cpp_TypeInfo;
extern TypeInfo MemberInfo_t_il2cpp_TypeInfo;
extern TypeInfo CharU5BU5D_t179_il2cpp_TypeInfo;
extern TypeInfo Char_t172_il2cpp_TypeInfo;
extern TypeInfo StackFrame_t739_il2cpp_TypeInfo;
extern TypeInfo MethodBase_t718_il2cpp_TypeInfo;
extern TypeInfo ParameterInfoU5BU5D_t729_il2cpp_TypeInfo;
extern TypeInfo ParameterInfo_t730_il2cpp_TypeInfo;
// System.Diagnostics.StackTrace
#include "mscorlib_System_Diagnostics_StackTraceMethodDeclarations.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
// System.Exception
#include "mscorlib_System_ExceptionMethodDeclarations.h"
// System.Text.StringBuilder
#include "mscorlib_System_Text_StringBuilderMethodDeclarations.h"
// System.Reflection.MemberInfo
#include "mscorlib_System_Reflection_MemberInfoMethodDeclarations.h"
// System.Diagnostics.StackFrame
#include "mscorlib_System_Diagnostics_StackFrameMethodDeclarations.h"
// System.Reflection.MethodBase
#include "mscorlib_System_Reflection_MethodBaseMethodDeclarations.h"
// System.Reflection.ParameterInfo
#include "mscorlib_System_Reflection_ParameterInfoMethodDeclarations.h"
// System.Int32
#include "mscorlib_System_Int32MethodDeclarations.h"
extern Il2CppType CharU5BU5D_t179_0_0_0;
extern MethodInfo StackTrace__ctor_m3556_MethodInfo;
extern MethodInfo StackTraceUtility_ExtractFormattedStackTrace_m3234_MethodInfo;
extern MethodInfo String_ToString_m3381_MethodInfo;
extern MethodInfo String_StartsWith_m3385_MethodInfo;
extern MethodInfo StackTraceUtility_ExtractStringFromExceptionInternal_m3232_MethodInfo;
extern MethodInfo String_Concat_m1615_MethodInfo;
extern MethodInfo ArgumentException__ctor_m1847_MethodInfo;
extern MethodInfo Exception_get_StackTrace_m3557_MethodInfo;
extern MethodInfo String_get_Length_m1637_MethodInfo;
extern MethodInfo StringBuilder__ctor_m3464_MethodInfo;
extern MethodInfo Exception_GetType_m3558_MethodInfo;
extern MethodInfo MemberInfo_get_Name_m3505_MethodInfo;
extern MethodInfo Exception_get_Message_m1614_MethodInfo;
extern MethodInfo String_Trim_m3376_MethodInfo;
extern MethodInfo String_Concat_m1678_MethodInfo;
extern MethodInfo Exception_get_InnerException_m3348_MethodInfo;
extern MethodInfo String_Concat_m3559_MethodInfo;
extern MethodInfo StringBuilder_Append_m3470_MethodInfo;
extern MethodInfo StringBuilder_ToString_m1281_MethodInfo;
extern MethodInfo String_Split_m3560_MethodInfo;
extern MethodInfo String_get_Chars_m1653_MethodInfo;
extern MethodInfo StackTraceUtility_IsSystemStacktraceType_m3230_MethodInfo;
extern MethodInfo String_IndexOf_m3387_MethodInfo;
extern MethodInfo String_Substring_m1654_MethodInfo;
extern MethodInfo String_EndsWith_m3561_MethodInfo;
extern MethodInfo String_Remove_m1679_MethodInfo;
extern MethodInfo String_IndexOf_m3562_MethodInfo;
extern MethodInfo String_Replace_m3563_MethodInfo;
extern MethodInfo String_Replace_m3564_MethodInfo;
extern MethodInfo String_LastIndexOf_m3565_MethodInfo;
extern MethodInfo String_Insert_m1681_MethodInfo;
extern MethodInfo StackTrace_GetFrame_m3566_MethodInfo;
extern MethodInfo StackFrame_GetMethod_m3567_MethodInfo;
extern MethodInfo MemberInfo_get_DeclaringType_m3568_MethodInfo;
extern MethodInfo Type_get_Namespace_m3569_MethodInfo;
extern MethodInfo MethodBase_GetParameters_m3537_MethodInfo;
extern MethodInfo ParameterInfo_get_ParameterType_m3538_MethodInfo;
extern MethodInfo StackFrame_GetFileName_m3570_MethodInfo;
extern MethodInfo String_op_Equality_m1635_MethodInfo;
extern MethodInfo StackFrame_GetFileLineNumber_m3571_MethodInfo;
extern MethodInfo Int32_ToString_m3408_MethodInfo;
extern MethodInfo StackTrace_get_FrameCount_m3572_MethodInfo;


// System.Void UnityEngine.StackTraceUtility::.ctor()
extern MethodInfo StackTraceUtility__ctor_m3226_MethodInfo;
extern "C" void StackTraceUtility__ctor_m3226 (StackTraceUtility_t651 * __this, MethodInfo* method)
{
	{
		Object__ctor_m1289(__this, /*hidden argument*/&Object__ctor_m1289_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.StackTraceUtility::.cctor()
extern MethodInfo StackTraceUtility__cctor_m3227_MethodInfo;
extern "C" void StackTraceUtility__cctor_m3227 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_0 = ((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2;
		((StackTraceUtility_t651_StaticFields*)InitializedTypeInfo(&StackTraceUtility_t651_il2cpp_TypeInfo)->static_fields)->___projectFolder_0 = L_0;
		return;
	}
}
// System.Void UnityEngine.StackTraceUtility::SetProjectFolder(System.String)
extern MethodInfo StackTraceUtility_SetProjectFolder_m3228_MethodInfo;
extern "C" void StackTraceUtility_SetProjectFolder_m3228 (Object_t * __this /* static, unused */, String_t* ___folder, MethodInfo* method)
{
	{
		String_t* L_0 = ___folder;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&StackTraceUtility_t651_il2cpp_TypeInfo));
		((StackTraceUtility_t651_StaticFields*)InitializedTypeInfo(&StackTraceUtility_t651_il2cpp_TypeInfo)->static_fields)->___projectFolder_0 = L_0;
		return;
	}
}
// System.String UnityEngine.StackTraceUtility::ExtractStackTrace()
extern MethodInfo StackTraceUtility_ExtractStackTrace_m3229_MethodInfo;
extern "C" String_t* StackTraceUtility_ExtractStackTrace_m3229 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	StackTrace_t652 * V_0 = {0};
	String_t* V_1 = {0};
	{
		StackTrace_t652 * L_0 = (StackTrace_t652 *)il2cpp_codegen_object_new (InitializedTypeInfo(&StackTrace_t652_il2cpp_TypeInfo));
		StackTrace__ctor_m3556(L_0, 1, 1, /*hidden argument*/&StackTrace__ctor_m3556_MethodInfo);
		V_0 = L_0;
		StackTrace_t652 * L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&StackTraceUtility_t651_il2cpp_TypeInfo));
		String_t* L_2 = StackTraceUtility_ExtractFormattedStackTrace_m3234(NULL /*static, unused*/, L_1, /*hidden argument*/&StackTraceUtility_ExtractFormattedStackTrace_m3234_MethodInfo);
		NullCheck(L_2);
		String_t* L_3 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&String_ToString_m3381_MethodInfo, L_2);
		V_1 = L_3;
		String_t* L_4 = V_1;
		return L_4;
	}
}
// System.Boolean UnityEngine.StackTraceUtility::IsSystemStacktraceType(System.Object)
extern "C" bool StackTraceUtility_IsSystemStacktraceType_m3230 (Object_t * __this /* static, unused */, Object_t * ___name, MethodInfo* method)
{
	String_t* V_0 = {0};
	int32_t G_B7_0 = 0;
	{
		Object_t * L_0 = ___name;
		V_0 = ((String_t*)Castclass(L_0, (&String_t_il2cpp_TypeInfo)));
		String_t* L_1 = V_0;
		NullCheck(L_1);
		bool L_2 = String_StartsWith_m3385(L_1, (String_t*) &_stringLiteral308, /*hidden argument*/&String_StartsWith_m3385_MethodInfo);
		if (L_2)
		{
			goto IL_0064;
		}
	}
	{
		String_t* L_3 = V_0;
		NullCheck(L_3);
		bool L_4 = String_StartsWith_m3385(L_3, (String_t*) &_stringLiteral309, /*hidden argument*/&String_StartsWith_m3385_MethodInfo);
		if (L_4)
		{
			goto IL_0064;
		}
	}
	{
		String_t* L_5 = V_0;
		NullCheck(L_5);
		bool L_6 = String_StartsWith_m3385(L_5, (String_t*) &_stringLiteral310, /*hidden argument*/&String_StartsWith_m3385_MethodInfo);
		if (L_6)
		{
			goto IL_0064;
		}
	}
	{
		String_t* L_7 = V_0;
		NullCheck(L_7);
		bool L_8 = String_StartsWith_m3385(L_7, (String_t*) &_stringLiteral311, /*hidden argument*/&String_StartsWith_m3385_MethodInfo);
		if (L_8)
		{
			goto IL_0064;
		}
	}
	{
		String_t* L_9 = V_0;
		NullCheck(L_9);
		bool L_10 = String_StartsWith_m3385(L_9, (String_t*) &_stringLiteral312, /*hidden argument*/&String_StartsWith_m3385_MethodInfo);
		if (L_10)
		{
			goto IL_0064;
		}
	}
	{
		String_t* L_11 = V_0;
		NullCheck(L_11);
		bool L_12 = String_StartsWith_m3385(L_11, (String_t*) &_stringLiteral313, /*hidden argument*/&String_StartsWith_m3385_MethodInfo);
		G_B7_0 = ((int32_t)(L_12));
		goto IL_0065;
	}

IL_0064:
	{
		G_B7_0 = 1;
	}

IL_0065:
	{
		return G_B7_0;
	}
}
// System.String UnityEngine.StackTraceUtility::ExtractStringFromException(System.Object)
extern MethodInfo StackTraceUtility_ExtractStringFromException_m3231_MethodInfo;
extern "C" String_t* StackTraceUtility_ExtractStringFromException_m3231 (Object_t * __this /* static, unused */, Object_t * ___exception, MethodInfo* method)
{
	String_t* V_0 = {0};
	String_t* V_1 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_0 = ((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2;
		V_0 = L_0;
		String_t* L_1 = ((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2;
		V_1 = L_1;
		Object_t * L_2 = ___exception;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&StackTraceUtility_t651_il2cpp_TypeInfo));
		StackTraceUtility_ExtractStringFromExceptionInternal_m3232(NULL /*static, unused*/, L_2, (&V_0), (&V_1), /*hidden argument*/&StackTraceUtility_ExtractStringFromExceptionInternal_m3232_MethodInfo);
		String_t* L_3 = V_0;
		String_t* L_4 = V_1;
		String_t* L_5 = String_Concat_m1615(NULL /*static, unused*/, L_3, (String_t*) &_stringLiteral98, L_4, /*hidden argument*/&String_Concat_m1615_MethodInfo);
		return L_5;
	}
}
// System.Void UnityEngine.StackTraceUtility::ExtractStringFromExceptionInternal(System.Object,System.String&,System.String&)
extern "C" void StackTraceUtility_ExtractStringFromExceptionInternal_m3232 (Object_t * __this /* static, unused */, Object_t * ___exceptiono, String_t** ___message, String_t** ___stackTrace, MethodInfo* method)
{
	Exception_t275 * V_0 = {0};
	StringBuilder_t265 * V_1 = {0};
	String_t* V_2 = {0};
	String_t* V_3 = {0};
	String_t* V_4 = {0};
	StackTrace_t652 * V_5 = {0};
	int32_t G_B7_0 = 0;
	{
		Object_t * L_0 = ___exceptiono;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentException_t318 * L_1 = (ArgumentException_t318 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t318_il2cpp_TypeInfo));
		ArgumentException__ctor_m1847(L_1, (String_t*) &_stringLiteral314, /*hidden argument*/&ArgumentException__ctor_m1847_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0011:
	{
		Object_t * L_2 = ___exceptiono;
		V_0 = ((Exception_t275 *)IsInst(L_2, InitializedTypeInfo(&Exception_t275_il2cpp_TypeInfo)));
		Exception_t275 * L_3 = V_0;
		if (L_3)
		{
			goto IL_0029;
		}
	}
	{
		ArgumentException_t318 * L_4 = (ArgumentException_t318 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t318_il2cpp_TypeInfo));
		ArgumentException__ctor_m1847(L_4, (String_t*) &_stringLiteral315, /*hidden argument*/&ArgumentException__ctor_m1847_MethodInfo);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0029:
	{
		Exception_t275 * L_5 = V_0;
		NullCheck(L_5);
		String_t* L_6 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Exception_get_StackTrace_m3557_MethodInfo, L_5);
		if (L_6)
		{
			goto IL_003e;
		}
	}
	{
		G_B7_0 = ((int32_t)512);
		goto IL_004b;
	}

IL_003e:
	{
		Exception_t275 * L_7 = V_0;
		NullCheck(L_7);
		String_t* L_8 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Exception_get_StackTrace_m3557_MethodInfo, L_7);
		NullCheck(L_8);
		int32_t L_9 = String_get_Length_m1637(L_8, /*hidden argument*/&String_get_Length_m1637_MethodInfo);
		G_B7_0 = ((int32_t)((int32_t)L_9*(int32_t)2));
	}

IL_004b:
	{
		StringBuilder_t265 * L_10 = (StringBuilder_t265 *)il2cpp_codegen_object_new (InitializedTypeInfo(&StringBuilder_t265_il2cpp_TypeInfo));
		StringBuilder__ctor_m3464(L_10, G_B7_0, /*hidden argument*/&StringBuilder__ctor_m3464_MethodInfo);
		V_1 = L_10;
		String_t** L_11 = ___message;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_12 = ((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2;
		*((Object_t **)(L_11)) = (Object_t *)L_12;
		String_t* L_13 = ((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2;
		V_2 = L_13;
		goto IL_00ff;
	}

IL_0063:
	{
		String_t* L_14 = V_2;
		NullCheck(L_14);
		int32_t L_15 = String_get_Length_m1637(L_14, /*hidden argument*/&String_get_Length_m1637_MethodInfo);
		if (L_15)
		{
			goto IL_007a;
		}
	}
	{
		Exception_t275 * L_16 = V_0;
		NullCheck(L_16);
		String_t* L_17 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Exception_get_StackTrace_m3557_MethodInfo, L_16);
		V_2 = L_17;
		goto IL_008c;
	}

IL_007a:
	{
		Exception_t275 * L_18 = V_0;
		NullCheck(L_18);
		String_t* L_19 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Exception_get_StackTrace_m3557_MethodInfo, L_18);
		String_t* L_20 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_21 = String_Concat_m1615(NULL /*static, unused*/, L_19, (String_t*) &_stringLiteral98, L_20, /*hidden argument*/&String_Concat_m1615_MethodInfo);
		V_2 = L_21;
	}

IL_008c:
	{
		Exception_t275 * L_22 = V_0;
		NullCheck(L_22);
		Type_t * L_23 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&Exception_GetType_m3558_MethodInfo, L_22);
		NullCheck(L_23);
		String_t* L_24 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&MemberInfo_get_Name_m3505_MethodInfo, L_23);
		V_3 = L_24;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_25 = ((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2;
		V_4 = L_25;
		Exception_t275 * L_26 = V_0;
		NullCheck(L_26);
		String_t* L_27 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Exception_get_Message_m1614_MethodInfo, L_26);
		if (!L_27)
		{
			goto IL_00b2;
		}
	}
	{
		Exception_t275 * L_28 = V_0;
		NullCheck(L_28);
		String_t* L_29 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Exception_get_Message_m1614_MethodInfo, L_28);
		V_4 = L_29;
	}

IL_00b2:
	{
		String_t* L_30 = V_4;
		NullCheck(L_30);
		String_t* L_31 = String_Trim_m3376(L_30, /*hidden argument*/&String_Trim_m3376_MethodInfo);
		NullCheck(L_31);
		int32_t L_32 = String_get_Length_m1637(L_31, /*hidden argument*/&String_get_Length_m1637_MethodInfo);
		if (!L_32)
		{
			goto IL_00d8;
		}
	}
	{
		String_t* L_33 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_34 = String_Concat_m1678(NULL /*static, unused*/, L_33, (String_t*) &_stringLiteral162, /*hidden argument*/&String_Concat_m1678_MethodInfo);
		V_3 = L_34;
		String_t* L_35 = V_3;
		String_t* L_36 = V_4;
		String_t* L_37 = String_Concat_m1678(NULL /*static, unused*/, L_35, L_36, /*hidden argument*/&String_Concat_m1678_MethodInfo);
		V_3 = L_37;
	}

IL_00d8:
	{
		String_t** L_38 = ___message;
		String_t* L_39 = V_3;
		*((Object_t **)(L_38)) = (Object_t *)L_39;
		Exception_t275 * L_40 = V_0;
		NullCheck(L_40);
		Exception_t275 * L_41 = (Exception_t275 *)VirtFuncInvoker0< Exception_t275 * >::Invoke(&Exception_get_InnerException_m3348_MethodInfo, L_40);
		if (!L_41)
		{
			goto IL_00f8;
		}
	}
	{
		String_t* L_42 = V_3;
		String_t* L_43 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_44 = String_Concat_m3559(NULL /*static, unused*/, (String_t*) &_stringLiteral316, L_42, (String_t*) &_stringLiteral98, L_43, /*hidden argument*/&String_Concat_m3559_MethodInfo);
		V_2 = L_44;
	}

IL_00f8:
	{
		Exception_t275 * L_45 = V_0;
		NullCheck(L_45);
		Exception_t275 * L_46 = (Exception_t275 *)VirtFuncInvoker0< Exception_t275 * >::Invoke(&Exception_get_InnerException_m3348_MethodInfo, L_45);
		V_0 = L_46;
	}

IL_00ff:
	{
		Exception_t275 * L_47 = V_0;
		if (L_47)
		{
			goto IL_0063;
		}
	}
	{
		StringBuilder_t265 * L_48 = V_1;
		String_t* L_49 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_50 = String_Concat_m1678(NULL /*static, unused*/, L_49, (String_t*) &_stringLiteral98, /*hidden argument*/&String_Concat_m1678_MethodInfo);
		NullCheck(L_48);
		StringBuilder_Append_m3470(L_48, L_50, /*hidden argument*/&StringBuilder_Append_m3470_MethodInfo);
		StackTrace_t652 * L_51 = (StackTrace_t652 *)il2cpp_codegen_object_new (InitializedTypeInfo(&StackTrace_t652_il2cpp_TypeInfo));
		StackTrace__ctor_m3556(L_51, 1, 1, /*hidden argument*/&StackTrace__ctor_m3556_MethodInfo);
		V_5 = L_51;
		StringBuilder_t265 * L_52 = V_1;
		StackTrace_t652 * L_53 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&StackTraceUtility_t651_il2cpp_TypeInfo));
		String_t* L_54 = StackTraceUtility_ExtractFormattedStackTrace_m3234(NULL /*static, unused*/, L_53, /*hidden argument*/&StackTraceUtility_ExtractFormattedStackTrace_m3234_MethodInfo);
		NullCheck(L_52);
		StringBuilder_Append_m3470(L_52, L_54, /*hidden argument*/&StringBuilder_Append_m3470_MethodInfo);
		String_t** L_55 = ___stackTrace;
		StringBuilder_t265 * L_56 = V_1;
		NullCheck(L_56);
		String_t* L_57 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&StringBuilder_ToString_m1281_MethodInfo, L_56);
		*((Object_t **)(L_55)) = (Object_t *)L_57;
		return;
	}
}
// System.String UnityEngine.StackTraceUtility::PostprocessStacktrace(System.String,System.Boolean)
extern MethodInfo StackTraceUtility_PostprocessStacktrace_m3233_MethodInfo;
extern TypeInfo* CharU5BU5D_t179_il2cpp_TypeInfo_var;
extern "C" String_t* StackTraceUtility_PostprocessStacktrace_m3233 (Object_t * __this /* static, unused */, String_t* ___oldString, bool ___stripEngineInternalInformation, MethodInfo* method)
{
	static bool StackTraceUtility_PostprocessStacktrace_m3233_init;
	if (!StackTraceUtility_PostprocessStacktrace_m3233_init)
	{
		CharU5BU5D_t179_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&CharU5BU5D_t179_0_0_0);
		StackTraceUtility_PostprocessStacktrace_m3233_init = true;
	}
	StringU5BU5D_t423* V_0 = {0};
	StringBuilder_t265 * V_1 = {0};
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	String_t* V_4 = {0};
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	{
		String_t* L_0 = ___oldString;
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_1 = ((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2;
		return L_1;
	}

IL_000c:
	{
		String_t* L_2 = ___oldString;
		CharU5BU5D_t179* L_3 = ((CharU5BU5D_t179*)SZArrayNew(CharU5BU5D_t179_il2cpp_TypeInfo_var, 1));
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 0);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_3, 0)) = (uint16_t)((int32_t)10);
		NullCheck(L_2);
		StringU5BU5D_t423* L_4 = String_Split_m3560(L_2, L_3, /*hidden argument*/&String_Split_m3560_MethodInfo);
		V_0 = L_4;
		String_t* L_5 = ___oldString;
		NullCheck(L_5);
		int32_t L_6 = String_get_Length_m1637(L_5, /*hidden argument*/&String_get_Length_m1637_MethodInfo);
		StringBuilder_t265 * L_7 = (StringBuilder_t265 *)il2cpp_codegen_object_new (InitializedTypeInfo(&StringBuilder_t265_il2cpp_TypeInfo));
		StringBuilder__ctor_m3464(L_7, L_6, /*hidden argument*/&StringBuilder__ctor_m3464_MethodInfo);
		V_1 = L_7;
		V_2 = 0;
		goto IL_0040;
	}

IL_0031:
	{
		StringU5BU5D_t423* L_8 = V_0;
		int32_t L_9 = V_2;
		StringU5BU5D_t423* L_10 = V_0;
		int32_t L_11 = V_2;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = L_11;
		NullCheck((*(String_t**)(String_t**)SZArrayLdElema(L_10, L_12)));
		String_t* L_13 = String_Trim_m3376((*(String_t**)(String_t**)SZArrayLdElema(L_10, L_12)), /*hidden argument*/&String_Trim_m3376_MethodInfo);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, L_9);
		ArrayElementTypeCheck (L_8, L_13);
		*((String_t**)(String_t**)SZArrayLdElema(L_8, L_9)) = (String_t*)L_13;
		int32_t L_14 = V_2;
		V_2 = ((int32_t)((int32_t)L_14+(int32_t)1));
	}

IL_0040:
	{
		int32_t L_15 = V_2;
		StringU5BU5D_t423* L_16 = V_0;
		NullCheck(L_16);
		if ((((int32_t)L_15) < ((int32_t)(((int32_t)(((Array_t *)L_16)->max_length))))))
		{
			goto IL_0031;
		}
	}
	{
		V_3 = 0;
		goto IL_0265;
	}

IL_0050:
	{
		StringU5BU5D_t423* L_17 = V_0;
		int32_t L_18 = V_3;
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, L_18);
		int32_t L_19 = L_18;
		V_4 = (*(String_t**)(String_t**)SZArrayLdElema(L_17, L_19));
		String_t* L_20 = V_4;
		NullCheck(L_20);
		int32_t L_21 = String_get_Length_m1637(L_20, /*hidden argument*/&String_get_Length_m1637_MethodInfo);
		if (!L_21)
		{
			goto IL_0070;
		}
	}
	{
		String_t* L_22 = V_4;
		NullCheck(L_22);
		uint16_t L_23 = String_get_Chars_m1653(L_22, 0, /*hidden argument*/&String_get_Chars_m1653_MethodInfo);
		if ((!(((uint32_t)L_23) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_0075;
		}
	}

IL_0070:
	{
		goto IL_0261;
	}

IL_0075:
	{
		String_t* L_24 = V_4;
		NullCheck(L_24);
		bool L_25 = String_StartsWith_m3385(L_24, (String_t*) &_stringLiteral317, /*hidden argument*/&String_StartsWith_m3385_MethodInfo);
		if (!L_25)
		{
			goto IL_008b;
		}
	}
	{
		goto IL_0261;
	}

IL_008b:
	{
		bool L_26 = ___stripEngineInternalInformation;
		if (!L_26)
		{
			goto IL_00a7;
		}
	}
	{
		String_t* L_27 = V_4;
		NullCheck(L_27);
		bool L_28 = String_StartsWith_m3385(L_27, (String_t*) &_stringLiteral318, /*hidden argument*/&String_StartsWith_m3385_MethodInfo);
		if (!L_28)
		{
			goto IL_00a7;
		}
	}
	{
		goto IL_026e;
	}

IL_00a7:
	{
		bool L_29 = ___stripEngineInternalInformation;
		if (!L_29)
		{
			goto IL_00fa;
		}
	}
	{
		int32_t L_30 = V_3;
		StringU5BU5D_t423* L_31 = V_0;
		NullCheck(L_31);
		if ((((int32_t)L_30) >= ((int32_t)((int32_t)((int32_t)(((int32_t)(((Array_t *)L_31)->max_length)))-(int32_t)1)))))
		{
			goto IL_00fa;
		}
	}
	{
		String_t* L_32 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&StackTraceUtility_t651_il2cpp_TypeInfo));
		bool L_33 = StackTraceUtility_IsSystemStacktraceType_m3230(NULL /*static, unused*/, L_32, /*hidden argument*/&StackTraceUtility_IsSystemStacktraceType_m3230_MethodInfo);
		if (!L_33)
		{
			goto IL_00fa;
		}
	}
	{
		StringU5BU5D_t423* L_34 = V_0;
		int32_t L_35 = V_3;
		NullCheck(L_34);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_34, ((int32_t)((int32_t)L_35+(int32_t)1)));
		int32_t L_36 = ((int32_t)((int32_t)L_35+(int32_t)1));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&StackTraceUtility_t651_il2cpp_TypeInfo));
		bool L_37 = StackTraceUtility_IsSystemStacktraceType_m3230(NULL /*static, unused*/, (*(String_t**)(String_t**)SZArrayLdElema(L_34, L_36)), /*hidden argument*/&StackTraceUtility_IsSystemStacktraceType_m3230_MethodInfo);
		if (!L_37)
		{
			goto IL_00d8;
		}
	}
	{
		goto IL_0261;
	}

IL_00d8:
	{
		String_t* L_38 = V_4;
		NullCheck(L_38);
		int32_t L_39 = String_IndexOf_m3387(L_38, (String_t*) &_stringLiteral319, /*hidden argument*/&String_IndexOf_m3387_MethodInfo);
		V_5 = L_39;
		int32_t L_40 = V_5;
		if ((((int32_t)L_40) == ((int32_t)(-1))))
		{
			goto IL_00fa;
		}
	}
	{
		String_t* L_41 = V_4;
		int32_t L_42 = V_5;
		NullCheck(L_41);
		String_t* L_43 = String_Substring_m1654(L_41, 0, L_42, /*hidden argument*/&String_Substring_m1654_MethodInfo);
		V_4 = L_43;
	}

IL_00fa:
	{
		String_t* L_44 = V_4;
		NullCheck(L_44);
		int32_t L_45 = String_IndexOf_m3387(L_44, (String_t*) &_stringLiteral320, /*hidden argument*/&String_IndexOf_m3387_MethodInfo);
		if ((((int32_t)L_45) == ((int32_t)(-1))))
		{
			goto IL_0111;
		}
	}
	{
		goto IL_0261;
	}

IL_0111:
	{
		String_t* L_46 = V_4;
		NullCheck(L_46);
		int32_t L_47 = String_IndexOf_m3387(L_46, (String_t*) &_stringLiteral321, /*hidden argument*/&String_IndexOf_m3387_MethodInfo);
		if ((((int32_t)L_47) == ((int32_t)(-1))))
		{
			goto IL_0128;
		}
	}
	{
		goto IL_0261;
	}

IL_0128:
	{
		String_t* L_48 = V_4;
		NullCheck(L_48);
		int32_t L_49 = String_IndexOf_m3387(L_48, (String_t*) &_stringLiteral322, /*hidden argument*/&String_IndexOf_m3387_MethodInfo);
		if ((((int32_t)L_49) == ((int32_t)(-1))))
		{
			goto IL_013f;
		}
	}
	{
		goto IL_0261;
	}

IL_013f:
	{
		bool L_50 = ___stripEngineInternalInformation;
		if (!L_50)
		{
			goto IL_016c;
		}
	}
	{
		String_t* L_51 = V_4;
		NullCheck(L_51);
		bool L_52 = String_StartsWith_m3385(L_51, (String_t*) &_stringLiteral266, /*hidden argument*/&String_StartsWith_m3385_MethodInfo);
		if (!L_52)
		{
			goto IL_016c;
		}
	}
	{
		String_t* L_53 = V_4;
		NullCheck(L_53);
		bool L_54 = String_EndsWith_m3561(L_53, (String_t*) &_stringLiteral267, /*hidden argument*/&String_EndsWith_m3561_MethodInfo);
		if (!L_54)
		{
			goto IL_016c;
		}
	}
	{
		goto IL_0261;
	}

IL_016c:
	{
		String_t* L_55 = V_4;
		NullCheck(L_55);
		bool L_56 = String_StartsWith_m3385(L_55, (String_t*) &_stringLiteral323, /*hidden argument*/&String_StartsWith_m3385_MethodInfo);
		if (!L_56)
		{
			goto IL_0188;
		}
	}
	{
		String_t* L_57 = V_4;
		NullCheck(L_57);
		String_t* L_58 = String_Remove_m1679(L_57, 0, 3, /*hidden argument*/&String_Remove_m1679_MethodInfo);
		V_4 = L_58;
	}

IL_0188:
	{
		String_t* L_59 = V_4;
		NullCheck(L_59);
		int32_t L_60 = String_IndexOf_m3387(L_59, (String_t*) &_stringLiteral324, /*hidden argument*/&String_IndexOf_m3387_MethodInfo);
		V_6 = L_60;
		V_7 = (-1);
		int32_t L_61 = V_6;
		if ((((int32_t)L_61) == ((int32_t)(-1))))
		{
			goto IL_01b1;
		}
	}
	{
		String_t* L_62 = V_4;
		int32_t L_63 = V_6;
		NullCheck(L_62);
		int32_t L_64 = String_IndexOf_m3562(L_62, (String_t*) &_stringLiteral267, L_63, /*hidden argument*/&String_IndexOf_m3562_MethodInfo);
		V_7 = L_64;
	}

IL_01b1:
	{
		int32_t L_65 = V_6;
		if ((((int32_t)L_65) == ((int32_t)(-1))))
		{
			goto IL_01d4;
		}
	}
	{
		int32_t L_66 = V_7;
		int32_t L_67 = V_6;
		if ((((int32_t)L_66) <= ((int32_t)L_67)))
		{
			goto IL_01d4;
		}
	}
	{
		String_t* L_68 = V_4;
		int32_t L_69 = V_6;
		int32_t L_70 = V_7;
		int32_t L_71 = V_6;
		NullCheck(L_68);
		String_t* L_72 = String_Remove_m1679(L_68, L_69, ((int32_t)((int32_t)((int32_t)((int32_t)L_70-(int32_t)L_71))+(int32_t)1)), /*hidden argument*/&String_Remove_m1679_MethodInfo);
		V_4 = L_72;
	}

IL_01d4:
	{
		String_t* L_73 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_74 = ((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2;
		NullCheck(L_73);
		String_t* L_75 = String_Replace_m3563(L_73, (String_t*) &_stringLiteral325, L_74, /*hidden argument*/&String_Replace_m3563_MethodInfo);
		V_4 = L_75;
		String_t* L_76 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&StackTraceUtility_t651_il2cpp_TypeInfo));
		String_t* L_77 = ((StackTraceUtility_t651_StaticFields*)InitializedTypeInfo(&StackTraceUtility_t651_il2cpp_TypeInfo)->static_fields)->___projectFolder_0;
		String_t* L_78 = ((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2;
		NullCheck(L_76);
		String_t* L_79 = String_Replace_m3563(L_76, L_77, L_78, /*hidden argument*/&String_Replace_m3563_MethodInfo);
		V_4 = L_79;
		String_t* L_80 = V_4;
		NullCheck(L_80);
		String_t* L_81 = String_Replace_m3564(L_80, ((int32_t)92), ((int32_t)47), /*hidden argument*/&String_Replace_m3564_MethodInfo);
		V_4 = L_81;
		String_t* L_82 = V_4;
		NullCheck(L_82);
		int32_t L_83 = String_LastIndexOf_m3565(L_82, (String_t*) &_stringLiteral326, /*hidden argument*/&String_LastIndexOf_m3565_MethodInfo);
		V_8 = L_83;
		int32_t L_84 = V_8;
		if ((((int32_t)L_84) == ((int32_t)(-1))))
		{
			goto IL_024e;
		}
	}
	{
		String_t* L_85 = V_4;
		int32_t L_86 = V_8;
		NullCheck(L_85);
		String_t* L_87 = String_Remove_m1679(L_85, L_86, 5, /*hidden argument*/&String_Remove_m1679_MethodInfo);
		V_4 = L_87;
		String_t* L_88 = V_4;
		int32_t L_89 = V_8;
		NullCheck(L_88);
		String_t* L_90 = String_Insert_m1681(L_88, L_89, (String_t*) &_stringLiteral327, /*hidden argument*/&String_Insert_m1681_MethodInfo);
		V_4 = L_90;
		String_t* L_91 = V_4;
		String_t* L_92 = V_4;
		NullCheck(L_92);
		int32_t L_93 = String_get_Length_m1637(L_92, /*hidden argument*/&String_get_Length_m1637_MethodInfo);
		NullCheck(L_91);
		String_t* L_94 = String_Insert_m1681(L_91, L_93, (String_t*) &_stringLiteral63, /*hidden argument*/&String_Insert_m1681_MethodInfo);
		V_4 = L_94;
	}

IL_024e:
	{
		StringBuilder_t265 * L_95 = V_1;
		String_t* L_96 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_97 = String_Concat_m1678(NULL /*static, unused*/, L_96, (String_t*) &_stringLiteral98, /*hidden argument*/&String_Concat_m1678_MethodInfo);
		NullCheck(L_95);
		StringBuilder_Append_m3470(L_95, L_97, /*hidden argument*/&StringBuilder_Append_m3470_MethodInfo);
	}

IL_0261:
	{
		int32_t L_98 = V_3;
		V_3 = ((int32_t)((int32_t)L_98+(int32_t)1));
	}

IL_0265:
	{
		int32_t L_99 = V_3;
		StringU5BU5D_t423* L_100 = V_0;
		NullCheck(L_100);
		if ((((int32_t)L_99) < ((int32_t)(((int32_t)(((Array_t *)L_100)->max_length))))))
		{
			goto IL_0050;
		}
	}

IL_026e:
	{
		StringBuilder_t265 * L_101 = V_1;
		NullCheck(L_101);
		String_t* L_102 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&StringBuilder_ToString_m1281_MethodInfo, L_101);
		return L_102;
	}
}
// System.String UnityEngine.StackTraceUtility::ExtractFormattedStackTrace(System.Diagnostics.StackTrace)
extern "C" String_t* StackTraceUtility_ExtractFormattedStackTrace_m3234 (Object_t * __this /* static, unused */, StackTrace_t652 * ___stackTrace, MethodInfo* method)
{
	StringBuilder_t265 * V_0 = {0};
	int32_t V_1 = 0;
	StackFrame_t739 * V_2 = {0};
	MethodBase_t718 * V_3 = {0};
	Type_t * V_4 = {0};
	String_t* V_5 = {0};
	int32_t V_6 = 0;
	ParameterInfoU5BU5D_t729* V_7 = {0};
	bool V_8 = false;
	String_t* V_9 = {0};
	int32_t V_10 = 0;
	{
		StringBuilder_t265 * L_0 = (StringBuilder_t265 *)il2cpp_codegen_object_new (InitializedTypeInfo(&StringBuilder_t265_il2cpp_TypeInfo));
		StringBuilder__ctor_m3464(L_0, ((int32_t)255), /*hidden argument*/&StringBuilder__ctor_m3464_MethodInfo);
		V_0 = L_0;
		V_1 = 0;
		goto IL_01c9;
	}

IL_0012:
	{
		StackTrace_t652 * L_1 = ___stackTrace;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		StackFrame_t739 * L_3 = (StackFrame_t739 *)VirtFuncInvoker1< StackFrame_t739 *, int32_t >::Invoke(&StackTrace_GetFrame_m3566_MethodInfo, L_1, L_2);
		V_2 = L_3;
		StackFrame_t739 * L_4 = V_2;
		NullCheck(L_4);
		MethodBase_t718 * L_5 = (MethodBase_t718 *)VirtFuncInvoker0< MethodBase_t718 * >::Invoke(&StackFrame_GetMethod_m3567_MethodInfo, L_4);
		V_3 = L_5;
		MethodBase_t718 * L_6 = V_3;
		if (L_6)
		{
			goto IL_002c;
		}
	}
	{
		goto IL_01c5;
	}

IL_002c:
	{
		MethodBase_t718 * L_7 = V_3;
		NullCheck(L_7);
		Type_t * L_8 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&MemberInfo_get_DeclaringType_m3568_MethodInfo, L_7);
		V_4 = L_8;
		Type_t * L_9 = V_4;
		if (L_9)
		{
			goto IL_0040;
		}
	}
	{
		goto IL_01c5;
	}

IL_0040:
	{
		Type_t * L_10 = V_4;
		NullCheck(L_10);
		String_t* L_11 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Type_get_Namespace_m3569_MethodInfo, L_10);
		V_5 = L_11;
		String_t* L_12 = V_5;
		if (!L_12)
		{
			goto IL_0071;
		}
	}
	{
		String_t* L_13 = V_5;
		NullCheck(L_13);
		int32_t L_14 = String_get_Length_m1637(L_13, /*hidden argument*/&String_get_Length_m1637_MethodInfo);
		if (!L_14)
		{
			goto IL_0071;
		}
	}
	{
		StringBuilder_t265 * L_15 = V_0;
		String_t* L_16 = V_5;
		NullCheck(L_15);
		StringBuilder_Append_m3470(L_15, L_16, /*hidden argument*/&StringBuilder_Append_m3470_MethodInfo);
		StringBuilder_t265 * L_17 = V_0;
		NullCheck(L_17);
		StringBuilder_Append_m3470(L_17, (String_t*) &_stringLiteral55, /*hidden argument*/&StringBuilder_Append_m3470_MethodInfo);
	}

IL_0071:
	{
		StringBuilder_t265 * L_18 = V_0;
		Type_t * L_19 = V_4;
		NullCheck(L_19);
		String_t* L_20 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&MemberInfo_get_Name_m3505_MethodInfo, L_19);
		NullCheck(L_18);
		StringBuilder_Append_m3470(L_18, L_20, /*hidden argument*/&StringBuilder_Append_m3470_MethodInfo);
		StringBuilder_t265 * L_21 = V_0;
		NullCheck(L_21);
		StringBuilder_Append_m3470(L_21, (String_t*) &_stringLiteral265, /*hidden argument*/&StringBuilder_Append_m3470_MethodInfo);
		StringBuilder_t265 * L_22 = V_0;
		MethodBase_t718 * L_23 = V_3;
		NullCheck(L_23);
		String_t* L_24 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&MemberInfo_get_Name_m3505_MethodInfo, L_23);
		NullCheck(L_22);
		StringBuilder_Append_m3470(L_22, L_24, /*hidden argument*/&StringBuilder_Append_m3470_MethodInfo);
		StringBuilder_t265 * L_25 = V_0;
		NullCheck(L_25);
		StringBuilder_Append_m3470(L_25, (String_t*) &_stringLiteral328, /*hidden argument*/&StringBuilder_Append_m3470_MethodInfo);
		V_6 = 0;
		MethodBase_t718 * L_26 = V_3;
		NullCheck(L_26);
		ParameterInfoU5BU5D_t729* L_27 = (ParameterInfoU5BU5D_t729*)VirtFuncInvoker0< ParameterInfoU5BU5D_t729* >::Invoke(&MethodBase_GetParameters_m3537_MethodInfo, L_26);
		V_7 = L_27;
		V_8 = 1;
		goto IL_00ee;
	}

IL_00b7:
	{
		bool L_28 = V_8;
		if (L_28)
		{
			goto IL_00cf;
		}
	}
	{
		StringBuilder_t265 * L_29 = V_0;
		NullCheck(L_29);
		StringBuilder_Append_m3470(L_29, (String_t*) &_stringLiteral329, /*hidden argument*/&StringBuilder_Append_m3470_MethodInfo);
		goto IL_00d2;
	}

IL_00cf:
	{
		V_8 = 0;
	}

IL_00d2:
	{
		StringBuilder_t265 * L_30 = V_0;
		ParameterInfoU5BU5D_t729* L_31 = V_7;
		int32_t L_32 = V_6;
		NullCheck(L_31);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_31, L_32);
		int32_t L_33 = L_32;
		NullCheck((*(ParameterInfo_t730 **)(ParameterInfo_t730 **)SZArrayLdElema(L_31, L_33)));
		Type_t * L_34 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&ParameterInfo_get_ParameterType_m3538_MethodInfo, (*(ParameterInfo_t730 **)(ParameterInfo_t730 **)SZArrayLdElema(L_31, L_33)));
		NullCheck(L_34);
		String_t* L_35 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&MemberInfo_get_Name_m3505_MethodInfo, L_34);
		NullCheck(L_30);
		StringBuilder_Append_m3470(L_30, L_35, /*hidden argument*/&StringBuilder_Append_m3470_MethodInfo);
		int32_t L_36 = V_6;
		V_6 = ((int32_t)((int32_t)L_36+(int32_t)1));
	}

IL_00ee:
	{
		int32_t L_37 = V_6;
		ParameterInfoU5BU5D_t729* L_38 = V_7;
		NullCheck(L_38);
		if ((((int32_t)L_37) < ((int32_t)(((int32_t)(((Array_t *)L_38)->max_length))))))
		{
			goto IL_00b7;
		}
	}
	{
		StringBuilder_t265 * L_39 = V_0;
		NullCheck(L_39);
		StringBuilder_Append_m3470(L_39, (String_t*) &_stringLiteral63, /*hidden argument*/&StringBuilder_Append_m3470_MethodInfo);
		StackFrame_t739 * L_40 = V_2;
		NullCheck(L_40);
		String_t* L_41 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&StackFrame_GetFileName_m3570_MethodInfo, L_40);
		V_9 = L_41;
		String_t* L_42 = V_9;
		if (!L_42)
		{
			goto IL_01b9;
		}
	}
	{
		Type_t * L_43 = V_4;
		NullCheck(L_43);
		String_t* L_44 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&MemberInfo_get_Name_m3505_MethodInfo, L_43);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		bool L_45 = String_op_Equality_m1635(NULL /*static, unused*/, L_44, (String_t*) &_stringLiteral330, /*hidden argument*/&String_op_Equality_m1635_MethodInfo);
		if (!L_45)
		{
			goto IL_0140;
		}
	}
	{
		Type_t * L_46 = V_4;
		NullCheck(L_46);
		String_t* L_47 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Type_get_Namespace_m3569_MethodInfo, L_46);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		bool L_48 = String_op_Equality_m1635(NULL /*static, unused*/, L_47, (String_t*) &_stringLiteral331, /*hidden argument*/&String_op_Equality_m1635_MethodInfo);
		if (L_48)
		{
			goto IL_01b9;
		}
	}

IL_0140:
	{
		StringBuilder_t265 * L_49 = V_0;
		NullCheck(L_49);
		StringBuilder_Append_m3470(L_49, (String_t*) &_stringLiteral327, /*hidden argument*/&StringBuilder_Append_m3470_MethodInfo);
		String_t* L_50 = V_9;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&StackTraceUtility_t651_il2cpp_TypeInfo));
		String_t* L_51 = ((StackTraceUtility_t651_StaticFields*)InitializedTypeInfo(&StackTraceUtility_t651_il2cpp_TypeInfo)->static_fields)->___projectFolder_0;
		NullCheck(L_50);
		bool L_52 = String_StartsWith_m3385(L_50, L_51, /*hidden argument*/&String_StartsWith_m3385_MethodInfo);
		if (!L_52)
		{
			goto IL_0182;
		}
	}
	{
		String_t* L_53 = V_9;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&StackTraceUtility_t651_il2cpp_TypeInfo));
		String_t* L_54 = ((StackTraceUtility_t651_StaticFields*)InitializedTypeInfo(&StackTraceUtility_t651_il2cpp_TypeInfo)->static_fields)->___projectFolder_0;
		NullCheck(L_54);
		int32_t L_55 = String_get_Length_m1637(L_54, /*hidden argument*/&String_get_Length_m1637_MethodInfo);
		String_t* L_56 = V_9;
		NullCheck(L_56);
		int32_t L_57 = String_get_Length_m1637(L_56, /*hidden argument*/&String_get_Length_m1637_MethodInfo);
		String_t* L_58 = ((StackTraceUtility_t651_StaticFields*)InitializedTypeInfo(&StackTraceUtility_t651_il2cpp_TypeInfo)->static_fields)->___projectFolder_0;
		NullCheck(L_58);
		int32_t L_59 = String_get_Length_m1637(L_58, /*hidden argument*/&String_get_Length_m1637_MethodInfo);
		NullCheck(L_53);
		String_t* L_60 = String_Substring_m1654(L_53, L_55, ((int32_t)((int32_t)L_57-(int32_t)L_59)), /*hidden argument*/&String_Substring_m1654_MethodInfo);
		V_9 = L_60;
	}

IL_0182:
	{
		StringBuilder_t265 * L_61 = V_0;
		String_t* L_62 = V_9;
		NullCheck(L_61);
		StringBuilder_Append_m3470(L_61, L_62, /*hidden argument*/&StringBuilder_Append_m3470_MethodInfo);
		StringBuilder_t265 * L_63 = V_0;
		NullCheck(L_63);
		StringBuilder_Append_m3470(L_63, (String_t*) &_stringLiteral265, /*hidden argument*/&StringBuilder_Append_m3470_MethodInfo);
		StringBuilder_t265 * L_64 = V_0;
		StackFrame_t739 * L_65 = V_2;
		NullCheck(L_65);
		int32_t L_66 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&StackFrame_GetFileLineNumber_m3571_MethodInfo, L_65);
		V_10 = L_66;
		String_t* L_67 = Int32_ToString_m3408((&V_10), /*hidden argument*/&Int32_ToString_m3408_MethodInfo);
		NullCheck(L_64);
		StringBuilder_Append_m3470(L_64, L_67, /*hidden argument*/&StringBuilder_Append_m3470_MethodInfo);
		StringBuilder_t265 * L_68 = V_0;
		NullCheck(L_68);
		StringBuilder_Append_m3470(L_68, (String_t*) &_stringLiteral63, /*hidden argument*/&StringBuilder_Append_m3470_MethodInfo);
	}

IL_01b9:
	{
		StringBuilder_t265 * L_69 = V_0;
		NullCheck(L_69);
		StringBuilder_Append_m3470(L_69, (String_t*) &_stringLiteral98, /*hidden argument*/&StringBuilder_Append_m3470_MethodInfo);
	}

IL_01c5:
	{
		int32_t L_70 = V_1;
		V_1 = ((int32_t)((int32_t)L_70+(int32_t)1));
	}

IL_01c9:
	{
		int32_t L_71 = V_1;
		StackTrace_t652 * L_72 = ___stackTrace;
		NullCheck(L_72);
		int32_t L_73 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&StackTrace_get_FrameCount_m3572_MethodInfo, L_72);
		if ((((int32_t)L_71) < ((int32_t)L_73)))
		{
			goto IL_0012;
		}
	}
	{
		StringBuilder_t265 * L_74 = V_0;
		NullCheck(L_74);
		String_t* L_75 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&StringBuilder_ToString_m1281_MethodInfo, L_74);
		return L_75;
	}
}
// UnityEngine.UnityException
#include "UnityEngine_UnityEngine_UnityException.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo UnityException_t300_il2cpp_TypeInfo;
// UnityEngine.UnityException
#include "UnityEngine_UnityEngine_UnityExceptionMethodDeclarations.h"

// System.Runtime.Serialization.SerializationInfo
#include "mscorlib_System_Runtime_Serialization_SerializationInfo.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
extern MethodInfo Exception__ctor_m3573_MethodInfo;
extern MethodInfo Exception_set_HResult_m3574_MethodInfo;
extern MethodInfo Exception__ctor_m3575_MethodInfo;
extern MethodInfo Exception__ctor_m3576_MethodInfo;


// System.Void UnityEngine.UnityException::.ctor()
extern MethodInfo UnityException__ctor_m3235_MethodInfo;
extern "C" void UnityException__ctor_m3235 (UnityException_t300 * __this, MethodInfo* method)
{
	{
		Exception__ctor_m3573(__this, (String_t*) &_stringLiteral332, /*hidden argument*/&Exception__ctor_m3573_MethodInfo);
		Exception_set_HResult_m3574(__this, ((int32_t)-2147467261), /*hidden argument*/&Exception_set_HResult_m3574_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.UnityException::.ctor(System.String)
extern MethodInfo UnityException__ctor_m3236_MethodInfo;
extern "C" void UnityException__ctor_m3236 (UnityException_t300 * __this, String_t* ___message, MethodInfo* method)
{
	{
		String_t* L_0 = ___message;
		Exception__ctor_m3573(__this, L_0, /*hidden argument*/&Exception__ctor_m3573_MethodInfo);
		Exception_set_HResult_m3574(__this, ((int32_t)-2147467261), /*hidden argument*/&Exception_set_HResult_m3574_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.UnityException::.ctor(System.String,System.Exception)
extern MethodInfo UnityException__ctor_m3237_MethodInfo;
extern "C" void UnityException__ctor_m3237 (UnityException_t300 * __this, String_t* ___message, Exception_t275 * ___innerException, MethodInfo* method)
{
	{
		String_t* L_0 = ___message;
		Exception_t275 * L_1 = ___innerException;
		Exception__ctor_m3575(__this, L_0, L_1, /*hidden argument*/&Exception__ctor_m3575_MethodInfo);
		Exception_set_HResult_m3574(__this, ((int32_t)-2147467261), /*hidden argument*/&Exception_set_HResult_m3574_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.UnityException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern MethodInfo UnityException__ctor_m3238_MethodInfo;
extern "C" void UnityException__ctor_m3238 (UnityException_t300 * __this, SerializationInfo_t653 * ___info, StreamingContext_t654  ___context, MethodInfo* method)
{
	{
		SerializationInfo_t653 * L_0 = ___info;
		StreamingContext_t654  L_1 = ___context;
		Exception__ctor_m3576(__this, L_0, L_1, /*hidden argument*/&Exception__ctor_m3576_MethodInfo);
		return;
	}
}
// UnityEngine.SharedBetweenAnimatorsAttribute
#include "UnityEngine_UnityEngine_SharedBetweenAnimatorsAttribute.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo SharedBetweenAnimatorsAttribute_t655_il2cpp_TypeInfo;
// UnityEngine.SharedBetweenAnimatorsAttribute
#include "UnityEngine_UnityEngine_SharedBetweenAnimatorsAttributeMethodDeclarations.h"



// System.Void UnityEngine.SharedBetweenAnimatorsAttribute::.ctor()
extern MethodInfo SharedBetweenAnimatorsAttribute__ctor_m3239_MethodInfo;
extern "C" void SharedBetweenAnimatorsAttribute__ctor_m3239 (SharedBetweenAnimatorsAttribute_t655 * __this, MethodInfo* method)
{
	{
		Attribute__ctor_m3370(__this, /*hidden argument*/&Attribute__ctor_m3370_MethodInfo);
		return;
	}
}
// UnityEngine.StateMachineBehaviour
#include "UnityEngine_UnityEngine_StateMachineBehaviour.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo StateMachineBehaviour_t656_il2cpp_TypeInfo;
// UnityEngine.StateMachineBehaviour
#include "UnityEngine_UnityEngine_StateMachineBehaviourMethodDeclarations.h"

// UnityEngine.Animator
#include "UnityEngine_UnityEngine_Animator.h"
// UnityEngine.AnimatorStateInfo
#include "UnityEngine_UnityEngine_AnimatorStateInfo.h"
// UnityEngine.ScriptableObject
#include "UnityEngine_UnityEngine_ScriptableObjectMethodDeclarations.h"
extern MethodInfo ScriptableObject__ctor_m2126_MethodInfo;


// System.Void UnityEngine.StateMachineBehaviour::.ctor()
extern MethodInfo StateMachineBehaviour__ctor_m3240_MethodInfo;
extern "C" void StateMachineBehaviour__ctor_m3240 (StateMachineBehaviour_t656 * __this, MethodInfo* method)
{
	{
		ScriptableObject__ctor_m2126(__this, /*hidden argument*/&ScriptableObject__ctor_m2126_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateEnter(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
extern MethodInfo StateMachineBehaviour_OnStateEnter_m3241_MethodInfo;
extern "C" void StateMachineBehaviour_OnStateEnter_m3241 (StateMachineBehaviour_t656 * __this, Animator_t207 * ___animator, AnimatorStateInfo_t543  ___stateInfo, int32_t ___layerIndex, MethodInfo* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateUpdate(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
extern MethodInfo StateMachineBehaviour_OnStateUpdate_m3242_MethodInfo;
extern "C" void StateMachineBehaviour_OnStateUpdate_m3242 (StateMachineBehaviour_t656 * __this, Animator_t207 * ___animator, AnimatorStateInfo_t543  ___stateInfo, int32_t ___layerIndex, MethodInfo* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateExit(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
extern MethodInfo StateMachineBehaviour_OnStateExit_m3243_MethodInfo;
extern "C" void StateMachineBehaviour_OnStateExit_m3243 (StateMachineBehaviour_t656 * __this, Animator_t207 * ___animator, AnimatorStateInfo_t543  ___stateInfo, int32_t ___layerIndex, MethodInfo* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateMove(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
extern MethodInfo StateMachineBehaviour_OnStateMove_m3244_MethodInfo;
extern "C" void StateMachineBehaviour_OnStateMove_m3244 (StateMachineBehaviour_t656 * __this, Animator_t207 * ___animator, AnimatorStateInfo_t543  ___stateInfo, int32_t ___layerIndex, MethodInfo* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateIK(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
extern MethodInfo StateMachineBehaviour_OnStateIK_m3245_MethodInfo;
extern "C" void StateMachineBehaviour_OnStateIK_m3245 (StateMachineBehaviour_t656 * __this, Animator_t207 * ___animator, AnimatorStateInfo_t543  ___stateInfo, int32_t ___layerIndex, MethodInfo* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateMachineEnter(UnityEngine.Animator,System.Int32)
extern MethodInfo StateMachineBehaviour_OnStateMachineEnter_m3246_MethodInfo;
extern "C" void StateMachineBehaviour_OnStateMachineEnter_m3246 (StateMachineBehaviour_t656 * __this, Animator_t207 * ___animator, int32_t ___stateMachinePathHash, MethodInfo* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateMachineExit(UnityEngine.Animator,System.Int32)
extern MethodInfo StateMachineBehaviour_OnStateMachineExit_m3247_MethodInfo;
extern "C" void StateMachineBehaviour_OnStateMachineExit_m3247 (StateMachineBehaviour_t656 * __this, Animator_t207 * ___animator, int32_t ___stateMachinePathHash, MethodInfo* method)
{
	{
		return;
	}
}
// UnityEngine.TextEditor/DblClickSnapping
#include "UnityEngine_UnityEngine_TextEditor_DblClickSnapping.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo DblClickSnapping_t657_il2cpp_TypeInfo;
// UnityEngine.TextEditor/DblClickSnapping
#include "UnityEngine_UnityEngine_TextEditor_DblClickSnappingMethodDeclarations.h"



// UnityEngine.TextEditor/TextEditOp
#include "UnityEngine_UnityEngine_TextEditor_TextEditOp.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo TextEditOp_t658_il2cpp_TypeInfo;
// UnityEngine.TextEditor/TextEditOp
#include "UnityEngine_UnityEngine_TextEditor_TextEditOpMethodDeclarations.h"



// UnityEngine.TextEditor
#include "UnityEngine_UnityEngine_TextEditor.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo TextEditor_t302_il2cpp_TypeInfo;
// UnityEngine.TextEditor
#include "UnityEngine_UnityEngine_TextEditorMethodDeclarations.h"

// UnityEngine.GUIContent
#include "UnityEngine_UnityEngine_GUIContent.h"
// UnityEngine.GUIStyle
#include "UnityEngine_UnityEngine_GUIStyle.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.RectOffset
#include "UnityEngine_UnityEngine_RectOffset.h"
extern TypeInfo GUIContent_t303_il2cpp_TypeInfo;
extern TypeInfo GUIStyle_t466_il2cpp_TypeInfo;
extern TypeInfo Rect_t141_il2cpp_TypeInfo;
extern TypeInfo Vector2_t12_il2cpp_TypeInfo;
extern TypeInfo GUIUtility_t479_il2cpp_TypeInfo;
// UnityEngine.GUIContent
#include "UnityEngine_UnityEngine_GUIContentMethodDeclarations.h"
// UnityEngine.GUIStyle
#include "UnityEngine_UnityEngine_GUIStyleMethodDeclarations.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2MethodDeclarations.h"
// UnityEngine.RectOffset
#include "UnityEngine_UnityEngine_RectOffsetMethodDeclarations.h"
// UnityEngine.GUIUtility
#include "UnityEngine_UnityEngine_GUIUtilityMethodDeclarations.h"
extern MethodInfo GUIContent__ctor_m2364_MethodInfo;
extern MethodInfo GUIStyle_get_none_m2411_MethodInfo;
extern MethodInfo Vector2_get_zero_m1350_MethodInfo;
extern MethodInfo TextEditor_SelectAll_m3249_MethodInfo;
extern MethodInfo GUIContent_get_text_m1641_MethodInfo;
extern MethodInfo TextEditor_ClearCursorPos_m3248_MethodInfo;
extern MethodInfo GUIContent_set_text_m2366_MethodInfo;
extern MethodInfo TextEditor_DeleteSelection_m3250_MethodInfo;
extern MethodInfo TextEditor_UpdateScrollOffset_m3252_MethodInfo;
extern MethodInfo Rect_get_width_m1504_MethodInfo;
extern MethodInfo Rect_get_height_m1505_MethodInfo;
extern MethodInfo Rect__ctor_m1748_MethodInfo;
extern MethodInfo GUIStyle_GetCursorPixelPosition_m2412_MethodInfo;
extern MethodInfo GUIStyle_get_padding_m2400_MethodInfo;
extern MethodInfo RectOffset_Remove_m2387_MethodInfo;
extern MethodInfo GUIStyle_CalcSize_m2415_MethodInfo;
extern MethodInfo GUIStyle_CalcHeight_m2417_MethodInfo;
extern MethodInfo Vector2__ctor_m1356_MethodInfo;
extern MethodInfo RectOffset_get_left_m1879_MethodInfo;
extern MethodInfo GUIStyle_get_lineHeight_m2409_MethodInfo;
extern MethodInfo RectOffset_get_top_m1880_MethodInfo;
extern MethodInfo RectOffset_get_bottom_m2385_MethodInfo;
extern MethodInfo GUIUtility_set_systemCopyBuffer_m2296_MethodInfo;
extern MethodInfo GUIUtility_get_systemCopyBuffer_m2295_MethodInfo;
extern MethodInfo String_op_Inequality_m1652_MethodInfo;
extern MethodInfo TextEditor_ReplaceNewlinesWithSpaces_m3253_MethodInfo;
extern MethodInfo TextEditor_ReplaceSelection_m3251_MethodInfo;


// System.Void UnityEngine.TextEditor::.ctor()
extern MethodInfo TextEditor__ctor_m1639_MethodInfo;
extern "C" void TextEditor__ctor_m1639 (TextEditor_t302 * __this, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUIContent_t303_il2cpp_TypeInfo));
		GUIContent_t303 * L_0 = (GUIContent_t303 *)il2cpp_codegen_object_new (InitializedTypeInfo(&GUIContent_t303_il2cpp_TypeInfo));
		GUIContent__ctor_m2364(L_0, /*hidden argument*/&GUIContent__ctor_m2364_MethodInfo);
		__this->___content_4 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUIStyle_t466_il2cpp_TypeInfo));
		GUIStyle_t466 * L_1 = GUIStyle_get_none_m2411(NULL /*static, unused*/, /*hidden argument*/&GUIStyle_get_none_m2411_MethodInfo);
		__this->___style_5 = L_1;
		Vector2_t12  L_2 = Vector2_get_zero_m1350(NULL /*static, unused*/, /*hidden argument*/&Vector2_get_zero_m1350_MethodInfo);
		__this->___scrollOffset_11 = L_2;
		__this->___m_iAltCursorPos_19 = (-1);
		Object__ctor_m1289(__this, /*hidden argument*/&Object__ctor_m1289_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.TextEditor::ClearCursorPos()
extern "C" void TextEditor_ClearCursorPos_m3248 (TextEditor_t302 * __this, MethodInfo* method)
{
	{
		__this->___hasHorizontalCursorPos_8 = 0;
		__this->___m_iAltCursorPos_19 = (-1);
		return;
	}
}
// System.Void UnityEngine.TextEditor::OnFocus()
extern MethodInfo TextEditor_OnFocus_m1643_MethodInfo;
extern "C" void TextEditor_OnFocus_m1643 (TextEditor_t302 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		bool L_0 = (__this->___multiline_7);
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_1 = 0;
		V_0 = L_1;
		__this->___selectPos_2 = L_1;
		int32_t L_2 = V_0;
		__this->___pos_1 = L_2;
		goto IL_0026;
	}

IL_0020:
	{
		TextEditor_SelectAll_m3249(__this, /*hidden argument*/&TextEditor_SelectAll_m3249_MethodInfo);
	}

IL_0026:
	{
		__this->___m_HasFocus_10 = 1;
		return;
	}
}
// System.Void UnityEngine.TextEditor::SelectAll()
extern "C" void TextEditor_SelectAll_m3249 (TextEditor_t302 * __this, MethodInfo* method)
{
	{
		__this->___pos_1 = 0;
		GUIContent_t303 * L_0 = (__this->___content_4);
		NullCheck(L_0);
		String_t* L_1 = GUIContent_get_text_m1641(L_0, /*hidden argument*/&GUIContent_get_text_m1641_MethodInfo);
		NullCheck(L_1);
		int32_t L_2 = String_get_Length_m1637(L_1, /*hidden argument*/&String_get_Length_m1637_MethodInfo);
		__this->___selectPos_2 = L_2;
		TextEditor_ClearCursorPos_m3248(__this, /*hidden argument*/&TextEditor_ClearCursorPos_m3248_MethodInfo);
		return;
	}
}
// System.Boolean UnityEngine.TextEditor::DeleteSelection()
extern "C" bool TextEditor_DeleteSelection_m3250 (TextEditor_t302 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		GUIContent_t303 * L_0 = (__this->___content_4);
		NullCheck(L_0);
		String_t* L_1 = GUIContent_get_text_m1641(L_0, /*hidden argument*/&GUIContent_get_text_m1641_MethodInfo);
		NullCheck(L_1);
		int32_t L_2 = String_get_Length_m1637(L_1, /*hidden argument*/&String_get_Length_m1637_MethodInfo);
		V_0 = L_2;
		int32_t L_3 = (__this->___pos_1);
		int32_t L_4 = V_0;
		if ((((int32_t)L_3) <= ((int32_t)L_4)))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_5 = V_0;
		__this->___pos_1 = L_5;
	}

IL_0024:
	{
		int32_t L_6 = (__this->___selectPos_2);
		int32_t L_7 = V_0;
		if ((((int32_t)L_6) <= ((int32_t)L_7)))
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_8 = V_0;
		__this->___selectPos_2 = L_8;
	}

IL_0037:
	{
		int32_t L_9 = (__this->___pos_1);
		int32_t L_10 = (__this->___selectPos_2);
		if ((!(((uint32_t)L_9) == ((uint32_t)L_10))))
		{
			goto IL_004a;
		}
	}
	{
		return 0;
	}

IL_004a:
	{
		int32_t L_11 = (__this->___pos_1);
		int32_t L_12 = (__this->___selectPos_2);
		if ((((int32_t)L_11) >= ((int32_t)L_12)))
		{
			goto IL_00c0;
		}
	}
	{
		GUIContent_t303 * L_13 = (__this->___content_4);
		GUIContent_t303 * L_14 = (__this->___content_4);
		NullCheck(L_14);
		String_t* L_15 = GUIContent_get_text_m1641(L_14, /*hidden argument*/&GUIContent_get_text_m1641_MethodInfo);
		int32_t L_16 = (__this->___pos_1);
		NullCheck(L_15);
		String_t* L_17 = String_Substring_m1654(L_15, 0, L_16, /*hidden argument*/&String_Substring_m1654_MethodInfo);
		GUIContent_t303 * L_18 = (__this->___content_4);
		NullCheck(L_18);
		String_t* L_19 = GUIContent_get_text_m1641(L_18, /*hidden argument*/&GUIContent_get_text_m1641_MethodInfo);
		int32_t L_20 = (__this->___selectPos_2);
		GUIContent_t303 * L_21 = (__this->___content_4);
		NullCheck(L_21);
		String_t* L_22 = GUIContent_get_text_m1641(L_21, /*hidden argument*/&GUIContent_get_text_m1641_MethodInfo);
		NullCheck(L_22);
		int32_t L_23 = String_get_Length_m1637(L_22, /*hidden argument*/&String_get_Length_m1637_MethodInfo);
		int32_t L_24 = (__this->___selectPos_2);
		NullCheck(L_19);
		String_t* L_25 = String_Substring_m1654(L_19, L_20, ((int32_t)((int32_t)L_23-(int32_t)L_24)), /*hidden argument*/&String_Substring_m1654_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_26 = String_Concat_m1678(NULL /*static, unused*/, L_17, L_25, /*hidden argument*/&String_Concat_m1678_MethodInfo);
		NullCheck(L_13);
		GUIContent_set_text_m2366(L_13, L_26, /*hidden argument*/&GUIContent_set_text_m2366_MethodInfo);
		int32_t L_27 = (__this->___pos_1);
		__this->___selectPos_2 = L_27;
		goto IL_0120;
	}

IL_00c0:
	{
		GUIContent_t303 * L_28 = (__this->___content_4);
		GUIContent_t303 * L_29 = (__this->___content_4);
		NullCheck(L_29);
		String_t* L_30 = GUIContent_get_text_m1641(L_29, /*hidden argument*/&GUIContent_get_text_m1641_MethodInfo);
		int32_t L_31 = (__this->___selectPos_2);
		NullCheck(L_30);
		String_t* L_32 = String_Substring_m1654(L_30, 0, L_31, /*hidden argument*/&String_Substring_m1654_MethodInfo);
		GUIContent_t303 * L_33 = (__this->___content_4);
		NullCheck(L_33);
		String_t* L_34 = GUIContent_get_text_m1641(L_33, /*hidden argument*/&GUIContent_get_text_m1641_MethodInfo);
		int32_t L_35 = (__this->___pos_1);
		GUIContent_t303 * L_36 = (__this->___content_4);
		NullCheck(L_36);
		String_t* L_37 = GUIContent_get_text_m1641(L_36, /*hidden argument*/&GUIContent_get_text_m1641_MethodInfo);
		NullCheck(L_37);
		int32_t L_38 = String_get_Length_m1637(L_37, /*hidden argument*/&String_get_Length_m1637_MethodInfo);
		int32_t L_39 = (__this->___pos_1);
		NullCheck(L_34);
		String_t* L_40 = String_Substring_m1654(L_34, L_35, ((int32_t)((int32_t)L_38-(int32_t)L_39)), /*hidden argument*/&String_Substring_m1654_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_41 = String_Concat_m1678(NULL /*static, unused*/, L_32, L_40, /*hidden argument*/&String_Concat_m1678_MethodInfo);
		NullCheck(L_28);
		GUIContent_set_text_m2366(L_28, L_41, /*hidden argument*/&GUIContent_set_text_m2366_MethodInfo);
		int32_t L_42 = (__this->___selectPos_2);
		__this->___pos_1 = L_42;
	}

IL_0120:
	{
		TextEditor_ClearCursorPos_m3248(__this, /*hidden argument*/&TextEditor_ClearCursorPos_m3248_MethodInfo);
		return 1;
	}
}
// System.Void UnityEngine.TextEditor::ReplaceSelection(System.String)
extern "C" void TextEditor_ReplaceSelection_m3251 (TextEditor_t302 * __this, String_t* ___replace, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		TextEditor_DeleteSelection_m3250(__this, /*hidden argument*/&TextEditor_DeleteSelection_m3250_MethodInfo);
		GUIContent_t303 * L_0 = (__this->___content_4);
		GUIContent_t303 * L_1 = (__this->___content_4);
		NullCheck(L_1);
		String_t* L_2 = GUIContent_get_text_m1641(L_1, /*hidden argument*/&GUIContent_get_text_m1641_MethodInfo);
		int32_t L_3 = (__this->___pos_1);
		String_t* L_4 = ___replace;
		NullCheck(L_2);
		String_t* L_5 = String_Insert_m1681(L_2, L_3, L_4, /*hidden argument*/&String_Insert_m1681_MethodInfo);
		NullCheck(L_0);
		GUIContent_set_text_m2366(L_0, L_5, /*hidden argument*/&GUIContent_set_text_m2366_MethodInfo);
		int32_t L_6 = (__this->___pos_1);
		String_t* L_7 = ___replace;
		NullCheck(L_7);
		int32_t L_8 = String_get_Length_m1637(L_7, /*hidden argument*/&String_get_Length_m1637_MethodInfo);
		int32_t L_9 = ((int32_t)((int32_t)L_6+(int32_t)L_8));
		V_0 = L_9;
		__this->___pos_1 = L_9;
		int32_t L_10 = V_0;
		__this->___selectPos_2 = L_10;
		TextEditor_ClearCursorPos_m3248(__this, /*hidden argument*/&TextEditor_ClearCursorPos_m3248_MethodInfo);
		TextEditor_UpdateScrollOffset_m3252(__this, /*hidden argument*/&TextEditor_UpdateScrollOffset_m3252_MethodInfo);
		__this->___m_TextHeightPotentiallyChanged_12 = 1;
		return;
	}
}
// System.Void UnityEngine.TextEditor::UpdateScrollOffset()
extern "C" void TextEditor_UpdateScrollOffset_m3252 (TextEditor_t302 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	Rect_t141  V_1 = {0};
	Vector2_t12  V_2 = {0};
	Vector2_t12  V_3 = {0};
	Vector2_t12 * G_B17_0 = {0};
	Vector2_t12 * G_B16_0 = {0};
	float G_B18_0 = 0.0f;
	Vector2_t12 * G_B18_1 = {0};
	{
		int32_t L_0 = (__this->___pos_1);
		V_0 = L_0;
		GUIStyle_t466 * L_1 = (__this->___style_5);
		Rect_t141 * L_2 = &(__this->___position_6);
		float L_3 = Rect_get_width_m1504(L_2, /*hidden argument*/&Rect_get_width_m1504_MethodInfo);
		Rect_t141 * L_4 = &(__this->___position_6);
		float L_5 = Rect_get_height_m1505(L_4, /*hidden argument*/&Rect_get_height_m1505_MethodInfo);
		Rect_t141  L_6 = {0};
		Rect__ctor_m1748(&L_6, (0.0f), (0.0f), L_3, L_5, /*hidden argument*/&Rect__ctor_m1748_MethodInfo);
		GUIContent_t303 * L_7 = (__this->___content_4);
		int32_t L_8 = V_0;
		NullCheck(L_1);
		Vector2_t12  L_9 = GUIStyle_GetCursorPixelPosition_m2412(L_1, L_6, L_7, L_8, /*hidden argument*/&GUIStyle_GetCursorPixelPosition_m2412_MethodInfo);
		__this->___graphicalCursorPos_13 = L_9;
		GUIStyle_t466 * L_10 = (__this->___style_5);
		NullCheck(L_10);
		RectOffset_t242 * L_11 = GUIStyle_get_padding_m2400(L_10, /*hidden argument*/&GUIStyle_get_padding_m2400_MethodInfo);
		Rect_t141  L_12 = (__this->___position_6);
		NullCheck(L_11);
		Rect_t141  L_13 = RectOffset_Remove_m2387(L_11, L_12, /*hidden argument*/&RectOffset_Remove_m2387_MethodInfo);
		V_1 = L_13;
		GUIStyle_t466 * L_14 = (__this->___style_5);
		GUIContent_t303 * L_15 = (__this->___content_4);
		NullCheck(L_14);
		Vector2_t12  L_16 = GUIStyle_CalcSize_m2415(L_14, L_15, /*hidden argument*/&GUIStyle_CalcSize_m2415_MethodInfo);
		V_3 = L_16;
		float L_17 = ((&V_3)->___x_1);
		GUIStyle_t466 * L_18 = (__this->___style_5);
		GUIContent_t303 * L_19 = (__this->___content_4);
		Rect_t141 * L_20 = &(__this->___position_6);
		float L_21 = Rect_get_width_m1504(L_20, /*hidden argument*/&Rect_get_width_m1504_MethodInfo);
		NullCheck(L_18);
		float L_22 = GUIStyle_CalcHeight_m2417(L_18, L_19, L_21, /*hidden argument*/&GUIStyle_CalcHeight_m2417_MethodInfo);
		Vector2__ctor_m1356((&V_2), L_17, L_22, /*hidden argument*/&Vector2__ctor_m1356_MethodInfo);
		float L_23 = ((&V_2)->___x_1);
		Rect_t141 * L_24 = &(__this->___position_6);
		float L_25 = Rect_get_width_m1504(L_24, /*hidden argument*/&Rect_get_width_m1504_MethodInfo);
		if ((!(((float)L_23) < ((float)L_25))))
		{
			goto IL_00c3;
		}
	}
	{
		Vector2_t12 * L_26 = &(__this->___scrollOffset_11);
		L_26->___x_1 = (0.0f);
		goto IL_015f;
	}

IL_00c3:
	{
		Vector2_t12 * L_27 = &(__this->___graphicalCursorPos_13);
		float L_28 = (L_27->___x_1);
		Vector2_t12 * L_29 = &(__this->___scrollOffset_11);
		float L_30 = (L_29->___x_1);
		float L_31 = Rect_get_width_m1504((&V_1), /*hidden argument*/&Rect_get_width_m1504_MethodInfo);
		if ((!(((float)((float)((float)L_28+(float)(1.0f)))) > ((float)((float)((float)L_30+(float)L_31))))))
		{
			goto IL_010a;
		}
	}
	{
		Vector2_t12 * L_32 = &(__this->___scrollOffset_11);
		Vector2_t12 * L_33 = &(__this->___graphicalCursorPos_13);
		float L_34 = (L_33->___x_1);
		float L_35 = Rect_get_width_m1504((&V_1), /*hidden argument*/&Rect_get_width_m1504_MethodInfo);
		L_32->___x_1 = ((float)((float)L_34-(float)L_35));
	}

IL_010a:
	{
		Vector2_t12 * L_36 = &(__this->___graphicalCursorPos_13);
		float L_37 = (L_36->___x_1);
		Vector2_t12 * L_38 = &(__this->___scrollOffset_11);
		float L_39 = (L_38->___x_1);
		GUIStyle_t466 * L_40 = (__this->___style_5);
		NullCheck(L_40);
		RectOffset_t242 * L_41 = GUIStyle_get_padding_m2400(L_40, /*hidden argument*/&GUIStyle_get_padding_m2400_MethodInfo);
		NullCheck(L_41);
		int32_t L_42 = RectOffset_get_left_m1879(L_41, /*hidden argument*/&RectOffset_get_left_m1879_MethodInfo);
		if ((!(((float)L_37) < ((float)((float)((float)L_39+(float)(((float)L_42))))))))
		{
			goto IL_015f;
		}
	}
	{
		Vector2_t12 * L_43 = &(__this->___scrollOffset_11);
		Vector2_t12 * L_44 = &(__this->___graphicalCursorPos_13);
		float L_45 = (L_44->___x_1);
		GUIStyle_t466 * L_46 = (__this->___style_5);
		NullCheck(L_46);
		RectOffset_t242 * L_47 = GUIStyle_get_padding_m2400(L_46, /*hidden argument*/&GUIStyle_get_padding_m2400_MethodInfo);
		NullCheck(L_47);
		int32_t L_48 = RectOffset_get_left_m1879(L_47, /*hidden argument*/&RectOffset_get_left_m1879_MethodInfo);
		L_43->___x_1 = ((float)((float)L_45-(float)(((float)L_48))));
	}

IL_015f:
	{
		float L_49 = ((&V_2)->___y_2);
		float L_50 = Rect_get_height_m1505((&V_1), /*hidden argument*/&Rect_get_height_m1505_MethodInfo);
		if ((!(((float)L_49) < ((float)L_50))))
		{
			goto IL_0187;
		}
	}
	{
		Vector2_t12 * L_51 = &(__this->___scrollOffset_11);
		L_51->___y_2 = (0.0f);
		goto IL_0259;
	}

IL_0187:
	{
		Vector2_t12 * L_52 = &(__this->___graphicalCursorPos_13);
		float L_53 = (L_52->___y_2);
		GUIStyle_t466 * L_54 = (__this->___style_5);
		NullCheck(L_54);
		float L_55 = GUIStyle_get_lineHeight_m2409(L_54, /*hidden argument*/&GUIStyle_get_lineHeight_m2409_MethodInfo);
		Vector2_t12 * L_56 = &(__this->___scrollOffset_11);
		float L_57 = (L_56->___y_2);
		float L_58 = Rect_get_height_m1505((&V_1), /*hidden argument*/&Rect_get_height_m1505_MethodInfo);
		GUIStyle_t466 * L_59 = (__this->___style_5);
		NullCheck(L_59);
		RectOffset_t242 * L_60 = GUIStyle_get_padding_m2400(L_59, /*hidden argument*/&GUIStyle_get_padding_m2400_MethodInfo);
		NullCheck(L_60);
		int32_t L_61 = RectOffset_get_top_m1880(L_60, /*hidden argument*/&RectOffset_get_top_m1880_MethodInfo);
		if ((!(((float)((float)((float)L_53+(float)L_55))) > ((float)((float)((float)((float)((float)L_57+(float)L_58))+(float)(((float)L_61))))))))
		{
			goto IL_0204;
		}
	}
	{
		Vector2_t12 * L_62 = &(__this->___scrollOffset_11);
		Vector2_t12 * L_63 = &(__this->___graphicalCursorPos_13);
		float L_64 = (L_63->___y_2);
		float L_65 = Rect_get_height_m1505((&V_1), /*hidden argument*/&Rect_get_height_m1505_MethodInfo);
		GUIStyle_t466 * L_66 = (__this->___style_5);
		NullCheck(L_66);
		RectOffset_t242 * L_67 = GUIStyle_get_padding_m2400(L_66, /*hidden argument*/&GUIStyle_get_padding_m2400_MethodInfo);
		NullCheck(L_67);
		int32_t L_68 = RectOffset_get_top_m1880(L_67, /*hidden argument*/&RectOffset_get_top_m1880_MethodInfo);
		GUIStyle_t466 * L_69 = (__this->___style_5);
		NullCheck(L_69);
		float L_70 = GUIStyle_get_lineHeight_m2409(L_69, /*hidden argument*/&GUIStyle_get_lineHeight_m2409_MethodInfo);
		L_62->___y_2 = ((float)((float)((float)((float)((float)((float)L_64-(float)L_65))-(float)(((float)L_68))))+(float)L_70));
	}

IL_0204:
	{
		Vector2_t12 * L_71 = &(__this->___graphicalCursorPos_13);
		float L_72 = (L_71->___y_2);
		Vector2_t12 * L_73 = &(__this->___scrollOffset_11);
		float L_74 = (L_73->___y_2);
		GUIStyle_t466 * L_75 = (__this->___style_5);
		NullCheck(L_75);
		RectOffset_t242 * L_76 = GUIStyle_get_padding_m2400(L_75, /*hidden argument*/&GUIStyle_get_padding_m2400_MethodInfo);
		NullCheck(L_76);
		int32_t L_77 = RectOffset_get_top_m1880(L_76, /*hidden argument*/&RectOffset_get_top_m1880_MethodInfo);
		if ((!(((float)L_72) < ((float)((float)((float)L_74+(float)(((float)L_77))))))))
		{
			goto IL_0259;
		}
	}
	{
		Vector2_t12 * L_78 = &(__this->___scrollOffset_11);
		Vector2_t12 * L_79 = &(__this->___graphicalCursorPos_13);
		float L_80 = (L_79->___y_2);
		GUIStyle_t466 * L_81 = (__this->___style_5);
		NullCheck(L_81);
		RectOffset_t242 * L_82 = GUIStyle_get_padding_m2400(L_81, /*hidden argument*/&GUIStyle_get_padding_m2400_MethodInfo);
		NullCheck(L_82);
		int32_t L_83 = RectOffset_get_top_m1880(L_82, /*hidden argument*/&RectOffset_get_top_m1880_MethodInfo);
		L_78->___y_2 = ((float)((float)L_80-(float)(((float)L_83))));
	}

IL_0259:
	{
		Vector2_t12 * L_84 = &(__this->___scrollOffset_11);
		float L_85 = (L_84->___y_2);
		if ((!(((float)L_85) > ((float)(0.0f)))))
		{
			goto IL_02cb;
		}
	}
	{
		float L_86 = ((&V_2)->___y_2);
		Vector2_t12 * L_87 = &(__this->___scrollOffset_11);
		float L_88 = (L_87->___y_2);
		float L_89 = Rect_get_height_m1505((&V_1), /*hidden argument*/&Rect_get_height_m1505_MethodInfo);
		if ((!(((float)((float)((float)L_86-(float)L_88))) < ((float)L_89))))
		{
			goto IL_02cb;
		}
	}
	{
		Vector2_t12 * L_90 = &(__this->___scrollOffset_11);
		float L_91 = ((&V_2)->___y_2);
		float L_92 = Rect_get_height_m1505((&V_1), /*hidden argument*/&Rect_get_height_m1505_MethodInfo);
		GUIStyle_t466 * L_93 = (__this->___style_5);
		NullCheck(L_93);
		RectOffset_t242 * L_94 = GUIStyle_get_padding_m2400(L_93, /*hidden argument*/&GUIStyle_get_padding_m2400_MethodInfo);
		NullCheck(L_94);
		int32_t L_95 = RectOffset_get_top_m1880(L_94, /*hidden argument*/&RectOffset_get_top_m1880_MethodInfo);
		GUIStyle_t466 * L_96 = (__this->___style_5);
		NullCheck(L_96);
		RectOffset_t242 * L_97 = GUIStyle_get_padding_m2400(L_96, /*hidden argument*/&GUIStyle_get_padding_m2400_MethodInfo);
		NullCheck(L_97);
		int32_t L_98 = RectOffset_get_bottom_m2385(L_97, /*hidden argument*/&RectOffset_get_bottom_m2385_MethodInfo);
		L_90->___y_2 = ((float)((float)((float)((float)((float)((float)L_91-(float)L_92))-(float)(((float)L_95))))-(float)(((float)L_98))));
	}

IL_02cb:
	{
		Vector2_t12 * L_99 = &(__this->___scrollOffset_11);
		Vector2_t12 * L_100 = &(__this->___scrollOffset_11);
		float L_101 = (L_100->___y_2);
		G_B16_0 = L_99;
		if ((!(((float)L_101) < ((float)(0.0f)))))
		{
			G_B17_0 = L_99;
			goto IL_02f0;
		}
	}
	{
		G_B18_0 = (0.0f);
		G_B18_1 = G_B16_0;
		goto IL_02fb;
	}

IL_02f0:
	{
		Vector2_t12 * L_102 = &(__this->___scrollOffset_11);
		float L_103 = (L_102->___y_2);
		G_B18_0 = L_103;
		G_B18_1 = G_B17_0;
	}

IL_02fb:
	{
		G_B18_1->___y_2 = G_B18_0;
		return;
	}
}
// System.Void UnityEngine.TextEditor::Copy()
extern MethodInfo TextEditor_Copy_m1644_MethodInfo;
extern "C" void TextEditor_Copy_m1644 (TextEditor_t302 * __this, MethodInfo* method)
{
	String_t* V_0 = {0};
	{
		int32_t L_0 = (__this->___selectPos_2);
		int32_t L_1 = (__this->___pos_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		bool L_2 = (__this->___isPasswordField_9);
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		return;
	}

IL_001e:
	{
		int32_t L_3 = (__this->___pos_1);
		int32_t L_4 = (__this->___selectPos_2);
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0058;
		}
	}
	{
		GUIContent_t303 * L_5 = (__this->___content_4);
		NullCheck(L_5);
		String_t* L_6 = GUIContent_get_text_m1641(L_5, /*hidden argument*/&GUIContent_get_text_m1641_MethodInfo);
		int32_t L_7 = (__this->___pos_1);
		int32_t L_8 = (__this->___selectPos_2);
		int32_t L_9 = (__this->___pos_1);
		NullCheck(L_6);
		String_t* L_10 = String_Substring_m1654(L_6, L_7, ((int32_t)((int32_t)L_8-(int32_t)L_9)), /*hidden argument*/&String_Substring_m1654_MethodInfo);
		V_0 = L_10;
		goto IL_007c;
	}

IL_0058:
	{
		GUIContent_t303 * L_11 = (__this->___content_4);
		NullCheck(L_11);
		String_t* L_12 = GUIContent_get_text_m1641(L_11, /*hidden argument*/&GUIContent_get_text_m1641_MethodInfo);
		int32_t L_13 = (__this->___selectPos_2);
		int32_t L_14 = (__this->___pos_1);
		int32_t L_15 = (__this->___selectPos_2);
		NullCheck(L_12);
		String_t* L_16 = String_Substring_m1654(L_12, L_13, ((int32_t)((int32_t)L_14-(int32_t)L_15)), /*hidden argument*/&String_Substring_m1654_MethodInfo);
		V_0 = L_16;
	}

IL_007c:
	{
		String_t* L_17 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUIUtility_t479_il2cpp_TypeInfo));
		GUIUtility_set_systemCopyBuffer_m2296(NULL /*static, unused*/, L_17, /*hidden argument*/&GUIUtility_set_systemCopyBuffer_m2296_MethodInfo);
		return;
	}
}
// System.String UnityEngine.TextEditor::ReplaceNewlinesWithSpaces(System.String)
extern "C" String_t* TextEditor_ReplaceNewlinesWithSpaces_m3253 (Object_t * __this /* static, unused */, String_t* ___value, MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		NullCheck(L_0);
		String_t* L_1 = String_Replace_m3563(L_0, (String_t*) &_stringLiteral168, (String_t*) &_stringLiteral89, /*hidden argument*/&String_Replace_m3563_MethodInfo);
		___value = L_1;
		String_t* L_2 = ___value;
		NullCheck(L_2);
		String_t* L_3 = String_Replace_m3564(L_2, ((int32_t)10), ((int32_t)32), /*hidden argument*/&String_Replace_m3564_MethodInfo);
		___value = L_3;
		String_t* L_4 = ___value;
		NullCheck(L_4);
		String_t* L_5 = String_Replace_m3564(L_4, ((int32_t)13), ((int32_t)32), /*hidden argument*/&String_Replace_m3564_MethodInfo);
		___value = L_5;
		String_t* L_6 = ___value;
		return L_6;
	}
}
// System.Boolean UnityEngine.TextEditor::Paste()
extern MethodInfo TextEditor_Paste_m1640_MethodInfo;
extern "C" bool TextEditor_Paste_m1640 (TextEditor_t302 * __this, MethodInfo* method)
{
	String_t* V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUIUtility_t479_il2cpp_TypeInfo));
		String_t* L_0 = GUIUtility_get_systemCopyBuffer_m2295(NULL /*static, unused*/, /*hidden argument*/&GUIUtility_get_systemCopyBuffer_m2295_MethodInfo);
		V_0 = L_0;
		String_t* L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_2 = ((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2;
		bool L_3 = String_op_Inequality_m1652(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/&String_op_Inequality_m1652_MethodInfo);
		if (!L_3)
		{
			goto IL_0031;
		}
	}
	{
		bool L_4 = (__this->___multiline_7);
		if (L_4)
		{
			goto IL_0028;
		}
	}
	{
		String_t* L_5 = V_0;
		String_t* L_6 = TextEditor_ReplaceNewlinesWithSpaces_m3253(NULL /*static, unused*/, L_5, /*hidden argument*/&TextEditor_ReplaceNewlinesWithSpaces_m3253_MethodInfo);
		V_0 = L_6;
	}

IL_0028:
	{
		String_t* L_7 = V_0;
		TextEditor_ReplaceSelection_m3251(__this, L_7, /*hidden argument*/&TextEditor_ReplaceSelection_m3251_MethodInfo);
		return 1;
	}

IL_0031:
	{
		return 0;
	}
}
// UnityEngine.TextGenerationSettings
#include "UnityEngine_UnityEngine_TextGenerationSettings.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo TextGenerationSettings_t216_il2cpp_TypeInfo;
// UnityEngine.TextGenerationSettings
#include "UnityEngine_UnityEngine_TextGenerationSettingsMethodDeclarations.h"

// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// UnityEngine.Color32
#include "UnityEngine_UnityEngine_Color32.h"
// System.ValueType
#include "mscorlib_System_ValueType.h"
// UnityEngine.FontStyle
#include "UnityEngine_UnityEngine_FontStyle.h"
// UnityEngine.TextAnchor
#include "UnityEngine_UnityEngine_TextAnchor.h"
// UnityEngine.HorizontalWrapMode
#include "UnityEngine_UnityEngine_HorizontalWrapMode.h"
// UnityEngine.VerticalWrapMode
#include "UnityEngine_UnityEngine_VerticalWrapMode.h"
// UnityEngine.Font
#include "UnityEngine_UnityEngine_Font.h"
extern TypeInfo Color32_t264_il2cpp_TypeInfo;
extern TypeInfo ValueType_t357_il2cpp_TypeInfo;
// UnityEngine.Color32
#include "UnityEngine_UnityEngine_Color32MethodDeclarations.h"
// System.ValueType
#include "mscorlib_System_ValueTypeMethodDeclarations.h"
extern MethodInfo Color32_op_Implicit_m1512_MethodInfo;
extern MethodInfo ValueType_Equals_m1993_MethodInfo;
extern MethodInfo TextGenerationSettings_CompareColors_m3254_MethodInfo;
extern MethodInfo TextGenerationSettings_CompareVector2_m3255_MethodInfo;


// System.Boolean UnityEngine.TextGenerationSettings::CompareColors(UnityEngine.Color,UnityEngine.Color)
extern "C" bool TextGenerationSettings_CompareColors_m3254 (TextGenerationSettings_t216 * __this, Color_t109  ___left, Color_t109  ___right, MethodInfo* method)
{
	Color32_t264  V_0 = {0};
	Color32_t264  V_1 = {0};
	{
		Color_t109  L_0 = ___left;
		Color32_t264  L_1 = Color32_op_Implicit_m1512(NULL /*static, unused*/, L_0, /*hidden argument*/&Color32_op_Implicit_m1512_MethodInfo);
		V_0 = L_1;
		Color_t109  L_2 = ___right;
		Color32_t264  L_3 = Color32_op_Implicit_m1512(NULL /*static, unused*/, L_2, /*hidden argument*/&Color32_op_Implicit_m1512_MethodInfo);
		V_1 = L_3;
		Color32_t264  L_4 = V_0;
		Color32_t264  L_5 = L_4;
		Object_t * L_6 = Box(InitializedTypeInfo(&Color32_t264_il2cpp_TypeInfo), &L_5);
		Color32_t264  L_7 = V_1;
		Color32_t264  L_8 = L_7;
		Object_t * L_9 = Box(InitializedTypeInfo(&Color32_t264_il2cpp_TypeInfo), &L_8);
		NullCheck(L_6);
		bool L_10 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(&ValueType_Equals_m1993_MethodInfo, L_6, L_9);
		return L_10;
	}
}
// System.Boolean UnityEngine.TextGenerationSettings::CompareVector2(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C" bool TextGenerationSettings_CompareVector2_m3255 (TextGenerationSettings_t216 * __this, Vector2_t12  ___left, Vector2_t12  ___right, MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		float L_0 = ((&___left)->___x_1);
		float L_1 = ((&___right)->___x_1);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t270_il2cpp_TypeInfo));
		bool L_2 = Mathf_Approximately_m1400(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Mathf_Approximately_m1400_MethodInfo);
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		float L_3 = ((&___left)->___y_2);
		float L_4 = ((&___right)->___y_2);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t270_il2cpp_TypeInfo));
		bool L_5 = Mathf_Approximately_m1400(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/&Mathf_Approximately_m1400_MethodInfo);
		G_B3_0 = ((int32_t)(L_5));
		goto IL_002e;
	}

IL_002d:
	{
		G_B3_0 = 0;
	}

IL_002e:
	{
		return G_B3_0;
	}
}
// System.Boolean UnityEngine.TextGenerationSettings::Equals(UnityEngine.TextGenerationSettings)
extern MethodInfo TextGenerationSettings_Equals_m3256_MethodInfo;
extern "C" bool TextGenerationSettings_Equals_m3256 (TextGenerationSettings_t216 * __this, TextGenerationSettings_t216  ___other, MethodInfo* method)
{
	int32_t G_B20_0 = 0;
	{
		Color_t109  L_0 = (__this->___color_1);
		Color_t109  L_1 = ((&___other)->___color_1);
		bool L_2 = TextGenerationSettings_CompareColors_m3254(__this, L_0, L_1, /*hidden argument*/&TextGenerationSettings_CompareColors_m3254_MethodInfo);
		if (!L_2)
		{
			goto IL_0174;
		}
	}
	{
		int32_t L_3 = (__this->___fontSize_2);
		int32_t L_4 = ((&___other)->___fontSize_2);
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_0174;
		}
	}
	{
		float L_5 = (__this->___scaleFactor_5);
		float L_6 = ((&___other)->___scaleFactor_5);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t270_il2cpp_TypeInfo));
		bool L_7 = Mathf_Approximately_m1400(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/&Mathf_Approximately_m1400_MethodInfo);
		if (!L_7)
		{
			goto IL_0174;
		}
	}
	{
		int32_t L_8 = (__this->___resizeTextMinSize_9);
		int32_t L_9 = ((&___other)->___resizeTextMinSize_9);
		if ((!(((uint32_t)L_8) == ((uint32_t)L_9))))
		{
			goto IL_0174;
		}
	}
	{
		int32_t L_10 = (__this->___resizeTextMaxSize_10);
		int32_t L_11 = ((&___other)->___resizeTextMaxSize_10);
		if ((!(((uint32_t)L_10) == ((uint32_t)L_11))))
		{
			goto IL_0174;
		}
	}
	{
		float L_12 = (__this->___lineSpacing_3);
		float L_13 = ((&___other)->___lineSpacing_3);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t270_il2cpp_TypeInfo));
		bool L_14 = Mathf_Approximately_m1400(NULL /*static, unused*/, L_12, L_13, /*hidden argument*/&Mathf_Approximately_m1400_MethodInfo);
		if (!L_14)
		{
			goto IL_0174;
		}
	}
	{
		int32_t L_15 = (__this->___fontStyle_6);
		int32_t L_16 = ((&___other)->___fontStyle_6);
		if ((!(((uint32_t)L_15) == ((uint32_t)L_16))))
		{
			goto IL_0174;
		}
	}
	{
		bool L_17 = (__this->___richText_4);
		bool L_18 = ((&___other)->___richText_4);
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_0174;
		}
	}
	{
		int32_t L_19 = (__this->___textAnchor_7);
		int32_t L_20 = ((&___other)->___textAnchor_7);
		if ((!(((uint32_t)L_19) == ((uint32_t)L_20))))
		{
			goto IL_0174;
		}
	}
	{
		bool L_21 = (__this->___resizeTextForBestFit_8);
		bool L_22 = ((&___other)->___resizeTextForBestFit_8);
		if ((!(((uint32_t)L_21) == ((uint32_t)L_22))))
		{
			goto IL_0174;
		}
	}
	{
		int32_t L_23 = (__this->___resizeTextMinSize_9);
		int32_t L_24 = ((&___other)->___resizeTextMinSize_9);
		if ((!(((uint32_t)L_23) == ((uint32_t)L_24))))
		{
			goto IL_0174;
		}
	}
	{
		int32_t L_25 = (__this->___resizeTextMaxSize_10);
		int32_t L_26 = ((&___other)->___resizeTextMaxSize_10);
		if ((!(((uint32_t)L_25) == ((uint32_t)L_26))))
		{
			goto IL_0174;
		}
	}
	{
		bool L_27 = (__this->___resizeTextForBestFit_8);
		bool L_28 = ((&___other)->___resizeTextForBestFit_8);
		if ((!(((uint32_t)L_27) == ((uint32_t)L_28))))
		{
			goto IL_0174;
		}
	}
	{
		bool L_29 = (__this->___updateBounds_11);
		bool L_30 = ((&___other)->___updateBounds_11);
		if ((!(((uint32_t)L_29) == ((uint32_t)L_30))))
		{
			goto IL_0174;
		}
	}
	{
		int32_t L_31 = (__this->___horizontalOverflow_13);
		int32_t L_32 = ((&___other)->___horizontalOverflow_13);
		if ((!(((uint32_t)L_31) == ((uint32_t)L_32))))
		{
			goto IL_0174;
		}
	}
	{
		int32_t L_33 = (__this->___verticalOverflow_12);
		int32_t L_34 = ((&___other)->___verticalOverflow_12);
		if ((!(((uint32_t)L_33) == ((uint32_t)L_34))))
		{
			goto IL_0174;
		}
	}
	{
		Vector2_t12  L_35 = (__this->___generationExtents_14);
		Vector2_t12  L_36 = ((&___other)->___generationExtents_14);
		bool L_37 = TextGenerationSettings_CompareVector2_m3255(__this, L_35, L_36, /*hidden argument*/&TextGenerationSettings_CompareVector2_m3255_MethodInfo);
		if (!L_37)
		{
			goto IL_0174;
		}
	}
	{
		Vector2_t12  L_38 = (__this->___pivot_15);
		Vector2_t12  L_39 = ((&___other)->___pivot_15);
		bool L_40 = TextGenerationSettings_CompareVector2_m3255(__this, L_38, L_39, /*hidden argument*/&TextGenerationSettings_CompareVector2_m3255_MethodInfo);
		if (!L_40)
		{
			goto IL_0174;
		}
	}
	{
		Font_t125 * L_41 = (__this->___font_0);
		Font_t125 * L_42 = ((&___other)->___font_0);
		bool L_43 = Object_op_Equality_m1267(NULL /*static, unused*/, L_41, L_42, /*hidden argument*/&Object_op_Equality_m1267_MethodInfo);
		G_B20_0 = ((int32_t)(L_43));
		goto IL_0175;
	}

IL_0174:
	{
		G_B20_0 = 0;
	}

IL_0175:
	{
		return G_B20_0;
	}
}
// UnityEngine.TrackedReference
#include "UnityEngine_UnityEngine_TrackedReference.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo TrackedReference_t548_il2cpp_TypeInfo;
// UnityEngine.TrackedReference
#include "UnityEngine_UnityEngine_TrackedReferenceMethodDeclarations.h"

extern TypeInfo IntPtr_t_il2cpp_TypeInfo;
// System.IntPtr
#include "mscorlib_System_IntPtrMethodDeclarations.h"
extern MethodInfo TrackedReference_op_Equality_m3259_MethodInfo;
extern MethodInfo IntPtr_op_Explicit_m3577_MethodInfo;
extern MethodInfo IntPtr_op_Equality_m3578_MethodInfo;


// System.Boolean UnityEngine.TrackedReference::Equals(System.Object)
extern MethodInfo TrackedReference_Equals_m3257_MethodInfo;
extern "C" bool TrackedReference_Equals_m3257 (TrackedReference_t548 * __this, Object_t * ___o, MethodInfo* method)
{
	{
		Object_t * L_0 = ___o;
		bool L_1 = TrackedReference_op_Equality_m3259(NULL /*static, unused*/, ((TrackedReference_t548 *)IsInst(L_0, InitializedTypeInfo(&TrackedReference_t548_il2cpp_TypeInfo))), __this, /*hidden argument*/&TrackedReference_op_Equality_m3259_MethodInfo);
		return L_1;
	}
}
// System.Int32 UnityEngine.TrackedReference::GetHashCode()
extern MethodInfo TrackedReference_GetHashCode_m3258_MethodInfo;
extern "C" int32_t TrackedReference_GetHashCode_m3258 (TrackedReference_t548 * __this, MethodInfo* method)
{
	{
		IntPtr_t L_0 = (__this->___m_Ptr_0);
		int32_t L_1 = IntPtr_op_Explicit_m3577(NULL /*static, unused*/, L_0, /*hidden argument*/&IntPtr_op_Explicit_m3577_MethodInfo);
		return L_1;
	}
}
// System.Boolean UnityEngine.TrackedReference::op_Equality(UnityEngine.TrackedReference,UnityEngine.TrackedReference)
extern "C" bool TrackedReference_op_Equality_m3259 (Object_t * __this /* static, unused */, TrackedReference_t548 * ___x, TrackedReference_t548 * ___y, MethodInfo* method)
{
	Object_t * V_0 = {0};
	Object_t * V_1 = {0};
	{
		TrackedReference_t548 * L_0 = ___x;
		V_0 = L_0;
		TrackedReference_t548 * L_1 = ___y;
		V_1 = L_1;
		Object_t * L_2 = V_1;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		Object_t * L_3 = V_0;
		if (L_3)
		{
			goto IL_0012;
		}
	}
	{
		return 1;
	}

IL_0012:
	{
		Object_t * L_4 = V_1;
		if (L_4)
		{
			goto IL_0029;
		}
	}
	{
		TrackedReference_t548 * L_5 = ___x;
		NullCheck(L_5);
		IntPtr_t L_6 = (L_5->___m_Ptr_0);
		IntPtr_t L_7 = ((IntPtr_t_StaticFields*)InitializedTypeInfo(&IntPtr_t_il2cpp_TypeInfo)->static_fields)->___Zero_1;
		bool L_8 = IntPtr_op_Equality_m3578(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/&IntPtr_op_Equality_m3578_MethodInfo);
		return L_8;
	}

IL_0029:
	{
		Object_t * L_9 = V_0;
		if (L_9)
		{
			goto IL_0040;
		}
	}
	{
		TrackedReference_t548 * L_10 = ___y;
		NullCheck(L_10);
		IntPtr_t L_11 = (L_10->___m_Ptr_0);
		IntPtr_t L_12 = ((IntPtr_t_StaticFields*)InitializedTypeInfo(&IntPtr_t_il2cpp_TypeInfo)->static_fields)->___Zero_1;
		bool L_13 = IntPtr_op_Equality_m3578(NULL /*static, unused*/, L_11, L_12, /*hidden argument*/&IntPtr_op_Equality_m3578_MethodInfo);
		return L_13;
	}

IL_0040:
	{
		TrackedReference_t548 * L_14 = ___x;
		NullCheck(L_14);
		IntPtr_t L_15 = (L_14->___m_Ptr_0);
		TrackedReference_t548 * L_16 = ___y;
		NullCheck(L_16);
		IntPtr_t L_17 = (L_16->___m_Ptr_0);
		bool L_18 = IntPtr_op_Equality_m3578(NULL /*static, unused*/, L_15, L_17, /*hidden argument*/&IntPtr_op_Equality_m3578_MethodInfo);
		return L_18;
	}
}
// Conversion methods for marshalling of: UnityEngine.TrackedReference
void TrackedReference_t548_marshal(const TrackedReference_t548& unmarshaled, TrackedReference_t548_marshaled& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.___m_Ptr_0;
}
void TrackedReference_t548_marshal_back(const TrackedReference_t548_marshaled& marshaled, TrackedReference_t548& unmarshaled)
{
	unmarshaled.___m_Ptr_0 = marshaled.___m_Ptr_0;
}
// Conversion method for clean up from marshalling of: UnityEngine.TrackedReference
void TrackedReference_t548_marshal_cleanup(TrackedReference_t548_marshaled& marshaled)
{
}
// UnityEngine.Events.PersistentListenerMode
#include "UnityEngine_UnityEngine_Events_PersistentListenerMode.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo PersistentListenerMode_t660_il2cpp_TypeInfo;
// UnityEngine.Events.PersistentListenerMode
#include "UnityEngine_UnityEngine_Events_PersistentListenerModeMethodDeclarations.h"



// UnityEngine.Events.ArgumentCache
#include "UnityEngine_UnityEngine_Events_ArgumentCache.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ArgumentCache_t661_il2cpp_TypeInfo;
// UnityEngine.Events.ArgumentCache
#include "UnityEngine_UnityEngine_Events_ArgumentCacheMethodDeclarations.h"

extern TypeInfo Regex_t740_il2cpp_TypeInfo;
// System.Text.RegularExpressions.Regex
#include "System_System_Text_RegularExpressions_RegexMethodDeclarations.h"
extern MethodInfo String_IsNullOrEmpty_m1684_MethodInfo;
extern MethodInfo Regex_Replace_m3579_MethodInfo;
extern MethodInfo ArgumentCache_TidyAssemblyTypeName_m3267_MethodInfo;


// System.Void UnityEngine.Events.ArgumentCache::.ctor()
extern MethodInfo ArgumentCache__ctor_m3260_MethodInfo;
extern "C" void ArgumentCache__ctor_m3260 (ArgumentCache_t661 * __this, MethodInfo* method)
{
	{
		Object__ctor_m1289(__this, /*hidden argument*/&Object__ctor_m1289_MethodInfo);
		return;
	}
}
// UnityEngine.Object UnityEngine.Events.ArgumentCache::get_unityObjectArgument()
extern MethodInfo ArgumentCache_get_unityObjectArgument_m3261_MethodInfo;
extern "C" Object_t20 * ArgumentCache_get_unityObjectArgument_m3261 (ArgumentCache_t661 * __this, MethodInfo* method)
{
	{
		Object_t20 * L_0 = (__this->___m_ObjectArgument_0);
		return L_0;
	}
}
// System.String UnityEngine.Events.ArgumentCache::get_unityObjectArgumentAssemblyTypeName()
extern MethodInfo ArgumentCache_get_unityObjectArgumentAssemblyTypeName_m3262_MethodInfo;
extern "C" String_t* ArgumentCache_get_unityObjectArgumentAssemblyTypeName_m3262 (ArgumentCache_t661 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_ObjectArgumentAssemblyTypeName_1);
		return L_0;
	}
}
// System.Int32 UnityEngine.Events.ArgumentCache::get_intArgument()
extern MethodInfo ArgumentCache_get_intArgument_m3263_MethodInfo;
extern "C" int32_t ArgumentCache_get_intArgument_m3263 (ArgumentCache_t661 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_IntArgument_2);
		return L_0;
	}
}
// System.Single UnityEngine.Events.ArgumentCache::get_floatArgument()
extern MethodInfo ArgumentCache_get_floatArgument_m3264_MethodInfo;
extern "C" float ArgumentCache_get_floatArgument_m3264 (ArgumentCache_t661 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->___m_FloatArgument_3);
		return L_0;
	}
}
// System.String UnityEngine.Events.ArgumentCache::get_stringArgument()
extern MethodInfo ArgumentCache_get_stringArgument_m3265_MethodInfo;
extern "C" String_t* ArgumentCache_get_stringArgument_m3265 (ArgumentCache_t661 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_StringArgument_4);
		return L_0;
	}
}
// System.Boolean UnityEngine.Events.ArgumentCache::get_boolArgument()
extern MethodInfo ArgumentCache_get_boolArgument_m3266_MethodInfo;
extern "C" bool ArgumentCache_get_boolArgument_m3266 (ArgumentCache_t661 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_BoolArgument_5);
		return L_0;
	}
}
// System.Void UnityEngine.Events.ArgumentCache::TidyAssemblyTypeName()
extern "C" void ArgumentCache_TidyAssemblyTypeName_m3267 (ArgumentCache_t661 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_ObjectArgumentAssemblyTypeName_1);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		bool L_1 = String_IsNullOrEmpty_m1684(NULL /*static, unused*/, L_0, /*hidden argument*/&String_IsNullOrEmpty_m1684_MethodInfo);
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		return;
	}

IL_0011:
	{
		String_t* L_2 = (__this->___m_ObjectArgumentAssemblyTypeName_1);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_3 = ((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Regex_t740_il2cpp_TypeInfo));
		String_t* L_4 = Regex_Replace_m3579(NULL /*static, unused*/, L_2, (String_t*) &_stringLiteral333, L_3, /*hidden argument*/&Regex_Replace_m3579_MethodInfo);
		__this->___m_ObjectArgumentAssemblyTypeName_1 = L_4;
		String_t* L_5 = (__this->___m_ObjectArgumentAssemblyTypeName_1);
		String_t* L_6 = ((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2;
		String_t* L_7 = Regex_Replace_m3579(NULL /*static, unused*/, L_5, (String_t*) &_stringLiteral334, L_6, /*hidden argument*/&Regex_Replace_m3579_MethodInfo);
		__this->___m_ObjectArgumentAssemblyTypeName_1 = L_7;
		String_t* L_8 = (__this->___m_ObjectArgumentAssemblyTypeName_1);
		String_t* L_9 = ((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2;
		String_t* L_10 = Regex_Replace_m3579(NULL /*static, unused*/, L_8, (String_t*) &_stringLiteral335, L_9, /*hidden argument*/&Regex_Replace_m3579_MethodInfo);
		__this->___m_ObjectArgumentAssemblyTypeName_1 = L_10;
		return;
	}
}
// System.Void UnityEngine.Events.ArgumentCache::OnBeforeSerialize()
extern MethodInfo ArgumentCache_OnBeforeSerialize_m3268_MethodInfo;
extern "C" void ArgumentCache_OnBeforeSerialize_m3268 (ArgumentCache_t661 * __this, MethodInfo* method)
{
	{
		ArgumentCache_TidyAssemblyTypeName_m3267(__this, /*hidden argument*/&ArgumentCache_TidyAssemblyTypeName_m3267_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Events.ArgumentCache::OnAfterDeserialize()
extern MethodInfo ArgumentCache_OnAfterDeserialize_m3269_MethodInfo;
extern "C" void ArgumentCache_OnAfterDeserialize_m3269 (ArgumentCache_t661 * __this, MethodInfo* method)
{
	{
		ArgumentCache_TidyAssemblyTypeName_m3267(__this, /*hidden argument*/&ArgumentCache_TidyAssemblyTypeName_m3267_MethodInfo);
		return;
	}
}
// UnityEngine.Events.BaseInvokableCall
#include "UnityEngine_UnityEngine_Events_BaseInvokableCall.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo BaseInvokableCall_t662_il2cpp_TypeInfo;
// UnityEngine.Events.BaseInvokableCall
#include "UnityEngine_UnityEngine_Events_BaseInvokableCallMethodDeclarations.h"

// System.Reflection.MethodInfo
#include "mscorlib_System_Reflection_MethodInfo.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullException.h"
// System.Delegate
#include "mscorlib_System_Delegate.h"
extern TypeInfo ArgumentNullException_t699_il2cpp_TypeInfo;
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullExceptionMethodDeclarations.h"
// System.Delegate
#include "mscorlib_System_DelegateMethodDeclarations.h"
extern MethodInfo ArgumentNullException__ctor_m3455_MethodInfo;
extern MethodInfo Delegate_get_Method_m3580_MethodInfo;
extern MethodInfo MethodBase_get_IsStatic_m3503_MethodInfo;
extern MethodInfo Delegate_get_Target_m3581_MethodInfo;


// System.Void UnityEngine.Events.BaseInvokableCall::.ctor()
extern MethodInfo BaseInvokableCall__ctor_m3270_MethodInfo;
extern "C" void BaseInvokableCall__ctor_m3270 (BaseInvokableCall_t662 * __this, MethodInfo* method)
{
	{
		Object__ctor_m1289(__this, /*hidden argument*/&Object__ctor_m1289_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Events.BaseInvokableCall::.ctor(System.Object,System.Reflection.MethodInfo)
extern MethodInfo BaseInvokableCall__ctor_m3271_MethodInfo;
extern "C" void BaseInvokableCall__ctor_m3271 (BaseInvokableCall_t662 * __this, Object_t * ___target, MethodInfo_t * ___function, MethodInfo* method)
{
	{
		Object__ctor_m1289(__this, /*hidden argument*/&Object__ctor_m1289_MethodInfo);
		Object_t * L_0 = ___target;
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		ArgumentNullException_t699 * L_1 = (ArgumentNullException_t699 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t699_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3455(L_1, (String_t*) &_stringLiteral336, /*hidden argument*/&ArgumentNullException__ctor_m3455_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0017:
	{
		MethodInfo_t * L_2 = ___function;
		if (L_2)
		{
			goto IL_0028;
		}
	}
	{
		ArgumentNullException_t699 * L_3 = (ArgumentNullException_t699 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t699_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3455(L_3, (String_t*) &_stringLiteral337, /*hidden argument*/&ArgumentNullException__ctor_m3455_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0028:
	{
		return;
	}
}
// System.Void UnityEngine.Events.BaseInvokableCall::Invoke(System.Object[])
// System.Boolean UnityEngine.Events.BaseInvokableCall::AllowInvoke(System.Delegate)
extern MethodInfo BaseInvokableCall_AllowInvoke_m3272_MethodInfo;
extern "C" bool BaseInvokableCall_AllowInvoke_m3272 (Object_t * __this /* static, unused */, Delegate_t295 * ___delegate, MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		Delegate_t295 * L_0 = ___delegate;
		NullCheck(L_0);
		MethodInfo_t * L_1 = Delegate_get_Method_m3580(L_0, /*hidden argument*/&Delegate_get_Method_m3580_MethodInfo);
		NullCheck(L_1);
		bool L_2 = (bool)VirtFuncInvoker0< bool >::Invoke(&MethodBase_get_IsStatic_m3503_MethodInfo, L_1);
		if (L_2)
		{
			goto IL_001e;
		}
	}
	{
		Delegate_t295 * L_3 = ___delegate;
		NullCheck(L_3);
		Object_t * L_4 = Delegate_get_Target_m3581(L_3, /*hidden argument*/&Delegate_get_Target_m3581_MethodInfo);
		G_B3_0 = ((((int32_t)((((Object_t*)(Object_t *)L_4) == ((Object_t*)(Object_t *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_001f;
	}

IL_001e:
	{
		G_B3_0 = 1;
	}

IL_001f:
	{
		return G_B3_0;
	}
}
// System.Boolean UnityEngine.Events.BaseInvokableCall::Find(System.Object,System.Reflection.MethodInfo)
// UnityEngine.Events.InvokableCall
#include "UnityEngine_UnityEngine_Events_InvokableCall.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InvokableCall_t663_il2cpp_TypeInfo;
// UnityEngine.Events.InvokableCall
#include "UnityEngine_UnityEngine_Events_InvokableCallMethodDeclarations.h"

// UnityEngine.Events.UnityAction
#include "UnityEngine_UnityEngine_Events_UnityAction.h"
extern TypeInfo UnityAction_t135_il2cpp_TypeInfo;
// UnityEngine.Events.UnityAction
#include "UnityEngine_UnityEngine_Events_UnityActionMethodDeclarations.h"
extern Il2CppType UnityAction_t135_0_0_0;
extern MethodInfo Type_GetTypeFromHandle_m1488_MethodInfo;
extern MethodInfo Delegate_CreateDelegate_m3582_MethodInfo;
extern MethodInfo Delegate_Combine_m1525_MethodInfo;
extern MethodInfo UnityAction_Invoke_m1497_MethodInfo;


// System.Void UnityEngine.Events.InvokableCall::.ctor(System.Object,System.Reflection.MethodInfo)
extern MethodInfo InvokableCall__ctor_m3273_MethodInfo;
extern "C" void InvokableCall__ctor_m3273 (InvokableCall_t663 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, MethodInfo* method)
{
	{
		Object_t * L_0 = ___target;
		MethodInfo_t * L_1 = ___theFunction;
		BaseInvokableCall__ctor_m3271(__this, L_0, L_1, /*hidden argument*/&BaseInvokableCall__ctor_m3271_MethodInfo);
		UnityAction_t135 * L_2 = (__this->___Delegate_0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_3 = Type_GetTypeFromHandle_m1488(NULL /*static, unused*/, LoadTypeToken(&UnityAction_t135_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m1488_MethodInfo);
		Object_t * L_4 = ___target;
		MethodInfo_t * L_5 = ___theFunction;
		Delegate_t295 * L_6 = Delegate_CreateDelegate_m3582(NULL /*static, unused*/, L_3, L_4, L_5, /*hidden argument*/&Delegate_CreateDelegate_m3582_MethodInfo);
		Delegate_t295 * L_7 = Delegate_Combine_m1525(NULL /*static, unused*/, L_2, ((UnityAction_t135 *)IsInst(L_6, InitializedTypeInfo(&UnityAction_t135_il2cpp_TypeInfo))), /*hidden argument*/&Delegate_Combine_m1525_MethodInfo);
		__this->___Delegate_0 = ((UnityAction_t135 *)Castclass(L_7, InitializedTypeInfo(&UnityAction_t135_il2cpp_TypeInfo)));
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall::Invoke(System.Object[])
extern MethodInfo InvokableCall_Invoke_m3274_MethodInfo;
extern "C" void InvokableCall_Invoke_m3274 (InvokableCall_t663 * __this, ObjectU5BU5D_t269* ___args, MethodInfo* method)
{
	{
		UnityAction_t135 * L_0 = (__this->___Delegate_0);
		bool L_1 = BaseInvokableCall_AllowInvoke_m3272(NULL /*static, unused*/, L_0, /*hidden argument*/&BaseInvokableCall_AllowInvoke_m3272_MethodInfo);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		UnityAction_t135 * L_2 = (__this->___Delegate_0);
		NullCheck(L_2);
		VirtActionInvoker0::Invoke(&UnityAction_Invoke_m1497_MethodInfo, L_2);
	}

IL_001b:
	{
		return;
	}
}
// System.Boolean UnityEngine.Events.InvokableCall::Find(System.Object,System.Reflection.MethodInfo)
extern MethodInfo InvokableCall_Find_m3275_MethodInfo;
extern "C" bool InvokableCall_Find_m3275 (InvokableCall_t663 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		UnityAction_t135 * L_0 = (__this->___Delegate_0);
		NullCheck(L_0);
		Object_t * L_1 = Delegate_get_Target_m3581(L_0, /*hidden argument*/&Delegate_get_Target_m3581_MethodInfo);
		Object_t * L_2 = ___targetObj;
		if ((!(((Object_t*)(Object_t *)L_1) == ((Object_t*)(Object_t *)L_2))))
		{
			goto IL_0021;
		}
	}
	{
		UnityAction_t135 * L_3 = (__this->___Delegate_0);
		NullCheck(L_3);
		MethodInfo_t * L_4 = Delegate_get_Method_m3580(L_3, /*hidden argument*/&Delegate_get_Method_m3580_MethodInfo);
		MethodInfo_t * L_5 = ___method;
		G_B3_0 = ((((Object_t*)(MethodInfo_t *)L_4) == ((Object_t*)(MethodInfo_t *)L_5))? 1 : 0);
		goto IL_0022;
	}

IL_0021:
	{
		G_B3_0 = 0;
	}

IL_0022:
	{
		return G_B3_0;
	}
}
// UnityEngine.Events.UnityEventCallState
#include "UnityEngine_UnityEngine_Events_UnityEventCallState.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo UnityEventCallState_t664_il2cpp_TypeInfo;
// UnityEngine.Events.UnityEventCallState
#include "UnityEngine_UnityEngine_Events_UnityEventCallStateMethodDeclarations.h"



// UnityEngine.Events.PersistentCall
#include "UnityEngine_UnityEngine_Events_PersistentCall.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo PersistentCall_t665_il2cpp_TypeInfo;
// UnityEngine.Events.PersistentCall
#include "UnityEngine_UnityEngine_Events_PersistentCallMethodDeclarations.h"

// UnityEngine.Events.UnityEventBase
#include "UnityEngine_UnityEngine_Events_UnityEventBase.h"
// UnityEngine.Events.CachedInvokableCall`1<System.Single>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen.h"
// UnityEngine.Events.CachedInvokableCall`1<System.Int32>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_0.h"
// UnityEngine.Events.CachedInvokableCall`1<System.String>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_1.h"
// UnityEngine.Events.CachedInvokableCall`1<System.Boolean>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_2.h"
// System.Reflection.ConstructorInfo
#include "mscorlib_System_Reflection_ConstructorInfo.h"
extern TypeInfo UnityEventBase_t666_il2cpp_TypeInfo;
extern TypeInfo MethodInfo_t_il2cpp_TypeInfo;
extern TypeInfo CachedInvokableCall_1_t741_il2cpp_TypeInfo;
extern TypeInfo CachedInvokableCall_1_t742_il2cpp_TypeInfo;
extern TypeInfo CachedInvokableCall_1_t743_il2cpp_TypeInfo;
extern TypeInfo CachedInvokableCall_1_t744_il2cpp_TypeInfo;
extern TypeInfo TypeU5BU5D_t606_il2cpp_TypeInfo;
extern TypeInfo ConstructorInfo_t612_il2cpp_TypeInfo;
// UnityEngine.Events.UnityEventBase
#include "UnityEngine_UnityEngine_Events_UnityEventBaseMethodDeclarations.h"
// UnityEngine.Events.CachedInvokableCall`1<System.Single>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_genMethodDeclarations.h"
// UnityEngine.Events.CachedInvokableCall`1<System.Int32>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_0MethodDeclarations.h"
// UnityEngine.Events.CachedInvokableCall`1<System.String>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_1MethodDeclarations.h"
// UnityEngine.Events.CachedInvokableCall`1<System.Boolean>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_2MethodDeclarations.h"
// System.Reflection.ConstructorInfo
#include "mscorlib_System_Reflection_ConstructorInfoMethodDeclarations.h"
extern Il2CppType CachedInvokableCall_1_t741_0_0_0;
extern Il2CppType CachedInvokableCall_1_t742_0_0_0;
extern Il2CppType CachedInvokableCall_1_t743_0_0_0;
extern Il2CppType CachedInvokableCall_1_t744_0_0_0;
extern Il2CppType Object_t20_0_0_0;
extern Il2CppType CachedInvokableCall_1_t745_0_0_0;
extern Il2CppType TypeU5BU5D_t606_0_0_0;
extern Il2CppType MethodInfo_t_0_0_0;
extern MethodInfo PersistentCall_get_target_m3277_MethodInfo;
extern MethodInfo PersistentCall_get_methodName_m3278_MethodInfo;
extern MethodInfo UnityEventBase_FindMethod_m3293_MethodInfo;
extern MethodInfo UnityEventBase_GetDelegate_m3583_MethodInfo;
extern MethodInfo PersistentCall_GetObjectCall_m3283_MethodInfo;
extern MethodInfo CachedInvokableCall_1__ctor_m3584_MethodInfo;
extern MethodInfo CachedInvokableCall_1__ctor_m3585_MethodInfo;
extern MethodInfo CachedInvokableCall_1__ctor_m3586_MethodInfo;
extern MethodInfo CachedInvokableCall_1__ctor_m3587_MethodInfo;
extern MethodInfo Type_GetType_m3588_MethodInfo;
extern MethodInfo Type_MakeGenericType_m3589_MethodInfo;
extern MethodInfo Type_GetConstructor_m3590_MethodInfo;
extern MethodInfo Type_IsAssignableFrom_m3591_MethodInfo;
extern MethodInfo ConstructorInfo_Invoke_m3530_MethodInfo;
extern Il2CppGenericMethod CachedInvokableCall_1__ctor_m3584_GenericMethod;
extern Il2CppGenericMethod CachedInvokableCall_1__ctor_m3585_GenericMethod;
extern Il2CppGenericMethod CachedInvokableCall_1__ctor_m3586_GenericMethod;
extern Il2CppGenericMethod CachedInvokableCall_1__ctor_m3587_GenericMethod;


// System.Void UnityEngine.Events.PersistentCall::.ctor()
extern MethodInfo PersistentCall__ctor_m3276_MethodInfo;
extern "C" void PersistentCall__ctor_m3276 (PersistentCall_t665 * __this, MethodInfo* method)
{
	{
		ArgumentCache_t661 * L_0 = (ArgumentCache_t661 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentCache_t661_il2cpp_TypeInfo));
		ArgumentCache__ctor_m3260(L_0, /*hidden argument*/&ArgumentCache__ctor_m3260_MethodInfo);
		__this->___m_Arguments_3 = L_0;
		__this->___m_CallState_4 = 2;
		Object__ctor_m1289(__this, /*hidden argument*/&Object__ctor_m1289_MethodInfo);
		return;
	}
}
// UnityEngine.Object UnityEngine.Events.PersistentCall::get_target()
extern "C" Object_t20 * PersistentCall_get_target_m3277 (PersistentCall_t665 * __this, MethodInfo* method)
{
	{
		Object_t20 * L_0 = (__this->___m_Target_0);
		return L_0;
	}
}
// System.String UnityEngine.Events.PersistentCall::get_methodName()
extern "C" String_t* PersistentCall_get_methodName_m3278 (PersistentCall_t665 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_MethodName_1);
		return L_0;
	}
}
// UnityEngine.Events.PersistentListenerMode UnityEngine.Events.PersistentCall::get_mode()
extern MethodInfo PersistentCall_get_mode_m3279_MethodInfo;
extern "C" int32_t PersistentCall_get_mode_m3279 (PersistentCall_t665 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Mode_2);
		return L_0;
	}
}
// UnityEngine.Events.ArgumentCache UnityEngine.Events.PersistentCall::get_arguments()
extern MethodInfo PersistentCall_get_arguments_m3280_MethodInfo;
extern "C" ArgumentCache_t661 * PersistentCall_get_arguments_m3280 (PersistentCall_t665 * __this, MethodInfo* method)
{
	{
		ArgumentCache_t661 * L_0 = (__this->___m_Arguments_3);
		return L_0;
	}
}
// System.Boolean UnityEngine.Events.PersistentCall::IsValid()
extern MethodInfo PersistentCall_IsValid_m3281_MethodInfo;
extern "C" bool PersistentCall_IsValid_m3281 (PersistentCall_t665 * __this, MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		Object_t20 * L_0 = PersistentCall_get_target_m3277(__this, /*hidden argument*/&PersistentCall_get_target_m3277_MethodInfo);
		bool L_1 = Object_op_Inequality_m1268(NULL /*static, unused*/, L_0, (Object_t20 *)NULL, /*hidden argument*/&Object_op_Inequality_m1268_MethodInfo);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		String_t* L_2 = PersistentCall_get_methodName_m3278(__this, /*hidden argument*/&PersistentCall_get_methodName_m3278_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		bool L_3 = String_IsNullOrEmpty_m1684(NULL /*static, unused*/, L_2, /*hidden argument*/&String_IsNullOrEmpty_m1684_MethodInfo);
		G_B3_0 = ((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		goto IL_0022;
	}

IL_0021:
	{
		G_B3_0 = 0;
	}

IL_0022:
	{
		return G_B3_0;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.PersistentCall::GetRuntimeCall(UnityEngine.Events.UnityEventBase)
extern MethodInfo PersistentCall_GetRuntimeCall_m3282_MethodInfo;
extern TypeInfo* CachedInvokableCall_1_t741_il2cpp_TypeInfo_var;
extern TypeInfo* CachedInvokableCall_1_t742_il2cpp_TypeInfo_var;
extern TypeInfo* CachedInvokableCall_1_t743_il2cpp_TypeInfo_var;
extern TypeInfo* CachedInvokableCall_1_t744_il2cpp_TypeInfo_var;
extern MethodInfo* CachedInvokableCall_1__ctor_m3584_MethodInfo_var;
extern MethodInfo* CachedInvokableCall_1__ctor_m3585_MethodInfo_var;
extern MethodInfo* CachedInvokableCall_1__ctor_m3586_MethodInfo_var;
extern MethodInfo* CachedInvokableCall_1__ctor_m3587_MethodInfo_var;
extern "C" BaseInvokableCall_t662 * PersistentCall_GetRuntimeCall_m3282 (PersistentCall_t665 * __this, UnityEventBase_t666 * ___theEvent, MethodInfo* method)
{
	static bool PersistentCall_GetRuntimeCall_m3282_init;
	if (!PersistentCall_GetRuntimeCall_m3282_init)
	{
		CachedInvokableCall_1_t741_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&CachedInvokableCall_1_t741_0_0_0);
		CachedInvokableCall_1_t742_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&CachedInvokableCall_1_t742_0_0_0);
		CachedInvokableCall_1_t743_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&CachedInvokableCall_1_t743_0_0_0);
		CachedInvokableCall_1_t744_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&CachedInvokableCall_1_t744_0_0_0);
		CachedInvokableCall_1__ctor_m3584_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&CachedInvokableCall_1__ctor_m3584_GenericMethod);
		CachedInvokableCall_1__ctor_m3585_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&CachedInvokableCall_1__ctor_m3585_GenericMethod);
		CachedInvokableCall_1__ctor_m3586_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&CachedInvokableCall_1__ctor_m3586_GenericMethod);
		CachedInvokableCall_1__ctor_m3587_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&CachedInvokableCall_1__ctor_m3587_GenericMethod);
		PersistentCall_GetRuntimeCall_m3282_init = true;
	}
	MethodInfo_t * V_0 = {0};
	int32_t V_1 = {0};
	{
		int32_t L_0 = (__this->___m_CallState_4);
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		UnityEventBase_t666 * L_1 = ___theEvent;
		if (L_1)
		{
			goto IL_0013;
		}
	}

IL_0011:
	{
		return (BaseInvokableCall_t662 *)NULL;
	}

IL_0013:
	{
		UnityEventBase_t666 * L_2 = ___theEvent;
		NullCheck(L_2);
		MethodInfo_t * L_3 = UnityEventBase_FindMethod_m3293(L_2, __this, /*hidden argument*/&UnityEventBase_FindMethod_m3293_MethodInfo);
		V_0 = L_3;
		MethodInfo_t * L_4 = V_0;
		if (L_4)
		{
			goto IL_0023;
		}
	}
	{
		return (BaseInvokableCall_t662 *)NULL;
	}

IL_0023:
	{
		int32_t L_5 = (__this->___m_Mode_2);
		V_1 = L_5;
		int32_t L_6 = V_1;
		if (L_6 == 0)
		{
			goto IL_0051;
		}
		if (L_6 == 1)
		{
			goto IL_00d2;
		}
		if (L_6 == 2)
		{
			goto IL_005f;
		}
		if (L_6 == 3)
		{
			goto IL_008a;
		}
		if (L_6 == 4)
		{
			goto IL_0072;
		}
		if (L_6 == 5)
		{
			goto IL_00a2;
		}
		if (L_6 == 6)
		{
			goto IL_00ba;
		}
	}
	{
		goto IL_00df;
	}

IL_0051:
	{
		UnityEventBase_t666 * L_7 = ___theEvent;
		Object_t20 * L_8 = PersistentCall_get_target_m3277(__this, /*hidden argument*/&PersistentCall_get_target_m3277_MethodInfo);
		MethodInfo_t * L_9 = V_0;
		NullCheck(L_7);
		BaseInvokableCall_t662 * L_10 = (BaseInvokableCall_t662 *)VirtFuncInvoker2< BaseInvokableCall_t662 *, Object_t *, MethodInfo_t * >::Invoke(&UnityEventBase_GetDelegate_m3583_MethodInfo, L_7, L_8, L_9);
		return L_10;
	}

IL_005f:
	{
		Object_t20 * L_11 = PersistentCall_get_target_m3277(__this, /*hidden argument*/&PersistentCall_get_target_m3277_MethodInfo);
		MethodInfo_t * L_12 = V_0;
		ArgumentCache_t661 * L_13 = (__this->___m_Arguments_3);
		BaseInvokableCall_t662 * L_14 = PersistentCall_GetObjectCall_m3283(NULL /*static, unused*/, L_11, L_12, L_13, /*hidden argument*/&PersistentCall_GetObjectCall_m3283_MethodInfo);
		return L_14;
	}

IL_0072:
	{
		Object_t20 * L_15 = PersistentCall_get_target_m3277(__this, /*hidden argument*/&PersistentCall_get_target_m3277_MethodInfo);
		MethodInfo_t * L_16 = V_0;
		ArgumentCache_t661 * L_17 = (__this->___m_Arguments_3);
		NullCheck(L_17);
		float L_18 = ArgumentCache_get_floatArgument_m3264(L_17, /*hidden argument*/&ArgumentCache_get_floatArgument_m3264_MethodInfo);
		CachedInvokableCall_1_t741 * L_19 = (CachedInvokableCall_1_t741 *)il2cpp_codegen_object_new (CachedInvokableCall_1_t741_il2cpp_TypeInfo_var);
		CachedInvokableCall_1__ctor_m3584(L_19, L_15, L_16, L_18, /*hidden argument*/CachedInvokableCall_1__ctor_m3584_MethodInfo_var);
		return L_19;
	}

IL_008a:
	{
		Object_t20 * L_20 = PersistentCall_get_target_m3277(__this, /*hidden argument*/&PersistentCall_get_target_m3277_MethodInfo);
		MethodInfo_t * L_21 = V_0;
		ArgumentCache_t661 * L_22 = (__this->___m_Arguments_3);
		NullCheck(L_22);
		int32_t L_23 = ArgumentCache_get_intArgument_m3263(L_22, /*hidden argument*/&ArgumentCache_get_intArgument_m3263_MethodInfo);
		CachedInvokableCall_1_t742 * L_24 = (CachedInvokableCall_1_t742 *)il2cpp_codegen_object_new (CachedInvokableCall_1_t742_il2cpp_TypeInfo_var);
		CachedInvokableCall_1__ctor_m3585(L_24, L_20, L_21, L_23, /*hidden argument*/CachedInvokableCall_1__ctor_m3585_MethodInfo_var);
		return L_24;
	}

IL_00a2:
	{
		Object_t20 * L_25 = PersistentCall_get_target_m3277(__this, /*hidden argument*/&PersistentCall_get_target_m3277_MethodInfo);
		MethodInfo_t * L_26 = V_0;
		ArgumentCache_t661 * L_27 = (__this->___m_Arguments_3);
		NullCheck(L_27);
		String_t* L_28 = ArgumentCache_get_stringArgument_m3265(L_27, /*hidden argument*/&ArgumentCache_get_stringArgument_m3265_MethodInfo);
		CachedInvokableCall_1_t743 * L_29 = (CachedInvokableCall_1_t743 *)il2cpp_codegen_object_new (CachedInvokableCall_1_t743_il2cpp_TypeInfo_var);
		CachedInvokableCall_1__ctor_m3586(L_29, L_25, L_26, L_28, /*hidden argument*/CachedInvokableCall_1__ctor_m3586_MethodInfo_var);
		return L_29;
	}

IL_00ba:
	{
		Object_t20 * L_30 = PersistentCall_get_target_m3277(__this, /*hidden argument*/&PersistentCall_get_target_m3277_MethodInfo);
		MethodInfo_t * L_31 = V_0;
		ArgumentCache_t661 * L_32 = (__this->___m_Arguments_3);
		NullCheck(L_32);
		bool L_33 = ArgumentCache_get_boolArgument_m3266(L_32, /*hidden argument*/&ArgumentCache_get_boolArgument_m3266_MethodInfo);
		CachedInvokableCall_1_t744 * L_34 = (CachedInvokableCall_1_t744 *)il2cpp_codegen_object_new (CachedInvokableCall_1_t744_il2cpp_TypeInfo_var);
		CachedInvokableCall_1__ctor_m3587(L_34, L_30, L_31, L_33, /*hidden argument*/CachedInvokableCall_1__ctor_m3587_MethodInfo_var);
		return L_34;
	}

IL_00d2:
	{
		Object_t20 * L_35 = PersistentCall_get_target_m3277(__this, /*hidden argument*/&PersistentCall_get_target_m3277_MethodInfo);
		MethodInfo_t * L_36 = V_0;
		InvokableCall_t663 * L_37 = (InvokableCall_t663 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvokableCall_t663_il2cpp_TypeInfo));
		InvokableCall__ctor_m3273(L_37, L_35, L_36, /*hidden argument*/&InvokableCall__ctor_m3273_MethodInfo);
		return L_37;
	}

IL_00df:
	{
		return (BaseInvokableCall_t662 *)NULL;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.PersistentCall::GetObjectCall(UnityEngine.Object,System.Reflection.MethodInfo,UnityEngine.Events.ArgumentCache)
extern TypeInfo* TypeU5BU5D_t606_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t269_il2cpp_TypeInfo_var;
extern "C" BaseInvokableCall_t662 * PersistentCall_GetObjectCall_m3283 (Object_t * __this /* static, unused */, Object_t20 * ___target, MethodInfo_t * ___method, ArgumentCache_t661 * ___arguments, MethodInfo* method)
{
	static bool PersistentCall_GetObjectCall_m3283_init;
	if (!PersistentCall_GetObjectCall_m3283_init)
	{
		TypeU5BU5D_t606_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&TypeU5BU5D_t606_0_0_0);
		ObjectU5BU5D_t269_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t269_0_0_0);
		PersistentCall_GetObjectCall_m3283_init = true;
	}
	Type_t * V_0 = {0};
	Type_t * V_1 = {0};
	Type_t * V_2 = {0};
	ConstructorInfo_t612 * V_3 = {0};
	Object_t20 * V_4 = {0};
	Type_t * G_B3_0 = {0};
	Type_t * G_B2_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_0 = Type_GetTypeFromHandle_m1488(NULL /*static, unused*/, LoadTypeToken(&Object_t20_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m1488_MethodInfo);
		V_0 = L_0;
		ArgumentCache_t661 * L_1 = ___arguments;
		NullCheck(L_1);
		String_t* L_2 = ArgumentCache_get_unityObjectArgumentAssemblyTypeName_m3262(L_1, /*hidden argument*/&ArgumentCache_get_unityObjectArgumentAssemblyTypeName_m3262_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		bool L_3 = String_IsNullOrEmpty_m1684(NULL /*static, unused*/, L_2, /*hidden argument*/&String_IsNullOrEmpty_m1684_MethodInfo);
		if (L_3)
		{
			goto IL_0039;
		}
	}
	{
		ArgumentCache_t661 * L_4 = ___arguments;
		NullCheck(L_4);
		String_t* L_5 = ArgumentCache_get_unityObjectArgumentAssemblyTypeName_m3262(L_4, /*hidden argument*/&ArgumentCache_get_unityObjectArgumentAssemblyTypeName_m3262_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_6 = Type_GetType_m3588(NULL /*static, unused*/, L_5, 0, /*hidden argument*/&Type_GetType_m3588_MethodInfo);
		Type_t * L_7 = L_6;
		G_B2_0 = L_7;
		if (L_7)
		{
			G_B3_0 = L_7;
			goto IL_0038;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_8 = Type_GetTypeFromHandle_m1488(NULL /*static, unused*/, LoadTypeToken(&Object_t20_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m1488_MethodInfo);
		G_B3_0 = L_8;
	}

IL_0038:
	{
		V_0 = G_B3_0;
	}

IL_0039:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_9 = Type_GetTypeFromHandle_m1488(NULL /*static, unused*/, LoadTypeToken(&CachedInvokableCall_1_t745_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m1488_MethodInfo);
		V_1 = L_9;
		Type_t * L_10 = V_1;
		TypeU5BU5D_t606* L_11 = ((TypeU5BU5D_t606*)SZArrayNew(TypeU5BU5D_t606_il2cpp_TypeInfo_var, 1));
		Type_t * L_12 = V_0;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 0);
		ArrayElementTypeCheck (L_11, L_12);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_11, 0)) = (Type_t *)L_12;
		NullCheck(L_10);
		Type_t * L_13 = (Type_t *)VirtFuncInvoker1< Type_t *, TypeU5BU5D_t606* >::Invoke(&Type_MakeGenericType_m3589_MethodInfo, L_10, L_11);
		V_2 = L_13;
		Type_t * L_14 = V_2;
		TypeU5BU5D_t606* L_15 = ((TypeU5BU5D_t606*)SZArrayNew(TypeU5BU5D_t606_il2cpp_TypeInfo_var, 3));
		Type_t * L_16 = Type_GetTypeFromHandle_m1488(NULL /*static, unused*/, LoadTypeToken(&Object_t20_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m1488_MethodInfo);
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, 0);
		ArrayElementTypeCheck (L_15, L_16);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_15, 0)) = (Type_t *)L_16;
		TypeU5BU5D_t606* L_17 = L_15;
		Type_t * L_18 = Type_GetTypeFromHandle_m1488(NULL /*static, unused*/, LoadTypeToken(&MethodInfo_t_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m1488_MethodInfo);
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, 1);
		ArrayElementTypeCheck (L_17, L_18);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_17, 1)) = (Type_t *)L_18;
		TypeU5BU5D_t606* L_19 = L_17;
		Type_t * L_20 = V_0;
		NullCheck(L_19);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_19, 2);
		ArrayElementTypeCheck (L_19, L_20);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_19, 2)) = (Type_t *)L_20;
		NullCheck(L_14);
		ConstructorInfo_t612 * L_21 = (ConstructorInfo_t612 *)VirtFuncInvoker1< ConstructorInfo_t612 *, TypeU5BU5D_t606* >::Invoke(&Type_GetConstructor_m3590_MethodInfo, L_14, L_19);
		V_3 = L_21;
		ArgumentCache_t661 * L_22 = ___arguments;
		NullCheck(L_22);
		Object_t20 * L_23 = ArgumentCache_get_unityObjectArgument_m3261(L_22, /*hidden argument*/&ArgumentCache_get_unityObjectArgument_m3261_MethodInfo);
		V_4 = L_23;
		Object_t20 * L_24 = V_4;
		bool L_25 = Object_op_Inequality_m1268(NULL /*static, unused*/, L_24, (Object_t20 *)NULL, /*hidden argument*/&Object_op_Inequality_m1268_MethodInfo);
		if (!L_25)
		{
			goto IL_00aa;
		}
	}
	{
		Type_t * L_26 = V_0;
		Object_t20 * L_27 = V_4;
		NullCheck(L_27);
		Type_t * L_28 = Object_GetType_m1381(L_27, /*hidden argument*/&Object_GetType_m1381_MethodInfo);
		NullCheck(L_26);
		bool L_29 = (bool)VirtFuncInvoker1< bool, Type_t * >::Invoke(&Type_IsAssignableFrom_m3591_MethodInfo, L_26, L_28);
		if (L_29)
		{
			goto IL_00aa;
		}
	}
	{
		V_4 = (Object_t20 *)NULL;
	}

IL_00aa:
	{
		ConstructorInfo_t612 * L_30 = V_3;
		ObjectU5BU5D_t269* L_31 = ((ObjectU5BU5D_t269*)SZArrayNew(ObjectU5BU5D_t269_il2cpp_TypeInfo_var, 3));
		Object_t20 * L_32 = ___target;
		NullCheck(L_31);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_31, 0);
		ArrayElementTypeCheck (L_31, L_32);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_31, 0)) = (Object_t *)L_32;
		ObjectU5BU5D_t269* L_33 = L_31;
		MethodInfo_t * L_34 = ___method;
		NullCheck(L_33);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_33, 1);
		ArrayElementTypeCheck (L_33, L_34);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_33, 1)) = (Object_t *)L_34;
		ObjectU5BU5D_t269* L_35 = L_33;
		Object_t20 * L_36 = V_4;
		NullCheck(L_35);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_35, 2);
		ArrayElementTypeCheck (L_35, L_36);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_35, 2)) = (Object_t *)L_36;
		NullCheck(L_30);
		Object_t * L_37 = ConstructorInfo_Invoke_m3530(L_30, L_35, /*hidden argument*/&ConstructorInfo_Invoke_m3530_MethodInfo);
		return ((BaseInvokableCall_t662 *)IsInst(L_37, InitializedTypeInfo(&BaseInvokableCall_t662_il2cpp_TypeInfo)));
	}
}
// UnityEngine.Events.PersistentCallGroup
#include "UnityEngine_UnityEngine_Events_PersistentCallGroup.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo PersistentCallGroup_t668_il2cpp_TypeInfo;
// UnityEngine.Events.PersistentCallGroup
#include "UnityEngine_UnityEngine_Events_PersistentCallGroupMethodDeclarations.h"

// System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>
#include "mscorlib_System_Collections_Generic_List_1_gen_28.h"
// UnityEngine.Events.InvokableCallList
#include "UnityEngine_UnityEngine_Events_InvokableCallList.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.Events.PersistentCall>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_2.h"
extern TypeInfo List_1_t667_il2cpp_TypeInfo;
extern TypeInfo Enumerator_t746_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t272_il2cpp_TypeInfo;
// System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>
#include "mscorlib_System_Collections_Generic_List_1_gen_28MethodDeclarations.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.Events.PersistentCall>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_2MethodDeclarations.h"
// UnityEngine.Events.InvokableCallList
#include "UnityEngine_UnityEngine_Events_InvokableCallListMethodDeclarations.h"
extern Il2CppType List_1_t667_0_0_0;
extern Il2CppType Enumerator_t746_0_0_0;
extern MethodInfo List_1__ctor_m3592_MethodInfo;
extern MethodInfo InvokableCallList_AddPersistentInvokableCall_m3287_MethodInfo;
extern MethodInfo IDisposable_Dispose_m1379_MethodInfo;
extern Il2CppGenericMethod List_1__ctor_m3592_GenericMethod;
extern Il2CppGenericMethod List_1_GetEnumerator_m3593_GenericMethod;
extern Il2CppGenericMethod Enumerator_get_Current_m3594_GenericMethod;
extern Il2CppGenericMethod Enumerator_MoveNext_m3595_GenericMethod;


// System.Void UnityEngine.Events.PersistentCallGroup::.ctor()
extern MethodInfo PersistentCallGroup__ctor_m3284_MethodInfo;
extern TypeInfo* List_1_t667_il2cpp_TypeInfo_var;
extern MethodInfo* List_1__ctor_m3592_MethodInfo_var;
extern "C" void PersistentCallGroup__ctor_m3284 (PersistentCallGroup_t668 * __this, MethodInfo* method)
{
	static bool PersistentCallGroup__ctor_m3284_init;
	if (!PersistentCallGroup__ctor_m3284_init)
	{
		List_1_t667_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&List_1_t667_0_0_0);
		List_1__ctor_m3592_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1__ctor_m3592_GenericMethod);
		PersistentCallGroup__ctor_m3284_init = true;
	}
	{
		Object__ctor_m1289(__this, /*hidden argument*/&Object__ctor_m1289_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(List_1_t667_il2cpp_TypeInfo_var);
		List_1_t667 * L_0 = (List_1_t667 *)il2cpp_codegen_object_new (List_1_t667_il2cpp_TypeInfo_var);
		List_1__ctor_m3592(L_0, /*hidden argument*/List_1__ctor_m3592_MethodInfo_var);
		__this->___m_Calls_0 = L_0;
		return;
	}
}
// System.Void UnityEngine.Events.PersistentCallGroup::Initialize(UnityEngine.Events.InvokableCallList,UnityEngine.Events.UnityEventBase)
extern MethodInfo PersistentCallGroup_Initialize_m3285_MethodInfo;
extern TypeInfo* Enumerator_t746_il2cpp_TypeInfo_var;
extern MethodInfo* List_1_GetEnumerator_m3593_MethodInfo_var;
extern MethodInfo* Enumerator_get_Current_m3594_MethodInfo_var;
extern MethodInfo* Enumerator_MoveNext_m3595_MethodInfo_var;
extern "C" void PersistentCallGroup_Initialize_m3285 (PersistentCallGroup_t668 * __this, InvokableCallList_t669 * ___invokableList, UnityEventBase_t666 * ___unityEventBase, MethodInfo* method)
{
	static bool PersistentCallGroup_Initialize_m3285_init;
	if (!PersistentCallGroup_Initialize_m3285_init)
	{
		Enumerator_t746_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Enumerator_t746_0_0_0);
		List_1_GetEnumerator_m3593_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1_GetEnumerator_m3593_GenericMethod);
		Enumerator_get_Current_m3594_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Enumerator_get_Current_m3594_GenericMethod);
		Enumerator_MoveNext_m3595_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Enumerator_MoveNext_m3595_GenericMethod);
		PersistentCallGroup_Initialize_m3285_init = true;
	}
	PersistentCall_t665 * V_0 = {0};
	Enumerator_t746  V_1 = {0};
	BaseInvokableCall_t662 * V_2 = {0};
	Exception_t275 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t275 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		List_1_t667 * L_0 = (__this->___m_Calls_0);
		NullCheck(L_0);
		Enumerator_t746  L_1 = List_1_GetEnumerator_m3593(L_0, /*hidden argument*/List_1_GetEnumerator_m3593_MethodInfo_var);
		V_1 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_003e;
		}

IL_0011:
		{
			PersistentCall_t665 * L_2 = Enumerator_get_Current_m3594((&V_1), /*hidden argument*/Enumerator_get_Current_m3594_MethodInfo_var);
			V_0 = L_2;
			PersistentCall_t665 * L_3 = V_0;
			NullCheck(L_3);
			bool L_4 = PersistentCall_IsValid_m3281(L_3, /*hidden argument*/&PersistentCall_IsValid_m3281_MethodInfo);
			if (L_4)
			{
				goto IL_0029;
			}
		}

IL_0024:
		{
			goto IL_003e;
		}

IL_0029:
		{
			PersistentCall_t665 * L_5 = V_0;
			UnityEventBase_t666 * L_6 = ___unityEventBase;
			NullCheck(L_5);
			BaseInvokableCall_t662 * L_7 = PersistentCall_GetRuntimeCall_m3282(L_5, L_6, /*hidden argument*/&PersistentCall_GetRuntimeCall_m3282_MethodInfo);
			V_2 = L_7;
			BaseInvokableCall_t662 * L_8 = V_2;
			if (!L_8)
			{
				goto IL_003e;
			}
		}

IL_0037:
		{
			InvokableCallList_t669 * L_9 = ___invokableList;
			BaseInvokableCall_t662 * L_10 = V_2;
			NullCheck(L_9);
			InvokableCallList_AddPersistentInvokableCall_m3287(L_9, L_10, /*hidden argument*/&InvokableCallList_AddPersistentInvokableCall_m3287_MethodInfo);
		}

IL_003e:
		{
			bool L_11 = Enumerator_MoveNext_m3595((&V_1), /*hidden argument*/Enumerator_MoveNext_m3595_MethodInfo_var);
			if (L_11)
			{
				goto IL_0011;
			}
		}

IL_004a:
		{
			IL2CPP_LEAVE(0x5B, FINALLY_004f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t275 *)e.ex;
		goto FINALLY_004f;
	}

FINALLY_004f:
	{ // begin finally (depth: 1)
		Enumerator_t746  L_12 = V_1;
		Enumerator_t746  L_13 = L_12;
		Object_t * L_14 = Box(Enumerator_t746_il2cpp_TypeInfo_var, &L_13);
		NullCheck(L_14);
		InterfaceActionInvoker0::Invoke(&IDisposable_Dispose_m1379_MethodInfo, L_14);
		IL2CPP_END_FINALLY(79)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(79)
	{
		IL2CPP_JUMP_TBL(0x5B, IL_005b)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t275 *)
	}

IL_005b:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InvokableCallList_t669_il2cpp_TypeInfo;

// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>
#include "mscorlib_System_Collections_Generic_List_1_gen_29.h"
// System.Predicate`1<UnityEngine.Events.BaseInvokableCall>
#include "mscorlib_System_Predicate_1_gen_2.h"
extern TypeInfo List_1_t670_il2cpp_TypeInfo;
extern TypeInfo Predicate_1_t747_il2cpp_TypeInfo;
// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>
#include "mscorlib_System_Collections_Generic_List_1_gen_29MethodDeclarations.h"
// System.Predicate`1<UnityEngine.Events.BaseInvokableCall>
#include "mscorlib_System_Predicate_1_gen_2MethodDeclarations.h"
extern Il2CppType List_1_t670_0_0_0;
extern Il2CppType Predicate_1_t747_0_0_0;
extern MethodInfo List_1__ctor_m3596_MethodInfo;
extern MethodInfo List_1_Add_m3597_MethodInfo;
extern MethodInfo List_1_get_Item_m3598_MethodInfo;
extern MethodInfo BaseInvokableCall_Find_m3599_MethodInfo;
extern MethodInfo List_1_get_Count_m3600_MethodInfo;
extern MethodInfo List_1_Contains_m3601_MethodInfo;
extern MethodInfo Predicate_1__ctor_m3602_MethodInfo;
extern MethodInfo List_1_Clear_m3603_MethodInfo;
extern MethodInfo BaseInvokableCall_Invoke_m3604_MethodInfo;
extern Il2CppGenericMethod List_1__ctor_m3596_GenericMethod;
extern Il2CppGenericMethod List_1_Add_m3597_GenericMethod;
extern Il2CppGenericMethod List_1_get_Item_m3598_GenericMethod;
extern Il2CppGenericMethod List_1_get_Count_m3600_GenericMethod;
extern Il2CppGenericMethod List_1_Contains_m3601_GenericMethod;
extern Il2CppGenericMethod Predicate_1__ctor_m3602_GenericMethod;
extern Il2CppGenericMethod List_1_RemoveAll_m3605_GenericMethod;
extern Il2CppGenericMethod List_1_Clear_m3603_GenericMethod;
extern Il2CppGenericMethod List_1_AddRange_m3606_GenericMethod;


// System.Void UnityEngine.Events.InvokableCallList::.ctor()
extern MethodInfo InvokableCallList__ctor_m3286_MethodInfo;
extern TypeInfo* List_1_t670_il2cpp_TypeInfo_var;
extern MethodInfo* List_1__ctor_m3596_MethodInfo_var;
extern "C" void InvokableCallList__ctor_m3286 (InvokableCallList_t669 * __this, MethodInfo* method)
{
	static bool InvokableCallList__ctor_m3286_init;
	if (!InvokableCallList__ctor_m3286_init)
	{
		List_1_t670_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&List_1_t670_0_0_0);
		List_1__ctor_m3596_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1__ctor_m3596_GenericMethod);
		InvokableCallList__ctor_m3286_init = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(List_1_t670_il2cpp_TypeInfo_var);
		List_1_t670 * L_0 = (List_1_t670 *)il2cpp_codegen_object_new (List_1_t670_il2cpp_TypeInfo_var);
		List_1__ctor_m3596(L_0, /*hidden argument*/List_1__ctor_m3596_MethodInfo_var);
		__this->___m_PersistentCalls_0 = L_0;
		List_1_t670 * L_1 = (List_1_t670 *)il2cpp_codegen_object_new (List_1_t670_il2cpp_TypeInfo_var);
		List_1__ctor_m3596(L_1, /*hidden argument*/List_1__ctor_m3596_MethodInfo_var);
		__this->___m_RuntimeCalls_1 = L_1;
		List_1_t670 * L_2 = (List_1_t670 *)il2cpp_codegen_object_new (List_1_t670_il2cpp_TypeInfo_var);
		List_1__ctor_m3596(L_2, /*hidden argument*/List_1__ctor_m3596_MethodInfo_var);
		__this->___m_ExecutingCalls_2 = L_2;
		Object__ctor_m1289(__this, /*hidden argument*/&Object__ctor_m1289_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCallList::AddPersistentInvokableCall(UnityEngine.Events.BaseInvokableCall)
extern MethodInfo* List_1_Add_m3597_MethodInfo_var;
extern "C" void InvokableCallList_AddPersistentInvokableCall_m3287 (InvokableCallList_t669 * __this, BaseInvokableCall_t662 * ___call, MethodInfo* method)
{
	static bool InvokableCallList_AddPersistentInvokableCall_m3287_init;
	if (!InvokableCallList_AddPersistentInvokableCall_m3287_init)
	{
		List_1_Add_m3597_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1_Add_m3597_GenericMethod);
		InvokableCallList_AddPersistentInvokableCall_m3287_init = true;
	}
	{
		List_1_t670 * L_0 = (__this->___m_PersistentCalls_0);
		BaseInvokableCall_t662 * L_1 = ___call;
		NullCheck(L_0);
		VirtActionInvoker1< BaseInvokableCall_t662 * >::Invoke(List_1_Add_m3597_MethodInfo_var, L_0, L_1);
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCallList::AddListener(UnityEngine.Events.BaseInvokableCall)
extern MethodInfo InvokableCallList_AddListener_m3288_MethodInfo;
extern MethodInfo* List_1_Add_m3597_MethodInfo_var;
extern "C" void InvokableCallList_AddListener_m3288 (InvokableCallList_t669 * __this, BaseInvokableCall_t662 * ___call, MethodInfo* method)
{
	static bool InvokableCallList_AddListener_m3288_init;
	if (!InvokableCallList_AddListener_m3288_init)
	{
		List_1_Add_m3597_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1_Add_m3597_GenericMethod);
		InvokableCallList_AddListener_m3288_init = true;
	}
	{
		List_1_t670 * L_0 = (__this->___m_RuntimeCalls_1);
		BaseInvokableCall_t662 * L_1 = ___call;
		NullCheck(L_0);
		VirtActionInvoker1< BaseInvokableCall_t662 * >::Invoke(List_1_Add_m3597_MethodInfo_var, L_0, L_1);
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCallList::RemoveListener(System.Object,System.Reflection.MethodInfo)
extern MethodInfo InvokableCallList_RemoveListener_m3289_MethodInfo;
extern TypeInfo* List_1_t670_il2cpp_TypeInfo_var;
extern TypeInfo* Predicate_1_t747_il2cpp_TypeInfo_var;
extern MethodInfo* List_1__ctor_m3596_MethodInfo_var;
extern MethodInfo* List_1_get_Item_m3598_MethodInfo_var;
extern MethodInfo* List_1_Add_m3597_MethodInfo_var;
extern MethodInfo* List_1_get_Count_m3600_MethodInfo_var;
extern MethodInfo* List_1_Contains_m3601_MethodInfo_var;
extern MethodInfo* Predicate_1__ctor_m3602_MethodInfo_var;
extern MethodInfo* List_1_RemoveAll_m3605_MethodInfo_var;
extern "C" void InvokableCallList_RemoveListener_m3289 (InvokableCallList_t669 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, MethodInfo* method)
{
	static bool InvokableCallList_RemoveListener_m3289_init;
	if (!InvokableCallList_RemoveListener_m3289_init)
	{
		List_1_t670_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&List_1_t670_0_0_0);
		Predicate_1_t747_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Predicate_1_t747_0_0_0);
		List_1__ctor_m3596_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1__ctor_m3596_GenericMethod);
		List_1_get_Item_m3598_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1_get_Item_m3598_GenericMethod);
		List_1_Add_m3597_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1_Add_m3597_GenericMethod);
		List_1_get_Count_m3600_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1_get_Count_m3600_GenericMethod);
		List_1_Contains_m3601_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1_Contains_m3601_GenericMethod);
		Predicate_1__ctor_m3602_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Predicate_1__ctor_m3602_GenericMethod);
		List_1_RemoveAll_m3605_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1_RemoveAll_m3605_GenericMethod);
		InvokableCallList_RemoveListener_m3289_init = true;
	}
	List_1_t670 * V_0 = {0};
	int32_t V_1 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(List_1_t670_il2cpp_TypeInfo_var);
		List_1_t670 * L_0 = (List_1_t670 *)il2cpp_codegen_object_new (List_1_t670_il2cpp_TypeInfo_var);
		List_1__ctor_m3596(L_0, /*hidden argument*/List_1__ctor_m3596_MethodInfo_var);
		V_0 = L_0;
		V_1 = 0;
		goto IL_003b;
	}

IL_000d:
	{
		List_1_t670 * L_1 = (__this->___m_RuntimeCalls_1);
		int32_t L_2 = V_1;
		NullCheck(L_1);
		BaseInvokableCall_t662 * L_3 = (BaseInvokableCall_t662 *)VirtFuncInvoker1< BaseInvokableCall_t662 *, int32_t >::Invoke(List_1_get_Item_m3598_MethodInfo_var, L_1, L_2);
		Object_t * L_4 = ___targetObj;
		MethodInfo_t * L_5 = ___method;
		NullCheck(L_3);
		bool L_6 = (bool)VirtFuncInvoker2< bool, Object_t *, MethodInfo_t * >::Invoke(&BaseInvokableCall_Find_m3599_MethodInfo, L_3, L_4, L_5);
		if (!L_6)
		{
			goto IL_0037;
		}
	}
	{
		List_1_t670 * L_7 = V_0;
		List_1_t670 * L_8 = (__this->___m_RuntimeCalls_1);
		int32_t L_9 = V_1;
		NullCheck(L_8);
		BaseInvokableCall_t662 * L_10 = (BaseInvokableCall_t662 *)VirtFuncInvoker1< BaseInvokableCall_t662 *, int32_t >::Invoke(List_1_get_Item_m3598_MethodInfo_var, L_8, L_9);
		NullCheck(L_7);
		VirtActionInvoker1< BaseInvokableCall_t662 * >::Invoke(List_1_Add_m3597_MethodInfo_var, L_7, L_10);
	}

IL_0037:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)((int32_t)L_11+(int32_t)1));
	}

IL_003b:
	{
		int32_t L_12 = V_1;
		List_1_t670 * L_13 = (__this->___m_RuntimeCalls_1);
		NullCheck(L_13);
		int32_t L_14 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(List_1_get_Count_m3600_MethodInfo_var, L_13);
		if ((((int32_t)L_12) < ((int32_t)L_14)))
		{
			goto IL_000d;
		}
	}
	{
		List_1_t670 * L_15 = (__this->___m_RuntimeCalls_1);
		List_1_t670 * L_16 = V_0;
		List_1_t670 * L_17 = L_16;
		IntPtr_t L_18 = { GetVirtualMethodInfo(L_17, List_1_Contains_m3601_MethodInfo_var) };
		Predicate_1_t747 * L_19 = (Predicate_1_t747 *)il2cpp_codegen_object_new (Predicate_1_t747_il2cpp_TypeInfo_var);
		Predicate_1__ctor_m3602(L_19, L_17, L_18, /*hidden argument*/Predicate_1__ctor_m3602_MethodInfo_var);
		NullCheck(L_15);
		List_1_RemoveAll_m3605(L_15, L_19, /*hidden argument*/List_1_RemoveAll_m3605_MethodInfo_var);
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCallList::ClearPersistent()
extern MethodInfo InvokableCallList_ClearPersistent_m3290_MethodInfo;
extern MethodInfo* List_1_Clear_m3603_MethodInfo_var;
extern "C" void InvokableCallList_ClearPersistent_m3290 (InvokableCallList_t669 * __this, MethodInfo* method)
{
	static bool InvokableCallList_ClearPersistent_m3290_init;
	if (!InvokableCallList_ClearPersistent_m3290_init)
	{
		List_1_Clear_m3603_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1_Clear_m3603_GenericMethod);
		InvokableCallList_ClearPersistent_m3290_init = true;
	}
	{
		List_1_t670 * L_0 = (__this->___m_PersistentCalls_0);
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(List_1_Clear_m3603_MethodInfo_var, L_0);
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCallList::Invoke(System.Object[])
extern MethodInfo InvokableCallList_Invoke_m3291_MethodInfo;
extern MethodInfo* List_1_AddRange_m3606_MethodInfo_var;
extern MethodInfo* List_1_get_Item_m3598_MethodInfo_var;
extern MethodInfo* List_1_get_Count_m3600_MethodInfo_var;
extern MethodInfo* List_1_Clear_m3603_MethodInfo_var;
extern "C" void InvokableCallList_Invoke_m3291 (InvokableCallList_t669 * __this, ObjectU5BU5D_t269* ___parameters, MethodInfo* method)
{
	static bool InvokableCallList_Invoke_m3291_init;
	if (!InvokableCallList_Invoke_m3291_init)
	{
		List_1_AddRange_m3606_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1_AddRange_m3606_GenericMethod);
		List_1_get_Item_m3598_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1_get_Item_m3598_GenericMethod);
		List_1_get_Count_m3600_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1_get_Count_m3600_GenericMethod);
		List_1_Clear_m3603_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1_Clear_m3603_GenericMethod);
		InvokableCallList_Invoke_m3291_init = true;
	}
	int32_t V_0 = 0;
	{
		List_1_t670 * L_0 = (__this->___m_ExecutingCalls_2);
		List_1_t670 * L_1 = (__this->___m_PersistentCalls_0);
		NullCheck(L_0);
		List_1_AddRange_m3606(L_0, L_1, /*hidden argument*/List_1_AddRange_m3606_MethodInfo_var);
		List_1_t670 * L_2 = (__this->___m_ExecutingCalls_2);
		List_1_t670 * L_3 = (__this->___m_RuntimeCalls_1);
		NullCheck(L_2);
		List_1_AddRange_m3606(L_2, L_3, /*hidden argument*/List_1_AddRange_m3606_MethodInfo_var);
		V_0 = 0;
		goto IL_003f;
	}

IL_0029:
	{
		List_1_t670 * L_4 = (__this->___m_ExecutingCalls_2);
		int32_t L_5 = V_0;
		NullCheck(L_4);
		BaseInvokableCall_t662 * L_6 = (BaseInvokableCall_t662 *)VirtFuncInvoker1< BaseInvokableCall_t662 *, int32_t >::Invoke(List_1_get_Item_m3598_MethodInfo_var, L_4, L_5);
		ObjectU5BU5D_t269* L_7 = ___parameters;
		NullCheck(L_6);
		VirtActionInvoker1< ObjectU5BU5D_t269* >::Invoke(&BaseInvokableCall_Invoke_m3604_MethodInfo, L_6, L_7);
		int32_t L_8 = V_0;
		V_0 = ((int32_t)((int32_t)L_8+(int32_t)1));
	}

IL_003f:
	{
		int32_t L_9 = V_0;
		List_1_t670 * L_10 = (__this->___m_ExecutingCalls_2);
		NullCheck(L_10);
		int32_t L_11 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(List_1_get_Count_m3600_MethodInfo_var, L_10);
		if ((((int32_t)L_9) < ((int32_t)L_11)))
		{
			goto IL_0029;
		}
	}
	{
		List_1_t670 * L_12 = (__this->___m_ExecutingCalls_2);
		NullCheck(L_12);
		VirtActionInvoker0::Invoke(List_1_Clear_m3603_MethodInfo_var, L_12);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

extern Il2CppType Single_t23_0_0_0;
extern Il2CppType Int32_t17_0_0_0;
extern Il2CppType Boolean_t13_0_0_0;
extern Il2CppType String_t_0_0_0;
extern Il2CppType Object_t_0_0_0;
extern MethodInfo Type_get_AssemblyQualifiedName_m3607_MethodInfo;
extern MethodInfo UnityEventBase_DirtyPersistentCalls_m3295_MethodInfo;
extern MethodInfo UnityEventBase_FindMethod_m3294_MethodInfo;
extern MethodInfo UnityEventBase_FindMethod_Impl_m3608_MethodInfo;
extern MethodInfo UnityEventBase_GetValidMethodInfo_m3300_MethodInfo;
extern MethodInfo UnityEventBase_RebuildPersistentCallsIfNeeded_m3296_MethodInfo;
extern MethodInfo Object_ToString_m1967_MethodInfo;
extern MethodInfo Type_get_FullName_m3523_MethodInfo;
extern MethodInfo Type_GetMethod_m3609_MethodInfo;
extern MethodInfo Type_get_IsPrimitive_m3610_MethodInfo;
extern MethodInfo Type_get_BaseType_m3544_MethodInfo;


// System.Void UnityEngine.Events.UnityEventBase::.ctor()
extern MethodInfo UnityEventBase__ctor_m3292_MethodInfo;
extern "C" void UnityEventBase__ctor_m3292 (UnityEventBase_t666 * __this, MethodInfo* method)
{
	{
		__this->___m_CallsDirty_3 = 1;
		Object__ctor_m1289(__this, /*hidden argument*/&Object__ctor_m1289_MethodInfo);
		InvokableCallList_t669 * L_0 = (InvokableCallList_t669 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvokableCallList_t669_il2cpp_TypeInfo));
		InvokableCallList__ctor_m3286(L_0, /*hidden argument*/&InvokableCallList__ctor_m3286_MethodInfo);
		__this->___m_Calls_0 = L_0;
		PersistentCallGroup_t668 * L_1 = (PersistentCallGroup_t668 *)il2cpp_codegen_object_new (InitializedTypeInfo(&PersistentCallGroup_t668_il2cpp_TypeInfo));
		PersistentCallGroup__ctor_m3284(L_1, /*hidden argument*/&PersistentCallGroup__ctor_m3284_MethodInfo);
		__this->___m_PersistentCalls_1 = L_1;
		Type_t * L_2 = Object_GetType_m1381(__this, /*hidden argument*/&Object_GetType_m1381_MethodInfo);
		NullCheck(L_2);
		String_t* L_3 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Type_get_AssemblyQualifiedName_m3607_MethodInfo, L_2);
		__this->___m_TypeName_2 = L_3;
		return;
	}
}
// System.Void UnityEngine.Events.UnityEventBase::UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize()
extern MethodInfo UnityEventBase_UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize_m1963_MethodInfo;
extern "C" void UnityEventBase_UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize_m1963 (UnityEventBase_t666 * __this, MethodInfo* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.Events.UnityEventBase::UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize()
extern MethodInfo UnityEventBase_UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize_m1964_MethodInfo;
extern "C" void UnityEventBase_UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize_m1964 (UnityEventBase_t666 * __this, MethodInfo* method)
{
	{
		UnityEventBase_DirtyPersistentCalls_m3295(__this, /*hidden argument*/&UnityEventBase_DirtyPersistentCalls_m3295_MethodInfo);
		Type_t * L_0 = Object_GetType_m1381(__this, /*hidden argument*/&Object_GetType_m1381_MethodInfo);
		NullCheck(L_0);
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Type_get_AssemblyQualifiedName_m3607_MethodInfo, L_0);
		__this->___m_TypeName_2 = L_1;
		return;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEventBase::FindMethod_Impl(System.String,System.Object)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEventBase::GetDelegate(System.Object,System.Reflection.MethodInfo)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEventBase::FindMethod(UnityEngine.Events.PersistentCall)
extern "C" MethodInfo_t * UnityEventBase_FindMethod_m3293 (UnityEventBase_t666 * __this, PersistentCall_t665 * ___call, MethodInfo* method)
{
	Type_t * V_0 = {0};
	Type_t * G_B3_0 = {0};
	Type_t * G_B2_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_0 = Type_GetTypeFromHandle_m1488(NULL /*static, unused*/, LoadTypeToken(&Object_t20_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m1488_MethodInfo);
		V_0 = L_0;
		PersistentCall_t665 * L_1 = ___call;
		NullCheck(L_1);
		ArgumentCache_t661 * L_2 = PersistentCall_get_arguments_m3280(L_1, /*hidden argument*/&PersistentCall_get_arguments_m3280_MethodInfo);
		NullCheck(L_2);
		String_t* L_3 = ArgumentCache_get_unityObjectArgumentAssemblyTypeName_m3262(L_2, /*hidden argument*/&ArgumentCache_get_unityObjectArgumentAssemblyTypeName_m3262_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		bool L_4 = String_IsNullOrEmpty_m1684(NULL /*static, unused*/, L_3, /*hidden argument*/&String_IsNullOrEmpty_m1684_MethodInfo);
		if (L_4)
		{
			goto IL_0043;
		}
	}
	{
		PersistentCall_t665 * L_5 = ___call;
		NullCheck(L_5);
		ArgumentCache_t661 * L_6 = PersistentCall_get_arguments_m3280(L_5, /*hidden argument*/&PersistentCall_get_arguments_m3280_MethodInfo);
		NullCheck(L_6);
		String_t* L_7 = ArgumentCache_get_unityObjectArgumentAssemblyTypeName_m3262(L_6, /*hidden argument*/&ArgumentCache_get_unityObjectArgumentAssemblyTypeName_m3262_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_8 = Type_GetType_m3588(NULL /*static, unused*/, L_7, 0, /*hidden argument*/&Type_GetType_m3588_MethodInfo);
		Type_t * L_9 = L_8;
		G_B2_0 = L_9;
		if (L_9)
		{
			G_B3_0 = L_9;
			goto IL_0042;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_10 = Type_GetTypeFromHandle_m1488(NULL /*static, unused*/, LoadTypeToken(&Object_t20_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m1488_MethodInfo);
		G_B3_0 = L_10;
	}

IL_0042:
	{
		V_0 = G_B3_0;
	}

IL_0043:
	{
		PersistentCall_t665 * L_11 = ___call;
		NullCheck(L_11);
		String_t* L_12 = PersistentCall_get_methodName_m3278(L_11, /*hidden argument*/&PersistentCall_get_methodName_m3278_MethodInfo);
		PersistentCall_t665 * L_13 = ___call;
		NullCheck(L_13);
		Object_t20 * L_14 = PersistentCall_get_target_m3277(L_13, /*hidden argument*/&PersistentCall_get_target_m3277_MethodInfo);
		PersistentCall_t665 * L_15 = ___call;
		NullCheck(L_15);
		int32_t L_16 = PersistentCall_get_mode_m3279(L_15, /*hidden argument*/&PersistentCall_get_mode_m3279_MethodInfo);
		Type_t * L_17 = V_0;
		MethodInfo_t * L_18 = UnityEventBase_FindMethod_m3294(__this, L_12, L_14, L_16, L_17, /*hidden argument*/&UnityEventBase_FindMethod_m3294_MethodInfo);
		return L_18;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEventBase::FindMethod(System.String,System.Object,UnityEngine.Events.PersistentListenerMode,System.Type)
extern TypeInfo* TypeU5BU5D_t606_il2cpp_TypeInfo_var;
extern "C" MethodInfo_t * UnityEventBase_FindMethod_m3294 (UnityEventBase_t666 * __this, String_t* ___name, Object_t * ___listener, int32_t ___mode, Type_t * ___argumentType, MethodInfo* method)
{
	static bool UnityEventBase_FindMethod_m3294_init;
	if (!UnityEventBase_FindMethod_m3294_init)
	{
		TypeU5BU5D_t606_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&TypeU5BU5D_t606_0_0_0);
		UnityEventBase_FindMethod_m3294_init = true;
	}
	int32_t V_0 = {0};
	Type_t * G_B10_0 = {0};
	int32_t G_B10_1 = 0;
	TypeU5BU5D_t606* G_B10_2 = {0};
	TypeU5BU5D_t606* G_B10_3 = {0};
	String_t* G_B10_4 = {0};
	Object_t * G_B10_5 = {0};
	Type_t * G_B9_0 = {0};
	int32_t G_B9_1 = 0;
	TypeU5BU5D_t606* G_B9_2 = {0};
	TypeU5BU5D_t606* G_B9_3 = {0};
	String_t* G_B9_4 = {0};
	Object_t * G_B9_5 = {0};
	{
		int32_t L_0 = ___mode;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0029;
		}
		if (L_1 == 1)
		{
			goto IL_0032;
		}
		if (L_1 == 2)
		{
			goto IL_00ac;
		}
		if (L_1 == 3)
		{
			goto IL_005b;
		}
		if (L_1 == 4)
		{
			goto IL_0040;
		}
		if (L_1 == 5)
		{
			goto IL_0091;
		}
		if (L_1 == 6)
		{
			goto IL_0076;
		}
	}
	{
		goto IL_00d0;
	}

IL_0029:
	{
		String_t* L_2 = ___name;
		Object_t * L_3 = ___listener;
		MethodInfo_t * L_4 = (MethodInfo_t *)VirtFuncInvoker2< MethodInfo_t *, String_t*, Object_t * >::Invoke(&UnityEventBase_FindMethod_Impl_m3608_MethodInfo, __this, L_2, L_3);
		return L_4;
	}

IL_0032:
	{
		Object_t * L_5 = ___listener;
		String_t* L_6 = ___name;
		MethodInfo_t * L_7 = UnityEventBase_GetValidMethodInfo_m3300(NULL /*static, unused*/, L_5, L_6, ((TypeU5BU5D_t606*)SZArrayNew(TypeU5BU5D_t606_il2cpp_TypeInfo_var, 0)), /*hidden argument*/&UnityEventBase_GetValidMethodInfo_m3300_MethodInfo);
		return L_7;
	}

IL_0040:
	{
		Object_t * L_8 = ___listener;
		String_t* L_9 = ___name;
		TypeU5BU5D_t606* L_10 = ((TypeU5BU5D_t606*)SZArrayNew(TypeU5BU5D_t606_il2cpp_TypeInfo_var, 1));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_11 = Type_GetTypeFromHandle_m1488(NULL /*static, unused*/, LoadTypeToken(&Single_t23_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m1488_MethodInfo);
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 0);
		ArrayElementTypeCheck (L_10, L_11);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_10, 0)) = (Type_t *)L_11;
		MethodInfo_t * L_12 = UnityEventBase_GetValidMethodInfo_m3300(NULL /*static, unused*/, L_8, L_9, L_10, /*hidden argument*/&UnityEventBase_GetValidMethodInfo_m3300_MethodInfo);
		return L_12;
	}

IL_005b:
	{
		Object_t * L_13 = ___listener;
		String_t* L_14 = ___name;
		TypeU5BU5D_t606* L_15 = ((TypeU5BU5D_t606*)SZArrayNew(TypeU5BU5D_t606_il2cpp_TypeInfo_var, 1));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_16 = Type_GetTypeFromHandle_m1488(NULL /*static, unused*/, LoadTypeToken(&Int32_t17_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m1488_MethodInfo);
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, 0);
		ArrayElementTypeCheck (L_15, L_16);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_15, 0)) = (Type_t *)L_16;
		MethodInfo_t * L_17 = UnityEventBase_GetValidMethodInfo_m3300(NULL /*static, unused*/, L_13, L_14, L_15, /*hidden argument*/&UnityEventBase_GetValidMethodInfo_m3300_MethodInfo);
		return L_17;
	}

IL_0076:
	{
		Object_t * L_18 = ___listener;
		String_t* L_19 = ___name;
		TypeU5BU5D_t606* L_20 = ((TypeU5BU5D_t606*)SZArrayNew(TypeU5BU5D_t606_il2cpp_TypeInfo_var, 1));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_21 = Type_GetTypeFromHandle_m1488(NULL /*static, unused*/, LoadTypeToken(&Boolean_t13_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m1488_MethodInfo);
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, 0);
		ArrayElementTypeCheck (L_20, L_21);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_20, 0)) = (Type_t *)L_21;
		MethodInfo_t * L_22 = UnityEventBase_GetValidMethodInfo_m3300(NULL /*static, unused*/, L_18, L_19, L_20, /*hidden argument*/&UnityEventBase_GetValidMethodInfo_m3300_MethodInfo);
		return L_22;
	}

IL_0091:
	{
		Object_t * L_23 = ___listener;
		String_t* L_24 = ___name;
		TypeU5BU5D_t606* L_25 = ((TypeU5BU5D_t606*)SZArrayNew(TypeU5BU5D_t606_il2cpp_TypeInfo_var, 1));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_26 = Type_GetTypeFromHandle_m1488(NULL /*static, unused*/, LoadTypeToken(&String_t_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m1488_MethodInfo);
		NullCheck(L_25);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_25, 0);
		ArrayElementTypeCheck (L_25, L_26);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_25, 0)) = (Type_t *)L_26;
		MethodInfo_t * L_27 = UnityEventBase_GetValidMethodInfo_m3300(NULL /*static, unused*/, L_23, L_24, L_25, /*hidden argument*/&UnityEventBase_GetValidMethodInfo_m3300_MethodInfo);
		return L_27;
	}

IL_00ac:
	{
		Object_t * L_28 = ___listener;
		String_t* L_29 = ___name;
		TypeU5BU5D_t606* L_30 = ((TypeU5BU5D_t606*)SZArrayNew(TypeU5BU5D_t606_il2cpp_TypeInfo_var, 1));
		Type_t * L_31 = ___argumentType;
		Type_t * L_32 = L_31;
		G_B9_0 = L_32;
		G_B9_1 = 0;
		G_B9_2 = L_30;
		G_B9_3 = L_30;
		G_B9_4 = L_29;
		G_B9_5 = L_28;
		if (L_32)
		{
			G_B10_0 = L_32;
			G_B10_1 = 0;
			G_B10_2 = L_30;
			G_B10_3 = L_30;
			G_B10_4 = L_29;
			G_B10_5 = L_28;
			goto IL_00c9;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_33 = Type_GetTypeFromHandle_m1488(NULL /*static, unused*/, LoadTypeToken(&Object_t20_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m1488_MethodInfo);
		G_B10_0 = L_33;
		G_B10_1 = G_B9_1;
		G_B10_2 = G_B9_2;
		G_B10_3 = G_B9_3;
		G_B10_4 = G_B9_4;
		G_B10_5 = G_B9_5;
	}

IL_00c9:
	{
		NullCheck(G_B10_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B10_2, G_B10_1);
		ArrayElementTypeCheck (G_B10_2, G_B10_0);
		*((Type_t **)(Type_t **)SZArrayLdElema(G_B10_2, G_B10_1)) = (Type_t *)G_B10_0;
		MethodInfo_t * L_34 = UnityEventBase_GetValidMethodInfo_m3300(NULL /*static, unused*/, G_B10_5, G_B10_4, G_B10_3, /*hidden argument*/&UnityEventBase_GetValidMethodInfo_m3300_MethodInfo);
		return L_34;
	}

IL_00d0:
	{
		return (MethodInfo_t *)NULL;
	}
}
// System.Void UnityEngine.Events.UnityEventBase::DirtyPersistentCalls()
extern "C" void UnityEventBase_DirtyPersistentCalls_m3295 (UnityEventBase_t666 * __this, MethodInfo* method)
{
	{
		InvokableCallList_t669 * L_0 = (__this->___m_Calls_0);
		NullCheck(L_0);
		InvokableCallList_ClearPersistent_m3290(L_0, /*hidden argument*/&InvokableCallList_ClearPersistent_m3290_MethodInfo);
		__this->___m_CallsDirty_3 = 1;
		return;
	}
}
// System.Void UnityEngine.Events.UnityEventBase::RebuildPersistentCallsIfNeeded()
extern "C" void UnityEventBase_RebuildPersistentCallsIfNeeded_m3296 (UnityEventBase_t666 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_CallsDirty_3);
		if (!L_0)
		{
			goto IL_0024;
		}
	}
	{
		PersistentCallGroup_t668 * L_1 = (__this->___m_PersistentCalls_1);
		InvokableCallList_t669 * L_2 = (__this->___m_Calls_0);
		NullCheck(L_1);
		PersistentCallGroup_Initialize_m3285(L_1, L_2, __this, /*hidden argument*/&PersistentCallGroup_Initialize_m3285_MethodInfo);
		__this->___m_CallsDirty_3 = 0;
	}

IL_0024:
	{
		return;
	}
}
// System.Void UnityEngine.Events.UnityEventBase::AddCall(UnityEngine.Events.BaseInvokableCall)
extern MethodInfo UnityEventBase_AddCall_m3297_MethodInfo;
extern "C" void UnityEventBase_AddCall_m3297 (UnityEventBase_t666 * __this, BaseInvokableCall_t662 * ___call, MethodInfo* method)
{
	{
		InvokableCallList_t669 * L_0 = (__this->___m_Calls_0);
		BaseInvokableCall_t662 * L_1 = ___call;
		NullCheck(L_0);
		InvokableCallList_AddListener_m3288(L_0, L_1, /*hidden argument*/&InvokableCallList_AddListener_m3288_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEventBase::RemoveListener(System.Object,System.Reflection.MethodInfo)
extern MethodInfo UnityEventBase_RemoveListener_m3298_MethodInfo;
extern "C" void UnityEventBase_RemoveListener_m3298 (UnityEventBase_t666 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, MethodInfo* method)
{
	{
		InvokableCallList_t669 * L_0 = (__this->___m_Calls_0);
		Object_t * L_1 = ___targetObj;
		MethodInfo_t * L_2 = ___method;
		NullCheck(L_0);
		InvokableCallList_RemoveListener_m3289(L_0, L_1, L_2, /*hidden argument*/&InvokableCallList_RemoveListener_m3289_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEventBase::Invoke(System.Object[])
extern MethodInfo UnityEventBase_Invoke_m3299_MethodInfo;
extern "C" void UnityEventBase_Invoke_m3299 (UnityEventBase_t666 * __this, ObjectU5BU5D_t269* ___parameters, MethodInfo* method)
{
	{
		UnityEventBase_RebuildPersistentCallsIfNeeded_m3296(__this, /*hidden argument*/&UnityEventBase_RebuildPersistentCallsIfNeeded_m3296_MethodInfo);
		InvokableCallList_t669 * L_0 = (__this->___m_Calls_0);
		ObjectU5BU5D_t269* L_1 = ___parameters;
		NullCheck(L_0);
		InvokableCallList_Invoke_m3291(L_0, L_1, /*hidden argument*/&InvokableCallList_Invoke_m3291_MethodInfo);
		return;
	}
}
// System.String UnityEngine.Events.UnityEventBase::ToString()
extern MethodInfo UnityEventBase_ToString_m1962_MethodInfo;
extern "C" String_t* UnityEventBase_ToString_m1962 (UnityEventBase_t666 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = Object_ToString_m1967(__this, /*hidden argument*/&Object_ToString_m1967_MethodInfo);
		Type_t * L_1 = Object_GetType_m1381(__this, /*hidden argument*/&Object_GetType_m1381_MethodInfo);
		NullCheck(L_1);
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Type_get_FullName_m3523_MethodInfo, L_1);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_3 = String_Concat_m1615(NULL /*static, unused*/, L_0, (String_t*) &_stringLiteral89, L_2, /*hidden argument*/&String_Concat_m1615_MethodInfo);
		return L_3;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEventBase::GetValidMethodInfo(System.Object,System.String,System.Type[])
extern "C" MethodInfo_t * UnityEventBase_GetValidMethodInfo_m3300 (Object_t * __this /* static, unused */, Object_t * ___obj, String_t* ___functionName, TypeU5BU5D_t606* ___argumentTypes, MethodInfo* method)
{
	Type_t * V_0 = {0};
	MethodInfo_t * V_1 = {0};
	ParameterInfoU5BU5D_t729* V_2 = {0};
	bool V_3 = false;
	int32_t V_4 = 0;
	ParameterInfo_t730 * V_5 = {0};
	ParameterInfoU5BU5D_t729* V_6 = {0};
	int32_t V_7 = 0;
	Type_t * V_8 = {0};
	Type_t * V_9 = {0};
	{
		Object_t * L_0 = ___obj;
		NullCheck(L_0);
		Type_t * L_1 = Object_GetType_m1381(L_0, /*hidden argument*/&Object_GetType_m1381_MethodInfo);
		V_0 = L_1;
		goto IL_008e;
	}

IL_000c:
	{
		Type_t * L_2 = V_0;
		String_t* L_3 = ___functionName;
		TypeU5BU5D_t606* L_4 = ___argumentTypes;
		NullCheck(L_2);
		MethodInfo_t * L_5 = (MethodInfo_t *)VirtFuncInvoker5< MethodInfo_t *, String_t*, int32_t, Binder_t736 *, TypeU5BU5D_t606*, ParameterModifierU5BU5D_t737* >::Invoke(&Type_GetMethod_m3609_MethodInfo, L_2, L_3, ((int32_t)52), (Binder_t736 *)NULL, L_4, (ParameterModifierU5BU5D_t737*)(ParameterModifierU5BU5D_t737*)NULL);
		V_1 = L_5;
		MethodInfo_t * L_6 = V_1;
		if (!L_6)
		{
			goto IL_0087;
		}
	}
	{
		MethodInfo_t * L_7 = V_1;
		NullCheck(L_7);
		ParameterInfoU5BU5D_t729* L_8 = (ParameterInfoU5BU5D_t729*)VirtFuncInvoker0< ParameterInfoU5BU5D_t729* >::Invoke(&MethodBase_GetParameters_m3537_MethodInfo, L_7);
		V_2 = L_8;
		V_3 = 1;
		V_4 = 0;
		ParameterInfoU5BU5D_t729* L_9 = V_2;
		V_6 = L_9;
		V_7 = 0;
		goto IL_0074;
	}

IL_0036:
	{
		ParameterInfoU5BU5D_t729* L_10 = V_6;
		int32_t L_11 = V_7;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = L_11;
		V_5 = (*(ParameterInfo_t730 **)(ParameterInfo_t730 **)SZArrayLdElema(L_10, L_12));
		TypeU5BU5D_t606* L_13 = ___argumentTypes;
		int32_t L_14 = V_4;
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, L_14);
		int32_t L_15 = L_14;
		V_8 = (*(Type_t **)(Type_t **)SZArrayLdElema(L_13, L_15));
		ParameterInfo_t730 * L_16 = V_5;
		NullCheck(L_16);
		Type_t * L_17 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&ParameterInfo_get_ParameterType_m3538_MethodInfo, L_16);
		V_9 = L_17;
		Type_t * L_18 = V_8;
		NullCheck(L_18);
		bool L_19 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsPrimitive_m3610_MethodInfo, L_18);
		Type_t * L_20 = V_9;
		NullCheck(L_20);
		bool L_21 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsPrimitive_m3610_MethodInfo, L_20);
		V_3 = ((((int32_t)L_19) == ((int32_t)L_21))? 1 : 0);
		bool L_22 = V_3;
		if (L_22)
		{
			goto IL_0068;
		}
	}
	{
		goto IL_007f;
	}

IL_0068:
	{
		int32_t L_23 = V_4;
		V_4 = ((int32_t)((int32_t)L_23+(int32_t)1));
		int32_t L_24 = V_7;
		V_7 = ((int32_t)((int32_t)L_24+(int32_t)1));
	}

IL_0074:
	{
		int32_t L_25 = V_7;
		ParameterInfoU5BU5D_t729* L_26 = V_6;
		NullCheck(L_26);
		if ((((int32_t)L_25) < ((int32_t)(((int32_t)(((Array_t *)L_26)->max_length))))))
		{
			goto IL_0036;
		}
	}

IL_007f:
	{
		bool L_27 = V_3;
		if (!L_27)
		{
			goto IL_0087;
		}
	}
	{
		MethodInfo_t * L_28 = V_1;
		return L_28;
	}

IL_0087:
	{
		Type_t * L_29 = V_0;
		NullCheck(L_29);
		Type_t * L_30 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&Type_get_BaseType_m3544_MethodInfo, L_29);
		V_0 = L_30;
	}

IL_008e:
	{
		Type_t * L_31 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_32 = Type_GetTypeFromHandle_m1488(NULL /*static, unused*/, LoadTypeToken(&Object_t_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m1488_MethodInfo);
		if ((((Object_t*)(Type_t *)L_31) == ((Object_t*)(Type_t *)L_32)))
		{
			goto IL_00a4;
		}
	}
	{
		Type_t * L_33 = V_0;
		if (L_33)
		{
			goto IL_000c;
		}
	}

IL_00a4:
	{
		return (MethodInfo_t *)NULL;
	}
}
// UnityEngine.Events.UnityEvent
#include "UnityEngine_UnityEngine_Events_UnityEvent.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo UnityEvent_t113_il2cpp_TypeInfo;
// UnityEngine.Events.UnityEvent
#include "UnityEngine_UnityEngine_Events_UnityEventMethodDeclarations.h"



// System.Void UnityEngine.Events.UnityEvent::.ctor()
extern MethodInfo UnityEvent__ctor_m1451_MethodInfo;
extern TypeInfo* ObjectU5BU5D_t269_il2cpp_TypeInfo_var;
extern "C" void UnityEvent__ctor_m1451 (UnityEvent_t113 * __this, MethodInfo* method)
{
	static bool UnityEvent__ctor_m1451_init;
	if (!UnityEvent__ctor_m1451_init)
	{
		ObjectU5BU5D_t269_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t269_0_0_0);
		UnityEvent__ctor_m1451_init = true;
	}
	{
		__this->___m_InvokeArray_4 = ((ObjectU5BU5D_t269*)SZArrayNew(ObjectU5BU5D_t269_il2cpp_TypeInfo_var, 0));
		UnityEventBase__ctor_m3292(__this, /*hidden argument*/&UnityEventBase__ctor_m3292_MethodInfo);
		return;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent::FindMethod_Impl(System.String,System.Object)
extern MethodInfo UnityEvent_FindMethod_Impl_m2016_MethodInfo;
extern TypeInfo* TypeU5BU5D_t606_il2cpp_TypeInfo_var;
extern "C" MethodInfo_t * UnityEvent_FindMethod_Impl_m2016 (UnityEvent_t113 * __this, String_t* ___name, Object_t * ___targetObj, MethodInfo* method)
{
	static bool UnityEvent_FindMethod_Impl_m2016_init;
	if (!UnityEvent_FindMethod_Impl_m2016_init)
	{
		TypeU5BU5D_t606_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&TypeU5BU5D_t606_0_0_0);
		UnityEvent_FindMethod_Impl_m2016_init = true;
	}
	{
		Object_t * L_0 = ___targetObj;
		String_t* L_1 = ___name;
		MethodInfo_t * L_2 = UnityEventBase_GetValidMethodInfo_m3300(NULL /*static, unused*/, L_0, L_1, ((TypeU5BU5D_t606*)SZArrayNew(TypeU5BU5D_t606_il2cpp_TypeInfo_var, 0)), /*hidden argument*/&UnityEventBase_GetValidMethodInfo_m3300_MethodInfo);
		return L_2;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern MethodInfo UnityEvent_GetDelegate_m2017_MethodInfo;
extern "C" BaseInvokableCall_t662 * UnityEvent_GetDelegate_m2017 (UnityEvent_t113 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, MethodInfo* method)
{
	{
		Object_t * L_0 = ___target;
		MethodInfo_t * L_1 = ___theFunction;
		InvokableCall_t663 * L_2 = (InvokableCall_t663 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvokableCall_t663_il2cpp_TypeInfo));
		InvokableCall__ctor_m3273(L_2, L_0, L_1, /*hidden argument*/&InvokableCall__ctor_m3273_MethodInfo);
		return L_2;
	}
}
// System.Void UnityEngine.Events.UnityEvent::Invoke()
extern MethodInfo UnityEvent_Invoke_m1454_MethodInfo;
extern "C" void UnityEvent_Invoke_m1454 (UnityEvent_t113 * __this, MethodInfo* method)
{
	{
		ObjectU5BU5D_t269* L_0 = (__this->___m_InvokeArray_4);
		UnityEventBase_Invoke_m3299(__this, L_0, /*hidden argument*/&UnityEventBase_Invoke_m3299_MethodInfo);
		return;
	}
}
// UnityEngine.UserAuthorizationDialog
#include "UnityEngine_UnityEngine_UserAuthorizationDialog.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo UserAuthorizationDialog_t671_il2cpp_TypeInfo;
// UnityEngine.UserAuthorizationDialog
#include "UnityEngine_UnityEngine_UserAuthorizationDialogMethodDeclarations.h"

// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviourMethodDeclarations.h"
extern MethodInfo MonoBehaviour__ctor_m27_MethodInfo;


// System.Void UnityEngine.UserAuthorizationDialog::.ctor()
extern MethodInfo UserAuthorizationDialog__ctor_m3301_MethodInfo;
extern "C" void UserAuthorizationDialog__ctor_m3301 (UserAuthorizationDialog_t671 * __this, MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m27(__this, /*hidden argument*/&MonoBehaviour__ctor_m27_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.UserAuthorizationDialog::Start()
extern MethodInfo UserAuthorizationDialog_Start_m3302_MethodInfo;
extern "C" void UserAuthorizationDialog_Start_m3302 (UserAuthorizationDialog_t671 * __this, MethodInfo* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.UserAuthorizationDialog::OnGUI()
extern MethodInfo UserAuthorizationDialog_OnGUI_m3303_MethodInfo;
extern "C" void UserAuthorizationDialog_OnGUI_m3303 (UserAuthorizationDialog_t671 * __this, MethodInfo* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.UserAuthorizationDialog::DoUserAuthorizationDialog(System.Int32)
extern MethodInfo UserAuthorizationDialog_DoUserAuthorizationDialog_m3304_MethodInfo;
extern "C" void UserAuthorizationDialog_DoUserAuthorizationDialog_m3304 (UserAuthorizationDialog_t671 * __this, int32_t ___windowID, MethodInfo* method)
{
	{
		return;
	}
}
// UnityEngine.Internal.DefaultValueAttribute
#include "UnityEngine_UnityEngine_Internal_DefaultValueAttribute.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo DefaultValueAttribute_t672_il2cpp_TypeInfo;
// UnityEngine.Internal.DefaultValueAttribute
#include "UnityEngine_UnityEngine_Internal_DefaultValueAttributeMethodDeclarations.h"

// System.Attribute
#include "mscorlib_System_Attribute.h"
extern TypeInfo Attribute_t497_il2cpp_TypeInfo;
extern MethodInfo DefaultValueAttribute_get_Value_m3306_MethodInfo;
extern MethodInfo Object_Equals_m1960_MethodInfo;
extern MethodInfo Attribute_GetHashCode_m3611_MethodInfo;
extern MethodInfo Object_GetHashCode_m1961_MethodInfo;


// System.Void UnityEngine.Internal.DefaultValueAttribute::.ctor(System.String)
extern MethodInfo DefaultValueAttribute__ctor_m3305_MethodInfo;
extern "C" void DefaultValueAttribute__ctor_m3305 (DefaultValueAttribute_t672 * __this, String_t* ___value, MethodInfo* method)
{
	{
		Attribute__ctor_m3370(__this, /*hidden argument*/&Attribute__ctor_m3370_MethodInfo);
		String_t* L_0 = ___value;
		__this->___DefaultValue_0 = L_0;
		return;
	}
}
// System.Object UnityEngine.Internal.DefaultValueAttribute::get_Value()
extern "C" Object_t * DefaultValueAttribute_get_Value_m3306 (DefaultValueAttribute_t672 * __this, MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___DefaultValue_0);
		return L_0;
	}
}
// System.Boolean UnityEngine.Internal.DefaultValueAttribute::Equals(System.Object)
extern MethodInfo DefaultValueAttribute_Equals_m3307_MethodInfo;
extern "C" bool DefaultValueAttribute_Equals_m3307 (DefaultValueAttribute_t672 * __this, Object_t * ___obj, MethodInfo* method)
{
	DefaultValueAttribute_t672 * V_0 = {0};
	{
		Object_t * L_0 = ___obj;
		V_0 = ((DefaultValueAttribute_t672 *)IsInst(L_0, InitializedTypeInfo(&DefaultValueAttribute_t672_il2cpp_TypeInfo)));
		DefaultValueAttribute_t672 * L_1 = V_0;
		if (L_1)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		Object_t * L_2 = (__this->___DefaultValue_0);
		if (L_2)
		{
			goto IL_0024;
		}
	}
	{
		DefaultValueAttribute_t672 * L_3 = V_0;
		NullCheck(L_3);
		Object_t * L_4 = DefaultValueAttribute_get_Value_m3306(L_3, /*hidden argument*/&DefaultValueAttribute_get_Value_m3306_MethodInfo);
		return ((((Object_t*)(Object_t *)L_4) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
	}

IL_0024:
	{
		Object_t * L_5 = (__this->___DefaultValue_0);
		DefaultValueAttribute_t672 * L_6 = V_0;
		NullCheck(L_6);
		Object_t * L_7 = DefaultValueAttribute_get_Value_m3306(L_6, /*hidden argument*/&DefaultValueAttribute_get_Value_m3306_MethodInfo);
		NullCheck(L_5);
		bool L_8 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(&Object_Equals_m1960_MethodInfo, L_5, L_7);
		return L_8;
	}
}
// System.Int32 UnityEngine.Internal.DefaultValueAttribute::GetHashCode()
extern MethodInfo DefaultValueAttribute_GetHashCode_m3308_MethodInfo;
extern "C" int32_t DefaultValueAttribute_GetHashCode_m3308 (DefaultValueAttribute_t672 * __this, MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___DefaultValue_0);
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_1 = Attribute_GetHashCode_m3611(__this, /*hidden argument*/&Attribute_GetHashCode_m3611_MethodInfo);
		return L_1;
	}

IL_0012:
	{
		Object_t * L_2 = (__this->___DefaultValue_0);
		NullCheck(L_2);
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&Object_GetHashCode_m1961_MethodInfo, L_2);
		return L_3;
	}
}
// UnityEngine.Internal.ExcludeFromDocsAttribute
#include "UnityEngine_UnityEngine_Internal_ExcludeFromDocsAttribute.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ExcludeFromDocsAttribute_t673_il2cpp_TypeInfo;
// UnityEngine.Internal.ExcludeFromDocsAttribute
#include "UnityEngine_UnityEngine_Internal_ExcludeFromDocsAttributeMethodDeclarations.h"



// System.Void UnityEngine.Internal.ExcludeFromDocsAttribute::.ctor()
extern MethodInfo ExcludeFromDocsAttribute__ctor_m3309_MethodInfo;
extern "C" void ExcludeFromDocsAttribute__ctor_m3309 (ExcludeFromDocsAttribute_t673 * __this, MethodInfo* method)
{
	{
		Attribute__ctor_m3370(__this, /*hidden argument*/&Attribute__ctor_m3370_MethodInfo);
		return;
	}
}
// UnityEngine.Serialization.FormerlySerializedAsAttribute
#include "UnityEngine_UnityEngine_Serialization_FormerlySerializedAsAt.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo FormerlySerializedAsAttribute_t339_il2cpp_TypeInfo;
// UnityEngine.Serialization.FormerlySerializedAsAttribute
#include "UnityEngine_UnityEngine_Serialization_FormerlySerializedAsAtMethodDeclarations.h"



// System.Void UnityEngine.Serialization.FormerlySerializedAsAttribute::.ctor(System.String)
extern MethodInfo FormerlySerializedAsAttribute__ctor_m1957_MethodInfo;
extern "C" void FormerlySerializedAsAttribute__ctor_m1957 (FormerlySerializedAsAttribute_t339 * __this, String_t* ___oldName, MethodInfo* method)
{
	{
		Attribute__ctor_m3370(__this, /*hidden argument*/&Attribute__ctor_m3370_MethodInfo);
		String_t* L_0 = ___oldName;
		__this->___m_oldName_0 = L_0;
		return;
	}
}
// UnityEngineInternal.TypeInferenceRules
#include "UnityEngine_UnityEngineInternal_TypeInferenceRules.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo TypeInferenceRules_t674_il2cpp_TypeInfo;
// UnityEngineInternal.TypeInferenceRules
#include "UnityEngine_UnityEngineInternal_TypeInferenceRulesMethodDeclarations.h"



// UnityEngineInternal.TypeInferenceRuleAttribute
#include "UnityEngine_UnityEngineInternal_TypeInferenceRuleAttribute.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo TypeInferenceRuleAttribute_t675_il2cpp_TypeInfo;
// UnityEngineInternal.TypeInferenceRuleAttribute
#include "UnityEngine_UnityEngineInternal_TypeInferenceRuleAttributeMethodDeclarations.h"

// System.Enum
#include "mscorlib_System_Enum.h"
extern TypeInfo Enum_t334_il2cpp_TypeInfo;
// System.Enum
#include "mscorlib_System_EnumMethodDeclarations.h"
extern MethodInfo Enum_ToString_m1934_MethodInfo;
extern MethodInfo TypeInferenceRuleAttribute__ctor_m3311_MethodInfo;


// System.Void UnityEngineInternal.TypeInferenceRuleAttribute::.ctor(UnityEngineInternal.TypeInferenceRules)
extern MethodInfo TypeInferenceRuleAttribute__ctor_m3310_MethodInfo;
extern "C" void TypeInferenceRuleAttribute__ctor_m3310 (TypeInferenceRuleAttribute_t675 * __this, int32_t ___rule, MethodInfo* method)
{
	{
		int32_t L_0 = ___rule;
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&TypeInferenceRules_t674_il2cpp_TypeInfo), &L_1);
		NullCheck(L_2);
		String_t* L_3 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Enum_ToString_m1934_MethodInfo, L_2);
		TypeInferenceRuleAttribute__ctor_m3311(__this, L_3, /*hidden argument*/&TypeInferenceRuleAttribute__ctor_m3311_MethodInfo);
		return;
	}
}
// System.Void UnityEngineInternal.TypeInferenceRuleAttribute::.ctor(System.String)
extern "C" void TypeInferenceRuleAttribute__ctor_m3311 (TypeInferenceRuleAttribute_t675 * __this, String_t* ___rule, MethodInfo* method)
{
	{
		Attribute__ctor_m3370(__this, /*hidden argument*/&Attribute__ctor_m3370_MethodInfo);
		String_t* L_0 = ___rule;
		__this->____rule_0 = L_0;
		return;
	}
}
// System.String UnityEngineInternal.TypeInferenceRuleAttribute::ToString()
extern MethodInfo TypeInferenceRuleAttribute_ToString_m3312_MethodInfo;
extern "C" String_t* TypeInferenceRuleAttribute_ToString_m3312 (TypeInferenceRuleAttribute_t675 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->____rule_0);
		return L_0;
	}
}
// UnityEngineInternal.GenericStack
#include "UnityEngine_UnityEngineInternal_GenericStack.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo GenericStack_t463_il2cpp_TypeInfo;
// UnityEngineInternal.GenericStack
#include "UnityEngine_UnityEngineInternal_GenericStackMethodDeclarations.h"

// System.Collections.Stack
#include "mscorlib_System_Collections_StackMethodDeclarations.h"
extern MethodInfo Stack__ctor_m3612_MethodInfo;


// System.Void UnityEngineInternal.GenericStack::.ctor()
extern MethodInfo GenericStack__ctor_m3313_MethodInfo;
extern "C" void GenericStack__ctor_m3313 (GenericStack_t463 * __this, MethodInfo* method)
{
	{
		Stack__ctor_m3612(__this, /*hidden argument*/&Stack__ctor_m3612_MethodInfo);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"


// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
extern MethodInfo UnityAction__ctor_m1648_MethodInfo;
extern "C" void UnityAction__ctor_m1648 (UnityAction_t135 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.Events.UnityAction::Invoke()
extern "C" void UnityAction_Invoke_m1497 (UnityAction_t135 * __this, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		UnityAction_Invoke_m1497((UnityAction_t135 *)__this->___prev_9, method);
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
extern "C" void pinvoke_delegate_wrapper_UnityAction_t135(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.IAsyncResult UnityEngine.Events.UnityAction::BeginInvoke(System.AsyncCallback,System.Object)
extern MethodInfo UnityAction_BeginInvoke_m3314_MethodInfo;
extern "C" Object_t * UnityAction_BeginInvoke_m3314 (UnityAction_t135 * __this, AsyncCallback_t171 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.Events.UnityAction::EndInvoke(System.IAsyncResult)
extern MethodInfo UnityAction_EndInvoke_m3315_MethodInfo;
extern "C" void UnityAction_EndInvoke_m3315 (UnityAction_t135 * __this, Object_t * ___result, MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
