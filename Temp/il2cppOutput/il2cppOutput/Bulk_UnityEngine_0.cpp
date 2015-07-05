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
#include "UnityEngine_U3CModuleU3E.h"
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
extern TypeInfo U3CModuleU3E_t415_il2cpp_TypeInfo;
// <Module>
#include "UnityEngine_U3CModuleU3EMethodDeclarations.h"


// System.Array
#include "mscorlib_System_Array.h"

// UnityEngine.AssetBundleCreateRequest
#include "UnityEngine_UnityEngine_AssetBundleCreateRequest.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo AssetBundleCreateRequest_t416_il2cpp_TypeInfo;
// UnityEngine.AssetBundleCreateRequest
#include "UnityEngine_UnityEngine_AssetBundleCreateRequestMethodDeclarations.h"

// UnityEngine.AssetBundle
#include "UnityEngine_UnityEngine_AssetBundle.h"
// System.Void
#include "mscorlib_System_Void.h"
// UnityEngine.AsyncOperation
#include "UnityEngine_UnityEngine_AsyncOperationMethodDeclarations.h"
extern MethodInfo AsyncOperation__ctor_m2627_MethodInfo;


// System.Void UnityEngine.AssetBundleCreateRequest::.ctor()
extern MethodInfo AssetBundleCreateRequest__ctor_m2107_MethodInfo;
extern "C" void AssetBundleCreateRequest__ctor_m2107 (AssetBundleCreateRequest_t416 * __this, MethodInfo* method)
{
	{
		AsyncOperation__ctor_m2627(__this, /*hidden argument*/&AsyncOperation__ctor_m2627_MethodInfo);
		return;
	}
}
// UnityEngine.AssetBundle UnityEngine.AssetBundleCreateRequest::get_assetBundle()
extern MethodInfo AssetBundleCreateRequest_get_assetBundle_m2108_MethodInfo;
extern "C" AssetBundle_t418 * AssetBundleCreateRequest_get_assetBundle_m2108 (AssetBundleCreateRequest_t416 * __this, MethodInfo* method)
{
	typedef AssetBundle_t418 * (*AssetBundleCreateRequest_get_assetBundle_m2108_ftn) (AssetBundleCreateRequest_t416 *);
	static AssetBundleCreateRequest_get_assetBundle_m2108_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AssetBundleCreateRequest_get_assetBundle_m2108_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AssetBundleCreateRequest::get_assetBundle()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.AssetBundleCreateRequest::DisableCompatibilityChecks()
extern MethodInfo AssetBundleCreateRequest_DisableCompatibilityChecks_m2109_MethodInfo;
extern "C" void AssetBundleCreateRequest_DisableCompatibilityChecks_m2109 (AssetBundleCreateRequest_t416 * __this, MethodInfo* method)
{
	typedef void (*AssetBundleCreateRequest_DisableCompatibilityChecks_m2109_ftn) (AssetBundleCreateRequest_t416 *);
	static AssetBundleCreateRequest_DisableCompatibilityChecks_m2109_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AssetBundleCreateRequest_DisableCompatibilityChecks_m2109_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AssetBundleCreateRequest::DisableCompatibilityChecks()");
	_il2cpp_icall_func(__this);
}
// UnityEngine.AssetBundleRequest
#include "UnityEngine_UnityEngine_AssetBundleRequest.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo AssetBundleRequest_t419_il2cpp_TypeInfo;
// UnityEngine.AssetBundleRequest
#include "UnityEngine_UnityEngine_AssetBundleRequestMethodDeclarations.h"

// UnityEngine.Object
#include "UnityEngine_UnityEngine_Object.h"
// System.String
#include "mscorlib_System_String.h"
// System.Type
#include "mscorlib_System_Type.h"
#include "UnityEngine_ArrayTypes.h"
// UnityEngine.AssetBundle
#include "UnityEngine_UnityEngine_AssetBundleMethodDeclarations.h"
extern MethodInfo AssetBundle_LoadAsset_m2113_MethodInfo;
extern MethodInfo AssetBundle_LoadAssetWithSubAssets_Internal_m2115_MethodInfo;


// System.Void UnityEngine.AssetBundleRequest::.ctor()
extern MethodInfo AssetBundleRequest__ctor_m2110_MethodInfo;
extern "C" void AssetBundleRequest__ctor_m2110 (AssetBundleRequest_t419 * __this, MethodInfo* method)
{
	{
		AsyncOperation__ctor_m2627(__this, /*hidden argument*/&AsyncOperation__ctor_m2627_MethodInfo);
		return;
	}
}
// UnityEngine.Object UnityEngine.AssetBundleRequest::get_asset()
extern MethodInfo AssetBundleRequest_get_asset_m2111_MethodInfo;
extern "C" Object_t20 * AssetBundleRequest_get_asset_m2111 (AssetBundleRequest_t419 * __this, MethodInfo* method)
{
	{
		AssetBundle_t418 * L_0 = (__this->___m_AssetBundle_1);
		String_t* L_1 = (__this->___m_Path_2);
		Type_t * L_2 = (__this->___m_Type_3);
		NullCheck(L_0);
		Object_t20 * L_3 = AssetBundle_LoadAsset_m2113(L_0, L_1, L_2, /*hidden argument*/&AssetBundle_LoadAsset_m2113_MethodInfo);
		return L_3;
	}
}
// UnityEngine.Object[] UnityEngine.AssetBundleRequest::get_allAssets()
extern MethodInfo AssetBundleRequest_get_allAssets_m2112_MethodInfo;
extern "C" ObjectU5BU5D_t420* AssetBundleRequest_get_allAssets_m2112 (AssetBundleRequest_t419 * __this, MethodInfo* method)
{
	{
		AssetBundle_t418 * L_0 = (__this->___m_AssetBundle_1);
		String_t* L_1 = (__this->___m_Path_2);
		Type_t * L_2 = (__this->___m_Type_3);
		NullCheck(L_0);
		ObjectU5BU5D_t420* L_3 = AssetBundle_LoadAssetWithSubAssets_Internal_m2115(L_0, L_1, L_2, /*hidden argument*/&AssetBundle_LoadAssetWithSubAssets_Internal_m2115_MethodInfo);
		return L_3;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo AssetBundle_t418_il2cpp_TypeInfo;

// System.NullReferenceException
#include "mscorlib_System_NullReferenceException.h"
// System.Int32
#include "mscorlib_System_Int32.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentException.h"
extern TypeInfo NullReferenceException_t677_il2cpp_TypeInfo;
extern TypeInfo ArgumentException_t318_il2cpp_TypeInfo;
// System.NullReferenceException
#include "mscorlib_System_NullReferenceExceptionMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
extern MethodInfo NullReferenceException__ctor_m3316_MethodInfo;
extern MethodInfo String_get_Length_m1637_MethodInfo;
extern MethodInfo ArgumentException__ctor_m1847_MethodInfo;
extern MethodInfo AssetBundle_LoadAsset_Internal_m2114_MethodInfo;


// UnityEngine.Object UnityEngine.AssetBundle::LoadAsset(System.String,System.Type)
extern "C" Object_t20 * AssetBundle_LoadAsset_m2113 (AssetBundle_t418 * __this, String_t* ___name, Type_t * ___type, MethodInfo* method)
{
	{
		String_t* L_0 = ___name;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		NullReferenceException_t677 * L_1 = (NullReferenceException_t677 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NullReferenceException_t677_il2cpp_TypeInfo));
		NullReferenceException__ctor_m3316(L_1, (String_t*) &_stringLiteral72, /*hidden argument*/&NullReferenceException__ctor_m3316_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0011:
	{
		String_t* L_2 = ___name;
		NullCheck(L_2);
		int32_t L_3 = String_get_Length_m1637(L_2, /*hidden argument*/&String_get_Length_m1637_MethodInfo);
		if (L_3)
		{
			goto IL_0027;
		}
	}
	{
		ArgumentException_t318 * L_4 = (ArgumentException_t318 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t318_il2cpp_TypeInfo));
		ArgumentException__ctor_m1847(L_4, (String_t*) &_stringLiteral73, /*hidden argument*/&ArgumentException__ctor_m1847_MethodInfo);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0027:
	{
		Type_t * L_5 = ___type;
		if (L_5)
		{
			goto IL_0038;
		}
	}
	{
		NullReferenceException_t677 * L_6 = (NullReferenceException_t677 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NullReferenceException_t677_il2cpp_TypeInfo));
		NullReferenceException__ctor_m3316(L_6, (String_t*) &_stringLiteral74, /*hidden argument*/&NullReferenceException__ctor_m3316_MethodInfo);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_0038:
	{
		String_t* L_7 = ___name;
		Type_t * L_8 = ___type;
		Object_t20 * L_9 = AssetBundle_LoadAsset_Internal_m2114(__this, L_7, L_8, /*hidden argument*/&AssetBundle_LoadAsset_Internal_m2114_MethodInfo);
		return L_9;
	}
}
// UnityEngine.Object UnityEngine.AssetBundle::LoadAsset_Internal(System.String,System.Type)
extern "C" Object_t20 * AssetBundle_LoadAsset_Internal_m2114 (AssetBundle_t418 * __this, String_t* ___name, Type_t * ___type, MethodInfo* method)
{
	typedef Object_t20 * (*AssetBundle_LoadAsset_Internal_m2114_ftn) (AssetBundle_t418 *, String_t*, Type_t *);
	static AssetBundle_LoadAsset_Internal_m2114_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AssetBundle_LoadAsset_Internal_m2114_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AssetBundle::LoadAsset_Internal(System.String,System.Type)");
	return _il2cpp_icall_func(__this, ___name, ___type);
}
// UnityEngine.Object[] UnityEngine.AssetBundle::LoadAssetWithSubAssets_Internal(System.String,System.Type)
extern "C" ObjectU5BU5D_t420* AssetBundle_LoadAssetWithSubAssets_Internal_m2115 (AssetBundle_t418 * __this, String_t* ___name, Type_t * ___type, MethodInfo* method)
{
	typedef ObjectU5BU5D_t420* (*AssetBundle_LoadAssetWithSubAssets_Internal_m2115_ftn) (AssetBundle_t418 *, String_t*, Type_t *);
	static AssetBundle_LoadAssetWithSubAssets_Internal_m2115_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AssetBundle_LoadAssetWithSubAssets_Internal_m2115_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AssetBundle::LoadAssetWithSubAssets_Internal(System.String,System.Type)");
	return _il2cpp_icall_func(__this, ___name, ___type);
}
// UnityEngine.SendMessageOptions
#include "UnityEngine_UnityEngine_SendMessageOptions.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo SendMessageOptions_t421_il2cpp_TypeInfo;
// UnityEngine.SendMessageOptions
#include "UnityEngine_UnityEngine_SendMessageOptionsMethodDeclarations.h"



// UnityEngine.Space
#include "UnityEngine_UnityEngine_Space.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Space_t422_il2cpp_TypeInfo;
// UnityEngine.Space
#include "UnityEngine_UnityEngine_SpaceMethodDeclarations.h"



// UnityEngine.LayerMask
#include "UnityEngine_UnityEngine_LayerMask.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo LayerMask_t103_il2cpp_TypeInfo;
// UnityEngine.LayerMask
#include "UnityEngine_UnityEngine_LayerMaskMethodDeclarations.h"

#include "mscorlib_ArrayTypes.h"
extern MethodInfo LayerMask_NameToLayer_m2119_MethodInfo;


// System.Int32 UnityEngine.LayerMask::get_value()
extern MethodInfo LayerMask_get_value_m2116_MethodInfo;
extern "C" int32_t LayerMask_get_value_m2116 (LayerMask_t103 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Mask_0);
		return L_0;
	}
}
// System.Void UnityEngine.LayerMask::set_value(System.Int32)
extern MethodInfo LayerMask_set_value_m2117_MethodInfo;
extern "C" void LayerMask_set_value_m2117 (LayerMask_t103 * __this, int32_t ___value, MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___m_Mask_0 = L_0;
		return;
	}
}
// System.String UnityEngine.LayerMask::LayerToName(System.Int32)
extern MethodInfo LayerMask_LayerToName_m2118_MethodInfo;
extern "C" String_t* LayerMask_LayerToName_m2118 (Object_t * __this /* static, unused */, int32_t ___layer, MethodInfo* method)
{
	typedef String_t* (*LayerMask_LayerToName_m2118_ftn) (int32_t);
	static LayerMask_LayerToName_m2118_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (LayerMask_LayerToName_m2118_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.LayerMask::LayerToName(System.Int32)");
	return _il2cpp_icall_func(___layer);
}
// System.Int32 UnityEngine.LayerMask::NameToLayer(System.String)
extern "C" int32_t LayerMask_NameToLayer_m2119 (Object_t * __this /* static, unused */, String_t* ___layerName, MethodInfo* method)
{
	typedef int32_t (*LayerMask_NameToLayer_m2119_ftn) (String_t*);
	static LayerMask_NameToLayer_m2119_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (LayerMask_NameToLayer_m2119_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.LayerMask::NameToLayer(System.String)");
	return _il2cpp_icall_func(___layerName);
}
// System.Int32 UnityEngine.LayerMask::GetMask(System.String[])
extern MethodInfo LayerMask_GetMask_m2120_MethodInfo;
extern "C" int32_t LayerMask_GetMask_m2120 (Object_t * __this /* static, unused */, StringU5BU5D_t423* ___layerNames, MethodInfo* method)
{
	int32_t V_0 = 0;
	String_t* V_1 = {0};
	StringU5BU5D_t423* V_2 = {0};
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		V_0 = 0;
		StringU5BU5D_t423* L_0 = ___layerNames;
		V_2 = L_0;
		V_3 = 0;
		goto IL_002f;
	}

IL_000b:
	{
		StringU5BU5D_t423* L_1 = V_2;
		int32_t L_2 = V_3;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		int32_t L_3 = L_2;
		V_1 = (*(String_t**)(String_t**)SZArrayLdElema(L_1, L_3));
		String_t* L_4 = V_1;
		int32_t L_5 = LayerMask_NameToLayer_m2119(NULL /*static, unused*/, L_4, /*hidden argument*/&LayerMask_NameToLayer_m2119_MethodInfo);
		V_4 = L_5;
		int32_t L_6 = V_4;
		if (!L_6)
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_7 = V_0;
		int32_t L_8 = V_4;
		V_0 = ((int32_t)((int32_t)L_7|(int32_t)((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_8&(int32_t)((int32_t)31)))&(int32_t)((int32_t)31)))))));
	}

IL_002b:
	{
		int32_t L_9 = V_3;
		V_3 = ((int32_t)((int32_t)L_9+(int32_t)1));
	}

IL_002f:
	{
		int32_t L_10 = V_3;
		StringU5BU5D_t423* L_11 = V_2;
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)(((int32_t)(((Array_t *)L_11)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		int32_t L_12 = V_0;
		return L_12;
	}
}
// System.Int32 UnityEngine.LayerMask::op_Implicit(UnityEngine.LayerMask)
extern MethodInfo LayerMask_op_Implicit_m1438_MethodInfo;
extern "C" int32_t LayerMask_op_Implicit_m1438 (Object_t * __this /* static, unused */, LayerMask_t103  ___mask, MethodInfo* method)
{
	{
		int32_t L_0 = ((&___mask)->___m_Mask_0);
		return L_0;
	}
}
// UnityEngine.LayerMask UnityEngine.LayerMask::op_Implicit(System.Int32)
extern MethodInfo LayerMask_op_Implicit_m1439_MethodInfo;
extern "C" LayerMask_t103  LayerMask_op_Implicit_m1439 (Object_t * __this /* static, unused */, int32_t ___intVal, MethodInfo* method)
{
	LayerMask_t103  V_0 = {0};
	{
		int32_t L_0 = ___intVal;
		(&V_0)->___m_Mask_0 = L_0;
		LayerMask_t103  L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.RuntimePlatform
#include "UnityEngine_UnityEngine_RuntimePlatform.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo RuntimePlatform_t424_il2cpp_TypeInfo;
// UnityEngine.RuntimePlatform
#include "UnityEngine_UnityEngine_RuntimePlatformMethodDeclarations.h"



// UnityEngine.LogType
#include "UnityEngine_UnityEngine_LogType.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo LogType_t425_il2cpp_TypeInfo;
// UnityEngine.LogType
#include "UnityEngine_UnityEngine_LogTypeMethodDeclarations.h"



// UnityEngine.SystemInfo
#include "UnityEngine_UnityEngine_SystemInfo.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo SystemInfo_t426_il2cpp_TypeInfo;
// UnityEngine.SystemInfo
#include "UnityEngine_UnityEngine_SystemInfoMethodDeclarations.h"



// System.String UnityEngine.SystemInfo::get_deviceUniqueIdentifier()
extern MethodInfo SystemInfo_get_deviceUniqueIdentifier_m2121_MethodInfo;
extern "C" String_t* SystemInfo_get_deviceUniqueIdentifier_m2121 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef String_t* (*SystemInfo_get_deviceUniqueIdentifier_m2121_ftn) ();
	static SystemInfo_get_deviceUniqueIdentifier_m2121_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (SystemInfo_get_deviceUniqueIdentifier_m2121_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SystemInfo::get_deviceUniqueIdentifier()");
	return _il2cpp_icall_func();
}
// UnityEngine.WaitForSeconds
#include "UnityEngine_UnityEngine_WaitForSeconds.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo WaitForSeconds_t301_il2cpp_TypeInfo;
// UnityEngine.WaitForSeconds
#include "UnityEngine_UnityEngine_WaitForSecondsMethodDeclarations.h"

// System.Single
#include "mscorlib_System_Single.h"
// UnityEngine.YieldInstruction
#include "UnityEngine_UnityEngine_YieldInstructionMethodDeclarations.h"
extern MethodInfo YieldInstruction__ctor_m2744_MethodInfo;


// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
extern MethodInfo WaitForSeconds__ctor_m1630_MethodInfo;
extern "C" void WaitForSeconds__ctor_m1630 (WaitForSeconds_t301 * __this, float ___seconds, MethodInfo* method)
{
	{
		YieldInstruction__ctor_m2744(__this, /*hidden argument*/&YieldInstruction__ctor_m2744_MethodInfo);
		float L_0 = ___seconds;
		__this->___m_Seconds_0 = L_0;
		return;
	}
}
// Conversion methods for marshalling of: UnityEngine.WaitForSeconds
void WaitForSeconds_t301_marshal(const WaitForSeconds_t301& unmarshaled, WaitForSeconds_t301_marshaled& marshaled)
{
	marshaled.___m_Seconds_0 = unmarshaled.___m_Seconds_0;
}
void WaitForSeconds_t301_marshal_back(const WaitForSeconds_t301_marshaled& marshaled, WaitForSeconds_t301& unmarshaled)
{
	unmarshaled.___m_Seconds_0 = marshaled.___m_Seconds_0;
}
// Conversion method for clean up from marshalling of: UnityEngine.WaitForSeconds
void WaitForSeconds_t301_marshal_cleanup(WaitForSeconds_t301_marshaled& marshaled)
{
}
// UnityEngine.WaitForFixedUpdate
#include "UnityEngine_UnityEngine_WaitForFixedUpdate.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo WaitForFixedUpdate_t428_il2cpp_TypeInfo;
// UnityEngine.WaitForFixedUpdate
#include "UnityEngine_UnityEngine_WaitForFixedUpdateMethodDeclarations.h"



// System.Void UnityEngine.WaitForFixedUpdate::.ctor()
extern MethodInfo WaitForFixedUpdate__ctor_m2122_MethodInfo;
extern "C" void WaitForFixedUpdate__ctor_m2122 (WaitForFixedUpdate_t428 * __this, MethodInfo* method)
{
	{
		YieldInstruction__ctor_m2744(__this, /*hidden argument*/&YieldInstruction__ctor_m2744_MethodInfo);
		return;
	}
}
// UnityEngine.WaitForEndOfFrame
#include "UnityEngine_UnityEngine_WaitForEndOfFrame.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo WaitForEndOfFrame_t312_il2cpp_TypeInfo;
// UnityEngine.WaitForEndOfFrame
#include "UnityEngine_UnityEngine_WaitForEndOfFrameMethodDeclarations.h"



// System.Void UnityEngine.WaitForEndOfFrame::.ctor()
extern MethodInfo WaitForEndOfFrame__ctor_m1750_MethodInfo;
extern "C" void WaitForEndOfFrame__ctor_m1750 (WaitForEndOfFrame_t312 * __this, MethodInfo* method)
{
	{
		YieldInstruction__ctor_m2744(__this, /*hidden argument*/&YieldInstruction__ctor_m2744_MethodInfo);
		return;
	}
}
// UnityEngine.Coroutine
#include "UnityEngine_UnityEngine_Coroutine.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Coroutine_t182_il2cpp_TypeInfo;
// UnityEngine.Coroutine
#include "UnityEngine_UnityEngine_CoroutineMethodDeclarations.h"

// System.Object
#include "mscorlib_System_Object.h"
extern TypeInfo Object_t_il2cpp_TypeInfo;
extern TypeInfo Void_t18_il2cpp_TypeInfo;
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern MethodInfo Coroutine_ReleaseCoroutine_m2124_MethodInfo;
extern MethodInfo Object_Finalize_m67_MethodInfo;


// System.Void UnityEngine.Coroutine::.ctor()
extern MethodInfo Coroutine__ctor_m2123_MethodInfo;
extern "C" void Coroutine__ctor_m2123 (Coroutine_t182 * __this, MethodInfo* method)
{
	{
		YieldInstruction__ctor_m2744(__this, /*hidden argument*/&YieldInstruction__ctor_m2744_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Coroutine::ReleaseCoroutine()
extern "C" void Coroutine_ReleaseCoroutine_m2124 (Coroutine_t182 * __this, MethodInfo* method)
{
	typedef void (*Coroutine_ReleaseCoroutine_m2124_ftn) (Coroutine_t182 *);
	static Coroutine_ReleaseCoroutine_m2124_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Coroutine_ReleaseCoroutine_m2124_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Coroutine::ReleaseCoroutine()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Coroutine::Finalize()
extern MethodInfo Coroutine_Finalize_m2125_MethodInfo;
extern "C" void Coroutine_Finalize_m2125 (Coroutine_t182 * __this, MethodInfo* method)
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
		Coroutine_ReleaseCoroutine_m2124(__this, /*hidden argument*/&Coroutine_ReleaseCoroutine_m2124_MethodInfo);
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
// Conversion methods for marshalling of: UnityEngine.Coroutine
void Coroutine_t182_marshal(const Coroutine_t182& unmarshaled, Coroutine_t182_marshaled& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.___m_Ptr_0;
}
void Coroutine_t182_marshal_back(const Coroutine_t182_marshaled& marshaled, Coroutine_t182& unmarshaled)
{
	unmarshaled.___m_Ptr_0 = marshaled.___m_Ptr_0;
}
// Conversion method for clean up from marshalling of: UnityEngine.Coroutine
void Coroutine_t182_marshal_cleanup(Coroutine_t182_marshaled& marshaled)
{
}
// UnityEngine.ScriptableObject
#include "UnityEngine_UnityEngine_ScriptableObject.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ScriptableObject_t429_il2cpp_TypeInfo;
// UnityEngine.ScriptableObject
#include "UnityEngine_UnityEngine_ScriptableObjectMethodDeclarations.h"

// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
extern MethodInfo Object__ctor_m2699_MethodInfo;
extern MethodInfo ScriptableObject_Internal_CreateScriptableObject_m2127_MethodInfo;
extern MethodInfo ScriptableObject_CreateInstanceFromType_m2130_MethodInfo;


// System.Void UnityEngine.ScriptableObject::.ctor()
extern MethodInfo ScriptableObject__ctor_m2126_MethodInfo;
extern "C" void ScriptableObject__ctor_m2126 (ScriptableObject_t429 * __this, MethodInfo* method)
{
	{
		Object__ctor_m2699(__this, /*hidden argument*/&Object__ctor_m2699_MethodInfo);
		ScriptableObject_Internal_CreateScriptableObject_m2127(NULL /*static, unused*/, __this, /*hidden argument*/&ScriptableObject_Internal_CreateScriptableObject_m2127_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.ScriptableObject::Internal_CreateScriptableObject(UnityEngine.ScriptableObject)
extern "C" void ScriptableObject_Internal_CreateScriptableObject_m2127 (Object_t * __this /* static, unused */, ScriptableObject_t429 * ___self, MethodInfo* method)
{
	typedef void (*ScriptableObject_Internal_CreateScriptableObject_m2127_ftn) (ScriptableObject_t429 *);
	static ScriptableObject_Internal_CreateScriptableObject_m2127_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ScriptableObject_Internal_CreateScriptableObject_m2127_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ScriptableObject::Internal_CreateScriptableObject(UnityEngine.ScriptableObject)");
	_il2cpp_icall_func(___self);
}
// UnityEngine.ScriptableObject UnityEngine.ScriptableObject::CreateInstance(System.String)
extern MethodInfo ScriptableObject_CreateInstance_m2128_MethodInfo;
extern "C" ScriptableObject_t429 * ScriptableObject_CreateInstance_m2128 (Object_t * __this /* static, unused */, String_t* ___className, MethodInfo* method)
{
	typedef ScriptableObject_t429 * (*ScriptableObject_CreateInstance_m2128_ftn) (String_t*);
	static ScriptableObject_CreateInstance_m2128_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ScriptableObject_CreateInstance_m2128_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ScriptableObject::CreateInstance(System.String)");
	return _il2cpp_icall_func(___className);
}
// UnityEngine.ScriptableObject UnityEngine.ScriptableObject::CreateInstance(System.Type)
extern MethodInfo ScriptableObject_CreateInstance_m2129_MethodInfo;
extern "C" ScriptableObject_t429 * ScriptableObject_CreateInstance_m2129 (Object_t * __this /* static, unused */, Type_t * ___type, MethodInfo* method)
{
	{
		Type_t * L_0 = ___type;
		ScriptableObject_t429 * L_1 = ScriptableObject_CreateInstanceFromType_m2130(NULL /*static, unused*/, L_0, /*hidden argument*/&ScriptableObject_CreateInstanceFromType_m2130_MethodInfo);
		return L_1;
	}
}
// UnityEngine.ScriptableObject UnityEngine.ScriptableObject::CreateInstanceFromType(System.Type)
extern "C" ScriptableObject_t429 * ScriptableObject_CreateInstanceFromType_m2130 (Object_t * __this /* static, unused */, Type_t * ___type, MethodInfo* method)
{
	typedef ScriptableObject_t429 * (*ScriptableObject_CreateInstanceFromType_m2130_ftn) (Type_t *);
	static ScriptableObject_CreateInstanceFromType_m2130_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ScriptableObject_CreateInstanceFromType_m2130_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ScriptableObject::CreateInstanceFromType(System.Type)");
	return _il2cpp_icall_func(___type);
}
// Conversion methods for marshalling of: UnityEngine.ScriptableObject
void ScriptableObject_t429_marshal(const ScriptableObject_t429& unmarshaled, ScriptableObject_t429_marshaled& marshaled)
{
}
void ScriptableObject_t429_marshal_back(const ScriptableObject_t429_marshaled& marshaled, ScriptableObject_t429& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: UnityEngine.ScriptableObject
void ScriptableObject_t429_marshal_cleanup(ScriptableObject_t429_marshaled& marshaled)
{
}
// UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GameCente.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo GameCenterPlatform_t439_il2cpp_TypeInfo;
// UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GameCenteMethodDeclarations.h"

// UnityEngine.SocialPlatforms.Impl.LocalUser
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_LocalUser.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
// UnityEngine.SocialPlatforms.Impl.UserProfile
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_UserProfile.h"
// UnityEngine.SocialPlatforms.Impl.AchievementDescription
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_AchievementDesc.h"
// System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>
#include "mscorlib_System_Collections_Generic_List_1_gen_18.h"
// System.Action`1<System.Boolean>
#include "mscorlib_System_Action_1_gen_0.h"
// UnityEngine.Texture2D
#include "UnityEngine_UnityEngine_Texture2D.h"
// System.Double
#include "mscorlib_System_Double.h"
// System.Int64
#include "mscorlib_System_Int64.h"
// UnityEngine.SocialPlatforms.TimeScope
#include "UnityEngine_UnityEngine_SocialPlatforms_TimeScope.h"
// UnityEngine.SocialPlatforms.GameCenter.GcAchievementDescriptionData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcAchieve.h"
// System.Action`1<UnityEngine.SocialPlatforms.IAchievementDescription[]>
#include "mscorlib_System_Action_1_gen_1.h"
// UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcUserPro.h"
// UnityEngine.SocialPlatforms.GameCenter.GcAchievementData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcAchieve_0.h"
// UnityEngine.SocialPlatforms.Impl.Achievement
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_Achievement.h"
// System.Action`1<UnityEngine.SocialPlatforms.IAchievement[]>
#include "mscorlib_System_Action_1_gen_2.h"
// UnityEngine.SocialPlatforms.GameCenter.GcScoreData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcScoreDa.h"
// UnityEngine.SocialPlatforms.Impl.Score
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_Score.h"
// System.Action`1<UnityEngine.SocialPlatforms.IScore[]>
#include "mscorlib_System_Action_1_gen_3.h"
// UnityEngine.SocialPlatforms.Impl.Leaderboard
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_Leaderboard.h"
// UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcLeaderb.h"
// UnityEngine.SocialPlatforms.Range
#include "UnityEngine_UnityEngine_SocialPlatforms_Range.h"
// UnityEngine.SocialPlatforms.UserScope
#include "UnityEngine_UnityEngine_SocialPlatforms_UserScope.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen.h"
// System.Action`1<UnityEngine.SocialPlatforms.IUserProfile[]>
#include "mscorlib_System_Action_1_gen_4.h"
extern TypeInfo LocalUser_t437_il2cpp_TypeInfo;
extern TypeInfo UserProfile_t631_il2cpp_TypeInfo;
extern TypeInfo String_t_il2cpp_TypeInfo;
extern TypeInfo AchievementDescriptionU5BU5D_t435_il2cpp_TypeInfo;
extern TypeInfo AchievementDescription_t632_il2cpp_TypeInfo;
extern TypeInfo UserProfileU5BU5D_t436_il2cpp_TypeInfo;
extern TypeInfo List_1_t438_il2cpp_TypeInfo;
extern TypeInfo Action_1_t431_il2cpp_TypeInfo;
extern TypeInfo IAchievementDescriptionU5BU5D_t678_il2cpp_TypeInfo;
extern TypeInfo IAchievementDescription_t679_il2cpp_TypeInfo;
extern TypeInfo Action_1_t430_il2cpp_TypeInfo;
extern TypeInfo Boolean_t13_il2cpp_TypeInfo;
extern TypeInfo AchievementU5BU5D_t680_il2cpp_TypeInfo;
extern TypeInfo Achievement_t633_il2cpp_TypeInfo;
extern TypeInfo Action_1_t432_il2cpp_TypeInfo;
extern TypeInfo IAchievementU5BU5D_t681_il2cpp_TypeInfo;
extern TypeInfo IAchievement_t446_il2cpp_TypeInfo;
extern TypeInfo ScoreU5BU5D_t682_il2cpp_TypeInfo;
extern TypeInfo Score_t634_il2cpp_TypeInfo;
extern TypeInfo Action_1_t433_il2cpp_TypeInfo;
extern TypeInfo IScoreU5BU5D_t641_il2cpp_TypeInfo;
extern TypeInfo IScore_t640_il2cpp_TypeInfo;
extern TypeInfo Leaderboard_t449_il2cpp_TypeInfo;
extern TypeInfo GcLeaderboard_t450_il2cpp_TypeInfo;
extern TypeInfo ILeaderboard_t445_il2cpp_TypeInfo;
extern TypeInfo TimeScope_t648_il2cpp_TypeInfo;
extern TypeInfo Range_t642_il2cpp_TypeInfo;
extern TypeInfo UserScope_t647_il2cpp_TypeInfo;
extern TypeInfo Enumerator_t683_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t272_il2cpp_TypeInfo;
extern TypeInfo ILocalUser_t440_il2cpp_TypeInfo;
extern TypeInfo Action_1_t434_il2cpp_TypeInfo;
extern TypeInfo IUserProfileU5BU5D_t639_il2cpp_TypeInfo;
extern TypeInfo IUserProfile_t684_il2cpp_TypeInfo;
extern TypeInfo Texture2D_t130_il2cpp_TypeInfo;
// UnityEngine.SocialPlatforms.Impl.LocalUser
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_LocalUserMethodDeclarations.h"
// UnityEngine.SocialPlatforms.Impl.UserProfile
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_UserProfileMethodDeclarations.h"
// System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>
#include "mscorlib_System_Collections_Generic_List_1_gen_18MethodDeclarations.h"
// UnityEngine.SocialPlatforms.GameCenter.GcAchievementDescriptionData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcAchieveMethodDeclarations.h"
// UnityEngine.Debug
#include "UnityEngine_UnityEngine_DebugMethodDeclarations.h"
// UnityEngine.SocialPlatforms.Impl.AchievementDescription
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_AchievementDescMethodDeclarations.h"
// System.Action`1<UnityEngine.SocialPlatforms.IAchievementDescription[]>
#include "mscorlib_System_Action_1_gen_1MethodDeclarations.h"
// System.Action`1<System.Boolean>
#include "mscorlib_System_Action_1_gen_0MethodDeclarations.h"
// UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcUserProMethodDeclarations.h"
// UnityEngine.SocialPlatforms.GameCenter.GcAchievementData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcAchieve_0MethodDeclarations.h"
// System.Action`1<UnityEngine.SocialPlatforms.IAchievement[]>
#include "mscorlib_System_Action_1_gen_2MethodDeclarations.h"
// UnityEngine.SocialPlatforms.GameCenter.GcScoreData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcScoreDaMethodDeclarations.h"
// System.Action`1<UnityEngine.SocialPlatforms.IScore[]>
#include "mscorlib_System_Action_1_gen_3MethodDeclarations.h"
// UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcLeaderbMethodDeclarations.h"
// UnityEngine.SocialPlatforms.Impl.Leaderboard
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_LeaderboardMethodDeclarations.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_genMethodDeclarations.h"
// System.Action`1<UnityEngine.SocialPlatforms.IUserProfile[]>
#include "mscorlib_System_Action_1_gen_4MethodDeclarations.h"
// UnityEngine.Texture2D
#include "UnityEngine_UnityEngine_Texture2DMethodDeclarations.h"
// UnityEngine.SocialPlatforms.Impl.Achievement
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_AchievementMethodDeclarations.h"
extern Il2CppType AchievementDescriptionU5BU5D_t435_0_0_0;
extern Il2CppType UserProfileU5BU5D_t436_0_0_0;
extern Il2CppType List_1_t438_0_0_0;
extern Il2CppType Action_1_t431_0_0_0;
extern Il2CppType Action_1_t430_0_0_0;
extern Il2CppType AchievementU5BU5D_t680_0_0_0;
extern Il2CppType Action_1_t432_0_0_0;
extern Il2CppType ScoreU5BU5D_t682_0_0_0;
extern Il2CppType Action_1_t433_0_0_0;
extern Il2CppType Enumerator_t683_0_0_0;
extern Il2CppType Action_1_t434_0_0_0;
extern MethodInfo LocalUser__ctor_m3159_MethodInfo;
extern MethodInfo GameCenterPlatform_Internal_Authenticated_m2136_MethodInfo;
extern MethodInfo UserProfile_get_id_m3171_MethodInfo;
extern MethodInfo String_op_Equality_m1635_MethodInfo;
extern MethodInfo GameCenterPlatform_PopulateLocalUser_m2170_MethodInfo;
extern MethodInfo Object__ctor_m1289_MethodInfo;
extern MethodInfo List_1__ctor_m3317_MethodInfo;
extern MethodInfo GameCenterPlatform_Internal_LoadFriends_m2141_MethodInfo;
extern MethodInfo GameCenterPlatform_Internal_Authenticate_m2135_MethodInfo;
extern MethodInfo GameCenterPlatform_Internal_ResetAllAchievements_m2150_MethodInfo;
extern MethodInfo GameCenterPlatform_Internal_ShowDefaultAchievementBanner_m2151_MethodInfo;
extern MethodInfo GameCenterPlatform_Internal_ShowSpecificLeaderboardUI_m2155_MethodInfo;
extern MethodInfo GcAchievementDescriptionData_ToAchievementDescription_m3149_MethodInfo;
extern MethodInfo Debug_Log_m2658_MethodInfo;
extern MethodInfo AchievementDescription_SetImage_m3187_MethodInfo;
extern MethodInfo Action_1_Invoke_m3318_MethodInfo;
extern MethodInfo Action_1_Invoke_m3319_MethodInfo;
extern MethodInfo GameCenterPlatform_SafeClearArray_m2188_MethodInfo;
extern MethodInfo GcUserProfileData_AddToArray_m3148_MethodInfo;
extern MethodInfo GameCenterPlatform_SafeSetUserImage_m2187_MethodInfo;
extern MethodInfo LocalUser_SetFriends_m3160_MethodInfo;
extern MethodInfo GcAchievementData_ToAchievement_m3150_MethodInfo;
extern MethodInfo Action_1_Invoke_m3320_MethodInfo;
extern MethodInfo GcScoreData_ToScore_m3151_MethodInfo;
extern MethodInfo Action_1_Invoke_m3321_MethodInfo;
extern MethodInfo LocalUser_SetAuthenticated_m3161_MethodInfo;
extern MethodInfo GameCenterPlatform_Internal_UserName_m2137_MethodInfo;
extern MethodInfo UserProfile_SetUserName_m3167_MethodInfo;
extern MethodInfo GameCenterPlatform_Internal_UserID_m2138_MethodInfo;
extern MethodInfo UserProfile_SetUserID_m3168_MethodInfo;
extern MethodInfo GameCenterPlatform_Internal_Underage_m2139_MethodInfo;
extern MethodInfo LocalUser_SetUnderage_m3162_MethodInfo;
extern MethodInfo GameCenterPlatform_Internal_UserImage_m2140_MethodInfo;
extern MethodInfo UserProfile_SetImage_m3169_MethodInfo;
extern MethodInfo GameCenterPlatform_VerifyAuthentication_m2179_MethodInfo;
extern MethodInfo GameCenterPlatform_Internal_LoadAchievementDescriptions_m2142_MethodInfo;
extern MethodInfo GameCenterPlatform_Internal_ReportProgress_m2144_MethodInfo;
extern MethodInfo GameCenterPlatform_Internal_LoadAchievements_m2143_MethodInfo;
extern MethodInfo GameCenterPlatform_Internal_ReportScore_m2145_MethodInfo;
extern MethodInfo GameCenterPlatform_Internal_LoadScores_m2146_MethodInfo;
extern MethodInfo GcLeaderboard__ctor_m2192_MethodInfo;
extern MethodInfo List_1_Add_m3322_MethodInfo;
extern MethodInfo Leaderboard_GetUserFilter_m3208_MethodInfo;
extern MethodInfo ILeaderboard_get_id_m3323_MethodInfo;
extern MethodInfo ILeaderboard_get_timeScope_m3324_MethodInfo;
extern MethodInfo GcLeaderboard_Internal_LoadScoresWithUsers_m2200_MethodInfo;
extern MethodInfo ILeaderboard_get_range_m3325_MethodInfo;
extern MethodInfo ILeaderboard_get_userScope_m3326_MethodInfo;
extern MethodInfo GcLeaderboard_Internal_LoadScores_m2199_MethodInfo;
extern MethodInfo GcLeaderboard_Contains_m2194_MethodInfo;
extern MethodInfo GcLeaderboard_Loading_m2201_MethodInfo;
extern MethodInfo IDisposable_Dispose_m1379_MethodInfo;
extern MethodInfo GameCenterPlatform_get_localUser_m2169_MethodInfo;
extern MethodInfo ILocalUser_get_authenticated_m3327_MethodInfo;
extern MethodInfo GameCenterPlatform_Internal_ShowAchievementsUI_m2147_MethodInfo;
extern MethodInfo GameCenterPlatform_Internal_ShowLeaderboardUI_m2148_MethodInfo;
extern MethodInfo Action_1_Invoke_m3328_MethodInfo;
extern MethodInfo GameCenterPlatform_Internal_LoadUsers_m2149_MethodInfo;
extern MethodInfo Texture2D__ctor_m2226_MethodInfo;
extern MethodInfo Leaderboard__ctor_m3202_MethodInfo;
extern MethodInfo Achievement__ctor_m3176_MethodInfo;
extern Il2CppGenericMethod List_1__ctor_m3317_GenericMethod;
extern Il2CppGenericMethod Action_1_Invoke_m3318_GenericMethod;
extern Il2CppGenericMethod Action_1_Invoke_m3319_GenericMethod;
extern Il2CppGenericMethod Action_1_Invoke_m3320_GenericMethod;
extern Il2CppGenericMethod Action_1_Invoke_m3321_GenericMethod;
extern Il2CppGenericMethod List_1_Add_m3322_GenericMethod;
extern Il2CppGenericMethod List_1_GetEnumerator_m3329_GenericMethod;
extern Il2CppGenericMethod Enumerator_get_Current_m3330_GenericMethod;
extern Il2CppGenericMethod Enumerator_MoveNext_m3331_GenericMethod;
extern Il2CppGenericMethod Action_1_Invoke_m3328_GenericMethod;


// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::.ctor()
extern MethodInfo GameCenterPlatform__ctor_m2131_MethodInfo;
extern "C" void GameCenterPlatform__ctor_m2131 (GameCenterPlatform_t439 * __this, MethodInfo* method)
{
	{
		Object__ctor_m1289(__this, /*hidden argument*/&Object__ctor_m1289_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::.cctor()
extern MethodInfo GameCenterPlatform__cctor_m2132_MethodInfo;
extern TypeInfo* AchievementDescriptionU5BU5D_t435_il2cpp_TypeInfo_var;
extern TypeInfo* UserProfileU5BU5D_t436_il2cpp_TypeInfo_var;
extern TypeInfo* List_1_t438_il2cpp_TypeInfo_var;
extern MethodInfo* List_1__ctor_m3317_MethodInfo_var;
extern "C" void GameCenterPlatform__cctor_m2132 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	static bool GameCenterPlatform__cctor_m2132_init;
	if (!GameCenterPlatform__cctor_m2132_init)
	{
		AchievementDescriptionU5BU5D_t435_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&AchievementDescriptionU5BU5D_t435_0_0_0);
		UserProfileU5BU5D_t436_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&UserProfileU5BU5D_t436_0_0_0);
		List_1_t438_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&List_1_t438_0_0_0);
		List_1__ctor_m3317_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1__ctor_m3317_GenericMethod);
		GameCenterPlatform__cctor_m2132_init = true;
	}
	{
		((GameCenterPlatform_t439_StaticFields*)InitializedTypeInfo(&GameCenterPlatform_t439_il2cpp_TypeInfo)->static_fields)->___s_adCache_9 = ((AchievementDescriptionU5BU5D_t435*)SZArrayNew(AchievementDescriptionU5BU5D_t435_il2cpp_TypeInfo_var, 0));
		((GameCenterPlatform_t439_StaticFields*)InitializedTypeInfo(&GameCenterPlatform_t439_il2cpp_TypeInfo)->static_fields)->___s_friends_10 = ((UserProfileU5BU5D_t436*)SZArrayNew(UserProfileU5BU5D_t436_il2cpp_TypeInfo_var, 0));
		((GameCenterPlatform_t439_StaticFields*)InitializedTypeInfo(&GameCenterPlatform_t439_il2cpp_TypeInfo)->static_fields)->___s_users_11 = ((UserProfileU5BU5D_t436*)SZArrayNew(UserProfileU5BU5D_t436_il2cpp_TypeInfo_var, 0));
		IL2CPP_RUNTIME_CLASS_INIT(List_1_t438_il2cpp_TypeInfo_var);
		List_1_t438 * L_0 = (List_1_t438 *)il2cpp_codegen_object_new (List_1_t438_il2cpp_TypeInfo_var);
		List_1__ctor_m3317(L_0, /*hidden argument*/List_1__ctor_m3317_MethodInfo_var);
		((GameCenterPlatform_t439_StaticFields*)InitializedTypeInfo(&GameCenterPlatform_t439_il2cpp_TypeInfo)->static_fields)->___m_GcBoards_14 = L_0;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::UnityEngine.SocialPlatforms.ISocialPlatform.LoadFriends(UnityEngine.SocialPlatforms.ILocalUser,System.Action`1<System.Boolean>)
extern MethodInfo GameCenterPlatform_UnityEngine_SocialPlatforms_ISocialPlatform_LoadFriends_m2133_MethodInfo;
extern "C" void GameCenterPlatform_UnityEngine_SocialPlatforms_ISocialPlatform_LoadFriends_m2133 (GameCenterPlatform_t439 * __this, Object_t * ___user, Action_1_t430 * ___callback, MethodInfo* method)
{
	{
		Action_1_t430 * L_0 = ___callback;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GameCenterPlatform_t439_il2cpp_TypeInfo));
		((GameCenterPlatform_t439_StaticFields*)InitializedTypeInfo(&GameCenterPlatform_t439_il2cpp_TypeInfo)->static_fields)->___s_FriendsCallback_1 = L_0;
		GameCenterPlatform_Internal_LoadFriends_m2141(NULL /*static, unused*/, /*hidden argument*/&GameCenterPlatform_Internal_LoadFriends_m2141_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::UnityEngine.SocialPlatforms.ISocialPlatform.Authenticate(UnityEngine.SocialPlatforms.ILocalUser,System.Action`1<System.Boolean>)
extern MethodInfo GameCenterPlatform_UnityEngine_SocialPlatforms_ISocialPlatform_Authenticate_m2134_MethodInfo;
extern "C" void GameCenterPlatform_UnityEngine_SocialPlatforms_ISocialPlatform_Authenticate_m2134 (GameCenterPlatform_t439 * __this, Object_t * ___user, Action_1_t430 * ___callback, MethodInfo* method)
{
	{
		Action_1_t430 * L_0 = ___callback;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GameCenterPlatform_t439_il2cpp_TypeInfo));
		((GameCenterPlatform_t439_StaticFields*)InitializedTypeInfo(&GameCenterPlatform_t439_il2cpp_TypeInfo)->static_fields)->___s_AuthenticateCallback_0 = L_0;
		GameCenterPlatform_Internal_Authenticate_m2135(NULL /*static, unused*/, /*hidden argument*/&GameCenterPlatform_Internal_Authenticate_m2135_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_Authenticate()
extern "C" void GameCenterPlatform_Internal_Authenticate_m2135 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef void (*GameCenterPlatform_Internal_Authenticate_m2135_ftn) ();
	static GameCenterPlatform_Internal_Authenticate_m2135_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_Internal_Authenticate_m2135_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_Authenticate()");
	_il2cpp_icall_func();
}
// System.Boolean UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_Authenticated()
extern "C" bool GameCenterPlatform_Internal_Authenticated_m2136 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef bool (*GameCenterPlatform_Internal_Authenticated_m2136_ftn) ();
	static GameCenterPlatform_Internal_Authenticated_m2136_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_Internal_Authenticated_m2136_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_Authenticated()");
	return _il2cpp_icall_func();
}
// System.String UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_UserName()
extern "C" String_t* GameCenterPlatform_Internal_UserName_m2137 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef String_t* (*GameCenterPlatform_Internal_UserName_m2137_ftn) ();
	static GameCenterPlatform_Internal_UserName_m2137_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_Internal_UserName_m2137_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_UserName()");
	return _il2cpp_icall_func();
}
// System.String UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_UserID()
extern "C" String_t* GameCenterPlatform_Internal_UserID_m2138 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef String_t* (*GameCenterPlatform_Internal_UserID_m2138_ftn) ();
	static GameCenterPlatform_Internal_UserID_m2138_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_Internal_UserID_m2138_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_UserID()");
	return _il2cpp_icall_func();
}
// System.Boolean UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_Underage()
extern "C" bool GameCenterPlatform_Internal_Underage_m2139 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef bool (*GameCenterPlatform_Internal_Underage_m2139_ftn) ();
	static GameCenterPlatform_Internal_Underage_m2139_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_Internal_Underage_m2139_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_Underage()");
	return _il2cpp_icall_func();
}
// UnityEngine.Texture2D UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_UserImage()
extern "C" Texture2D_t130 * GameCenterPlatform_Internal_UserImage_m2140 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef Texture2D_t130 * (*GameCenterPlatform_Internal_UserImage_m2140_ftn) ();
	static GameCenterPlatform_Internal_UserImage_m2140_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_Internal_UserImage_m2140_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_UserImage()");
	return _il2cpp_icall_func();
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_LoadFriends()
extern "C" void GameCenterPlatform_Internal_LoadFriends_m2141 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef void (*GameCenterPlatform_Internal_LoadFriends_m2141_ftn) ();
	static GameCenterPlatform_Internal_LoadFriends_m2141_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_Internal_LoadFriends_m2141_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_LoadFriends()");
	_il2cpp_icall_func();
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_LoadAchievementDescriptions()
extern "C" void GameCenterPlatform_Internal_LoadAchievementDescriptions_m2142 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef void (*GameCenterPlatform_Internal_LoadAchievementDescriptions_m2142_ftn) ();
	static GameCenterPlatform_Internal_LoadAchievementDescriptions_m2142_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_Internal_LoadAchievementDescriptions_m2142_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_LoadAchievementDescriptions()");
	_il2cpp_icall_func();
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_LoadAchievements()
extern "C" void GameCenterPlatform_Internal_LoadAchievements_m2143 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef void (*GameCenterPlatform_Internal_LoadAchievements_m2143_ftn) ();
	static GameCenterPlatform_Internal_LoadAchievements_m2143_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_Internal_LoadAchievements_m2143_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_LoadAchievements()");
	_il2cpp_icall_func();
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_ReportProgress(System.String,System.Double)
extern "C" void GameCenterPlatform_Internal_ReportProgress_m2144 (Object_t * __this /* static, unused */, String_t* ___id, double ___progress, MethodInfo* method)
{
	typedef void (*GameCenterPlatform_Internal_ReportProgress_m2144_ftn) (String_t*, double);
	static GameCenterPlatform_Internal_ReportProgress_m2144_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_Internal_ReportProgress_m2144_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_ReportProgress(System.String,System.Double)");
	_il2cpp_icall_func(___id, ___progress);
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_ReportScore(System.Int64,System.String)
extern "C" void GameCenterPlatform_Internal_ReportScore_m2145 (Object_t * __this /* static, unused */, int64_t ___score, String_t* ___category, MethodInfo* method)
{
	typedef void (*GameCenterPlatform_Internal_ReportScore_m2145_ftn) (int64_t, String_t*);
	static GameCenterPlatform_Internal_ReportScore_m2145_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_Internal_ReportScore_m2145_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_ReportScore(System.Int64,System.String)");
	_il2cpp_icall_func(___score, ___category);
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_LoadScores(System.String)
extern "C" void GameCenterPlatform_Internal_LoadScores_m2146 (Object_t * __this /* static, unused */, String_t* ___category, MethodInfo* method)
{
	typedef void (*GameCenterPlatform_Internal_LoadScores_m2146_ftn) (String_t*);
	static GameCenterPlatform_Internal_LoadScores_m2146_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_Internal_LoadScores_m2146_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_LoadScores(System.String)");
	_il2cpp_icall_func(___category);
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_ShowAchievementsUI()
extern "C" void GameCenterPlatform_Internal_ShowAchievementsUI_m2147 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef void (*GameCenterPlatform_Internal_ShowAchievementsUI_m2147_ftn) ();
	static GameCenterPlatform_Internal_ShowAchievementsUI_m2147_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_Internal_ShowAchievementsUI_m2147_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_ShowAchievementsUI()");
	_il2cpp_icall_func();
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_ShowLeaderboardUI()
extern "C" void GameCenterPlatform_Internal_ShowLeaderboardUI_m2148 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef void (*GameCenterPlatform_Internal_ShowLeaderboardUI_m2148_ftn) ();
	static GameCenterPlatform_Internal_ShowLeaderboardUI_m2148_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_Internal_ShowLeaderboardUI_m2148_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_ShowLeaderboardUI()");
	_il2cpp_icall_func();
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_LoadUsers(System.String[])
extern "C" void GameCenterPlatform_Internal_LoadUsers_m2149 (Object_t * __this /* static, unused */, StringU5BU5D_t423* ___userIds, MethodInfo* method)
{
	typedef void (*GameCenterPlatform_Internal_LoadUsers_m2149_ftn) (StringU5BU5D_t423*);
	static GameCenterPlatform_Internal_LoadUsers_m2149_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_Internal_LoadUsers_m2149_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_LoadUsers(System.String[])");
	_il2cpp_icall_func(___userIds);
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_ResetAllAchievements()
extern "C" void GameCenterPlatform_Internal_ResetAllAchievements_m2150 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef void (*GameCenterPlatform_Internal_ResetAllAchievements_m2150_ftn) ();
	static GameCenterPlatform_Internal_ResetAllAchievements_m2150_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_Internal_ResetAllAchievements_m2150_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_ResetAllAchievements()");
	_il2cpp_icall_func();
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_ShowDefaultAchievementBanner(System.Boolean)
extern "C" void GameCenterPlatform_Internal_ShowDefaultAchievementBanner_m2151 (Object_t * __this /* static, unused */, bool ___value, MethodInfo* method)
{
	typedef void (*GameCenterPlatform_Internal_ShowDefaultAchievementBanner_m2151_ftn) (bool);
	static GameCenterPlatform_Internal_ShowDefaultAchievementBanner_m2151_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_Internal_ShowDefaultAchievementBanner_m2151_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_ShowDefaultAchievementBanner(System.Boolean)");
	_il2cpp_icall_func(___value);
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ResetAllAchievements(System.Action`1<System.Boolean>)
extern MethodInfo GameCenterPlatform_ResetAllAchievements_m2152_MethodInfo;
extern "C" void GameCenterPlatform_ResetAllAchievements_m2152 (Object_t * __this /* static, unused */, Action_1_t430 * ___callback, MethodInfo* method)
{
	{
		Action_1_t430 * L_0 = ___callback;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GameCenterPlatform_t439_il2cpp_TypeInfo));
		((GameCenterPlatform_t439_StaticFields*)InitializedTypeInfo(&GameCenterPlatform_t439_il2cpp_TypeInfo)->static_fields)->___s_ResetAchievements_12 = L_0;
		GameCenterPlatform_Internal_ResetAllAchievements_m2150(NULL /*static, unused*/, /*hidden argument*/&GameCenterPlatform_Internal_ResetAllAchievements_m2150_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ShowDefaultAchievementCompletionBanner(System.Boolean)
extern MethodInfo GameCenterPlatform_ShowDefaultAchievementCompletionBanner_m2153_MethodInfo;
extern "C" void GameCenterPlatform_ShowDefaultAchievementCompletionBanner_m2153 (Object_t * __this /* static, unused */, bool ___value, MethodInfo* method)
{
	{
		bool L_0 = ___value;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GameCenterPlatform_t439_il2cpp_TypeInfo));
		GameCenterPlatform_Internal_ShowDefaultAchievementBanner_m2151(NULL /*static, unused*/, L_0, /*hidden argument*/&GameCenterPlatform_Internal_ShowDefaultAchievementBanner_m2151_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ShowLeaderboardUI(System.String,UnityEngine.SocialPlatforms.TimeScope)
extern MethodInfo GameCenterPlatform_ShowLeaderboardUI_m2154_MethodInfo;
extern "C" void GameCenterPlatform_ShowLeaderboardUI_m2154 (Object_t * __this /* static, unused */, String_t* ___leaderboardID, int32_t ___timeScope, MethodInfo* method)
{
	{
		String_t* L_0 = ___leaderboardID;
		int32_t L_1 = ___timeScope;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GameCenterPlatform_t439_il2cpp_TypeInfo));
		GameCenterPlatform_Internal_ShowSpecificLeaderboardUI_m2155(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&GameCenterPlatform_Internal_ShowSpecificLeaderboardUI_m2155_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_ShowSpecificLeaderboardUI(System.String,System.Int32)
extern "C" void GameCenterPlatform_Internal_ShowSpecificLeaderboardUI_m2155 (Object_t * __this /* static, unused */, String_t* ___leaderboardID, int32_t ___timeScope, MethodInfo* method)
{
	typedef void (*GameCenterPlatform_Internal_ShowSpecificLeaderboardUI_m2155_ftn) (String_t*, int32_t);
	static GameCenterPlatform_Internal_ShowSpecificLeaderboardUI_m2155_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_Internal_ShowSpecificLeaderboardUI_m2155_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_ShowSpecificLeaderboardUI(System.String,System.Int32)");
	_il2cpp_icall_func(___leaderboardID, ___timeScope);
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ClearAchievementDescriptions(System.Int32)
extern MethodInfo GameCenterPlatform_ClearAchievementDescriptions_m2156_MethodInfo;
extern TypeInfo* AchievementDescriptionU5BU5D_t435_il2cpp_TypeInfo_var;
extern "C" void GameCenterPlatform_ClearAchievementDescriptions_m2156 (Object_t * __this /* static, unused */, int32_t ___size, MethodInfo* method)
{
	static bool GameCenterPlatform_ClearAchievementDescriptions_m2156_init;
	if (!GameCenterPlatform_ClearAchievementDescriptions_m2156_init)
	{
		AchievementDescriptionU5BU5D_t435_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&AchievementDescriptionU5BU5D_t435_0_0_0);
		GameCenterPlatform_ClearAchievementDescriptions_m2156_init = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GameCenterPlatform_t439_il2cpp_TypeInfo));
		AchievementDescriptionU5BU5D_t435* L_0 = ((GameCenterPlatform_t439_StaticFields*)InitializedTypeInfo(&GameCenterPlatform_t439_il2cpp_TypeInfo)->static_fields)->___s_adCache_9;
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GameCenterPlatform_t439_il2cpp_TypeInfo));
		AchievementDescriptionU5BU5D_t435* L_1 = ((GameCenterPlatform_t439_StaticFields*)InitializedTypeInfo(&GameCenterPlatform_t439_il2cpp_TypeInfo)->static_fields)->___s_adCache_9;
		NullCheck(L_1);
		int32_t L_2 = ___size;
		if ((((int32_t)(((int32_t)(((Array_t *)L_1)->max_length)))) == ((int32_t)L_2)))
		{
			goto IL_0022;
		}
	}

IL_0017:
	{
		int32_t L_3 = ___size;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GameCenterPlatform_t439_il2cpp_TypeInfo));
		((GameCenterPlatform_t439_StaticFields*)InitializedTypeInfo(&GameCenterPlatform_t439_il2cpp_TypeInfo)->static_fields)->___s_adCache_9 = ((AchievementDescriptionU5BU5D_t435*)SZArrayNew(AchievementDescriptionU5BU5D_t435_il2cpp_TypeInfo_var, L_3));
	}

IL_0022:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::SetAchievementDescription(UnityEngine.SocialPlatforms.GameCenter.GcAchievementDescriptionData,System.Int32)
extern MethodInfo GameCenterPlatform_SetAchievementDescription_m2157_MethodInfo;
extern "C" void GameCenterPlatform_SetAchievementDescription_m2157 (Object_t * __this /* static, unused */, GcAchievementDescriptionData_t447  ___data, int32_t ___number, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GameCenterPlatform_t439_il2cpp_TypeInfo));
		AchievementDescriptionU5BU5D_t435* L_0 = ((GameCenterPlatform_t439_StaticFields*)InitializedTypeInfo(&GameCenterPlatform_t439_il2cpp_TypeInfo)->static_fields)->___s_adCache_9;
		int32_t L_1 = ___number;
		AchievementDescription_t632 * L_2 = GcAchievementDescriptionData_ToAchievementDescription_m3149((&___data), /*hidden argument*/&GcAchievementDescriptionData_ToAchievementDescription_m3149_MethodInfo);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_1);
		ArrayElementTypeCheck (L_0, L_2);
		*((AchievementDescription_t632 **)(AchievementDescription_t632 **)SZArrayLdElema(L_0, L_1)) = (AchievementDescription_t632 *)L_2;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::SetAchievementDescriptionImage(UnityEngine.Texture2D,System.Int32)
extern MethodInfo GameCenterPlatform_SetAchievementDescriptionImage_m2158_MethodInfo;
extern "C" void GameCenterPlatform_SetAchievementDescriptionImage_m2158 (Object_t * __this /* static, unused */, Texture2D_t130 * ___texture, int32_t ___number, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GameCenterPlatform_t439_il2cpp_TypeInfo));
		AchievementDescriptionU5BU5D_t435* L_0 = ((GameCenterPlatform_t439_StaticFields*)InitializedTypeInfo(&GameCenterPlatform_t439_il2cpp_TypeInfo)->static_fields)->___s_adCache_9;
		NullCheck(L_0);
		int32_t L_1 = ___number;
		if ((((int32_t)(((int32_t)(((Array_t *)L_0)->max_length)))) <= ((int32_t)L_1)))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___number;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}

IL_0014:
	{
		Debug_Log_m2658(NULL /*static, unused*/, (String_t*) &_stringLiteral76, /*hidden argument*/&Debug_Log_m2658_MethodInfo);
		return;
	}

IL_001f:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GameCenterPlatform_t439_il2cpp_TypeInfo));
		AchievementDescriptionU5BU5D_t435* L_3 = ((GameCenterPlatform_t439_StaticFields*)InitializedTypeInfo(&GameCenterPlatform_t439_il2cpp_TypeInfo)->static_fields)->___s_adCache_9;
		int32_t L_4 = ___number;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = L_4;
		Texture2D_t130 * L_6 = ___texture;
		NullCheck((*(AchievementDescription_t632 **)(AchievementDescription_t632 **)SZArrayLdElema(L_3, L_5)));
		AchievementDescription_SetImage_m3187((*(AchievementDescription_t632 **)(AchievementDescription_t632 **)SZArrayLdElema(L_3, L_5)), L_6, /*hidden argument*/&AchievementDescription_SetImage_m3187_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::TriggerAchievementDescriptionCallback()
extern MethodInfo GameCenterPlatform_TriggerAchievementDescriptionCallback_m2159_MethodInfo;
extern MethodInfo* Action_1_Invoke_m3318_MethodInfo_var;
extern "C" void GameCenterPlatform_TriggerAchievementDescriptionCallback_m2159 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	static bool GameCenterPlatform_TriggerAchievementDescriptionCallback_m2159_init;
	if (!GameCenterPlatform_TriggerAchievementDescriptionCallback_m2159_init)
	{
		Action_1_Invoke_m3318_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Action_1_Invoke_m3318_GenericMethod);
		GameCenterPlatform_TriggerAchievementDescriptionCallback_m2159_init = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GameCenterPlatform_t439_il2cpp_TypeInfo));
		Action_1_t431 * L_0 = ((GameCenterPlatform_t439_StaticFields*)InitializedTypeInfo(&GameCenterPlatform_t439_il2cpp_TypeInfo)->static_fields)->___s_AchievementDescriptionLoaderCallback_2;
		if (!L_0)
		{
			goto IL_0039;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GameCenterPlatform_t439_il2cpp_TypeInfo));
		AchievementDescriptionU5BU5D_t435* L_1 = ((GameCenterPlatform_t439_StaticFields*)InitializedTypeInfo(&GameCenterPlatform_t439_il2cpp_TypeInfo)->static_fields)->___s_adCache_9;
		if (!L_1)
		{
			goto IL_0039;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GameCenterPlatform_t439_il2cpp_TypeInfo));
		AchievementDescriptionU5BU5D_t435* L_2 = ((GameCenterPlatform_t439_StaticFields*)InitializedTypeInfo(&GameCenterPlatform_t439_il2cpp_TypeInfo)->static_fields)->___s_adCache_9;
		NullCheck(L_2);
		if ((((int32_t)(((Array_t *)L_2)->max_length))))
		{
			goto IL_002a;
		}
	}
	{
		Debug_Log_m2658(NULL /*static, unused*/, (String_t*) &_stringLiteral77, /*hidden argument*/&Debug_Log_m2658_MethodInfo);
	}

IL_002a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GameCenterPlatform_t439_il2cpp_TypeInfo));
		Action_1_t431 * L_3 = ((GameCenterPlatform_t439_StaticFields*)InitializedTypeInfo(&GameCenterPlatform_t439_il2cpp_TypeInfo)->static_fields)->___s_AchievementDescriptionLoaderCallback_2;
		AchievementDescriptionU5BU5D_t435* L_4 = ((GameCenterPlatform_t439_StaticFields*)InitializedTypeInfo(&GameCenterPlatform_t439_il2cpp_TypeInfo)->static_fields)->___s_adCache_9;
		NullCheck(L_3);
		VirtActionInvoker1< IAchievementDescriptionU5BU5D_t678* >::Invoke(Action_1_Invoke_m3318_MethodInfo_var, L_3, (IAchievementDescriptionU5BU5D_t678*)(IAchievementDescriptionU5BU5D_t678*)L_4);
	}

IL_0039:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::AuthenticateCallbackWrapper(System.Int32)
extern MethodInfo GameCenterPlatform_AuthenticateCallbackWrapper_m2160_MethodInfo;
extern MethodInfo* Action_1_Invoke_m3319_MethodInfo_var;
extern "C" void GameCenterPlatform_AuthenticateCallbackWrapper_m2160 (Object_t * __this /* static, unused */, int32_t ___result, MethodInfo* method)
{
	static bool GameCenterPlatform_AuthenticateCallbackWrapper_m2160_init;
	if (!GameCenterPlatform_AuthenticateCallbackWrapper_m2160_init)
	{
		Action_1_Invoke_m3319_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Action_1_Invoke_m3319_GenericMethod);
		GameCenterPlatform_AuthenticateCallbackWrapper_m2160_init = true;
	}
	Action_1_t430 * G_B3_0 = {0};
	Action_1_t430 * G_B2_0 = {0};
	int32_t G_B4_0 = 0;
	Action_1_t430 * G_B4_1 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GameCenterPlatform_t439_il2cpp_TypeInfo));
		Action_1_t430 * L_0 = ((GameCenterPlatform_t439_StaticFields*)InitializedTypeInfo(&GameCenterPlatform_t439_il2cpp_TypeInfo)->static_fields)->___s_AuthenticateCallback_0;
		if (!L_0)
		{
			goto IL_0027;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GameCenterPlatform_t439_il2cpp_TypeInfo));
		GameCenterPlatform_PopulateLocalUser_m2170(NULL /*static, unused*/, /*hidden argument*/&GameCenterPlatform_PopulateLocalUser_m2170_MethodInfo);
		Action_1_t430 * L_1 = ((GameCenterPlatform_t439_StaticFields*)InitializedTypeInfo(&GameCenterPlatform_t439_il2cpp_TypeInfo)->static_fields)->___s_AuthenticateCallback_0;
		int32_t L_2 = ___result;
		G_B2_0 = L_1;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			G_B3_0 = L_1;
			goto IL_0021;
		}
	}
	{
		G_B4_0 = 1;
		G_B4_1 = G_B2_0;
		goto IL_0022;
	}

IL_0021:
	{
		G_B4_0 = 0;
		G_B4_1 = G_B3_0;
	}

IL_0022:
	{
		NullCheck(G_B4_1);
		VirtActionInvoker1< bool >::Invoke(Action_1_Invoke_m3319_MethodInfo_var, G_B4_1, G_B4_0);
	}

IL_0027:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ClearFriends(System.Int32)
extern MethodInfo GameCenterPlatform_ClearFriends_m2161_MethodInfo;
extern "C" void GameCenterPlatform_ClearFriends_m2161 (Object_t * __this /* static, unused */, int32_t ___size, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GameCenterPlatform_t439_il2cpp_TypeInfo));
		int32_t L_0 = ___size;
		GameCenterPlatform_SafeClearArray_m2188(NULL /*static, unused*/, (&((GameCenterPlatform_t439_StaticFields*)InitializedTypeInfo(&GameCenterPlatform_t439_il2cpp_TypeInfo)->static_fields)->___s_friends_10), L_0, /*hidden argument*/&GameCenterPlatform_SafeClearArray_m2188_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::SetFriends(UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData,System.Int32)
extern MethodInfo GameCenterPlatform_SetFriends_m2162_MethodInfo;
extern "C" void GameCenterPlatform_SetFriends_m2162 (Object_t * __this /* static, unused */, GcUserProfileData_t448  ___data, int32_t ___number, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GameCenterPlatform_t439_il2cpp_TypeInfo));
		int32_t L_0 = ___number;
		GcUserProfileData_AddToArray_m3148((&___data), (&((GameCenterPlatform_t439_StaticFields*)InitializedTypeInfo(&GameCenterPlatform_t439_il2cpp_TypeInfo)->static_fields)->___s_friends_10), L_0, /*hidden argument*/&GcUserProfileData_AddToArray_m3148_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::SetFriendImage(UnityEngine.Texture2D,System.Int32)
extern MethodInfo GameCenterPlatform_SetFriendImage_m2163_MethodInfo;
extern "C" void GameCenterPlatform_SetFriendImage_m2163 (Object_t * __this /* static, unused */, Texture2D_t130 * ___texture, int32_t ___number, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GameCenterPlatform_t439_il2cpp_TypeInfo));
		Texture2D_t130 * L_0 = ___texture;
		int32_t L_1 = ___number;
		GameCenterPlatform_SafeSetUserImage_m2187(NULL /*static, unused*/, (&((GameCenterPlatform_t439_StaticFields*)InitializedTypeInfo(&GameCenterPlatform_t439_il2cpp_TypeInfo)->static_fields)->___s_friends_10), L_0, L_1, /*hidden argument*/&GameCenterPlatform_SafeSetUserImage_m2187_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::TriggerFriendsCallbackWrapper(System.Int32)
extern MethodInfo GameCenterPlatform_TriggerFriendsCallbackWrapper_m2164_MethodInfo;
extern MethodInfo* Action_1_Invoke_m3319_MethodInfo_var;
extern "C" void GameCenterPlatform_TriggerFriendsCallbackWrapper_m2164 (Object_t * __this /* static, unused */, int32_t ___result, MethodInfo* method)
{
	static bool GameCenterPlatform_TriggerFriendsCallbackWrapper_m2164_init;
	if (!GameCenterPlatform_TriggerFriendsCallbackWrapper_m2164_init)
	{
		Action_1_Invoke_m3319_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Action_1_Invoke_m3319_GenericMethod);
		GameCenterPlatform_TriggerFriendsCallbackWrapper_m2164_init = true;
	}
	Action_1_t430 * G_B5_0 = {0};
	Action_1_t430 * G_B4_0 = {0};
	int32_t G_B6_0 = 0;
	Action_1_t430 * G_B6_1 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GameCenterPlatform_t439_il2cpp_TypeInfo));
		UserProfileU5BU5D_t436* L_0 = ((GameCenterPlatform_t439_StaticFields*)InitializedTypeInfo(&GameCenterPlatform_t439_il2cpp_TypeInfo)->static_fields)->___s_friends_10;
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GameCenterPlatform_t439_il2cpp_TypeInfo));
		LocalUser_t437 * L_1 = ((GameCenterPlatform_t439_StaticFields*)InitializedTypeInfo(&GameCenterPlatform_t439_il2cpp_TypeInfo)->static_fields)->___m_LocalUser_13;
		UserProfileU5BU5D_t436* L_2 = ((GameCenterPlatform_t439_StaticFields*)InitializedTypeInfo(&GameCenterPlatform_t439_il2cpp_TypeInfo)->static_fields)->___s_friends_10;
		NullCheck(L_1);
		LocalUser_SetFriends_m3160(L_1, (IUserProfileU5BU5D_t639*)(IUserProfileU5BU5D_t639*)L_2, /*hidden argument*/&LocalUser_SetFriends_m3160_MethodInfo);
	}

IL_0019:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GameCenterPlatform_t439_il2cpp_TypeInfo));
		Action_1_t430 * L_3 = ((GameCenterPlatform_t439_StaticFields*)InitializedTypeInfo(&GameCenterPlatform_t439_il2cpp_TypeInfo)->static_fields)->___s_FriendsCallback_1;
		if (!L_3)
		{
			goto IL_003b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GameCenterPlatform_t439_il2cpp_TypeInfo));
		Action_1_t430 * L_4 = ((GameCenterPlatform_t439_StaticFields*)InitializedTypeInfo(&GameCenterPlatform_t439_il2cpp_TypeInfo)->static_fields)->___s_FriendsCallback_1;
		int32_t L_5 = ___result;
		G_B4_0 = L_4;
		if ((!(((uint32_t)L_5) == ((uint32_t)1))))
		{
			G_B5_0 = L_4;
			goto IL_0035;
		}
	}
	{
		G_B6_0 = 1;
		G_B6_1 = G_B4_0;
		goto IL_0036;
	}

IL_0035:
	{
		G_B6_0 = 0;
		G_B6_1 = G_B5_0;
	}

IL_0036:
	{
		NullCheck(G_B6_1);
		VirtActionInvoker1< bool >::Invoke(Action_1_Invoke_m3319_MethodInfo_var, G_B6_1, G_B6_0);
	}

IL_003b:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::AchievementCallbackWrapper(UnityEngine.SocialPlatforms.GameCenter.GcAchievementData[])
extern MethodInfo GameCenterPlatform_AchievementCallbackWrapper_m2165_MethodInfo;
extern TypeInfo* AchievementU5BU5D_t680_il2cpp_TypeInfo_var;
extern MethodInfo* Action_1_Invoke_m3320_MethodInfo_var;
extern "C" void GameCenterPlatform_AchievementCallbackWrapper_m2165 (Object_t * __this /* static, unused */, GcAchievementDataU5BU5D_t441* ___result, MethodInfo* method)
{
	static bool GameCenterPlatform_AchievementCallbackWrapper_m2165_init;
	if (!GameCenterPlatform_AchievementCallbackWrapper_m2165_init)
	{
		AchievementU5BU5D_t680_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&AchievementU5BU5D_t680_0_0_0);
		Action_1_Invoke_m3320_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Action_1_Invoke_m3320_GenericMethod);
		GameCenterPlatform_AchievementCallbackWrapper_m2165_init = true;
	}
	AchievementU5BU5D_t680* V_0 = {0};
	int32_t V_1 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GameCenterPlatform_t439_il2cpp_TypeInfo));
		Action_1_t432 * L_0 = ((GameCenterPlatform_t439_StaticFields*)InitializedTypeInfo(&GameCenterPlatform_t439_il2cpp_TypeInfo)->static_fields)->___s_AchievementLoaderCallback_3;
		if (!L_0)
		{
			goto IL_0053;
		}
	}
	{
		GcAchievementDataU5BU5D_t441* L_1 = ___result;
		NullCheck(L_1);
		if ((((int32_t)(((Array_t *)L_1)->max_length))))
		{
			goto IL_001c;
		}
	}
	{
		Debug_Log_m2658(NULL /*static, unused*/, (String_t*) &_stringLiteral78, /*hidden argument*/&Debug_Log_m2658_MethodInfo);
	}

IL_001c:
	{
		GcAchievementDataU5BU5D_t441* L_2 = ___result;
		NullCheck(L_2);
		V_0 = ((AchievementU5BU5D_t680*)SZArrayNew(AchievementU5BU5D_t680_il2cpp_TypeInfo_var, (((int32_t)(((Array_t *)L_2)->max_length)))));
		V_1 = 0;
		goto IL_003f;
	}

IL_002c:
	{
		AchievementU5BU5D_t680* L_3 = V_0;
		int32_t L_4 = V_1;
		GcAchievementDataU5BU5D_t441* L_5 = ___result;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		Achievement_t633 * L_7 = GcAchievementData_ToAchievement_m3150(((GcAchievementData_t442 *)(GcAchievementData_t442 *)SZArrayLdElema(L_5, L_6)), /*hidden argument*/&GcAchievementData_ToAchievement_m3150_MethodInfo);
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		ArrayElementTypeCheck (L_3, L_7);
		*((Achievement_t633 **)(Achievement_t633 **)SZArrayLdElema(L_3, L_4)) = (Achievement_t633 *)L_7;
		int32_t L_8 = V_1;
		V_1 = ((int32_t)((int32_t)L_8+(int32_t)1));
	}

IL_003f:
	{
		int32_t L_9 = V_1;
		GcAchievementDataU5BU5D_t441* L_10 = ___result;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)(((int32_t)(((Array_t *)L_10)->max_length))))))
		{
			goto IL_002c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GameCenterPlatform_t439_il2cpp_TypeInfo));
		Action_1_t432 * L_11 = ((GameCenterPlatform_t439_StaticFields*)InitializedTypeInfo(&GameCenterPlatform_t439_il2cpp_TypeInfo)->static_fields)->___s_AchievementLoaderCallback_3;
		AchievementU5BU5D_t680* L_12 = V_0;
		NullCheck(L_11);
		VirtActionInvoker1< IAchievementU5BU5D_t681* >::Invoke(Action_1_Invoke_m3320_MethodInfo_var, L_11, (IAchievementU5BU5D_t681*)(IAchievementU5BU5D_t681*)L_12);
	}

IL_0053:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ProgressCallbackWrapper(System.Boolean)
extern MethodInfo GameCenterPlatform_ProgressCallbackWrapper_m2166_MethodInfo;
extern MethodInfo* Action_1_Invoke_m3319_MethodInfo_var;
extern "C" void GameCenterPlatform_ProgressCallbackWrapper_m2166 (Object_t * __this /* static, unused */, bool ___success, MethodInfo* method)
{
	static bool GameCenterPlatform_ProgressCallbackWrapper_m2166_init;
	if (!GameCenterPlatform_ProgressCallbackWrapper_m2166_init)
	{
		Action_1_Invoke_m3319_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Action_1_Invoke_m3319_GenericMethod);
		GameCenterPlatform_ProgressCallbackWrapper_m2166_init = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GameCenterPlatform_t439_il2cpp_TypeInfo));
		Action_1_t430 * L_0 = ((GameCenterPlatform_t439_StaticFields*)InitializedTypeInfo(&GameCenterPlatform_t439_il2cpp_TypeInfo)->static_fields)->___s_ProgressCallback_4;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GameCenterPlatform_t439_il2cpp_TypeInfo));
		Action_1_t430 * L_1 = ((GameCenterPlatform_t439_StaticFields*)InitializedTypeInfo(&GameCenterPlatform_t439_il2cpp_TypeInfo)->static_fields)->___s_ProgressCallback_4;
		bool L_2 = ___success;
		NullCheck(L_1);
		VirtActionInvoker1< bool >::Invoke(Action_1_Invoke_m3319_MethodInfo_var, L_1, L_2);
	}

IL_0015:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ScoreCallbackWrapper(System.Boolean)
extern MethodInfo GameCenterPlatform_ScoreCallbackWrapper_m2167_MethodInfo;
extern MethodInfo* Action_1_Invoke_m3319_MethodInfo_var;
extern "C" void GameCenterPlatform_ScoreCallbackWrapper_m2167 (Object_t * __this /* static, unused */, bool ___success, MethodInfo* method)
{
	static bool GameCenterPlatform_ScoreCallbackWrapper_m2167_init;
	if (!GameCenterPlatform_ScoreCallbackWrapper_m2167_init)
	{
		Action_1_Invoke_m3319_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Action_1_Invoke_m3319_GenericMethod);
		GameCenterPlatform_ScoreCallbackWrapper_m2167_init = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GameCenterPlatform_t439_il2cpp_TypeInfo));
		Action_1_t430 * L_0 = ((GameCenterPlatform_t439_StaticFields*)InitializedTypeInfo(&GameCenterPlatform_t439_il2cpp_TypeInfo)->static_fields)->___s_ScoreCallback_5;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GameCenterPlatform_t439_il2cpp_TypeInfo));
		Action_1_t430 * L_1 = ((GameCenterPlatform_t439_StaticFields*)InitializedTypeInfo(&GameCenterPlatform_t439_il2cpp_TypeInfo)->static_fields)->___s_ScoreCallback_5;
		bool L_2 = ___success;
		NullCheck(L_1);
		VirtActionInvoker1< bool >::Invoke(Action_1_Invoke_m3319_MethodInfo_var, L_1, L_2);
	}

IL_0015:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ScoreLoaderCallbackWrapper(UnityEngine.SocialPlatforms.GameCenter.GcScoreData[])
extern MethodInfo GameCenterPlatform_ScoreLoaderCallbackWrapper_m2168_MethodInfo;
extern TypeInfo* ScoreU5BU5D_t682_il2cpp_TypeInfo_var;
extern MethodInfo* Action_1_Invoke_m3321_MethodInfo_var;
extern "C" void GameCenterPlatform_ScoreLoaderCallbackWrapper_m2168 (Object_t * __this /* static, unused */, GcScoreDataU5BU5D_t443* ___result, MethodInfo* method)
{
	static bool GameCenterPlatform_ScoreLoaderCallbackWrapper_m2168_init;
	if (!GameCenterPlatform_ScoreLoaderCallbackWrapper_m2168_init)
	{
		ScoreU5BU5D_t682_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ScoreU5BU5D_t682_0_0_0);
		Action_1_Invoke_m3321_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Action_1_Invoke_m3321_GenericMethod);
		GameCenterPlatform_ScoreLoaderCallbackWrapper_m2168_init = true;
	}
	ScoreU5BU5D_t682* V_0 = {0};
	int32_t V_1 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GameCenterPlatform_t439_il2cpp_TypeInfo));
		Action_1_t433 * L_0 = ((GameCenterPlatform_t439_StaticFields*)InitializedTypeInfo(&GameCenterPlatform_t439_il2cpp_TypeInfo)->static_fields)->___s_ScoreLoaderCallback_6;
		if (!L_0)
		{
			goto IL_0041;
		}
	}
	{
		GcScoreDataU5BU5D_t443* L_1 = ___result;
		NullCheck(L_1);
		V_0 = ((ScoreU5BU5D_t682*)SZArrayNew(ScoreU5BU5D_t682_il2cpp_TypeInfo_var, (((int32_t)(((Array_t *)L_1)->max_length)))));
		V_1 = 0;
		goto IL_002d;
	}

IL_001a:
	{
		ScoreU5BU5D_t682* L_2 = V_0;
		int32_t L_3 = V_1;
		GcScoreDataU5BU5D_t443* L_4 = ___result;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		Score_t634 * L_6 = GcScoreData_ToScore_m3151(((GcScoreData_t444 *)(GcScoreData_t444 *)SZArrayLdElema(L_4, L_5)), /*hidden argument*/&GcScoreData_ToScore_m3151_MethodInfo);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		ArrayElementTypeCheck (L_2, L_6);
		*((Score_t634 **)(Score_t634 **)SZArrayLdElema(L_2, L_3)) = (Score_t634 *)L_6;
		int32_t L_7 = V_1;
		V_1 = ((int32_t)((int32_t)L_7+(int32_t)1));
	}

IL_002d:
	{
		int32_t L_8 = V_1;
		GcScoreDataU5BU5D_t443* L_9 = ___result;
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)(((int32_t)(((Array_t *)L_9)->max_length))))))
		{
			goto IL_001a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GameCenterPlatform_t439_il2cpp_TypeInfo));
		Action_1_t433 * L_10 = ((GameCenterPlatform_t439_StaticFields*)InitializedTypeInfo(&GameCenterPlatform_t439_il2cpp_TypeInfo)->static_fields)->___s_ScoreLoaderCallback_6;
		ScoreU5BU5D_t682* L_11 = V_0;
		NullCheck(L_10);
		VirtActionInvoker1< IScoreU5BU5D_t641* >::Invoke(Action_1_Invoke_m3321_MethodInfo_var, L_10, (IScoreU5BU5D_t641*)(IScoreU5BU5D_t641*)L_11);
	}

IL_0041:
	{
		return;
	}
}
// UnityEngine.SocialPlatforms.ILocalUser UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::get_localUser()
extern "C" Object_t * GameCenterPlatform_get_localUser_m2169 (GameCenterPlatform_t439 * __this, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GameCenterPlatform_t439_il2cpp_TypeInfo));
		LocalUser_t437 * L_0 = ((GameCenterPlatform_t439_StaticFields*)InitializedTypeInfo(&GameCenterPlatform_t439_il2cpp_TypeInfo)->static_fields)->___m_LocalUser_13;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		LocalUser_t437 * L_1 = (LocalUser_t437 *)il2cpp_codegen_object_new (InitializedTypeInfo(&LocalUser_t437_il2cpp_TypeInfo));
		LocalUser__ctor_m3159(L_1, /*hidden argument*/&LocalUser__ctor_m3159_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GameCenterPlatform_t439_il2cpp_TypeInfo));
		((GameCenterPlatform_t439_StaticFields*)InitializedTypeInfo(&GameCenterPlatform_t439_il2cpp_TypeInfo)->static_fields)->___m_LocalUser_13 = L_1;
	}

IL_0014:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GameCenterPlatform_t439_il2cpp_TypeInfo));
		bool L_2 = GameCenterPlatform_Internal_Authenticated_m2136(NULL /*static, unused*/, /*hidden argument*/&GameCenterPlatform_Internal_Authenticated_m2136_MethodInfo);
		if (!L_2)
		{
			goto IL_003c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GameCenterPlatform_t439_il2cpp_TypeInfo));
		LocalUser_t437 * L_3 = ((GameCenterPlatform_t439_StaticFields*)InitializedTypeInfo(&GameCenterPlatform_t439_il2cpp_TypeInfo)->static_fields)->___m_LocalUser_13;
		NullCheck(L_3);
		String_t* L_4 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&UserProfile_get_id_m3171_MethodInfo, L_3);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		bool L_5 = String_op_Equality_m1635(NULL /*static, unused*/, L_4, (String_t*) &_stringLiteral75, /*hidden argument*/&String_op_Equality_m1635_MethodInfo);
		if (!L_5)
		{
			goto IL_003c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GameCenterPlatform_t439_il2cpp_TypeInfo));
		GameCenterPlatform_PopulateLocalUser_m2170(NULL /*static, unused*/, /*hidden argument*/&GameCenterPlatform_PopulateLocalUser_m2170_MethodInfo);
	}

IL_003c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GameCenterPlatform_t439_il2cpp_TypeInfo));
		LocalUser_t437 * L_6 = ((GameCenterPlatform_t439_StaticFields*)InitializedTypeInfo(&GameCenterPlatform_t439_il2cpp_TypeInfo)->static_fields)->___m_LocalUser_13;
		return L_6;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::PopulateLocalUser()
extern "C" void GameCenterPlatform_PopulateLocalUser_m2170 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GameCenterPlatform_t439_il2cpp_TypeInfo));
		LocalUser_t437 * L_0 = ((GameCenterPlatform_t439_StaticFields*)InitializedTypeInfo(&GameCenterPlatform_t439_il2cpp_TypeInfo)->static_fields)->___m_LocalUser_13;
		bool L_1 = GameCenterPlatform_Internal_Authenticated_m2136(NULL /*static, unused*/, /*hidden argument*/&GameCenterPlatform_Internal_Authenticated_m2136_MethodInfo);
		NullCheck(L_0);
		LocalUser_SetAuthenticated_m3161(L_0, L_1, /*hidden argument*/&LocalUser_SetAuthenticated_m3161_MethodInfo);
		LocalUser_t437 * L_2 = ((GameCenterPlatform_t439_StaticFields*)InitializedTypeInfo(&GameCenterPlatform_t439_il2cpp_TypeInfo)->static_fields)->___m_LocalUser_13;
		String_t* L_3 = GameCenterPlatform_Internal_UserName_m2137(NULL /*static, unused*/, /*hidden argument*/&GameCenterPlatform_Internal_UserName_m2137_MethodInfo);
		NullCheck(L_2);
		UserProfile_SetUserName_m3167(L_2, L_3, /*hidden argument*/&UserProfile_SetUserName_m3167_MethodInfo);
		LocalUser_t437 * L_4 = ((GameCenterPlatform_t439_StaticFields*)InitializedTypeInfo(&GameCenterPlatform_t439_il2cpp_TypeInfo)->static_fields)->___m_LocalUser_13;
		String_t* L_5 = GameCenterPlatform_Internal_UserID_m2138(NULL /*static, unused*/, /*hidden argument*/&GameCenterPlatform_Internal_UserID_m2138_MethodInfo);
		NullCheck(L_4);
		UserProfile_SetUserID_m3168(L_4, L_5, /*hidden argument*/&UserProfile_SetUserID_m3168_MethodInfo);
		LocalUser_t437 * L_6 = ((GameCenterPlatform_t439_StaticFields*)InitializedTypeInfo(&GameCenterPlatform_t439_il2cpp_TypeInfo)->static_fields)->___m_LocalUser_13;
		bool L_7 = GameCenterPlatform_Internal_Underage_m2139(NULL /*static, unused*/, /*hidden argument*/&GameCenterPlatform_Internal_Underage_m2139_MethodInfo);
		NullCheck(L_6);
		LocalUser_SetUnderage_m3162(L_6, L_7, /*hidden argument*/&LocalUser_SetUnderage_m3162_MethodInfo);
		LocalUser_t437 * L_8 = ((GameCenterPlatform_t439_StaticFields*)InitializedTypeInfo(&GameCenterPlatform_t439_il2cpp_TypeInfo)->static_fields)->___m_LocalUser_13;
		Texture2D_t130 * L_9 = GameCenterPlatform_Internal_UserImage_m2140(NULL /*static, unused*/, /*hidden argument*/&GameCenterPlatform_Internal_UserImage_m2140_MethodInfo);
		NullCheck(L_8);
		UserProfile_SetImage_m3169(L_8, L_9, /*hidden argument*/&UserProfile_SetImage_m3169_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::LoadAchievementDescriptions(System.Action`1<UnityEngine.SocialPlatforms.IAchievementDescription[]>)
extern MethodInfo GameCenterPlatform_LoadAchievementDescriptions_m2171_MethodInfo;
extern TypeInfo* AchievementDescriptionU5BU5D_t435_il2cpp_TypeInfo_var;
extern MethodInfo* Action_1_Invoke_m3318_MethodInfo_var;
extern "C" void GameCenterPlatform_LoadAchievementDescriptions_m2171 (GameCenterPlatform_t439 * __this, Action_1_t431 * ___callback, MethodInfo* method)
{
	static bool GameCenterPlatform_LoadAchievementDescriptions_m2171_init;
	if (!GameCenterPlatform_LoadAchievementDescriptions_m2171_init)
	{
		AchievementDescriptionU5BU5D_t435_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&AchievementDescriptionU5BU5D_t435_0_0_0);
		Action_1_Invoke_m3318_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Action_1_Invoke_m3318_GenericMethod);
		GameCenterPlatform_LoadAchievementDescriptions_m2171_init = true;
	}
	{
		bool L_0 = GameCenterPlatform_VerifyAuthentication_m2179(__this, /*hidden argument*/&GameCenterPlatform_VerifyAuthentication_m2179_MethodInfo);
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		Action_1_t431 * L_1 = ___callback;
		NullCheck(L_1);
		VirtActionInvoker1< IAchievementDescriptionU5BU5D_t678* >::Invoke(Action_1_Invoke_m3318_MethodInfo_var, L_1, (IAchievementDescriptionU5BU5D_t678*)(IAchievementDescriptionU5BU5D_t678*)((AchievementDescriptionU5BU5D_t435*)SZArrayNew(AchievementDescriptionU5BU5D_t435_il2cpp_TypeInfo_var, 0)));
		return;
	}

IL_0018:
	{
		Action_1_t431 * L_2 = ___callback;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GameCenterPlatform_t439_il2cpp_TypeInfo));
		((GameCenterPlatform_t439_StaticFields*)InitializedTypeInfo(&GameCenterPlatform_t439_il2cpp_TypeInfo)->static_fields)->___s_AchievementDescriptionLoaderCallback_2 = L_2;
		GameCenterPlatform_Internal_LoadAchievementDescriptions_m2142(NULL /*static, unused*/, /*hidden argument*/&GameCenterPlatform_Internal_LoadAchievementDescriptions_m2142_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ReportProgress(System.String,System.Double,System.Action`1<System.Boolean>)
extern MethodInfo GameCenterPlatform_ReportProgress_m2172_MethodInfo;
extern MethodInfo* Action_1_Invoke_m3319_MethodInfo_var;
extern "C" void GameCenterPlatform_ReportProgress_m2172 (GameCenterPlatform_t439 * __this, String_t* ___id, double ___progress, Action_1_t430 * ___callback, MethodInfo* method)
{
	static bool GameCenterPlatform_ReportProgress_m2172_init;
	if (!GameCenterPlatform_ReportProgress_m2172_init)
	{
		Action_1_Invoke_m3319_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Action_1_Invoke_m3319_GenericMethod);
		GameCenterPlatform_ReportProgress_m2172_init = true;
	}
	{
		bool L_0 = GameCenterPlatform_VerifyAuthentication_m2179(__this, /*hidden argument*/&GameCenterPlatform_VerifyAuthentication_m2179_MethodInfo);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		Action_1_t430 * L_1 = ___callback;
		NullCheck(L_1);
		VirtActionInvoker1< bool >::Invoke(Action_1_Invoke_m3319_MethodInfo_var, L_1, 0);
		return;
	}

IL_0013:
	{
		Action_1_t430 * L_2 = ___callback;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GameCenterPlatform_t439_il2cpp_TypeInfo));
		((GameCenterPlatform_t439_StaticFields*)InitializedTypeInfo(&GameCenterPlatform_t439_il2cpp_TypeInfo)->static_fields)->___s_ProgressCallback_4 = L_2;
		String_t* L_3 = ___id;
		double L_4 = ___progress;
		GameCenterPlatform_Internal_ReportProgress_m2144(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/&GameCenterPlatform_Internal_ReportProgress_m2144_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::LoadAchievements(System.Action`1<UnityEngine.SocialPlatforms.IAchievement[]>)
extern MethodInfo GameCenterPlatform_LoadAchievements_m2173_MethodInfo;
extern TypeInfo* AchievementU5BU5D_t680_il2cpp_TypeInfo_var;
extern MethodInfo* Action_1_Invoke_m3320_MethodInfo_var;
extern "C" void GameCenterPlatform_LoadAchievements_m2173 (GameCenterPlatform_t439 * __this, Action_1_t432 * ___callback, MethodInfo* method)
{
	static bool GameCenterPlatform_LoadAchievements_m2173_init;
	if (!GameCenterPlatform_LoadAchievements_m2173_init)
	{
		AchievementU5BU5D_t680_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&AchievementU5BU5D_t680_0_0_0);
		Action_1_Invoke_m3320_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Action_1_Invoke_m3320_GenericMethod);
		GameCenterPlatform_LoadAchievements_m2173_init = true;
	}
	{
		bool L_0 = GameCenterPlatform_VerifyAuthentication_m2179(__this, /*hidden argument*/&GameCenterPlatform_VerifyAuthentication_m2179_MethodInfo);
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		Action_1_t432 * L_1 = ___callback;
		NullCheck(L_1);
		VirtActionInvoker1< IAchievementU5BU5D_t681* >::Invoke(Action_1_Invoke_m3320_MethodInfo_var, L_1, (IAchievementU5BU5D_t681*)(IAchievementU5BU5D_t681*)((AchievementU5BU5D_t680*)SZArrayNew(AchievementU5BU5D_t680_il2cpp_TypeInfo_var, 0)));
		return;
	}

IL_0018:
	{
		Action_1_t432 * L_2 = ___callback;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GameCenterPlatform_t439_il2cpp_TypeInfo));
		((GameCenterPlatform_t439_StaticFields*)InitializedTypeInfo(&GameCenterPlatform_t439_il2cpp_TypeInfo)->static_fields)->___s_AchievementLoaderCallback_3 = L_2;
		GameCenterPlatform_Internal_LoadAchievements_m2143(NULL /*static, unused*/, /*hidden argument*/&GameCenterPlatform_Internal_LoadAchievements_m2143_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ReportScore(System.Int64,System.String,System.Action`1<System.Boolean>)
extern MethodInfo GameCenterPlatform_ReportScore_m2174_MethodInfo;
extern MethodInfo* Action_1_Invoke_m3319_MethodInfo_var;
extern "C" void GameCenterPlatform_ReportScore_m2174 (GameCenterPlatform_t439 * __this, int64_t ___score, String_t* ___board, Action_1_t430 * ___callback, MethodInfo* method)
{
	static bool GameCenterPlatform_ReportScore_m2174_init;
	if (!GameCenterPlatform_ReportScore_m2174_init)
	{
		Action_1_Invoke_m3319_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Action_1_Invoke_m3319_GenericMethod);
		GameCenterPlatform_ReportScore_m2174_init = true;
	}
	{
		bool L_0 = GameCenterPlatform_VerifyAuthentication_m2179(__this, /*hidden argument*/&GameCenterPlatform_VerifyAuthentication_m2179_MethodInfo);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		Action_1_t430 * L_1 = ___callback;
		NullCheck(L_1);
		VirtActionInvoker1< bool >::Invoke(Action_1_Invoke_m3319_MethodInfo_var, L_1, 0);
		return;
	}

IL_0013:
	{
		Action_1_t430 * L_2 = ___callback;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GameCenterPlatform_t439_il2cpp_TypeInfo));
		((GameCenterPlatform_t439_StaticFields*)InitializedTypeInfo(&GameCenterPlatform_t439_il2cpp_TypeInfo)->static_fields)->___s_ScoreCallback_5 = L_2;
		int64_t L_3 = ___score;
		String_t* L_4 = ___board;
		GameCenterPlatform_Internal_ReportScore_m2145(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/&GameCenterPlatform_Internal_ReportScore_m2145_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::LoadScores(System.String,System.Action`1<UnityEngine.SocialPlatforms.IScore[]>)
extern MethodInfo GameCenterPlatform_LoadScores_m2175_MethodInfo;
extern TypeInfo* ScoreU5BU5D_t682_il2cpp_TypeInfo_var;
extern MethodInfo* Action_1_Invoke_m3321_MethodInfo_var;
extern "C" void GameCenterPlatform_LoadScores_m2175 (GameCenterPlatform_t439 * __this, String_t* ___category, Action_1_t433 * ___callback, MethodInfo* method)
{
	static bool GameCenterPlatform_LoadScores_m2175_init;
	if (!GameCenterPlatform_LoadScores_m2175_init)
	{
		ScoreU5BU5D_t682_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ScoreU5BU5D_t682_0_0_0);
		Action_1_Invoke_m3321_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Action_1_Invoke_m3321_GenericMethod);
		GameCenterPlatform_LoadScores_m2175_init = true;
	}
	{
		bool L_0 = GameCenterPlatform_VerifyAuthentication_m2179(__this, /*hidden argument*/&GameCenterPlatform_VerifyAuthentication_m2179_MethodInfo);
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		Action_1_t433 * L_1 = ___callback;
		NullCheck(L_1);
		VirtActionInvoker1< IScoreU5BU5D_t641* >::Invoke(Action_1_Invoke_m3321_MethodInfo_var, L_1, (IScoreU5BU5D_t641*)(IScoreU5BU5D_t641*)((ScoreU5BU5D_t682*)SZArrayNew(ScoreU5BU5D_t682_il2cpp_TypeInfo_var, 0)));
		return;
	}

IL_0018:
	{
		Action_1_t433 * L_2 = ___callback;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GameCenterPlatform_t439_il2cpp_TypeInfo));
		((GameCenterPlatform_t439_StaticFields*)InitializedTypeInfo(&GameCenterPlatform_t439_il2cpp_TypeInfo)->static_fields)->___s_ScoreLoaderCallback_6 = L_2;
		String_t* L_3 = ___category;
		GameCenterPlatform_Internal_LoadScores_m2146(NULL /*static, unused*/, L_3, /*hidden argument*/&GameCenterPlatform_Internal_LoadScores_m2146_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::LoadScores(UnityEngine.SocialPlatforms.ILeaderboard,System.Action`1<System.Boolean>)
extern MethodInfo GameCenterPlatform_LoadScores_m2176_MethodInfo;
extern MethodInfo* Action_1_Invoke_m3319_MethodInfo_var;
extern MethodInfo* List_1_Add_m3322_MethodInfo_var;
extern "C" void GameCenterPlatform_LoadScores_m2176 (GameCenterPlatform_t439 * __this, Object_t * ___board, Action_1_t430 * ___callback, MethodInfo* method)
{
	static bool GameCenterPlatform_LoadScores_m2176_init;
	if (!GameCenterPlatform_LoadScores_m2176_init)
	{
		Action_1_Invoke_m3319_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Action_1_Invoke_m3319_GenericMethod);
		List_1_Add_m3322_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1_Add_m3322_GenericMethod);
		GameCenterPlatform_LoadScores_m2176_init = true;
	}
	Leaderboard_t449 * V_0 = {0};
	GcLeaderboard_t450 * V_1 = {0};
	Range_t642  V_2 = {0};
	Range_t642  V_3 = {0};
	{
		bool L_0 = GameCenterPlatform_VerifyAuthentication_m2179(__this, /*hidden argument*/&GameCenterPlatform_VerifyAuthentication_m2179_MethodInfo);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		Action_1_t430 * L_1 = ___callback;
		NullCheck(L_1);
		VirtActionInvoker1< bool >::Invoke(Action_1_Invoke_m3319_MethodInfo_var, L_1, 0);
		return;
	}

IL_0013:
	{
		Action_1_t430 * L_2 = ___callback;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GameCenterPlatform_t439_il2cpp_TypeInfo));
		((GameCenterPlatform_t439_StaticFields*)InitializedTypeInfo(&GameCenterPlatform_t439_il2cpp_TypeInfo)->static_fields)->___s_LeaderboardCallback_7 = L_2;
		Object_t * L_3 = ___board;
		V_0 = ((Leaderboard_t449 *)Castclass(L_3, InitializedTypeInfo(&Leaderboard_t449_il2cpp_TypeInfo)));
		Leaderboard_t449 * L_4 = V_0;
		GcLeaderboard_t450 * L_5 = (GcLeaderboard_t450 *)il2cpp_codegen_object_new (InitializedTypeInfo(&GcLeaderboard_t450_il2cpp_TypeInfo));
		GcLeaderboard__ctor_m2192(L_5, L_4, /*hidden argument*/&GcLeaderboard__ctor_m2192_MethodInfo);
		V_1 = L_5;
		List_1_t438 * L_6 = ((GameCenterPlatform_t439_StaticFields*)InitializedTypeInfo(&GameCenterPlatform_t439_il2cpp_TypeInfo)->static_fields)->___m_GcBoards_14;
		GcLeaderboard_t450 * L_7 = V_1;
		NullCheck(L_6);
		VirtActionInvoker1< GcLeaderboard_t450 * >::Invoke(List_1_Add_m3322_MethodInfo_var, L_6, L_7);
		Leaderboard_t449 * L_8 = V_0;
		NullCheck(L_8);
		StringU5BU5D_t423* L_9 = Leaderboard_GetUserFilter_m3208(L_8, /*hidden argument*/&Leaderboard_GetUserFilter_m3208_MethodInfo);
		NullCheck(L_9);
		if ((((int32_t)(((int32_t)(((Array_t *)L_9)->max_length)))) <= ((int32_t)0)))
		{
			goto IL_005d;
		}
	}
	{
		GcLeaderboard_t450 * L_10 = V_1;
		Object_t * L_11 = ___board;
		NullCheck(L_11);
		String_t* L_12 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(&ILeaderboard_get_id_m3323_MethodInfo, L_11);
		Object_t * L_13 = ___board;
		NullCheck(L_13);
		int32_t L_14 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(&ILeaderboard_get_timeScope_m3324_MethodInfo, L_13);
		Leaderboard_t449 * L_15 = V_0;
		NullCheck(L_15);
		StringU5BU5D_t423* L_16 = Leaderboard_GetUserFilter_m3208(L_15, /*hidden argument*/&Leaderboard_GetUserFilter_m3208_MethodInfo);
		NullCheck(L_10);
		GcLeaderboard_Internal_LoadScoresWithUsers_m2200(L_10, L_12, L_14, L_16, /*hidden argument*/&GcLeaderboard_Internal_LoadScoresWithUsers_m2200_MethodInfo);
		goto IL_0091;
	}

IL_005d:
	{
		GcLeaderboard_t450 * L_17 = V_1;
		Object_t * L_18 = ___board;
		NullCheck(L_18);
		String_t* L_19 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(&ILeaderboard_get_id_m3323_MethodInfo, L_18);
		Object_t * L_20 = ___board;
		NullCheck(L_20);
		Range_t642  L_21 = (Range_t642 )InterfaceFuncInvoker0< Range_t642  >::Invoke(&ILeaderboard_get_range_m3325_MethodInfo, L_20);
		V_2 = L_21;
		int32_t L_22 = ((&V_2)->___from_0);
		Object_t * L_23 = ___board;
		NullCheck(L_23);
		Range_t642  L_24 = (Range_t642 )InterfaceFuncInvoker0< Range_t642  >::Invoke(&ILeaderboard_get_range_m3325_MethodInfo, L_23);
		V_3 = L_24;
		int32_t L_25 = ((&V_3)->___count_1);
		Object_t * L_26 = ___board;
		NullCheck(L_26);
		int32_t L_27 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(&ILeaderboard_get_userScope_m3326_MethodInfo, L_26);
		Object_t * L_28 = ___board;
		NullCheck(L_28);
		int32_t L_29 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(&ILeaderboard_get_timeScope_m3324_MethodInfo, L_28);
		NullCheck(L_17);
		GcLeaderboard_Internal_LoadScores_m2199(L_17, L_19, L_22, L_25, L_27, L_29, /*hidden argument*/&GcLeaderboard_Internal_LoadScores_m2199_MethodInfo);
	}

IL_0091:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::LeaderboardCallbackWrapper(System.Boolean)
extern MethodInfo GameCenterPlatform_LeaderboardCallbackWrapper_m2177_MethodInfo;
extern MethodInfo* Action_1_Invoke_m3319_MethodInfo_var;
extern "C" void GameCenterPlatform_LeaderboardCallbackWrapper_m2177 (Object_t * __this /* static, unused */, bool ___success, MethodInfo* method)
{
	static bool GameCenterPlatform_LeaderboardCallbackWrapper_m2177_init;
	if (!GameCenterPlatform_LeaderboardCallbackWrapper_m2177_init)
	{
		Action_1_Invoke_m3319_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Action_1_Invoke_m3319_GenericMethod);
		GameCenterPlatform_LeaderboardCallbackWrapper_m2177_init = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GameCenterPlatform_t439_il2cpp_TypeInfo));
		Action_1_t430 * L_0 = ((GameCenterPlatform_t439_StaticFields*)InitializedTypeInfo(&GameCenterPlatform_t439_il2cpp_TypeInfo)->static_fields)->___s_LeaderboardCallback_7;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GameCenterPlatform_t439_il2cpp_TypeInfo));
		Action_1_t430 * L_1 = ((GameCenterPlatform_t439_StaticFields*)InitializedTypeInfo(&GameCenterPlatform_t439_il2cpp_TypeInfo)->static_fields)->___s_LeaderboardCallback_7;
		bool L_2 = ___success;
		NullCheck(L_1);
		VirtActionInvoker1< bool >::Invoke(Action_1_Invoke_m3319_MethodInfo_var, L_1, L_2);
	}

IL_0015:
	{
		return;
	}
}
// System.Boolean UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::GetLoading(UnityEngine.SocialPlatforms.ILeaderboard)
extern MethodInfo GameCenterPlatform_GetLoading_m2178_MethodInfo;
extern TypeInfo* Enumerator_t683_il2cpp_TypeInfo_var;
extern MethodInfo* List_1_GetEnumerator_m3329_MethodInfo_var;
extern MethodInfo* Enumerator_get_Current_m3330_MethodInfo_var;
extern MethodInfo* Enumerator_MoveNext_m3331_MethodInfo_var;
extern "C" bool GameCenterPlatform_GetLoading_m2178 (GameCenterPlatform_t439 * __this, Object_t * ___board, MethodInfo* method)
{
	static bool GameCenterPlatform_GetLoading_m2178_init;
	if (!GameCenterPlatform_GetLoading_m2178_init)
	{
		Enumerator_t683_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Enumerator_t683_0_0_0);
		List_1_GetEnumerator_m3329_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1_GetEnumerator_m3329_GenericMethod);
		Enumerator_get_Current_m3330_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Enumerator_get_Current_m3330_GenericMethod);
		Enumerator_MoveNext_m3331_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Enumerator_MoveNext_m3331_GenericMethod);
		GameCenterPlatform_GetLoading_m2178_init = true;
	}
	GcLeaderboard_t450 * V_0 = {0};
	Enumerator_t683  V_1 = {0};
	bool V_2 = false;
	Exception_t275 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t275 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		bool L_0 = GameCenterPlatform_VerifyAuthentication_m2179(__this, /*hidden argument*/&GameCenterPlatform_VerifyAuthentication_m2179_MethodInfo);
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GameCenterPlatform_t439_il2cpp_TypeInfo));
		List_1_t438 * L_1 = ((GameCenterPlatform_t439_StaticFields*)InitializedTypeInfo(&GameCenterPlatform_t439_il2cpp_TypeInfo)->static_fields)->___m_GcBoards_14;
		NullCheck(L_1);
		Enumerator_t683  L_2 = List_1_GetEnumerator_m3329(L_1, /*hidden argument*/List_1_GetEnumerator_m3329_MethodInfo_var);
		V_1 = L_2;
	}

IL_0018:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0042;
		}

IL_001d:
		{
			GcLeaderboard_t450 * L_3 = Enumerator_get_Current_m3330((&V_1), /*hidden argument*/Enumerator_get_Current_m3330_MethodInfo_var);
			V_0 = L_3;
			GcLeaderboard_t450 * L_4 = V_0;
			Object_t * L_5 = ___board;
			NullCheck(L_4);
			bool L_6 = GcLeaderboard_Contains_m2194(L_4, ((Leaderboard_t449 *)Castclass(L_5, InitializedTypeInfo(&Leaderboard_t449_il2cpp_TypeInfo))), /*hidden argument*/&GcLeaderboard_Contains_m2194_MethodInfo);
			if (!L_6)
			{
				goto IL_0042;
			}
		}

IL_0036:
		{
			GcLeaderboard_t450 * L_7 = V_0;
			NullCheck(L_7);
			bool L_8 = GcLeaderboard_Loading_m2201(L_7, /*hidden argument*/&GcLeaderboard_Loading_m2201_MethodInfo);
			V_2 = L_8;
			IL2CPP_LEAVE(0x61, FINALLY_0053);
		}

IL_0042:
		{
			bool L_9 = Enumerator_MoveNext_m3331((&V_1), /*hidden argument*/Enumerator_MoveNext_m3331_MethodInfo_var);
			if (L_9)
			{
				goto IL_001d;
			}
		}

IL_004e:
		{
			IL2CPP_LEAVE(0x5F, FINALLY_0053);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t275 *)e.ex;
		goto FINALLY_0053;
	}

FINALLY_0053:
	{ // begin finally (depth: 1)
		Enumerator_t683  L_10 = V_1;
		Enumerator_t683  L_11 = L_10;
		Object_t * L_12 = Box(Enumerator_t683_il2cpp_TypeInfo_var, &L_11);
		NullCheck(L_12);
		InterfaceActionInvoker0::Invoke(&IDisposable_Dispose_m1379_MethodInfo, L_12);
		IL2CPP_END_FINALLY(83)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(83)
	{
		IL2CPP_JUMP_TBL(0x61, IL_0061)
		IL2CPP_JUMP_TBL(0x5F, IL_005f)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t275 *)
	}

IL_005f:
	{
		return 0;
	}

IL_0061:
	{
		bool L_13 = V_2;
		return L_13;
	}
}
// System.Boolean UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::VerifyAuthentication()
extern "C" bool GameCenterPlatform_VerifyAuthentication_m2179 (GameCenterPlatform_t439 * __this, MethodInfo* method)
{
	{
		Object_t * L_0 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(&GameCenterPlatform_get_localUser_m2169_MethodInfo, __this);
		NullCheck(L_0);
		bool L_1 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&ILocalUser_get_authenticated_m3327_MethodInfo, L_0);
		if (L_1)
		{
			goto IL_001c;
		}
	}
	{
		Debug_Log_m2658(NULL /*static, unused*/, (String_t*) &_stringLiteral79, /*hidden argument*/&Debug_Log_m2658_MethodInfo);
		return 0;
	}

IL_001c:
	{
		return 1;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ShowAchievementsUI()
extern MethodInfo GameCenterPlatform_ShowAchievementsUI_m2180_MethodInfo;
extern "C" void GameCenterPlatform_ShowAchievementsUI_m2180 (GameCenterPlatform_t439 * __this, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GameCenterPlatform_t439_il2cpp_TypeInfo));
		GameCenterPlatform_Internal_ShowAchievementsUI_m2147(NULL /*static, unused*/, /*hidden argument*/&GameCenterPlatform_Internal_ShowAchievementsUI_m2147_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ShowLeaderboardUI()
extern MethodInfo GameCenterPlatform_ShowLeaderboardUI_m2181_MethodInfo;
extern "C" void GameCenterPlatform_ShowLeaderboardUI_m2181 (GameCenterPlatform_t439 * __this, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GameCenterPlatform_t439_il2cpp_TypeInfo));
		GameCenterPlatform_Internal_ShowLeaderboardUI_m2148(NULL /*static, unused*/, /*hidden argument*/&GameCenterPlatform_Internal_ShowLeaderboardUI_m2148_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ClearUsers(System.Int32)
extern MethodInfo GameCenterPlatform_ClearUsers_m2182_MethodInfo;
extern "C" void GameCenterPlatform_ClearUsers_m2182 (Object_t * __this /* static, unused */, int32_t ___size, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GameCenterPlatform_t439_il2cpp_TypeInfo));
		int32_t L_0 = ___size;
		GameCenterPlatform_SafeClearArray_m2188(NULL /*static, unused*/, (&((GameCenterPlatform_t439_StaticFields*)InitializedTypeInfo(&GameCenterPlatform_t439_il2cpp_TypeInfo)->static_fields)->___s_users_11), L_0, /*hidden argument*/&GameCenterPlatform_SafeClearArray_m2188_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::SetUser(UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData,System.Int32)
extern MethodInfo GameCenterPlatform_SetUser_m2183_MethodInfo;
extern "C" void GameCenterPlatform_SetUser_m2183 (Object_t * __this /* static, unused */, GcUserProfileData_t448  ___data, int32_t ___number, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GameCenterPlatform_t439_il2cpp_TypeInfo));
		int32_t L_0 = ___number;
		GcUserProfileData_AddToArray_m3148((&___data), (&((GameCenterPlatform_t439_StaticFields*)InitializedTypeInfo(&GameCenterPlatform_t439_il2cpp_TypeInfo)->static_fields)->___s_users_11), L_0, /*hidden argument*/&GcUserProfileData_AddToArray_m3148_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::SetUserImage(UnityEngine.Texture2D,System.Int32)
extern MethodInfo GameCenterPlatform_SetUserImage_m2184_MethodInfo;
extern "C" void GameCenterPlatform_SetUserImage_m2184 (Object_t * __this /* static, unused */, Texture2D_t130 * ___texture, int32_t ___number, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GameCenterPlatform_t439_il2cpp_TypeInfo));
		Texture2D_t130 * L_0 = ___texture;
		int32_t L_1 = ___number;
		GameCenterPlatform_SafeSetUserImage_m2187(NULL /*static, unused*/, (&((GameCenterPlatform_t439_StaticFields*)InitializedTypeInfo(&GameCenterPlatform_t439_il2cpp_TypeInfo)->static_fields)->___s_users_11), L_0, L_1, /*hidden argument*/&GameCenterPlatform_SafeSetUserImage_m2187_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::TriggerUsersCallbackWrapper()
extern MethodInfo GameCenterPlatform_TriggerUsersCallbackWrapper_m2185_MethodInfo;
extern MethodInfo* Action_1_Invoke_m3328_MethodInfo_var;
extern "C" void GameCenterPlatform_TriggerUsersCallbackWrapper_m2185 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	static bool GameCenterPlatform_TriggerUsersCallbackWrapper_m2185_init;
	if (!GameCenterPlatform_TriggerUsersCallbackWrapper_m2185_init)
	{
		Action_1_Invoke_m3328_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Action_1_Invoke_m3328_GenericMethod);
		GameCenterPlatform_TriggerUsersCallbackWrapper_m2185_init = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GameCenterPlatform_t439_il2cpp_TypeInfo));
		Action_1_t434 * L_0 = ((GameCenterPlatform_t439_StaticFields*)InitializedTypeInfo(&GameCenterPlatform_t439_il2cpp_TypeInfo)->static_fields)->___s_UsersCallback_8;
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GameCenterPlatform_t439_il2cpp_TypeInfo));
		Action_1_t434 * L_1 = ((GameCenterPlatform_t439_StaticFields*)InitializedTypeInfo(&GameCenterPlatform_t439_il2cpp_TypeInfo)->static_fields)->___s_UsersCallback_8;
		UserProfileU5BU5D_t436* L_2 = ((GameCenterPlatform_t439_StaticFields*)InitializedTypeInfo(&GameCenterPlatform_t439_il2cpp_TypeInfo)->static_fields)->___s_users_11;
		NullCheck(L_1);
		VirtActionInvoker1< IUserProfileU5BU5D_t639* >::Invoke(Action_1_Invoke_m3328_MethodInfo_var, L_1, (IUserProfileU5BU5D_t639*)(IUserProfileU5BU5D_t639*)L_2);
	}

IL_0019:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::LoadUsers(System.String[],System.Action`1<UnityEngine.SocialPlatforms.IUserProfile[]>)
extern MethodInfo GameCenterPlatform_LoadUsers_m2186_MethodInfo;
extern TypeInfo* UserProfileU5BU5D_t436_il2cpp_TypeInfo_var;
extern MethodInfo* Action_1_Invoke_m3328_MethodInfo_var;
extern "C" void GameCenterPlatform_LoadUsers_m2186 (GameCenterPlatform_t439 * __this, StringU5BU5D_t423* ___userIds, Action_1_t434 * ___callback, MethodInfo* method)
{
	static bool GameCenterPlatform_LoadUsers_m2186_init;
	if (!GameCenterPlatform_LoadUsers_m2186_init)
	{
		UserProfileU5BU5D_t436_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&UserProfileU5BU5D_t436_0_0_0);
		Action_1_Invoke_m3328_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Action_1_Invoke_m3328_GenericMethod);
		GameCenterPlatform_LoadUsers_m2186_init = true;
	}
	{
		bool L_0 = GameCenterPlatform_VerifyAuthentication_m2179(__this, /*hidden argument*/&GameCenterPlatform_VerifyAuthentication_m2179_MethodInfo);
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		Action_1_t434 * L_1 = ___callback;
		NullCheck(L_1);
		VirtActionInvoker1< IUserProfileU5BU5D_t639* >::Invoke(Action_1_Invoke_m3328_MethodInfo_var, L_1, (IUserProfileU5BU5D_t639*)(IUserProfileU5BU5D_t639*)((UserProfileU5BU5D_t436*)SZArrayNew(UserProfileU5BU5D_t436_il2cpp_TypeInfo_var, 0)));
		return;
	}

IL_0018:
	{
		Action_1_t434 * L_2 = ___callback;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GameCenterPlatform_t439_il2cpp_TypeInfo));
		((GameCenterPlatform_t439_StaticFields*)InitializedTypeInfo(&GameCenterPlatform_t439_il2cpp_TypeInfo)->static_fields)->___s_UsersCallback_8 = L_2;
		StringU5BU5D_t423* L_3 = ___userIds;
		GameCenterPlatform_Internal_LoadUsers_m2149(NULL /*static, unused*/, L_3, /*hidden argument*/&GameCenterPlatform_Internal_LoadUsers_m2149_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::SafeSetUserImage(UnityEngine.SocialPlatforms.Impl.UserProfile[]&,UnityEngine.Texture2D,System.Int32)
extern "C" void GameCenterPlatform_SafeSetUserImage_m2187 (Object_t * __this /* static, unused */, UserProfileU5BU5D_t436** ___array, Texture2D_t130 * ___texture, int32_t ___number, MethodInfo* method)
{
	{
		UserProfileU5BU5D_t436** L_0 = ___array;
		NullCheck((*((UserProfileU5BU5D_t436**)L_0)));
		int32_t L_1 = ___number;
		if ((((int32_t)(((int32_t)(((Array_t *)(*((UserProfileU5BU5D_t436**)L_0)))->max_length)))) <= ((int32_t)L_1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = ___number;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_0026;
		}
	}

IL_0011:
	{
		Debug_Log_m2658(NULL /*static, unused*/, (String_t*) &_stringLiteral80, /*hidden argument*/&Debug_Log_m2658_MethodInfo);
		Texture2D_t130 * L_3 = (Texture2D_t130 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Texture2D_t130_il2cpp_TypeInfo));
		Texture2D__ctor_m2226(L_3, ((int32_t)76), ((int32_t)76), /*hidden argument*/&Texture2D__ctor_m2226_MethodInfo);
		___texture = L_3;
	}

IL_0026:
	{
		UserProfileU5BU5D_t436** L_4 = ___array;
		NullCheck((*((UserProfileU5BU5D_t436**)L_4)));
		int32_t L_5 = ___number;
		if ((((int32_t)(((int32_t)(((Array_t *)(*((UserProfileU5BU5D_t436**)L_4)))->max_length)))) <= ((int32_t)L_5)))
		{
			goto IL_0046;
		}
	}
	{
		int32_t L_6 = ___number;
		if ((((int32_t)L_6) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		UserProfileU5BU5D_t436** L_7 = ___array;
		int32_t L_8 = ___number;
		NullCheck((*((UserProfileU5BU5D_t436**)L_7)));
		IL2CPP_ARRAY_BOUNDS_CHECK((*((UserProfileU5BU5D_t436**)L_7)), L_8);
		int32_t L_9 = L_8;
		Texture2D_t130 * L_10 = ___texture;
		NullCheck((*(UserProfile_t631 **)(UserProfile_t631 **)SZArrayLdElema((*((UserProfileU5BU5D_t436**)L_7)), L_9)));
		UserProfile_SetImage_m3169((*(UserProfile_t631 **)(UserProfile_t631 **)SZArrayLdElema((*((UserProfileU5BU5D_t436**)L_7)), L_9)), L_10, /*hidden argument*/&UserProfile_SetImage_m3169_MethodInfo);
		goto IL_0050;
	}

IL_0046:
	{
		Debug_Log_m2658(NULL /*static, unused*/, (String_t*) &_stringLiteral81, /*hidden argument*/&Debug_Log_m2658_MethodInfo);
	}

IL_0050:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::SafeClearArray(UnityEngine.SocialPlatforms.Impl.UserProfile[]&,System.Int32)
extern TypeInfo* UserProfileU5BU5D_t436_il2cpp_TypeInfo_var;
extern "C" void GameCenterPlatform_SafeClearArray_m2188 (Object_t * __this /* static, unused */, UserProfileU5BU5D_t436** ___array, int32_t ___size, MethodInfo* method)
{
	static bool GameCenterPlatform_SafeClearArray_m2188_init;
	if (!GameCenterPlatform_SafeClearArray_m2188_init)
	{
		UserProfileU5BU5D_t436_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&UserProfileU5BU5D_t436_0_0_0);
		GameCenterPlatform_SafeClearArray_m2188_init = true;
	}
	{
		UserProfileU5BU5D_t436** L_0 = ___array;
		if (!(*((UserProfileU5BU5D_t436**)L_0)))
		{
			goto IL_0011;
		}
	}
	{
		UserProfileU5BU5D_t436** L_1 = ___array;
		NullCheck((*((UserProfileU5BU5D_t436**)L_1)));
		int32_t L_2 = ___size;
		if ((((int32_t)(((int32_t)(((Array_t *)(*((UserProfileU5BU5D_t436**)L_1)))->max_length)))) == ((int32_t)L_2)))
		{
			goto IL_0019;
		}
	}

IL_0011:
	{
		UserProfileU5BU5D_t436** L_3 = ___array;
		int32_t L_4 = ___size;
		*((Object_t **)(L_3)) = (Object_t *)((UserProfileU5BU5D_t436*)SZArrayNew(UserProfileU5BU5D_t436_il2cpp_TypeInfo_var, L_4));
	}

IL_0019:
	{
		return;
	}
}
// UnityEngine.SocialPlatforms.ILeaderboard UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::CreateLeaderboard()
extern MethodInfo GameCenterPlatform_CreateLeaderboard_m2189_MethodInfo;
extern "C" Object_t * GameCenterPlatform_CreateLeaderboard_m2189 (GameCenterPlatform_t439 * __this, MethodInfo* method)
{
	Leaderboard_t449 * V_0 = {0};
	{
		Leaderboard_t449 * L_0 = (Leaderboard_t449 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Leaderboard_t449_il2cpp_TypeInfo));
		Leaderboard__ctor_m3202(L_0, /*hidden argument*/&Leaderboard__ctor_m3202_MethodInfo);
		V_0 = L_0;
		Leaderboard_t449 * L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.SocialPlatforms.IAchievement UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::CreateAchievement()
extern MethodInfo GameCenterPlatform_CreateAchievement_m2190_MethodInfo;
extern "C" Object_t * GameCenterPlatform_CreateAchievement_m2190 (GameCenterPlatform_t439 * __this, MethodInfo* method)
{
	Achievement_t633 * V_0 = {0};
	{
		Achievement_t633 * L_0 = (Achievement_t633 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Achievement_t633_il2cpp_TypeInfo));
		Achievement__ctor_m3176(L_0, /*hidden argument*/&Achievement__ctor_m3176_MethodInfo);
		V_0 = L_0;
		Achievement_t633 * L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::TriggerResetAchievementCallback(System.Boolean)
extern MethodInfo GameCenterPlatform_TriggerResetAchievementCallback_m2191_MethodInfo;
extern MethodInfo* Action_1_Invoke_m3319_MethodInfo_var;
extern "C" void GameCenterPlatform_TriggerResetAchievementCallback_m2191 (Object_t * __this /* static, unused */, bool ___result, MethodInfo* method)
{
	static bool GameCenterPlatform_TriggerResetAchievementCallback_m2191_init;
	if (!GameCenterPlatform_TriggerResetAchievementCallback_m2191_init)
	{
		Action_1_Invoke_m3319_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Action_1_Invoke_m3319_GenericMethod);
		GameCenterPlatform_TriggerResetAchievementCallback_m2191_init = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GameCenterPlatform_t439_il2cpp_TypeInfo));
		Action_1_t430 * L_0 = ((GameCenterPlatform_t439_StaticFields*)InitializedTypeInfo(&GameCenterPlatform_t439_il2cpp_TypeInfo)->static_fields)->___s_ResetAchievements_12;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GameCenterPlatform_t439_il2cpp_TypeInfo));
		Action_1_t430 * L_1 = ((GameCenterPlatform_t439_StaticFields*)InitializedTypeInfo(&GameCenterPlatform_t439_il2cpp_TypeInfo)->static_fields)->___s_ResetAchievements_12;
		bool L_2 = ___result;
		NullCheck(L_1);
		VirtActionInvoker1< bool >::Invoke(Action_1_Invoke_m3319_MethodInfo_var, L_1, L_2);
	}

IL_0015:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.UInt32
#include "mscorlib_System_UInt32.h"
extern MethodInfo GcLeaderboard_Dispose_m2202_MethodInfo;
extern MethodInfo Leaderboard_SetScores_m3206_MethodInfo;
extern MethodInfo Leaderboard_SetLocalUserScore_m3204_MethodInfo;
extern MethodInfo Leaderboard_SetMaxRange_m3205_MethodInfo;
extern MethodInfo Leaderboard_SetTitle_m3207_MethodInfo;


// System.Void UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::.ctor(UnityEngine.SocialPlatforms.Impl.Leaderboard)
extern "C" void GcLeaderboard__ctor_m2192 (GcLeaderboard_t450 * __this, Leaderboard_t449 * ___board, MethodInfo* method)
{
	{
		Object__ctor_m1289(__this, /*hidden argument*/&Object__ctor_m1289_MethodInfo);
		Leaderboard_t449 * L_0 = ___board;
		__this->___m_GenericLeaderboard_1 = L_0;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::Finalize()
extern MethodInfo GcLeaderboard_Finalize_m2193_MethodInfo;
extern "C" void GcLeaderboard_Finalize_m2193 (GcLeaderboard_t450 * __this, MethodInfo* method)
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
		GcLeaderboard_Dispose_m2202(__this, /*hidden argument*/&GcLeaderboard_Dispose_m2202_MethodInfo);
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
// System.Boolean UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::Contains(UnityEngine.SocialPlatforms.Impl.Leaderboard)
extern "C" bool GcLeaderboard_Contains_m2194 (GcLeaderboard_t450 * __this, Leaderboard_t449 * ___board, MethodInfo* method)
{
	{
		Leaderboard_t449 * L_0 = (__this->___m_GenericLeaderboard_1);
		Leaderboard_t449 * L_1 = ___board;
		return ((((Object_t*)(Leaderboard_t449 *)L_0) == ((Object_t*)(Leaderboard_t449 *)L_1))? 1 : 0);
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::SetScores(UnityEngine.SocialPlatforms.GameCenter.GcScoreData[])
extern MethodInfo GcLeaderboard_SetScores_m2195_MethodInfo;
extern TypeInfo* ScoreU5BU5D_t682_il2cpp_TypeInfo_var;
extern "C" void GcLeaderboard_SetScores_m2195 (GcLeaderboard_t450 * __this, GcScoreDataU5BU5D_t443* ___scoreDatas, MethodInfo* method)
{
	static bool GcLeaderboard_SetScores_m2195_init;
	if (!GcLeaderboard_SetScores_m2195_init)
	{
		ScoreU5BU5D_t682_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ScoreU5BU5D_t682_0_0_0);
		GcLeaderboard_SetScores_m2195_init = true;
	}
	ScoreU5BU5D_t682* V_0 = {0};
	int32_t V_1 = 0;
	{
		Leaderboard_t449 * L_0 = (__this->___m_GenericLeaderboard_1);
		if (!L_0)
		{
			goto IL_0043;
		}
	}
	{
		GcScoreDataU5BU5D_t443* L_1 = ___scoreDatas;
		NullCheck(L_1);
		V_0 = ((ScoreU5BU5D_t682*)SZArrayNew(ScoreU5BU5D_t682_il2cpp_TypeInfo_var, (((int32_t)(((Array_t *)L_1)->max_length)))));
		V_1 = 0;
		goto IL_002e;
	}

IL_001b:
	{
		ScoreU5BU5D_t682* L_2 = V_0;
		int32_t L_3 = V_1;
		GcScoreDataU5BU5D_t443* L_4 = ___scoreDatas;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		Score_t634 * L_6 = GcScoreData_ToScore_m3151(((GcScoreData_t444 *)(GcScoreData_t444 *)SZArrayLdElema(L_4, L_5)), /*hidden argument*/&GcScoreData_ToScore_m3151_MethodInfo);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		ArrayElementTypeCheck (L_2, L_6);
		*((Score_t634 **)(Score_t634 **)SZArrayLdElema(L_2, L_3)) = (Score_t634 *)L_6;
		int32_t L_7 = V_1;
		V_1 = ((int32_t)((int32_t)L_7+(int32_t)1));
	}

IL_002e:
	{
		int32_t L_8 = V_1;
		GcScoreDataU5BU5D_t443* L_9 = ___scoreDatas;
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)(((int32_t)(((Array_t *)L_9)->max_length))))))
		{
			goto IL_001b;
		}
	}
	{
		Leaderboard_t449 * L_10 = (__this->___m_GenericLeaderboard_1);
		ScoreU5BU5D_t682* L_11 = V_0;
		NullCheck(L_10);
		Leaderboard_SetScores_m3206(L_10, (IScoreU5BU5D_t641*)(IScoreU5BU5D_t641*)L_11, /*hidden argument*/&Leaderboard_SetScores_m3206_MethodInfo);
	}

IL_0043:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::SetLocalScore(UnityEngine.SocialPlatforms.GameCenter.GcScoreData)
extern MethodInfo GcLeaderboard_SetLocalScore_m2196_MethodInfo;
extern "C" void GcLeaderboard_SetLocalScore_m2196 (GcLeaderboard_t450 * __this, GcScoreData_t444  ___scoreData, MethodInfo* method)
{
	{
		Leaderboard_t449 * L_0 = (__this->___m_GenericLeaderboard_1);
		if (!L_0)
		{
			goto IL_001d;
		}
	}
	{
		Leaderboard_t449 * L_1 = (__this->___m_GenericLeaderboard_1);
		Score_t634 * L_2 = GcScoreData_ToScore_m3151((&___scoreData), /*hidden argument*/&GcScoreData_ToScore_m3151_MethodInfo);
		NullCheck(L_1);
		Leaderboard_SetLocalUserScore_m3204(L_1, L_2, /*hidden argument*/&Leaderboard_SetLocalUserScore_m3204_MethodInfo);
	}

IL_001d:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::SetMaxRange(System.UInt32)
extern MethodInfo GcLeaderboard_SetMaxRange_m2197_MethodInfo;
extern "C" void GcLeaderboard_SetMaxRange_m2197 (GcLeaderboard_t450 * __this, uint32_t ___maxRange, MethodInfo* method)
{
	{
		Leaderboard_t449 * L_0 = (__this->___m_GenericLeaderboard_1);
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		Leaderboard_t449 * L_1 = (__this->___m_GenericLeaderboard_1);
		uint32_t L_2 = ___maxRange;
		NullCheck(L_1);
		Leaderboard_SetMaxRange_m3205(L_1, L_2, /*hidden argument*/&Leaderboard_SetMaxRange_m3205_MethodInfo);
	}

IL_0017:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::SetTitle(System.String)
extern MethodInfo GcLeaderboard_SetTitle_m2198_MethodInfo;
extern "C" void GcLeaderboard_SetTitle_m2198 (GcLeaderboard_t450 * __this, String_t* ___title, MethodInfo* method)
{
	{
		Leaderboard_t449 * L_0 = (__this->___m_GenericLeaderboard_1);
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		Leaderboard_t449 * L_1 = (__this->___m_GenericLeaderboard_1);
		String_t* L_2 = ___title;
		NullCheck(L_1);
		Leaderboard_SetTitle_m3207(L_1, L_2, /*hidden argument*/&Leaderboard_SetTitle_m3207_MethodInfo);
	}

IL_0017:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::Internal_LoadScores(System.String,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" void GcLeaderboard_Internal_LoadScores_m2199 (GcLeaderboard_t450 * __this, String_t* ___category, int32_t ___from, int32_t ___count, int32_t ___playerScope, int32_t ___timeScope, MethodInfo* method)
{
	typedef void (*GcLeaderboard_Internal_LoadScores_m2199_ftn) (GcLeaderboard_t450 *, String_t*, int32_t, int32_t, int32_t, int32_t);
	static GcLeaderboard_Internal_LoadScores_m2199_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GcLeaderboard_Internal_LoadScores_m2199_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::Internal_LoadScores(System.String,System.Int32,System.Int32,System.Int32,System.Int32)");
	_il2cpp_icall_func(__this, ___category, ___from, ___count, ___playerScope, ___timeScope);
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::Internal_LoadScoresWithUsers(System.String,System.Int32,System.String[])
extern "C" void GcLeaderboard_Internal_LoadScoresWithUsers_m2200 (GcLeaderboard_t450 * __this, String_t* ___category, int32_t ___timeScope, StringU5BU5D_t423* ___userIDs, MethodInfo* method)
{
	typedef void (*GcLeaderboard_Internal_LoadScoresWithUsers_m2200_ftn) (GcLeaderboard_t450 *, String_t*, int32_t, StringU5BU5D_t423*);
	static GcLeaderboard_Internal_LoadScoresWithUsers_m2200_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GcLeaderboard_Internal_LoadScoresWithUsers_m2200_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::Internal_LoadScoresWithUsers(System.String,System.Int32,System.String[])");
	_il2cpp_icall_func(__this, ___category, ___timeScope, ___userIDs);
}
// System.Boolean UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::Loading()
extern "C" bool GcLeaderboard_Loading_m2201 (GcLeaderboard_t450 * __this, MethodInfo* method)
{
	typedef bool (*GcLeaderboard_Loading_m2201_ftn) (GcLeaderboard_t450 *);
	static GcLeaderboard_Loading_m2201_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GcLeaderboard_Loading_m2201_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::Loading()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::Dispose()
extern "C" void GcLeaderboard_Dispose_m2202 (GcLeaderboard_t450 * __this, MethodInfo* method)
{
	typedef void (*GcLeaderboard_Dispose_m2202_ftn) (GcLeaderboard_t450 *);
	static GcLeaderboard_Dispose_m2202_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GcLeaderboard_Dispose_m2202_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::Dispose()");
	_il2cpp_icall_func(__this);
}
// UnityEngine.BoneWeight
#include "UnityEngine_UnityEngine_BoneWeight.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo BoneWeight_t451_il2cpp_TypeInfo;
// UnityEngine.BoneWeight
#include "UnityEngine_UnityEngine_BoneWeightMethodDeclarations.h"

// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4.h"
extern TypeInfo Int32_t17_il2cpp_TypeInfo;
extern TypeInfo Single_t23_il2cpp_TypeInfo;
extern TypeInfo Vector4_t160_il2cpp_TypeInfo;
// System.Int32
#include "mscorlib_System_Int32MethodDeclarations.h"
// System.Single
#include "mscorlib_System_SingleMethodDeclarations.h"
// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4MethodDeclarations.h"
extern MethodInfo BoneWeight_get_boneIndex0_m2211_MethodInfo;
extern MethodInfo Int32_GetHashCode_m3332_MethodInfo;
extern MethodInfo BoneWeight_get_boneIndex1_m2213_MethodInfo;
extern MethodInfo BoneWeight_get_boneIndex2_m2215_MethodInfo;
extern MethodInfo BoneWeight_get_boneIndex3_m2217_MethodInfo;
extern MethodInfo BoneWeight_get_weight0_m2203_MethodInfo;
extern MethodInfo Single_GetHashCode_m3333_MethodInfo;
extern MethodInfo BoneWeight_get_weight1_m2205_MethodInfo;
extern MethodInfo BoneWeight_get_weight2_m2207_MethodInfo;
extern MethodInfo BoneWeight_get_weight3_m2209_MethodInfo;
extern MethodInfo Int32_Equals_m3334_MethodInfo;
extern MethodInfo Vector4__ctor_m1511_MethodInfo;
extern MethodInfo Vector4_Equals_m2537_MethodInfo;
extern MethodInfo Vector4_op_Equality_m2542_MethodInfo;
extern MethodInfo BoneWeight_op_Equality_m2221_MethodInfo;


// System.Single UnityEngine.BoneWeight::get_weight0()
extern "C" float BoneWeight_get_weight0_m2203 (BoneWeight_t451 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Weight0_0);
		return L_0;
	}
}
// System.Void UnityEngine.BoneWeight::set_weight0(System.Single)
extern MethodInfo BoneWeight_set_weight0_m2204_MethodInfo;
extern "C" void BoneWeight_set_weight0_m2204 (BoneWeight_t451 * __this, float ___value, MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___m_Weight0_0 = L_0;
		return;
	}
}
// System.Single UnityEngine.BoneWeight::get_weight1()
extern "C" float BoneWeight_get_weight1_m2205 (BoneWeight_t451 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Weight1_1);
		return L_0;
	}
}
// System.Void UnityEngine.BoneWeight::set_weight1(System.Single)
extern MethodInfo BoneWeight_set_weight1_m2206_MethodInfo;
extern "C" void BoneWeight_set_weight1_m2206 (BoneWeight_t451 * __this, float ___value, MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___m_Weight1_1 = L_0;
		return;
	}
}
// System.Single UnityEngine.BoneWeight::get_weight2()
extern "C" float BoneWeight_get_weight2_m2207 (BoneWeight_t451 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Weight2_2);
		return L_0;
	}
}
// System.Void UnityEngine.BoneWeight::set_weight2(System.Single)
extern MethodInfo BoneWeight_set_weight2_m2208_MethodInfo;
extern "C" void BoneWeight_set_weight2_m2208 (BoneWeight_t451 * __this, float ___value, MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___m_Weight2_2 = L_0;
		return;
	}
}
// System.Single UnityEngine.BoneWeight::get_weight3()
extern "C" float BoneWeight_get_weight3_m2209 (BoneWeight_t451 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Weight3_3);
		return L_0;
	}
}
// System.Void UnityEngine.BoneWeight::set_weight3(System.Single)
extern MethodInfo BoneWeight_set_weight3_m2210_MethodInfo;
extern "C" void BoneWeight_set_weight3_m2210 (BoneWeight_t451 * __this, float ___value, MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___m_Weight3_3 = L_0;
		return;
	}
}
// System.Int32 UnityEngine.BoneWeight::get_boneIndex0()
extern "C" int32_t BoneWeight_get_boneIndex0_m2211 (BoneWeight_t451 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_BoneIndex0_4);
		return L_0;
	}
}
// System.Void UnityEngine.BoneWeight::set_boneIndex0(System.Int32)
extern MethodInfo BoneWeight_set_boneIndex0_m2212_MethodInfo;
extern "C" void BoneWeight_set_boneIndex0_m2212 (BoneWeight_t451 * __this, int32_t ___value, MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___m_BoneIndex0_4 = L_0;
		return;
	}
}
// System.Int32 UnityEngine.BoneWeight::get_boneIndex1()
extern "C" int32_t BoneWeight_get_boneIndex1_m2213 (BoneWeight_t451 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_BoneIndex1_5);
		return L_0;
	}
}
// System.Void UnityEngine.BoneWeight::set_boneIndex1(System.Int32)
extern MethodInfo BoneWeight_set_boneIndex1_m2214_MethodInfo;
extern "C" void BoneWeight_set_boneIndex1_m2214 (BoneWeight_t451 * __this, int32_t ___value, MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___m_BoneIndex1_5 = L_0;
		return;
	}
}
// System.Int32 UnityEngine.BoneWeight::get_boneIndex2()
extern "C" int32_t BoneWeight_get_boneIndex2_m2215 (BoneWeight_t451 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_BoneIndex2_6);
		return L_0;
	}
}
// System.Void UnityEngine.BoneWeight::set_boneIndex2(System.Int32)
extern MethodInfo BoneWeight_set_boneIndex2_m2216_MethodInfo;
extern "C" void BoneWeight_set_boneIndex2_m2216 (BoneWeight_t451 * __this, int32_t ___value, MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___m_BoneIndex2_6 = L_0;
		return;
	}
}
// System.Int32 UnityEngine.BoneWeight::get_boneIndex3()
extern "C" int32_t BoneWeight_get_boneIndex3_m2217 (BoneWeight_t451 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_BoneIndex3_7);
		return L_0;
	}
}
// System.Void UnityEngine.BoneWeight::set_boneIndex3(System.Int32)
extern MethodInfo BoneWeight_set_boneIndex3_m2218_MethodInfo;
extern "C" void BoneWeight_set_boneIndex3_m2218 (BoneWeight_t451 * __this, int32_t ___value, MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___m_BoneIndex3_7 = L_0;
		return;
	}
}
// System.Int32 UnityEngine.BoneWeight::GetHashCode()
extern MethodInfo BoneWeight_GetHashCode_m2219_MethodInfo;
extern "C" int32_t BoneWeight_GetHashCode_m2219 (BoneWeight_t451 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	{
		int32_t L_0 = BoneWeight_get_boneIndex0_m2211(__this, /*hidden argument*/&BoneWeight_get_boneIndex0_m2211_MethodInfo);
		V_0 = L_0;
		int32_t L_1 = Int32_GetHashCode_m3332((&V_0), /*hidden argument*/&Int32_GetHashCode_m3332_MethodInfo);
		int32_t L_2 = BoneWeight_get_boneIndex1_m2213(__this, /*hidden argument*/&BoneWeight_get_boneIndex1_m2213_MethodInfo);
		V_1 = L_2;
		int32_t L_3 = Int32_GetHashCode_m3332((&V_1), /*hidden argument*/&Int32_GetHashCode_m3332_MethodInfo);
		int32_t L_4 = BoneWeight_get_boneIndex2_m2215(__this, /*hidden argument*/&BoneWeight_get_boneIndex2_m2215_MethodInfo);
		V_2 = L_4;
		int32_t L_5 = Int32_GetHashCode_m3332((&V_2), /*hidden argument*/&Int32_GetHashCode_m3332_MethodInfo);
		int32_t L_6 = BoneWeight_get_boneIndex3_m2217(__this, /*hidden argument*/&BoneWeight_get_boneIndex3_m2217_MethodInfo);
		V_3 = L_6;
		int32_t L_7 = Int32_GetHashCode_m3332((&V_3), /*hidden argument*/&Int32_GetHashCode_m3332_MethodInfo);
		float L_8 = BoneWeight_get_weight0_m2203(__this, /*hidden argument*/&BoneWeight_get_weight0_m2203_MethodInfo);
		V_4 = L_8;
		int32_t L_9 = Single_GetHashCode_m3333((&V_4), /*hidden argument*/&Single_GetHashCode_m3333_MethodInfo);
		float L_10 = BoneWeight_get_weight1_m2205(__this, /*hidden argument*/&BoneWeight_get_weight1_m2205_MethodInfo);
		V_5 = L_10;
		int32_t L_11 = Single_GetHashCode_m3333((&V_5), /*hidden argument*/&Single_GetHashCode_m3333_MethodInfo);
		float L_12 = BoneWeight_get_weight2_m2207(__this, /*hidden argument*/&BoneWeight_get_weight2_m2207_MethodInfo);
		V_6 = L_12;
		int32_t L_13 = Single_GetHashCode_m3333((&V_6), /*hidden argument*/&Single_GetHashCode_m3333_MethodInfo);
		float L_14 = BoneWeight_get_weight3_m2209(__this, /*hidden argument*/&BoneWeight_get_weight3_m2209_MethodInfo);
		V_7 = L_14;
		int32_t L_15 = Single_GetHashCode_m3333((&V_7), /*hidden argument*/&Single_GetHashCode_m3333_MethodInfo);
		return ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_1^(int32_t)((int32_t)((int32_t)L_3<<(int32_t)2))))^(int32_t)((int32_t)((int32_t)L_5>>(int32_t)2))))^(int32_t)((int32_t)((int32_t)L_7>>(int32_t)1))))^(int32_t)((int32_t)((int32_t)L_9<<(int32_t)5))))^(int32_t)((int32_t)((int32_t)L_11<<(int32_t)4))))^(int32_t)((int32_t)((int32_t)L_13>>(int32_t)4))))^(int32_t)((int32_t)((int32_t)L_15>>(int32_t)3))));
	}
}
// System.Boolean UnityEngine.BoneWeight::Equals(System.Object)
extern MethodInfo BoneWeight_Equals_m2220_MethodInfo;
extern "C" bool BoneWeight_Equals_m2220 (BoneWeight_t451 * __this, Object_t * ___other, MethodInfo* method)
{
	BoneWeight_t451  V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	Vector4_t160  V_5 = {0};
	int32_t G_B8_0 = 0;
	{
		Object_t * L_0 = ___other;
		if (((Object_t *)IsInst(L_0, InitializedTypeInfo(&BoneWeight_t451_il2cpp_TypeInfo))))
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		Object_t * L_1 = ___other;
		V_0 = ((*(BoneWeight_t451 *)((BoneWeight_t451 *)UnBox (L_1, InitializedTypeInfo(&BoneWeight_t451_il2cpp_TypeInfo)))));
		int32_t L_2 = BoneWeight_get_boneIndex0_m2211(__this, /*hidden argument*/&BoneWeight_get_boneIndex0_m2211_MethodInfo);
		V_1 = L_2;
		int32_t L_3 = BoneWeight_get_boneIndex0_m2211((&V_0), /*hidden argument*/&BoneWeight_get_boneIndex0_m2211_MethodInfo);
		bool L_4 = Int32_Equals_m3334((&V_1), L_3, /*hidden argument*/&Int32_Equals_m3334_MethodInfo);
		if (!L_4)
		{
			goto IL_00cb;
		}
	}
	{
		int32_t L_5 = BoneWeight_get_boneIndex1_m2213(__this, /*hidden argument*/&BoneWeight_get_boneIndex1_m2213_MethodInfo);
		V_2 = L_5;
		int32_t L_6 = BoneWeight_get_boneIndex1_m2213((&V_0), /*hidden argument*/&BoneWeight_get_boneIndex1_m2213_MethodInfo);
		bool L_7 = Int32_Equals_m3334((&V_2), L_6, /*hidden argument*/&Int32_Equals_m3334_MethodInfo);
		if (!L_7)
		{
			goto IL_00cb;
		}
	}
	{
		int32_t L_8 = BoneWeight_get_boneIndex2_m2215(__this, /*hidden argument*/&BoneWeight_get_boneIndex2_m2215_MethodInfo);
		V_3 = L_8;
		int32_t L_9 = BoneWeight_get_boneIndex2_m2215((&V_0), /*hidden argument*/&BoneWeight_get_boneIndex2_m2215_MethodInfo);
		bool L_10 = Int32_Equals_m3334((&V_3), L_9, /*hidden argument*/&Int32_Equals_m3334_MethodInfo);
		if (!L_10)
		{
			goto IL_00cb;
		}
	}
	{
		int32_t L_11 = BoneWeight_get_boneIndex3_m2217(__this, /*hidden argument*/&BoneWeight_get_boneIndex3_m2217_MethodInfo);
		V_4 = L_11;
		int32_t L_12 = BoneWeight_get_boneIndex3_m2217((&V_0), /*hidden argument*/&BoneWeight_get_boneIndex3_m2217_MethodInfo);
		bool L_13 = Int32_Equals_m3334((&V_4), L_12, /*hidden argument*/&Int32_Equals_m3334_MethodInfo);
		if (!L_13)
		{
			goto IL_00cb;
		}
	}
	{
		float L_14 = BoneWeight_get_weight0_m2203(__this, /*hidden argument*/&BoneWeight_get_weight0_m2203_MethodInfo);
		float L_15 = BoneWeight_get_weight1_m2205(__this, /*hidden argument*/&BoneWeight_get_weight1_m2205_MethodInfo);
		float L_16 = BoneWeight_get_weight2_m2207(__this, /*hidden argument*/&BoneWeight_get_weight2_m2207_MethodInfo);
		float L_17 = BoneWeight_get_weight3_m2209(__this, /*hidden argument*/&BoneWeight_get_weight3_m2209_MethodInfo);
		Vector4__ctor_m1511((&V_5), L_14, L_15, L_16, L_17, /*hidden argument*/&Vector4__ctor_m1511_MethodInfo);
		float L_18 = BoneWeight_get_weight0_m2203((&V_0), /*hidden argument*/&BoneWeight_get_weight0_m2203_MethodInfo);
		float L_19 = BoneWeight_get_weight1_m2205((&V_0), /*hidden argument*/&BoneWeight_get_weight1_m2205_MethodInfo);
		float L_20 = BoneWeight_get_weight2_m2207((&V_0), /*hidden argument*/&BoneWeight_get_weight2_m2207_MethodInfo);
		float L_21 = BoneWeight_get_weight3_m2209((&V_0), /*hidden argument*/&BoneWeight_get_weight3_m2209_MethodInfo);
		Vector4_t160  L_22 = {0};
		Vector4__ctor_m1511(&L_22, L_18, L_19, L_20, L_21, /*hidden argument*/&Vector4__ctor_m1511_MethodInfo);
		Vector4_t160  L_23 = L_22;
		Object_t * L_24 = Box(InitializedTypeInfo(&Vector4_t160_il2cpp_TypeInfo), &L_23);
		bool L_25 = Vector4_Equals_m2537((&V_5), L_24, /*hidden argument*/&Vector4_Equals_m2537_MethodInfo);
		G_B8_0 = ((int32_t)(L_25));
		goto IL_00cc;
	}

IL_00cb:
	{
		G_B8_0 = 0;
	}

IL_00cc:
	{
		return G_B8_0;
	}
}
// System.Boolean UnityEngine.BoneWeight::op_Equality(UnityEngine.BoneWeight,UnityEngine.BoneWeight)
extern "C" bool BoneWeight_op_Equality_m2221 (Object_t * __this /* static, unused */, BoneWeight_t451  ___lhs, BoneWeight_t451  ___rhs, MethodInfo* method)
{
	int32_t G_B6_0 = 0;
	{
		int32_t L_0 = BoneWeight_get_boneIndex0_m2211((&___lhs), /*hidden argument*/&BoneWeight_get_boneIndex0_m2211_MethodInfo);
		int32_t L_1 = BoneWeight_get_boneIndex0_m2211((&___rhs), /*hidden argument*/&BoneWeight_get_boneIndex0_m2211_MethodInfo);
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_0095;
		}
	}
	{
		int32_t L_2 = BoneWeight_get_boneIndex1_m2213((&___lhs), /*hidden argument*/&BoneWeight_get_boneIndex1_m2213_MethodInfo);
		int32_t L_3 = BoneWeight_get_boneIndex1_m2213((&___rhs), /*hidden argument*/&BoneWeight_get_boneIndex1_m2213_MethodInfo);
		if ((!(((uint32_t)L_2) == ((uint32_t)L_3))))
		{
			goto IL_0095;
		}
	}
	{
		int32_t L_4 = BoneWeight_get_boneIndex2_m2215((&___lhs), /*hidden argument*/&BoneWeight_get_boneIndex2_m2215_MethodInfo);
		int32_t L_5 = BoneWeight_get_boneIndex2_m2215((&___rhs), /*hidden argument*/&BoneWeight_get_boneIndex2_m2215_MethodInfo);
		if ((!(((uint32_t)L_4) == ((uint32_t)L_5))))
		{
			goto IL_0095;
		}
	}
	{
		int32_t L_6 = BoneWeight_get_boneIndex3_m2217((&___lhs), /*hidden argument*/&BoneWeight_get_boneIndex3_m2217_MethodInfo);
		int32_t L_7 = BoneWeight_get_boneIndex3_m2217((&___rhs), /*hidden argument*/&BoneWeight_get_boneIndex3_m2217_MethodInfo);
		if ((!(((uint32_t)L_6) == ((uint32_t)L_7))))
		{
			goto IL_0095;
		}
	}
	{
		float L_8 = BoneWeight_get_weight0_m2203((&___lhs), /*hidden argument*/&BoneWeight_get_weight0_m2203_MethodInfo);
		float L_9 = BoneWeight_get_weight1_m2205((&___lhs), /*hidden argument*/&BoneWeight_get_weight1_m2205_MethodInfo);
		float L_10 = BoneWeight_get_weight2_m2207((&___lhs), /*hidden argument*/&BoneWeight_get_weight2_m2207_MethodInfo);
		float L_11 = BoneWeight_get_weight3_m2209((&___lhs), /*hidden argument*/&BoneWeight_get_weight3_m2209_MethodInfo);
		Vector4_t160  L_12 = {0};
		Vector4__ctor_m1511(&L_12, L_8, L_9, L_10, L_11, /*hidden argument*/&Vector4__ctor_m1511_MethodInfo);
		float L_13 = BoneWeight_get_weight0_m2203((&___rhs), /*hidden argument*/&BoneWeight_get_weight0_m2203_MethodInfo);
		float L_14 = BoneWeight_get_weight1_m2205((&___rhs), /*hidden argument*/&BoneWeight_get_weight1_m2205_MethodInfo);
		float L_15 = BoneWeight_get_weight2_m2207((&___rhs), /*hidden argument*/&BoneWeight_get_weight2_m2207_MethodInfo);
		float L_16 = BoneWeight_get_weight3_m2209((&___rhs), /*hidden argument*/&BoneWeight_get_weight3_m2209_MethodInfo);
		Vector4_t160  L_17 = {0};
		Vector4__ctor_m1511(&L_17, L_13, L_14, L_15, L_16, /*hidden argument*/&Vector4__ctor_m1511_MethodInfo);
		bool L_18 = Vector4_op_Equality_m2542(NULL /*static, unused*/, L_12, L_17, /*hidden argument*/&Vector4_op_Equality_m2542_MethodInfo);
		G_B6_0 = ((int32_t)(L_18));
		goto IL_0096;
	}

IL_0095:
	{
		G_B6_0 = 0;
	}

IL_0096:
	{
		return G_B6_0;
	}
}
// System.Boolean UnityEngine.BoneWeight::op_Inequality(UnityEngine.BoneWeight,UnityEngine.BoneWeight)
extern MethodInfo BoneWeight_op_Inequality_m2222_MethodInfo;
extern "C" bool BoneWeight_op_Inequality_m2222 (Object_t * __this /* static, unused */, BoneWeight_t451  ___lhs, BoneWeight_t451  ___rhs, MethodInfo* method)
{
	{
		BoneWeight_t451  L_0 = ___lhs;
		BoneWeight_t451  L_1 = ___rhs;
		bool L_2 = BoneWeight_op_Equality_m2221(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&BoneWeight_op_Equality_m2221_MethodInfo);
		return ((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
// UnityEngine.Renderer
#include "UnityEngine_UnityEngine_Renderer.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Renderer_t14_il2cpp_TypeInfo;
// UnityEngine.Renderer
#include "UnityEngine_UnityEngine_RendererMethodDeclarations.h"



// System.Void UnityEngine.Renderer::set_enabled(System.Boolean)
extern MethodInfo Renderer_set_enabled_m33_MethodInfo;
extern "C" void Renderer_set_enabled_m33 (Renderer_t14 * __this, bool ___value, MethodInfo* method)
{
	typedef void (*Renderer_set_enabled_m33_ftn) (Renderer_t14 *, bool);
	static Renderer_set_enabled_m33_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Renderer_set_enabled_m33_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Renderer::set_enabled(System.Boolean)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Int32 UnityEngine.Renderer::get_sortingLayerID()
extern MethodInfo Renderer_get_sortingLayerID_m1432_MethodInfo;
extern "C" int32_t Renderer_get_sortingLayerID_m1432 (Renderer_t14 * __this, MethodInfo* method)
{
	typedef int32_t (*Renderer_get_sortingLayerID_m1432_ftn) (Renderer_t14 *);
	static Renderer_get_sortingLayerID_m1432_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Renderer_get_sortingLayerID_m1432_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Renderer::get_sortingLayerID()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.Renderer::get_sortingOrder()
extern MethodInfo Renderer_get_sortingOrder_m1433_MethodInfo;
extern "C" int32_t Renderer_get_sortingOrder_m1433 (Renderer_t14 * __this, MethodInfo* method)
{
	typedef int32_t (*Renderer_get_sortingOrder_m1433_ftn) (Renderer_t14 *);
	static Renderer_get_sortingOrder_m1433_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Renderer_get_sortingOrder_m1433_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Renderer::get_sortingOrder()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.Screen
#include "UnityEngine_UnityEngine_Screen.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Screen_t452_il2cpp_TypeInfo;
// UnityEngine.Screen
#include "UnityEngine_UnityEngine_ScreenMethodDeclarations.h"



// System.Int32 UnityEngine.Screen::get_width()
extern MethodInfo Screen_get_width_m1544_MethodInfo;
extern "C" int32_t Screen_get_width_m1544 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef int32_t (*Screen_get_width_m1544_ftn) ();
	static Screen_get_width_m1544_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Screen_get_width_m1544_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Screen::get_width()");
	return _il2cpp_icall_func();
}
// System.Int32 UnityEngine.Screen::get_height()
extern MethodInfo Screen_get_height_m1545_MethodInfo;
extern "C" int32_t Screen_get_height_m1545 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef int32_t (*Screen_get_height_m1545_ftn) ();
	static Screen_get_height_m1545_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Screen_get_height_m1545_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Screen::get_height()");
	return _il2cpp_icall_func();
}
// System.Single UnityEngine.Screen::get_dpi()
extern MethodInfo Screen_get_dpi_m1862_MethodInfo;
extern "C" float Screen_get_dpi_m1862 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef float (*Screen_get_dpi_m1862_ftn) ();
	static Screen_get_dpi_m1862_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Screen_get_dpi_m1862_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Screen::get_dpi()");
	return _il2cpp_icall_func();
}
// UnityEngine.Texture
#include "UnityEngine_UnityEngine_Texture.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Texture_t139_il2cpp_TypeInfo;
// UnityEngine.Texture
#include "UnityEngine_UnityEngine_TextureMethodDeclarations.h"

extern MethodInfo Texture_Internal_GetWidth_m2224_MethodInfo;
extern MethodInfo Texture_Internal_GetHeight_m2225_MethodInfo;


// System.Void UnityEngine.Texture::.ctor()
extern MethodInfo Texture__ctor_m2223_MethodInfo;
extern "C" void Texture__ctor_m2223 (Texture_t139 * __this, MethodInfo* method)
{
	{
		Object__ctor_m2699(__this, /*hidden argument*/&Object__ctor_m2699_MethodInfo);
		return;
	}
}
// System.Int32 UnityEngine.Texture::Internal_GetWidth(UnityEngine.Texture)
extern "C" int32_t Texture_Internal_GetWidth_m2224 (Object_t * __this /* static, unused */, Texture_t139 * ___mono, MethodInfo* method)
{
	typedef int32_t (*Texture_Internal_GetWidth_m2224_ftn) (Texture_t139 *);
	static Texture_Internal_GetWidth_m2224_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Texture_Internal_GetWidth_m2224_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Texture::Internal_GetWidth(UnityEngine.Texture)");
	return _il2cpp_icall_func(___mono);
}
// System.Int32 UnityEngine.Texture::Internal_GetHeight(UnityEngine.Texture)
extern "C" int32_t Texture_Internal_GetHeight_m2225 (Object_t * __this /* static, unused */, Texture_t139 * ___mono, MethodInfo* method)
{
	typedef int32_t (*Texture_Internal_GetHeight_m2225_ftn) (Texture_t139 *);
	static Texture_Internal_GetHeight_m2225_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Texture_Internal_GetHeight_m2225_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Texture::Internal_GetHeight(UnityEngine.Texture)");
	return _il2cpp_icall_func(___mono);
}
// System.Int32 UnityEngine.Texture::get_width()
extern MethodInfo Texture_get_width_m1610_MethodInfo;
extern "C" int32_t Texture_get_width_m1610 (Texture_t139 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = Texture_Internal_GetWidth_m2224(NULL /*static, unused*/, __this, /*hidden argument*/&Texture_Internal_GetWidth_m2224_MethodInfo);
		return L_0;
	}
}
// System.Int32 UnityEngine.Texture::get_height()
extern MethodInfo Texture_get_height_m1612_MethodInfo;
extern "C" int32_t Texture_get_height_m1612 (Texture_t139 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = Texture_Internal_GetHeight_m2225(NULL /*static, unused*/, __this, /*hidden argument*/&Texture_Internal_GetHeight_m2225_MethodInfo);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.TextureFormat
#include "UnityEngine_UnityEngine_TextureFormat.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
extern TypeInfo IntPtr_t_il2cpp_TypeInfo;
// System.IntPtr
#include "mscorlib_System_IntPtrMethodDeclarations.h"
extern MethodInfo Texture2D_Internal_Create_m2227_MethodInfo;


// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32)
extern "C" void Texture2D__ctor_m2226 (Texture2D_t130 * __this, int32_t ___width, int32_t ___height, MethodInfo* method)
{
	{
		Texture__ctor_m2223(__this, /*hidden argument*/&Texture__ctor_m2223_MethodInfo);
		int32_t L_0 = ___width;
		int32_t L_1 = ___height;
		IntPtr_t L_2 = ((IntPtr_t_StaticFields*)InitializedTypeInfo(&IntPtr_t_il2cpp_TypeInfo)->static_fields)->___Zero_1;
		Texture2D_Internal_Create_m2227(NULL /*static, unused*/, __this, L_0, L_1, 5, 1, 0, L_2, /*hidden argument*/&Texture2D_Internal_Create_m2227_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Texture2D::Internal_Create(UnityEngine.Texture2D,System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean,System.Boolean,System.IntPtr)
extern "C" void Texture2D_Internal_Create_m2227 (Object_t * __this /* static, unused */, Texture2D_t130 * ___mono, int32_t ___width, int32_t ___height, int32_t ___format, bool ___mipmap, bool ___linear, IntPtr_t ___nativeTex, MethodInfo* method)
{
	typedef void (*Texture2D_Internal_Create_m2227_ftn) (Texture2D_t130 *, int32_t, int32_t, int32_t, bool, bool, IntPtr_t);
	static Texture2D_Internal_Create_m2227_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Texture2D_Internal_Create_m2227_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Texture2D::Internal_Create(UnityEngine.Texture2D,System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean,System.Boolean,System.IntPtr)");
	_il2cpp_icall_func(___mono, ___width, ___height, ___format, ___mipmap, ___linear, ___nativeTex);
}
// UnityEngine.Texture2D UnityEngine.Texture2D::get_whiteTexture()
extern MethodInfo Texture2D_get_whiteTexture_m1500_MethodInfo;
extern "C" Texture2D_t130 * Texture2D_get_whiteTexture_m1500 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef Texture2D_t130 * (*Texture2D_get_whiteTexture_m1500_ftn) ();
	static Texture2D_get_whiteTexture_m1500_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Texture2D_get_whiteTexture_m1500_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Texture2D::get_whiteTexture()");
	return _il2cpp_icall_func();
}
// UnityEngine.Color UnityEngine.Texture2D::GetPixelBilinear(System.Single,System.Single)
extern MethodInfo Texture2D_GetPixelBilinear_m1613_MethodInfo;
extern "C" Color_t109  Texture2D_GetPixelBilinear_m1613 (Texture2D_t130 * __this, float ___u, float ___v, MethodInfo* method)
{
	typedef Color_t109  (*Texture2D_GetPixelBilinear_m1613_ftn) (Texture2D_t130 *, float, float);
	static Texture2D_GetPixelBilinear_m1613_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Texture2D_GetPixelBilinear_m1613_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Texture2D::GetPixelBilinear(System.Single,System.Single)");
	return _il2cpp_icall_func(__this, ___u, ___v);
}
// UnityEngine.RenderTexture
#include "UnityEngine_UnityEngine_RenderTexture.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo RenderTexture_t453_il2cpp_TypeInfo;
// UnityEngine.RenderTexture
#include "UnityEngine_UnityEngine_RenderTextureMethodDeclarations.h"

extern MethodInfo RenderTexture_Internal_GetWidth_m2228_MethodInfo;
extern MethodInfo RenderTexture_Internal_GetHeight_m2229_MethodInfo;


// System.Int32 UnityEngine.RenderTexture::Internal_GetWidth(UnityEngine.RenderTexture)
extern "C" int32_t RenderTexture_Internal_GetWidth_m2228 (Object_t * __this /* static, unused */, RenderTexture_t453 * ___mono, MethodInfo* method)
{
	typedef int32_t (*RenderTexture_Internal_GetWidth_m2228_ftn) (RenderTexture_t453 *);
	static RenderTexture_Internal_GetWidth_m2228_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RenderTexture_Internal_GetWidth_m2228_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RenderTexture::Internal_GetWidth(UnityEngine.RenderTexture)");
	return _il2cpp_icall_func(___mono);
}
// System.Int32 UnityEngine.RenderTexture::Internal_GetHeight(UnityEngine.RenderTexture)
extern "C" int32_t RenderTexture_Internal_GetHeight_m2229 (Object_t * __this /* static, unused */, RenderTexture_t453 * ___mono, MethodInfo* method)
{
	typedef int32_t (*RenderTexture_Internal_GetHeight_m2229_ftn) (RenderTexture_t453 *);
	static RenderTexture_Internal_GetHeight_m2229_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RenderTexture_Internal_GetHeight_m2229_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RenderTexture::Internal_GetHeight(UnityEngine.RenderTexture)");
	return _il2cpp_icall_func(___mono);
}
// System.Int32 UnityEngine.RenderTexture::get_width()
extern MethodInfo RenderTexture_get_width_m2230_MethodInfo;
extern "C" int32_t RenderTexture_get_width_m2230 (RenderTexture_t453 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = RenderTexture_Internal_GetWidth_m2228(NULL /*static, unused*/, __this, /*hidden argument*/&RenderTexture_Internal_GetWidth_m2228_MethodInfo);
		return L_0;
	}
}
// System.Int32 UnityEngine.RenderTexture::get_height()
extern MethodInfo RenderTexture_get_height_m2231_MethodInfo;
extern "C" int32_t RenderTexture_get_height_m2231 (RenderTexture_t453 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = RenderTexture_Internal_GetHeight_m2229(NULL /*static, unused*/, __this, /*hidden argument*/&RenderTexture_Internal_GetHeight_m2229_MethodInfo);
		return L_0;
	}
}
// UnityEngine.ReflectionProbe
#include "UnityEngine_UnityEngine_ReflectionProbe.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ReflectionProbe_t454_il2cpp_TypeInfo;
// UnityEngine.ReflectionProbe
#include "UnityEngine_UnityEngine_ReflectionProbeMethodDeclarations.h"



// UnityEngine.GUIElement
#include "UnityEngine_UnityEngine_GUIElement.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo GUIElement_t455_il2cpp_TypeInfo;
// UnityEngine.GUIElement
#include "UnityEngine_UnityEngine_GUIElementMethodDeclarations.h"



// UnityEngine.GUILayer
#include "UnityEngine_UnityEngine_GUILayer.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo GUILayer_t456_il2cpp_TypeInfo;
// UnityEngine.GUILayer
#include "UnityEngine_UnityEngine_GUILayerMethodDeclarations.h"

// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
extern MethodInfo GUILayer_INTERNAL_CALL_HitTest_m2233_MethodInfo;


// UnityEngine.GUIElement UnityEngine.GUILayer::HitTest(UnityEngine.Vector3)
extern MethodInfo GUILayer_HitTest_m2232_MethodInfo;
extern "C" GUIElement_t455 * GUILayer_HitTest_m2232 (GUILayer_t456 * __this, Vector3_t6  ___screenPosition, MethodInfo* method)
{
	{
		GUIElement_t455 * L_0 = GUILayer_INTERNAL_CALL_HitTest_m2233(NULL /*static, unused*/, __this, (&___screenPosition), /*hidden argument*/&GUILayer_INTERNAL_CALL_HitTest_m2233_MethodInfo);
		return L_0;
	}
}
// UnityEngine.GUIElement UnityEngine.GUILayer::INTERNAL_CALL_HitTest(UnityEngine.GUILayer,UnityEngine.Vector3&)
extern "C" GUIElement_t455 * GUILayer_INTERNAL_CALL_HitTest_m2233 (Object_t * __this /* static, unused */, GUILayer_t456 * ___self, Vector3_t6 * ___screenPosition, MethodInfo* method)
{
	typedef GUIElement_t455 * (*GUILayer_INTERNAL_CALL_HitTest_m2233_ftn) (GUILayer_t456 *, Vector3_t6 *);
	static GUILayer_INTERNAL_CALL_HitTest_m2233_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUILayer_INTERNAL_CALL_HitTest_m2233_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUILayer::INTERNAL_CALL_HitTest(UnityEngine.GUILayer,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(___self, ___screenPosition);
}
// UnityEngine.GradientColorKey
#include "UnityEngine_UnityEngine_GradientColorKey.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo GradientColorKey_t457_il2cpp_TypeInfo;
// UnityEngine.GradientColorKey
#include "UnityEngine_UnityEngine_GradientColorKeyMethodDeclarations.h"



// System.Void UnityEngine.GradientColorKey::.ctor(UnityEngine.Color,System.Single)
extern MethodInfo GradientColorKey__ctor_m2234_MethodInfo;
extern "C" void GradientColorKey__ctor_m2234 (GradientColorKey_t457 * __this, Color_t109  ___col, float ___time, MethodInfo* method)
{
	{
		Color_t109  L_0 = ___col;
		__this->___color_0 = L_0;
		float L_1 = ___time;
		__this->___time_1 = L_1;
		return;
	}
}
// UnityEngine.GradientAlphaKey
#include "UnityEngine_UnityEngine_GradientAlphaKey.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo GradientAlphaKey_t458_il2cpp_TypeInfo;
// UnityEngine.GradientAlphaKey
#include "UnityEngine_UnityEngine_GradientAlphaKeyMethodDeclarations.h"



// System.Void UnityEngine.GradientAlphaKey::.ctor(System.Single,System.Single)
extern MethodInfo GradientAlphaKey__ctor_m2235_MethodInfo;
extern "C" void GradientAlphaKey__ctor_m2235 (GradientAlphaKey_t458 * __this, float ___alpha, float ___time, MethodInfo* method)
{
	{
		float L_0 = ___alpha;
		__this->___alpha_0 = L_0;
		float L_1 = ___time;
		__this->___time_1 = L_1;
		return;
	}
}
// UnityEngine.Gradient
#include "UnityEngine_UnityEngine_Gradient.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Gradient_t459_il2cpp_TypeInfo;
// UnityEngine.Gradient
#include "UnityEngine_UnityEngine_GradientMethodDeclarations.h"

extern MethodInfo Gradient_Init_m2237_MethodInfo;
extern MethodInfo Gradient_Cleanup_m2238_MethodInfo;


// System.Void UnityEngine.Gradient::.ctor()
extern MethodInfo Gradient__ctor_m2236_MethodInfo;
extern "C" void Gradient__ctor_m2236 (Gradient_t459 * __this, MethodInfo* method)
{
	{
		Object__ctor_m1289(__this, /*hidden argument*/&Object__ctor_m1289_MethodInfo);
		Gradient_Init_m2237(__this, /*hidden argument*/&Gradient_Init_m2237_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Gradient::Init()
extern "C" void Gradient_Init_m2237 (Gradient_t459 * __this, MethodInfo* method)
{
	typedef void (*Gradient_Init_m2237_ftn) (Gradient_t459 *);
	static Gradient_Init_m2237_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Gradient_Init_m2237_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Gradient::Init()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Gradient::Cleanup()
extern "C" void Gradient_Cleanup_m2238 (Gradient_t459 * __this, MethodInfo* method)
{
	typedef void (*Gradient_Cleanup_m2238_ftn) (Gradient_t459 *);
	static Gradient_Cleanup_m2238_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Gradient_Cleanup_m2238_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Gradient::Cleanup()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Gradient::Finalize()
extern MethodInfo Gradient_Finalize_m2239_MethodInfo;
extern "C" void Gradient_Finalize_m2239 (Gradient_t459 * __this, MethodInfo* method)
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
		Gradient_Cleanup_m2238(__this, /*hidden argument*/&Gradient_Cleanup_m2238_MethodInfo);
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
// Conversion methods for marshalling of: UnityEngine.Gradient
void Gradient_t459_marshal(const Gradient_t459& unmarshaled, Gradient_t459_marshaled& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.___m_Ptr_0;
}
void Gradient_t459_marshal_back(const Gradient_t459_marshaled& marshaled, Gradient_t459& unmarshaled)
{
	unmarshaled.___m_Ptr_0 = marshaled.___m_Ptr_0;
}
// Conversion method for clean up from marshalling of: UnityEngine.Gradient
void Gradient_t459_marshal_cleanup(Gradient_t459_marshaled& marshaled)
{
}
// UnityEngine.GUI/ScrollViewState
#include "UnityEngine_UnityEngine_GUI_ScrollViewState.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ScrollViewState_t460_il2cpp_TypeInfo;
// UnityEngine.GUI/ScrollViewState
#include "UnityEngine_UnityEngine_GUI_ScrollViewStateMethodDeclarations.h"



// System.Void UnityEngine.GUI/ScrollViewState::.ctor()
extern MethodInfo ScrollViewState__ctor_m2240_MethodInfo;
extern "C" void ScrollViewState__ctor_m2240 (ScrollViewState_t460 * __this, MethodInfo* method)
{
	{
		Object__ctor_m1289(__this, /*hidden argument*/&Object__ctor_m1289_MethodInfo);
		return;
	}
}
// UnityEngine.GUI/WindowFunction
#include "UnityEngine_UnityEngine_GUI_WindowFunction.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo WindowFunction_t461_il2cpp_TypeInfo;
// UnityEngine.GUI/WindowFunction
#include "UnityEngine_UnityEngine_GUI_WindowFunctionMethodDeclarations.h"

// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"


// System.Void UnityEngine.GUI/WindowFunction::.ctor(System.Object,System.IntPtr)
extern MethodInfo WindowFunction__ctor_m2241_MethodInfo;
extern "C" void WindowFunction__ctor_m2241 (WindowFunction_t461 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.GUI/WindowFunction::Invoke(System.Int32)
extern MethodInfo WindowFunction_Invoke_m2242_MethodInfo;
extern "C" void WindowFunction_Invoke_m2242 (WindowFunction_t461 * __this, int32_t ___id, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		WindowFunction_Invoke_m2242((WindowFunction_t461 *)__this->___prev_9,___id, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, int32_t ___id, MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___id,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	typedef void (*FunctionPointerType) (Object_t * __this, int32_t ___id, MethodInfo* method);
	((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___id,(MethodInfo*)(__this->___method_3.___m_value_0));
}
extern "C" void pinvoke_delegate_wrapper_WindowFunction_t461(Il2CppObject* delegate, int32_t ___id)
{
	typedef void (STDCALL *native_function_ptr_type)(int32_t);
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Marshaling of parameter '___id' to native representation

	// Native function invocation
	_il2cpp_pinvoke_func(___id);

	// Marshaling cleanup of parameter '___id' native representation

}
// System.IAsyncResult UnityEngine.GUI/WindowFunction::BeginInvoke(System.Int32,System.AsyncCallback,System.Object)
extern MethodInfo WindowFunction_BeginInvoke_m2243_MethodInfo;
extern "C" Object_t * WindowFunction_BeginInvoke_m2243 (WindowFunction_t461 * __this, int32_t ___id, AsyncCallback_t171 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = Box(InitializedTypeInfo(&Int32_t17_il2cpp_TypeInfo), &___id);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.GUI/WindowFunction::EndInvoke(System.IAsyncResult)
extern MethodInfo WindowFunction_EndInvoke_m2244_MethodInfo;
extern "C" void WindowFunction_EndInvoke_m2244 (WindowFunction_t461 * __this, Object_t * ___result, MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// UnityEngine.GUI
#include "UnityEngine_UnityEngine_GUI.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo GUI_t464_il2cpp_TypeInfo;
// UnityEngine.GUI
#include "UnityEngine_UnityEngine_GUIMethodDeclarations.h"

// System.DateTime
#include "mscorlib_System_DateTime.h"
// UnityEngine.GUISkin
#include "UnityEngine_UnityEngine_GUISkin.h"
// UnityEngineInternal.GenericStack
#include "UnityEngine_UnityEngineInternal_GenericStack.h"
// UnityEngine.GUIStyle
#include "UnityEngine_UnityEngine_GUIStyle.h"
// UnityEngine.GUILayoutOption
#include "UnityEngine_UnityEngine_GUILayoutOption.h"
// UnityEngine.GUILayoutUtility/LayoutCache
#include "UnityEngine_UnityEngine_GUILayoutUtility_LayoutCache.h"
// UnityEngine.Event
#include "UnityEngine_UnityEngine_Event.h"
// UnityEngine.EventType
#include "UnityEngine_UnityEngine_EventType.h"
extern TypeInfo GUIUtility_t479_il2cpp_TypeInfo;
extern TypeInfo GenericStack_t463_il2cpp_TypeInfo;
extern TypeInfo DateTime_t465_il2cpp_TypeInfo;
extern TypeInfo GUILayoutUtility_t472_il2cpp_TypeInfo;
extern TypeInfo GUILayoutOptionU5BU5D_t473_il2cpp_TypeInfo;
extern TypeInfo GUILayoutOption_t468_il2cpp_TypeInfo;
// UnityEngine.GUIUtility
#include "UnityEngine_UnityEngine_GUIUtilityMethodDeclarations.h"
// UnityEngine.GUISkin
#include "UnityEngine_UnityEngine_GUISkinMethodDeclarations.h"
// UnityEngineInternal.GenericStack
#include "UnityEngine_UnityEngineInternal_GenericStackMethodDeclarations.h"
// System.DateTime
#include "mscorlib_System_DateTimeMethodDeclarations.h"
// UnityEngine.GUILayoutUtility
#include "UnityEngine_UnityEngine_GUILayoutUtilityMethodDeclarations.h"
// UnityEngine.Event
#include "UnityEngine_UnityEngine_EventMethodDeclarations.h"
// UnityEngine.GUILayout
#include "UnityEngine_UnityEngine_GUILayoutMethodDeclarations.h"
extern Il2CppType GUILayoutOptionU5BU5D_t473_0_0_0;
extern MethodInfo GUIUtility_CheckOnGUI_m2303_MethodInfo;
extern MethodInfo Object_op_Implicit_m42_MethodInfo;
extern MethodInfo GUIUtility_GetDefaultSkin_m2297_MethodInfo;
extern MethodInfo GUISkin_MakeCurrent_m2362_MethodInfo;
extern MethodInfo String_GetHashCode_m3335_MethodInfo;
extern MethodInfo GenericStack__ctor_m3313_MethodInfo;
extern MethodInfo DateTime_get_Now_m3336_MethodInfo;
extern MethodInfo GUI_set_nextScrollStepTime_m2246_MethodInfo;
extern MethodInfo GUILayoutUtility_SelectIDList_m2255_MethodInfo;
extern MethodInfo GUI_get_skin_m2248_MethodInfo;
extern MethodInfo Event_get_current_m2432_MethodInfo;
extern MethodInfo Event_get_type_m2428_MethodInfo;
extern MethodInfo GUILayout_Width_m2251_MethodInfo;
extern MethodInfo GUILayout_Height_m2252_MethodInfo;
extern MethodInfo GUILayoutUtility_BeginWindow_m2257_MethodInfo;
extern MethodInfo GUI_set_skin_m2247_MethodInfo;
extern MethodInfo GUILayoutUtility_Layout_m2258_MethodInfo;


// System.Void UnityEngine.GUI::.cctor()
extern MethodInfo GUI__cctor_m2245_MethodInfo;
extern "C" void GUI__cctor_m2245 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		((GUI_t464_StaticFields*)InitializedTypeInfo(&GUI_t464_il2cpp_TypeInfo)->static_fields)->___scrollStepSize_0 = (10.0f);
		((GUI_t464_StaticFields*)InitializedTypeInfo(&GUI_t464_il2cpp_TypeInfo)->static_fields)->___hotTextField_2 = (-1);
		NullCheck((String_t*) &_stringLiteral82);
		int32_t L_0 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&String_GetHashCode_m3335_MethodInfo, (String_t*) &_stringLiteral82);
		((GUI_t464_StaticFields*)InitializedTypeInfo(&GUI_t464_il2cpp_TypeInfo)->static_fields)->___boxHash_5 = L_0;
		NullCheck((String_t*) &_stringLiteral83);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&String_GetHashCode_m3335_MethodInfo, (String_t*) &_stringLiteral83);
		((GUI_t464_StaticFields*)InitializedTypeInfo(&GUI_t464_il2cpp_TypeInfo)->static_fields)->___repeatButtonHash_6 = L_1;
		NullCheck((String_t*) &_stringLiteral84);
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&String_GetHashCode_m3335_MethodInfo, (String_t*) &_stringLiteral84);
		((GUI_t464_StaticFields*)InitializedTypeInfo(&GUI_t464_il2cpp_TypeInfo)->static_fields)->___toggleHash_7 = L_2;
		NullCheck((String_t*) &_stringLiteral85);
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&String_GetHashCode_m3335_MethodInfo, (String_t*) &_stringLiteral85);
		((GUI_t464_StaticFields*)InitializedTypeInfo(&GUI_t464_il2cpp_TypeInfo)->static_fields)->___buttonGridHash_8 = L_3;
		NullCheck((String_t*) &_stringLiteral86);
		int32_t L_4 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&String_GetHashCode_m3335_MethodInfo, (String_t*) &_stringLiteral86);
		((GUI_t464_StaticFields*)InitializedTypeInfo(&GUI_t464_il2cpp_TypeInfo)->static_fields)->___sliderHash_9 = L_4;
		NullCheck((String_t*) &_stringLiteral87);
		int32_t L_5 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&String_GetHashCode_m3335_MethodInfo, (String_t*) &_stringLiteral87);
		((GUI_t464_StaticFields*)InitializedTypeInfo(&GUI_t464_il2cpp_TypeInfo)->static_fields)->___beginGroupHash_10 = L_5;
		NullCheck((String_t*) &_stringLiteral88);
		int32_t L_6 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&String_GetHashCode_m3335_MethodInfo, (String_t*) &_stringLiteral88);
		((GUI_t464_StaticFields*)InitializedTypeInfo(&GUI_t464_il2cpp_TypeInfo)->static_fields)->___scrollviewHash_11 = L_6;
		GenericStack_t463 * L_7 = (GenericStack_t463 *)il2cpp_codegen_object_new (InitializedTypeInfo(&GenericStack_t463_il2cpp_TypeInfo));
		GenericStack__ctor_m3313(L_7, /*hidden argument*/&GenericStack__ctor_m3313_MethodInfo);
		((GUI_t464_StaticFields*)InitializedTypeInfo(&GUI_t464_il2cpp_TypeInfo)->static_fields)->___s_ScrollViewStates_12 = L_7;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&DateTime_t465_il2cpp_TypeInfo));
		DateTime_t465  L_8 = DateTime_get_Now_m3336(NULL /*static, unused*/, /*hidden argument*/&DateTime_get_Now_m3336_MethodInfo);
		GUI_set_nextScrollStepTime_m2246(NULL /*static, unused*/, L_8, /*hidden argument*/&GUI_set_nextScrollStepTime_m2246_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.GUI::set_nextScrollStepTime(System.DateTime)
extern "C" void GUI_set_nextScrollStepTime_m2246 (Object_t * __this /* static, unused */, DateTime_t465  ___value, MethodInfo* method)
{
	{
		DateTime_t465  L_0 = ___value;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUI_t464_il2cpp_TypeInfo));
		((GUI_t464_StaticFields*)InitializedTypeInfo(&GUI_t464_il2cpp_TypeInfo)->static_fields)->___U3CnextScrollStepTimeU3Ek__BackingField_13 = L_0;
		return;
	}
}
// System.Void UnityEngine.GUI::set_skin(UnityEngine.GUISkin)
extern "C" void GUI_set_skin_m2247 (Object_t * __this /* static, unused */, GUISkin_t462 * ___value, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUIUtility_t479_il2cpp_TypeInfo));
		GUIUtility_CheckOnGUI_m2303(NULL /*static, unused*/, /*hidden argument*/&GUIUtility_CheckOnGUI_m2303_MethodInfo);
		GUISkin_t462 * L_0 = ___value;
		bool L_1 = Object_op_Implicit_m42(NULL /*static, unused*/, L_0, /*hidden argument*/&Object_op_Implicit_m42_MethodInfo);
		if (L_1)
		{
			goto IL_0017;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUIUtility_t479_il2cpp_TypeInfo));
		GUISkin_t462 * L_2 = GUIUtility_GetDefaultSkin_m2297(NULL /*static, unused*/, /*hidden argument*/&GUIUtility_GetDefaultSkin_m2297_MethodInfo);
		___value = L_2;
	}

IL_0017:
	{
		GUISkin_t462 * L_3 = ___value;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUI_t464_il2cpp_TypeInfo));
		((GUI_t464_StaticFields*)InitializedTypeInfo(&GUI_t464_il2cpp_TypeInfo)->static_fields)->___s_Skin_3 = L_3;
		GUISkin_t462 * L_4 = ___value;
		NullCheck(L_4);
		GUISkin_MakeCurrent_m2362(L_4, /*hidden argument*/&GUISkin_MakeCurrent_m2362_MethodInfo);
		return;
	}
}
// UnityEngine.GUISkin UnityEngine.GUI::get_skin()
extern "C" GUISkin_t462 * GUI_get_skin_m2248 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUIUtility_t479_il2cpp_TypeInfo));
		GUIUtility_CheckOnGUI_m2303(NULL /*static, unused*/, /*hidden argument*/&GUIUtility_CheckOnGUI_m2303_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUI_t464_il2cpp_TypeInfo));
		GUISkin_t462 * L_0 = ((GUI_t464_StaticFields*)InitializedTypeInfo(&GUI_t464_il2cpp_TypeInfo)->static_fields)->___s_Skin_3;
		return L_0;
	}
}
// System.Void UnityEngine.GUI::set_changed(System.Boolean)
extern MethodInfo GUI_set_changed_m2249_MethodInfo;
extern "C" void GUI_set_changed_m2249 (Object_t * __this /* static, unused */, bool ___value, MethodInfo* method)
{
	typedef void (*GUI_set_changed_m2249_ftn) (bool);
	static GUI_set_changed_m2249_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUI_set_changed_m2249_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUI::set_changed(System.Boolean)");
	_il2cpp_icall_func(___value);
}
// System.Void UnityEngine.GUI::CallWindowDelegate(UnityEngine.GUI/WindowFunction,System.Int32,UnityEngine.GUISkin,System.Int32,System.Single,System.Single,UnityEngine.GUIStyle)
extern MethodInfo GUI_CallWindowDelegate_m2250_MethodInfo;
extern TypeInfo* GUILayoutOptionU5BU5D_t473_il2cpp_TypeInfo_var;
extern "C" void GUI_CallWindowDelegate_m2250 (Object_t * __this /* static, unused */, WindowFunction_t461 * ___func, int32_t ___id, GUISkin_t462 * ____skin, int32_t ___forceRect, float ___width, float ___height, GUIStyle_t466 * ___style, MethodInfo* method)
{
	static bool GUI_CallWindowDelegate_m2250_init;
	if (!GUI_CallWindowDelegate_m2250_init)
	{
		GUILayoutOptionU5BU5D_t473_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&GUILayoutOptionU5BU5D_t473_0_0_0);
		GUI_CallWindowDelegate_m2250_init = true;
	}
	GUISkin_t462 * V_0 = {0};
	GUILayoutOptionU5BU5D_t473* V_1 = {0};
	{
		int32_t L_0 = ___id;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUILayoutUtility_t472_il2cpp_TypeInfo));
		GUILayoutUtility_SelectIDList_m2255(NULL /*static, unused*/, L_0, 1, /*hidden argument*/&GUILayoutUtility_SelectIDList_m2255_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUI_t464_il2cpp_TypeInfo));
		GUISkin_t462 * L_1 = GUI_get_skin_m2248(NULL /*static, unused*/, /*hidden argument*/&GUI_get_skin_m2248_MethodInfo);
		V_0 = L_1;
		Event_t183 * L_2 = Event_get_current_m2432(NULL /*static, unused*/, /*hidden argument*/&Event_get_current_m2432_MethodInfo);
		NullCheck(L_2);
		int32_t L_3 = Event_get_type_m2428(L_2, /*hidden argument*/&Event_get_type_m2428_MethodInfo);
		if ((!(((uint32_t)L_3) == ((uint32_t)8))))
		{
			goto IL_0056;
		}
	}
	{
		int32_t L_4 = ___forceRect;
		if (!L_4)
		{
			goto IL_004d;
		}
	}
	{
		GUILayoutOptionU5BU5D_t473* L_5 = ((GUILayoutOptionU5BU5D_t473*)SZArrayNew(GUILayoutOptionU5BU5D_t473_il2cpp_TypeInfo_var, 2));
		float L_6 = ___width;
		GUILayoutOption_t468 * L_7 = GUILayout_Width_m2251(NULL /*static, unused*/, L_6, /*hidden argument*/&GUILayout_Width_m2251_MethodInfo);
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 0);
		ArrayElementTypeCheck (L_5, L_7);
		*((GUILayoutOption_t468 **)(GUILayoutOption_t468 **)SZArrayLdElema(L_5, 0)) = (GUILayoutOption_t468 *)L_7;
		GUILayoutOptionU5BU5D_t473* L_8 = L_5;
		float L_9 = ___height;
		GUILayoutOption_t468 * L_10 = GUILayout_Height_m2252(NULL /*static, unused*/, L_9, /*hidden argument*/&GUILayout_Height_m2252_MethodInfo);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 1);
		ArrayElementTypeCheck (L_8, L_10);
		*((GUILayoutOption_t468 **)(GUILayoutOption_t468 **)SZArrayLdElema(L_8, 1)) = (GUILayoutOption_t468 *)L_10;
		V_1 = L_8;
		int32_t L_11 = ___id;
		GUIStyle_t466 * L_12 = ___style;
		GUILayoutOptionU5BU5D_t473* L_13 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUILayoutUtility_t472_il2cpp_TypeInfo));
		GUILayoutUtility_BeginWindow_m2257(NULL /*static, unused*/, L_11, L_12, L_13, /*hidden argument*/&GUILayoutUtility_BeginWindow_m2257_MethodInfo);
		goto IL_0056;
	}

IL_004d:
	{
		int32_t L_14 = ___id;
		GUIStyle_t466 * L_15 = ___style;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUILayoutUtility_t472_il2cpp_TypeInfo));
		GUILayoutUtility_BeginWindow_m2257(NULL /*static, unused*/, L_14, L_15, (GUILayoutOptionU5BU5D_t473*)(GUILayoutOptionU5BU5D_t473*)NULL, /*hidden argument*/&GUILayoutUtility_BeginWindow_m2257_MethodInfo);
	}

IL_0056:
	{
		GUISkin_t462 * L_16 = ____skin;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUI_t464_il2cpp_TypeInfo));
		GUI_set_skin_m2247(NULL /*static, unused*/, L_16, /*hidden argument*/&GUI_set_skin_m2247_MethodInfo);
		WindowFunction_t461 * L_17 = ___func;
		int32_t L_18 = ___id;
		NullCheck(L_17);
		VirtActionInvoker1< int32_t >::Invoke(&WindowFunction_Invoke_m2242_MethodInfo, L_17, L_18);
		Event_t183 * L_19 = Event_get_current_m2432(NULL /*static, unused*/, /*hidden argument*/&Event_get_current_m2432_MethodInfo);
		NullCheck(L_19);
		int32_t L_20 = Event_get_type_m2428(L_19, /*hidden argument*/&Event_get_type_m2428_MethodInfo);
		if ((!(((uint32_t)L_20) == ((uint32_t)8))))
		{
			goto IL_0078;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUILayoutUtility_t472_il2cpp_TypeInfo));
		GUILayoutUtility_Layout_m2258(NULL /*static, unused*/, /*hidden argument*/&GUILayoutUtility_Layout_m2258_MethodInfo);
	}

IL_0078:
	{
		GUISkin_t462 * L_21 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUI_t464_il2cpp_TypeInfo));
		GUI_set_skin_m2247(NULL /*static, unused*/, L_21, /*hidden argument*/&GUI_set_skin_m2247_MethodInfo);
		return;
	}
}
// UnityEngine.GUILayout
#include "UnityEngine_UnityEngine_GUILayout.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo GUILayout_t467_il2cpp_TypeInfo;

// UnityEngine.GUILayoutOption/Type
#include "UnityEngine_UnityEngine_GUILayoutOption_Type.h"
// UnityEngine.GUILayoutOption
#include "UnityEngine_UnityEngine_GUILayoutOptionMethodDeclarations.h"
extern MethodInfo GUILayoutOption__ctor_m2293_MethodInfo;


// UnityEngine.GUILayoutOption UnityEngine.GUILayout::Width(System.Single)
extern "C" GUILayoutOption_t468 * GUILayout_Width_m2251 (Object_t * __this /* static, unused */, float ___width, MethodInfo* method)
{
	{
		float L_0 = ___width;
		float L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&Single_t23_il2cpp_TypeInfo), &L_1);
		GUILayoutOption_t468 * L_3 = (GUILayoutOption_t468 *)il2cpp_codegen_object_new (InitializedTypeInfo(&GUILayoutOption_t468_il2cpp_TypeInfo));
		GUILayoutOption__ctor_m2293(L_3, 0, L_2, /*hidden argument*/&GUILayoutOption__ctor_m2293_MethodInfo);
		return L_3;
	}
}
// UnityEngine.GUILayoutOption UnityEngine.GUILayout::Height(System.Single)
extern "C" GUILayoutOption_t468 * GUILayout_Height_m2252 (Object_t * __this /* static, unused */, float ___height, MethodInfo* method)
{
	{
		float L_0 = ___height;
		float L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&Single_t23_il2cpp_TypeInfo), &L_1);
		GUILayoutOption_t468 * L_3 = (GUILayoutOption_t468 *)il2cpp_codegen_object_new (InitializedTypeInfo(&GUILayoutOption_t468_il2cpp_TypeInfo));
		GUILayoutOption__ctor_m2293(L_3, 1, L_2, /*hidden argument*/&GUILayoutOption__ctor_m2293_MethodInfo);
		return L_3;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo LayoutCache_t470_il2cpp_TypeInfo;
// UnityEngine.GUILayoutUtility/LayoutCache
#include "UnityEngine_UnityEngine_GUILayoutUtility_LayoutCacheMethodDeclarations.h"

// UnityEngine.GUILayoutGroup
#include "UnityEngine_UnityEngine_GUILayoutGroup.h"
// System.Collections.Stack
#include "mscorlib_System_Collections_Stack.h"
extern TypeInfo GUILayoutGroup_t469_il2cpp_TypeInfo;
extern TypeInfo Stack_t676_il2cpp_TypeInfo;
// UnityEngine.GUILayoutGroup
#include "UnityEngine_UnityEngine_GUILayoutGroupMethodDeclarations.h"
// System.Collections.Stack
#include "mscorlib_System_Collections_StackMethodDeclarations.h"
extern MethodInfo GUILayoutGroup__ctor_m2278_MethodInfo;
extern MethodInfo Stack_Push_m3337_MethodInfo;


// System.Void UnityEngine.GUILayoutUtility/LayoutCache::.ctor()
extern MethodInfo LayoutCache__ctor_m2253_MethodInfo;
extern "C" void LayoutCache__ctor_m2253 (LayoutCache_t470 * __this, MethodInfo* method)
{
	{
		GUILayoutGroup_t469 * L_0 = (GUILayoutGroup_t469 *)il2cpp_codegen_object_new (InitializedTypeInfo(&GUILayoutGroup_t469_il2cpp_TypeInfo));
		GUILayoutGroup__ctor_m2278(L_0, /*hidden argument*/&GUILayoutGroup__ctor_m2278_MethodInfo);
		__this->___topLevel_0 = L_0;
		GenericStack_t463 * L_1 = (GenericStack_t463 *)il2cpp_codegen_object_new (InitializedTypeInfo(&GenericStack_t463_il2cpp_TypeInfo));
		GenericStack__ctor_m3313(L_1, /*hidden argument*/&GenericStack__ctor_m3313_MethodInfo);
		__this->___layoutGroups_1 = L_1;
		GUILayoutGroup_t469 * L_2 = (GUILayoutGroup_t469 *)il2cpp_codegen_object_new (InitializedTypeInfo(&GUILayoutGroup_t469_il2cpp_TypeInfo));
		GUILayoutGroup__ctor_m2278(L_2, /*hidden argument*/&GUILayoutGroup__ctor_m2278_MethodInfo);
		__this->___windows_2 = L_2;
		Object__ctor_m1289(__this, /*hidden argument*/&Object__ctor_m1289_MethodInfo);
		GenericStack_t463 * L_3 = (__this->___layoutGroups_1);
		GUILayoutGroup_t469 * L_4 = (__this->___topLevel_0);
		NullCheck(L_3);
		VirtActionInvoker1< Object_t * >::Invoke(&Stack_Push_m3337_MethodInfo, L_3, L_4);
		return;
	}
}
// UnityEngine.GUILayoutUtility
#include "UnityEngine_UnityEngine_GUILayoutUtility.h"
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_4.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// UnityEngine.GUILayoutEntry
#include "UnityEngine_UnityEngine_GUILayoutEntry.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.GUILayoutEntry>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_0.h"
// System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>
#include "mscorlib_System_Collections_Generic_List_1_gen_19.h"
extern TypeInfo GUIStyle_t466_il2cpp_TypeInfo;
extern TypeInfo Dictionary_2_t471_il2cpp_TypeInfo;
extern TypeInfo Rect_t141_il2cpp_TypeInfo;
extern TypeInfo GUILayoutEntry_t474_il2cpp_TypeInfo;
extern TypeInfo Mathf_t270_il2cpp_TypeInfo;
extern TypeInfo Enumerator_t685_il2cpp_TypeInfo;
// UnityEngine.GUIStyle
#include "UnityEngine_UnityEngine_GUIStyleMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_4MethodDeclarations.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_RectMethodDeclarations.h"
// UnityEngine.GUILayoutEntry
#include "UnityEngine_UnityEngine_GUILayoutEntryMethodDeclarations.h"
// UnityEngine.Mathf
#include "UnityEngine_UnityEngine_MathfMethodDeclarations.h"
// System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>
#include "mscorlib_System_Collections_Generic_List_1_gen_19MethodDeclarations.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.GUILayoutEntry>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_0MethodDeclarations.h"
extern Il2CppType Dictionary_2_t471_0_0_0;
extern Il2CppType Enumerator_t685_0_0_0;
extern MethodInfo GUIStyle__ctor_m2390_MethodInfo;
extern MethodInfo GUIStyle_set_stretchWidth_m2405_MethodInfo;
extern MethodInfo Dictionary_2__ctor_m3338_MethodInfo;
extern MethodInfo Rect__ctor_m1748_MethodInfo;
extern MethodInfo Dictionary_2_TryGetValue_m3339_MethodInfo;
extern MethodInfo Dictionary_2_set_Item_m3340_MethodInfo;
extern MethodInfo Stack_Clear_m3341_MethodInfo;
extern MethodInfo GUILayoutEntry_set_style_m2269_MethodInfo;
extern MethodInfo GUILayoutGroup_ApplyOptions_m2280_MethodInfo;
extern MethodInfo GUILayoutGroup_CalcWidth_m2283_MethodInfo;
extern MethodInfo Mathf_Min_m1861_MethodInfo;
extern MethodInfo GUILayoutGroup_SetHorizontal_m2284_MethodInfo;
extern MethodInfo GUILayoutGroup_CalcHeight_m2285_MethodInfo;
extern MethodInfo GUILayoutGroup_SetVertical_m2286_MethodInfo;
extern MethodInfo GUILayoutUtility_LayoutFreeGroup_m2260_MethodInfo;
extern MethodInfo GUILayoutUtility_LayoutSingleGroup_m2261_MethodInfo;
extern MethodInfo GUILayoutGroup_ResetCursor_m2282_MethodInfo;
extern MethodInfo Rect_get_x_m1509_MethodInfo;
extern MethodInfo Mathf_Clamp_m1582_MethodInfo;
extern MethodInfo Rect_get_y_m1510_MethodInfo;
extern MethodInfo GUILayoutUtility_Internal_GetWindowRect_m2262_MethodInfo;
extern MethodInfo Rect_get_width_m1504_MethodInfo;
extern MethodInfo Rect_get_height_m1505_MethodInfo;
extern MethodInfo GUILayoutUtility_Internal_MoveWindow_m2263_MethodInfo;
extern MethodInfo GUILayoutUtility_INTERNAL_CALL_Internal_MoveWindow_m2264_MethodInfo;
extern Il2CppGenericMethod Dictionary_2__ctor_m3338_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_TryGetValue_m3339_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_set_Item_m3340_GenericMethod;
extern Il2CppGenericMethod List_1_GetEnumerator_m3342_GenericMethod;
extern Il2CppGenericMethod Enumerator_get_Current_m3343_GenericMethod;
extern Il2CppGenericMethod Enumerator_MoveNext_m3344_GenericMethod;


// System.Void UnityEngine.GUILayoutUtility::.cctor()
extern MethodInfo GUILayoutUtility__cctor_m2254_MethodInfo;
extern TypeInfo* Dictionary_2_t471_il2cpp_TypeInfo_var;
extern MethodInfo* Dictionary_2__ctor_m3338_MethodInfo_var;
extern "C" void GUILayoutUtility__cctor_m2254 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	static bool GUILayoutUtility__cctor_m2254_init;
	if (!GUILayoutUtility__cctor_m2254_init)
	{
		Dictionary_2_t471_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Dictionary_2_t471_0_0_0);
		Dictionary_2__ctor_m3338_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2__ctor_m3338_GenericMethod);
		GUILayoutUtility__cctor_m2254_init = true;
	}
	{
		Dictionary_2_t471 * L_0 = (Dictionary_2_t471 *)il2cpp_codegen_object_new (Dictionary_2_t471_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3338(L_0, /*hidden argument*/Dictionary_2__ctor_m3338_MethodInfo_var);
		((GUILayoutUtility_t472_StaticFields*)InitializedTypeInfo(&GUILayoutUtility_t472_il2cpp_TypeInfo)->static_fields)->___storedLayouts_0 = L_0;
		Dictionary_2_t471 * L_1 = (Dictionary_2_t471 *)il2cpp_codegen_object_new (Dictionary_2_t471_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3338(L_1, /*hidden argument*/Dictionary_2__ctor_m3338_MethodInfo_var);
		((GUILayoutUtility_t472_StaticFields*)InitializedTypeInfo(&GUILayoutUtility_t472_il2cpp_TypeInfo)->static_fields)->___storedWindows_1 = L_1;
		LayoutCache_t470 * L_2 = (LayoutCache_t470 *)il2cpp_codegen_object_new (InitializedTypeInfo(&LayoutCache_t470_il2cpp_TypeInfo));
		LayoutCache__ctor_m2253(L_2, /*hidden argument*/&LayoutCache__ctor_m2253_MethodInfo);
		((GUILayoutUtility_t472_StaticFields*)InitializedTypeInfo(&GUILayoutUtility_t472_il2cpp_TypeInfo)->static_fields)->___current_2 = L_2;
		Rect_t141  L_3 = {0};
		Rect__ctor_m1748(&L_3, (0.0f), (0.0f), (1.0f), (1.0f), /*hidden argument*/&Rect__ctor_m1748_MethodInfo);
		((GUILayoutUtility_t472_StaticFields*)InitializedTypeInfo(&GUILayoutUtility_t472_il2cpp_TypeInfo)->static_fields)->___kDummyRect_3 = L_3;
		return;
	}
}
// UnityEngine.GUILayoutUtility/LayoutCache UnityEngine.GUILayoutUtility::SelectIDList(System.Int32,System.Boolean)
extern MethodInfo* Dictionary_2_TryGetValue_m3339_MethodInfo_var;
extern MethodInfo* Dictionary_2_set_Item_m3340_MethodInfo_var;
extern "C" LayoutCache_t470 * GUILayoutUtility_SelectIDList_m2255 (Object_t * __this /* static, unused */, int32_t ___instanceID, bool ___isWindow, MethodInfo* method)
{
	static bool GUILayoutUtility_SelectIDList_m2255_init;
	if (!GUILayoutUtility_SelectIDList_m2255_init)
	{
		Dictionary_2_TryGetValue_m3339_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2_TryGetValue_m3339_GenericMethod);
		Dictionary_2_set_Item_m3340_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2_set_Item_m3340_GenericMethod);
		GUILayoutUtility_SelectIDList_m2255_init = true;
	}
	Dictionary_2_t471 * V_0 = {0};
	LayoutCache_t470 * V_1 = {0};
	Dictionary_2_t471 * G_B3_0 = {0};
	{
		bool L_0 = ___isWindow;
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUILayoutUtility_t472_il2cpp_TypeInfo));
		Dictionary_2_t471 * L_1 = ((GUILayoutUtility_t472_StaticFields*)InitializedTypeInfo(&GUILayoutUtility_t472_il2cpp_TypeInfo)->static_fields)->___storedWindows_1;
		G_B3_0 = L_1;
		goto IL_0015;
	}

IL_0010:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUILayoutUtility_t472_il2cpp_TypeInfo));
		Dictionary_2_t471 * L_2 = ((GUILayoutUtility_t472_StaticFields*)InitializedTypeInfo(&GUILayoutUtility_t472_il2cpp_TypeInfo)->static_fields)->___storedLayouts_0;
		G_B3_0 = L_2;
	}

IL_0015:
	{
		V_0 = G_B3_0;
		Dictionary_2_t471 * L_3 = V_0;
		int32_t L_4 = ___instanceID;
		NullCheck(L_3);
		bool L_5 = (bool)VirtFuncInvoker2< bool, int32_t, LayoutCache_t470 ** >::Invoke(Dictionary_2_TryGetValue_m3339_MethodInfo_var, L_3, L_4, (&V_1));
		if (L_5)
		{
			goto IL_0037;
		}
	}
	{
		LayoutCache_t470 * L_6 = (LayoutCache_t470 *)il2cpp_codegen_object_new (InitializedTypeInfo(&LayoutCache_t470_il2cpp_TypeInfo));
		LayoutCache__ctor_m2253(L_6, /*hidden argument*/&LayoutCache__ctor_m2253_MethodInfo);
		V_1 = L_6;
		Dictionary_2_t471 * L_7 = V_0;
		int32_t L_8 = ___instanceID;
		LayoutCache_t470 * L_9 = V_1;
		NullCheck(L_7);
		VirtActionInvoker2< int32_t, LayoutCache_t470 * >::Invoke(Dictionary_2_set_Item_m3340_MethodInfo_var, L_7, L_8, L_9);
		goto IL_0037;
	}

IL_0037:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUILayoutUtility_t472_il2cpp_TypeInfo));
		LayoutCache_t470 * L_10 = ((GUILayoutUtility_t472_StaticFields*)InitializedTypeInfo(&GUILayoutUtility_t472_il2cpp_TypeInfo)->static_fields)->___current_2;
		LayoutCache_t470 * L_11 = V_1;
		NullCheck(L_11);
		GUILayoutGroup_t469 * L_12 = (L_11->___topLevel_0);
		NullCheck(L_10);
		L_10->___topLevel_0 = L_12;
		LayoutCache_t470 * L_13 = ((GUILayoutUtility_t472_StaticFields*)InitializedTypeInfo(&GUILayoutUtility_t472_il2cpp_TypeInfo)->static_fields)->___current_2;
		LayoutCache_t470 * L_14 = V_1;
		NullCheck(L_14);
		GenericStack_t463 * L_15 = (L_14->___layoutGroups_1);
		NullCheck(L_13);
		L_13->___layoutGroups_1 = L_15;
		LayoutCache_t470 * L_16 = ((GUILayoutUtility_t472_StaticFields*)InitializedTypeInfo(&GUILayoutUtility_t472_il2cpp_TypeInfo)->static_fields)->___current_2;
		LayoutCache_t470 * L_17 = V_1;
		NullCheck(L_17);
		GUILayoutGroup_t469 * L_18 = (L_17->___windows_2);
		NullCheck(L_16);
		L_16->___windows_2 = L_18;
		LayoutCache_t470 * L_19 = V_1;
		return L_19;
	}
}
// System.Void UnityEngine.GUILayoutUtility::Begin(System.Int32)
extern MethodInfo GUILayoutUtility_Begin_m2256_MethodInfo;
extern "C" void GUILayoutUtility_Begin_m2256 (Object_t * __this /* static, unused */, int32_t ___instanceID, MethodInfo* method)
{
	LayoutCache_t470 * V_0 = {0};
	GUILayoutGroup_t469 * V_1 = {0};
	{
		int32_t L_0 = ___instanceID;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUILayoutUtility_t472_il2cpp_TypeInfo));
		LayoutCache_t470 * L_1 = GUILayoutUtility_SelectIDList_m2255(NULL /*static, unused*/, L_0, 0, /*hidden argument*/&GUILayoutUtility_SelectIDList_m2255_MethodInfo);
		V_0 = L_1;
		Event_t183 * L_2 = Event_get_current_m2432(NULL /*static, unused*/, /*hidden argument*/&Event_get_current_m2432_MethodInfo);
		NullCheck(L_2);
		int32_t L_3 = Event_get_type_m2428(L_2, /*hidden argument*/&Event_get_type_m2428_MethodInfo);
		if ((!(((uint32_t)L_3) == ((uint32_t)8))))
		{
			goto IL_0075;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUILayoutUtility_t472_il2cpp_TypeInfo));
		LayoutCache_t470 * L_4 = ((GUILayoutUtility_t472_StaticFields*)InitializedTypeInfo(&GUILayoutUtility_t472_il2cpp_TypeInfo)->static_fields)->___current_2;
		LayoutCache_t470 * L_5 = V_0;
		GUILayoutGroup_t469 * L_6 = (GUILayoutGroup_t469 *)il2cpp_codegen_object_new (InitializedTypeInfo(&GUILayoutGroup_t469_il2cpp_TypeInfo));
		GUILayoutGroup__ctor_m2278(L_6, /*hidden argument*/&GUILayoutGroup__ctor_m2278_MethodInfo);
		GUILayoutGroup_t469 * L_7 = L_6;
		V_1 = L_7;
		NullCheck(L_5);
		L_5->___topLevel_0 = L_7;
		GUILayoutGroup_t469 * L_8 = V_1;
		NullCheck(L_4);
		L_4->___topLevel_0 = L_8;
		LayoutCache_t470 * L_9 = ((GUILayoutUtility_t472_StaticFields*)InitializedTypeInfo(&GUILayoutUtility_t472_il2cpp_TypeInfo)->static_fields)->___current_2;
		NullCheck(L_9);
		GenericStack_t463 * L_10 = (L_9->___layoutGroups_1);
		NullCheck(L_10);
		VirtActionInvoker0::Invoke(&Stack_Clear_m3341_MethodInfo, L_10);
		LayoutCache_t470 * L_11 = ((GUILayoutUtility_t472_StaticFields*)InitializedTypeInfo(&GUILayoutUtility_t472_il2cpp_TypeInfo)->static_fields)->___current_2;
		NullCheck(L_11);
		GenericStack_t463 * L_12 = (L_11->___layoutGroups_1);
		LayoutCache_t470 * L_13 = ((GUILayoutUtility_t472_StaticFields*)InitializedTypeInfo(&GUILayoutUtility_t472_il2cpp_TypeInfo)->static_fields)->___current_2;
		NullCheck(L_13);
		GUILayoutGroup_t469 * L_14 = (L_13->___topLevel_0);
		NullCheck(L_12);
		VirtActionInvoker1< Object_t * >::Invoke(&Stack_Push_m3337_MethodInfo, L_12, L_14);
		LayoutCache_t470 * L_15 = ((GUILayoutUtility_t472_StaticFields*)InitializedTypeInfo(&GUILayoutUtility_t472_il2cpp_TypeInfo)->static_fields)->___current_2;
		LayoutCache_t470 * L_16 = V_0;
		GUILayoutGroup_t469 * L_17 = (GUILayoutGroup_t469 *)il2cpp_codegen_object_new (InitializedTypeInfo(&GUILayoutGroup_t469_il2cpp_TypeInfo));
		GUILayoutGroup__ctor_m2278(L_17, /*hidden argument*/&GUILayoutGroup__ctor_m2278_MethodInfo);
		GUILayoutGroup_t469 * L_18 = L_17;
		V_1 = L_18;
		NullCheck(L_16);
		L_16->___windows_2 = L_18;
		GUILayoutGroup_t469 * L_19 = V_1;
		NullCheck(L_15);
		L_15->___windows_2 = L_19;
		goto IL_00a5;
	}

IL_0075:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUILayoutUtility_t472_il2cpp_TypeInfo));
		LayoutCache_t470 * L_20 = ((GUILayoutUtility_t472_StaticFields*)InitializedTypeInfo(&GUILayoutUtility_t472_il2cpp_TypeInfo)->static_fields)->___current_2;
		LayoutCache_t470 * L_21 = V_0;
		NullCheck(L_21);
		GUILayoutGroup_t469 * L_22 = (L_21->___topLevel_0);
		NullCheck(L_20);
		L_20->___topLevel_0 = L_22;
		LayoutCache_t470 * L_23 = ((GUILayoutUtility_t472_StaticFields*)InitializedTypeInfo(&GUILayoutUtility_t472_il2cpp_TypeInfo)->static_fields)->___current_2;
		LayoutCache_t470 * L_24 = V_0;
		NullCheck(L_24);
		GenericStack_t463 * L_25 = (L_24->___layoutGroups_1);
		NullCheck(L_23);
		L_23->___layoutGroups_1 = L_25;
		LayoutCache_t470 * L_26 = ((GUILayoutUtility_t472_StaticFields*)InitializedTypeInfo(&GUILayoutUtility_t472_il2cpp_TypeInfo)->static_fields)->___current_2;
		LayoutCache_t470 * L_27 = V_0;
		NullCheck(L_27);
		GUILayoutGroup_t469 * L_28 = (L_27->___windows_2);
		NullCheck(L_26);
		L_26->___windows_2 = L_28;
	}

IL_00a5:
	{
		return;
	}
}
// System.Void UnityEngine.GUILayoutUtility::BeginWindow(System.Int32,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C" void GUILayoutUtility_BeginWindow_m2257 (Object_t * __this /* static, unused */, int32_t ___windowID, GUIStyle_t466 * ___style, GUILayoutOptionU5BU5D_t473* ___options, MethodInfo* method)
{
	LayoutCache_t470 * V_0 = {0};
	GUILayoutGroup_t469 * V_1 = {0};
	{
		int32_t L_0 = ___windowID;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUILayoutUtility_t472_il2cpp_TypeInfo));
		LayoutCache_t470 * L_1 = GUILayoutUtility_SelectIDList_m2255(NULL /*static, unused*/, L_0, 1, /*hidden argument*/&GUILayoutUtility_SelectIDList_m2255_MethodInfo);
		V_0 = L_1;
		Event_t183 * L_2 = Event_get_current_m2432(NULL /*static, unused*/, /*hidden argument*/&Event_get_current_m2432_MethodInfo);
		NullCheck(L_2);
		int32_t L_3 = Event_get_type_m2428(L_2, /*hidden argument*/&Event_get_type_m2428_MethodInfo);
		if ((!(((uint32_t)L_3) == ((uint32_t)8))))
		{
			goto IL_00ab;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUILayoutUtility_t472_il2cpp_TypeInfo));
		LayoutCache_t470 * L_4 = ((GUILayoutUtility_t472_StaticFields*)InitializedTypeInfo(&GUILayoutUtility_t472_il2cpp_TypeInfo)->static_fields)->___current_2;
		LayoutCache_t470 * L_5 = V_0;
		GUILayoutGroup_t469 * L_6 = (GUILayoutGroup_t469 *)il2cpp_codegen_object_new (InitializedTypeInfo(&GUILayoutGroup_t469_il2cpp_TypeInfo));
		GUILayoutGroup__ctor_m2278(L_6, /*hidden argument*/&GUILayoutGroup__ctor_m2278_MethodInfo);
		GUILayoutGroup_t469 * L_7 = L_6;
		V_1 = L_7;
		NullCheck(L_5);
		L_5->___topLevel_0 = L_7;
		GUILayoutGroup_t469 * L_8 = V_1;
		NullCheck(L_4);
		L_4->___topLevel_0 = L_8;
		LayoutCache_t470 * L_9 = ((GUILayoutUtility_t472_StaticFields*)InitializedTypeInfo(&GUILayoutUtility_t472_il2cpp_TypeInfo)->static_fields)->___current_2;
		NullCheck(L_9);
		GUILayoutGroup_t469 * L_10 = (L_9->___topLevel_0);
		GUIStyle_t466 * L_11 = ___style;
		NullCheck(L_10);
		GUILayoutEntry_set_style_m2269(L_10, L_11, /*hidden argument*/&GUILayoutEntry_set_style_m2269_MethodInfo);
		LayoutCache_t470 * L_12 = ((GUILayoutUtility_t472_StaticFields*)InitializedTypeInfo(&GUILayoutUtility_t472_il2cpp_TypeInfo)->static_fields)->___current_2;
		NullCheck(L_12);
		GUILayoutGroup_t469 * L_13 = (L_12->___topLevel_0);
		int32_t L_14 = ___windowID;
		NullCheck(L_13);
		L_13->___windowID_16 = L_14;
		GUILayoutOptionU5BU5D_t473* L_15 = ___options;
		if (!L_15)
		{
			goto IL_0066;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUILayoutUtility_t472_il2cpp_TypeInfo));
		LayoutCache_t470 * L_16 = ((GUILayoutUtility_t472_StaticFields*)InitializedTypeInfo(&GUILayoutUtility_t472_il2cpp_TypeInfo)->static_fields)->___current_2;
		NullCheck(L_16);
		GUILayoutGroup_t469 * L_17 = (L_16->___topLevel_0);
		GUILayoutOptionU5BU5D_t473* L_18 = ___options;
		NullCheck(L_17);
		VirtActionInvoker1< GUILayoutOptionU5BU5D_t473* >::Invoke(&GUILayoutGroup_ApplyOptions_m2280_MethodInfo, L_17, L_18);
	}

IL_0066:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUILayoutUtility_t472_il2cpp_TypeInfo));
		LayoutCache_t470 * L_19 = ((GUILayoutUtility_t472_StaticFields*)InitializedTypeInfo(&GUILayoutUtility_t472_il2cpp_TypeInfo)->static_fields)->___current_2;
		NullCheck(L_19);
		GenericStack_t463 * L_20 = (L_19->___layoutGroups_1);
		NullCheck(L_20);
		VirtActionInvoker0::Invoke(&Stack_Clear_m3341_MethodInfo, L_20);
		LayoutCache_t470 * L_21 = ((GUILayoutUtility_t472_StaticFields*)InitializedTypeInfo(&GUILayoutUtility_t472_il2cpp_TypeInfo)->static_fields)->___current_2;
		NullCheck(L_21);
		GenericStack_t463 * L_22 = (L_21->___layoutGroups_1);
		LayoutCache_t470 * L_23 = ((GUILayoutUtility_t472_StaticFields*)InitializedTypeInfo(&GUILayoutUtility_t472_il2cpp_TypeInfo)->static_fields)->___current_2;
		NullCheck(L_23);
		GUILayoutGroup_t469 * L_24 = (L_23->___topLevel_0);
		NullCheck(L_22);
		VirtActionInvoker1< Object_t * >::Invoke(&Stack_Push_m3337_MethodInfo, L_22, L_24);
		LayoutCache_t470 * L_25 = ((GUILayoutUtility_t472_StaticFields*)InitializedTypeInfo(&GUILayoutUtility_t472_il2cpp_TypeInfo)->static_fields)->___current_2;
		LayoutCache_t470 * L_26 = V_0;
		GUILayoutGroup_t469 * L_27 = (GUILayoutGroup_t469 *)il2cpp_codegen_object_new (InitializedTypeInfo(&GUILayoutGroup_t469_il2cpp_TypeInfo));
		GUILayoutGroup__ctor_m2278(L_27, /*hidden argument*/&GUILayoutGroup__ctor_m2278_MethodInfo);
		GUILayoutGroup_t469 * L_28 = L_27;
		V_1 = L_28;
		NullCheck(L_26);
		L_26->___windows_2 = L_28;
		GUILayoutGroup_t469 * L_29 = V_1;
		NullCheck(L_25);
		L_25->___windows_2 = L_29;
		goto IL_00db;
	}

IL_00ab:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUILayoutUtility_t472_il2cpp_TypeInfo));
		LayoutCache_t470 * L_30 = ((GUILayoutUtility_t472_StaticFields*)InitializedTypeInfo(&GUILayoutUtility_t472_il2cpp_TypeInfo)->static_fields)->___current_2;
		LayoutCache_t470 * L_31 = V_0;
		NullCheck(L_31);
		GUILayoutGroup_t469 * L_32 = (L_31->___topLevel_0);
		NullCheck(L_30);
		L_30->___topLevel_0 = L_32;
		LayoutCache_t470 * L_33 = ((GUILayoutUtility_t472_StaticFields*)InitializedTypeInfo(&GUILayoutUtility_t472_il2cpp_TypeInfo)->static_fields)->___current_2;
		LayoutCache_t470 * L_34 = V_0;
		NullCheck(L_34);
		GenericStack_t463 * L_35 = (L_34->___layoutGroups_1);
		NullCheck(L_33);
		L_33->___layoutGroups_1 = L_35;
		LayoutCache_t470 * L_36 = ((GUILayoutUtility_t472_StaticFields*)InitializedTypeInfo(&GUILayoutUtility_t472_il2cpp_TypeInfo)->static_fields)->___current_2;
		LayoutCache_t470 * L_37 = V_0;
		NullCheck(L_37);
		GUILayoutGroup_t469 * L_38 = (L_37->___windows_2);
		NullCheck(L_36);
		L_36->___windows_2 = L_38;
	}

IL_00db:
	{
		return;
	}
}
// System.Void UnityEngine.GUILayoutUtility::Layout()
extern "C" void GUILayoutUtility_Layout_m2258 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUILayoutUtility_t472_il2cpp_TypeInfo));
		LayoutCache_t470 * L_0 = ((GUILayoutUtility_t472_StaticFields*)InitializedTypeInfo(&GUILayoutUtility_t472_il2cpp_TypeInfo)->static_fields)->___current_2;
		NullCheck(L_0);
		GUILayoutGroup_t469 * L_1 = (L_0->___topLevel_0);
		NullCheck(L_1);
		int32_t L_2 = (L_1->___windowID_16);
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_00a3;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUILayoutUtility_t472_il2cpp_TypeInfo));
		LayoutCache_t470 * L_3 = ((GUILayoutUtility_t472_StaticFields*)InitializedTypeInfo(&GUILayoutUtility_t472_il2cpp_TypeInfo)->static_fields)->___current_2;
		NullCheck(L_3);
		GUILayoutGroup_t469 * L_4 = (L_3->___topLevel_0);
		NullCheck(L_4);
		VirtActionInvoker0::Invoke(&GUILayoutGroup_CalcWidth_m2283_MethodInfo, L_4);
		LayoutCache_t470 * L_5 = ((GUILayoutUtility_t472_StaticFields*)InitializedTypeInfo(&GUILayoutUtility_t472_il2cpp_TypeInfo)->static_fields)->___current_2;
		NullCheck(L_5);
		GUILayoutGroup_t469 * L_6 = (L_5->___topLevel_0);
		int32_t L_7 = Screen_get_width_m1544(NULL /*static, unused*/, /*hidden argument*/&Screen_get_width_m1544_MethodInfo);
		LayoutCache_t470 * L_8 = ((GUILayoutUtility_t472_StaticFields*)InitializedTypeInfo(&GUILayoutUtility_t472_il2cpp_TypeInfo)->static_fields)->___current_2;
		NullCheck(L_8);
		GUILayoutGroup_t469 * L_9 = (L_8->___topLevel_0);
		NullCheck(L_9);
		float L_10 = (L_9->___maxWidth_1);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t270_il2cpp_TypeInfo));
		float L_11 = Mathf_Min_m1861(NULL /*static, unused*/, (((float)L_7)), L_10, /*hidden argument*/&Mathf_Min_m1861_MethodInfo);
		NullCheck(L_6);
		VirtActionInvoker2< float, float >::Invoke(&GUILayoutGroup_SetHorizontal_m2284_MethodInfo, L_6, (0.0f), L_11);
		LayoutCache_t470 * L_12 = ((GUILayoutUtility_t472_StaticFields*)InitializedTypeInfo(&GUILayoutUtility_t472_il2cpp_TypeInfo)->static_fields)->___current_2;
		NullCheck(L_12);
		GUILayoutGroup_t469 * L_13 = (L_12->___topLevel_0);
		NullCheck(L_13);
		VirtActionInvoker0::Invoke(&GUILayoutGroup_CalcHeight_m2285_MethodInfo, L_13);
		LayoutCache_t470 * L_14 = ((GUILayoutUtility_t472_StaticFields*)InitializedTypeInfo(&GUILayoutUtility_t472_il2cpp_TypeInfo)->static_fields)->___current_2;
		NullCheck(L_14);
		GUILayoutGroup_t469 * L_15 = (L_14->___topLevel_0);
		int32_t L_16 = Screen_get_height_m1545(NULL /*static, unused*/, /*hidden argument*/&Screen_get_height_m1545_MethodInfo);
		LayoutCache_t470 * L_17 = ((GUILayoutUtility_t472_StaticFields*)InitializedTypeInfo(&GUILayoutUtility_t472_il2cpp_TypeInfo)->static_fields)->___current_2;
		NullCheck(L_17);
		GUILayoutGroup_t469 * L_18 = (L_17->___topLevel_0);
		NullCheck(L_18);
		float L_19 = (L_18->___maxHeight_3);
		float L_20 = Mathf_Min_m1861(NULL /*static, unused*/, (((float)L_16)), L_19, /*hidden argument*/&Mathf_Min_m1861_MethodInfo);
		NullCheck(L_15);
		VirtActionInvoker2< float, float >::Invoke(&GUILayoutGroup_SetVertical_m2286_MethodInfo, L_15, (0.0f), L_20);
		LayoutCache_t470 * L_21 = ((GUILayoutUtility_t472_StaticFields*)InitializedTypeInfo(&GUILayoutUtility_t472_il2cpp_TypeInfo)->static_fields)->___current_2;
		NullCheck(L_21);
		GUILayoutGroup_t469 * L_22 = (L_21->___windows_2);
		GUILayoutUtility_LayoutFreeGroup_m2260(NULL /*static, unused*/, L_22, /*hidden argument*/&GUILayoutUtility_LayoutFreeGroup_m2260_MethodInfo);
		goto IL_00c1;
	}

IL_00a3:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUILayoutUtility_t472_il2cpp_TypeInfo));
		LayoutCache_t470 * L_23 = ((GUILayoutUtility_t472_StaticFields*)InitializedTypeInfo(&GUILayoutUtility_t472_il2cpp_TypeInfo)->static_fields)->___current_2;
		NullCheck(L_23);
		GUILayoutGroup_t469 * L_24 = (L_23->___topLevel_0);
		GUILayoutUtility_LayoutSingleGroup_m2261(NULL /*static, unused*/, L_24, /*hidden argument*/&GUILayoutUtility_LayoutSingleGroup_m2261_MethodInfo);
		LayoutCache_t470 * L_25 = ((GUILayoutUtility_t472_StaticFields*)InitializedTypeInfo(&GUILayoutUtility_t472_il2cpp_TypeInfo)->static_fields)->___current_2;
		NullCheck(L_25);
		GUILayoutGroup_t469 * L_26 = (L_25->___windows_2);
		GUILayoutUtility_LayoutFreeGroup_m2260(NULL /*static, unused*/, L_26, /*hidden argument*/&GUILayoutUtility_LayoutFreeGroup_m2260_MethodInfo);
	}

IL_00c1:
	{
		return;
	}
}
// System.Void UnityEngine.GUILayoutUtility::LayoutFromEditorWindow()
extern MethodInfo GUILayoutUtility_LayoutFromEditorWindow_m2259_MethodInfo;
extern "C" void GUILayoutUtility_LayoutFromEditorWindow_m2259 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUILayoutUtility_t472_il2cpp_TypeInfo));
		LayoutCache_t470 * L_0 = ((GUILayoutUtility_t472_StaticFields*)InitializedTypeInfo(&GUILayoutUtility_t472_il2cpp_TypeInfo)->static_fields)->___current_2;
		NullCheck(L_0);
		GUILayoutGroup_t469 * L_1 = (L_0->___topLevel_0);
		NullCheck(L_1);
		VirtActionInvoker0::Invoke(&GUILayoutGroup_CalcWidth_m2283_MethodInfo, L_1);
		LayoutCache_t470 * L_2 = ((GUILayoutUtility_t472_StaticFields*)InitializedTypeInfo(&GUILayoutUtility_t472_il2cpp_TypeInfo)->static_fields)->___current_2;
		NullCheck(L_2);
		GUILayoutGroup_t469 * L_3 = (L_2->___topLevel_0);
		int32_t L_4 = Screen_get_width_m1544(NULL /*static, unused*/, /*hidden argument*/&Screen_get_width_m1544_MethodInfo);
		NullCheck(L_3);
		VirtActionInvoker2< float, float >::Invoke(&GUILayoutGroup_SetHorizontal_m2284_MethodInfo, L_3, (0.0f), (((float)L_4)));
		LayoutCache_t470 * L_5 = ((GUILayoutUtility_t472_StaticFields*)InitializedTypeInfo(&GUILayoutUtility_t472_il2cpp_TypeInfo)->static_fields)->___current_2;
		NullCheck(L_5);
		GUILayoutGroup_t469 * L_6 = (L_5->___topLevel_0);
		NullCheck(L_6);
		VirtActionInvoker0::Invoke(&GUILayoutGroup_CalcHeight_m2285_MethodInfo, L_6);
		LayoutCache_t470 * L_7 = ((GUILayoutUtility_t472_StaticFields*)InitializedTypeInfo(&GUILayoutUtility_t472_il2cpp_TypeInfo)->static_fields)->___current_2;
		NullCheck(L_7);
		GUILayoutGroup_t469 * L_8 = (L_7->___topLevel_0);
		int32_t L_9 = Screen_get_height_m1545(NULL /*static, unused*/, /*hidden argument*/&Screen_get_height_m1545_MethodInfo);
		NullCheck(L_8);
		VirtActionInvoker2< float, float >::Invoke(&GUILayoutGroup_SetVertical_m2286_MethodInfo, L_8, (0.0f), (((float)L_9)));
		LayoutCache_t470 * L_10 = ((GUILayoutUtility_t472_StaticFields*)InitializedTypeInfo(&GUILayoutUtility_t472_il2cpp_TypeInfo)->static_fields)->___current_2;
		NullCheck(L_10);
		GUILayoutGroup_t469 * L_11 = (L_10->___windows_2);
		GUILayoutUtility_LayoutFreeGroup_m2260(NULL /*static, unused*/, L_11, /*hidden argument*/&GUILayoutUtility_LayoutFreeGroup_m2260_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.GUILayoutUtility::LayoutFreeGroup(UnityEngine.GUILayoutGroup)
extern TypeInfo* Enumerator_t685_il2cpp_TypeInfo_var;
extern MethodInfo* List_1_GetEnumerator_m3342_MethodInfo_var;
extern MethodInfo* Enumerator_get_Current_m3343_MethodInfo_var;
extern MethodInfo* Enumerator_MoveNext_m3344_MethodInfo_var;
extern "C" void GUILayoutUtility_LayoutFreeGroup_m2260 (Object_t * __this /* static, unused */, GUILayoutGroup_t469 * ___toplevel, MethodInfo* method)
{
	static bool GUILayoutUtility_LayoutFreeGroup_m2260_init;
	if (!GUILayoutUtility_LayoutFreeGroup_m2260_init)
	{
		Enumerator_t685_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Enumerator_t685_0_0_0);
		List_1_GetEnumerator_m3342_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1_GetEnumerator_m3342_GenericMethod);
		Enumerator_get_Current_m3343_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Enumerator_get_Current_m3343_GenericMethod);
		Enumerator_MoveNext_m3344_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Enumerator_MoveNext_m3344_GenericMethod);
		GUILayoutUtility_LayoutFreeGroup_m2260_init = true;
	}
	GUILayoutGroup_t469 * V_0 = {0};
	Enumerator_t685  V_1 = {0};
	Exception_t275 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t275 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		GUILayoutGroup_t469 * L_0 = ___toplevel;
		NullCheck(L_0);
		List_1_t475 * L_1 = (L_0->___entries_10);
		NullCheck(L_1);
		Enumerator_t685  L_2 = List_1_GetEnumerator_m3342(L_1, /*hidden argument*/List_1_GetEnumerator_m3342_MethodInfo_var);
		V_1 = L_2;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0024;
		}

IL_0011:
		{
			GUILayoutEntry_t474 * L_3 = Enumerator_get_Current_m3343((&V_1), /*hidden argument*/Enumerator_get_Current_m3343_MethodInfo_var);
			V_0 = ((GUILayoutGroup_t469 *)Castclass(L_3, InitializedTypeInfo(&GUILayoutGroup_t469_il2cpp_TypeInfo)));
			GUILayoutGroup_t469 * L_4 = V_0;
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUILayoutUtility_t472_il2cpp_TypeInfo));
			GUILayoutUtility_LayoutSingleGroup_m2261(NULL /*static, unused*/, L_4, /*hidden argument*/&GUILayoutUtility_LayoutSingleGroup_m2261_MethodInfo);
		}

IL_0024:
		{
			bool L_5 = Enumerator_MoveNext_m3344((&V_1), /*hidden argument*/Enumerator_MoveNext_m3344_MethodInfo_var);
			if (L_5)
			{
				goto IL_0011;
			}
		}

IL_0030:
		{
			IL2CPP_LEAVE(0x41, FINALLY_0035);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t275 *)e.ex;
		goto FINALLY_0035;
	}

FINALLY_0035:
	{ // begin finally (depth: 1)
		Enumerator_t685  L_6 = V_1;
		Enumerator_t685  L_7 = L_6;
		Object_t * L_8 = Box(Enumerator_t685_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_8);
		InterfaceActionInvoker0::Invoke(&IDisposable_Dispose_m1379_MethodInfo, L_8);
		IL2CPP_END_FINALLY(53)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(53)
	{
		IL2CPP_JUMP_TBL(0x41, IL_0041)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t275 *)
	}

IL_0041:
	{
		GUILayoutGroup_t469 * L_9 = ___toplevel;
		NullCheck(L_9);
		GUILayoutGroup_ResetCursor_m2282(L_9, /*hidden argument*/&GUILayoutGroup_ResetCursor_m2282_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.GUILayoutUtility::LayoutSingleGroup(UnityEngine.GUILayoutGroup)
extern "C" void GUILayoutUtility_LayoutSingleGroup_m2261 (Object_t * __this /* static, unused */, GUILayoutGroup_t469 * ___i, MethodInfo* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	Rect_t141  V_4 = {0};
	{
		GUILayoutGroup_t469 * L_0 = ___i;
		NullCheck(L_0);
		bool L_1 = (L_0->___isWindow_15);
		if (L_1)
		{
			goto IL_0074;
		}
	}
	{
		GUILayoutGroup_t469 * L_2 = ___i;
		NullCheck(L_2);
		float L_3 = (L_2->___minWidth_0);
		V_0 = L_3;
		GUILayoutGroup_t469 * L_4 = ___i;
		NullCheck(L_4);
		float L_5 = (L_4->___maxWidth_1);
		V_1 = L_5;
		GUILayoutGroup_t469 * L_6 = ___i;
		NullCheck(L_6);
		VirtActionInvoker0::Invoke(&GUILayoutGroup_CalcWidth_m2283_MethodInfo, L_6);
		GUILayoutGroup_t469 * L_7 = ___i;
		GUILayoutGroup_t469 * L_8 = ___i;
		NullCheck(L_8);
		Rect_t141 * L_9 = &(L_8->___rect_4);
		float L_10 = Rect_get_x_m1509(L_9, /*hidden argument*/&Rect_get_x_m1509_MethodInfo);
		GUILayoutGroup_t469 * L_11 = ___i;
		NullCheck(L_11);
		float L_12 = (L_11->___maxWidth_1);
		float L_13 = V_0;
		float L_14 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t270_il2cpp_TypeInfo));
		float L_15 = Mathf_Clamp_m1582(NULL /*static, unused*/, L_12, L_13, L_14, /*hidden argument*/&Mathf_Clamp_m1582_MethodInfo);
		NullCheck(L_7);
		VirtActionInvoker2< float, float >::Invoke(&GUILayoutGroup_SetHorizontal_m2284_MethodInfo, L_7, L_10, L_15);
		GUILayoutGroup_t469 * L_16 = ___i;
		NullCheck(L_16);
		float L_17 = (L_16->___minHeight_2);
		V_2 = L_17;
		GUILayoutGroup_t469 * L_18 = ___i;
		NullCheck(L_18);
		float L_19 = (L_18->___maxHeight_3);
		V_3 = L_19;
		GUILayoutGroup_t469 * L_20 = ___i;
		NullCheck(L_20);
		VirtActionInvoker0::Invoke(&GUILayoutGroup_CalcHeight_m2285_MethodInfo, L_20);
		GUILayoutGroup_t469 * L_21 = ___i;
		GUILayoutGroup_t469 * L_22 = ___i;
		NullCheck(L_22);
		Rect_t141 * L_23 = &(L_22->___rect_4);
		float L_24 = Rect_get_y_m1510(L_23, /*hidden argument*/&Rect_get_y_m1510_MethodInfo);
		GUILayoutGroup_t469 * L_25 = ___i;
		NullCheck(L_25);
		float L_26 = (L_25->___maxHeight_3);
		float L_27 = V_2;
		float L_28 = V_3;
		float L_29 = Mathf_Clamp_m1582(NULL /*static, unused*/, L_26, L_27, L_28, /*hidden argument*/&Mathf_Clamp_m1582_MethodInfo);
		NullCheck(L_21);
		VirtActionInvoker2< float, float >::Invoke(&GUILayoutGroup_SetVertical_m2286_MethodInfo, L_21, L_24, L_29);
		goto IL_00e8;
	}

IL_0074:
	{
		GUILayoutGroup_t469 * L_30 = ___i;
		NullCheck(L_30);
		VirtActionInvoker0::Invoke(&GUILayoutGroup_CalcWidth_m2283_MethodInfo, L_30);
		GUILayoutGroup_t469 * L_31 = ___i;
		NullCheck(L_31);
		int32_t L_32 = (L_31->___windowID_16);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUILayoutUtility_t472_il2cpp_TypeInfo));
		Rect_t141  L_33 = GUILayoutUtility_Internal_GetWindowRect_m2262(NULL /*static, unused*/, L_32, /*hidden argument*/&GUILayoutUtility_Internal_GetWindowRect_m2262_MethodInfo);
		V_4 = L_33;
		GUILayoutGroup_t469 * L_34 = ___i;
		float L_35 = Rect_get_x_m1509((&V_4), /*hidden argument*/&Rect_get_x_m1509_MethodInfo);
		float L_36 = Rect_get_width_m1504((&V_4), /*hidden argument*/&Rect_get_width_m1504_MethodInfo);
		GUILayoutGroup_t469 * L_37 = ___i;
		NullCheck(L_37);
		float L_38 = (L_37->___minWidth_0);
		GUILayoutGroup_t469 * L_39 = ___i;
		NullCheck(L_39);
		float L_40 = (L_39->___maxWidth_1);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t270_il2cpp_TypeInfo));
		float L_41 = Mathf_Clamp_m1582(NULL /*static, unused*/, L_36, L_38, L_40, /*hidden argument*/&Mathf_Clamp_m1582_MethodInfo);
		NullCheck(L_34);
		VirtActionInvoker2< float, float >::Invoke(&GUILayoutGroup_SetHorizontal_m2284_MethodInfo, L_34, L_35, L_41);
		GUILayoutGroup_t469 * L_42 = ___i;
		NullCheck(L_42);
		VirtActionInvoker0::Invoke(&GUILayoutGroup_CalcHeight_m2285_MethodInfo, L_42);
		GUILayoutGroup_t469 * L_43 = ___i;
		float L_44 = Rect_get_y_m1510((&V_4), /*hidden argument*/&Rect_get_y_m1510_MethodInfo);
		float L_45 = Rect_get_height_m1505((&V_4), /*hidden argument*/&Rect_get_height_m1505_MethodInfo);
		GUILayoutGroup_t469 * L_46 = ___i;
		NullCheck(L_46);
		float L_47 = (L_46->___minHeight_2);
		GUILayoutGroup_t469 * L_48 = ___i;
		NullCheck(L_48);
		float L_49 = (L_48->___maxHeight_3);
		float L_50 = Mathf_Clamp_m1582(NULL /*static, unused*/, L_45, L_47, L_49, /*hidden argument*/&Mathf_Clamp_m1582_MethodInfo);
		NullCheck(L_43);
		VirtActionInvoker2< float, float >::Invoke(&GUILayoutGroup_SetVertical_m2286_MethodInfo, L_43, L_44, L_50);
		GUILayoutGroup_t469 * L_51 = ___i;
		NullCheck(L_51);
		int32_t L_52 = (L_51->___windowID_16);
		GUILayoutGroup_t469 * L_53 = ___i;
		NullCheck(L_53);
		Rect_t141  L_54 = (L_53->___rect_4);
		GUILayoutUtility_Internal_MoveWindow_m2263(NULL /*static, unused*/, L_52, L_54, /*hidden argument*/&GUILayoutUtility_Internal_MoveWindow_m2263_MethodInfo);
	}

IL_00e8:
	{
		return;
	}
}
// UnityEngine.Rect UnityEngine.GUILayoutUtility::Internal_GetWindowRect(System.Int32)
extern "C" Rect_t141  GUILayoutUtility_Internal_GetWindowRect_m2262 (Object_t * __this /* static, unused */, int32_t ___windowID, MethodInfo* method)
{
	typedef Rect_t141  (*GUILayoutUtility_Internal_GetWindowRect_m2262_ftn) (int32_t);
	static GUILayoutUtility_Internal_GetWindowRect_m2262_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUILayoutUtility_Internal_GetWindowRect_m2262_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUILayoutUtility::Internal_GetWindowRect(System.Int32)");
	return _il2cpp_icall_func(___windowID);
}
// System.Void UnityEngine.GUILayoutUtility::Internal_MoveWindow(System.Int32,UnityEngine.Rect)
extern "C" void GUILayoutUtility_Internal_MoveWindow_m2263 (Object_t * __this /* static, unused */, int32_t ___windowID, Rect_t141  ___r, MethodInfo* method)
{
	{
		int32_t L_0 = ___windowID;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUILayoutUtility_t472_il2cpp_TypeInfo));
		GUILayoutUtility_INTERNAL_CALL_Internal_MoveWindow_m2264(NULL /*static, unused*/, L_0, (&___r), /*hidden argument*/&GUILayoutUtility_INTERNAL_CALL_Internal_MoveWindow_m2264_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.GUILayoutUtility::INTERNAL_CALL_Internal_MoveWindow(System.Int32,UnityEngine.Rect&)
extern "C" void GUILayoutUtility_INTERNAL_CALL_Internal_MoveWindow_m2264 (Object_t * __this /* static, unused */, int32_t ___windowID, Rect_t141 * ___r, MethodInfo* method)
{
	typedef void (*GUILayoutUtility_INTERNAL_CALL_Internal_MoveWindow_m2264_ftn) (int32_t, Rect_t141 *);
	static GUILayoutUtility_INTERNAL_CALL_Internal_MoveWindow_m2264_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUILayoutUtility_INTERNAL_CALL_Internal_MoveWindow_m2264_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUILayoutUtility::INTERNAL_CALL_Internal_MoveWindow(System.Int32,UnityEngine.Rect&)");
	_il2cpp_icall_func(___windowID, ___r);
}
// UnityEngine.GUIStyle UnityEngine.GUILayoutUtility::get_spaceStyle()
extern MethodInfo GUILayoutUtility_get_spaceStyle_m2265_MethodInfo;
extern "C" GUIStyle_t466 * GUILayoutUtility_get_spaceStyle_m2265 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUILayoutUtility_t472_il2cpp_TypeInfo));
		GUIStyle_t466 * L_0 = ((GUILayoutUtility_t472_StaticFields*)InitializedTypeInfo(&GUILayoutUtility_t472_il2cpp_TypeInfo)->static_fields)->___s_SpaceStyle_4;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUIStyle_t466_il2cpp_TypeInfo));
		GUIStyle_t466 * L_1 = (GUIStyle_t466 *)il2cpp_codegen_object_new (InitializedTypeInfo(&GUIStyle_t466_il2cpp_TypeInfo));
		GUIStyle__ctor_m2390(L_1, /*hidden argument*/&GUIStyle__ctor_m2390_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUILayoutUtility_t472_il2cpp_TypeInfo));
		((GUILayoutUtility_t472_StaticFields*)InitializedTypeInfo(&GUILayoutUtility_t472_il2cpp_TypeInfo)->static_fields)->___s_SpaceStyle_4 = L_1;
	}

IL_0014:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUILayoutUtility_t472_il2cpp_TypeInfo));
		GUIStyle_t466 * L_2 = ((GUILayoutUtility_t472_StaticFields*)InitializedTypeInfo(&GUILayoutUtility_t472_il2cpp_TypeInfo)->static_fields)->___s_SpaceStyle_4;
		NullCheck(L_2);
		GUIStyle_set_stretchWidth_m2405(L_2, 0, /*hidden argument*/&GUIStyle_set_stretchWidth_m2405_MethodInfo);
		GUIStyle_t466 * L_3 = ((GUILayoutUtility_t472_StaticFields*)InitializedTypeInfo(&GUILayoutUtility_t472_il2cpp_TypeInfo)->static_fields)->___s_SpaceStyle_4;
		return L_3;
	}
}
#ifndef _MSC_VER
#else
#endif

// UnityEngine.RectOffset
#include "UnityEngine_UnityEngine_RectOffset.h"
extern TypeInfo ObjectU5BU5D_t269_il2cpp_TypeInfo;
// UnityEngine.UnityString
#include "UnityEngine_UnityEngine_UnityStringMethodDeclarations.h"
extern Il2CppType ObjectU5BU5D_t269_0_0_0;
extern MethodInfo GUILayoutEntry_ApplyStyleSettings_m2275_MethodInfo;
extern MethodInfo GUILayoutEntry_get_style_m2268_MethodInfo;
extern MethodInfo GUIStyle_get_margin_m2399_MethodInfo;
extern MethodInfo GUIStyle_get_none_m2411_MethodInfo;
extern MethodInfo Rect_set_x_m1590_MethodInfo;
extern MethodInfo Rect_set_width_m1589_MethodInfo;
extern MethodInfo Rect_set_y_m1588_MethodInfo;
extern MethodInfo Rect_set_height_m1586_MethodInfo;
extern MethodInfo GUIStyle_get_fixedWidth_m2402_MethodInfo;
extern MethodInfo GUIStyle_get_stretchWidth_m2404_MethodInfo;
extern MethodInfo GUIStyle_get_fixedHeight_m2403_MethodInfo;
extern MethodInfo GUIStyle_get_stretchHeight_m2406_MethodInfo;
extern MethodInfo String_Concat_m1678_MethodInfo;
extern MethodInfo GUIStyle_get_name_m2395_MethodInfo;
extern MethodInfo Object_GetType_m1381_MethodInfo;
extern MethodInfo Rect_get_xMax_m1609_MethodInfo;
extern MethodInfo Rect_get_yMax_m1611_MethodInfo;
extern MethodInfo UnityString_Format_m2626_MethodInfo;
extern MethodInfo String_Concat_m1344_MethodInfo;


// System.Void UnityEngine.GUILayoutEntry::.ctor(System.Single,System.Single,System.Single,System.Single,UnityEngine.GUIStyle)
extern MethodInfo GUILayoutEntry__ctor_m2266_MethodInfo;
extern "C" void GUILayoutEntry__ctor_m2266 (GUILayoutEntry_t474 * __this, float ____minWidth, float ____maxWidth, float ____minHeight, float ____maxHeight, GUIStyle_t466 * ____style, MethodInfo* method)
{
	{
		Rect_t141  L_0 = {0};
		Rect__ctor_m1748(&L_0, (0.0f), (0.0f), (0.0f), (0.0f), /*hidden argument*/&Rect__ctor_m1748_MethodInfo);
		__this->___rect_4 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUIStyle_t466_il2cpp_TypeInfo));
		GUIStyle_t466 * L_1 = GUIStyle_get_none_m2411(NULL /*static, unused*/, /*hidden argument*/&GUIStyle_get_none_m2411_MethodInfo);
		__this->___m_Style_7 = L_1;
		Object__ctor_m1289(__this, /*hidden argument*/&Object__ctor_m1289_MethodInfo);
		float L_2 = ____minWidth;
		__this->___minWidth_0 = L_2;
		float L_3 = ____maxWidth;
		__this->___maxWidth_1 = L_3;
		float L_4 = ____minHeight;
		__this->___minHeight_2 = L_4;
		float L_5 = ____maxHeight;
		__this->___maxHeight_3 = L_5;
		GUIStyle_t466 * L_6 = ____style;
		if (L_6)
		{
			goto IL_005b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUIStyle_t466_il2cpp_TypeInfo));
		GUIStyle_t466 * L_7 = GUIStyle_get_none_m2411(NULL /*static, unused*/, /*hidden argument*/&GUIStyle_get_none_m2411_MethodInfo);
		____style = L_7;
	}

IL_005b:
	{
		GUIStyle_t466 * L_8 = ____style;
		GUILayoutEntry_set_style_m2269(__this, L_8, /*hidden argument*/&GUILayoutEntry_set_style_m2269_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.GUILayoutEntry::.cctor()
extern MethodInfo GUILayoutEntry__cctor_m2267_MethodInfo;
extern "C" void GUILayoutEntry__cctor_m2267 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		Rect_t141  L_0 = {0};
		Rect__ctor_m1748(&L_0, (0.0f), (0.0f), (1.0f), (1.0f), /*hidden argument*/&Rect__ctor_m1748_MethodInfo);
		((GUILayoutEntry_t474_StaticFields*)InitializedTypeInfo(&GUILayoutEntry_t474_il2cpp_TypeInfo)->static_fields)->___kDummyRect_8 = L_0;
		((GUILayoutEntry_t474_StaticFields*)InitializedTypeInfo(&GUILayoutEntry_t474_il2cpp_TypeInfo)->static_fields)->___indent_9 = 0;
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUILayoutEntry::get_style()
extern "C" GUIStyle_t466 * GUILayoutEntry_get_style_m2268 (GUILayoutEntry_t474 * __this, MethodInfo* method)
{
	{
		GUIStyle_t466 * L_0 = (__this->___m_Style_7);
		return L_0;
	}
}
// System.Void UnityEngine.GUILayoutEntry::set_style(UnityEngine.GUIStyle)
extern "C" void GUILayoutEntry_set_style_m2269 (GUILayoutEntry_t474 * __this, GUIStyle_t466 * ___value, MethodInfo* method)
{
	{
		GUIStyle_t466 * L_0 = ___value;
		__this->___m_Style_7 = L_0;
		GUIStyle_t466 * L_1 = ___value;
		VirtActionInvoker1< GUIStyle_t466 * >::Invoke(&GUILayoutEntry_ApplyStyleSettings_m2275_MethodInfo, __this, L_1);
		return;
	}
}
// UnityEngine.RectOffset UnityEngine.GUILayoutEntry::get_margin()
extern MethodInfo GUILayoutEntry_get_margin_m2270_MethodInfo;
extern "C" RectOffset_t242 * GUILayoutEntry_get_margin_m2270 (GUILayoutEntry_t474 * __this, MethodInfo* method)
{
	{
		GUIStyle_t466 * L_0 = GUILayoutEntry_get_style_m2268(__this, /*hidden argument*/&GUILayoutEntry_get_style_m2268_MethodInfo);
		NullCheck(L_0);
		RectOffset_t242 * L_1 = GUIStyle_get_margin_m2399(L_0, /*hidden argument*/&GUIStyle_get_margin_m2399_MethodInfo);
		return L_1;
	}
}
// System.Void UnityEngine.GUILayoutEntry::CalcWidth()
extern MethodInfo GUILayoutEntry_CalcWidth_m2271_MethodInfo;
extern "C" void GUILayoutEntry_CalcWidth_m2271 (GUILayoutEntry_t474 * __this, MethodInfo* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.GUILayoutEntry::CalcHeight()
extern MethodInfo GUILayoutEntry_CalcHeight_m2272_MethodInfo;
extern "C" void GUILayoutEntry_CalcHeight_m2272 (GUILayoutEntry_t474 * __this, MethodInfo* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.GUILayoutEntry::SetHorizontal(System.Single,System.Single)
extern MethodInfo GUILayoutEntry_SetHorizontal_m2273_MethodInfo;
extern "C" void GUILayoutEntry_SetHorizontal_m2273 (GUILayoutEntry_t474 * __this, float ___x, float ___width, MethodInfo* method)
{
	{
		Rect_t141 * L_0 = &(__this->___rect_4);
		float L_1 = ___x;
		Rect_set_x_m1590(L_0, L_1, /*hidden argument*/&Rect_set_x_m1590_MethodInfo);
		Rect_t141 * L_2 = &(__this->___rect_4);
		float L_3 = ___width;
		Rect_set_width_m1589(L_2, L_3, /*hidden argument*/&Rect_set_width_m1589_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.GUILayoutEntry::SetVertical(System.Single,System.Single)
extern MethodInfo GUILayoutEntry_SetVertical_m2274_MethodInfo;
extern "C" void GUILayoutEntry_SetVertical_m2274 (GUILayoutEntry_t474 * __this, float ___y, float ___height, MethodInfo* method)
{
	{
		Rect_t141 * L_0 = &(__this->___rect_4);
		float L_1 = ___y;
		Rect_set_y_m1588(L_0, L_1, /*hidden argument*/&Rect_set_y_m1588_MethodInfo);
		Rect_t141 * L_2 = &(__this->___rect_4);
		float L_3 = ___height;
		Rect_set_height_m1586(L_2, L_3, /*hidden argument*/&Rect_set_height_m1586_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.GUILayoutEntry::ApplyStyleSettings(UnityEngine.GUIStyle)
extern "C" void GUILayoutEntry_ApplyStyleSettings_m2275 (GUILayoutEntry_t474 * __this, GUIStyle_t466 * ___style, MethodInfo* method)
{
	GUILayoutEntry_t474 * G_B3_0 = {0};
	GUILayoutEntry_t474 * G_B1_0 = {0};
	GUILayoutEntry_t474 * G_B2_0 = {0};
	int32_t G_B4_0 = 0;
	GUILayoutEntry_t474 * G_B4_1 = {0};
	GUILayoutEntry_t474 * G_B7_0 = {0};
	GUILayoutEntry_t474 * G_B5_0 = {0};
	GUILayoutEntry_t474 * G_B6_0 = {0};
	int32_t G_B8_0 = 0;
	GUILayoutEntry_t474 * G_B8_1 = {0};
	{
		GUIStyle_t466 * L_0 = ___style;
		NullCheck(L_0);
		float L_1 = GUIStyle_get_fixedWidth_m2402(L_0, /*hidden argument*/&GUIStyle_get_fixedWidth_m2402_MethodInfo);
		G_B1_0 = __this;
		if ((!(((float)L_1) == ((float)(0.0f)))))
		{
			G_B3_0 = __this;
			goto IL_0022;
		}
	}
	{
		GUIStyle_t466 * L_2 = ___style;
		NullCheck(L_2);
		bool L_3 = GUIStyle_get_stretchWidth_m2404(L_2, /*hidden argument*/&GUIStyle_get_stretchWidth_m2404_MethodInfo);
		G_B2_0 = G_B1_0;
		if (!L_3)
		{
			G_B3_0 = G_B1_0;
			goto IL_0022;
		}
	}
	{
		G_B4_0 = 1;
		G_B4_1 = G_B2_0;
		goto IL_0023;
	}

IL_0022:
	{
		G_B4_0 = 0;
		G_B4_1 = G_B3_0;
	}

IL_0023:
	{
		NullCheck(G_B4_1);
		G_B4_1->___stretchWidth_5 = G_B4_0;
		GUIStyle_t466 * L_4 = ___style;
		NullCheck(L_4);
		float L_5 = GUIStyle_get_fixedHeight_m2403(L_4, /*hidden argument*/&GUIStyle_get_fixedHeight_m2403_MethodInfo);
		G_B5_0 = __this;
		if ((!(((float)L_5) == ((float)(0.0f)))))
		{
			G_B7_0 = __this;
			goto IL_004a;
		}
	}
	{
		GUIStyle_t466 * L_6 = ___style;
		NullCheck(L_6);
		bool L_7 = GUIStyle_get_stretchHeight_m2406(L_6, /*hidden argument*/&GUIStyle_get_stretchHeight_m2406_MethodInfo);
		G_B6_0 = G_B5_0;
		if (!L_7)
		{
			G_B7_0 = G_B5_0;
			goto IL_004a;
		}
	}
	{
		G_B8_0 = 1;
		G_B8_1 = G_B6_0;
		goto IL_004b;
	}

IL_004a:
	{
		G_B8_0 = 0;
		G_B8_1 = G_B7_0;
	}

IL_004b:
	{
		NullCheck(G_B8_1);
		G_B8_1->___stretchHeight_6 = G_B8_0;
		GUIStyle_t466 * L_8 = ___style;
		__this->___m_Style_7 = L_8;
		return;
	}
}
// System.Void UnityEngine.GUILayoutEntry::ApplyOptions(UnityEngine.GUILayoutOption[])
extern MethodInfo GUILayoutEntry_ApplyOptions_m2276_MethodInfo;
extern "C" void GUILayoutEntry_ApplyOptions_m2276 (GUILayoutEntry_t474 * __this, GUILayoutOptionU5BU5D_t473* ___options, MethodInfo* method)
{
	GUILayoutOption_t468 * V_0 = {0};
	GUILayoutOptionU5BU5D_t473* V_1 = {0};
	int32_t V_2 = 0;
	int32_t V_3 = {0};
	float V_4 = 0.0f;
	{
		GUILayoutOptionU5BU5D_t473* L_0 = ___options;
		if (L_0)
		{
			goto IL_0007;
		}
	}
	{
		return;
	}

IL_0007:
	{
		GUILayoutOptionU5BU5D_t473* L_1 = ___options;
		V_1 = L_1;
		V_2 = 0;
		goto IL_01a0;
	}

IL_0010:
	{
		GUILayoutOptionU5BU5D_t473* L_2 = V_1;
		int32_t L_3 = V_2;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		int32_t L_4 = L_3;
		V_0 = (*(GUILayoutOption_t468 **)(GUILayoutOption_t468 **)SZArrayLdElema(L_2, L_4));
		GUILayoutOption_t468 * L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6 = (L_5->___type_0);
		V_3 = L_6;
		int32_t L_7 = V_3;
		if (L_7 == 0)
		{
			goto IL_0046;
		}
		if (L_7 == 1)
		{
			goto IL_006e;
		}
		if (L_7 == 2)
		{
			goto IL_0096;
		}
		if (L_7 == 3)
		{
			goto IL_00c9;
		}
		if (L_7 == 4)
		{
			goto IL_0103;
		}
		if (L_7 == 5)
		{
			goto IL_0136;
		}
		if (L_7 == 6)
		{
			goto IL_0170;
		}
		if (L_7 == 7)
		{
			goto IL_0186;
		}
	}
	{
		goto IL_019c;
	}

IL_0046:
	{
		GUILayoutOption_t468 * L_8 = V_0;
		NullCheck(L_8);
		Object_t * L_9 = (L_8->___value_1);
		float L_10 = ((*(float*)((float*)UnBox (L_9, InitializedTypeInfo(&Single_t23_il2cpp_TypeInfo)))));
		V_4 = L_10;
		__this->___maxWidth_1 = L_10;
		float L_11 = V_4;
		__this->___minWidth_0 = L_11;
		__this->___stretchWidth_5 = 0;
		goto IL_019c;
	}

IL_006e:
	{
		GUILayoutOption_t468 * L_12 = V_0;
		NullCheck(L_12);
		Object_t * L_13 = (L_12->___value_1);
		float L_14 = ((*(float*)((float*)UnBox (L_13, InitializedTypeInfo(&Single_t23_il2cpp_TypeInfo)))));
		V_4 = L_14;
		__this->___maxHeight_3 = L_14;
		float L_15 = V_4;
		__this->___minHeight_2 = L_15;
		__this->___stretchHeight_6 = 0;
		goto IL_019c;
	}

IL_0096:
	{
		GUILayoutOption_t468 * L_16 = V_0;
		NullCheck(L_16);
		Object_t * L_17 = (L_16->___value_1);
		__this->___minWidth_0 = ((*(float*)((float*)UnBox (L_17, InitializedTypeInfo(&Single_t23_il2cpp_TypeInfo)))));
		float L_18 = (__this->___maxWidth_1);
		float L_19 = (__this->___minWidth_0);
		if ((!(((float)L_18) < ((float)L_19))))
		{
			goto IL_00c4;
		}
	}
	{
		float L_20 = (__this->___minWidth_0);
		__this->___maxWidth_1 = L_20;
	}

IL_00c4:
	{
		goto IL_019c;
	}

IL_00c9:
	{
		GUILayoutOption_t468 * L_21 = V_0;
		NullCheck(L_21);
		Object_t * L_22 = (L_21->___value_1);
		__this->___maxWidth_1 = ((*(float*)((float*)UnBox (L_22, InitializedTypeInfo(&Single_t23_il2cpp_TypeInfo)))));
		float L_23 = (__this->___minWidth_0);
		float L_24 = (__this->___maxWidth_1);
		if ((!(((float)L_23) > ((float)L_24))))
		{
			goto IL_00f7;
		}
	}
	{
		float L_25 = (__this->___maxWidth_1);
		__this->___minWidth_0 = L_25;
	}

IL_00f7:
	{
		__this->___stretchWidth_5 = 0;
		goto IL_019c;
	}

IL_0103:
	{
		GUILayoutOption_t468 * L_26 = V_0;
		NullCheck(L_26);
		Object_t * L_27 = (L_26->___value_1);
		__this->___minHeight_2 = ((*(float*)((float*)UnBox (L_27, InitializedTypeInfo(&Single_t23_il2cpp_TypeInfo)))));
		float L_28 = (__this->___maxHeight_3);
		float L_29 = (__this->___minHeight_2);
		if ((!(((float)L_28) < ((float)L_29))))
		{
			goto IL_0131;
		}
	}
	{
		float L_30 = (__this->___minHeight_2);
		__this->___maxHeight_3 = L_30;
	}

IL_0131:
	{
		goto IL_019c;
	}

IL_0136:
	{
		GUILayoutOption_t468 * L_31 = V_0;
		NullCheck(L_31);
		Object_t * L_32 = (L_31->___value_1);
		__this->___maxHeight_3 = ((*(float*)((float*)UnBox (L_32, InitializedTypeInfo(&Single_t23_il2cpp_TypeInfo)))));
		float L_33 = (__this->___minHeight_2);
		float L_34 = (__this->___maxHeight_3);
		if ((!(((float)L_33) > ((float)L_34))))
		{
			goto IL_0164;
		}
	}
	{
		float L_35 = (__this->___maxHeight_3);
		__this->___minHeight_2 = L_35;
	}

IL_0164:
	{
		__this->___stretchHeight_6 = 0;
		goto IL_019c;
	}

IL_0170:
	{
		GUILayoutOption_t468 * L_36 = V_0;
		NullCheck(L_36);
		Object_t * L_37 = (L_36->___value_1);
		__this->___stretchWidth_5 = ((*(int32_t*)((int32_t*)UnBox (L_37, InitializedTypeInfo(&Int32_t17_il2cpp_TypeInfo)))));
		goto IL_019c;
	}

IL_0186:
	{
		GUILayoutOption_t468 * L_38 = V_0;
		NullCheck(L_38);
		Object_t * L_39 = (L_38->___value_1);
		__this->___stretchHeight_6 = ((*(int32_t*)((int32_t*)UnBox (L_39, InitializedTypeInfo(&Int32_t17_il2cpp_TypeInfo)))));
		goto IL_019c;
	}

IL_019c:
	{
		int32_t L_40 = V_2;
		V_2 = ((int32_t)((int32_t)L_40+(int32_t)1));
	}

IL_01a0:
	{
		int32_t L_41 = V_2;
		GUILayoutOptionU5BU5D_t473* L_42 = V_1;
		NullCheck(L_42);
		if ((((int32_t)L_41) < ((int32_t)(((int32_t)(((Array_t *)L_42)->max_length))))))
		{
			goto IL_0010;
		}
	}
	{
		float L_43 = (__this->___maxWidth_1);
		if ((((float)L_43) == ((float)(0.0f))))
		{
			goto IL_01d6;
		}
	}
	{
		float L_44 = (__this->___maxWidth_1);
		float L_45 = (__this->___minWidth_0);
		if ((!(((float)L_44) < ((float)L_45))))
		{
			goto IL_01d6;
		}
	}
	{
		float L_46 = (__this->___minWidth_0);
		__this->___maxWidth_1 = L_46;
	}

IL_01d6:
	{
		float L_47 = (__this->___maxHeight_3);
		if ((((float)L_47) == ((float)(0.0f))))
		{
			goto IL_0203;
		}
	}
	{
		float L_48 = (__this->___maxHeight_3);
		float L_49 = (__this->___minHeight_2);
		if ((!(((float)L_48) < ((float)L_49))))
		{
			goto IL_0203;
		}
	}
	{
		float L_50 = (__this->___minHeight_2);
		__this->___maxHeight_3 = L_50;
	}

IL_0203:
	{
		return;
	}
}
// System.String UnityEngine.GUILayoutEntry::ToString()
extern MethodInfo GUILayoutEntry_ToString_m2277_MethodInfo;
extern TypeInfo* ObjectU5BU5D_t269_il2cpp_TypeInfo_var;
extern "C" String_t* GUILayoutEntry_ToString_m2277 (GUILayoutEntry_t474 * __this, MethodInfo* method)
{
	static bool GUILayoutEntry_ToString_m2277_init;
	if (!GUILayoutEntry_ToString_m2277_init)
	{
		ObjectU5BU5D_t269_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t269_0_0_0);
		GUILayoutEntry_ToString_m2277_init = true;
	}
	String_t* V_0 = {0};
	int32_t V_1 = 0;
	int32_t G_B5_0 = 0;
	ObjectU5BU5D_t269* G_B5_1 = {0};
	ObjectU5BU5D_t269* G_B5_2 = {0};
	String_t* G_B5_3 = {0};
	int32_t G_B5_4 = 0;
	ObjectU5BU5D_t269* G_B5_5 = {0};
	ObjectU5BU5D_t269* G_B5_6 = {0};
	int32_t G_B4_0 = 0;
	ObjectU5BU5D_t269* G_B4_1 = {0};
	ObjectU5BU5D_t269* G_B4_2 = {0};
	String_t* G_B4_3 = {0};
	int32_t G_B4_4 = 0;
	ObjectU5BU5D_t269* G_B4_5 = {0};
	ObjectU5BU5D_t269* G_B4_6 = {0};
	String_t* G_B6_0 = {0};
	int32_t G_B6_1 = 0;
	ObjectU5BU5D_t269* G_B6_2 = {0};
	ObjectU5BU5D_t269* G_B6_3 = {0};
	String_t* G_B6_4 = {0};
	int32_t G_B6_5 = 0;
	ObjectU5BU5D_t269* G_B6_6 = {0};
	ObjectU5BU5D_t269* G_B6_7 = {0};
	int32_t G_B8_0 = 0;
	ObjectU5BU5D_t269* G_B8_1 = {0};
	ObjectU5BU5D_t269* G_B8_2 = {0};
	int32_t G_B7_0 = 0;
	ObjectU5BU5D_t269* G_B7_1 = {0};
	ObjectU5BU5D_t269* G_B7_2 = {0};
	String_t* G_B9_0 = {0};
	int32_t G_B9_1 = 0;
	ObjectU5BU5D_t269* G_B9_2 = {0};
	ObjectU5BU5D_t269* G_B9_3 = {0};
	int32_t G_B11_0 = 0;
	ObjectU5BU5D_t269* G_B11_1 = {0};
	ObjectU5BU5D_t269* G_B11_2 = {0};
	int32_t G_B10_0 = 0;
	ObjectU5BU5D_t269* G_B10_1 = {0};
	ObjectU5BU5D_t269* G_B10_2 = {0};
	String_t* G_B12_0 = {0};
	int32_t G_B12_1 = 0;
	ObjectU5BU5D_t269* G_B12_2 = {0};
	ObjectU5BU5D_t269* G_B12_3 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_0 = ((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2;
		V_0 = L_0;
		V_1 = 0;
		goto IL_001d;
	}

IL_000d:
	{
		String_t* L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_2 = String_Concat_m1678(NULL /*static, unused*/, L_1, (String_t*) &_stringLiteral89, /*hidden argument*/&String_Concat_m1678_MethodInfo);
		V_0 = L_2;
		int32_t L_3 = V_1;
		V_1 = ((int32_t)((int32_t)L_3+(int32_t)1));
	}

IL_001d:
	{
		int32_t L_4 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUILayoutEntry_t474_il2cpp_TypeInfo));
		int32_t L_5 = ((GUILayoutEntry_t474_StaticFields*)InitializedTypeInfo(&GUILayoutEntry_t474_il2cpp_TypeInfo)->static_fields)->___indent_9;
		if ((((int32_t)L_4) < ((int32_t)L_5)))
		{
			goto IL_000d;
		}
	}
	{
		ObjectU5BU5D_t269* L_6 = ((ObjectU5BU5D_t269*)SZArrayNew(ObjectU5BU5D_t269_il2cpp_TypeInfo_var, ((int32_t)12)));
		String_t* L_7 = V_0;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 0);
		ArrayElementTypeCheck (L_6, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 0)) = (Object_t *)L_7;
		ObjectU5BU5D_t269* L_8 = L_6;
		ObjectU5BU5D_t269* L_9 = ((ObjectU5BU5D_t269*)SZArrayNew(ObjectU5BU5D_t269_il2cpp_TypeInfo_var, 6));
		GUIStyle_t466 * L_10 = GUILayoutEntry_get_style_m2268(__this, /*hidden argument*/&GUILayoutEntry_get_style_m2268_MethodInfo);
		G_B4_0 = 0;
		G_B4_1 = L_9;
		G_B4_2 = L_9;
		G_B4_3 = (String_t*) &_stringLiteral90;
		G_B4_4 = 1;
		G_B4_5 = L_8;
		G_B4_6 = L_8;
		if (!L_10)
		{
			G_B5_0 = 0;
			G_B5_1 = L_9;
			G_B5_2 = L_9;
			G_B5_3 = (String_t*) &_stringLiteral90;
			G_B5_4 = 1;
			G_B5_5 = L_8;
			G_B5_6 = L_8;
			goto IL_005d;
		}
	}
	{
		GUIStyle_t466 * L_11 = GUILayoutEntry_get_style_m2268(__this, /*hidden argument*/&GUILayoutEntry_get_style_m2268_MethodInfo);
		NullCheck(L_11);
		String_t* L_12 = GUIStyle_get_name_m2395(L_11, /*hidden argument*/&GUIStyle_get_name_m2395_MethodInfo);
		G_B6_0 = L_12;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		G_B6_4 = G_B4_3;
		G_B6_5 = G_B4_4;
		G_B6_6 = G_B4_5;
		G_B6_7 = G_B4_6;
		goto IL_0062;
	}

IL_005d:
	{
		G_B6_0 = (String_t*) &_stringLiteral91;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
		G_B6_4 = G_B5_3;
		G_B6_5 = G_B5_4;
		G_B6_6 = G_B5_5;
		G_B6_7 = G_B5_6;
	}

IL_0062:
	{
		NullCheck(G_B6_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B6_2, G_B6_1);
		ArrayElementTypeCheck (G_B6_2, G_B6_0);
		*((Object_t **)(Object_t **)SZArrayLdElema(G_B6_2, G_B6_1)) = (Object_t *)G_B6_0;
		ObjectU5BU5D_t269* L_13 = G_B6_3;
		Type_t * L_14 = Object_GetType_m1381(__this, /*hidden argument*/&Object_GetType_m1381_MethodInfo);
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, 1);
		ArrayElementTypeCheck (L_13, L_14);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_13, 1)) = (Object_t *)L_14;
		ObjectU5BU5D_t269* L_15 = L_13;
		Rect_t141 * L_16 = &(__this->___rect_4);
		float L_17 = Rect_get_x_m1509(L_16, /*hidden argument*/&Rect_get_x_m1509_MethodInfo);
		float L_18 = L_17;
		Object_t * L_19 = Box(InitializedTypeInfo(&Single_t23_il2cpp_TypeInfo), &L_18);
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, 2);
		ArrayElementTypeCheck (L_15, L_19);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_15, 2)) = (Object_t *)L_19;
		ObjectU5BU5D_t269* L_20 = L_15;
		Rect_t141 * L_21 = &(__this->___rect_4);
		float L_22 = Rect_get_xMax_m1609(L_21, /*hidden argument*/&Rect_get_xMax_m1609_MethodInfo);
		float L_23 = L_22;
		Object_t * L_24 = Box(InitializedTypeInfo(&Single_t23_il2cpp_TypeInfo), &L_23);
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, 3);
		ArrayElementTypeCheck (L_20, L_24);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_20, 3)) = (Object_t *)L_24;
		ObjectU5BU5D_t269* L_25 = L_20;
		Rect_t141 * L_26 = &(__this->___rect_4);
		float L_27 = Rect_get_y_m1510(L_26, /*hidden argument*/&Rect_get_y_m1510_MethodInfo);
		float L_28 = L_27;
		Object_t * L_29 = Box(InitializedTypeInfo(&Single_t23_il2cpp_TypeInfo), &L_28);
		NullCheck(L_25);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_25, 4);
		ArrayElementTypeCheck (L_25, L_29);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_25, 4)) = (Object_t *)L_29;
		ObjectU5BU5D_t269* L_30 = L_25;
		Rect_t141 * L_31 = &(__this->___rect_4);
		float L_32 = Rect_get_yMax_m1611(L_31, /*hidden argument*/&Rect_get_yMax_m1611_MethodInfo);
		float L_33 = L_32;
		Object_t * L_34 = Box(InitializedTypeInfo(&Single_t23_il2cpp_TypeInfo), &L_33);
		NullCheck(L_30);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_30, 5);
		ArrayElementTypeCheck (L_30, L_34);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_30, 5)) = (Object_t *)L_34;
		String_t* L_35 = UnityString_Format_m2626(NULL /*static, unused*/, G_B6_4, L_30, /*hidden argument*/&UnityString_Format_m2626_MethodInfo);
		NullCheck(G_B6_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B6_6, G_B6_5);
		ArrayElementTypeCheck (G_B6_6, L_35);
		*((Object_t **)(Object_t **)SZArrayLdElema(G_B6_6, G_B6_5)) = (Object_t *)L_35;
		ObjectU5BU5D_t269* L_36 = G_B6_7;
		NullCheck(L_36);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_36, 2);
		ArrayElementTypeCheck (L_36, (String_t*) &_stringLiteral92);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_36, 2)) = (Object_t *)(String_t*) &_stringLiteral92;
		ObjectU5BU5D_t269* L_37 = L_36;
		float L_38 = (__this->___minWidth_0);
		float L_39 = L_38;
		Object_t * L_40 = Box(InitializedTypeInfo(&Single_t23_il2cpp_TypeInfo), &L_39);
		NullCheck(L_37);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_37, 3);
		ArrayElementTypeCheck (L_37, L_40);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_37, 3)) = (Object_t *)L_40;
		ObjectU5BU5D_t269* L_41 = L_37;
		NullCheck(L_41);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_41, 4);
		ArrayElementTypeCheck (L_41, (String_t*) &_stringLiteral93);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_41, 4)) = (Object_t *)(String_t*) &_stringLiteral93;
		ObjectU5BU5D_t269* L_42 = L_41;
		float L_43 = (__this->___maxWidth_1);
		float L_44 = L_43;
		Object_t * L_45 = Box(InitializedTypeInfo(&Single_t23_il2cpp_TypeInfo), &L_44);
		NullCheck(L_42);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_42, 5);
		ArrayElementTypeCheck (L_42, L_45);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_42, 5)) = (Object_t *)L_45;
		ObjectU5BU5D_t269* L_46 = L_42;
		int32_t L_47 = (__this->___stretchWidth_5);
		G_B7_0 = 6;
		G_B7_1 = L_46;
		G_B7_2 = L_46;
		if (!L_47)
		{
			G_B8_0 = 6;
			G_B8_1 = L_46;
			G_B8_2 = L_46;
			goto IL_0101;
		}
	}
	{
		G_B9_0 = (String_t*) &_stringLiteral94;
		G_B9_1 = G_B7_0;
		G_B9_2 = G_B7_1;
		G_B9_3 = G_B7_2;
		goto IL_0106;
	}

IL_0101:
	{
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_48 = ((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2;
		G_B9_0 = L_48;
		G_B9_1 = G_B8_0;
		G_B9_2 = G_B8_1;
		G_B9_3 = G_B8_2;
	}

IL_0106:
	{
		NullCheck(G_B9_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B9_2, G_B9_1);
		ArrayElementTypeCheck (G_B9_2, G_B9_0);
		*((Object_t **)(Object_t **)SZArrayLdElema(G_B9_2, G_B9_1)) = (Object_t *)G_B9_0;
		ObjectU5BU5D_t269* L_49 = G_B9_3;
		NullCheck(L_49);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_49, 7);
		ArrayElementTypeCheck (L_49, (String_t*) &_stringLiteral95);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_49, 7)) = (Object_t *)(String_t*) &_stringLiteral95;
		ObjectU5BU5D_t269* L_50 = L_49;
		float L_51 = (__this->___minHeight_2);
		float L_52 = L_51;
		Object_t * L_53 = Box(InitializedTypeInfo(&Single_t23_il2cpp_TypeInfo), &L_52);
		NullCheck(L_50);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_50, 8);
		ArrayElementTypeCheck (L_50, L_53);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_50, 8)) = (Object_t *)L_53;
		ObjectU5BU5D_t269* L_54 = L_50;
		NullCheck(L_54);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_54, ((int32_t)9));
		ArrayElementTypeCheck (L_54, (String_t*) &_stringLiteral93);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_54, ((int32_t)9))) = (Object_t *)(String_t*) &_stringLiteral93;
		ObjectU5BU5D_t269* L_55 = L_54;
		float L_56 = (__this->___maxHeight_3);
		float L_57 = L_56;
		Object_t * L_58 = Box(InitializedTypeInfo(&Single_t23_il2cpp_TypeInfo), &L_57);
		NullCheck(L_55);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_55, ((int32_t)10));
		ArrayElementTypeCheck (L_55, L_58);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_55, ((int32_t)10))) = (Object_t *)L_58;
		ObjectU5BU5D_t269* L_59 = L_55;
		int32_t L_60 = (__this->___stretchHeight_6);
		G_B10_0 = ((int32_t)11);
		G_B10_1 = L_59;
		G_B10_2 = L_59;
		if (!L_60)
		{
			G_B11_0 = ((int32_t)11);
			G_B11_1 = L_59;
			G_B11_2 = L_59;
			goto IL_014d;
		}
	}
	{
		G_B12_0 = (String_t*) &_stringLiteral94;
		G_B12_1 = G_B10_0;
		G_B12_2 = G_B10_1;
		G_B12_3 = G_B10_2;
		goto IL_0152;
	}

IL_014d:
	{
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_61 = ((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2;
		G_B12_0 = L_61;
		G_B12_1 = G_B11_0;
		G_B12_2 = G_B11_1;
		G_B12_3 = G_B11_2;
	}

IL_0152:
	{
		NullCheck(G_B12_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B12_2, G_B12_1);
		ArrayElementTypeCheck (G_B12_2, G_B12_0);
		*((Object_t **)(Object_t **)SZArrayLdElema(G_B12_2, G_B12_1)) = (Object_t *)G_B12_0;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_62 = String_Concat_m1344(NULL /*static, unused*/, G_B12_3, /*hidden argument*/&String_Concat_m1344_MethodInfo);
		return L_62;
	}
}
#ifndef _MSC_VER
#else
#endif

extern TypeInfo List_1_t475_il2cpp_TypeInfo;
extern TypeInfo RectOffset_t242_il2cpp_TypeInfo;
// UnityEngine.RectOffset
#include "UnityEngine_UnityEngine_RectOffsetMethodDeclarations.h"
extern Il2CppType List_1_t475_0_0_0;
extern MethodInfo List_1__ctor_m3345_MethodInfo;
extern MethodInfo RectOffset__ctor_m1885_MethodInfo;
extern MethodInfo RectOffset_get_left_m1879_MethodInfo;
extern MethodInfo RectOffset_set_left_m2381_MethodInfo;
extern MethodInfo RectOffset_get_right_m2382_MethodInfo;
extern MethodInfo RectOffset_set_right_m2383_MethodInfo;
extern MethodInfo RectOffset_get_top_m1880_MethodInfo;
extern MethodInfo RectOffset_set_top_m2384_MethodInfo;
extern MethodInfo RectOffset_get_bottom_m2385_MethodInfo;
extern MethodInfo RectOffset_set_bottom_m2386_MethodInfo;
extern MethodInfo List_1_get_Count_m3346_MethodInfo;
extern MethodInfo GUIStyle_get_padding_m2400_MethodInfo;
extern MethodInfo RectOffset_get_horizontal_m1869_MethodInfo;
extern MethodInfo Mathf_Min_m1677_MethodInfo;
extern MethodInfo Mathf_Max_m1801_MethodInfo;
extern MethodInfo List_1_get_Item_m3347_MethodInfo;
extern MethodInfo Mathf_Max_m1675_MethodInfo;
extern MethodInfo GUILayoutGroup_get_margin_m2279_MethodInfo;
extern MethodInfo Mathf_Lerp_m1604_MethodInfo;
extern MethodInfo Mathf_Round_m1752_MethodInfo;
extern MethodInfo RectOffset_get_vertical_m1871_MethodInfo;
extern MethodInfo String_Concat_m1615_MethodInfo;
extern Il2CppGenericMethod List_1__ctor_m3345_GenericMethod;
extern Il2CppGenericMethod List_1_get_Count_m3346_GenericMethod;
extern Il2CppGenericMethod List_1_get_Item_m3347_GenericMethod;


// System.Void UnityEngine.GUILayoutGroup::.ctor()
extern TypeInfo* List_1_t475_il2cpp_TypeInfo_var;
extern MethodInfo* List_1__ctor_m3345_MethodInfo_var;
extern "C" void GUILayoutGroup__ctor_m2278 (GUILayoutGroup_t469 * __this, MethodInfo* method)
{
	static bool GUILayoutGroup__ctor_m2278_init;
	if (!GUILayoutGroup__ctor_m2278_init)
	{
		List_1_t475_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&List_1_t475_0_0_0);
		List_1__ctor_m3345_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1__ctor_m3345_GenericMethod);
		GUILayoutGroup__ctor_m2278_init = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(List_1_t475_il2cpp_TypeInfo_var);
		List_1_t475 * L_0 = (List_1_t475 *)il2cpp_codegen_object_new (List_1_t475_il2cpp_TypeInfo_var);
		List_1__ctor_m3345(L_0, /*hidden argument*/List_1__ctor_m3345_MethodInfo_var);
		__this->___entries_10 = L_0;
		__this->___isVertical_11 = 1;
		__this->___sameSize_14 = 1;
		__this->___windowID_16 = (-1);
		__this->___stretchableCountX_18 = ((int32_t)100);
		__this->___stretchableCountY_19 = ((int32_t)100);
		__this->___childMinWidth_22 = (100.0f);
		__this->___childMaxWidth_23 = (100.0f);
		__this->___childMinHeight_24 = (100.0f);
		__this->___childMaxHeight_25 = (100.0f);
		RectOffset_t242 * L_1 = (RectOffset_t242 *)il2cpp_codegen_object_new (InitializedTypeInfo(&RectOffset_t242_il2cpp_TypeInfo));
		RectOffset__ctor_m1885(L_1, /*hidden argument*/&RectOffset__ctor_m1885_MethodInfo);
		__this->___m_Margin_26 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUIStyle_t466_il2cpp_TypeInfo));
		GUIStyle_t466 * L_2 = GUIStyle_get_none_m2411(NULL /*static, unused*/, /*hidden argument*/&GUIStyle_get_none_m2411_MethodInfo);
		GUILayoutEntry__ctor_m2266(__this, (0.0f), (0.0f), (0.0f), (0.0f), L_2, /*hidden argument*/&GUILayoutEntry__ctor_m2266_MethodInfo);
		return;
	}
}
// UnityEngine.RectOffset UnityEngine.GUILayoutGroup::get_margin()
extern "C" RectOffset_t242 * GUILayoutGroup_get_margin_m2279 (GUILayoutGroup_t469 * __this, MethodInfo* method)
{
	{
		RectOffset_t242 * L_0 = (__this->___m_Margin_26);
		return L_0;
	}
}
// System.Void UnityEngine.GUILayoutGroup::ApplyOptions(UnityEngine.GUILayoutOption[])
extern "C" void GUILayoutGroup_ApplyOptions_m2280 (GUILayoutGroup_t469 * __this, GUILayoutOptionU5BU5D_t473* ___options, MethodInfo* method)
{
	GUILayoutOption_t468 * V_0 = {0};
	GUILayoutOptionU5BU5D_t473* V_1 = {0};
	int32_t V_2 = 0;
	int32_t V_3 = {0};
	{
		GUILayoutOptionU5BU5D_t473* L_0 = ___options;
		if (L_0)
		{
			goto IL_0007;
		}
	}
	{
		return;
	}

IL_0007:
	{
		GUILayoutOptionU5BU5D_t473* L_1 = ___options;
		GUILayoutEntry_ApplyOptions_m2276(__this, L_1, /*hidden argument*/&GUILayoutEntry_ApplyOptions_m2276_MethodInfo);
		GUILayoutOptionU5BU5D_t473* L_2 = ___options;
		V_1 = L_2;
		V_2 = 0;
		goto IL_0098;
	}

IL_0017:
	{
		GUILayoutOptionU5BU5D_t473* L_3 = V_1;
		int32_t L_4 = V_2;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = L_4;
		V_0 = (*(GUILayoutOption_t468 **)(GUILayoutOption_t468 **)SZArrayLdElema(L_3, L_5));
		GUILayoutOption_t468 * L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7 = (L_6->___type_0);
		V_3 = L_7;
		int32_t L_8 = V_3;
		if (L_8 == 0)
		{
			goto IL_0065;
		}
		if (L_8 == 1)
		{
			goto IL_0071;
		}
		if (L_8 == 2)
		{
			goto IL_0065;
		}
		if (L_8 == 3)
		{
			goto IL_0065;
		}
		if (L_8 == 4)
		{
			goto IL_0071;
		}
		if (L_8 == 5)
		{
			goto IL_0071;
		}
		if (L_8 == 6)
		{
			goto IL_0094;
		}
		if (L_8 == 7)
		{
			goto IL_0094;
		}
		if (L_8 == 8)
		{
			goto IL_0094;
		}
		if (L_8 == 9)
		{
			goto IL_0094;
		}
		if (L_8 == 10)
		{
			goto IL_0094;
		}
		if (L_8 == 11)
		{
			goto IL_0094;
		}
		if (L_8 == 12)
		{
			goto IL_0094;
		}
		if (L_8 == 13)
		{
			goto IL_007d;
		}
	}
	{
		goto IL_0094;
	}

IL_0065:
	{
		__this->___userSpecifiedHeight_21 = 1;
		goto IL_0094;
	}

IL_0071:
	{
		__this->___userSpecifiedWidth_20 = 1;
		goto IL_0094;
	}

IL_007d:
	{
		GUILayoutOption_t468 * L_9 = V_0;
		NullCheck(L_9);
		Object_t * L_10 = (L_9->___value_1);
		__this->___spacing_13 = (((float)((*(int32_t*)((int32_t*)UnBox (L_10, InitializedTypeInfo(&Int32_t17_il2cpp_TypeInfo)))))));
		goto IL_0094;
	}

IL_0094:
	{
		int32_t L_11 = V_2;
		V_2 = ((int32_t)((int32_t)L_11+(int32_t)1));
	}

IL_0098:
	{
		int32_t L_12 = V_2;
		GUILayoutOptionU5BU5D_t473* L_13 = V_1;
		NullCheck(L_13);
		if ((((int32_t)L_12) < ((int32_t)(((int32_t)(((Array_t *)L_13)->max_length))))))
		{
			goto IL_0017;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.GUILayoutGroup::ApplyStyleSettings(UnityEngine.GUIStyle)
extern MethodInfo GUILayoutGroup_ApplyStyleSettings_m2281_MethodInfo;
extern "C" void GUILayoutGroup_ApplyStyleSettings_m2281 (GUILayoutGroup_t469 * __this, GUIStyle_t466 * ___style, MethodInfo* method)
{
	RectOffset_t242 * V_0 = {0};
	{
		GUIStyle_t466 * L_0 = ___style;
		GUILayoutEntry_ApplyStyleSettings_m2275(__this, L_0, /*hidden argument*/&GUILayoutEntry_ApplyStyleSettings_m2275_MethodInfo);
		GUIStyle_t466 * L_1 = ___style;
		NullCheck(L_1);
		RectOffset_t242 * L_2 = GUIStyle_get_margin_m2399(L_1, /*hidden argument*/&GUIStyle_get_margin_m2399_MethodInfo);
		V_0 = L_2;
		RectOffset_t242 * L_3 = (__this->___m_Margin_26);
		RectOffset_t242 * L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5 = RectOffset_get_left_m1879(L_4, /*hidden argument*/&RectOffset_get_left_m1879_MethodInfo);
		NullCheck(L_3);
		RectOffset_set_left_m2381(L_3, L_5, /*hidden argument*/&RectOffset_set_left_m2381_MethodInfo);
		RectOffset_t242 * L_6 = (__this->___m_Margin_26);
		RectOffset_t242 * L_7 = V_0;
		NullCheck(L_7);
		int32_t L_8 = RectOffset_get_right_m2382(L_7, /*hidden argument*/&RectOffset_get_right_m2382_MethodInfo);
		NullCheck(L_6);
		RectOffset_set_right_m2383(L_6, L_8, /*hidden argument*/&RectOffset_set_right_m2383_MethodInfo);
		RectOffset_t242 * L_9 = (__this->___m_Margin_26);
		RectOffset_t242 * L_10 = V_0;
		NullCheck(L_10);
		int32_t L_11 = RectOffset_get_top_m1880(L_10, /*hidden argument*/&RectOffset_get_top_m1880_MethodInfo);
		NullCheck(L_9);
		RectOffset_set_top_m2384(L_9, L_11, /*hidden argument*/&RectOffset_set_top_m2384_MethodInfo);
		RectOffset_t242 * L_12 = (__this->___m_Margin_26);
		RectOffset_t242 * L_13 = V_0;
		NullCheck(L_13);
		int32_t L_14 = RectOffset_get_bottom_m2385(L_13, /*hidden argument*/&RectOffset_get_bottom_m2385_MethodInfo);
		NullCheck(L_12);
		RectOffset_set_bottom_m2386(L_12, L_14, /*hidden argument*/&RectOffset_set_bottom_m2386_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.GUILayoutGroup::ResetCursor()
extern "C" void GUILayoutGroup_ResetCursor_m2282 (GUILayoutGroup_t469 * __this, MethodInfo* method)
{
	{
		__this->___cursor_17 = 0;
		return;
	}
}
// System.Void UnityEngine.GUILayoutGroup::CalcWidth()
extern TypeInfo* Enumerator_t685_il2cpp_TypeInfo_var;
extern MethodInfo* List_1_get_Count_m3346_MethodInfo_var;
extern MethodInfo* List_1_GetEnumerator_m3342_MethodInfo_var;
extern MethodInfo* Enumerator_get_Current_m3343_MethodInfo_var;
extern MethodInfo* Enumerator_MoveNext_m3344_MethodInfo_var;
extern MethodInfo* List_1_get_Item_m3347_MethodInfo_var;
extern "C" void GUILayoutGroup_CalcWidth_m2283 (GUILayoutGroup_t469 * __this, MethodInfo* method)
{
	static bool GUILayoutGroup_CalcWidth_m2283_init;
	if (!GUILayoutGroup_CalcWidth_m2283_init)
	{
		Enumerator_t685_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Enumerator_t685_0_0_0);
		List_1_get_Count_m3346_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1_get_Count_m3346_GenericMethod);
		List_1_GetEnumerator_m3342_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1_GetEnumerator_m3342_GenericMethod);
		Enumerator_get_Current_m3343_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Enumerator_get_Current_m3343_GenericMethod);
		Enumerator_MoveNext_m3344_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Enumerator_MoveNext_m3344_GenericMethod);
		List_1_get_Item_m3347_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1_get_Item_m3347_GenericMethod);
		GUILayoutGroup_CalcWidth_m2283_init = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	GUILayoutEntry_t474 * V_3 = {0};
	Enumerator_t685  V_4 = {0};
	RectOffset_t242 * V_5 = {0};
	int32_t V_6 = 0;
	GUILayoutEntry_t474 * V_7 = {0};
	Enumerator_t685  V_8 = {0};
	RectOffset_t242 * V_9 = {0};
	int32_t V_10 = 0;
	float V_11 = 0.0f;
	float V_12 = 0.0f;
	float V_13 = 0.0f;
	Exception_t275 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t275 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	int32_t G_B22_0 = 0;
	int32_t G_B39_0 = 0;
	int32_t G_B39_1 = 0;
	GUILayoutGroup_t469 * G_B39_2 = {0};
	int32_t G_B38_0 = 0;
	int32_t G_B38_1 = 0;
	GUILayoutGroup_t469 * G_B38_2 = {0};
	int32_t G_B40_0 = 0;
	int32_t G_B40_1 = 0;
	int32_t G_B40_2 = 0;
	GUILayoutGroup_t469 * G_B40_3 = {0};
	{
		List_1_t475 * L_0 = (__this->___entries_10);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(List_1_get_Count_m3346_MethodInfo_var, L_0);
		if (L_1)
		{
			goto IL_0033;
		}
	}
	{
		GUIStyle_t466 * L_2 = GUILayoutEntry_get_style_m2268(__this, /*hidden argument*/&GUILayoutEntry_get_style_m2268_MethodInfo);
		NullCheck(L_2);
		RectOffset_t242 * L_3 = GUIStyle_get_padding_m2400(L_2, /*hidden argument*/&GUIStyle_get_padding_m2400_MethodInfo);
		NullCheck(L_3);
		int32_t L_4 = RectOffset_get_horizontal_m1869(L_3, /*hidden argument*/&RectOffset_get_horizontal_m1869_MethodInfo);
		float L_5 = (((float)L_4));
		V_13 = L_5;
		__this->___minWidth_0 = L_5;
		float L_6 = V_13;
		__this->___maxWidth_1 = L_6;
		return;
	}

IL_0033:
	{
		__this->___childMinWidth_22 = (0.0f);
		__this->___childMaxWidth_23 = (0.0f);
		V_0 = 0;
		V_1 = 0;
		__this->___stretchableCountX_18 = 0;
		V_2 = 1;
		bool L_7 = (__this->___isVertical_11);
		if (!L_7)
		{
			goto IL_016a;
		}
	}
	{
		List_1_t475 * L_8 = (__this->___entries_10);
		NullCheck(L_8);
		Enumerator_t685  L_9 = List_1_GetEnumerator_m3342(L_8, /*hidden argument*/List_1_GetEnumerator_m3342_MethodInfo_var);
		V_4 = L_9;
	}

IL_006e:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0125;
		}

IL_0073:
		{
			GUILayoutEntry_t474 * L_10 = Enumerator_get_Current_m3343((&V_4), /*hidden argument*/Enumerator_get_Current_m3343_MethodInfo_var);
			V_3 = L_10;
			GUILayoutEntry_t474 * L_11 = V_3;
			NullCheck(L_11);
			VirtActionInvoker0::Invoke(&GUILayoutEntry_CalcWidth_m2271_MethodInfo, L_11);
			GUILayoutEntry_t474 * L_12 = V_3;
			NullCheck(L_12);
			RectOffset_t242 * L_13 = (RectOffset_t242 *)VirtFuncInvoker0< RectOffset_t242 * >::Invoke(&GUILayoutEntry_get_margin_m2270_MethodInfo, L_12);
			V_5 = L_13;
			GUILayoutEntry_t474 * L_14 = V_3;
			NullCheck(L_14);
			GUIStyle_t466 * L_15 = GUILayoutEntry_get_style_m2268(L_14, /*hidden argument*/&GUILayoutEntry_get_style_m2268_MethodInfo);
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUILayoutUtility_t472_il2cpp_TypeInfo));
			GUIStyle_t466 * L_16 = GUILayoutUtility_get_spaceStyle_m2265(NULL /*static, unused*/, /*hidden argument*/&GUILayoutUtility_get_spaceStyle_m2265_MethodInfo);
			if ((((Object_t*)(GUIStyle_t466 *)L_15) == ((Object_t*)(GUIStyle_t466 *)L_16)))
			{
				goto IL_0112;
			}
		}

IL_0099:
		{
			bool L_17 = V_2;
			if (L_17)
			{
				goto IL_00c0;
			}
		}

IL_009f:
		{
			RectOffset_t242 * L_18 = V_5;
			NullCheck(L_18);
			int32_t L_19 = RectOffset_get_left_m1879(L_18, /*hidden argument*/&RectOffset_get_left_m1879_MethodInfo);
			int32_t L_20 = V_0;
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t270_il2cpp_TypeInfo));
			int32_t L_21 = Mathf_Min_m1677(NULL /*static, unused*/, L_19, L_20, /*hidden argument*/&Mathf_Min_m1677_MethodInfo);
			V_0 = L_21;
			RectOffset_t242 * L_22 = V_5;
			NullCheck(L_22);
			int32_t L_23 = RectOffset_get_right_m2382(L_22, /*hidden argument*/&RectOffset_get_right_m2382_MethodInfo);
			int32_t L_24 = V_1;
			int32_t L_25 = Mathf_Min_m1677(NULL /*static, unused*/, L_23, L_24, /*hidden argument*/&Mathf_Min_m1677_MethodInfo);
			V_1 = L_25;
			goto IL_00d2;
		}

IL_00c0:
		{
			RectOffset_t242 * L_26 = V_5;
			NullCheck(L_26);
			int32_t L_27 = RectOffset_get_left_m1879(L_26, /*hidden argument*/&RectOffset_get_left_m1879_MethodInfo);
			V_0 = L_27;
			RectOffset_t242 * L_28 = V_5;
			NullCheck(L_28);
			int32_t L_29 = RectOffset_get_right_m2382(L_28, /*hidden argument*/&RectOffset_get_right_m2382_MethodInfo);
			V_1 = L_29;
			V_2 = 0;
		}

IL_00d2:
		{
			GUILayoutEntry_t474 * L_30 = V_3;
			NullCheck(L_30);
			float L_31 = (L_30->___minWidth_0);
			RectOffset_t242 * L_32 = V_5;
			NullCheck(L_32);
			int32_t L_33 = RectOffset_get_horizontal_m1869(L_32, /*hidden argument*/&RectOffset_get_horizontal_m1869_MethodInfo);
			float L_34 = (__this->___childMinWidth_22);
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t270_il2cpp_TypeInfo));
			float L_35 = Mathf_Max_m1801(NULL /*static, unused*/, ((float)((float)L_31+(float)(((float)L_33)))), L_34, /*hidden argument*/&Mathf_Max_m1801_MethodInfo);
			__this->___childMinWidth_22 = L_35;
			GUILayoutEntry_t474 * L_36 = V_3;
			NullCheck(L_36);
			float L_37 = (L_36->___maxWidth_1);
			RectOffset_t242 * L_38 = V_5;
			NullCheck(L_38);
			int32_t L_39 = RectOffset_get_horizontal_m1869(L_38, /*hidden argument*/&RectOffset_get_horizontal_m1869_MethodInfo);
			float L_40 = (__this->___childMaxWidth_23);
			float L_41 = Mathf_Max_m1801(NULL /*static, unused*/, ((float)((float)L_37+(float)(((float)L_39)))), L_40, /*hidden argument*/&Mathf_Max_m1801_MethodInfo);
			__this->___childMaxWidth_23 = L_41;
		}

IL_0112:
		{
			int32_t L_42 = (__this->___stretchableCountX_18);
			GUILayoutEntry_t474 * L_43 = V_3;
			NullCheck(L_43);
			int32_t L_44 = (L_43->___stretchWidth_5);
			__this->___stretchableCountX_18 = ((int32_t)((int32_t)L_42+(int32_t)L_44));
		}

IL_0125:
		{
			bool L_45 = Enumerator_MoveNext_m3344((&V_4), /*hidden argument*/Enumerator_MoveNext_m3344_MethodInfo_var);
			if (L_45)
			{
				goto IL_0073;
			}
		}

IL_0131:
		{
			IL2CPP_LEAVE(0x143, FINALLY_0136);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t275 *)e.ex;
		goto FINALLY_0136;
	}

FINALLY_0136:
	{ // begin finally (depth: 1)
		Enumerator_t685  L_46 = V_4;
		Enumerator_t685  L_47 = L_46;
		Object_t * L_48 = Box(Enumerator_t685_il2cpp_TypeInfo_var, &L_47);
		NullCheck(L_48);
		InterfaceActionInvoker0::Invoke(&IDisposable_Dispose_m1379_MethodInfo, L_48);
		IL2CPP_END_FINALLY(310)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(310)
	{
		IL2CPP_JUMP_TBL(0x143, IL_0143)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t275 *)
	}

IL_0143:
	{
		float L_49 = (__this->___childMinWidth_22);
		int32_t L_50 = V_0;
		int32_t L_51 = V_1;
		__this->___childMinWidth_22 = ((float)((float)L_49-(float)(((float)((int32_t)((int32_t)L_50+(int32_t)L_51))))));
		float L_52 = (__this->___childMaxWidth_23);
		int32_t L_53 = V_0;
		int32_t L_54 = V_1;
		__this->___childMaxWidth_23 = ((float)((float)L_52-(float)(((float)((int32_t)((int32_t)L_53+(int32_t)L_54))))));
		goto IL_02ea;
	}

IL_016a:
	{
		V_6 = 0;
		List_1_t475 * L_55 = (__this->___entries_10);
		NullCheck(L_55);
		Enumerator_t685  L_56 = List_1_GetEnumerator_m3342(L_55, /*hidden argument*/List_1_GetEnumerator_m3342_MethodInfo_var);
		V_8 = L_56;
	}

IL_017a:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0273;
		}

IL_017f:
		{
			GUILayoutEntry_t474 * L_57 = Enumerator_get_Current_m3343((&V_8), /*hidden argument*/Enumerator_get_Current_m3343_MethodInfo_var);
			V_7 = L_57;
			GUILayoutEntry_t474 * L_58 = V_7;
			NullCheck(L_58);
			VirtActionInvoker0::Invoke(&GUILayoutEntry_CalcWidth_m2271_MethodInfo, L_58);
			GUILayoutEntry_t474 * L_59 = V_7;
			NullCheck(L_59);
			RectOffset_t242 * L_60 = (RectOffset_t242 *)VirtFuncInvoker0< RectOffset_t242 * >::Invoke(&GUILayoutEntry_get_margin_m2270_MethodInfo, L_59);
			V_9 = L_60;
			GUILayoutEntry_t474 * L_61 = V_7;
			NullCheck(L_61);
			GUIStyle_t466 * L_62 = GUILayoutEntry_get_style_m2268(L_61, /*hidden argument*/&GUILayoutEntry_get_style_m2268_MethodInfo);
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUILayoutUtility_t472_il2cpp_TypeInfo));
			GUIStyle_t466 * L_63 = GUILayoutUtility_get_spaceStyle_m2265(NULL /*static, unused*/, /*hidden argument*/&GUILayoutUtility_get_spaceStyle_m2265_MethodInfo);
			if ((((Object_t*)(GUIStyle_t466 *)L_62) == ((Object_t*)(GUIStyle_t466 *)L_63)))
			{
				goto IL_0237;
			}
		}

IL_01a9:
		{
			bool L_64 = V_2;
			if (L_64)
			{
				goto IL_01d2;
			}
		}

IL_01af:
		{
			int32_t L_65 = V_6;
			RectOffset_t242 * L_66 = V_9;
			NullCheck(L_66);
			int32_t L_67 = RectOffset_get_left_m1879(L_66, /*hidden argument*/&RectOffset_get_left_m1879_MethodInfo);
			if ((((int32_t)L_65) <= ((int32_t)L_67)))
			{
				goto IL_01c4;
			}
		}

IL_01bd:
		{
			int32_t L_68 = V_6;
			G_B22_0 = L_68;
			goto IL_01cb;
		}

IL_01c4:
		{
			RectOffset_t242 * L_69 = V_9;
			NullCheck(L_69);
			int32_t L_70 = RectOffset_get_left_m1879(L_69, /*hidden argument*/&RectOffset_get_left_m1879_MethodInfo);
			G_B22_0 = L_70;
		}

IL_01cb:
		{
			V_10 = G_B22_0;
			goto IL_01d7;
		}

IL_01d2:
		{
			V_10 = 0;
			V_2 = 0;
		}

IL_01d7:
		{
			float L_71 = (__this->___childMinWidth_22);
			GUILayoutEntry_t474 * L_72 = V_7;
			NullCheck(L_72);
			float L_73 = (L_72->___minWidth_0);
			float L_74 = (__this->___spacing_13);
			int32_t L_75 = V_10;
			__this->___childMinWidth_22 = ((float)((float)L_71+(float)((float)((float)((float)((float)L_73+(float)L_74))+(float)(((float)L_75))))));
			float L_76 = (__this->___childMaxWidth_23);
			GUILayoutEntry_t474 * L_77 = V_7;
			NullCheck(L_77);
			float L_78 = (L_77->___maxWidth_1);
			float L_79 = (__this->___spacing_13);
			int32_t L_80 = V_10;
			__this->___childMaxWidth_23 = ((float)((float)L_76+(float)((float)((float)((float)((float)L_78+(float)L_79))+(float)(((float)L_80))))));
			RectOffset_t242 * L_81 = V_9;
			NullCheck(L_81);
			int32_t L_82 = RectOffset_get_right_m2382(L_81, /*hidden argument*/&RectOffset_get_right_m2382_MethodInfo);
			V_6 = L_82;
			int32_t L_83 = (__this->___stretchableCountX_18);
			GUILayoutEntry_t474 * L_84 = V_7;
			NullCheck(L_84);
			int32_t L_85 = (L_84->___stretchWidth_5);
			__this->___stretchableCountX_18 = ((int32_t)((int32_t)L_83+(int32_t)L_85));
			goto IL_0273;
		}

IL_0237:
		{
			float L_86 = (__this->___childMinWidth_22);
			GUILayoutEntry_t474 * L_87 = V_7;
			NullCheck(L_87);
			float L_88 = (L_87->___minWidth_0);
			__this->___childMinWidth_22 = ((float)((float)L_86+(float)L_88));
			float L_89 = (__this->___childMaxWidth_23);
			GUILayoutEntry_t474 * L_90 = V_7;
			NullCheck(L_90);
			float L_91 = (L_90->___maxWidth_1);
			__this->___childMaxWidth_23 = ((float)((float)L_89+(float)L_91));
			int32_t L_92 = (__this->___stretchableCountX_18);
			GUILayoutEntry_t474 * L_93 = V_7;
			NullCheck(L_93);
			int32_t L_94 = (L_93->___stretchWidth_5);
			__this->___stretchableCountX_18 = ((int32_t)((int32_t)L_92+(int32_t)L_94));
		}

IL_0273:
		{
			bool L_95 = Enumerator_MoveNext_m3344((&V_8), /*hidden argument*/Enumerator_MoveNext_m3344_MethodInfo_var);
			if (L_95)
			{
				goto IL_017f;
			}
		}

IL_027f:
		{
			IL2CPP_LEAVE(0x291, FINALLY_0284);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t275 *)e.ex;
		goto FINALLY_0284;
	}

FINALLY_0284:
	{ // begin finally (depth: 1)
		Enumerator_t685  L_96 = V_8;
		Enumerator_t685  L_97 = L_96;
		Object_t * L_98 = Box(Enumerator_t685_il2cpp_TypeInfo_var, &L_97);
		NullCheck(L_98);
		InterfaceActionInvoker0::Invoke(&IDisposable_Dispose_m1379_MethodInfo, L_98);
		IL2CPP_END_FINALLY(644)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(644)
	{
		IL2CPP_JUMP_TBL(0x291, IL_0291)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t275 *)
	}

IL_0291:
	{
		float L_99 = (__this->___childMinWidth_22);
		float L_100 = (__this->___spacing_13);
		__this->___childMinWidth_22 = ((float)((float)L_99-(float)L_100));
		float L_101 = (__this->___childMaxWidth_23);
		float L_102 = (__this->___spacing_13);
		__this->___childMaxWidth_23 = ((float)((float)L_101-(float)L_102));
		List_1_t475 * L_103 = (__this->___entries_10);
		NullCheck(L_103);
		int32_t L_104 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(List_1_get_Count_m3346_MethodInfo_var, L_103);
		if (!L_104)
		{
			goto IL_02e6;
		}
	}
	{
		List_1_t475 * L_105 = (__this->___entries_10);
		NullCheck(L_105);
		GUILayoutEntry_t474 * L_106 = (GUILayoutEntry_t474 *)VirtFuncInvoker1< GUILayoutEntry_t474 *, int32_t >::Invoke(List_1_get_Item_m3347_MethodInfo_var, L_105, 0);
		NullCheck(L_106);
		RectOffset_t242 * L_107 = (RectOffset_t242 *)VirtFuncInvoker0< RectOffset_t242 * >::Invoke(&GUILayoutEntry_get_margin_m2270_MethodInfo, L_106);
		NullCheck(L_107);
		int32_t L_108 = RectOffset_get_left_m1879(L_107, /*hidden argument*/&RectOffset_get_left_m1879_MethodInfo);
		V_0 = L_108;
		int32_t L_109 = V_6;
		V_1 = L_109;
		goto IL_02ea;
	}

IL_02e6:
	{
		int32_t L_110 = 0;
		V_1 = L_110;
		V_0 = L_110;
	}

IL_02ea:
	{
		V_11 = (0.0f);
		V_12 = (0.0f);
		GUIStyle_t466 * L_111 = GUILayoutEntry_get_style_m2268(__this, /*hidden argument*/&GUILayoutEntry_get_style_m2268_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUIStyle_t466_il2cpp_TypeInfo));
		GUIStyle_t466 * L_112 = GUIStyle_get_none_m2411(NULL /*static, unused*/, /*hidden argument*/&GUIStyle_get_none_m2411_MethodInfo);
		if ((!(((Object_t*)(GUIStyle_t466 *)L_111) == ((Object_t*)(GUIStyle_t466 *)L_112))))
		{
			goto IL_0313;
		}
	}
	{
		bool L_113 = (__this->___userSpecifiedWidth_20);
		if (!L_113)
		{
			goto IL_034a;
		}
	}

IL_0313:
	{
		GUIStyle_t466 * L_114 = GUILayoutEntry_get_style_m2268(__this, /*hidden argument*/&GUILayoutEntry_get_style_m2268_MethodInfo);
		NullCheck(L_114);
		RectOffset_t242 * L_115 = GUIStyle_get_padding_m2400(L_114, /*hidden argument*/&GUIStyle_get_padding_m2400_MethodInfo);
		NullCheck(L_115);
		int32_t L_116 = RectOffset_get_left_m1879(L_115, /*hidden argument*/&RectOffset_get_left_m1879_MethodInfo);
		int32_t L_117 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t270_il2cpp_TypeInfo));
		int32_t L_118 = Mathf_Max_m1675(NULL /*static, unused*/, L_116, L_117, /*hidden argument*/&Mathf_Max_m1675_MethodInfo);
		V_11 = (((float)L_118));
		GUIStyle_t466 * L_119 = GUILayoutEntry_get_style_m2268(__this, /*hidden argument*/&GUILayoutEntry_get_style_m2268_MethodInfo);
		NullCheck(L_119);
		RectOffset_t242 * L_120 = GUIStyle_get_padding_m2400(L_119, /*hidden argument*/&GUIStyle_get_padding_m2400_MethodInfo);
		NullCheck(L_120);
		int32_t L_121 = RectOffset_get_right_m2382(L_120, /*hidden argument*/&RectOffset_get_right_m2382_MethodInfo);
		int32_t L_122 = V_1;
		int32_t L_123 = Mathf_Max_m1675(NULL /*static, unused*/, L_121, L_122, /*hidden argument*/&Mathf_Max_m1675_MethodInfo);
		V_12 = (((float)L_123));
		goto IL_036c;
	}

IL_034a:
	{
		RectOffset_t242 * L_124 = (__this->___m_Margin_26);
		int32_t L_125 = V_0;
		NullCheck(L_124);
		RectOffset_set_left_m2381(L_124, L_125, /*hidden argument*/&RectOffset_set_left_m2381_MethodInfo);
		RectOffset_t242 * L_126 = (__this->___m_Margin_26);
		int32_t L_127 = V_1;
		NullCheck(L_126);
		RectOffset_set_right_m2383(L_126, L_127, /*hidden argument*/&RectOffset_set_right_m2383_MethodInfo);
		float L_128 = (0.0f);
		V_12 = L_128;
		V_11 = L_128;
	}

IL_036c:
	{
		float L_129 = (__this->___minWidth_0);
		float L_130 = (__this->___childMinWidth_22);
		float L_131 = V_11;
		float L_132 = V_12;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t270_il2cpp_TypeInfo));
		float L_133 = Mathf_Max_m1801(NULL /*static, unused*/, L_129, ((float)((float)((float)((float)L_130+(float)L_131))+(float)L_132)), /*hidden argument*/&Mathf_Max_m1801_MethodInfo);
		__this->___minWidth_0 = L_133;
		float L_134 = (__this->___maxWidth_1);
		if ((!(((float)L_134) == ((float)(0.0f)))))
		{
			goto IL_03db;
		}
	}
	{
		int32_t L_135 = (__this->___stretchWidth_5);
		int32_t L_136 = (__this->___stretchableCountX_18);
		GUIStyle_t466 * L_137 = GUILayoutEntry_get_style_m2268(__this, /*hidden argument*/&GUILayoutEntry_get_style_m2268_MethodInfo);
		NullCheck(L_137);
		bool L_138 = GUIStyle_get_stretchWidth_m2404(L_137, /*hidden argument*/&GUIStyle_get_stretchWidth_m2404_MethodInfo);
		G_B38_0 = L_136;
		G_B38_1 = L_135;
		G_B38_2 = __this;
		if (!L_138)
		{
			G_B39_0 = L_136;
			G_B39_1 = L_135;
			G_B39_2 = __this;
			goto IL_03bc;
		}
	}
	{
		G_B40_0 = 1;
		G_B40_1 = G_B38_0;
		G_B40_2 = G_B38_1;
		G_B40_3 = G_B38_2;
		goto IL_03bd;
	}

IL_03bc:
	{
		G_B40_0 = 0;
		G_B40_1 = G_B39_0;
		G_B40_2 = G_B39_1;
		G_B40_3 = G_B39_2;
	}

IL_03bd:
	{
		NullCheck(G_B40_3);
		G_B40_3->___stretchWidth_5 = ((int32_t)((int32_t)G_B40_2+(int32_t)((int32_t)((int32_t)G_B40_1+(int32_t)G_B40_0))));
		float L_139 = (__this->___childMaxWidth_23);
		float L_140 = V_11;
		float L_141 = V_12;
		__this->___maxWidth_1 = ((float)((float)((float)((float)L_139+(float)L_140))+(float)L_141));
		goto IL_03e2;
	}

IL_03db:
	{
		__this->___stretchWidth_5 = 0;
	}

IL_03e2:
	{
		float L_142 = (__this->___maxWidth_1);
		float L_143 = (__this->___minWidth_0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t270_il2cpp_TypeInfo));
		float L_144 = Mathf_Max_m1801(NULL /*static, unused*/, L_142, L_143, /*hidden argument*/&Mathf_Max_m1801_MethodInfo);
		__this->___maxWidth_1 = L_144;
		GUIStyle_t466 * L_145 = GUILayoutEntry_get_style_m2268(__this, /*hidden argument*/&GUILayoutEntry_get_style_m2268_MethodInfo);
		NullCheck(L_145);
		float L_146 = GUIStyle_get_fixedWidth_m2402(L_145, /*hidden argument*/&GUIStyle_get_fixedWidth_m2402_MethodInfo);
		if ((((float)L_146) == ((float)(0.0f))))
		{
			goto IL_0431;
		}
	}
	{
		GUIStyle_t466 * L_147 = GUILayoutEntry_get_style_m2268(__this, /*hidden argument*/&GUILayoutEntry_get_style_m2268_MethodInfo);
		NullCheck(L_147);
		float L_148 = GUIStyle_get_fixedWidth_m2402(L_147, /*hidden argument*/&GUIStyle_get_fixedWidth_m2402_MethodInfo);
		float L_149 = L_148;
		V_13 = L_149;
		__this->___minWidth_0 = L_149;
		float L_150 = V_13;
		__this->___maxWidth_1 = L_150;
		__this->___stretchWidth_5 = 0;
	}

IL_0431:
	{
		return;
	}
}
// System.Void UnityEngine.GUILayoutGroup::SetHorizontal(System.Single,System.Single)
extern TypeInfo* Enumerator_t685_il2cpp_TypeInfo_var;
extern MethodInfo* List_1_GetEnumerator_m3342_MethodInfo_var;
extern MethodInfo* Enumerator_get_Current_m3343_MethodInfo_var;
extern MethodInfo* Enumerator_MoveNext_m3344_MethodInfo_var;
extern MethodInfo* List_1_get_Count_m3346_MethodInfo_var;
extern MethodInfo* List_1_get_Item_m3347_MethodInfo_var;
extern "C" void GUILayoutGroup_SetHorizontal_m2284 (GUILayoutGroup_t469 * __this, float ___x, float ___width, MethodInfo* method)
{
	static bool GUILayoutGroup_SetHorizontal_m2284_init;
	if (!GUILayoutGroup_SetHorizontal_m2284_init)
	{
		Enumerator_t685_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Enumerator_t685_0_0_0);
		List_1_GetEnumerator_m3342_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1_GetEnumerator_m3342_GenericMethod);
		Enumerator_get_Current_m3343_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Enumerator_get_Current_m3343_GenericMethod);
		Enumerator_MoveNext_m3344_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Enumerator_MoveNext_m3344_GenericMethod);
		List_1_get_Count_m3346_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1_get_Count_m3346_GenericMethod);
		List_1_get_Item_m3347_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1_get_Item_m3347_GenericMethod);
		GUILayoutGroup_SetHorizontal_m2284_init = true;
	}
	RectOffset_t242 * V_0 = {0};
	GUILayoutEntry_t474 * V_1 = {0};
	Enumerator_t685  V_2 = {0};
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	GUILayoutEntry_t474 * V_8 = {0};
	Enumerator_t685  V_9 = {0};
	float V_10 = 0.0f;
	float V_11 = 0.0f;
	float V_12 = 0.0f;
	float V_13 = 0.0f;
	float V_14 = 0.0f;
	int32_t V_15 = 0;
	bool V_16 = false;
	GUILayoutEntry_t474 * V_17 = {0};
	Enumerator_t685  V_18 = {0};
	float V_19 = 0.0f;
	int32_t V_20 = 0;
	int32_t V_21 = 0;
	Exception_t275 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t275 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	int32_t G_B39_0 = 0;
	{
		float L_0 = ___x;
		float L_1 = ___width;
		GUILayoutEntry_SetHorizontal_m2273(__this, L_0, L_1, /*hidden argument*/&GUILayoutEntry_SetHorizontal_m2273_MethodInfo);
		bool L_2 = (__this->___resetCoords_12);
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		___x = (0.0f);
	}

IL_001a:
	{
		GUIStyle_t466 * L_3 = GUILayoutEntry_get_style_m2268(__this, /*hidden argument*/&GUILayoutEntry_get_style_m2268_MethodInfo);
		NullCheck(L_3);
		RectOffset_t242 * L_4 = GUIStyle_get_padding_m2400(L_3, /*hidden argument*/&GUIStyle_get_padding_m2400_MethodInfo);
		V_0 = L_4;
		bool L_5 = (__this->___isVertical_11);
		if (!L_5)
		{
			goto IL_01bb;
		}
	}
	{
		GUIStyle_t466 * L_6 = GUILayoutEntry_get_style_m2268(__this, /*hidden argument*/&GUILayoutEntry_get_style_m2268_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUIStyle_t466_il2cpp_TypeInfo));
		GUIStyle_t466 * L_7 = GUIStyle_get_none_m2411(NULL /*static, unused*/, /*hidden argument*/&GUIStyle_get_none_m2411_MethodInfo);
		if ((((Object_t*)(GUIStyle_t466 *)L_6) == ((Object_t*)(GUIStyle_t466 *)L_7)))
		{
			goto IL_00eb;
		}
	}
	{
		List_1_t475 * L_8 = (__this->___entries_10);
		NullCheck(L_8);
		Enumerator_t685  L_9 = List_1_GetEnumerator_m3342(L_8, /*hidden argument*/List_1_GetEnumerator_m3342_MethodInfo_var);
		V_2 = L_9;
	}

IL_004d:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00c9;
		}

IL_0052:
		{
			GUILayoutEntry_t474 * L_10 = Enumerator_get_Current_m3343((&V_2), /*hidden argument*/Enumerator_get_Current_m3343_MethodInfo_var);
			V_1 = L_10;
			GUILayoutEntry_t474 * L_11 = V_1;
			NullCheck(L_11);
			RectOffset_t242 * L_12 = (RectOffset_t242 *)VirtFuncInvoker0< RectOffset_t242 * >::Invoke(&GUILayoutEntry_get_margin_m2270_MethodInfo, L_11);
			NullCheck(L_12);
			int32_t L_13 = RectOffset_get_left_m1879(L_12, /*hidden argument*/&RectOffset_get_left_m1879_MethodInfo);
			RectOffset_t242 * L_14 = V_0;
			NullCheck(L_14);
			int32_t L_15 = RectOffset_get_left_m1879(L_14, /*hidden argument*/&RectOffset_get_left_m1879_MethodInfo);
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t270_il2cpp_TypeInfo));
			int32_t L_16 = Mathf_Max_m1675(NULL /*static, unused*/, L_13, L_15, /*hidden argument*/&Mathf_Max_m1675_MethodInfo);
			V_3 = (((float)L_16));
			float L_17 = ___x;
			float L_18 = V_3;
			V_4 = ((float)((float)L_17+(float)L_18));
			float L_19 = ___width;
			GUILayoutEntry_t474 * L_20 = V_1;
			NullCheck(L_20);
			RectOffset_t242 * L_21 = (RectOffset_t242 *)VirtFuncInvoker0< RectOffset_t242 * >::Invoke(&GUILayoutEntry_get_margin_m2270_MethodInfo, L_20);
			NullCheck(L_21);
			int32_t L_22 = RectOffset_get_right_m2382(L_21, /*hidden argument*/&RectOffset_get_right_m2382_MethodInfo);
			RectOffset_t242 * L_23 = V_0;
			NullCheck(L_23);
			int32_t L_24 = RectOffset_get_right_m2382(L_23, /*hidden argument*/&RectOffset_get_right_m2382_MethodInfo);
			int32_t L_25 = Mathf_Max_m1675(NULL /*static, unused*/, L_22, L_24, /*hidden argument*/&Mathf_Max_m1675_MethodInfo);
			float L_26 = V_3;
			V_5 = ((float)((float)((float)((float)L_19-(float)(((float)L_25))))-(float)L_26));
			GUILayoutEntry_t474 * L_27 = V_1;
			NullCheck(L_27);
			int32_t L_28 = (L_27->___stretchWidth_5);
			if (!L_28)
			{
				goto IL_00ae;
			}
		}

IL_009f:
		{
			GUILayoutEntry_t474 * L_29 = V_1;
			float L_30 = V_4;
			float L_31 = V_5;
			NullCheck(L_29);
			VirtActionInvoker2< float, float >::Invoke(&GUILayoutEntry_SetHorizontal_m2273_MethodInfo, L_29, L_30, L_31);
			goto IL_00c9;
		}

IL_00ae:
		{
			GUILayoutEntry_t474 * L_32 = V_1;
			float L_33 = V_4;
			float L_34 = V_5;
			GUILayoutEntry_t474 * L_35 = V_1;
			NullCheck(L_35);
			float L_36 = (L_35->___minWidth_0);
			GUILayoutEntry_t474 * L_37 = V_1;
			NullCheck(L_37);
			float L_38 = (L_37->___maxWidth_1);
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t270_il2cpp_TypeInfo));
			float L_39 = Mathf_Clamp_m1582(NULL /*static, unused*/, L_34, L_36, L_38, /*hidden argument*/&Mathf_Clamp_m1582_MethodInfo);
			NullCheck(L_32);
			VirtActionInvoker2< float, float >::Invoke(&GUILayoutEntry_SetHorizontal_m2273_MethodInfo, L_32, L_33, L_39);
		}

IL_00c9:
		{
			bool L_40 = Enumerator_MoveNext_m3344((&V_2), /*hidden argument*/Enumerator_MoveNext_m3344_MethodInfo_var);
			if (L_40)
			{
				goto IL_0052;
			}
		}

IL_00d5:
		{
			IL2CPP_LEAVE(0xE6, FINALLY_00da);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t275 *)e.ex;
		goto FINALLY_00da;
	}

FINALLY_00da:
	{ // begin finally (depth: 1)
		Enumerator_t685  L_41 = V_2;
		Enumerator_t685  L_42 = L_41;
		Object_t * L_43 = Box(Enumerator_t685_il2cpp_TypeInfo_var, &L_42);
		NullCheck(L_43);
		InterfaceActionInvoker0::Invoke(&IDisposable_Dispose_m1379_MethodInfo, L_43);
		IL2CPP_END_FINALLY(218)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(218)
	{
		IL2CPP_JUMP_TBL(0xE6, IL_00e6)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t275 *)
	}

IL_00e6:
	{
		goto IL_01b6;
	}

IL_00eb:
	{
		float L_44 = ___x;
		RectOffset_t242 * L_45 = (RectOffset_t242 *)VirtFuncInvoker0< RectOffset_t242 * >::Invoke(&GUILayoutGroup_get_margin_m2279_MethodInfo, __this);
		NullCheck(L_45);
		int32_t L_46 = RectOffset_get_left_m1879(L_45, /*hidden argument*/&RectOffset_get_left_m1879_MethodInfo);
		V_6 = ((float)((float)L_44-(float)(((float)L_46))));
		float L_47 = ___width;
		RectOffset_t242 * L_48 = (RectOffset_t242 *)VirtFuncInvoker0< RectOffset_t242 * >::Invoke(&GUILayoutGroup_get_margin_m2279_MethodInfo, __this);
		NullCheck(L_48);
		int32_t L_49 = RectOffset_get_horizontal_m1869(L_48, /*hidden argument*/&RectOffset_get_horizontal_m1869_MethodInfo);
		V_7 = ((float)((float)L_47+(float)(((float)L_49))));
		List_1_t475 * L_50 = (__this->___entries_10);
		NullCheck(L_50);
		Enumerator_t685  L_51 = List_1_GetEnumerator_m3342(L_50, /*hidden argument*/List_1_GetEnumerator_m3342_MethodInfo_var);
		V_9 = L_51;
	}

IL_0118:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0198;
		}

IL_011d:
		{
			GUILayoutEntry_t474 * L_52 = Enumerator_get_Current_m3343((&V_9), /*hidden argument*/Enumerator_get_Current_m3343_MethodInfo_var);
			V_8 = L_52;
			GUILayoutEntry_t474 * L_53 = V_8;
			NullCheck(L_53);
			int32_t L_54 = (L_53->___stretchWidth_5);
			if (!L_54)
			{
				goto IL_015e;
			}
		}

IL_0132:
		{
			GUILayoutEntry_t474 * L_55 = V_8;
			float L_56 = V_6;
			GUILayoutEntry_t474 * L_57 = V_8;
			NullCheck(L_57);
			RectOffset_t242 * L_58 = (RectOffset_t242 *)VirtFuncInvoker0< RectOffset_t242 * >::Invoke(&GUILayoutEntry_get_margin_m2270_MethodInfo, L_57);
			NullCheck(L_58);
			int32_t L_59 = RectOffset_get_left_m1879(L_58, /*hidden argument*/&RectOffset_get_left_m1879_MethodInfo);
			float L_60 = V_7;
			GUILayoutEntry_t474 * L_61 = V_8;
			NullCheck(L_61);
			RectOffset_t242 * L_62 = (RectOffset_t242 *)VirtFuncInvoker0< RectOffset_t242 * >::Invoke(&GUILayoutEntry_get_margin_m2270_MethodInfo, L_61);
			NullCheck(L_62);
			int32_t L_63 = RectOffset_get_horizontal_m1869(L_62, /*hidden argument*/&RectOffset_get_horizontal_m1869_MethodInfo);
			NullCheck(L_55);
			VirtActionInvoker2< float, float >::Invoke(&GUILayoutEntry_SetHorizontal_m2273_MethodInfo, L_55, ((float)((float)L_56+(float)(((float)L_59)))), ((float)((float)L_60-(float)(((float)L_63)))));
			goto IL_0198;
		}

IL_015e:
		{
			GUILayoutEntry_t474 * L_64 = V_8;
			float L_65 = V_6;
			GUILayoutEntry_t474 * L_66 = V_8;
			NullCheck(L_66);
			RectOffset_t242 * L_67 = (RectOffset_t242 *)VirtFuncInvoker0< RectOffset_t242 * >::Invoke(&GUILayoutEntry_get_margin_m2270_MethodInfo, L_66);
			NullCheck(L_67);
			int32_t L_68 = RectOffset_get_left_m1879(L_67, /*hidden argument*/&RectOffset_get_left_m1879_MethodInfo);
			float L_69 = V_7;
			GUILayoutEntry_t474 * L_70 = V_8;
			NullCheck(L_70);
			RectOffset_t242 * L_71 = (RectOffset_t242 *)VirtFuncInvoker0< RectOffset_t242 * >::Invoke(&GUILayoutEntry_get_margin_m2270_MethodInfo, L_70);
			NullCheck(L_71);
			int32_t L_72 = RectOffset_get_horizontal_m1869(L_71, /*hidden argument*/&RectOffset_get_horizontal_m1869_MethodInfo);
			GUILayoutEntry_t474 * L_73 = V_8;
			NullCheck(L_73);
			float L_74 = (L_73->___minWidth_0);
			GUILayoutEntry_t474 * L_75 = V_8;
			NullCheck(L_75);
			float L_76 = (L_75->___maxWidth_1);
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t270_il2cpp_TypeInfo));
			float L_77 = Mathf_Clamp_m1582(NULL /*static, unused*/, ((float)((float)L_69-(float)(((float)L_72)))), L_74, L_76, /*hidden argument*/&Mathf_Clamp_m1582_MethodInfo);
			NullCheck(L_64);
			VirtActionInvoker2< float, float >::Invoke(&GUILayoutEntry_SetHorizontal_m2273_MethodInfo, L_64, ((float)((float)L_65+(float)(((float)L_68)))), L_77);
		}

IL_0198:
		{
			bool L_78 = Enumerator_MoveNext_m3344((&V_9), /*hidden argument*/Enumerator_MoveNext_m3344_MethodInfo_var);
			if (L_78)
			{
				goto IL_011d;
			}
		}

IL_01a4:
		{
			IL2CPP_LEAVE(0x1B6, FINALLY_01a9);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t275 *)e.ex;
		goto FINALLY_01a9;
	}

FINALLY_01a9:
	{ // begin finally (depth: 1)
		Enumerator_t685  L_79 = V_9;
		Enumerator_t685  L_80 = L_79;
		Object_t * L_81 = Box(Enumerator_t685_il2cpp_TypeInfo_var, &L_80);
		NullCheck(L_81);
		InterfaceActionInvoker0::Invoke(&IDisposable_Dispose_m1379_MethodInfo, L_81);
		IL2CPP_END_FINALLY(425)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(425)
	{
		IL2CPP_JUMP_TBL(0x1B6, IL_01b6)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t275 *)
	}

IL_01b6:
	{
		goto IL_03b0;
	}

IL_01bb:
	{
		GUIStyle_t466 * L_82 = GUILayoutEntry_get_style_m2268(__this, /*hidden argument*/&GUILayoutEntry_get_style_m2268_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUIStyle_t466_il2cpp_TypeInfo));
		GUIStyle_t466 * L_83 = GUIStyle_get_none_m2411(NULL /*static, unused*/, /*hidden argument*/&GUIStyle_get_none_m2411_MethodInfo);
		if ((((Object_t*)(GUIStyle_t466 *)L_82) == ((Object_t*)(GUIStyle_t466 *)L_83)))
		{
			goto IL_0248;
		}
	}
	{
		RectOffset_t242 * L_84 = V_0;
		NullCheck(L_84);
		int32_t L_85 = RectOffset_get_left_m1879(L_84, /*hidden argument*/&RectOffset_get_left_m1879_MethodInfo);
		V_10 = (((float)L_85));
		RectOffset_t242 * L_86 = V_0;
		NullCheck(L_86);
		int32_t L_87 = RectOffset_get_right_m2382(L_86, /*hidden argument*/&RectOffset_get_right_m2382_MethodInfo);
		V_11 = (((float)L_87));
		List_1_t475 * L_88 = (__this->___entries_10);
		NullCheck(L_88);
		int32_t L_89 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(List_1_get_Count_m3346_MethodInfo_var, L_88);
		if (!L_89)
		{
			goto IL_0239;
		}
	}
	{
		float L_90 = V_10;
		List_1_t475 * L_91 = (__this->___entries_10);
		NullCheck(L_91);
		GUILayoutEntry_t474 * L_92 = (GUILayoutEntry_t474 *)VirtFuncInvoker1< GUILayoutEntry_t474 *, int32_t >::Invoke(List_1_get_Item_m3347_MethodInfo_var, L_91, 0);
		NullCheck(L_92);
		RectOffset_t242 * L_93 = (RectOffset_t242 *)VirtFuncInvoker0< RectOffset_t242 * >::Invoke(&GUILayoutEntry_get_margin_m2270_MethodInfo, L_92);
		NullCheck(L_93);
		int32_t L_94 = RectOffset_get_left_m1879(L_93, /*hidden argument*/&RectOffset_get_left_m1879_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t270_il2cpp_TypeInfo));
		float L_95 = Mathf_Max_m1801(NULL /*static, unused*/, L_90, (((float)L_94)), /*hidden argument*/&Mathf_Max_m1801_MethodInfo);
		V_10 = L_95;
		float L_96 = V_11;
		List_1_t475 * L_97 = (__this->___entries_10);
		List_1_t475 * L_98 = (__this->___entries_10);
		NullCheck(L_98);
		int32_t L_99 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(List_1_get_Count_m3346_MethodInfo_var, L_98);
		NullCheck(L_97);
		GUILayoutEntry_t474 * L_100 = (GUILayoutEntry_t474 *)VirtFuncInvoker1< GUILayoutEntry_t474 *, int32_t >::Invoke(List_1_get_Item_m3347_MethodInfo_var, L_97, ((int32_t)((int32_t)L_99-(int32_t)1)));
		NullCheck(L_100);
		RectOffset_t242 * L_101 = (RectOffset_t242 *)VirtFuncInvoker0< RectOffset_t242 * >::Invoke(&GUILayoutEntry_get_margin_m2270_MethodInfo, L_100);
		NullCheck(L_101);
		int32_t L_102 = RectOffset_get_right_m2382(L_101, /*hidden argument*/&RectOffset_get_right_m2382_MethodInfo);
		float L_103 = Mathf_Max_m1801(NULL /*static, unused*/, L_96, (((float)L_102)), /*hidden argument*/&Mathf_Max_m1801_MethodInfo);
		V_11 = L_103;
	}

IL_0239:
	{
		float L_104 = ___x;
		float L_105 = V_10;
		___x = ((float)((float)L_104+(float)L_105));
		float L_106 = ___width;
		float L_107 = V_11;
		float L_108 = V_10;
		___width = ((float)((float)L_106-(float)((float)((float)L_107+(float)L_108))));
	}

IL_0248:
	{
		float L_109 = ___width;
		float L_110 = (__this->___spacing_13);
		List_1_t475 * L_111 = (__this->___entries_10);
		NullCheck(L_111);
		int32_t L_112 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(List_1_get_Count_m3346_MethodInfo_var, L_111);
		V_12 = ((float)((float)L_109-(float)((float)((float)L_110*(float)(((float)((int32_t)((int32_t)L_112-(int32_t)1))))))));
		V_13 = (0.0f);
		float L_113 = (__this->___childMinWidth_22);
		float L_114 = (__this->___childMaxWidth_23);
		if ((((float)L_113) == ((float)L_114)))
		{
			goto IL_02a1;
		}
	}
	{
		float L_115 = V_12;
		float L_116 = (__this->___childMinWidth_22);
		float L_117 = (__this->___childMaxWidth_23);
		float L_118 = (__this->___childMinWidth_22);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t270_il2cpp_TypeInfo));
		float L_119 = Mathf_Clamp_m1582(NULL /*static, unused*/, ((float)((float)((float)((float)L_115-(float)L_116))/(float)((float)((float)L_117-(float)L_118)))), (0.0f), (1.0f), /*hidden argument*/&Mathf_Clamp_m1582_MethodInfo);
		V_13 = L_119;
	}

IL_02a1:
	{
		V_14 = (0.0f);
		float L_120 = V_12;
		float L_121 = (__this->___childMaxWidth_23);
		if ((!(((float)L_120) > ((float)L_121))))
		{
			goto IL_02d4;
		}
	}
	{
		int32_t L_122 = (__this->___stretchableCountX_18);
		if ((((int32_t)L_122) <= ((int32_t)0)))
		{
			goto IL_02d4;
		}
	}
	{
		float L_123 = V_12;
		float L_124 = (__this->___childMaxWidth_23);
		int32_t L_125 = (__this->___stretchableCountX_18);
		V_14 = ((float)((float)((float)((float)L_123-(float)L_124))/(float)(((float)L_125))));
	}

IL_02d4:
	{
		V_15 = 0;
		V_16 = 1;
		List_1_t475 * L_126 = (__this->___entries_10);
		NullCheck(L_126);
		Enumerator_t685  L_127 = List_1_GetEnumerator_m3342(L_126, /*hidden argument*/List_1_GetEnumerator_m3342_MethodInfo_var);
		V_18 = L_127;
	}

IL_02e7:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0392;
		}

IL_02ec:
		{
			GUILayoutEntry_t474 * L_128 = Enumerator_get_Current_m3343((&V_18), /*hidden argument*/Enumerator_get_Current_m3343_MethodInfo_var);
			V_17 = L_128;
			GUILayoutEntry_t474 * L_129 = V_17;
			NullCheck(L_129);
			float L_130 = (L_129->___minWidth_0);
			GUILayoutEntry_t474 * L_131 = V_17;
			NullCheck(L_131);
			float L_132 = (L_131->___maxWidth_1);
			float L_133 = V_13;
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t270_il2cpp_TypeInfo));
			float L_134 = Mathf_Lerp_m1604(NULL /*static, unused*/, L_130, L_132, L_133, /*hidden argument*/&Mathf_Lerp_m1604_MethodInfo);
			V_19 = L_134;
			float L_135 = V_19;
			float L_136 = V_14;
			GUILayoutEntry_t474 * L_137 = V_17;
			NullCheck(L_137);
			int32_t L_138 = (L_137->___stretchWidth_5);
			V_19 = ((float)((float)L_135+(float)((float)((float)L_136*(float)(((float)L_138))))));
			GUILayoutEntry_t474 * L_139 = V_17;
			NullCheck(L_139);
			GUIStyle_t466 * L_140 = GUILayoutEntry_get_style_m2268(L_139, /*hidden argument*/&GUILayoutEntry_get_style_m2268_MethodInfo);
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUILayoutUtility_t472_il2cpp_TypeInfo));
			GUIStyle_t466 * L_141 = GUILayoutUtility_get_spaceStyle_m2265(NULL /*static, unused*/, /*hidden argument*/&GUILayoutUtility_get_spaceStyle_m2265_MethodInfo);
			if ((((Object_t*)(GUIStyle_t466 *)L_140) == ((Object_t*)(GUIStyle_t466 *)L_141)))
			{
				goto IL_0371;
			}
		}

IL_032d:
		{
			GUILayoutEntry_t474 * L_142 = V_17;
			NullCheck(L_142);
			RectOffset_t242 * L_143 = (RectOffset_t242 *)VirtFuncInvoker0< RectOffset_t242 * >::Invoke(&GUILayoutEntry_get_margin_m2270_MethodInfo, L_142);
			NullCheck(L_143);
			int32_t L_144 = RectOffset_get_left_m1879(L_143, /*hidden argument*/&RectOffset_get_left_m1879_MethodInfo);
			V_20 = L_144;
			bool L_145 = V_16;
			if (!L_145)
			{
				goto IL_0348;
			}
		}

IL_0342:
		{
			V_20 = 0;
			V_16 = 0;
		}

IL_0348:
		{
			int32_t L_146 = V_15;
			int32_t L_147 = V_20;
			if ((((int32_t)L_146) <= ((int32_t)L_147)))
			{
				goto IL_0358;
			}
		}

IL_0351:
		{
			int32_t L_148 = V_15;
			G_B39_0 = L_148;
			goto IL_035a;
		}

IL_0358:
		{
			int32_t L_149 = V_20;
			G_B39_0 = L_149;
		}

IL_035a:
		{
			V_21 = G_B39_0;
			float L_150 = ___x;
			int32_t L_151 = V_21;
			___x = ((float)((float)L_150+(float)(((float)L_151))));
			GUILayoutEntry_t474 * L_152 = V_17;
			NullCheck(L_152);
			RectOffset_t242 * L_153 = (RectOffset_t242 *)VirtFuncInvoker0< RectOffset_t242 * >::Invoke(&GUILayoutEntry_get_margin_m2270_MethodInfo, L_152);
			NullCheck(L_153);
			int32_t L_154 = RectOffset_get_right_m2382(L_153, /*hidden argument*/&RectOffset_get_right_m2382_MethodInfo);
			V_15 = L_154;
		}

IL_0371:
		{
			GUILayoutEntry_t474 * L_155 = V_17;
			float L_156 = ___x;
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t270_il2cpp_TypeInfo));
			float L_157 = roundf(L_156);
			float L_158 = V_19;
			float L_159 = roundf(L_158);
			NullCheck(L_155);
			VirtActionInvoker2< float, float >::Invoke(&GUILayoutEntry_SetHorizontal_m2273_MethodInfo, L_155, L_157, L_159);
			float L_160 = ___x;
			float L_161 = V_19;
			float L_162 = (__this->___spacing_13);
			___x = ((float)((float)L_160+(float)((float)((float)L_161+(float)L_162))));
		}

IL_0392:
		{
			bool L_163 = Enumerator_MoveNext_m3344((&V_18), /*hidden argument*/Enumerator_MoveNext_m3344_MethodInfo_var);
			if (L_163)
			{
				goto IL_02ec;
			}
		}

IL_039e:
		{
			IL2CPP_LEAVE(0x3B0, FINALLY_03a3);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t275 *)e.ex;
		goto FINALLY_03a3;
	}

FINALLY_03a3:
	{ // begin finally (depth: 1)
		Enumerator_t685  L_164 = V_18;
		Enumerator_t685  L_165 = L_164;
		Object_t * L_166 = Box(Enumerator_t685_il2cpp_TypeInfo_var, &L_165);
		NullCheck(L_166);
		InterfaceActionInvoker0::Invoke(&IDisposable_Dispose_m1379_MethodInfo, L_166);
		IL2CPP_END_FINALLY(931)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(931)
	{
		IL2CPP_JUMP_TBL(0x3B0, IL_03b0)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t275 *)
	}

IL_03b0:
	{
		return;
	}
}
// System.Void UnityEngine.GUILayoutGroup::CalcHeight()
extern TypeInfo* Enumerator_t685_il2cpp_TypeInfo_var;
extern MethodInfo* List_1_get_Count_m3346_MethodInfo_var;
extern MethodInfo* List_1_GetEnumerator_m3342_MethodInfo_var;
extern MethodInfo* Enumerator_get_Current_m3343_MethodInfo_var;
extern MethodInfo* Enumerator_MoveNext_m3344_MethodInfo_var;
extern MethodInfo* List_1_get_Item_m3347_MethodInfo_var;
extern "C" void GUILayoutGroup_CalcHeight_m2285 (GUILayoutGroup_t469 * __this, MethodInfo* method)
{
	static bool GUILayoutGroup_CalcHeight_m2285_init;
	if (!GUILayoutGroup_CalcHeight_m2285_init)
	{
		Enumerator_t685_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Enumerator_t685_0_0_0);
		List_1_get_Count_m3346_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1_get_Count_m3346_GenericMethod);
		List_1_GetEnumerator_m3342_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1_GetEnumerator_m3342_GenericMethod);
		Enumerator_get_Current_m3343_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Enumerator_get_Current_m3343_GenericMethod);
		Enumerator_MoveNext_m3344_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Enumerator_MoveNext_m3344_GenericMethod);
		List_1_get_Item_m3347_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1_get_Item_m3347_GenericMethod);
		GUILayoutGroup_CalcHeight_m2285_init = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	GUILayoutEntry_t474 * V_4 = {0};
	Enumerator_t685  V_5 = {0};
	RectOffset_t242 * V_6 = {0};
	int32_t V_7 = 0;
	bool V_8 = false;
	GUILayoutEntry_t474 * V_9 = {0};
	Enumerator_t685  V_10 = {0};
	RectOffset_t242 * V_11 = {0};
	float V_12 = 0.0f;
	float V_13 = 0.0f;
	float V_14 = 0.0f;
	Exception_t275 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t275 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	int32_t G_B36_0 = 0;
	int32_t G_B36_1 = 0;
	GUILayoutGroup_t469 * G_B36_2 = {0};
	int32_t G_B35_0 = 0;
	int32_t G_B35_1 = 0;
	GUILayoutGroup_t469 * G_B35_2 = {0};
	int32_t G_B37_0 = 0;
	int32_t G_B37_1 = 0;
	int32_t G_B37_2 = 0;
	GUILayoutGroup_t469 * G_B37_3 = {0};
	{
		List_1_t475 * L_0 = (__this->___entries_10);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(List_1_get_Count_m3346_MethodInfo_var, L_0);
		if (L_1)
		{
			goto IL_0033;
		}
	}
	{
		GUIStyle_t466 * L_2 = GUILayoutEntry_get_style_m2268(__this, /*hidden argument*/&GUILayoutEntry_get_style_m2268_MethodInfo);
		NullCheck(L_2);
		RectOffset_t242 * L_3 = GUIStyle_get_padding_m2400(L_2, /*hidden argument*/&GUIStyle_get_padding_m2400_MethodInfo);
		NullCheck(L_3);
		int32_t L_4 = RectOffset_get_vertical_m1871(L_3, /*hidden argument*/&RectOffset_get_vertical_m1871_MethodInfo);
		float L_5 = (((float)L_4));
		V_14 = L_5;
		__this->___minHeight_2 = L_5;
		float L_6 = V_14;
		__this->___maxHeight_3 = L_6;
		return;
	}

IL_0033:
	{
		float L_7 = (0.0f);
		V_14 = L_7;
		__this->___childMaxHeight_25 = L_7;
		float L_8 = V_14;
		__this->___childMinHeight_24 = L_8;
		V_0 = 0;
		V_1 = 0;
		__this->___stretchableCountY_19 = 0;
		bool L_9 = (__this->___isVertical_11);
		if (!L_9)
		{
			goto IL_01d4;
		}
	}
	{
		V_2 = 0;
		V_3 = 1;
		List_1_t475 * L_10 = (__this->___entries_10);
		NullCheck(L_10);
		Enumerator_t685  L_11 = List_1_GetEnumerator_m3342(L_10, /*hidden argument*/List_1_GetEnumerator_m3342_MethodInfo_var);
		V_5 = L_11;
	}

IL_0070:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0159;
		}

IL_0075:
		{
			GUILayoutEntry_t474 * L_12 = Enumerator_get_Current_m3343((&V_5), /*hidden argument*/Enumerator_get_Current_m3343_MethodInfo_var);
			V_4 = L_12;
			GUILayoutEntry_t474 * L_13 = V_4;
			NullCheck(L_13);
			VirtActionInvoker0::Invoke(&GUILayoutEntry_CalcHeight_m2272_MethodInfo, L_13);
			GUILayoutEntry_t474 * L_14 = V_4;
			NullCheck(L_14);
			RectOffset_t242 * L_15 = (RectOffset_t242 *)VirtFuncInvoker0< RectOffset_t242 * >::Invoke(&GUILayoutEntry_get_margin_m2270_MethodInfo, L_14);
			V_6 = L_15;
			GUILayoutEntry_t474 * L_16 = V_4;
			NullCheck(L_16);
			GUIStyle_t466 * L_17 = GUILayoutEntry_get_style_m2268(L_16, /*hidden argument*/&GUILayoutEntry_get_style_m2268_MethodInfo);
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUILayoutUtility_t472_il2cpp_TypeInfo));
			GUIStyle_t466 * L_18 = GUILayoutUtility_get_spaceStyle_m2265(NULL /*static, unused*/, /*hidden argument*/&GUILayoutUtility_get_spaceStyle_m2265_MethodInfo);
			if ((((Object_t*)(GUIStyle_t466 *)L_17) == ((Object_t*)(GUIStyle_t466 *)L_18)))
			{
				goto IL_011d;
			}
		}

IL_009f:
		{
			bool L_19 = V_3;
			if (L_19)
			{
				goto IL_00b9;
			}
		}

IL_00a5:
		{
			int32_t L_20 = V_2;
			RectOffset_t242 * L_21 = V_6;
			NullCheck(L_21);
			int32_t L_22 = RectOffset_get_top_m1880(L_21, /*hidden argument*/&RectOffset_get_top_m1880_MethodInfo);
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t270_il2cpp_TypeInfo));
			int32_t L_23 = Mathf_Max_m1675(NULL /*static, unused*/, L_20, L_22, /*hidden argument*/&Mathf_Max_m1675_MethodInfo);
			V_7 = L_23;
			goto IL_00be;
		}

IL_00b9:
		{
			V_7 = 0;
			V_3 = 0;
		}

IL_00be:
		{
			float L_24 = (__this->___childMinHeight_24);
			GUILayoutEntry_t474 * L_25 = V_4;
			NullCheck(L_25);
			float L_26 = (L_25->___minHeight_2);
			float L_27 = (__this->___spacing_13);
			int32_t L_28 = V_7;
			__this->___childMinHeight_24 = ((float)((float)L_24+(float)((float)((float)((float)((float)L_26+(float)L_27))+(float)(((float)L_28))))));
			float L_29 = (__this->___childMaxHeight_25);
			GUILayoutEntry_t474 * L_30 = V_4;
			NullCheck(L_30);
			float L_31 = (L_30->___maxHeight_3);
			float L_32 = (__this->___spacing_13);
			int32_t L_33 = V_7;
			__this->___childMaxHeight_25 = ((float)((float)L_29+(float)((float)((float)((float)((float)L_31+(float)L_32))+(float)(((float)L_33))))));
			RectOffset_t242 * L_34 = V_6;
			NullCheck(L_34);
			int32_t L_35 = RectOffset_get_bottom_m2385(L_34, /*hidden argument*/&RectOffset_get_bottom_m2385_MethodInfo);
			V_2 = L_35;
			int32_t L_36 = (__this->___stretchableCountY_19);
			GUILayoutEntry_t474 * L_37 = V_4;
			NullCheck(L_37);
			int32_t L_38 = (L_37->___stretchHeight_6);
			__this->___stretchableCountY_19 = ((int32_t)((int32_t)L_36+(int32_t)L_38));
			goto IL_0159;
		}

IL_011d:
		{
			float L_39 = (__this->___childMinHeight_24);
			GUILayoutEntry_t474 * L_40 = V_4;
			NullCheck(L_40);
			float L_41 = (L_40->___minHeight_2);
			__this->___childMinHeight_24 = ((float)((float)L_39+(float)L_41));
			float L_42 = (__this->___childMaxHeight_25);
			GUILayoutEntry_t474 * L_43 = V_4;
			NullCheck(L_43);
			float L_44 = (L_43->___maxHeight_3);
			__this->___childMaxHeight_25 = ((float)((float)L_42+(float)L_44));
			int32_t L_45 = (__this->___stretchableCountY_19);
			GUILayoutEntry_t474 * L_46 = V_4;
			NullCheck(L_46);
			int32_t L_47 = (L_46->___stretchHeight_6);
			__this->___stretchableCountY_19 = ((int32_t)((int32_t)L_45+(int32_t)L_47));
		}

IL_0159:
		{
			bool L_48 = Enumerator_MoveNext_m3344((&V_5), /*hidden argument*/Enumerator_MoveNext_m3344_MethodInfo_var);
			if (L_48)
			{
				goto IL_0075;
			}
		}

IL_0165:
		{
			IL2CPP_LEAVE(0x177, FINALLY_016a);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t275 *)e.ex;
		goto FINALLY_016a;
	}

FINALLY_016a:
	{ // begin finally (depth: 1)
		Enumerator_t685  L_49 = V_5;
		Enumerator_t685  L_50 = L_49;
		Object_t * L_51 = Box(Enumerator_t685_il2cpp_TypeInfo_var, &L_50);
		NullCheck(L_51);
		InterfaceActionInvoker0::Invoke(&IDisposable_Dispose_m1379_MethodInfo, L_51);
		IL2CPP_END_FINALLY(362)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(362)
	{
		IL2CPP_JUMP_TBL(0x177, IL_0177)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t275 *)
	}

IL_0177:
	{
		float L_52 = (__this->___childMinHeight_24);
		float L_53 = (__this->___spacing_13);
		__this->___childMinHeight_24 = ((float)((float)L_52-(float)L_53));
		float L_54 = (__this->___childMaxHeight_25);
		float L_55 = (__this->___spacing_13);
		__this->___childMaxHeight_25 = ((float)((float)L_54-(float)L_55));
		List_1_t475 * L_56 = (__this->___entries_10);
		NullCheck(L_56);
		int32_t L_57 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(List_1_get_Count_m3346_MethodInfo_var, L_56);
		if (!L_57)
		{
			goto IL_01cb;
		}
	}
	{
		List_1_t475 * L_58 = (__this->___entries_10);
		NullCheck(L_58);
		GUILayoutEntry_t474 * L_59 = (GUILayoutEntry_t474 *)VirtFuncInvoker1< GUILayoutEntry_t474 *, int32_t >::Invoke(List_1_get_Item_m3347_MethodInfo_var, L_58, 0);
		NullCheck(L_59);
		RectOffset_t242 * L_60 = (RectOffset_t242 *)VirtFuncInvoker0< RectOffset_t242 * >::Invoke(&GUILayoutEntry_get_margin_m2270_MethodInfo, L_59);
		NullCheck(L_60);
		int32_t L_61 = RectOffset_get_top_m1880(L_60, /*hidden argument*/&RectOffset_get_top_m1880_MethodInfo);
		V_0 = L_61;
		int32_t L_62 = V_2;
		V_1 = L_62;
		goto IL_01cf;
	}

IL_01cb:
	{
		int32_t L_63 = 0;
		V_0 = L_63;
		V_1 = L_63;
	}

IL_01cf:
	{
		goto IL_02b0;
	}

IL_01d4:
	{
		V_8 = 1;
		List_1_t475 * L_64 = (__this->___entries_10);
		NullCheck(L_64);
		Enumerator_t685  L_65 = List_1_GetEnumerator_m3342(L_64, /*hidden argument*/List_1_GetEnumerator_m3342_MethodInfo_var);
		V_10 = L_65;
	}

IL_01e4:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0292;
		}

IL_01e9:
		{
			GUILayoutEntry_t474 * L_66 = Enumerator_get_Current_m3343((&V_10), /*hidden argument*/Enumerator_get_Current_m3343_MethodInfo_var);
			V_9 = L_66;
			GUILayoutEntry_t474 * L_67 = V_9;
			NullCheck(L_67);
			VirtActionInvoker0::Invoke(&GUILayoutEntry_CalcHeight_m2272_MethodInfo, L_67);
			GUILayoutEntry_t474 * L_68 = V_9;
			NullCheck(L_68);
			RectOffset_t242 * L_69 = (RectOffset_t242 *)VirtFuncInvoker0< RectOffset_t242 * >::Invoke(&GUILayoutEntry_get_margin_m2270_MethodInfo, L_68);
			V_11 = L_69;
			GUILayoutEntry_t474 * L_70 = V_9;
			NullCheck(L_70);
			GUIStyle_t466 * L_71 = GUILayoutEntry_get_style_m2268(L_70, /*hidden argument*/&GUILayoutEntry_get_style_m2268_MethodInfo);
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUILayoutUtility_t472_il2cpp_TypeInfo));
			GUIStyle_t466 * L_72 = GUILayoutUtility_get_spaceStyle_m2265(NULL /*static, unused*/, /*hidden argument*/&GUILayoutUtility_get_spaceStyle_m2265_MethodInfo);
			if ((((Object_t*)(GUIStyle_t466 *)L_71) == ((Object_t*)(GUIStyle_t466 *)L_72)))
			{
				goto IL_027e;
			}
		}

IL_0213:
		{
			bool L_73 = V_8;
			if (L_73)
			{
				goto IL_023b;
			}
		}

IL_021a:
		{
			RectOffset_t242 * L_74 = V_11;
			NullCheck(L_74);
			int32_t L_75 = RectOffset_get_top_m1880(L_74, /*hidden argument*/&RectOffset_get_top_m1880_MethodInfo);
			int32_t L_76 = V_0;
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t270_il2cpp_TypeInfo));
			int32_t L_77 = Mathf_Min_m1677(NULL /*static, unused*/, L_75, L_76, /*hidden argument*/&Mathf_Min_m1677_MethodInfo);
			V_0 = L_77;
			RectOffset_t242 * L_78 = V_11;
			NullCheck(L_78);
			int32_t L_79 = RectOffset_get_bottom_m2385(L_78, /*hidden argument*/&RectOffset_get_bottom_m2385_MethodInfo);
			int32_t L_80 = V_1;
			int32_t L_81 = Mathf_Min_m1677(NULL /*static, unused*/, L_79, L_80, /*hidden argument*/&Mathf_Min_m1677_MethodInfo);
			V_1 = L_81;
			goto IL_024e;
		}

IL_023b:
		{
			RectOffset_t242 * L_82 = V_11;
			NullCheck(L_82);
			int32_t L_83 = RectOffset_get_top_m1880(L_82, /*hidden argument*/&RectOffset_get_top_m1880_MethodInfo);
			V_0 = L_83;
			RectOffset_t242 * L_84 = V_11;
			NullCheck(L_84);
			int32_t L_85 = RectOffset_get_bottom_m2385(L_84, /*hidden argument*/&RectOffset_get_bottom_m2385_MethodInfo);
			V_1 = L_85;
			V_8 = 0;
		}

IL_024e:
		{
			GUILayoutEntry_t474 * L_86 = V_9;
			NullCheck(L_86);
			float L_87 = (L_86->___minHeight_2);
			float L_88 = (__this->___childMinHeight_24);
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t270_il2cpp_TypeInfo));
			float L_89 = Mathf_Max_m1801(NULL /*static, unused*/, L_87, L_88, /*hidden argument*/&Mathf_Max_m1801_MethodInfo);
			__this->___childMinHeight_24 = L_89;
			GUILayoutEntry_t474 * L_90 = V_9;
			NullCheck(L_90);
			float L_91 = (L_90->___maxHeight_3);
			float L_92 = (__this->___childMaxHeight_25);
			float L_93 = Mathf_Max_m1801(NULL /*static, unused*/, L_91, L_92, /*hidden argument*/&Mathf_Max_m1801_MethodInfo);
			__this->___childMaxHeight_25 = L_93;
		}

IL_027e:
		{
			int32_t L_94 = (__this->___stretchableCountY_19);
			GUILayoutEntry_t474 * L_95 = V_9;
			NullCheck(L_95);
			int32_t L_96 = (L_95->___stretchHeight_6);
			__this->___stretchableCountY_19 = ((int32_t)((int32_t)L_94+(int32_t)L_96));
		}

IL_0292:
		{
			bool L_97 = Enumerator_MoveNext_m3344((&V_10), /*hidden argument*/Enumerator_MoveNext_m3344_MethodInfo_var);
			if (L_97)
			{
				goto IL_01e9;
			}
		}

IL_029e:
		{
			IL2CPP_LEAVE(0x2B0, FINALLY_02a3);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t275 *)e.ex;
		goto FINALLY_02a3;
	}

FINALLY_02a3:
	{ // begin finally (depth: 1)
		Enumerator_t685  L_98 = V_10;
		Enumerator_t685  L_99 = L_98;
		Object_t * L_100 = Box(Enumerator_t685_il2cpp_TypeInfo_var, &L_99);
		NullCheck(L_100);
		InterfaceActionInvoker0::Invoke(&IDisposable_Dispose_m1379_MethodInfo, L_100);
		IL2CPP_END_FINALLY(675)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(675)
	{
		IL2CPP_JUMP_TBL(0x2B0, IL_02b0)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t275 *)
	}

IL_02b0:
	{
		V_12 = (0.0f);
		V_13 = (0.0f);
		GUIStyle_t466 * L_101 = GUILayoutEntry_get_style_m2268(__this, /*hidden argument*/&GUILayoutEntry_get_style_m2268_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUIStyle_t466_il2cpp_TypeInfo));
		GUIStyle_t466 * L_102 = GUIStyle_get_none_m2411(NULL /*static, unused*/, /*hidden argument*/&GUIStyle_get_none_m2411_MethodInfo);
		if ((!(((Object_t*)(GUIStyle_t466 *)L_101) == ((Object_t*)(GUIStyle_t466 *)L_102))))
		{
			goto IL_02d9;
		}
	}
	{
		bool L_103 = (__this->___userSpecifiedHeight_21);
		if (!L_103)
		{
			goto IL_0310;
		}
	}

IL_02d9:
	{
		GUIStyle_t466 * L_104 = GUILayoutEntry_get_style_m2268(__this, /*hidden argument*/&GUILayoutEntry_get_style_m2268_MethodInfo);
		NullCheck(L_104);
		RectOffset_t242 * L_105 = GUIStyle_get_padding_m2400(L_104, /*hidden argument*/&GUIStyle_get_padding_m2400_MethodInfo);
		NullCheck(L_105);
		int32_t L_106 = RectOffset_get_top_m1880(L_105, /*hidden argument*/&RectOffset_get_top_m1880_MethodInfo);
		int32_t L_107 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t270_il2cpp_TypeInfo));
		int32_t L_108 = Mathf_Max_m1675(NULL /*static, unused*/, L_106, L_107, /*hidden argument*/&Mathf_Max_m1675_MethodInfo);
		V_12 = (((float)L_108));
		GUIStyle_t466 * L_109 = GUILayoutEntry_get_style_m2268(__this, /*hidden argument*/&GUILayoutEntry_get_style_m2268_MethodInfo);
		NullCheck(L_109);
		RectOffset_t242 * L_110 = GUIStyle_get_padding_m2400(L_109, /*hidden argument*/&GUIStyle_get_padding_m2400_MethodInfo);
		NullCheck(L_110);
		int32_t L_111 = RectOffset_get_bottom_m2385(L_110, /*hidden argument*/&RectOffset_get_bottom_m2385_MethodInfo);
		int32_t L_112 = V_1;
		int32_t L_113 = Mathf_Max_m1675(NULL /*static, unused*/, L_111, L_112, /*hidden argument*/&Mathf_Max_m1675_MethodInfo);
		V_13 = (((float)L_113));
		goto IL_0332;
	}

IL_0310:
	{
		RectOffset_t242 * L_114 = (__this->___m_Margin_26);
		int32_t L_115 = V_0;
		NullCheck(L_114);
		RectOffset_set_top_m2384(L_114, L_115, /*hidden argument*/&RectOffset_set_top_m2384_MethodInfo);
		RectOffset_t242 * L_116 = (__this->___m_Margin_26);
		int32_t L_117 = V_1;
		NullCheck(L_116);
		RectOffset_set_bottom_m2386(L_116, L_117, /*hidden argument*/&RectOffset_set_bottom_m2386_MethodInfo);
		float L_118 = (0.0f);
		V_13 = L_118;
		V_12 = L_118;
	}

IL_0332:
	{
		float L_119 = (__this->___minHeight_2);
		float L_120 = (__this->___childMinHeight_24);
		float L_121 = V_12;
		float L_122 = V_13;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t270_il2cpp_TypeInfo));
		float L_123 = Mathf_Max_m1801(NULL /*static, unused*/, L_119, ((float)((float)((float)((float)L_120+(float)L_121))+(float)L_122)), /*hidden argument*/&Mathf_Max_m1801_MethodInfo);
		__this->___minHeight_2 = L_123;
		float L_124 = (__this->___maxHeight_3);
		if ((!(((float)L_124) == ((float)(0.0f)))))
		{
			goto IL_03a1;
		}
	}
	{
		int32_t L_125 = (__this->___stretchHeight_6);
		int32_t L_126 = (__this->___stretchableCountY_19);
		GUIStyle_t466 * L_127 = GUILayoutEntry_get_style_m2268(__this, /*hidden argument*/&GUILayoutEntry_get_style_m2268_MethodInfo);
		NullCheck(L_127);
		bool L_128 = GUIStyle_get_stretchHeight_m2406(L_127, /*hidden argument*/&GUIStyle_get_stretchHeight_m2406_MethodInfo);
		G_B35_0 = L_126;
		G_B35_1 = L_125;
		G_B35_2 = __this;
		if (!L_128)
		{
			G_B36_0 = L_126;
			G_B36_1 = L_125;
			G_B36_2 = __this;
			goto IL_0382;
		}
	}
	{
		G_B37_0 = 1;
		G_B37_1 = G_B35_0;
		G_B37_2 = G_B35_1;
		G_B37_3 = G_B35_2;
		goto IL_0383;
	}

IL_0382:
	{
		G_B37_0 = 0;
		G_B37_1 = G_B36_0;
		G_B37_2 = G_B36_1;
		G_B37_3 = G_B36_2;
	}

IL_0383:
	{
		NullCheck(G_B37_3);
		G_B37_3->___stretchHeight_6 = ((int32_t)((int32_t)G_B37_2+(int32_t)((int32_t)((int32_t)G_B37_1+(int32_t)G_B37_0))));
		float L_129 = (__this->___childMaxHeight_25);
		float L_130 = V_12;
		float L_131 = V_13;
		__this->___maxHeight_3 = ((float)((float)((float)((float)L_129+(float)L_130))+(float)L_131));
		goto IL_03a8;
	}

IL_03a1:
	{
		__this->___stretchHeight_6 = 0;
	}

IL_03a8:
	{
		float L_132 = (__this->___maxHeight_3);
		float L_133 = (__this->___minHeight_2);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t270_il2cpp_TypeInfo));
		float L_134 = Mathf_Max_m1801(NULL /*static, unused*/, L_132, L_133, /*hidden argument*/&Mathf_Max_m1801_MethodInfo);
		__this->___maxHeight_3 = L_134;
		GUIStyle_t466 * L_135 = GUILayoutEntry_get_style_m2268(__this, /*hidden argument*/&GUILayoutEntry_get_style_m2268_MethodInfo);
		NullCheck(L_135);
		float L_136 = GUIStyle_get_fixedHeight_m2403(L_135, /*hidden argument*/&GUIStyle_get_fixedHeight_m2403_MethodInfo);
		if ((((float)L_136) == ((float)(0.0f))))
		{
			goto IL_03f7;
		}
	}
	{
		GUIStyle_t466 * L_137 = GUILayoutEntry_get_style_m2268(__this, /*hidden argument*/&GUILayoutEntry_get_style_m2268_MethodInfo);
		NullCheck(L_137);
		float L_138 = GUIStyle_get_fixedHeight_m2403(L_137, /*hidden argument*/&GUIStyle_get_fixedHeight_m2403_MethodInfo);
		float L_139 = L_138;
		V_14 = L_139;
		__this->___minHeight_2 = L_139;
		float L_140 = V_14;
		__this->___maxHeight_3 = L_140;
		__this->___stretchHeight_6 = 0;
	}

IL_03f7:
	{
		return;
	}
}
// System.Void UnityEngine.GUILayoutGroup::SetVertical(System.Single,System.Single)
extern TypeInfo* Enumerator_t685_il2cpp_TypeInfo_var;
extern MethodInfo* List_1_get_Count_m3346_MethodInfo_var;
extern MethodInfo* List_1_get_Item_m3347_MethodInfo_var;
extern MethodInfo* List_1_GetEnumerator_m3342_MethodInfo_var;
extern MethodInfo* Enumerator_get_Current_m3343_MethodInfo_var;
extern MethodInfo* Enumerator_MoveNext_m3344_MethodInfo_var;
extern "C" void GUILayoutGroup_SetVertical_m2286 (GUILayoutGroup_t469 * __this, float ___y, float ___height, MethodInfo* method)
{
	static bool GUILayoutGroup_SetVertical_m2286_init;
	if (!GUILayoutGroup_SetVertical_m2286_init)
	{
		Enumerator_t685_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Enumerator_t685_0_0_0);
		List_1_get_Count_m3346_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1_get_Count_m3346_GenericMethod);
		List_1_get_Item_m3347_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1_get_Item_m3347_GenericMethod);
		List_1_GetEnumerator_m3342_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1_GetEnumerator_m3342_GenericMethod);
		Enumerator_get_Current_m3343_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Enumerator_get_Current_m3343_GenericMethod);
		Enumerator_MoveNext_m3344_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Enumerator_MoveNext_m3344_GenericMethod);
		GUILayoutGroup_SetVertical_m2286_init = true;
	}
	RectOffset_t242 * V_0 = {0};
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	int32_t V_6 = 0;
	bool V_7 = false;
	GUILayoutEntry_t474 * V_8 = {0};
	Enumerator_t685  V_9 = {0};
	float V_10 = 0.0f;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	GUILayoutEntry_t474 * V_13 = {0};
	Enumerator_t685  V_14 = {0};
	float V_15 = 0.0f;
	float V_16 = 0.0f;
	float V_17 = 0.0f;
	float V_18 = 0.0f;
	float V_19 = 0.0f;
	GUILayoutEntry_t474 * V_20 = {0};
	Enumerator_t685  V_21 = {0};
	Exception_t275 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t275 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	int32_t G_B22_0 = 0;
	{
		float L_0 = ___y;
		float L_1 = ___height;
		GUILayoutEntry_SetVertical_m2274(__this, L_0, L_1, /*hidden argument*/&GUILayoutEntry_SetVertical_m2274_MethodInfo);
		List_1_t475 * L_2 = (__this->___entries_10);
		NullCheck(L_2);
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(List_1_get_Count_m3346_MethodInfo_var, L_2);
		if (L_3)
		{
			goto IL_0019;
		}
	}
	{
		return;
	}

IL_0019:
	{
		GUIStyle_t466 * L_4 = GUILayoutEntry_get_style_m2268(__this, /*hidden argument*/&GUILayoutEntry_get_style_m2268_MethodInfo);
		NullCheck(L_4);
		RectOffset_t242 * L_5 = GUIStyle_get_padding_m2400(L_4, /*hidden argument*/&GUIStyle_get_padding_m2400_MethodInfo);
		V_0 = L_5;
		bool L_6 = (__this->___resetCoords_12);
		if (!L_6)
		{
			goto IL_0037;
		}
	}
	{
		___y = (0.0f);
	}

IL_0037:
	{
		bool L_7 = (__this->___isVertical_11);
		if (!L_7)
		{
			goto IL_022f;
		}
	}
	{
		GUIStyle_t466 * L_8 = GUILayoutEntry_get_style_m2268(__this, /*hidden argument*/&GUILayoutEntry_get_style_m2268_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUIStyle_t466_il2cpp_TypeInfo));
		GUIStyle_t466 * L_9 = GUIStyle_get_none_m2411(NULL /*static, unused*/, /*hidden argument*/&GUIStyle_get_none_m2411_MethodInfo);
		if ((((Object_t*)(GUIStyle_t466 *)L_8) == ((Object_t*)(GUIStyle_t466 *)L_9)))
		{
			goto IL_00c6;
		}
	}
	{
		RectOffset_t242 * L_10 = V_0;
		NullCheck(L_10);
		int32_t L_11 = RectOffset_get_top_m1880(L_10, /*hidden argument*/&RectOffset_get_top_m1880_MethodInfo);
		V_1 = (((float)L_11));
		RectOffset_t242 * L_12 = V_0;
		NullCheck(L_12);
		int32_t L_13 = RectOffset_get_bottom_m2385(L_12, /*hidden argument*/&RectOffset_get_bottom_m2385_MethodInfo);
		V_2 = (((float)L_13));
		List_1_t475 * L_14 = (__this->___entries_10);
		NullCheck(L_14);
		int32_t L_15 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(List_1_get_Count_m3346_MethodInfo_var, L_14);
		if (!L_15)
		{
			goto IL_00ba;
		}
	}
	{
		float L_16 = V_1;
		List_1_t475 * L_17 = (__this->___entries_10);
		NullCheck(L_17);
		GUILayoutEntry_t474 * L_18 = (GUILayoutEntry_t474 *)VirtFuncInvoker1< GUILayoutEntry_t474 *, int32_t >::Invoke(List_1_get_Item_m3347_MethodInfo_var, L_17, 0);
		NullCheck(L_18);
		RectOffset_t242 * L_19 = (RectOffset_t242 *)VirtFuncInvoker0< RectOffset_t242 * >::Invoke(&GUILayoutEntry_get_margin_m2270_MethodInfo, L_18);
		NullCheck(L_19);
		int32_t L_20 = RectOffset_get_top_m1880(L_19, /*hidden argument*/&RectOffset_get_top_m1880_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t270_il2cpp_TypeInfo));
		float L_21 = Mathf_Max_m1801(NULL /*static, unused*/, L_16, (((float)L_20)), /*hidden argument*/&Mathf_Max_m1801_MethodInfo);
		V_1 = L_21;
		float L_22 = V_2;
		List_1_t475 * L_23 = (__this->___entries_10);
		List_1_t475 * L_24 = (__this->___entries_10);
		NullCheck(L_24);
		int32_t L_25 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(List_1_get_Count_m3346_MethodInfo_var, L_24);
		NullCheck(L_23);
		GUILayoutEntry_t474 * L_26 = (GUILayoutEntry_t474 *)VirtFuncInvoker1< GUILayoutEntry_t474 *, int32_t >::Invoke(List_1_get_Item_m3347_MethodInfo_var, L_23, ((int32_t)((int32_t)L_25-(int32_t)1)));
		NullCheck(L_26);
		RectOffset_t242 * L_27 = (RectOffset_t242 *)VirtFuncInvoker0< RectOffset_t242 * >::Invoke(&GUILayoutEntry_get_margin_m2270_MethodInfo, L_26);
		NullCheck(L_27);
		int32_t L_28 = RectOffset_get_bottom_m2385(L_27, /*hidden argument*/&RectOffset_get_bottom_m2385_MethodInfo);
		float L_29 = Mathf_Max_m1801(NULL /*static, unused*/, L_22, (((float)L_28)), /*hidden argument*/&Mathf_Max_m1801_MethodInfo);
		V_2 = L_29;
	}

IL_00ba:
	{
		float L_30 = ___y;
		float L_31 = V_1;
		___y = ((float)((float)L_30+(float)L_31));
		float L_32 = ___height;
		float L_33 = V_2;
		float L_34 = V_1;
		___height = ((float)((float)L_32-(float)((float)((float)L_33+(float)L_34))));
	}

IL_00c6:
	{
		float L_35 = ___height;
		float L_36 = (__this->___spacing_13);
		List_1_t475 * L_37 = (__this->___entries_10);
		NullCheck(L_37);
		int32_t L_38 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(List_1_get_Count_m3346_MethodInfo_var, L_37);
		V_3 = ((float)((float)L_35-(float)((float)((float)L_36*(float)(((float)((int32_t)((int32_t)L_38-(int32_t)1))))))));
		V_4 = (0.0f);
		float L_39 = (__this->___childMinHeight_24);
		float L_40 = (__this->___childMaxHeight_25);
		if ((((float)L_39) == ((float)L_40)))
		{
			goto IL_011d;
		}
	}
	{
		float L_41 = V_3;
		float L_42 = (__this->___childMinHeight_24);
		float L_43 = (__this->___childMaxHeight_25);
		float L_44 = (__this->___childMinHeight_24);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t270_il2cpp_TypeInfo));
		float L_45 = Mathf_Clamp_m1582(NULL /*static, unused*/, ((float)((float)((float)((float)L_41-(float)L_42))/(float)((float)((float)L_43-(float)L_44)))), (0.0f), (1.0f), /*hidden argument*/&Mathf_Clamp_m1582_MethodInfo);
		V_4 = L_45;
	}

IL_011d:
	{
		V_5 = (0.0f);
		float L_46 = V_3;
		float L_47 = (__this->___childMaxHeight_25);
		if ((!(((float)L_46) > ((float)L_47))))
		{
			goto IL_014e;
		}
	}
	{
		int32_t L_48 = (__this->___stretchableCountY_19);
		if ((((int32_t)L_48) <= ((int32_t)0)))
		{
			goto IL_014e;
		}
	}
	{
		float L_49 = V_3;
		float L_50 = (__this->___childMaxHeight_25);
		int32_t L_51 = (__this->___stretchableCountY_19);
		V_5 = ((float)((float)((float)((float)L_49-(float)L_50))/(float)(((float)L_51))));
	}

IL_014e:
	{
		V_6 = 0;
		V_7 = 1;
		List_1_t475 * L_52 = (__this->___entries_10);
		NullCheck(L_52);
		Enumerator_t685  L_53 = List_1_GetEnumerator_m3342(L_52, /*hidden argument*/List_1_GetEnumerator_m3342_MethodInfo_var);
		V_9 = L_53;
	}

IL_0161:
	try
	{ // begin try (depth: 1)
		{
			goto IL_020c;
		}

IL_0166:
		{
			GUILayoutEntry_t474 * L_54 = Enumerator_get_Current_m3343((&V_9), /*hidden argument*/Enumerator_get_Current_m3343_MethodInfo_var);
			V_8 = L_54;
			GUILayoutEntry_t474 * L_55 = V_8;
			NullCheck(L_55);
			float L_56 = (L_55->___minHeight_2);
			GUILayoutEntry_t474 * L_57 = V_8;
			NullCheck(L_57);
			float L_58 = (L_57->___maxHeight_3);
			float L_59 = V_4;
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t270_il2cpp_TypeInfo));
			float L_60 = Mathf_Lerp_m1604(NULL /*static, unused*/, L_56, L_58, L_59, /*hidden argument*/&Mathf_Lerp_m1604_MethodInfo);
			V_10 = L_60;
			float L_61 = V_10;
			float L_62 = V_5;
			GUILayoutEntry_t474 * L_63 = V_8;
			NullCheck(L_63);
			int32_t L_64 = (L_63->___stretchHeight_6);
			V_10 = ((float)((float)L_61+(float)((float)((float)L_62*(float)(((float)L_64))))));
			GUILayoutEntry_t474 * L_65 = V_8;
			NullCheck(L_65);
			GUIStyle_t466 * L_66 = GUILayoutEntry_get_style_m2268(L_65, /*hidden argument*/&GUILayoutEntry_get_style_m2268_MethodInfo);
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUILayoutUtility_t472_il2cpp_TypeInfo));
			GUIStyle_t466 * L_67 = GUILayoutUtility_get_spaceStyle_m2265(NULL /*static, unused*/, /*hidden argument*/&GUILayoutUtility_get_spaceStyle_m2265_MethodInfo);
			if ((((Object_t*)(GUIStyle_t466 *)L_66) == ((Object_t*)(GUIStyle_t466 *)L_67)))
			{
				goto IL_01eb;
			}
		}

IL_01a7:
		{
			GUILayoutEntry_t474 * L_68 = V_8;
			NullCheck(L_68);
			RectOffset_t242 * L_69 = (RectOffset_t242 *)VirtFuncInvoker0< RectOffset_t242 * >::Invoke(&GUILayoutEntry_get_margin_m2270_MethodInfo, L_68);
			NullCheck(L_69);
			int32_t L_70 = RectOffset_get_top_m1880(L_69, /*hidden argument*/&RectOffset_get_top_m1880_MethodInfo);
			V_11 = L_70;
			bool L_71 = V_7;
			if (!L_71)
			{
				goto IL_01c2;
			}
		}

IL_01bc:
		{
			V_11 = 0;
			V_7 = 0;
		}

IL_01c2:
		{
			int32_t L_72 = V_6;
			int32_t L_73 = V_11;
			if ((((int32_t)L_72) <= ((int32_t)L_73)))
			{
				goto IL_01d2;
			}
		}

IL_01cb:
		{
			int32_t L_74 = V_6;
			G_B22_0 = L_74;
			goto IL_01d4;
		}

IL_01d2:
		{
			int32_t L_75 = V_11;
			G_B22_0 = L_75;
		}

IL_01d4:
		{
			V_12 = G_B22_0;
			float L_76 = ___y;
			int32_t L_77 = V_12;
			___y = ((float)((float)L_76+(float)(((float)L_77))));
			GUILayoutEntry_t474 * L_78 = V_8;
			NullCheck(L_78);
			RectOffset_t242 * L_79 = (RectOffset_t242 *)VirtFuncInvoker0< RectOffset_t242 * >::Invoke(&GUILayoutEntry_get_margin_m2270_MethodInfo, L_78);
			NullCheck(L_79);
			int32_t L_80 = RectOffset_get_bottom_m2385(L_79, /*hidden argument*/&RectOffset_get_bottom_m2385_MethodInfo);
			V_6 = L_80;
		}

IL_01eb:
		{
			GUILayoutEntry_t474 * L_81 = V_8;
			float L_82 = ___y;
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t270_il2cpp_TypeInfo));
			float L_83 = roundf(L_82);
			float L_84 = V_10;
			float L_85 = roundf(L_84);
			NullCheck(L_81);
			VirtActionInvoker2< float, float >::Invoke(&GUILayoutEntry_SetVertical_m2274_MethodInfo, L_81, L_83, L_85);
			float L_86 = ___y;
			float L_87 = V_10;
			float L_88 = (__this->___spacing_13);
			___y = ((float)((float)L_86+(float)((float)((float)L_87+(float)L_88))));
		}

IL_020c:
		{
			bool L_89 = Enumerator_MoveNext_m3344((&V_9), /*hidden argument*/Enumerator_MoveNext_m3344_MethodInfo_var);
			if (L_89)
			{
				goto IL_0166;
			}
		}

IL_0218:
		{
			IL2CPP_LEAVE(0x22A, FINALLY_021d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t275 *)e.ex;
		goto FINALLY_021d;
	}

FINALLY_021d:
	{ // begin finally (depth: 1)
		Enumerator_t685  L_90 = V_9;
		Enumerator_t685  L_91 = L_90;
		Object_t * L_92 = Box(Enumerator_t685_il2cpp_TypeInfo_var, &L_91);
		NullCheck(L_92);
		InterfaceActionInvoker0::Invoke(&IDisposable_Dispose_m1379_MethodInfo, L_92);
		IL2CPP_END_FINALLY(541)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(541)
	{
		IL2CPP_JUMP_TBL(0x22A, IL_022a)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t275 *)
	}

IL_022a:
	{
		goto IL_03c1;
	}

IL_022f:
	{
		GUIStyle_t466 * L_93 = GUILayoutEntry_get_style_m2268(__this, /*hidden argument*/&GUILayoutEntry_get_style_m2268_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUIStyle_t466_il2cpp_TypeInfo));
		GUIStyle_t466 * L_94 = GUIStyle_get_none_m2411(NULL /*static, unused*/, /*hidden argument*/&GUIStyle_get_none_m2411_MethodInfo);
		if ((((Object_t*)(GUIStyle_t466 *)L_93) == ((Object_t*)(GUIStyle_t466 *)L_94)))
		{
			goto IL_02f6;
		}
	}
	{
		List_1_t475 * L_95 = (__this->___entries_10);
		NullCheck(L_95);
		Enumerator_t685  L_96 = List_1_GetEnumerator_m3342(L_95, /*hidden argument*/List_1_GetEnumerator_m3342_MethodInfo_var);
		V_14 = L_96;
	}

IL_024c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_02d3;
		}

IL_0251:
		{
			GUILayoutEntry_t474 * L_97 = Enumerator_get_Current_m3343((&V_14), /*hidden argument*/Enumerator_get_Current_m3343_MethodInfo_var);
			V_13 = L_97;
			GUILayoutEntry_t474 * L_98 = V_13;
			NullCheck(L_98);
			RectOffset_t242 * L_99 = (RectOffset_t242 *)VirtFuncInvoker0< RectOffset_t242 * >::Invoke(&GUILayoutEntry_get_margin_m2270_MethodInfo, L_98);
			NullCheck(L_99);
			int32_t L_100 = RectOffset_get_top_m1880(L_99, /*hidden argument*/&RectOffset_get_top_m1880_MethodInfo);
			RectOffset_t242 * L_101 = V_0;
			NullCheck(L_101);
			int32_t L_102 = RectOffset_get_top_m1880(L_101, /*hidden argument*/&RectOffset_get_top_m1880_MethodInfo);
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t270_il2cpp_TypeInfo));
			int32_t L_103 = Mathf_Max_m1675(NULL /*static, unused*/, L_100, L_102, /*hidden argument*/&Mathf_Max_m1675_MethodInfo);
			V_15 = (((float)L_103));
			float L_104 = ___y;
			float L_105 = V_15;
			V_16 = ((float)((float)L_104+(float)L_105));
			float L_106 = ___height;
			GUILayoutEntry_t474 * L_107 = V_13;
			NullCheck(L_107);
			RectOffset_t242 * L_108 = (RectOffset_t242 *)VirtFuncInvoker0< RectOffset_t242 * >::Invoke(&GUILayoutEntry_get_margin_m2270_MethodInfo, L_107);
			NullCheck(L_108);
			int32_t L_109 = RectOffset_get_bottom_m2385(L_108, /*hidden argument*/&RectOffset_get_bottom_m2385_MethodInfo);
			RectOffset_t242 * L_110 = V_0;
			NullCheck(L_110);
			int32_t L_111 = RectOffset_get_bottom_m2385(L_110, /*hidden argument*/&RectOffset_get_bottom_m2385_MethodInfo);
			int32_t L_112 = Mathf_Max_m1675(NULL /*static, unused*/, L_109, L_111, /*hidden argument*/&Mathf_Max_m1675_MethodInfo);
			float L_113 = V_15;
			V_17 = ((float)((float)((float)((float)L_106-(float)(((float)L_112))))-(float)L_113));
			GUILayoutEntry_t474 * L_114 = V_13;
			NullCheck(L_114);
			int32_t L_115 = (L_114->___stretchHeight_6);
			if (!L_115)
			{
				goto IL_02b5;
			}
		}

IL_02a5:
		{
			GUILayoutEntry_t474 * L_116 = V_13;
			float L_117 = V_16;
			float L_118 = V_17;
			NullCheck(L_116);
			VirtActionInvoker2< float, float >::Invoke(&GUILayoutEntry_SetVertical_m2274_MethodInfo, L_116, L_117, L_118);
			goto IL_02d3;
		}

IL_02b5:
		{
			GUILayoutEntry_t474 * L_119 = V_13;
			float L_120 = V_16;
			float L_121 = V_17;
			GUILayoutEntry_t474 * L_122 = V_13;
			NullCheck(L_122);
			float L_123 = (L_122->___minHeight_2);
			GUILayoutEntry_t474 * L_124 = V_13;
			NullCheck(L_124);
			float L_125 = (L_124->___maxHeight_3);
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t270_il2cpp_TypeInfo));
			float L_126 = Mathf_Clamp_m1582(NULL /*static, unused*/, L_121, L_123, L_125, /*hidden argument*/&Mathf_Clamp_m1582_MethodInfo);
			NullCheck(L_119);
			VirtActionInvoker2< float, float >::Invoke(&GUILayoutEntry_SetVertical_m2274_MethodInfo, L_119, L_120, L_126);
		}

IL_02d3:
		{
			bool L_127 = Enumerator_MoveNext_m3344((&V_14), /*hidden argument*/Enumerator_MoveNext_m3344_MethodInfo_var);
			if (L_127)
			{
				goto IL_0251;
			}
		}

IL_02df:
		{
			IL2CPP_LEAVE(0x2F1, FINALLY_02e4);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t275 *)e.ex;
		goto FINALLY_02e4;
	}

FINALLY_02e4:
	{ // begin finally (depth: 1)
		Enumerator_t685  L_128 = V_14;
		Enumerator_t685  L_129 = L_128;
		Object_t * L_130 = Box(Enumerator_t685_il2cpp_TypeInfo_var, &L_129);
		NullCheck(L_130);
		InterfaceActionInvoker0::Invoke(&IDisposable_Dispose_m1379_MethodInfo, L_130);
		IL2CPP_END_FINALLY(740)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(740)
	{
		IL2CPP_JUMP_TBL(0x2F1, IL_02f1)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t275 *)
	}

IL_02f1:
	{
		goto IL_03c1;
	}

IL_02f6:
	{
		float L_131 = ___y;
		RectOffset_t242 * L_132 = (RectOffset_t242 *)VirtFuncInvoker0< RectOffset_t242 * >::Invoke(&GUILayoutGroup_get_margin_m2279_MethodInfo, __this);
		NullCheck(L_132);
		int32_t L_133 = RectOffset_get_top_m1880(L_132, /*hidden argument*/&RectOffset_get_top_m1880_MethodInfo);
		V_18 = ((float)((float)L_131-(float)(((float)L_133))));
		float L_134 = ___height;
		RectOffset_t242 * L_135 = (RectOffset_t242 *)VirtFuncInvoker0< RectOffset_t242 * >::Invoke(&GUILayoutGroup_get_margin_m2279_MethodInfo, __this);
		NullCheck(L_135);
		int32_t L_136 = RectOffset_get_vertical_m1871(L_135, /*hidden argument*/&RectOffset_get_vertical_m1871_MethodInfo);
		V_19 = ((float)((float)L_134+(float)(((float)L_136))));
		List_1_t475 * L_137 = (__this->___entries_10);
		NullCheck(L_137);
		Enumerator_t685  L_138 = List_1_GetEnumerator_m3342(L_137, /*hidden argument*/List_1_GetEnumerator_m3342_MethodInfo_var);
		V_21 = L_138;
	}

IL_0323:
	try
	{ // begin try (depth: 1)
		{
			goto IL_03a3;
		}

IL_0328:
		{
			GUILayoutEntry_t474 * L_139 = Enumerator_get_Current_m3343((&V_21), /*hidden argument*/Enumerator_get_Current_m3343_MethodInfo_var);
			V_20 = L_139;
			GUILayoutEntry_t474 * L_140 = V_20;
			NullCheck(L_140);
			int32_t L_141 = (L_140->___stretchHeight_6);
			if (!L_141)
			{
				goto IL_0369;
			}
		}

IL_033d:
		{
			GUILayoutEntry_t474 * L_142 = V_20;
			float L_143 = V_18;
			GUILayoutEntry_t474 * L_144 = V_20;
			NullCheck(L_144);
			RectOffset_t242 * L_145 = (RectOffset_t242 *)VirtFuncInvoker0< RectOffset_t242 * >::Invoke(&GUILayoutEntry_get_margin_m2270_MethodInfo, L_144);
			NullCheck(L_145);
			int32_t L_146 = RectOffset_get_top_m1880(L_145, /*hidden argument*/&RectOffset_get_top_m1880_MethodInfo);
			float L_147 = V_19;
			GUILayoutEntry_t474 * L_148 = V_20;
			NullCheck(L_148);
			RectOffset_t242 * L_149 = (RectOffset_t242 *)VirtFuncInvoker0< RectOffset_t242 * >::Invoke(&GUILayoutEntry_get_margin_m2270_MethodInfo, L_148);
			NullCheck(L_149);
			int32_t L_150 = RectOffset_get_vertical_m1871(L_149, /*hidden argument*/&RectOffset_get_vertical_m1871_MethodInfo);
			NullCheck(L_142);
			VirtActionInvoker2< float, float >::Invoke(&GUILayoutEntry_SetVertical_m2274_MethodInfo, L_142, ((float)((float)L_143+(float)(((float)L_146)))), ((float)((float)L_147-(float)(((float)L_150)))));
			goto IL_03a3;
		}

IL_0369:
		{
			GUILayoutEntry_t474 * L_151 = V_20;
			float L_152 = V_18;
			GUILayoutEntry_t474 * L_153 = V_20;
			NullCheck(L_153);
			RectOffset_t242 * L_154 = (RectOffset_t242 *)VirtFuncInvoker0< RectOffset_t242 * >::Invoke(&GUILayoutEntry_get_margin_m2270_MethodInfo, L_153);
			NullCheck(L_154);
			int32_t L_155 = RectOffset_get_top_m1880(L_154, /*hidden argument*/&RectOffset_get_top_m1880_MethodInfo);
			float L_156 = V_19;
			GUILayoutEntry_t474 * L_157 = V_20;
			NullCheck(L_157);
			RectOffset_t242 * L_158 = (RectOffset_t242 *)VirtFuncInvoker0< RectOffset_t242 * >::Invoke(&GUILayoutEntry_get_margin_m2270_MethodInfo, L_157);
			NullCheck(L_158);
			int32_t L_159 = RectOffset_get_vertical_m1871(L_158, /*hidden argument*/&RectOffset_get_vertical_m1871_MethodInfo);
			GUILayoutEntry_t474 * L_160 = V_20;
			NullCheck(L_160);
			float L_161 = (L_160->___minHeight_2);
			GUILayoutEntry_t474 * L_162 = V_20;
			NullCheck(L_162);
			float L_163 = (L_162->___maxHeight_3);
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t270_il2cpp_TypeInfo));
			float L_164 = Mathf_Clamp_m1582(NULL /*static, unused*/, ((float)((float)L_156-(float)(((float)L_159)))), L_161, L_163, /*hidden argument*/&Mathf_Clamp_m1582_MethodInfo);
			NullCheck(L_151);
			VirtActionInvoker2< float, float >::Invoke(&GUILayoutEntry_SetVertical_m2274_MethodInfo, L_151, ((float)((float)L_152+(float)(((float)L_155)))), L_164);
		}

IL_03a3:
		{
			bool L_165 = Enumerator_MoveNext_m3344((&V_21), /*hidden argument*/Enumerator_MoveNext_m3344_MethodInfo_var);
			if (L_165)
			{
				goto IL_0328;
			}
		}

IL_03af:
		{
			IL2CPP_LEAVE(0x3C1, FINALLY_03b4);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t275 *)e.ex;
		goto FINALLY_03b4;
	}

FINALLY_03b4:
	{ // begin finally (depth: 1)
		Enumerator_t685  L_166 = V_21;
		Enumerator_t685  L_167 = L_166;
		Object_t * L_168 = Box(Enumerator_t685_il2cpp_TypeInfo_var, &L_167);
		NullCheck(L_168);
		InterfaceActionInvoker0::Invoke(&IDisposable_Dispose_m1379_MethodInfo, L_168);
		IL2CPP_END_FINALLY(948)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(948)
	{
		IL2CPP_JUMP_TBL(0x3C1, IL_03c1)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t275 *)
	}

IL_03c1:
	{
		return;
	}
}
// System.String UnityEngine.GUILayoutGroup::ToString()
extern MethodInfo GUILayoutGroup_ToString_m2287_MethodInfo;
extern TypeInfo* ObjectU5BU5D_t269_il2cpp_TypeInfo_var;
extern TypeInfo* Enumerator_t685_il2cpp_TypeInfo_var;
extern MethodInfo* List_1_GetEnumerator_m3342_MethodInfo_var;
extern MethodInfo* Enumerator_get_Current_m3343_MethodInfo_var;
extern MethodInfo* Enumerator_MoveNext_m3344_MethodInfo_var;
extern "C" String_t* GUILayoutGroup_ToString_m2287 (GUILayoutGroup_t469 * __this, MethodInfo* method)
{
	static bool GUILayoutGroup_ToString_m2287_init;
	if (!GUILayoutGroup_ToString_m2287_init)
	{
		ObjectU5BU5D_t269_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t269_0_0_0);
		Enumerator_t685_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Enumerator_t685_0_0_0);
		List_1_GetEnumerator_m3342_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1_GetEnumerator_m3342_GenericMethod);
		Enumerator_get_Current_m3343_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Enumerator_get_Current_m3343_GenericMethod);
		Enumerator_MoveNext_m3344_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Enumerator_MoveNext_m3344_GenericMethod);
		GUILayoutGroup_ToString_m2287_init = true;
	}
	String_t* V_0 = {0};
	String_t* V_1 = {0};
	int32_t V_2 = 0;
	GUILayoutEntry_t474 * V_3 = {0};
	Enumerator_t685  V_4 = {0};
	String_t* V_5 = {0};
	Exception_t275 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t275 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_0 = ((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2;
		V_0 = L_0;
		String_t* L_1 = ((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2;
		V_1 = L_1;
		V_2 = 0;
		goto IL_0023;
	}

IL_0013:
	{
		String_t* L_2 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_3 = String_Concat_m1678(NULL /*static, unused*/, L_2, (String_t*) &_stringLiteral89, /*hidden argument*/&String_Concat_m1678_MethodInfo);
		V_1 = L_3;
		int32_t L_4 = V_2;
		V_2 = ((int32_t)((int32_t)L_4+(int32_t)1));
	}

IL_0023:
	{
		int32_t L_5 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUILayoutEntry_t474_il2cpp_TypeInfo));
		int32_t L_6 = ((GUILayoutEntry_t474_StaticFields*)InitializedTypeInfo(&GUILayoutEntry_t474_il2cpp_TypeInfo)->static_fields)->___indent_9;
		if ((((int32_t)L_5) < ((int32_t)L_6)))
		{
			goto IL_0013;
		}
	}
	{
		String_t* L_7 = V_0;
		V_5 = L_7;
		ObjectU5BU5D_t269* L_8 = ((ObjectU5BU5D_t269*)SZArrayNew(ObjectU5BU5D_t269_il2cpp_TypeInfo_var, 5));
		String_t* L_9 = V_5;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 0);
		ArrayElementTypeCheck (L_8, L_9);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 0)) = (Object_t *)L_9;
		ObjectU5BU5D_t269* L_10 = L_8;
		String_t* L_11 = GUILayoutEntry_ToString_m2277(__this, /*hidden argument*/&GUILayoutEntry_ToString_m2277_MethodInfo);
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 1);
		ArrayElementTypeCheck (L_10, L_11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_10, 1)) = (Object_t *)L_11;
		ObjectU5BU5D_t269* L_12 = L_10;
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 2);
		ArrayElementTypeCheck (L_12, (String_t*) &_stringLiteral96);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_12, 2)) = (Object_t *)(String_t*) &_stringLiteral96;
		ObjectU5BU5D_t269* L_13 = L_12;
		float L_14 = (__this->___childMinHeight_24);
		float L_15 = L_14;
		Object_t * L_16 = Box(InitializedTypeInfo(&Single_t23_il2cpp_TypeInfo), &L_15);
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, 3);
		ArrayElementTypeCheck (L_13, L_16);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_13, 3)) = (Object_t *)L_16;
		ObjectU5BU5D_t269* L_17 = L_13;
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, 4);
		ArrayElementTypeCheck (L_17, (String_t*) &_stringLiteral97);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_17, 4)) = (Object_t *)(String_t*) &_stringLiteral97;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_18 = String_Concat_m1344(NULL /*static, unused*/, L_17, /*hidden argument*/&String_Concat_m1344_MethodInfo);
		V_0 = L_18;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUILayoutEntry_t474_il2cpp_TypeInfo));
		int32_t L_19 = ((GUILayoutEntry_t474_StaticFields*)InitializedTypeInfo(&GUILayoutEntry_t474_il2cpp_TypeInfo)->static_fields)->___indent_9;
		((GUILayoutEntry_t474_StaticFields*)InitializedTypeInfo(&GUILayoutEntry_t474_il2cpp_TypeInfo)->static_fields)->___indent_9 = ((int32_t)((int32_t)L_19+(int32_t)4));
		List_1_t475 * L_20 = (__this->___entries_10);
		NullCheck(L_20);
		Enumerator_t685  L_21 = List_1_GetEnumerator_m3342(L_20, /*hidden argument*/List_1_GetEnumerator_m3342_MethodInfo_var);
		V_4 = L_21;
	}

IL_0082:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00a1;
		}

IL_0087:
		{
			GUILayoutEntry_t474 * L_22 = Enumerator_get_Current_m3343((&V_4), /*hidden argument*/Enumerator_get_Current_m3343_MethodInfo_var);
			V_3 = L_22;
			String_t* L_23 = V_0;
			GUILayoutEntry_t474 * L_24 = V_3;
			NullCheck(L_24);
			String_t* L_25 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&GUILayoutEntry_ToString_m2277_MethodInfo, L_24);
			IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
			String_t* L_26 = String_Concat_m1615(NULL /*static, unused*/, L_23, L_25, (String_t*) &_stringLiteral98, /*hidden argument*/&String_Concat_m1615_MethodInfo);
			V_0 = L_26;
		}

IL_00a1:
		{
			bool L_27 = Enumerator_MoveNext_m3344((&V_4), /*hidden argument*/Enumerator_MoveNext_m3344_MethodInfo_var);
			if (L_27)
			{
				goto IL_0087;
			}
		}

IL_00ad:
		{
			IL2CPP_LEAVE(0xBF, FINALLY_00b2);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t275 *)e.ex;
		goto FINALLY_00b2;
	}

FINALLY_00b2:
	{ // begin finally (depth: 1)
		Enumerator_t685  L_28 = V_4;
		Enumerator_t685  L_29 = L_28;
		Object_t * L_30 = Box(Enumerator_t685_il2cpp_TypeInfo_var, &L_29);
		NullCheck(L_30);
		InterfaceActionInvoker0::Invoke(&IDisposable_Dispose_m1379_MethodInfo, L_30);
		IL2CPP_END_FINALLY(178)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(178)
	{
		IL2CPP_JUMP_TBL(0xBF, IL_00bf)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t275 *)
	}

IL_00bf:
	{
		String_t* L_31 = V_0;
		String_t* L_32 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_33 = String_Concat_m1615(NULL /*static, unused*/, L_31, L_32, (String_t*) &_stringLiteral99, /*hidden argument*/&String_Concat_m1615_MethodInfo);
		V_0 = L_33;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUILayoutEntry_t474_il2cpp_TypeInfo));
		int32_t L_34 = ((GUILayoutEntry_t474_StaticFields*)InitializedTypeInfo(&GUILayoutEntry_t474_il2cpp_TypeInfo)->static_fields)->___indent_9;
		((GUILayoutEntry_t474_StaticFields*)InitializedTypeInfo(&GUILayoutEntry_t474_il2cpp_TypeInfo)->static_fields)->___indent_9 = ((int32_t)((int32_t)L_34-(int32_t)4));
		String_t* L_35 = V_0;
		return L_35;
	}
}
// UnityEngine.GUIScrollGroup
#include "UnityEngine_UnityEngine_GUIScrollGroup.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo GUIScrollGroup_t476_il2cpp_TypeInfo;
// UnityEngine.GUIScrollGroup
#include "UnityEngine_UnityEngine_GUIScrollGroupMethodDeclarations.h"

extern MethodInfo GUIScrollGroup_SetHorizontal_m2290_MethodInfo;
extern MethodInfo GUIScrollGroup_CalcHeight_m2291_MethodInfo;


// System.Void UnityEngine.GUIScrollGroup::.ctor()
extern MethodInfo GUIScrollGroup__ctor_m2288_MethodInfo;
extern "C" void GUIScrollGroup__ctor_m2288 (GUIScrollGroup_t476 * __this, MethodInfo* method)
{
	{
		__this->___allowHorizontalScroll_33 = 1;
		__this->___allowVerticalScroll_34 = 1;
		GUILayoutGroup__ctor_m2278(__this, /*hidden argument*/&GUILayoutGroup__ctor_m2278_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.GUIScrollGroup::CalcWidth()
extern MethodInfo GUIScrollGroup_CalcWidth_m2289_MethodInfo;
extern "C" void GUIScrollGroup_CalcWidth_m2289 (GUIScrollGroup_t476 * __this, MethodInfo* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		float L_0 = (__this->___minWidth_0);
		V_0 = L_0;
		float L_1 = (__this->___maxWidth_1);
		V_1 = L_1;
		bool L_2 = (__this->___allowHorizontalScroll_33);
		if (!L_2)
		{
			goto IL_002f;
		}
	}
	{
		__this->___minWidth_0 = (0.0f);
		__this->___maxWidth_1 = (0.0f);
	}

IL_002f:
	{
		GUILayoutGroup_CalcWidth_m2283(__this, /*hidden argument*/&GUILayoutGroup_CalcWidth_m2283_MethodInfo);
		float L_3 = (__this->___minWidth_0);
		__this->___calcMinWidth_27 = L_3;
		float L_4 = (__this->___maxWidth_1);
		__this->___calcMaxWidth_28 = L_4;
		bool L_5 = (__this->___allowHorizontalScroll_33);
		if (!L_5)
		{
			goto IL_009e;
		}
	}
	{
		float L_6 = (__this->___minWidth_0);
		if ((!(((float)L_6) > ((float)(32.0f)))))
		{
			goto IL_0073;
		}
	}
	{
		__this->___minWidth_0 = (32.0f);
	}

IL_0073:
	{
		float L_7 = V_0;
		if ((((float)L_7) == ((float)(0.0f))))
		{
			goto IL_0085;
		}
	}
	{
		float L_8 = V_0;
		__this->___minWidth_0 = L_8;
	}

IL_0085:
	{
		float L_9 = V_1;
		if ((((float)L_9) == ((float)(0.0f))))
		{
			goto IL_009e;
		}
	}
	{
		float L_10 = V_1;
		__this->___maxWidth_1 = L_10;
		__this->___stretchWidth_5 = 0;
	}

IL_009e:
	{
		return;
	}
}
// System.Void UnityEngine.GUIScrollGroup::SetHorizontal(System.Single,System.Single)
extern "C" void GUIScrollGroup_SetHorizontal_m2290 (GUIScrollGroup_t476 * __this, float ___x, float ___width, MethodInfo* method)
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		bool L_0 = (__this->___needsVerticalScrollbar_36);
		if (!L_0)
		{
			goto IL_002f;
		}
	}
	{
		float L_1 = ___width;
		GUIStyle_t466 * L_2 = (__this->___verticalScrollbar_38);
		NullCheck(L_2);
		float L_3 = GUIStyle_get_fixedWidth_m2402(L_2, /*hidden argument*/&GUIStyle_get_fixedWidth_m2402_MethodInfo);
		GUIStyle_t466 * L_4 = (__this->___verticalScrollbar_38);
		NullCheck(L_4);
		RectOffset_t242 * L_5 = GUIStyle_get_margin_m2399(L_4, /*hidden argument*/&GUIStyle_get_margin_m2399_MethodInfo);
		NullCheck(L_5);
		int32_t L_6 = RectOffset_get_left_m1879(L_5, /*hidden argument*/&RectOffset_get_left_m1879_MethodInfo);
		G_B3_0 = ((float)((float)((float)((float)L_1-(float)L_3))-(float)(((float)L_6))));
		goto IL_0030;
	}

IL_002f:
	{
		float L_7 = ___width;
		G_B3_0 = L_7;
	}

IL_0030:
	{
		V_0 = G_B3_0;
		bool L_8 = (__this->___allowHorizontalScroll_33);
		if (!L_8)
		{
			goto IL_0091;
		}
	}
	{
		float L_9 = V_0;
		float L_10 = (__this->___calcMinWidth_27);
		if ((!(((float)L_9) < ((float)L_10))))
		{
			goto IL_0091;
		}
	}
	{
		__this->___needsHorizontalScrollbar_35 = 1;
		float L_11 = (__this->___calcMinWidth_27);
		__this->___minWidth_0 = L_11;
		float L_12 = (__this->___calcMaxWidth_28);
		__this->___maxWidth_1 = L_12;
		float L_13 = ___x;
		float L_14 = (__this->___calcMinWidth_27);
		GUILayoutGroup_SetHorizontal_m2284(__this, L_13, L_14, /*hidden argument*/&GUILayoutGroup_SetHorizontal_m2284_MethodInfo);
		Rect_t141 * L_15 = &(__this->___rect_4);
		float L_16 = ___width;
		Rect_set_width_m1589(L_15, L_16, /*hidden argument*/&Rect_set_width_m1589_MethodInfo);
		float L_17 = (__this->___calcMinWidth_27);
		__this->___clientWidth_31 = L_17;
		goto IL_00d6;
	}

IL_0091:
	{
		__this->___needsHorizontalScrollbar_35 = 0;
		bool L_18 = (__this->___allowHorizontalScroll_33);
		if (!L_18)
		{
			goto IL_00bb;
		}
	}
	{
		float L_19 = (__this->___calcMinWidth_27);
		__this->___minWidth_0 = L_19;
		float L_20 = (__this->___calcMaxWidth_28);
		__this->___maxWidth_1 = L_20;
	}

IL_00bb:
	{
		float L_21 = ___x;
		float L_22 = V_0;
		GUILayoutGroup_SetHorizontal_m2284(__this, L_21, L_22, /*hidden argument*/&GUILayoutGroup_SetHorizontal_m2284_MethodInfo);
		Rect_t141 * L_23 = &(__this->___rect_4);
		float L_24 = ___width;
		Rect_set_width_m1589(L_23, L_24, /*hidden argument*/&Rect_set_width_m1589_MethodInfo);
		float L_25 = V_0;
		__this->___clientWidth_31 = L_25;
	}

IL_00d6:
	{
		return;
	}
}
// System.Void UnityEngine.GUIScrollGroup::CalcHeight()
extern "C" void GUIScrollGroup_CalcHeight_m2291 (GUIScrollGroup_t476 * __this, MethodInfo* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		float L_0 = (__this->___minHeight_2);
		V_0 = L_0;
		float L_1 = (__this->___maxHeight_3);
		V_1 = L_1;
		bool L_2 = (__this->___allowVerticalScroll_34);
		if (!L_2)
		{
			goto IL_002f;
		}
	}
	{
		__this->___minHeight_2 = (0.0f);
		__this->___maxHeight_3 = (0.0f);
	}

IL_002f:
	{
		GUILayoutGroup_CalcHeight_m2285(__this, /*hidden argument*/&GUILayoutGroup_CalcHeight_m2285_MethodInfo);
		float L_3 = (__this->___minHeight_2);
		__this->___calcMinHeight_29 = L_3;
		float L_4 = (__this->___maxHeight_3);
		__this->___calcMaxHeight_30 = L_4;
		bool L_5 = (__this->___needsHorizontalScrollbar_35);
		if (!L_5)
		{
			goto IL_0092;
		}
	}
	{
		GUIStyle_t466 * L_6 = (__this->___horizontalScrollbar_37);
		NullCheck(L_6);
		float L_7 = GUIStyle_get_fixedHeight_m2403(L_6, /*hidden argument*/&GUIStyle_get_fixedHeight_m2403_MethodInfo);
		GUIStyle_t466 * L_8 = (__this->___horizontalScrollbar_37);
		NullCheck(L_8);
		RectOffset_t242 * L_9 = GUIStyle_get_margin_m2399(L_8, /*hidden argument*/&GUIStyle_get_margin_m2399_MethodInfo);
		NullCheck(L_9);
		int32_t L_10 = RectOffset_get_top_m1880(L_9, /*hidden argument*/&RectOffset_get_top_m1880_MethodInfo);
		V_2 = ((float)((float)L_7+(float)(((float)L_10))));
		float L_11 = (__this->___minHeight_2);
		float L_12 = V_2;
		__this->___minHeight_2 = ((float)((float)L_11+(float)L_12));
		float L_13 = (__this->___maxHeight_3);
		float L_14 = V_2;
		__this->___maxHeight_3 = ((float)((float)L_13+(float)L_14));
	}

IL_0092:
	{
		bool L_15 = (__this->___allowVerticalScroll_34);
		if (!L_15)
		{
			goto IL_00e3;
		}
	}
	{
		float L_16 = (__this->___minHeight_2);
		if ((!(((float)L_16) > ((float)(32.0f)))))
		{
			goto IL_00b8;
		}
	}
	{
		__this->___minHeight_2 = (32.0f);
	}

IL_00b8:
	{
		float L_17 = V_0;
		if ((((float)L_17) == ((float)(0.0f))))
		{
			goto IL_00ca;
		}
	}
	{
		float L_18 = V_0;
		__this->___minHeight_2 = L_18;
	}

IL_00ca:
	{
		float L_19 = V_1;
		if ((((float)L_19) == ((float)(0.0f))))
		{
			goto IL_00e3;
		}
	}
	{
		float L_20 = V_1;
		__this->___maxHeight_3 = L_20;
		__this->___stretchHeight_6 = 0;
	}

IL_00e3:
	{
		return;
	}
}
// System.Void UnityEngine.GUIScrollGroup::SetVertical(System.Single,System.Single)
extern MethodInfo GUIScrollGroup_SetVertical_m2292_MethodInfo;
extern "C" void GUIScrollGroup_SetVertical_m2292 (GUIScrollGroup_t476 * __this, float ___y, float ___height, MethodInfo* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		float L_0 = ___height;
		V_0 = L_0;
		bool L_1 = (__this->___needsHorizontalScrollbar_35);
		if (!L_1)
		{
			goto IL_002d;
		}
	}
	{
		float L_2 = V_0;
		GUIStyle_t466 * L_3 = (__this->___horizontalScrollbar_37);
		NullCheck(L_3);
		float L_4 = GUIStyle_get_fixedHeight_m2403(L_3, /*hidden argument*/&GUIStyle_get_fixedHeight_m2403_MethodInfo);
		GUIStyle_t466 * L_5 = (__this->___horizontalScrollbar_37);
		NullCheck(L_5);
		RectOffset_t242 * L_6 = GUIStyle_get_margin_m2399(L_5, /*hidden argument*/&GUIStyle_get_margin_m2399_MethodInfo);
		NullCheck(L_6);
		int32_t L_7 = RectOffset_get_top_m1880(L_6, /*hidden argument*/&RectOffset_get_top_m1880_MethodInfo);
		V_0 = ((float)((float)L_2-(float)((float)((float)L_4+(float)(((float)L_7))))));
	}

IL_002d:
	{
		bool L_8 = (__this->___allowVerticalScroll_34);
		if (!L_8)
		{
			goto IL_0139;
		}
	}
	{
		float L_9 = V_0;
		float L_10 = (__this->___calcMinHeight_29);
		if ((!(((float)L_9) < ((float)L_10))))
		{
			goto IL_0139;
		}
	}
	{
		bool L_11 = (__this->___needsHorizontalScrollbar_35);
		if (L_11)
		{
			goto IL_00db;
		}
	}
	{
		bool L_12 = (__this->___needsVerticalScrollbar_36);
		if (L_12)
		{
			goto IL_00db;
		}
	}
	{
		Rect_t141 * L_13 = &(__this->___rect_4);
		float L_14 = Rect_get_width_m1504(L_13, /*hidden argument*/&Rect_get_width_m1504_MethodInfo);
		GUIStyle_t466 * L_15 = (__this->___verticalScrollbar_38);
		NullCheck(L_15);
		float L_16 = GUIStyle_get_fixedWidth_m2402(L_15, /*hidden argument*/&GUIStyle_get_fixedWidth_m2402_MethodInfo);
		GUIStyle_t466 * L_17 = (__this->___verticalScrollbar_38);
		NullCheck(L_17);
		RectOffset_t242 * L_18 = GUIStyle_get_margin_m2399(L_17, /*hidden argument*/&GUIStyle_get_margin_m2399_MethodInfo);
		NullCheck(L_18);
		int32_t L_19 = RectOffset_get_left_m1879(L_18, /*hidden argument*/&RectOffset_get_left_m1879_MethodInfo);
		__this->___clientWidth_31 = ((float)((float)((float)((float)L_14-(float)L_16))-(float)(((float)L_19))));
		float L_20 = (__this->___clientWidth_31);
		float L_21 = (__this->___calcMinWidth_27);
		if ((!(((float)L_20) < ((float)L_21))))
		{
			goto IL_00a6;
		}
	}
	{
		float L_22 = (__this->___calcMinWidth_27);
		__this->___clientWidth_31 = L_22;
	}

IL_00a6:
	{
		Rect_t141 * L_23 = &(__this->___rect_4);
		float L_24 = Rect_get_width_m1504(L_23, /*hidden argument*/&Rect_get_width_m1504_MethodInfo);
		V_1 = L_24;
		Rect_t141 * L_25 = &(__this->___rect_4);
		float L_26 = Rect_get_x_m1509(L_25, /*hidden argument*/&Rect_get_x_m1509_MethodInfo);
		float L_27 = (__this->___clientWidth_31);
		VirtActionInvoker2< float, float >::Invoke(&GUIScrollGroup_SetHorizontal_m2290_MethodInfo, __this, L_26, L_27);
		VirtActionInvoker0::Invoke(&GUIScrollGroup_CalcHeight_m2291_MethodInfo, __this);
		Rect_t141 * L_28 = &(__this->___rect_4);
		float L_29 = V_1;
		Rect_set_width_m1589(L_28, L_29, /*hidden argument*/&Rect_set_width_m1589_MethodInfo);
	}

IL_00db:
	{
		float L_30 = (__this->___minHeight_2);
		V_2 = L_30;
		float L_31 = (__this->___maxHeight_3);
		V_3 = L_31;
		float L_32 = (__this->___calcMinHeight_29);
		__this->___minHeight_2 = L_32;
		float L_33 = (__this->___calcMaxHeight_30);
		__this->___maxHeight_3 = L_33;
		float L_34 = ___y;
		float L_35 = (__this->___calcMinHeight_29);
		GUILayoutGroup_SetVertical_m2286(__this, L_34, L_35, /*hidden argument*/&GUILayoutGroup_SetVertical_m2286_MethodInfo);
		float L_36 = V_2;
		__this->___minHeight_2 = L_36;
		float L_37 = V_3;
		__this->___maxHeight_3 = L_37;
		Rect_t141 * L_38 = &(__this->___rect_4);
		float L_39 = ___height;
		Rect_set_height_m1586(L_38, L_39, /*hidden argument*/&Rect_set_height_m1586_MethodInfo);
		float L_40 = (__this->___calcMinHeight_29);
		__this->___clientHeight_32 = L_40;
		goto IL_0177;
	}

IL_0139:
	{
		bool L_41 = (__this->___allowVerticalScroll_34);
		if (!L_41)
		{
			goto IL_015c;
		}
	}
	{
		float L_42 = (__this->___calcMinHeight_29);
		__this->___minHeight_2 = L_42;
		float L_43 = (__this->___calcMaxHeight_30);
		__this->___maxHeight_3 = L_43;
	}

IL_015c:
	{
		float L_44 = ___y;
		float L_45 = V_0;
		GUILayoutGroup_SetVertical_m2286(__this, L_44, L_45, /*hidden argument*/&GUILayoutGroup_SetVertical_m2286_MethodInfo);
		Rect_t141 * L_46 = &(__this->___rect_4);
		float L_47 = ___height;
		Rect_set_height_m1586(L_46, L_47, /*hidden argument*/&Rect_set_height_m1586_MethodInfo);
		float L_48 = V_0;
		__this->___clientHeight_32 = L_48;
	}

IL_0177:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Type_t477_il2cpp_TypeInfo;
// UnityEngine.GUILayoutOption/Type
#include "UnityEngine_UnityEngine_GUILayoutOption_TypeMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif



// System.Void UnityEngine.GUILayoutOption::.ctor(UnityEngine.GUILayoutOption/Type,System.Object)
extern "C" void GUILayoutOption__ctor_m2293 (GUILayoutOption_t468 * __this, int32_t ___type, Object_t * ___value, MethodInfo* method)
{
	{
		Object__ctor_m1289(__this, /*hidden argument*/&Object__ctor_m1289_MethodInfo);
		int32_t L_0 = ___type;
		__this->___type_0 = L_0;
		Object_t * L_1 = ___value;
		__this->___value_1 = L_1;
		return;
	}
}
// UnityEngine.ExitGUIException
#include "UnityEngine_UnityEngine_ExitGUIException.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ExitGUIException_t478_il2cpp_TypeInfo;
// UnityEngine.ExitGUIException
#include "UnityEngine_UnityEngine_ExitGUIExceptionMethodDeclarations.h"



// UnityEngine.GUIUtility
#include "UnityEngine_UnityEngine_GUIUtility.h"
#ifndef _MSC_VER
#else
#endif

// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// System.Exception
#include "mscorlib_System_Exception.h"
extern TypeInfo GUIContent_t303_il2cpp_TypeInfo;
extern TypeInfo Exception_t275_il2cpp_TypeInfo;
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2MethodDeclarations.h"
// UnityEngine.GUIContent
#include "UnityEngine_UnityEngine_GUIContentMethodDeclarations.h"
// System.Exception
#include "mscorlib_System_ExceptionMethodDeclarations.h"
extern MethodInfo Vector2_get_zero_m1350_MethodInfo;
extern MethodInfo GUIUtility_Internal_GetDefaultSkin_m2298_MethodInfo;
extern MethodInfo GUIContent_ClearStaticCache_m2367_MethodInfo;
extern MethodInfo GUIUtility_Internal_ExitGUI_m2300_MethodInfo;
extern MethodInfo Exception_get_InnerException_m3348_MethodInfo;
extern MethodInfo GUIUtility_Internal_GetGUIDepth_m2304_MethodInfo;


// System.Void UnityEngine.GUIUtility::.cctor()
extern MethodInfo GUIUtility__cctor_m2294_MethodInfo;
extern "C" void GUIUtility__cctor_m2294 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		Vector2_t12  L_0 = Vector2_get_zero_m1350(NULL /*static, unused*/, /*hidden argument*/&Vector2_get_zero_m1350_MethodInfo);
		((GUIUtility_t479_StaticFields*)InitializedTypeInfo(&GUIUtility_t479_il2cpp_TypeInfo)->static_fields)->___s_EditorScreenPointOffset_2 = L_0;
		((GUIUtility_t479_StaticFields*)InitializedTypeInfo(&GUIUtility_t479_il2cpp_TypeInfo)->static_fields)->___s_HasKeyboardFocus_3 = 0;
		return;
	}
}
// System.String UnityEngine.GUIUtility::get_systemCopyBuffer()
extern MethodInfo GUIUtility_get_systemCopyBuffer_m2295_MethodInfo;
extern "C" String_t* GUIUtility_get_systemCopyBuffer_m2295 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef String_t* (*GUIUtility_get_systemCopyBuffer_m2295_ftn) ();
	static GUIUtility_get_systemCopyBuffer_m2295_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIUtility_get_systemCopyBuffer_m2295_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIUtility::get_systemCopyBuffer()");
	return _il2cpp_icall_func();
}
// System.Void UnityEngine.GUIUtility::set_systemCopyBuffer(System.String)
extern MethodInfo GUIUtility_set_systemCopyBuffer_m2296_MethodInfo;
extern "C" void GUIUtility_set_systemCopyBuffer_m2296 (Object_t * __this /* static, unused */, String_t* ___value, MethodInfo* method)
{
	typedef void (*GUIUtility_set_systemCopyBuffer_m2296_ftn) (String_t*);
	static GUIUtility_set_systemCopyBuffer_m2296_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIUtility_set_systemCopyBuffer_m2296_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIUtility::set_systemCopyBuffer(System.String)");
	_il2cpp_icall_func(___value);
}
// UnityEngine.GUISkin UnityEngine.GUIUtility::GetDefaultSkin()
extern "C" GUISkin_t462 * GUIUtility_GetDefaultSkin_m2297 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUIUtility_t479_il2cpp_TypeInfo));
		int32_t L_0 = ((GUIUtility_t479_StaticFields*)InitializedTypeInfo(&GUIUtility_t479_il2cpp_TypeInfo)->static_fields)->___s_SkinMode_0;
		GUISkin_t462 * L_1 = GUIUtility_Internal_GetDefaultSkin_m2298(NULL /*static, unused*/, L_0, /*hidden argument*/&GUIUtility_Internal_GetDefaultSkin_m2298_MethodInfo);
		return L_1;
	}
}
// UnityEngine.GUISkin UnityEngine.GUIUtility::Internal_GetDefaultSkin(System.Int32)
extern "C" GUISkin_t462 * GUIUtility_Internal_GetDefaultSkin_m2298 (Object_t * __this /* static, unused */, int32_t ___skinMode, MethodInfo* method)
{
	typedef GUISkin_t462 * (*GUIUtility_Internal_GetDefaultSkin_m2298_ftn) (int32_t);
	static GUIUtility_Internal_GetDefaultSkin_m2298_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIUtility_Internal_GetDefaultSkin_m2298_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIUtility::Internal_GetDefaultSkin(System.Int32)");
	return _il2cpp_icall_func(___skinMode);
}
// System.Void UnityEngine.GUIUtility::BeginGUI(System.Int32,System.Int32,System.Int32)
extern MethodInfo GUIUtility_BeginGUI_m2299_MethodInfo;
extern "C" void GUIUtility_BeginGUI_m2299 (Object_t * __this /* static, unused */, int32_t ___skinMode, int32_t ___instanceID, int32_t ___useGUILayout, MethodInfo* method)
{
	{
		int32_t L_0 = ___skinMode;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUIUtility_t479_il2cpp_TypeInfo));
		((GUIUtility_t479_StaticFields*)InitializedTypeInfo(&GUIUtility_t479_il2cpp_TypeInfo)->static_fields)->___s_SkinMode_0 = L_0;
		int32_t L_1 = ___instanceID;
		((GUIUtility_t479_StaticFields*)InitializedTypeInfo(&GUIUtility_t479_il2cpp_TypeInfo)->static_fields)->___s_OriginalID_1 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUI_t464_il2cpp_TypeInfo));
		GUI_set_skin_m2247(NULL /*static, unused*/, (GUISkin_t462 *)NULL, /*hidden argument*/&GUI_set_skin_m2247_MethodInfo);
		int32_t L_2 = ___useGUILayout;
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_3 = ___instanceID;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUILayoutUtility_t472_il2cpp_TypeInfo));
		GUILayoutUtility_SelectIDList_m2255(NULL /*static, unused*/, L_3, 0, /*hidden argument*/&GUILayoutUtility_SelectIDList_m2255_MethodInfo);
		int32_t L_4 = ___instanceID;
		GUILayoutUtility_Begin_m2256(NULL /*static, unused*/, L_4, /*hidden argument*/&GUILayoutUtility_Begin_m2256_MethodInfo);
	}

IL_0026:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUI_t464_il2cpp_TypeInfo));
		GUI_set_changed_m2249(NULL /*static, unused*/, 0, /*hidden argument*/&GUI_set_changed_m2249_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.GUIUtility::Internal_ExitGUI()
extern "C" void GUIUtility_Internal_ExitGUI_m2300 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef void (*GUIUtility_Internal_ExitGUI_m2300_ftn) ();
	static GUIUtility_Internal_ExitGUI_m2300_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIUtility_Internal_ExitGUI_m2300_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIUtility::Internal_ExitGUI()");
	_il2cpp_icall_func();
}
// System.Void UnityEngine.GUIUtility::EndGUI(System.Int32)
extern MethodInfo GUIUtility_EndGUI_m2301_MethodInfo;
extern "C" void GUIUtility_EndGUI_m2301 (Object_t * __this /* static, unused */, int32_t ___layoutType, MethodInfo* method)
{
	int32_t V_0 = 0;
	Exception_t275 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t275 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			Event_t183 * L_0 = Event_get_current_m2432(NULL /*static, unused*/, /*hidden argument*/&Event_get_current_m2432_MethodInfo);
			NullCheck(L_0);
			int32_t L_1 = Event_get_type_m2428(L_0, /*hidden argument*/&Event_get_type_m2428_MethodInfo);
			if ((!(((uint32_t)L_1) == ((uint32_t)8))))
			{
				goto IL_0042;
			}
		}

IL_0010:
		{
			int32_t L_2 = ___layoutType;
			V_0 = L_2;
			int32_t L_3 = V_0;
			if (L_3 == 0)
			{
				goto IL_0029;
			}
			if (L_3 == 1)
			{
				goto IL_002e;
			}
			if (L_3 == 2)
			{
				goto IL_0038;
			}
		}

IL_0024:
		{
			goto IL_0042;
		}

IL_0029:
		{
			goto IL_0042;
		}

IL_002e:
		{
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUILayoutUtility_t472_il2cpp_TypeInfo));
			GUILayoutUtility_Layout_m2258(NULL /*static, unused*/, /*hidden argument*/&GUILayoutUtility_Layout_m2258_MethodInfo);
			goto IL_0042;
		}

IL_0038:
		{
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUILayoutUtility_t472_il2cpp_TypeInfo));
			GUILayoutUtility_LayoutFromEditorWindow_m2259(NULL /*static, unused*/, /*hidden argument*/&GUILayoutUtility_LayoutFromEditorWindow_m2259_MethodInfo);
			goto IL_0042;
		}

IL_0042:
		{
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUIUtility_t479_il2cpp_TypeInfo));
			int32_t L_4 = ((GUIUtility_t479_StaticFields*)InitializedTypeInfo(&GUIUtility_t479_il2cpp_TypeInfo)->static_fields)->___s_OriginalID_1;
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUILayoutUtility_t472_il2cpp_TypeInfo));
			GUILayoutUtility_SelectIDList_m2255(NULL /*static, unused*/, L_4, 0, /*hidden argument*/&GUILayoutUtility_SelectIDList_m2255_MethodInfo);
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUIContent_t303_il2cpp_TypeInfo));
			GUIContent_ClearStaticCache_m2367(NULL /*static, unused*/, /*hidden argument*/&GUIContent_ClearStaticCache_m2367_MethodInfo);
			IL2CPP_LEAVE(0x5E, FINALLY_0058);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t275 *)e.ex;
		goto FINALLY_0058;
	}

FINALLY_0058:
	{ // begin finally (depth: 1)
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUIUtility_t479_il2cpp_TypeInfo));
		GUIUtility_Internal_ExitGUI_m2300(NULL /*static, unused*/, /*hidden argument*/&GUIUtility_Internal_ExitGUI_m2300_MethodInfo);
		IL2CPP_END_FINALLY(88)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(88)
	{
		IL2CPP_JUMP_TBL(0x5E, IL_005e)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t275 *)
	}

IL_005e:
	{
		return;
	}
}
// System.Boolean UnityEngine.GUIUtility::EndGUIFromException(System.Exception)
extern MethodInfo GUIUtility_EndGUIFromException_m2302_MethodInfo;
extern "C" bool GUIUtility_EndGUIFromException_m2302 (Object_t * __this /* static, unused */, Exception_t275 * ___exception, MethodInfo* method)
{
	{
		Exception_t275 * L_0 = ___exception;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		return 0;
	}

IL_0008:
	{
		Exception_t275 * L_1 = ___exception;
		if (((ExitGUIException_t478 *)IsInst(L_1, InitializedTypeInfo(&ExitGUIException_t478_il2cpp_TypeInfo))))
		{
			goto IL_0025;
		}
	}
	{
		Exception_t275 * L_2 = ___exception;
		NullCheck(L_2);
		Exception_t275 * L_3 = (Exception_t275 *)VirtFuncInvoker0< Exception_t275 * >::Invoke(&Exception_get_InnerException_m3348_MethodInfo, L_2);
		if (((ExitGUIException_t478 *)IsInst(L_3, InitializedTypeInfo(&ExitGUIException_t478_il2cpp_TypeInfo))))
		{
			goto IL_0025;
		}
	}
	{
		return 0;
	}

IL_0025:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUIUtility_t479_il2cpp_TypeInfo));
		GUIUtility_Internal_ExitGUI_m2300(NULL /*static, unused*/, /*hidden argument*/&GUIUtility_Internal_ExitGUI_m2300_MethodInfo);
		return 1;
	}
}
// System.Void UnityEngine.GUIUtility::CheckOnGUI()
extern "C" void GUIUtility_CheckOnGUI_m2303 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUIUtility_t479_il2cpp_TypeInfo));
		int32_t L_0 = GUIUtility_Internal_GetGUIDepth_m2304(NULL /*static, unused*/, /*hidden argument*/&GUIUtility_Internal_GetGUIDepth_m2304_MethodInfo);
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		ArgumentException_t318 * L_1 = (ArgumentException_t318 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t318_il2cpp_TypeInfo));
		ArgumentException__ctor_m1847(L_1, (String_t*) &_stringLiteral100, /*hidden argument*/&ArgumentException__ctor_m1847_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0016:
	{
		return;
	}
}
// System.Int32 UnityEngine.GUIUtility::Internal_GetGUIDepth()
extern "C" int32_t GUIUtility_Internal_GetGUIDepth_m2304 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef int32_t (*GUIUtility_Internal_GetGUIDepth_m2304_ftn) ();
	static GUIUtility_Internal_GetGUIDepth_m2304_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIUtility_Internal_GetGUIDepth_m2304_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIUtility::Internal_GetGUIDepth()");
	return _il2cpp_icall_func();
}
// UnityEngine.GUISettings
#include "UnityEngine_UnityEngine_GUISettings.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo GUISettings_t480_il2cpp_TypeInfo;
// UnityEngine.GUISettings
#include "UnityEngine_UnityEngine_GUISettingsMethodDeclarations.h"

extern TypeInfo Color_t109_il2cpp_TypeInfo;
// UnityEngine.Color
#include "UnityEngine_UnityEngine_ColorMethodDeclarations.h"
extern MethodInfo Color_get_white_m1493_MethodInfo;
extern MethodInfo Color__ctor_m2453_MethodInfo;


// System.Void UnityEngine.GUISettings::.ctor()
extern MethodInfo GUISettings__ctor_m2305_MethodInfo;
extern "C" void GUISettings__ctor_m2305 (GUISettings_t480 * __this, MethodInfo* method)
{
	{
		__this->___m_DoubleClickSelectsWord_0 = 1;
		__this->___m_TripleClickSelectsLine_1 = 1;
		Color_t109  L_0 = Color_get_white_m1493(NULL /*static, unused*/, /*hidden argument*/&Color_get_white_m1493_MethodInfo);
		__this->___m_CursorColor_2 = L_0;
		__this->___m_CursorFlashSpeed_3 = (-1.0f);
		Color_t109  L_1 = {0};
		Color__ctor_m2453(&L_1, (0.5f), (0.5f), (1.0f), /*hidden argument*/&Color__ctor_m2453_MethodInfo);
		__this->___m_SelectionColor_4 = L_1;
		Object__ctor_m1289(__this, /*hidden argument*/&Object__ctor_m1289_MethodInfo);
		return;
	}
}
// UnityEngine.GUISkin/SkinChangedDelegate
#include "UnityEngine_UnityEngine_GUISkin_SkinChangedDelegate.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo SkinChangedDelegate_t481_il2cpp_TypeInfo;
// UnityEngine.GUISkin/SkinChangedDelegate
#include "UnityEngine_UnityEngine_GUISkin_SkinChangedDelegateMethodDeclarations.h"



// System.Void UnityEngine.GUISkin/SkinChangedDelegate::.ctor(System.Object,System.IntPtr)
extern MethodInfo SkinChangedDelegate__ctor_m2306_MethodInfo;
extern "C" void SkinChangedDelegate__ctor_m2306 (SkinChangedDelegate_t481 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.GUISkin/SkinChangedDelegate::Invoke()
extern MethodInfo SkinChangedDelegate_Invoke_m2307_MethodInfo;
extern "C" void SkinChangedDelegate_Invoke_m2307 (SkinChangedDelegate_t481 * __this, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		SkinChangedDelegate_Invoke_m2307((SkinChangedDelegate_t481 *)__this->___prev_9, method);
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
extern "C" void pinvoke_delegate_wrapper_SkinChangedDelegate_t481(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.IAsyncResult UnityEngine.GUISkin/SkinChangedDelegate::BeginInvoke(System.AsyncCallback,System.Object)
extern MethodInfo SkinChangedDelegate_BeginInvoke_m2308_MethodInfo;
extern "C" Object_t * SkinChangedDelegate_BeginInvoke_m2308 (SkinChangedDelegate_t481 * __this, AsyncCallback_t171 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.GUISkin/SkinChangedDelegate::EndInvoke(System.IAsyncResult)
extern MethodInfo SkinChangedDelegate_EndInvoke_m2309_MethodInfo;
extern "C" void SkinChangedDelegate_EndInvoke_m2309 (SkinChangedDelegate_t481 * __this, Object_t * ___result, MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo GUISkin_t462_il2cpp_TypeInfo;

// UnityEngine.Font
#include "UnityEngine_UnityEngine_Font.h"
// System.StringComparer
#include "mscorlib_System_StringComparer.h"
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_5.h"
// UnityEngine.GUIStyleState
#include "UnityEngine_UnityEngine_GUIStyleState.h"
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,UnityEngine.GUIStyle>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_1.h"
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,UnityEngine.GUIStyle>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_2.h"
extern TypeInfo GUIStyleU5BU5D_t482_il2cpp_TypeInfo;
extern TypeInfo StringComparer_t686_il2cpp_TypeInfo;
extern TypeInfo Dictionary_2_t483_il2cpp_TypeInfo;
extern TypeInfo EventType_t488_il2cpp_TypeInfo;
extern TypeInfo Enumerator_t687_il2cpp_TypeInfo;
// System.StringComparer
#include "mscorlib_System_StringComparerMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_5MethodDeclarations.h"
// UnityEngine.GUIStyleState
#include "UnityEngine_UnityEngine_GUIStyleStateMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,UnityEngine.GUIStyle>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_1MethodDeclarations.h"
extern Il2CppType GUIStyleU5BU5D_t482_0_0_0;
extern Il2CppType Dictionary_2_t483_0_0_0;
extern Il2CppType Enumerator_t687_0_0_0;
extern MethodInfo Object_op_Equality_m1267_MethodInfo;
extern MethodInfo GUIStyle_SetDefaultFont_m2410_MethodInfo;
extern MethodInfo GUISkin_Apply_m2358_MethodInfo;
extern MethodInfo GUISkin_BuildStyleCache_m2359_MethodInfo;
extern MethodInfo StringComparer_get_OrdinalIgnoreCase_m3349_MethodInfo;
extern MethodInfo Dictionary_2__ctor_m3350_MethodInfo;
extern MethodInfo Dictionary_2_set_Item_m3351_MethodInfo;
extern MethodInfo GUIStyle_set_name_m2396_MethodInfo;
extern MethodInfo GUISkin_get_error_m2357_MethodInfo;
extern MethodInfo GUIStyle_set_stretchHeight_m2407_MethodInfo;
extern MethodInfo GUIStyle_get_normal_m2397_MethodInfo;
extern MethodInfo Color_get_red_m2456_MethodInfo;
extern MethodInfo GUIStyleState_set_textColor_m2375_MethodInfo;
extern MethodInfo GUISkin_FindStyle_m2361_MethodInfo;
extern MethodInfo Object_get_name_m1688_MethodInfo;
extern MethodInfo Debug_LogWarning_m2660_MethodInfo;
extern MethodInfo Debug_LogError_m1266_MethodInfo;
extern MethodInfo Dictionary_2_TryGetValue_m3352_MethodInfo;
extern MethodInfo GUISkin_get_font_m2312_MethodInfo;
extern Il2CppGenericMethod Dictionary_2__ctor_m3350_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_set_Item_m3351_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_TryGetValue_m3352_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_get_Values_m3353_GenericMethod;
extern Il2CppGenericMethod ValueCollection_GetEnumerator_m3354_GenericMethod;


// System.Void UnityEngine.GUISkin::.ctor()
extern MethodInfo GUISkin__ctor_m2310_MethodInfo;
extern TypeInfo* GUIStyleU5BU5D_t482_il2cpp_TypeInfo_var;
extern "C" void GUISkin__ctor_m2310 (GUISkin_t462 * __this, MethodInfo* method)
{
	static bool GUISkin__ctor_m2310_init;
	if (!GUISkin__ctor_m2310_init)
	{
		GUIStyleU5BU5D_t482_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&GUIStyleU5BU5D_t482_0_0_0);
		GUISkin__ctor_m2310_init = true;
	}
	{
		GUISettings_t480 * L_0 = (GUISettings_t480 *)il2cpp_codegen_object_new (InitializedTypeInfo(&GUISettings_t480_il2cpp_TypeInfo));
		GUISettings__ctor_m2305(L_0, /*hidden argument*/&GUISettings__ctor_m2305_MethodInfo);
		__this->___m_Settings_24 = L_0;
		ScriptableObject__ctor_m2126(__this, /*hidden argument*/&ScriptableObject__ctor_m2126_MethodInfo);
		__this->___m_CustomStyles_23 = ((GUIStyleU5BU5D_t482*)SZArrayNew(GUIStyleU5BU5D_t482_il2cpp_TypeInfo_var, 1));
		return;
	}
}
// System.Void UnityEngine.GUISkin::OnEnable()
extern MethodInfo GUISkin_OnEnable_m2311_MethodInfo;
extern "C" void GUISkin_OnEnable_m2311 (GUISkin_t462 * __this, MethodInfo* method)
{
	{
		GUISkin_Apply_m2358(__this, /*hidden argument*/&GUISkin_Apply_m2358_MethodInfo);
		return;
	}
}
// UnityEngine.Font UnityEngine.GUISkin::get_font()
extern "C" Font_t125 * GUISkin_get_font_m2312 (GUISkin_t462 * __this, MethodInfo* method)
{
	{
		Font_t125 * L_0 = (__this->___m_Font_2);
		return L_0;
	}
}
// System.Void UnityEngine.GUISkin::set_font(UnityEngine.Font)
extern MethodInfo GUISkin_set_font_m2313_MethodInfo;
extern "C" void GUISkin_set_font_m2313 (GUISkin_t462 * __this, Font_t125 * ___value, MethodInfo* method)
{
	{
		Font_t125 * L_0 = ___value;
		__this->___m_Font_2 = L_0;
		GUISkin_t462 * L_1 = ((GUISkin_t462_StaticFields*)InitializedTypeInfo(&GUISkin_t462_il2cpp_TypeInfo)->static_fields)->___current_28;
		bool L_2 = Object_op_Equality_m1267(NULL /*static, unused*/, L_1, __this, /*hidden argument*/&Object_op_Equality_m1267_MethodInfo);
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		Font_t125 * L_3 = (__this->___m_Font_2);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUIStyle_t466_il2cpp_TypeInfo));
		GUIStyle_SetDefaultFont_m2410(NULL /*static, unused*/, L_3, /*hidden argument*/&GUIStyle_SetDefaultFont_m2410_MethodInfo);
	}

IL_0022:
	{
		GUISkin_Apply_m2358(__this, /*hidden argument*/&GUISkin_Apply_m2358_MethodInfo);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_box()
extern MethodInfo GUISkin_get_box_m2314_MethodInfo;
extern "C" GUIStyle_t466 * GUISkin_get_box_m2314 (GUISkin_t462 * __this, MethodInfo* method)
{
	{
		GUIStyle_t466 * L_0 = (__this->___m_box_3);
		return L_0;
	}
}
// System.Void UnityEngine.GUISkin::set_box(UnityEngine.GUIStyle)
extern MethodInfo GUISkin_set_box_m2315_MethodInfo;
extern "C" void GUISkin_set_box_m2315 (GUISkin_t462 * __this, GUIStyle_t466 * ___value, MethodInfo* method)
{
	{
		GUIStyle_t466 * L_0 = ___value;
		__this->___m_box_3 = L_0;
		GUISkin_Apply_m2358(__this, /*hidden argument*/&GUISkin_Apply_m2358_MethodInfo);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_label()
extern MethodInfo GUISkin_get_label_m2316_MethodInfo;
extern "C" GUIStyle_t466 * GUISkin_get_label_m2316 (GUISkin_t462 * __this, MethodInfo* method)
{
	{
		GUIStyle_t466 * L_0 = (__this->___m_label_6);
		return L_0;
	}
}
// System.Void UnityEngine.GUISkin::set_label(UnityEngine.GUIStyle)
extern MethodInfo GUISkin_set_label_m2317_MethodInfo;
extern "C" void GUISkin_set_label_m2317 (GUISkin_t462 * __this, GUIStyle_t466 * ___value, MethodInfo* method)
{
	{
		GUIStyle_t466 * L_0 = ___value;
		__this->___m_label_6 = L_0;
		GUISkin_Apply_m2358(__this, /*hidden argument*/&GUISkin_Apply_m2358_MethodInfo);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_textField()
extern MethodInfo GUISkin_get_textField_m2318_MethodInfo;
extern "C" GUIStyle_t466 * GUISkin_get_textField_m2318 (GUISkin_t462 * __this, MethodInfo* method)
{
	{
		GUIStyle_t466 * L_0 = (__this->___m_textField_7);
		return L_0;
	}
}
// System.Void UnityEngine.GUISkin::set_textField(UnityEngine.GUIStyle)
extern MethodInfo GUISkin_set_textField_m2319_MethodInfo;
extern "C" void GUISkin_set_textField_m2319 (GUISkin_t462 * __this, GUIStyle_t466 * ___value, MethodInfo* method)
{
	{
		GUIStyle_t466 * L_0 = ___value;
		__this->___m_textField_7 = L_0;
		GUISkin_Apply_m2358(__this, /*hidden argument*/&GUISkin_Apply_m2358_MethodInfo);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_textArea()
extern MethodInfo GUISkin_get_textArea_m2320_MethodInfo;
extern "C" GUIStyle_t466 * GUISkin_get_textArea_m2320 (GUISkin_t462 * __this, MethodInfo* method)
{
	{
		GUIStyle_t466 * L_0 = (__this->___m_textArea_8);
		return L_0;
	}
}
// System.Void UnityEngine.GUISkin::set_textArea(UnityEngine.GUIStyle)
extern MethodInfo GUISkin_set_textArea_m2321_MethodInfo;
extern "C" void GUISkin_set_textArea_m2321 (GUISkin_t462 * __this, GUIStyle_t466 * ___value, MethodInfo* method)
{
	{
		GUIStyle_t466 * L_0 = ___value;
		__this->___m_textArea_8 = L_0;
		GUISkin_Apply_m2358(__this, /*hidden argument*/&GUISkin_Apply_m2358_MethodInfo);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_button()
extern MethodInfo GUISkin_get_button_m2322_MethodInfo;
extern "C" GUIStyle_t466 * GUISkin_get_button_m2322 (GUISkin_t462 * __this, MethodInfo* method)
{
	{
		GUIStyle_t466 * L_0 = (__this->___m_button_4);
		return L_0;
	}
}
// System.Void UnityEngine.GUISkin::set_button(UnityEngine.GUIStyle)
extern MethodInfo GUISkin_set_button_m2323_MethodInfo;
extern "C" void GUISkin_set_button_m2323 (GUISkin_t462 * __this, GUIStyle_t466 * ___value, MethodInfo* method)
{
	{
		GUIStyle_t466 * L_0 = ___value;
		__this->___m_button_4 = L_0;
		GUISkin_Apply_m2358(__this, /*hidden argument*/&GUISkin_Apply_m2358_MethodInfo);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_toggle()
extern MethodInfo GUISkin_get_toggle_m2324_MethodInfo;
extern "C" GUIStyle_t466 * GUISkin_get_toggle_m2324 (GUISkin_t462 * __this, MethodInfo* method)
{
	{
		GUIStyle_t466 * L_0 = (__this->___m_toggle_5);
		return L_0;
	}
}
// System.Void UnityEngine.GUISkin::set_toggle(UnityEngine.GUIStyle)
extern MethodInfo GUISkin_set_toggle_m2325_MethodInfo;
extern "C" void GUISkin_set_toggle_m2325 (GUISkin_t462 * __this, GUIStyle_t466 * ___value, MethodInfo* method)
{
	{
		GUIStyle_t466 * L_0 = ___value;
		__this->___m_toggle_5 = L_0;
		GUISkin_Apply_m2358(__this, /*hidden argument*/&GUISkin_Apply_m2358_MethodInfo);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_window()
extern MethodInfo GUISkin_get_window_m2326_MethodInfo;
extern "C" GUIStyle_t466 * GUISkin_get_window_m2326 (GUISkin_t462 * __this, MethodInfo* method)
{
	{
		GUIStyle_t466 * L_0 = (__this->___m_window_9);
		return L_0;
	}
}
// System.Void UnityEngine.GUISkin::set_window(UnityEngine.GUIStyle)
extern MethodInfo GUISkin_set_window_m2327_MethodInfo;
extern "C" void GUISkin_set_window_m2327 (GUISkin_t462 * __this, GUIStyle_t466 * ___value, MethodInfo* method)
{
	{
		GUIStyle_t466 * L_0 = ___value;
		__this->___m_window_9 = L_0;
		GUISkin_Apply_m2358(__this, /*hidden argument*/&GUISkin_Apply_m2358_MethodInfo);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_horizontalSlider()
extern MethodInfo GUISkin_get_horizontalSlider_m2328_MethodInfo;
extern "C" GUIStyle_t466 * GUISkin_get_horizontalSlider_m2328 (GUISkin_t462 * __this, MethodInfo* method)
{
	{
		GUIStyle_t466 * L_0 = (__this->___m_horizontalSlider_10);
		return L_0;
	}
}
// System.Void UnityEngine.GUISkin::set_horizontalSlider(UnityEngine.GUIStyle)
extern MethodInfo GUISkin_set_horizontalSlider_m2329_MethodInfo;
extern "C" void GUISkin_set_horizontalSlider_m2329 (GUISkin_t462 * __this, GUIStyle_t466 * ___value, MethodInfo* method)
{
	{
		GUIStyle_t466 * L_0 = ___value;
		__this->___m_horizontalSlider_10 = L_0;
		GUISkin_Apply_m2358(__this, /*hidden argument*/&GUISkin_Apply_m2358_MethodInfo);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_horizontalSliderThumb()
extern MethodInfo GUISkin_get_horizontalSliderThumb_m2330_MethodInfo;
extern "C" GUIStyle_t466 * GUISkin_get_horizontalSliderThumb_m2330 (GUISkin_t462 * __this, MethodInfo* method)
{
	{
		GUIStyle_t466 * L_0 = (__this->___m_horizontalSliderThumb_11);
		return L_0;
	}
}
// System.Void UnityEngine.GUISkin::set_horizontalSliderThumb(UnityEngine.GUIStyle)
extern MethodInfo GUISkin_set_horizontalSliderThumb_m2331_MethodInfo;
extern "C" void GUISkin_set_horizontalSliderThumb_m2331 (GUISkin_t462 * __this, GUIStyle_t466 * ___value, MethodInfo* method)
{
	{
		GUIStyle_t466 * L_0 = ___value;
		__this->___m_horizontalSliderThumb_11 = L_0;
		GUISkin_Apply_m2358(__this, /*hidden argument*/&GUISkin_Apply_m2358_MethodInfo);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_verticalSlider()
extern MethodInfo GUISkin_get_verticalSlider_m2332_MethodInfo;
extern "C" GUIStyle_t466 * GUISkin_get_verticalSlider_m2332 (GUISkin_t462 * __this, MethodInfo* method)
{
	{
		GUIStyle_t466 * L_0 = (__this->___m_verticalSlider_12);
		return L_0;
	}
}
// System.Void UnityEngine.GUISkin::set_verticalSlider(UnityEngine.GUIStyle)
extern MethodInfo GUISkin_set_verticalSlider_m2333_MethodInfo;
extern "C" void GUISkin_set_verticalSlider_m2333 (GUISkin_t462 * __this, GUIStyle_t466 * ___value, MethodInfo* method)
{
	{
		GUIStyle_t466 * L_0 = ___value;
		__this->___m_verticalSlider_12 = L_0;
		GUISkin_Apply_m2358(__this, /*hidden argument*/&GUISkin_Apply_m2358_MethodInfo);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_verticalSliderThumb()
extern MethodInfo GUISkin_get_verticalSliderThumb_m2334_MethodInfo;
extern "C" GUIStyle_t466 * GUISkin_get_verticalSliderThumb_m2334 (GUISkin_t462 * __this, MethodInfo* method)
{
	{
		GUIStyle_t466 * L_0 = (__this->___m_verticalSliderThumb_13);
		return L_0;
	}
}
// System.Void UnityEngine.GUISkin::set_verticalSliderThumb(UnityEngine.GUIStyle)
extern MethodInfo GUISkin_set_verticalSliderThumb_m2335_MethodInfo;
extern "C" void GUISkin_set_verticalSliderThumb_m2335 (GUISkin_t462 * __this, GUIStyle_t466 * ___value, MethodInfo* method)
{
	{
		GUIStyle_t466 * L_0 = ___value;
		__this->___m_verticalSliderThumb_13 = L_0;
		GUISkin_Apply_m2358(__this, /*hidden argument*/&GUISkin_Apply_m2358_MethodInfo);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_horizontalScrollbar()
extern MethodInfo GUISkin_get_horizontalScrollbar_m2336_MethodInfo;
extern "C" GUIStyle_t466 * GUISkin_get_horizontalScrollbar_m2336 (GUISkin_t462 * __this, MethodInfo* method)
{
	{
		GUIStyle_t466 * L_0 = (__this->___m_horizontalScrollbar_14);
		return L_0;
	}
}
// System.Void UnityEngine.GUISkin::set_horizontalScrollbar(UnityEngine.GUIStyle)
extern MethodInfo GUISkin_set_horizontalScrollbar_m2337_MethodInfo;
extern "C" void GUISkin_set_horizontalScrollbar_m2337 (GUISkin_t462 * __this, GUIStyle_t466 * ___value, MethodInfo* method)
{
	{
		GUIStyle_t466 * L_0 = ___value;
		__this->___m_horizontalScrollbar_14 = L_0;
		GUISkin_Apply_m2358(__this, /*hidden argument*/&GUISkin_Apply_m2358_MethodInfo);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_horizontalScrollbarThumb()
extern MethodInfo GUISkin_get_horizontalScrollbarThumb_m2338_MethodInfo;
extern "C" GUIStyle_t466 * GUISkin_get_horizontalScrollbarThumb_m2338 (GUISkin_t462 * __this, MethodInfo* method)
{
	{
		GUIStyle_t466 * L_0 = (__this->___m_horizontalScrollbarThumb_15);
		return L_0;
	}
}
// System.Void UnityEngine.GUISkin::set_horizontalScrollbarThumb(UnityEngine.GUIStyle)
extern MethodInfo GUISkin_set_horizontalScrollbarThumb_m2339_MethodInfo;
extern "C" void GUISkin_set_horizontalScrollbarThumb_m2339 (GUISkin_t462 * __this, GUIStyle_t466 * ___value, MethodInfo* method)
{
	{
		GUIStyle_t466 * L_0 = ___value;
		__this->___m_horizontalScrollbarThumb_15 = L_0;
		GUISkin_Apply_m2358(__this, /*hidden argument*/&GUISkin_Apply_m2358_MethodInfo);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_horizontalScrollbarLeftButton()
extern MethodInfo GUISkin_get_horizontalScrollbarLeftButton_m2340_MethodInfo;
extern "C" GUIStyle_t466 * GUISkin_get_horizontalScrollbarLeftButton_m2340 (GUISkin_t462 * __this, MethodInfo* method)
{
	{
		GUIStyle_t466 * L_0 = (__this->___m_horizontalScrollbarLeftButton_16);
		return L_0;
	}
}
// System.Void UnityEngine.GUISkin::set_horizontalScrollbarLeftButton(UnityEngine.GUIStyle)
extern MethodInfo GUISkin_set_horizontalScrollbarLeftButton_m2341_MethodInfo;
extern "C" void GUISkin_set_horizontalScrollbarLeftButton_m2341 (GUISkin_t462 * __this, GUIStyle_t466 * ___value, MethodInfo* method)
{
	{
		GUIStyle_t466 * L_0 = ___value;
		__this->___m_horizontalScrollbarLeftButton_16 = L_0;
		GUISkin_Apply_m2358(__this, /*hidden argument*/&GUISkin_Apply_m2358_MethodInfo);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_horizontalScrollbarRightButton()
extern MethodInfo GUISkin_get_horizontalScrollbarRightButton_m2342_MethodInfo;
extern "C" GUIStyle_t466 * GUISkin_get_horizontalScrollbarRightButton_m2342 (GUISkin_t462 * __this, MethodInfo* method)
{
	{
		GUIStyle_t466 * L_0 = (__this->___m_horizontalScrollbarRightButton_17);
		return L_0;
	}
}
// System.Void UnityEngine.GUISkin::set_horizontalScrollbarRightButton(UnityEngine.GUIStyle)
extern MethodInfo GUISkin_set_horizontalScrollbarRightButton_m2343_MethodInfo;
extern "C" void GUISkin_set_horizontalScrollbarRightButton_m2343 (GUISkin_t462 * __this, GUIStyle_t466 * ___value, MethodInfo* method)
{
	{
		GUIStyle_t466 * L_0 = ___value;
		__this->___m_horizontalScrollbarRightButton_17 = L_0;
		GUISkin_Apply_m2358(__this, /*hidden argument*/&GUISkin_Apply_m2358_MethodInfo);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_verticalScrollbar()
extern MethodInfo GUISkin_get_verticalScrollbar_m2344_MethodInfo;
extern "C" GUIStyle_t466 * GUISkin_get_verticalScrollbar_m2344 (GUISkin_t462 * __this, MethodInfo* method)
{
	{
		GUIStyle_t466 * L_0 = (__this->___m_verticalScrollbar_18);
		return L_0;
	}
}
// System.Void UnityEngine.GUISkin::set_verticalScrollbar(UnityEngine.GUIStyle)
extern MethodInfo GUISkin_set_verticalScrollbar_m2345_MethodInfo;
extern "C" void GUISkin_set_verticalScrollbar_m2345 (GUISkin_t462 * __this, GUIStyle_t466 * ___value, MethodInfo* method)
{
	{
		GUIStyle_t466 * L_0 = ___value;
		__this->___m_verticalScrollbar_18 = L_0;
		GUISkin_Apply_m2358(__this, /*hidden argument*/&GUISkin_Apply_m2358_MethodInfo);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_verticalScrollbarThumb()
extern MethodInfo GUISkin_get_verticalScrollbarThumb_m2346_MethodInfo;
extern "C" GUIStyle_t466 * GUISkin_get_verticalScrollbarThumb_m2346 (GUISkin_t462 * __this, MethodInfo* method)
{
	{
		GUIStyle_t466 * L_0 = (__this->___m_verticalScrollbarThumb_19);
		return L_0;
	}
}
// System.Void UnityEngine.GUISkin::set_verticalScrollbarThumb(UnityEngine.GUIStyle)
extern MethodInfo GUISkin_set_verticalScrollbarThumb_m2347_MethodInfo;
extern "C" void GUISkin_set_verticalScrollbarThumb_m2347 (GUISkin_t462 * __this, GUIStyle_t466 * ___value, MethodInfo* method)
{
	{
		GUIStyle_t466 * L_0 = ___value;
		__this->___m_verticalScrollbarThumb_19 = L_0;
		GUISkin_Apply_m2358(__this, /*hidden argument*/&GUISkin_Apply_m2358_MethodInfo);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_verticalScrollbarUpButton()
extern MethodInfo GUISkin_get_verticalScrollbarUpButton_m2348_MethodInfo;
extern "C" GUIStyle_t466 * GUISkin_get_verticalScrollbarUpButton_m2348 (GUISkin_t462 * __this, MethodInfo* method)
{
	{
		GUIStyle_t466 * L_0 = (__this->___m_verticalScrollbarUpButton_20);
		return L_0;
	}
}
// System.Void UnityEngine.GUISkin::set_verticalScrollbarUpButton(UnityEngine.GUIStyle)
extern MethodInfo GUISkin_set_verticalScrollbarUpButton_m2349_MethodInfo;
extern "C" void GUISkin_set_verticalScrollbarUpButton_m2349 (GUISkin_t462 * __this, GUIStyle_t466 * ___value, MethodInfo* method)
{
	{
		GUIStyle_t466 * L_0 = ___value;
		__this->___m_verticalScrollbarUpButton_20 = L_0;
		GUISkin_Apply_m2358(__this, /*hidden argument*/&GUISkin_Apply_m2358_MethodInfo);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_verticalScrollbarDownButton()
extern MethodInfo GUISkin_get_verticalScrollbarDownButton_m2350_MethodInfo;
extern "C" GUIStyle_t466 * GUISkin_get_verticalScrollbarDownButton_m2350 (GUISkin_t462 * __this, MethodInfo* method)
{
	{
		GUIStyle_t466 * L_0 = (__this->___m_verticalScrollbarDownButton_21);
		return L_0;
	}
}
// System.Void UnityEngine.GUISkin::set_verticalScrollbarDownButton(UnityEngine.GUIStyle)
extern MethodInfo GUISkin_set_verticalScrollbarDownButton_m2351_MethodInfo;
extern "C" void GUISkin_set_verticalScrollbarDownButton_m2351 (GUISkin_t462 * __this, GUIStyle_t466 * ___value, MethodInfo* method)
{
	{
		GUIStyle_t466 * L_0 = ___value;
		__this->___m_verticalScrollbarDownButton_21 = L_0;
		GUISkin_Apply_m2358(__this, /*hidden argument*/&GUISkin_Apply_m2358_MethodInfo);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_scrollView()
extern MethodInfo GUISkin_get_scrollView_m2352_MethodInfo;
extern "C" GUIStyle_t466 * GUISkin_get_scrollView_m2352 (GUISkin_t462 * __this, MethodInfo* method)
{
	{
		GUIStyle_t466 * L_0 = (__this->___m_ScrollView_22);
		return L_0;
	}
}
// System.Void UnityEngine.GUISkin::set_scrollView(UnityEngine.GUIStyle)
extern MethodInfo GUISkin_set_scrollView_m2353_MethodInfo;
extern "C" void GUISkin_set_scrollView_m2353 (GUISkin_t462 * __this, GUIStyle_t466 * ___value, MethodInfo* method)
{
	{
		GUIStyle_t466 * L_0 = ___value;
		__this->___m_ScrollView_22 = L_0;
		GUISkin_Apply_m2358(__this, /*hidden argument*/&GUISkin_Apply_m2358_MethodInfo);
		return;
	}
}
// UnityEngine.GUIStyle[] UnityEngine.GUISkin::get_customStyles()
extern MethodInfo GUISkin_get_customStyles_m2354_MethodInfo;
extern "C" GUIStyleU5BU5D_t482* GUISkin_get_customStyles_m2354 (GUISkin_t462 * __this, MethodInfo* method)
{
	{
		GUIStyleU5BU5D_t482* L_0 = (__this->___m_CustomStyles_23);
		return L_0;
	}
}
// System.Void UnityEngine.GUISkin::set_customStyles(UnityEngine.GUIStyle[])
extern MethodInfo GUISkin_set_customStyles_m2355_MethodInfo;
extern "C" void GUISkin_set_customStyles_m2355 (GUISkin_t462 * __this, GUIStyleU5BU5D_t482* ___value, MethodInfo* method)
{
	{
		GUIStyleU5BU5D_t482* L_0 = ___value;
		__this->___m_CustomStyles_23 = L_0;
		GUISkin_Apply_m2358(__this, /*hidden argument*/&GUISkin_Apply_m2358_MethodInfo);
		return;
	}
}
// UnityEngine.GUISettings UnityEngine.GUISkin::get_settings()
extern MethodInfo GUISkin_get_settings_m2356_MethodInfo;
extern "C" GUISettings_t480 * GUISkin_get_settings_m2356 (GUISkin_t462 * __this, MethodInfo* method)
{
	{
		GUISettings_t480 * L_0 = (__this->___m_Settings_24);
		return L_0;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_error()
extern "C" GUIStyle_t466 * GUISkin_get_error_m2357 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		GUIStyle_t466 * L_0 = ((GUISkin_t462_StaticFields*)InitializedTypeInfo(&GUISkin_t462_il2cpp_TypeInfo)->static_fields)->___ms_Error_25;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUIStyle_t466_il2cpp_TypeInfo));
		GUIStyle_t466 * L_1 = (GUIStyle_t466 *)il2cpp_codegen_object_new (InitializedTypeInfo(&GUIStyle_t466_il2cpp_TypeInfo));
		GUIStyle__ctor_m2390(L_1, /*hidden argument*/&GUIStyle__ctor_m2390_MethodInfo);
		((GUISkin_t462_StaticFields*)InitializedTypeInfo(&GUISkin_t462_il2cpp_TypeInfo)->static_fields)->___ms_Error_25 = L_1;
	}

IL_0014:
	{
		GUIStyle_t466 * L_2 = ((GUISkin_t462_StaticFields*)InitializedTypeInfo(&GUISkin_t462_il2cpp_TypeInfo)->static_fields)->___ms_Error_25;
		return L_2;
	}
}
// System.Void UnityEngine.GUISkin::Apply()
extern "C" void GUISkin_Apply_m2358 (GUISkin_t462 * __this, MethodInfo* method)
{
	{
		GUIStyleU5BU5D_t482* L_0 = (__this->___m_CustomStyles_23);
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		Debug_Log_m2658(NULL /*static, unused*/, (String_t*) &_stringLiteral101, /*hidden argument*/&Debug_Log_m2658_MethodInfo);
	}

IL_0015:
	{
		GUISkin_BuildStyleCache_m2359(__this, /*hidden argument*/&GUISkin_BuildStyleCache_m2359_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.GUISkin::BuildStyleCache()
extern TypeInfo* Dictionary_2_t483_il2cpp_TypeInfo_var;
extern MethodInfo* Dictionary_2__ctor_m3350_MethodInfo_var;
extern MethodInfo* Dictionary_2_set_Item_m3351_MethodInfo_var;
extern "C" void GUISkin_BuildStyleCache_m2359 (GUISkin_t462 * __this, MethodInfo* method)
{
	static bool GUISkin_BuildStyleCache_m2359_init;
	if (!GUISkin_BuildStyleCache_m2359_init)
	{
		Dictionary_2_t483_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Dictionary_2_t483_0_0_0);
		Dictionary_2__ctor_m3350_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2__ctor_m3350_GenericMethod);
		Dictionary_2_set_Item_m3351_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2_set_Item_m3351_GenericMethod);
		GUISkin_BuildStyleCache_m2359_init = true;
	}
	int32_t V_0 = 0;
	{
		GUIStyle_t466 * L_0 = (__this->___m_box_3);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUIStyle_t466_il2cpp_TypeInfo));
		GUIStyle_t466 * L_1 = (GUIStyle_t466 *)il2cpp_codegen_object_new (InitializedTypeInfo(&GUIStyle_t466_il2cpp_TypeInfo));
		GUIStyle__ctor_m2390(L_1, /*hidden argument*/&GUIStyle__ctor_m2390_MethodInfo);
		__this->___m_box_3 = L_1;
	}

IL_0016:
	{
		GUIStyle_t466 * L_2 = (__this->___m_button_4);
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUIStyle_t466_il2cpp_TypeInfo));
		GUIStyle_t466 * L_3 = (GUIStyle_t466 *)il2cpp_codegen_object_new (InitializedTypeInfo(&GUIStyle_t466_il2cpp_TypeInfo));
		GUIStyle__ctor_m2390(L_3, /*hidden argument*/&GUIStyle__ctor_m2390_MethodInfo);
		__this->___m_button_4 = L_3;
	}

IL_002c:
	{
		GUIStyle_t466 * L_4 = (__this->___m_toggle_5);
		if (L_4)
		{
			goto IL_0042;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUIStyle_t466_il2cpp_TypeInfo));
		GUIStyle_t466 * L_5 = (GUIStyle_t466 *)il2cpp_codegen_object_new (InitializedTypeInfo(&GUIStyle_t466_il2cpp_TypeInfo));
		GUIStyle__ctor_m2390(L_5, /*hidden argument*/&GUIStyle__ctor_m2390_MethodInfo);
		__this->___m_toggle_5 = L_5;
	}

IL_0042:
	{
		GUIStyle_t466 * L_6 = (__this->___m_label_6);
		if (L_6)
		{
			goto IL_0058;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUIStyle_t466_il2cpp_TypeInfo));
		GUIStyle_t466 * L_7 = (GUIStyle_t466 *)il2cpp_codegen_object_new (InitializedTypeInfo(&GUIStyle_t466_il2cpp_TypeInfo));
		GUIStyle__ctor_m2390(L_7, /*hidden argument*/&GUIStyle__ctor_m2390_MethodInfo);
		__this->___m_label_6 = L_7;
	}

IL_0058:
	{
		GUIStyle_t466 * L_8 = (__this->___m_window_9);
		if (L_8)
		{
			goto IL_006e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUIStyle_t466_il2cpp_TypeInfo));
		GUIStyle_t466 * L_9 = (GUIStyle_t466 *)il2cpp_codegen_object_new (InitializedTypeInfo(&GUIStyle_t466_il2cpp_TypeInfo));
		GUIStyle__ctor_m2390(L_9, /*hidden argument*/&GUIStyle__ctor_m2390_MethodInfo);
		__this->___m_window_9 = L_9;
	}

IL_006e:
	{
		GUIStyle_t466 * L_10 = (__this->___m_textField_7);
		if (L_10)
		{
			goto IL_0084;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUIStyle_t466_il2cpp_TypeInfo));
		GUIStyle_t466 * L_11 = (GUIStyle_t466 *)il2cpp_codegen_object_new (InitializedTypeInfo(&GUIStyle_t466_il2cpp_TypeInfo));
		GUIStyle__ctor_m2390(L_11, /*hidden argument*/&GUIStyle__ctor_m2390_MethodInfo);
		__this->___m_textField_7 = L_11;
	}

IL_0084:
	{
		GUIStyle_t466 * L_12 = (__this->___m_textArea_8);
		if (L_12)
		{
			goto IL_009a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUIStyle_t466_il2cpp_TypeInfo));
		GUIStyle_t466 * L_13 = (GUIStyle_t466 *)il2cpp_codegen_object_new (InitializedTypeInfo(&GUIStyle_t466_il2cpp_TypeInfo));
		GUIStyle__ctor_m2390(L_13, /*hidden argument*/&GUIStyle__ctor_m2390_MethodInfo);
		__this->___m_textArea_8 = L_13;
	}

IL_009a:
	{
		GUIStyle_t466 * L_14 = (__this->___m_horizontalSlider_10);
		if (L_14)
		{
			goto IL_00b0;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUIStyle_t466_il2cpp_TypeInfo));
		GUIStyle_t466 * L_15 = (GUIStyle_t466 *)il2cpp_codegen_object_new (InitializedTypeInfo(&GUIStyle_t466_il2cpp_TypeInfo));
		GUIStyle__ctor_m2390(L_15, /*hidden argument*/&GUIStyle__ctor_m2390_MethodInfo);
		__this->___m_horizontalSlider_10 = L_15;
	}

IL_00b0:
	{
		GUIStyle_t466 * L_16 = (__this->___m_horizontalSliderThumb_11);
		if (L_16)
		{
			goto IL_00c6;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUIStyle_t466_il2cpp_TypeInfo));
		GUIStyle_t466 * L_17 = (GUIStyle_t466 *)il2cpp_codegen_object_new (InitializedTypeInfo(&GUIStyle_t466_il2cpp_TypeInfo));
		GUIStyle__ctor_m2390(L_17, /*hidden argument*/&GUIStyle__ctor_m2390_MethodInfo);
		__this->___m_horizontalSliderThumb_11 = L_17;
	}

IL_00c6:
	{
		GUIStyle_t466 * L_18 = (__this->___m_verticalSlider_12);
		if (L_18)
		{
			goto IL_00dc;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUIStyle_t466_il2cpp_TypeInfo));
		GUIStyle_t466 * L_19 = (GUIStyle_t466 *)il2cpp_codegen_object_new (InitializedTypeInfo(&GUIStyle_t466_il2cpp_TypeInfo));
		GUIStyle__ctor_m2390(L_19, /*hidden argument*/&GUIStyle__ctor_m2390_MethodInfo);
		__this->___m_verticalSlider_12 = L_19;
	}

IL_00dc:
	{
		GUIStyle_t466 * L_20 = (__this->___m_verticalSliderThumb_13);
		if (L_20)
		{
			goto IL_00f2;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUIStyle_t466_il2cpp_TypeInfo));
		GUIStyle_t466 * L_21 = (GUIStyle_t466 *)il2cpp_codegen_object_new (InitializedTypeInfo(&GUIStyle_t466_il2cpp_TypeInfo));
		GUIStyle__ctor_m2390(L_21, /*hidden argument*/&GUIStyle__ctor_m2390_MethodInfo);
		__this->___m_verticalSliderThumb_13 = L_21;
	}

IL_00f2:
	{
		GUIStyle_t466 * L_22 = (__this->___m_horizontalScrollbar_14);
		if (L_22)
		{
			goto IL_0108;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUIStyle_t466_il2cpp_TypeInfo));
		GUIStyle_t466 * L_23 = (GUIStyle_t466 *)il2cpp_codegen_object_new (InitializedTypeInfo(&GUIStyle_t466_il2cpp_TypeInfo));
		GUIStyle__ctor_m2390(L_23, /*hidden argument*/&GUIStyle__ctor_m2390_MethodInfo);
		__this->___m_horizontalScrollbar_14 = L_23;
	}

IL_0108:
	{
		GUIStyle_t466 * L_24 = (__this->___m_horizontalScrollbarThumb_15);
		if (L_24)
		{
			goto IL_011e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUIStyle_t466_il2cpp_TypeInfo));
		GUIStyle_t466 * L_25 = (GUIStyle_t466 *)il2cpp_codegen_object_new (InitializedTypeInfo(&GUIStyle_t466_il2cpp_TypeInfo));
		GUIStyle__ctor_m2390(L_25, /*hidden argument*/&GUIStyle__ctor_m2390_MethodInfo);
		__this->___m_horizontalScrollbarThumb_15 = L_25;
	}

IL_011e:
	{
		GUIStyle_t466 * L_26 = (__this->___m_horizontalScrollbarLeftButton_16);
		if (L_26)
		{
			goto IL_0134;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUIStyle_t466_il2cpp_TypeInfo));
		GUIStyle_t466 * L_27 = (GUIStyle_t466 *)il2cpp_codegen_object_new (InitializedTypeInfo(&GUIStyle_t466_il2cpp_TypeInfo));
		GUIStyle__ctor_m2390(L_27, /*hidden argument*/&GUIStyle__ctor_m2390_MethodInfo);
		__this->___m_horizontalScrollbarLeftButton_16 = L_27;
	}

IL_0134:
	{
		GUIStyle_t466 * L_28 = (__this->___m_horizontalScrollbarRightButton_17);
		if (L_28)
		{
			goto IL_014a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUIStyle_t466_il2cpp_TypeInfo));
		GUIStyle_t466 * L_29 = (GUIStyle_t466 *)il2cpp_codegen_object_new (InitializedTypeInfo(&GUIStyle_t466_il2cpp_TypeInfo));
		GUIStyle__ctor_m2390(L_29, /*hidden argument*/&GUIStyle__ctor_m2390_MethodInfo);
		__this->___m_horizontalScrollbarRightButton_17 = L_29;
	}

IL_014a:
	{
		GUIStyle_t466 * L_30 = (__this->___m_verticalScrollbar_18);
		if (L_30)
		{
			goto IL_0160;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUIStyle_t466_il2cpp_TypeInfo));
		GUIStyle_t466 * L_31 = (GUIStyle_t466 *)il2cpp_codegen_object_new (InitializedTypeInfo(&GUIStyle_t466_il2cpp_TypeInfo));
		GUIStyle__ctor_m2390(L_31, /*hidden argument*/&GUIStyle__ctor_m2390_MethodInfo);
		__this->___m_verticalScrollbar_18 = L_31;
	}

IL_0160:
	{
		GUIStyle_t466 * L_32 = (__this->___m_verticalScrollbarThumb_19);
		if (L_32)
		{
			goto IL_0176;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUIStyle_t466_il2cpp_TypeInfo));
		GUIStyle_t466 * L_33 = (GUIStyle_t466 *)il2cpp_codegen_object_new (InitializedTypeInfo(&GUIStyle_t466_il2cpp_TypeInfo));
		GUIStyle__ctor_m2390(L_33, /*hidden argument*/&GUIStyle__ctor_m2390_MethodInfo);
		__this->___m_verticalScrollbarThumb_19 = L_33;
	}

IL_0176:
	{
		GUIStyle_t466 * L_34 = (__this->___m_verticalScrollbarUpButton_20);
		if (L_34)
		{
			goto IL_018c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUIStyle_t466_il2cpp_TypeInfo));
		GUIStyle_t466 * L_35 = (GUIStyle_t466 *)il2cpp_codegen_object_new (InitializedTypeInfo(&GUIStyle_t466_il2cpp_TypeInfo));
		GUIStyle__ctor_m2390(L_35, /*hidden argument*/&GUIStyle__ctor_m2390_MethodInfo);
		__this->___m_verticalScrollbarUpButton_20 = L_35;
	}

IL_018c:
	{
		GUIStyle_t466 * L_36 = (__this->___m_verticalScrollbarDownButton_21);
		if (L_36)
		{
			goto IL_01a2;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUIStyle_t466_il2cpp_TypeInfo));
		GUIStyle_t466 * L_37 = (GUIStyle_t466 *)il2cpp_codegen_object_new (InitializedTypeInfo(&GUIStyle_t466_il2cpp_TypeInfo));
		GUIStyle__ctor_m2390(L_37, /*hidden argument*/&GUIStyle__ctor_m2390_MethodInfo);
		__this->___m_verticalScrollbarDownButton_21 = L_37;
	}

IL_01a2:
	{
		GUIStyle_t466 * L_38 = (__this->___m_ScrollView_22);
		if (L_38)
		{
			goto IL_01b8;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUIStyle_t466_il2cpp_TypeInfo));
		GUIStyle_t466 * L_39 = (GUIStyle_t466 *)il2cpp_codegen_object_new (InitializedTypeInfo(&GUIStyle_t466_il2cpp_TypeInfo));
		GUIStyle__ctor_m2390(L_39, /*hidden argument*/&GUIStyle__ctor_m2390_MethodInfo);
		__this->___m_ScrollView_22 = L_39;
	}

IL_01b8:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&StringComparer_t686_il2cpp_TypeInfo));
		StringComparer_t686 * L_40 = StringComparer_get_OrdinalIgnoreCase_m3349(NULL /*static, unused*/, /*hidden argument*/&StringComparer_get_OrdinalIgnoreCase_m3349_MethodInfo);
		Dictionary_2_t483 * L_41 = (Dictionary_2_t483 *)il2cpp_codegen_object_new (Dictionary_2_t483_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3350(L_41, L_40, /*hidden argument*/Dictionary_2__ctor_m3350_MethodInfo_var);
		__this->___styles_26 = L_41;
		Dictionary_2_t483 * L_42 = (__this->___styles_26);
		GUIStyle_t466 * L_43 = (__this->___m_box_3);
		NullCheck(L_42);
		VirtActionInvoker2< String_t*, GUIStyle_t466 * >::Invoke(Dictionary_2_set_Item_m3351_MethodInfo_var, L_42, (String_t*) &_stringLiteral102, L_43);
		GUIStyle_t466 * L_44 = (__this->___m_box_3);
		NullCheck(L_44);
		GUIStyle_set_name_m2396(L_44, (String_t*) &_stringLiteral102, /*hidden argument*/&GUIStyle_set_name_m2396_MethodInfo);
		Dictionary_2_t483 * L_45 = (__this->___styles_26);
		GUIStyle_t466 * L_46 = (__this->___m_button_4);
		NullCheck(L_45);
		VirtActionInvoker2< String_t*, GUIStyle_t466 * >::Invoke(Dictionary_2_set_Item_m3351_MethodInfo_var, L_45, (String_t*) &_stringLiteral103, L_46);
		GUIStyle_t466 * L_47 = (__this->___m_button_4);
		NullCheck(L_47);
		GUIStyle_set_name_m2396(L_47, (String_t*) &_stringLiteral103, /*hidden argument*/&GUIStyle_set_name_m2396_MethodInfo);
		Dictionary_2_t483 * L_48 = (__this->___styles_26);
		GUIStyle_t466 * L_49 = (__this->___m_toggle_5);
		NullCheck(L_48);
		VirtActionInvoker2< String_t*, GUIStyle_t466 * >::Invoke(Dictionary_2_set_Item_m3351_MethodInfo_var, L_48, (String_t*) &_stringLiteral104, L_49);
		GUIStyle_t466 * L_50 = (__this->___m_toggle_5);
		NullCheck(L_50);
		GUIStyle_set_name_m2396(L_50, (String_t*) &_stringLiteral104, /*hidden argument*/&GUIStyle_set_name_m2396_MethodInfo);
		Dictionary_2_t483 * L_51 = (__this->___styles_26);
		GUIStyle_t466 * L_52 = (__this->___m_label_6);
		NullCheck(L_51);
		VirtActionInvoker2< String_t*, GUIStyle_t466 * >::Invoke(Dictionary_2_set_Item_m3351_MethodInfo_var, L_51, (String_t*) &_stringLiteral105, L_52);
		GUIStyle_t466 * L_53 = (__this->___m_label_6);
		NullCheck(L_53);
		GUIStyle_set_name_m2396(L_53, (String_t*) &_stringLiteral105, /*hidden argument*/&GUIStyle_set_name_m2396_MethodInfo);
		Dictionary_2_t483 * L_54 = (__this->___styles_26);
		GUIStyle_t466 * L_55 = (__this->___m_window_9);
		NullCheck(L_54);
		VirtActionInvoker2< String_t*, GUIStyle_t466 * >::Invoke(Dictionary_2_set_Item_m3351_MethodInfo_var, L_54, (String_t*) &_stringLiteral106, L_55);
		GUIStyle_t466 * L_56 = (__this->___m_window_9);
		NullCheck(L_56);
		GUIStyle_set_name_m2396(L_56, (String_t*) &_stringLiteral106, /*hidden argument*/&GUIStyle_set_name_m2396_MethodInfo);
		Dictionary_2_t483 * L_57 = (__this->___styles_26);
		GUIStyle_t466 * L_58 = (__this->___m_textField_7);
		NullCheck(L_57);
		VirtActionInvoker2< String_t*, GUIStyle_t466 * >::Invoke(Dictionary_2_set_Item_m3351_MethodInfo_var, L_57, (String_t*) &_stringLiteral107, L_58);
		GUIStyle_t466 * L_59 = (__this->___m_textField_7);
		NullCheck(L_59);
		GUIStyle_set_name_m2396(L_59, (String_t*) &_stringLiteral107, /*hidden argument*/&GUIStyle_set_name_m2396_MethodInfo);
		Dictionary_2_t483 * L_60 = (__this->___styles_26);
		GUIStyle_t466 * L_61 = (__this->___m_textArea_8);
		NullCheck(L_60);
		VirtActionInvoker2< String_t*, GUIStyle_t466 * >::Invoke(Dictionary_2_set_Item_m3351_MethodInfo_var, L_60, (String_t*) &_stringLiteral108, L_61);
		GUIStyle_t466 * L_62 = (__this->___m_textArea_8);
		NullCheck(L_62);
		GUIStyle_set_name_m2396(L_62, (String_t*) &_stringLiteral108, /*hidden argument*/&GUIStyle_set_name_m2396_MethodInfo);
		Dictionary_2_t483 * L_63 = (__this->___styles_26);
		GUIStyle_t466 * L_64 = (__this->___m_horizontalSlider_10);
		NullCheck(L_63);
		VirtActionInvoker2< String_t*, GUIStyle_t466 * >::Invoke(Dictionary_2_set_Item_m3351_MethodInfo_var, L_63, (String_t*) &_stringLiteral109, L_64);
		GUIStyle_t466 * L_65 = (__this->___m_horizontalSlider_10);
		NullCheck(L_65);
		GUIStyle_set_name_m2396(L_65, (String_t*) &_stringLiteral109, /*hidden argument*/&GUIStyle_set_name_m2396_MethodInfo);
		Dictionary_2_t483 * L_66 = (__this->___styles_26);
		GUIStyle_t466 * L_67 = (__this->___m_horizontalSliderThumb_11);
		NullCheck(L_66);
		VirtActionInvoker2< String_t*, GUIStyle_t466 * >::Invoke(Dictionary_2_set_Item_m3351_MethodInfo_var, L_66, (String_t*) &_stringLiteral110, L_67);
		GUIStyle_t466 * L_68 = (__this->___m_horizontalSliderThumb_11);
		NullCheck(L_68);
		GUIStyle_set_name_m2396(L_68, (String_t*) &_stringLiteral110, /*hidden argument*/&GUIStyle_set_name_m2396_MethodInfo);
		Dictionary_2_t483 * L_69 = (__this->___styles_26);
		GUIStyle_t466 * L_70 = (__this->___m_verticalSlider_12);
		NullCheck(L_69);
		VirtActionInvoker2< String_t*, GUIStyle_t466 * >::Invoke(Dictionary_2_set_Item_m3351_MethodInfo_var, L_69, (String_t*) &_stringLiteral111, L_70);
		GUIStyle_t466 * L_71 = (__this->___m_verticalSlider_12);
		NullCheck(L_71);
		GUIStyle_set_name_m2396(L_71, (String_t*) &_stringLiteral111, /*hidden argument*/&GUIStyle_set_name_m2396_MethodInfo);
		Dictionary_2_t483 * L_72 = (__this->___styles_26);
		GUIStyle_t466 * L_73 = (__this->___m_verticalSliderThumb_13);
		NullCheck(L_72);
		VirtActionInvoker2< String_t*, GUIStyle_t466 * >::Invoke(Dictionary_2_set_Item_m3351_MethodInfo_var, L_72, (String_t*) &_stringLiteral112, L_73);
		GUIStyle_t466 * L_74 = (__this->___m_verticalSliderThumb_13);
		NullCheck(L_74);
		GUIStyle_set_name_m2396(L_74, (String_t*) &_stringLiteral112, /*hidden argument*/&GUIStyle_set_name_m2396_MethodInfo);
		Dictionary_2_t483 * L_75 = (__this->___styles_26);
		GUIStyle_t466 * L_76 = (__this->___m_horizontalScrollbar_14);
		NullCheck(L_75);
		VirtActionInvoker2< String_t*, GUIStyle_t466 * >::Invoke(Dictionary_2_set_Item_m3351_MethodInfo_var, L_75, (String_t*) &_stringLiteral113, L_76);
		GUIStyle_t466 * L_77 = (__this->___m_horizontalScrollbar_14);
		NullCheck(L_77);
		GUIStyle_set_name_m2396(L_77, (String_t*) &_stringLiteral113, /*hidden argument*/&GUIStyle_set_name_m2396_MethodInfo);
		Dictionary_2_t483 * L_78 = (__this->___styles_26);
		GUIStyle_t466 * L_79 = (__this->___m_horizontalScrollbarThumb_15);
		NullCheck(L_78);
		VirtActionInvoker2< String_t*, GUIStyle_t466 * >::Invoke(Dictionary_2_set_Item_m3351_MethodInfo_var, L_78, (String_t*) &_stringLiteral114, L_79);
		GUIStyle_t466 * L_80 = (__this->___m_horizontalScrollbarThumb_15);
		NullCheck(L_80);
		GUIStyle_set_name_m2396(L_80, (String_t*) &_stringLiteral114, /*hidden argument*/&GUIStyle_set_name_m2396_MethodInfo);
		Dictionary_2_t483 * L_81 = (__this->___styles_26);
		GUIStyle_t466 * L_82 = (__this->___m_horizontalScrollbarLeftButton_16);
		NullCheck(L_81);
		VirtActionInvoker2< String_t*, GUIStyle_t466 * >::Invoke(Dictionary_2_set_Item_m3351_MethodInfo_var, L_81, (String_t*) &_stringLiteral115, L_82);
		GUIStyle_t466 * L_83 = (__this->___m_horizontalScrollbarLeftButton_16);
		NullCheck(L_83);
		GUIStyle_set_name_m2396(L_83, (String_t*) &_stringLiteral115, /*hidden argument*/&GUIStyle_set_name_m2396_MethodInfo);
		Dictionary_2_t483 * L_84 = (__this->___styles_26);
		GUIStyle_t466 * L_85 = (__this->___m_horizontalScrollbarRightButton_17);
		NullCheck(L_84);
		VirtActionInvoker2< String_t*, GUIStyle_t466 * >::Invoke(Dictionary_2_set_Item_m3351_MethodInfo_var, L_84, (String_t*) &_stringLiteral116, L_85);
		GUIStyle_t466 * L_86 = (__this->___m_horizontalScrollbarRightButton_17);
		NullCheck(L_86);
		GUIStyle_set_name_m2396(L_86, (String_t*) &_stringLiteral116, /*hidden argument*/&GUIStyle_set_name_m2396_MethodInfo);
		Dictionary_2_t483 * L_87 = (__this->___styles_26);
		GUIStyle_t466 * L_88 = (__this->___m_verticalScrollbar_18);
		NullCheck(L_87);
		VirtActionInvoker2< String_t*, GUIStyle_t466 * >::Invoke(Dictionary_2_set_Item_m3351_MethodInfo_var, L_87, (String_t*) &_stringLiteral117, L_88);
		GUIStyle_t466 * L_89 = (__this->___m_verticalScrollbar_18);
		NullCheck(L_89);
		GUIStyle_set_name_m2396(L_89, (String_t*) &_stringLiteral117, /*hidden argument*/&GUIStyle_set_name_m2396_MethodInfo);
		Dictionary_2_t483 * L_90 = (__this->___styles_26);
		GUIStyle_t466 * L_91 = (__this->___m_verticalScrollbarThumb_19);
		NullCheck(L_90);
		VirtActionInvoker2< String_t*, GUIStyle_t466 * >::Invoke(Dictionary_2_set_Item_m3351_MethodInfo_var, L_90, (String_t*) &_stringLiteral118, L_91);
		GUIStyle_t466 * L_92 = (__this->___m_verticalScrollbarThumb_19);
		NullCheck(L_92);
		GUIStyle_set_name_m2396(L_92, (String_t*) &_stringLiteral118, /*hidden argument*/&GUIStyle_set_name_m2396_MethodInfo);
		Dictionary_2_t483 * L_93 = (__this->___styles_26);
		GUIStyle_t466 * L_94 = (__this->___m_verticalScrollbarUpButton_20);
		NullCheck(L_93);
		VirtActionInvoker2< String_t*, GUIStyle_t466 * >::Invoke(Dictionary_2_set_Item_m3351_MethodInfo_var, L_93, (String_t*) &_stringLiteral119, L_94);
		GUIStyle_t466 * L_95 = (__this->___m_verticalScrollbarUpButton_20);
		NullCheck(L_95);
		GUIStyle_set_name_m2396(L_95, (String_t*) &_stringLiteral119, /*hidden argument*/&GUIStyle_set_name_m2396_MethodInfo);
		Dictionary_2_t483 * L_96 = (__this->___styles_26);
		GUIStyle_t466 * L_97 = (__this->___m_verticalScrollbarDownButton_21);
		NullCheck(L_96);
		VirtActionInvoker2< String_t*, GUIStyle_t466 * >::Invoke(Dictionary_2_set_Item_m3351_MethodInfo_var, L_96, (String_t*) &_stringLiteral120, L_97);
		GUIStyle_t466 * L_98 = (__this->___m_verticalScrollbarDownButton_21);
		NullCheck(L_98);
		GUIStyle_set_name_m2396(L_98, (String_t*) &_stringLiteral120, /*hidden argument*/&GUIStyle_set_name_m2396_MethodInfo);
		Dictionary_2_t483 * L_99 = (__this->___styles_26);
		GUIStyle_t466 * L_100 = (__this->___m_ScrollView_22);
		NullCheck(L_99);
		VirtActionInvoker2< String_t*, GUIStyle_t466 * >::Invoke(Dictionary_2_set_Item_m3351_MethodInfo_var, L_99, (String_t*) &_stringLiteral121, L_100);
		GUIStyle_t466 * L_101 = (__this->___m_ScrollView_22);
		NullCheck(L_101);
		GUIStyle_set_name_m2396(L_101, (String_t*) &_stringLiteral121, /*hidden argument*/&GUIStyle_set_name_m2396_MethodInfo);
		GUIStyleU5BU5D_t482* L_102 = (__this->___m_CustomStyles_23);
		if (!L_102)
		{
			goto IL_0516;
		}
	}
	{
		V_0 = 0;
		goto IL_0508;
	}

IL_04d2:
	{
		GUIStyleU5BU5D_t482* L_103 = (__this->___m_CustomStyles_23);
		int32_t L_104 = V_0;
		NullCheck(L_103);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_103, L_104);
		int32_t L_105 = L_104;
		if ((*(GUIStyle_t466 **)(GUIStyle_t466 **)SZArrayLdElema(L_103, L_105)))
		{
			goto IL_04e4;
		}
	}
	{
		goto IL_0504;
	}

IL_04e4:
	{
		Dictionary_2_t483 * L_106 = (__this->___styles_26);
		GUIStyleU5BU5D_t482* L_107 = (__this->___m_CustomStyles_23);
		int32_t L_108 = V_0;
		NullCheck(L_107);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_107, L_108);
		int32_t L_109 = L_108;
		NullCheck((*(GUIStyle_t466 **)(GUIStyle_t466 **)SZArrayLdElema(L_107, L_109)));
		String_t* L_110 = GUIStyle_get_name_m2395((*(GUIStyle_t466 **)(GUIStyle_t466 **)SZArrayLdElema(L_107, L_109)), /*hidden argument*/&GUIStyle_get_name_m2395_MethodInfo);
		GUIStyleU5BU5D_t482* L_111 = (__this->___m_CustomStyles_23);
		int32_t L_112 = V_0;
		NullCheck(L_111);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_111, L_112);
		int32_t L_113 = L_112;
		NullCheck(L_106);
		VirtActionInvoker2< String_t*, GUIStyle_t466 * >::Invoke(Dictionary_2_set_Item_m3351_MethodInfo_var, L_106, L_110, (*(GUIStyle_t466 **)(GUIStyle_t466 **)SZArrayLdElema(L_111, L_113)));
	}

IL_0504:
	{
		int32_t L_114 = V_0;
		V_0 = ((int32_t)((int32_t)L_114+(int32_t)1));
	}

IL_0508:
	{
		int32_t L_115 = V_0;
		GUIStyleU5BU5D_t482* L_116 = (__this->___m_CustomStyles_23);
		NullCheck(L_116);
		if ((((int32_t)L_115) < ((int32_t)(((int32_t)(((Array_t *)L_116)->max_length))))))
		{
			goto IL_04d2;
		}
	}

IL_0516:
	{
		GUIStyle_t466 * L_117 = GUISkin_get_error_m2357(NULL /*static, unused*/, /*hidden argument*/&GUISkin_get_error_m2357_MethodInfo);
		NullCheck(L_117);
		GUIStyle_set_stretchHeight_m2407(L_117, 1, /*hidden argument*/&GUIStyle_set_stretchHeight_m2407_MethodInfo);
		GUIStyle_t466 * L_118 = GUISkin_get_error_m2357(NULL /*static, unused*/, /*hidden argument*/&GUISkin_get_error_m2357_MethodInfo);
		NullCheck(L_118);
		GUIStyleState_t484 * L_119 = GUIStyle_get_normal_m2397(L_118, /*hidden argument*/&GUIStyle_get_normal_m2397_MethodInfo);
		Color_t109  L_120 = Color_get_red_m2456(NULL /*static, unused*/, /*hidden argument*/&Color_get_red_m2456_MethodInfo);
		NullCheck(L_119);
		GUIStyleState_set_textColor_m2375(L_119, L_120, /*hidden argument*/&GUIStyleState_set_textColor_m2375_MethodInfo);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::GetStyle(System.String)
extern MethodInfo GUISkin_GetStyle_m2360_MethodInfo;
extern TypeInfo* ObjectU5BU5D_t269_il2cpp_TypeInfo_var;
extern "C" GUIStyle_t466 * GUISkin_GetStyle_m2360 (GUISkin_t462 * __this, String_t* ___styleName, MethodInfo* method)
{
	static bool GUISkin_GetStyle_m2360_init;
	if (!GUISkin_GetStyle_m2360_init)
	{
		ObjectU5BU5D_t269_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t269_0_0_0);
		GUISkin_GetStyle_m2360_init = true;
	}
	GUIStyle_t466 * V_0 = {0};
	{
		String_t* L_0 = ___styleName;
		GUIStyle_t466 * L_1 = GUISkin_FindStyle_m2361(__this, L_0, /*hidden argument*/&GUISkin_FindStyle_m2361_MethodInfo);
		V_0 = L_1;
		GUIStyle_t466 * L_2 = V_0;
		if (!L_2)
		{
			goto IL_0010;
		}
	}
	{
		GUIStyle_t466 * L_3 = V_0;
		return L_3;
	}

IL_0010:
	{
		ObjectU5BU5D_t269* L_4 = ((ObjectU5BU5D_t269*)SZArrayNew(ObjectU5BU5D_t269_il2cpp_TypeInfo_var, 6));
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 0);
		ArrayElementTypeCheck (L_4, (String_t*) &_stringLiteral122);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 0)) = (Object_t *)(String_t*) &_stringLiteral122;
		ObjectU5BU5D_t269* L_5 = L_4;
		String_t* L_6 = ___styleName;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 1);
		ArrayElementTypeCheck (L_5, L_6);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_5, 1)) = (Object_t *)L_6;
		ObjectU5BU5D_t269* L_7 = L_5;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 2);
		ArrayElementTypeCheck (L_7, (String_t*) &_stringLiteral123);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_7, 2)) = (Object_t *)(String_t*) &_stringLiteral123;
		ObjectU5BU5D_t269* L_8 = L_7;
		String_t* L_9 = Object_get_name_m1688(__this, /*hidden argument*/&Object_get_name_m1688_MethodInfo);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 3);
		ArrayElementTypeCheck (L_8, L_9);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 3)) = (Object_t *)L_9;
		ObjectU5BU5D_t269* L_10 = L_8;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 4);
		ArrayElementTypeCheck (L_10, (String_t*) &_stringLiteral124);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_10, 4)) = (Object_t *)(String_t*) &_stringLiteral124;
		ObjectU5BU5D_t269* L_11 = L_10;
		Event_t183 * L_12 = Event_get_current_m2432(NULL /*static, unused*/, /*hidden argument*/&Event_get_current_m2432_MethodInfo);
		NullCheck(L_12);
		int32_t L_13 = Event_get_type_m2428(L_12, /*hidden argument*/&Event_get_type_m2428_MethodInfo);
		int32_t L_14 = L_13;
		Object_t * L_15 = Box(InitializedTypeInfo(&EventType_t488_il2cpp_TypeInfo), &L_14);
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 5);
		ArrayElementTypeCheck (L_11, L_15);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_11, 5)) = (Object_t *)L_15;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_16 = String_Concat_m1344(NULL /*static, unused*/, L_11, /*hidden argument*/&String_Concat_m1344_MethodInfo);
		Debug_LogWarning_m2660(NULL /*static, unused*/, L_16, /*hidden argument*/&Debug_LogWarning_m2660_MethodInfo);
		GUIStyle_t466 * L_17 = GUISkin_get_error_m2357(NULL /*static, unused*/, /*hidden argument*/&GUISkin_get_error_m2357_MethodInfo);
		return L_17;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::FindStyle(System.String)
extern MethodInfo* Dictionary_2_TryGetValue_m3352_MethodInfo_var;
extern "C" GUIStyle_t466 * GUISkin_FindStyle_m2361 (GUISkin_t462 * __this, String_t* ___styleName, MethodInfo* method)
{
	static bool GUISkin_FindStyle_m2361_init;
	if (!GUISkin_FindStyle_m2361_init)
	{
		Dictionary_2_TryGetValue_m3352_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2_TryGetValue_m3352_GenericMethod);
		GUISkin_FindStyle_m2361_init = true;
	}
	GUIStyle_t466 * V_0 = {0};
	{
		bool L_0 = Object_op_Equality_m1267(NULL /*static, unused*/, __this, (Object_t20 *)NULL, /*hidden argument*/&Object_op_Equality_m1267_MethodInfo);
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		Debug_LogError_m1266(NULL /*static, unused*/, (String_t*) &_stringLiteral125, /*hidden argument*/&Debug_LogError_m1266_MethodInfo);
		return (GUIStyle_t466 *)NULL;
	}

IL_0018:
	{
		Dictionary_2_t483 * L_1 = (__this->___styles_26);
		if (L_1)
		{
			goto IL_0029;
		}
	}
	{
		GUISkin_BuildStyleCache_m2359(__this, /*hidden argument*/&GUISkin_BuildStyleCache_m2359_MethodInfo);
	}

IL_0029:
	{
		Dictionary_2_t483 * L_2 = (__this->___styles_26);
		String_t* L_3 = ___styleName;
		NullCheck(L_2);
		bool L_4 = (bool)VirtFuncInvoker2< bool, String_t*, GUIStyle_t466 ** >::Invoke(Dictionary_2_TryGetValue_m3352_MethodInfo_var, L_2, L_3, (&V_0));
		if (!L_4)
		{
			goto IL_003e;
		}
	}
	{
		GUIStyle_t466 * L_5 = V_0;
		return L_5;
	}

IL_003e:
	{
		return (GUIStyle_t466 *)NULL;
	}
}
// System.Void UnityEngine.GUISkin::MakeCurrent()
extern "C" void GUISkin_MakeCurrent_m2362 (GUISkin_t462 * __this, MethodInfo* method)
{
	{
		((GUISkin_t462_StaticFields*)InitializedTypeInfo(&GUISkin_t462_il2cpp_TypeInfo)->static_fields)->___current_28 = __this;
		Font_t125 * L_0 = GUISkin_get_font_m2312(__this, /*hidden argument*/&GUISkin_get_font_m2312_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUIStyle_t466_il2cpp_TypeInfo));
		GUIStyle_SetDefaultFont_m2410(NULL /*static, unused*/, L_0, /*hidden argument*/&GUIStyle_SetDefaultFont_m2410_MethodInfo);
		SkinChangedDelegate_t481 * L_1 = ((GUISkin_t462_StaticFields*)InitializedTypeInfo(&GUISkin_t462_il2cpp_TypeInfo)->static_fields)->___m_SkinChanged_27;
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		SkinChangedDelegate_t481 * L_2 = ((GUISkin_t462_StaticFields*)InitializedTypeInfo(&GUISkin_t462_il2cpp_TypeInfo)->static_fields)->___m_SkinChanged_27;
		NullCheck(L_2);
		VirtActionInvoker0::Invoke(&SkinChangedDelegate_Invoke_m2307_MethodInfo, L_2);
	}

IL_0025:
	{
		return;
	}
}
// System.Collections.IEnumerator UnityEngine.GUISkin::GetEnumerator()
extern MethodInfo GUISkin_GetEnumerator_m2363_MethodInfo;
extern TypeInfo* Enumerator_t687_il2cpp_TypeInfo_var;
extern MethodInfo* Dictionary_2_get_Values_m3353_MethodInfo_var;
extern MethodInfo* ValueCollection_GetEnumerator_m3354_MethodInfo_var;
extern "C" Object_t * GUISkin_GetEnumerator_m2363 (GUISkin_t462 * __this, MethodInfo* method)
{
	static bool GUISkin_GetEnumerator_m2363_init;
	if (!GUISkin_GetEnumerator_m2363_init)
	{
		Enumerator_t687_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Enumerator_t687_0_0_0);
		Dictionary_2_get_Values_m3353_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2_get_Values_m3353_GenericMethod);
		ValueCollection_GetEnumerator_m3354_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&ValueCollection_GetEnumerator_m3354_GenericMethod);
		GUISkin_GetEnumerator_m2363_init = true;
	}
	{
		Dictionary_2_t483 * L_0 = (__this->___styles_26);
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		GUISkin_BuildStyleCache_m2359(__this, /*hidden argument*/&GUISkin_BuildStyleCache_m2359_MethodInfo);
	}

IL_0011:
	{
		Dictionary_2_t483 * L_1 = (__this->___styles_26);
		NullCheck(L_1);
		ValueCollection_t688 * L_2 = Dictionary_2_get_Values_m3353(L_1, /*hidden argument*/Dictionary_2_get_Values_m3353_MethodInfo_var);
		NullCheck(L_2);
		Enumerator_t687  L_3 = ValueCollection_GetEnumerator_m3354(L_2, /*hidden argument*/ValueCollection_GetEnumerator_m3354_MethodInfo_var);
		Enumerator_t687  L_4 = L_3;
		Object_t * L_5 = Box(Enumerator_t687_il2cpp_TypeInfo_var, &L_4);
		return (Object_t *)L_5;
	}
}
// UnityEngine.GUIContent
#include "UnityEngine_UnityEngine_GUIContent.h"
#ifndef _MSC_VER
#else
#endif

extern MethodInfo GUIContent__ctor_m1642_MethodInfo;
extern MethodInfo GUIContent__ctor_m2364_MethodInfo;


// System.Void UnityEngine.GUIContent::.ctor()
extern "C" void GUIContent__ctor_m2364 (GUIContent_t303 * __this, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_0 = ((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2;
		__this->___m_Text_0 = L_0;
		String_t* L_1 = ((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2;
		__this->___m_Tooltip_2 = L_1;
		Object__ctor_m1289(__this, /*hidden argument*/&Object__ctor_m1289_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.GUIContent::.ctor(System.String)
extern "C" void GUIContent__ctor_m1642 (GUIContent_t303 * __this, String_t* ___text, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_0 = ((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2;
		__this->___m_Text_0 = L_0;
		String_t* L_1 = ((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2;
		__this->___m_Tooltip_2 = L_1;
		Object__ctor_m1289(__this, /*hidden argument*/&Object__ctor_m1289_MethodInfo);
		String_t* L_2 = ___text;
		__this->___m_Text_0 = L_2;
		return;
	}
}
// System.Void UnityEngine.GUIContent::.cctor()
extern MethodInfo GUIContent__cctor_m2365_MethodInfo;
extern "C" void GUIContent__cctor_m2365 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_0 = ((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2;
		GUIContent_t303 * L_1 = (GUIContent_t303 *)il2cpp_codegen_object_new (InitializedTypeInfo(&GUIContent_t303_il2cpp_TypeInfo));
		GUIContent__ctor_m1642(L_1, L_0, /*hidden argument*/&GUIContent__ctor_m1642_MethodInfo);
		((GUIContent_t303_StaticFields*)InitializedTypeInfo(&GUIContent_t303_il2cpp_TypeInfo)->static_fields)->___none_3 = L_1;
		GUIContent_t303 * L_2 = (GUIContent_t303 *)il2cpp_codegen_object_new (InitializedTypeInfo(&GUIContent_t303_il2cpp_TypeInfo));
		GUIContent__ctor_m2364(L_2, /*hidden argument*/&GUIContent__ctor_m2364_MethodInfo);
		((GUIContent_t303_StaticFields*)InitializedTypeInfo(&GUIContent_t303_il2cpp_TypeInfo)->static_fields)->___s_Text_4 = L_2;
		GUIContent_t303 * L_3 = (GUIContent_t303 *)il2cpp_codegen_object_new (InitializedTypeInfo(&GUIContent_t303_il2cpp_TypeInfo));
		GUIContent__ctor_m2364(L_3, /*hidden argument*/&GUIContent__ctor_m2364_MethodInfo);
		((GUIContent_t303_StaticFields*)InitializedTypeInfo(&GUIContent_t303_il2cpp_TypeInfo)->static_fields)->___s_Image_5 = L_3;
		GUIContent_t303 * L_4 = (GUIContent_t303 *)il2cpp_codegen_object_new (InitializedTypeInfo(&GUIContent_t303_il2cpp_TypeInfo));
		GUIContent__ctor_m2364(L_4, /*hidden argument*/&GUIContent__ctor_m2364_MethodInfo);
		((GUIContent_t303_StaticFields*)InitializedTypeInfo(&GUIContent_t303_il2cpp_TypeInfo)->static_fields)->___s_TextImage_6 = L_4;
		return;
	}
}
// System.String UnityEngine.GUIContent::get_text()
extern MethodInfo GUIContent_get_text_m1641_MethodInfo;
extern "C" String_t* GUIContent_get_text_m1641 (GUIContent_t303 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_Text_0);
		return L_0;
	}
}
// System.Void UnityEngine.GUIContent::set_text(System.String)
extern MethodInfo GUIContent_set_text_m2366_MethodInfo;
extern "C" void GUIContent_set_text_m2366 (GUIContent_t303 * __this, String_t* ___value, MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___m_Text_0 = L_0;
		return;
	}
}
// System.Void UnityEngine.GUIContent::ClearStaticCache()
extern "C" void GUIContent_ClearStaticCache_m2367 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUIContent_t303_il2cpp_TypeInfo));
		GUIContent_t303 * L_0 = ((GUIContent_t303_StaticFields*)InitializedTypeInfo(&GUIContent_t303_il2cpp_TypeInfo)->static_fields)->___s_Text_4;
		NullCheck(L_0);
		L_0->___m_Text_0 = (String_t*)NULL;
		GUIContent_t303 * L_1 = ((GUIContent_t303_StaticFields*)InitializedTypeInfo(&GUIContent_t303_il2cpp_TypeInfo)->static_fields)->___s_Text_4;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_2 = ((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2;
		NullCheck(L_1);
		L_1->___m_Tooltip_2 = L_2;
		GUIContent_t303 * L_3 = ((GUIContent_t303_StaticFields*)InitializedTypeInfo(&GUIContent_t303_il2cpp_TypeInfo)->static_fields)->___s_Image_5;
		NullCheck(L_3);
		L_3->___m_Image_1 = (Texture_t139 *)NULL;
		GUIContent_t303 * L_4 = ((GUIContent_t303_StaticFields*)InitializedTypeInfo(&GUIContent_t303_il2cpp_TypeInfo)->static_fields)->___s_Image_5;
		String_t* L_5 = ((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2;
		NullCheck(L_4);
		L_4->___m_Tooltip_2 = L_5;
		GUIContent_t303 * L_6 = ((GUIContent_t303_StaticFields*)InitializedTypeInfo(&GUIContent_t303_il2cpp_TypeInfo)->static_fields)->___s_TextImage_6;
		NullCheck(L_6);
		L_6->___m_Text_0 = (String_t*)NULL;
		GUIContent_t303 * L_7 = ((GUIContent_t303_StaticFields*)InitializedTypeInfo(&GUIContent_t303_il2cpp_TypeInfo)->static_fields)->___s_TextImage_6;
		NullCheck(L_7);
		L_7->___m_Image_1 = (Texture_t139 *)NULL;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo GUIStyleState_t484_il2cpp_TypeInfo;

extern MethodInfo GUIStyleState_INTERNAL_set_textColor_m2374_MethodInfo;
extern MethodInfo GUIStyleState_Init_m2371_MethodInfo;
extern MethodInfo GUIStyleState_GetBackgroundInternal_m2373_MethodInfo;
extern MethodInfo GUIStyleState_Cleanup_m2372_MethodInfo;


// System.Void UnityEngine.GUIStyleState::.ctor()
extern MethodInfo GUIStyleState__ctor_m2368_MethodInfo;
extern "C" void GUIStyleState__ctor_m2368 (GUIStyleState_t484 * __this, MethodInfo* method)
{
	{
		Object__ctor_m1289(__this, /*hidden argument*/&Object__ctor_m1289_MethodInfo);
		GUIStyleState_Init_m2371(__this, /*hidden argument*/&GUIStyleState_Init_m2371_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.GUIStyleState::.ctor(UnityEngine.GUIStyle,System.IntPtr)
extern MethodInfo GUIStyleState__ctor_m2369_MethodInfo;
extern "C" void GUIStyleState__ctor_m2369 (GUIStyleState_t484 * __this, GUIStyle_t466 * ___sourceStyle, IntPtr_t ___source, MethodInfo* method)
{
	{
		Object__ctor_m1289(__this, /*hidden argument*/&Object__ctor_m1289_MethodInfo);
		GUIStyle_t466 * L_0 = ___sourceStyle;
		__this->___m_SourceStyle_1 = L_0;
		IntPtr_t L_1 = ___source;
		__this->___m_Ptr_0 = L_1;
		Texture2D_t130 * L_2 = GUIStyleState_GetBackgroundInternal_m2373(__this, /*hidden argument*/&GUIStyleState_GetBackgroundInternal_m2373_MethodInfo);
		__this->___m_Background_2 = L_2;
		return;
	}
}
// System.Void UnityEngine.GUIStyleState::Finalize()
extern MethodInfo GUIStyleState_Finalize_m2370_MethodInfo;
extern "C" void GUIStyleState_Finalize_m2370 (GUIStyleState_t484 * __this, MethodInfo* method)
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
		{
			GUIStyle_t466 * L_0 = (__this->___m_SourceStyle_1);
			if (L_0)
			{
				goto IL_0011;
			}
		}

IL_000b:
		{
			GUIStyleState_Cleanup_m2372(__this, /*hidden argument*/&GUIStyleState_Cleanup_m2372_MethodInfo);
		}

IL_0011:
		{
			IL2CPP_LEAVE(0x1D, FINALLY_0016);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t275 *)e.ex;
		goto FINALLY_0016;
	}

FINALLY_0016:
	{ // begin finally (depth: 1)
		Object_Finalize_m67(__this, /*hidden argument*/&Object_Finalize_m67_MethodInfo);
		IL2CPP_END_FINALLY(22)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(22)
	{
		IL2CPP_JUMP_TBL(0x1D, IL_001d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t275 *)
	}

IL_001d:
	{
		return;
	}
}
// System.Void UnityEngine.GUIStyleState::Init()
extern "C" void GUIStyleState_Init_m2371 (GUIStyleState_t484 * __this, MethodInfo* method)
{
	typedef void (*GUIStyleState_Init_m2371_ftn) (GUIStyleState_t484 *);
	static GUIStyleState_Init_m2371_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyleState_Init_m2371_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyleState::Init()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.GUIStyleState::Cleanup()
extern "C" void GUIStyleState_Cleanup_m2372 (GUIStyleState_t484 * __this, MethodInfo* method)
{
	typedef void (*GUIStyleState_Cleanup_m2372_ftn) (GUIStyleState_t484 *);
	static GUIStyleState_Cleanup_m2372_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyleState_Cleanup_m2372_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyleState::Cleanup()");
	_il2cpp_icall_func(__this);
}
// UnityEngine.Texture2D UnityEngine.GUIStyleState::GetBackgroundInternal()
extern "C" Texture2D_t130 * GUIStyleState_GetBackgroundInternal_m2373 (GUIStyleState_t484 * __this, MethodInfo* method)
{
	typedef Texture2D_t130 * (*GUIStyleState_GetBackgroundInternal_m2373_ftn) (GUIStyleState_t484 *);
	static GUIStyleState_GetBackgroundInternal_m2373_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyleState_GetBackgroundInternal_m2373_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyleState::GetBackgroundInternal()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.GUIStyleState::INTERNAL_set_textColor(UnityEngine.Color&)
extern "C" void GUIStyleState_INTERNAL_set_textColor_m2374 (GUIStyleState_t484 * __this, Color_t109 * ___value, MethodInfo* method)
{
	typedef void (*GUIStyleState_INTERNAL_set_textColor_m2374_ftn) (GUIStyleState_t484 *, Color_t109 *);
	static GUIStyleState_INTERNAL_set_textColor_m2374_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyleState_INTERNAL_set_textColor_m2374_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyleState::INTERNAL_set_textColor(UnityEngine.Color&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.GUIStyleState::set_textColor(UnityEngine.Color)
extern "C" void GUIStyleState_set_textColor_m2375 (GUIStyleState_t484 * __this, Color_t109  ___value, MethodInfo* method)
{
	{
		GUIStyleState_INTERNAL_set_textColor_m2374(__this, (&___value), /*hidden argument*/&GUIStyleState_INTERNAL_set_textColor_m2374_MethodInfo);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

extern MethodInfo RectOffset_Init_m2379_MethodInfo;
extern MethodInfo RectOffset_Cleanup_m2380_MethodInfo;
extern MethodInfo RectOffset_INTERNAL_CALL_Remove_m2388_MethodInfo;


// System.Void UnityEngine.RectOffset::.ctor()
extern "C" void RectOffset__ctor_m1885 (RectOffset_t242 * __this, MethodInfo* method)
{
	{
		Object__ctor_m1289(__this, /*hidden argument*/&Object__ctor_m1289_MethodInfo);
		RectOffset_Init_m2379(__this, /*hidden argument*/&RectOffset_Init_m2379_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.RectOffset::.ctor(UnityEngine.GUIStyle,System.IntPtr)
extern MethodInfo RectOffset__ctor_m2376_MethodInfo;
extern "C" void RectOffset__ctor_m2376 (RectOffset_t242 * __this, GUIStyle_t466 * ___sourceStyle, IntPtr_t ___source, MethodInfo* method)
{
	{
		Object__ctor_m1289(__this, /*hidden argument*/&Object__ctor_m1289_MethodInfo);
		GUIStyle_t466 * L_0 = ___sourceStyle;
		__this->___m_SourceStyle_1 = L_0;
		IntPtr_t L_1 = ___source;
		__this->___m_Ptr_0 = L_1;
		return;
	}
}
// System.Void UnityEngine.RectOffset::.ctor(System.Int32,System.Int32,System.Int32,System.Int32)
extern MethodInfo RectOffset__ctor_m2377_MethodInfo;
extern "C" void RectOffset__ctor_m2377 (RectOffset_t242 * __this, int32_t ___left, int32_t ___right, int32_t ___top, int32_t ___bottom, MethodInfo* method)
{
	{
		Object__ctor_m1289(__this, /*hidden argument*/&Object__ctor_m1289_MethodInfo);
		RectOffset_Init_m2379(__this, /*hidden argument*/&RectOffset_Init_m2379_MethodInfo);
		int32_t L_0 = ___left;
		RectOffset_set_left_m2381(__this, L_0, /*hidden argument*/&RectOffset_set_left_m2381_MethodInfo);
		int32_t L_1 = ___right;
		RectOffset_set_right_m2383(__this, L_1, /*hidden argument*/&RectOffset_set_right_m2383_MethodInfo);
		int32_t L_2 = ___top;
		RectOffset_set_top_m2384(__this, L_2, /*hidden argument*/&RectOffset_set_top_m2384_MethodInfo);
		int32_t L_3 = ___bottom;
		RectOffset_set_bottom_m2386(__this, L_3, /*hidden argument*/&RectOffset_set_bottom_m2386_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.RectOffset::Finalize()
extern MethodInfo RectOffset_Finalize_m2378_MethodInfo;
extern "C" void RectOffset_Finalize_m2378 (RectOffset_t242 * __this, MethodInfo* method)
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
		{
			GUIStyle_t466 * L_0 = (__this->___m_SourceStyle_1);
			if (L_0)
			{
				goto IL_0011;
			}
		}

IL_000b:
		{
			RectOffset_Cleanup_m2380(__this, /*hidden argument*/&RectOffset_Cleanup_m2380_MethodInfo);
		}

IL_0011:
		{
			IL2CPP_LEAVE(0x1D, FINALLY_0016);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t275 *)e.ex;
		goto FINALLY_0016;
	}

FINALLY_0016:
	{ // begin finally (depth: 1)
		Object_Finalize_m67(__this, /*hidden argument*/&Object_Finalize_m67_MethodInfo);
		IL2CPP_END_FINALLY(22)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(22)
	{
		IL2CPP_JUMP_TBL(0x1D, IL_001d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t275 *)
	}

IL_001d:
	{
		return;
	}
}
// System.Void UnityEngine.RectOffset::Init()
extern "C" void RectOffset_Init_m2379 (RectOffset_t242 * __this, MethodInfo* method)
{
	typedef void (*RectOffset_Init_m2379_ftn) (RectOffset_t242 *);
	static RectOffset_Init_m2379_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectOffset_Init_m2379_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectOffset::Init()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.RectOffset::Cleanup()
extern "C" void RectOffset_Cleanup_m2380 (RectOffset_t242 * __this, MethodInfo* method)
{
	typedef void (*RectOffset_Cleanup_m2380_ftn) (RectOffset_t242 *);
	static RectOffset_Cleanup_m2380_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectOffset_Cleanup_m2380_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectOffset::Cleanup()");
	_il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.RectOffset::get_left()
extern "C" int32_t RectOffset_get_left_m1879 (RectOffset_t242 * __this, MethodInfo* method)
{
	typedef int32_t (*RectOffset_get_left_m1879_ftn) (RectOffset_t242 *);
	static RectOffset_get_left_m1879_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectOffset_get_left_m1879_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectOffset::get_left()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.RectOffset::set_left(System.Int32)
extern "C" void RectOffset_set_left_m2381 (RectOffset_t242 * __this, int32_t ___value, MethodInfo* method)
{
	typedef void (*RectOffset_set_left_m2381_ftn) (RectOffset_t242 *, int32_t);
	static RectOffset_set_left_m2381_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectOffset_set_left_m2381_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectOffset::set_left(System.Int32)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Int32 UnityEngine.RectOffset::get_right()
extern "C" int32_t RectOffset_get_right_m2382 (RectOffset_t242 * __this, MethodInfo* method)
{
	typedef int32_t (*RectOffset_get_right_m2382_ftn) (RectOffset_t242 *);
	static RectOffset_get_right_m2382_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectOffset_get_right_m2382_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectOffset::get_right()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.RectOffset::set_right(System.Int32)
extern "C" void RectOffset_set_right_m2383 (RectOffset_t242 * __this, int32_t ___value, MethodInfo* method)
{
	typedef void (*RectOffset_set_right_m2383_ftn) (RectOffset_t242 *, int32_t);
	static RectOffset_set_right_m2383_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectOffset_set_right_m2383_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectOffset::set_right(System.Int32)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Int32 UnityEngine.RectOffset::get_top()
extern "C" int32_t RectOffset_get_top_m1880 (RectOffset_t242 * __this, MethodInfo* method)
{
	typedef int32_t (*RectOffset_get_top_m1880_ftn) (RectOffset_t242 *);
	static RectOffset_get_top_m1880_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectOffset_get_top_m1880_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectOffset::get_top()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.RectOffset::set_top(System.Int32)
extern "C" void RectOffset_set_top_m2384 (RectOffset_t242 * __this, int32_t ___value, MethodInfo* method)
{
	typedef void (*RectOffset_set_top_m2384_ftn) (RectOffset_t242 *, int32_t);
	static RectOffset_set_top_m2384_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectOffset_set_top_m2384_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectOffset::set_top(System.Int32)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Int32 UnityEngine.RectOffset::get_bottom()
extern "C" int32_t RectOffset_get_bottom_m2385 (RectOffset_t242 * __this, MethodInfo* method)
{
	typedef int32_t (*RectOffset_get_bottom_m2385_ftn) (RectOffset_t242 *);
	static RectOffset_get_bottom_m2385_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectOffset_get_bottom_m2385_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectOffset::get_bottom()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.RectOffset::set_bottom(System.Int32)
extern "C" void RectOffset_set_bottom_m2386 (RectOffset_t242 * __this, int32_t ___value, MethodInfo* method)
{
	typedef void (*RectOffset_set_bottom_m2386_ftn) (RectOffset_t242 *, int32_t);
	static RectOffset_set_bottom_m2386_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectOffset_set_bottom_m2386_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectOffset::set_bottom(System.Int32)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Int32 UnityEngine.RectOffset::get_horizontal()
extern "C" int32_t RectOffset_get_horizontal_m1869 (RectOffset_t242 * __this, MethodInfo* method)
{
	typedef int32_t (*RectOffset_get_horizontal_m1869_ftn) (RectOffset_t242 *);
	static RectOffset_get_horizontal_m1869_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectOffset_get_horizontal_m1869_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectOffset::get_horizontal()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.RectOffset::get_vertical()
extern "C" int32_t RectOffset_get_vertical_m1871 (RectOffset_t242 * __this, MethodInfo* method)
{
	typedef int32_t (*RectOffset_get_vertical_m1871_ftn) (RectOffset_t242 *);
	static RectOffset_get_vertical_m1871_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectOffset_get_vertical_m1871_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectOffset::get_vertical()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.Rect UnityEngine.RectOffset::Remove(UnityEngine.Rect)
extern MethodInfo RectOffset_Remove_m2387_MethodInfo;
extern "C" Rect_t141  RectOffset_Remove_m2387 (RectOffset_t242 * __this, Rect_t141  ___rect, MethodInfo* method)
{
	{
		Rect_t141  L_0 = RectOffset_INTERNAL_CALL_Remove_m2388(NULL /*static, unused*/, __this, (&___rect), /*hidden argument*/&RectOffset_INTERNAL_CALL_Remove_m2388_MethodInfo);
		return L_0;
	}
}
// UnityEngine.Rect UnityEngine.RectOffset::INTERNAL_CALL_Remove(UnityEngine.RectOffset,UnityEngine.Rect&)
extern "C" Rect_t141  RectOffset_INTERNAL_CALL_Remove_m2388 (Object_t * __this /* static, unused */, RectOffset_t242 * ___self, Rect_t141 * ___rect, MethodInfo* method)
{
	typedef Rect_t141  (*RectOffset_INTERNAL_CALL_Remove_m2388_ftn) (RectOffset_t242 *, Rect_t141 *);
	static RectOffset_INTERNAL_CALL_Remove_m2388_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectOffset_INTERNAL_CALL_Remove_m2388_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectOffset::INTERNAL_CALL_Remove(UnityEngine.RectOffset,UnityEngine.Rect&)");
	return _il2cpp_icall_func(___self, ___rect);
}
// System.String UnityEngine.RectOffset::ToString()
extern MethodInfo RectOffset_ToString_m2389_MethodInfo;
extern TypeInfo* ObjectU5BU5D_t269_il2cpp_TypeInfo_var;
extern "C" String_t* RectOffset_ToString_m2389 (RectOffset_t242 * __this, MethodInfo* method)
{
	static bool RectOffset_ToString_m2389_init;
	if (!RectOffset_ToString_m2389_init)
	{
		ObjectU5BU5D_t269_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t269_0_0_0);
		RectOffset_ToString_m2389_init = true;
	}
	{
		ObjectU5BU5D_t269* L_0 = ((ObjectU5BU5D_t269*)SZArrayNew(ObjectU5BU5D_t269_il2cpp_TypeInfo_var, 4));
		int32_t L_1 = RectOffset_get_left_m1879(__this, /*hidden argument*/&RectOffset_get_left_m1879_MethodInfo);
		int32_t L_2 = L_1;
		Object_t * L_3 = Box(InitializedTypeInfo(&Int32_t17_il2cpp_TypeInfo), &L_2);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_3;
		ObjectU5BU5D_t269* L_4 = L_0;
		int32_t L_5 = RectOffset_get_right_m2382(__this, /*hidden argument*/&RectOffset_get_right_m2382_MethodInfo);
		int32_t L_6 = L_5;
		Object_t * L_7 = Box(InitializedTypeInfo(&Int32_t17_il2cpp_TypeInfo), &L_6);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 1)) = (Object_t *)L_7;
		ObjectU5BU5D_t269* L_8 = L_4;
		int32_t L_9 = RectOffset_get_top_m1880(__this, /*hidden argument*/&RectOffset_get_top_m1880_MethodInfo);
		int32_t L_10 = L_9;
		Object_t * L_11 = Box(InitializedTypeInfo(&Int32_t17_il2cpp_TypeInfo), &L_10);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 2);
		ArrayElementTypeCheck (L_8, L_11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 2)) = (Object_t *)L_11;
		ObjectU5BU5D_t269* L_12 = L_8;
		int32_t L_13 = RectOffset_get_bottom_m2385(__this, /*hidden argument*/&RectOffset_get_bottom_m2385_MethodInfo);
		int32_t L_14 = L_13;
		Object_t * L_15 = Box(InitializedTypeInfo(&Int32_t17_il2cpp_TypeInfo), &L_14);
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 3);
		ArrayElementTypeCheck (L_12, L_15);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_12, 3)) = (Object_t *)L_15;
		String_t* L_16 = UnityString_Format_m2626(NULL /*static, unused*/, (String_t*) &_stringLiteral126, L_12, /*hidden argument*/&UnityString_Format_m2626_MethodInfo);
		return L_16;
	}
}
// UnityEngine.FontStyle
#include "UnityEngine_UnityEngine_FontStyle.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo FontStyle_t370_il2cpp_TypeInfo;
// UnityEngine.FontStyle
#include "UnityEngine_UnityEngine_FontStyleMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif

extern MethodInfo GUIStyle_GetStyleStatePtr_m2398_MethodInfo;
extern MethodInfo GUIStyle_GetRectOffsetPtr_m2401_MethodInfo;
extern MethodInfo GUIStyle_Internal_GetLineHeight_m2408_MethodInfo;
extern MethodInfo GUIStyle_Init_m2393_MethodInfo;
extern MethodInfo GUIStyle_Cleanup_m2394_MethodInfo;
extern MethodInfo GUIStyle_Internal_GetCursorPixelPosition_m2413_MethodInfo;
extern MethodInfo GUIStyle_INTERNAL_CALL_Internal_GetCursorPixelPosition_m2414_MethodInfo;
extern MethodInfo GUIStyle_Internal_CalcSize_m2416_MethodInfo;
extern MethodInfo GUIStyle_Internal_CalcHeight_m2418_MethodInfo;


// System.Void UnityEngine.GUIStyle::.ctor()
extern "C" void GUIStyle__ctor_m2390 (GUIStyle_t466 * __this, MethodInfo* method)
{
	{
		Object__ctor_m1289(__this, /*hidden argument*/&Object__ctor_m1289_MethodInfo);
		GUIStyle_Init_m2393(__this, /*hidden argument*/&GUIStyle_Init_m2393_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.GUIStyle::.cctor()
extern MethodInfo GUIStyle__cctor_m2391_MethodInfo;
extern "C" void GUIStyle__cctor_m2391 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		((GUIStyle_t466_StaticFields*)InitializedTypeInfo(&GUIStyle_t466_il2cpp_TypeInfo)->static_fields)->___showKeyboardFocus_14 = 1;
		return;
	}
}
// System.Void UnityEngine.GUIStyle::Finalize()
extern MethodInfo GUIStyle_Finalize_m2392_MethodInfo;
extern "C" void GUIStyle_Finalize_m2392 (GUIStyle_t466 * __this, MethodInfo* method)
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
		GUIStyle_Cleanup_m2394(__this, /*hidden argument*/&GUIStyle_Cleanup_m2394_MethodInfo);
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
// System.Void UnityEngine.GUIStyle::Init()
extern "C" void GUIStyle_Init_m2393 (GUIStyle_t466 * __this, MethodInfo* method)
{
	typedef void (*GUIStyle_Init_m2393_ftn) (GUIStyle_t466 *);
	static GUIStyle_Init_m2393_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_Init_m2393_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::Init()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.GUIStyle::Cleanup()
extern "C" void GUIStyle_Cleanup_m2394 (GUIStyle_t466 * __this, MethodInfo* method)
{
	typedef void (*GUIStyle_Cleanup_m2394_ftn) (GUIStyle_t466 *);
	static GUIStyle_Cleanup_m2394_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_Cleanup_m2394_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::Cleanup()");
	_il2cpp_icall_func(__this);
}
// System.String UnityEngine.GUIStyle::get_name()
extern "C" String_t* GUIStyle_get_name_m2395 (GUIStyle_t466 * __this, MethodInfo* method)
{
	typedef String_t* (*GUIStyle_get_name_m2395_ftn) (GUIStyle_t466 *);
	static GUIStyle_get_name_m2395_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_get_name_m2395_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::get_name()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.GUIStyle::set_name(System.String)
extern "C" void GUIStyle_set_name_m2396 (GUIStyle_t466 * __this, String_t* ___value, MethodInfo* method)
{
	typedef void (*GUIStyle_set_name_m2396_ftn) (GUIStyle_t466 *, String_t*);
	static GUIStyle_set_name_m2396_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_set_name_m2396_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::set_name(System.String)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.GUIStyleState UnityEngine.GUIStyle::get_normal()
extern "C" GUIStyleState_t484 * GUIStyle_get_normal_m2397 (GUIStyle_t466 * __this, MethodInfo* method)
{
	{
		GUIStyleState_t484 * L_0 = (__this->___m_Normal_1);
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		IntPtr_t L_1 = GUIStyle_GetStyleStatePtr_m2398(__this, 0, /*hidden argument*/&GUIStyle_GetStyleStatePtr_m2398_MethodInfo);
		GUIStyleState_t484 * L_2 = (GUIStyleState_t484 *)il2cpp_codegen_object_new (InitializedTypeInfo(&GUIStyleState_t484_il2cpp_TypeInfo));
		GUIStyleState__ctor_m2369(L_2, __this, L_1, /*hidden argument*/&GUIStyleState__ctor_m2369_MethodInfo);
		__this->___m_Normal_1 = L_2;
	}

IL_001e:
	{
		GUIStyleState_t484 * L_3 = (__this->___m_Normal_1);
		return L_3;
	}
}
// System.IntPtr UnityEngine.GUIStyle::GetStyleStatePtr(System.Int32)
extern "C" IntPtr_t GUIStyle_GetStyleStatePtr_m2398 (GUIStyle_t466 * __this, int32_t ___idx, MethodInfo* method)
{
	typedef IntPtr_t (*GUIStyle_GetStyleStatePtr_m2398_ftn) (GUIStyle_t466 *, int32_t);
	static GUIStyle_GetStyleStatePtr_m2398_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_GetStyleStatePtr_m2398_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::GetStyleStatePtr(System.Int32)");
	return _il2cpp_icall_func(__this, ___idx);
}
// UnityEngine.RectOffset UnityEngine.GUIStyle::get_margin()
extern "C" RectOffset_t242 * GUIStyle_get_margin_m2399 (GUIStyle_t466 * __this, MethodInfo* method)
{
	{
		RectOffset_t242 * L_0 = (__this->___m_Margin_11);
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		IntPtr_t L_1 = GUIStyle_GetRectOffsetPtr_m2401(__this, 1, /*hidden argument*/&GUIStyle_GetRectOffsetPtr_m2401_MethodInfo);
		RectOffset_t242 * L_2 = (RectOffset_t242 *)il2cpp_codegen_object_new (InitializedTypeInfo(&RectOffset_t242_il2cpp_TypeInfo));
		RectOffset__ctor_m2376(L_2, __this, L_1, /*hidden argument*/&RectOffset__ctor_m2376_MethodInfo);
		__this->___m_Margin_11 = L_2;
	}

IL_001e:
	{
		RectOffset_t242 * L_3 = (__this->___m_Margin_11);
		return L_3;
	}
}
// UnityEngine.RectOffset UnityEngine.GUIStyle::get_padding()
extern "C" RectOffset_t242 * GUIStyle_get_padding_m2400 (GUIStyle_t466 * __this, MethodInfo* method)
{
	{
		RectOffset_t242 * L_0 = (__this->___m_Padding_10);
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		IntPtr_t L_1 = GUIStyle_GetRectOffsetPtr_m2401(__this, 2, /*hidden argument*/&GUIStyle_GetRectOffsetPtr_m2401_MethodInfo);
		RectOffset_t242 * L_2 = (RectOffset_t242 *)il2cpp_codegen_object_new (InitializedTypeInfo(&RectOffset_t242_il2cpp_TypeInfo));
		RectOffset__ctor_m2376(L_2, __this, L_1, /*hidden argument*/&RectOffset__ctor_m2376_MethodInfo);
		__this->___m_Padding_10 = L_2;
	}

IL_001e:
	{
		RectOffset_t242 * L_3 = (__this->___m_Padding_10);
		return L_3;
	}
}
// System.IntPtr UnityEngine.GUIStyle::GetRectOffsetPtr(System.Int32)
extern "C" IntPtr_t GUIStyle_GetRectOffsetPtr_m2401 (GUIStyle_t466 * __this, int32_t ___idx, MethodInfo* method)
{
	typedef IntPtr_t (*GUIStyle_GetRectOffsetPtr_m2401_ftn) (GUIStyle_t466 *, int32_t);
	static GUIStyle_GetRectOffsetPtr_m2401_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_GetRectOffsetPtr_m2401_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::GetRectOffsetPtr(System.Int32)");
	return _il2cpp_icall_func(__this, ___idx);
}
// System.Single UnityEngine.GUIStyle::get_fixedWidth()
extern "C" float GUIStyle_get_fixedWidth_m2402 (GUIStyle_t466 * __this, MethodInfo* method)
{
	typedef float (*GUIStyle_get_fixedWidth_m2402_ftn) (GUIStyle_t466 *);
	static GUIStyle_get_fixedWidth_m2402_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_get_fixedWidth_m2402_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::get_fixedWidth()");
	return _il2cpp_icall_func(__this);
}
// System.Single UnityEngine.GUIStyle::get_fixedHeight()
extern "C" float GUIStyle_get_fixedHeight_m2403 (GUIStyle_t466 * __this, MethodInfo* method)
{
	typedef float (*GUIStyle_get_fixedHeight_m2403_ftn) (GUIStyle_t466 *);
	static GUIStyle_get_fixedHeight_m2403_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_get_fixedHeight_m2403_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::get_fixedHeight()");
	return _il2cpp_icall_func(__this);
}
// System.Boolean UnityEngine.GUIStyle::get_stretchWidth()
extern "C" bool GUIStyle_get_stretchWidth_m2404 (GUIStyle_t466 * __this, MethodInfo* method)
{
	typedef bool (*GUIStyle_get_stretchWidth_m2404_ftn) (GUIStyle_t466 *);
	static GUIStyle_get_stretchWidth_m2404_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_get_stretchWidth_m2404_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::get_stretchWidth()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.GUIStyle::set_stretchWidth(System.Boolean)
extern "C" void GUIStyle_set_stretchWidth_m2405 (GUIStyle_t466 * __this, bool ___value, MethodInfo* method)
{
	typedef void (*GUIStyle_set_stretchWidth_m2405_ftn) (GUIStyle_t466 *, bool);
	static GUIStyle_set_stretchWidth_m2405_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_set_stretchWidth_m2405_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::set_stretchWidth(System.Boolean)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Boolean UnityEngine.GUIStyle::get_stretchHeight()
extern "C" bool GUIStyle_get_stretchHeight_m2406 (GUIStyle_t466 * __this, MethodInfo* method)
{
	typedef bool (*GUIStyle_get_stretchHeight_m2406_ftn) (GUIStyle_t466 *);
	static GUIStyle_get_stretchHeight_m2406_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_get_stretchHeight_m2406_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::get_stretchHeight()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.GUIStyle::set_stretchHeight(System.Boolean)
extern "C" void GUIStyle_set_stretchHeight_m2407 (GUIStyle_t466 * __this, bool ___value, MethodInfo* method)
{
	typedef void (*GUIStyle_set_stretchHeight_m2407_ftn) (GUIStyle_t466 *, bool);
	static GUIStyle_set_stretchHeight_m2407_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_set_stretchHeight_m2407_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::set_stretchHeight(System.Boolean)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Single UnityEngine.GUIStyle::Internal_GetLineHeight(System.IntPtr)
extern "C" float GUIStyle_Internal_GetLineHeight_m2408 (Object_t * __this /* static, unused */, IntPtr_t ___target, MethodInfo* method)
{
	typedef float (*GUIStyle_Internal_GetLineHeight_m2408_ftn) (IntPtr_t);
	static GUIStyle_Internal_GetLineHeight_m2408_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_Internal_GetLineHeight_m2408_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::Internal_GetLineHeight(System.IntPtr)");
	return _il2cpp_icall_func(___target);
}
// System.Single UnityEngine.GUIStyle::get_lineHeight()
extern MethodInfo GUIStyle_get_lineHeight_m2409_MethodInfo;
extern "C" float GUIStyle_get_lineHeight_m2409 (GUIStyle_t466 * __this, MethodInfo* method)
{
	{
		IntPtr_t L_0 = (__this->___m_Ptr_0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUIStyle_t466_il2cpp_TypeInfo));
		float L_1 = GUIStyle_Internal_GetLineHeight_m2408(NULL /*static, unused*/, L_0, /*hidden argument*/&GUIStyle_Internal_GetLineHeight_m2408_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t270_il2cpp_TypeInfo));
		float L_2 = roundf(L_1);
		return L_2;
	}
}
// System.Void UnityEngine.GUIStyle::SetDefaultFont(UnityEngine.Font)
extern "C" void GUIStyle_SetDefaultFont_m2410 (Object_t * __this /* static, unused */, Font_t125 * ___font, MethodInfo* method)
{
	typedef void (*GUIStyle_SetDefaultFont_m2410_ftn) (Font_t125 *);
	static GUIStyle_SetDefaultFont_m2410_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_SetDefaultFont_m2410_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::SetDefaultFont(UnityEngine.Font)");
	_il2cpp_icall_func(___font);
}
// UnityEngine.GUIStyle UnityEngine.GUIStyle::get_none()
extern "C" GUIStyle_t466 * GUIStyle_get_none_m2411 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUIStyle_t466_il2cpp_TypeInfo));
		GUIStyle_t466 * L_0 = ((GUIStyle_t466_StaticFields*)InitializedTypeInfo(&GUIStyle_t466_il2cpp_TypeInfo)->static_fields)->___s_None_15;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUIStyle_t466_il2cpp_TypeInfo));
		GUIStyle_t466 * L_1 = (GUIStyle_t466 *)il2cpp_codegen_object_new (InitializedTypeInfo(&GUIStyle_t466_il2cpp_TypeInfo));
		GUIStyle__ctor_m2390(L_1, /*hidden argument*/&GUIStyle__ctor_m2390_MethodInfo);
		((GUIStyle_t466_StaticFields*)InitializedTypeInfo(&GUIStyle_t466_il2cpp_TypeInfo)->static_fields)->___s_None_15 = L_1;
	}

IL_0014:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUIStyle_t466_il2cpp_TypeInfo));
		GUIStyle_t466 * L_2 = ((GUIStyle_t466_StaticFields*)InitializedTypeInfo(&GUIStyle_t466_il2cpp_TypeInfo)->static_fields)->___s_None_15;
		return L_2;
	}
}
// UnityEngine.Vector2 UnityEngine.GUIStyle::GetCursorPixelPosition(UnityEngine.Rect,UnityEngine.GUIContent,System.Int32)
extern MethodInfo GUIStyle_GetCursorPixelPosition_m2412_MethodInfo;
extern "C" Vector2_t12  GUIStyle_GetCursorPixelPosition_m2412 (GUIStyle_t466 * __this, Rect_t141  ___position, GUIContent_t303 * ___content, int32_t ___cursorStringIndex, MethodInfo* method)
{
	Vector2_t12  V_0 = {0};
	{
		IntPtr_t L_0 = (__this->___m_Ptr_0);
		Rect_t141  L_1 = ___position;
		GUIContent_t303 * L_2 = ___content;
		int32_t L_3 = ___cursorStringIndex;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUIStyle_t466_il2cpp_TypeInfo));
		GUIStyle_Internal_GetCursorPixelPosition_m2413(NULL /*static, unused*/, L_0, L_1, L_2, L_3, (&V_0), /*hidden argument*/&GUIStyle_Internal_GetCursorPixelPosition_m2413_MethodInfo);
		Vector2_t12  L_4 = V_0;
		return L_4;
	}
}
// System.Void UnityEngine.GUIStyle::Internal_GetCursorPixelPosition(System.IntPtr,UnityEngine.Rect,UnityEngine.GUIContent,System.Int32,UnityEngine.Vector2&)
extern "C" void GUIStyle_Internal_GetCursorPixelPosition_m2413 (Object_t * __this /* static, unused */, IntPtr_t ___target, Rect_t141  ___position, GUIContent_t303 * ___content, int32_t ___cursorStringIndex, Vector2_t12 * ___ret, MethodInfo* method)
{
	{
		IntPtr_t L_0 = ___target;
		GUIContent_t303 * L_1 = ___content;
		int32_t L_2 = ___cursorStringIndex;
		Vector2_t12 * L_3 = ___ret;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUIStyle_t466_il2cpp_TypeInfo));
		GUIStyle_INTERNAL_CALL_Internal_GetCursorPixelPosition_m2414(NULL /*static, unused*/, L_0, (&___position), L_1, L_2, L_3, /*hidden argument*/&GUIStyle_INTERNAL_CALL_Internal_GetCursorPixelPosition_m2414_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.GUIStyle::INTERNAL_CALL_Internal_GetCursorPixelPosition(System.IntPtr,UnityEngine.Rect&,UnityEngine.GUIContent,System.Int32,UnityEngine.Vector2&)
extern "C" void GUIStyle_INTERNAL_CALL_Internal_GetCursorPixelPosition_m2414 (Object_t * __this /* static, unused */, IntPtr_t ___target, Rect_t141 * ___position, GUIContent_t303 * ___content, int32_t ___cursorStringIndex, Vector2_t12 * ___ret, MethodInfo* method)
{
	typedef void (*GUIStyle_INTERNAL_CALL_Internal_GetCursorPixelPosition_m2414_ftn) (IntPtr_t, Rect_t141 *, GUIContent_t303 *, int32_t, Vector2_t12 *);
	static GUIStyle_INTERNAL_CALL_Internal_GetCursorPixelPosition_m2414_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_INTERNAL_CALL_Internal_GetCursorPixelPosition_m2414_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::INTERNAL_CALL_Internal_GetCursorPixelPosition(System.IntPtr,UnityEngine.Rect&,UnityEngine.GUIContent,System.Int32,UnityEngine.Vector2&)");
	_il2cpp_icall_func(___target, ___position, ___content, ___cursorStringIndex, ___ret);
}
// UnityEngine.Vector2 UnityEngine.GUIStyle::CalcSize(UnityEngine.GUIContent)
extern MethodInfo GUIStyle_CalcSize_m2415_MethodInfo;
extern "C" Vector2_t12  GUIStyle_CalcSize_m2415 (GUIStyle_t466 * __this, GUIContent_t303 * ___content, MethodInfo* method)
{
	Vector2_t12  V_0 = {0};
	{
		IntPtr_t L_0 = (__this->___m_Ptr_0);
		GUIContent_t303 * L_1 = ___content;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUIStyle_t466_il2cpp_TypeInfo));
		GUIStyle_Internal_CalcSize_m2416(NULL /*static, unused*/, L_0, L_1, (&V_0), /*hidden argument*/&GUIStyle_Internal_CalcSize_m2416_MethodInfo);
		Vector2_t12  L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.GUIStyle::Internal_CalcSize(System.IntPtr,UnityEngine.GUIContent,UnityEngine.Vector2&)
extern "C" void GUIStyle_Internal_CalcSize_m2416 (Object_t * __this /* static, unused */, IntPtr_t ___target, GUIContent_t303 * ___content, Vector2_t12 * ___ret, MethodInfo* method)
{
	typedef void (*GUIStyle_Internal_CalcSize_m2416_ftn) (IntPtr_t, GUIContent_t303 *, Vector2_t12 *);
	static GUIStyle_Internal_CalcSize_m2416_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_Internal_CalcSize_m2416_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::Internal_CalcSize(System.IntPtr,UnityEngine.GUIContent,UnityEngine.Vector2&)");
	_il2cpp_icall_func(___target, ___content, ___ret);
}
// System.Single UnityEngine.GUIStyle::CalcHeight(UnityEngine.GUIContent,System.Single)
extern MethodInfo GUIStyle_CalcHeight_m2417_MethodInfo;
extern "C" float GUIStyle_CalcHeight_m2417 (GUIStyle_t466 * __this, GUIContent_t303 * ___content, float ___width, MethodInfo* method)
{
	{
		IntPtr_t L_0 = (__this->___m_Ptr_0);
		GUIContent_t303 * L_1 = ___content;
		float L_2 = ___width;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUIStyle_t466_il2cpp_TypeInfo));
		float L_3 = GUIStyle_Internal_CalcHeight_m2418(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/&GUIStyle_Internal_CalcHeight_m2418_MethodInfo);
		return L_3;
	}
}
// System.Single UnityEngine.GUIStyle::Internal_CalcHeight(System.IntPtr,UnityEngine.GUIContent,System.Single)
extern "C" float GUIStyle_Internal_CalcHeight_m2418 (Object_t * __this /* static, unused */, IntPtr_t ___target, GUIContent_t303 * ___content, float ___width, MethodInfo* method)
{
	typedef float (*GUIStyle_Internal_CalcHeight_m2418_ftn) (IntPtr_t, GUIContent_t303 *, float);
	static GUIStyle_Internal_CalcHeight_m2418_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_Internal_CalcHeight_m2418_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::Internal_CalcHeight(System.IntPtr,UnityEngine.GUIContent,System.Single)");
	return _il2cpp_icall_func(___target, ___content, ___width);
}
// System.String UnityEngine.GUIStyle::ToString()
extern MethodInfo GUIStyle_ToString_m2419_MethodInfo;
extern TypeInfo* ObjectU5BU5D_t269_il2cpp_TypeInfo_var;
extern "C" String_t* GUIStyle_ToString_m2419 (GUIStyle_t466 * __this, MethodInfo* method)
{
	static bool GUIStyle_ToString_m2419_init;
	if (!GUIStyle_ToString_m2419_init)
	{
		ObjectU5BU5D_t269_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t269_0_0_0);
		GUIStyle_ToString_m2419_init = true;
	}
	{
		ObjectU5BU5D_t269* L_0 = ((ObjectU5BU5D_t269*)SZArrayNew(ObjectU5BU5D_t269_il2cpp_TypeInfo_var, 1));
		String_t* L_1 = GUIStyle_get_name_m2395(__this, /*hidden argument*/&GUIStyle_get_name_m2395_MethodInfo);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		String_t* L_2 = UnityString_Format_m2626(NULL /*static, unused*/, (String_t*) &_stringLiteral127, L_0, /*hidden argument*/&UnityString_Format_m2626_MethodInfo);
		return L_2;
	}
}
// UnityEngine.TouchScreenKeyboard_InternalConstructorHelperArguments
#include "UnityEngine_UnityEngine_TouchScreenKeyboard_InternalConstruc.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo TouchScreenKeyboard_InternalConstructorHelperArguments_t485_il2cpp_TypeInfo;
// UnityEngine.TouchScreenKeyboard_InternalConstructorHelperArguments
#include "UnityEngine_UnityEngine_TouchScreenKeyboard_InternalConstrucMethodDeclarations.h"



// UnityEngine.TouchScreenKeyboardType
#include "UnityEngine_UnityEngine_TouchScreenKeyboardType.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo TouchScreenKeyboardType_t309_il2cpp_TypeInfo;
// UnityEngine.TouchScreenKeyboardType
#include "UnityEngine_UnityEngine_TouchScreenKeyboardTypeMethodDeclarations.h"



// UnityEngine.TouchScreenKeyboard
#include "UnityEngine_UnityEngine_TouchScreenKeyboard.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo TouchScreenKeyboard_t178_il2cpp_TypeInfo;
// UnityEngine.TouchScreenKeyboard
#include "UnityEngine_UnityEngine_TouchScreenKeyboardMethodDeclarations.h"

extern TypeInfo Convert_t689_il2cpp_TypeInfo;
// UnityEngine.Application
#include "UnityEngine_UnityEngine_ApplicationMethodDeclarations.h"
// System.Convert
#include "mscorlib_System_ConvertMethodDeclarations.h"
extern MethodInfo Application_get_platform_m1632_MethodInfo;
extern MethodInfo Convert_ToUInt32_m3355_MethodInfo;
extern MethodInfo Convert_ToUInt32_m3356_MethodInfo;
extern MethodInfo TouchScreenKeyboard_TouchScreenKeyboard_InternalConstructorHelper_m2423_MethodInfo;
extern MethodInfo TouchScreenKeyboard_Destroy_m2421_MethodInfo;
extern MethodInfo TouchScreenKeyboard_Open_m2424_MethodInfo;
extern MethodInfo TouchScreenKeyboard__ctor_m2420_MethodInfo;


// System.Void UnityEngine.TouchScreenKeyboard::.ctor(System.String,UnityEngine.TouchScreenKeyboardType,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.String)
extern "C" void TouchScreenKeyboard__ctor_m2420 (TouchScreenKeyboard_t178 * __this, String_t* ___text, int32_t ___keyboardType, bool ___autocorrection, bool ___multiline, bool ___secure, bool ___alert, String_t* ___textPlaceholder, MethodInfo* method)
{
	TouchScreenKeyboard_InternalConstructorHelperArguments_t485  V_0 = {0};
	{
		Object__ctor_m1289(__this, /*hidden argument*/&Object__ctor_m1289_MethodInfo);
		Initobj (InitializedTypeInfo(&TouchScreenKeyboard_InternalConstructorHelperArguments_t485_il2cpp_TypeInfo), (&V_0));
		int32_t L_0 = ___keyboardType;
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&TouchScreenKeyboardType_t309_il2cpp_TypeInfo), &L_1);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Convert_t689_il2cpp_TypeInfo));
		uint32_t L_3 = Convert_ToUInt32_m3355(NULL /*static, unused*/, L_2, /*hidden argument*/&Convert_ToUInt32_m3355_MethodInfo);
		(&V_0)->___keyboardType_0 = L_3;
		bool L_4 = ___autocorrection;
		uint32_t L_5 = Convert_ToUInt32_m3356(NULL /*static, unused*/, L_4, /*hidden argument*/&Convert_ToUInt32_m3356_MethodInfo);
		(&V_0)->___autocorrection_1 = L_5;
		bool L_6 = ___multiline;
		uint32_t L_7 = Convert_ToUInt32_m3356(NULL /*static, unused*/, L_6, /*hidden argument*/&Convert_ToUInt32_m3356_MethodInfo);
		(&V_0)->___multiline_2 = L_7;
		bool L_8 = ___secure;
		uint32_t L_9 = Convert_ToUInt32_m3356(NULL /*static, unused*/, L_8, /*hidden argument*/&Convert_ToUInt32_m3356_MethodInfo);
		(&V_0)->___secure_3 = L_9;
		bool L_10 = ___alert;
		uint32_t L_11 = Convert_ToUInt32_m3356(NULL /*static, unused*/, L_10, /*hidden argument*/&Convert_ToUInt32_m3356_MethodInfo);
		(&V_0)->___alert_4 = L_11;
		String_t* L_12 = ___text;
		String_t* L_13 = ___textPlaceholder;
		TouchScreenKeyboard_TouchScreenKeyboard_InternalConstructorHelper_m2423(__this, (&V_0), L_12, L_13, /*hidden argument*/&TouchScreenKeyboard_TouchScreenKeyboard_InternalConstructorHelper_m2423_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.TouchScreenKeyboard::Destroy()
extern "C" void TouchScreenKeyboard_Destroy_m2421 (TouchScreenKeyboard_t178 * __this, MethodInfo* method)
{
	typedef void (*TouchScreenKeyboard_Destroy_m2421_ftn) (TouchScreenKeyboard_t178 *);
	static TouchScreenKeyboard_Destroy_m2421_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TouchScreenKeyboard_Destroy_m2421_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TouchScreenKeyboard::Destroy()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.TouchScreenKeyboard::Finalize()
extern MethodInfo TouchScreenKeyboard_Finalize_m2422_MethodInfo;
extern "C" void TouchScreenKeyboard_Finalize_m2422 (TouchScreenKeyboard_t178 * __this, MethodInfo* method)
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
		TouchScreenKeyboard_Destroy_m2421(__this, /*hidden argument*/&TouchScreenKeyboard_Destroy_m2421_MethodInfo);
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
// System.Void UnityEngine.TouchScreenKeyboard::TouchScreenKeyboard_InternalConstructorHelper(UnityEngine.TouchScreenKeyboard_InternalConstructorHelperArguments&,System.String,System.String)
extern "C" void TouchScreenKeyboard_TouchScreenKeyboard_InternalConstructorHelper_m2423 (TouchScreenKeyboard_t178 * __this, TouchScreenKeyboard_InternalConstructorHelperArguments_t485 * ___arguments, String_t* ___text, String_t* ___textPlaceholder, MethodInfo* method)
{
	typedef void (*TouchScreenKeyboard_TouchScreenKeyboard_InternalConstructorHelper_m2423_ftn) (TouchScreenKeyboard_t178 *, TouchScreenKeyboard_InternalConstructorHelperArguments_t485 *, String_t*, String_t*);
	static TouchScreenKeyboard_TouchScreenKeyboard_InternalConstructorHelper_m2423_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TouchScreenKeyboard_TouchScreenKeyboard_InternalConstructorHelper_m2423_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TouchScreenKeyboard::TouchScreenKeyboard_InternalConstructorHelper(UnityEngine.TouchScreenKeyboard_InternalConstructorHelperArguments&,System.String,System.String)");
	_il2cpp_icall_func(__this, ___arguments, ___text, ___textPlaceholder);
}
// System.Boolean UnityEngine.TouchScreenKeyboard::get_isSupported()
extern MethodInfo TouchScreenKeyboard_get_isSupported_m1650_MethodInfo;
extern "C" bool TouchScreenKeyboard_get_isSupported_m1650 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	int32_t V_0 = {0};
	int32_t V_1 = {0};
	{
		int32_t L_0 = Application_get_platform_m1632(NULL /*static, unused*/, /*hidden argument*/&Application_get_platform_m1632_MethodInfo);
		V_0 = L_0;
		int32_t L_1 = V_0;
		V_1 = L_1;
		int32_t L_2 = V_1;
		if (((int32_t)((int32_t)L_2-(int32_t)((int32_t)18))) == 0)
		{
			goto IL_0054;
		}
		if (((int32_t)((int32_t)L_2-(int32_t)((int32_t)18))) == 1)
		{
			goto IL_0054;
		}
		if (((int32_t)((int32_t)L_2-(int32_t)((int32_t)18))) == 2)
		{
			goto IL_0054;
		}
		if (((int32_t)((int32_t)L_2-(int32_t)((int32_t)18))) == 3)
		{
			goto IL_0052;
		}
		if (((int32_t)((int32_t)L_2-(int32_t)((int32_t)18))) == 4)
		{
			goto IL_0052;
		}
		if (((int32_t)((int32_t)L_2-(int32_t)((int32_t)18))) == 5)
		{
			goto IL_0052;
		}
		if (((int32_t)((int32_t)L_2-(int32_t)((int32_t)18))) == 6)
		{
			goto IL_0035;
		}
		if (((int32_t)((int32_t)L_2-(int32_t)((int32_t)18))) == 7)
		{
			goto IL_0035;
		}
		if (((int32_t)((int32_t)L_2-(int32_t)((int32_t)18))) == 8)
		{
			goto IL_0052;
		}
	}

IL_0035:
	{
		int32_t L_3 = V_1;
		if (((int32_t)((int32_t)L_3-(int32_t)8)) == 0)
		{
			goto IL_0052;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)8)) == 1)
		{
			goto IL_0056;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)8)) == 2)
		{
			goto IL_0056;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)8)) == 3)
		{
			goto IL_0052;
		}
	}
	{
		goto IL_0056;
	}

IL_0052:
	{
		return 1;
	}

IL_0054:
	{
		return 0;
	}

IL_0056:
	{
		return 0;
	}
}
// UnityEngine.TouchScreenKeyboard UnityEngine.TouchScreenKeyboard::Open(System.String,UnityEngine.TouchScreenKeyboardType,System.Boolean,System.Boolean,System.Boolean)
extern MethodInfo TouchScreenKeyboard_Open_m1722_MethodInfo;
extern "C" TouchScreenKeyboard_t178 * TouchScreenKeyboard_Open_m1722 (Object_t * __this /* static, unused */, String_t* ___text, int32_t ___keyboardType, bool ___autocorrection, bool ___multiline, bool ___secure, MethodInfo* method)
{
	String_t* V_0 = {0};
	bool V_1 = false;
	{
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_0 = ((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2;
		V_0 = L_0;
		V_1 = 0;
		String_t* L_1 = ___text;
		int32_t L_2 = ___keyboardType;
		bool L_3 = ___autocorrection;
		bool L_4 = ___multiline;
		bool L_5 = ___secure;
		bool L_6 = V_1;
		String_t* L_7 = V_0;
		TouchScreenKeyboard_t178 * L_8 = TouchScreenKeyboard_Open_m2424(NULL /*static, unused*/, L_1, L_2, L_3, L_4, L_5, L_6, L_7, /*hidden argument*/&TouchScreenKeyboard_Open_m2424_MethodInfo);
		return L_8;
	}
}
// UnityEngine.TouchScreenKeyboard UnityEngine.TouchScreenKeyboard::Open(System.String,UnityEngine.TouchScreenKeyboardType,System.Boolean,System.Boolean)
extern MethodInfo TouchScreenKeyboard_Open_m1723_MethodInfo;
extern "C" TouchScreenKeyboard_t178 * TouchScreenKeyboard_Open_m1723 (Object_t * __this /* static, unused */, String_t* ___text, int32_t ___keyboardType, bool ___autocorrection, bool ___multiline, MethodInfo* method)
{
	String_t* V_0 = {0};
	bool V_1 = false;
	bool V_2 = false;
	{
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_0 = ((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2;
		V_0 = L_0;
		V_1 = 0;
		V_2 = 0;
		String_t* L_1 = ___text;
		int32_t L_2 = ___keyboardType;
		bool L_3 = ___autocorrection;
		bool L_4 = ___multiline;
		bool L_5 = V_2;
		bool L_6 = V_1;
		String_t* L_7 = V_0;
		TouchScreenKeyboard_t178 * L_8 = TouchScreenKeyboard_Open_m2424(NULL /*static, unused*/, L_1, L_2, L_3, L_4, L_5, L_6, L_7, /*hidden argument*/&TouchScreenKeyboard_Open_m2424_MethodInfo);
		return L_8;
	}
}
// UnityEngine.TouchScreenKeyboard UnityEngine.TouchScreenKeyboard::Open(System.String,UnityEngine.TouchScreenKeyboardType,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.String)
extern "C" TouchScreenKeyboard_t178 * TouchScreenKeyboard_Open_m2424 (Object_t * __this /* static, unused */, String_t* ___text, int32_t ___keyboardType, bool ___autocorrection, bool ___multiline, bool ___secure, bool ___alert, String_t* ___textPlaceholder, MethodInfo* method)
{
	{
		String_t* L_0 = ___text;
		int32_t L_1 = ___keyboardType;
		bool L_2 = ___autocorrection;
		bool L_3 = ___multiline;
		bool L_4 = ___secure;
		bool L_5 = ___alert;
		String_t* L_6 = ___textPlaceholder;
		TouchScreenKeyboard_t178 * L_7 = (TouchScreenKeyboard_t178 *)il2cpp_codegen_object_new (InitializedTypeInfo(&TouchScreenKeyboard_t178_il2cpp_TypeInfo));
		TouchScreenKeyboard__ctor_m2420(L_7, L_0, L_1, L_2, L_3, L_4, L_5, L_6, /*hidden argument*/&TouchScreenKeyboard__ctor_m2420_MethodInfo);
		return L_7;
	}
}
// System.String UnityEngine.TouchScreenKeyboard::get_text()
extern MethodInfo TouchScreenKeyboard_get_text_m1634_MethodInfo;
extern "C" String_t* TouchScreenKeyboard_get_text_m1634 (TouchScreenKeyboard_t178 * __this, MethodInfo* method)
{
	typedef String_t* (*TouchScreenKeyboard_get_text_m1634_ftn) (TouchScreenKeyboard_t178 *);
	static TouchScreenKeyboard_get_text_m1634_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TouchScreenKeyboard_get_text_m1634_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TouchScreenKeyboard::get_text()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.TouchScreenKeyboard::set_text(System.String)
extern MethodInfo TouchScreenKeyboard_set_text_m1636_MethodInfo;
extern "C" void TouchScreenKeyboard_set_text_m1636 (TouchScreenKeyboard_t178 * __this, String_t* ___value, MethodInfo* method)
{
	typedef void (*TouchScreenKeyboard_set_text_m1636_ftn) (TouchScreenKeyboard_t178 *, String_t*);
	static TouchScreenKeyboard_set_text_m1636_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TouchScreenKeyboard_set_text_m1636_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TouchScreenKeyboard::set_text(System.String)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.TouchScreenKeyboard::set_hideInput(System.Boolean)
extern MethodInfo TouchScreenKeyboard_set_hideInput_m1721_MethodInfo;
extern "C" void TouchScreenKeyboard_set_hideInput_m1721 (Object_t * __this /* static, unused */, bool ___value, MethodInfo* method)
{
	typedef void (*TouchScreenKeyboard_set_hideInput_m1721_ftn) (bool);
	static TouchScreenKeyboard_set_hideInput_m1721_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TouchScreenKeyboard_set_hideInput_m1721_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TouchScreenKeyboard::set_hideInput(System.Boolean)");
	_il2cpp_icall_func(___value);
}
// System.Boolean UnityEngine.TouchScreenKeyboard::get_active()
extern MethodInfo TouchScreenKeyboard_get_active_m1633_MethodInfo;
extern "C" bool TouchScreenKeyboard_get_active_m1633 (TouchScreenKeyboard_t178 * __this, MethodInfo* method)
{
	typedef bool (*TouchScreenKeyboard_get_active_m1633_ftn) (TouchScreenKeyboard_t178 *);
	static TouchScreenKeyboard_get_active_m1633_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TouchScreenKeyboard_get_active_m1633_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TouchScreenKeyboard::get_active()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.TouchScreenKeyboard::set_active(System.Boolean)
extern MethodInfo TouchScreenKeyboard_set_active_m1720_MethodInfo;
extern "C" void TouchScreenKeyboard_set_active_m1720 (TouchScreenKeyboard_t178 * __this, bool ___value, MethodInfo* method)
{
	typedef void (*TouchScreenKeyboard_set_active_m1720_ftn) (TouchScreenKeyboard_t178 *, bool);
	static TouchScreenKeyboard_set_active_m1720_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TouchScreenKeyboard_set_active_m1720_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TouchScreenKeyboard::set_active(System.Boolean)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Boolean UnityEngine.TouchScreenKeyboard::get_done()
extern MethodInfo TouchScreenKeyboard_get_done_m1655_MethodInfo;
extern "C" bool TouchScreenKeyboard_get_done_m1655 (TouchScreenKeyboard_t178 * __this, MethodInfo* method)
{
	typedef bool (*TouchScreenKeyboard_get_done_m1655_ftn) (TouchScreenKeyboard_t178 *);
	static TouchScreenKeyboard_get_done_m1655_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TouchScreenKeyboard_get_done_m1655_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TouchScreenKeyboard::get_done()");
	return _il2cpp_icall_func(__this);
}
// System.Boolean UnityEngine.TouchScreenKeyboard::get_wasCanceled()
extern MethodInfo TouchScreenKeyboard_get_wasCanceled_m1651_MethodInfo;
extern "C" bool TouchScreenKeyboard_get_wasCanceled_m1651 (TouchScreenKeyboard_t178 * __this, MethodInfo* method)
{
	typedef bool (*TouchScreenKeyboard_get_wasCanceled_m1651_ftn) (TouchScreenKeyboard_t178 *);
	static TouchScreenKeyboard_get_wasCanceled_m1651_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TouchScreenKeyboard_get_wasCanceled_m1651_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TouchScreenKeyboard::get_wasCanceled()");
	return _il2cpp_icall_func(__this);
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Event_t183_il2cpp_TypeInfo;

// UnityEngine.EventModifiers
#include "UnityEngine_UnityEngine_EventModifiers.h"
// System.Char
#include "mscorlib_System_Char.h"
// UnityEngine.KeyCode
#include "UnityEngine_UnityEngine_KeyCode.h"
extern TypeInfo Vector2_t12_il2cpp_TypeInfo;
extern TypeInfo EventModifiers_t489_il2cpp_TypeInfo;
extern TypeInfo KeyCode_t487_il2cpp_TypeInfo;
extern MethodInfo Event_Internal_GetMousePosition_m2430_MethodInfo;
extern MethodInfo Event_Init_m2425_MethodInfo;
extern MethodInfo Event_Cleanup_m2427_MethodInfo;
extern MethodInfo Event__ctor_m1647_MethodInfo;
extern MethodInfo Event_Internal_SetNativeEvent_m2433_MethodInfo;
extern MethodInfo Event_get_isKey_m2435_MethodInfo;
extern MethodInfo Event_get_keyCode_m1668_MethodInfo;
extern MethodInfo Event_get_isMouse_m2436_MethodInfo;
extern MethodInfo Event_get_mousePosition_m2429_MethodInfo;
extern MethodInfo Vector2_GetHashCode_m2441_MethodInfo;
extern MethodInfo Event_get_modifiers_m1667_MethodInfo;
extern MethodInfo Object_ReferenceEquals_m3357_MethodInfo;
extern MethodInfo Vector2_op_Equality_m1931_MethodInfo;
extern MethodInfo Event_get_character_m1669_MethodInfo;
extern MethodInfo Event_get_commandName_m2431_MethodInfo;
extern MethodInfo String_Concat_m50_MethodInfo;


// System.Void UnityEngine.Event::.ctor()
extern "C" void Event__ctor_m1647 (Event_t183 * __this, MethodInfo* method)
{
	{
		Object__ctor_m1289(__this, /*hidden argument*/&Object__ctor_m1289_MethodInfo);
		Event_Init_m2425(__this, /*hidden argument*/&Event_Init_m2425_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Event::Init()
extern "C" void Event_Init_m2425 (Event_t183 * __this, MethodInfo* method)
{
	typedef void (*Event_Init_m2425_ftn) (Event_t183 *);
	static Event_Init_m2425_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_Init_m2425_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::Init()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Event::Finalize()
extern MethodInfo Event_Finalize_m2426_MethodInfo;
extern "C" void Event_Finalize_m2426 (Event_t183 * __this, MethodInfo* method)
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
		Event_Cleanup_m2427(__this, /*hidden argument*/&Event_Cleanup_m2427_MethodInfo);
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
// System.Void UnityEngine.Event::Cleanup()
extern "C" void Event_Cleanup_m2427 (Event_t183 * __this, MethodInfo* method)
{
	typedef void (*Event_Cleanup_m2427_ftn) (Event_t183 *);
	static Event_Cleanup_m2427_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_Cleanup_m2427_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::Cleanup()");
	_il2cpp_icall_func(__this);
}
// UnityEngine.EventType UnityEngine.Event::get_rawType()
extern MethodInfo Event_get_rawType_m1671_MethodInfo;
extern "C" int32_t Event_get_rawType_m1671 (Event_t183 * __this, MethodInfo* method)
{
	typedef int32_t (*Event_get_rawType_m1671_ftn) (Event_t183 *);
	static Event_get_rawType_m1671_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_get_rawType_m1671_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::get_rawType()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.EventType UnityEngine.Event::get_type()
extern "C" int32_t Event_get_type_m2428 (Event_t183 * __this, MethodInfo* method)
{
	typedef int32_t (*Event_get_type_m2428_ftn) (Event_t183 *);
	static Event_get_type_m2428_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_get_type_m2428_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::get_type()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.Vector2 UnityEngine.Event::get_mousePosition()
extern "C" Vector2_t12  Event_get_mousePosition_m2429 (Event_t183 * __this, MethodInfo* method)
{
	Vector2_t12  V_0 = {0};
	{
		Event_Internal_GetMousePosition_m2430(__this, (&V_0), /*hidden argument*/&Event_Internal_GetMousePosition_m2430_MethodInfo);
		Vector2_t12  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Event::Internal_GetMousePosition(UnityEngine.Vector2&)
extern "C" void Event_Internal_GetMousePosition_m2430 (Event_t183 * __this, Vector2_t12 * ___value, MethodInfo* method)
{
	typedef void (*Event_Internal_GetMousePosition_m2430_ftn) (Event_t183 *, Vector2_t12 *);
	static Event_Internal_GetMousePosition_m2430_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_Internal_GetMousePosition_m2430_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::Internal_GetMousePosition(UnityEngine.Vector2&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.EventModifiers UnityEngine.Event::get_modifiers()
extern "C" int32_t Event_get_modifiers_m1667 (Event_t183 * __this, MethodInfo* method)
{
	typedef int32_t (*Event_get_modifiers_m1667_ftn) (Event_t183 *);
	static Event_get_modifiers_m1667_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_get_modifiers_m1667_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::get_modifiers()");
	return _il2cpp_icall_func(__this);
}
// System.Char UnityEngine.Event::get_character()
extern "C" uint16_t Event_get_character_m1669 (Event_t183 * __this, MethodInfo* method)
{
	typedef uint16_t (*Event_get_character_m1669_ftn) (Event_t183 *);
	static Event_get_character_m1669_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_get_character_m1669_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::get_character()");
	return _il2cpp_icall_func(__this);
}
// System.String UnityEngine.Event::get_commandName()
extern "C" String_t* Event_get_commandName_m2431 (Event_t183 * __this, MethodInfo* method)
{
	typedef String_t* (*Event_get_commandName_m2431_ftn) (Event_t183 *);
	static Event_get_commandName_m2431_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_get_commandName_m2431_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::get_commandName()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.KeyCode UnityEngine.Event::get_keyCode()
extern "C" int32_t Event_get_keyCode_m1668 (Event_t183 * __this, MethodInfo* method)
{
	typedef int32_t (*Event_get_keyCode_m1668_ftn) (Event_t183 *);
	static Event_get_keyCode_m1668_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_get_keyCode_m1668_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::get_keyCode()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.Event UnityEngine.Event::get_current()
extern "C" Event_t183 * Event_get_current_m2432 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		Event_t183 * L_0 = ((Event_t183_StaticFields*)InitializedTypeInfo(&Event_t183_il2cpp_TypeInfo)->static_fields)->___s_Current_1;
		return L_0;
	}
}
// System.Void UnityEngine.Event::Internal_SetNativeEvent(System.IntPtr)
extern "C" void Event_Internal_SetNativeEvent_m2433 (Object_t * __this /* static, unused */, IntPtr_t ___ptr, MethodInfo* method)
{
	typedef void (*Event_Internal_SetNativeEvent_m2433_ftn) (IntPtr_t);
	static Event_Internal_SetNativeEvent_m2433_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_Internal_SetNativeEvent_m2433_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::Internal_SetNativeEvent(System.IntPtr)");
	_il2cpp_icall_func(___ptr);
}
// System.Void UnityEngine.Event::Internal_MakeMasterEventCurrent()
extern MethodInfo Event_Internal_MakeMasterEventCurrent_m2434_MethodInfo;
extern "C" void Event_Internal_MakeMasterEventCurrent_m2434 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		Event_t183 * L_0 = ((Event_t183_StaticFields*)InitializedTypeInfo(&Event_t183_il2cpp_TypeInfo)->static_fields)->___s_MasterEvent_2;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		Event_t183 * L_1 = (Event_t183 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Event_t183_il2cpp_TypeInfo));
		Event__ctor_m1647(L_1, /*hidden argument*/&Event__ctor_m1647_MethodInfo);
		((Event_t183_StaticFields*)InitializedTypeInfo(&Event_t183_il2cpp_TypeInfo)->static_fields)->___s_MasterEvent_2 = L_1;
	}

IL_0014:
	{
		Event_t183 * L_2 = ((Event_t183_StaticFields*)InitializedTypeInfo(&Event_t183_il2cpp_TypeInfo)->static_fields)->___s_MasterEvent_2;
		((Event_t183_StaticFields*)InitializedTypeInfo(&Event_t183_il2cpp_TypeInfo)->static_fields)->___s_Current_1 = L_2;
		Event_t183 * L_3 = ((Event_t183_StaticFields*)InitializedTypeInfo(&Event_t183_il2cpp_TypeInfo)->static_fields)->___s_MasterEvent_2;
		NullCheck(L_3);
		IntPtr_t L_4 = (L_3->___m_Ptr_0);
		Event_Internal_SetNativeEvent_m2433(NULL /*static, unused*/, L_4, /*hidden argument*/&Event_Internal_SetNativeEvent_m2433_MethodInfo);
		return;
	}
}
// System.Boolean UnityEngine.Event::PopEvent(UnityEngine.Event)
extern MethodInfo Event_PopEvent_m1672_MethodInfo;
extern "C" bool Event_PopEvent_m1672 (Object_t * __this /* static, unused */, Event_t183 * ___outEvent, MethodInfo* method)
{
	typedef bool (*Event_PopEvent_m1672_ftn) (Event_t183 *);
	static Event_PopEvent_m1672_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_PopEvent_m1672_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::PopEvent(UnityEngine.Event)");
	return _il2cpp_icall_func(___outEvent);
}
// System.Boolean UnityEngine.Event::get_isKey()
extern "C" bool Event_get_isKey_m2435 (Event_t183 * __this, MethodInfo* method)
{
	int32_t V_0 = {0};
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = Event_get_type_m2428(__this, /*hidden argument*/&Event_get_type_m2428_MethodInfo);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)4)))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = V_0;
		G_B3_0 = ((((int32_t)L_2) == ((int32_t)5))? 1 : 0);
		goto IL_0015;
	}

IL_0014:
	{
		G_B3_0 = 1;
	}

IL_0015:
	{
		return G_B3_0;
	}
}
// System.Boolean UnityEngine.Event::get_isMouse()
extern "C" bool Event_get_isMouse_m2436 (Event_t183 * __this, MethodInfo* method)
{
	int32_t V_0 = {0};
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = Event_get_type_m2428(__this, /*hidden argument*/&Event_get_type_m2428_MethodInfo);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)2)))
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_4 = V_0;
		G_B5_0 = ((((int32_t)L_4) == ((int32_t)3))? 1 : 0);
		goto IL_0022;
	}

IL_0021:
	{
		G_B5_0 = 1;
	}

IL_0022:
	{
		return G_B5_0;
	}
}
// System.Int32 UnityEngine.Event::GetHashCode()
extern MethodInfo Event_GetHashCode_m2437_MethodInfo;
extern "C" int32_t Event_GetHashCode_m2437 (Event_t183 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	Vector2_t12  V_1 = {0};
	{
		V_0 = 1;
		bool L_0 = Event_get_isKey_m2435(__this, /*hidden argument*/&Event_get_isKey_m2435_MethodInfo);
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_1 = Event_get_keyCode_m1668(__this, /*hidden argument*/&Event_get_keyCode_m1668_MethodInfo);
		V_0 = (((uint16_t)L_1));
	}

IL_0015:
	{
		bool L_2 = Event_get_isMouse_m2436(__this, /*hidden argument*/&Event_get_isMouse_m2436_MethodInfo);
		if (!L_2)
		{
			goto IL_002f;
		}
	}
	{
		Vector2_t12  L_3 = Event_get_mousePosition_m2429(__this, /*hidden argument*/&Event_get_mousePosition_m2429_MethodInfo);
		V_1 = L_3;
		int32_t L_4 = Vector2_GetHashCode_m2441((&V_1), /*hidden argument*/&Vector2_GetHashCode_m2441_MethodInfo);
		V_0 = L_4;
	}

IL_002f:
	{
		int32_t L_5 = V_0;
		int32_t L_6 = Event_get_modifiers_m1667(__this, /*hidden argument*/&Event_get_modifiers_m1667_MethodInfo);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_5*(int32_t)((int32_t)37)))|(int32_t)L_6));
		int32_t L_7 = V_0;
		return L_7;
	}
}
// System.Boolean UnityEngine.Event::Equals(System.Object)
extern MethodInfo Event_Equals_m2438_MethodInfo;
extern "C" bool Event_Equals_m2438 (Event_t183 * __this, Object_t * ___obj, MethodInfo* method)
{
	Event_t183 * V_0 = {0};
	{
		Object_t * L_0 = ___obj;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		return 0;
	}

IL_0008:
	{
		Object_t * L_1 = ___obj;
		bool L_2 = Object_ReferenceEquals_m3357(NULL /*static, unused*/, __this, L_1, /*hidden argument*/&Object_ReferenceEquals_m3357_MethodInfo);
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		return 1;
	}

IL_0016:
	{
		Object_t * L_3 = ___obj;
		NullCheck(L_3);
		Type_t * L_4 = Object_GetType_m1381(L_3, /*hidden argument*/&Object_GetType_m1381_MethodInfo);
		Type_t * L_5 = Object_GetType_m1381(__this, /*hidden argument*/&Object_GetType_m1381_MethodInfo);
		if ((((Object_t*)(Type_t *)L_4) == ((Object_t*)(Type_t *)L_5)))
		{
			goto IL_0029;
		}
	}
	{
		return 0;
	}

IL_0029:
	{
		Object_t * L_6 = ___obj;
		V_0 = ((Event_t183 *)Castclass(L_6, InitializedTypeInfo(&Event_t183_il2cpp_TypeInfo)));
		int32_t L_7 = Event_get_type_m2428(__this, /*hidden argument*/&Event_get_type_m2428_MethodInfo);
		Event_t183 * L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9 = Event_get_type_m2428(L_8, /*hidden argument*/&Event_get_type_m2428_MethodInfo);
		if ((!(((uint32_t)L_7) == ((uint32_t)L_9))))
		{
			goto IL_0058;
		}
	}
	{
		int32_t L_10 = Event_get_modifiers_m1667(__this, /*hidden argument*/&Event_get_modifiers_m1667_MethodInfo);
		Event_t183 * L_11 = V_0;
		NullCheck(L_11);
		int32_t L_12 = Event_get_modifiers_m1667(L_11, /*hidden argument*/&Event_get_modifiers_m1667_MethodInfo);
		if ((((int32_t)((int32_t)((int32_t)L_10&(int32_t)((int32_t)-33)))) == ((int32_t)((int32_t)((int32_t)L_12&(int32_t)((int32_t)-33))))))
		{
			goto IL_005a;
		}
	}

IL_0058:
	{
		return 0;
	}

IL_005a:
	{
		bool L_13 = Event_get_isKey_m2435(__this, /*hidden argument*/&Event_get_isKey_m2435_MethodInfo);
		if (!L_13)
		{
			goto IL_0074;
		}
	}
	{
		int32_t L_14 = Event_get_keyCode_m1668(__this, /*hidden argument*/&Event_get_keyCode_m1668_MethodInfo);
		Event_t183 * L_15 = V_0;
		NullCheck(L_15);
		int32_t L_16 = Event_get_keyCode_m1668(L_15, /*hidden argument*/&Event_get_keyCode_m1668_MethodInfo);
		return ((((int32_t)L_14) == ((int32_t)L_16))? 1 : 0);
	}

IL_0074:
	{
		bool L_17 = Event_get_isMouse_m2436(__this, /*hidden argument*/&Event_get_isMouse_m2436_MethodInfo);
		if (!L_17)
		{
			goto IL_0091;
		}
	}
	{
		Vector2_t12  L_18 = Event_get_mousePosition_m2429(__this, /*hidden argument*/&Event_get_mousePosition_m2429_MethodInfo);
		Event_t183 * L_19 = V_0;
		NullCheck(L_19);
		Vector2_t12  L_20 = Event_get_mousePosition_m2429(L_19, /*hidden argument*/&Event_get_mousePosition_m2429_MethodInfo);
		bool L_21 = Vector2_op_Equality_m1931(NULL /*static, unused*/, L_18, L_20, /*hidden argument*/&Vector2_op_Equality_m1931_MethodInfo);
		return L_21;
	}

IL_0091:
	{
		return 0;
	}
}
// System.String UnityEngine.Event::ToString()
extern MethodInfo Event_ToString_m2439_MethodInfo;
extern TypeInfo* ObjectU5BU5D_t269_il2cpp_TypeInfo_var;
extern "C" String_t* Event_ToString_m2439 (Event_t183 * __this, MethodInfo* method)
{
	static bool Event_ToString_m2439_init;
	if (!Event_ToString_m2439_init)
	{
		ObjectU5BU5D_t269_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t269_0_0_0);
		Event_ToString_m2439_init = true;
	}
	{
		bool L_0 = Event_get_isKey_m2435(__this, /*hidden argument*/&Event_get_isKey_m2435_MethodInfo);
		if (!L_0)
		{
			goto IL_00c0;
		}
	}
	{
		uint16_t L_1 = Event_get_character_m1669(__this, /*hidden argument*/&Event_get_character_m1669_MethodInfo);
		if (L_1)
		{
			goto IL_0051;
		}
	}
	{
		ObjectU5BU5D_t269* L_2 = ((ObjectU5BU5D_t269*)SZArrayNew(ObjectU5BU5D_t269_il2cpp_TypeInfo_var, 3));
		int32_t L_3 = Event_get_type_m2428(__this, /*hidden argument*/&Event_get_type_m2428_MethodInfo);
		int32_t L_4 = L_3;
		Object_t * L_5 = Box(InitializedTypeInfo(&EventType_t488_il2cpp_TypeInfo), &L_4);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		ArrayElementTypeCheck (L_2, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 0)) = (Object_t *)L_5;
		ObjectU5BU5D_t269* L_6 = L_2;
		int32_t L_7 = Event_get_modifiers_m1667(__this, /*hidden argument*/&Event_get_modifiers_m1667_MethodInfo);
		int32_t L_8 = L_7;
		Object_t * L_9 = Box(InitializedTypeInfo(&EventModifiers_t489_il2cpp_TypeInfo), &L_8);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 1);
		ArrayElementTypeCheck (L_6, L_9);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 1)) = (Object_t *)L_9;
		ObjectU5BU5D_t269* L_10 = L_6;
		int32_t L_11 = Event_get_keyCode_m1668(__this, /*hidden argument*/&Event_get_keyCode_m1668_MethodInfo);
		int32_t L_12 = L_11;
		Object_t * L_13 = Box(InitializedTypeInfo(&KeyCode_t487_il2cpp_TypeInfo), &L_12);
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 2);
		ArrayElementTypeCheck (L_10, L_13);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_10, 2)) = (Object_t *)L_13;
		String_t* L_14 = UnityString_Format_m2626(NULL /*static, unused*/, (String_t*) &_stringLiteral128, L_10, /*hidden argument*/&UnityString_Format_m2626_MethodInfo);
		return L_14;
	}

IL_0051:
	{
		ObjectU5BU5D_t269* L_15 = ((ObjectU5BU5D_t269*)SZArrayNew(ObjectU5BU5D_t269_il2cpp_TypeInfo_var, 8));
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, 0);
		ArrayElementTypeCheck (L_15, (String_t*) &_stringLiteral129);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_15, 0)) = (Object_t *)(String_t*) &_stringLiteral129;
		ObjectU5BU5D_t269* L_16 = L_15;
		int32_t L_17 = Event_get_type_m2428(__this, /*hidden argument*/&Event_get_type_m2428_MethodInfo);
		int32_t L_18 = L_17;
		Object_t * L_19 = Box(InitializedTypeInfo(&EventType_t488_il2cpp_TypeInfo), &L_18);
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, 1);
		ArrayElementTypeCheck (L_16, L_19);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_16, 1)) = (Object_t *)L_19;
		ObjectU5BU5D_t269* L_20 = L_16;
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, 2);
		ArrayElementTypeCheck (L_20, (String_t*) &_stringLiteral130);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_20, 2)) = (Object_t *)(String_t*) &_stringLiteral130;
		ObjectU5BU5D_t269* L_21 = L_20;
		uint16_t L_22 = Event_get_character_m1669(__this, /*hidden argument*/&Event_get_character_m1669_MethodInfo);
		int32_t L_23 = L_22;
		Object_t * L_24 = Box(InitializedTypeInfo(&Int32_t17_il2cpp_TypeInfo), &L_23);
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, 3);
		ArrayElementTypeCheck (L_21, L_24);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_21, 3)) = (Object_t *)L_24;
		ObjectU5BU5D_t269* L_25 = L_21;
		NullCheck(L_25);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_25, 4);
		ArrayElementTypeCheck (L_25, (String_t*) &_stringLiteral131);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_25, 4)) = (Object_t *)(String_t*) &_stringLiteral131;
		ObjectU5BU5D_t269* L_26 = L_25;
		int32_t L_27 = Event_get_modifiers_m1667(__this, /*hidden argument*/&Event_get_modifiers_m1667_MethodInfo);
		int32_t L_28 = L_27;
		Object_t * L_29 = Box(InitializedTypeInfo(&EventModifiers_t489_il2cpp_TypeInfo), &L_28);
		NullCheck(L_26);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_26, 5);
		ArrayElementTypeCheck (L_26, L_29);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_26, 5)) = (Object_t *)L_29;
		ObjectU5BU5D_t269* L_30 = L_26;
		NullCheck(L_30);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_30, 6);
		ArrayElementTypeCheck (L_30, (String_t*) &_stringLiteral132);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_30, 6)) = (Object_t *)(String_t*) &_stringLiteral132;
		ObjectU5BU5D_t269* L_31 = L_30;
		int32_t L_32 = Event_get_keyCode_m1668(__this, /*hidden argument*/&Event_get_keyCode_m1668_MethodInfo);
		int32_t L_33 = L_32;
		Object_t * L_34 = Box(InitializedTypeInfo(&KeyCode_t487_il2cpp_TypeInfo), &L_33);
		NullCheck(L_31);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_31, 7);
		ArrayElementTypeCheck (L_31, L_34);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_31, 7)) = (Object_t *)L_34;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_35 = String_Concat_m1344(NULL /*static, unused*/, L_31, /*hidden argument*/&String_Concat_m1344_MethodInfo);
		String_t* L_36 = UnityString_Format_m2626(NULL /*static, unused*/, L_35, ((ObjectU5BU5D_t269*)SZArrayNew(ObjectU5BU5D_t269_il2cpp_TypeInfo_var, 0)), /*hidden argument*/&UnityString_Format_m2626_MethodInfo);
		return L_36;
	}

IL_00c0:
	{
		bool L_37 = Event_get_isMouse_m2436(__this, /*hidden argument*/&Event_get_isMouse_m2436_MethodInfo);
		if (!L_37)
		{
			goto IL_0106;
		}
	}
	{
		ObjectU5BU5D_t269* L_38 = ((ObjectU5BU5D_t269*)SZArrayNew(ObjectU5BU5D_t269_il2cpp_TypeInfo_var, 3));
		int32_t L_39 = Event_get_type_m2428(__this, /*hidden argument*/&Event_get_type_m2428_MethodInfo);
		int32_t L_40 = L_39;
		Object_t * L_41 = Box(InitializedTypeInfo(&EventType_t488_il2cpp_TypeInfo), &L_40);
		NullCheck(L_38);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_38, 0);
		ArrayElementTypeCheck (L_38, L_41);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_38, 0)) = (Object_t *)L_41;
		ObjectU5BU5D_t269* L_42 = L_38;
		Vector2_t12  L_43 = Event_get_mousePosition_m2429(__this, /*hidden argument*/&Event_get_mousePosition_m2429_MethodInfo);
		Vector2_t12  L_44 = L_43;
		Object_t * L_45 = Box(InitializedTypeInfo(&Vector2_t12_il2cpp_TypeInfo), &L_44);
		NullCheck(L_42);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_42, 1);
		ArrayElementTypeCheck (L_42, L_45);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_42, 1)) = (Object_t *)L_45;
		ObjectU5BU5D_t269* L_46 = L_42;
		int32_t L_47 = Event_get_modifiers_m1667(__this, /*hidden argument*/&Event_get_modifiers_m1667_MethodInfo);
		int32_t L_48 = L_47;
		Object_t * L_49 = Box(InitializedTypeInfo(&EventModifiers_t489_il2cpp_TypeInfo), &L_48);
		NullCheck(L_46);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_46, 2);
		ArrayElementTypeCheck (L_46, L_49);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_46, 2)) = (Object_t *)L_49;
		String_t* L_50 = UnityString_Format_m2626(NULL /*static, unused*/, (String_t*) &_stringLiteral133, L_46, /*hidden argument*/&UnityString_Format_m2626_MethodInfo);
		return L_50;
	}

IL_0106:
	{
		int32_t L_51 = Event_get_type_m2428(__this, /*hidden argument*/&Event_get_type_m2428_MethodInfo);
		if ((((int32_t)L_51) == ((int32_t)((int32_t)14))))
		{
			goto IL_0120;
		}
	}
	{
		int32_t L_52 = Event_get_type_m2428(__this, /*hidden argument*/&Event_get_type_m2428_MethodInfo);
		if ((!(((uint32_t)L_52) == ((uint32_t)((int32_t)13)))))
		{
			goto IL_0148;
		}
	}

IL_0120:
	{
		ObjectU5BU5D_t269* L_53 = ((ObjectU5BU5D_t269*)SZArrayNew(ObjectU5BU5D_t269_il2cpp_TypeInfo_var, 2));
		int32_t L_54 = Event_get_type_m2428(__this, /*hidden argument*/&Event_get_type_m2428_MethodInfo);
		int32_t L_55 = L_54;
		Object_t * L_56 = Box(InitializedTypeInfo(&EventType_t488_il2cpp_TypeInfo), &L_55);
		NullCheck(L_53);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_53, 0);
		ArrayElementTypeCheck (L_53, L_56);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_53, 0)) = (Object_t *)L_56;
		ObjectU5BU5D_t269* L_57 = L_53;
		String_t* L_58 = Event_get_commandName_m2431(__this, /*hidden argument*/&Event_get_commandName_m2431_MethodInfo);
		NullCheck(L_57);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_57, 1);
		ArrayElementTypeCheck (L_57, L_58);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_57, 1)) = (Object_t *)L_58;
		String_t* L_59 = UnityString_Format_m2626(NULL /*static, unused*/, (String_t*) &_stringLiteral134, L_57, /*hidden argument*/&UnityString_Format_m2626_MethodInfo);
		return L_59;
	}

IL_0148:
	{
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_60 = ((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2;
		int32_t L_61 = Event_get_type_m2428(__this, /*hidden argument*/&Event_get_type_m2428_MethodInfo);
		int32_t L_62 = L_61;
		Object_t * L_63 = Box(InitializedTypeInfo(&EventType_t488_il2cpp_TypeInfo), &L_62);
		String_t* L_64 = String_Concat_m50(NULL /*static, unused*/, L_60, L_63, /*hidden argument*/&String_Concat_m50_MethodInfo);
		return L_64;
	}
}
// Conversion methods for marshalling of: UnityEngine.Event
void Event_t183_marshal(const Event_t183& unmarshaled, Event_t183_marshaled& marshaled)
{
	Il2CppCodeGenException* ___s_Current_1Exception = il2cpp_codegen_get_not_supported_exception("Cannot marshal field 's_Current' of type 'Event': Reference type field marshaling is not supported.");
	il2cpp_codegen_raise_exception(___s_Current_1Exception);
}
void Event_t183_marshal_back(const Event_t183_marshaled& marshaled, Event_t183& unmarshaled)
{
	Il2CppCodeGenException* ___s_Current_1Exception = il2cpp_codegen_get_not_supported_exception("Cannot marshal field 's_Current' of type 'Event': Reference type field marshaling is not supported.");
	il2cpp_codegen_raise_exception(___s_Current_1Exception);
}
// Conversion method for clean up from marshalling of: UnityEngine.Event
void Event_t183_marshal_cleanup(Event_t183_marshaled& marshaled)
{
}
#ifndef _MSC_VER
#else
#endif
// UnityEngine.KeyCode
#include "UnityEngine_UnityEngine_KeyCodeMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif
// UnityEngine.EventType
#include "UnityEngine_UnityEngine_EventTypeMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif
// UnityEngine.EventModifiers
#include "UnityEngine_UnityEngine_EventModifiersMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif

// System.IndexOutOfRangeException
#include "mscorlib_System_IndexOutOfRangeException.h"
extern TypeInfo IndexOutOfRangeException_t690_il2cpp_TypeInfo;
extern TypeInfo Vector3_t6_il2cpp_TypeInfo;
// System.IndexOutOfRangeException
#include "mscorlib_System_IndexOutOfRangeExceptionMethodDeclarations.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3MethodDeclarations.h"
extern MethodInfo IndexOutOfRangeException__ctor_m3358_MethodInfo;
extern MethodInfo Vector2__ctor_m1356_MethodInfo;
extern MethodInfo Single_Equals_m3359_MethodInfo;
extern MethodInfo Vector2_op_Subtraction_m1376_MethodInfo;
extern MethodInfo Vector2_SqrMagnitude_m2443_MethodInfo;
extern MethodInfo Vector3__ctor_m28_MethodInfo;


// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
extern "C" void Vector2__ctor_m1356 (Vector2_t12 * __this, float ___x, float ___y, MethodInfo* method)
{
	{
		float L_0 = ___x;
		__this->___x_1 = L_0;
		float L_1 = ___y;
		__this->___y_2 = L_1;
		return;
	}
}
// System.Single UnityEngine.Vector2::get_Item(System.Int32)
extern MethodInfo Vector2_get_Item_m1602_MethodInfo;
extern "C" float Vector2_get_Item_m1602 (Vector2_t12 * __this, int32_t ___index, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___index;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_001b;
		}
	}
	{
		goto IL_0022;
	}

IL_0014:
	{
		float L_3 = (__this->___x_1);
		return L_3;
	}

IL_001b:
	{
		float L_4 = (__this->___y_2);
		return L_4;
	}

IL_0022:
	{
		IndexOutOfRangeException_t690 * L_5 = (IndexOutOfRangeException_t690 *)il2cpp_codegen_object_new (InitializedTypeInfo(&IndexOutOfRangeException_t690_il2cpp_TypeInfo));
		IndexOutOfRangeException__ctor_m3358(L_5, (String_t*) &_stringLiteral135, /*hidden argument*/&IndexOutOfRangeException__ctor_m3358_MethodInfo);
		il2cpp_codegen_raise_exception(L_5);
	}
}
// System.Void UnityEngine.Vector2::set_Item(System.Int32,System.Single)
extern MethodInfo Vector2_set_Item_m1617_MethodInfo;
extern "C" void Vector2_set_Item_m1617 (Vector2_t12 * __this, int32_t ___index, float ___value, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___index;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0020;
		}
	}
	{
		goto IL_002c;
	}

IL_0014:
	{
		float L_3 = ___value;
		__this->___x_1 = L_3;
		goto IL_0037;
	}

IL_0020:
	{
		float L_4 = ___value;
		__this->___y_2 = L_4;
		goto IL_0037;
	}

IL_002c:
	{
		IndexOutOfRangeException_t690 * L_5 = (IndexOutOfRangeException_t690 *)il2cpp_codegen_object_new (InitializedTypeInfo(&IndexOutOfRangeException_t690_il2cpp_TypeInfo));
		IndexOutOfRangeException__ctor_m3358(L_5, (String_t*) &_stringLiteral135, /*hidden argument*/&IndexOutOfRangeException__ctor_m3358_MethodInfo);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0037:
	{
		return;
	}
}
// UnityEngine.Vector2 UnityEngine.Vector2::Scale(UnityEngine.Vector2,UnityEngine.Vector2)
extern MethodInfo Vector2_Scale_m1708_MethodInfo;
extern "C" Vector2_t12  Vector2_Scale_m1708 (Object_t * __this /* static, unused */, Vector2_t12  ___a, Vector2_t12  ___b, MethodInfo* method)
{
	{
		float L_0 = ((&___a)->___x_1);
		float L_1 = ((&___b)->___x_1);
		float L_2 = ((&___a)->___y_2);
		float L_3 = ((&___b)->___y_2);
		Vector2_t12  L_4 = {0};
		Vector2__ctor_m1356(&L_4, ((float)((float)L_0*(float)L_1)), ((float)((float)L_2*(float)L_3)), /*hidden argument*/&Vector2__ctor_m1356_MethodInfo);
		return L_4;
	}
}
// System.String UnityEngine.Vector2::ToString()
extern MethodInfo Vector2_ToString_m2440_MethodInfo;
extern TypeInfo* ObjectU5BU5D_t269_il2cpp_TypeInfo_var;
extern "C" String_t* Vector2_ToString_m2440 (Vector2_t12 * __this, MethodInfo* method)
{
	static bool Vector2_ToString_m2440_init;
	if (!Vector2_ToString_m2440_init)
	{
		ObjectU5BU5D_t269_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t269_0_0_0);
		Vector2_ToString_m2440_init = true;
	}
	{
		ObjectU5BU5D_t269* L_0 = ((ObjectU5BU5D_t269*)SZArrayNew(ObjectU5BU5D_t269_il2cpp_TypeInfo_var, 2));
		float L_1 = (__this->___x_1);
		float L_2 = L_1;
		Object_t * L_3 = Box(InitializedTypeInfo(&Single_t23_il2cpp_TypeInfo), &L_2);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_3;
		ObjectU5BU5D_t269* L_4 = L_0;
		float L_5 = (__this->___y_2);
		float L_6 = L_5;
		Object_t * L_7 = Box(InitializedTypeInfo(&Single_t23_il2cpp_TypeInfo), &L_6);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 1)) = (Object_t *)L_7;
		String_t* L_8 = UnityString_Format_m2626(NULL /*static, unused*/, (String_t*) &_stringLiteral136, L_4, /*hidden argument*/&UnityString_Format_m2626_MethodInfo);
		return L_8;
	}
}
// System.Int32 UnityEngine.Vector2::GetHashCode()
extern "C" int32_t Vector2_GetHashCode_m2441 (Vector2_t12 * __this, MethodInfo* method)
{
	{
		float* L_0 = &(__this->___x_1);
		int32_t L_1 = Single_GetHashCode_m3333(L_0, /*hidden argument*/&Single_GetHashCode_m3333_MethodInfo);
		float* L_2 = &(__this->___y_2);
		int32_t L_3 = Single_GetHashCode_m3333(L_2, /*hidden argument*/&Single_GetHashCode_m3333_MethodInfo);
		return ((int32_t)((int32_t)L_1^(int32_t)((int32_t)((int32_t)L_3<<(int32_t)2))));
	}
}
// System.Boolean UnityEngine.Vector2::Equals(System.Object)
extern MethodInfo Vector2_Equals_m2442_MethodInfo;
extern "C" bool Vector2_Equals_m2442 (Vector2_t12 * __this, Object_t * ___other, MethodInfo* method)
{
	Vector2_t12  V_0 = {0};
	int32_t G_B5_0 = 0;
	{
		Object_t * L_0 = ___other;
		if (((Object_t *)IsInst(L_0, InitializedTypeInfo(&Vector2_t12_il2cpp_TypeInfo))))
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		Object_t * L_1 = ___other;
		V_0 = ((*(Vector2_t12 *)((Vector2_t12 *)UnBox (L_1, InitializedTypeInfo(&Vector2_t12_il2cpp_TypeInfo)))));
		float* L_2 = &(__this->___x_1);
		float L_3 = ((&V_0)->___x_1);
		bool L_4 = Single_Equals_m3359(L_2, L_3, /*hidden argument*/&Single_Equals_m3359_MethodInfo);
		if (!L_4)
		{
			goto IL_003f;
		}
	}
	{
		float* L_5 = &(__this->___y_2);
		float L_6 = ((&V_0)->___y_2);
		bool L_7 = Single_Equals_m3359(L_5, L_6, /*hidden argument*/&Single_Equals_m3359_MethodInfo);
		G_B5_0 = ((int32_t)(L_7));
		goto IL_0040;
	}

IL_003f:
	{
		G_B5_0 = 0;
	}

IL_0040:
	{
		return G_B5_0;
	}
}
// System.Single UnityEngine.Vector2::Dot(UnityEngine.Vector2,UnityEngine.Vector2)
extern MethodInfo Vector2_Dot_m1402_MethodInfo;
extern "C" float Vector2_Dot_m1402 (Object_t * __this /* static, unused */, Vector2_t12  ___lhs, Vector2_t12  ___rhs, MethodInfo* method)
{
	{
		float L_0 = ((&___lhs)->___x_1);
		float L_1 = ((&___rhs)->___x_1);
		float L_2 = ((&___lhs)->___y_2);
		float L_3 = ((&___rhs)->___y_2);
		return ((float)((float)((float)((float)L_0*(float)L_1))+(float)((float)((float)L_2*(float)L_3))));
	}
}
// System.Single UnityEngine.Vector2::get_sqrMagnitude()
extern MethodInfo Vector2_get_sqrMagnitude_m1352_MethodInfo;
extern "C" float Vector2_get_sqrMagnitude_m1352 (Vector2_t12 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->___x_1);
		float L_1 = (__this->___x_1);
		float L_2 = (__this->___y_2);
		float L_3 = (__this->___y_2);
		return ((float)((float)((float)((float)L_0*(float)L_1))+(float)((float)((float)L_2*(float)L_3))));
	}
}
// System.Single UnityEngine.Vector2::SqrMagnitude(UnityEngine.Vector2)
extern "C" float Vector2_SqrMagnitude_m2443 (Object_t * __this /* static, unused */, Vector2_t12  ___a, MethodInfo* method)
{
	{
		float L_0 = ((&___a)->___x_1);
		float L_1 = ((&___a)->___x_1);
		float L_2 = ((&___a)->___y_2);
		float L_3 = ((&___a)->___y_2);
		return ((float)((float)((float)((float)L_0*(float)L_1))+(float)((float)((float)L_2*(float)L_3))));
	}
}
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
extern "C" Vector2_t12  Vector2_get_zero_m1350 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		Vector2_t12  L_0 = {0};
		Vector2__ctor_m1356(&L_0, (0.0f), (0.0f), /*hidden argument*/&Vector2__ctor_m1356_MethodInfo);
		return L_0;
	}
}
// UnityEngine.Vector2 UnityEngine.Vector2::get_one()
extern MethodInfo Vector2_get_one_m1597_MethodInfo;
extern "C" Vector2_t12  Vector2_get_one_m1597 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		Vector2_t12  L_0 = {0};
		Vector2__ctor_m1356(&L_0, (1.0f), (1.0f), /*hidden argument*/&Vector2__ctor_m1356_MethodInfo);
		return L_0;
	}
}
// UnityEngine.Vector2 UnityEngine.Vector2::get_up()
extern MethodInfo Vector2_get_up_m1873_MethodInfo;
extern "C" Vector2_t12  Vector2_get_up_m1873 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		Vector2_t12  L_0 = {0};
		Vector2__ctor_m1356(&L_0, (0.0f), (1.0f), /*hidden argument*/&Vector2__ctor_m1356_MethodInfo);
		return L_0;
	}
}
// UnityEngine.Vector2 UnityEngine.Vector2::op_Addition(UnityEngine.Vector2,UnityEngine.Vector2)
extern MethodInfo Vector2_op_Addition_m1600_MethodInfo;
extern "C" Vector2_t12  Vector2_op_Addition_m1600 (Object_t * __this /* static, unused */, Vector2_t12  ___a, Vector2_t12  ___b, MethodInfo* method)
{
	{
		float L_0 = ((&___a)->___x_1);
		float L_1 = ((&___b)->___x_1);
		float L_2 = ((&___a)->___y_2);
		float L_3 = ((&___b)->___y_2);
		Vector2_t12  L_4 = {0};
		Vector2__ctor_m1356(&L_4, ((float)((float)L_0+(float)L_1)), ((float)((float)L_2+(float)L_3)), /*hidden argument*/&Vector2__ctor_m1356_MethodInfo);
		return L_4;
	}
}
// UnityEngine.Vector2 UnityEngine.Vector2::op_Subtraction(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C" Vector2_t12  Vector2_op_Subtraction_m1376 (Object_t * __this /* static, unused */, Vector2_t12  ___a, Vector2_t12  ___b, MethodInfo* method)
{
	{
		float L_0 = ((&___a)->___x_1);
		float L_1 = ((&___b)->___x_1);
		float L_2 = ((&___a)->___y_2);
		float L_3 = ((&___b)->___y_2);
		Vector2_t12  L_4 = {0};
		Vector2__ctor_m1356(&L_4, ((float)((float)L_0-(float)L_1)), ((float)((float)L_2-(float)L_3)), /*hidden argument*/&Vector2__ctor_m1356_MethodInfo);
		return L_4;
	}
}
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,System.Single)
extern MethodInfo Vector2_op_Multiply_m1598_MethodInfo;
extern "C" Vector2_t12  Vector2_op_Multiply_m1598 (Object_t * __this /* static, unused */, Vector2_t12  ___a, float ___d, MethodInfo* method)
{
	{
		float L_0 = ((&___a)->___x_1);
		float L_1 = ___d;
		float L_2 = ((&___a)->___y_2);
		float L_3 = ___d;
		Vector2_t12  L_4 = {0};
		Vector2__ctor_m1356(&L_4, ((float)((float)L_0*(float)L_1)), ((float)((float)L_2*(float)L_3)), /*hidden argument*/&Vector2__ctor_m1356_MethodInfo);
		return L_4;
	}
}
// UnityEngine.Vector2 UnityEngine.Vector2::op_Division(UnityEngine.Vector2,System.Single)
extern MethodInfo Vector2_op_Division_m1666_MethodInfo;
extern "C" Vector2_t12  Vector2_op_Division_m1666 (Object_t * __this /* static, unused */, Vector2_t12  ___a, float ___d, MethodInfo* method)
{
	{
		float L_0 = ((&___a)->___x_1);
		float L_1 = ___d;
		float L_2 = ((&___a)->___y_2);
		float L_3 = ___d;
		Vector2_t12  L_4 = {0};
		Vector2__ctor_m1356(&L_4, ((float)((float)L_0/(float)L_1)), ((float)((float)L_2/(float)L_3)), /*hidden argument*/&Vector2__ctor_m1356_MethodInfo);
		return L_4;
	}
}
// System.Boolean UnityEngine.Vector2::op_Equality(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C" bool Vector2_op_Equality_m1931 (Object_t * __this /* static, unused */, Vector2_t12  ___lhs, Vector2_t12  ___rhs, MethodInfo* method)
{
	{
		Vector2_t12  L_0 = ___lhs;
		Vector2_t12  L_1 = ___rhs;
		Vector2_t12  L_2 = Vector2_op_Subtraction_m1376(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Vector2_op_Subtraction_m1376_MethodInfo);
		float L_3 = Vector2_SqrMagnitude_m2443(NULL /*static, unused*/, L_2, /*hidden argument*/&Vector2_SqrMagnitude_m2443_MethodInfo);
		return ((((float)L_3) < ((float)(9.99999944E-11f)))? 1 : 0);
	}
}
// System.Boolean UnityEngine.Vector2::op_Inequality(UnityEngine.Vector2,UnityEngine.Vector2)
extern MethodInfo Vector2_op_Inequality_m1701_MethodInfo;
extern "C" bool Vector2_op_Inequality_m1701 (Object_t * __this /* static, unused */, Vector2_t12  ___lhs, Vector2_t12  ___rhs, MethodInfo* method)
{
	{
		Vector2_t12  L_0 = ___lhs;
		Vector2_t12  L_1 = ___rhs;
		Vector2_t12  L_2 = Vector2_op_Subtraction_m1376(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Vector2_op_Subtraction_m1376_MethodInfo);
		float L_3 = Vector2_SqrMagnitude_m2443(NULL /*static, unused*/, L_2, /*hidden argument*/&Vector2_SqrMagnitude_m2443_MethodInfo);
		return ((((int32_t)((!(((float)L_3) >= ((float)(9.99999944E-11f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
extern MethodInfo Vector2_op_Implicit_m1377_MethodInfo;
extern "C" Vector2_t12  Vector2_op_Implicit_m1377 (Object_t * __this /* static, unused */, Vector3_t6  ___v, MethodInfo* method)
{
	{
		float L_0 = ((&___v)->___x_1);
		float L_1 = ((&___v)->___y_2);
		Vector2_t12  L_2 = {0};
		Vector2__ctor_m1356(&L_2, L_0, L_1, /*hidden argument*/&Vector2__ctor_m1356_MethodInfo);
		return L_2;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
extern MethodInfo Vector2_op_Implicit_m1421_MethodInfo;
extern "C" Vector3_t6  Vector2_op_Implicit_m1421 (Object_t * __this /* static, unused */, Vector2_t12  ___v, MethodInfo* method)
{
	{
		float L_0 = ((&___v)->___x_1);
		float L_1 = ((&___v)->___y_2);
		Vector3_t6  L_2 = {0};
		Vector3__ctor_m28(&L_2, L_0, L_1, (0.0f), /*hidden argument*/&Vector3__ctor_m28_MethodInfo);
		return L_2;
	}
}
#ifndef _MSC_VER
#else
#endif

extern MethodInfo Vector3_Normalize_m2445_MethodInfo;
extern MethodInfo Mathf_Clamp01_m1573_MethodInfo;
extern MethodInfo Vector3_Magnitude_m2448_MethodInfo;
extern MethodInfo Vector3_op_Division_m2451_MethodInfo;
extern MethodInfo Vector3_get_zero_m1343_MethodInfo;
extern MethodInfo Single_ToString_m3360_MethodInfo;
extern MethodInfo Mathf_Sqrt_m1868_MethodInfo;
extern MethodInfo Vector3_op_Subtraction_m1557_MethodInfo;
extern MethodInfo Vector3_SqrMagnitude_m2449_MethodInfo;


// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
extern "C" void Vector3__ctor_m28 (Vector3_t6 * __this, float ___x, float ___y, float ___z, MethodInfo* method)
{
	{
		float L_0 = ___x;
		__this->___x_1 = L_0;
		float L_1 = ___y;
		__this->___y_2 = L_1;
		float L_2 = ___z;
		__this->___z_3 = L_2;
		return;
	}
}
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single)
extern MethodInfo Vector3__ctor_m1513_MethodInfo;
extern "C" void Vector3__ctor_m1513 (Vector3_t6 * __this, float ___x, float ___y, MethodInfo* method)
{
	{
		float L_0 = ___x;
		__this->___x_1 = L_0;
		float L_1 = ___y;
		__this->___y_2 = L_1;
		__this->___z_3 = (0.0f);
		return;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern MethodInfo Vector3_Lerp_m1768_MethodInfo;
extern "C" Vector3_t6  Vector3_Lerp_m1768 (Object_t * __this /* static, unused */, Vector3_t6  ___from, Vector3_t6  ___to, float ___t, MethodInfo* method)
{
	{
		float L_0 = ___t;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t270_il2cpp_TypeInfo));
		float L_1 = Mathf_Clamp01_m1573(NULL /*static, unused*/, L_0, /*hidden argument*/&Mathf_Clamp01_m1573_MethodInfo);
		___t = L_1;
		float L_2 = ((&___from)->___x_1);
		float L_3 = ((&___to)->___x_1);
		float L_4 = ((&___from)->___x_1);
		float L_5 = ___t;
		float L_6 = ((&___from)->___y_2);
		float L_7 = ((&___to)->___y_2);
		float L_8 = ((&___from)->___y_2);
		float L_9 = ___t;
		float L_10 = ((&___from)->___z_3);
		float L_11 = ((&___to)->___z_3);
		float L_12 = ((&___from)->___z_3);
		float L_13 = ___t;
		Vector3_t6  L_14 = {0};
		Vector3__ctor_m28(&L_14, ((float)((float)L_2+(float)((float)((float)((float)((float)L_3-(float)L_4))*(float)L_5)))), ((float)((float)L_6+(float)((float)((float)((float)((float)L_7-(float)L_8))*(float)L_9)))), ((float)((float)L_10+(float)((float)((float)((float)((float)L_11-(float)L_12))*(float)L_13)))), /*hidden argument*/&Vector3__ctor_m28_MethodInfo);
		return L_14;
	}
}
// System.Single UnityEngine.Vector3::get_Item(System.Int32)
extern MethodInfo Vector3_get_Item_m1770_MethodInfo;
extern "C" float Vector3_get_Item_m1770 (Vector3_t6 * __this, int32_t ___index, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___index;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0019;
		}
		if (L_1 == 1)
		{
			goto IL_0020;
		}
		if (L_1 == 2)
		{
			goto IL_0027;
		}
	}
	{
		goto IL_002e;
	}

IL_0019:
	{
		float L_2 = (__this->___x_1);
		return L_2;
	}

IL_0020:
	{
		float L_3 = (__this->___y_2);
		return L_3;
	}

IL_0027:
	{
		float L_4 = (__this->___z_3);
		return L_4;
	}

IL_002e:
	{
		IndexOutOfRangeException_t690 * L_5 = (IndexOutOfRangeException_t690 *)il2cpp_codegen_object_new (InitializedTypeInfo(&IndexOutOfRangeException_t690_il2cpp_TypeInfo));
		IndexOutOfRangeException__ctor_m3358(L_5, (String_t*) &_stringLiteral137, /*hidden argument*/&IndexOutOfRangeException__ctor_m3358_MethodInfo);
		il2cpp_codegen_raise_exception(L_5);
	}
}
// System.Void UnityEngine.Vector3::set_Item(System.Int32,System.Single)
extern MethodInfo Vector3_set_Item_m1771_MethodInfo;
extern "C" void Vector3_set_Item_m1771 (Vector3_t6 * __this, int32_t ___index, float ___value, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___index;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0019;
		}
		if (L_1 == 1)
		{
			goto IL_0025;
		}
		if (L_1 == 2)
		{
			goto IL_0031;
		}
	}
	{
		goto IL_003d;
	}

IL_0019:
	{
		float L_2 = ___value;
		__this->___x_1 = L_2;
		goto IL_0048;
	}

IL_0025:
	{
		float L_3 = ___value;
		__this->___y_2 = L_3;
		goto IL_0048;
	}

IL_0031:
	{
		float L_4 = ___value;
		__this->___z_3 = L_4;
		goto IL_0048;
	}

IL_003d:
	{
		IndexOutOfRangeException_t690 * L_5 = (IndexOutOfRangeException_t690 *)il2cpp_codegen_object_new (InitializedTypeInfo(&IndexOutOfRangeException_t690_il2cpp_TypeInfo));
		IndexOutOfRangeException__ctor_m3358(L_5, (String_t*) &_stringLiteral137, /*hidden argument*/&IndexOutOfRangeException__ctor_m3358_MethodInfo);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0048:
	{
		return;
	}
}
// System.Int32 UnityEngine.Vector3::GetHashCode()
extern MethodInfo Vector3_GetHashCode_m2444_MethodInfo;
extern "C" int32_t Vector3_GetHashCode_m2444 (Vector3_t6 * __this, MethodInfo* method)
{
	{
		float* L_0 = &(__this->___x_1);
		int32_t L_1 = Single_GetHashCode_m3333(L_0, /*hidden argument*/&Single_GetHashCode_m3333_MethodInfo);
		float* L_2 = &(__this->___y_2);
		int32_t L_3 = Single_GetHashCode_m3333(L_2, /*hidden argument*/&Single_GetHashCode_m3333_MethodInfo);
		float* L_4 = &(__this->___z_3);
		int32_t L_5 = Single_GetHashCode_m3333(L_4, /*hidden argument*/&Single_GetHashCode_m3333_MethodInfo);
		return ((int32_t)((int32_t)((int32_t)((int32_t)L_1^(int32_t)((int32_t)((int32_t)L_3<<(int32_t)2))))^(int32_t)((int32_t)((int32_t)L_5>>(int32_t)2))));
	}
}
// System.Boolean UnityEngine.Vector3::Equals(System.Object)
extern MethodInfo Vector3_Equals_m29_MethodInfo;
extern "C" bool Vector3_Equals_m29 (Vector3_t6 * __this, Object_t * ___other, MethodInfo* method)
{
	Vector3_t6  V_0 = {0};
	int32_t G_B6_0 = 0;
	{
		Object_t * L_0 = ___other;
		if (((Object_t *)IsInst(L_0, InitializedTypeInfo(&Vector3_t6_il2cpp_TypeInfo))))
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		Object_t * L_1 = ___other;
		V_0 = ((*(Vector3_t6 *)((Vector3_t6 *)UnBox (L_1, InitializedTypeInfo(&Vector3_t6_il2cpp_TypeInfo)))));
		float* L_2 = &(__this->___x_1);
		float L_3 = ((&V_0)->___x_1);
		bool L_4 = Single_Equals_m3359(L_2, L_3, /*hidden argument*/&Single_Equals_m3359_MethodInfo);
		if (!L_4)
		{
			goto IL_0056;
		}
	}
	{
		float* L_5 = &(__this->___y_2);
		float L_6 = ((&V_0)->___y_2);
		bool L_7 = Single_Equals_m3359(L_5, L_6, /*hidden argument*/&Single_Equals_m3359_MethodInfo);
		if (!L_7)
		{
			goto IL_0056;
		}
	}
	{
		float* L_8 = &(__this->___z_3);
		float L_9 = ((&V_0)->___z_3);
		bool L_10 = Single_Equals_m3359(L_8, L_9, /*hidden argument*/&Single_Equals_m3359_MethodInfo);
		G_B6_0 = ((int32_t)(L_10));
		goto IL_0057;
	}

IL_0056:
	{
		G_B6_0 = 0;
	}

IL_0057:
	{
		return G_B6_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::Normalize(UnityEngine.Vector3)
extern "C" Vector3_t6  Vector3_Normalize_m2445 (Object_t * __this /* static, unused */, Vector3_t6  ___value, MethodInfo* method)
{
	float V_0 = 0.0f;
	{
		Vector3_t6  L_0 = ___value;
		float L_1 = Vector3_Magnitude_m2448(NULL /*static, unused*/, L_0, /*hidden argument*/&Vector3_Magnitude_m2448_MethodInfo);
		V_0 = L_1;
		float L_2 = V_0;
		if ((!(((float)L_2) > ((float)(1.0E-05f)))))
		{
			goto IL_001a;
		}
	}
	{
		Vector3_t6  L_3 = ___value;
		float L_4 = V_0;
		Vector3_t6  L_5 = Vector3_op_Division_m2451(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/&Vector3_op_Division_m2451_MethodInfo);
		return L_5;
	}

IL_001a:
	{
		Vector3_t6  L_6 = Vector3_get_zero_m1343(NULL /*static, unused*/, /*hidden argument*/&Vector3_get_zero_m1343_MethodInfo);
		return L_6;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
extern MethodInfo Vector3_get_normalized_m1795_MethodInfo;
extern "C" Vector3_t6  Vector3_get_normalized_m1795 (Vector3_t6 * __this, MethodInfo* method)
{
	{
		Vector3_t6  L_0 = Vector3_Normalize_m2445(NULL /*static, unused*/, (*(Vector3_t6 *)__this), /*hidden argument*/&Vector3_Normalize_m2445_MethodInfo);
		return L_0;
	}
}
// System.String UnityEngine.Vector3::ToString()
extern MethodInfo Vector3_ToString_m2446_MethodInfo;
extern TypeInfo* ObjectU5BU5D_t269_il2cpp_TypeInfo_var;
extern "C" String_t* Vector3_ToString_m2446 (Vector3_t6 * __this, MethodInfo* method)
{
	static bool Vector3_ToString_m2446_init;
	if (!Vector3_ToString_m2446_init)
	{
		ObjectU5BU5D_t269_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t269_0_0_0);
		Vector3_ToString_m2446_init = true;
	}
	{
		ObjectU5BU5D_t269* L_0 = ((ObjectU5BU5D_t269*)SZArrayNew(ObjectU5BU5D_t269_il2cpp_TypeInfo_var, 3));
		float L_1 = (__this->___x_1);
		float L_2 = L_1;
		Object_t * L_3 = Box(InitializedTypeInfo(&Single_t23_il2cpp_TypeInfo), &L_2);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_3;
		ObjectU5BU5D_t269* L_4 = L_0;
		float L_5 = (__this->___y_2);
		float L_6 = L_5;
		Object_t * L_7 = Box(InitializedTypeInfo(&Single_t23_il2cpp_TypeInfo), &L_6);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 1)) = (Object_t *)L_7;
		ObjectU5BU5D_t269* L_8 = L_4;
		float L_9 = (__this->___z_3);
		float L_10 = L_9;
		Object_t * L_11 = Box(InitializedTypeInfo(&Single_t23_il2cpp_TypeInfo), &L_10);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 2);
		ArrayElementTypeCheck (L_8, L_11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 2)) = (Object_t *)L_11;
		String_t* L_12 = UnityString_Format_m2626(NULL /*static, unused*/, (String_t*) &_stringLiteral138, L_8, /*hidden argument*/&UnityString_Format_m2626_MethodInfo);
		return L_12;
	}
}
// System.String UnityEngine.Vector3::ToString(System.String)
extern MethodInfo Vector3_ToString_m2447_MethodInfo;
extern TypeInfo* ObjectU5BU5D_t269_il2cpp_TypeInfo_var;
extern "C" String_t* Vector3_ToString_m2447 (Vector3_t6 * __this, String_t* ___format, MethodInfo* method)
{
	static bool Vector3_ToString_m2447_init;
	if (!Vector3_ToString_m2447_init)
	{
		ObjectU5BU5D_t269_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t269_0_0_0);
		Vector3_ToString_m2447_init = true;
	}
	{
		ObjectU5BU5D_t269* L_0 = ((ObjectU5BU5D_t269*)SZArrayNew(ObjectU5BU5D_t269_il2cpp_TypeInfo_var, 3));
		float* L_1 = &(__this->___x_1);
		String_t* L_2 = ___format;
		String_t* L_3 = Single_ToString_m3360(L_1, L_2, /*hidden argument*/&Single_ToString_m3360_MethodInfo);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_3;
		ObjectU5BU5D_t269* L_4 = L_0;
		float* L_5 = &(__this->___y_2);
		String_t* L_6 = ___format;
		String_t* L_7 = Single_ToString_m3360(L_5, L_6, /*hidden argument*/&Single_ToString_m3360_MethodInfo);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 1)) = (Object_t *)L_7;
		ObjectU5BU5D_t269* L_8 = L_4;
		float* L_9 = &(__this->___z_3);
		String_t* L_10 = ___format;
		String_t* L_11 = Single_ToString_m3360(L_9, L_10, /*hidden argument*/&Single_ToString_m3360_MethodInfo);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 2);
		ArrayElementTypeCheck (L_8, L_11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 2)) = (Object_t *)L_11;
		String_t* L_12 = UnityString_Format_m2626(NULL /*static, unused*/, (String_t*) &_stringLiteral139, L_8, /*hidden argument*/&UnityString_Format_m2626_MethodInfo);
		return L_12;
	}
}
// System.Single UnityEngine.Vector3::Dot(UnityEngine.Vector3,UnityEngine.Vector3)
extern MethodInfo Vector3_Dot_m1555_MethodInfo;
extern "C" float Vector3_Dot_m1555 (Object_t * __this /* static, unused */, Vector3_t6  ___lhs, Vector3_t6  ___rhs, MethodInfo* method)
{
	{
		float L_0 = ((&___lhs)->___x_1);
		float L_1 = ((&___rhs)->___x_1);
		float L_2 = ((&___lhs)->___y_2);
		float L_3 = ((&___rhs)->___y_2);
		float L_4 = ((&___lhs)->___z_3);
		float L_5 = ((&___rhs)->___z_3);
		return ((float)((float)((float)((float)((float)((float)L_0*(float)L_1))+(float)((float)((float)L_2*(float)L_3))))+(float)((float)((float)L_4*(float)L_5))));
	}
}
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
extern MethodInfo Vector3_Distance_m59_MethodInfo;
extern "C" float Vector3_Distance_m59 (Object_t * __this /* static, unused */, Vector3_t6  ___a, Vector3_t6  ___b, MethodInfo* method)
{
	Vector3_t6  V_0 = {0};
	{
		float L_0 = ((&___a)->___x_1);
		float L_1 = ((&___b)->___x_1);
		float L_2 = ((&___a)->___y_2);
		float L_3 = ((&___b)->___y_2);
		float L_4 = ((&___a)->___z_3);
		float L_5 = ((&___b)->___z_3);
		Vector3__ctor_m28((&V_0), ((float)((float)L_0-(float)L_1)), ((float)((float)L_2-(float)L_3)), ((float)((float)L_4-(float)L_5)), /*hidden argument*/&Vector3__ctor_m28_MethodInfo);
		float L_6 = ((&V_0)->___x_1);
		float L_7 = ((&V_0)->___x_1);
		float L_8 = ((&V_0)->___y_2);
		float L_9 = ((&V_0)->___y_2);
		float L_10 = ((&V_0)->___z_3);
		float L_11 = ((&V_0)->___z_3);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t270_il2cpp_TypeInfo));
		float L_12 = sqrtf(((float)((float)((float)((float)((float)((float)L_6*(float)L_7))+(float)((float)((float)L_8*(float)L_9))))+(float)((float)((float)L_10*(float)L_11)))));
		return L_12;
	}
}
// System.Single UnityEngine.Vector3::Magnitude(UnityEngine.Vector3)
extern "C" float Vector3_Magnitude_m2448 (Object_t * __this /* static, unused */, Vector3_t6  ___a, MethodInfo* method)
{
	{
		float L_0 = ((&___a)->___x_1);
		float L_1 = ((&___a)->___x_1);
		float L_2 = ((&___a)->___y_2);
		float L_3 = ((&___a)->___y_2);
		float L_4 = ((&___a)->___z_3);
		float L_5 = ((&___a)->___z_3);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t270_il2cpp_TypeInfo));
		float L_6 = sqrtf(((float)((float)((float)((float)((float)((float)L_0*(float)L_1))+(float)((float)((float)L_2*(float)L_3))))+(float)((float)((float)L_4*(float)L_5)))));
		return L_6;
	}
}
// System.Single UnityEngine.Vector3::SqrMagnitude(UnityEngine.Vector3)
extern "C" float Vector3_SqrMagnitude_m2449 (Object_t * __this /* static, unused */, Vector3_t6  ___a, MethodInfo* method)
{
	{
		float L_0 = ((&___a)->___x_1);
		float L_1 = ((&___a)->___x_1);
		float L_2 = ((&___a)->___y_2);
		float L_3 = ((&___a)->___y_2);
		float L_4 = ((&___a)->___z_3);
		float L_5 = ((&___a)->___z_3);
		return ((float)((float)((float)((float)((float)((float)L_0*(float)L_1))+(float)((float)((float)L_2*(float)L_3))))+(float)((float)((float)L_4*(float)L_5))));
	}
}
// System.Single UnityEngine.Vector3::get_sqrMagnitude()
extern MethodInfo Vector3_get_sqrMagnitude_m1799_MethodInfo;
extern "C" float Vector3_get_sqrMagnitude_m1799 (Vector3_t6 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->___x_1);
		float L_1 = (__this->___x_1);
		float L_2 = (__this->___y_2);
		float L_3 = (__this->___y_2);
		float L_4 = (__this->___z_3);
		float L_5 = (__this->___z_3);
		return ((float)((float)((float)((float)((float)((float)L_0*(float)L_1))+(float)((float)((float)L_2*(float)L_3))))+(float)((float)((float)L_4*(float)L_5))));
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::Min(UnityEngine.Vector3,UnityEngine.Vector3)
extern MethodInfo Vector3_Min_m1780_MethodInfo;
extern "C" Vector3_t6  Vector3_Min_m1780 (Object_t * __this /* static, unused */, Vector3_t6  ___lhs, Vector3_t6  ___rhs, MethodInfo* method)
{
	{
		float L_0 = ((&___lhs)->___x_1);
		float L_1 = ((&___rhs)->___x_1);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t270_il2cpp_TypeInfo));
		float L_2 = Mathf_Min_m1861(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Mathf_Min_m1861_MethodInfo);
		float L_3 = ((&___lhs)->___y_2);
		float L_4 = ((&___rhs)->___y_2);
		float L_5 = Mathf_Min_m1861(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/&Mathf_Min_m1861_MethodInfo);
		float L_6 = ((&___lhs)->___z_3);
		float L_7 = ((&___rhs)->___z_3);
		float L_8 = Mathf_Min_m1861(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/&Mathf_Min_m1861_MethodInfo);
		Vector3_t6  L_9 = {0};
		Vector3__ctor_m28(&L_9, L_2, L_5, L_8, /*hidden argument*/&Vector3__ctor_m28_MethodInfo);
		return L_9;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::Max(UnityEngine.Vector3,UnityEngine.Vector3)
extern MethodInfo Vector3_Max_m1781_MethodInfo;
extern "C" Vector3_t6  Vector3_Max_m1781 (Object_t * __this /* static, unused */, Vector3_t6  ___lhs, Vector3_t6  ___rhs, MethodInfo* method)
{
	{
		float L_0 = ((&___lhs)->___x_1);
		float L_1 = ((&___rhs)->___x_1);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t270_il2cpp_TypeInfo));
		float L_2 = Mathf_Max_m1801(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Mathf_Max_m1801_MethodInfo);
		float L_3 = ((&___lhs)->___y_2);
		float L_4 = ((&___rhs)->___y_2);
		float L_5 = Mathf_Max_m1801(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/&Mathf_Max_m1801_MethodInfo);
		float L_6 = ((&___lhs)->___z_3);
		float L_7 = ((&___rhs)->___z_3);
		float L_8 = Mathf_Max_m1801(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/&Mathf_Max_m1801_MethodInfo);
		Vector3_t6  L_9 = {0};
		Vector3__ctor_m28(&L_9, L_2, L_5, L_8, /*hidden argument*/&Vector3__ctor_m28_MethodInfo);
		return L_9;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
extern "C" Vector3_t6  Vector3_get_zero_m1343 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		Vector3_t6  L_0 = {0};
		Vector3__ctor_m28(&L_0, (0.0f), (0.0f), (0.0f), /*hidden argument*/&Vector3__ctor_m28_MethodInfo);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
extern MethodInfo Vector3_get_forward_m1553_MethodInfo;
extern "C" Vector3_t6  Vector3_get_forward_m1553 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		Vector3_t6  L_0 = {0};
		Vector3__ctor_m28(&L_0, (0.0f), (0.0f), (1.0f), /*hidden argument*/&Vector3__ctor_m28_MethodInfo);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_back()
extern MethodInfo Vector3_get_back_m2450_MethodInfo;
extern "C" Vector3_t6  Vector3_get_back_m2450 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		Vector3_t6  L_0 = {0};
		Vector3__ctor_m28(&L_0, (0.0f), (0.0f), (-1.0f), /*hidden argument*/&Vector3__ctor_m28_MethodInfo);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
extern MethodInfo Vector3_get_up_m1342_MethodInfo;
extern "C" Vector3_t6  Vector3_get_up_m1342 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		Vector3_t6  L_0 = {0};
		Vector3__ctor_m28(&L_0, (0.0f), (1.0f), (0.0f), /*hidden argument*/&Vector3__ctor_m28_MethodInfo);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_down()
extern MethodInfo Vector3_get_down_m1804_MethodInfo;
extern "C" Vector3_t6  Vector3_get_down_m1804 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		Vector3_t6  L_0 = {0};
		Vector3__ctor_m28(&L_0, (0.0f), (-1.0f), (0.0f), /*hidden argument*/&Vector3__ctor_m28_MethodInfo);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_left()
extern MethodInfo Vector3_get_left_m1802_MethodInfo;
extern "C" Vector3_t6  Vector3_get_left_m1802 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		Vector3_t6  L_0 = {0};
		Vector3__ctor_m28(&L_0, (-1.0f), (0.0f), (0.0f), /*hidden argument*/&Vector3__ctor_m28_MethodInfo);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_right()
extern MethodInfo Vector3_get_right_m1803_MethodInfo;
extern "C" Vector3_t6  Vector3_get_right_m1803 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		Vector3_t6  L_0 = {0};
		Vector3__ctor_m28(&L_0, (1.0f), (0.0f), (0.0f), /*hidden argument*/&Vector3__ctor_m28_MethodInfo);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
extern MethodInfo Vector3_op_Addition_m1712_MethodInfo;
extern "C" Vector3_t6  Vector3_op_Addition_m1712 (Object_t * __this /* static, unused */, Vector3_t6  ___a, Vector3_t6  ___b, MethodInfo* method)
{
	{
		float L_0 = ((&___a)->___x_1);
		float L_1 = ((&___b)->___x_1);
		float L_2 = ((&___a)->___y_2);
		float L_3 = ((&___b)->___y_2);
		float L_4 = ((&___a)->___z_3);
		float L_5 = ((&___b)->___z_3);
		Vector3_t6  L_6 = {0};
		Vector3__ctor_m28(&L_6, ((float)((float)L_0+(float)L_1)), ((float)((float)L_2+(float)L_3)), ((float)((float)L_4+(float)L_5)), /*hidden argument*/&Vector3__ctor_m28_MethodInfo);
		return L_6;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" Vector3_t6  Vector3_op_Subtraction_m1557 (Object_t * __this /* static, unused */, Vector3_t6  ___a, Vector3_t6  ___b, MethodInfo* method)
{
	{
		float L_0 = ((&___a)->___x_1);
		float L_1 = ((&___b)->___x_1);
		float L_2 = ((&___a)->___y_2);
		float L_3 = ((&___b)->___y_2);
		float L_4 = ((&___a)->___z_3);
		float L_5 = ((&___b)->___z_3);
		Vector3_t6  L_6 = {0};
		Vector3__ctor_m28(&L_6, ((float)((float)L_0-(float)L_1)), ((float)((float)L_2-(float)L_3)), ((float)((float)L_4-(float)L_5)), /*hidden argument*/&Vector3__ctor_m28_MethodInfo);
		return L_6;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
extern MethodInfo Vector3_op_Multiply_m1840_MethodInfo;
extern "C" Vector3_t6  Vector3_op_Multiply_m1840 (Object_t * __this /* static, unused */, Vector3_t6  ___a, float ___d, MethodInfo* method)
{
	{
		float L_0 = ((&___a)->___x_1);
		float L_1 = ___d;
		float L_2 = ((&___a)->___y_2);
		float L_3 = ___d;
		float L_4 = ((&___a)->___z_3);
		float L_5 = ___d;
		Vector3_t6  L_6 = {0};
		Vector3__ctor_m28(&L_6, ((float)((float)L_0*(float)L_1)), ((float)((float)L_2*(float)L_3)), ((float)((float)L_4*(float)L_5)), /*hidden argument*/&Vector3__ctor_m28_MethodInfo);
		return L_6;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
extern "C" Vector3_t6  Vector3_op_Division_m2451 (Object_t * __this /* static, unused */, Vector3_t6  ___a, float ___d, MethodInfo* method)
{
	{
		float L_0 = ((&___a)->___x_1);
		float L_1 = ___d;
		float L_2 = ((&___a)->___y_2);
		float L_3 = ___d;
		float L_4 = ((&___a)->___z_3);
		float L_5 = ___d;
		Vector3_t6  L_6 = {0};
		Vector3__ctor_m28(&L_6, ((float)((float)L_0/(float)L_1)), ((float)((float)L_2/(float)L_3)), ((float)((float)L_4/(float)L_5)), /*hidden argument*/&Vector3__ctor_m28_MethodInfo);
		return L_6;
	}
}
// System.Boolean UnityEngine.Vector3::op_Equality(UnityEngine.Vector3,UnityEngine.Vector3)
extern MethodInfo Vector3_op_Equality_m2452_MethodInfo;
extern "C" bool Vector3_op_Equality_m2452 (Object_t * __this /* static, unused */, Vector3_t6  ___lhs, Vector3_t6  ___rhs, MethodInfo* method)
{
	{
		Vector3_t6  L_0 = ___lhs;
		Vector3_t6  L_1 = ___rhs;
		Vector3_t6  L_2 = Vector3_op_Subtraction_m1557(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Vector3_op_Subtraction_m1557_MethodInfo);
		float L_3 = Vector3_SqrMagnitude_m2449(NULL /*static, unused*/, L_2, /*hidden argument*/&Vector3_SqrMagnitude_m2449_MethodInfo);
		return ((((float)L_3) < ((float)(9.99999944E-11f)))? 1 : 0);
	}
}
// System.Boolean UnityEngine.Vector3::op_Inequality(UnityEngine.Vector3,UnityEngine.Vector3)
extern MethodInfo Vector3_op_Inequality_m1697_MethodInfo;
extern "C" bool Vector3_op_Inequality_m1697 (Object_t * __this /* static, unused */, Vector3_t6  ___lhs, Vector3_t6  ___rhs, MethodInfo* method)
{
	{
		Vector3_t6  L_0 = ___lhs;
		Vector3_t6  L_1 = ___rhs;
		Vector3_t6  L_2 = Vector3_op_Subtraction_m1557(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Vector3_op_Subtraction_m1557_MethodInfo);
		float L_3 = Vector3_SqrMagnitude_m2449(NULL /*static, unused*/, L_2, /*hidden argument*/&Vector3_SqrMagnitude_m2449_MethodInfo);
		return ((((int32_t)((!(((float)L_3) >= ((float)(9.99999944E-11f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
#ifndef _MSC_VER
#else
#endif

extern MethodInfo Color__ctor_m1645_MethodInfo;
extern MethodInfo Color_op_Implicit_m2457_MethodInfo;
extern MethodInfo Vector4_GetHashCode_m2536_MethodInfo;


// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C" void Color__ctor_m1645 (Color_t109 * __this, float ___r, float ___g, float ___b, float ___a, MethodInfo* method)
{
	{
		float L_0 = ___r;
		__this->___r_0 = L_0;
		float L_1 = ___g;
		__this->___g_1 = L_1;
		float L_2 = ___b;
		__this->___b_2 = L_2;
		float L_3 = ___a;
		__this->___a_3 = L_3;
		return;
	}
}
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single)
extern "C" void Color__ctor_m2453 (Color_t109 * __this, float ___r, float ___g, float ___b, MethodInfo* method)
{
	{
		float L_0 = ___r;
		__this->___r_0 = L_0;
		float L_1 = ___g;
		__this->___g_1 = L_1;
		float L_2 = ___b;
		__this->___b_2 = L_2;
		__this->___a_3 = (1.0f);
		return;
	}
}
// System.String UnityEngine.Color::ToString()
extern MethodInfo Color_ToString_m2454_MethodInfo;
extern TypeInfo* ObjectU5BU5D_t269_il2cpp_TypeInfo_var;
extern "C" String_t* Color_ToString_m2454 (Color_t109 * __this, MethodInfo* method)
{
	static bool Color_ToString_m2454_init;
	if (!Color_ToString_m2454_init)
	{
		ObjectU5BU5D_t269_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t269_0_0_0);
		Color_ToString_m2454_init = true;
	}
	{
		ObjectU5BU5D_t269* L_0 = ((ObjectU5BU5D_t269*)SZArrayNew(ObjectU5BU5D_t269_il2cpp_TypeInfo_var, 4));
		float L_1 = (__this->___r_0);
		float L_2 = L_1;
		Object_t * L_3 = Box(InitializedTypeInfo(&Single_t23_il2cpp_TypeInfo), &L_2);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_3;
		ObjectU5BU5D_t269* L_4 = L_0;
		float L_5 = (__this->___g_1);
		float L_6 = L_5;
		Object_t * L_7 = Box(InitializedTypeInfo(&Single_t23_il2cpp_TypeInfo), &L_6);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 1)) = (Object_t *)L_7;
		ObjectU5BU5D_t269* L_8 = L_4;
		float L_9 = (__this->___b_2);
		float L_10 = L_9;
		Object_t * L_11 = Box(InitializedTypeInfo(&Single_t23_il2cpp_TypeInfo), &L_10);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 2);
		ArrayElementTypeCheck (L_8, L_11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 2)) = (Object_t *)L_11;
		ObjectU5BU5D_t269* L_12 = L_8;
		float L_13 = (__this->___a_3);
		float L_14 = L_13;
		Object_t * L_15 = Box(InitializedTypeInfo(&Single_t23_il2cpp_TypeInfo), &L_14);
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 3);
		ArrayElementTypeCheck (L_12, L_15);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_12, 3)) = (Object_t *)L_15;
		String_t* L_16 = UnityString_Format_m2626(NULL /*static, unused*/, (String_t*) &_stringLiteral140, L_12, /*hidden argument*/&UnityString_Format_m2626_MethodInfo);
		return L_16;
	}
}
// System.Int32 UnityEngine.Color::GetHashCode()
extern MethodInfo Color_GetHashCode_m2455_MethodInfo;
extern "C" int32_t Color_GetHashCode_m2455 (Color_t109 * __this, MethodInfo* method)
{
	Vector4_t160  V_0 = {0};
	{
		Vector4_t160  L_0 = Color_op_Implicit_m2457(NULL /*static, unused*/, (*(Color_t109 *)__this), /*hidden argument*/&Color_op_Implicit_m2457_MethodInfo);
		V_0 = L_0;
		int32_t L_1 = Vector4_GetHashCode_m2536((&V_0), /*hidden argument*/&Vector4_GetHashCode_m2536_MethodInfo);
		return L_1;
	}
}
// System.Boolean UnityEngine.Color::Equals(System.Object)
extern MethodInfo Color_Equals_m1521_MethodInfo;
extern "C" bool Color_Equals_m1521 (Color_t109 * __this, Object_t * ___other, MethodInfo* method)
{
	Color_t109  V_0 = {0};
	int32_t G_B7_0 = 0;
	{
		Object_t * L_0 = ___other;
		if (((Object_t *)IsInst(L_0, InitializedTypeInfo(&Color_t109_il2cpp_TypeInfo))))
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		Object_t * L_1 = ___other;
		V_0 = ((*(Color_t109 *)((Color_t109 *)UnBox (L_1, InitializedTypeInfo(&Color_t109_il2cpp_TypeInfo)))));
		float* L_2 = &(__this->___r_0);
		float L_3 = ((&V_0)->___r_0);
		bool L_4 = Single_Equals_m3359(L_2, L_3, /*hidden argument*/&Single_Equals_m3359_MethodInfo);
		if (!L_4)
		{
			goto IL_006d;
		}
	}
	{
		float* L_5 = &(__this->___g_1);
		float L_6 = ((&V_0)->___g_1);
		bool L_7 = Single_Equals_m3359(L_5, L_6, /*hidden argument*/&Single_Equals_m3359_MethodInfo);
		if (!L_7)
		{
			goto IL_006d;
		}
	}
	{
		float* L_8 = &(__this->___b_2);
		float L_9 = ((&V_0)->___b_2);
		bool L_10 = Single_Equals_m3359(L_8, L_9, /*hidden argument*/&Single_Equals_m3359_MethodInfo);
		if (!L_10)
		{
			goto IL_006d;
		}
	}
	{
		float* L_11 = &(__this->___a_3);
		float L_12 = ((&V_0)->___a_3);
		bool L_13 = Single_Equals_m3359(L_11, L_12, /*hidden argument*/&Single_Equals_m3359_MethodInfo);
		G_B7_0 = ((int32_t)(L_13));
		goto IL_006e;
	}

IL_006d:
	{
		G_B7_0 = 0;
	}

IL_006e:
	{
		return G_B7_0;
	}
}
// UnityEngine.Color UnityEngine.Color::Lerp(UnityEngine.Color,UnityEngine.Color,System.Single)
extern MethodInfo Color_Lerp_m1448_MethodInfo;
extern "C" Color_t109  Color_Lerp_m1448 (Object_t * __this /* static, unused */, Color_t109  ___a, Color_t109  ___b, float ___t, MethodInfo* method)
{
	{
		float L_0 = ___t;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t270_il2cpp_TypeInfo));
		float L_1 = Mathf_Clamp01_m1573(NULL /*static, unused*/, L_0, /*hidden argument*/&Mathf_Clamp01_m1573_MethodInfo);
		___t = L_1;
		float L_2 = ((&___a)->___r_0);
		float L_3 = ((&___b)->___r_0);
		float L_4 = ((&___a)->___r_0);
		float L_5 = ___t;
		float L_6 = ((&___a)->___g_1);
		float L_7 = ((&___b)->___g_1);
		float L_8 = ((&___a)->___g_1);
		float L_9 = ___t;
		float L_10 = ((&___a)->___b_2);
		float L_11 = ((&___b)->___b_2);
		float L_12 = ((&___a)->___b_2);
		float L_13 = ___t;
		float L_14 = ((&___a)->___a_3);
		float L_15 = ((&___b)->___a_3);
		float L_16 = ((&___a)->___a_3);
		float L_17 = ___t;
		Color_t109  L_18 = {0};
		Color__ctor_m1645(&L_18, ((float)((float)L_2+(float)((float)((float)((float)((float)L_3-(float)L_4))*(float)L_5)))), ((float)((float)L_6+(float)((float)((float)((float)((float)L_7-(float)L_8))*(float)L_9)))), ((float)((float)L_10+(float)((float)((float)((float)((float)L_11-(float)L_12))*(float)L_13)))), ((float)((float)L_14+(float)((float)((float)((float)((float)L_15-(float)L_16))*(float)L_17)))), /*hidden argument*/&Color__ctor_m1645_MethodInfo);
		return L_18;
	}
}
// UnityEngine.Color UnityEngine.Color::get_red()
extern "C" Color_t109  Color_get_red_m2456 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		Color_t109  L_0 = {0};
		Color__ctor_m1645(&L_0, (1.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/&Color__ctor_m1645_MethodInfo);
		return L_0;
	}
}
// UnityEngine.Color UnityEngine.Color::get_white()
extern "C" Color_t109  Color_get_white_m1493 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		Color_t109  L_0 = {0};
		Color__ctor_m1645(&L_0, (1.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/&Color__ctor_m1645_MethodInfo);
		return L_0;
	}
}
// UnityEngine.Color UnityEngine.Color::get_black()
extern MethodInfo Color_get_black_m1524_MethodInfo;
extern "C" Color_t109  Color_get_black_m1524 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		Color_t109  L_0 = {0};
		Color__ctor_m1645(&L_0, (0.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/&Color__ctor_m1645_MethodInfo);
		return L_0;
	}
}
// UnityEngine.Color UnityEngine.Color::op_Multiply(UnityEngine.Color,System.Single)
extern MethodInfo Color_op_Multiply_m1794_MethodInfo;
extern "C" Color_t109  Color_op_Multiply_m1794 (Object_t * __this /* static, unused */, Color_t109  ___a, float ___b, MethodInfo* method)
{
	{
		float L_0 = ((&___a)->___r_0);
		float L_1 = ___b;
		float L_2 = ((&___a)->___g_1);
		float L_3 = ___b;
		float L_4 = ((&___a)->___b_2);
		float L_5 = ___b;
		float L_6 = ((&___a)->___a_3);
		float L_7 = ___b;
		Color_t109  L_8 = {0};
		Color__ctor_m1645(&L_8, ((float)((float)L_0*(float)L_1)), ((float)((float)L_2*(float)L_3)), ((float)((float)L_4*(float)L_5)), ((float)((float)L_6*(float)L_7)), /*hidden argument*/&Color__ctor_m1645_MethodInfo);
		return L_8;
	}
}
// UnityEngine.Vector4 UnityEngine.Color::op_Implicit(UnityEngine.Color)
extern "C" Vector4_t160  Color_op_Implicit_m2457 (Object_t * __this /* static, unused */, Color_t109  ___c, MethodInfo* method)
{
	{
		float L_0 = ((&___c)->___r_0);
		float L_1 = ((&___c)->___g_1);
		float L_2 = ((&___c)->___b_2);
		float L_3 = ((&___c)->___a_3);
		Vector4_t160  L_4 = {0};
		Vector4__ctor_m1511(&L_4, L_0, L_1, L_2, L_3, /*hidden argument*/&Vector4__ctor_m1511_MethodInfo);
		return L_4;
	}
}
// UnityEngine.Color32
#include "UnityEngine_UnityEngine_Color32.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Color32_t264_il2cpp_TypeInfo;
// UnityEngine.Color32
#include "UnityEngine_UnityEngine_Color32MethodDeclarations.h"

// System.Byte
#include "mscorlib_System_Byte.h"
extern TypeInfo Byte_t321_il2cpp_TypeInfo;
extern MethodInfo Color32__ctor_m1473_MethodInfo;


// System.Void UnityEngine.Color32::.ctor(System.Byte,System.Byte,System.Byte,System.Byte)
extern "C" void Color32__ctor_m1473 (Color32_t264 * __this, uint8_t ___r, uint8_t ___g, uint8_t ___b, uint8_t ___a, MethodInfo* method)
{
	{
		uint8_t L_0 = ___r;
		__this->___r_0 = L_0;
		uint8_t L_1 = ___g;
		__this->___g_1 = L_1;
		uint8_t L_2 = ___b;
		__this->___b_2 = L_2;
		uint8_t L_3 = ___a;
		__this->___a_3 = L_3;
		return;
	}
}
// System.String UnityEngine.Color32::ToString()
extern MethodInfo Color32_ToString_m2458_MethodInfo;
extern TypeInfo* ObjectU5BU5D_t269_il2cpp_TypeInfo_var;
extern "C" String_t* Color32_ToString_m2458 (Color32_t264 * __this, MethodInfo* method)
{
	static bool Color32_ToString_m2458_init;
	if (!Color32_ToString_m2458_init)
	{
		ObjectU5BU5D_t269_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t269_0_0_0);
		Color32_ToString_m2458_init = true;
	}
	{
		ObjectU5BU5D_t269* L_0 = ((ObjectU5BU5D_t269*)SZArrayNew(ObjectU5BU5D_t269_il2cpp_TypeInfo_var, 4));
		uint8_t L_1 = (__this->___r_0);
		uint8_t L_2 = L_1;
		Object_t * L_3 = Box(InitializedTypeInfo(&Byte_t321_il2cpp_TypeInfo), &L_2);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_3;
		ObjectU5BU5D_t269* L_4 = L_0;
		uint8_t L_5 = (__this->___g_1);
		uint8_t L_6 = L_5;
		Object_t * L_7 = Box(InitializedTypeInfo(&Byte_t321_il2cpp_TypeInfo), &L_6);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 1)) = (Object_t *)L_7;
		ObjectU5BU5D_t269* L_8 = L_4;
		uint8_t L_9 = (__this->___b_2);
		uint8_t L_10 = L_9;
		Object_t * L_11 = Box(InitializedTypeInfo(&Byte_t321_il2cpp_TypeInfo), &L_10);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 2);
		ArrayElementTypeCheck (L_8, L_11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 2)) = (Object_t *)L_11;
		ObjectU5BU5D_t269* L_12 = L_8;
		uint8_t L_13 = (__this->___a_3);
		uint8_t L_14 = L_13;
		Object_t * L_15 = Box(InitializedTypeInfo(&Byte_t321_il2cpp_TypeInfo), &L_14);
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 3);
		ArrayElementTypeCheck (L_12, L_15);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_12, 3)) = (Object_t *)L_15;
		String_t* L_16 = UnityString_Format_m2626(NULL /*static, unused*/, (String_t*) &_stringLiteral141, L_12, /*hidden argument*/&UnityString_Format_m2626_MethodInfo);
		return L_16;
	}
}
// UnityEngine.Color32 UnityEngine.Color32::op_Implicit(UnityEngine.Color)
extern MethodInfo Color32_op_Implicit_m1512_MethodInfo;
extern "C" Color32_t264  Color32_op_Implicit_m1512 (Object_t * __this /* static, unused */, Color_t109  ___c, MethodInfo* method)
{
	{
		float L_0 = ((&___c)->___r_0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t270_il2cpp_TypeInfo));
		float L_1 = Mathf_Clamp01_m1573(NULL /*static, unused*/, L_0, /*hidden argument*/&Mathf_Clamp01_m1573_MethodInfo);
		float L_2 = ((&___c)->___g_1);
		float L_3 = Mathf_Clamp01_m1573(NULL /*static, unused*/, L_2, /*hidden argument*/&Mathf_Clamp01_m1573_MethodInfo);
		float L_4 = ((&___c)->___b_2);
		float L_5 = Mathf_Clamp01_m1573(NULL /*static, unused*/, L_4, /*hidden argument*/&Mathf_Clamp01_m1573_MethodInfo);
		float L_6 = ((&___c)->___a_3);
		float L_7 = Mathf_Clamp01_m1573(NULL /*static, unused*/, L_6, /*hidden argument*/&Mathf_Clamp01_m1573_MethodInfo);
		Color32_t264  L_8 = {0};
		Color32__ctor_m1473(&L_8, (((uint8_t)((float)((float)L_1*(float)(255.0f))))), (((uint8_t)((float)((float)L_3*(float)(255.0f))))), (((uint8_t)((float)((float)L_5*(float)(255.0f))))), (((uint8_t)((float)((float)L_7*(float)(255.0f))))), /*hidden argument*/&Color32__ctor_m1473_MethodInfo);
		return L_8;
	}
}
// UnityEngine.Color UnityEngine.Color32::op_Implicit(UnityEngine.Color32)
extern MethodInfo Color32_op_Implicit_m1474_MethodInfo;
extern "C" Color_t109  Color32_op_Implicit_m1474 (Object_t * __this /* static, unused */, Color32_t264  ___c, MethodInfo* method)
{
	{
		uint8_t L_0 = ((&___c)->___r_0);
		uint8_t L_1 = ((&___c)->___g_1);
		uint8_t L_2 = ((&___c)->___b_2);
		uint8_t L_3 = ((&___c)->___a_3);
		Color_t109  L_4 = {0};
		Color__ctor_m1645(&L_4, ((float)((float)(((float)L_0))/(float)(255.0f))), ((float)((float)(((float)L_1))/(float)(255.0f))), ((float)((float)(((float)L_2))/(float)(255.0f))), ((float)((float)(((float)L_3))/(float)(255.0f))), /*hidden argument*/&Color__ctor_m1645_MethodInfo);
		return L_4;
	}
}
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Quaternion_t19_il2cpp_TypeInfo;
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_QuaternionMethodDeclarations.h"

extern MethodInfo Quaternion__ctor_m2459_MethodInfo;
extern MethodInfo Quaternion_INTERNAL_CALL_LookRotation_m2461_MethodInfo;
extern MethodInfo Quaternion_INTERNAL_CALL_Inverse_m2462_MethodInfo;
extern MethodInfo Quaternion_Internal_FromEulerRad_m2465_MethodInfo;
extern MethodInfo Quaternion_INTERNAL_CALL_Internal_FromEulerRad_m2466_MethodInfo;
extern MethodInfo Quaternion_Dot_m2460_MethodInfo;


// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C" void Quaternion__ctor_m2459 (Quaternion_t19 * __this, float ___x, float ___y, float ___z, float ___w, MethodInfo* method)
{
	{
		float L_0 = ___x;
		__this->___x_0 = L_0;
		float L_1 = ___y;
		__this->___y_1 = L_1;
		float L_2 = ___z;
		__this->___z_2 = L_2;
		float L_3 = ___w;
		__this->___w_3 = L_3;
		return;
	}
}
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
extern MethodInfo Quaternion_get_identity_m44_MethodInfo;
extern "C" Quaternion_t19  Quaternion_get_identity_m44 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		Quaternion_t19  L_0 = {0};
		Quaternion__ctor_m2459(&L_0, (0.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/&Quaternion__ctor_m2459_MethodInfo);
		return L_0;
	}
}
// System.Single UnityEngine.Quaternion::Dot(UnityEngine.Quaternion,UnityEngine.Quaternion)
extern "C" float Quaternion_Dot_m2460 (Object_t * __this /* static, unused */, Quaternion_t19  ___a, Quaternion_t19  ___b, MethodInfo* method)
{
	{
		float L_0 = ((&___a)->___x_0);
		float L_1 = ((&___b)->___x_0);
		float L_2 = ((&___a)->___y_1);
		float L_3 = ((&___b)->___y_1);
		float L_4 = ((&___a)->___z_2);
		float L_5 = ((&___b)->___z_2);
		float L_6 = ((&___a)->___w_3);
		float L_7 = ((&___b)->___w_3);
		return ((float)((float)((float)((float)((float)((float)((float)((float)L_0*(float)L_1))+(float)((float)((float)L_2*(float)L_3))))+(float)((float)((float)L_4*(float)L_5))))+(float)((float)((float)L_6*(float)L_7))));
	}
}
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3)
extern MethodInfo Quaternion_LookRotation_m62_MethodInfo;
extern "C" Quaternion_t19  Quaternion_LookRotation_m62 (Object_t * __this /* static, unused */, Vector3_t6  ___forward, MethodInfo* method)
{
	Vector3_t6  V_0 = {0};
	{
		Vector3_t6  L_0 = Vector3_get_up_m1342(NULL /*static, unused*/, /*hidden argument*/&Vector3_get_up_m1342_MethodInfo);
		V_0 = L_0;
		Quaternion_t19  L_1 = Quaternion_INTERNAL_CALL_LookRotation_m2461(NULL /*static, unused*/, (&___forward), (&V_0), /*hidden argument*/&Quaternion_INTERNAL_CALL_LookRotation_m2461_MethodInfo);
		return L_1;
	}
}
// UnityEngine.Quaternion UnityEngine.Quaternion::INTERNAL_CALL_LookRotation(UnityEngine.Vector3&,UnityEngine.Vector3&)
extern "C" Quaternion_t19  Quaternion_INTERNAL_CALL_LookRotation_m2461 (Object_t * __this /* static, unused */, Vector3_t6 * ___forward, Vector3_t6 * ___upwards, MethodInfo* method)
{
	typedef Quaternion_t19  (*Quaternion_INTERNAL_CALL_LookRotation_m2461_ftn) (Vector3_t6 *, Vector3_t6 *);
	static Quaternion_INTERNAL_CALL_LookRotation_m2461_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Quaternion_INTERNAL_CALL_LookRotation_m2461_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Quaternion::INTERNAL_CALL_LookRotation(UnityEngine.Vector3&,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(___forward, ___upwards);
}
// UnityEngine.Quaternion UnityEngine.Quaternion::Inverse(UnityEngine.Quaternion)
extern MethodInfo Quaternion_Inverse_m1796_MethodInfo;
extern "C" Quaternion_t19  Quaternion_Inverse_m1796 (Object_t * __this /* static, unused */, Quaternion_t19  ___rotation, MethodInfo* method)
{
	{
		Quaternion_t19  L_0 = Quaternion_INTERNAL_CALL_Inverse_m2462(NULL /*static, unused*/, (&___rotation), /*hidden argument*/&Quaternion_INTERNAL_CALL_Inverse_m2462_MethodInfo);
		return L_0;
	}
}
// UnityEngine.Quaternion UnityEngine.Quaternion::INTERNAL_CALL_Inverse(UnityEngine.Quaternion&)
extern "C" Quaternion_t19  Quaternion_INTERNAL_CALL_Inverse_m2462 (Object_t * __this /* static, unused */, Quaternion_t19 * ___rotation, MethodInfo* method)
{
	typedef Quaternion_t19  (*Quaternion_INTERNAL_CALL_Inverse_m2462_ftn) (Quaternion_t19 *);
	static Quaternion_INTERNAL_CALL_Inverse_m2462_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Quaternion_INTERNAL_CALL_Inverse_m2462_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Quaternion::INTERNAL_CALL_Inverse(UnityEngine.Quaternion&)");
	return _il2cpp_icall_func(___rotation);
}
// System.String UnityEngine.Quaternion::ToString()
extern MethodInfo Quaternion_ToString_m2463_MethodInfo;
extern TypeInfo* ObjectU5BU5D_t269_il2cpp_TypeInfo_var;
extern "C" String_t* Quaternion_ToString_m2463 (Quaternion_t19 * __this, MethodInfo* method)
{
	static bool Quaternion_ToString_m2463_init;
	if (!Quaternion_ToString_m2463_init)
	{
		ObjectU5BU5D_t269_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t269_0_0_0);
		Quaternion_ToString_m2463_init = true;
	}
	{
		ObjectU5BU5D_t269* L_0 = ((ObjectU5BU5D_t269*)SZArrayNew(ObjectU5BU5D_t269_il2cpp_TypeInfo_var, 4));
		float L_1 = (__this->___x_0);
		float L_2 = L_1;
		Object_t * L_3 = Box(InitializedTypeInfo(&Single_t23_il2cpp_TypeInfo), &L_2);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_3;
		ObjectU5BU5D_t269* L_4 = L_0;
		float L_5 = (__this->___y_1);
		float L_6 = L_5;
		Object_t * L_7 = Box(InitializedTypeInfo(&Single_t23_il2cpp_TypeInfo), &L_6);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 1)) = (Object_t *)L_7;
		ObjectU5BU5D_t269* L_8 = L_4;
		float L_9 = (__this->___z_2);
		float L_10 = L_9;
		Object_t * L_11 = Box(InitializedTypeInfo(&Single_t23_il2cpp_TypeInfo), &L_10);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 2);
		ArrayElementTypeCheck (L_8, L_11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 2)) = (Object_t *)L_11;
		ObjectU5BU5D_t269* L_12 = L_8;
		float L_13 = (__this->___w_3);
		float L_14 = L_13;
		Object_t * L_15 = Box(InitializedTypeInfo(&Single_t23_il2cpp_TypeInfo), &L_14);
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 3);
		ArrayElementTypeCheck (L_12, L_15);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_12, 3)) = (Object_t *)L_15;
		String_t* L_16 = UnityString_Format_m2626(NULL /*static, unused*/, (String_t*) &_stringLiteral142, L_12, /*hidden argument*/&UnityString_Format_m2626_MethodInfo);
		return L_16;
	}
}
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
extern MethodInfo Quaternion_Euler_m2464_MethodInfo;
extern "C" Quaternion_t19  Quaternion_Euler_m2464 (Object_t * __this /* static, unused */, float ___x, float ___y, float ___z, MethodInfo* method)
{
	{
		float L_0 = ___x;
		float L_1 = ___y;
		float L_2 = ___z;
		Vector3_t6  L_3 = {0};
		Vector3__ctor_m28(&L_3, L_0, L_1, L_2, /*hidden argument*/&Vector3__ctor_m28_MethodInfo);
		Vector3_t6  L_4 = Vector3_op_Multiply_m1840(NULL /*static, unused*/, L_3, (0.0174532924f), /*hidden argument*/&Vector3_op_Multiply_m1840_MethodInfo);
		Quaternion_t19  L_5 = Quaternion_Internal_FromEulerRad_m2465(NULL /*static, unused*/, L_4, /*hidden argument*/&Quaternion_Internal_FromEulerRad_m2465_MethodInfo);
		return L_5;
	}
}
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
extern "C" Quaternion_t19  Quaternion_Internal_FromEulerRad_m2465 (Object_t * __this /* static, unused */, Vector3_t6  ___euler, MethodInfo* method)
{
	{
		Quaternion_t19  L_0 = Quaternion_INTERNAL_CALL_Internal_FromEulerRad_m2466(NULL /*static, unused*/, (&___euler), /*hidden argument*/&Quaternion_INTERNAL_CALL_Internal_FromEulerRad_m2466_MethodInfo);
		return L_0;
	}
}
// UnityEngine.Quaternion UnityEngine.Quaternion::INTERNAL_CALL_Internal_FromEulerRad(UnityEngine.Vector3&)
extern "C" Quaternion_t19  Quaternion_INTERNAL_CALL_Internal_FromEulerRad_m2466 (Object_t * __this /* static, unused */, Vector3_t6 * ___euler, MethodInfo* method)
{
	typedef Quaternion_t19  (*Quaternion_INTERNAL_CALL_Internal_FromEulerRad_m2466_ftn) (Vector3_t6 *);
	static Quaternion_INTERNAL_CALL_Internal_FromEulerRad_m2466_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Quaternion_INTERNAL_CALL_Internal_FromEulerRad_m2466_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Quaternion::INTERNAL_CALL_Internal_FromEulerRad(UnityEngine.Vector3&)");
	return _il2cpp_icall_func(___euler);
}
// System.Int32 UnityEngine.Quaternion::GetHashCode()
extern MethodInfo Quaternion_GetHashCode_m2467_MethodInfo;
extern "C" int32_t Quaternion_GetHashCode_m2467 (Quaternion_t19 * __this, MethodInfo* method)
{
	{
		float* L_0 = &(__this->___x_0);
		int32_t L_1 = Single_GetHashCode_m3333(L_0, /*hidden argument*/&Single_GetHashCode_m3333_MethodInfo);
		float* L_2 = &(__this->___y_1);
		int32_t L_3 = Single_GetHashCode_m3333(L_2, /*hidden argument*/&Single_GetHashCode_m3333_MethodInfo);
		float* L_4 = &(__this->___z_2);
		int32_t L_5 = Single_GetHashCode_m3333(L_4, /*hidden argument*/&Single_GetHashCode_m3333_MethodInfo);
		float* L_6 = &(__this->___w_3);
		int32_t L_7 = Single_GetHashCode_m3333(L_6, /*hidden argument*/&Single_GetHashCode_m3333_MethodInfo);
		return ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_1^(int32_t)((int32_t)((int32_t)L_3<<(int32_t)2))))^(int32_t)((int32_t)((int32_t)L_5>>(int32_t)2))))^(int32_t)((int32_t)((int32_t)L_7>>(int32_t)1))));
	}
}
// System.Boolean UnityEngine.Quaternion::Equals(System.Object)
extern MethodInfo Quaternion_Equals_m2468_MethodInfo;
extern "C" bool Quaternion_Equals_m2468 (Quaternion_t19 * __this, Object_t * ___other, MethodInfo* method)
{
	Quaternion_t19  V_0 = {0};
	int32_t G_B7_0 = 0;
	{
		Object_t * L_0 = ___other;
		if (((Object_t *)IsInst(L_0, InitializedTypeInfo(&Quaternion_t19_il2cpp_TypeInfo))))
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		Object_t * L_1 = ___other;
		V_0 = ((*(Quaternion_t19 *)((Quaternion_t19 *)UnBox (L_1, InitializedTypeInfo(&Quaternion_t19_il2cpp_TypeInfo)))));
		float* L_2 = &(__this->___x_0);
		float L_3 = ((&V_0)->___x_0);
		bool L_4 = Single_Equals_m3359(L_2, L_3, /*hidden argument*/&Single_Equals_m3359_MethodInfo);
		if (!L_4)
		{
			goto IL_006d;
		}
	}
	{
		float* L_5 = &(__this->___y_1);
		float L_6 = ((&V_0)->___y_1);
		bool L_7 = Single_Equals_m3359(L_5, L_6, /*hidden argument*/&Single_Equals_m3359_MethodInfo);
		if (!L_7)
		{
			goto IL_006d;
		}
	}
	{
		float* L_8 = &(__this->___z_2);
		float L_9 = ((&V_0)->___z_2);
		bool L_10 = Single_Equals_m3359(L_8, L_9, /*hidden argument*/&Single_Equals_m3359_MethodInfo);
		if (!L_10)
		{
			goto IL_006d;
		}
	}
	{
		float* L_11 = &(__this->___w_3);
		float L_12 = ((&V_0)->___w_3);
		bool L_13 = Single_Equals_m3359(L_11, L_12, /*hidden argument*/&Single_Equals_m3359_MethodInfo);
		G_B7_0 = ((int32_t)(L_13));
		goto IL_006e;
	}

IL_006d:
	{
		G_B7_0 = 0;
	}

IL_006e:
	{
		return G_B7_0;
	}
}
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
extern MethodInfo Quaternion_op_Multiply_m2469_MethodInfo;
extern "C" Quaternion_t19  Quaternion_op_Multiply_m2469 (Object_t * __this /* static, unused */, Quaternion_t19  ___lhs, Quaternion_t19  ___rhs, MethodInfo* method)
{
	{
		float L_0 = ((&___lhs)->___w_3);
		float L_1 = ((&___rhs)->___x_0);
		float L_2 = ((&___lhs)->___x_0);
		float L_3 = ((&___rhs)->___w_3);
		float L_4 = ((&___lhs)->___y_1);
		float L_5 = ((&___rhs)->___z_2);
		float L_6 = ((&___lhs)->___z_2);
		float L_7 = ((&___rhs)->___y_1);
		float L_8 = ((&___lhs)->___w_3);
		float L_9 = ((&___rhs)->___y_1);
		float L_10 = ((&___lhs)->___y_1);
		float L_11 = ((&___rhs)->___w_3);
		float L_12 = ((&___lhs)->___z_2);
		float L_13 = ((&___rhs)->___x_0);
		float L_14 = ((&___lhs)->___x_0);
		float L_15 = ((&___rhs)->___z_2);
		float L_16 = ((&___lhs)->___w_3);
		float L_17 = ((&___rhs)->___z_2);
		float L_18 = ((&___lhs)->___z_2);
		float L_19 = ((&___rhs)->___w_3);
		float L_20 = ((&___lhs)->___x_0);
		float L_21 = ((&___rhs)->___y_1);
		float L_22 = ((&___lhs)->___y_1);
		float L_23 = ((&___rhs)->___x_0);
		float L_24 = ((&___lhs)->___w_3);
		float L_25 = ((&___rhs)->___w_3);
		float L_26 = ((&___lhs)->___x_0);
		float L_27 = ((&___rhs)->___x_0);
		float L_28 = ((&___lhs)->___y_1);
		float L_29 = ((&___rhs)->___y_1);
		float L_30 = ((&___lhs)->___z_2);
		float L_31 = ((&___rhs)->___z_2);
		Quaternion_t19  L_32 = {0};
		Quaternion__ctor_m2459(&L_32, ((float)((float)((float)((float)((float)((float)((float)((float)L_0*(float)L_1))+(float)((float)((float)L_2*(float)L_3))))+(float)((float)((float)L_4*(float)L_5))))-(float)((float)((float)L_6*(float)L_7)))), ((float)((float)((float)((float)((float)((float)((float)((float)L_8*(float)L_9))+(float)((float)((float)L_10*(float)L_11))))+(float)((float)((float)L_12*(float)L_13))))-(float)((float)((float)L_14*(float)L_15)))), ((float)((float)((float)((float)((float)((float)((float)((float)L_16*(float)L_17))+(float)((float)((float)L_18*(float)L_19))))+(float)((float)((float)L_20*(float)L_21))))-(float)((float)((float)L_22*(float)L_23)))), ((float)((float)((float)((float)((float)((float)((float)((float)L_24*(float)L_25))-(float)((float)((float)L_26*(float)L_27))))-(float)((float)((float)L_28*(float)L_29))))-(float)((float)((float)L_30*(float)L_31)))), /*hidden argument*/&Quaternion__ctor_m2459_MethodInfo);
		return L_32;
	}
}
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
extern MethodInfo Quaternion_op_Multiply_m1554_MethodInfo;
extern "C" Vector3_t6  Quaternion_op_Multiply_m1554 (Object_t * __this /* static, unused */, Quaternion_t19  ___rotation, Vector3_t6  ___point, MethodInfo* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	float V_9 = 0.0f;
	float V_10 = 0.0f;
	float V_11 = 0.0f;
	Vector3_t6  V_12 = {0};
	{
		float L_0 = ((&___rotation)->___x_0);
		V_0 = ((float)((float)L_0*(float)(2.0f)));
		float L_1 = ((&___rotation)->___y_1);
		V_1 = ((float)((float)L_1*(float)(2.0f)));
		float L_2 = ((&___rotation)->___z_2);
		V_2 = ((float)((float)L_2*(float)(2.0f)));
		float L_3 = ((&___rotation)->___x_0);
		float L_4 = V_0;
		V_3 = ((float)((float)L_3*(float)L_4));
		float L_5 = ((&___rotation)->___y_1);
		float L_6 = V_1;
		V_4 = ((float)((float)L_5*(float)L_6));
		float L_7 = ((&___rotation)->___z_2);
		float L_8 = V_2;
		V_5 = ((float)((float)L_7*(float)L_8));
		float L_9 = ((&___rotation)->___x_0);
		float L_10 = V_1;
		V_6 = ((float)((float)L_9*(float)L_10));
		float L_11 = ((&___rotation)->___x_0);
		float L_12 = V_2;
		V_7 = ((float)((float)L_11*(float)L_12));
		float L_13 = ((&___rotation)->___y_1);
		float L_14 = V_2;
		V_8 = ((float)((float)L_13*(float)L_14));
		float L_15 = ((&___rotation)->___w_3);
		float L_16 = V_0;
		V_9 = ((float)((float)L_15*(float)L_16));
		float L_17 = ((&___rotation)->___w_3);
		float L_18 = V_1;
		V_10 = ((float)((float)L_17*(float)L_18));
		float L_19 = ((&___rotation)->___w_3);
		float L_20 = V_2;
		V_11 = ((float)((float)L_19*(float)L_20));
		float L_21 = V_4;
		float L_22 = V_5;
		float L_23 = ((&___point)->___x_1);
		float L_24 = V_6;
		float L_25 = V_11;
		float L_26 = ((&___point)->___y_2);
		float L_27 = V_7;
		float L_28 = V_10;
		float L_29 = ((&___point)->___z_3);
		(&V_12)->___x_1 = ((float)((float)((float)((float)((float)((float)((float)((float)(1.0f)-(float)((float)((float)L_21+(float)L_22))))*(float)L_23))+(float)((float)((float)((float)((float)L_24-(float)L_25))*(float)L_26))))+(float)((float)((float)((float)((float)L_27+(float)L_28))*(float)L_29))));
		float L_30 = V_6;
		float L_31 = V_11;
		float L_32 = ((&___point)->___x_1);
		float L_33 = V_3;
		float L_34 = V_5;
		float L_35 = ((&___point)->___y_2);
		float L_36 = V_8;
		float L_37 = V_9;
		float L_38 = ((&___point)->___z_3);
		(&V_12)->___y_2 = ((float)((float)((float)((float)((float)((float)((float)((float)L_30+(float)L_31))*(float)L_32))+(float)((float)((float)((float)((float)(1.0f)-(float)((float)((float)L_33+(float)L_34))))*(float)L_35))))+(float)((float)((float)((float)((float)L_36-(float)L_37))*(float)L_38))));
		float L_39 = V_7;
		float L_40 = V_10;
		float L_41 = ((&___point)->___x_1);
		float L_42 = V_8;
		float L_43 = V_9;
		float L_44 = ((&___point)->___y_2);
		float L_45 = V_3;
		float L_46 = V_4;
		float L_47 = ((&___point)->___z_3);
		(&V_12)->___z_3 = ((float)((float)((float)((float)((float)((float)((float)((float)L_39-(float)L_40))*(float)L_41))+(float)((float)((float)((float)((float)L_42+(float)L_43))*(float)L_44))))+(float)((float)((float)((float)((float)(1.0f)-(float)((float)((float)L_45+(float)L_46))))*(float)L_47))));
		Vector3_t6  L_48 = V_12;
		return L_48;
	}
}
// System.Boolean UnityEngine.Quaternion::op_Inequality(UnityEngine.Quaternion,UnityEngine.Quaternion)
extern MethodInfo Quaternion_op_Inequality_m1699_MethodInfo;
extern "C" bool Quaternion_op_Inequality_m1699 (Object_t * __this /* static, unused */, Quaternion_t19  ___lhs, Quaternion_t19  ___rhs, MethodInfo* method)
{
	{
		Quaternion_t19  L_0 = ___lhs;
		Quaternion_t19  L_1 = ___rhs;
		float L_2 = Quaternion_Dot_m2460(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Quaternion_Dot_m2460_MethodInfo);
		return ((((int32_t)((!(((float)L_2) <= ((float)(0.999999f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
#ifndef _MSC_VER
#else
#endif

extern MethodInfo Rect_get_xMin_m1629_MethodInfo;
extern MethodInfo Rect_get_yMin_m1628_MethodInfo;


// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C" void Rect__ctor_m1748 (Rect_t141 * __this, float ___left, float ___top, float ___width, float ___height, MethodInfo* method)
{
	{
		float L_0 = ___left;
		__this->___m_XMin_0 = L_0;
		float L_1 = ___top;
		__this->___m_YMin_1 = L_1;
		float L_2 = ___width;
		__this->___m_Width_2 = L_2;
		float L_3 = ___height;
		__this->___m_Height_3 = L_3;
		return;
	}
}
// System.Single UnityEngine.Rect::get_x()
extern "C" float Rect_get_x_m1509 (Rect_t141 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->___m_XMin_0);
		return L_0;
	}
}
// System.Void UnityEngine.Rect::set_x(System.Single)
extern "C" void Rect_set_x_m1590 (Rect_t141 * __this, float ___value, MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___m_XMin_0 = L_0;
		return;
	}
}
// System.Single UnityEngine.Rect::get_y()
extern "C" float Rect_get_y_m1510 (Rect_t141 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->___m_YMin_1);
		return L_0;
	}
}
// System.Void UnityEngine.Rect::set_y(System.Single)
extern "C" void Rect_set_y_m1588 (Rect_t141 * __this, float ___value, MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___m_YMin_1 = L_0;
		return;
	}
}
// UnityEngine.Vector2 UnityEngine.Rect::get_position()
extern MethodInfo Rect_get_position_m1599_MethodInfo;
extern "C" Vector2_t12  Rect_get_position_m1599 (Rect_t141 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->___m_XMin_0);
		float L_1 = (__this->___m_YMin_1);
		Vector2_t12  L_2 = {0};
		Vector2__ctor_m1356(&L_2, L_0, L_1, /*hidden argument*/&Vector2__ctor_m1356_MethodInfo);
		return L_2;
	}
}
// UnityEngine.Vector2 UnityEngine.Rect::get_center()
extern MethodInfo Rect_get_center_m1755_MethodInfo;
extern "C" Vector2_t12  Rect_get_center_m1755 (Rect_t141 * __this, MethodInfo* method)
{
	{
		float L_0 = Rect_get_x_m1509(__this, /*hidden argument*/&Rect_get_x_m1509_MethodInfo);
		float L_1 = (__this->___m_Width_2);
		float L_2 = Rect_get_y_m1510(__this, /*hidden argument*/&Rect_get_y_m1510_MethodInfo);
		float L_3 = (__this->___m_Height_3);
		Vector2_t12  L_4 = {0};
		Vector2__ctor_m1356(&L_4, ((float)((float)L_0+(float)((float)((float)L_1/(float)(2.0f))))), ((float)((float)L_2+(float)((float)((float)L_3/(float)(2.0f))))), /*hidden argument*/&Vector2__ctor_m1356_MethodInfo);
		return L_4;
	}
}
// System.Single UnityEngine.Rect::get_width()
extern "C" float Rect_get_width_m1504 (Rect_t141 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Width_2);
		return L_0;
	}
}
// System.Void UnityEngine.Rect::set_width(System.Single)
extern "C" void Rect_set_width_m1589 (Rect_t141 * __this, float ___value, MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___m_Width_2 = L_0;
		return;
	}
}
// System.Single UnityEngine.Rect::get_height()
extern "C" float Rect_get_height_m1505 (Rect_t141 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Height_3);
		return L_0;
	}
}
// System.Void UnityEngine.Rect::set_height(System.Single)
extern "C" void Rect_set_height_m1586 (Rect_t141 * __this, float ___value, MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___m_Height_3 = L_0;
		return;
	}
}
// UnityEngine.Vector2 UnityEngine.Rect::get_size()
extern MethodInfo Rect_get_size_m1581_MethodInfo;
extern "C" Vector2_t12  Rect_get_size_m1581 (Rect_t141 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Width_2);
		float L_1 = (__this->___m_Height_3);
		Vector2_t12  L_2 = {0};
		Vector2__ctor_m1356(&L_2, L_0, L_1, /*hidden argument*/&Vector2__ctor_m1356_MethodInfo);
		return L_2;
	}
}
// System.Single UnityEngine.Rect::get_xMin()
extern "C" float Rect_get_xMin_m1629 (Rect_t141 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->___m_XMin_0);
		return L_0;
	}
}
// System.Single UnityEngine.Rect::get_yMin()
extern "C" float Rect_get_yMin_m1628 (Rect_t141 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->___m_YMin_1);
		return L_0;
	}
}
// System.Single UnityEngine.Rect::get_xMax()
extern "C" float Rect_get_xMax_m1609 (Rect_t141 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Width_2);
		float L_1 = (__this->___m_XMin_0);
		return ((float)((float)L_0+(float)L_1));
	}
}
// System.Single UnityEngine.Rect::get_yMax()
extern "C" float Rect_get_yMax_m1611 (Rect_t141 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Height_3);
		float L_1 = (__this->___m_YMin_1);
		return ((float)((float)L_0+(float)L_1));
	}
}
// System.String UnityEngine.Rect::ToString()
extern MethodInfo Rect_ToString_m2470_MethodInfo;
extern TypeInfo* ObjectU5BU5D_t269_il2cpp_TypeInfo_var;
extern "C" String_t* Rect_ToString_m2470 (Rect_t141 * __this, MethodInfo* method)
{
	static bool Rect_ToString_m2470_init;
	if (!Rect_ToString_m2470_init)
	{
		ObjectU5BU5D_t269_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t269_0_0_0);
		Rect_ToString_m2470_init = true;
	}
	{
		ObjectU5BU5D_t269* L_0 = ((ObjectU5BU5D_t269*)SZArrayNew(ObjectU5BU5D_t269_il2cpp_TypeInfo_var, 4));
		float L_1 = Rect_get_x_m1509(__this, /*hidden argument*/&Rect_get_x_m1509_MethodInfo);
		float L_2 = L_1;
		Object_t * L_3 = Box(InitializedTypeInfo(&Single_t23_il2cpp_TypeInfo), &L_2);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_3;
		ObjectU5BU5D_t269* L_4 = L_0;
		float L_5 = Rect_get_y_m1510(__this, /*hidden argument*/&Rect_get_y_m1510_MethodInfo);
		float L_6 = L_5;
		Object_t * L_7 = Box(InitializedTypeInfo(&Single_t23_il2cpp_TypeInfo), &L_6);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 1)) = (Object_t *)L_7;
		ObjectU5BU5D_t269* L_8 = L_4;
		float L_9 = Rect_get_width_m1504(__this, /*hidden argument*/&Rect_get_width_m1504_MethodInfo);
		float L_10 = L_9;
		Object_t * L_11 = Box(InitializedTypeInfo(&Single_t23_il2cpp_TypeInfo), &L_10);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 2);
		ArrayElementTypeCheck (L_8, L_11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 2)) = (Object_t *)L_11;
		ObjectU5BU5D_t269* L_12 = L_8;
		float L_13 = Rect_get_height_m1505(__this, /*hidden argument*/&Rect_get_height_m1505_MethodInfo);
		float L_14 = L_13;
		Object_t * L_15 = Box(InitializedTypeInfo(&Single_t23_il2cpp_TypeInfo), &L_14);
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 3);
		ArrayElementTypeCheck (L_12, L_15);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_12, 3)) = (Object_t *)L_15;
		String_t* L_16 = UnityString_Format_m2626(NULL /*static, unused*/, (String_t*) &_stringLiteral143, L_12, /*hidden argument*/&UnityString_Format_m2626_MethodInfo);
		return L_16;
	}
}
// System.Boolean UnityEngine.Rect::Contains(UnityEngine.Vector3)
extern MethodInfo Rect_Contains_m2471_MethodInfo;
extern "C" bool Rect_Contains_m2471 (Rect_t141 * __this, Vector3_t6  ___point, MethodInfo* method)
{
	int32_t G_B5_0 = 0;
	{
		float L_0 = ((&___point)->___x_1);
		float L_1 = Rect_get_xMin_m1629(__this, /*hidden argument*/&Rect_get_xMin_m1629_MethodInfo);
		if ((!(((float)L_0) >= ((float)L_1))))
		{
			goto IL_0047;
		}
	}
	{
		float L_2 = ((&___point)->___x_1);
		float L_3 = Rect_get_xMax_m1609(__this, /*hidden argument*/&Rect_get_xMax_m1609_MethodInfo);
		if ((!(((float)L_2) < ((float)L_3))))
		{
			goto IL_0047;
		}
	}
	{
		float L_4 = ((&___point)->___y_2);
		float L_5 = Rect_get_yMin_m1628(__this, /*hidden argument*/&Rect_get_yMin_m1628_MethodInfo);
		if ((!(((float)L_4) >= ((float)L_5))))
		{
			goto IL_0047;
		}
	}
	{
		float L_6 = ((&___point)->___y_2);
		float L_7 = Rect_get_yMax_m1611(__this, /*hidden argument*/&Rect_get_yMax_m1611_MethodInfo);
		G_B5_0 = ((((float)L_6) < ((float)L_7))? 1 : 0);
		goto IL_0048;
	}

IL_0047:
	{
		G_B5_0 = 0;
	}

IL_0048:
	{
		return G_B5_0;
	}
}
// System.Int32 UnityEngine.Rect::GetHashCode()
extern MethodInfo Rect_GetHashCode_m2472_MethodInfo;
extern "C" int32_t Rect_GetHashCode_m2472 (Rect_t141 * __this, MethodInfo* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		float L_0 = Rect_get_x_m1509(__this, /*hidden argument*/&Rect_get_x_m1509_MethodInfo);
		V_0 = L_0;
		int32_t L_1 = Single_GetHashCode_m3333((&V_0), /*hidden argument*/&Single_GetHashCode_m3333_MethodInfo);
		float L_2 = Rect_get_width_m1504(__this, /*hidden argument*/&Rect_get_width_m1504_MethodInfo);
		V_1 = L_2;
		int32_t L_3 = Single_GetHashCode_m3333((&V_1), /*hidden argument*/&Single_GetHashCode_m3333_MethodInfo);
		float L_4 = Rect_get_y_m1510(__this, /*hidden argument*/&Rect_get_y_m1510_MethodInfo);
		V_2 = L_4;
		int32_t L_5 = Single_GetHashCode_m3333((&V_2), /*hidden argument*/&Single_GetHashCode_m3333_MethodInfo);
		float L_6 = Rect_get_height_m1505(__this, /*hidden argument*/&Rect_get_height_m1505_MethodInfo);
		V_3 = L_6;
		int32_t L_7 = Single_GetHashCode_m3333((&V_3), /*hidden argument*/&Single_GetHashCode_m3333_MethodInfo);
		return ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_1^(int32_t)((int32_t)((int32_t)L_3<<(int32_t)2))))^(int32_t)((int32_t)((int32_t)L_5>>(int32_t)2))))^(int32_t)((int32_t)((int32_t)L_7>>(int32_t)1))));
	}
}
// System.Boolean UnityEngine.Rect::Equals(System.Object)
extern MethodInfo Rect_Equals_m2473_MethodInfo;
extern "C" bool Rect_Equals_m2473 (Rect_t141 * __this, Object_t * ___other, MethodInfo* method)
{
	Rect_t141  V_0 = {0};
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	int32_t G_B7_0 = 0;
	{
		Object_t * L_0 = ___other;
		if (((Object_t *)IsInst(L_0, InitializedTypeInfo(&Rect_t141_il2cpp_TypeInfo))))
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		Object_t * L_1 = ___other;
		V_0 = ((*(Rect_t141 *)((Rect_t141 *)UnBox (L_1, InitializedTypeInfo(&Rect_t141_il2cpp_TypeInfo)))));
		float L_2 = Rect_get_x_m1509(__this, /*hidden argument*/&Rect_get_x_m1509_MethodInfo);
		V_1 = L_2;
		float L_3 = Rect_get_x_m1509((&V_0), /*hidden argument*/&Rect_get_x_m1509_MethodInfo);
		bool L_4 = Single_Equals_m3359((&V_1), L_3, /*hidden argument*/&Single_Equals_m3359_MethodInfo);
		if (!L_4)
		{
			goto IL_007a;
		}
	}
	{
		float L_5 = Rect_get_y_m1510(__this, /*hidden argument*/&Rect_get_y_m1510_MethodInfo);
		V_2 = L_5;
		float L_6 = Rect_get_y_m1510((&V_0), /*hidden argument*/&Rect_get_y_m1510_MethodInfo);
		bool L_7 = Single_Equals_m3359((&V_2), L_6, /*hidden argument*/&Single_Equals_m3359_MethodInfo);
		if (!L_7)
		{
			goto IL_007a;
		}
	}
	{
		float L_8 = Rect_get_width_m1504(__this, /*hidden argument*/&Rect_get_width_m1504_MethodInfo);
		V_3 = L_8;
		float L_9 = Rect_get_width_m1504((&V_0), /*hidden argument*/&Rect_get_width_m1504_MethodInfo);
		bool L_10 = Single_Equals_m3359((&V_3), L_9, /*hidden argument*/&Single_Equals_m3359_MethodInfo);
		if (!L_10)
		{
			goto IL_007a;
		}
	}
	{
		float L_11 = Rect_get_height_m1505(__this, /*hidden argument*/&Rect_get_height_m1505_MethodInfo);
		V_4 = L_11;
		float L_12 = Rect_get_height_m1505((&V_0), /*hidden argument*/&Rect_get_height_m1505_MethodInfo);
		bool L_13 = Single_Equals_m3359((&V_4), L_12, /*hidden argument*/&Single_Equals_m3359_MethodInfo);
		G_B7_0 = ((int32_t)(L_13));
		goto IL_007b;
	}

IL_007a:
	{
		G_B7_0 = 0;
	}

IL_007b:
	{
		return G_B7_0;
	}
}
// System.Boolean UnityEngine.Rect::op_Equality(UnityEngine.Rect,UnityEngine.Rect)
extern MethodInfo Rect_op_Equality_m1747_MethodInfo;
extern "C" bool Rect_op_Equality_m1747 (Object_t * __this /* static, unused */, Rect_t141  ___lhs, Rect_t141  ___rhs, MethodInfo* method)
{
	int32_t G_B5_0 = 0;
	{
		float L_0 = Rect_get_x_m1509((&___lhs), /*hidden argument*/&Rect_get_x_m1509_MethodInfo);
		float L_1 = Rect_get_x_m1509((&___rhs), /*hidden argument*/&Rect_get_x_m1509_MethodInfo);
		if ((!(((float)L_0) == ((float)L_1))))
		{
			goto IL_004b;
		}
	}
	{
		float L_2 = Rect_get_y_m1510((&___lhs), /*hidden argument*/&Rect_get_y_m1510_MethodInfo);
		float L_3 = Rect_get_y_m1510((&___rhs), /*hidden argument*/&Rect_get_y_m1510_MethodInfo);
		if ((!(((float)L_2) == ((float)L_3))))
		{
			goto IL_004b;
		}
	}
	{
		float L_4 = Rect_get_width_m1504((&___lhs), /*hidden argument*/&Rect_get_width_m1504_MethodInfo);
		float L_5 = Rect_get_width_m1504((&___rhs), /*hidden argument*/&Rect_get_width_m1504_MethodInfo);
		if ((!(((float)L_4) == ((float)L_5))))
		{
			goto IL_004b;
		}
	}
	{
		float L_6 = Rect_get_height_m1505((&___lhs), /*hidden argument*/&Rect_get_height_m1505_MethodInfo);
		float L_7 = Rect_get_height_m1505((&___rhs), /*hidden argument*/&Rect_get_height_m1505_MethodInfo);
		G_B5_0 = ((((float)L_6) == ((float)L_7))? 1 : 0);
		goto IL_004c;
	}

IL_004b:
	{
		G_B5_0 = 0;
	}

IL_004c:
	{
		return G_B5_0;
	}
}
// UnityEngine.Matrix4x4
#include "UnityEngine_UnityEngine_Matrix4x4.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Matrix4x4_t314_il2cpp_TypeInfo;
// UnityEngine.Matrix4x4
#include "UnityEngine_UnityEngine_Matrix4x4MethodDeclarations.h"

extern MethodInfo Matrix4x4_get_Item_m2476_MethodInfo;
extern MethodInfo Matrix4x4_set_Item_m2477_MethodInfo;
extern MethodInfo Matrix4x4_Inverse_m2480_MethodInfo;
extern MethodInfo Matrix4x4_Transpose_m2482_MethodInfo;
extern MethodInfo Matrix4x4_GetColumn_m2489_MethodInfo;
extern MethodInfo Matrix4x4_INTERNAL_CALL_Inverse_m2481_MethodInfo;
extern MethodInfo Matrix4x4_INTERNAL_CALL_Transpose_m2483_MethodInfo;
extern MethodInfo Matrix4x4_INTERNAL_CALL_Invert_m2485_MethodInfo;
extern MethodInfo Matrix4x4_get_Item_m2474_MethodInfo;
extern MethodInfo Matrix4x4_set_Item_m2475_MethodInfo;
extern MethodInfo Matrix4x4_TRS_m2499_MethodInfo;
extern MethodInfo Matrix4x4_INTERNAL_CALL_TRS_m2500_MethodInfo;
extern MethodInfo Matrix4x4_op_Equality_m2507_MethodInfo;


// System.Single UnityEngine.Matrix4x4::get_Item(System.Int32,System.Int32)
extern "C" float Matrix4x4_get_Item_m2474 (Matrix4x4_t314 * __this, int32_t ___row, int32_t ___column, MethodInfo* method)
{
	{
		int32_t L_0 = ___row;
		int32_t L_1 = ___column;
		float L_2 = Matrix4x4_get_Item_m2476(__this, ((int32_t)((int32_t)L_0+(int32_t)((int32_t)((int32_t)L_1*(int32_t)4)))), /*hidden argument*/&Matrix4x4_get_Item_m2476_MethodInfo);
		return L_2;
	}
}
// System.Void UnityEngine.Matrix4x4::set_Item(System.Int32,System.Int32,System.Single)
extern "C" void Matrix4x4_set_Item_m2475 (Matrix4x4_t314 * __this, int32_t ___row, int32_t ___column, float ___value, MethodInfo* method)
{
	{
		int32_t L_0 = ___row;
		int32_t L_1 = ___column;
		float L_2 = ___value;
		Matrix4x4_set_Item_m2477(__this, ((int32_t)((int32_t)L_0+(int32_t)((int32_t)((int32_t)L_1*(int32_t)4)))), L_2, /*hidden argument*/&Matrix4x4_set_Item_m2477_MethodInfo);
		return;
	}
}
// System.Single UnityEngine.Matrix4x4::get_Item(System.Int32)
extern "C" float Matrix4x4_get_Item_m2476 (Matrix4x4_t314 * __this, int32_t ___index, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___index;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_004d;
		}
		if (L_1 == 1)
		{
			goto IL_0054;
		}
		if (L_1 == 2)
		{
			goto IL_005b;
		}
		if (L_1 == 3)
		{
			goto IL_0062;
		}
		if (L_1 == 4)
		{
			goto IL_0069;
		}
		if (L_1 == 5)
		{
			goto IL_0070;
		}
		if (L_1 == 6)
		{
			goto IL_0077;
		}
		if (L_1 == 7)
		{
			goto IL_007e;
		}
		if (L_1 == 8)
		{
			goto IL_0085;
		}
		if (L_1 == 9)
		{
			goto IL_008c;
		}
		if (L_1 == 10)
		{
			goto IL_0093;
		}
		if (L_1 == 11)
		{
			goto IL_009a;
		}
		if (L_1 == 12)
		{
			goto IL_00a1;
		}
		if (L_1 == 13)
		{
			goto IL_00a8;
		}
		if (L_1 == 14)
		{
			goto IL_00af;
		}
		if (L_1 == 15)
		{
			goto IL_00b6;
		}
	}
	{
		goto IL_00bd;
	}

IL_004d:
	{
		float L_2 = (__this->___m00_0);
		return L_2;
	}

IL_0054:
	{
		float L_3 = (__this->___m10_1);
		return L_3;
	}

IL_005b:
	{
		float L_4 = (__this->___m20_2);
		return L_4;
	}

IL_0062:
	{
		float L_5 = (__this->___m30_3);
		return L_5;
	}

IL_0069:
	{
		float L_6 = (__this->___m01_4);
		return L_6;
	}

IL_0070:
	{
		float L_7 = (__this->___m11_5);
		return L_7;
	}

IL_0077:
	{
		float L_8 = (__this->___m21_6);
		return L_8;
	}

IL_007e:
	{
		float L_9 = (__this->___m31_7);
		return L_9;
	}

IL_0085:
	{
		float L_10 = (__this->___m02_8);
		return L_10;
	}

IL_008c:
	{
		float L_11 = (__this->___m12_9);
		return L_11;
	}

IL_0093:
	{
		float L_12 = (__this->___m22_10);
		return L_12;
	}

IL_009a:
	{
		float L_13 = (__this->___m32_11);
		return L_13;
	}

IL_00a1:
	{
		float L_14 = (__this->___m03_12);
		return L_14;
	}

IL_00a8:
	{
		float L_15 = (__this->___m13_13);
		return L_15;
	}

IL_00af:
	{
		float L_16 = (__this->___m23_14);
		return L_16;
	}

IL_00b6:
	{
		float L_17 = (__this->___m33_15);
		return L_17;
	}

IL_00bd:
	{
		IndexOutOfRangeException_t690 * L_18 = (IndexOutOfRangeException_t690 *)il2cpp_codegen_object_new (InitializedTypeInfo(&IndexOutOfRangeException_t690_il2cpp_TypeInfo));
		IndexOutOfRangeException__ctor_m3358(L_18, (String_t*) &_stringLiteral144, /*hidden argument*/&IndexOutOfRangeException__ctor_m3358_MethodInfo);
		il2cpp_codegen_raise_exception(L_18);
	}
}
// System.Void UnityEngine.Matrix4x4::set_Item(System.Int32,System.Single)
extern "C" void Matrix4x4_set_Item_m2477 (Matrix4x4_t314 * __this, int32_t ___index, float ___value, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___index;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_004d;
		}
		if (L_1 == 1)
		{
			goto IL_0059;
		}
		if (L_1 == 2)
		{
			goto IL_0065;
		}
		if (L_1 == 3)
		{
			goto IL_0071;
		}
		if (L_1 == 4)
		{
			goto IL_007d;
		}
		if (L_1 == 5)
		{
			goto IL_0089;
		}
		if (L_1 == 6)
		{
			goto IL_0095;
		}
		if (L_1 == 7)
		{
			goto IL_00a1;
		}
		if (L_1 == 8)
		{
			goto IL_00ad;
		}
		if (L_1 == 9)
		{
			goto IL_00b9;
		}
		if (L_1 == 10)
		{
			goto IL_00c5;
		}
		if (L_1 == 11)
		{
			goto IL_00d1;
		}
		if (L_1 == 12)
		{
			goto IL_00dd;
		}
		if (L_1 == 13)
		{
			goto IL_00e9;
		}
		if (L_1 == 14)
		{
			goto IL_00f5;
		}
		if (L_1 == 15)
		{
			goto IL_0101;
		}
	}
	{
		goto IL_010d;
	}

IL_004d:
	{
		float L_2 = ___value;
		__this->___m00_0 = L_2;
		goto IL_0118;
	}

IL_0059:
	{
		float L_3 = ___value;
		__this->___m10_1 = L_3;
		goto IL_0118;
	}

IL_0065:
	{
		float L_4 = ___value;
		__this->___m20_2 = L_4;
		goto IL_0118;
	}

IL_0071:
	{
		float L_5 = ___value;
		__this->___m30_3 = L_5;
		goto IL_0118;
	}

IL_007d:
	{
		float L_6 = ___value;
		__this->___m01_4 = L_6;
		goto IL_0118;
	}

IL_0089:
	{
		float L_7 = ___value;
		__this->___m11_5 = L_7;
		goto IL_0118;
	}

IL_0095:
	{
		float L_8 = ___value;
		__this->___m21_6 = L_8;
		goto IL_0118;
	}

IL_00a1:
	{
		float L_9 = ___value;
		__this->___m31_7 = L_9;
		goto IL_0118;
	}

IL_00ad:
	{
		float L_10 = ___value;
		__this->___m02_8 = L_10;
		goto IL_0118;
	}

IL_00b9:
	{
		float L_11 = ___value;
		__this->___m12_9 = L_11;
		goto IL_0118;
	}

IL_00c5:
	{
		float L_12 = ___value;
		__this->___m22_10 = L_12;
		goto IL_0118;
	}

IL_00d1:
	{
		float L_13 = ___value;
		__this->___m32_11 = L_13;
		goto IL_0118;
	}

IL_00dd:
	{
		float L_14 = ___value;
		__this->___m03_12 = L_14;
		goto IL_0118;
	}

IL_00e9:
	{
		float L_15 = ___value;
		__this->___m13_13 = L_15;
		goto IL_0118;
	}

IL_00f5:
	{
		float L_16 = ___value;
		__this->___m23_14 = L_16;
		goto IL_0118;
	}

IL_0101:
	{
		float L_17 = ___value;
		__this->___m33_15 = L_17;
		goto IL_0118;
	}

IL_010d:
	{
		IndexOutOfRangeException_t690 * L_18 = (IndexOutOfRangeException_t690 *)il2cpp_codegen_object_new (InitializedTypeInfo(&IndexOutOfRangeException_t690_il2cpp_TypeInfo));
		IndexOutOfRangeException__ctor_m3358(L_18, (String_t*) &_stringLiteral144, /*hidden argument*/&IndexOutOfRangeException__ctor_m3358_MethodInfo);
		il2cpp_codegen_raise_exception(L_18);
	}

IL_0118:
	{
		return;
	}
}
// System.Int32 UnityEngine.Matrix4x4::GetHashCode()
extern MethodInfo Matrix4x4_GetHashCode_m2478_MethodInfo;
extern "C" int32_t Matrix4x4_GetHashCode_m2478 (Matrix4x4_t314 * __this, MethodInfo* method)
{
	Vector4_t160  V_0 = {0};
	Vector4_t160  V_1 = {0};
	Vector4_t160  V_2 = {0};
	Vector4_t160  V_3 = {0};
	{
		Vector4_t160  L_0 = Matrix4x4_GetColumn_m2489(__this, 0, /*hidden argument*/&Matrix4x4_GetColumn_m2489_MethodInfo);
		V_0 = L_0;
		int32_t L_1 = Vector4_GetHashCode_m2536((&V_0), /*hidden argument*/&Vector4_GetHashCode_m2536_MethodInfo);
		Vector4_t160  L_2 = Matrix4x4_GetColumn_m2489(__this, 1, /*hidden argument*/&Matrix4x4_GetColumn_m2489_MethodInfo);
		V_1 = L_2;
		int32_t L_3 = Vector4_GetHashCode_m2536((&V_1), /*hidden argument*/&Vector4_GetHashCode_m2536_MethodInfo);
		Vector4_t160  L_4 = Matrix4x4_GetColumn_m2489(__this, 2, /*hidden argument*/&Matrix4x4_GetColumn_m2489_MethodInfo);
		V_2 = L_4;
		int32_t L_5 = Vector4_GetHashCode_m2536((&V_2), /*hidden argument*/&Vector4_GetHashCode_m2536_MethodInfo);
		Vector4_t160  L_6 = Matrix4x4_GetColumn_m2489(__this, 3, /*hidden argument*/&Matrix4x4_GetColumn_m2489_MethodInfo);
		V_3 = L_6;
		int32_t L_7 = Vector4_GetHashCode_m2536((&V_3), /*hidden argument*/&Vector4_GetHashCode_m2536_MethodInfo);
		return ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_1^(int32_t)((int32_t)((int32_t)L_3<<(int32_t)2))))^(int32_t)((int32_t)((int32_t)L_5>>(int32_t)2))))^(int32_t)((int32_t)((int32_t)L_7>>(int32_t)1))));
	}
}
// System.Boolean UnityEngine.Matrix4x4::Equals(System.Object)
extern MethodInfo Matrix4x4_Equals_m2479_MethodInfo;
extern "C" bool Matrix4x4_Equals_m2479 (Matrix4x4_t314 * __this, Object_t * ___other, MethodInfo* method)
{
	Matrix4x4_t314  V_0 = {0};
	Vector4_t160  V_1 = {0};
	Vector4_t160  V_2 = {0};
	Vector4_t160  V_3 = {0};
	Vector4_t160  V_4 = {0};
	int32_t G_B7_0 = 0;
	{
		Object_t * L_0 = ___other;
		if (((Object_t *)IsInst(L_0, InitializedTypeInfo(&Matrix4x4_t314_il2cpp_TypeInfo))))
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		Object_t * L_1 = ___other;
		V_0 = ((*(Matrix4x4_t314 *)((Matrix4x4_t314 *)UnBox (L_1, InitializedTypeInfo(&Matrix4x4_t314_il2cpp_TypeInfo)))));
		Vector4_t160  L_2 = Matrix4x4_GetColumn_m2489(__this, 0, /*hidden argument*/&Matrix4x4_GetColumn_m2489_MethodInfo);
		V_1 = L_2;
		Vector4_t160  L_3 = Matrix4x4_GetColumn_m2489((&V_0), 0, /*hidden argument*/&Matrix4x4_GetColumn_m2489_MethodInfo);
		Vector4_t160  L_4 = L_3;
		Object_t * L_5 = Box(InitializedTypeInfo(&Vector4_t160_il2cpp_TypeInfo), &L_4);
		bool L_6 = Vector4_Equals_m2537((&V_1), L_5, /*hidden argument*/&Vector4_Equals_m2537_MethodInfo);
		if (!L_6)
		{
			goto IL_0096;
		}
	}
	{
		Vector4_t160  L_7 = Matrix4x4_GetColumn_m2489(__this, 1, /*hidden argument*/&Matrix4x4_GetColumn_m2489_MethodInfo);
		V_2 = L_7;
		Vector4_t160  L_8 = Matrix4x4_GetColumn_m2489((&V_0), 1, /*hidden argument*/&Matrix4x4_GetColumn_m2489_MethodInfo);
		Vector4_t160  L_9 = L_8;
		Object_t * L_10 = Box(InitializedTypeInfo(&Vector4_t160_il2cpp_TypeInfo), &L_9);
		bool L_11 = Vector4_Equals_m2537((&V_2), L_10, /*hidden argument*/&Vector4_Equals_m2537_MethodInfo);
		if (!L_11)
		{
			goto IL_0096;
		}
	}
	{
		Vector4_t160  L_12 = Matrix4x4_GetColumn_m2489(__this, 2, /*hidden argument*/&Matrix4x4_GetColumn_m2489_MethodInfo);
		V_3 = L_12;
		Vector4_t160  L_13 = Matrix4x4_GetColumn_m2489((&V_0), 2, /*hidden argument*/&Matrix4x4_GetColumn_m2489_MethodInfo);
		Vector4_t160  L_14 = L_13;
		Object_t * L_15 = Box(InitializedTypeInfo(&Vector4_t160_il2cpp_TypeInfo), &L_14);
		bool L_16 = Vector4_Equals_m2537((&V_3), L_15, /*hidden argument*/&Vector4_Equals_m2537_MethodInfo);
		if (!L_16)
		{
			goto IL_0096;
		}
	}
	{
		Vector4_t160  L_17 = Matrix4x4_GetColumn_m2489(__this, 3, /*hidden argument*/&Matrix4x4_GetColumn_m2489_MethodInfo);
		V_4 = L_17;
		Vector4_t160  L_18 = Matrix4x4_GetColumn_m2489((&V_0), 3, /*hidden argument*/&Matrix4x4_GetColumn_m2489_MethodInfo);
		Vector4_t160  L_19 = L_18;
		Object_t * L_20 = Box(InitializedTypeInfo(&Vector4_t160_il2cpp_TypeInfo), &L_19);
		bool L_21 = Vector4_Equals_m2537((&V_4), L_20, /*hidden argument*/&Vector4_Equals_m2537_MethodInfo);
		G_B7_0 = ((int32_t)(L_21));
		goto IL_0097;
	}

IL_0096:
	{
		G_B7_0 = 0;
	}

IL_0097:
	{
		return G_B7_0;
	}
}
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::Inverse(UnityEngine.Matrix4x4)
extern "C" Matrix4x4_t314  Matrix4x4_Inverse_m2480 (Object_t * __this /* static, unused */, Matrix4x4_t314  ___m, MethodInfo* method)
{
	{
		Matrix4x4_t314  L_0 = Matrix4x4_INTERNAL_CALL_Inverse_m2481(NULL /*static, unused*/, (&___m), /*hidden argument*/&Matrix4x4_INTERNAL_CALL_Inverse_m2481_MethodInfo);
		return L_0;
	}
}
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::INTERNAL_CALL_Inverse(UnityEngine.Matrix4x4&)
extern "C" Matrix4x4_t314  Matrix4x4_INTERNAL_CALL_Inverse_m2481 (Object_t * __this /* static, unused */, Matrix4x4_t314 * ___m, MethodInfo* method)
{
	typedef Matrix4x4_t314  (*Matrix4x4_INTERNAL_CALL_Inverse_m2481_ftn) (Matrix4x4_t314 *);
	static Matrix4x4_INTERNAL_CALL_Inverse_m2481_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Matrix4x4_INTERNAL_CALL_Inverse_m2481_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Matrix4x4::INTERNAL_CALL_Inverse(UnityEngine.Matrix4x4&)");
	return _il2cpp_icall_func(___m);
}
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::Transpose(UnityEngine.Matrix4x4)
extern "C" Matrix4x4_t314  Matrix4x4_Transpose_m2482 (Object_t * __this /* static, unused */, Matrix4x4_t314  ___m, MethodInfo* method)
{
	{
		Matrix4x4_t314  L_0 = Matrix4x4_INTERNAL_CALL_Transpose_m2483(NULL /*static, unused*/, (&___m), /*hidden argument*/&Matrix4x4_INTERNAL_CALL_Transpose_m2483_MethodInfo);
		return L_0;
	}
}
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::INTERNAL_CALL_Transpose(UnityEngine.Matrix4x4&)
extern "C" Matrix4x4_t314  Matrix4x4_INTERNAL_CALL_Transpose_m2483 (Object_t * __this /* static, unused */, Matrix4x4_t314 * ___m, MethodInfo* method)
{
	typedef Matrix4x4_t314  (*Matrix4x4_INTERNAL_CALL_Transpose_m2483_ftn) (Matrix4x4_t314 *);
	static Matrix4x4_INTERNAL_CALL_Transpose_m2483_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Matrix4x4_INTERNAL_CALL_Transpose_m2483_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Matrix4x4::INTERNAL_CALL_Transpose(UnityEngine.Matrix4x4&)");
	return _il2cpp_icall_func(___m);
}
// System.Boolean UnityEngine.Matrix4x4::Invert(UnityEngine.Matrix4x4,UnityEngine.Matrix4x4&)
extern MethodInfo Matrix4x4_Invert_m2484_MethodInfo;
extern "C" bool Matrix4x4_Invert_m2484 (Object_t * __this /* static, unused */, Matrix4x4_t314  ___inMatrix, Matrix4x4_t314 * ___dest, MethodInfo* method)
{
	{
		Matrix4x4_t314 * L_0 = ___dest;
		bool L_1 = Matrix4x4_INTERNAL_CALL_Invert_m2485(NULL /*static, unused*/, (&___inMatrix), L_0, /*hidden argument*/&Matrix4x4_INTERNAL_CALL_Invert_m2485_MethodInfo);
		return L_1;
	}
}
// System.Boolean UnityEngine.Matrix4x4::INTERNAL_CALL_Invert(UnityEngine.Matrix4x4&,UnityEngine.Matrix4x4&)
extern "C" bool Matrix4x4_INTERNAL_CALL_Invert_m2485 (Object_t * __this /* static, unused */, Matrix4x4_t314 * ___inMatrix, Matrix4x4_t314 * ___dest, MethodInfo* method)
{
	typedef bool (*Matrix4x4_INTERNAL_CALL_Invert_m2485_ftn) (Matrix4x4_t314 *, Matrix4x4_t314 *);
	static Matrix4x4_INTERNAL_CALL_Invert_m2485_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Matrix4x4_INTERNAL_CALL_Invert_m2485_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Matrix4x4::INTERNAL_CALL_Invert(UnityEngine.Matrix4x4&,UnityEngine.Matrix4x4&)");
	return _il2cpp_icall_func(___inMatrix, ___dest);
}
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::get_inverse()
extern MethodInfo Matrix4x4_get_inverse_m2486_MethodInfo;
extern "C" Matrix4x4_t314  Matrix4x4_get_inverse_m2486 (Matrix4x4_t314 * __this, MethodInfo* method)
{
	{
		Matrix4x4_t314  L_0 = Matrix4x4_Inverse_m2480(NULL /*static, unused*/, (*(Matrix4x4_t314 *)__this), /*hidden argument*/&Matrix4x4_Inverse_m2480_MethodInfo);
		return L_0;
	}
}
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::get_transpose()
extern MethodInfo Matrix4x4_get_transpose_m2487_MethodInfo;
extern "C" Matrix4x4_t314  Matrix4x4_get_transpose_m2487 (Matrix4x4_t314 * __this, MethodInfo* method)
{
	{
		Matrix4x4_t314  L_0 = Matrix4x4_Transpose_m2482(NULL /*static, unused*/, (*(Matrix4x4_t314 *)__this), /*hidden argument*/&Matrix4x4_Transpose_m2482_MethodInfo);
		return L_0;
	}
}
// System.Boolean UnityEngine.Matrix4x4::get_isIdentity()
extern MethodInfo Matrix4x4_get_isIdentity_m2488_MethodInfo;
extern "C" bool Matrix4x4_get_isIdentity_m2488 (Matrix4x4_t314 * __this, MethodInfo* method)
{
	typedef bool (*Matrix4x4_get_isIdentity_m2488_ftn) (Matrix4x4_t314 *);
	static Matrix4x4_get_isIdentity_m2488_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Matrix4x4_get_isIdentity_m2488_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Matrix4x4::get_isIdentity()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.Vector4 UnityEngine.Matrix4x4::GetColumn(System.Int32)
extern "C" Vector4_t160  Matrix4x4_GetColumn_m2489 (Matrix4x4_t314 * __this, int32_t ___i, MethodInfo* method)
{
	{
		int32_t L_0 = ___i;
		float L_1 = Matrix4x4_get_Item_m2474(__this, 0, L_0, /*hidden argument*/&Matrix4x4_get_Item_m2474_MethodInfo);
		int32_t L_2 = ___i;
		float L_3 = Matrix4x4_get_Item_m2474(__this, 1, L_2, /*hidden argument*/&Matrix4x4_get_Item_m2474_MethodInfo);
		int32_t L_4 = ___i;
		float L_5 = Matrix4x4_get_Item_m2474(__this, 2, L_4, /*hidden argument*/&Matrix4x4_get_Item_m2474_MethodInfo);
		int32_t L_6 = ___i;
		float L_7 = Matrix4x4_get_Item_m2474(__this, 3, L_6, /*hidden argument*/&Matrix4x4_get_Item_m2474_MethodInfo);
		Vector4_t160  L_8 = {0};
		Vector4__ctor_m1511(&L_8, L_1, L_3, L_5, L_7, /*hidden argument*/&Vector4__ctor_m1511_MethodInfo);
		return L_8;
	}
}
// UnityEngine.Vector4 UnityEngine.Matrix4x4::GetRow(System.Int32)
extern MethodInfo Matrix4x4_GetRow_m2490_MethodInfo;
extern "C" Vector4_t160  Matrix4x4_GetRow_m2490 (Matrix4x4_t314 * __this, int32_t ___i, MethodInfo* method)
{
	{
		int32_t L_0 = ___i;
		float L_1 = Matrix4x4_get_Item_m2474(__this, L_0, 0, /*hidden argument*/&Matrix4x4_get_Item_m2474_MethodInfo);
		int32_t L_2 = ___i;
		float L_3 = Matrix4x4_get_Item_m2474(__this, L_2, 1, /*hidden argument*/&Matrix4x4_get_Item_m2474_MethodInfo);
		int32_t L_4 = ___i;
		float L_5 = Matrix4x4_get_Item_m2474(__this, L_4, 2, /*hidden argument*/&Matrix4x4_get_Item_m2474_MethodInfo);
		int32_t L_6 = ___i;
		float L_7 = Matrix4x4_get_Item_m2474(__this, L_6, 3, /*hidden argument*/&Matrix4x4_get_Item_m2474_MethodInfo);
		Vector4_t160  L_8 = {0};
		Vector4__ctor_m1511(&L_8, L_1, L_3, L_5, L_7, /*hidden argument*/&Vector4__ctor_m1511_MethodInfo);
		return L_8;
	}
}
// System.Void UnityEngine.Matrix4x4::SetColumn(System.Int32,UnityEngine.Vector4)
extern MethodInfo Matrix4x4_SetColumn_m2491_MethodInfo;
extern "C" void Matrix4x4_SetColumn_m2491 (Matrix4x4_t314 * __this, int32_t ___i, Vector4_t160  ___v, MethodInfo* method)
{
	{
		int32_t L_0 = ___i;
		float L_1 = ((&___v)->___x_1);
		Matrix4x4_set_Item_m2475(__this, 0, L_0, L_1, /*hidden argument*/&Matrix4x4_set_Item_m2475_MethodInfo);
		int32_t L_2 = ___i;
		float L_3 = ((&___v)->___y_2);
		Matrix4x4_set_Item_m2475(__this, 1, L_2, L_3, /*hidden argument*/&Matrix4x4_set_Item_m2475_MethodInfo);
		int32_t L_4 = ___i;
		float L_5 = ((&___v)->___z_3);
		Matrix4x4_set_Item_m2475(__this, 2, L_4, L_5, /*hidden argument*/&Matrix4x4_set_Item_m2475_MethodInfo);
		int32_t L_6 = ___i;
		float L_7 = ((&___v)->___w_4);
		Matrix4x4_set_Item_m2475(__this, 3, L_6, L_7, /*hidden argument*/&Matrix4x4_set_Item_m2475_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Matrix4x4::SetRow(System.Int32,UnityEngine.Vector4)
extern MethodInfo Matrix4x4_SetRow_m2492_MethodInfo;
extern "C" void Matrix4x4_SetRow_m2492 (Matrix4x4_t314 * __this, int32_t ___i, Vector4_t160  ___v, MethodInfo* method)
{
	{
		int32_t L_0 = ___i;
		float L_1 = ((&___v)->___x_1);
		Matrix4x4_set_Item_m2475(__this, L_0, 0, L_1, /*hidden argument*/&Matrix4x4_set_Item_m2475_MethodInfo);
		int32_t L_2 = ___i;
		float L_3 = ((&___v)->___y_2);
		Matrix4x4_set_Item_m2475(__this, L_2, 1, L_3, /*hidden argument*/&Matrix4x4_set_Item_m2475_MethodInfo);
		int32_t L_4 = ___i;
		float L_5 = ((&___v)->___z_3);
		Matrix4x4_set_Item_m2475(__this, L_4, 2, L_5, /*hidden argument*/&Matrix4x4_set_Item_m2475_MethodInfo);
		int32_t L_6 = ___i;
		float L_7 = ((&___v)->___w_4);
		Matrix4x4_set_Item_m2475(__this, L_6, 3, L_7, /*hidden argument*/&Matrix4x4_set_Item_m2475_MethodInfo);
		return;
	}
}
// UnityEngine.Vector3 UnityEngine.Matrix4x4::MultiplyPoint(UnityEngine.Vector3)
extern MethodInfo Matrix4x4_MultiplyPoint_m2493_MethodInfo;
extern "C" Vector3_t6  Matrix4x4_MultiplyPoint_m2493 (Matrix4x4_t314 * __this, Vector3_t6  ___v, MethodInfo* method)
{
	Vector3_t6  V_0 = {0};
	float V_1 = 0.0f;
	{
		float L_0 = (__this->___m00_0);
		float L_1 = ((&___v)->___x_1);
		float L_2 = (__this->___m01_4);
		float L_3 = ((&___v)->___y_2);
		float L_4 = (__this->___m02_8);
		float L_5 = ((&___v)->___z_3);
		float L_6 = (__this->___m03_12);
		(&V_0)->___x_1 = ((float)((float)((float)((float)((float)((float)((float)((float)L_0*(float)L_1))+(float)((float)((float)L_2*(float)L_3))))+(float)((float)((float)L_4*(float)L_5))))+(float)L_6));
		float L_7 = (__this->___m10_1);
		float L_8 = ((&___v)->___x_1);
		float L_9 = (__this->___m11_5);
		float L_10 = ((&___v)->___y_2);
		float L_11 = (__this->___m12_9);
		float L_12 = ((&___v)->___z_3);
		float L_13 = (__this->___m13_13);
		(&V_0)->___y_2 = ((float)((float)((float)((float)((float)((float)((float)((float)L_7*(float)L_8))+(float)((float)((float)L_9*(float)L_10))))+(float)((float)((float)L_11*(float)L_12))))+(float)L_13));
		float L_14 = (__this->___m20_2);
		float L_15 = ((&___v)->___x_1);
		float L_16 = (__this->___m21_6);
		float L_17 = ((&___v)->___y_2);
		float L_18 = (__this->___m22_10);
		float L_19 = ((&___v)->___z_3);
		float L_20 = (__this->___m23_14);
		(&V_0)->___z_3 = ((float)((float)((float)((float)((float)((float)((float)((float)L_14*(float)L_15))+(float)((float)((float)L_16*(float)L_17))))+(float)((float)((float)L_18*(float)L_19))))+(float)L_20));
		float L_21 = (__this->___m30_3);
		float L_22 = ((&___v)->___x_1);
		float L_23 = (__this->___m31_7);
		float L_24 = ((&___v)->___y_2);
		float L_25 = (__this->___m32_11);
		float L_26 = ((&___v)->___z_3);
		float L_27 = (__this->___m33_15);
		V_1 = ((float)((float)((float)((float)((float)((float)((float)((float)L_21*(float)L_22))+(float)((float)((float)L_23*(float)L_24))))+(float)((float)((float)L_25*(float)L_26))))+(float)L_27));
		float L_28 = V_1;
		V_1 = ((float)((float)(1.0f)/(float)L_28));
		Vector3_t6 * L_29 = (&V_0);
		float L_30 = (L_29->___x_1);
		float L_31 = V_1;
		L_29->___x_1 = ((float)((float)L_30*(float)L_31));
		Vector3_t6 * L_32 = (&V_0);
		float L_33 = (L_32->___y_2);
		float L_34 = V_1;
		L_32->___y_2 = ((float)((float)L_33*(float)L_34));
		Vector3_t6 * L_35 = (&V_0);
		float L_36 = (L_35->___z_3);
		float L_37 = V_1;
		L_35->___z_3 = ((float)((float)L_36*(float)L_37));
		Vector3_t6  L_38 = V_0;
		return L_38;
	}
}
// UnityEngine.Vector3 UnityEngine.Matrix4x4::MultiplyPoint3x4(UnityEngine.Vector3)
extern MethodInfo Matrix4x4_MultiplyPoint3x4_m1779_MethodInfo;
extern "C" Vector3_t6  Matrix4x4_MultiplyPoint3x4_m1779 (Matrix4x4_t314 * __this, Vector3_t6  ___v, MethodInfo* method)
{
	Vector3_t6  V_0 = {0};
	{
		float L_0 = (__this->___m00_0);
		float L_1 = ((&___v)->___x_1);
		float L_2 = (__this->___m01_4);
		float L_3 = ((&___v)->___y_2);
		float L_4 = (__this->___m02_8);
		float L_5 = ((&___v)->___z_3);
		float L_6 = (__this->___m03_12);
		(&V_0)->___x_1 = ((float)((float)((float)((float)((float)((float)((float)((float)L_0*(float)L_1))+(float)((float)((float)L_2*(float)L_3))))+(float)((float)((float)L_4*(float)L_5))))+(float)L_6));
		float L_7 = (__this->___m10_1);
		float L_8 = ((&___v)->___x_1);
		float L_9 = (__this->___m11_5);
		float L_10 = ((&___v)->___y_2);
		float L_11 = (__this->___m12_9);
		float L_12 = ((&___v)->___z_3);
		float L_13 = (__this->___m13_13);
		(&V_0)->___y_2 = ((float)((float)((float)((float)((float)((float)((float)((float)L_7*(float)L_8))+(float)((float)((float)L_9*(float)L_10))))+(float)((float)((float)L_11*(float)L_12))))+(float)L_13));
		float L_14 = (__this->___m20_2);
		float L_15 = ((&___v)->___x_1);
		float L_16 = (__this->___m21_6);
		float L_17 = ((&___v)->___y_2);
		float L_18 = (__this->___m22_10);
		float L_19 = ((&___v)->___z_3);
		float L_20 = (__this->___m23_14);
		(&V_0)->___z_3 = ((float)((float)((float)((float)((float)((float)((float)((float)L_14*(float)L_15))+(float)((float)((float)L_16*(float)L_17))))+(float)((float)((float)L_18*(float)L_19))))+(float)L_20));
		Vector3_t6  L_21 = V_0;
		return L_21;
	}
}
// UnityEngine.Vector3 UnityEngine.Matrix4x4::MultiplyVector(UnityEngine.Vector3)
extern MethodInfo Matrix4x4_MultiplyVector_m2494_MethodInfo;
extern "C" Vector3_t6  Matrix4x4_MultiplyVector_m2494 (Matrix4x4_t314 * __this, Vector3_t6  ___v, MethodInfo* method)
{
	Vector3_t6  V_0 = {0};
	{
		float L_0 = (__this->___m00_0);
		float L_1 = ((&___v)->___x_1);
		float L_2 = (__this->___m01_4);
		float L_3 = ((&___v)->___y_2);
		float L_4 = (__this->___m02_8);
		float L_5 = ((&___v)->___z_3);
		(&V_0)->___x_1 = ((float)((float)((float)((float)((float)((float)L_0*(float)L_1))+(float)((float)((float)L_2*(float)L_3))))+(float)((float)((float)L_4*(float)L_5))));
		float L_6 = (__this->___m10_1);
		float L_7 = ((&___v)->___x_1);
		float L_8 = (__this->___m11_5);
		float L_9 = ((&___v)->___y_2);
		float L_10 = (__this->___m12_9);
		float L_11 = ((&___v)->___z_3);
		(&V_0)->___y_2 = ((float)((float)((float)((float)((float)((float)L_6*(float)L_7))+(float)((float)((float)L_8*(float)L_9))))+(float)((float)((float)L_10*(float)L_11))));
		float L_12 = (__this->___m20_2);
		float L_13 = ((&___v)->___x_1);
		float L_14 = (__this->___m21_6);
		float L_15 = ((&___v)->___y_2);
		float L_16 = (__this->___m22_10);
		float L_17 = ((&___v)->___z_3);
		(&V_0)->___z_3 = ((float)((float)((float)((float)((float)((float)L_12*(float)L_13))+(float)((float)((float)L_14*(float)L_15))))+(float)((float)((float)L_16*(float)L_17))));
		Vector3_t6  L_18 = V_0;
		return L_18;
	}
}
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::Scale(UnityEngine.Vector3)
extern MethodInfo Matrix4x4_Scale_m2495_MethodInfo;
extern "C" Matrix4x4_t314  Matrix4x4_Scale_m2495 (Object_t * __this /* static, unused */, Vector3_t6  ___v, MethodInfo* method)
{
	Matrix4x4_t314  V_0 = {0};
	{
		Initobj (InitializedTypeInfo(&Matrix4x4_t314_il2cpp_TypeInfo), (&V_0));
		float L_0 = ((&___v)->___x_1);
		(&V_0)->___m00_0 = L_0;
		(&V_0)->___m01_4 = (0.0f);
		(&V_0)->___m02_8 = (0.0f);
		(&V_0)->___m03_12 = (0.0f);
		(&V_0)->___m10_1 = (0.0f);
		float L_1 = ((&___v)->___y_2);
		(&V_0)->___m11_5 = L_1;
		(&V_0)->___m12_9 = (0.0f);
		(&V_0)->___m13_13 = (0.0f);
		(&V_0)->___m20_2 = (0.0f);
		(&V_0)->___m21_6 = (0.0f);
		float L_2 = ((&___v)->___z_3);
		(&V_0)->___m22_10 = L_2;
		(&V_0)->___m23_14 = (0.0f);
		(&V_0)->___m30_3 = (0.0f);
		(&V_0)->___m31_7 = (0.0f);
		(&V_0)->___m32_11 = (0.0f);
		(&V_0)->___m33_15 = (1.0f);
		Matrix4x4_t314  L_3 = V_0;
		return L_3;
	}
}
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::get_zero()
extern MethodInfo Matrix4x4_get_zero_m2496_MethodInfo;
extern "C" Matrix4x4_t314  Matrix4x4_get_zero_m2496 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	Matrix4x4_t314  V_0 = {0};
	{
		Initobj (InitializedTypeInfo(&Matrix4x4_t314_il2cpp_TypeInfo), (&V_0));
		(&V_0)->___m00_0 = (0.0f);
		(&V_0)->___m01_4 = (0.0f);
		(&V_0)->___m02_8 = (0.0f);
		(&V_0)->___m03_12 = (0.0f);
		(&V_0)->___m10_1 = (0.0f);
		(&V_0)->___m11_5 = (0.0f);
		(&V_0)->___m12_9 = (0.0f);
		(&V_0)->___m13_13 = (0.0f);
		(&V_0)->___m20_2 = (0.0f);
		(&V_0)->___m21_6 = (0.0f);
		(&V_0)->___m22_10 = (0.0f);
		(&V_0)->___m23_14 = (0.0f);
		(&V_0)->___m30_3 = (0.0f);
		(&V_0)->___m31_7 = (0.0f);
		(&V_0)->___m32_11 = (0.0f);
		(&V_0)->___m33_15 = (0.0f);
		Matrix4x4_t314  L_0 = V_0;
		return L_0;
	}
}
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::get_identity()
extern MethodInfo Matrix4x4_get_identity_m2497_MethodInfo;
extern "C" Matrix4x4_t314  Matrix4x4_get_identity_m2497 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	Matrix4x4_t314  V_0 = {0};
	{
		Initobj (InitializedTypeInfo(&Matrix4x4_t314_il2cpp_TypeInfo), (&V_0));
		(&V_0)->___m00_0 = (1.0f);
		(&V_0)->___m01_4 = (0.0f);
		(&V_0)->___m02_8 = (0.0f);
		(&V_0)->___m03_12 = (0.0f);
		(&V_0)->___m10_1 = (0.0f);
		(&V_0)->___m11_5 = (1.0f);
		(&V_0)->___m12_9 = (0.0f);
		(&V_0)->___m13_13 = (0.0f);
		(&V_0)->___m20_2 = (0.0f);
		(&V_0)->___m21_6 = (0.0f);
		(&V_0)->___m22_10 = (1.0f);
		(&V_0)->___m23_14 = (0.0f);
		(&V_0)->___m30_3 = (0.0f);
		(&V_0)->___m31_7 = (0.0f);
		(&V_0)->___m32_11 = (0.0f);
		(&V_0)->___m33_15 = (1.0f);
		Matrix4x4_t314  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Matrix4x4::SetTRS(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3)
extern MethodInfo Matrix4x4_SetTRS_m2498_MethodInfo;
extern "C" void Matrix4x4_SetTRS_m2498 (Matrix4x4_t314 * __this, Vector3_t6  ___pos, Quaternion_t19  ___q, Vector3_t6  ___s, MethodInfo* method)
{
	{
		Vector3_t6  L_0 = ___pos;
		Quaternion_t19  L_1 = ___q;
		Vector3_t6  L_2 = ___s;
		Matrix4x4_t314  L_3 = Matrix4x4_TRS_m2499(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/&Matrix4x4_TRS_m2499_MethodInfo);
		*__this = L_3;
		return;
	}
}
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::TRS(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3)
extern "C" Matrix4x4_t314  Matrix4x4_TRS_m2499 (Object_t * __this /* static, unused */, Vector3_t6  ___pos, Quaternion_t19  ___q, Vector3_t6  ___s, MethodInfo* method)
{
	{
		Matrix4x4_t314  L_0 = Matrix4x4_INTERNAL_CALL_TRS_m2500(NULL /*static, unused*/, (&___pos), (&___q), (&___s), /*hidden argument*/&Matrix4x4_INTERNAL_CALL_TRS_m2500_MethodInfo);
		return L_0;
	}
}
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::INTERNAL_CALL_TRS(UnityEngine.Vector3&,UnityEngine.Quaternion&,UnityEngine.Vector3&)
extern "C" Matrix4x4_t314  Matrix4x4_INTERNAL_CALL_TRS_m2500 (Object_t * __this /* static, unused */, Vector3_t6 * ___pos, Quaternion_t19 * ___q, Vector3_t6 * ___s, MethodInfo* method)
{
	typedef Matrix4x4_t314  (*Matrix4x4_INTERNAL_CALL_TRS_m2500_ftn) (Vector3_t6 *, Quaternion_t19 *, Vector3_t6 *);
	static Matrix4x4_INTERNAL_CALL_TRS_m2500_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Matrix4x4_INTERNAL_CALL_TRS_m2500_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Matrix4x4::INTERNAL_CALL_TRS(UnityEngine.Vector3&,UnityEngine.Quaternion&,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(___pos, ___q, ___s);
}
// System.String UnityEngine.Matrix4x4::ToString()
extern MethodInfo Matrix4x4_ToString_m2501_MethodInfo;
extern TypeInfo* ObjectU5BU5D_t269_il2cpp_TypeInfo_var;
extern "C" String_t* Matrix4x4_ToString_m2501 (Matrix4x4_t314 * __this, MethodInfo* method)
{
	static bool Matrix4x4_ToString_m2501_init;
	if (!Matrix4x4_ToString_m2501_init)
	{
		ObjectU5BU5D_t269_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t269_0_0_0);
		Matrix4x4_ToString_m2501_init = true;
	}
	{
		ObjectU5BU5D_t269* L_0 = ((ObjectU5BU5D_t269*)SZArrayNew(ObjectU5BU5D_t269_il2cpp_TypeInfo_var, ((int32_t)16)));
		float L_1 = (__this->___m00_0);
		float L_2 = L_1;
		Object_t * L_3 = Box(InitializedTypeInfo(&Single_t23_il2cpp_TypeInfo), &L_2);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_3;
		ObjectU5BU5D_t269* L_4 = L_0;
		float L_5 = (__this->___m01_4);
		float L_6 = L_5;
		Object_t * L_7 = Box(InitializedTypeInfo(&Single_t23_il2cpp_TypeInfo), &L_6);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 1)) = (Object_t *)L_7;
		ObjectU5BU5D_t269* L_8 = L_4;
		float L_9 = (__this->___m02_8);
		float L_10 = L_9;
		Object_t * L_11 = Box(InitializedTypeInfo(&Single_t23_il2cpp_TypeInfo), &L_10);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 2);
		ArrayElementTypeCheck (L_8, L_11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 2)) = (Object_t *)L_11;
		ObjectU5BU5D_t269* L_12 = L_8;
		float L_13 = (__this->___m03_12);
		float L_14 = L_13;
		Object_t * L_15 = Box(InitializedTypeInfo(&Single_t23_il2cpp_TypeInfo), &L_14);
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 3);
		ArrayElementTypeCheck (L_12, L_15);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_12, 3)) = (Object_t *)L_15;
		ObjectU5BU5D_t269* L_16 = L_12;
		float L_17 = (__this->___m10_1);
		float L_18 = L_17;
		Object_t * L_19 = Box(InitializedTypeInfo(&Single_t23_il2cpp_TypeInfo), &L_18);
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, 4);
		ArrayElementTypeCheck (L_16, L_19);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_16, 4)) = (Object_t *)L_19;
		ObjectU5BU5D_t269* L_20 = L_16;
		float L_21 = (__this->___m11_5);
		float L_22 = L_21;
		Object_t * L_23 = Box(InitializedTypeInfo(&Single_t23_il2cpp_TypeInfo), &L_22);
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, 5);
		ArrayElementTypeCheck (L_20, L_23);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_20, 5)) = (Object_t *)L_23;
		ObjectU5BU5D_t269* L_24 = L_20;
		float L_25 = (__this->___m12_9);
		float L_26 = L_25;
		Object_t * L_27 = Box(InitializedTypeInfo(&Single_t23_il2cpp_TypeInfo), &L_26);
		NullCheck(L_24);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_24, 6);
		ArrayElementTypeCheck (L_24, L_27);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_24, 6)) = (Object_t *)L_27;
		ObjectU5BU5D_t269* L_28 = L_24;
		float L_29 = (__this->___m13_13);
		float L_30 = L_29;
		Object_t * L_31 = Box(InitializedTypeInfo(&Single_t23_il2cpp_TypeInfo), &L_30);
		NullCheck(L_28);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_28, 7);
		ArrayElementTypeCheck (L_28, L_31);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_28, 7)) = (Object_t *)L_31;
		ObjectU5BU5D_t269* L_32 = L_28;
		float L_33 = (__this->___m20_2);
		float L_34 = L_33;
		Object_t * L_35 = Box(InitializedTypeInfo(&Single_t23_il2cpp_TypeInfo), &L_34);
		NullCheck(L_32);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_32, 8);
		ArrayElementTypeCheck (L_32, L_35);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_32, 8)) = (Object_t *)L_35;
		ObjectU5BU5D_t269* L_36 = L_32;
		float L_37 = (__this->___m21_6);
		float L_38 = L_37;
		Object_t * L_39 = Box(InitializedTypeInfo(&Single_t23_il2cpp_TypeInfo), &L_38);
		NullCheck(L_36);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_36, ((int32_t)9));
		ArrayElementTypeCheck (L_36, L_39);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_36, ((int32_t)9))) = (Object_t *)L_39;
		ObjectU5BU5D_t269* L_40 = L_36;
		float L_41 = (__this->___m22_10);
		float L_42 = L_41;
		Object_t * L_43 = Box(InitializedTypeInfo(&Single_t23_il2cpp_TypeInfo), &L_42);
		NullCheck(L_40);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_40, ((int32_t)10));
		ArrayElementTypeCheck (L_40, L_43);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_40, ((int32_t)10))) = (Object_t *)L_43;
		ObjectU5BU5D_t269* L_44 = L_40;
		float L_45 = (__this->___m23_14);
		float L_46 = L_45;
		Object_t * L_47 = Box(InitializedTypeInfo(&Single_t23_il2cpp_TypeInfo), &L_46);
		NullCheck(L_44);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_44, ((int32_t)11));
		ArrayElementTypeCheck (L_44, L_47);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_44, ((int32_t)11))) = (Object_t *)L_47;
		ObjectU5BU5D_t269* L_48 = L_44;
		float L_49 = (__this->___m30_3);
		float L_50 = L_49;
		Object_t * L_51 = Box(InitializedTypeInfo(&Single_t23_il2cpp_TypeInfo), &L_50);
		NullCheck(L_48);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_48, ((int32_t)12));
		ArrayElementTypeCheck (L_48, L_51);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_48, ((int32_t)12))) = (Object_t *)L_51;
		ObjectU5BU5D_t269* L_52 = L_48;
		float L_53 = (__this->___m31_7);
		float L_54 = L_53;
		Object_t * L_55 = Box(InitializedTypeInfo(&Single_t23_il2cpp_TypeInfo), &L_54);
		NullCheck(L_52);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_52, ((int32_t)13));
		ArrayElementTypeCheck (L_52, L_55);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_52, ((int32_t)13))) = (Object_t *)L_55;
		ObjectU5BU5D_t269* L_56 = L_52;
		float L_57 = (__this->___m32_11);
		float L_58 = L_57;
		Object_t * L_59 = Box(InitializedTypeInfo(&Single_t23_il2cpp_TypeInfo), &L_58);
		NullCheck(L_56);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_56, ((int32_t)14));
		ArrayElementTypeCheck (L_56, L_59);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_56, ((int32_t)14))) = (Object_t *)L_59;
		ObjectU5BU5D_t269* L_60 = L_56;
		float L_61 = (__this->___m33_15);
		float L_62 = L_61;
		Object_t * L_63 = Box(InitializedTypeInfo(&Single_t23_il2cpp_TypeInfo), &L_62);
		NullCheck(L_60);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_60, ((int32_t)15));
		ArrayElementTypeCheck (L_60, L_63);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_60, ((int32_t)15))) = (Object_t *)L_63;
		String_t* L_64 = UnityString_Format_m2626(NULL /*static, unused*/, (String_t*) &_stringLiteral145, L_60, /*hidden argument*/&UnityString_Format_m2626_MethodInfo);
		return L_64;
	}
}
// System.String UnityEngine.Matrix4x4::ToString(System.String)
extern MethodInfo Matrix4x4_ToString_m2502_MethodInfo;
extern TypeInfo* ObjectU5BU5D_t269_il2cpp_TypeInfo_var;
extern "C" String_t* Matrix4x4_ToString_m2502 (Matrix4x4_t314 * __this, String_t* ___format, MethodInfo* method)
{
	static bool Matrix4x4_ToString_m2502_init;
	if (!Matrix4x4_ToString_m2502_init)
	{
		ObjectU5BU5D_t269_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t269_0_0_0);
		Matrix4x4_ToString_m2502_init = true;
	}
	{
		ObjectU5BU5D_t269* L_0 = ((ObjectU5BU5D_t269*)SZArrayNew(ObjectU5BU5D_t269_il2cpp_TypeInfo_var, ((int32_t)16)));
		float* L_1 = &(__this->___m00_0);
		String_t* L_2 = ___format;
		String_t* L_3 = Single_ToString_m3360(L_1, L_2, /*hidden argument*/&Single_ToString_m3360_MethodInfo);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_3;
		ObjectU5BU5D_t269* L_4 = L_0;
		float* L_5 = &(__this->___m01_4);
		String_t* L_6 = ___format;
		String_t* L_7 = Single_ToString_m3360(L_5, L_6, /*hidden argument*/&Single_ToString_m3360_MethodInfo);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 1)) = (Object_t *)L_7;
		ObjectU5BU5D_t269* L_8 = L_4;
		float* L_9 = &(__this->___m02_8);
		String_t* L_10 = ___format;
		String_t* L_11 = Single_ToString_m3360(L_9, L_10, /*hidden argument*/&Single_ToString_m3360_MethodInfo);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 2);
		ArrayElementTypeCheck (L_8, L_11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 2)) = (Object_t *)L_11;
		ObjectU5BU5D_t269* L_12 = L_8;
		float* L_13 = &(__this->___m03_12);
		String_t* L_14 = ___format;
		String_t* L_15 = Single_ToString_m3360(L_13, L_14, /*hidden argument*/&Single_ToString_m3360_MethodInfo);
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 3);
		ArrayElementTypeCheck (L_12, L_15);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_12, 3)) = (Object_t *)L_15;
		ObjectU5BU5D_t269* L_16 = L_12;
		float* L_17 = &(__this->___m10_1);
		String_t* L_18 = ___format;
		String_t* L_19 = Single_ToString_m3360(L_17, L_18, /*hidden argument*/&Single_ToString_m3360_MethodInfo);
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, 4);
		ArrayElementTypeCheck (L_16, L_19);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_16, 4)) = (Object_t *)L_19;
		ObjectU5BU5D_t269* L_20 = L_16;
		float* L_21 = &(__this->___m11_5);
		String_t* L_22 = ___format;
		String_t* L_23 = Single_ToString_m3360(L_21, L_22, /*hidden argument*/&Single_ToString_m3360_MethodInfo);
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, 5);
		ArrayElementTypeCheck (L_20, L_23);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_20, 5)) = (Object_t *)L_23;
		ObjectU5BU5D_t269* L_24 = L_20;
		float* L_25 = &(__this->___m12_9);
		String_t* L_26 = ___format;
		String_t* L_27 = Single_ToString_m3360(L_25, L_26, /*hidden argument*/&Single_ToString_m3360_MethodInfo);
		NullCheck(L_24);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_24, 6);
		ArrayElementTypeCheck (L_24, L_27);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_24, 6)) = (Object_t *)L_27;
		ObjectU5BU5D_t269* L_28 = L_24;
		float* L_29 = &(__this->___m13_13);
		String_t* L_30 = ___format;
		String_t* L_31 = Single_ToString_m3360(L_29, L_30, /*hidden argument*/&Single_ToString_m3360_MethodInfo);
		NullCheck(L_28);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_28, 7);
		ArrayElementTypeCheck (L_28, L_31);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_28, 7)) = (Object_t *)L_31;
		ObjectU5BU5D_t269* L_32 = L_28;
		float* L_33 = &(__this->___m20_2);
		String_t* L_34 = ___format;
		String_t* L_35 = Single_ToString_m3360(L_33, L_34, /*hidden argument*/&Single_ToString_m3360_MethodInfo);
		NullCheck(L_32);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_32, 8);
		ArrayElementTypeCheck (L_32, L_35);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_32, 8)) = (Object_t *)L_35;
		ObjectU5BU5D_t269* L_36 = L_32;
		float* L_37 = &(__this->___m21_6);
		String_t* L_38 = ___format;
		String_t* L_39 = Single_ToString_m3360(L_37, L_38, /*hidden argument*/&Single_ToString_m3360_MethodInfo);
		NullCheck(L_36);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_36, ((int32_t)9));
		ArrayElementTypeCheck (L_36, L_39);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_36, ((int32_t)9))) = (Object_t *)L_39;
		ObjectU5BU5D_t269* L_40 = L_36;
		float* L_41 = &(__this->___m22_10);
		String_t* L_42 = ___format;
		String_t* L_43 = Single_ToString_m3360(L_41, L_42, /*hidden argument*/&Single_ToString_m3360_MethodInfo);
		NullCheck(L_40);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_40, ((int32_t)10));
		ArrayElementTypeCheck (L_40, L_43);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_40, ((int32_t)10))) = (Object_t *)L_43;
		ObjectU5BU5D_t269* L_44 = L_40;
		float* L_45 = &(__this->___m23_14);
		String_t* L_46 = ___format;
		String_t* L_47 = Single_ToString_m3360(L_45, L_46, /*hidden argument*/&Single_ToString_m3360_MethodInfo);
		NullCheck(L_44);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_44, ((int32_t)11));
		ArrayElementTypeCheck (L_44, L_47);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_44, ((int32_t)11))) = (Object_t *)L_47;
		ObjectU5BU5D_t269* L_48 = L_44;
		float* L_49 = &(__this->___m30_3);
		String_t* L_50 = ___format;
		String_t* L_51 = Single_ToString_m3360(L_49, L_50, /*hidden argument*/&Single_ToString_m3360_MethodInfo);
		NullCheck(L_48);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_48, ((int32_t)12));
		ArrayElementTypeCheck (L_48, L_51);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_48, ((int32_t)12))) = (Object_t *)L_51;
		ObjectU5BU5D_t269* L_52 = L_48;
		float* L_53 = &(__this->___m31_7);
		String_t* L_54 = ___format;
		String_t* L_55 = Single_ToString_m3360(L_53, L_54, /*hidden argument*/&Single_ToString_m3360_MethodInfo);
		NullCheck(L_52);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_52, ((int32_t)13));
		ArrayElementTypeCheck (L_52, L_55);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_52, ((int32_t)13))) = (Object_t *)L_55;
		ObjectU5BU5D_t269* L_56 = L_52;
		float* L_57 = &(__this->___m32_11);
		String_t* L_58 = ___format;
		String_t* L_59 = Single_ToString_m3360(L_57, L_58, /*hidden argument*/&Single_ToString_m3360_MethodInfo);
		NullCheck(L_56);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_56, ((int32_t)14));
		ArrayElementTypeCheck (L_56, L_59);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_56, ((int32_t)14))) = (Object_t *)L_59;
		ObjectU5BU5D_t269* L_60 = L_56;
		float* L_61 = &(__this->___m33_15);
		String_t* L_62 = ___format;
		String_t* L_63 = Single_ToString_m3360(L_61, L_62, /*hidden argument*/&Single_ToString_m3360_MethodInfo);
		NullCheck(L_60);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_60, ((int32_t)15));
		ArrayElementTypeCheck (L_60, L_63);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_60, ((int32_t)15))) = (Object_t *)L_63;
		String_t* L_64 = UnityString_Format_m2626(NULL /*static, unused*/, (String_t*) &_stringLiteral146, L_60, /*hidden argument*/&UnityString_Format_m2626_MethodInfo);
		return L_64;
	}
}
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::Ortho(System.Single,System.Single,System.Single,System.Single,System.Single,System.Single)
extern MethodInfo Matrix4x4_Ortho_m2503_MethodInfo;
extern "C" Matrix4x4_t314  Matrix4x4_Ortho_m2503 (Object_t * __this /* static, unused */, float ___left, float ___right, float ___bottom, float ___top, float ___zNear, float ___zFar, MethodInfo* method)
{
	typedef Matrix4x4_t314  (*Matrix4x4_Ortho_m2503_ftn) (float, float, float, float, float, float);
	static Matrix4x4_Ortho_m2503_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Matrix4x4_Ortho_m2503_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Matrix4x4::Ortho(System.Single,System.Single,System.Single,System.Single,System.Single,System.Single)");
	return _il2cpp_icall_func(___left, ___right, ___bottom, ___top, ___zNear, ___zFar);
}
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::Perspective(System.Single,System.Single,System.Single,System.Single)
extern MethodInfo Matrix4x4_Perspective_m2504_MethodInfo;
extern "C" Matrix4x4_t314  Matrix4x4_Perspective_m2504 (Object_t * __this /* static, unused */, float ___fov, float ___aspect, float ___zNear, float ___zFar, MethodInfo* method)
{
	typedef Matrix4x4_t314  (*Matrix4x4_Perspective_m2504_ftn) (float, float, float, float);
	static Matrix4x4_Perspective_m2504_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Matrix4x4_Perspective_m2504_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Matrix4x4::Perspective(System.Single,System.Single,System.Single,System.Single)");
	return _il2cpp_icall_func(___fov, ___aspect, ___zNear, ___zFar);
}
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::op_Multiply(UnityEngine.Matrix4x4,UnityEngine.Matrix4x4)
extern MethodInfo Matrix4x4_op_Multiply_m2505_MethodInfo;
extern "C" Matrix4x4_t314  Matrix4x4_op_Multiply_m2505 (Object_t * __this /* static, unused */, Matrix4x4_t314  ___lhs, Matrix4x4_t314  ___rhs, MethodInfo* method)
{
	Matrix4x4_t314  V_0 = {0};
	{
		Initobj (InitializedTypeInfo(&Matrix4x4_t314_il2cpp_TypeInfo), (&V_0));
		float L_0 = ((&___lhs)->___m00_0);
		float L_1 = ((&___rhs)->___m00_0);
		float L_2 = ((&___lhs)->___m01_4);
		float L_3 = ((&___rhs)->___m10_1);
		float L_4 = ((&___lhs)->___m02_8);
		float L_5 = ((&___rhs)->___m20_2);
		float L_6 = ((&___lhs)->___m03_12);
		float L_7 = ((&___rhs)->___m30_3);
		(&V_0)->___m00_0 = ((float)((float)((float)((float)((float)((float)((float)((float)L_0*(float)L_1))+(float)((float)((float)L_2*(float)L_3))))+(float)((float)((float)L_4*(float)L_5))))+(float)((float)((float)L_6*(float)L_7))));
		float L_8 = ((&___lhs)->___m00_0);
		float L_9 = ((&___rhs)->___m01_4);
		float L_10 = ((&___lhs)->___m01_4);
		float L_11 = ((&___rhs)->___m11_5);
		float L_12 = ((&___lhs)->___m02_8);
		float L_13 = ((&___rhs)->___m21_6);
		float L_14 = ((&___lhs)->___m03_12);
		float L_15 = ((&___rhs)->___m31_7);
		(&V_0)->___m01_4 = ((float)((float)((float)((float)((float)((float)((float)((float)L_8*(float)L_9))+(float)((float)((float)L_10*(float)L_11))))+(float)((float)((float)L_12*(float)L_13))))+(float)((float)((float)L_14*(float)L_15))));
		float L_16 = ((&___lhs)->___m00_0);
		float L_17 = ((&___rhs)->___m02_8);
		float L_18 = ((&___lhs)->___m01_4);
		float L_19 = ((&___rhs)->___m12_9);
		float L_20 = ((&___lhs)->___m02_8);
		float L_21 = ((&___rhs)->___m22_10);
		float L_22 = ((&___lhs)->___m03_12);
		float L_23 = ((&___rhs)->___m32_11);
		(&V_0)->___m02_8 = ((float)((float)((float)((float)((float)((float)((float)((float)L_16*(float)L_17))+(float)((float)((float)L_18*(float)L_19))))+(float)((float)((float)L_20*(float)L_21))))+(float)((float)((float)L_22*(float)L_23))));
		float L_24 = ((&___lhs)->___m00_0);
		float L_25 = ((&___rhs)->___m03_12);
		float L_26 = ((&___lhs)->___m01_4);
		float L_27 = ((&___rhs)->___m13_13);
		float L_28 = ((&___lhs)->___m02_8);
		float L_29 = ((&___rhs)->___m23_14);
		float L_30 = ((&___lhs)->___m03_12);
		float L_31 = ((&___rhs)->___m33_15);
		(&V_0)->___m03_12 = ((float)((float)((float)((float)((float)((float)((float)((float)L_24*(float)L_25))+(float)((float)((float)L_26*(float)L_27))))+(float)((float)((float)L_28*(float)L_29))))+(float)((float)((float)L_30*(float)L_31))));
		float L_32 = ((&___lhs)->___m10_1);
		float L_33 = ((&___rhs)->___m00_0);
		float L_34 = ((&___lhs)->___m11_5);
		float L_35 = ((&___rhs)->___m10_1);
		float L_36 = ((&___lhs)->___m12_9);
		float L_37 = ((&___rhs)->___m20_2);
		float L_38 = ((&___lhs)->___m13_13);
		float L_39 = ((&___rhs)->___m30_3);
		(&V_0)->___m10_1 = ((float)((float)((float)((float)((float)((float)((float)((float)L_32*(float)L_33))+(float)((float)((float)L_34*(float)L_35))))+(float)((float)((float)L_36*(float)L_37))))+(float)((float)((float)L_38*(float)L_39))));
		float L_40 = ((&___lhs)->___m10_1);
		float L_41 = ((&___rhs)->___m01_4);
		float L_42 = ((&___lhs)->___m11_5);
		float L_43 = ((&___rhs)->___m11_5);
		float L_44 = ((&___lhs)->___m12_9);
		float L_45 = ((&___rhs)->___m21_6);
		float L_46 = ((&___lhs)->___m13_13);
		float L_47 = ((&___rhs)->___m31_7);
		(&V_0)->___m11_5 = ((float)((float)((float)((float)((float)((float)((float)((float)L_40*(float)L_41))+(float)((float)((float)L_42*(float)L_43))))+(float)((float)((float)L_44*(float)L_45))))+(float)((float)((float)L_46*(float)L_47))));
		float L_48 = ((&___lhs)->___m10_1);
		float L_49 = ((&___rhs)->___m02_8);
		float L_50 = ((&___lhs)->___m11_5);
		float L_51 = ((&___rhs)->___m12_9);
		float L_52 = ((&___lhs)->___m12_9);
		float L_53 = ((&___rhs)->___m22_10);
		float L_54 = ((&___lhs)->___m13_13);
		float L_55 = ((&___rhs)->___m32_11);
		(&V_0)->___m12_9 = ((float)((float)((float)((float)((float)((float)((float)((float)L_48*(float)L_49))+(float)((float)((float)L_50*(float)L_51))))+(float)((float)((float)L_52*(float)L_53))))+(float)((float)((float)L_54*(float)L_55))));
		float L_56 = ((&___lhs)->___m10_1);
		float L_57 = ((&___rhs)->___m03_12);
		float L_58 = ((&___lhs)->___m11_5);
		float L_59 = ((&___rhs)->___m13_13);
		float L_60 = ((&___lhs)->___m12_9);
		float L_61 = ((&___rhs)->___m23_14);
		float L_62 = ((&___lhs)->___m13_13);
		float L_63 = ((&___rhs)->___m33_15);
		(&V_0)->___m13_13 = ((float)((float)((float)((float)((float)((float)((float)((float)L_56*(float)L_57))+(float)((float)((float)L_58*(float)L_59))))+(float)((float)((float)L_60*(float)L_61))))+(float)((float)((float)L_62*(float)L_63))));
		float L_64 = ((&___lhs)->___m20_2);
		float L_65 = ((&___rhs)->___m00_0);
		float L_66 = ((&___lhs)->___m21_6);
		float L_67 = ((&___rhs)->___m10_1);
		float L_68 = ((&___lhs)->___m22_10);
		float L_69 = ((&___rhs)->___m20_2);
		float L_70 = ((&___lhs)->___m23_14);
		float L_71 = ((&___rhs)->___m30_3);
		(&V_0)->___m20_2 = ((float)((float)((float)((float)((float)((float)((float)((float)L_64*(float)L_65))+(float)((float)((float)L_66*(float)L_67))))+(float)((float)((float)L_68*(float)L_69))))+(float)((float)((float)L_70*(float)L_71))));
		float L_72 = ((&___lhs)->___m20_2);
		float L_73 = ((&___rhs)->___m01_4);
		float L_74 = ((&___lhs)->___m21_6);
		float L_75 = ((&___rhs)->___m11_5);
		float L_76 = ((&___lhs)->___m22_10);
		float L_77 = ((&___rhs)->___m21_6);
		float L_78 = ((&___lhs)->___m23_14);
		float L_79 = ((&___rhs)->___m31_7);
		(&V_0)->___m21_6 = ((float)((float)((float)((float)((float)((float)((float)((float)L_72*(float)L_73))+(float)((float)((float)L_74*(float)L_75))))+(float)((float)((float)L_76*(float)L_77))))+(float)((float)((float)L_78*(float)L_79))));
		float L_80 = ((&___lhs)->___m20_2);
		float L_81 = ((&___rhs)->___m02_8);
		float L_82 = ((&___lhs)->___m21_6);
		float L_83 = ((&___rhs)->___m12_9);
		float L_84 = ((&___lhs)->___m22_10);
		float L_85 = ((&___rhs)->___m22_10);
		float L_86 = ((&___lhs)->___m23_14);
		float L_87 = ((&___rhs)->___m32_11);
		(&V_0)->___m22_10 = ((float)((float)((float)((float)((float)((float)((float)((float)L_80*(float)L_81))+(float)((float)((float)L_82*(float)L_83))))+(float)((float)((float)L_84*(float)L_85))))+(float)((float)((float)L_86*(float)L_87))));
		float L_88 = ((&___lhs)->___m20_2);
		float L_89 = ((&___rhs)->___m03_12);
		float L_90 = ((&___lhs)->___m21_6);
		float L_91 = ((&___rhs)->___m13_13);
		float L_92 = ((&___lhs)->___m22_10);
		float L_93 = ((&___rhs)->___m23_14);
		float L_94 = ((&___lhs)->___m23_14);
		float L_95 = ((&___rhs)->___m33_15);
		(&V_0)->___m23_14 = ((float)((float)((float)((float)((float)((float)((float)((float)L_88*(float)L_89))+(float)((float)((float)L_90*(float)L_91))))+(float)((float)((float)L_92*(float)L_93))))+(float)((float)((float)L_94*(float)L_95))));
		float L_96 = ((&___lhs)->___m30_3);
		float L_97 = ((&___rhs)->___m00_0);
		float L_98 = ((&___lhs)->___m31_7);
		float L_99 = ((&___rhs)->___m10_1);
		float L_100 = ((&___lhs)->___m32_11);
		float L_101 = ((&___rhs)->___m20_2);
		float L_102 = ((&___lhs)->___m33_15);
		float L_103 = ((&___rhs)->___m30_3);
		(&V_0)->___m30_3 = ((float)((float)((float)((float)((float)((float)((float)((float)L_96*(float)L_97))+(float)((float)((float)L_98*(float)L_99))))+(float)((float)((float)L_100*(float)L_101))))+(float)((float)((float)L_102*(float)L_103))));
		float L_104 = ((&___lhs)->___m30_3);
		float L_105 = ((&___rhs)->___m01_4);
		float L_106 = ((&___lhs)->___m31_7);
		float L_107 = ((&___rhs)->___m11_5);
		float L_108 = ((&___lhs)->___m32_11);
		float L_109 = ((&___rhs)->___m21_6);
		float L_110 = ((&___lhs)->___m33_15);
		float L_111 = ((&___rhs)->___m31_7);
		(&V_0)->___m31_7 = ((float)((float)((float)((float)((float)((float)((float)((float)L_104*(float)L_105))+(float)((float)((float)L_106*(float)L_107))))+(float)((float)((float)L_108*(float)L_109))))+(float)((float)((float)L_110*(float)L_111))));
		float L_112 = ((&___lhs)->___m30_3);
		float L_113 = ((&___rhs)->___m02_8);
		float L_114 = ((&___lhs)->___m31_7);
		float L_115 = ((&___rhs)->___m12_9);
		float L_116 = ((&___lhs)->___m32_11);
		float L_117 = ((&___rhs)->___m22_10);
		float L_118 = ((&___lhs)->___m33_15);
		float L_119 = ((&___rhs)->___m32_11);
		(&V_0)->___m32_11 = ((float)((float)((float)((float)((float)((float)((float)((float)L_112*(float)L_113))+(float)((float)((float)L_114*(float)L_115))))+(float)((float)((float)L_116*(float)L_117))))+(float)((float)((float)L_118*(float)L_119))));
		float L_120 = ((&___lhs)->___m30_3);
		float L_121 = ((&___rhs)->___m03_12);
		float L_122 = ((&___lhs)->___m31_7);
		float L_123 = ((&___rhs)->___m13_13);
		float L_124 = ((&___lhs)->___m32_11);
		float L_125 = ((&___rhs)->___m23_14);
		float L_126 = ((&___lhs)->___m33_15);
		float L_127 = ((&___rhs)->___m33_15);
		(&V_0)->___m33_15 = ((float)((float)((float)((float)((float)((float)((float)((float)L_120*(float)L_121))+(float)((float)((float)L_122*(float)L_123))))+(float)((float)((float)L_124*(float)L_125))))+(float)((float)((float)L_126*(float)L_127))));
		Matrix4x4_t314  L_128 = V_0;
		return L_128;
	}
}
// UnityEngine.Vector4 UnityEngine.Matrix4x4::op_Multiply(UnityEngine.Matrix4x4,UnityEngine.Vector4)
extern MethodInfo Matrix4x4_op_Multiply_m2506_MethodInfo;
extern "C" Vector4_t160  Matrix4x4_op_Multiply_m2506 (Object_t * __this /* static, unused */, Matrix4x4_t314  ___lhs, Vector4_t160  ___v, MethodInfo* method)
{
	Vector4_t160  V_0 = {0};
	{
		float L_0 = ((&___lhs)->___m00_0);
		float L_1 = ((&___v)->___x_1);
		float L_2 = ((&___lhs)->___m01_4);
		float L_3 = ((&___v)->___y_2);
		float L_4 = ((&___lhs)->___m02_8);
		float L_5 = ((&___v)->___z_3);
		float L_6 = ((&___lhs)->___m03_12);
		float L_7 = ((&___v)->___w_4);
		(&V_0)->___x_1 = ((float)((float)((float)((float)((float)((float)((float)((float)L_0*(float)L_1))+(float)((float)((float)L_2*(float)L_3))))+(float)((float)((float)L_4*(float)L_5))))+(float)((float)((float)L_6*(float)L_7))));
		float L_8 = ((&___lhs)->___m10_1);
		float L_9 = ((&___v)->___x_1);
		float L_10 = ((&___lhs)->___m11_5);
		float L_11 = ((&___v)->___y_2);
		float L_12 = ((&___lhs)->___m12_9);
		float L_13 = ((&___v)->___z_3);
		float L_14 = ((&___lhs)->___m13_13);
		float L_15 = ((&___v)->___w_4);
		(&V_0)->___y_2 = ((float)((float)((float)((float)((float)((float)((float)((float)L_8*(float)L_9))+(float)((float)((float)L_10*(float)L_11))))+(float)((float)((float)L_12*(float)L_13))))+(float)((float)((float)L_14*(float)L_15))));
		float L_16 = ((&___lhs)->___m20_2);
		float L_17 = ((&___v)->___x_1);
		float L_18 = ((&___lhs)->___m21_6);
		float L_19 = ((&___v)->___y_2);
		float L_20 = ((&___lhs)->___m22_10);
		float L_21 = ((&___v)->___z_3);
		float L_22 = ((&___lhs)->___m23_14);
		float L_23 = ((&___v)->___w_4);
		(&V_0)->___z_3 = ((float)((float)((float)((float)((float)((float)((float)((float)L_16*(float)L_17))+(float)((float)((float)L_18*(float)L_19))))+(float)((float)((float)L_20*(float)L_21))))+(float)((float)((float)L_22*(float)L_23))));
		float L_24 = ((&___lhs)->___m30_3);
		float L_25 = ((&___v)->___x_1);
		float L_26 = ((&___lhs)->___m31_7);
		float L_27 = ((&___v)->___y_2);
		float L_28 = ((&___lhs)->___m32_11);
		float L_29 = ((&___v)->___z_3);
		float L_30 = ((&___lhs)->___m33_15);
		float L_31 = ((&___v)->___w_4);
		(&V_0)->___w_4 = ((float)((float)((float)((float)((float)((float)((float)((float)L_24*(float)L_25))+(float)((float)((float)L_26*(float)L_27))))+(float)((float)((float)L_28*(float)L_29))))+(float)((float)((float)L_30*(float)L_31))));
		Vector4_t160  L_32 = V_0;
		return L_32;
	}
}
// System.Boolean UnityEngine.Matrix4x4::op_Equality(UnityEngine.Matrix4x4,UnityEngine.Matrix4x4)
extern "C" bool Matrix4x4_op_Equality_m2507 (Object_t * __this /* static, unused */, Matrix4x4_t314  ___lhs, Matrix4x4_t314  ___rhs, MethodInfo* method)
{
	int32_t G_B5_0 = 0;
	{
		Vector4_t160  L_0 = Matrix4x4_GetColumn_m2489((&___lhs), 0, /*hidden argument*/&Matrix4x4_GetColumn_m2489_MethodInfo);
		Vector4_t160  L_1 = Matrix4x4_GetColumn_m2489((&___rhs), 0, /*hidden argument*/&Matrix4x4_GetColumn_m2489_MethodInfo);
		bool L_2 = Vector4_op_Equality_m2542(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Vector4_op_Equality_m2542_MethodInfo);
		if (!L_2)
		{
			goto IL_0065;
		}
	}
	{
		Vector4_t160  L_3 = Matrix4x4_GetColumn_m2489((&___lhs), 1, /*hidden argument*/&Matrix4x4_GetColumn_m2489_MethodInfo);
		Vector4_t160  L_4 = Matrix4x4_GetColumn_m2489((&___rhs), 1, /*hidden argument*/&Matrix4x4_GetColumn_m2489_MethodInfo);
		bool L_5 = Vector4_op_Equality_m2542(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/&Vector4_op_Equality_m2542_MethodInfo);
		if (!L_5)
		{
			goto IL_0065;
		}
	}
	{
		Vector4_t160  L_6 = Matrix4x4_GetColumn_m2489((&___lhs), 2, /*hidden argument*/&Matrix4x4_GetColumn_m2489_MethodInfo);
		Vector4_t160  L_7 = Matrix4x4_GetColumn_m2489((&___rhs), 2, /*hidden argument*/&Matrix4x4_GetColumn_m2489_MethodInfo);
		bool L_8 = Vector4_op_Equality_m2542(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/&Vector4_op_Equality_m2542_MethodInfo);
		if (!L_8)
		{
			goto IL_0065;
		}
	}
	{
		Vector4_t160  L_9 = Matrix4x4_GetColumn_m2489((&___lhs), 3, /*hidden argument*/&Matrix4x4_GetColumn_m2489_MethodInfo);
		Vector4_t160  L_10 = Matrix4x4_GetColumn_m2489((&___rhs), 3, /*hidden argument*/&Matrix4x4_GetColumn_m2489_MethodInfo);
		bool L_11 = Vector4_op_Equality_m2542(NULL /*static, unused*/, L_9, L_10, /*hidden argument*/&Vector4_op_Equality_m2542_MethodInfo);
		G_B5_0 = ((int32_t)(L_11));
		goto IL_0066;
	}

IL_0065:
	{
		G_B5_0 = 0;
	}

IL_0066:
	{
		return G_B5_0;
	}
}
// System.Boolean UnityEngine.Matrix4x4::op_Inequality(UnityEngine.Matrix4x4,UnityEngine.Matrix4x4)
extern MethodInfo Matrix4x4_op_Inequality_m2508_MethodInfo;
extern "C" bool Matrix4x4_op_Inequality_m2508 (Object_t * __this /* static, unused */, Matrix4x4_t314  ___lhs, Matrix4x4_t314  ___rhs, MethodInfo* method)
{
	{
		Matrix4x4_t314  L_0 = ___lhs;
		Matrix4x4_t314  L_1 = ___rhs;
		bool L_2 = Matrix4x4_op_Equality_m2507(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Matrix4x4_op_Equality_m2507_MethodInfo);
		return ((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
// UnityEngine.Bounds
#include "UnityEngine_UnityEngine_Bounds.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Bounds_t201_il2cpp_TypeInfo;
// UnityEngine.Bounds
#include "UnityEngine_UnityEngine_BoundsMethodDeclarations.h"

// UnityEngine.Ray
#include "UnityEngine_UnityEngine_Ray.h"
extern MethodInfo Bounds_get_center_m1774_MethodInfo;
extern MethodInfo Bounds_get_extents_m2511_MethodInfo;
extern MethodInfo Bounds_get_max_m1783_MethodInfo;
extern MethodInfo Bounds_SetMinMax_m2515_MethodInfo;
extern MethodInfo Bounds_get_min_m1764_MethodInfo;
extern MethodInfo Bounds_set_extents_m2512_MethodInfo;
extern MethodInfo Bounds_set_center_m1776_MethodInfo;
extern MethodInfo Bounds_Encapsulate_m1782_MethodInfo;
extern MethodInfo Bounds_INTERNAL_CALL_Internal_Contains_m2521_MethodInfo;
extern MethodInfo Bounds_Internal_Contains_m2520_MethodInfo;
extern MethodInfo Bounds_INTERNAL_CALL_Internal_SqrDistance_m2524_MethodInfo;
extern MethodInfo Bounds_Internal_SqrDistance_m2523_MethodInfo;
extern MethodInfo Bounds_INTERNAL_CALL_Internal_IntersectRay_m2527_MethodInfo;
extern MethodInfo Bounds_Internal_IntersectRay_m2526_MethodInfo;
extern MethodInfo Bounds_INTERNAL_CALL_Internal_GetClosestPoint_m2531_MethodInfo;
extern MethodInfo Bounds_Internal_GetClosestPoint_m2530_MethodInfo;
extern MethodInfo Bounds_op_Equality_m2535_MethodInfo;


// System.Void UnityEngine.Bounds::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
extern MethodInfo Bounds__ctor_m1773_MethodInfo;
extern "C" void Bounds__ctor_m1773 (Bounds_t201 * __this, Vector3_t6  ___center, Vector3_t6  ___size, MethodInfo* method)
{
	{
		Vector3_t6  L_0 = ___center;
		__this->___m_Center_0 = L_0;
		Vector3_t6  L_1 = ___size;
		Vector3_t6  L_2 = Vector3_op_Multiply_m1840(NULL /*static, unused*/, L_1, (0.5f), /*hidden argument*/&Vector3_op_Multiply_m1840_MethodInfo);
		__this->___m_Extents_1 = L_2;
		return;
	}
}
// System.Int32 UnityEngine.Bounds::GetHashCode()
extern MethodInfo Bounds_GetHashCode_m2509_MethodInfo;
extern "C" int32_t Bounds_GetHashCode_m2509 (Bounds_t201 * __this, MethodInfo* method)
{
	Vector3_t6  V_0 = {0};
	Vector3_t6  V_1 = {0};
	{
		Vector3_t6  L_0 = Bounds_get_center_m1774(__this, /*hidden argument*/&Bounds_get_center_m1774_MethodInfo);
		V_0 = L_0;
		int32_t L_1 = Vector3_GetHashCode_m2444((&V_0), /*hidden argument*/&Vector3_GetHashCode_m2444_MethodInfo);
		Vector3_t6  L_2 = Bounds_get_extents_m2511(__this, /*hidden argument*/&Bounds_get_extents_m2511_MethodInfo);
		V_1 = L_2;
		int32_t L_3 = Vector3_GetHashCode_m2444((&V_1), /*hidden argument*/&Vector3_GetHashCode_m2444_MethodInfo);
		return ((int32_t)((int32_t)L_1^(int32_t)((int32_t)((int32_t)L_3<<(int32_t)2))));
	}
}
// System.Boolean UnityEngine.Bounds::Equals(System.Object)
extern MethodInfo Bounds_Equals_m2510_MethodInfo;
extern "C" bool Bounds_Equals_m2510 (Bounds_t201 * __this, Object_t * ___other, MethodInfo* method)
{
	Bounds_t201  V_0 = {0};
	Vector3_t6  V_1 = {0};
	Vector3_t6  V_2 = {0};
	int32_t G_B5_0 = 0;
	{
		Object_t * L_0 = ___other;
		if (((Object_t *)IsInst(L_0, InitializedTypeInfo(&Bounds_t201_il2cpp_TypeInfo))))
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		Object_t * L_1 = ___other;
		V_0 = ((*(Bounds_t201 *)((Bounds_t201 *)UnBox (L_1, InitializedTypeInfo(&Bounds_t201_il2cpp_TypeInfo)))));
		Vector3_t6  L_2 = Bounds_get_center_m1774(__this, /*hidden argument*/&Bounds_get_center_m1774_MethodInfo);
		V_1 = L_2;
		Vector3_t6  L_3 = Bounds_get_center_m1774((&V_0), /*hidden argument*/&Bounds_get_center_m1774_MethodInfo);
		Vector3_t6  L_4 = L_3;
		Object_t * L_5 = Box(InitializedTypeInfo(&Vector3_t6_il2cpp_TypeInfo), &L_4);
		bool L_6 = Vector3_Equals_m29((&V_1), L_5, /*hidden argument*/&Vector3_Equals_m29_MethodInfo);
		if (!L_6)
		{
			goto IL_004f;
		}
	}
	{
		Vector3_t6  L_7 = Bounds_get_extents_m2511(__this, /*hidden argument*/&Bounds_get_extents_m2511_MethodInfo);
		V_2 = L_7;
		Vector3_t6  L_8 = Bounds_get_extents_m2511((&V_0), /*hidden argument*/&Bounds_get_extents_m2511_MethodInfo);
		Vector3_t6  L_9 = L_8;
		Object_t * L_10 = Box(InitializedTypeInfo(&Vector3_t6_il2cpp_TypeInfo), &L_9);
		bool L_11 = Vector3_Equals_m29((&V_2), L_10, /*hidden argument*/&Vector3_Equals_m29_MethodInfo);
		G_B5_0 = ((int32_t)(L_11));
		goto IL_0050;
	}

IL_004f:
	{
		G_B5_0 = 0;
	}

IL_0050:
	{
		return G_B5_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Bounds::get_center()
extern "C" Vector3_t6  Bounds_get_center_m1774 (Bounds_t201 * __this, MethodInfo* method)
{
	{
		Vector3_t6  L_0 = (__this->___m_Center_0);
		return L_0;
	}
}
// System.Void UnityEngine.Bounds::set_center(UnityEngine.Vector3)
extern "C" void Bounds_set_center_m1776 (Bounds_t201 * __this, Vector3_t6  ___value, MethodInfo* method)
{
	{
		Vector3_t6  L_0 = ___value;
		__this->___m_Center_0 = L_0;
		return;
	}
}
// UnityEngine.Vector3 UnityEngine.Bounds::get_size()
extern MethodInfo Bounds_get_size_m1763_MethodInfo;
extern "C" Vector3_t6  Bounds_get_size_m1763 (Bounds_t201 * __this, MethodInfo* method)
{
	{
		Vector3_t6  L_0 = (__this->___m_Extents_1);
		Vector3_t6  L_1 = Vector3_op_Multiply_m1840(NULL /*static, unused*/, L_0, (2.0f), /*hidden argument*/&Vector3_op_Multiply_m1840_MethodInfo);
		return L_1;
	}
}
// System.Void UnityEngine.Bounds::set_size(UnityEngine.Vector3)
extern MethodInfo Bounds_set_size_m1775_MethodInfo;
extern "C" void Bounds_set_size_m1775 (Bounds_t201 * __this, Vector3_t6  ___value, MethodInfo* method)
{
	{
		Vector3_t6  L_0 = ___value;
		Vector3_t6  L_1 = Vector3_op_Multiply_m1840(NULL /*static, unused*/, L_0, (0.5f), /*hidden argument*/&Vector3_op_Multiply_m1840_MethodInfo);
		__this->___m_Extents_1 = L_1;
		return;
	}
}
// UnityEngine.Vector3 UnityEngine.Bounds::get_extents()
extern "C" Vector3_t6  Bounds_get_extents_m2511 (Bounds_t201 * __this, MethodInfo* method)
{
	{
		Vector3_t6  L_0 = (__this->___m_Extents_1);
		return L_0;
	}
}
// System.Void UnityEngine.Bounds::set_extents(UnityEngine.Vector3)
extern "C" void Bounds_set_extents_m2512 (Bounds_t201 * __this, Vector3_t6  ___value, MethodInfo* method)
{
	{
		Vector3_t6  L_0 = ___value;
		__this->___m_Extents_1 = L_0;
		return;
	}
}
// UnityEngine.Vector3 UnityEngine.Bounds::get_min()
extern "C" Vector3_t6  Bounds_get_min_m1764 (Bounds_t201 * __this, MethodInfo* method)
{
	{
		Vector3_t6  L_0 = Bounds_get_center_m1774(__this, /*hidden argument*/&Bounds_get_center_m1774_MethodInfo);
		Vector3_t6  L_1 = Bounds_get_extents_m2511(__this, /*hidden argument*/&Bounds_get_extents_m2511_MethodInfo);
		Vector3_t6  L_2 = Vector3_op_Subtraction_m1557(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Vector3_op_Subtraction_m1557_MethodInfo);
		return L_2;
	}
}
// System.Void UnityEngine.Bounds::set_min(UnityEngine.Vector3)
extern MethodInfo Bounds_set_min_m2513_MethodInfo;
extern "C" void Bounds_set_min_m2513 (Bounds_t201 * __this, Vector3_t6  ___value, MethodInfo* method)
{
	{
		Vector3_t6  L_0 = ___value;
		Vector3_t6  L_1 = Bounds_get_max_m1783(__this, /*hidden argument*/&Bounds_get_max_m1783_MethodInfo);
		Bounds_SetMinMax_m2515(__this, L_0, L_1, /*hidden argument*/&Bounds_SetMinMax_m2515_MethodInfo);
		return;
	}
}
// UnityEngine.Vector3 UnityEngine.Bounds::get_max()
extern "C" Vector3_t6  Bounds_get_max_m1783 (Bounds_t201 * __this, MethodInfo* method)
{
	{
		Vector3_t6  L_0 = Bounds_get_center_m1774(__this, /*hidden argument*/&Bounds_get_center_m1774_MethodInfo);
		Vector3_t6  L_1 = Bounds_get_extents_m2511(__this, /*hidden argument*/&Bounds_get_extents_m2511_MethodInfo);
		Vector3_t6  L_2 = Vector3_op_Addition_m1712(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Vector3_op_Addition_m1712_MethodInfo);
		return L_2;
	}
}
// System.Void UnityEngine.Bounds::set_max(UnityEngine.Vector3)
extern MethodInfo Bounds_set_max_m2514_MethodInfo;
extern "C" void Bounds_set_max_m2514 (Bounds_t201 * __this, Vector3_t6  ___value, MethodInfo* method)
{
	{
		Vector3_t6  L_0 = Bounds_get_min_m1764(__this, /*hidden argument*/&Bounds_get_min_m1764_MethodInfo);
		Vector3_t6  L_1 = ___value;
		Bounds_SetMinMax_m2515(__this, L_0, L_1, /*hidden argument*/&Bounds_SetMinMax_m2515_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Bounds::SetMinMax(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" void Bounds_SetMinMax_m2515 (Bounds_t201 * __this, Vector3_t6  ___min, Vector3_t6  ___max, MethodInfo* method)
{
	{
		Vector3_t6  L_0 = ___max;
		Vector3_t6  L_1 = ___min;
		Vector3_t6  L_2 = Vector3_op_Subtraction_m1557(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Vector3_op_Subtraction_m1557_MethodInfo);
		Vector3_t6  L_3 = Vector3_op_Multiply_m1840(NULL /*static, unused*/, L_2, (0.5f), /*hidden argument*/&Vector3_op_Multiply_m1840_MethodInfo);
		Bounds_set_extents_m2512(__this, L_3, /*hidden argument*/&Bounds_set_extents_m2512_MethodInfo);
		Vector3_t6  L_4 = ___min;
		Vector3_t6  L_5 = Bounds_get_extents_m2511(__this, /*hidden argument*/&Bounds_get_extents_m2511_MethodInfo);
		Vector3_t6  L_6 = Vector3_op_Addition_m1712(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/&Vector3_op_Addition_m1712_MethodInfo);
		Bounds_set_center_m1776(__this, L_6, /*hidden argument*/&Bounds_set_center_m1776_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Bounds::Encapsulate(UnityEngine.Vector3)
extern "C" void Bounds_Encapsulate_m1782 (Bounds_t201 * __this, Vector3_t6  ___point, MethodInfo* method)
{
	{
		Vector3_t6  L_0 = Bounds_get_min_m1764(__this, /*hidden argument*/&Bounds_get_min_m1764_MethodInfo);
		Vector3_t6  L_1 = ___point;
		Vector3_t6  L_2 = Vector3_Min_m1780(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Vector3_Min_m1780_MethodInfo);
		Vector3_t6  L_3 = Bounds_get_max_m1783(__this, /*hidden argument*/&Bounds_get_max_m1783_MethodInfo);
		Vector3_t6  L_4 = ___point;
		Vector3_t6  L_5 = Vector3_Max_m1781(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/&Vector3_Max_m1781_MethodInfo);
		Bounds_SetMinMax_m2515(__this, L_2, L_5, /*hidden argument*/&Bounds_SetMinMax_m2515_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Bounds::Encapsulate(UnityEngine.Bounds)
extern MethodInfo Bounds_Encapsulate_m2516_MethodInfo;
extern "C" void Bounds_Encapsulate_m2516 (Bounds_t201 * __this, Bounds_t201  ___bounds, MethodInfo* method)
{
	{
		Vector3_t6  L_0 = Bounds_get_center_m1774((&___bounds), /*hidden argument*/&Bounds_get_center_m1774_MethodInfo);
		Vector3_t6  L_1 = Bounds_get_extents_m2511((&___bounds), /*hidden argument*/&Bounds_get_extents_m2511_MethodInfo);
		Vector3_t6  L_2 = Vector3_op_Subtraction_m1557(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Vector3_op_Subtraction_m1557_MethodInfo);
		Bounds_Encapsulate_m1782(__this, L_2, /*hidden argument*/&Bounds_Encapsulate_m1782_MethodInfo);
		Vector3_t6  L_3 = Bounds_get_center_m1774((&___bounds), /*hidden argument*/&Bounds_get_center_m1774_MethodInfo);
		Vector3_t6  L_4 = Bounds_get_extents_m2511((&___bounds), /*hidden argument*/&Bounds_get_extents_m2511_MethodInfo);
		Vector3_t6  L_5 = Vector3_op_Addition_m1712(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/&Vector3_op_Addition_m1712_MethodInfo);
		Bounds_Encapsulate_m1782(__this, L_5, /*hidden argument*/&Bounds_Encapsulate_m1782_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Bounds::Expand(System.Single)
extern MethodInfo Bounds_Expand_m2517_MethodInfo;
extern "C" void Bounds_Expand_m2517 (Bounds_t201 * __this, float ___amount, MethodInfo* method)
{
	{
		float L_0 = ___amount;
		___amount = ((float)((float)L_0*(float)(0.5f)));
		Vector3_t6  L_1 = Bounds_get_extents_m2511(__this, /*hidden argument*/&Bounds_get_extents_m2511_MethodInfo);
		float L_2 = ___amount;
		float L_3 = ___amount;
		float L_4 = ___amount;
		Vector3_t6  L_5 = {0};
		Vector3__ctor_m28(&L_5, L_2, L_3, L_4, /*hidden argument*/&Vector3__ctor_m28_MethodInfo);
		Vector3_t6  L_6 = Vector3_op_Addition_m1712(NULL /*static, unused*/, L_1, L_5, /*hidden argument*/&Vector3_op_Addition_m1712_MethodInfo);
		Bounds_set_extents_m2512(__this, L_6, /*hidden argument*/&Bounds_set_extents_m2512_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Bounds::Expand(UnityEngine.Vector3)
extern MethodInfo Bounds_Expand_m2518_MethodInfo;
extern "C" void Bounds_Expand_m2518 (Bounds_t201 * __this, Vector3_t6  ___amount, MethodInfo* method)
{
	{
		Vector3_t6  L_0 = Bounds_get_extents_m2511(__this, /*hidden argument*/&Bounds_get_extents_m2511_MethodInfo);
		Vector3_t6  L_1 = ___amount;
		Vector3_t6  L_2 = Vector3_op_Multiply_m1840(NULL /*static, unused*/, L_1, (0.5f), /*hidden argument*/&Vector3_op_Multiply_m1840_MethodInfo);
		Vector3_t6  L_3 = Vector3_op_Addition_m1712(NULL /*static, unused*/, L_0, L_2, /*hidden argument*/&Vector3_op_Addition_m1712_MethodInfo);
		Bounds_set_extents_m2512(__this, L_3, /*hidden argument*/&Bounds_set_extents_m2512_MethodInfo);
		return;
	}
}
// System.Boolean UnityEngine.Bounds::Intersects(UnityEngine.Bounds)
extern MethodInfo Bounds_Intersects_m2519_MethodInfo;
extern "C" bool Bounds_Intersects_m2519 (Bounds_t201 * __this, Bounds_t201  ___bounds, MethodInfo* method)
{
	Vector3_t6  V_0 = {0};
	Vector3_t6  V_1 = {0};
	Vector3_t6  V_2 = {0};
	Vector3_t6  V_3 = {0};
	Vector3_t6  V_4 = {0};
	Vector3_t6  V_5 = {0};
	Vector3_t6  V_6 = {0};
	Vector3_t6  V_7 = {0};
	Vector3_t6  V_8 = {0};
	Vector3_t6  V_9 = {0};
	Vector3_t6  V_10 = {0};
	Vector3_t6  V_11 = {0};
	int32_t G_B7_0 = 0;
	{
		Vector3_t6  L_0 = Bounds_get_min_m1764(__this, /*hidden argument*/&Bounds_get_min_m1764_MethodInfo);
		V_0 = L_0;
		float L_1 = ((&V_0)->___x_1);
		Vector3_t6  L_2 = Bounds_get_max_m1783((&___bounds), /*hidden argument*/&Bounds_get_max_m1783_MethodInfo);
		V_1 = L_2;
		float L_3 = ((&V_1)->___x_1);
		if ((!(((float)L_1) <= ((float)L_3))))
		{
			goto IL_00d6;
		}
	}
	{
		Vector3_t6  L_4 = Bounds_get_max_m1783(__this, /*hidden argument*/&Bounds_get_max_m1783_MethodInfo);
		V_2 = L_4;
		float L_5 = ((&V_2)->___x_1);
		Vector3_t6  L_6 = Bounds_get_min_m1764((&___bounds), /*hidden argument*/&Bounds_get_min_m1764_MethodInfo);
		V_3 = L_6;
		float L_7 = ((&V_3)->___x_1);
		if ((!(((float)L_5) >= ((float)L_7))))
		{
			goto IL_00d6;
		}
	}
	{
		Vector3_t6  L_8 = Bounds_get_min_m1764(__this, /*hidden argument*/&Bounds_get_min_m1764_MethodInfo);
		V_4 = L_8;
		float L_9 = ((&V_4)->___y_2);
		Vector3_t6  L_10 = Bounds_get_max_m1783((&___bounds), /*hidden argument*/&Bounds_get_max_m1783_MethodInfo);
		V_5 = L_10;
		float L_11 = ((&V_5)->___y_2);
		if ((!(((float)L_9) <= ((float)L_11))))
		{
			goto IL_00d6;
		}
	}
	{
		Vector3_t6  L_12 = Bounds_get_max_m1783(__this, /*hidden argument*/&Bounds_get_max_m1783_MethodInfo);
		V_6 = L_12;
		float L_13 = ((&V_6)->___y_2);
		Vector3_t6  L_14 = Bounds_get_min_m1764((&___bounds), /*hidden argument*/&Bounds_get_min_m1764_MethodInfo);
		V_7 = L_14;
		float L_15 = ((&V_7)->___y_2);
		if ((!(((float)L_13) >= ((float)L_15))))
		{
			goto IL_00d6;
		}
	}
	{
		Vector3_t6  L_16 = Bounds_get_min_m1764(__this, /*hidden argument*/&Bounds_get_min_m1764_MethodInfo);
		V_8 = L_16;
		float L_17 = ((&V_8)->___z_3);
		Vector3_t6  L_18 = Bounds_get_max_m1783((&___bounds), /*hidden argument*/&Bounds_get_max_m1783_MethodInfo);
		V_9 = L_18;
		float L_19 = ((&V_9)->___z_3);
		if ((!(((float)L_17) <= ((float)L_19))))
		{
			goto IL_00d6;
		}
	}
	{
		Vector3_t6  L_20 = Bounds_get_max_m1783(__this, /*hidden argument*/&Bounds_get_max_m1783_MethodInfo);
		V_10 = L_20;
		float L_21 = ((&V_10)->___z_3);
		Vector3_t6  L_22 = Bounds_get_min_m1764((&___bounds), /*hidden argument*/&Bounds_get_min_m1764_MethodInfo);
		V_11 = L_22;
		float L_23 = ((&V_11)->___z_3);
		G_B7_0 = ((((int32_t)((!(((float)L_21) >= ((float)L_23)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_00d7;
	}

IL_00d6:
	{
		G_B7_0 = 0;
	}

IL_00d7:
	{
		return G_B7_0;
	}
}
// System.Boolean UnityEngine.Bounds::Internal_Contains(UnityEngine.Bounds,UnityEngine.Vector3)
extern "C" bool Bounds_Internal_Contains_m2520 (Object_t * __this /* static, unused */, Bounds_t201  ___m, Vector3_t6  ___point, MethodInfo* method)
{
	{
		bool L_0 = Bounds_INTERNAL_CALL_Internal_Contains_m2521(NULL /*static, unused*/, (&___m), (&___point), /*hidden argument*/&Bounds_INTERNAL_CALL_Internal_Contains_m2521_MethodInfo);
		return L_0;
	}
}
// System.Boolean UnityEngine.Bounds::INTERNAL_CALL_Internal_Contains(UnityEngine.Bounds&,UnityEngine.Vector3&)
extern "C" bool Bounds_INTERNAL_CALL_Internal_Contains_m2521 (Object_t * __this /* static, unused */, Bounds_t201 * ___m, Vector3_t6 * ___point, MethodInfo* method)
{
	typedef bool (*Bounds_INTERNAL_CALL_Internal_Contains_m2521_ftn) (Bounds_t201 *, Vector3_t6 *);
	static Bounds_INTERNAL_CALL_Internal_Contains_m2521_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Bounds_INTERNAL_CALL_Internal_Contains_m2521_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Bounds::INTERNAL_CALL_Internal_Contains(UnityEngine.Bounds&,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(___m, ___point);
}
// System.Boolean UnityEngine.Bounds::Contains(UnityEngine.Vector3)
extern MethodInfo Bounds_Contains_m2522_MethodInfo;
extern "C" bool Bounds_Contains_m2522 (Bounds_t201 * __this, Vector3_t6  ___point, MethodInfo* method)
{
	{
		Vector3_t6  L_0 = ___point;
		bool L_1 = Bounds_Internal_Contains_m2520(NULL /*static, unused*/, (*(Bounds_t201 *)__this), L_0, /*hidden argument*/&Bounds_Internal_Contains_m2520_MethodInfo);
		return L_1;
	}
}
// System.Single UnityEngine.Bounds::Internal_SqrDistance(UnityEngine.Bounds,UnityEngine.Vector3)
extern "C" float Bounds_Internal_SqrDistance_m2523 (Object_t * __this /* static, unused */, Bounds_t201  ___m, Vector3_t6  ___point, MethodInfo* method)
{
	{
		float L_0 = Bounds_INTERNAL_CALL_Internal_SqrDistance_m2524(NULL /*static, unused*/, (&___m), (&___point), /*hidden argument*/&Bounds_INTERNAL_CALL_Internal_SqrDistance_m2524_MethodInfo);
		return L_0;
	}
}
// System.Single UnityEngine.Bounds::INTERNAL_CALL_Internal_SqrDistance(UnityEngine.Bounds&,UnityEngine.Vector3&)
extern "C" float Bounds_INTERNAL_CALL_Internal_SqrDistance_m2524 (Object_t * __this /* static, unused */, Bounds_t201 * ___m, Vector3_t6 * ___point, MethodInfo* method)
{
	typedef float (*Bounds_INTERNAL_CALL_Internal_SqrDistance_m2524_ftn) (Bounds_t201 *, Vector3_t6 *);
	static Bounds_INTERNAL_CALL_Internal_SqrDistance_m2524_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Bounds_INTERNAL_CALL_Internal_SqrDistance_m2524_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Bounds::INTERNAL_CALL_Internal_SqrDistance(UnityEngine.Bounds&,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(___m, ___point);
}
// System.Single UnityEngine.Bounds::SqrDistance(UnityEngine.Vector3)
extern MethodInfo Bounds_SqrDistance_m2525_MethodInfo;
extern "C" float Bounds_SqrDistance_m2525 (Bounds_t201 * __this, Vector3_t6  ___point, MethodInfo* method)
{
	{
		Vector3_t6  L_0 = ___point;
		float L_1 = Bounds_Internal_SqrDistance_m2523(NULL /*static, unused*/, (*(Bounds_t201 *)__this), L_0, /*hidden argument*/&Bounds_Internal_SqrDistance_m2523_MethodInfo);
		return L_1;
	}
}
// System.Boolean UnityEngine.Bounds::Internal_IntersectRay(UnityEngine.Ray&,UnityEngine.Bounds&,System.Single&)
extern "C" bool Bounds_Internal_IntersectRay_m2526 (Object_t * __this /* static, unused */, Ray_t279 * ___ray, Bounds_t201 * ___bounds, float* ___distance, MethodInfo* method)
{
	{
		Ray_t279 * L_0 = ___ray;
		Bounds_t201 * L_1 = ___bounds;
		float* L_2 = ___distance;
		bool L_3 = Bounds_INTERNAL_CALL_Internal_IntersectRay_m2527(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/&Bounds_INTERNAL_CALL_Internal_IntersectRay_m2527_MethodInfo);
		return L_3;
	}
}
// System.Boolean UnityEngine.Bounds::INTERNAL_CALL_Internal_IntersectRay(UnityEngine.Ray&,UnityEngine.Bounds&,System.Single&)
extern "C" bool Bounds_INTERNAL_CALL_Internal_IntersectRay_m2527 (Object_t * __this /* static, unused */, Ray_t279 * ___ray, Bounds_t201 * ___bounds, float* ___distance, MethodInfo* method)
{
	typedef bool (*Bounds_INTERNAL_CALL_Internal_IntersectRay_m2527_ftn) (Ray_t279 *, Bounds_t201 *, float*);
	static Bounds_INTERNAL_CALL_Internal_IntersectRay_m2527_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Bounds_INTERNAL_CALL_Internal_IntersectRay_m2527_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Bounds::INTERNAL_CALL_Internal_IntersectRay(UnityEngine.Ray&,UnityEngine.Bounds&,System.Single&)");
	return _il2cpp_icall_func(___ray, ___bounds, ___distance);
}
// System.Boolean UnityEngine.Bounds::IntersectRay(UnityEngine.Ray)
extern MethodInfo Bounds_IntersectRay_m2528_MethodInfo;
extern "C" bool Bounds_IntersectRay_m2528 (Bounds_t201 * __this, Ray_t279  ___ray, MethodInfo* method)
{
	float V_0 = 0.0f;
	{
		bool L_0 = Bounds_Internal_IntersectRay_m2526(NULL /*static, unused*/, (&___ray), __this, (&V_0), /*hidden argument*/&Bounds_Internal_IntersectRay_m2526_MethodInfo);
		return L_0;
	}
}
// System.Boolean UnityEngine.Bounds::IntersectRay(UnityEngine.Ray,System.Single&)
extern MethodInfo Bounds_IntersectRay_m2529_MethodInfo;
extern "C" bool Bounds_IntersectRay_m2529 (Bounds_t201 * __this, Ray_t279  ___ray, float* ___distance, MethodInfo* method)
{
	{
		float* L_0 = ___distance;
		bool L_1 = Bounds_Internal_IntersectRay_m2526(NULL /*static, unused*/, (&___ray), __this, L_0, /*hidden argument*/&Bounds_Internal_IntersectRay_m2526_MethodInfo);
		return L_1;
	}
}
// UnityEngine.Vector3 UnityEngine.Bounds::Internal_GetClosestPoint(UnityEngine.Bounds&,UnityEngine.Vector3&)
extern "C" Vector3_t6  Bounds_Internal_GetClosestPoint_m2530 (Object_t * __this /* static, unused */, Bounds_t201 * ___bounds, Vector3_t6 * ___point, MethodInfo* method)
{
	{
		Bounds_t201 * L_0 = ___bounds;
		Vector3_t6 * L_1 = ___point;
		Vector3_t6  L_2 = Bounds_INTERNAL_CALL_Internal_GetClosestPoint_m2531(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Bounds_INTERNAL_CALL_Internal_GetClosestPoint_m2531_MethodInfo);
		return L_2;
	}
}
// UnityEngine.Vector3 UnityEngine.Bounds::INTERNAL_CALL_Internal_GetClosestPoint(UnityEngine.Bounds&,UnityEngine.Vector3&)
extern "C" Vector3_t6  Bounds_INTERNAL_CALL_Internal_GetClosestPoint_m2531 (Object_t * __this /* static, unused */, Bounds_t201 * ___bounds, Vector3_t6 * ___point, MethodInfo* method)
{
	typedef Vector3_t6  (*Bounds_INTERNAL_CALL_Internal_GetClosestPoint_m2531_ftn) (Bounds_t201 *, Vector3_t6 *);
	static Bounds_INTERNAL_CALL_Internal_GetClosestPoint_m2531_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Bounds_INTERNAL_CALL_Internal_GetClosestPoint_m2531_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Bounds::INTERNAL_CALL_Internal_GetClosestPoint(UnityEngine.Bounds&,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(___bounds, ___point);
}
// UnityEngine.Vector3 UnityEngine.Bounds::ClosestPoint(UnityEngine.Vector3)
extern MethodInfo Bounds_ClosestPoint_m2532_MethodInfo;
extern "C" Vector3_t6  Bounds_ClosestPoint_m2532 (Bounds_t201 * __this, Vector3_t6  ___point, MethodInfo* method)
{
	{
		Vector3_t6  L_0 = Bounds_Internal_GetClosestPoint_m2530(NULL /*static, unused*/, __this, (&___point), /*hidden argument*/&Bounds_Internal_GetClosestPoint_m2530_MethodInfo);
		return L_0;
	}
}
// System.String UnityEngine.Bounds::ToString()
extern MethodInfo Bounds_ToString_m2533_MethodInfo;
extern TypeInfo* ObjectU5BU5D_t269_il2cpp_TypeInfo_var;
extern "C" String_t* Bounds_ToString_m2533 (Bounds_t201 * __this, MethodInfo* method)
{
	static bool Bounds_ToString_m2533_init;
	if (!Bounds_ToString_m2533_init)
	{
		ObjectU5BU5D_t269_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t269_0_0_0);
		Bounds_ToString_m2533_init = true;
	}
	{
		ObjectU5BU5D_t269* L_0 = ((ObjectU5BU5D_t269*)SZArrayNew(ObjectU5BU5D_t269_il2cpp_TypeInfo_var, 2));
		Vector3_t6  L_1 = (__this->___m_Center_0);
		Vector3_t6  L_2 = L_1;
		Object_t * L_3 = Box(InitializedTypeInfo(&Vector3_t6_il2cpp_TypeInfo), &L_2);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_3;
		ObjectU5BU5D_t269* L_4 = L_0;
		Vector3_t6  L_5 = (__this->___m_Extents_1);
		Vector3_t6  L_6 = L_5;
		Object_t * L_7 = Box(InitializedTypeInfo(&Vector3_t6_il2cpp_TypeInfo), &L_6);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 1)) = (Object_t *)L_7;
		String_t* L_8 = UnityString_Format_m2626(NULL /*static, unused*/, (String_t*) &_stringLiteral147, L_4, /*hidden argument*/&UnityString_Format_m2626_MethodInfo);
		return L_8;
	}
}
// System.String UnityEngine.Bounds::ToString(System.String)
extern MethodInfo Bounds_ToString_m2534_MethodInfo;
extern TypeInfo* ObjectU5BU5D_t269_il2cpp_TypeInfo_var;
extern "C" String_t* Bounds_ToString_m2534 (Bounds_t201 * __this, String_t* ___format, MethodInfo* method)
{
	static bool Bounds_ToString_m2534_init;
	if (!Bounds_ToString_m2534_init)
	{
		ObjectU5BU5D_t269_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t269_0_0_0);
		Bounds_ToString_m2534_init = true;
	}
	{
		ObjectU5BU5D_t269* L_0 = ((ObjectU5BU5D_t269*)SZArrayNew(ObjectU5BU5D_t269_il2cpp_TypeInfo_var, 2));
		Vector3_t6 * L_1 = &(__this->___m_Center_0);
		String_t* L_2 = ___format;
		String_t* L_3 = Vector3_ToString_m2447(L_1, L_2, /*hidden argument*/&Vector3_ToString_m2447_MethodInfo);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_3;
		ObjectU5BU5D_t269* L_4 = L_0;
		Vector3_t6 * L_5 = &(__this->___m_Extents_1);
		String_t* L_6 = ___format;
		String_t* L_7 = Vector3_ToString_m2447(L_5, L_6, /*hidden argument*/&Vector3_ToString_m2447_MethodInfo);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 1)) = (Object_t *)L_7;
		String_t* L_8 = UnityString_Format_m2626(NULL /*static, unused*/, (String_t*) &_stringLiteral147, L_4, /*hidden argument*/&UnityString_Format_m2626_MethodInfo);
		return L_8;
	}
}
// System.Boolean UnityEngine.Bounds::op_Equality(UnityEngine.Bounds,UnityEngine.Bounds)
extern "C" bool Bounds_op_Equality_m2535 (Object_t * __this /* static, unused */, Bounds_t201  ___lhs, Bounds_t201  ___rhs, MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		Vector3_t6  L_0 = Bounds_get_center_m1774((&___lhs), /*hidden argument*/&Bounds_get_center_m1774_MethodInfo);
		Vector3_t6  L_1 = Bounds_get_center_m1774((&___rhs), /*hidden argument*/&Bounds_get_center_m1774_MethodInfo);
		bool L_2 = Vector3_op_Equality_m2452(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Vector3_op_Equality_m2452_MethodInfo);
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		Vector3_t6  L_3 = Bounds_get_extents_m2511((&___lhs), /*hidden argument*/&Bounds_get_extents_m2511_MethodInfo);
		Vector3_t6  L_4 = Bounds_get_extents_m2511((&___rhs), /*hidden argument*/&Bounds_get_extents_m2511_MethodInfo);
		bool L_5 = Vector3_op_Equality_m2452(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/&Vector3_op_Equality_m2452_MethodInfo);
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
// System.Boolean UnityEngine.Bounds::op_Inequality(UnityEngine.Bounds,UnityEngine.Bounds)
extern MethodInfo Bounds_op_Inequality_m1769_MethodInfo;
extern "C" bool Bounds_op_Inequality_m1769 (Object_t * __this /* static, unused */, Bounds_t201  ___lhs, Bounds_t201  ___rhs, MethodInfo* method)
{
	{
		Bounds_t201  L_0 = ___lhs;
		Bounds_t201  L_1 = ___rhs;
		bool L_2 = Bounds_op_Equality_m2535(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Bounds_op_Equality_m2535_MethodInfo);
		return ((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
#ifndef _MSC_VER
#else
#endif

extern MethodInfo Vector4_Dot_m2539_MethodInfo;
extern MethodInfo Vector4_op_Subtraction_m2541_MethodInfo;
extern MethodInfo Vector4_SqrMagnitude_m2540_MethodInfo;


// System.Void UnityEngine.Vector4::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C" void Vector4__ctor_m1511 (Vector4_t160 * __this, float ___x, float ___y, float ___z, float ___w, MethodInfo* method)
{
	{
		float L_0 = ___x;
		__this->___x_1 = L_0;
		float L_1 = ___y;
		__this->___y_2 = L_1;
		float L_2 = ___z;
		__this->___z_3 = L_2;
		float L_3 = ___w;
		__this->___w_4 = L_3;
		return;
	}
}
// System.Single UnityEngine.Vector4::get_Item(System.Int32)
extern MethodInfo Vector4_get_Item_m1601_MethodInfo;
extern "C" float Vector4_get_Item_m1601 (Vector4_t160 * __this, int32_t ___index, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___index;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_001d;
		}
		if (L_1 == 1)
		{
			goto IL_0024;
		}
		if (L_1 == 2)
		{
			goto IL_002b;
		}
		if (L_1 == 3)
		{
			goto IL_0032;
		}
	}
	{
		goto IL_0039;
	}

IL_001d:
	{
		float L_2 = (__this->___x_1);
		return L_2;
	}

IL_0024:
	{
		float L_3 = (__this->___y_2);
		return L_3;
	}

IL_002b:
	{
		float L_4 = (__this->___z_3);
		return L_4;
	}

IL_0032:
	{
		float L_5 = (__this->___w_4);
		return L_5;
	}

IL_0039:
	{
		IndexOutOfRangeException_t690 * L_6 = (IndexOutOfRangeException_t690 *)il2cpp_codegen_object_new (InitializedTypeInfo(&IndexOutOfRangeException_t690_il2cpp_TypeInfo));
		IndexOutOfRangeException__ctor_m3358(L_6, (String_t*) &_stringLiteral148, /*hidden argument*/&IndexOutOfRangeException__ctor_m3358_MethodInfo);
		il2cpp_codegen_raise_exception(L_6);
	}
}
// System.Void UnityEngine.Vector4::set_Item(System.Int32,System.Single)
extern MethodInfo Vector4_set_Item_m1603_MethodInfo;
extern "C" void Vector4_set_Item_m1603 (Vector4_t160 * __this, int32_t ___index, float ___value, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___index;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_001d;
		}
		if (L_1 == 1)
		{
			goto IL_0029;
		}
		if (L_1 == 2)
		{
			goto IL_0035;
		}
		if (L_1 == 3)
		{
			goto IL_0041;
		}
	}
	{
		goto IL_004d;
	}

IL_001d:
	{
		float L_2 = ___value;
		__this->___x_1 = L_2;
		goto IL_0058;
	}

IL_0029:
	{
		float L_3 = ___value;
		__this->___y_2 = L_3;
		goto IL_0058;
	}

IL_0035:
	{
		float L_4 = ___value;
		__this->___z_3 = L_4;
		goto IL_0058;
	}

IL_0041:
	{
		float L_5 = ___value;
		__this->___w_4 = L_5;
		goto IL_0058;
	}

IL_004d:
	{
		IndexOutOfRangeException_t690 * L_6 = (IndexOutOfRangeException_t690 *)il2cpp_codegen_object_new (InitializedTypeInfo(&IndexOutOfRangeException_t690_il2cpp_TypeInfo));
		IndexOutOfRangeException__ctor_m3358(L_6, (String_t*) &_stringLiteral148, /*hidden argument*/&IndexOutOfRangeException__ctor_m3358_MethodInfo);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_0058:
	{
		return;
	}
}
// System.Int32 UnityEngine.Vector4::GetHashCode()
extern "C" int32_t Vector4_GetHashCode_m2536 (Vector4_t160 * __this, MethodInfo* method)
{
	{
		float* L_0 = &(__this->___x_1);
		int32_t L_1 = Single_GetHashCode_m3333(L_0, /*hidden argument*/&Single_GetHashCode_m3333_MethodInfo);
		float* L_2 = &(__this->___y_2);
		int32_t L_3 = Single_GetHashCode_m3333(L_2, /*hidden argument*/&Single_GetHashCode_m3333_MethodInfo);
		float* L_4 = &(__this->___z_3);
		int32_t L_5 = Single_GetHashCode_m3333(L_4, /*hidden argument*/&Single_GetHashCode_m3333_MethodInfo);
		float* L_6 = &(__this->___w_4);
		int32_t L_7 = Single_GetHashCode_m3333(L_6, /*hidden argument*/&Single_GetHashCode_m3333_MethodInfo);
		return ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_1^(int32_t)((int32_t)((int32_t)L_3<<(int32_t)2))))^(int32_t)((int32_t)((int32_t)L_5>>(int32_t)2))))^(int32_t)((int32_t)((int32_t)L_7>>(int32_t)1))));
	}
}
// System.Boolean UnityEngine.Vector4::Equals(System.Object)
extern "C" bool Vector4_Equals_m2537 (Vector4_t160 * __this, Object_t * ___other, MethodInfo* method)
{
	Vector4_t160  V_0 = {0};
	int32_t G_B7_0 = 0;
	{
		Object_t * L_0 = ___other;
		if (((Object_t *)IsInst(L_0, InitializedTypeInfo(&Vector4_t160_il2cpp_TypeInfo))))
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		Object_t * L_1 = ___other;
		V_0 = ((*(Vector4_t160 *)((Vector4_t160 *)UnBox (L_1, InitializedTypeInfo(&Vector4_t160_il2cpp_TypeInfo)))));
		float* L_2 = &(__this->___x_1);
		float L_3 = ((&V_0)->___x_1);
		bool L_4 = Single_Equals_m3359(L_2, L_3, /*hidden argument*/&Single_Equals_m3359_MethodInfo);
		if (!L_4)
		{
			goto IL_006d;
		}
	}
	{
		float* L_5 = &(__this->___y_2);
		float L_6 = ((&V_0)->___y_2);
		bool L_7 = Single_Equals_m3359(L_5, L_6, /*hidden argument*/&Single_Equals_m3359_MethodInfo);
		if (!L_7)
		{
			goto IL_006d;
		}
	}
	{
		float* L_8 = &(__this->___z_3);
		float L_9 = ((&V_0)->___z_3);
		bool L_10 = Single_Equals_m3359(L_8, L_9, /*hidden argument*/&Single_Equals_m3359_MethodInfo);
		if (!L_10)
		{
			goto IL_006d;
		}
	}
	{
		float* L_11 = &(__this->___w_4);
		float L_12 = ((&V_0)->___w_4);
		bool L_13 = Single_Equals_m3359(L_11, L_12, /*hidden argument*/&Single_Equals_m3359_MethodInfo);
		G_B7_0 = ((int32_t)(L_13));
		goto IL_006e;
	}

IL_006d:
	{
		G_B7_0 = 0;
	}

IL_006e:
	{
		return G_B7_0;
	}
}
// System.String UnityEngine.Vector4::ToString()
extern MethodInfo Vector4_ToString_m2538_MethodInfo;
extern TypeInfo* ObjectU5BU5D_t269_il2cpp_TypeInfo_var;
extern "C" String_t* Vector4_ToString_m2538 (Vector4_t160 * __this, MethodInfo* method)
{
	static bool Vector4_ToString_m2538_init;
	if (!Vector4_ToString_m2538_init)
	{
		ObjectU5BU5D_t269_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t269_0_0_0);
		Vector4_ToString_m2538_init = true;
	}
	{
		ObjectU5BU5D_t269* L_0 = ((ObjectU5BU5D_t269*)SZArrayNew(ObjectU5BU5D_t269_il2cpp_TypeInfo_var, 4));
		float L_1 = (__this->___x_1);
		float L_2 = L_1;
		Object_t * L_3 = Box(InitializedTypeInfo(&Single_t23_il2cpp_TypeInfo), &L_2);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_3;
		ObjectU5BU5D_t269* L_4 = L_0;
		float L_5 = (__this->___y_2);
		float L_6 = L_5;
		Object_t * L_7 = Box(InitializedTypeInfo(&Single_t23_il2cpp_TypeInfo), &L_6);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 1)) = (Object_t *)L_7;
		ObjectU5BU5D_t269* L_8 = L_4;
		float L_9 = (__this->___z_3);
		float L_10 = L_9;
		Object_t * L_11 = Box(InitializedTypeInfo(&Single_t23_il2cpp_TypeInfo), &L_10);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 2);
		ArrayElementTypeCheck (L_8, L_11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 2)) = (Object_t *)L_11;
		ObjectU5BU5D_t269* L_12 = L_8;
		float L_13 = (__this->___w_4);
		float L_14 = L_13;
		Object_t * L_15 = Box(InitializedTypeInfo(&Single_t23_il2cpp_TypeInfo), &L_14);
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 3);
		ArrayElementTypeCheck (L_12, L_15);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_12, 3)) = (Object_t *)L_15;
		String_t* L_16 = UnityString_Format_m2626(NULL /*static, unused*/, (String_t*) &_stringLiteral142, L_12, /*hidden argument*/&UnityString_Format_m2626_MethodInfo);
		return L_16;
	}
}
// System.Single UnityEngine.Vector4::Dot(UnityEngine.Vector4,UnityEngine.Vector4)
extern "C" float Vector4_Dot_m2539 (Object_t * __this /* static, unused */, Vector4_t160  ___a, Vector4_t160  ___b, MethodInfo* method)
{
	{
		float L_0 = ((&___a)->___x_1);
		float L_1 = ((&___b)->___x_1);
		float L_2 = ((&___a)->___y_2);
		float L_3 = ((&___b)->___y_2);
		float L_4 = ((&___a)->___z_3);
		float L_5 = ((&___b)->___z_3);
		float L_6 = ((&___a)->___w_4);
		float L_7 = ((&___b)->___w_4);
		return ((float)((float)((float)((float)((float)((float)((float)((float)L_0*(float)L_1))+(float)((float)((float)L_2*(float)L_3))))+(float)((float)((float)L_4*(float)L_5))))+(float)((float)((float)L_6*(float)L_7))));
	}
}
// System.Single UnityEngine.Vector4::SqrMagnitude(UnityEngine.Vector4)
extern "C" float Vector4_SqrMagnitude_m2540 (Object_t * __this /* static, unused */, Vector4_t160  ___a, MethodInfo* method)
{
	{
		Vector4_t160  L_0 = ___a;
		Vector4_t160  L_1 = ___a;
		float L_2 = Vector4_Dot_m2539(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Vector4_Dot_m2539_MethodInfo);
		return L_2;
	}
}
// System.Single UnityEngine.Vector4::get_sqrMagnitude()
extern MethodInfo Vector4_get_sqrMagnitude_m1576_MethodInfo;
extern "C" float Vector4_get_sqrMagnitude_m1576 (Vector4_t160 * __this, MethodInfo* method)
{
	{
		float L_0 = Vector4_Dot_m2539(NULL /*static, unused*/, (*(Vector4_t160 *)__this), (*(Vector4_t160 *)__this), /*hidden argument*/&Vector4_Dot_m2539_MethodInfo);
		return L_0;
	}
}
// UnityEngine.Vector4 UnityEngine.Vector4::get_zero()
extern MethodInfo Vector4_get_zero_m1583_MethodInfo;
extern "C" Vector4_t160  Vector4_get_zero_m1583 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		Vector4_t160  L_0 = {0};
		Vector4__ctor_m1511(&L_0, (0.0f), (0.0f), (0.0f), (0.0f), /*hidden argument*/&Vector4__ctor_m1511_MethodInfo);
		return L_0;
	}
}
// UnityEngine.Vector4 UnityEngine.Vector4::op_Subtraction(UnityEngine.Vector4,UnityEngine.Vector4)
extern "C" Vector4_t160  Vector4_op_Subtraction_m2541 (Object_t * __this /* static, unused */, Vector4_t160  ___a, Vector4_t160  ___b, MethodInfo* method)
{
	{
		float L_0 = ((&___a)->___x_1);
		float L_1 = ((&___b)->___x_1);
		float L_2 = ((&___a)->___y_2);
		float L_3 = ((&___b)->___y_2);
		float L_4 = ((&___a)->___z_3);
		float L_5 = ((&___b)->___z_3);
		float L_6 = ((&___a)->___w_4);
		float L_7 = ((&___b)->___w_4);
		Vector4_t160  L_8 = {0};
		Vector4__ctor_m1511(&L_8, ((float)((float)L_0-(float)L_1)), ((float)((float)L_2-(float)L_3)), ((float)((float)L_4-(float)L_5)), ((float)((float)L_6-(float)L_7)), /*hidden argument*/&Vector4__ctor_m1511_MethodInfo);
		return L_8;
	}
}
// UnityEngine.Vector4 UnityEngine.Vector4::op_Division(UnityEngine.Vector4,System.Single)
extern MethodInfo Vector4_op_Division_m1596_MethodInfo;
extern "C" Vector4_t160  Vector4_op_Division_m1596 (Object_t * __this /* static, unused */, Vector4_t160  ___a, float ___d, MethodInfo* method)
{
	{
		float L_0 = ((&___a)->___x_1);
		float L_1 = ___d;
		float L_2 = ((&___a)->___y_2);
		float L_3 = ___d;
		float L_4 = ((&___a)->___z_3);
		float L_5 = ___d;
		float L_6 = ((&___a)->___w_4);
		float L_7 = ___d;
		Vector4_t160  L_8 = {0};
		Vector4__ctor_m1511(&L_8, ((float)((float)L_0/(float)L_1)), ((float)((float)L_2/(float)L_3)), ((float)((float)L_4/(float)L_5)), ((float)((float)L_6/(float)L_7)), /*hidden argument*/&Vector4__ctor_m1511_MethodInfo);
		return L_8;
	}
}
// System.Boolean UnityEngine.Vector4::op_Equality(UnityEngine.Vector4,UnityEngine.Vector4)
extern "C" bool Vector4_op_Equality_m2542 (Object_t * __this /* static, unused */, Vector4_t160  ___lhs, Vector4_t160  ___rhs, MethodInfo* method)
{
	{
		Vector4_t160  L_0 = ___lhs;
		Vector4_t160  L_1 = ___rhs;
		Vector4_t160  L_2 = Vector4_op_Subtraction_m2541(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Vector4_op_Subtraction_m2541_MethodInfo);
		float L_3 = Vector4_SqrMagnitude_m2540(NULL /*static, unused*/, L_2, /*hidden argument*/&Vector4_SqrMagnitude_m2540_MethodInfo);
		return ((((float)L_3) < ((float)(9.99999944E-11f)))? 1 : 0);
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Ray_t279_il2cpp_TypeInfo;
// UnityEngine.Ray
#include "UnityEngine_UnityEngine_RayMethodDeclarations.h"



// System.Void UnityEngine.Ray::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
extern MethodInfo Ray__ctor_m2543_MethodInfo;
extern "C" void Ray__ctor_m2543 (Ray_t279 * __this, Vector3_t6  ___origin, Vector3_t6  ___direction, MethodInfo* method)
{
	{
		Vector3_t6  L_0 = ___origin;
		__this->___m_Origin_0 = L_0;
		Vector3_t6  L_1 = Vector3_get_normalized_m1795((&___direction), /*hidden argument*/&Vector3_get_normalized_m1795_MethodInfo);
		__this->___m_Direction_1 = L_1;
		return;
	}
}
// UnityEngine.Vector3 UnityEngine.Ray::get_origin()
extern MethodInfo Ray_get_origin_m1425_MethodInfo;
extern "C" Vector3_t6  Ray_get_origin_m1425 (Ray_t279 * __this, MethodInfo* method)
{
	{
		Vector3_t6  L_0 = (__this->___m_Origin_0);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Ray::get_direction()
extern MethodInfo Ray_get_direction_m1426_MethodInfo;
extern "C" Vector3_t6  Ray_get_direction_m1426 (Ray_t279 * __this, MethodInfo* method)
{
	{
		Vector3_t6  L_0 = (__this->___m_Direction_1);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Ray::GetPoint(System.Single)
extern MethodInfo Ray_GetPoint_m1659_MethodInfo;
extern "C" Vector3_t6  Ray_GetPoint_m1659 (Ray_t279 * __this, float ___distance, MethodInfo* method)
{
	{
		Vector3_t6  L_0 = (__this->___m_Origin_0);
		Vector3_t6  L_1 = (__this->___m_Direction_1);
		float L_2 = ___distance;
		Vector3_t6  L_3 = Vector3_op_Multiply_m1840(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/&Vector3_op_Multiply_m1840_MethodInfo);
		Vector3_t6  L_4 = Vector3_op_Addition_m1712(NULL /*static, unused*/, L_0, L_3, /*hidden argument*/&Vector3_op_Addition_m1712_MethodInfo);
		return L_4;
	}
}
// System.String UnityEngine.Ray::ToString()
extern MethodInfo Ray_ToString_m2544_MethodInfo;
extern TypeInfo* ObjectU5BU5D_t269_il2cpp_TypeInfo_var;
extern "C" String_t* Ray_ToString_m2544 (Ray_t279 * __this, MethodInfo* method)
{
	static bool Ray_ToString_m2544_init;
	if (!Ray_ToString_m2544_init)
	{
		ObjectU5BU5D_t269_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t269_0_0_0);
		Ray_ToString_m2544_init = true;
	}
	{
		ObjectU5BU5D_t269* L_0 = ((ObjectU5BU5D_t269*)SZArrayNew(ObjectU5BU5D_t269_il2cpp_TypeInfo_var, 2));
		Vector3_t6  L_1 = (__this->___m_Origin_0);
		Vector3_t6  L_2 = L_1;
		Object_t * L_3 = Box(InitializedTypeInfo(&Vector3_t6_il2cpp_TypeInfo), &L_2);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_3;
		ObjectU5BU5D_t269* L_4 = L_0;
		Vector3_t6  L_5 = (__this->___m_Direction_1);
		Vector3_t6  L_6 = L_5;
		Object_t * L_7 = Box(InitializedTypeInfo(&Vector3_t6_il2cpp_TypeInfo), &L_6);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 1)) = (Object_t *)L_7;
		String_t* L_8 = UnityString_Format_m2626(NULL /*static, unused*/, (String_t*) &_stringLiteral149, L_4, /*hidden argument*/&UnityString_Format_m2626_MethodInfo);
		return L_8;
	}
}
// UnityEngine.Plane
#include "UnityEngine_UnityEngine_Plane.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Plane_t310_il2cpp_TypeInfo;
// UnityEngine.Plane
#include "UnityEngine_UnityEngine_PlaneMethodDeclarations.h"

extern MethodInfo Plane_get_normal_m2545_MethodInfo;
extern MethodInfo Plane_get_distance_m2546_MethodInfo;
extern MethodInfo Mathf_Approximately_m1400_MethodInfo;


// System.Void UnityEngine.Plane::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
extern MethodInfo Plane__ctor_m1657_MethodInfo;
extern "C" void Plane__ctor_m1657 (Plane_t310 * __this, Vector3_t6  ___inNormal, Vector3_t6  ___inPoint, MethodInfo* method)
{
	{
		Vector3_t6  L_0 = ___inNormal;
		Vector3_t6  L_1 = Vector3_Normalize_m2445(NULL /*static, unused*/, L_0, /*hidden argument*/&Vector3_Normalize_m2445_MethodInfo);
		__this->___m_Normal_0 = L_1;
		Vector3_t6  L_2 = ___inNormal;
		Vector3_t6  L_3 = ___inPoint;
		float L_4 = Vector3_Dot_m1555(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/&Vector3_Dot_m1555_MethodInfo);
		__this->___m_Distance_1 = ((-L_4));
		return;
	}
}
// UnityEngine.Vector3 UnityEngine.Plane::get_normal()
extern "C" Vector3_t6  Plane_get_normal_m2545 (Plane_t310 * __this, MethodInfo* method)
{
	{
		Vector3_t6  L_0 = (__this->___m_Normal_0);
		return L_0;
	}
}
// System.Single UnityEngine.Plane::get_distance()
extern "C" float Plane_get_distance_m2546 (Plane_t310 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Distance_1);
		return L_0;
	}
}
// System.Boolean UnityEngine.Plane::Raycast(UnityEngine.Ray,System.Single&)
extern MethodInfo Plane_Raycast_m1658_MethodInfo;
extern "C" bool Plane_Raycast_m1658 (Plane_t310 * __this, Ray_t279  ___ray, float* ___enter, MethodInfo* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		Vector3_t6  L_0 = Ray_get_direction_m1426((&___ray), /*hidden argument*/&Ray_get_direction_m1426_MethodInfo);
		Vector3_t6  L_1 = Plane_get_normal_m2545(__this, /*hidden argument*/&Plane_get_normal_m2545_MethodInfo);
		float L_2 = Vector3_Dot_m1555(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Vector3_Dot_m1555_MethodInfo);
		V_0 = L_2;
		Vector3_t6  L_3 = Ray_get_origin_m1425((&___ray), /*hidden argument*/&Ray_get_origin_m1425_MethodInfo);
		Vector3_t6  L_4 = Plane_get_normal_m2545(__this, /*hidden argument*/&Plane_get_normal_m2545_MethodInfo);
		float L_5 = Vector3_Dot_m1555(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/&Vector3_Dot_m1555_MethodInfo);
		float L_6 = Plane_get_distance_m2546(__this, /*hidden argument*/&Plane_get_distance_m2546_MethodInfo);
		V_1 = ((float)((float)((-L_5))-(float)L_6));
		float L_7 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t270_il2cpp_TypeInfo));
		bool L_8 = Mathf_Approximately_m1400(NULL /*static, unused*/, L_7, (0.0f), /*hidden argument*/&Mathf_Approximately_m1400_MethodInfo);
		if (!L_8)
		{
			goto IL_0047;
		}
	}
	{
		float* L_9 = ___enter;
		*((float*)(L_9)) = (float)(0.0f);
		return 0;
	}

IL_0047:
	{
		float* L_10 = ___enter;
		float L_11 = V_1;
		float L_12 = V_0;
		*((float*)(L_10)) = (float)((float)((float)L_11/(float)L_12));
		float* L_13 = ___enter;
		return ((((float)(*((float*)L_13))) > ((float)(0.0f)))? 1 : 0);
	}
}
// UnityEngineInternal.MathfInternal
#include "UnityEngine_UnityEngineInternal_MathfInternal.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo MathfInternal_t490_il2cpp_TypeInfo;
// UnityEngineInternal.MathfInternal
#include "UnityEngine_UnityEngineInternal_MathfInternalMethodDeclarations.h"



// System.Void UnityEngineInternal.MathfInternal::.cctor()
extern MethodInfo MathfInternal__cctor_m2547_MethodInfo;
extern "C" void MathfInternal__cctor_m2547 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		((MathfInternal_t490_StaticFields*)InitializedTypeInfo(&MathfInternal_t490_il2cpp_TypeInfo)->static_fields)->___FloatMinNormal_0 = (1.17549435E-38f);
		((MathfInternal_t490_StaticFields*)InitializedTypeInfo(&MathfInternal_t490_il2cpp_TypeInfo)->static_fields)->___FloatMinDenormal_1 = (1.401298E-45f);
		float L_0 = ((MathfInternal_t490_StaticFields*)InitializedTypeInfo(&MathfInternal_t490_il2cpp_TypeInfo)->static_fields)->___FloatMinDenormal_1;
		((MathfInternal_t490_StaticFields*)InitializedTypeInfo(&MathfInternal_t490_il2cpp_TypeInfo)->static_fields)->___IsFlushToZeroEnabled_2 = ((((float)L_0) == ((float)(0.0f)))? 1 : 0);
		return;
	}
}
// UnityEngine.Mathf
#include "UnityEngine_UnityEngine_Mathf.h"
#ifndef _MSC_VER
#else
#endif

// System.Math
#include "mscorlib_System_MathMethodDeclarations.h"
extern MethodInfo Math_Sin_m3361_MethodInfo;
extern MethodInfo Math_Cos_m3362_MethodInfo;
extern MethodInfo Math_Sqrt_m3363_MethodInfo;
extern MethodInfo Math_Abs_m3364_MethodInfo;
extern MethodInfo Math_Pow_m3365_MethodInfo;
extern MethodInfo Math_Log_m3366_MethodInfo;
extern MethodInfo Math_Floor_m3367_MethodInfo;
extern MethodInfo Math_Round_m3368_MethodInfo;
extern MethodInfo Math_Ceiling_m3369_MethodInfo;
extern MethodInfo Mathf_Abs_m1357_MethodInfo;
extern MethodInfo Mathf_Floor_m1709_MethodInfo;


// System.Void UnityEngine.Mathf::.cctor()
extern MethodInfo Mathf__cctor_m2548_MethodInfo;
extern "C" void Mathf__cctor_m2548 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	float G_B3_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&MathfInternal_t490_il2cpp_TypeInfo));
		bool L_0 = ((MathfInternal_t490_StaticFields*)InitializedTypeInfo(&MathfInternal_t490_il2cpp_TypeInfo)->static_fields)->___IsFlushToZeroEnabled_2;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&MathfInternal_t490_il2cpp_TypeInfo));
		float L_1 = ((MathfInternal_t490_StaticFields*)InitializedTypeInfo(&MathfInternal_t490_il2cpp_TypeInfo)->static_fields)->___FloatMinNormal_0;
		G_B3_0 = L_1;
		goto IL_001d;
	}

IL_0016:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&MathfInternal_t490_il2cpp_TypeInfo));
		float L_2 = ((MathfInternal_t490_StaticFields*)InitializedTypeInfo(&MathfInternal_t490_il2cpp_TypeInfo)->static_fields)->___FloatMinDenormal_1;
		G_B3_0 = L_2;
	}

IL_001d:
	{
		((Mathf_t270_StaticFields*)InitializedTypeInfo(&Mathf_t270_il2cpp_TypeInfo)->static_fields)->___Epsilon_0 = G_B3_0;
		return;
	}
}
// System.Single UnityEngine.Mathf::Sin(System.Single)
extern MethodInfo Mathf_Sin_m1606_MethodInfo;
extern "C" float Mathf_Sin_m1606 (Object_t * __this /* static, unused */, float ___f, MethodInfo* method)
{
	{
		float L_0 = ___f;
		double L_1 = sin((((double)L_0)));
		return (((float)L_1));
	}
}
// System.Single UnityEngine.Mathf::Cos(System.Single)
extern MethodInfo Mathf_Cos_m1605_MethodInfo;
extern "C" float Mathf_Cos_m1605 (Object_t * __this /* static, unused */, float ___f, MethodInfo* method)
{
	{
		float L_0 = ___f;
		double L_1 = cos((((double)L_0)));
		return (((float)L_1));
	}
}
// System.Single UnityEngine.Mathf::Sqrt(System.Single)
extern "C" float Mathf_Sqrt_m1868 (Object_t * __this /* static, unused */, float ___f, MethodInfo* method)
{
	{
		float L_0 = ___f;
		double L_1 = sqrt((((double)L_0)));
		return (((float)L_1));
	}
}
// System.Single UnityEngine.Mathf::Abs(System.Single)
extern "C" float Mathf_Abs_m1357 (Object_t * __this /* static, unused */, float ___f, MethodInfo* method)
{
	{
		float L_0 = ___f;
		float L_1 = fabsf(L_0);
		return (((float)L_1));
	}
}
// System.Single UnityEngine.Mathf::Min(System.Single,System.Single)
extern "C" float Mathf_Min_m1861 (Object_t * __this /* static, unused */, float ___a, float ___b, MethodInfo* method)
{
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___a;
		float L_1 = ___b;
		if ((!(((float)L_0) < ((float)L_1))))
		{
			goto IL_000d;
		}
	}
	{
		float L_2 = ___a;
		G_B3_0 = L_2;
		goto IL_000e;
	}

IL_000d:
	{
		float L_3 = ___b;
		G_B3_0 = L_3;
	}

IL_000e:
	{
		return G_B3_0;
	}
}
// System.Int32 UnityEngine.Mathf::Min(System.Int32,System.Int32)
extern "C" int32_t Mathf_Min_m1677 (Object_t * __this /* static, unused */, int32_t ___a, int32_t ___b, MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___a;
		int32_t L_1 = ___b;
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_2 = ___a;
		G_B3_0 = L_2;
		goto IL_000e;
	}

IL_000d:
	{
		int32_t L_3 = ___b;
		G_B3_0 = L_3;
	}

IL_000e:
	{
		return G_B3_0;
	}
}
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
extern "C" float Mathf_Max_m1801 (Object_t * __this /* static, unused */, float ___a, float ___b, MethodInfo* method)
{
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___a;
		float L_1 = ___b;
		if ((!(((float)L_0) > ((float)L_1))))
		{
			goto IL_000d;
		}
	}
	{
		float L_2 = ___a;
		G_B3_0 = L_2;
		goto IL_000e;
	}

IL_000d:
	{
		float L_3 = ___b;
		G_B3_0 = L_3;
	}

IL_000e:
	{
		return G_B3_0;
	}
}
// System.Int32 UnityEngine.Mathf::Max(System.Int32,System.Int32)
extern "C" int32_t Mathf_Max_m1675 (Object_t * __this /* static, unused */, int32_t ___a, int32_t ___b, MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___a;
		int32_t L_1 = ___b;
		if ((((int32_t)L_0) <= ((int32_t)L_1)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_2 = ___a;
		G_B3_0 = L_2;
		goto IL_000e;
	}

IL_000d:
	{
		int32_t L_3 = ___b;
		G_B3_0 = L_3;
	}

IL_000e:
	{
		return G_B3_0;
	}
}
// System.Single UnityEngine.Mathf::Pow(System.Single,System.Single)
extern MethodInfo Mathf_Pow_m1767_MethodInfo;
extern "C" float Mathf_Pow_m1767 (Object_t * __this /* static, unused */, float ___f, float ___p, MethodInfo* method)
{
	{
		float L_0 = ___f;
		float L_1 = ___p;
		double L_2 = pow((((double)L_0)), (((double)L_1)));
		return (((float)L_2));
	}
}
// System.Single UnityEngine.Mathf::Log(System.Single,System.Single)
extern MethodInfo Mathf_Log_m1860_MethodInfo;
extern "C" float Mathf_Log_m1860 (Object_t * __this /* static, unused */, float ___f, float ___p, MethodInfo* method)
{
	{
		float L_0 = ___f;
		float L_1 = ___p;
		double L_2 = Math_Log_m3366(NULL /*static, unused*/, (((double)L_0)), (((double)L_1)), /*hidden argument*/&Math_Log_m3366_MethodInfo);
		return (((float)L_2));
	}
}
// System.Single UnityEngine.Mathf::Floor(System.Single)
extern "C" float Mathf_Floor_m1709 (Object_t * __this /* static, unused */, float ___f, MethodInfo* method)
{
	{
		float L_0 = ___f;
		double L_1 = floor((((double)L_0)));
		return (((float)L_1));
	}
}
// System.Single UnityEngine.Mathf::Round(System.Single)
extern "C" float Mathf_Round_m1752 (Object_t * __this /* static, unused */, float ___f, MethodInfo* method)
{
	{
		float L_0 = ___f;
		double L_1 = round((((double)L_0)));
		return (((float)L_1));
	}
}
// System.Int32 UnityEngine.Mathf::CeilToInt(System.Single)
extern MethodInfo Mathf_CeilToInt_m1867_MethodInfo;
extern "C" int32_t Mathf_CeilToInt_m1867 (Object_t * __this /* static, unused */, float ___f, MethodInfo* method)
{
	{
		float L_0 = ___f;
		double L_1 = ceil((((double)L_0)));
		return (((int32_t)L_1));
	}
}
// System.Int32 UnityEngine.Mathf::FloorToInt(System.Single)
extern MethodInfo Mathf_FloorToInt_m1870_MethodInfo;
extern "C" int32_t Mathf_FloorToInt_m1870 (Object_t * __this /* static, unused */, float ___f, MethodInfo* method)
{
	{
		float L_0 = ___f;
		double L_1 = floor((((double)L_0)));
		return (((int32_t)L_1));
	}
}
// System.Int32 UnityEngine.Mathf::RoundToInt(System.Single)
extern MethodInfo Mathf_RoundToInt_m1585_MethodInfo;
extern "C" int32_t Mathf_RoundToInt_m1585 (Object_t * __this /* static, unused */, float ___f, MethodInfo* method)
{
	{
		float L_0 = ___f;
		double L_1 = round((((double)L_0)));
		return (((int32_t)L_1));
	}
}
// System.Single UnityEngine.Mathf::Sign(System.Single)
extern MethodInfo Mathf_Sign_m1772_MethodInfo;
extern "C" float Mathf_Sign_m1772 (Object_t * __this /* static, unused */, float ___f, MethodInfo* method)
{
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___f;
		if ((!(((float)L_0) >= ((float)(0.0f)))))
		{
			goto IL_0015;
		}
	}
	{
		G_B3_0 = (1.0f);
		goto IL_001a;
	}

IL_0015:
	{
		G_B3_0 = (-1.0f);
	}

IL_001a:
	{
		return G_B3_0;
	}
}
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
extern "C" float Mathf_Clamp_m1582 (Object_t * __this /* static, unused */, float ___value, float ___min, float ___max, MethodInfo* method)
{
	{
		float L_0 = ___value;
		float L_1 = ___min;
		if ((!(((float)L_0) < ((float)L_1))))
		{
			goto IL_000f;
		}
	}
	{
		float L_2 = ___min;
		___value = L_2;
		goto IL_0019;
	}

IL_000f:
	{
		float L_3 = ___value;
		float L_4 = ___max;
		if ((!(((float)L_3) > ((float)L_4))))
		{
			goto IL_0019;
		}
	}
	{
		float L_5 = ___max;
		___value = L_5;
	}

IL_0019:
	{
		float L_6 = ___value;
		return L_6;
	}
}
// System.Int32 UnityEngine.Mathf::Clamp(System.Int32,System.Int32,System.Int32)
extern MethodInfo Mathf_Clamp_m1475_MethodInfo;
extern "C" int32_t Mathf_Clamp_m1475 (Object_t * __this /* static, unused */, int32_t ___value, int32_t ___min, int32_t ___max, MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		int32_t L_1 = ___min;
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_000f;
		}
	}
	{
		int32_t L_2 = ___min;
		___value = L_2;
		goto IL_0019;
	}

IL_000f:
	{
		int32_t L_3 = ___value;
		int32_t L_4 = ___max;
		if ((((int32_t)L_3) <= ((int32_t)L_4)))
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_5 = ___max;
		___value = L_5;
	}

IL_0019:
	{
		int32_t L_6 = ___value;
		return L_6;
	}
}
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
extern "C" float Mathf_Clamp01_m1573 (Object_t * __this /* static, unused */, float ___value, MethodInfo* method)
{
	{
		float L_0 = ___value;
		if ((!(((float)L_0) < ((float)(0.0f)))))
		{
			goto IL_0011;
		}
	}
	{
		return (0.0f);
	}

IL_0011:
	{
		float L_1 = ___value;
		if ((!(((float)L_1) > ((float)(1.0f)))))
		{
			goto IL_0022;
		}
	}
	{
		return (1.0f);
	}

IL_0022:
	{
		float L_2 = ___value;
		return L_2;
	}
}
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
extern "C" float Mathf_Lerp_m1604 (Object_t * __this /* static, unused */, float ___from, float ___to, float ___t, MethodInfo* method)
{
	{
		float L_0 = ___from;
		float L_1 = ___to;
		float L_2 = ___from;
		float L_3 = ___t;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t270_il2cpp_TypeInfo));
		float L_4 = Mathf_Clamp01_m1573(NULL /*static, unused*/, L_3, /*hidden argument*/&Mathf_Clamp01_m1573_MethodInfo);
		return ((float)((float)L_0+(float)((float)((float)((float)((float)L_1-(float)L_2))*(float)L_4))));
	}
}
// System.Boolean UnityEngine.Mathf::Approximately(System.Single,System.Single)
extern "C" bool Mathf_Approximately_m1400 (Object_t * __this /* static, unused */, float ___a, float ___b, MethodInfo* method)
{
	{
		float L_0 = ___b;
		float L_1 = ___a;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t270_il2cpp_TypeInfo));
		float L_2 = fabsf(((float)((float)L_0-(float)L_1)));
		float L_3 = ___a;
		float L_4 = fabsf(L_3);
		float L_5 = ___b;
		float L_6 = fabsf(L_5);
		float L_7 = Mathf_Max_m1801(NULL /*static, unused*/, L_4, L_6, /*hidden argument*/&Mathf_Max_m1801_MethodInfo);
		float L_8 = ((Mathf_t270_StaticFields*)InitializedTypeInfo(&Mathf_t270_il2cpp_TypeInfo)->static_fields)->___Epsilon_0;
		float L_9 = Mathf_Max_m1801(NULL /*static, unused*/, ((float)((float)(1.0E-06f)*(float)L_7)), ((float)((float)L_8*(float)(8.0f))), /*hidden argument*/&Mathf_Max_m1801_MethodInfo);
		return ((((float)L_2) < ((float)L_9))? 1 : 0);
	}
}
// System.Single UnityEngine.Mathf::SmoothDamp(System.Single,System.Single,System.Single&,System.Single,System.Single,System.Single)
extern MethodInfo Mathf_SmoothDamp_m1766_MethodInfo;
extern "C" float Mathf_SmoothDamp_m1766 (Object_t * __this /* static, unused */, float ___current, float ___target, float* ___currentVelocity, float ___smoothTime, float ___maxSpeed, float ___deltaTime, MethodInfo* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	{
		float L_0 = ___smoothTime;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t270_il2cpp_TypeInfo));
		float L_1 = Mathf_Max_m1801(NULL /*static, unused*/, (0.0001f), L_0, /*hidden argument*/&Mathf_Max_m1801_MethodInfo);
		___smoothTime = L_1;
		float L_2 = ___smoothTime;
		V_0 = ((float)((float)(2.0f)/(float)L_2));
		float L_3 = V_0;
		float L_4 = ___deltaTime;
		V_1 = ((float)((float)L_3*(float)L_4));
		float L_5 = V_1;
		float L_6 = V_1;
		float L_7 = V_1;
		float L_8 = V_1;
		float L_9 = V_1;
		float L_10 = V_1;
		V_2 = ((float)((float)(1.0f)/(float)((float)((float)((float)((float)((float)((float)(1.0f)+(float)L_5))+(float)((float)((float)((float)((float)(0.48f)*(float)L_6))*(float)L_7))))+(float)((float)((float)((float)((float)((float)((float)(0.235f)*(float)L_8))*(float)L_9))*(float)L_10))))));
		float L_11 = ___current;
		float L_12 = ___target;
		V_3 = ((float)((float)L_11-(float)L_12));
		float L_13 = ___target;
		V_4 = L_13;
		float L_14 = ___maxSpeed;
		float L_15 = ___smoothTime;
		V_5 = ((float)((float)L_14*(float)L_15));
		float L_16 = V_3;
		float L_17 = V_5;
		float L_18 = V_5;
		float L_19 = Mathf_Clamp_m1582(NULL /*static, unused*/, L_16, ((-L_17)), L_18, /*hidden argument*/&Mathf_Clamp_m1582_MethodInfo);
		V_3 = L_19;
		float L_20 = ___current;
		float L_21 = V_3;
		___target = ((float)((float)L_20-(float)L_21));
		float* L_22 = ___currentVelocity;
		float L_23 = V_0;
		float L_24 = V_3;
		float L_25 = ___deltaTime;
		V_6 = ((float)((float)((float)((float)(*((float*)L_22))+(float)((float)((float)L_23*(float)L_24))))*(float)L_25));
		float* L_26 = ___currentVelocity;
		float* L_27 = ___currentVelocity;
		float L_28 = V_0;
		float L_29 = V_6;
		float L_30 = V_2;
		*((float*)(L_26)) = (float)((float)((float)((float)((float)(*((float*)L_27))-(float)((float)((float)L_28*(float)L_29))))*(float)L_30));
		float L_31 = ___target;
		float L_32 = V_3;
		float L_33 = V_6;
		float L_34 = V_2;
		V_7 = ((float)((float)L_31+(float)((float)((float)((float)((float)L_32+(float)L_33))*(float)L_34))));
		float L_35 = V_4;
		float L_36 = ___current;
		float L_37 = V_7;
		float L_38 = V_4;
		if ((!(((uint32_t)((((float)((float)((float)L_35-(float)L_36))) > ((float)(0.0f)))? 1 : 0)) == ((uint32_t)((((float)L_37) > ((float)L_38))? 1 : 0)))))
		{
			goto IL_00a0;
		}
	}
	{
		float L_39 = V_4;
		V_7 = L_39;
		float* L_40 = ___currentVelocity;
		float L_41 = V_7;
		float L_42 = V_4;
		float L_43 = ___deltaTime;
		*((float*)(L_40)) = (float)((float)((float)((float)((float)L_41-(float)L_42))/(float)L_43));
	}

IL_00a0:
	{
		float L_44 = V_7;
		return L_44;
	}
}
// System.Single UnityEngine.Mathf::Repeat(System.Single,System.Single)
extern MethodInfo Mathf_Repeat_m1619_MethodInfo;
extern "C" float Mathf_Repeat_m1619 (Object_t * __this /* static, unused */, float ___t, float ___length, MethodInfo* method)
{
	{
		float L_0 = ___t;
		float L_1 = ___t;
		float L_2 = ___length;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t270_il2cpp_TypeInfo));
		float L_3 = floorf(((float)((float)L_1/(float)L_2)));
		float L_4 = ___length;
		return ((float)((float)L_0-(float)((float)((float)L_3*(float)L_4))));
	}
}
// System.Single UnityEngine.Mathf::InverseLerp(System.Single,System.Single,System.Single)
extern MethodInfo Mathf_InverseLerp_m1618_MethodInfo;
extern "C" float Mathf_InverseLerp_m1618 (Object_t * __this /* static, unused */, float ___from, float ___to, float ___value, MethodInfo* method)
{
	{
		float L_0 = ___from;
		float L_1 = ___to;
		if ((!(((float)L_0) < ((float)L_1))))
		{
			goto IL_002f;
		}
	}
	{
		float L_2 = ___value;
		float L_3 = ___from;
		if ((!(((float)L_2) < ((float)L_3))))
		{
			goto IL_0014;
		}
	}
	{
		return (0.0f);
	}

IL_0014:
	{
		float L_4 = ___value;
		float L_5 = ___to;
		if ((!(((float)L_4) > ((float)L_5))))
		{
			goto IL_0021;
		}
	}
	{
		return (1.0f);
	}

IL_0021:
	{
		float L_6 = ___value;
		float L_7 = ___from;
		___value = ((float)((float)L_6-(float)L_7));
		float L_8 = ___value;
		float L_9 = ___to;
		float L_10 = ___from;
		___value = ((float)((float)L_8/(float)((float)((float)L_9-(float)L_10))));
		float L_11 = ___value;
		return L_11;
	}

IL_002f:
	{
		float L_12 = ___from;
		float L_13 = ___to;
		if ((!(((float)L_12) > ((float)L_13))))
		{
			goto IL_005e;
		}
	}
	{
		float L_14 = ___value;
		float L_15 = ___to;
		if ((!(((float)L_14) < ((float)L_15))))
		{
			goto IL_0043;
		}
	}
	{
		return (1.0f);
	}

IL_0043:
	{
		float L_16 = ___value;
		float L_17 = ___from;
		if ((!(((float)L_16) > ((float)L_17))))
		{
			goto IL_0050;
		}
	}
	{
		return (0.0f);
	}

IL_0050:
	{
		float L_18 = ___value;
		float L_19 = ___to;
		float L_20 = ___from;
		float L_21 = ___to;
		return ((float)((float)(1.0f)-(float)((float)((float)((float)((float)L_18-(float)L_19))/(float)((float)((float)L_20-(float)L_21))))));
	}

IL_005e:
	{
		return (0.0f);
	}
}
// UnityEngine.DrivenTransformProperties
#include "UnityEngine_UnityEngine_DrivenTransformProperties.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo DrivenTransformProperties_t491_il2cpp_TypeInfo;
// UnityEngine.DrivenTransformProperties
#include "UnityEngine_UnityEngine_DrivenTransformPropertiesMethodDeclarations.h"



// UnityEngine.DrivenRectTransformTracker
#include "UnityEngine_UnityEngine_DrivenRectTransformTracker.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo DrivenRectTransformTracker_t195_il2cpp_TypeInfo;
// UnityEngine.DrivenRectTransformTracker
#include "UnityEngine_UnityEngine_DrivenRectTransformTrackerMethodDeclarations.h"

// UnityEngine.RectTransform
#include "UnityEngine_UnityEngine_RectTransform.h"


// System.Void UnityEngine.DrivenRectTransformTracker::Add(UnityEngine.Object,UnityEngine.RectTransform,UnityEngine.DrivenTransformProperties)
extern MethodInfo DrivenRectTransformTracker_Add_m1754_MethodInfo;
extern "C" void DrivenRectTransformTracker_Add_m1754 (DrivenRectTransformTracker_t195 * __this, Object_t20 * ___driver, RectTransform_t132 * ___rectTransform, int32_t ___drivenProperties, MethodInfo* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.DrivenRectTransformTracker::Clear()
extern MethodInfo DrivenRectTransformTracker_Clear_m1753_MethodInfo;
extern "C" void DrivenRectTransformTracker_Clear_m1753 (DrivenRectTransformTracker_t195 * __this, MethodInfo* method)
{
	{
		return;
	}
}
// UnityEngine.RectTransform/Edge
#include "UnityEngine_UnityEngine_RectTransform_Edge.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Edge_t492_il2cpp_TypeInfo;
// UnityEngine.RectTransform/Edge
#include "UnityEngine_UnityEngine_RectTransform_EdgeMethodDeclarations.h"



// UnityEngine.RectTransform/Axis
#include "UnityEngine_UnityEngine_RectTransform_Axis.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Axis_t493_il2cpp_TypeInfo;
// UnityEngine.RectTransform/Axis
#include "UnityEngine_UnityEngine_RectTransform_AxisMethodDeclarations.h"



// UnityEngine.RectTransform/ReapplyDrivenProperties
#include "UnityEngine_UnityEngine_RectTransform_ReapplyDrivenPropertie.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ReapplyDrivenProperties_t325_il2cpp_TypeInfo;
// UnityEngine.RectTransform/ReapplyDrivenProperties
#include "UnityEngine_UnityEngine_RectTransform_ReapplyDrivenPropertieMethodDeclarations.h"



// System.Void UnityEngine.RectTransform/ReapplyDrivenProperties::.ctor(System.Object,System.IntPtr)
extern MethodInfo ReapplyDrivenProperties__ctor_m1896_MethodInfo;
extern "C" void ReapplyDrivenProperties__ctor_m1896 (ReapplyDrivenProperties_t325 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.RectTransform/ReapplyDrivenProperties::Invoke(UnityEngine.RectTransform)
extern MethodInfo ReapplyDrivenProperties_Invoke_m2549_MethodInfo;
extern "C" void ReapplyDrivenProperties_Invoke_m2549 (ReapplyDrivenProperties_t325 * __this, RectTransform_t132 * ___driven, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		ReapplyDrivenProperties_Invoke_m2549((ReapplyDrivenProperties_t325 *)__this->___prev_9,___driven, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, RectTransform_t132 * ___driven, MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___driven,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t * __this, RectTransform_t132 * ___driven, MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___driven,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(___driven,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_ReapplyDrivenProperties_t325(Il2CppObject* delegate, RectTransform_t132 * ___driven)
{
	// Marshaling of parameter '___driven' to native representation
	RectTransform_t132 * ____driven_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'UnityEngine.RectTransform'."));
}
// System.IAsyncResult UnityEngine.RectTransform/ReapplyDrivenProperties::BeginInvoke(UnityEngine.RectTransform,System.AsyncCallback,System.Object)
extern MethodInfo ReapplyDrivenProperties_BeginInvoke_m2550_MethodInfo;
extern "C" Object_t * ReapplyDrivenProperties_BeginInvoke_m2550 (ReapplyDrivenProperties_t325 * __this, RectTransform_t132 * ___driven, AsyncCallback_t171 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___driven;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.RectTransform/ReapplyDrivenProperties::EndInvoke(System.IAsyncResult)
extern MethodInfo ReapplyDrivenProperties_EndInvoke_m2551_MethodInfo;
extern "C" void ReapplyDrivenProperties_EndInvoke_m2551 (ReapplyDrivenProperties_t325 * __this, Object_t * ___result, MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo RectTransform_t132_il2cpp_TypeInfo;
// UnityEngine.RectTransform
#include "UnityEngine_UnityEngine_RectTransformMethodDeclarations.h"

// System.Delegate
#include "mscorlib_System_Delegate.h"
// UnityEngine.Transform
#include "UnityEngine_UnityEngine_Transform.h"
// System.Delegate
#include "mscorlib_System_DelegateMethodDeclarations.h"
// UnityEngine.Component
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
// UnityEngine.Transform
#include "UnityEngine_UnityEngine_TransformMethodDeclarations.h"
extern MethodInfo RectTransform_INTERNAL_get_rect_m2553_MethodInfo;
extern MethodInfo RectTransform_INTERNAL_get_anchorMin_m2554_MethodInfo;
extern MethodInfo RectTransform_INTERNAL_set_anchorMin_m2555_MethodInfo;
extern MethodInfo RectTransform_INTERNAL_get_anchorMax_m2556_MethodInfo;
extern MethodInfo RectTransform_INTERNAL_set_anchorMax_m2557_MethodInfo;
extern MethodInfo RectTransform_INTERNAL_get_anchoredPosition_m2558_MethodInfo;
extern MethodInfo RectTransform_INTERNAL_set_anchoredPosition_m2559_MethodInfo;
extern MethodInfo RectTransform_INTERNAL_get_sizeDelta_m2560_MethodInfo;
extern MethodInfo RectTransform_INTERNAL_set_sizeDelta_m2561_MethodInfo;
extern MethodInfo RectTransform_INTERNAL_get_pivot_m2562_MethodInfo;
extern MethodInfo RectTransform_INTERNAL_set_pivot_m2563_MethodInfo;
extern MethodInfo Delegate_Combine_m1525_MethodInfo;
extern MethodInfo Delegate_Remove_m1526_MethodInfo;
extern MethodInfo RectTransform_get_rect_m1503_MethodInfo;
extern MethodInfo RectTransform_GetLocalCorners_m2565_MethodInfo;
extern MethodInfo Component_get_transform_m30_MethodInfo;
extern MethodInfo Transform_TransformPoint_m1797_MethodInfo;
extern MethodInfo RectTransform_get_anchorMin_m1591_MethodInfo;
extern MethodInfo RectTransform_set_anchorMin_m1705_MethodInfo;
extern MethodInfo RectTransform_get_anchorMax_m1702_MethodInfo;
extern MethodInfo RectTransform_set_anchorMax_m1592_MethodInfo;
extern MethodInfo RectTransform_get_sizeDelta_m1704_MethodInfo;
extern MethodInfo RectTransform_set_sizeDelta_m1593_MethodInfo;
extern MethodInfo RectTransform_get_anchoredPosition_m1703_MethodInfo;
extern MethodInfo RectTransform_get_pivot_m1587_MethodInfo;
extern MethodInfo RectTransform_set_anchoredPosition_m1706_MethodInfo;
extern MethodInfo RectTransform_GetParentSize_m2566_MethodInfo;
extern MethodInfo Transform_get_parent_m1333_MethodInfo;


// System.Void UnityEngine.RectTransform::add_reapplyDrivenProperties(UnityEngine.RectTransform/ReapplyDrivenProperties)
extern MethodInfo RectTransform_add_reapplyDrivenProperties_m1897_MethodInfo;
extern "C" void RectTransform_add_reapplyDrivenProperties_m1897 (Object_t * __this /* static, unused */, ReapplyDrivenProperties_t325 * ___value, MethodInfo* method)
{
	{
		ReapplyDrivenProperties_t325 * L_0 = ((RectTransform_t132_StaticFields*)InitializedTypeInfo(&RectTransform_t132_il2cpp_TypeInfo)->static_fields)->___reapplyDrivenProperties_2;
		ReapplyDrivenProperties_t325 * L_1 = ___value;
		Delegate_t295 * L_2 = Delegate_Combine_m1525(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Delegate_Combine_m1525_MethodInfo);
		((RectTransform_t132_StaticFields*)InitializedTypeInfo(&RectTransform_t132_il2cpp_TypeInfo)->static_fields)->___reapplyDrivenProperties_2 = ((ReapplyDrivenProperties_t325 *)Castclass(L_2, InitializedTypeInfo(&ReapplyDrivenProperties_t325_il2cpp_TypeInfo)));
		return;
	}
}
// System.Void UnityEngine.RectTransform::remove_reapplyDrivenProperties(UnityEngine.RectTransform/ReapplyDrivenProperties)
extern MethodInfo RectTransform_remove_reapplyDrivenProperties_m2552_MethodInfo;
extern "C" void RectTransform_remove_reapplyDrivenProperties_m2552 (Object_t * __this /* static, unused */, ReapplyDrivenProperties_t325 * ___value, MethodInfo* method)
{
	{
		ReapplyDrivenProperties_t325 * L_0 = ((RectTransform_t132_StaticFields*)InitializedTypeInfo(&RectTransform_t132_il2cpp_TypeInfo)->static_fields)->___reapplyDrivenProperties_2;
		ReapplyDrivenProperties_t325 * L_1 = ___value;
		Delegate_t295 * L_2 = Delegate_Remove_m1526(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Delegate_Remove_m1526_MethodInfo);
		((RectTransform_t132_StaticFields*)InitializedTypeInfo(&RectTransform_t132_il2cpp_TypeInfo)->static_fields)->___reapplyDrivenProperties_2 = ((ReapplyDrivenProperties_t325 *)Castclass(L_2, InitializedTypeInfo(&ReapplyDrivenProperties_t325_il2cpp_TypeInfo)));
		return;
	}
}
// System.Void UnityEngine.RectTransform::INTERNAL_get_rect(UnityEngine.Rect&)
extern "C" void RectTransform_INTERNAL_get_rect_m2553 (RectTransform_t132 * __this, Rect_t141 * ___value, MethodInfo* method)
{
	typedef void (*RectTransform_INTERNAL_get_rect_m2553_ftn) (RectTransform_t132 *, Rect_t141 *);
	static RectTransform_INTERNAL_get_rect_m2553_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectTransform_INTERNAL_get_rect_m2553_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectTransform::INTERNAL_get_rect(UnityEngine.Rect&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Rect UnityEngine.RectTransform::get_rect()
extern "C" Rect_t141  RectTransform_get_rect_m1503 (RectTransform_t132 * __this, MethodInfo* method)
{
	Rect_t141  V_0 = {0};
	{
		RectTransform_INTERNAL_get_rect_m2553(__this, (&V_0), /*hidden argument*/&RectTransform_INTERNAL_get_rect_m2553_MethodInfo);
		Rect_t141  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.RectTransform::INTERNAL_get_anchorMin(UnityEngine.Vector2&)
extern "C" void RectTransform_INTERNAL_get_anchorMin_m2554 (RectTransform_t132 * __this, Vector2_t12 * ___value, MethodInfo* method)
{
	typedef void (*RectTransform_INTERNAL_get_anchorMin_m2554_ftn) (RectTransform_t132 *, Vector2_t12 *);
	static RectTransform_INTERNAL_get_anchorMin_m2554_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectTransform_INTERNAL_get_anchorMin_m2554_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectTransform::INTERNAL_get_anchorMin(UnityEngine.Vector2&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.RectTransform::INTERNAL_set_anchorMin(UnityEngine.Vector2&)
extern "C" void RectTransform_INTERNAL_set_anchorMin_m2555 (RectTransform_t132 * __this, Vector2_t12 * ___value, MethodInfo* method)
{
	typedef void (*RectTransform_INTERNAL_set_anchorMin_m2555_ftn) (RectTransform_t132 *, Vector2_t12 *);
	static RectTransform_INTERNAL_set_anchorMin_m2555_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectTransform_INTERNAL_set_anchorMin_m2555_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectTransform::INTERNAL_set_anchorMin(UnityEngine.Vector2&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Vector2 UnityEngine.RectTransform::get_anchorMin()
extern "C" Vector2_t12  RectTransform_get_anchorMin_m1591 (RectTransform_t132 * __this, MethodInfo* method)
{
	Vector2_t12  V_0 = {0};
	{
		RectTransform_INTERNAL_get_anchorMin_m2554(__this, (&V_0), /*hidden argument*/&RectTransform_INTERNAL_get_anchorMin_m2554_MethodInfo);
		Vector2_t12  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.RectTransform::set_anchorMin(UnityEngine.Vector2)
extern "C" void RectTransform_set_anchorMin_m1705 (RectTransform_t132 * __this, Vector2_t12  ___value, MethodInfo* method)
{
	{
		RectTransform_INTERNAL_set_anchorMin_m2555(__this, (&___value), /*hidden argument*/&RectTransform_INTERNAL_set_anchorMin_m2555_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.RectTransform::INTERNAL_get_anchorMax(UnityEngine.Vector2&)
extern "C" void RectTransform_INTERNAL_get_anchorMax_m2556 (RectTransform_t132 * __this, Vector2_t12 * ___value, MethodInfo* method)
{
	typedef void (*RectTransform_INTERNAL_get_anchorMax_m2556_ftn) (RectTransform_t132 *, Vector2_t12 *);
	static RectTransform_INTERNAL_get_anchorMax_m2556_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectTransform_INTERNAL_get_anchorMax_m2556_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectTransform::INTERNAL_get_anchorMax(UnityEngine.Vector2&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.RectTransform::INTERNAL_set_anchorMax(UnityEngine.Vector2&)
extern "C" void RectTransform_INTERNAL_set_anchorMax_m2557 (RectTransform_t132 * __this, Vector2_t12 * ___value, MethodInfo* method)
{
	typedef void (*RectTransform_INTERNAL_set_anchorMax_m2557_ftn) (RectTransform_t132 *, Vector2_t12 *);
	static RectTransform_INTERNAL_set_anchorMax_m2557_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectTransform_INTERNAL_set_anchorMax_m2557_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectTransform::INTERNAL_set_anchorMax(UnityEngine.Vector2&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Vector2 UnityEngine.RectTransform::get_anchorMax()
extern "C" Vector2_t12  RectTransform_get_anchorMax_m1702 (RectTransform_t132 * __this, MethodInfo* method)
{
	Vector2_t12  V_0 = {0};
	{
		RectTransform_INTERNAL_get_anchorMax_m2556(__this, (&V_0), /*hidden argument*/&RectTransform_INTERNAL_get_anchorMax_m2556_MethodInfo);
		Vector2_t12  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.RectTransform::set_anchorMax(UnityEngine.Vector2)
extern "C" void RectTransform_set_anchorMax_m1592 (RectTransform_t132 * __this, Vector2_t12  ___value, MethodInfo* method)
{
	{
		RectTransform_INTERNAL_set_anchorMax_m2557(__this, (&___value), /*hidden argument*/&RectTransform_INTERNAL_set_anchorMax_m2557_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.RectTransform::INTERNAL_get_anchoredPosition(UnityEngine.Vector2&)
extern "C" void RectTransform_INTERNAL_get_anchoredPosition_m2558 (RectTransform_t132 * __this, Vector2_t12 * ___value, MethodInfo* method)
{
	typedef void (*RectTransform_INTERNAL_get_anchoredPosition_m2558_ftn) (RectTransform_t132 *, Vector2_t12 *);
	static RectTransform_INTERNAL_get_anchoredPosition_m2558_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectTransform_INTERNAL_get_anchoredPosition_m2558_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectTransform::INTERNAL_get_anchoredPosition(UnityEngine.Vector2&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.RectTransform::INTERNAL_set_anchoredPosition(UnityEngine.Vector2&)
extern "C" void RectTransform_INTERNAL_set_anchoredPosition_m2559 (RectTransform_t132 * __this, Vector2_t12 * ___value, MethodInfo* method)
{
	typedef void (*RectTransform_INTERNAL_set_anchoredPosition_m2559_ftn) (RectTransform_t132 *, Vector2_t12 *);
	static RectTransform_INTERNAL_set_anchoredPosition_m2559_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectTransform_INTERNAL_set_anchoredPosition_m2559_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectTransform::INTERNAL_set_anchoredPosition(UnityEngine.Vector2&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Vector2 UnityEngine.RectTransform::get_anchoredPosition()
extern "C" Vector2_t12  RectTransform_get_anchoredPosition_m1703 (RectTransform_t132 * __this, MethodInfo* method)
{
	Vector2_t12  V_0 = {0};
	{
		RectTransform_INTERNAL_get_anchoredPosition_m2558(__this, (&V_0), /*hidden argument*/&RectTransform_INTERNAL_get_anchoredPosition_m2558_MethodInfo);
		Vector2_t12  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.RectTransform::set_anchoredPosition(UnityEngine.Vector2)
extern "C" void RectTransform_set_anchoredPosition_m1706 (RectTransform_t132 * __this, Vector2_t12  ___value, MethodInfo* method)
{
	{
		RectTransform_INTERNAL_set_anchoredPosition_m2559(__this, (&___value), /*hidden argument*/&RectTransform_INTERNAL_set_anchoredPosition_m2559_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.RectTransform::INTERNAL_get_sizeDelta(UnityEngine.Vector2&)
extern "C" void RectTransform_INTERNAL_get_sizeDelta_m2560 (RectTransform_t132 * __this, Vector2_t12 * ___value, MethodInfo* method)
{
	typedef void (*RectTransform_INTERNAL_get_sizeDelta_m2560_ftn) (RectTransform_t132 *, Vector2_t12 *);
	static RectTransform_INTERNAL_get_sizeDelta_m2560_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectTransform_INTERNAL_get_sizeDelta_m2560_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectTransform::INTERNAL_get_sizeDelta(UnityEngine.Vector2&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.RectTransform::INTERNAL_set_sizeDelta(UnityEngine.Vector2&)
extern "C" void RectTransform_INTERNAL_set_sizeDelta_m2561 (RectTransform_t132 * __this, Vector2_t12 * ___value, MethodInfo* method)
{
	typedef void (*RectTransform_INTERNAL_set_sizeDelta_m2561_ftn) (RectTransform_t132 *, Vector2_t12 *);
	static RectTransform_INTERNAL_set_sizeDelta_m2561_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectTransform_INTERNAL_set_sizeDelta_m2561_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectTransform::INTERNAL_set_sizeDelta(UnityEngine.Vector2&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Vector2 UnityEngine.RectTransform::get_sizeDelta()
extern "C" Vector2_t12  RectTransform_get_sizeDelta_m1704 (RectTransform_t132 * __this, MethodInfo* method)
{
	Vector2_t12  V_0 = {0};
	{
		RectTransform_INTERNAL_get_sizeDelta_m2560(__this, (&V_0), /*hidden argument*/&RectTransform_INTERNAL_get_sizeDelta_m2560_MethodInfo);
		Vector2_t12  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.RectTransform::set_sizeDelta(UnityEngine.Vector2)
extern "C" void RectTransform_set_sizeDelta_m1593 (RectTransform_t132 * __this, Vector2_t12  ___value, MethodInfo* method)
{
	{
		RectTransform_INTERNAL_set_sizeDelta_m2561(__this, (&___value), /*hidden argument*/&RectTransform_INTERNAL_set_sizeDelta_m2561_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.RectTransform::INTERNAL_get_pivot(UnityEngine.Vector2&)
extern "C" void RectTransform_INTERNAL_get_pivot_m2562 (RectTransform_t132 * __this, Vector2_t12 * ___value, MethodInfo* method)
{
	typedef void (*RectTransform_INTERNAL_get_pivot_m2562_ftn) (RectTransform_t132 *, Vector2_t12 *);
	static RectTransform_INTERNAL_get_pivot_m2562_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectTransform_INTERNAL_get_pivot_m2562_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectTransform::INTERNAL_get_pivot(UnityEngine.Vector2&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.RectTransform::INTERNAL_set_pivot(UnityEngine.Vector2&)
extern "C" void RectTransform_INTERNAL_set_pivot_m2563 (RectTransform_t132 * __this, Vector2_t12 * ___value, MethodInfo* method)
{
	typedef void (*RectTransform_INTERNAL_set_pivot_m2563_ftn) (RectTransform_t132 *, Vector2_t12 *);
	static RectTransform_INTERNAL_set_pivot_m2563_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectTransform_INTERNAL_set_pivot_m2563_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectTransform::INTERNAL_set_pivot(UnityEngine.Vector2&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Vector2 UnityEngine.RectTransform::get_pivot()
extern "C" Vector2_t12  RectTransform_get_pivot_m1587 (RectTransform_t132 * __this, MethodInfo* method)
{
	Vector2_t12  V_0 = {0};
	{
		RectTransform_INTERNAL_get_pivot_m2562(__this, (&V_0), /*hidden argument*/&RectTransform_INTERNAL_get_pivot_m2562_MethodInfo);
		Vector2_t12  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.RectTransform::set_pivot(UnityEngine.Vector2)
extern MethodInfo RectTransform_set_pivot_m1707_MethodInfo;
extern "C" void RectTransform_set_pivot_m1707 (RectTransform_t132 * __this, Vector2_t12  ___value, MethodInfo* method)
{
	{
		RectTransform_INTERNAL_set_pivot_m2563(__this, (&___value), /*hidden argument*/&RectTransform_INTERNAL_set_pivot_m2563_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.RectTransform::SendReapplyDrivenProperties(UnityEngine.RectTransform)
extern MethodInfo RectTransform_SendReapplyDrivenProperties_m2564_MethodInfo;
extern "C" void RectTransform_SendReapplyDrivenProperties_m2564 (Object_t * __this /* static, unused */, RectTransform_t132 * ___driven, MethodInfo* method)
{
	{
		ReapplyDrivenProperties_t325 * L_0 = ((RectTransform_t132_StaticFields*)InitializedTypeInfo(&RectTransform_t132_il2cpp_TypeInfo)->static_fields)->___reapplyDrivenProperties_2;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		ReapplyDrivenProperties_t325 * L_1 = ((RectTransform_t132_StaticFields*)InitializedTypeInfo(&RectTransform_t132_il2cpp_TypeInfo)->static_fields)->___reapplyDrivenProperties_2;
		RectTransform_t132 * L_2 = ___driven;
		NullCheck(L_1);
		VirtActionInvoker1< RectTransform_t132 * >::Invoke(&ReapplyDrivenProperties_Invoke_m2549_MethodInfo, L_1, L_2);
	}

IL_0015:
	{
		return;
	}
}
// System.Void UnityEngine.RectTransform::GetLocalCorners(UnityEngine.Vector3[])
extern "C" void RectTransform_GetLocalCorners_m2565 (RectTransform_t132 * __this, Vector3U5BU5D_t199* ___fourCornersArray, MethodInfo* method)
{
	Rect_t141  V_0 = {0};
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	{
		Vector3U5BU5D_t199* L_0 = ___fourCornersArray;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		Vector3U5BU5D_t199* L_1 = ___fourCornersArray;
		NullCheck(L_1);
		if ((((int32_t)(((int32_t)(((Array_t *)L_1)->max_length)))) >= ((int32_t)4)))
		{
			goto IL_001a;
		}
	}

IL_000f:
	{
		Debug_LogError_m1266(NULL /*static, unused*/, (String_t*) &_stringLiteral150, /*hidden argument*/&Debug_LogError_m1266_MethodInfo);
		return;
	}

IL_001a:
	{
		Rect_t141  L_2 = RectTransform_get_rect_m1503(__this, /*hidden argument*/&RectTransform_get_rect_m1503_MethodInfo);
		V_0 = L_2;
		float L_3 = Rect_get_x_m1509((&V_0), /*hidden argument*/&Rect_get_x_m1509_MethodInfo);
		V_1 = L_3;
		float L_4 = Rect_get_y_m1510((&V_0), /*hidden argument*/&Rect_get_y_m1510_MethodInfo);
		V_2 = L_4;
		float L_5 = Rect_get_xMax_m1609((&V_0), /*hidden argument*/&Rect_get_xMax_m1609_MethodInfo);
		V_3 = L_5;
		float L_6 = Rect_get_yMax_m1611((&V_0), /*hidden argument*/&Rect_get_yMax_m1611_MethodInfo);
		V_4 = L_6;
		Vector3U5BU5D_t199* L_7 = ___fourCornersArray;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 0);
		float L_8 = V_1;
		float L_9 = V_2;
		Vector3_t6  L_10 = {0};
		Vector3__ctor_m28(&L_10, L_8, L_9, (0.0f), /*hidden argument*/&Vector3__ctor_m28_MethodInfo);
		*((Vector3_t6 *)(Vector3_t6 *)SZArrayLdElema(L_7, 0)) = L_10;
		Vector3U5BU5D_t199* L_11 = ___fourCornersArray;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 1);
		float L_12 = V_1;
		float L_13 = V_4;
		Vector3_t6  L_14 = {0};
		Vector3__ctor_m28(&L_14, L_12, L_13, (0.0f), /*hidden argument*/&Vector3__ctor_m28_MethodInfo);
		*((Vector3_t6 *)(Vector3_t6 *)SZArrayLdElema(L_11, 1)) = L_14;
		Vector3U5BU5D_t199* L_15 = ___fourCornersArray;
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, 2);
		float L_16 = V_3;
		float L_17 = V_4;
		Vector3_t6  L_18 = {0};
		Vector3__ctor_m28(&L_18, L_16, L_17, (0.0f), /*hidden argument*/&Vector3__ctor_m28_MethodInfo);
		*((Vector3_t6 *)(Vector3_t6 *)SZArrayLdElema(L_15, 2)) = L_18;
		Vector3U5BU5D_t199* L_19 = ___fourCornersArray;
		NullCheck(L_19);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_19, 3);
		float L_20 = V_3;
		float L_21 = V_2;
		Vector3_t6  L_22 = {0};
		Vector3__ctor_m28(&L_22, L_20, L_21, (0.0f), /*hidden argument*/&Vector3__ctor_m28_MethodInfo);
		*((Vector3_t6 *)(Vector3_t6 *)SZArrayLdElema(L_19, 3)) = L_22;
		return;
	}
}
// System.Void UnityEngine.RectTransform::GetWorldCorners(UnityEngine.Vector3[])
extern MethodInfo RectTransform_GetWorldCorners_m1778_MethodInfo;
extern "C" void RectTransform_GetWorldCorners_m1778 (RectTransform_t132 * __this, Vector3U5BU5D_t199* ___fourCornersArray, MethodInfo* method)
{
	Transform_t8 * V_0 = {0};
	int32_t V_1 = 0;
	{
		Vector3U5BU5D_t199* L_0 = ___fourCornersArray;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		Vector3U5BU5D_t199* L_1 = ___fourCornersArray;
		NullCheck(L_1);
		if ((((int32_t)(((int32_t)(((Array_t *)L_1)->max_length)))) >= ((int32_t)4)))
		{
			goto IL_001a;
		}
	}

IL_000f:
	{
		Debug_LogError_m1266(NULL /*static, unused*/, (String_t*) &_stringLiteral151, /*hidden argument*/&Debug_LogError_m1266_MethodInfo);
		return;
	}

IL_001a:
	{
		Vector3U5BU5D_t199* L_2 = ___fourCornersArray;
		RectTransform_GetLocalCorners_m2565(__this, L_2, /*hidden argument*/&RectTransform_GetLocalCorners_m2565_MethodInfo);
		Transform_t8 * L_3 = Component_get_transform_m30(__this, /*hidden argument*/&Component_get_transform_m30_MethodInfo);
		V_0 = L_3;
		V_1 = 0;
		goto IL_0051;
	}

IL_002f:
	{
		Vector3U5BU5D_t199* L_4 = ___fourCornersArray;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		Transform_t8 * L_6 = V_0;
		Vector3U5BU5D_t199* L_7 = ___fourCornersArray;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		NullCheck(L_6);
		Vector3_t6  L_9 = Transform_TransformPoint_m1797(L_6, (*(Vector3_t6 *)((Vector3_t6 *)(Vector3_t6 *)SZArrayLdElema(L_7, L_8))), /*hidden argument*/&Transform_TransformPoint_m1797_MethodInfo);
		*((Vector3_t6 *)(Vector3_t6 *)SZArrayLdElema(L_4, L_5)) = L_9;
		int32_t L_10 = V_1;
		V_1 = ((int32_t)((int32_t)L_10+(int32_t)1));
	}

IL_0051:
	{
		int32_t L_11 = V_1;
		if ((((int32_t)L_11) < ((int32_t)4)))
		{
			goto IL_002f;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.RectTransform::SetInsetAndSizeFromParentEdge(UnityEngine.RectTransform/Edge,System.Single,System.Single)
extern MethodInfo RectTransform_SetInsetAndSizeFromParentEdge_m1892_MethodInfo;
extern "C" void RectTransform_SetInsetAndSizeFromParentEdge_m1892 (RectTransform_t132 * __this, int32_t ___edge, float ___inset, float ___size, MethodInfo* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	float V_2 = 0.0f;
	Vector2_t12  V_3 = {0};
	Vector2_t12  V_4 = {0};
	Vector2_t12  V_5 = {0};
	Vector2_t12  V_6 = {0};
	Vector2_t12  V_7 = {0};
	int32_t G_B4_0 = 0;
	int32_t G_B7_0 = 0;
	int32_t G_B10_0 = 0;
	int32_t G_B12_0 = 0;
	Vector2_t12 * G_B12_1 = {0};
	int32_t G_B11_0 = 0;
	Vector2_t12 * G_B11_1 = {0};
	float G_B13_0 = 0.0f;
	int32_t G_B13_1 = 0;
	Vector2_t12 * G_B13_2 = {0};
	{
		int32_t L_0 = ___edge;
		if ((((int32_t)L_0) == ((int32_t)2)))
		{
			goto IL_000e;
		}
	}
	{
		int32_t L_1 = ___edge;
		if ((!(((uint32_t)L_1) == ((uint32_t)3))))
		{
			goto IL_0014;
		}
	}

IL_000e:
	{
		G_B4_0 = 1;
		goto IL_0015;
	}

IL_0014:
	{
		G_B4_0 = 0;
	}

IL_0015:
	{
		V_0 = G_B4_0;
		int32_t L_2 = ___edge;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0023;
		}
	}
	{
		int32_t L_3 = ___edge;
		G_B7_0 = ((((int32_t)L_3) == ((int32_t)1))? 1 : 0);
		goto IL_0024;
	}

IL_0023:
	{
		G_B7_0 = 1;
	}

IL_0024:
	{
		V_1 = G_B7_0;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0031;
		}
	}
	{
		G_B10_0 = 1;
		goto IL_0032;
	}

IL_0031:
	{
		G_B10_0 = 0;
	}

IL_0032:
	{
		V_2 = (((float)G_B10_0));
		Vector2_t12  L_5 = RectTransform_get_anchorMin_m1591(__this, /*hidden argument*/&RectTransform_get_anchorMin_m1591_MethodInfo);
		V_3 = L_5;
		int32_t L_6 = V_0;
		float L_7 = V_2;
		Vector2_set_Item_m1617((&V_3), L_6, L_7, /*hidden argument*/&Vector2_set_Item_m1617_MethodInfo);
		Vector2_t12  L_8 = V_3;
		RectTransform_set_anchorMin_m1705(__this, L_8, /*hidden argument*/&RectTransform_set_anchorMin_m1705_MethodInfo);
		Vector2_t12  L_9 = RectTransform_get_anchorMax_m1702(__this, /*hidden argument*/&RectTransform_get_anchorMax_m1702_MethodInfo);
		V_3 = L_9;
		int32_t L_10 = V_0;
		float L_11 = V_2;
		Vector2_set_Item_m1617((&V_3), L_10, L_11, /*hidden argument*/&Vector2_set_Item_m1617_MethodInfo);
		Vector2_t12  L_12 = V_3;
		RectTransform_set_anchorMax_m1592(__this, L_12, /*hidden argument*/&RectTransform_set_anchorMax_m1592_MethodInfo);
		Vector2_t12  L_13 = RectTransform_get_sizeDelta_m1704(__this, /*hidden argument*/&RectTransform_get_sizeDelta_m1704_MethodInfo);
		V_4 = L_13;
		int32_t L_14 = V_0;
		float L_15 = ___size;
		Vector2_set_Item_m1617((&V_4), L_14, L_15, /*hidden argument*/&Vector2_set_Item_m1617_MethodInfo);
		Vector2_t12  L_16 = V_4;
		RectTransform_set_sizeDelta_m1593(__this, L_16, /*hidden argument*/&RectTransform_set_sizeDelta_m1593_MethodInfo);
		Vector2_t12  L_17 = RectTransform_get_anchoredPosition_m1703(__this, /*hidden argument*/&RectTransform_get_anchoredPosition_m1703_MethodInfo);
		V_5 = L_17;
		int32_t L_18 = V_0;
		bool L_19 = V_1;
		G_B11_0 = L_18;
		G_B11_1 = (&V_5);
		if (!L_19)
		{
			G_B12_0 = L_18;
			G_B12_1 = (&V_5);
			goto IL_00ac;
		}
	}
	{
		float L_20 = ___inset;
		float L_21 = ___size;
		Vector2_t12  L_22 = RectTransform_get_pivot_m1587(__this, /*hidden argument*/&RectTransform_get_pivot_m1587_MethodInfo);
		V_6 = L_22;
		int32_t L_23 = V_0;
		float L_24 = Vector2_get_Item_m1602((&V_6), L_23, /*hidden argument*/&Vector2_get_Item_m1602_MethodInfo);
		G_B13_0 = ((float)((float)((-L_20))-(float)((float)((float)L_21*(float)((float)((float)(1.0f)-(float)L_24))))));
		G_B13_1 = G_B11_0;
		G_B13_2 = G_B11_1;
		goto IL_00c0;
	}

IL_00ac:
	{
		float L_25 = ___inset;
		float L_26 = ___size;
		Vector2_t12  L_27 = RectTransform_get_pivot_m1587(__this, /*hidden argument*/&RectTransform_get_pivot_m1587_MethodInfo);
		V_7 = L_27;
		int32_t L_28 = V_0;
		float L_29 = Vector2_get_Item_m1602((&V_7), L_28, /*hidden argument*/&Vector2_get_Item_m1602_MethodInfo);
		G_B13_0 = ((float)((float)L_25+(float)((float)((float)L_26*(float)L_29))));
		G_B13_1 = G_B12_0;
		G_B13_2 = G_B12_1;
	}

IL_00c0:
	{
		Vector2_set_Item_m1617(G_B13_2, G_B13_1, G_B13_0, /*hidden argument*/&Vector2_set_Item_m1617_MethodInfo);
		Vector2_t12  L_30 = V_5;
		RectTransform_set_anchoredPosition_m1706(__this, L_30, /*hidden argument*/&RectTransform_set_anchoredPosition_m1706_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.RectTransform::SetSizeWithCurrentAnchors(UnityEngine.RectTransform/Axis,System.Single)
extern MethodInfo RectTransform_SetSizeWithCurrentAnchors_m1857_MethodInfo;
extern "C" void RectTransform_SetSizeWithCurrentAnchors_m1857 (RectTransform_t132 * __this, int32_t ___axis, float ___size, MethodInfo* method)
{
	int32_t V_0 = 0;
	Vector2_t12  V_1 = {0};
	Vector2_t12  V_2 = {0};
	Vector2_t12  V_3 = {0};
	Vector2_t12  V_4 = {0};
	{
		int32_t L_0 = ___axis;
		V_0 = L_0;
		Vector2_t12  L_1 = RectTransform_get_sizeDelta_m1704(__this, /*hidden argument*/&RectTransform_get_sizeDelta_m1704_MethodInfo);
		V_1 = L_1;
		int32_t L_2 = V_0;
		float L_3 = ___size;
		Vector2_t12  L_4 = RectTransform_GetParentSize_m2566(__this, /*hidden argument*/&RectTransform_GetParentSize_m2566_MethodInfo);
		V_2 = L_4;
		int32_t L_5 = V_0;
		float L_6 = Vector2_get_Item_m1602((&V_2), L_5, /*hidden argument*/&Vector2_get_Item_m1602_MethodInfo);
		Vector2_t12  L_7 = RectTransform_get_anchorMax_m1702(__this, /*hidden argument*/&RectTransform_get_anchorMax_m1702_MethodInfo);
		V_3 = L_7;
		int32_t L_8 = V_0;
		float L_9 = Vector2_get_Item_m1602((&V_3), L_8, /*hidden argument*/&Vector2_get_Item_m1602_MethodInfo);
		Vector2_t12  L_10 = RectTransform_get_anchorMin_m1591(__this, /*hidden argument*/&RectTransform_get_anchorMin_m1591_MethodInfo);
		V_4 = L_10;
		int32_t L_11 = V_0;
		float L_12 = Vector2_get_Item_m1602((&V_4), L_11, /*hidden argument*/&Vector2_get_Item_m1602_MethodInfo);
		Vector2_set_Item_m1617((&V_1), L_2, ((float)((float)L_3-(float)((float)((float)L_6*(float)((float)((float)L_9-(float)L_12)))))), /*hidden argument*/&Vector2_set_Item_m1617_MethodInfo);
		Vector2_t12  L_13 = V_1;
		RectTransform_set_sizeDelta_m1593(__this, L_13, /*hidden argument*/&RectTransform_set_sizeDelta_m1593_MethodInfo);
		return;
	}
}
// UnityEngine.Vector2 UnityEngine.RectTransform::GetParentSize()
extern "C" Vector2_t12  RectTransform_GetParentSize_m2566 (RectTransform_t132 * __this, MethodInfo* method)
{
	RectTransform_t132 * V_0 = {0};
	Rect_t141  V_1 = {0};
	{
		Transform_t8 * L_0 = Transform_get_parent_m1333(__this, /*hidden argument*/&Transform_get_parent_m1333_MethodInfo);
		V_0 = ((RectTransform_t132 *)IsInst(L_0, InitializedTypeInfo(&RectTransform_t132_il2cpp_TypeInfo)));
		RectTransform_t132 * L_1 = V_0;
		bool L_2 = Object_op_Implicit_m42(NULL /*static, unused*/, L_1, /*hidden argument*/&Object_op_Implicit_m42_MethodInfo);
		if (L_2)
		{
			goto IL_001d;
		}
	}
	{
		Vector2_t12  L_3 = Vector2_get_zero_m1350(NULL /*static, unused*/, /*hidden argument*/&Vector2_get_zero_m1350_MethodInfo);
		return L_3;
	}

IL_001d:
	{
		RectTransform_t132 * L_4 = V_0;
		NullCheck(L_4);
		Rect_t141  L_5 = RectTransform_get_rect_m1503(L_4, /*hidden argument*/&RectTransform_get_rect_m1503_MethodInfo);
		V_1 = L_5;
		Vector2_t12  L_6 = Rect_get_size_m1581((&V_1), /*hidden argument*/&Rect_get_size_m1581_MethodInfo);
		return L_6;
	}
}
// UnityEngine.ResourceRequest
#include "UnityEngine_UnityEngine_ResourceRequest.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ResourceRequest_t494_il2cpp_TypeInfo;
// UnityEngine.ResourceRequest
#include "UnityEngine_UnityEngine_ResourceRequestMethodDeclarations.h"

// UnityEngine.Resources
#include "UnityEngine_UnityEngine_ResourcesMethodDeclarations.h"
extern MethodInfo Resources_Load_m2569_MethodInfo;


// System.Void UnityEngine.ResourceRequest::.ctor()
extern MethodInfo ResourceRequest__ctor_m2567_MethodInfo;
extern "C" void ResourceRequest__ctor_m2567 (ResourceRequest_t494 * __this, MethodInfo* method)
{
	{
		AsyncOperation__ctor_m2627(__this, /*hidden argument*/&AsyncOperation__ctor_m2627_MethodInfo);
		return;
	}
}
// UnityEngine.Object UnityEngine.ResourceRequest::get_asset()
extern MethodInfo ResourceRequest_get_asset_m2568_MethodInfo;
extern "C" Object_t20 * ResourceRequest_get_asset_m2568 (ResourceRequest_t494 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_Path_1);
		Type_t * L_1 = (__this->___m_Type_2);
		Object_t20 * L_2 = Resources_Load_m2569(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Resources_Load_m2569_MethodInfo);
		return L_2;
	}
}
// UnityEngine.Resources
#include "UnityEngine_UnityEngine_Resources.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Resources_t495_il2cpp_TypeInfo;



// UnityEngine.Object UnityEngine.Resources::Load(System.String,System.Type)
extern "C" Object_t20 * Resources_Load_m2569 (Object_t * __this /* static, unused */, String_t* ___path, Type_t * ___systemTypeInstance, MethodInfo* method)
{
	typedef Object_t20 * (*Resources_Load_m2569_ftn) (String_t*, Type_t *);
	static Resources_Load_m2569_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Resources_Load_m2569_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Resources::Load(System.String,System.Type)");
	return _il2cpp_icall_func(___path, ___systemTypeInstance);
}
// UnityEngine.SerializePrivateVariables
#include "UnityEngine_UnityEngine_SerializePrivateVariables.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo SerializePrivateVariables_t496_il2cpp_TypeInfo;
// UnityEngine.SerializePrivateVariables
#include "UnityEngine_UnityEngine_SerializePrivateVariablesMethodDeclarations.h"

// System.Attribute
#include "mscorlib_System_AttributeMethodDeclarations.h"
extern MethodInfo Attribute__ctor_m3370_MethodInfo;


// System.Void UnityEngine.SerializePrivateVariables::.ctor()
extern MethodInfo SerializePrivateVariables__ctor_m2570_MethodInfo;
extern "C" void SerializePrivateVariables__ctor_m2570 (SerializePrivateVariables_t496 * __this, MethodInfo* method)
{
	{
		Attribute__ctor_m3370(__this, /*hidden argument*/&Attribute__ctor_m3370_MethodInfo);
		return;
	}
}
// UnityEngine.SerializeField
#include "UnityEngine_UnityEngine_SerializeField.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo SerializeField_t338_il2cpp_TypeInfo;
// UnityEngine.SerializeField
#include "UnityEngine_UnityEngine_SerializeFieldMethodDeclarations.h"



// System.Void UnityEngine.SerializeField::.ctor()
extern MethodInfo SerializeField__ctor_m1956_MethodInfo;
extern "C" void SerializeField__ctor_m1956 (SerializeField_t338 * __this, MethodInfo* method)
{
	{
		Attribute__ctor_m3370(__this, /*hidden argument*/&Attribute__ctor_m3370_MethodInfo);
		return;
	}
}
// UnityEngine.Shader
#include "UnityEngine_UnityEngine_Shader.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Shader_t498_il2cpp_TypeInfo;
// UnityEngine.Shader
#include "UnityEngine_UnityEngine_ShaderMethodDeclarations.h"



// System.Int32 UnityEngine.Shader::PropertyToID(System.String)
extern MethodInfo Shader_PropertyToID_m2571_MethodInfo;
extern "C" int32_t Shader_PropertyToID_m2571 (Object_t * __this /* static, unused */, String_t* ___name, MethodInfo* method)
{
	typedef int32_t (*Shader_PropertyToID_m2571_ftn) (String_t*);
	static Shader_PropertyToID_m2571_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Shader_PropertyToID_m2571_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Shader::PropertyToID(System.String)");
	return _il2cpp_icall_func(___name);
}
// UnityEngine.Material
#include "UnityEngine_UnityEngine_Material.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Material_t129_il2cpp_TypeInfo;
// UnityEngine.Material
#include "UnityEngine_UnityEngine_MaterialMethodDeclarations.h"

extern MethodInfo Material_GetTexture_m2572_MethodInfo;
extern MethodInfo Material_Internal_CreateWithMaterial_m2577_MethodInfo;
extern MethodInfo Material_GetTexture_m2573_MethodInfo;
extern MethodInfo Material_SetFloat_m2575_MethodInfo;
extern MethodInfo Material_SetFloat_m2574_MethodInfo;
extern MethodInfo Material_HasProperty_m2576_MethodInfo;


// System.Void UnityEngine.Material::.ctor(UnityEngine.Material)
extern MethodInfo Material__ctor_m1823_MethodInfo;
extern "C" void Material__ctor_m1823 (Material_t129 * __this, Material_t129 * ___source, MethodInfo* method)
{
	{
		Object__ctor_m2699(__this, /*hidden argument*/&Object__ctor_m2699_MethodInfo);
		Material_t129 * L_0 = ___source;
		Material_Internal_CreateWithMaterial_m2577(NULL /*static, unused*/, __this, L_0, /*hidden argument*/&Material_Internal_CreateWithMaterial_m2577_MethodInfo);
		return;
	}
}
// UnityEngine.Texture UnityEngine.Material::get_mainTexture()
extern MethodInfo Material_get_mainTexture_m1831_MethodInfo;
extern "C" Texture_t139 * Material_get_mainTexture_m1831 (Material_t129 * __this, MethodInfo* method)
{
	{
		Texture_t139 * L_0 = Material_GetTexture_m2572(__this, (String_t*) &_stringLiteral152, /*hidden argument*/&Material_GetTexture_m2572_MethodInfo);
		return L_0;
	}
}
// UnityEngine.Texture UnityEngine.Material::GetTexture(System.String)
extern "C" Texture_t139 * Material_GetTexture_m2572 (Material_t129 * __this, String_t* ___propertyName, MethodInfo* method)
{
	{
		String_t* L_0 = ___propertyName;
		int32_t L_1 = Shader_PropertyToID_m2571(NULL /*static, unused*/, L_0, /*hidden argument*/&Shader_PropertyToID_m2571_MethodInfo);
		Texture_t139 * L_2 = Material_GetTexture_m2573(__this, L_1, /*hidden argument*/&Material_GetTexture_m2573_MethodInfo);
		return L_2;
	}
}
// UnityEngine.Texture UnityEngine.Material::GetTexture(System.Int32)
extern "C" Texture_t139 * Material_GetTexture_m2573 (Material_t129 * __this, int32_t ___nameID, MethodInfo* method)
{
	typedef Texture_t139 * (*Material_GetTexture_m2573_ftn) (Material_t129 *, int32_t);
	static Material_GetTexture_m2573_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Material_GetTexture_m2573_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Material::GetTexture(System.Int32)");
	return _il2cpp_icall_func(__this, ___nameID);
}
// System.Void UnityEngine.Material::SetFloat(System.String,System.Single)
extern "C" void Material_SetFloat_m2574 (Material_t129 * __this, String_t* ___propertyName, float ___value, MethodInfo* method)
{
	{
		String_t* L_0 = ___propertyName;
		int32_t L_1 = Shader_PropertyToID_m2571(NULL /*static, unused*/, L_0, /*hidden argument*/&Shader_PropertyToID_m2571_MethodInfo);
		float L_2 = ___value;
		Material_SetFloat_m2575(__this, L_1, L_2, /*hidden argument*/&Material_SetFloat_m2575_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Material::SetFloat(System.Int32,System.Single)
extern "C" void Material_SetFloat_m2575 (Material_t129 * __this, int32_t ___nameID, float ___value, MethodInfo* method)
{
	typedef void (*Material_SetFloat_m2575_ftn) (Material_t129 *, int32_t, float);
	static Material_SetFloat_m2575_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Material_SetFloat_m2575_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Material::SetFloat(System.Int32,System.Single)");
	_il2cpp_icall_func(__this, ___nameID, ___value);
}
// System.Void UnityEngine.Material::SetInt(System.String,System.Int32)
extern MethodInfo Material_SetInt_m1825_MethodInfo;
extern "C" void Material_SetInt_m1825 (Material_t129 * __this, String_t* ___propertyName, int32_t ___value, MethodInfo* method)
{
	{
		String_t* L_0 = ___propertyName;
		int32_t L_1 = ___value;
		Material_SetFloat_m2574(__this, L_0, (((float)L_1)), /*hidden argument*/&Material_SetFloat_m2574_MethodInfo);
		return;
	}
}
// System.Boolean UnityEngine.Material::HasProperty(System.String)
extern MethodInfo Material_HasProperty_m1819_MethodInfo;
extern "C" bool Material_HasProperty_m1819 (Material_t129 * __this, String_t* ___propertyName, MethodInfo* method)
{
	{
		String_t* L_0 = ___propertyName;
		int32_t L_1 = Shader_PropertyToID_m2571(NULL /*static, unused*/, L_0, /*hidden argument*/&Shader_PropertyToID_m2571_MethodInfo);
		bool L_2 = Material_HasProperty_m2576(__this, L_1, /*hidden argument*/&Material_HasProperty_m2576_MethodInfo);
		return L_2;
	}
}
// System.Boolean UnityEngine.Material::HasProperty(System.Int32)
extern "C" bool Material_HasProperty_m2576 (Material_t129 * __this, int32_t ___nameID, MethodInfo* method)
{
	typedef bool (*Material_HasProperty_m2576_ftn) (Material_t129 *, int32_t);
	static Material_HasProperty_m2576_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Material_HasProperty_m2576_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Material::HasProperty(System.Int32)");
	return _il2cpp_icall_func(__this, ___nameID);
}
// System.Void UnityEngine.Material::Internal_CreateWithMaterial(UnityEngine.Material,UnityEngine.Material)
extern "C" void Material_Internal_CreateWithMaterial_m2577 (Object_t * __this /* static, unused */, Material_t129 * ___mono, Material_t129 * ___source, MethodInfo* method)
{
	typedef void (*Material_Internal_CreateWithMaterial_m2577_ftn) (Material_t129 *, Material_t129 *);
	static Material_Internal_CreateWithMaterial_m2577_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Material_Internal_CreateWithMaterial_m2577_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Material::Internal_CreateWithMaterial(UnityEngine.Material,UnityEngine.Material)");
	_il2cpp_icall_func(___mono, ___source);
}
// UnityEngine.Rendering.SphericalHarmonicsL2
#include "UnityEngine_UnityEngine_Rendering_SphericalHarmonicsL2.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo SphericalHarmonicsL2_t499_il2cpp_TypeInfo;
// UnityEngine.Rendering.SphericalHarmonicsL2
#include "UnityEngine_UnityEngine_Rendering_SphericalHarmonicsL2MethodDeclarations.h"

extern MethodInfo SphericalHarmonicsL2_ClearInternal_m2579_MethodInfo;
extern MethodInfo SphericalHarmonicsL2_INTERNAL_CALL_ClearInternal_m2580_MethodInfo;
extern MethodInfo SphericalHarmonicsL2_AddAmbientLightInternal_m2582_MethodInfo;
extern MethodInfo SphericalHarmonicsL2_INTERNAL_CALL_AddAmbientLightInternal_m2583_MethodInfo;
extern MethodInfo SphericalHarmonicsL2_AddDirectionalLightInternal_m2585_MethodInfo;
extern MethodInfo SphericalHarmonicsL2_INTERNAL_CALL_AddDirectionalLightInternal_m2586_MethodInfo;
extern MethodInfo SphericalHarmonicsL2_op_Equality_m2594_MethodInfo;


// System.Void UnityEngine.Rendering.SphericalHarmonicsL2::Clear()
extern MethodInfo SphericalHarmonicsL2_Clear_m2578_MethodInfo;
extern "C" void SphericalHarmonicsL2_Clear_m2578 (SphericalHarmonicsL2_t499 * __this, MethodInfo* method)
{
	{
		SphericalHarmonicsL2_ClearInternal_m2579(NULL /*static, unused*/, __this, /*hidden argument*/&SphericalHarmonicsL2_ClearInternal_m2579_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Rendering.SphericalHarmonicsL2::ClearInternal(UnityEngine.Rendering.SphericalHarmonicsL2&)
extern "C" void SphericalHarmonicsL2_ClearInternal_m2579 (Object_t * __this /* static, unused */, SphericalHarmonicsL2_t499 * ___sh, MethodInfo* method)
{
	{
		SphericalHarmonicsL2_t499 * L_0 = ___sh;
		SphericalHarmonicsL2_INTERNAL_CALL_ClearInternal_m2580(NULL /*static, unused*/, L_0, /*hidden argument*/&SphericalHarmonicsL2_INTERNAL_CALL_ClearInternal_m2580_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Rendering.SphericalHarmonicsL2::INTERNAL_CALL_ClearInternal(UnityEngine.Rendering.SphericalHarmonicsL2&)
extern "C" void SphericalHarmonicsL2_INTERNAL_CALL_ClearInternal_m2580 (Object_t * __this /* static, unused */, SphericalHarmonicsL2_t499 * ___sh, MethodInfo* method)
{
	typedef void (*SphericalHarmonicsL2_INTERNAL_CALL_ClearInternal_m2580_ftn) (SphericalHarmonicsL2_t499 *);
	static SphericalHarmonicsL2_INTERNAL_CALL_ClearInternal_m2580_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (SphericalHarmonicsL2_INTERNAL_CALL_ClearInternal_m2580_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rendering.SphericalHarmonicsL2::INTERNAL_CALL_ClearInternal(UnityEngine.Rendering.SphericalHarmonicsL2&)");
	_il2cpp_icall_func(___sh);
}
// System.Void UnityEngine.Rendering.SphericalHarmonicsL2::AddAmbientLight(UnityEngine.Color)
extern MethodInfo SphericalHarmonicsL2_AddAmbientLight_m2581_MethodInfo;
extern "C" void SphericalHarmonicsL2_AddAmbientLight_m2581 (SphericalHarmonicsL2_t499 * __this, Color_t109  ___color, MethodInfo* method)
{
	{
		Color_t109  L_0 = ___color;
		SphericalHarmonicsL2_AddAmbientLightInternal_m2582(NULL /*static, unused*/, L_0, __this, /*hidden argument*/&SphericalHarmonicsL2_AddAmbientLightInternal_m2582_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Rendering.SphericalHarmonicsL2::AddAmbientLightInternal(UnityEngine.Color,UnityEngine.Rendering.SphericalHarmonicsL2&)
extern "C" void SphericalHarmonicsL2_AddAmbientLightInternal_m2582 (Object_t * __this /* static, unused */, Color_t109  ___color, SphericalHarmonicsL2_t499 * ___sh, MethodInfo* method)
{
	{
		SphericalHarmonicsL2_t499 * L_0 = ___sh;
		SphericalHarmonicsL2_INTERNAL_CALL_AddAmbientLightInternal_m2583(NULL /*static, unused*/, (&___color), L_0, /*hidden argument*/&SphericalHarmonicsL2_INTERNAL_CALL_AddAmbientLightInternal_m2583_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Rendering.SphericalHarmonicsL2::INTERNAL_CALL_AddAmbientLightInternal(UnityEngine.Color&,UnityEngine.Rendering.SphericalHarmonicsL2&)
extern "C" void SphericalHarmonicsL2_INTERNAL_CALL_AddAmbientLightInternal_m2583 (Object_t * __this /* static, unused */, Color_t109 * ___color, SphericalHarmonicsL2_t499 * ___sh, MethodInfo* method)
{
	typedef void (*SphericalHarmonicsL2_INTERNAL_CALL_AddAmbientLightInternal_m2583_ftn) (Color_t109 *, SphericalHarmonicsL2_t499 *);
	static SphericalHarmonicsL2_INTERNAL_CALL_AddAmbientLightInternal_m2583_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (SphericalHarmonicsL2_INTERNAL_CALL_AddAmbientLightInternal_m2583_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rendering.SphericalHarmonicsL2::INTERNAL_CALL_AddAmbientLightInternal(UnityEngine.Color&,UnityEngine.Rendering.SphericalHarmonicsL2&)");
	_il2cpp_icall_func(___color, ___sh);
}
// System.Void UnityEngine.Rendering.SphericalHarmonicsL2::AddDirectionalLight(UnityEngine.Vector3,UnityEngine.Color,System.Single)
extern MethodInfo SphericalHarmonicsL2_AddDirectionalLight_m2584_MethodInfo;
extern "C" void SphericalHarmonicsL2_AddDirectionalLight_m2584 (SphericalHarmonicsL2_t499 * __this, Vector3_t6  ___direction, Color_t109  ___color, float ___intensity, MethodInfo* method)
{
	Color_t109  V_0 = {0};
	{
		Color_t109  L_0 = ___color;
		float L_1 = ___intensity;
		Color_t109  L_2 = Color_op_Multiply_m1794(NULL /*static, unused*/, L_0, ((float)((float)(2.0f)*(float)L_1)), /*hidden argument*/&Color_op_Multiply_m1794_MethodInfo);
		V_0 = L_2;
		Vector3_t6  L_3 = ___direction;
		Color_t109  L_4 = V_0;
		SphericalHarmonicsL2_AddDirectionalLightInternal_m2585(NULL /*static, unused*/, L_3, L_4, __this, /*hidden argument*/&SphericalHarmonicsL2_AddDirectionalLightInternal_m2585_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Rendering.SphericalHarmonicsL2::AddDirectionalLightInternal(UnityEngine.Vector3,UnityEngine.Color,UnityEngine.Rendering.SphericalHarmonicsL2&)
extern "C" void SphericalHarmonicsL2_AddDirectionalLightInternal_m2585 (Object_t * __this /* static, unused */, Vector3_t6  ___direction, Color_t109  ___color, SphericalHarmonicsL2_t499 * ___sh, MethodInfo* method)
{
	{
		SphericalHarmonicsL2_t499 * L_0 = ___sh;
		SphericalHarmonicsL2_INTERNAL_CALL_AddDirectionalLightInternal_m2586(NULL /*static, unused*/, (&___direction), (&___color), L_0, /*hidden argument*/&SphericalHarmonicsL2_INTERNAL_CALL_AddDirectionalLightInternal_m2586_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Rendering.SphericalHarmonicsL2::INTERNAL_CALL_AddDirectionalLightInternal(UnityEngine.Vector3&,UnityEngine.Color&,UnityEngine.Rendering.SphericalHarmonicsL2&)
extern "C" void SphericalHarmonicsL2_INTERNAL_CALL_AddDirectionalLightInternal_m2586 (Object_t * __this /* static, unused */, Vector3_t6 * ___direction, Color_t109 * ___color, SphericalHarmonicsL2_t499 * ___sh, MethodInfo* method)
{
	typedef void (*SphericalHarmonicsL2_INTERNAL_CALL_AddDirectionalLightInternal_m2586_ftn) (Vector3_t6 *, Color_t109 *, SphericalHarmonicsL2_t499 *);
	static SphericalHarmonicsL2_INTERNAL_CALL_AddDirectionalLightInternal_m2586_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (SphericalHarmonicsL2_INTERNAL_CALL_AddDirectionalLightInternal_m2586_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rendering.SphericalHarmonicsL2::INTERNAL_CALL_AddDirectionalLightInternal(UnityEngine.Vector3&,UnityEngine.Color&,UnityEngine.Rendering.SphericalHarmonicsL2&)");
	_il2cpp_icall_func(___direction, ___color, ___sh);
}
// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::get_Item(System.Int32,System.Int32)
extern MethodInfo SphericalHarmonicsL2_get_Item_m2587_MethodInfo;
extern "C" float SphericalHarmonicsL2_get_Item_m2587 (SphericalHarmonicsL2_t499 * __this, int32_t ___rgb, int32_t ___coefficient, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___rgb;
		int32_t L_1 = ___coefficient;
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_0*(int32_t)((int32_t)9)))+(int32_t)L_1));
		int32_t L_2 = V_0;
		V_1 = L_2;
		int32_t L_3 = V_1;
		if (L_3 == 0)
		{
			goto IL_0080;
		}
		if (L_3 == 1)
		{
			goto IL_0087;
		}
		if (L_3 == 2)
		{
			goto IL_008e;
		}
		if (L_3 == 3)
		{
			goto IL_0095;
		}
		if (L_3 == 4)
		{
			goto IL_009c;
		}
		if (L_3 == 5)
		{
			goto IL_00a3;
		}
		if (L_3 == 6)
		{
			goto IL_00aa;
		}
		if (L_3 == 7)
		{
			goto IL_00b1;
		}
		if (L_3 == 8)
		{
			goto IL_00b8;
		}
		if (L_3 == 9)
		{
			goto IL_00bf;
		}
		if (L_3 == 10)
		{
			goto IL_00c6;
		}
		if (L_3 == 11)
		{
			goto IL_00cd;
		}
		if (L_3 == 12)
		{
			goto IL_00d4;
		}
		if (L_3 == 13)
		{
			goto IL_00db;
		}
		if (L_3 == 14)
		{
			goto IL_00e2;
		}
		if (L_3 == 15)
		{
			goto IL_00e9;
		}
		if (L_3 == 16)
		{
			goto IL_00f0;
		}
		if (L_3 == 17)
		{
			goto IL_00f7;
		}
		if (L_3 == 18)
		{
			goto IL_00fe;
		}
		if (L_3 == 19)
		{
			goto IL_0105;
		}
		if (L_3 == 20)
		{
			goto IL_010c;
		}
		if (L_3 == 21)
		{
			goto IL_0113;
		}
		if (L_3 == 22)
		{
			goto IL_011a;
		}
		if (L_3 == 23)
		{
			goto IL_0121;
		}
		if (L_3 == 24)
		{
			goto IL_0128;
		}
		if (L_3 == 25)
		{
			goto IL_012f;
		}
		if (L_3 == 26)
		{
			goto IL_0136;
		}
	}
	{
		goto IL_013d;
	}

IL_0080:
	{
		float L_4 = (__this->___shr0_0);
		return L_4;
	}

IL_0087:
	{
		float L_5 = (__this->___shr1_1);
		return L_5;
	}

IL_008e:
	{
		float L_6 = (__this->___shr2_2);
		return L_6;
	}

IL_0095:
	{
		float L_7 = (__this->___shr3_3);
		return L_7;
	}

IL_009c:
	{
		float L_8 = (__this->___shr4_4);
		return L_8;
	}

IL_00a3:
	{
		float L_9 = (__this->___shr5_5);
		return L_9;
	}

IL_00aa:
	{
		float L_10 = (__this->___shr6_6);
		return L_10;
	}

IL_00b1:
	{
		float L_11 = (__this->___shr7_7);
		return L_11;
	}

IL_00b8:
	{
		float L_12 = (__this->___shr8_8);
		return L_12;
	}

IL_00bf:
	{
		float L_13 = (__this->___shg0_9);
		return L_13;
	}

IL_00c6:
	{
		float L_14 = (__this->___shg1_10);
		return L_14;
	}

IL_00cd:
	{
		float L_15 = (__this->___shg2_11);
		return L_15;
	}

IL_00d4:
	{
		float L_16 = (__this->___shg3_12);
		return L_16;
	}

IL_00db:
	{
		float L_17 = (__this->___shg4_13);
		return L_17;
	}

IL_00e2:
	{
		float L_18 = (__this->___shg5_14);
		return L_18;
	}

IL_00e9:
	{
		float L_19 = (__this->___shg6_15);
		return L_19;
	}

IL_00f0:
	{
		float L_20 = (__this->___shg7_16);
		return L_20;
	}

IL_00f7:
	{
		float L_21 = (__this->___shg8_17);
		return L_21;
	}

IL_00fe:
	{
		float L_22 = (__this->___shb0_18);
		return L_22;
	}

IL_0105:
	{
		float L_23 = (__this->___shb1_19);
		return L_23;
	}

IL_010c:
	{
		float L_24 = (__this->___shb2_20);
		return L_24;
	}

IL_0113:
	{
		float L_25 = (__this->___shb3_21);
		return L_25;
	}

IL_011a:
	{
		float L_26 = (__this->___shb4_22);
		return L_26;
	}

IL_0121:
	{
		float L_27 = (__this->___shb5_23);
		return L_27;
	}

IL_0128:
	{
		float L_28 = (__this->___shb6_24);
		return L_28;
	}

IL_012f:
	{
		float L_29 = (__this->___shb7_25);
		return L_29;
	}

IL_0136:
	{
		float L_30 = (__this->___shb8_26);
		return L_30;
	}

IL_013d:
	{
		IndexOutOfRangeException_t690 * L_31 = (IndexOutOfRangeException_t690 *)il2cpp_codegen_object_new (InitializedTypeInfo(&IndexOutOfRangeException_t690_il2cpp_TypeInfo));
		IndexOutOfRangeException__ctor_m3358(L_31, (String_t*) &_stringLiteral153, /*hidden argument*/&IndexOutOfRangeException__ctor_m3358_MethodInfo);
		il2cpp_codegen_raise_exception(L_31);
	}
}
// System.Void UnityEngine.Rendering.SphericalHarmonicsL2::set_Item(System.Int32,System.Int32,System.Single)
extern MethodInfo SphericalHarmonicsL2_set_Item_m2588_MethodInfo;
extern "C" void SphericalHarmonicsL2_set_Item_m2588 (SphericalHarmonicsL2_t499 * __this, int32_t ___rgb, int32_t ___coefficient, float ___value, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___rgb;
		int32_t L_1 = ___coefficient;
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_0*(int32_t)((int32_t)9)))+(int32_t)L_1));
		int32_t L_2 = V_0;
		V_1 = L_2;
		int32_t L_3 = V_1;
		if (L_3 == 0)
		{
			goto IL_0080;
		}
		if (L_3 == 1)
		{
			goto IL_008c;
		}
		if (L_3 == 2)
		{
			goto IL_0098;
		}
		if (L_3 == 3)
		{
			goto IL_00a4;
		}
		if (L_3 == 4)
		{
			goto IL_00b0;
		}
		if (L_3 == 5)
		{
			goto IL_00bc;
		}
		if (L_3 == 6)
		{
			goto IL_00c8;
		}
		if (L_3 == 7)
		{
			goto IL_00d4;
		}
		if (L_3 == 8)
		{
			goto IL_00e0;
		}
		if (L_3 == 9)
		{
			goto IL_00ec;
		}
		if (L_3 == 10)
		{
			goto IL_00f8;
		}
		if (L_3 == 11)
		{
			goto IL_0104;
		}
		if (L_3 == 12)
		{
			goto IL_0110;
		}
		if (L_3 == 13)
		{
			goto IL_011c;
		}
		if (L_3 == 14)
		{
			goto IL_0128;
		}
		if (L_3 == 15)
		{
			goto IL_0134;
		}
		if (L_3 == 16)
		{
			goto IL_0140;
		}
		if (L_3 == 17)
		{
			goto IL_014c;
		}
		if (L_3 == 18)
		{
			goto IL_0158;
		}
		if (L_3 == 19)
		{
			goto IL_0164;
		}
		if (L_3 == 20)
		{
			goto IL_0170;
		}
		if (L_3 == 21)
		{
			goto IL_017c;
		}
		if (L_3 == 22)
		{
			goto IL_0188;
		}
		if (L_3 == 23)
		{
			goto IL_0194;
		}
		if (L_3 == 24)
		{
			goto IL_01a0;
		}
		if (L_3 == 25)
		{
			goto IL_01ac;
		}
		if (L_3 == 26)
		{
			goto IL_01b8;
		}
	}
	{
		goto IL_01c4;
	}

IL_0080:
	{
		float L_4 = ___value;
		__this->___shr0_0 = L_4;
		goto IL_01cf;
	}

IL_008c:
	{
		float L_5 = ___value;
		__this->___shr1_1 = L_5;
		goto IL_01cf;
	}

IL_0098:
	{
		float L_6 = ___value;
		__this->___shr2_2 = L_6;
		goto IL_01cf;
	}

IL_00a4:
	{
		float L_7 = ___value;
		__this->___shr3_3 = L_7;
		goto IL_01cf;
	}

IL_00b0:
	{
		float L_8 = ___value;
		__this->___shr4_4 = L_8;
		goto IL_01cf;
	}

IL_00bc:
	{
		float L_9 = ___value;
		__this->___shr5_5 = L_9;
		goto IL_01cf;
	}

IL_00c8:
	{
		float L_10 = ___value;
		__this->___shr6_6 = L_10;
		goto IL_01cf;
	}

IL_00d4:
	{
		float L_11 = ___value;
		__this->___shr7_7 = L_11;
		goto IL_01cf;
	}

IL_00e0:
	{
		float L_12 = ___value;
		__this->___shr8_8 = L_12;
		goto IL_01cf;
	}

IL_00ec:
	{
		float L_13 = ___value;
		__this->___shg0_9 = L_13;
		goto IL_01cf;
	}

IL_00f8:
	{
		float L_14 = ___value;
		__this->___shg1_10 = L_14;
		goto IL_01cf;
	}

IL_0104:
	{
		float L_15 = ___value;
		__this->___shg2_11 = L_15;
		goto IL_01cf;
	}

IL_0110:
	{
		float L_16 = ___value;
		__this->___shg3_12 = L_16;
		goto IL_01cf;
	}

IL_011c:
	{
		float L_17 = ___value;
		__this->___shg4_13 = L_17;
		goto IL_01cf;
	}

IL_0128:
	{
		float L_18 = ___value;
		__this->___shg5_14 = L_18;
		goto IL_01cf;
	}

IL_0134:
	{
		float L_19 = ___value;
		__this->___shg6_15 = L_19;
		goto IL_01cf;
	}

IL_0140:
	{
		float L_20 = ___value;
		__this->___shg7_16 = L_20;
		goto IL_01cf;
	}

IL_014c:
	{
		float L_21 = ___value;
		__this->___shg8_17 = L_21;
		goto IL_01cf;
	}

IL_0158:
	{
		float L_22 = ___value;
		__this->___shb0_18 = L_22;
		goto IL_01cf;
	}

IL_0164:
	{
		float L_23 = ___value;
		__this->___shb1_19 = L_23;
		goto IL_01cf;
	}

IL_0170:
	{
		float L_24 = ___value;
		__this->___shb2_20 = L_24;
		goto IL_01cf;
	}

IL_017c:
	{
		float L_25 = ___value;
		__this->___shb3_21 = L_25;
		goto IL_01cf;
	}

IL_0188:
	{
		float L_26 = ___value;
		__this->___shb4_22 = L_26;
		goto IL_01cf;
	}

IL_0194:
	{
		float L_27 = ___value;
		__this->___shb5_23 = L_27;
		goto IL_01cf;
	}

IL_01a0:
	{
		float L_28 = ___value;
		__this->___shb6_24 = L_28;
		goto IL_01cf;
	}

IL_01ac:
	{
		float L_29 = ___value;
		__this->___shb7_25 = L_29;
		goto IL_01cf;
	}

IL_01b8:
	{
		float L_30 = ___value;
		__this->___shb8_26 = L_30;
		goto IL_01cf;
	}

IL_01c4:
	{
		IndexOutOfRangeException_t690 * L_31 = (IndexOutOfRangeException_t690 *)il2cpp_codegen_object_new (InitializedTypeInfo(&IndexOutOfRangeException_t690_il2cpp_TypeInfo));
		IndexOutOfRangeException__ctor_m3358(L_31, (String_t*) &_stringLiteral153, /*hidden argument*/&IndexOutOfRangeException__ctor_m3358_MethodInfo);
		il2cpp_codegen_raise_exception(L_31);
	}

IL_01cf:
	{
		return;
	}
}
// System.Int32 UnityEngine.Rendering.SphericalHarmonicsL2::GetHashCode()
extern MethodInfo SphericalHarmonicsL2_GetHashCode_m2589_MethodInfo;
extern "C" int32_t SphericalHarmonicsL2_GetHashCode_m2589 (SphericalHarmonicsL2_t499 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		V_0 = ((int32_t)17);
		int32_t L_0 = V_0;
		float* L_1 = &(__this->___shr0_0);
		int32_t L_2 = Single_GetHashCode_m3333(L_1, /*hidden argument*/&Single_GetHashCode_m3333_MethodInfo);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_0*(int32_t)((int32_t)23)))+(int32_t)L_2));
		int32_t L_3 = V_0;
		float* L_4 = &(__this->___shr1_1);
		int32_t L_5 = Single_GetHashCode_m3333(L_4, /*hidden argument*/&Single_GetHashCode_m3333_MethodInfo);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_3*(int32_t)((int32_t)23)))+(int32_t)L_5));
		int32_t L_6 = V_0;
		float* L_7 = &(__this->___shr2_2);
		int32_t L_8 = Single_GetHashCode_m3333(L_7, /*hidden argument*/&Single_GetHashCode_m3333_MethodInfo);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_6*(int32_t)((int32_t)23)))+(int32_t)L_8));
		int32_t L_9 = V_0;
		float* L_10 = &(__this->___shr3_3);
		int32_t L_11 = Single_GetHashCode_m3333(L_10, /*hidden argument*/&Single_GetHashCode_m3333_MethodInfo);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_9*(int32_t)((int32_t)23)))+(int32_t)L_11));
		int32_t L_12 = V_0;
		float* L_13 = &(__this->___shr4_4);
		int32_t L_14 = Single_GetHashCode_m3333(L_13, /*hidden argument*/&Single_GetHashCode_m3333_MethodInfo);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_12*(int32_t)((int32_t)23)))+(int32_t)L_14));
		int32_t L_15 = V_0;
		float* L_16 = &(__this->___shr5_5);
		int32_t L_17 = Single_GetHashCode_m3333(L_16, /*hidden argument*/&Single_GetHashCode_m3333_MethodInfo);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_15*(int32_t)((int32_t)23)))+(int32_t)L_17));
		int32_t L_18 = V_0;
		float* L_19 = &(__this->___shr6_6);
		int32_t L_20 = Single_GetHashCode_m3333(L_19, /*hidden argument*/&Single_GetHashCode_m3333_MethodInfo);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_18*(int32_t)((int32_t)23)))+(int32_t)L_20));
		int32_t L_21 = V_0;
		float* L_22 = &(__this->___shr7_7);
		int32_t L_23 = Single_GetHashCode_m3333(L_22, /*hidden argument*/&Single_GetHashCode_m3333_MethodInfo);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_21*(int32_t)((int32_t)23)))+(int32_t)L_23));
		int32_t L_24 = V_0;
		float* L_25 = &(__this->___shr8_8);
		int32_t L_26 = Single_GetHashCode_m3333(L_25, /*hidden argument*/&Single_GetHashCode_m3333_MethodInfo);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_24*(int32_t)((int32_t)23)))+(int32_t)L_26));
		int32_t L_27 = V_0;
		float* L_28 = &(__this->___shg0_9);
		int32_t L_29 = Single_GetHashCode_m3333(L_28, /*hidden argument*/&Single_GetHashCode_m3333_MethodInfo);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_27*(int32_t)((int32_t)23)))+(int32_t)L_29));
		int32_t L_30 = V_0;
		float* L_31 = &(__this->___shg1_10);
		int32_t L_32 = Single_GetHashCode_m3333(L_31, /*hidden argument*/&Single_GetHashCode_m3333_MethodInfo);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_30*(int32_t)((int32_t)23)))+(int32_t)L_32));
		int32_t L_33 = V_0;
		float* L_34 = &(__this->___shg2_11);
		int32_t L_35 = Single_GetHashCode_m3333(L_34, /*hidden argument*/&Single_GetHashCode_m3333_MethodInfo);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_33*(int32_t)((int32_t)23)))+(int32_t)L_35));
		int32_t L_36 = V_0;
		float* L_37 = &(__this->___shg3_12);
		int32_t L_38 = Single_GetHashCode_m3333(L_37, /*hidden argument*/&Single_GetHashCode_m3333_MethodInfo);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_36*(int32_t)((int32_t)23)))+(int32_t)L_38));
		int32_t L_39 = V_0;
		float* L_40 = &(__this->___shg4_13);
		int32_t L_41 = Single_GetHashCode_m3333(L_40, /*hidden argument*/&Single_GetHashCode_m3333_MethodInfo);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_39*(int32_t)((int32_t)23)))+(int32_t)L_41));
		int32_t L_42 = V_0;
		float* L_43 = &(__this->___shg5_14);
		int32_t L_44 = Single_GetHashCode_m3333(L_43, /*hidden argument*/&Single_GetHashCode_m3333_MethodInfo);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_42*(int32_t)((int32_t)23)))+(int32_t)L_44));
		int32_t L_45 = V_0;
		float* L_46 = &(__this->___shg6_15);
		int32_t L_47 = Single_GetHashCode_m3333(L_46, /*hidden argument*/&Single_GetHashCode_m3333_MethodInfo);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_45*(int32_t)((int32_t)23)))+(int32_t)L_47));
		int32_t L_48 = V_0;
		float* L_49 = &(__this->___shg7_16);
		int32_t L_50 = Single_GetHashCode_m3333(L_49, /*hidden argument*/&Single_GetHashCode_m3333_MethodInfo);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_48*(int32_t)((int32_t)23)))+(int32_t)L_50));
		int32_t L_51 = V_0;
		float* L_52 = &(__this->___shg8_17);
		int32_t L_53 = Single_GetHashCode_m3333(L_52, /*hidden argument*/&Single_GetHashCode_m3333_MethodInfo);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_51*(int32_t)((int32_t)23)))+(int32_t)L_53));
		int32_t L_54 = V_0;
		float* L_55 = &(__this->___shb0_18);
		int32_t L_56 = Single_GetHashCode_m3333(L_55, /*hidden argument*/&Single_GetHashCode_m3333_MethodInfo);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_54*(int32_t)((int32_t)23)))+(int32_t)L_56));
		int32_t L_57 = V_0;
		float* L_58 = &(__this->___shb1_19);
		int32_t L_59 = Single_GetHashCode_m3333(L_58, /*hidden argument*/&Single_GetHashCode_m3333_MethodInfo);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_57*(int32_t)((int32_t)23)))+(int32_t)L_59));
		int32_t L_60 = V_0;
		float* L_61 = &(__this->___shb2_20);
		int32_t L_62 = Single_GetHashCode_m3333(L_61, /*hidden argument*/&Single_GetHashCode_m3333_MethodInfo);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_60*(int32_t)((int32_t)23)))+(int32_t)L_62));
		int32_t L_63 = V_0;
		float* L_64 = &(__this->___shb3_21);
		int32_t L_65 = Single_GetHashCode_m3333(L_64, /*hidden argument*/&Single_GetHashCode_m3333_MethodInfo);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_63*(int32_t)((int32_t)23)))+(int32_t)L_65));
		int32_t L_66 = V_0;
		float* L_67 = &(__this->___shb4_22);
		int32_t L_68 = Single_GetHashCode_m3333(L_67, /*hidden argument*/&Single_GetHashCode_m3333_MethodInfo);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_66*(int32_t)((int32_t)23)))+(int32_t)L_68));
		int32_t L_69 = V_0;
		float* L_70 = &(__this->___shb5_23);
		int32_t L_71 = Single_GetHashCode_m3333(L_70, /*hidden argument*/&Single_GetHashCode_m3333_MethodInfo);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_69*(int32_t)((int32_t)23)))+(int32_t)L_71));
		int32_t L_72 = V_0;
		float* L_73 = &(__this->___shb6_24);
		int32_t L_74 = Single_GetHashCode_m3333(L_73, /*hidden argument*/&Single_GetHashCode_m3333_MethodInfo);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_72*(int32_t)((int32_t)23)))+(int32_t)L_74));
		int32_t L_75 = V_0;
		float* L_76 = &(__this->___shb7_25);
		int32_t L_77 = Single_GetHashCode_m3333(L_76, /*hidden argument*/&Single_GetHashCode_m3333_MethodInfo);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_75*(int32_t)((int32_t)23)))+(int32_t)L_77));
		int32_t L_78 = V_0;
		float* L_79 = &(__this->___shb8_26);
		int32_t L_80 = Single_GetHashCode_m3333(L_79, /*hidden argument*/&Single_GetHashCode_m3333_MethodInfo);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_78*(int32_t)((int32_t)23)))+(int32_t)L_80));
		int32_t L_81 = V_0;
		return L_81;
	}
}
// System.Boolean UnityEngine.Rendering.SphericalHarmonicsL2::Equals(System.Object)
extern MethodInfo SphericalHarmonicsL2_Equals_m2590_MethodInfo;
extern "C" bool SphericalHarmonicsL2_Equals_m2590 (SphericalHarmonicsL2_t499 * __this, Object_t * ___other, MethodInfo* method)
{
	SphericalHarmonicsL2_t499  V_0 = {0};
	{
		Object_t * L_0 = ___other;
		if (((Object_t *)IsInst(L_0, InitializedTypeInfo(&SphericalHarmonicsL2_t499_il2cpp_TypeInfo))))
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		Object_t * L_1 = ___other;
		V_0 = ((*(SphericalHarmonicsL2_t499 *)((SphericalHarmonicsL2_t499 *)UnBox (L_1, InitializedTypeInfo(&SphericalHarmonicsL2_t499_il2cpp_TypeInfo)))));
		SphericalHarmonicsL2_t499  L_2 = V_0;
		bool L_3 = SphericalHarmonicsL2_op_Equality_m2594(NULL /*static, unused*/, (*(SphericalHarmonicsL2_t499 *)__this), L_2, /*hidden argument*/&SphericalHarmonicsL2_op_Equality_m2594_MethodInfo);
		return L_3;
	}
}
// UnityEngine.Rendering.SphericalHarmonicsL2 UnityEngine.Rendering.SphericalHarmonicsL2::op_Multiply(UnityEngine.Rendering.SphericalHarmonicsL2,System.Single)
extern MethodInfo SphericalHarmonicsL2_op_Multiply_m2591_MethodInfo;
extern "C" SphericalHarmonicsL2_t499  SphericalHarmonicsL2_op_Multiply_m2591 (Object_t * __this /* static, unused */, SphericalHarmonicsL2_t499  ___lhs, float ___rhs, MethodInfo* method)
{
	SphericalHarmonicsL2_t499  V_0 = {0};
	{
		Initobj (InitializedTypeInfo(&SphericalHarmonicsL2_t499_il2cpp_TypeInfo), (&V_0));
		float L_0 = ((&___lhs)->___shr0_0);
		float L_1 = ___rhs;
		(&V_0)->___shr0_0 = ((float)((float)L_0*(float)L_1));
		float L_2 = ((&___lhs)->___shr1_1);
		float L_3 = ___rhs;
		(&V_0)->___shr1_1 = ((float)((float)L_2*(float)L_3));
		float L_4 = ((&___lhs)->___shr2_2);
		float L_5 = ___rhs;
		(&V_0)->___shr2_2 = ((float)((float)L_4*(float)L_5));
		float L_6 = ((&___lhs)->___shr3_3);
		float L_7 = ___rhs;
		(&V_0)->___shr3_3 = ((float)((float)L_6*(float)L_7));
		float L_8 = ((&___lhs)->___shr4_4);
		float L_9 = ___rhs;
		(&V_0)->___shr4_4 = ((float)((float)L_8*(float)L_9));
		float L_10 = ((&___lhs)->___shr5_5);
		float L_11 = ___rhs;
		(&V_0)->___shr5_5 = ((float)((float)L_10*(float)L_11));
		float L_12 = ((&___lhs)->___shr6_6);
		float L_13 = ___rhs;
		(&V_0)->___shr6_6 = ((float)((float)L_12*(float)L_13));
		float L_14 = ((&___lhs)->___shr7_7);
		float L_15 = ___rhs;
		(&V_0)->___shr7_7 = ((float)((float)L_14*(float)L_15));
		float L_16 = ((&___lhs)->___shr8_8);
		float L_17 = ___rhs;
		(&V_0)->___shr8_8 = ((float)((float)L_16*(float)L_17));
		float L_18 = ((&___lhs)->___shg0_9);
		float L_19 = ___rhs;
		(&V_0)->___shg0_9 = ((float)((float)L_18*(float)L_19));
		float L_20 = ((&___lhs)->___shg1_10);
		float L_21 = ___rhs;
		(&V_0)->___shg1_10 = ((float)((float)L_20*(float)L_21));
		float L_22 = ((&___lhs)->___shg2_11);
		float L_23 = ___rhs;
		(&V_0)->___shg2_11 = ((float)((float)L_22*(float)L_23));
		float L_24 = ((&___lhs)->___shg3_12);
		float L_25 = ___rhs;
		(&V_0)->___shg3_12 = ((float)((float)L_24*(float)L_25));
		float L_26 = ((&___lhs)->___shg4_13);
		float L_27 = ___rhs;
		(&V_0)->___shg4_13 = ((float)((float)L_26*(float)L_27));
		float L_28 = ((&___lhs)->___shg5_14);
		float L_29 = ___rhs;
		(&V_0)->___shg5_14 = ((float)((float)L_28*(float)L_29));
		float L_30 = ((&___lhs)->___shg6_15);
		float L_31 = ___rhs;
		(&V_0)->___shg6_15 = ((float)((float)L_30*(float)L_31));
		float L_32 = ((&___lhs)->___shg7_16);
		float L_33 = ___rhs;
		(&V_0)->___shg7_16 = ((float)((float)L_32*(float)L_33));
		float L_34 = ((&___lhs)->___shg8_17);
		float L_35 = ___rhs;
		(&V_0)->___shg8_17 = ((float)((float)L_34*(float)L_35));
		float L_36 = ((&___lhs)->___shb0_18);
		float L_37 = ___rhs;
		(&V_0)->___shb0_18 = ((float)((float)L_36*(float)L_37));
		float L_38 = ((&___lhs)->___shb1_19);
		float L_39 = ___rhs;
		(&V_0)->___shb1_19 = ((float)((float)L_38*(float)L_39));
		float L_40 = ((&___lhs)->___shb2_20);
		float L_41 = ___rhs;
		(&V_0)->___shb2_20 = ((float)((float)L_40*(float)L_41));
		float L_42 = ((&___lhs)->___shb3_21);
		float L_43 = ___rhs;
		(&V_0)->___shb3_21 = ((float)((float)L_42*(float)L_43));
		float L_44 = ((&___lhs)->___shb4_22);
		float L_45 = ___rhs;
		(&V_0)->___shb4_22 = ((float)((float)L_44*(float)L_45));
		float L_46 = ((&___lhs)->___shb5_23);
		float L_47 = ___rhs;
		(&V_0)->___shb5_23 = ((float)((float)L_46*(float)L_47));
		float L_48 = ((&___lhs)->___shb6_24);
		float L_49 = ___rhs;
		(&V_0)->___shb6_24 = ((float)((float)L_48*(float)L_49));
		float L_50 = ((&___lhs)->___shb7_25);
		float L_51 = ___rhs;
		(&V_0)->___shb7_25 = ((float)((float)L_50*(float)L_51));
		float L_52 = ((&___lhs)->___shb8_26);
		float L_53 = ___rhs;
		(&V_0)->___shb8_26 = ((float)((float)L_52*(float)L_53));
		SphericalHarmonicsL2_t499  L_54 = V_0;
		return L_54;
	}
}
// UnityEngine.Rendering.SphericalHarmonicsL2 UnityEngine.Rendering.SphericalHarmonicsL2::op_Multiply(System.Single,UnityEngine.Rendering.SphericalHarmonicsL2)
extern MethodInfo SphericalHarmonicsL2_op_Multiply_m2592_MethodInfo;
extern "C" SphericalHarmonicsL2_t499  SphericalHarmonicsL2_op_Multiply_m2592 (Object_t * __this /* static, unused */, float ___lhs, SphericalHarmonicsL2_t499  ___rhs, MethodInfo* method)
{
	SphericalHarmonicsL2_t499  V_0 = {0};
	{
		Initobj (InitializedTypeInfo(&SphericalHarmonicsL2_t499_il2cpp_TypeInfo), (&V_0));
		float L_0 = ((&___rhs)->___shr0_0);
		float L_1 = ___lhs;
		(&V_0)->___shr0_0 = ((float)((float)L_0*(float)L_1));
		float L_2 = ((&___rhs)->___shr1_1);
		float L_3 = ___lhs;
		(&V_0)->___shr1_1 = ((float)((float)L_2*(float)L_3));
		float L_4 = ((&___rhs)->___shr2_2);
		float L_5 = ___lhs;
		(&V_0)->___shr2_2 = ((float)((float)L_4*(float)L_5));
		float L_6 = ((&___rhs)->___shr3_3);
		float L_7 = ___lhs;
		(&V_0)->___shr3_3 = ((float)((float)L_6*(float)L_7));
		float L_8 = ((&___rhs)->___shr4_4);
		float L_9 = ___lhs;
		(&V_0)->___shr4_4 = ((float)((float)L_8*(float)L_9));
		float L_10 = ((&___rhs)->___shr5_5);
		float L_11 = ___lhs;
		(&V_0)->___shr5_5 = ((float)((float)L_10*(float)L_11));
		float L_12 = ((&___rhs)->___shr6_6);
		float L_13 = ___lhs;
		(&V_0)->___shr6_6 = ((float)((float)L_12*(float)L_13));
		float L_14 = ((&___rhs)->___shr7_7);
		float L_15 = ___lhs;
		(&V_0)->___shr7_7 = ((float)((float)L_14*(float)L_15));
		float L_16 = ((&___rhs)->___shr8_8);
		float L_17 = ___lhs;
		(&V_0)->___shr8_8 = ((float)((float)L_16*(float)L_17));
		float L_18 = ((&___rhs)->___shg0_9);
		float L_19 = ___lhs;
		(&V_0)->___shg0_9 = ((float)((float)L_18*(float)L_19));
		float L_20 = ((&___rhs)->___shg1_10);
		float L_21 = ___lhs;
		(&V_0)->___shg1_10 = ((float)((float)L_20*(float)L_21));
		float L_22 = ((&___rhs)->___shg2_11);
		float L_23 = ___lhs;
		(&V_0)->___shg2_11 = ((float)((float)L_22*(float)L_23));
		float L_24 = ((&___rhs)->___shg3_12);
		float L_25 = ___lhs;
		(&V_0)->___shg3_12 = ((float)((float)L_24*(float)L_25));
		float L_26 = ((&___rhs)->___shg4_13);
		float L_27 = ___lhs;
		(&V_0)->___shg4_13 = ((float)((float)L_26*(float)L_27));
		float L_28 = ((&___rhs)->___shg5_14);
		float L_29 = ___lhs;
		(&V_0)->___shg5_14 = ((float)((float)L_28*(float)L_29));
		float L_30 = ((&___rhs)->___shg6_15);
		float L_31 = ___lhs;
		(&V_0)->___shg6_15 = ((float)((float)L_30*(float)L_31));
		float L_32 = ((&___rhs)->___shg7_16);
		float L_33 = ___lhs;
		(&V_0)->___shg7_16 = ((float)((float)L_32*(float)L_33));
		float L_34 = ((&___rhs)->___shg8_17);
		float L_35 = ___lhs;
		(&V_0)->___shg8_17 = ((float)((float)L_34*(float)L_35));
		float L_36 = ((&___rhs)->___shb0_18);
		float L_37 = ___lhs;
		(&V_0)->___shb0_18 = ((float)((float)L_36*(float)L_37));
		float L_38 = ((&___rhs)->___shb1_19);
		float L_39 = ___lhs;
		(&V_0)->___shb1_19 = ((float)((float)L_38*(float)L_39));
		float L_40 = ((&___rhs)->___shb2_20);
		float L_41 = ___lhs;
		(&V_0)->___shb2_20 = ((float)((float)L_40*(float)L_41));
		float L_42 = ((&___rhs)->___shb3_21);
		float L_43 = ___lhs;
		(&V_0)->___shb3_21 = ((float)((float)L_42*(float)L_43));
		float L_44 = ((&___rhs)->___shb4_22);
		float L_45 = ___lhs;
		(&V_0)->___shb4_22 = ((float)((float)L_44*(float)L_45));
		float L_46 = ((&___rhs)->___shb5_23);
		float L_47 = ___lhs;
		(&V_0)->___shb5_23 = ((float)((float)L_46*(float)L_47));
		float L_48 = ((&___rhs)->___shb6_24);
		float L_49 = ___lhs;
		(&V_0)->___shb6_24 = ((float)((float)L_48*(float)L_49));
		float L_50 = ((&___rhs)->___shb7_25);
		float L_51 = ___lhs;
		(&V_0)->___shb7_25 = ((float)((float)L_50*(float)L_51));
		float L_52 = ((&___rhs)->___shb8_26);
		float L_53 = ___lhs;
		(&V_0)->___shb8_26 = ((float)((float)L_52*(float)L_53));
		SphericalHarmonicsL2_t499  L_54 = V_0;
		return L_54;
	}
}
// UnityEngine.Rendering.SphericalHarmonicsL2 UnityEngine.Rendering.SphericalHarmonicsL2::op_Addition(UnityEngine.Rendering.SphericalHarmonicsL2,UnityEngine.Rendering.SphericalHarmonicsL2)
extern MethodInfo SphericalHarmonicsL2_op_Addition_m2593_MethodInfo;
extern "C" SphericalHarmonicsL2_t499  SphericalHarmonicsL2_op_Addition_m2593 (Object_t * __this /* static, unused */, SphericalHarmonicsL2_t499  ___lhs, SphericalHarmonicsL2_t499  ___rhs, MethodInfo* method)
{
	SphericalHarmonicsL2_t499  V_0 = {0};
	{
		Initobj (InitializedTypeInfo(&SphericalHarmonicsL2_t499_il2cpp_TypeInfo), (&V_0));
		float L_0 = ((&___lhs)->___shr0_0);
		float L_1 = ((&___rhs)->___shr0_0);
		(&V_0)->___shr0_0 = ((float)((float)L_0+(float)L_1));
		float L_2 = ((&___lhs)->___shr1_1);
		float L_3 = ((&___rhs)->___shr1_1);
		(&V_0)->___shr1_1 = ((float)((float)L_2+(float)L_3));
		float L_4 = ((&___lhs)->___shr2_2);
		float L_5 = ((&___rhs)->___shr2_2);
		(&V_0)->___shr2_2 = ((float)((float)L_4+(float)L_5));
		float L_6 = ((&___lhs)->___shr3_3);
		float L_7 = ((&___rhs)->___shr3_3);
		(&V_0)->___shr3_3 = ((float)((float)L_6+(float)L_7));
		float L_8 = ((&___lhs)->___shr4_4);
		float L_9 = ((&___rhs)->___shr4_4);
		(&V_0)->___shr4_4 = ((float)((float)L_8+(float)L_9));
		float L_10 = ((&___lhs)->___shr5_5);
		float L_11 = ((&___rhs)->___shr5_5);
		(&V_0)->___shr5_5 = ((float)((float)L_10+(float)L_11));
		float L_12 = ((&___lhs)->___shr6_6);
		float L_13 = ((&___rhs)->___shr6_6);
		(&V_0)->___shr6_6 = ((float)((float)L_12+(float)L_13));
		float L_14 = ((&___lhs)->___shr7_7);
		float L_15 = ((&___rhs)->___shr7_7);
		(&V_0)->___shr7_7 = ((float)((float)L_14+(float)L_15));
		float L_16 = ((&___lhs)->___shr8_8);
		float L_17 = ((&___rhs)->___shr8_8);
		(&V_0)->___shr8_8 = ((float)((float)L_16+(float)L_17));
		float L_18 = ((&___lhs)->___shg0_9);
		float L_19 = ((&___rhs)->___shg0_9);
		(&V_0)->___shg0_9 = ((float)((float)L_18+(float)L_19));
		float L_20 = ((&___lhs)->___shg1_10);
		float L_21 = ((&___rhs)->___shg1_10);
		(&V_0)->___shg1_10 = ((float)((float)L_20+(float)L_21));
		float L_22 = ((&___lhs)->___shg2_11);
		float L_23 = ((&___rhs)->___shg2_11);
		(&V_0)->___shg2_11 = ((float)((float)L_22+(float)L_23));
		float L_24 = ((&___lhs)->___shg3_12);
		float L_25 = ((&___rhs)->___shg3_12);
		(&V_0)->___shg3_12 = ((float)((float)L_24+(float)L_25));
		float L_26 = ((&___lhs)->___shg4_13);
		float L_27 = ((&___rhs)->___shg4_13);
		(&V_0)->___shg4_13 = ((float)((float)L_26+(float)L_27));
		float L_28 = ((&___lhs)->___shg5_14);
		float L_29 = ((&___rhs)->___shg5_14);
		(&V_0)->___shg5_14 = ((float)((float)L_28+(float)L_29));
		float L_30 = ((&___lhs)->___shg6_15);
		float L_31 = ((&___rhs)->___shg6_15);
		(&V_0)->___shg6_15 = ((float)((float)L_30+(float)L_31));
		float L_32 = ((&___lhs)->___shg7_16);
		float L_33 = ((&___rhs)->___shg7_16);
		(&V_0)->___shg7_16 = ((float)((float)L_32+(float)L_33));
		float L_34 = ((&___lhs)->___shg8_17);
		float L_35 = ((&___rhs)->___shg8_17);
		(&V_0)->___shg8_17 = ((float)((float)L_34+(float)L_35));
		float L_36 = ((&___lhs)->___shb0_18);
		float L_37 = ((&___rhs)->___shb0_18);
		(&V_0)->___shb0_18 = ((float)((float)L_36+(float)L_37));
		float L_38 = ((&___lhs)->___shb1_19);
		float L_39 = ((&___rhs)->___shb1_19);
		(&V_0)->___shb1_19 = ((float)((float)L_38+(float)L_39));
		float L_40 = ((&___lhs)->___shb2_20);
		float L_41 = ((&___rhs)->___shb2_20);
		(&V_0)->___shb2_20 = ((float)((float)L_40+(float)L_41));
		float L_42 = ((&___lhs)->___shb3_21);
		float L_43 = ((&___rhs)->___shb3_21);
		(&V_0)->___shb3_21 = ((float)((float)L_42+(float)L_43));
		float L_44 = ((&___lhs)->___shb4_22);
		float L_45 = ((&___rhs)->___shb4_22);
		(&V_0)->___shb4_22 = ((float)((float)L_44+(float)L_45));
		float L_46 = ((&___lhs)->___shb5_23);
		float L_47 = ((&___rhs)->___shb5_23);
		(&V_0)->___shb5_23 = ((float)((float)L_46+(float)L_47));
		float L_48 = ((&___lhs)->___shb6_24);
		float L_49 = ((&___rhs)->___shb6_24);
		(&V_0)->___shb6_24 = ((float)((float)L_48+(float)L_49));
		float L_50 = ((&___lhs)->___shb7_25);
		float L_51 = ((&___rhs)->___shb7_25);
		(&V_0)->___shb7_25 = ((float)((float)L_50+(float)L_51));
		float L_52 = ((&___lhs)->___shb8_26);
		float L_53 = ((&___rhs)->___shb8_26);
		(&V_0)->___shb8_26 = ((float)((float)L_52+(float)L_53));
		SphericalHarmonicsL2_t499  L_54 = V_0;
		return L_54;
	}
}
// System.Boolean UnityEngine.Rendering.SphericalHarmonicsL2::op_Equality(UnityEngine.Rendering.SphericalHarmonicsL2,UnityEngine.Rendering.SphericalHarmonicsL2)
extern "C" bool SphericalHarmonicsL2_op_Equality_m2594 (Object_t * __this /* static, unused */, SphericalHarmonicsL2_t499  ___lhs, SphericalHarmonicsL2_t499  ___rhs, MethodInfo* method)
{
	int32_t G_B28_0 = 0;
	{
		float L_0 = ((&___lhs)->___shr0_0);
		float L_1 = ((&___rhs)->___shr0_0);
		if ((!(((float)L_0) == ((float)L_1))))
		{
			goto IL_0200;
		}
	}
	{
		float L_2 = ((&___lhs)->___shr1_1);
		float L_3 = ((&___rhs)->___shr1_1);
		if ((!(((float)L_2) == ((float)L_3))))
		{
			goto IL_0200;
		}
	}
	{
		float L_4 = ((&___lhs)->___shr2_2);
		float L_5 = ((&___rhs)->___shr2_2);
		if ((!(((float)L_4) == ((float)L_5))))
		{
			goto IL_0200;
		}
	}
	{
		float L_6 = ((&___lhs)->___shr3_3);
		float L_7 = ((&___rhs)->___shr3_3);
		if ((!(((float)L_6) == ((float)L_7))))
		{
			goto IL_0200;
		}
	}
	{
		float L_8 = ((&___lhs)->___shr4_4);
		float L_9 = ((&___rhs)->___shr4_4);
		if ((!(((float)L_8) == ((float)L_9))))
		{
			goto IL_0200;
		}
	}
	{
		float L_10 = ((&___lhs)->___shr5_5);
		float L_11 = ((&___rhs)->___shr5_5);
		if ((!(((float)L_10) == ((float)L_11))))
		{
			goto IL_0200;
		}
	}
	{
		float L_12 = ((&___lhs)->___shr6_6);
		float L_13 = ((&___rhs)->___shr6_6);
		if ((!(((float)L_12) == ((float)L_13))))
		{
			goto IL_0200;
		}
	}
	{
		float L_14 = ((&___lhs)->___shr7_7);
		float L_15 = ((&___rhs)->___shr7_7);
		if ((!(((float)L_14) == ((float)L_15))))
		{
			goto IL_0200;
		}
	}
	{
		float L_16 = ((&___lhs)->___shr8_8);
		float L_17 = ((&___rhs)->___shr8_8);
		if ((!(((float)L_16) == ((float)L_17))))
		{
			goto IL_0200;
		}
	}
	{
		float L_18 = ((&___lhs)->___shg0_9);
		float L_19 = ((&___rhs)->___shg0_9);
		if ((!(((float)L_18) == ((float)L_19))))
		{
			goto IL_0200;
		}
	}
	{
		float L_20 = ((&___lhs)->___shg1_10);
		float L_21 = ((&___rhs)->___shg1_10);
		if ((!(((float)L_20) == ((float)L_21))))
		{
			goto IL_0200;
		}
	}
	{
		float L_22 = ((&___lhs)->___shg2_11);
		float L_23 = ((&___rhs)->___shg2_11);
		if ((!(((float)L_22) == ((float)L_23))))
		{
			goto IL_0200;
		}
	}
	{
		float L_24 = ((&___lhs)->___shg3_12);
		float L_25 = ((&___rhs)->___shg3_12);
		if ((!(((float)L_24) == ((float)L_25))))
		{
			goto IL_0200;
		}
	}
	{
		float L_26 = ((&___lhs)->___shg4_13);
		float L_27 = ((&___rhs)->___shg4_13);
		if ((!(((float)L_26) == ((float)L_27))))
		{
			goto IL_0200;
		}
	}
	{
		float L_28 = ((&___lhs)->___shg5_14);
		float L_29 = ((&___rhs)->___shg5_14);
		if ((!(((float)L_28) == ((float)L_29))))
		{
			goto IL_0200;
		}
	}
	{
		float L_30 = ((&___lhs)->___shg6_15);
		float L_31 = ((&___rhs)->___shg6_15);
		if ((!(((float)L_30) == ((float)L_31))))
		{
			goto IL_0200;
		}
	}
	{
		float L_32 = ((&___lhs)->___shg7_16);
		float L_33 = ((&___rhs)->___shg7_16);
		if ((!(((float)L_32) == ((float)L_33))))
		{
			goto IL_0200;
		}
	}
	{
		float L_34 = ((&___lhs)->___shg8_17);
		float L_35 = ((&___rhs)->___shg8_17);
		if ((!(((float)L_34) == ((float)L_35))))
		{
			goto IL_0200;
		}
	}
	{
		float L_36 = ((&___lhs)->___shb0_18);
		float L_37 = ((&___rhs)->___shb0_18);
		if ((!(((float)L_36) == ((float)L_37))))
		{
			goto IL_0200;
		}
	}
	{
		float L_38 = ((&___lhs)->___shb1_19);
		float L_39 = ((&___rhs)->___shb1_19);
		if ((!(((float)L_38) == ((float)L_39))))
		{
			goto IL_0200;
		}
	}
	{
		float L_40 = ((&___lhs)->___shb2_20);
		float L_41 = ((&___rhs)->___shb2_20);
		if ((!(((float)L_40) == ((float)L_41))))
		{
			goto IL_0200;
		}
	}
	{
		float L_42 = ((&___lhs)->___shb3_21);
		float L_43 = ((&___rhs)->___shb3_21);
		if ((!(((float)L_42) == ((float)L_43))))
		{
			goto IL_0200;
		}
	}
	{
		float L_44 = ((&___lhs)->___shb4_22);
		float L_45 = ((&___rhs)->___shb4_22);
		if ((!(((float)L_44) == ((float)L_45))))
		{
			goto IL_0200;
		}
	}
	{
		float L_46 = ((&___lhs)->___shb5_23);
		float L_47 = ((&___rhs)->___shb5_23);
		if ((!(((float)L_46) == ((float)L_47))))
		{
			goto IL_0200;
		}
	}
	{
		float L_48 = ((&___lhs)->___shb6_24);
		float L_49 = ((&___rhs)->___shb6_24);
		if ((!(((float)L_48) == ((float)L_49))))
		{
			goto IL_0200;
		}
	}
	{
		float L_50 = ((&___lhs)->___shb7_25);
		float L_51 = ((&___rhs)->___shb7_25);
		if ((!(((float)L_50) == ((float)L_51))))
		{
			goto IL_0200;
		}
	}
	{
		float L_52 = ((&___lhs)->___shb8_26);
		float L_53 = ((&___rhs)->___shb8_26);
		G_B28_0 = ((((float)L_52) == ((float)L_53))? 1 : 0);
		goto IL_0201;
	}

IL_0200:
	{
		G_B28_0 = 0;
	}

IL_0201:
	{
		return G_B28_0;
	}
}
// System.Boolean UnityEngine.Rendering.SphericalHarmonicsL2::op_Inequality(UnityEngine.Rendering.SphericalHarmonicsL2,UnityEngine.Rendering.SphericalHarmonicsL2)
extern MethodInfo SphericalHarmonicsL2_op_Inequality_m2595_MethodInfo;
extern "C" bool SphericalHarmonicsL2_op_Inequality_m2595 (Object_t * __this /* static, unused */, SphericalHarmonicsL2_t499  ___lhs, SphericalHarmonicsL2_t499  ___rhs, MethodInfo* method)
{
	{
		SphericalHarmonicsL2_t499  L_0 = ___lhs;
		SphericalHarmonicsL2_t499  L_1 = ___rhs;
		bool L_2 = SphericalHarmonicsL2_op_Equality_m2594(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&SphericalHarmonicsL2_op_Equality_m2594_MethodInfo);
		return ((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
// UnityEngine.Sprite
#include "UnityEngine_UnityEngine_Sprite.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Sprite_t156_il2cpp_TypeInfo;
// UnityEngine.Sprite
#include "UnityEngine_UnityEngine_SpriteMethodDeclarations.h"



// UnityEngine.Rect UnityEngine.Sprite::get_rect()
extern MethodInfo Sprite_get_rect_m1580_MethodInfo;
extern "C" Rect_t141  Sprite_get_rect_m1580 (Sprite_t156 * __this, MethodInfo* method)
{
	typedef Rect_t141  (*Sprite_get_rect_m1580_ftn) (Sprite_t156 *);
	static Sprite_get_rect_m1580_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Sprite_get_rect_m1580_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Sprite::get_rect()");
	return _il2cpp_icall_func(__this);
}
// System.Single UnityEngine.Sprite::get_pixelsPerUnit()
extern MethodInfo Sprite_get_pixelsPerUnit_m1577_MethodInfo;
extern "C" float Sprite_get_pixelsPerUnit_m1577 (Sprite_t156 * __this, MethodInfo* method)
{
	typedef float (*Sprite_get_pixelsPerUnit_m1577_ftn) (Sprite_t156 *);
	static Sprite_get_pixelsPerUnit_m1577_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Sprite_get_pixelsPerUnit_m1577_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Sprite::get_pixelsPerUnit()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.Texture2D UnityEngine.Sprite::get_texture()
extern MethodInfo Sprite_get_texture_m1574_MethodInfo;
extern "C" Texture2D_t130 * Sprite_get_texture_m1574 (Sprite_t156 * __this, MethodInfo* method)
{
	typedef Texture2D_t130 * (*Sprite_get_texture_m1574_ftn) (Sprite_t156 *);
	static Sprite_get_texture_m1574_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Sprite_get_texture_m1574_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Sprite::get_texture()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.Rect UnityEngine.Sprite::get_textureRect()
extern MethodInfo Sprite_get_textureRect_m1608_MethodInfo;
extern "C" Rect_t141  Sprite_get_textureRect_m1608 (Sprite_t156 * __this, MethodInfo* method)
{
	typedef Rect_t141  (*Sprite_get_textureRect_m1608_ftn) (Sprite_t156 *);
	static Sprite_get_textureRect_m1608_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Sprite_get_textureRect_m1608_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Sprite::get_textureRect()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.Vector4 UnityEngine.Sprite::get_border()
extern MethodInfo Sprite_get_border_m1575_MethodInfo;
extern "C" Vector4_t160  Sprite_get_border_m1575 (Sprite_t156 * __this, MethodInfo* method)
{
	typedef Vector4_t160  (*Sprite_get_border_m1575_ftn) (Sprite_t156 *);
	static Sprite_get_border_m1575_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Sprite_get_border_m1575_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Sprite::get_border()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.SpriteRenderer
#include "UnityEngine_UnityEngine_SpriteRenderer.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo SpriteRenderer_t278_il2cpp_TypeInfo;
// UnityEngine.SpriteRenderer
#include "UnityEngine_UnityEngine_SpriteRendererMethodDeclarations.h"



// UnityEngine.Sprites.DataUtility
#include "UnityEngine_UnityEngine_Sprites_DataUtility.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo DataUtility_t500_il2cpp_TypeInfo;
// UnityEngine.Sprites.DataUtility
#include "UnityEngine_UnityEngine_Sprites_DataUtilityMethodDeclarations.h"

extern MethodInfo DataUtility_Internal_GetMinSize_m2596_MethodInfo;


// UnityEngine.Vector4 UnityEngine.Sprites.DataUtility::GetInnerUV(UnityEngine.Sprite)
extern MethodInfo DataUtility_GetInnerUV_m1595_MethodInfo;
extern "C" Vector4_t160  DataUtility_GetInnerUV_m1595 (Object_t * __this /* static, unused */, Sprite_t156 * ___sprite, MethodInfo* method)
{
	typedef Vector4_t160  (*DataUtility_GetInnerUV_m1595_ftn) (Sprite_t156 *);
	static DataUtility_GetInnerUV_m1595_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (DataUtility_GetInnerUV_m1595_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Sprites.DataUtility::GetInnerUV(UnityEngine.Sprite)");
	return _il2cpp_icall_func(___sprite);
}
// UnityEngine.Vector4 UnityEngine.Sprites.DataUtility::GetOuterUV(UnityEngine.Sprite)
extern MethodInfo DataUtility_GetOuterUV_m1594_MethodInfo;
extern "C" Vector4_t160  DataUtility_GetOuterUV_m1594 (Object_t * __this /* static, unused */, Sprite_t156 * ___sprite, MethodInfo* method)
{
	typedef Vector4_t160  (*DataUtility_GetOuterUV_m1594_ftn) (Sprite_t156 *);
	static DataUtility_GetOuterUV_m1594_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (DataUtility_GetOuterUV_m1594_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Sprites.DataUtility::GetOuterUV(UnityEngine.Sprite)");
	return _il2cpp_icall_func(___sprite);
}
// UnityEngine.Vector4 UnityEngine.Sprites.DataUtility::GetPadding(UnityEngine.Sprite)
extern MethodInfo DataUtility_GetPadding_m1584_MethodInfo;
extern "C" Vector4_t160  DataUtility_GetPadding_m1584 (Object_t * __this /* static, unused */, Sprite_t156 * ___sprite, MethodInfo* method)
{
	typedef Vector4_t160  (*DataUtility_GetPadding_m1584_ftn) (Sprite_t156 *);
	static DataUtility_GetPadding_m1584_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (DataUtility_GetPadding_m1584_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Sprites.DataUtility::GetPadding(UnityEngine.Sprite)");
	return _il2cpp_icall_func(___sprite);
}
// UnityEngine.Vector2 UnityEngine.Sprites.DataUtility::GetMinSize(UnityEngine.Sprite)
extern MethodInfo DataUtility_GetMinSize_m1579_MethodInfo;
extern "C" Vector2_t12  DataUtility_GetMinSize_m1579 (Object_t * __this /* static, unused */, Sprite_t156 * ___sprite, MethodInfo* method)
{
	Vector2_t12  V_0 = {0};
	{
		Sprite_t156 * L_0 = ___sprite;
		DataUtility_Internal_GetMinSize_m2596(NULL /*static, unused*/, L_0, (&V_0), /*hidden argument*/&DataUtility_Internal_GetMinSize_m2596_MethodInfo);
		Vector2_t12  L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Sprites.DataUtility::Internal_GetMinSize(UnityEngine.Sprite,UnityEngine.Vector2&)
extern "C" void DataUtility_Internal_GetMinSize_m2596 (Object_t * __this /* static, unused */, Sprite_t156 * ___sprite, Vector2_t12 * ___output, MethodInfo* method)
{
	typedef void (*DataUtility_Internal_GetMinSize_m2596_ftn) (Sprite_t156 *, Vector2_t12 *);
	static DataUtility_Internal_GetMinSize_m2596_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (DataUtility_Internal_GetMinSize_m2596_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Sprites.DataUtility::Internal_GetMinSize(UnityEngine.Sprite,UnityEngine.Vector2&)");
	_il2cpp_icall_func(___sprite, ___output);
}
// UnityEngine.WWW
#include "UnityEngine_UnityEngine_WWW.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo WWW_t501_il2cpp_TypeInfo;
// UnityEngine.WWW
#include "UnityEngine_UnityEngine_WWWMethodDeclarations.h"

// System.Collections.Generic.Dictionary`2<System.String,System.String>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_6.h"
// UnityEngine.UnityException
#include "UnityEngine_UnityEngine_UnityException.h"
// System.Text.Encoding
#include "mscorlib_System_Text_Encoding.h"
// UnityEngine.WWWForm
#include "UnityEngine_UnityEngine_WWWForm.h"
// System.StringComparison
#include "mscorlib_System_StringComparison.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.String>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_1.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__0.h"
// System.IO.StringReader
#include "mscorlib_System_IO_StringReader.h"
extern TypeInfo UnityException_t300_il2cpp_TypeInfo;
extern TypeInfo Encoding_t503_il2cpp_TypeInfo;
extern TypeInfo ByteU5BU5D_t504_il2cpp_TypeInfo;
extern TypeInfo Dictionary_2_t502_il2cpp_TypeInfo;
extern TypeInfo CharU5BU5D_t179_il2cpp_TypeInfo;
extern TypeInfo Char_t172_il2cpp_TypeInfo;
extern TypeInfo StringU5BU5D_t423_il2cpp_TypeInfo;
extern TypeInfo Enumerator_t691_il2cpp_TypeInfo;
extern TypeInfo KeyValuePair_2_t692_il2cpp_TypeInfo;
extern TypeInfo StringReader_t693_il2cpp_TypeInfo;
// UnityEngine.UnityException
#include "UnityEngine_UnityEngine_UnityExceptionMethodDeclarations.h"
// System.Text.Encoding
#include "mscorlib_System_Text_EncodingMethodDeclarations.h"
// UnityEngine.WWWForm
#include "UnityEngine_UnityEngine_WWWFormMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2<System.String,System.String>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_6MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__0MethodDeclarations.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.String>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_1MethodDeclarations.h"
// System.IO.StringReader
#include "mscorlib_System_IO_StringReaderMethodDeclarations.h"
extern Il2CppType Dictionary_2_t502_0_0_0;
extern Il2CppType CharU5BU5D_t179_0_0_0;
extern Il2CppType StringU5BU5D_t423_0_0_0;
extern Il2CppType Enumerator_t691_0_0_0;
extern MethodInfo WWW_get_isDone_m2609_MethodInfo;
extern MethodInfo UnityException__ctor_m3236_MethodInfo;
extern MethodInfo WWW_get_responseHeadersString_m2603_MethodInfo;
extern MethodInfo WWW_ParseHTTPHeaderString_m2611_MethodInfo;
extern MethodInfo WWW_get_bytes_m2607_MethodInfo;
extern MethodInfo WWW_GetTextEncoder_m2606_MethodInfo;
extern MethodInfo Encoding_GetString_m3371_MethodInfo;
extern MethodInfo Encoding_get_ASCII_m3372_MethodInfo;
extern MethodInfo WWWForm_get_headers_m2616_MethodInfo;
extern MethodInfo WWW_FlattenedHeadersFrom_m2610_MethodInfo;
extern MethodInfo WWWForm_get_data_m2617_MethodInfo;
extern MethodInfo WWW_InitWWW_m2601_MethodInfo;
extern MethodInfo WWW_DestroyWWW_m2600_MethodInfo;
extern MethodInfo WWW_get_responseHeaders_m2602_MethodInfo;
extern MethodInfo Dictionary_2_TryGetValue_m3373_MethodInfo;
extern MethodInfo String_IndexOf_m3374_MethodInfo;
extern MethodInfo String_IndexOf_m3375_MethodInfo;
extern MethodInfo String_Substring_m1682_MethodInfo;
extern MethodInfo String_Trim_m3376_MethodInfo;
extern MethodInfo String_Trim_m3377_MethodInfo;
extern MethodInfo String_IndexOf_m1719_MethodInfo;
extern MethodInfo String_Substring_m1654_MethodInfo;
extern MethodInfo Encoding_GetEncoding_m3378_MethodInfo;
extern MethodInfo Encoding_get_UTF8_m3379_MethodInfo;
extern MethodInfo Dictionary_2_get_Count_m3380_MethodInfo;
extern MethodInfo String_ToString_m3381_MethodInfo;
extern MethodInfo Dictionary_2__ctor_m3382_MethodInfo;
extern MethodInfo StringReader__ctor_m3383_MethodInfo;
extern MethodInfo StringReader_ReadLine_m3384_MethodInfo;
extern MethodInfo String_StartsWith_m3385_MethodInfo;
extern MethodInfo Dictionary_2_set_Item_m3386_MethodInfo;
extern MethodInfo String_IndexOf_m3387_MethodInfo;
extern MethodInfo String_ToUpper_m3388_MethodInfo;
extern Il2CppGenericMethod Dictionary_2_TryGetValue_m3373_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_get_Count_m3380_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_GetEnumerator_m3389_GenericMethod;
extern Il2CppGenericMethod Enumerator_get_Current_m3390_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2_get_Key_m3391_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2_get_Value_m3392_GenericMethod;
extern Il2CppGenericMethod Enumerator_MoveNext_m3393_GenericMethod;
extern Il2CppGenericMethod Dictionary_2__ctor_m3382_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_set_Item_m3386_GenericMethod;


// System.Void UnityEngine.WWW::.ctor(System.String,UnityEngine.WWWForm)
extern MethodInfo WWW__ctor_m2597_MethodInfo;
extern "C" void WWW__ctor_m2597 (WWW_t501 * __this, String_t* ___url, WWWForm_t505 * ___form, MethodInfo* method)
{
	StringU5BU5D_t423* V_0 = {0};
	{
		Object__ctor_m1289(__this, /*hidden argument*/&Object__ctor_m1289_MethodInfo);
		WWWForm_t505 * L_0 = ___form;
		NullCheck(L_0);
		Dictionary_2_t502 * L_1 = WWWForm_get_headers_m2616(L_0, /*hidden argument*/&WWWForm_get_headers_m2616_MethodInfo);
		StringU5BU5D_t423* L_2 = WWW_FlattenedHeadersFrom_m2610(NULL /*static, unused*/, L_1, /*hidden argument*/&WWW_FlattenedHeadersFrom_m2610_MethodInfo);
		V_0 = L_2;
		String_t* L_3 = ___url;
		WWWForm_t505 * L_4 = ___form;
		NullCheck(L_4);
		ByteU5BU5D_t504* L_5 = WWWForm_get_data_m2617(L_4, /*hidden argument*/&WWWForm_get_data_m2617_MethodInfo);
		StringU5BU5D_t423* L_6 = V_0;
		WWW_InitWWW_m2601(__this, L_3, L_5, L_6, /*hidden argument*/&WWW_InitWWW_m2601_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.WWW::Dispose()
extern MethodInfo WWW_Dispose_m2598_MethodInfo;
extern "C" void WWW_Dispose_m2598 (WWW_t501 * __this, MethodInfo* method)
{
	{
		WWW_DestroyWWW_m2600(__this, 1, /*hidden argument*/&WWW_DestroyWWW_m2600_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.WWW::Finalize()
extern MethodInfo WWW_Finalize_m2599_MethodInfo;
extern "C" void WWW_Finalize_m2599 (WWW_t501 * __this, MethodInfo* method)
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
		WWW_DestroyWWW_m2600(__this, 0, /*hidden argument*/&WWW_DestroyWWW_m2600_MethodInfo);
		IL2CPP_LEAVE(0x13, FINALLY_000c);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t275 *)e.ex;
		goto FINALLY_000c;
	}

FINALLY_000c:
	{ // begin finally (depth: 1)
		Object_Finalize_m67(__this, /*hidden argument*/&Object_Finalize_m67_MethodInfo);
		IL2CPP_END_FINALLY(12)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(12)
	{
		IL2CPP_JUMP_TBL(0x13, IL_0013)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t275 *)
	}

IL_0013:
	{
		return;
	}
}
// System.Void UnityEngine.WWW::DestroyWWW(System.Boolean)
extern "C" void WWW_DestroyWWW_m2600 (WWW_t501 * __this, bool ___cancel, MethodInfo* method)
{
	typedef void (*WWW_DestroyWWW_m2600_ftn) (WWW_t501 *, bool);
	static WWW_DestroyWWW_m2600_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (WWW_DestroyWWW_m2600_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.WWW::DestroyWWW(System.Boolean)");
	_il2cpp_icall_func(__this, ___cancel);
}
// System.Void UnityEngine.WWW::InitWWW(System.String,System.Byte[],System.String[])
extern "C" void WWW_InitWWW_m2601 (WWW_t501 * __this, String_t* ___url, ByteU5BU5D_t504* ___postData, StringU5BU5D_t423* ___iHeaders, MethodInfo* method)
{
	typedef void (*WWW_InitWWW_m2601_ftn) (WWW_t501 *, String_t*, ByteU5BU5D_t504*, StringU5BU5D_t423*);
	static WWW_InitWWW_m2601_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (WWW_InitWWW_m2601_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.WWW::InitWWW(System.String,System.Byte[],System.String[])");
	_il2cpp_icall_func(__this, ___url, ___postData, ___iHeaders);
}
// System.Collections.Generic.Dictionary`2<System.String,System.String> UnityEngine.WWW::get_responseHeaders()
extern "C" Dictionary_2_t502 * WWW_get_responseHeaders_m2602 (WWW_t501 * __this, MethodInfo* method)
{
	{
		bool L_0 = WWW_get_isDone_m2609(__this, /*hidden argument*/&WWW_get_isDone_m2609_MethodInfo);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		UnityException_t300 * L_1 = (UnityException_t300 *)il2cpp_codegen_object_new (InitializedTypeInfo(&UnityException_t300_il2cpp_TypeInfo));
		UnityException__ctor_m3236(L_1, (String_t*) &_stringLiteral154, /*hidden argument*/&UnityException__ctor_m3236_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0016:
	{
		String_t* L_2 = WWW_get_responseHeadersString_m2603(__this, /*hidden argument*/&WWW_get_responseHeadersString_m2603_MethodInfo);
		Dictionary_2_t502 * L_3 = WWW_ParseHTTPHeaderString_m2611(NULL /*static, unused*/, L_2, /*hidden argument*/&WWW_ParseHTTPHeaderString_m2611_MethodInfo);
		return L_3;
	}
}
// System.String UnityEngine.WWW::get_responseHeadersString()
extern "C" String_t* WWW_get_responseHeadersString_m2603 (WWW_t501 * __this, MethodInfo* method)
{
	typedef String_t* (*WWW_get_responseHeadersString_m2603_ftn) (WWW_t501 *);
	static WWW_get_responseHeadersString_m2603_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (WWW_get_responseHeadersString_m2603_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.WWW::get_responseHeadersString()");
	return _il2cpp_icall_func(__this);
}
// System.String UnityEngine.WWW::get_text()
extern MethodInfo WWW_get_text_m2604_MethodInfo;
extern "C" String_t* WWW_get_text_m2604 (WWW_t501 * __this, MethodInfo* method)
{
	ByteU5BU5D_t504* V_0 = {0};
	{
		bool L_0 = WWW_get_isDone_m2609(__this, /*hidden argument*/&WWW_get_isDone_m2609_MethodInfo);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		UnityException_t300 * L_1 = (UnityException_t300 *)il2cpp_codegen_object_new (InitializedTypeInfo(&UnityException_t300_il2cpp_TypeInfo));
		UnityException__ctor_m3236(L_1, (String_t*) &_stringLiteral155, /*hidden argument*/&UnityException__ctor_m3236_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0016:
	{
		ByteU5BU5D_t504* L_2 = WWW_get_bytes_m2607(__this, /*hidden argument*/&WWW_get_bytes_m2607_MethodInfo);
		V_0 = L_2;
		Encoding_t503 * L_3 = WWW_GetTextEncoder_m2606(__this, /*hidden argument*/&WWW_GetTextEncoder_m2606_MethodInfo);
		ByteU5BU5D_t504* L_4 = V_0;
		ByteU5BU5D_t504* L_5 = V_0;
		NullCheck(L_5);
		NullCheck(L_3);
		String_t* L_6 = (String_t*)VirtFuncInvoker3< String_t*, ByteU5BU5D_t504*, int32_t, int32_t >::Invoke(&Encoding_GetString_m3371_MethodInfo, L_3, L_4, 0, (((int32_t)(((Array_t *)L_5)->max_length))));
		return L_6;
	}
}
// System.Text.Encoding UnityEngine.WWW::get_DefaultEncoding()
extern MethodInfo WWW_get_DefaultEncoding_m2605_MethodInfo;
extern "C" Encoding_t503 * WWW_get_DefaultEncoding_m2605 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Encoding_t503_il2cpp_TypeInfo));
		Encoding_t503 * L_0 = Encoding_get_ASCII_m3372(NULL /*static, unused*/, /*hidden argument*/&Encoding_get_ASCII_m3372_MethodInfo);
		return L_0;
	}
}
// System.Text.Encoding UnityEngine.WWW::GetTextEncoder()
extern TypeInfo* CharU5BU5D_t179_il2cpp_TypeInfo_var;
extern MethodInfo* Dictionary_2_TryGetValue_m3373_MethodInfo_var;
extern "C" Encoding_t503 * WWW_GetTextEncoder_m2606 (WWW_t501 * __this, MethodInfo* method)
{
	static bool WWW_GetTextEncoder_m2606_init;
	if (!WWW_GetTextEncoder_m2606_init)
	{
		CharU5BU5D_t179_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&CharU5BU5D_t179_0_0_0);
		Dictionary_2_TryGetValue_m3373_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2_TryGetValue_m3373_GenericMethod);
		WWW_GetTextEncoder_m2606_init = true;
	}
	String_t* V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	String_t* V_3 = {0};
	int32_t V_4 = 0;
	Encoding_t503 * V_5 = {0};
	Exception_t275 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t275 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = (String_t*)NULL;
		Dictionary_2_t502 * L_0 = WWW_get_responseHeaders_m2602(__this, /*hidden argument*/&WWW_get_responseHeaders_m2602_MethodInfo);
		NullCheck(L_0);
		bool L_1 = (bool)VirtFuncInvoker2< bool, String_t*, String_t** >::Invoke(Dictionary_2_TryGetValue_m3373_MethodInfo_var, L_0, (String_t*) &_stringLiteral156, (&V_0));
		if (!L_1)
		{
			goto IL_00b0;
		}
	}
	{
		String_t* L_2 = V_0;
		NullCheck(L_2);
		int32_t L_3 = String_IndexOf_m3374(L_2, (String_t*) &_stringLiteral157, 5, /*hidden argument*/&String_IndexOf_m3374_MethodInfo);
		V_1 = L_3;
		int32_t L_4 = V_1;
		if ((((int32_t)L_4) <= ((int32_t)(-1))))
		{
			goto IL_00b0;
		}
	}
	{
		String_t* L_5 = V_0;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		int32_t L_7 = String_IndexOf_m3375(L_5, ((int32_t)61), L_6, /*hidden argument*/&String_IndexOf_m3375_MethodInfo);
		V_2 = L_7;
		int32_t L_8 = V_2;
		if ((((int32_t)L_8) <= ((int32_t)(-1))))
		{
			goto IL_00b0;
		}
	}
	{
		String_t* L_9 = V_0;
		int32_t L_10 = V_2;
		NullCheck(L_9);
		String_t* L_11 = String_Substring_m1682(L_9, ((int32_t)((int32_t)L_10+(int32_t)1)), /*hidden argument*/&String_Substring_m1682_MethodInfo);
		NullCheck(L_11);
		String_t* L_12 = String_Trim_m3376(L_11, /*hidden argument*/&String_Trim_m3376_MethodInfo);
		CharU5BU5D_t179* L_13 = ((CharU5BU5D_t179*)SZArrayNew(CharU5BU5D_t179_il2cpp_TypeInfo_var, 2));
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, 0);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_13, 0)) = (uint16_t)((int32_t)39);
		CharU5BU5D_t179* L_14 = L_13;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, 1);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_14, 1)) = (uint16_t)((int32_t)34);
		NullCheck(L_12);
		String_t* L_15 = String_Trim_m3377(L_12, L_14, /*hidden argument*/&String_Trim_m3377_MethodInfo);
		NullCheck(L_15);
		String_t* L_16 = String_Trim_m3376(L_15, /*hidden argument*/&String_Trim_m3376_MethodInfo);
		V_3 = L_16;
		String_t* L_17 = V_3;
		NullCheck(L_17);
		int32_t L_18 = String_IndexOf_m1719(L_17, ((int32_t)59), /*hidden argument*/&String_IndexOf_m1719_MethodInfo);
		V_4 = L_18;
		int32_t L_19 = V_4;
		if ((((int32_t)L_19) <= ((int32_t)(-1))))
		{
			goto IL_0083;
		}
	}
	{
		String_t* L_20 = V_3;
		int32_t L_21 = V_4;
		NullCheck(L_20);
		String_t* L_22 = String_Substring_m1654(L_20, 0, L_21, /*hidden argument*/&String_Substring_m1654_MethodInfo);
		V_3 = L_22;
	}

IL_0083:
	try
	{ // begin try (depth: 1)
		{
			String_t* L_23 = V_3;
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Encoding_t503_il2cpp_TypeInfo));
			Encoding_t503 * L_24 = Encoding_GetEncoding_m3378(NULL /*static, unused*/, L_23, /*hidden argument*/&Encoding_GetEncoding_m3378_MethodInfo);
			V_5 = L_24;
			goto IL_00b6;
		}

IL_0090:
		{
			; // IL_0090: leave IL_00b0
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t275 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&Exception_t275_il2cpp_TypeInfo, e.ex->object.klass))
			goto CATCH_0095;
		throw e;
	}

CATCH_0095:
	{ // begin catch(System.Exception)
		String_t* L_25 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_26 = String_Concat_m1615(NULL /*static, unused*/, (String_t*) &_stringLiteral158, L_25, (String_t*) &_stringLiteral56, /*hidden argument*/&String_Concat_m1615_MethodInfo);
		Debug_Log_m2658(NULL /*static, unused*/, L_26, /*hidden argument*/&Debug_Log_m2658_MethodInfo);
		goto IL_00b0;
	} // end catch (depth: 1)

IL_00b0:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Encoding_t503_il2cpp_TypeInfo));
		Encoding_t503 * L_27 = Encoding_get_UTF8_m3379(NULL /*static, unused*/, /*hidden argument*/&Encoding_get_UTF8_m3379_MethodInfo);
		return L_27;
	}

IL_00b6:
	{
		Encoding_t503 * L_28 = V_5;
		return L_28;
	}
}
// System.Byte[] UnityEngine.WWW::get_bytes()
extern "C" ByteU5BU5D_t504* WWW_get_bytes_m2607 (WWW_t501 * __this, MethodInfo* method)
{
	typedef ByteU5BU5D_t504* (*WWW_get_bytes_m2607_ftn) (WWW_t501 *);
	static WWW_get_bytes_m2607_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (WWW_get_bytes_m2607_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.WWW::get_bytes()");
	return _il2cpp_icall_func(__this);
}
// System.String UnityEngine.WWW::get_error()
extern MethodInfo WWW_get_error_m2608_MethodInfo;
extern "C" String_t* WWW_get_error_m2608 (WWW_t501 * __this, MethodInfo* method)
{
	typedef String_t* (*WWW_get_error_m2608_ftn) (WWW_t501 *);
	static WWW_get_error_m2608_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (WWW_get_error_m2608_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.WWW::get_error()");
	return _il2cpp_icall_func(__this);
}
// System.Boolean UnityEngine.WWW::get_isDone()
extern "C" bool WWW_get_isDone_m2609 (WWW_t501 * __this, MethodInfo* method)
{
	typedef bool (*WWW_get_isDone_m2609_ftn) (WWW_t501 *);
	static WWW_get_isDone_m2609_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (WWW_get_isDone_m2609_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.WWW::get_isDone()");
	return _il2cpp_icall_func(__this);
}
// System.String[] UnityEngine.WWW::FlattenedHeadersFrom(System.Collections.Generic.Dictionary`2<System.String,System.String>)
extern TypeInfo* StringU5BU5D_t423_il2cpp_TypeInfo_var;
extern TypeInfo* Enumerator_t691_il2cpp_TypeInfo_var;
extern MethodInfo* Dictionary_2_get_Count_m3380_MethodInfo_var;
extern MethodInfo* Dictionary_2_GetEnumerator_m3389_MethodInfo_var;
extern MethodInfo* Enumerator_get_Current_m3390_MethodInfo_var;
extern MethodInfo* KeyValuePair_2_get_Key_m3391_MethodInfo_var;
extern MethodInfo* KeyValuePair_2_get_Value_m3392_MethodInfo_var;
extern MethodInfo* Enumerator_MoveNext_m3393_MethodInfo_var;
extern "C" StringU5BU5D_t423* WWW_FlattenedHeadersFrom_m2610 (Object_t * __this /* static, unused */, Dictionary_2_t502 * ___headers, MethodInfo* method)
{
	static bool WWW_FlattenedHeadersFrom_m2610_init;
	if (!WWW_FlattenedHeadersFrom_m2610_init)
	{
		StringU5BU5D_t423_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&StringU5BU5D_t423_0_0_0);
		Enumerator_t691_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Enumerator_t691_0_0_0);
		Dictionary_2_get_Count_m3380_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2_get_Count_m3380_GenericMethod);
		Dictionary_2_GetEnumerator_m3389_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2_GetEnumerator_m3389_GenericMethod);
		Enumerator_get_Current_m3390_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Enumerator_get_Current_m3390_GenericMethod);
		KeyValuePair_2_get_Key_m3391_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&KeyValuePair_2_get_Key_m3391_GenericMethod);
		KeyValuePair_2_get_Value_m3392_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&KeyValuePair_2_get_Value_m3392_GenericMethod);
		Enumerator_MoveNext_m3393_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Enumerator_MoveNext_m3393_GenericMethod);
		WWW_FlattenedHeadersFrom_m2610_init = true;
	}
	StringU5BU5D_t423* V_0 = {0};
	int32_t V_1 = 0;
	KeyValuePair_2_t692  V_2 = {0};
	Enumerator_t691  V_3 = {0};
	Exception_t275 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t275 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Dictionary_2_t502 * L_0 = ___headers;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		return (StringU5BU5D_t423*)NULL;
	}

IL_0008:
	{
		Dictionary_2_t502 * L_1 = ___headers;
		NullCheck(L_1);
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(Dictionary_2_get_Count_m3380_MethodInfo_var, L_1);
		V_0 = ((StringU5BU5D_t423*)SZArrayNew(StringU5BU5D_t423_il2cpp_TypeInfo_var, ((int32_t)((int32_t)L_2*(int32_t)2))));
		V_1 = 0;
		Dictionary_2_t502 * L_3 = ___headers;
		NullCheck(L_3);
		Enumerator_t691  L_4 = Dictionary_2_GetEnumerator_m3389(L_3, /*hidden argument*/Dictionary_2_GetEnumerator_m3389_MethodInfo_var);
		V_3 = L_4;
	}

IL_001f:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0052;
		}

IL_0024:
		{
			KeyValuePair_2_t692  L_5 = Enumerator_get_Current_m3390((&V_3), /*hidden argument*/Enumerator_get_Current_m3390_MethodInfo_var);
			V_2 = L_5;
			StringU5BU5D_t423* L_6 = V_0;
			int32_t L_7 = V_1;
			int32_t L_8 = L_7;
			V_1 = ((int32_t)((int32_t)L_8+(int32_t)1));
			String_t* L_9 = KeyValuePair_2_get_Key_m3391((&V_2), /*hidden argument*/KeyValuePair_2_get_Key_m3391_MethodInfo_var);
			NullCheck(L_9);
			String_t* L_10 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&String_ToString_m3381_MethodInfo, L_9);
			NullCheck(L_6);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_6, L_8);
			ArrayElementTypeCheck (L_6, L_10);
			*((String_t**)(String_t**)SZArrayLdElema(L_6, L_8)) = (String_t*)L_10;
			StringU5BU5D_t423* L_11 = V_0;
			int32_t L_12 = V_1;
			int32_t L_13 = L_12;
			V_1 = ((int32_t)((int32_t)L_13+(int32_t)1));
			String_t* L_14 = KeyValuePair_2_get_Value_m3392((&V_2), /*hidden argument*/KeyValuePair_2_get_Value_m3392_MethodInfo_var);
			NullCheck(L_14);
			String_t* L_15 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&String_ToString_m3381_MethodInfo, L_14);
			NullCheck(L_11);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_11, L_13);
			ArrayElementTypeCheck (L_11, L_15);
			*((String_t**)(String_t**)SZArrayLdElema(L_11, L_13)) = (String_t*)L_15;
		}

IL_0052:
		{
			bool L_16 = Enumerator_MoveNext_m3393((&V_3), /*hidden argument*/Enumerator_MoveNext_m3393_MethodInfo_var);
			if (L_16)
			{
				goto IL_0024;
			}
		}

IL_005e:
		{
			IL2CPP_LEAVE(0x6F, FINALLY_0063);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t275 *)e.ex;
		goto FINALLY_0063;
	}

FINALLY_0063:
	{ // begin finally (depth: 1)
		Enumerator_t691  L_17 = V_3;
		Enumerator_t691  L_18 = L_17;
		Object_t * L_19 = Box(Enumerator_t691_il2cpp_TypeInfo_var, &L_18);
		NullCheck(L_19);
		InterfaceActionInvoker0::Invoke(&IDisposable_Dispose_m1379_MethodInfo, L_19);
		IL2CPP_END_FINALLY(99)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(99)
	{
		IL2CPP_JUMP_TBL(0x6F, IL_006f)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t275 *)
	}

IL_006f:
	{
		StringU5BU5D_t423* L_20 = V_0;
		return L_20;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.String> UnityEngine.WWW::ParseHTTPHeaderString(System.String)
extern TypeInfo* Dictionary_2_t502_il2cpp_TypeInfo_var;
extern MethodInfo* Dictionary_2__ctor_m3382_MethodInfo_var;
extern MethodInfo* Dictionary_2_set_Item_m3386_MethodInfo_var;
extern "C" Dictionary_2_t502 * WWW_ParseHTTPHeaderString_m2611 (Object_t * __this /* static, unused */, String_t* ___input, MethodInfo* method)
{
	static bool WWW_ParseHTTPHeaderString_m2611_init;
	if (!WWW_ParseHTTPHeaderString_m2611_init)
	{
		Dictionary_2_t502_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Dictionary_2_t502_0_0_0);
		Dictionary_2__ctor_m3382_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2__ctor_m3382_GenericMethod);
		Dictionary_2_set_Item_m3386_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2_set_Item_m3386_GenericMethod);
		WWW_ParseHTTPHeaderString_m2611_init = true;
	}
	Dictionary_2_t502 * V_0 = {0};
	StringReader_t693 * V_1 = {0};
	int32_t V_2 = 0;
	String_t* V_3 = {0};
	int32_t V_4 = 0;
	String_t* V_5 = {0};
	String_t* V_6 = {0};
	{
		String_t* L_0 = ___input;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentException_t318 * L_1 = (ArgumentException_t318 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t318_il2cpp_TypeInfo));
		ArgumentException__ctor_m1847(L_1, (String_t*) &_stringLiteral159, /*hidden argument*/&ArgumentException__ctor_m1847_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0011:
	{
		Dictionary_2_t502 * L_2 = (Dictionary_2_t502 *)il2cpp_codegen_object_new (Dictionary_2_t502_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3382(L_2, /*hidden argument*/Dictionary_2__ctor_m3382_MethodInfo_var);
		V_0 = L_2;
		String_t* L_3 = ___input;
		StringReader_t693 * L_4 = (StringReader_t693 *)il2cpp_codegen_object_new (InitializedTypeInfo(&StringReader_t693_il2cpp_TypeInfo));
		StringReader__ctor_m3383(L_4, L_3, /*hidden argument*/&StringReader__ctor_m3383_MethodInfo);
		V_1 = L_4;
		V_2 = 0;
	}

IL_0020:
	{
		StringReader_t693 * L_5 = V_1;
		NullCheck(L_5);
		String_t* L_6 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&StringReader_ReadLine_m3384_MethodInfo, L_5);
		V_3 = L_6;
		String_t* L_7 = V_3;
		if (L_7)
		{
			goto IL_0032;
		}
	}
	{
		goto IL_00a2;
	}

IL_0032:
	{
		int32_t L_8 = V_2;
		int32_t L_9 = L_8;
		V_2 = ((int32_t)((int32_t)L_9+(int32_t)1));
		if (L_9)
		{
			goto IL_005d;
		}
	}
	{
		String_t* L_10 = V_3;
		NullCheck(L_10);
		bool L_11 = String_StartsWith_m3385(L_10, (String_t*) &_stringLiteral160, /*hidden argument*/&String_StartsWith_m3385_MethodInfo);
		if (!L_11)
		{
			goto IL_005d;
		}
	}
	{
		Dictionary_2_t502 * L_12 = V_0;
		String_t* L_13 = V_3;
		NullCheck(L_12);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(Dictionary_2_set_Item_m3386_MethodInfo_var, L_12, (String_t*) &_stringLiteral161, L_13);
		goto IL_0020;
	}

IL_005d:
	{
		String_t* L_14 = V_3;
		NullCheck(L_14);
		int32_t L_15 = String_IndexOf_m3387(L_14, (String_t*) &_stringLiteral162, /*hidden argument*/&String_IndexOf_m3387_MethodInfo);
		V_4 = L_15;
		int32_t L_16 = V_4;
		if ((!(((uint32_t)L_16) == ((uint32_t)(-1)))))
		{
			goto IL_0077;
		}
	}
	{
		goto IL_0020;
	}

IL_0077:
	{
		String_t* L_17 = V_3;
		int32_t L_18 = V_4;
		NullCheck(L_17);
		String_t* L_19 = String_Substring_m1654(L_17, 0, L_18, /*hidden argument*/&String_Substring_m1654_MethodInfo);
		NullCheck(L_19);
		String_t* L_20 = String_ToUpper_m3388(L_19, /*hidden argument*/&String_ToUpper_m3388_MethodInfo);
		V_5 = L_20;
		String_t* L_21 = V_3;
		int32_t L_22 = V_4;
		NullCheck(L_21);
		String_t* L_23 = String_Substring_m1682(L_21, ((int32_t)((int32_t)L_22+(int32_t)2)), /*hidden argument*/&String_Substring_m1682_MethodInfo);
		V_6 = L_23;
		Dictionary_2_t502 * L_24 = V_0;
		String_t* L_25 = V_5;
		String_t* L_26 = V_6;
		NullCheck(L_24);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(Dictionary_2_set_Item_m3386_MethodInfo_var, L_24, L_25, L_26);
		goto IL_0020;
	}

IL_00a2:
	{
		Dictionary_2_t502 * L_27 = V_0;
		return L_27;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo WWWForm_t505_il2cpp_TypeInfo;

// System.IO.MemoryStream
#include "mscorlib_System_IO_MemoryStream.h"
// System.Collections.Generic.List`1<System.String>
#include "mscorlib_System_Collections_Generic_List_1_gen_20.h"
// System.Collections.Generic.List`1<System.Byte[]>
#include "mscorlib_System_Collections_Generic_List_1_gen_21.h"
extern TypeInfo MemoryStream_t694_il2cpp_TypeInfo;
extern TypeInfo List_1_t507_il2cpp_TypeInfo;
extern TypeInfo WWWTranscoder_t508_il2cpp_TypeInfo;
extern TypeInfo List_1_t506_il2cpp_TypeInfo;
// System.IO.MemoryStream
#include "mscorlib_System_IO_MemoryStreamMethodDeclarations.h"
// System.Collections.Generic.List`1<System.String>
#include "mscorlib_System_Collections_Generic_List_1_gen_20MethodDeclarations.h"
// UnityEngine.WWWTranscoder
#include "UnityEngine_UnityEngine_WWWTranscoderMethodDeclarations.h"
// System.Collections.Generic.List`1<System.Byte[]>
#include "mscorlib_System_Collections_Generic_List_1_gen_21MethodDeclarations.h"
// UnityEngine.Random
#include "UnityEngine_UnityEngine_RandomMethodDeclarations.h"
extern Il2CppType List_1_t507_0_0_0;
extern Il2CppType List_1_t506_0_0_0;
extern Il2CppType ByteU5BU5D_t504_0_0_0;
extern MethodInfo Encoding_GetBytes_m3394_MethodInfo;
extern MethodInfo MemoryStream__ctor_m3395_MethodInfo;
extern MethodInfo MemoryStream_Write_m3396_MethodInfo;
extern MethodInfo List_1_get_Item_m3397_MethodInfo;
extern MethodInfo Encoding_get_HeaderName_m3398_MethodInfo;
extern MethodInfo WWWTranscoder_SevenBitClean_m2624_MethodInfo;
extern MethodInfo WWWTranscoder_QPEncode_m2621_MethodInfo;
extern MethodInfo String_Concat_m3399_MethodInfo;
extern MethodInfo List_1_get_Item_m3400_MethodInfo;
extern MethodInfo List_1_get_Count_m3401_MethodInfo;
extern MethodInfo MemoryStream_ToArray_m3402_MethodInfo;
extern MethodInfo WWWTranscoder_URLEncode_m2620_MethodInfo;
extern MethodInfo List_1__ctor_m3403_MethodInfo;
extern MethodInfo List_1__ctor_m3404_MethodInfo;
extern MethodInfo Random_Range_m46_MethodInfo;
extern MethodInfo WWWForm_AddField_m2614_MethodInfo;
extern MethodInfo List_1_Add_m3405_MethodInfo;
extern MethodInfo List_1_Add_m3406_MethodInfo;
extern MethodInfo Encoding_get_WebName_m3407_MethodInfo;
extern MethodInfo Int32_ToString_m3408_MethodInfo;
extern MethodInfo WWWForm_AddField_m2613_MethodInfo;
extern Il2CppGenericMethod List_1_get_Item_m3397_GenericMethod;
extern Il2CppGenericMethod List_1_get_Item_m3400_GenericMethod;
extern Il2CppGenericMethod List_1_get_Count_m3401_GenericMethod;
extern Il2CppGenericMethod List_1__ctor_m3403_GenericMethod;
extern Il2CppGenericMethod List_1__ctor_m3404_GenericMethod;
extern Il2CppGenericMethod List_1_Add_m3405_GenericMethod;
extern Il2CppGenericMethod List_1_Add_m3406_GenericMethod;


// System.Void UnityEngine.WWWForm::.ctor()
extern MethodInfo WWWForm__ctor_m2612_MethodInfo;
extern TypeInfo* List_1_t506_il2cpp_TypeInfo_var;
extern TypeInfo* List_1_t507_il2cpp_TypeInfo_var;
extern TypeInfo* ByteU5BU5D_t504_il2cpp_TypeInfo_var;
extern MethodInfo* List_1__ctor_m3403_MethodInfo_var;
extern MethodInfo* List_1__ctor_m3404_MethodInfo_var;
extern "C" void WWWForm__ctor_m2612 (WWWForm_t505 * __this, MethodInfo* method)
{
	static bool WWWForm__ctor_m2612_init;
	if (!WWWForm__ctor_m2612_init)
	{
		List_1_t506_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&List_1_t506_0_0_0);
		List_1_t507_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&List_1_t507_0_0_0);
		ByteU5BU5D_t504_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ByteU5BU5D_t504_0_0_0);
		List_1__ctor_m3403_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1__ctor_m3403_GenericMethod);
		List_1__ctor_m3404_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1__ctor_m3404_GenericMethod);
		WWWForm__ctor_m2612_init = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Object__ctor_m1289(__this, /*hidden argument*/&Object__ctor_m1289_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(List_1_t506_il2cpp_TypeInfo_var);
		List_1_t506 * L_0 = (List_1_t506 *)il2cpp_codegen_object_new (List_1_t506_il2cpp_TypeInfo_var);
		List_1__ctor_m3403(L_0, /*hidden argument*/List_1__ctor_m3403_MethodInfo_var);
		__this->___formData_0 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(List_1_t507_il2cpp_TypeInfo_var);
		List_1_t507 * L_1 = (List_1_t507 *)il2cpp_codegen_object_new (List_1_t507_il2cpp_TypeInfo_var);
		List_1__ctor_m3404(L_1, /*hidden argument*/List_1__ctor_m3404_MethodInfo_var);
		__this->___fieldNames_1 = L_1;
		List_1_t507 * L_2 = (List_1_t507 *)il2cpp_codegen_object_new (List_1_t507_il2cpp_TypeInfo_var);
		List_1__ctor_m3404(L_2, /*hidden argument*/List_1__ctor_m3404_MethodInfo_var);
		__this->___fileNames_2 = L_2;
		List_1_t507 * L_3 = (List_1_t507 *)il2cpp_codegen_object_new (List_1_t507_il2cpp_TypeInfo_var);
		List_1__ctor_m3404(L_3, /*hidden argument*/List_1__ctor_m3404_MethodInfo_var);
		__this->___types_3 = L_3;
		__this->___boundary_4 = ((ByteU5BU5D_t504*)SZArrayNew(ByteU5BU5D_t504_il2cpp_TypeInfo_var, ((int32_t)40)));
		V_0 = 0;
		goto IL_0076;
	}

IL_0046:
	{
		int32_t L_4 = Random_Range_m46(NULL /*static, unused*/, ((int32_t)48), ((int32_t)110), /*hidden argument*/&Random_Range_m46_MethodInfo);
		V_1 = L_4;
		int32_t L_5 = V_1;
		if ((((int32_t)L_5) <= ((int32_t)((int32_t)57))))
		{
			goto IL_005c;
		}
	}
	{
		int32_t L_6 = V_1;
		V_1 = ((int32_t)((int32_t)L_6+(int32_t)7));
	}

IL_005c:
	{
		int32_t L_7 = V_1;
		if ((((int32_t)L_7) <= ((int32_t)((int32_t)90))))
		{
			goto IL_0068;
		}
	}
	{
		int32_t L_8 = V_1;
		V_1 = ((int32_t)((int32_t)L_8+(int32_t)6));
	}

IL_0068:
	{
		ByteU5BU5D_t504* L_9 = (__this->___boundary_4);
		int32_t L_10 = V_0;
		int32_t L_11 = V_1;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_9, L_10)) = (uint8_t)(((uint8_t)L_11));
		int32_t L_12 = V_0;
		V_0 = ((int32_t)((int32_t)L_12+(int32_t)1));
	}

IL_0076:
	{
		int32_t L_13 = V_0;
		if ((((int32_t)L_13) < ((int32_t)((int32_t)40))))
		{
			goto IL_0046;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.WWWForm::AddField(System.String,System.String)
extern "C" void WWWForm_AddField_m2613 (WWWForm_t505 * __this, String_t* ___fieldName, String_t* ___value, MethodInfo* method)
{
	Encoding_t503 * V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Encoding_t503_il2cpp_TypeInfo));
		Encoding_t503 * L_0 = Encoding_get_UTF8_m3379(NULL /*static, unused*/, /*hidden argument*/&Encoding_get_UTF8_m3379_MethodInfo);
		V_0 = L_0;
		String_t* L_1 = ___fieldName;
		String_t* L_2 = ___value;
		Encoding_t503 * L_3 = V_0;
		WWWForm_AddField_m2614(__this, L_1, L_2, L_3, /*hidden argument*/&WWWForm_AddField_m2614_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.WWWForm::AddField(System.String,System.String,System.Text.Encoding)
extern MethodInfo* List_1_Add_m3405_MethodInfo_var;
extern MethodInfo* List_1_Add_m3406_MethodInfo_var;
extern "C" void WWWForm_AddField_m2614 (WWWForm_t505 * __this, String_t* ___fieldName, String_t* ___value, Encoding_t503 * ___e, MethodInfo* method)
{
	static bool WWWForm_AddField_m2614_init;
	if (!WWWForm_AddField_m2614_init)
	{
		List_1_Add_m3405_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1_Add_m3405_GenericMethod);
		List_1_Add_m3406_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1_Add_m3406_GenericMethod);
		WWWForm_AddField_m2614_init = true;
	}
	{
		List_1_t507 * L_0 = (__this->___fieldNames_1);
		String_t* L_1 = ___fieldName;
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(List_1_Add_m3405_MethodInfo_var, L_0, L_1);
		List_1_t507 * L_2 = (__this->___fileNames_2);
		NullCheck(L_2);
		VirtActionInvoker1< String_t* >::Invoke(List_1_Add_m3405_MethodInfo_var, L_2, (String_t*)NULL);
		List_1_t506 * L_3 = (__this->___formData_0);
		Encoding_t503 * L_4 = ___e;
		String_t* L_5 = ___value;
		NullCheck(L_4);
		ByteU5BU5D_t504* L_6 = (ByteU5BU5D_t504*)VirtFuncInvoker1< ByteU5BU5D_t504*, String_t* >::Invoke(&Encoding_GetBytes_m3394_MethodInfo, L_4, L_5);
		NullCheck(L_3);
		VirtActionInvoker1< ByteU5BU5D_t504* >::Invoke(List_1_Add_m3406_MethodInfo_var, L_3, L_6);
		List_1_t507 * L_7 = (__this->___types_3);
		Encoding_t503 * L_8 = ___e;
		NullCheck(L_8);
		String_t* L_9 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Encoding_get_WebName_m3407_MethodInfo, L_8);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_10 = String_Concat_m1615(NULL /*static, unused*/, (String_t*) &_stringLiteral177, L_9, (String_t*) &_stringLiteral165, /*hidden argument*/&String_Concat_m1615_MethodInfo);
		NullCheck(L_7);
		VirtActionInvoker1< String_t* >::Invoke(List_1_Add_m3405_MethodInfo_var, L_7, L_10);
		return;
	}
}
// System.Void UnityEngine.WWWForm::AddField(System.String,System.Int32)
extern MethodInfo WWWForm_AddField_m2615_MethodInfo;
extern "C" void WWWForm_AddField_m2615 (WWWForm_t505 * __this, String_t* ___fieldName, int32_t ___i, MethodInfo* method)
{
	{
		String_t* L_0 = ___fieldName;
		String_t* L_1 = Int32_ToString_m3408((&___i), /*hidden argument*/&Int32_ToString_m3408_MethodInfo);
		WWWForm_AddField_m2613(__this, L_0, L_1, /*hidden argument*/&WWWForm_AddField_m2613_MethodInfo);
		return;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.String> UnityEngine.WWWForm::get_headers()
extern TypeInfo* Dictionary_2_t502_il2cpp_TypeInfo_var;
extern MethodInfo* Dictionary_2__ctor_m3382_MethodInfo_var;
extern MethodInfo* Dictionary_2_set_Item_m3386_MethodInfo_var;
extern "C" Dictionary_2_t502 * WWWForm_get_headers_m2616 (WWWForm_t505 * __this, MethodInfo* method)
{
	static bool WWWForm_get_headers_m2616_init;
	if (!WWWForm_get_headers_m2616_init)
	{
		Dictionary_2_t502_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Dictionary_2_t502_0_0_0);
		Dictionary_2__ctor_m3382_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2__ctor_m3382_GenericMethod);
		Dictionary_2_set_Item_m3386_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2_set_Item_m3386_GenericMethod);
		WWWForm_get_headers_m2616_init = true;
	}
	Dictionary_2_t502 * V_0 = {0};
	{
		Dictionary_2_t502 * L_0 = (Dictionary_2_t502 *)il2cpp_codegen_object_new (Dictionary_2_t502_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3382(L_0, /*hidden argument*/Dictionary_2__ctor_m3382_MethodInfo_var);
		V_0 = L_0;
		bool L_1 = (__this->___containsFiles_5);
		if (!L_1)
		{
			goto IL_0049;
		}
	}
	{
		Dictionary_2_t502 * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Encoding_t503_il2cpp_TypeInfo));
		Encoding_t503 * L_3 = Encoding_get_UTF8_m3379(NULL /*static, unused*/, /*hidden argument*/&Encoding_get_UTF8_m3379_MethodInfo);
		ByteU5BU5D_t504* L_4 = (__this->___boundary_4);
		ByteU5BU5D_t504* L_5 = (__this->___boundary_4);
		NullCheck(L_5);
		NullCheck(L_3);
		String_t* L_6 = (String_t*)VirtFuncInvoker3< String_t*, ByteU5BU5D_t504*, int32_t, int32_t >::Invoke(&Encoding_GetString_m3371_MethodInfo, L_3, L_4, 0, (((int32_t)(((Array_t *)L_5)->max_length))));
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_7 = String_Concat_m1615(NULL /*static, unused*/, (String_t*) &_stringLiteral164, L_6, (String_t*) &_stringLiteral165, /*hidden argument*/&String_Concat_m1615_MethodInfo);
		NullCheck(L_2);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(Dictionary_2_set_Item_m3386_MethodInfo_var, L_2, (String_t*) &_stringLiteral163, L_7);
		goto IL_0059;
	}

IL_0049:
	{
		Dictionary_2_t502 * L_8 = V_0;
		NullCheck(L_8);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(Dictionary_2_set_Item_m3386_MethodInfo_var, L_8, (String_t*) &_stringLiteral163, (String_t*) &_stringLiteral166);
	}

IL_0059:
	{
		Dictionary_2_t502 * L_9 = V_0;
		return L_9;
	}
}
// System.Byte[] UnityEngine.WWWForm::get_data()
extern TypeInfo* StringU5BU5D_t423_il2cpp_TypeInfo_var;
extern MethodInfo* List_1_get_Item_m3397_MethodInfo_var;
extern MethodInfo* List_1_get_Item_m3400_MethodInfo_var;
extern MethodInfo* List_1_get_Count_m3401_MethodInfo_var;
extern "C" ByteU5BU5D_t504* WWWForm_get_data_m2617 (WWWForm_t505 * __this, MethodInfo* method)
{
	static bool WWWForm_get_data_m2617_init;
	if (!WWWForm_get_data_m2617_init)
	{
		StringU5BU5D_t423_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&StringU5BU5D_t423_0_0_0);
		List_1_get_Item_m3397_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1_get_Item_m3397_GenericMethod);
		List_1_get_Item_m3400_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1_get_Item_m3400_GenericMethod);
		List_1_get_Count_m3401_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1_get_Count_m3401_GenericMethod);
		WWWForm_get_data_m2617_init = true;
	}
	ByteU5BU5D_t504* V_0 = {0};
	ByteU5BU5D_t504* V_1 = {0};
	ByteU5BU5D_t504* V_2 = {0};
	ByteU5BU5D_t504* V_3 = {0};
	ByteU5BU5D_t504* V_4 = {0};
	ByteU5BU5D_t504* V_5 = {0};
	MemoryStream_t694 * V_6 = {0};
	int32_t V_7 = 0;
	ByteU5BU5D_t504* V_8 = {0};
	String_t* V_9 = {0};
	String_t* V_10 = {0};
	ByteU5BU5D_t504* V_11 = {0};
	String_t* V_12 = {0};
	ByteU5BU5D_t504* V_13 = {0};
	ByteU5BU5D_t504* V_14 = {0};
	ByteU5BU5D_t504* V_15 = {0};
	ByteU5BU5D_t504* V_16 = {0};
	MemoryStream_t694 * V_17 = {0};
	int32_t V_18 = 0;
	ByteU5BU5D_t504* V_19 = {0};
	ByteU5BU5D_t504* V_20 = {0};
	ByteU5BU5D_t504* V_21 = {0};
	ByteU5BU5D_t504* V_22 = {0};
	Exception_t275 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t275 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		bool L_0 = (__this->___containsFiles_5);
		if (!L_0)
		{
			goto IL_0311;
		}
	}
	{
		Encoding_t503 * L_1 = WWW_get_DefaultEncoding_m2605(NULL /*static, unused*/, /*hidden argument*/&WWW_get_DefaultEncoding_m2605_MethodInfo);
		NullCheck(L_1);
		ByteU5BU5D_t504* L_2 = (ByteU5BU5D_t504*)VirtFuncInvoker1< ByteU5BU5D_t504*, String_t* >::Invoke(&Encoding_GetBytes_m3394_MethodInfo, L_1, (String_t*) &_stringLiteral167);
		V_0 = L_2;
		Encoding_t503 * L_3 = WWW_get_DefaultEncoding_m2605(NULL /*static, unused*/, /*hidden argument*/&WWW_get_DefaultEncoding_m2605_MethodInfo);
		NullCheck(L_3);
		ByteU5BU5D_t504* L_4 = (ByteU5BU5D_t504*)VirtFuncInvoker1< ByteU5BU5D_t504*, String_t* >::Invoke(&Encoding_GetBytes_m3394_MethodInfo, L_3, (String_t*) &_stringLiteral168);
		V_1 = L_4;
		Encoding_t503 * L_5 = WWW_get_DefaultEncoding_m2605(NULL /*static, unused*/, /*hidden argument*/&WWW_get_DefaultEncoding_m2605_MethodInfo);
		NullCheck(L_5);
		ByteU5BU5D_t504* L_6 = (ByteU5BU5D_t504*)VirtFuncInvoker1< ByteU5BU5D_t504*, String_t* >::Invoke(&Encoding_GetBytes_m3394_MethodInfo, L_5, (String_t*) &_stringLiteral169);
		V_2 = L_6;
		Encoding_t503 * L_7 = WWW_get_DefaultEncoding_m2605(NULL /*static, unused*/, /*hidden argument*/&WWW_get_DefaultEncoding_m2605_MethodInfo);
		NullCheck(L_7);
		ByteU5BU5D_t504* L_8 = (ByteU5BU5D_t504*)VirtFuncInvoker1< ByteU5BU5D_t504*, String_t* >::Invoke(&Encoding_GetBytes_m3394_MethodInfo, L_7, (String_t*) &_stringLiteral170);
		V_3 = L_8;
		Encoding_t503 * L_9 = WWW_get_DefaultEncoding_m2605(NULL /*static, unused*/, /*hidden argument*/&WWW_get_DefaultEncoding_m2605_MethodInfo);
		NullCheck(L_9);
		ByteU5BU5D_t504* L_10 = (ByteU5BU5D_t504*)VirtFuncInvoker1< ByteU5BU5D_t504*, String_t* >::Invoke(&Encoding_GetBytes_m3394_MethodInfo, L_9, (String_t*) &_stringLiteral165);
		V_4 = L_10;
		Encoding_t503 * L_11 = WWW_get_DefaultEncoding_m2605(NULL /*static, unused*/, /*hidden argument*/&WWW_get_DefaultEncoding_m2605_MethodInfo);
		NullCheck(L_11);
		ByteU5BU5D_t504* L_12 = (ByteU5BU5D_t504*)VirtFuncInvoker1< ByteU5BU5D_t504*, String_t* >::Invoke(&Encoding_GetBytes_m3394_MethodInfo, L_11, (String_t*) &_stringLiteral171);
		V_5 = L_12;
		MemoryStream_t694 * L_13 = (MemoryStream_t694 *)il2cpp_codegen_object_new (InitializedTypeInfo(&MemoryStream_t694_il2cpp_TypeInfo));
		MemoryStream__ctor_m3395(L_13, ((int32_t)1024), /*hidden argument*/&MemoryStream__ctor_m3395_MethodInfo);
		V_6 = L_13;
	}

IL_0079:
	try
	{ // begin try (depth: 1)
		{
			V_7 = 0;
			goto IL_0297;
		}

IL_0081:
		{
			MemoryStream_t694 * L_14 = V_6;
			ByteU5BU5D_t504* L_15 = V_1;
			ByteU5BU5D_t504* L_16 = V_1;
			NullCheck(L_16);
			NullCheck(L_14);
			VirtActionInvoker3< ByteU5BU5D_t504*, int32_t, int32_t >::Invoke(&MemoryStream_Write_m3396_MethodInfo, L_14, L_15, 0, (((int32_t)(((Array_t *)L_16)->max_length))));
			MemoryStream_t694 * L_17 = V_6;
			ByteU5BU5D_t504* L_18 = V_0;
			ByteU5BU5D_t504* L_19 = V_0;
			NullCheck(L_19);
			NullCheck(L_17);
			VirtActionInvoker3< ByteU5BU5D_t504*, int32_t, int32_t >::Invoke(&MemoryStream_Write_m3396_MethodInfo, L_17, L_18, 0, (((int32_t)(((Array_t *)L_19)->max_length))));
			MemoryStream_t694 * L_20 = V_6;
			ByteU5BU5D_t504* L_21 = (__this->___boundary_4);
			ByteU5BU5D_t504* L_22 = (__this->___boundary_4);
			NullCheck(L_22);
			NullCheck(L_20);
			VirtActionInvoker3< ByteU5BU5D_t504*, int32_t, int32_t >::Invoke(&MemoryStream_Write_m3396_MethodInfo, L_20, L_21, 0, (((int32_t)(((Array_t *)L_22)->max_length))));
			MemoryStream_t694 * L_23 = V_6;
			ByteU5BU5D_t504* L_24 = V_1;
			ByteU5BU5D_t504* L_25 = V_1;
			NullCheck(L_25);
			NullCheck(L_23);
			VirtActionInvoker3< ByteU5BU5D_t504*, int32_t, int32_t >::Invoke(&MemoryStream_Write_m3396_MethodInfo, L_23, L_24, 0, (((int32_t)(((Array_t *)L_25)->max_length))));
			MemoryStream_t694 * L_26 = V_6;
			ByteU5BU5D_t504* L_27 = V_2;
			ByteU5BU5D_t504* L_28 = V_2;
			NullCheck(L_28);
			NullCheck(L_26);
			VirtActionInvoker3< ByteU5BU5D_t504*, int32_t, int32_t >::Invoke(&MemoryStream_Write_m3396_MethodInfo, L_26, L_27, 0, (((int32_t)(((Array_t *)L_28)->max_length))));
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Encoding_t503_il2cpp_TypeInfo));
			Encoding_t503 * L_29 = Encoding_get_UTF8_m3379(NULL /*static, unused*/, /*hidden argument*/&Encoding_get_UTF8_m3379_MethodInfo);
			List_1_t507 * L_30 = (__this->___types_3);
			int32_t L_31 = V_7;
			NullCheck(L_30);
			String_t* L_32 = (String_t*)VirtFuncInvoker1< String_t*, int32_t >::Invoke(List_1_get_Item_m3397_MethodInfo_var, L_30, L_31);
			NullCheck(L_29);
			ByteU5BU5D_t504* L_33 = (ByteU5BU5D_t504*)VirtFuncInvoker1< ByteU5BU5D_t504*, String_t* >::Invoke(&Encoding_GetBytes_m3394_MethodInfo, L_29, L_32);
			V_8 = L_33;
			MemoryStream_t694 * L_34 = V_6;
			ByteU5BU5D_t504* L_35 = V_8;
			ByteU5BU5D_t504* L_36 = V_8;
			NullCheck(L_36);
			NullCheck(L_34);
			VirtActionInvoker3< ByteU5BU5D_t504*, int32_t, int32_t >::Invoke(&MemoryStream_Write_m3396_MethodInfo, L_34, L_35, 0, (((int32_t)(((Array_t *)L_36)->max_length))));
			MemoryStream_t694 * L_37 = V_6;
			ByteU5BU5D_t504* L_38 = V_1;
			ByteU5BU5D_t504* L_39 = V_1;
			NullCheck(L_39);
			NullCheck(L_37);
			VirtActionInvoker3< ByteU5BU5D_t504*, int32_t, int32_t >::Invoke(&MemoryStream_Write_m3396_MethodInfo, L_37, L_38, 0, (((int32_t)(((Array_t *)L_39)->max_length))));
			MemoryStream_t694 * L_40 = V_6;
			ByteU5BU5D_t504* L_41 = V_3;
			ByteU5BU5D_t504* L_42 = V_3;
			NullCheck(L_42);
			NullCheck(L_40);
			VirtActionInvoker3< ByteU5BU5D_t504*, int32_t, int32_t >::Invoke(&MemoryStream_Write_m3396_MethodInfo, L_40, L_41, 0, (((int32_t)(((Array_t *)L_42)->max_length))));
			Encoding_t503 * L_43 = Encoding_get_UTF8_m3379(NULL /*static, unused*/, /*hidden argument*/&Encoding_get_UTF8_m3379_MethodInfo);
			NullCheck(L_43);
			String_t* L_44 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Encoding_get_HeaderName_m3398_MethodInfo, L_43);
			V_9 = L_44;
			List_1_t507 * L_45 = (__this->___fieldNames_1);
			int32_t L_46 = V_7;
			NullCheck(L_45);
			String_t* L_47 = (String_t*)VirtFuncInvoker1< String_t*, int32_t >::Invoke(List_1_get_Item_m3397_MethodInfo_var, L_45, L_46);
			V_10 = L_47;
			String_t* L_48 = V_10;
			Encoding_t503 * L_49 = Encoding_get_UTF8_m3379(NULL /*static, unused*/, /*hidden argument*/&Encoding_get_UTF8_m3379_MethodInfo);
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&WWWTranscoder_t508_il2cpp_TypeInfo));
			bool L_50 = WWWTranscoder_SevenBitClean_m2624(NULL /*static, unused*/, L_48, L_49, /*hidden argument*/&WWWTranscoder_SevenBitClean_m2624_MethodInfo);
			if (!L_50)
			{
				goto IL_0144;
			}
		}

IL_0132:
		{
			String_t* L_51 = V_10;
			NullCheck(L_51);
			int32_t L_52 = String_IndexOf_m3387(L_51, (String_t*) &_stringLiteral172, /*hidden argument*/&String_IndexOf_m3387_MethodInfo);
			if ((((int32_t)L_52) <= ((int32_t)(-1))))
			{
				goto IL_017d;
			}
		}

IL_0144:
		{
			StringU5BU5D_t423* L_53 = ((StringU5BU5D_t423*)SZArrayNew(StringU5BU5D_t423_il2cpp_TypeInfo_var, 5));
			NullCheck(L_53);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_53, 0);
			ArrayElementTypeCheck (L_53, (String_t*) &_stringLiteral172);
			*((String_t**)(String_t**)SZArrayLdElema(L_53, 0)) = (String_t*)(String_t*) &_stringLiteral172;
			StringU5BU5D_t423* L_54 = L_53;
			String_t* L_55 = V_9;
			NullCheck(L_54);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_54, 1);
			ArrayElementTypeCheck (L_54, L_55);
			*((String_t**)(String_t**)SZArrayLdElema(L_54, 1)) = (String_t*)L_55;
			StringU5BU5D_t423* L_56 = L_54;
			NullCheck(L_56);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_56, 2);
			ArrayElementTypeCheck (L_56, (String_t*) &_stringLiteral173);
			*((String_t**)(String_t**)SZArrayLdElema(L_56, 2)) = (String_t*)(String_t*) &_stringLiteral173;
			StringU5BU5D_t423* L_57 = L_56;
			String_t* L_58 = V_10;
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Encoding_t503_il2cpp_TypeInfo));
			Encoding_t503 * L_59 = Encoding_get_UTF8_m3379(NULL /*static, unused*/, /*hidden argument*/&Encoding_get_UTF8_m3379_MethodInfo);
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&WWWTranscoder_t508_il2cpp_TypeInfo));
			String_t* L_60 = WWWTranscoder_QPEncode_m2621(NULL /*static, unused*/, L_58, L_59, /*hidden argument*/&WWWTranscoder_QPEncode_m2621_MethodInfo);
			NullCheck(L_57);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_57, 3);
			ArrayElementTypeCheck (L_57, L_60);
			*((String_t**)(String_t**)SZArrayLdElema(L_57, 3)) = (String_t*)L_60;
			StringU5BU5D_t423* L_61 = L_57;
			NullCheck(L_61);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_61, 4);
			ArrayElementTypeCheck (L_61, (String_t*) &_stringLiteral174);
			*((String_t**)(String_t**)SZArrayLdElema(L_61, 4)) = (String_t*)(String_t*) &_stringLiteral174;
			IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
			String_t* L_62 = String_Concat_m3399(NULL /*static, unused*/, L_61, /*hidden argument*/&String_Concat_m3399_MethodInfo);
			V_10 = L_62;
		}

IL_017d:
		{
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Encoding_t503_il2cpp_TypeInfo));
			Encoding_t503 * L_63 = Encoding_get_UTF8_m3379(NULL /*static, unused*/, /*hidden argument*/&Encoding_get_UTF8_m3379_MethodInfo);
			String_t* L_64 = V_10;
			NullCheck(L_63);
			ByteU5BU5D_t504* L_65 = (ByteU5BU5D_t504*)VirtFuncInvoker1< ByteU5BU5D_t504*, String_t* >::Invoke(&Encoding_GetBytes_m3394_MethodInfo, L_63, L_64);
			V_11 = L_65;
			MemoryStream_t694 * L_66 = V_6;
			ByteU5BU5D_t504* L_67 = V_11;
			ByteU5BU5D_t504* L_68 = V_11;
			NullCheck(L_68);
			NullCheck(L_66);
			VirtActionInvoker3< ByteU5BU5D_t504*, int32_t, int32_t >::Invoke(&MemoryStream_Write_m3396_MethodInfo, L_66, L_67, 0, (((int32_t)(((Array_t *)L_68)->max_length))));
			MemoryStream_t694 * L_69 = V_6;
			ByteU5BU5D_t504* L_70 = V_4;
			ByteU5BU5D_t504* L_71 = V_4;
			NullCheck(L_71);
			NullCheck(L_69);
			VirtActionInvoker3< ByteU5BU5D_t504*, int32_t, int32_t >::Invoke(&MemoryStream_Write_m3396_MethodInfo, L_69, L_70, 0, (((int32_t)(((Array_t *)L_71)->max_length))));
			List_1_t507 * L_72 = (__this->___fileNames_2);
			int32_t L_73 = V_7;
			NullCheck(L_72);
			String_t* L_74 = (String_t*)VirtFuncInvoker1< String_t*, int32_t >::Invoke(List_1_get_Item_m3397_MethodInfo_var, L_72, L_73);
			if (!L_74)
			{
				goto IL_025c;
			}
		}

IL_01b9:
		{
			List_1_t507 * L_75 = (__this->___fileNames_2);
			int32_t L_76 = V_7;
			NullCheck(L_75);
			String_t* L_77 = (String_t*)VirtFuncInvoker1< String_t*, int32_t >::Invoke(List_1_get_Item_m3397_MethodInfo_var, L_75, L_76);
			V_12 = L_77;
			String_t* L_78 = V_12;
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Encoding_t503_il2cpp_TypeInfo));
			Encoding_t503 * L_79 = Encoding_get_UTF8_m3379(NULL /*static, unused*/, /*hidden argument*/&Encoding_get_UTF8_m3379_MethodInfo);
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&WWWTranscoder_t508_il2cpp_TypeInfo));
			bool L_80 = WWWTranscoder_SevenBitClean_m2624(NULL /*static, unused*/, L_78, L_79, /*hidden argument*/&WWWTranscoder_SevenBitClean_m2624_MethodInfo);
			if (!L_80)
			{
				goto IL_01eb;
			}
		}

IL_01d9:
		{
			String_t* L_81 = V_12;
			NullCheck(L_81);
			int32_t L_82 = String_IndexOf_m3387(L_81, (String_t*) &_stringLiteral172, /*hidden argument*/&String_IndexOf_m3387_MethodInfo);
			if ((((int32_t)L_82) <= ((int32_t)(-1))))
			{
				goto IL_0224;
			}
		}

IL_01eb:
		{
			StringU5BU5D_t423* L_83 = ((StringU5BU5D_t423*)SZArrayNew(StringU5BU5D_t423_il2cpp_TypeInfo_var, 5));
			NullCheck(L_83);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_83, 0);
			ArrayElementTypeCheck (L_83, (String_t*) &_stringLiteral172);
			*((String_t**)(String_t**)SZArrayLdElema(L_83, 0)) = (String_t*)(String_t*) &_stringLiteral172;
			StringU5BU5D_t423* L_84 = L_83;
			String_t* L_85 = V_9;
			NullCheck(L_84);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_84, 1);
			ArrayElementTypeCheck (L_84, L_85);
			*((String_t**)(String_t**)SZArrayLdElema(L_84, 1)) = (String_t*)L_85;
			StringU5BU5D_t423* L_86 = L_84;
			NullCheck(L_86);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_86, 2);
			ArrayElementTypeCheck (L_86, (String_t*) &_stringLiteral173);
			*((String_t**)(String_t**)SZArrayLdElema(L_86, 2)) = (String_t*)(String_t*) &_stringLiteral173;
			StringU5BU5D_t423* L_87 = L_86;
			String_t* L_88 = V_12;
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Encoding_t503_il2cpp_TypeInfo));
			Encoding_t503 * L_89 = Encoding_get_UTF8_m3379(NULL /*static, unused*/, /*hidden argument*/&Encoding_get_UTF8_m3379_MethodInfo);
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&WWWTranscoder_t508_il2cpp_TypeInfo));
			String_t* L_90 = WWWTranscoder_QPEncode_m2621(NULL /*static, unused*/, L_88, L_89, /*hidden argument*/&WWWTranscoder_QPEncode_m2621_MethodInfo);
			NullCheck(L_87);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_87, 3);
			ArrayElementTypeCheck (L_87, L_90);
			*((String_t**)(String_t**)SZArrayLdElema(L_87, 3)) = (String_t*)L_90;
			StringU5BU5D_t423* L_91 = L_87;
			NullCheck(L_91);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_91, 4);
			ArrayElementTypeCheck (L_91, (String_t*) &_stringLiteral174);
			*((String_t**)(String_t**)SZArrayLdElema(L_91, 4)) = (String_t*)(String_t*) &_stringLiteral174;
			IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
			String_t* L_92 = String_Concat_m3399(NULL /*static, unused*/, L_91, /*hidden argument*/&String_Concat_m3399_MethodInfo);
			V_12 = L_92;
		}

IL_0224:
		{
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Encoding_t503_il2cpp_TypeInfo));
			Encoding_t503 * L_93 = Encoding_get_UTF8_m3379(NULL /*static, unused*/, /*hidden argument*/&Encoding_get_UTF8_m3379_MethodInfo);
			String_t* L_94 = V_12;
			NullCheck(L_93);
			ByteU5BU5D_t504* L_95 = (ByteU5BU5D_t504*)VirtFuncInvoker1< ByteU5BU5D_t504*, String_t* >::Invoke(&Encoding_GetBytes_m3394_MethodInfo, L_93, L_94);
			V_13 = L_95;
			MemoryStream_t694 * L_96 = V_6;
			ByteU5BU5D_t504* L_97 = V_5;
			ByteU5BU5D_t504* L_98 = V_5;
			NullCheck(L_98);
			NullCheck(L_96);
			VirtActionInvoker3< ByteU5BU5D_t504*, int32_t, int32_t >::Invoke(&MemoryStream_Write_m3396_MethodInfo, L_96, L_97, 0, (((int32_t)(((Array_t *)L_98)->max_length))));
			MemoryStream_t694 * L_99 = V_6;
			ByteU5BU5D_t504* L_100 = V_13;
			ByteU5BU5D_t504* L_101 = V_13;
			NullCheck(L_101);
			NullCheck(L_99);
			VirtActionInvoker3< ByteU5BU5D_t504*, int32_t, int32_t >::Invoke(&MemoryStream_Write_m3396_MethodInfo, L_99, L_100, 0, (((int32_t)(((Array_t *)L_101)->max_length))));
			MemoryStream_t694 * L_102 = V_6;
			ByteU5BU5D_t504* L_103 = V_4;
			ByteU5BU5D_t504* L_104 = V_4;
			NullCheck(L_104);
			NullCheck(L_102);
			VirtActionInvoker3< ByteU5BU5D_t504*, int32_t, int32_t >::Invoke(&MemoryStream_Write_m3396_MethodInfo, L_102, L_103, 0, (((int32_t)(((Array_t *)L_104)->max_length))));
		}

IL_025c:
		{
			MemoryStream_t694 * L_105 = V_6;
			ByteU5BU5D_t504* L_106 = V_1;
			ByteU5BU5D_t504* L_107 = V_1;
			NullCheck(L_107);
			NullCheck(L_105);
			VirtActionInvoker3< ByteU5BU5D_t504*, int32_t, int32_t >::Invoke(&MemoryStream_Write_m3396_MethodInfo, L_105, L_106, 0, (((int32_t)(((Array_t *)L_107)->max_length))));
			MemoryStream_t694 * L_108 = V_6;
			ByteU5BU5D_t504* L_109 = V_1;
			ByteU5BU5D_t504* L_110 = V_1;
			NullCheck(L_110);
			NullCheck(L_108);
			VirtActionInvoker3< ByteU5BU5D_t504*, int32_t, int32_t >::Invoke(&MemoryStream_Write_m3396_MethodInfo, L_108, L_109, 0, (((int32_t)(((Array_t *)L_110)->max_length))));
			List_1_t506 * L_111 = (__this->___formData_0);
			int32_t L_112 = V_7;
			NullCheck(L_111);
			ByteU5BU5D_t504* L_113 = (ByteU5BU5D_t504*)VirtFuncInvoker1< ByteU5BU5D_t504*, int32_t >::Invoke(List_1_get_Item_m3400_MethodInfo_var, L_111, L_112);
			V_14 = L_113;
			MemoryStream_t694 * L_114 = V_6;
			ByteU5BU5D_t504* L_115 = V_14;
			ByteU5BU5D_t504* L_116 = V_14;
			NullCheck(L_116);
			NullCheck(L_114);
			VirtActionInvoker3< ByteU5BU5D_t504*, int32_t, int32_t >::Invoke(&MemoryStream_Write_m3396_MethodInfo, L_114, L_115, 0, (((int32_t)(((Array_t *)L_116)->max_length))));
			int32_t L_117 = V_7;
			V_7 = ((int32_t)((int32_t)L_117+(int32_t)1));
		}

IL_0297:
		{
			int32_t L_118 = V_7;
			List_1_t506 * L_119 = (__this->___formData_0);
			NullCheck(L_119);
			int32_t L_120 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(List_1_get_Count_m3401_MethodInfo_var, L_119);
			if ((((int32_t)L_118) < ((int32_t)L_120)))
			{
				goto IL_0081;
			}
		}

IL_02a9:
		{
			MemoryStream_t694 * L_121 = V_6;
			ByteU5BU5D_t504* L_122 = V_1;
			ByteU5BU5D_t504* L_123 = V_1;
			NullCheck(L_123);
			NullCheck(L_121);
			VirtActionInvoker3< ByteU5BU5D_t504*, int32_t, int32_t >::Invoke(&MemoryStream_Write_m3396_MethodInfo, L_121, L_122, 0, (((int32_t)(((Array_t *)L_123)->max_length))));
			MemoryStream_t694 * L_124 = V_6;
			ByteU5BU5D_t504* L_125 = V_0;
			ByteU5BU5D_t504* L_126 = V_0;
			NullCheck(L_126);
			NullCheck(L_124);
			VirtActionInvoker3< ByteU5BU5D_t504*, int32_t, int32_t >::Invoke(&MemoryStream_Write_m3396_MethodInfo, L_124, L_125, 0, (((int32_t)(((Array_t *)L_126)->max_length))));
			MemoryStream_t694 * L_127 = V_6;
			ByteU5BU5D_t504* L_128 = (__this->___boundary_4);
			ByteU5BU5D_t504* L_129 = (__this->___boundary_4);
			NullCheck(L_129);
			NullCheck(L_127);
			VirtActionInvoker3< ByteU5BU5D_t504*, int32_t, int32_t >::Invoke(&MemoryStream_Write_m3396_MethodInfo, L_127, L_128, 0, (((int32_t)(((Array_t *)L_129)->max_length))));
			MemoryStream_t694 * L_130 = V_6;
			ByteU5BU5D_t504* L_131 = V_0;
			ByteU5BU5D_t504* L_132 = V_0;
			NullCheck(L_132);
			NullCheck(L_130);
			VirtActionInvoker3< ByteU5BU5D_t504*, int32_t, int32_t >::Invoke(&MemoryStream_Write_m3396_MethodInfo, L_130, L_131, 0, (((int32_t)(((Array_t *)L_132)->max_length))));
			MemoryStream_t694 * L_133 = V_6;
			ByteU5BU5D_t504* L_134 = V_1;
			ByteU5BU5D_t504* L_135 = V_1;
			NullCheck(L_135);
			NullCheck(L_133);
			VirtActionInvoker3< ByteU5BU5D_t504*, int32_t, int32_t >::Invoke(&MemoryStream_Write_m3396_MethodInfo, L_133, L_134, 0, (((int32_t)(((Array_t *)L_135)->max_length))));
			MemoryStream_t694 * L_136 = V_6;
			NullCheck(L_136);
			ByteU5BU5D_t504* L_137 = (ByteU5BU5D_t504*)VirtFuncInvoker0< ByteU5BU5D_t504* >::Invoke(&MemoryStream_ToArray_m3402_MethodInfo, L_136);
			V_22 = L_137;
			IL2CPP_LEAVE(0x3F7, FINALLY_0302);
		}

IL_02fd:
		{
			; // IL_02fd: leave IL_0311
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t275 *)e.ex;
		goto FINALLY_0302;
	}

FINALLY_0302:
	{ // begin finally (depth: 1)
		{
			MemoryStream_t694 * L_138 = V_6;
			if (!L_138)
			{
				goto IL_0310;
			}
		}

IL_0309:
		{
			MemoryStream_t694 * L_139 = V_6;
			NullCheck(L_139);
			InterfaceActionInvoker0::Invoke(&IDisposable_Dispose_m1379_MethodInfo, L_139);
		}

IL_0310:
		{
			IL2CPP_END_FINALLY(770)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(770)
	{
		IL2CPP_JUMP_TBL(0x3F7, IL_03f7)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t275 *)
	}

IL_0311:
	{
		Encoding_t503 * L_140 = WWW_get_DefaultEncoding_m2605(NULL /*static, unused*/, /*hidden argument*/&WWW_get_DefaultEncoding_m2605_MethodInfo);
		NullCheck(L_140);
		ByteU5BU5D_t504* L_141 = (ByteU5BU5D_t504*)VirtFuncInvoker1< ByteU5BU5D_t504*, String_t* >::Invoke(&Encoding_GetBytes_m3394_MethodInfo, L_140, (String_t*) &_stringLiteral175);
		V_15 = L_141;
		Encoding_t503 * L_142 = WWW_get_DefaultEncoding_m2605(NULL /*static, unused*/, /*hidden argument*/&WWW_get_DefaultEncoding_m2605_MethodInfo);
		NullCheck(L_142);
		ByteU5BU5D_t504* L_143 = (ByteU5BU5D_t504*)VirtFuncInvoker1< ByteU5BU5D_t504*, String_t* >::Invoke(&Encoding_GetBytes_m3394_MethodInfo, L_142, (String_t*) &_stringLiteral176);
		V_16 = L_143;
		MemoryStream_t694 * L_144 = (MemoryStream_t694 *)il2cpp_codegen_object_new (InitializedTypeInfo(&MemoryStream_t694_il2cpp_TypeInfo));
		MemoryStream__ctor_m3395(L_144, ((int32_t)1024), /*hidden argument*/&MemoryStream__ctor_m3395_MethodInfo);
		V_17 = L_144;
	}

IL_033f:
	try
	{ // begin try (depth: 1)
		{
			V_18 = 0;
			goto IL_03c3;
		}

IL_0347:
		{
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Encoding_t503_il2cpp_TypeInfo));
			Encoding_t503 * L_145 = Encoding_get_UTF8_m3379(NULL /*static, unused*/, /*hidden argument*/&Encoding_get_UTF8_m3379_MethodInfo);
			List_1_t507 * L_146 = (__this->___fieldNames_1);
			int32_t L_147 = V_18;
			NullCheck(L_146);
			String_t* L_148 = (String_t*)VirtFuncInvoker1< String_t*, int32_t >::Invoke(List_1_get_Item_m3397_MethodInfo_var, L_146, L_147);
			NullCheck(L_145);
			ByteU5BU5D_t504* L_149 = (ByteU5BU5D_t504*)VirtFuncInvoker1< ByteU5BU5D_t504*, String_t* >::Invoke(&Encoding_GetBytes_m3394_MethodInfo, L_145, L_148);
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&WWWTranscoder_t508_il2cpp_TypeInfo));
			ByteU5BU5D_t504* L_150 = WWWTranscoder_URLEncode_m2620(NULL /*static, unused*/, L_149, /*hidden argument*/&WWWTranscoder_URLEncode_m2620_MethodInfo);
			V_19 = L_150;
			List_1_t506 * L_151 = (__this->___formData_0);
			int32_t L_152 = V_18;
			NullCheck(L_151);
			ByteU5BU5D_t504* L_153 = (ByteU5BU5D_t504*)VirtFuncInvoker1< ByteU5BU5D_t504*, int32_t >::Invoke(List_1_get_Item_m3400_MethodInfo_var, L_151, L_152);
			V_20 = L_153;
			ByteU5BU5D_t504* L_154 = V_20;
			ByteU5BU5D_t504* L_155 = WWWTranscoder_URLEncode_m2620(NULL /*static, unused*/, L_154, /*hidden argument*/&WWWTranscoder_URLEncode_m2620_MethodInfo);
			V_21 = L_155;
			int32_t L_156 = V_18;
			if ((((int32_t)L_156) <= ((int32_t)0)))
			{
				goto IL_0393;
			}
		}

IL_0385:
		{
			MemoryStream_t694 * L_157 = V_17;
			ByteU5BU5D_t504* L_158 = V_15;
			ByteU5BU5D_t504* L_159 = V_15;
			NullCheck(L_159);
			NullCheck(L_157);
			VirtActionInvoker3< ByteU5BU5D_t504*, int32_t, int32_t >::Invoke(&MemoryStream_Write_m3396_MethodInfo, L_157, L_158, 0, (((int32_t)(((Array_t *)L_159)->max_length))));
		}

IL_0393:
		{
			MemoryStream_t694 * L_160 = V_17;
			ByteU5BU5D_t504* L_161 = V_19;
			ByteU5BU5D_t504* L_162 = V_19;
			NullCheck(L_162);
			NullCheck(L_160);
			VirtActionInvoker3< ByteU5BU5D_t504*, int32_t, int32_t >::Invoke(&MemoryStream_Write_m3396_MethodInfo, L_160, L_161, 0, (((int32_t)(((Array_t *)L_162)->max_length))));
			MemoryStream_t694 * L_163 = V_17;
			ByteU5BU5D_t504* L_164 = V_16;
			ByteU5BU5D_t504* L_165 = V_16;
			NullCheck(L_165);
			NullCheck(L_163);
			VirtActionInvoker3< ByteU5BU5D_t504*, int32_t, int32_t >::Invoke(&MemoryStream_Write_m3396_MethodInfo, L_163, L_164, 0, (((int32_t)(((Array_t *)L_165)->max_length))));
			MemoryStream_t694 * L_166 = V_17;
			ByteU5BU5D_t504* L_167 = V_21;
			ByteU5BU5D_t504* L_168 = V_21;
			NullCheck(L_168);
			NullCheck(L_166);
			VirtActionInvoker3< ByteU5BU5D_t504*, int32_t, int32_t >::Invoke(&MemoryStream_Write_m3396_MethodInfo, L_166, L_167, 0, (((int32_t)(((Array_t *)L_168)->max_length))));
			int32_t L_169 = V_18;
			V_18 = ((int32_t)((int32_t)L_169+(int32_t)1));
		}

IL_03c3:
		{
			int32_t L_170 = V_18;
			List_1_t506 * L_171 = (__this->___formData_0);
			NullCheck(L_171);
			int32_t L_172 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(List_1_get_Count_m3401_MethodInfo_var, L_171);
			if ((((int32_t)L_170) < ((int32_t)L_172)))
			{
				goto IL_0347;
			}
		}

IL_03d5:
		{
			MemoryStream_t694 * L_173 = V_17;
			NullCheck(L_173);
			ByteU5BU5D_t504* L_174 = (ByteU5BU5D_t504*)VirtFuncInvoker0< ByteU5BU5D_t504* >::Invoke(&MemoryStream_ToArray_m3402_MethodInfo, L_173);
			V_22 = L_174;
			IL2CPP_LEAVE(0x3F7, FINALLY_03e8);
		}

IL_03e3:
		{
			; // IL_03e3: leave IL_03f7
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t275 *)e.ex;
		goto FINALLY_03e8;
	}

FINALLY_03e8:
	{ // begin finally (depth: 1)
		{
			MemoryStream_t694 * L_175 = V_17;
			if (!L_175)
			{
				goto IL_03f6;
			}
		}

IL_03ef:
		{
			MemoryStream_t694 * L_176 = V_17;
			NullCheck(L_176);
			InterfaceActionInvoker0::Invoke(&IDisposable_Dispose_m1379_MethodInfo, L_176);
		}

IL_03f6:
		{
			IL2CPP_END_FINALLY(1000)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(1000)
	{
		IL2CPP_JUMP_TBL(0x3F7, IL_03f7)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t275 *)
	}

IL_03f7:
	{
		ByteU5BU5D_t504* L_177 = V_22;
		return L_177;
	}
}
// UnityEngine.WWWTranscoder
#include "UnityEngine_UnityEngine_WWWTranscoder.h"
#ifndef _MSC_VER
#else
#endif

// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
extern MethodInfo WWWTranscoder_Encode_m2622_MethodInfo;
extern MethodInfo MemoryStream_WriteByte_m3409_MethodInfo;
extern MethodInfo WWWTranscoder_ByteArrayContains_m2623_MethodInfo;
extern MethodInfo WWWTranscoder_Byte2Hex_m2619_MethodInfo;
extern MethodInfo WWWTranscoder_SevenBitClean_m2625_MethodInfo;
struct Array_t;
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullException.h"
// Declaration System.Int32 System.Array::IndexOf<System.Byte>(!!0[],!!0)
// System.Int32 System.Array::IndexOf<System.Byte>(!!0[],!!0)
extern "C" int32_t Array_IndexOf_TisByte_t321_m3410_gshared (Object_t * __this /* static, unused */, ByteU5BU5D_t504* p0, uint8_t p1, MethodInfo* method);
#define Array_IndexOf_TisByte_t321_m3410(__this /* static, unused */, p0, p1, method) (( int32_t (*) (Object_t * /* static, unused */, ByteU5BU5D_t504*, uint8_t, MethodInfo*))Array_IndexOf_TisByte_t321_m3410_gshared)(__this /* static, unused */, p0, p1, method)
extern Il2CppGenericMethod Array_IndexOf_TisByte_t321_m3410_GenericMethod;


// System.Void UnityEngine.WWWTranscoder::.cctor()
extern MethodInfo WWWTranscoder__cctor_m2618_MethodInfo;
extern "C" void WWWTranscoder__cctor_m2618 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		Encoding_t503 * L_0 = WWW_get_DefaultEncoding_m2605(NULL /*static, unused*/, /*hidden argument*/&WWW_get_DefaultEncoding_m2605_MethodInfo);
		NullCheck(L_0);
		ByteU5BU5D_t504* L_1 = (ByteU5BU5D_t504*)VirtFuncInvoker1< ByteU5BU5D_t504*, String_t* >::Invoke(&Encoding_GetBytes_m3394_MethodInfo, L_0, (String_t*) &_stringLiteral178);
		((WWWTranscoder_t508_StaticFields*)InitializedTypeInfo(&WWWTranscoder_t508_il2cpp_TypeInfo)->static_fields)->___ucHexChars_0 = L_1;
		Encoding_t503 * L_2 = WWW_get_DefaultEncoding_m2605(NULL /*static, unused*/, /*hidden argument*/&WWW_get_DefaultEncoding_m2605_MethodInfo);
		NullCheck(L_2);
		ByteU5BU5D_t504* L_3 = (ByteU5BU5D_t504*)VirtFuncInvoker1< ByteU5BU5D_t504*, String_t* >::Invoke(&Encoding_GetBytes_m3394_MethodInfo, L_2, (String_t*) &_stringLiteral179);
		((WWWTranscoder_t508_StaticFields*)InitializedTypeInfo(&WWWTranscoder_t508_il2cpp_TypeInfo)->static_fields)->___lcHexChars_1 = L_3;
		((WWWTranscoder_t508_StaticFields*)InitializedTypeInfo(&WWWTranscoder_t508_il2cpp_TypeInfo)->static_fields)->___urlEscapeChar_2 = ((int32_t)37);
		((WWWTranscoder_t508_StaticFields*)InitializedTypeInfo(&WWWTranscoder_t508_il2cpp_TypeInfo)->static_fields)->___urlSpace_3 = ((int32_t)43);
		Encoding_t503 * L_4 = WWW_get_DefaultEncoding_m2605(NULL /*static, unused*/, /*hidden argument*/&WWW_get_DefaultEncoding_m2605_MethodInfo);
		NullCheck(L_4);
		ByteU5BU5D_t504* L_5 = (ByteU5BU5D_t504*)VirtFuncInvoker1< ByteU5BU5D_t504*, String_t* >::Invoke(&Encoding_GetBytes_m3394_MethodInfo, L_4, (String_t*) &_stringLiteral180);
		((WWWTranscoder_t508_StaticFields*)InitializedTypeInfo(&WWWTranscoder_t508_il2cpp_TypeInfo)->static_fields)->___urlForbidden_4 = L_5;
		((WWWTranscoder_t508_StaticFields*)InitializedTypeInfo(&WWWTranscoder_t508_il2cpp_TypeInfo)->static_fields)->___qpEscapeChar_5 = ((int32_t)61);
		((WWWTranscoder_t508_StaticFields*)InitializedTypeInfo(&WWWTranscoder_t508_il2cpp_TypeInfo)->static_fields)->___qpSpace_6 = ((int32_t)95);
		Encoding_t503 * L_6 = WWW_get_DefaultEncoding_m2605(NULL /*static, unused*/, /*hidden argument*/&WWW_get_DefaultEncoding_m2605_MethodInfo);
		NullCheck(L_6);
		ByteU5BU5D_t504* L_7 = (ByteU5BU5D_t504*)VirtFuncInvoker1< ByteU5BU5D_t504*, String_t* >::Invoke(&Encoding_GetBytes_m3394_MethodInfo, L_6, (String_t*) &_stringLiteral181);
		((WWWTranscoder_t508_StaticFields*)InitializedTypeInfo(&WWWTranscoder_t508_il2cpp_TypeInfo)->static_fields)->___qpForbidden_7 = L_7;
		return;
	}
}
// System.Byte[] UnityEngine.WWWTranscoder::Byte2Hex(System.Byte,System.Byte[])
extern TypeInfo* ByteU5BU5D_t504_il2cpp_TypeInfo_var;
extern "C" ByteU5BU5D_t504* WWWTranscoder_Byte2Hex_m2619 (Object_t * __this /* static, unused */, uint8_t ___b, ByteU5BU5D_t504* ___hexChars, MethodInfo* method)
{
	static bool WWWTranscoder_Byte2Hex_m2619_init;
	if (!WWWTranscoder_Byte2Hex_m2619_init)
	{
		ByteU5BU5D_t504_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ByteU5BU5D_t504_0_0_0);
		WWWTranscoder_Byte2Hex_m2619_init = true;
	}
	ByteU5BU5D_t504* V_0 = {0};
	{
		V_0 = ((ByteU5BU5D_t504*)SZArrayNew(ByteU5BU5D_t504_il2cpp_TypeInfo_var, 2));
		ByteU5BU5D_t504* L_0 = V_0;
		ByteU5BU5D_t504* L_1 = ___hexChars;
		uint8_t L_2 = ___b;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, ((int32_t)((int32_t)L_2>>(int32_t)4)));
		int32_t L_3 = ((int32_t)((int32_t)L_2>>(int32_t)4));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_0, 0)) = (uint8_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_1, L_3));
		ByteU5BU5D_t504* L_4 = V_0;
		ByteU5BU5D_t504* L_5 = ___hexChars;
		uint8_t L_6 = ___b;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, ((int32_t)((int32_t)L_6&(int32_t)((int32_t)15))));
		int32_t L_7 = ((int32_t)((int32_t)L_6&(int32_t)((int32_t)15)));
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_4, 1)) = (uint8_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_5, L_7));
		ByteU5BU5D_t504* L_8 = V_0;
		return L_8;
	}
}
// System.Byte[] UnityEngine.WWWTranscoder::URLEncode(System.Byte[])
extern "C" ByteU5BU5D_t504* WWWTranscoder_URLEncode_m2620 (Object_t * __this /* static, unused */, ByteU5BU5D_t504* ___toEncode, MethodInfo* method)
{
	{
		ByteU5BU5D_t504* L_0 = ___toEncode;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&WWWTranscoder_t508_il2cpp_TypeInfo));
		uint8_t L_1 = ((WWWTranscoder_t508_StaticFields*)InitializedTypeInfo(&WWWTranscoder_t508_il2cpp_TypeInfo)->static_fields)->___urlEscapeChar_2;
		uint8_t L_2 = ((WWWTranscoder_t508_StaticFields*)InitializedTypeInfo(&WWWTranscoder_t508_il2cpp_TypeInfo)->static_fields)->___urlSpace_3;
		ByteU5BU5D_t504* L_3 = ((WWWTranscoder_t508_StaticFields*)InitializedTypeInfo(&WWWTranscoder_t508_il2cpp_TypeInfo)->static_fields)->___urlForbidden_4;
		ByteU5BU5D_t504* L_4 = WWWTranscoder_Encode_m2622(NULL /*static, unused*/, L_0, L_1, L_2, L_3, 0, /*hidden argument*/&WWWTranscoder_Encode_m2622_MethodInfo);
		return L_4;
	}
}
// System.String UnityEngine.WWWTranscoder::QPEncode(System.String,System.Text.Encoding)
extern "C" String_t* WWWTranscoder_QPEncode_m2621 (Object_t * __this /* static, unused */, String_t* ___toEncode, Encoding_t503 * ___e, MethodInfo* method)
{
	ByteU5BU5D_t504* V_0 = {0};
	{
		Encoding_t503 * L_0 = ___e;
		String_t* L_1 = ___toEncode;
		NullCheck(L_0);
		ByteU5BU5D_t504* L_2 = (ByteU5BU5D_t504*)VirtFuncInvoker1< ByteU5BU5D_t504*, String_t* >::Invoke(&Encoding_GetBytes_m3394_MethodInfo, L_0, L_1);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&WWWTranscoder_t508_il2cpp_TypeInfo));
		uint8_t L_3 = ((WWWTranscoder_t508_StaticFields*)InitializedTypeInfo(&WWWTranscoder_t508_il2cpp_TypeInfo)->static_fields)->___qpEscapeChar_5;
		uint8_t L_4 = ((WWWTranscoder_t508_StaticFields*)InitializedTypeInfo(&WWWTranscoder_t508_il2cpp_TypeInfo)->static_fields)->___qpSpace_6;
		ByteU5BU5D_t504* L_5 = ((WWWTranscoder_t508_StaticFields*)InitializedTypeInfo(&WWWTranscoder_t508_il2cpp_TypeInfo)->static_fields)->___qpForbidden_7;
		ByteU5BU5D_t504* L_6 = WWWTranscoder_Encode_m2622(NULL /*static, unused*/, L_2, L_3, L_4, L_5, 1, /*hidden argument*/&WWWTranscoder_Encode_m2622_MethodInfo);
		V_0 = L_6;
		Encoding_t503 * L_7 = WWW_get_DefaultEncoding_m2605(NULL /*static, unused*/, /*hidden argument*/&WWW_get_DefaultEncoding_m2605_MethodInfo);
		ByteU5BU5D_t504* L_8 = V_0;
		ByteU5BU5D_t504* L_9 = V_0;
		NullCheck(L_9);
		NullCheck(L_7);
		String_t* L_10 = (String_t*)VirtFuncInvoker3< String_t*, ByteU5BU5D_t504*, int32_t, int32_t >::Invoke(&Encoding_GetString_m3371_MethodInfo, L_7, L_8, 0, (((int32_t)(((Array_t *)L_9)->max_length))));
		return L_10;
	}
}
// System.Byte[] UnityEngine.WWWTranscoder::Encode(System.Byte[],System.Byte,System.Byte,System.Byte[],System.Boolean)
extern "C" ByteU5BU5D_t504* WWWTranscoder_Encode_m2622 (Object_t * __this /* static, unused */, ByteU5BU5D_t504* ___input, uint8_t ___escapeChar, uint8_t ___space, ByteU5BU5D_t504* ___forbidden, bool ___uppercase, MethodInfo* method)
{
	MemoryStream_t694 * V_0 = {0};
	int32_t V_1 = 0;
	ByteU5BU5D_t504* V_2 = {0};
	Exception_t275 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t275 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	int32_t G_B9_0 = 0;
	MemoryStream_t694 * G_B9_1 = {0};
	int32_t G_B8_0 = 0;
	MemoryStream_t694 * G_B8_1 = {0};
	ByteU5BU5D_t504* G_B10_0 = {0};
	int32_t G_B10_1 = 0;
	MemoryStream_t694 * G_B10_2 = {0};
	{
		ByteU5BU5D_t504* L_0 = ___input;
		NullCheck(L_0);
		MemoryStream_t694 * L_1 = (MemoryStream_t694 *)il2cpp_codegen_object_new (InitializedTypeInfo(&MemoryStream_t694_il2cpp_TypeInfo));
		MemoryStream__ctor_m3395(L_1, ((int32_t)((int32_t)(((int32_t)(((Array_t *)L_0)->max_length)))*(int32_t)2)), /*hidden argument*/&MemoryStream__ctor_m3395_MethodInfo);
		V_0 = L_1;
	}

IL_000b:
	try
	{ // begin try (depth: 1)
		{
			V_1 = 0;
			goto IL_0089;
		}

IL_0012:
		{
			ByteU5BU5D_t504* L_2 = ___input;
			int32_t L_3 = V_1;
			NullCheck(L_2);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
			int32_t L_4 = L_3;
			if ((!(((uint32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_2, L_4))) == ((uint32_t)((int32_t)32)))))
			{
				goto IL_0028;
			}
		}

IL_001c:
		{
			MemoryStream_t694 * L_5 = V_0;
			uint8_t L_6 = ___space;
			NullCheck(L_5);
			VirtActionInvoker1< uint8_t >::Invoke(&MemoryStream_WriteByte_m3409_MethodInfo, L_5, L_6);
			goto IL_0085;
		}

IL_0028:
		{
			ByteU5BU5D_t504* L_7 = ___input;
			int32_t L_8 = V_1;
			NullCheck(L_7);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
			int32_t L_9 = L_8;
			if ((((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_7, L_9))) < ((int32_t)((int32_t)32))))
			{
				goto IL_004a;
			}
		}

IL_0032:
		{
			ByteU5BU5D_t504* L_10 = ___input;
			int32_t L_11 = V_1;
			NullCheck(L_10);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
			int32_t L_12 = L_11;
			if ((((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_10, L_12))) > ((int32_t)((int32_t)126))))
			{
				goto IL_004a;
			}
		}

IL_003c:
		{
			ByteU5BU5D_t504* L_13 = ___forbidden;
			ByteU5BU5D_t504* L_14 = ___input;
			int32_t L_15 = V_1;
			NullCheck(L_14);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_14, L_15);
			int32_t L_16 = L_15;
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&WWWTranscoder_t508_il2cpp_TypeInfo));
			bool L_17 = WWWTranscoder_ByteArrayContains_m2623(NULL /*static, unused*/, L_13, (*(uint8_t*)(uint8_t*)SZArrayLdElema(L_14, L_16)), /*hidden argument*/&WWWTranscoder_ByteArrayContains_m2623_MethodInfo);
			if (!L_17)
			{
				goto IL_007c;
			}
		}

IL_004a:
		{
			MemoryStream_t694 * L_18 = V_0;
			uint8_t L_19 = ___escapeChar;
			NullCheck(L_18);
			VirtActionInvoker1< uint8_t >::Invoke(&MemoryStream_WriteByte_m3409_MethodInfo, L_18, L_19);
			MemoryStream_t694 * L_20 = V_0;
			ByteU5BU5D_t504* L_21 = ___input;
			int32_t L_22 = V_1;
			NullCheck(L_21);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_21, L_22);
			int32_t L_23 = L_22;
			bool L_24 = ___uppercase;
			G_B8_0 = ((int32_t)((*(uint8_t*)(uint8_t*)SZArrayLdElema(L_21, L_23))));
			G_B8_1 = L_20;
			if (!L_24)
			{
				G_B9_0 = ((int32_t)((*(uint8_t*)(uint8_t*)SZArrayLdElema(L_21, L_23))));
				G_B9_1 = L_20;
				goto IL_0066;
			}
		}

IL_005c:
		{
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&WWWTranscoder_t508_il2cpp_TypeInfo));
			ByteU5BU5D_t504* L_25 = ((WWWTranscoder_t508_StaticFields*)InitializedTypeInfo(&WWWTranscoder_t508_il2cpp_TypeInfo)->static_fields)->___ucHexChars_0;
			G_B10_0 = L_25;
			G_B10_1 = G_B8_0;
			G_B10_2 = G_B8_1;
			goto IL_006b;
		}

IL_0066:
		{
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&WWWTranscoder_t508_il2cpp_TypeInfo));
			ByteU5BU5D_t504* L_26 = ((WWWTranscoder_t508_StaticFields*)InitializedTypeInfo(&WWWTranscoder_t508_il2cpp_TypeInfo)->static_fields)->___lcHexChars_1;
			G_B10_0 = L_26;
			G_B10_1 = G_B9_0;
			G_B10_2 = G_B9_1;
		}

IL_006b:
		{
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&WWWTranscoder_t508_il2cpp_TypeInfo));
			ByteU5BU5D_t504* L_27 = WWWTranscoder_Byte2Hex_m2619(NULL /*static, unused*/, G_B10_1, G_B10_0, /*hidden argument*/&WWWTranscoder_Byte2Hex_m2619_MethodInfo);
			NullCheck(G_B10_2);
			VirtActionInvoker3< ByteU5BU5D_t504*, int32_t, int32_t >::Invoke(&MemoryStream_Write_m3396_MethodInfo, G_B10_2, L_27, 0, 2);
			goto IL_0085;
		}

IL_007c:
		{
			MemoryStream_t694 * L_28 = V_0;
			ByteU5BU5D_t504* L_29 = ___input;
			int32_t L_30 = V_1;
			NullCheck(L_29);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_29, L_30);
			int32_t L_31 = L_30;
			NullCheck(L_28);
			VirtActionInvoker1< uint8_t >::Invoke(&MemoryStream_WriteByte_m3409_MethodInfo, L_28, (*(uint8_t*)(uint8_t*)SZArrayLdElema(L_29, L_31)));
		}

IL_0085:
		{
			int32_t L_32 = V_1;
			V_1 = ((int32_t)((int32_t)L_32+(int32_t)1));
		}

IL_0089:
		{
			int32_t L_33 = V_1;
			ByteU5BU5D_t504* L_34 = ___input;
			NullCheck(L_34);
			if ((((int32_t)L_33) < ((int32_t)(((int32_t)(((Array_t *)L_34)->max_length))))))
			{
				goto IL_0012;
			}
		}

IL_0092:
		{
			MemoryStream_t694 * L_35 = V_0;
			NullCheck(L_35);
			ByteU5BU5D_t504* L_36 = (ByteU5BU5D_t504*)VirtFuncInvoker0< ByteU5BU5D_t504* >::Invoke(&MemoryStream_ToArray_m3402_MethodInfo, L_35);
			V_2 = L_36;
			IL2CPP_LEAVE(0xB0, FINALLY_00a3);
		}

IL_009e:
		{
			; // IL_009e: leave IL_00b0
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t275 *)e.ex;
		goto FINALLY_00a3;
	}

FINALLY_00a3:
	{ // begin finally (depth: 1)
		{
			MemoryStream_t694 * L_37 = V_0;
			if (!L_37)
			{
				goto IL_00af;
			}
		}

IL_00a9:
		{
			MemoryStream_t694 * L_38 = V_0;
			NullCheck(L_38);
			InterfaceActionInvoker0::Invoke(&IDisposable_Dispose_m1379_MethodInfo, L_38);
		}

IL_00af:
		{
			IL2CPP_END_FINALLY(163)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(163)
	{
		IL2CPP_JUMP_TBL(0xB0, IL_00b0)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t275 *)
	}

IL_00b0:
	{
		ByteU5BU5D_t504* L_39 = V_2;
		return L_39;
	}
}
// System.Boolean UnityEngine.WWWTranscoder::ByteArrayContains(System.Byte[],System.Byte)
extern MethodInfo* Array_IndexOf_TisByte_t321_m3410_MethodInfo_var;
extern "C" bool WWWTranscoder_ByteArrayContains_m2623 (Object_t * __this /* static, unused */, ByteU5BU5D_t504* ___array, uint8_t ___b, MethodInfo* method)
{
	static bool WWWTranscoder_ByteArrayContains_m2623_init;
	if (!WWWTranscoder_ByteArrayContains_m2623_init)
	{
		Array_IndexOf_TisByte_t321_m3410_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Array_IndexOf_TisByte_t321_m3410_GenericMethod);
		WWWTranscoder_ByteArrayContains_m2623_init = true;
	}
	{
		ByteU5BU5D_t504* L_0 = ___array;
		uint8_t L_1 = ___b;
		int32_t L_2 = Array_IndexOf_TisByte_t321_m3410(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/Array_IndexOf_TisByte_t321_m3410_MethodInfo_var);
		return ((((int32_t)((((int32_t)L_2) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean UnityEngine.WWWTranscoder::SevenBitClean(System.String,System.Text.Encoding)
extern "C" bool WWWTranscoder_SevenBitClean_m2624 (Object_t * __this /* static, unused */, String_t* ___s, Encoding_t503 * ___e, MethodInfo* method)
{
	{
		Encoding_t503 * L_0 = ___e;
		String_t* L_1 = ___s;
		NullCheck(L_0);
		ByteU5BU5D_t504* L_2 = (ByteU5BU5D_t504*)VirtFuncInvoker1< ByteU5BU5D_t504*, String_t* >::Invoke(&Encoding_GetBytes_m3394_MethodInfo, L_0, L_1);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&WWWTranscoder_t508_il2cpp_TypeInfo));
		bool L_3 = WWWTranscoder_SevenBitClean_m2625(NULL /*static, unused*/, L_2, /*hidden argument*/&WWWTranscoder_SevenBitClean_m2625_MethodInfo);
		return L_3;
	}
}
// System.Boolean UnityEngine.WWWTranscoder::SevenBitClean(System.Byte[])
extern "C" bool WWWTranscoder_SevenBitClean_m2625 (Object_t * __this /* static, unused */, ByteU5BU5D_t504* ___input, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0021;
	}

IL_0007:
	{
		ByteU5BU5D_t504* L_0 = ___input;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_1);
		int32_t L_2 = L_1;
		if ((((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_0, L_2))) < ((int32_t)((int32_t)32))))
		{
			goto IL_001b;
		}
	}
	{
		ByteU5BU5D_t504* L_3 = ___input;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = L_4;
		if ((((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_3, L_5))) <= ((int32_t)((int32_t)126))))
		{
			goto IL_001d;
		}
	}

IL_001b:
	{
		return 0;
	}

IL_001d:
	{
		int32_t L_6 = V_0;
		V_0 = ((int32_t)((int32_t)L_6+(int32_t)1));
	}

IL_0021:
	{
		int32_t L_7 = V_0;
		ByteU5BU5D_t504* L_8 = ___input;
		NullCheck(L_8);
		if ((((int32_t)L_7) < ((int32_t)(((int32_t)(((Array_t *)L_8)->max_length))))))
		{
			goto IL_0007;
		}
	}
	{
		return 1;
	}
}
// UnityEngine.CacheIndex
#include "UnityEngine_UnityEngine_CacheIndex.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CacheIndex_t509_il2cpp_TypeInfo;
// UnityEngine.CacheIndex
#include "UnityEngine_UnityEngine_CacheIndexMethodDeclarations.h"



// Conversion methods for marshalling of: UnityEngine.CacheIndex
void CacheIndex_t509_marshal(const CacheIndex_t509& unmarshaled, CacheIndex_t509_marshaled& marshaled)
{
	marshaled.___name_0 = il2cpp_codegen_marshal_string(unmarshaled.___name_0);
	marshaled.___bytesUsed_1 = unmarshaled.___bytesUsed_1;
	marshaled.___expires_2 = unmarshaled.___expires_2;
}
void CacheIndex_t509_marshal_back(const CacheIndex_t509_marshaled& marshaled, CacheIndex_t509& unmarshaled)
{
	unmarshaled.___name_0 = il2cpp_codegen_marshal_string_result(marshaled.___name_0);
	unmarshaled.___bytesUsed_1 = marshaled.___bytesUsed_1;
	unmarshaled.___expires_2 = marshaled.___expires_2;
}
// Conversion method for clean up from marshalling of: UnityEngine.CacheIndex
void CacheIndex_t509_marshal_cleanup(CacheIndex_t509_marshaled& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___name_0);
	marshaled.___name_0 = NULL;
}
// UnityEngine.UnityString
#include "UnityEngine_UnityEngine_UnityString.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo UnityString_t510_il2cpp_TypeInfo;

extern MethodInfo String_Format_m1846_MethodInfo;


// System.String UnityEngine.UnityString::Format(System.String,System.Object[])
extern "C" String_t* UnityString_Format_m2626 (Object_t * __this /* static, unused */, String_t* ___fmt, ObjectU5BU5D_t269* ___args, MethodInfo* method)
{
	{
		String_t* L_0 = ___fmt;
		ObjectU5BU5D_t269* L_1 = ___args;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_2 = String_Format_m1846(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&String_Format_m1846_MethodInfo);
		return L_2;
	}
}
// UnityEngine.AsyncOperation
#include "UnityEngine_UnityEngine_AsyncOperation.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo AsyncOperation_t417_il2cpp_TypeInfo;

extern MethodInfo AsyncOperation_InternalDestroy_m2628_MethodInfo;


// System.Void UnityEngine.AsyncOperation::.ctor()
extern "C" void AsyncOperation__ctor_m2627 (AsyncOperation_t417 * __this, MethodInfo* method)
{
	{
		YieldInstruction__ctor_m2744(__this, /*hidden argument*/&YieldInstruction__ctor_m2744_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.AsyncOperation::InternalDestroy()
extern "C" void AsyncOperation_InternalDestroy_m2628 (AsyncOperation_t417 * __this, MethodInfo* method)
{
	typedef void (*AsyncOperation_InternalDestroy_m2628_ftn) (AsyncOperation_t417 *);
	static AsyncOperation_InternalDestroy_m2628_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AsyncOperation_InternalDestroy_m2628_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AsyncOperation::InternalDestroy()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.AsyncOperation::Finalize()
extern MethodInfo AsyncOperation_Finalize_m2629_MethodInfo;
extern "C" void AsyncOperation_Finalize_m2629 (AsyncOperation_t417 * __this, MethodInfo* method)
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
		AsyncOperation_InternalDestroy_m2628(__this, /*hidden argument*/&AsyncOperation_InternalDestroy_m2628_MethodInfo);
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
// Conversion methods for marshalling of: UnityEngine.AsyncOperation
void AsyncOperation_t417_marshal(const AsyncOperation_t417& unmarshaled, AsyncOperation_t417_marshaled& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.___m_Ptr_0;
}
void AsyncOperation_t417_marshal_back(const AsyncOperation_t417_marshaled& marshaled, AsyncOperation_t417& unmarshaled)
{
	unmarshaled.___m_Ptr_0 = marshaled.___m_Ptr_0;
}
// Conversion method for clean up from marshalling of: UnityEngine.AsyncOperation
void AsyncOperation_t417_marshal_cleanup(AsyncOperation_t417_marshaled& marshaled)
{
}
// UnityEngine.Application/LogCallback
#include "UnityEngine_UnityEngine_Application_LogCallback.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo LogCallback_t511_il2cpp_TypeInfo;
// UnityEngine.Application/LogCallback
#include "UnityEngine_UnityEngine_Application_LogCallbackMethodDeclarations.h"



// System.Void UnityEngine.Application/LogCallback::.ctor(System.Object,System.IntPtr)
extern MethodInfo LogCallback__ctor_m2630_MethodInfo;
extern "C" void LogCallback__ctor_m2630 (LogCallback_t511 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.Application/LogCallback::Invoke(System.String,System.String,UnityEngine.LogType)
extern MethodInfo LogCallback_Invoke_m2631_MethodInfo;
extern "C" void LogCallback_Invoke_m2631 (LogCallback_t511 * __this, String_t* ___condition, String_t* ___stackTrace, int32_t ___type, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		LogCallback_Invoke_m2631((LogCallback_t511 *)__this->___prev_9,___condition, ___stackTrace, ___type, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, String_t* ___condition, String_t* ___stackTrace, int32_t ___type, MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___condition, ___stackTrace, ___type,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t * __this, String_t* ___condition, String_t* ___stackTrace, int32_t ___type, MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___condition, ___stackTrace, ___type,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, String_t* ___stackTrace, int32_t ___type, MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(___condition, ___stackTrace, ___type,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_LogCallback_t511(Il2CppObject* delegate, String_t* ___condition, String_t* ___stackTrace, int32_t ___type)
{
	typedef void (STDCALL *native_function_ptr_type)(char*, char*, int32_t);
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Marshaling of parameter '___condition' to native representation
	char* ____condition_marshaled = { 0 };
	____condition_marshaled = il2cpp_codegen_marshal_string(___condition);

	// Marshaling of parameter '___stackTrace' to native representation
	char* ____stackTrace_marshaled = { 0 };
	____stackTrace_marshaled = il2cpp_codegen_marshal_string(___stackTrace);

	// Marshaling of parameter '___type' to native representation

	// Native function invocation
	_il2cpp_pinvoke_func(____condition_marshaled, ____stackTrace_marshaled, ___type);

	// Marshaling cleanup of parameter '___condition' native representation
	il2cpp_codegen_marshal_free(____condition_marshaled);
	____condition_marshaled = NULL;

	// Marshaling cleanup of parameter '___stackTrace' native representation
	il2cpp_codegen_marshal_free(____stackTrace_marshaled);
	____stackTrace_marshaled = NULL;

	// Marshaling cleanup of parameter '___type' native representation

}
// System.IAsyncResult UnityEngine.Application/LogCallback::BeginInvoke(System.String,System.String,UnityEngine.LogType,System.AsyncCallback,System.Object)
extern MethodInfo LogCallback_BeginInvoke_m2632_MethodInfo;
extern "C" Object_t * LogCallback_BeginInvoke_m2632 (LogCallback_t511 * __this, String_t* ___condition, String_t* ___stackTrace, int32_t ___type, AsyncCallback_t171 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[4] = {0};
	__d_args[0] = ___condition;
	__d_args[1] = ___stackTrace;
	__d_args[2] = Box(InitializedTypeInfo(&LogType_t425_il2cpp_TypeInfo), &___type);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.Application/LogCallback::EndInvoke(System.IAsyncResult)
extern MethodInfo LogCallback_EndInvoke_m2633_MethodInfo;
extern "C" void LogCallback_EndInvoke_m2633 (LogCallback_t511 * __this, Object_t * ___result, MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// UnityEngine.Application
#include "UnityEngine_UnityEngine_Application.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Application_t512_il2cpp_TypeInfo;



// System.Boolean UnityEngine.Application::get_isPlaying()
extern MethodInfo Application_get_isPlaying_m1743_MethodInfo;
extern "C" bool Application_get_isPlaying_m1743 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef bool (*Application_get_isPlaying_m1743_ftn) ();
	static Application_get_isPlaying_m1743_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Application_get_isPlaying_m1743_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Application::get_isPlaying()");
	return _il2cpp_icall_func();
}
// System.Boolean UnityEngine.Application::get_isEditor()
extern MethodInfo Application_get_isEditor_m1746_MethodInfo;
extern "C" bool Application_get_isEditor_m1746 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef bool (*Application_get_isEditor_m1746_ftn) ();
	static Application_get_isEditor_m1746_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Application_get_isEditor_m1746_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Application::get_isEditor()");
	return _il2cpp_icall_func();
}
// UnityEngine.RuntimePlatform UnityEngine.Application::get_platform()
extern "C" int32_t Application_get_platform_m1632 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef int32_t (*Application_get_platform_m1632_ftn) ();
	static Application_get_platform_m1632_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Application_get_platform_m1632_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Application::get_platform()");
	return _il2cpp_icall_func();
}
// System.Void UnityEngine.Application::CallLogCallback(System.String,System.String,UnityEngine.LogType,System.Boolean)
extern MethodInfo Application_CallLogCallback_m2634_MethodInfo;
extern "C" void Application_CallLogCallback_m2634 (Object_t * __this /* static, unused */, String_t* ___logString, String_t* ___stackTrace, int32_t ___type, bool ___invokedOnMainThread, MethodInfo* method)
{
	LogCallback_t511 * V_0 = {0};
	LogCallback_t511 * V_1 = {0};
	{
		bool L_0 = ___invokedOnMainThread;
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		LogCallback_t511 * L_1 = ((Application_t512_StaticFields*)InitializedTypeInfo(&Application_t512_il2cpp_TypeInfo)->static_fields)->___s_LogCallbackHandler_0;
		V_0 = L_1;
		LogCallback_t511 * L_2 = V_0;
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		LogCallback_t511 * L_3 = V_0;
		String_t* L_4 = ___logString;
		String_t* L_5 = ___stackTrace;
		int32_t L_6 = ___type;
		NullCheck(L_3);
		VirtActionInvoker3< String_t*, String_t*, int32_t >::Invoke(&LogCallback_Invoke_m2631_MethodInfo, L_3, L_4, L_5, L_6);
	}

IL_001b:
	{
		LogCallback_t511 * L_7 = ((Application_t512_StaticFields*)InitializedTypeInfo(&Application_t512_il2cpp_TypeInfo)->static_fields)->___s_LogCallbackHandlerThreaded_1;
		V_1 = L_7;
		LogCallback_t511 * L_8 = V_1;
		if (!L_8)
		{
			goto IL_0030;
		}
	}
	{
		LogCallback_t511 * L_9 = V_1;
		String_t* L_10 = ___logString;
		String_t* L_11 = ___stackTrace;
		int32_t L_12 = ___type;
		NullCheck(L_9);
		VirtActionInvoker3< String_t*, String_t*, int32_t >::Invoke(&LogCallback_Invoke_m2631_MethodInfo, L_9, L_10, L_11, L_12);
	}

IL_0030:
	{
		return;
	}
}
// UnityEngine.Behaviour
#include "UnityEngine_UnityEngine_Behaviour.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Behaviour_t328_il2cpp_TypeInfo;
// UnityEngine.Behaviour
#include "UnityEngine_UnityEngine_BehaviourMethodDeclarations.h"

extern MethodInfo Component__ctor_m2709_MethodInfo;


// System.Void UnityEngine.Behaviour::.ctor()
extern MethodInfo Behaviour__ctor_m2635_MethodInfo;
extern "C" void Behaviour__ctor_m2635 (Behaviour_t328 * __this, MethodInfo* method)
{
	{
		Component__ctor_m2709(__this, /*hidden argument*/&Component__ctor_m2709_MethodInfo);
		return;
	}
}
// System.Boolean UnityEngine.Behaviour::get_enabled()
extern MethodInfo Behaviour_get_enabled_m1346_MethodInfo;
extern "C" bool Behaviour_get_enabled_m1346 (Behaviour_t328 * __this, MethodInfo* method)
{
	typedef bool (*Behaviour_get_enabled_m1346_ftn) (Behaviour_t328 *);
	static Behaviour_get_enabled_m1346_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Behaviour_get_enabled_m1346_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Behaviour::get_enabled()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
extern MethodInfo Behaviour_set_enabled_m41_MethodInfo;
extern "C" void Behaviour_set_enabled_m41 (Behaviour_t328 * __this, bool ___value, MethodInfo* method)
{
	typedef void (*Behaviour_set_enabled_m41_ftn) (Behaviour_t328 *, bool);
	static Behaviour_set_enabled_m41_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Behaviour_set_enabled_m41_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Behaviour::set_enabled(System.Boolean)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Boolean UnityEngine.Behaviour::get_isActiveAndEnabled()
extern MethodInfo Behaviour_get_isActiveAndEnabled_m1347_MethodInfo;
extern "C" bool Behaviour_get_isActiveAndEnabled_m1347 (Behaviour_t328 * __this, MethodInfo* method)
{
	typedef bool (*Behaviour_get_isActiveAndEnabled_m1347_ftn) (Behaviour_t328 *);
	static Behaviour_get_isActiveAndEnabled_m1347_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Behaviour_get_isActiveAndEnabled_m1347_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Behaviour::get_isActiveAndEnabled()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.Camera/CameraCallback
#include "UnityEngine_UnityEngine_Camera_CameraCallback.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CameraCallback_t513_il2cpp_TypeInfo;
// UnityEngine.Camera/CameraCallback
#include "UnityEngine_UnityEngine_Camera_CameraCallbackMethodDeclarations.h"

// UnityEngine.Camera
#include "UnityEngine_UnityEngine_Camera.h"


// System.Void UnityEngine.Camera/CameraCallback::.ctor(System.Object,System.IntPtr)
extern MethodInfo CameraCallback__ctor_m2636_MethodInfo;
extern "C" void CameraCallback__ctor_m2636 (CameraCallback_t513 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.Camera/CameraCallback::Invoke(UnityEngine.Camera)
extern MethodInfo CameraCallback_Invoke_m2637_MethodInfo;
extern "C" void CameraCallback_Invoke_m2637 (CameraCallback_t513 * __this, Camera_t7 * ___cam, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		CameraCallback_Invoke_m2637((CameraCallback_t513 *)__this->___prev_9,___cam, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, Camera_t7 * ___cam, MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___cam,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t * __this, Camera_t7 * ___cam, MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___cam,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(___cam,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_CameraCallback_t513(Il2CppObject* delegate, Camera_t7 * ___cam)
{
	// Marshaling of parameter '___cam' to native representation
	Camera_t7 * ____cam_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'UnityEngine.Camera'."));
}
// System.IAsyncResult UnityEngine.Camera/CameraCallback::BeginInvoke(UnityEngine.Camera,System.AsyncCallback,System.Object)
extern MethodInfo CameraCallback_BeginInvoke_m2638_MethodInfo;
extern "C" Object_t * CameraCallback_BeginInvoke_m2638 (CameraCallback_t513 * __this, Camera_t7 * ___cam, AsyncCallback_t171 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___cam;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.Camera/CameraCallback::EndInvoke(System.IAsyncResult)
extern MethodInfo CameraCallback_EndInvoke_m2639_MethodInfo;
extern "C" void CameraCallback_EndInvoke_m2639 (CameraCallback_t513 * __this, Object_t * ___result, MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Camera_t7_il2cpp_TypeInfo;
// UnityEngine.Camera
#include "UnityEngine_UnityEngine_CameraMethodDeclarations.h"

// UnityEngine.CameraClearFlags
#include "UnityEngine_UnityEngine_CameraClearFlags.h"
// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObject.h"
extern MethodInfo Camera_INTERNAL_get_pixelRect_m2641_MethodInfo;
extern MethodInfo Camera_INTERNAL_CALL_ScreenToViewportPoint_m2645_MethodInfo;
extern MethodInfo Camera_INTERNAL_CALL_ScreenPointToRay_m2646_MethodInfo;
extern MethodInfo Camera_INTERNAL_CALL_RaycastTry_m2653_MethodInfo;
extern MethodInfo Camera_INTERNAL_CALL_RaycastTry2D_m2655_MethodInfo;


// System.Single UnityEngine.Camera::get_nearClipPlane()
extern MethodInfo Camera_get_nearClipPlane_m1424_MethodInfo;
extern "C" float Camera_get_nearClipPlane_m1424 (Camera_t7 * __this, MethodInfo* method)
{
	typedef float (*Camera_get_nearClipPlane_m1424_ftn) (Camera_t7 *);
	static Camera_get_nearClipPlane_m1424_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_nearClipPlane_m1424_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_nearClipPlane()");
	return _il2cpp_icall_func(__this);
}
// System.Single UnityEngine.Camera::get_farClipPlane()
extern MethodInfo Camera_get_farClipPlane_m1423_MethodInfo;
extern "C" float Camera_get_farClipPlane_m1423 (Camera_t7 * __this, MethodInfo* method)
{
	typedef float (*Camera_get_farClipPlane_m1423_ftn) (Camera_t7 *);
	static Camera_get_farClipPlane_m1423_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_farClipPlane_m1423_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_farClipPlane()");
	return _il2cpp_icall_func(__this);
}
// System.Single UnityEngine.Camera::get_depth()
extern MethodInfo Camera_get_depth_m1270_MethodInfo;
extern "C" float Camera_get_depth_m1270 (Camera_t7 * __this, MethodInfo* method)
{
	typedef float (*Camera_get_depth_m1270_ftn) (Camera_t7 *);
	static Camera_get_depth_m1270_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_depth_m1270_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_depth()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.Camera::get_cullingMask()
extern MethodInfo Camera_get_cullingMask_m1437_MethodInfo;
extern "C" int32_t Camera_get_cullingMask_m1437 (Camera_t7 * __this, MethodInfo* method)
{
	typedef int32_t (*Camera_get_cullingMask_m1437_ftn) (Camera_t7 *);
	static Camera_get_cullingMask_m1437_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_cullingMask_m1437_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_cullingMask()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.Camera::get_eventMask()
extern MethodInfo Camera_get_eventMask_m2640_MethodInfo;
extern "C" int32_t Camera_get_eventMask_m2640 (Camera_t7 * __this, MethodInfo* method)
{
	typedef int32_t (*Camera_get_eventMask_m2640_ftn) (Camera_t7 *);
	static Camera_get_eventMask_m2640_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_eventMask_m2640_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_eventMask()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Camera::INTERNAL_get_pixelRect(UnityEngine.Rect&)
extern "C" void Camera_INTERNAL_get_pixelRect_m2641 (Camera_t7 * __this, Rect_t141 * ___value, MethodInfo* method)
{
	typedef void (*Camera_INTERNAL_get_pixelRect_m2641_ftn) (Camera_t7 *, Rect_t141 *);
	static Camera_INTERNAL_get_pixelRect_m2641_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_INTERNAL_get_pixelRect_m2641_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::INTERNAL_get_pixelRect(UnityEngine.Rect&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Rect UnityEngine.Camera::get_pixelRect()
extern MethodInfo Camera_get_pixelRect_m2642_MethodInfo;
extern "C" Rect_t141  Camera_get_pixelRect_m2642 (Camera_t7 * __this, MethodInfo* method)
{
	Rect_t141  V_0 = {0};
	{
		Camera_INTERNAL_get_pixelRect_m2641(__this, (&V_0), /*hidden argument*/&Camera_INTERNAL_get_pixelRect_m2641_MethodInfo);
		Rect_t141  L_0 = V_0;
		return L_0;
	}
}
// UnityEngine.RenderTexture UnityEngine.Camera::get_targetTexture()
extern MethodInfo Camera_get_targetTexture_m2643_MethodInfo;
extern "C" RenderTexture_t453 * Camera_get_targetTexture_m2643 (Camera_t7 * __this, MethodInfo* method)
{
	typedef RenderTexture_t453 * (*Camera_get_targetTexture_m2643_ftn) (Camera_t7 *);
	static Camera_get_targetTexture_m2643_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_targetTexture_m2643_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_targetTexture()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.CameraClearFlags UnityEngine.Camera::get_clearFlags()
extern MethodInfo Camera_get_clearFlags_m2644_MethodInfo;
extern "C" int32_t Camera_get_clearFlags_m2644 (Camera_t7 * __this, MethodInfo* method)
{
	typedef int32_t (*Camera_get_clearFlags_m2644_ftn) (Camera_t7 *);
	static Camera_get_clearFlags_m2644_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_clearFlags_m2644_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_clearFlags()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.Vector3 UnityEngine.Camera::ScreenToViewportPoint(UnityEngine.Vector3)
extern MethodInfo Camera_ScreenToViewportPoint_m1546_MethodInfo;
extern "C" Vector3_t6  Camera_ScreenToViewportPoint_m1546 (Camera_t7 * __this, Vector3_t6  ___position, MethodInfo* method)
{
	{
		Vector3_t6  L_0 = Camera_INTERNAL_CALL_ScreenToViewportPoint_m2645(NULL /*static, unused*/, __this, (&___position), /*hidden argument*/&Camera_INTERNAL_CALL_ScreenToViewportPoint_m2645_MethodInfo);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Camera::INTERNAL_CALL_ScreenToViewportPoint(UnityEngine.Camera,UnityEngine.Vector3&)
extern "C" Vector3_t6  Camera_INTERNAL_CALL_ScreenToViewportPoint_m2645 (Object_t * __this /* static, unused */, Camera_t7 * ___self, Vector3_t6 * ___position, MethodInfo* method)
{
	typedef Vector3_t6  (*Camera_INTERNAL_CALL_ScreenToViewportPoint_m2645_ftn) (Camera_t7 *, Vector3_t6 *);
	static Camera_INTERNAL_CALL_ScreenToViewportPoint_m2645_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_INTERNAL_CALL_ScreenToViewportPoint_m2645_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::INTERNAL_CALL_ScreenToViewportPoint(UnityEngine.Camera,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(___self, ___position);
}
// UnityEngine.Ray UnityEngine.Camera::ScreenPointToRay(UnityEngine.Vector3)
extern MethodInfo Camera_ScreenPointToRay_m1422_MethodInfo;
extern "C" Ray_t279  Camera_ScreenPointToRay_m1422 (Camera_t7 * __this, Vector3_t6  ___position, MethodInfo* method)
{
	{
		Ray_t279  L_0 = Camera_INTERNAL_CALL_ScreenPointToRay_m2646(NULL /*static, unused*/, __this, (&___position), /*hidden argument*/&Camera_INTERNAL_CALL_ScreenPointToRay_m2646_MethodInfo);
		return L_0;
	}
}
// UnityEngine.Ray UnityEngine.Camera::INTERNAL_CALL_ScreenPointToRay(UnityEngine.Camera,UnityEngine.Vector3&)
extern "C" Ray_t279  Camera_INTERNAL_CALL_ScreenPointToRay_m2646 (Object_t * __this /* static, unused */, Camera_t7 * ___self, Vector3_t6 * ___position, MethodInfo* method)
{
	typedef Ray_t279  (*Camera_INTERNAL_CALL_ScreenPointToRay_m2646_ftn) (Camera_t7 *, Vector3_t6 *);
	static Camera_INTERNAL_CALL_ScreenPointToRay_m2646_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_INTERNAL_CALL_ScreenPointToRay_m2646_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::INTERNAL_CALL_ScreenPointToRay(UnityEngine.Camera,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(___self, ___position);
}
// UnityEngine.Camera UnityEngine.Camera::get_main()
extern MethodInfo Camera_get_main_m1436_MethodInfo;
extern "C" Camera_t7 * Camera_get_main_m1436 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef Camera_t7 * (*Camera_get_main_m1436_ftn) ();
	static Camera_get_main_m1436_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_main_m1436_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_main()");
	return _il2cpp_icall_func();
}
// System.Int32 UnityEngine.Camera::get_allCamerasCount()
extern MethodInfo Camera_get_allCamerasCount_m2647_MethodInfo;
extern "C" int32_t Camera_get_allCamerasCount_m2647 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef int32_t (*Camera_get_allCamerasCount_m2647_ftn) ();
	static Camera_get_allCamerasCount_m2647_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_allCamerasCount_m2647_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_allCamerasCount()");
	return _il2cpp_icall_func();
}
// System.Int32 UnityEngine.Camera::GetAllCameras(UnityEngine.Camera[])
extern MethodInfo Camera_GetAllCameras_m2648_MethodInfo;
extern "C" int32_t Camera_GetAllCameras_m2648 (Object_t * __this /* static, unused */, CameraU5BU5D_t514* ___cameras, MethodInfo* method)
{
	typedef int32_t (*Camera_GetAllCameras_m2648_ftn) (CameraU5BU5D_t514*);
	static Camera_GetAllCameras_m2648_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_GetAllCameras_m2648_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::GetAllCameras(UnityEngine.Camera[])");
	return _il2cpp_icall_func(___cameras);
}
// System.Void UnityEngine.Camera::FireOnPreCull(UnityEngine.Camera)
extern MethodInfo Camera_FireOnPreCull_m2649_MethodInfo;
extern "C" void Camera_FireOnPreCull_m2649 (Object_t * __this /* static, unused */, Camera_t7 * ___cam, MethodInfo* method)
{
	{
		CameraCallback_t513 * L_0 = ((Camera_t7_StaticFields*)InitializedTypeInfo(&Camera_t7_il2cpp_TypeInfo)->static_fields)->___onPreCull_2;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		CameraCallback_t513 * L_1 = ((Camera_t7_StaticFields*)InitializedTypeInfo(&Camera_t7_il2cpp_TypeInfo)->static_fields)->___onPreCull_2;
		Camera_t7 * L_2 = ___cam;
		NullCheck(L_1);
		VirtActionInvoker1< Camera_t7 * >::Invoke(&CameraCallback_Invoke_m2637_MethodInfo, L_1, L_2);
	}

IL_0015:
	{
		return;
	}
}
// System.Void UnityEngine.Camera::FireOnPreRender(UnityEngine.Camera)
extern MethodInfo Camera_FireOnPreRender_m2650_MethodInfo;
extern "C" void Camera_FireOnPreRender_m2650 (Object_t * __this /* static, unused */, Camera_t7 * ___cam, MethodInfo* method)
{
	{
		CameraCallback_t513 * L_0 = ((Camera_t7_StaticFields*)InitializedTypeInfo(&Camera_t7_il2cpp_TypeInfo)->static_fields)->___onPreRender_3;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		CameraCallback_t513 * L_1 = ((Camera_t7_StaticFields*)InitializedTypeInfo(&Camera_t7_il2cpp_TypeInfo)->static_fields)->___onPreRender_3;
		Camera_t7 * L_2 = ___cam;
		NullCheck(L_1);
		VirtActionInvoker1< Camera_t7 * >::Invoke(&CameraCallback_Invoke_m2637_MethodInfo, L_1, L_2);
	}

IL_0015:
	{
		return;
	}
}
// System.Void UnityEngine.Camera::FireOnPostRender(UnityEngine.Camera)
extern MethodInfo Camera_FireOnPostRender_m2651_MethodInfo;
extern "C" void Camera_FireOnPostRender_m2651 (Object_t * __this /* static, unused */, Camera_t7 * ___cam, MethodInfo* method)
{
	{
		CameraCallback_t513 * L_0 = ((Camera_t7_StaticFields*)InitializedTypeInfo(&Camera_t7_il2cpp_TypeInfo)->static_fields)->___onPostRender_4;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		CameraCallback_t513 * L_1 = ((Camera_t7_StaticFields*)InitializedTypeInfo(&Camera_t7_il2cpp_TypeInfo)->static_fields)->___onPostRender_4;
		Camera_t7 * L_2 = ___cam;
		NullCheck(L_1);
		VirtActionInvoker1< Camera_t7 * >::Invoke(&CameraCallback_Invoke_m2637_MethodInfo, L_1, L_2);
	}

IL_0015:
	{
		return;
	}
}
// UnityEngine.GameObject UnityEngine.Camera::RaycastTry(UnityEngine.Ray,System.Single,System.Int32)
extern MethodInfo Camera_RaycastTry_m2652_MethodInfo;
extern "C" GameObject_t10 * Camera_RaycastTry_m2652 (Camera_t7 * __this, Ray_t279  ___ray, float ___distance, int32_t ___layerMask, MethodInfo* method)
{
	{
		float L_0 = ___distance;
		int32_t L_1 = ___layerMask;
		GameObject_t10 * L_2 = Camera_INTERNAL_CALL_RaycastTry_m2653(NULL /*static, unused*/, __this, (&___ray), L_0, L_1, /*hidden argument*/&Camera_INTERNAL_CALL_RaycastTry_m2653_MethodInfo);
		return L_2;
	}
}
// UnityEngine.GameObject UnityEngine.Camera::INTERNAL_CALL_RaycastTry(UnityEngine.Camera,UnityEngine.Ray&,System.Single,System.Int32)
extern "C" GameObject_t10 * Camera_INTERNAL_CALL_RaycastTry_m2653 (Object_t * __this /* static, unused */, Camera_t7 * ___self, Ray_t279 * ___ray, float ___distance, int32_t ___layerMask, MethodInfo* method)
{
	typedef GameObject_t10 * (*Camera_INTERNAL_CALL_RaycastTry_m2653_ftn) (Camera_t7 *, Ray_t279 *, float, int32_t);
	static Camera_INTERNAL_CALL_RaycastTry_m2653_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_INTERNAL_CALL_RaycastTry_m2653_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::INTERNAL_CALL_RaycastTry(UnityEngine.Camera,UnityEngine.Ray&,System.Single,System.Int32)");
	return _il2cpp_icall_func(___self, ___ray, ___distance, ___layerMask);
}
// UnityEngine.GameObject UnityEngine.Camera::RaycastTry2D(UnityEngine.Ray,System.Single,System.Int32)
extern MethodInfo Camera_RaycastTry2D_m2654_MethodInfo;
extern "C" GameObject_t10 * Camera_RaycastTry2D_m2654 (Camera_t7 * __this, Ray_t279  ___ray, float ___distance, int32_t ___layerMask, MethodInfo* method)
{
	{
		float L_0 = ___distance;
		int32_t L_1 = ___layerMask;
		GameObject_t10 * L_2 = Camera_INTERNAL_CALL_RaycastTry2D_m2655(NULL /*static, unused*/, __this, (&___ray), L_0, L_1, /*hidden argument*/&Camera_INTERNAL_CALL_RaycastTry2D_m2655_MethodInfo);
		return L_2;
	}
}
// UnityEngine.GameObject UnityEngine.Camera::INTERNAL_CALL_RaycastTry2D(UnityEngine.Camera,UnityEngine.Ray&,System.Single,System.Int32)
extern "C" GameObject_t10 * Camera_INTERNAL_CALL_RaycastTry2D_m2655 (Object_t * __this /* static, unused */, Camera_t7 * ___self, Ray_t279 * ___ray, float ___distance, int32_t ___layerMask, MethodInfo* method)
{
	typedef GameObject_t10 * (*Camera_INTERNAL_CALL_RaycastTry2D_m2655_ftn) (Camera_t7 *, Ray_t279 *, float, int32_t);
	static Camera_INTERNAL_CALL_RaycastTry2D_m2655_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_INTERNAL_CALL_RaycastTry2D_m2655_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::INTERNAL_CALL_RaycastTry2D(UnityEngine.Camera,UnityEngine.Ray&,System.Single,System.Int32)");
	return _il2cpp_icall_func(___self, ___ray, ___distance, ___layerMask);
}
// UnityEngine.Debug
#include "UnityEngine_UnityEngine_Debug.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Debug_t515_il2cpp_TypeInfo;

extern MethodInfo Object_ToString_m1967_MethodInfo;
extern MethodInfo Debug_Internal_Log_m2656_MethodInfo;
extern MethodInfo Debug_Internal_LogException_m2657_MethodInfo;


// System.Void UnityEngine.Debug::Internal_Log(System.Int32,System.String,UnityEngine.Object)
extern "C" void Debug_Internal_Log_m2656 (Object_t * __this /* static, unused */, int32_t ___level, String_t* ___msg, Object_t20 * ___obj, MethodInfo* method)
{
	typedef void (*Debug_Internal_Log_m2656_ftn) (int32_t, String_t*, Object_t20 *);
	static Debug_Internal_Log_m2656_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Debug_Internal_Log_m2656_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Debug::Internal_Log(System.Int32,System.String,UnityEngine.Object)");
	_il2cpp_icall_func(___level, ___msg, ___obj);
}
// System.Void UnityEngine.Debug::Internal_LogException(System.Exception,UnityEngine.Object)
extern "C" void Debug_Internal_LogException_m2657 (Object_t * __this /* static, unused */, Exception_t275 * ___exception, Object_t20 * ___obj, MethodInfo* method)
{
	typedef void (*Debug_Internal_LogException_m2657_ftn) (Exception_t275 *, Object_t20 *);
	static Debug_Internal_LogException_m2657_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Debug_Internal_LogException_m2657_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Debug::Internal_LogException(System.Exception,UnityEngine.Object)");
	_il2cpp_icall_func(___exception, ___obj);
}
// System.Void UnityEngine.Debug::Log(System.Object)
extern "C" void Debug_Log_m2658 (Object_t * __this /* static, unused */, Object_t * ___message, MethodInfo* method)
{
	int32_t G_B2_0 = 0;
	int32_t G_B1_0 = 0;
	String_t* G_B3_0 = {0};
	int32_t G_B3_1 = 0;
	{
		Object_t * L_0 = ___message;
		G_B1_0 = 0;
		if (!L_0)
		{
			G_B2_0 = 0;
			goto IL_0012;
		}
	}
	{
		Object_t * L_1 = ___message;
		NullCheck(L_1);
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Object_ToString_m1967_MethodInfo, L_1);
		G_B3_0 = L_2;
		G_B3_1 = G_B1_0;
		goto IL_0017;
	}

IL_0012:
	{
		G_B3_0 = (String_t*) &_stringLiteral182;
		G_B3_1 = G_B2_0;
	}

IL_0017:
	{
		Debug_Internal_Log_m2656(NULL /*static, unused*/, G_B3_1, G_B3_0, (Object_t20 *)NULL, /*hidden argument*/&Debug_Internal_Log_m2656_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Debug::LogError(System.Object)
extern "C" void Debug_LogError_m1266 (Object_t * __this /* static, unused */, Object_t * ___message, MethodInfo* method)
{
	int32_t G_B2_0 = 0;
	int32_t G_B1_0 = 0;
	String_t* G_B3_0 = {0};
	int32_t G_B3_1 = 0;
	{
		Object_t * L_0 = ___message;
		G_B1_0 = 2;
		if (!L_0)
		{
			G_B2_0 = 2;
			goto IL_0012;
		}
	}
	{
		Object_t * L_1 = ___message;
		NullCheck(L_1);
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Object_ToString_m1967_MethodInfo, L_1);
		G_B3_0 = L_2;
		G_B3_1 = G_B1_0;
		goto IL_0017;
	}

IL_0012:
	{
		G_B3_0 = (String_t*) &_stringLiteral182;
		G_B3_1 = G_B2_0;
	}

IL_0017:
	{
		Debug_Internal_Log_m2656(NULL /*static, unused*/, G_B3_1, G_B3_0, (Object_t20 *)NULL, /*hidden argument*/&Debug_Internal_Log_m2656_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Debug::LogError(System.Object,UnityEngine.Object)
extern MethodInfo Debug_LogError_m1616_MethodInfo;
extern "C" void Debug_LogError_m1616 (Object_t * __this /* static, unused */, Object_t * ___message, Object_t20 * ___context, MethodInfo* method)
{
	{
		Object_t * L_0 = ___message;
		NullCheck(L_0);
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Object_ToString_m1967_MethodInfo, L_0);
		Object_t20 * L_2 = ___context;
		Debug_Internal_Log_m2656(NULL /*static, unused*/, 2, L_1, L_2, /*hidden argument*/&Debug_Internal_Log_m2656_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Debug::LogException(System.Exception)
extern MethodInfo Debug_LogException_m2659_MethodInfo;
extern "C" void Debug_LogException_m2659 (Object_t * __this /* static, unused */, Exception_t275 * ___exception, MethodInfo* method)
{
	{
		Exception_t275 * L_0 = ___exception;
		Debug_Internal_LogException_m2657(NULL /*static, unused*/, L_0, (Object_t20 *)NULL, /*hidden argument*/&Debug_Internal_LogException_m2657_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Debug::LogException(System.Exception,UnityEngine.Object)
extern MethodInfo Debug_LogException_m1464_MethodInfo;
extern "C" void Debug_LogException_m1464 (Object_t * __this /* static, unused */, Exception_t275 * ___exception, Object_t20 * ___context, MethodInfo* method)
{
	{
		Exception_t275 * L_0 = ___exception;
		Object_t20 * L_1 = ___context;
		Debug_Internal_LogException_m2657(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Debug_Internal_LogException_m2657_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Debug::LogWarning(System.Object)
extern "C" void Debug_LogWarning_m2660 (Object_t * __this /* static, unused */, Object_t * ___message, MethodInfo* method)
{
	{
		Object_t * L_0 = ___message;
		NullCheck(L_0);
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Object_ToString_m1967_MethodInfo, L_0);
		Debug_Internal_Log_m2656(NULL /*static, unused*/, 1, L_1, (Object_t20 *)NULL, /*hidden argument*/&Debug_Internal_Log_m2656_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Debug::LogWarning(System.Object,UnityEngine.Object)
extern MethodInfo Debug_LogWarning_m1820_MethodInfo;
extern "C" void Debug_LogWarning_m1820 (Object_t * __this /* static, unused */, Object_t * ___message, Object_t20 * ___context, MethodInfo* method)
{
	{
		Object_t * L_0 = ___message;
		NullCheck(L_0);
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Object_ToString_m1967_MethodInfo, L_0);
		Object_t20 * L_2 = ___context;
		Debug_Internal_Log_m2656(NULL /*static, unused*/, 1, L_1, L_2, /*hidden argument*/&Debug_Internal_Log_m2656_MethodInfo);
		return;
	}
}
// UnityEngine.Display/DisplaysUpdatedDelegate
#include "UnityEngine_UnityEngine_Display_DisplaysUpdatedDelegate.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo DisplaysUpdatedDelegate_t516_il2cpp_TypeInfo;
// UnityEngine.Display/DisplaysUpdatedDelegate
#include "UnityEngine_UnityEngine_Display_DisplaysUpdatedDelegateMethodDeclarations.h"



// System.Void UnityEngine.Display/DisplaysUpdatedDelegate::.ctor(System.Object,System.IntPtr)
extern MethodInfo DisplaysUpdatedDelegate__ctor_m2661_MethodInfo;
extern "C" void DisplaysUpdatedDelegate__ctor_m2661 (DisplaysUpdatedDelegate_t516 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.Display/DisplaysUpdatedDelegate::Invoke()
extern MethodInfo DisplaysUpdatedDelegate_Invoke_m2662_MethodInfo;
extern "C" void DisplaysUpdatedDelegate_Invoke_m2662 (DisplaysUpdatedDelegate_t516 * __this, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		DisplaysUpdatedDelegate_Invoke_m2662((DisplaysUpdatedDelegate_t516 *)__this->___prev_9, method);
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
extern "C" void pinvoke_delegate_wrapper_DisplaysUpdatedDelegate_t516(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.IAsyncResult UnityEngine.Display/DisplaysUpdatedDelegate::BeginInvoke(System.AsyncCallback,System.Object)
extern MethodInfo DisplaysUpdatedDelegate_BeginInvoke_m2663_MethodInfo;
extern "C" Object_t * DisplaysUpdatedDelegate_BeginInvoke_m2663 (DisplaysUpdatedDelegate_t516 * __this, AsyncCallback_t171 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.Display/DisplaysUpdatedDelegate::EndInvoke(System.IAsyncResult)
extern MethodInfo DisplaysUpdatedDelegate_EndInvoke_m2664_MethodInfo;
extern "C" void DisplaysUpdatedDelegate_EndInvoke_m2664 (DisplaysUpdatedDelegate_t516 * __this, Object_t * ___result, MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// UnityEngine.Display
#include "UnityEngine_UnityEngine_Display.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Display_t518_il2cpp_TypeInfo;
// UnityEngine.Display
#include "UnityEngine_UnityEngine_DisplayMethodDeclarations.h"

// UnityEngine.RenderBuffer
#include "UnityEngine_UnityEngine_RenderBuffer.h"
extern TypeInfo DisplayU5BU5D_t517_il2cpp_TypeInfo;
extern Il2CppType DisplayU5BU5D_t517_0_0_0;
extern MethodInfo Display_GetRenderingExtImpl_m2686_MethodInfo;
extern MethodInfo Display_GetSystemExtImpl_m2685_MethodInfo;
extern MethodInfo Display_GetRenderingBuffersImpl_m2687_MethodInfo;
extern MethodInfo IntPtr__ctor_m3411_MethodInfo;
extern MethodInfo Display__ctor_m2665_MethodInfo;
extern MethodInfo Display_ActivateDisplayImpl_m2689_MethodInfo;
extern MethodInfo Display_SetParamsImpl_m2690_MethodInfo;
extern MethodInfo Display_SetRenderingResolutionImpl_m2688_MethodInfo;
extern MethodInfo Display_MultiDisplayLicenseImpl_m2691_MethodInfo;
extern MethodInfo Display_RelativeMouseAtImpl_m2692_MethodInfo;
extern MethodInfo Display__ctor_m2666_MethodInfo;


// System.Void UnityEngine.Display::.ctor()
extern "C" void Display__ctor_m2665 (Display_t518 * __this, MethodInfo* method)
{
	{
		Object__ctor_m1289(__this, /*hidden argument*/&Object__ctor_m1289_MethodInfo);
		IntPtr_t L_0 = {0};
		IntPtr__ctor_m3411(&L_0, 0, /*hidden argument*/&IntPtr__ctor_m3411_MethodInfo);
		__this->___nativeDisplay_0 = L_0;
		return;
	}
}
// System.Void UnityEngine.Display::.ctor(System.IntPtr)
extern "C" void Display__ctor_m2666 (Display_t518 * __this, IntPtr_t ___nativeDisplay, MethodInfo* method)
{
	{
		Object__ctor_m1289(__this, /*hidden argument*/&Object__ctor_m1289_MethodInfo);
		IntPtr_t L_0 = ___nativeDisplay;
		__this->___nativeDisplay_0 = L_0;
		return;
	}
}
// System.Void UnityEngine.Display::.cctor()
extern MethodInfo Display__cctor_m2667_MethodInfo;
extern TypeInfo* DisplayU5BU5D_t517_il2cpp_TypeInfo_var;
extern "C" void Display__cctor_m2667 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	static bool Display__cctor_m2667_init;
	if (!Display__cctor_m2667_init)
	{
		DisplayU5BU5D_t517_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&DisplayU5BU5D_t517_0_0_0);
		Display__cctor_m2667_init = true;
	}
	{
		DisplayU5BU5D_t517* L_0 = ((DisplayU5BU5D_t517*)SZArrayNew(DisplayU5BU5D_t517_il2cpp_TypeInfo_var, 1));
		Display_t518 * L_1 = (Display_t518 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Display_t518_il2cpp_TypeInfo));
		Display__ctor_m2665(L_1, /*hidden argument*/&Display__ctor_m2665_MethodInfo);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Display_t518 **)(Display_t518 **)SZArrayLdElema(L_0, 0)) = (Display_t518 *)L_1;
		((Display_t518_StaticFields*)InitializedTypeInfo(&Display_t518_il2cpp_TypeInfo)->static_fields)->___displays_1 = L_0;
		DisplayU5BU5D_t517* L_2 = ((Display_t518_StaticFields*)InitializedTypeInfo(&Display_t518_il2cpp_TypeInfo)->static_fields)->___displays_1;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		int32_t L_3 = 0;
		((Display_t518_StaticFields*)InitializedTypeInfo(&Display_t518_il2cpp_TypeInfo)->static_fields)->____mainDisplay_2 = (*(Display_t518 **)(Display_t518 **)SZArrayLdElema(L_2, L_3));
		((Display_t518_StaticFields*)InitializedTypeInfo(&Display_t518_il2cpp_TypeInfo)->static_fields)->___onDisplaysUpdated_3 = (DisplaysUpdatedDelegate_t516 *)NULL;
		return;
	}
}
// System.Void UnityEngine.Display::add_onDisplaysUpdated(UnityEngine.Display/DisplaysUpdatedDelegate)
extern MethodInfo Display_add_onDisplaysUpdated_m2668_MethodInfo;
extern "C" void Display_add_onDisplaysUpdated_m2668 (Object_t * __this /* static, unused */, DisplaysUpdatedDelegate_t516 * ___value, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Display_t518_il2cpp_TypeInfo));
		DisplaysUpdatedDelegate_t516 * L_0 = ((Display_t518_StaticFields*)InitializedTypeInfo(&Display_t518_il2cpp_TypeInfo)->static_fields)->___onDisplaysUpdated_3;
		DisplaysUpdatedDelegate_t516 * L_1 = ___value;
		Delegate_t295 * L_2 = Delegate_Combine_m1525(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Delegate_Combine_m1525_MethodInfo);
		((Display_t518_StaticFields*)InitializedTypeInfo(&Display_t518_il2cpp_TypeInfo)->static_fields)->___onDisplaysUpdated_3 = ((DisplaysUpdatedDelegate_t516 *)Castclass(L_2, InitializedTypeInfo(&DisplaysUpdatedDelegate_t516_il2cpp_TypeInfo)));
		return;
	}
}
// System.Void UnityEngine.Display::remove_onDisplaysUpdated(UnityEngine.Display/DisplaysUpdatedDelegate)
extern MethodInfo Display_remove_onDisplaysUpdated_m2669_MethodInfo;
extern "C" void Display_remove_onDisplaysUpdated_m2669 (Object_t * __this /* static, unused */, DisplaysUpdatedDelegate_t516 * ___value, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Display_t518_il2cpp_TypeInfo));
		DisplaysUpdatedDelegate_t516 * L_0 = ((Display_t518_StaticFields*)InitializedTypeInfo(&Display_t518_il2cpp_TypeInfo)->static_fields)->___onDisplaysUpdated_3;
		DisplaysUpdatedDelegate_t516 * L_1 = ___value;
		Delegate_t295 * L_2 = Delegate_Remove_m1526(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Delegate_Remove_m1526_MethodInfo);
		((Display_t518_StaticFields*)InitializedTypeInfo(&Display_t518_il2cpp_TypeInfo)->static_fields)->___onDisplaysUpdated_3 = ((DisplaysUpdatedDelegate_t516 *)Castclass(L_2, InitializedTypeInfo(&DisplaysUpdatedDelegate_t516_il2cpp_TypeInfo)));
		return;
	}
}
// System.Int32 UnityEngine.Display::get_renderingWidth()
extern MethodInfo Display_get_renderingWidth_m2670_MethodInfo;
extern "C" int32_t Display_get_renderingWidth_m2670 (Display_t518 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		IntPtr_t L_0 = (__this->___nativeDisplay_0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Display_t518_il2cpp_TypeInfo));
		Display_GetRenderingExtImpl_m2686(NULL /*static, unused*/, L_0, (&V_0), (&V_1), /*hidden argument*/&Display_GetRenderingExtImpl_m2686_MethodInfo);
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Int32 UnityEngine.Display::get_renderingHeight()
extern MethodInfo Display_get_renderingHeight_m2671_MethodInfo;
extern "C" int32_t Display_get_renderingHeight_m2671 (Display_t518 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		IntPtr_t L_0 = (__this->___nativeDisplay_0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Display_t518_il2cpp_TypeInfo));
		Display_GetRenderingExtImpl_m2686(NULL /*static, unused*/, L_0, (&V_0), (&V_1), /*hidden argument*/&Display_GetRenderingExtImpl_m2686_MethodInfo);
		int32_t L_1 = V_1;
		return L_1;
	}
}
// System.Int32 UnityEngine.Display::get_systemWidth()
extern MethodInfo Display_get_systemWidth_m2672_MethodInfo;
extern "C" int32_t Display_get_systemWidth_m2672 (Display_t518 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		IntPtr_t L_0 = (__this->___nativeDisplay_0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Display_t518_il2cpp_TypeInfo));
		Display_GetSystemExtImpl_m2685(NULL /*static, unused*/, L_0, (&V_0), (&V_1), /*hidden argument*/&Display_GetSystemExtImpl_m2685_MethodInfo);
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Int32 UnityEngine.Display::get_systemHeight()
extern MethodInfo Display_get_systemHeight_m2673_MethodInfo;
extern "C" int32_t Display_get_systemHeight_m2673 (Display_t518 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		IntPtr_t L_0 = (__this->___nativeDisplay_0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Display_t518_il2cpp_TypeInfo));
		Display_GetSystemExtImpl_m2685(NULL /*static, unused*/, L_0, (&V_0), (&V_1), /*hidden argument*/&Display_GetSystemExtImpl_m2685_MethodInfo);
		int32_t L_1 = V_1;
		return L_1;
	}
}
// UnityEngine.RenderBuffer UnityEngine.Display::get_colorBuffer()
extern MethodInfo Display_get_colorBuffer_m2674_MethodInfo;
extern "C" RenderBuffer_t520  Display_get_colorBuffer_m2674 (Display_t518 * __this, MethodInfo* method)
{
	RenderBuffer_t520  V_0 = {0};
	RenderBuffer_t520  V_1 = {0};
	{
		IntPtr_t L_0 = (__this->___nativeDisplay_0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Display_t518_il2cpp_TypeInfo));
		Display_GetRenderingBuffersImpl_m2687(NULL /*static, unused*/, L_0, (&V_0), (&V_1), /*hidden argument*/&Display_GetRenderingBuffersImpl_m2687_MethodInfo);
		RenderBuffer_t520  L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.RenderBuffer UnityEngine.Display::get_depthBuffer()
extern MethodInfo Display_get_depthBuffer_m2675_MethodInfo;
extern "C" RenderBuffer_t520  Display_get_depthBuffer_m2675 (Display_t518 * __this, MethodInfo* method)
{
	RenderBuffer_t520  V_0 = {0};
	RenderBuffer_t520  V_1 = {0};
	{
		IntPtr_t L_0 = (__this->___nativeDisplay_0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Display_t518_il2cpp_TypeInfo));
		Display_GetRenderingBuffersImpl_m2687(NULL /*static, unused*/, L_0, (&V_0), (&V_1), /*hidden argument*/&Display_GetRenderingBuffersImpl_m2687_MethodInfo);
		RenderBuffer_t520  L_1 = V_1;
		return L_1;
	}
}
// System.Void UnityEngine.Display::Activate()
extern MethodInfo Display_Activate_m2676_MethodInfo;
extern "C" void Display_Activate_m2676 (Display_t518 * __this, MethodInfo* method)
{
	{
		IntPtr_t L_0 = (__this->___nativeDisplay_0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Display_t518_il2cpp_TypeInfo));
		Display_ActivateDisplayImpl_m2689(NULL /*static, unused*/, L_0, 0, 0, ((int32_t)60), /*hidden argument*/&Display_ActivateDisplayImpl_m2689_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Display::Activate(System.Int32,System.Int32,System.Int32)
extern MethodInfo Display_Activate_m2677_MethodInfo;
extern "C" void Display_Activate_m2677 (Display_t518 * __this, int32_t ___width, int32_t ___height, int32_t ___refreshRate, MethodInfo* method)
{
	{
		IntPtr_t L_0 = (__this->___nativeDisplay_0);
		int32_t L_1 = ___width;
		int32_t L_2 = ___height;
		int32_t L_3 = ___refreshRate;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Display_t518_il2cpp_TypeInfo));
		Display_ActivateDisplayImpl_m2689(NULL /*static, unused*/, L_0, L_1, L_2, L_3, /*hidden argument*/&Display_ActivateDisplayImpl_m2689_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Display::SetParams(System.Int32,System.Int32,System.Int32,System.Int32)
extern MethodInfo Display_SetParams_m2678_MethodInfo;
extern "C" void Display_SetParams_m2678 (Display_t518 * __this, int32_t ___width, int32_t ___height, int32_t ___x, int32_t ___y, MethodInfo* method)
{
	{
		IntPtr_t L_0 = (__this->___nativeDisplay_0);
		int32_t L_1 = ___width;
		int32_t L_2 = ___height;
		int32_t L_3 = ___x;
		int32_t L_4 = ___y;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Display_t518_il2cpp_TypeInfo));
		Display_SetParamsImpl_m2690(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, /*hidden argument*/&Display_SetParamsImpl_m2690_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Display::SetRenderingResolution(System.Int32,System.Int32)
extern MethodInfo Display_SetRenderingResolution_m2679_MethodInfo;
extern "C" void Display_SetRenderingResolution_m2679 (Display_t518 * __this, int32_t ___w, int32_t ___h, MethodInfo* method)
{
	{
		IntPtr_t L_0 = (__this->___nativeDisplay_0);
		int32_t L_1 = ___w;
		int32_t L_2 = ___h;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Display_t518_il2cpp_TypeInfo));
		Display_SetRenderingResolutionImpl_m2688(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/&Display_SetRenderingResolutionImpl_m2688_MethodInfo);
		return;
	}
}
// System.Boolean UnityEngine.Display::MultiDisplayLicense()
extern MethodInfo Display_MultiDisplayLicense_m2680_MethodInfo;
extern "C" bool Display_MultiDisplayLicense_m2680 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Display_t518_il2cpp_TypeInfo));
		bool L_0 = Display_MultiDisplayLicenseImpl_m2691(NULL /*static, unused*/, /*hidden argument*/&Display_MultiDisplayLicenseImpl_m2691_MethodInfo);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Display::RelativeMouseAt(UnityEngine.Vector3)
extern MethodInfo Display_RelativeMouseAt_m2681_MethodInfo;
extern "C" Vector3_t6  Display_RelativeMouseAt_m2681 (Object_t * __this /* static, unused */, Vector3_t6  ___inputMouseCoordinates, MethodInfo* method)
{
	Vector3_t6  V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		V_1 = 0;
		V_2 = 0;
		float L_0 = ((&___inputMouseCoordinates)->___x_1);
		V_3 = (((int32_t)L_0));
		float L_1 = ((&___inputMouseCoordinates)->___y_2);
		V_4 = (((int32_t)L_1));
		int32_t L_2 = V_3;
		int32_t L_3 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Display_t518_il2cpp_TypeInfo));
		int32_t L_4 = Display_RelativeMouseAtImpl_m2692(NULL /*static, unused*/, L_2, L_3, (&V_1), (&V_2), /*hidden argument*/&Display_RelativeMouseAtImpl_m2692_MethodInfo);
		(&V_0)->___z_3 = (((float)L_4));
		int32_t L_5 = V_1;
		(&V_0)->___x_1 = (((float)L_5));
		int32_t L_6 = V_2;
		(&V_0)->___y_2 = (((float)L_6));
		Vector3_t6  L_7 = V_0;
		return L_7;
	}
}
// UnityEngine.Display UnityEngine.Display::get_main()
extern MethodInfo Display_get_main_m2682_MethodInfo;
extern "C" Display_t518 * Display_get_main_m2682 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Display_t518_il2cpp_TypeInfo));
		Display_t518 * L_0 = ((Display_t518_StaticFields*)InitializedTypeInfo(&Display_t518_il2cpp_TypeInfo)->static_fields)->____mainDisplay_2;
		return L_0;
	}
}
// System.Void UnityEngine.Display::RecreateDisplayList(System.IntPtr[])
extern MethodInfo Display_RecreateDisplayList_m2683_MethodInfo;
extern TypeInfo* DisplayU5BU5D_t517_il2cpp_TypeInfo_var;
extern "C" void Display_RecreateDisplayList_m2683 (Object_t * __this /* static, unused */, IntPtrU5BU5D_t519* ___nativeDisplay, MethodInfo* method)
{
	static bool Display_RecreateDisplayList_m2683_init;
	if (!Display_RecreateDisplayList_m2683_init)
	{
		DisplayU5BU5D_t517_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&DisplayU5BU5D_t517_0_0_0);
		Display_RecreateDisplayList_m2683_init = true;
	}
	int32_t V_0 = 0;
	{
		IntPtrU5BU5D_t519* L_0 = ___nativeDisplay;
		NullCheck(L_0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Display_t518_il2cpp_TypeInfo));
		((Display_t518_StaticFields*)InitializedTypeInfo(&Display_t518_il2cpp_TypeInfo)->static_fields)->___displays_1 = ((DisplayU5BU5D_t517*)SZArrayNew(DisplayU5BU5D_t517_il2cpp_TypeInfo_var, (((int32_t)(((Array_t *)L_0)->max_length)))));
		V_0 = 0;
		goto IL_0027;
	}

IL_0014:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Display_t518_il2cpp_TypeInfo));
		DisplayU5BU5D_t517* L_1 = ((Display_t518_StaticFields*)InitializedTypeInfo(&Display_t518_il2cpp_TypeInfo)->static_fields)->___displays_1;
		int32_t L_2 = V_0;
		IntPtrU5BU5D_t519* L_3 = ___nativeDisplay;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = L_4;
		Display_t518 * L_6 = (Display_t518 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Display_t518_il2cpp_TypeInfo));
		Display__ctor_m2666(L_6, (*(IntPtr_t*)(IntPtr_t*)SZArrayLdElema(L_3, L_5)), /*hidden argument*/&Display__ctor_m2666_MethodInfo);
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		ArrayElementTypeCheck (L_1, L_6);
		*((Display_t518 **)(Display_t518 **)SZArrayLdElema(L_1, L_2)) = (Display_t518 *)L_6;
		int32_t L_7 = V_0;
		V_0 = ((int32_t)((int32_t)L_7+(int32_t)1));
	}

IL_0027:
	{
		int32_t L_8 = V_0;
		IntPtrU5BU5D_t519* L_9 = ___nativeDisplay;
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)(((int32_t)(((Array_t *)L_9)->max_length))))))
		{
			goto IL_0014;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Display_t518_il2cpp_TypeInfo));
		DisplayU5BU5D_t517* L_10 = ((Display_t518_StaticFields*)InitializedTypeInfo(&Display_t518_il2cpp_TypeInfo)->static_fields)->___displays_1;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 0);
		int32_t L_11 = 0;
		((Display_t518_StaticFields*)InitializedTypeInfo(&Display_t518_il2cpp_TypeInfo)->static_fields)->____mainDisplay_2 = (*(Display_t518 **)(Display_t518 **)SZArrayLdElema(L_10, L_11));
		return;
	}
}
// System.Void UnityEngine.Display::FireDisplaysUpdated()
extern MethodInfo Display_FireDisplaysUpdated_m2684_MethodInfo;
extern "C" void Display_FireDisplaysUpdated_m2684 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Display_t518_il2cpp_TypeInfo));
		DisplaysUpdatedDelegate_t516 * L_0 = ((Display_t518_StaticFields*)InitializedTypeInfo(&Display_t518_il2cpp_TypeInfo)->static_fields)->___onDisplaysUpdated_3;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Display_t518_il2cpp_TypeInfo));
		DisplaysUpdatedDelegate_t516 * L_1 = ((Display_t518_StaticFields*)InitializedTypeInfo(&Display_t518_il2cpp_TypeInfo)->static_fields)->___onDisplaysUpdated_3;
		NullCheck(L_1);
		VirtActionInvoker0::Invoke(&DisplaysUpdatedDelegate_Invoke_m2662_MethodInfo, L_1);
	}

IL_0014:
	{
		return;
	}
}
// System.Void UnityEngine.Display::GetSystemExtImpl(System.IntPtr,System.Int32&,System.Int32&)
extern "C" void Display_GetSystemExtImpl_m2685 (Object_t * __this /* static, unused */, IntPtr_t ___nativeDisplay, int32_t* ___w, int32_t* ___h, MethodInfo* method)
{
	typedef void (*Display_GetSystemExtImpl_m2685_ftn) (IntPtr_t, int32_t*, int32_t*);
	static Display_GetSystemExtImpl_m2685_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Display_GetSystemExtImpl_m2685_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Display::GetSystemExtImpl(System.IntPtr,System.Int32&,System.Int32&)");
	_il2cpp_icall_func(___nativeDisplay, ___w, ___h);
}
// System.Void UnityEngine.Display::GetRenderingExtImpl(System.IntPtr,System.Int32&,System.Int32&)
extern "C" void Display_GetRenderingExtImpl_m2686 (Object_t * __this /* static, unused */, IntPtr_t ___nativeDisplay, int32_t* ___w, int32_t* ___h, MethodInfo* method)
{
	typedef void (*Display_GetRenderingExtImpl_m2686_ftn) (IntPtr_t, int32_t*, int32_t*);
	static Display_GetRenderingExtImpl_m2686_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Display_GetRenderingExtImpl_m2686_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Display::GetRenderingExtImpl(System.IntPtr,System.Int32&,System.Int32&)");
	_il2cpp_icall_func(___nativeDisplay, ___w, ___h);
}
// System.Void UnityEngine.Display::GetRenderingBuffersImpl(System.IntPtr,UnityEngine.RenderBuffer&,UnityEngine.RenderBuffer&)
extern "C" void Display_GetRenderingBuffersImpl_m2687 (Object_t * __this /* static, unused */, IntPtr_t ___nativeDisplay, RenderBuffer_t520 * ___color, RenderBuffer_t520 * ___depth, MethodInfo* method)
{
	typedef void (*Display_GetRenderingBuffersImpl_m2687_ftn) (IntPtr_t, RenderBuffer_t520 *, RenderBuffer_t520 *);
	static Display_GetRenderingBuffersImpl_m2687_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Display_GetRenderingBuffersImpl_m2687_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Display::GetRenderingBuffersImpl(System.IntPtr,UnityEngine.RenderBuffer&,UnityEngine.RenderBuffer&)");
	_il2cpp_icall_func(___nativeDisplay, ___color, ___depth);
}
// System.Void UnityEngine.Display::SetRenderingResolutionImpl(System.IntPtr,System.Int32,System.Int32)
extern "C" void Display_SetRenderingResolutionImpl_m2688 (Object_t * __this /* static, unused */, IntPtr_t ___nativeDisplay, int32_t ___w, int32_t ___h, MethodInfo* method)
{
	typedef void (*Display_SetRenderingResolutionImpl_m2688_ftn) (IntPtr_t, int32_t, int32_t);
	static Display_SetRenderingResolutionImpl_m2688_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Display_SetRenderingResolutionImpl_m2688_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Display::SetRenderingResolutionImpl(System.IntPtr,System.Int32,System.Int32)");
	_il2cpp_icall_func(___nativeDisplay, ___w, ___h);
}
// System.Void UnityEngine.Display::ActivateDisplayImpl(System.IntPtr,System.Int32,System.Int32,System.Int32)
extern "C" void Display_ActivateDisplayImpl_m2689 (Object_t * __this /* static, unused */, IntPtr_t ___nativeDisplay, int32_t ___width, int32_t ___height, int32_t ___refreshRate, MethodInfo* method)
{
	typedef void (*Display_ActivateDisplayImpl_m2689_ftn) (IntPtr_t, int32_t, int32_t, int32_t);
	static Display_ActivateDisplayImpl_m2689_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Display_ActivateDisplayImpl_m2689_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Display::ActivateDisplayImpl(System.IntPtr,System.Int32,System.Int32,System.Int32)");
	_il2cpp_icall_func(___nativeDisplay, ___width, ___height, ___refreshRate);
}
// System.Void UnityEngine.Display::SetParamsImpl(System.IntPtr,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" void Display_SetParamsImpl_m2690 (Object_t * __this /* static, unused */, IntPtr_t ___nativeDisplay, int32_t ___width, int32_t ___height, int32_t ___x, int32_t ___y, MethodInfo* method)
{
	typedef void (*Display_SetParamsImpl_m2690_ftn) (IntPtr_t, int32_t, int32_t, int32_t, int32_t);
	static Display_SetParamsImpl_m2690_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Display_SetParamsImpl_m2690_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Display::SetParamsImpl(System.IntPtr,System.Int32,System.Int32,System.Int32,System.Int32)");
	_il2cpp_icall_func(___nativeDisplay, ___width, ___height, ___x, ___y);
}
// System.Boolean UnityEngine.Display::MultiDisplayLicenseImpl()
extern "C" bool Display_MultiDisplayLicenseImpl_m2691 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef bool (*Display_MultiDisplayLicenseImpl_m2691_ftn) ();
	static Display_MultiDisplayLicenseImpl_m2691_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Display_MultiDisplayLicenseImpl_m2691_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Display::MultiDisplayLicenseImpl()");
	return _il2cpp_icall_func();
}
// System.Int32 UnityEngine.Display::RelativeMouseAtImpl(System.Int32,System.Int32,System.Int32&,System.Int32&)
extern "C" int32_t Display_RelativeMouseAtImpl_m2692 (Object_t * __this /* static, unused */, int32_t ___x, int32_t ___y, int32_t* ___rx, int32_t* ___ry, MethodInfo* method)
{
	typedef int32_t (*Display_RelativeMouseAtImpl_m2692_ftn) (int32_t, int32_t, int32_t*, int32_t*);
	static Display_RelativeMouseAtImpl_m2692_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Display_RelativeMouseAtImpl_m2692_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Display::RelativeMouseAtImpl(System.Int32,System.Int32,System.Int32&,System.Int32&)");
	return _il2cpp_icall_func(___x, ___y, ___rx, ___ry);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
