#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
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
extern TypeInfo IEqualityComparer_1_t4183_il2cpp_TypeInfo;

// System.Boolean
#include "mscorlib_System_Boolean.h"
// UnityEngine.UILineInfo
#include "UnityEngine_UnityEngine_UILineInfo.h"
// System.Int32
#include "mscorlib_System_Int32.h"

// System.Array
#include "mscorlib_System_Array.h"

// System.Boolean System.Collections.Generic.IEqualityComparer`1<UnityEngine.UILineInfo>::Equals(T,T)
// System.Int32 System.Collections.Generic.IEqualityComparer`1<UnityEngine.UILineInfo>::GetHashCode(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEquatable_1_t4182_il2cpp_TypeInfo;



// System.Boolean System.IEquatable`1<UnityEngine.UILineInfo>::Equals(T)
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UILineInfo>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_33.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo DefaultComparer_t2966_il2cpp_TypeInfo;
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UILineInfo>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_33MethodDeclarations.h"

// System.Void
#include "mscorlib_System_Void.h"
// System.Object
#include "mscorlib_System_Object.h"
extern TypeInfo UILineInfo_t305_il2cpp_TypeInfo;
extern TypeInfo Object_t_il2cpp_TypeInfo;
extern TypeInfo Int32_t17_il2cpp_TypeInfo;
extern TypeInfo Boolean_t13_il2cpp_TypeInfo;
// System.Collections.Generic.EqualityComparer`1<UnityEngine.UILineInfo>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_33MethodDeclarations.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern MethodInfo Object_GetHashCode_m1961_MethodInfo;
extern MethodInfo Object_Equals_m1960_MethodInfo;
extern Il2CppGenericMethod EqualityComparer_1__ctor_m17557_GenericMethod;


// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UILineInfo>::.ctor()
extern Il2CppGenericMethod DefaultComparer__ctor_m17562_GenericMethod;
extern "C" void DefaultComparer__ctor_m17562_gshared (DefaultComparer_t2966 * __this, MethodInfo* method)
{
	{
		(( void (*) (EqualityComparer_1_t2965 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UILineInfo>::GetHashCode(T)
extern Il2CppGenericMethod DefaultComparer_GetHashCode_m17563_GenericMethod;
extern "C" int32_t DefaultComparer_GetHashCode_m17563_gshared (DefaultComparer_t2966 * __this, UILineInfo_t305  ___obj, MethodInfo* method)
{
	{
		UILineInfo_t305  L_0 = ___obj;
		UILineInfo_t305  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		if (L_2)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		NullCheck(Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___obj)));
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&Object_GetHashCode_m1961_MethodInfo, Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___obj)));
		return L_3;
	}
}
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UILineInfo>::Equals(T,T)
extern Il2CppGenericMethod DefaultComparer_Equals_m17564_GenericMethod;
extern "C" bool DefaultComparer_Equals_m17564_gshared (DefaultComparer_t2966 * __this, UILineInfo_t305  ___x, UILineInfo_t305  ___y, MethodInfo* method)
{
	{
		UILineInfo_t305  L_0 = ___x;
		UILineInfo_t305  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		UILineInfo_t305  L_3 = ___y;
		UILineInfo_t305  L_4 = L_3;
		Object_t * L_5 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_4);
		return ((((Object_t*)(Object_t *)L_5) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
	}

IL_0012:
	{
		UILineInfo_t305  L_6 = ___y;
		UILineInfo_t305  L_7 = L_6;
		Object_t * L_8 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_7);
		NullCheck(Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___x)));
		bool L_9 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(&Object_Equals_m1960_MethodInfo, Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___x)), L_8);
		return L_9;
	}
}
// System.Predicate`1<UnityEngine.UILineInfo>
#include "mscorlib_System_Predicate_1_gen_26.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Predicate_1_t2967_il2cpp_TypeInfo;
// System.Predicate`1<UnityEngine.UILineInfo>
#include "mscorlib_System_Predicate_1_gen_26MethodDeclarations.h"

// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"


// System.Void System.Predicate`1<UnityEngine.UILineInfo>::.ctor(System.Object,System.IntPtr)
extern Il2CppGenericMethod Predicate_1__ctor_m17565_GenericMethod;
extern "C" void Predicate_1__ctor_m17565_gshared (Predicate_1_t2967 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Boolean System.Predicate`1<UnityEngine.UILineInfo>::Invoke(T)
extern Il2CppGenericMethod Predicate_1_Invoke_m17566_GenericMethod;
extern "C" bool Predicate_1_Invoke_m17566_gshared (Predicate_1_t2967 * __this, UILineInfo_t305  ___obj, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Predicate_1_Invoke_m17566((Predicate_1_t2967 *)__this->___prev_9,___obj, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef bool (*FunctionPointerType) (Object_t *, Object_t * __this, UILineInfo_t305  ___obj, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___obj,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	typedef bool (*FunctionPointerType) (Object_t * __this, UILineInfo_t305  ___obj, MethodInfo* method);
	return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___obj,(MethodInfo*)(__this->___method_3.___m_value_0));
}
// System.IAsyncResult System.Predicate`1<UnityEngine.UILineInfo>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern Il2CppGenericMethod Predicate_1_BeginInvoke_m17567_GenericMethod;
extern "C" Object_t * Predicate_1_BeginInvoke_m17567_gshared (Predicate_1_t2967 * __this, UILineInfo_t305  ___obj, AsyncCallback_t171 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = Box(InitializedTypeInfo(&UILineInfo_t305_il2cpp_TypeInfo), &___obj);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Boolean System.Predicate`1<UnityEngine.UILineInfo>::EndInvoke(System.IAsyncResult)
extern Il2CppGenericMethod Predicate_1_EndInvoke_m17568_GenericMethod;
extern "C" bool Predicate_1_EndInvoke_m17568_gshared (Predicate_1_t2967 * __this, Object_t * ___result, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(bool*)UnBox ((Il2CppCodeGenObject*)__result);
}
// System.Collections.Generic.Comparer`1<UnityEngine.UILineInfo>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_25.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Comparer_1_t2968_il2cpp_TypeInfo;
// System.Collections.Generic.Comparer`1<UnityEngine.UILineInfo>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_25MethodDeclarations.h"

// System.Type
#include "mscorlib_System_Type.h"
// System.RuntimeTypeHandle
#include "mscorlib_System_RuntimeTypeHandle.h"
#include "mscorlib_ArrayTypes.h"
// System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.UILineInfo>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_25.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentException.h"
extern TypeInfo Type_t_il2cpp_TypeInfo;
extern TypeInfo TypeU5BU5D_t606_il2cpp_TypeInfo;
extern TypeInfo DefaultComparer_t2969_il2cpp_TypeInfo;
extern TypeInfo ArgumentException_t318_il2cpp_TypeInfo;
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// System.Activator
#include "mscorlib_System_ActivatorMethodDeclarations.h"
// System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.UILineInfo>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_25MethodDeclarations.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
extern Il2CppType Comparer_1_t2968_0_0_0;
extern Il2CppType IComparable_1_t3757_0_0_0;
extern Il2CppType UILineInfo_t305_0_0_0;
extern Il2CppType GenericComparer_1_t2121_0_0_0;
extern Il2CppType TypeU5BU5D_t606_0_0_0;
extern Il2CppType DefaultComparer_t2969_0_0_0;
extern MethodInfo Object__ctor_m1289_MethodInfo;
extern MethodInfo Type_GetTypeFromHandle_m1488_MethodInfo;
extern MethodInfo Type_IsAssignableFrom_m3591_MethodInfo;
extern MethodInfo Type_MakeGenericType_m3589_MethodInfo;
extern MethodInfo Activator_CreateInstance_m9614_MethodInfo;
extern MethodInfo DefaultComparer__ctor_m17573_MethodInfo;
extern MethodInfo Comparer_1_Compare_m25387_MethodInfo;
extern MethodInfo ArgumentException__ctor_m9638_MethodInfo;
extern Il2CppGenericMethod DefaultComparer__ctor_m17573_GenericMethod;
extern Il2CppGenericMethod Comparer_1_Compare_m25387_GenericMethod;


// System.Void System.Collections.Generic.Comparer`1<UnityEngine.UILineInfo>::.ctor()
extern Il2CppGenericMethod Comparer_1__ctor_m17569_GenericMethod;
extern "C" void Comparer_1__ctor_m17569_gshared (Comparer_1_t2968 * __this, MethodInfo* method)
{
	{
		Object__ctor_m1289(__this, /*hidden argument*/&Object__ctor_m1289_MethodInfo);
		return;
	}
}
// System.Void System.Collections.Generic.Comparer`1<UnityEngine.UILineInfo>::.cctor()
extern Il2CppGenericMethod Comparer_1__cctor_m17570_GenericMethod;
extern "C" void Comparer_1__cctor_m17570_gshared (Object_t * __this /* static, unused */, MethodInfo* method)
{
	DefaultComparer_t2969 * L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer = (DefaultComparer_t2969 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
	(( void (*) (DefaultComparer_t2969 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
	((Comparer_1_t2968_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer;
}
// System.Int32 System.Collections.Generic.Comparer`1<UnityEngine.UILineInfo>::System.Collections.IComparer.Compare(System.Object,System.Object)
extern Il2CppGenericMethod Comparer_1_System_Collections_IComparer_Compare_m17571_GenericMethod;
extern "C" int32_t Comparer_1_System_Collections_IComparer_Compare_m17571_gshared (Comparer_1_t2968 * __this, Object_t * ___x, Object_t * ___y, MethodInfo* method)
{
	int32_t G_B4_0 = 0;
	{
		Object_t * L_0 = ___x;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		Object_t * L_1 = ___y;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		G_B4_0 = 0;
		goto IL_000a;
	}

IL_0009:
	{
		G_B4_0 = (-1);
	}

IL_000a:
	{
		return G_B4_0;
	}

IL_000b:
	{
		Object_t * L_2 = ___y;
		if (L_2)
		{
			goto IL_0010;
		}
	}
	{
		return 1;
	}

IL_0010:
	{
		Object_t * L_3 = ___x;
		if (!((Object_t *)IsInst(L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))
		{
			goto IL_0033;
		}
	}
	{
		Object_t * L_4 = ___y;
		if (!((Object_t *)IsInst(L_4, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))
		{
			goto IL_0033;
		}
	}
	{
		Object_t * L_5 = ___x;
		Object_t * L_6 = ___y;
		int32_t L_7 = (int32_t)VirtFuncInvoker2< int32_t, UILineInfo_t305 , UILineInfo_t305  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), __this, ((*(UILineInfo_t305 *)((UILineInfo_t305 *)UnBox (L_5, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))), ((*(UILineInfo_t305 *)((UILineInfo_t305 *)UnBox (L_6, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_7;
	}

IL_0033:
	{
		ArgumentException_t318 * L_8 = (ArgumentException_t318 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t318_il2cpp_TypeInfo));
		ArgumentException__ctor_m9638(L_8, /*hidden argument*/&ArgumentException__ctor_m9638_MethodInfo);
		il2cpp_codegen_raise_exception(L_8);
	}
}
// System.Int32 System.Collections.Generic.Comparer`1<UnityEngine.UILineInfo>::Compare(T,T)
// System.Collections.Generic.Comparer`1<T> System.Collections.Generic.Comparer`1<UnityEngine.UILineInfo>::get_Default()
extern Il2CppGenericMethod Comparer_1_get_Default_m17572_GenericMethod;
extern "C" Comparer_1_t2968 * Comparer_1_get_Default_m17572_gshared (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		Comparer_1_t2968 * L_0 = ((Comparer_1_t2968_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0;
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IComparer_1_t3756_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IComparer`1<UnityEngine.UILineInfo>::Compare(T,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IComparable_1_t3757_il2cpp_TypeInfo;



// System.Int32 System.IComparable`1<UnityEngine.UILineInfo>::CompareTo(T)
#ifndef _MSC_VER
#else
#endif

// System.String
#include "mscorlib_System_String.h"
extern TypeInfo IComparable_t332_il2cpp_TypeInfo;
extern MethodInfo IComparable_1_CompareTo_m23340_MethodInfo;
extern MethodInfo IComparable_CompareTo_m10441_MethodInfo;
extern MethodInfo ArgumentException__ctor_m1847_MethodInfo;
extern Il2CppGenericMethod IComparable_1_CompareTo_m23340_GenericMethod;


// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.UILineInfo>::.ctor()
extern "C" void DefaultComparer__ctor_m17573_gshared (DefaultComparer_t2969 * __this, MethodInfo* method)
{
	{
		(( void (*) (Comparer_1_t2968 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.UILineInfo>::Compare(T,T)
extern Il2CppGenericMethod DefaultComparer_Compare_m17574_GenericMethod;
extern "C" int32_t DefaultComparer_Compare_m17574_gshared (DefaultComparer_t2969 * __this, UILineInfo_t305  ___x, UILineInfo_t305  ___y, MethodInfo* method)
{
	int32_t G_B4_0 = 0;
	{
		UILineInfo_t305  L_0 = ___x;
		UILineInfo_t305  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		if (L_2)
		{
			goto IL_0015;
		}
	}
	{
		UILineInfo_t305  L_3 = ___y;
		UILineInfo_t305  L_4 = L_3;
		Object_t * L_5 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_4);
		if (L_5)
		{
			goto IL_0013;
		}
	}
	{
		G_B4_0 = 0;
		goto IL_0014;
	}

IL_0013:
	{
		G_B4_0 = (-1);
	}

IL_0014:
	{
		return G_B4_0;
	}

IL_0015:
	{
		UILineInfo_t305  L_6 = ___y;
		UILineInfo_t305  L_7 = L_6;
		Object_t * L_8 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_7);
		if (L_8)
		{
			goto IL_001f;
		}
	}
	{
		return 1;
	}

IL_001f:
	{
		UILineInfo_t305  L_9 = ___x;
		UILineInfo_t305  L_10 = L_9;
		Object_t * L_11 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_10);
		if (!((Object_t*)IsInst(L_11, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))))
		{
			goto IL_003e;
		}
	}
	{
		UILineInfo_t305  L_12 = ___x;
		UILineInfo_t305  L_13 = L_12;
		Object_t * L_14 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_13);
		UILineInfo_t305  L_15 = ___y;
		NullCheck(((Object_t*)Castclass(L_14, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))));
		int32_t L_16 = (int32_t)InterfaceFuncInvoker1< int32_t, UILineInfo_t305  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), ((Object_t*)Castclass(L_14, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))), L_15);
		return L_16;
	}

IL_003e:
	{
		UILineInfo_t305  L_17 = ___x;
		UILineInfo_t305  L_18 = L_17;
		Object_t * L_19 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_18);
		if (!((Object_t *)IsInst(L_19, InitializedTypeInfo(&IComparable_t332_il2cpp_TypeInfo))))
		{
			goto IL_0062;
		}
	}
	{
		UILineInfo_t305  L_20 = ___x;
		UILineInfo_t305  L_21 = L_20;
		Object_t * L_22 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_21);
		UILineInfo_t305  L_23 = ___y;
		UILineInfo_t305  L_24 = L_23;
		Object_t * L_25 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_24);
		NullCheck(((Object_t *)Castclass(L_22, InitializedTypeInfo(&IComparable_t332_il2cpp_TypeInfo))));
		int32_t L_26 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(&IComparable_CompareTo_m10441_MethodInfo, ((Object_t *)Castclass(L_22, InitializedTypeInfo(&IComparable_t332_il2cpp_TypeInfo))), L_25);
		return L_26;
	}

IL_0062:
	{
		ArgumentException_t318 * L_27 = (ArgumentException_t318 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t318_il2cpp_TypeInfo));
		ArgumentException__ctor_m1847(L_27, (String_t*) &_stringLiteral1305, /*hidden argument*/&ArgumentException__ctor_m1847_MethodInfo);
		il2cpp_codegen_raise_exception(L_27);
	}
}
// System.Comparison`1<UnityEngine.UILineInfo>
#include "mscorlib_System_Comparison_1_gen_26.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Comparison_1_t2970_il2cpp_TypeInfo;
// System.Comparison`1<UnityEngine.UILineInfo>
#include "mscorlib_System_Comparison_1_gen_26MethodDeclarations.h"



// System.Void System.Comparison`1<UnityEngine.UILineInfo>::.ctor(System.Object,System.IntPtr)
extern Il2CppGenericMethod Comparison_1__ctor_m17575_GenericMethod;
extern "C" void Comparison_1__ctor_m17575_gshared (Comparison_1_t2970 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Int32 System.Comparison`1<UnityEngine.UILineInfo>::Invoke(T,T)
extern Il2CppGenericMethod Comparison_1_Invoke_m17576_GenericMethod;
extern "C" int32_t Comparison_1_Invoke_m17576_gshared (Comparison_1_t2970 * __this, UILineInfo_t305  ___x, UILineInfo_t305  ___y, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Comparison_1_Invoke_m17576((Comparison_1_t2970 *)__this->___prev_9,___x, ___y, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef int32_t (*FunctionPointerType) (Object_t *, Object_t * __this, UILineInfo_t305  ___x, UILineInfo_t305  ___y, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___x, ___y,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	typedef int32_t (*FunctionPointerType) (Object_t * __this, UILineInfo_t305  ___x, UILineInfo_t305  ___y, MethodInfo* method);
	return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___x, ___y,(MethodInfo*)(__this->___method_3.___m_value_0));
}
// System.IAsyncResult System.Comparison`1<UnityEngine.UILineInfo>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern Il2CppGenericMethod Comparison_1_BeginInvoke_m17577_GenericMethod;
extern "C" Object_t * Comparison_1_BeginInvoke_m17577_gshared (Comparison_1_t2970 * __this, UILineInfo_t305  ___x, UILineInfo_t305  ___y, AsyncCallback_t171 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = Box(InitializedTypeInfo(&UILineInfo_t305_il2cpp_TypeInfo), &___x);
	__d_args[1] = Box(InitializedTypeInfo(&UILineInfo_t305_il2cpp_TypeInfo), &___y);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Int32 System.Comparison`1<UnityEngine.UILineInfo>::EndInvoke(System.IAsyncResult)
extern Il2CppGenericMethod Comparison_1_EndInvoke_m17578_GenericMethod;
extern "C" int32_t Comparison_1_EndInvoke_m17578_gshared (Comparison_1_t2970 * __this, Object_t * ___result, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(int32_t*)UnBox ((Il2CppCodeGenObject*)__result);
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IDictionary_2_t562_il2cpp_TypeInfo;



// System.Void System.Collections.Generic.IDictionary`2<System.String,System.Object>::Add(TKey,TValue)
// System.Boolean System.Collections.Generic.IDictionary`2<System.String,System.Object>::Remove(TKey)
// System.Boolean System.Collections.Generic.IDictionary`2<System.String,System.Object>::TryGetValue(TKey,TValue&)
// TValue System.Collections.Generic.IDictionary`2<System.String,System.Object>::get_Item(TKey)
// System.Void System.Collections.Generic.IDictionary`2<System.String,System.Object>::set_Item(TKey,TValue)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.IDictionary`2<System.String,System.Object>::get_Keys()
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.IDictionary`2<System.String,System.Object>::get_Values()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t802_il2cpp_TypeInfo;

// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0.h"


// System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t801_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t599_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo KeyValuePair_2_t598_il2cpp_TypeInfo;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0MethodDeclarations.h"

extern TypeInfo StringU5BU5D_t423_il2cpp_TypeInfo;
extern TypeInfo String_t_il2cpp_TypeInfo;
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
extern Il2CppType StringU5BU5D_t423_0_0_0;
extern MethodInfo Object_ToString_m1967_MethodInfo;
extern MethodInfo String_Concat_m3399_MethodInfo;
extern Il2CppGenericMethod KeyValuePair_2_set_Key_m17580_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2_set_Value_m17581_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2_get_Key_m3461_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2_get_Value_m3462_GenericMethod;


// System.Void System.Collections.Generic.KeyValuePair`2<System.String,System.Object>::.ctor(TKey,TValue)
// TKey System.Collections.Generic.KeyValuePair`2<System.String,System.Object>::get_Key()
// System.Void System.Collections.Generic.KeyValuePair`2<System.String,System.Object>::set_Key(TKey)
// TValue System.Collections.Generic.KeyValuePair`2<System.String,System.Object>::get_Value()
// System.Void System.Collections.Generic.KeyValuePair`2<System.String,System.Object>::set_Value(TValue)
// System.String System.Collections.Generic.KeyValuePair`2<System.String,System.Object>::ToString()
// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_124.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t2971_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_124MethodDeclarations.h"

// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationException.h"
extern TypeInfo InvalidOperationException_t1095_il2cpp_TypeInfo;
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
extern Il2CppType InternalEnumerator_1_t2971_0_0_0;
extern Il2CppType KeyValuePair_2_t598_0_0_0;
extern MethodInfo InvalidOperationException__ctor_m4740_MethodInfo;
extern MethodInfo Array_get_Length_m4744_MethodInfo;
struct Array_t;
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeException.h"
// Declaration !!0 System.Array::InternalArray__get_Item<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>(System.Int32)
extern "C" KeyValuePair_2_t598  Array_InternalArray__get_Item_TisKeyValuePair_2_t598_m23345_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisKeyValuePair_2_t598_m23345(__this, p0, method) (( KeyValuePair_2_t598  (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisKeyValuePair_2_t598_m23345_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m17587_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisKeyValuePair_2_t598_m23345_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::.ctor(System.Array)
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m17583_GenericMethod;
extern "C" void InternalEnumerator_1__ctor_m17583_gshared (InternalEnumerator_1_t2971 * __this, Array_t * ___array, MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m17584_GenericMethod;
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m17584_gshared (InternalEnumerator_1_t2971 * __this, MethodInfo* method)
{
	{
		KeyValuePair_2_t598  L_0 = (( KeyValuePair_2_t598  (*) (InternalEnumerator_1_t2971 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t598  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::Dispose()
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m17585_GenericMethod;
extern "C" void InternalEnumerator_1_Dispose_m17585_gshared (InternalEnumerator_1_t2971 * __this, MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::MoveNext()
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m17586_GenericMethod;
extern "C" bool InternalEnumerator_1_MoveNext_m17586_gshared (InternalEnumerator_1_t2971 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_001b;
		}
	}
	{
		Array_t * L_1 = (__this->___array_0);
		NullCheck(L_1);
		int32_t L_2 = Array_get_Length_m4744(L_1, /*hidden argument*/&Array_get_Length_m4744_MethodInfo);
		__this->___idx_1 = L_2;
	}

IL_001b:
	{
		int32_t L_3 = (__this->___idx_1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = (__this->___idx_1);
		int32_t L_5 = ((int32_t)((int32_t)L_4-(int32_t)1));
		V_0 = L_5;
		__this->___idx_1 = L_5;
		int32_t L_6 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_6) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B5_0 = 0;
	}

IL_003e:
	{
		return G_B5_0;
	}
}
// T System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::get_Current()
extern "C" KeyValuePair_2_t598  InternalEnumerator_1_get_Current_m17587_gshared (InternalEnumerator_1_t2971 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t1095 * L_1 = (InvalidOperationException_t1095 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1095_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m4740(L_1, (String_t*) &_stringLiteral1180, /*hidden argument*/&InvalidOperationException__ctor_m4740_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		int32_t L_2 = (__this->___idx_1);
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_0029;
		}
	}
	{
		InvalidOperationException_t1095 * L_3 = (InvalidOperationException_t1095 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1095_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m4740(L_3, (String_t*) &_stringLiteral1181, /*hidden argument*/&InvalidOperationException__ctor_m4740_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (__this->___array_0);
		Array_t * L_5 = (__this->___array_0);
		NullCheck(L_5);
		int32_t L_6 = Array_get_Length_m4744(L_5, /*hidden argument*/&Array_get_Length_m4744_MethodInfo);
		int32_t L_7 = (__this->___idx_1);
		NullCheck(L_4);
		KeyValuePair_2_t598  L_8 = (( KeyValuePair_2_t598  (*) (Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_4, ((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4184_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::set_Item(System.Int32,T)
// System.Collections.Generic.Dictionary`2<System.String,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_7.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Dictionary_2_t565_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2<System.String,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_7MethodDeclarations.h"

// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_26.h"
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_26.h"
// System.Int64
#include "mscorlib_System_Int64.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullException.h"
// System.Collections.Generic.Link
#include "mscorlib_System_Collections_Generic_Link.h"
// System.Collections.Generic.KeyNotFoundException
#include "mscorlib_System_Collections_Generic_KeyNotFoundException.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_15.h"
// System.Runtime.Serialization.SerializationInfo
#include "mscorlib_System_Runtime_Serialization_SerializationInfo.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int64,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_60.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int64,System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_61.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__13.h"
// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.String,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ShimEnumera_12.h"
// System.Collections.Generic.EqualityComparer`1<System.String>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_27.h"
// System.Collections.Generic.EqualityComparer`1<System.Int64>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_34.h"
extern TypeInfo Int64_t705_il2cpp_TypeInfo;
extern TypeInfo Void_t18_il2cpp_TypeInfo;
extern TypeInfo ArgumentNullException_t699_il2cpp_TypeInfo;
extern TypeInfo IEqualityComparer_1_t2335_il2cpp_TypeInfo;
extern TypeInfo Link_t1399_il2cpp_TypeInfo;
extern TypeInfo KeyNotFoundException_t1400_il2cpp_TypeInfo;
extern TypeInfo KeyCollection_t2994_il2cpp_TypeInfo;
extern TypeInfo ValueCollection_t2998_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t4185_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t4186_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t3544_il2cpp_TypeInfo;
extern TypeInfo KeyValuePair_2_t2992_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_t117_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t272_il2cpp_TypeInfo;
extern TypeInfo KeyValuePair_2U5BU5D_t3543_il2cpp_TypeInfo;
extern TypeInfo DictionaryEntryU5BU5D_t3643_il2cpp_TypeInfo;
extern TypeInfo DictionaryEntry_t918_il2cpp_TypeInfo;
extern TypeInfo Transform_1_t2972_il2cpp_TypeInfo;
extern TypeInfo Transform_1_t3001_il2cpp_TypeInfo;
extern TypeInfo Enumerator_t2996_il2cpp_TypeInfo;
extern TypeInfo ShimEnumerator_t3003_il2cpp_TypeInfo;
extern TypeInfo ArgumentOutOfRangeException_t703_il2cpp_TypeInfo;
extern TypeInfo EqualityComparer_1_t2879_il2cpp_TypeInfo;
extern TypeInfo Int32U5BU5D_t1029_il2cpp_TypeInfo;
extern TypeInfo LinkU5BU5D_t2191_il2cpp_TypeInfo;
extern TypeInfo Int64U5BU5D_t1302_il2cpp_TypeInfo;
extern TypeInfo Hashtable_t911_il2cpp_TypeInfo;
extern TypeInfo EqualityComparer_1_t2989_il2cpp_TypeInfo;
extern TypeInfo IEqualityComparer_1_t4187_il2cpp_TypeInfo;
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullExceptionMethodDeclarations.h"
// System.Collections.Generic.KeyNotFoundException
#include "mscorlib_System_Collections_Generic_KeyNotFoundExceptionMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_26MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_26MethodDeclarations.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_15MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int64,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_60MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int64,System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_61MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__13MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.String,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ShimEnumera_12MethodDeclarations.h"
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeExceptionMethodDeclarations.h"
// System.Collections.Generic.EqualityComparer`1<System.String>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_27MethodDeclarations.h"
// System.Collections.Hashtable
#include "mscorlib_System_Collections_HashtableMethodDeclarations.h"
// System.Collections.Generic.EqualityComparer`1<System.Int64>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_34MethodDeclarations.h"
// System.Runtime.Serialization.SerializationInfo
#include "mscorlib_System_Runtime_Serialization_SerializationInfoMethodDeclarations.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntryMethodDeclarations.h"
extern Il2CppType Dictionary_2_t565_0_0_0;
extern Il2CppType IEqualityComparer_1_t2335_0_0_0;
extern Il2CppType KeyCollection_t2994_0_0_0;
extern Il2CppType ValueCollection_t2998_0_0_0;
extern Il2CppType ICollection_1_t4185_0_0_0;
extern Il2CppType IEnumerable_1_t4186_0_0_0;
extern Il2CppType IEnumerator_1_t3544_0_0_0;
extern Il2CppType KeyValuePair_2U5BU5D_t3543_0_0_0;
extern Il2CppType KeyValuePair_2_t2992_0_0_0;
extern Il2CppType DictionaryEntryU5BU5D_t3643_0_0_0;
extern Il2CppType Transform_1_t2972_0_0_0;
extern Il2CppType Transform_1_t3001_0_0_0;
extern Il2CppType Enumerator_t2996_0_0_0;
extern Il2CppType ShimEnumerator_t3003_0_0_0;
extern Il2CppType EqualityComparer_1_t2879_0_0_0;
extern Il2CppType Int32U5BU5D_t1029_0_0_0;
extern Il2CppType LinkU5BU5D_t2191_0_0_0;
extern Il2CppType Int64U5BU5D_t1302_0_0_0;
extern Il2CppType EqualityComparer_1_t2989_0_0_0;
extern Il2CppType IEqualityComparer_1_t4187_0_0_0;
extern Il2CppType String_t_0_0_0;
extern Il2CppType Int64_t705_0_0_0;
extern MethodInfo Dictionary_2_ContainsKey_m17661_MethodInfo;
extern MethodInfo Dictionary_2_get_Item_m17637_MethodInfo;
extern MethodInfo Dictionary_2_set_Item_m17639_MethodInfo;
extern MethodInfo ArgumentNullException__ctor_m3455_MethodInfo;
extern MethodInfo IEqualityComparer_1_GetHashCode_m25303_MethodInfo;
extern MethodInfo IEqualityComparer_1_Equals_m25304_MethodInfo;
extern MethodInfo KeyNotFoundException__ctor_m7335_MethodInfo;
extern MethodInfo KeyCollection__ctor_m17807_MethodInfo;
extern MethodInfo ValueCollection__ctor_m17842_MethodInfo;
extern MethodInfo ICollection_1_get_Count_m25388_MethodInfo;
extern MethodInfo IEnumerable_1_GetEnumerator_m25389_MethodInfo;
extern MethodInfo IEnumerator_1_get_Current_m25390_MethodInfo;
extern MethodInfo Dictionary_2_Add_m17657_MethodInfo;
extern MethodInfo IEnumerator_MoveNext_m3457_MethodInfo;
extern MethodInfo IDisposable_Dispose_m1379_MethodInfo;
extern MethodInfo Dictionary_2_Remove_m17669_MethodInfo;
extern MethodInfo Dictionary_2_U3CCopyToU3Em__0_m17685_MethodInfo;
extern MethodInfo Transform_1__ctor_m17865_MethodInfo;
extern MethodInfo Dictionary_2_make_pair_m17647_MethodInfo;
extern MethodInfo Transform_1__ctor_m17869_MethodInfo;
extern MethodInfo Enumerator__ctor_m17826_MethodInfo;
extern MethodInfo ShimEnumerator__ctor_m17877_MethodInfo;
extern MethodInfo ArgumentOutOfRangeException__ctor_m4748_MethodInfo;
extern MethodInfo Dictionary_2_get_Count_m3425_MethodInfo;
extern MethodInfo KeyValuePair_2__ctor_m17796_MethodInfo;
extern MethodInfo Hashtable_ToPrime_m7502_MethodInfo;
extern MethodInfo Array_Copy_m6718_MethodInfo;
extern MethodInfo Array_Clear_m5899_MethodInfo;
extern MethodInfo IEqualityComparer_1_Equals_m25391_MethodInfo;
extern MethodInfo SerializationInfo_AddValue_m4757_MethodInfo;
extern MethodInfo SerializationInfo_AddValue_m4770_MethodInfo;
extern MethodInfo SerializationInfo_GetInt32_m4769_MethodInfo;
extern MethodInfo SerializationInfo_GetValue_m4758_MethodInfo;
extern MethodInfo Type_ToString_m6800_MethodInfo;
extern MethodInfo String_Concat_m1678_MethodInfo;
extern MethodInfo ArgumentException__ctor_m4746_MethodInfo;
extern MethodInfo Type_get_IsValueType_m6769_MethodInfo;
extern MethodInfo Dictionary_2_TryGetValue_m17671_MethodInfo;
extern MethodInfo EqualityComparer_1_Equals_m25392_MethodInfo;
extern MethodInfo DictionaryEntry__ctor_m4741_MethodInfo;
struct Dictionary_2_t565;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int64>::Do_CopyTo<System.Collections.DictionaryEntry,System.Collections.DictionaryEntry>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int64>::Do_CopyTo<System.Collections.DictionaryEntry,System.Collections.DictionaryEntry>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisDictionaryEntry_t918_TisDictionaryEntry_t918_m23425 (Dictionary_2_t565 * __this, DictionaryEntryU5BU5D_t3643* p0, int32_t p1, Transform_1_t2972 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
struct Dictionary_2_t565;
// System.Exception
#include "mscorlib_System_Exception.h"
struct Dictionary_2_t2974;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_17.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_62.h"
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t2992_m23428_gshared (Dictionary_2_t2974 * __this, Array_t * p0, int32_t p1, Transform_1_t3002 * p2, MethodInfo* method);
#define Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t2992_m23428(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t2974 *, Array_t *, int32_t, Transform_1_t3002 *, MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t2992_m23428_gshared)(__this, p0, p1, p2, method)
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int64>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int64>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
#define Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t2992_m23427(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t565 *, Array_t *, int32_t, Transform_1_t3001 *, MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t2992_m23428_gshared)(__this, p0, p1, p2, method)
struct Dictionary_2_t565;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int64>::Do_CopyTo<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>,System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int64>::Do_CopyTo<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>,System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t2992_TisKeyValuePair_2_t2992_m23430 (Dictionary_2_t565 * __this, KeyValuePair_2U5BU5D_t3543* p0, int32_t p1, Transform_1_t3001 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern Il2CppGenericMethod Dictionary_2_get_Keys_m17673_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_get_Values_m17675_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_ContainsKey_m17661_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_ToTKey_m17677_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_get_Item_m17637_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_ToTValue_m17679_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_set_Item_m17639_GenericMethod;
extern Il2CppGenericMethod IEqualityComparer_1_GetHashCode_m25303_GenericMethod;
extern Il2CppGenericMethod IEqualityComparer_1_Equals_m25304_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Resize_m17655_GenericMethod;
extern Il2CppGenericMethod KeyCollection__ctor_m17807_GenericMethod;
extern Il2CppGenericMethod ValueCollection__ctor_m17842_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Init_m17641_GenericMethod;
extern Il2CppGenericMethod Dictionary_2__ctor_m17596_GenericMethod;
extern Il2CppGenericMethod ICollection_1_get_Count_m25388_GenericMethod;
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m25389_GenericMethod;
extern Il2CppGenericMethod IEnumerator_1_get_Current_m25390_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2_get_Key_m17797_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2_get_Value_m17799_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Add_m17657_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Remove_m17669_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_ContainsKeyValuePair_m17681_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_CopyTo_m17653_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_CopyToCheck_m17645_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_U3CCopyToU3Em__0_m17685_GenericMethod;
extern Il2CppGenericMethod Transform_1__ctor_m17865_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_CopyTo_TisDictionaryEntry_t918_TisDictionaryEntry_t918_m23425_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_make_pair_m17647_GenericMethod;
extern Il2CppGenericMethod Transform_1__ctor_m17869_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t2992_m23427_GenericMethod;
extern Il2CppGenericMethod Enumerator__ctor_m17826_GenericMethod;
extern Il2CppGenericMethod ShimEnumerator__ctor_m17877_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_get_Default_m16533_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_InitArrays_m17643_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_get_Count_m3425_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2__ctor_m17796_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t2992_TisKeyValuePair_2_t2992_m23430_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_get_Default_m17789_GenericMethod;
extern Il2CppGenericMethod IEqualityComparer_1_Equals_m25391_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_TryGetValue_m17671_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_Equals_m25392_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int64>::.ctor()
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int64>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int64>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int64>::.ctor(System.Int32)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int64>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int64>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.String,System.Int64>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.String,System.Int64>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
// System.Object System.Collections.Generic.Dictionary`2<System.String,System.Int64>::System.Collections.IDictionary.get_Item(System.Object)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int64>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int64>::System.Collections.IDictionary.Add(System.Object,System.Object)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int64>::System.Collections.IDictionary.Contains(System.Object)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int64>::System.Collections.IDictionary.Remove(System.Object)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int64>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.Generic.Dictionary`2<System.String,System.Int64>::System.Collections.ICollection.get_SyncRoot()
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int64>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.String,System.Int64>::System.Collections.IEnumerable.GetEnumerator()
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.String,System.Int64>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.String,System.Int64>::System.Collections.IDictionary.GetEnumerator()
// System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.Int64>::get_Count()
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Int64>::get_Item(TKey)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int64>::set_Item(TKey,TValue)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int64>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int64>::InitArrays(System.Int32)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int64>::CopyToCheck(System.Array,System.Int32)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Int64>::make_pair(TKey,TValue)
// TKey System.Collections.Generic.Dictionary`2<System.String,System.Int64>::pick_key(TKey,TValue)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Int64>::pick_value(TKey,TValue)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int64>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int64>::Resize()
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int64>::Add(TKey,TValue)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int64>::Clear()
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int64>::ContainsKey(TKey)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int64>::ContainsValue(TValue)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int64>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int64>::OnDeserialization(System.Object)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int64>::Remove(TKey)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int64>::TryGetValue(TKey,TValue&)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Int64>::get_Keys()
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Int64>::get_Values()
// TKey System.Collections.Generic.Dictionary`2<System.String,System.Int64>::ToTKey(System.Object)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Int64>::ToTValue(System.Object)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int64>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Int64>::GetEnumerator()
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.String,System.Int64>::<CopyTo>m__0(TKey,TValue)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Dictionary_2_t2974_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_17MethodDeclarations.h"

// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_24.h"
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_24.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_14.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_56.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_57.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__12.h"
// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ShimEnumera_11.h"
// System.Collections.Generic.EqualityComparer`1<System.Object>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen.h"
extern TypeInfo IEqualityComparer_1_t2556_il2cpp_TypeInfo;
extern TypeInfo KeyCollection_t2980_il2cpp_TypeInfo;
extern TypeInfo ValueCollection_t2984_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t4188_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t4189_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t3547_il2cpp_TypeInfo;
extern TypeInfo KeyValuePair_2_t2975_il2cpp_TypeInfo;
extern TypeInfo KeyValuePair_2U5BU5D_t3546_il2cpp_TypeInfo;
extern TypeInfo Transform_1_t2973_il2cpp_TypeInfo;
extern TypeInfo Transform_1_t2987_il2cpp_TypeInfo;
extern TypeInfo Enumerator_t2982_il2cpp_TypeInfo;
extern TypeInfo ShimEnumerator_t2988_il2cpp_TypeInfo;
extern TypeInfo EqualityComparer_1_t2360_il2cpp_TypeInfo;
extern TypeInfo ObjectU5BU5D_t269_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_24MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_24MethodDeclarations.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_14MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_56MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_57MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__12MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ShimEnumera_11MethodDeclarations.h"
// System.Collections.Generic.EqualityComparer`1<System.Object>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_genMethodDeclarations.h"
extern Il2CppType Dictionary_2_t2974_0_0_0;
extern Il2CppType IEqualityComparer_1_t2556_0_0_0;
extern Il2CppType KeyCollection_t2980_0_0_0;
extern Il2CppType ValueCollection_t2984_0_0_0;
extern Il2CppType ICollection_1_t4188_0_0_0;
extern Il2CppType IEnumerable_1_t4189_0_0_0;
extern Il2CppType IEnumerator_1_t3547_0_0_0;
extern Il2CppType KeyValuePair_2U5BU5D_t3546_0_0_0;
extern Il2CppType KeyValuePair_2_t2975_0_0_0;
extern Il2CppType Transform_1_t2973_0_0_0;
extern Il2CppType Transform_1_t2987_0_0_0;
extern Il2CppType Enumerator_t2982_0_0_0;
extern Il2CppType ShimEnumerator_t2988_0_0_0;
extern Il2CppType EqualityComparer_1_t2360_0_0_0;
extern Il2CppType ObjectU5BU5D_t269_0_0_0;
extern Il2CppType Object_t_0_0_0;
extern MethodInfo Dictionary_2_ContainsKey_m17662_MethodInfo;
extern MethodInfo Dictionary_2_get_Item_m17638_MethodInfo;
extern MethodInfo Dictionary_2_set_Item_m17640_MethodInfo;
extern MethodInfo IEqualityComparer_1_GetHashCode_m25098_MethodInfo;
extern MethodInfo IEqualityComparer_1_Equals_m25079_MethodInfo;
extern MethodInfo KeyCollection__ctor_m17713_MethodInfo;
extern MethodInfo ValueCollection__ctor_m17748_MethodInfo;
extern MethodInfo ICollection_1_get_Count_m25393_MethodInfo;
extern MethodInfo IEnumerable_1_GetEnumerator_m25394_MethodInfo;
extern MethodInfo IEnumerator_1_get_Current_m25395_MethodInfo;
extern MethodInfo Dictionary_2_Add_m17658_MethodInfo;
extern MethodInfo Dictionary_2_Remove_m17670_MethodInfo;
extern MethodInfo Dictionary_2_U3CCopyToU3Em__0_m17686_MethodInfo;
extern MethodInfo Transform_1__ctor_m17771_MethodInfo;
extern MethodInfo Dictionary_2_make_pair_m17648_MethodInfo;
extern MethodInfo Transform_1__ctor_m17775_MethodInfo;
extern MethodInfo Enumerator__ctor_m17732_MethodInfo;
extern MethodInfo ShimEnumerator__ctor_m17779_MethodInfo;
extern MethodInfo Dictionary_2_get_Count_m17636_MethodInfo;
extern MethodInfo KeyValuePair_2__ctor_m17687_MethodInfo;
extern MethodInfo Dictionary_2_TryGetValue_m17672_MethodInfo;
struct Dictionary_2_t2974;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Do_CopyTo<System.Collections.DictionaryEntry,System.Collections.DictionaryEntry>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Do_CopyTo<System.Collections.DictionaryEntry,System.Collections.DictionaryEntry>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisDictionaryEntry_t918_TisDictionaryEntry_t918_m23404 (Dictionary_2_t2974 * __this, DictionaryEntryU5BU5D_t3643* p0, int32_t p1, Transform_1_t2973 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
struct Dictionary_2_t2974;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t2975_m23406_gshared (Dictionary_2_t2974 * __this, Array_t * p0, int32_t p1, Transform_1_t2987 * p2, MethodInfo* method);
#define Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t2975_m23406(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t2974 *, Array_t *, int32_t, Transform_1_t2987 *, MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t2975_m23406_gshared)(__this, p0, p1, p2, method)
struct Dictionary_2_t2974;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Do_CopyTo<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Do_CopyTo<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t2975_TisKeyValuePair_2_t2975_m23407 (Dictionary_2_t2974 * __this, KeyValuePair_2U5BU5D_t3546* p0, int32_t p1, Transform_1_t2987 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern Il2CppGenericMethod Dictionary_2_get_Keys_m17674_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_get_Values_m17676_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_ContainsKey_m17662_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_ToTKey_m17678_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_get_Item_m17638_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_ToTValue_m17680_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_set_Item_m17640_GenericMethod;
extern Il2CppGenericMethod IEqualityComparer_1_GetHashCode_m25098_GenericMethod;
extern Il2CppGenericMethod IEqualityComparer_1_Equals_m25079_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Resize_m17656_GenericMethod;
extern Il2CppGenericMethod KeyCollection__ctor_m17713_GenericMethod;
extern Il2CppGenericMethod ValueCollection__ctor_m17748_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Init_m17642_GenericMethod;
extern Il2CppGenericMethod Dictionary_2__ctor_m17597_GenericMethod;
extern Il2CppGenericMethod ICollection_1_get_Count_m25393_GenericMethod;
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m25394_GenericMethod;
extern Il2CppGenericMethod IEnumerator_1_get_Current_m25395_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2_get_Key_m17688_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2_get_Value_m17690_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Add_m17658_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Remove_m17670_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_ContainsKeyValuePair_m17682_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_CopyTo_m17654_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_CopyToCheck_m17646_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_U3CCopyToU3Em__0_m17686_GenericMethod;
extern Il2CppGenericMethod Transform_1__ctor_m17771_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_CopyTo_TisDictionaryEntry_t918_TisDictionaryEntry_t918_m23404_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_make_pair_m17648_GenericMethod;
extern Il2CppGenericMethod Transform_1__ctor_m17775_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t2975_m23406_GenericMethod;
extern Il2CppGenericMethod Enumerator__ctor_m17732_GenericMethod;
extern Il2CppGenericMethod ShimEnumerator__ctor_m17779_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_get_Default_m11412_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_InitArrays_m17644_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_get_Count_m17636_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2__ctor_m17687_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t2975_TisKeyValuePair_2_t2975_m23407_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_TryGetValue_m17672_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor()
extern Il2CppGenericMethod Dictionary_2__ctor_m17589_GenericMethod;
extern "C" void Dictionary_2__ctor_m17589_gshared (Dictionary_2_t2974 * __this, MethodInfo* method)
{
	{
		Object__ctor_m1289(__this, /*hidden argument*/&Object__ctor_m1289_MethodInfo);
		(( void (*) (Dictionary_2_t2974 *, int32_t, Object_t*, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, ((int32_t)10), (Object_t*)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern Il2CppGenericMethod Dictionary_2__ctor_m17591_GenericMethod;
extern "C" void Dictionary_2__ctor_m17591_gshared (Dictionary_2_t2974 * __this, Object_t* ___comparer, MethodInfo* method)
{
	{
		Object__ctor_m1289(__this, /*hidden argument*/&Object__ctor_m1289_MethodInfo);
		Object_t* L_0 = ___comparer;
		(( void (*) (Dictionary_2_t2974 *, int32_t, Object_t*, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, ((int32_t)10), L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern Il2CppGenericMethod Dictionary_2__ctor_m17593_GenericMethod;
extern "C" void Dictionary_2__ctor_m17593_gshared (Dictionary_2_t2974 * __this, Object_t* ___dictionary, MethodInfo* method)
{
	{
		Object_t* L_0 = ___dictionary;
		(( void (*) (Dictionary_2_t2974 *, Object_t*, Object_t*, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(__this, L_0, (Object_t*)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Int32)
extern Il2CppGenericMethod Dictionary_2__ctor_m17595_GenericMethod;
extern "C" void Dictionary_2__ctor_m17595_gshared (Dictionary_2_t2974 * __this, int32_t ___capacity, MethodInfo* method)
{
	{
		Object__ctor_m1289(__this, /*hidden argument*/&Object__ctor_m1289_MethodInfo);
		int32_t L_0 = ___capacity;
		(( void (*) (Dictionary_2_t2974 *, int32_t, Object_t*, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, L_0, (Object_t*)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m17597_gshared (Dictionary_2_t2974 * __this, Object_t* ___dictionary, Object_t* ___comparer, MethodInfo* method)
{
	int32_t V_0 = 0;
	KeyValuePair_2_t2975  V_1 = {0};
	Object_t* V_2 = {0};
	Exception_t275 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t275 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Object__ctor_m1289(__this, /*hidden argument*/&Object__ctor_m1289_MethodInfo);
		Object_t* L_0 = ___dictionary;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t699 * L_1 = (ArgumentNullException_t699 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t699_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3455(L_1, (String_t*) &_stringLiteral1306, /*hidden argument*/&ArgumentNullException__ctor_m3455_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0014:
	{
		Object_t* L_2 = ___dictionary;
		NullCheck(L_2);
		int32_t L_3 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), L_2);
		V_0 = L_3;
		int32_t L_4 = V_0;
		Object_t* L_5 = ___comparer;
		(( void (*) (Dictionary_2_t2974 *, int32_t, Object_t*, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, L_4, L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		Object_t* L_6 = ___dictionary;
		NullCheck(L_6);
		Object_t* L_7 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), L_6);
		V_2 = L_7;
	}

IL_002a:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0047;
		}

IL_002c:
		{
			Object_t* L_8 = V_2;
			NullCheck(L_8);
			KeyValuePair_2_t2975  L_9 = (KeyValuePair_2_t2975 )InterfaceFuncInvoker0< KeyValuePair_2_t2975  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), L_8);
			V_1 = L_9;
			Object_t * L_10 = (( Object_t * (*) (KeyValuePair_2_t2975 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((&V_1), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
			int64_t L_11 = (( int64_t (*) (KeyValuePair_2_t2975 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((&V_1), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
			VirtActionInvoker2< Object_t *, int64_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), __this, L_10, L_11);
		}

IL_0047:
		{
			Object_t* L_12 = V_2;
			NullCheck(L_12);
			bool L_13 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&IEnumerator_MoveNext_m3457_MethodInfo, L_12);
			if (L_13)
			{
				goto IL_002c;
			}
		}

IL_004f:
		{
			IL2CPP_LEAVE(0x5C, FINALLY_0051);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t275 *)e.ex;
		goto FINALLY_0051;
	}

FINALLY_0051:
	{ // begin finally (depth: 1)
		{
			Object_t* L_14 = V_2;
			if (L_14)
			{
				goto IL_0055;
			}
		}

IL_0054:
		{
			IL2CPP_END_FINALLY(81)
		}

IL_0055:
		{
			Object_t* L_15 = V_2;
			NullCheck(L_15);
			InterfaceActionInvoker0::Invoke(&IDisposable_Dispose_m1379_MethodInfo, L_15);
			IL2CPP_END_FINALLY(81)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(81)
	{
		IL2CPP_JUMP_TBL(0x5C, IL_005c)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t275 *)
	}

IL_005c:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern Il2CppGenericMethod Dictionary_2__ctor_m17599_GenericMethod;
extern "C" void Dictionary_2__ctor_m17599_gshared (Dictionary_2_t2974 * __this, SerializationInfo_t653 * ___info, StreamingContext_t654  ___context, MethodInfo* method)
{
	{
		Object__ctor_m1289(__this, /*hidden argument*/&Object__ctor_m1289_MethodInfo);
		SerializationInfo_t653 * L_0 = ___info;
		__this->___serialization_info_13 = L_0;
		return;
	}
}
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern Il2CppGenericMethod Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m17601_GenericMethod;
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m17601_gshared (Dictionary_2_t2974 * __this, MethodInfo* method)
{
	{
		KeyCollection_t2980 * L_0 = (( KeyCollection_t2980 * (*) (Dictionary_2_t2974 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		return L_0;
	}
}
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern Il2CppGenericMethod Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m17603_GenericMethod;
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m17603_gshared (Dictionary_2_t2974 * __this, MethodInfo* method)
{
	{
		ValueCollection_t2984 * L_0 = (( ValueCollection_t2984 * (*) (Dictionary_2_t2974 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		return L_0;
	}
}
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.get_Item(System.Object)
extern Il2CppGenericMethod Dictionary_2_System_Collections_IDictionary_get_Item_m17605_GenericMethod;
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m17605_gshared (Dictionary_2_t2974 * __this, Object_t * ___key, MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		if (!((Object_t *)IsInst(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))))
		{
			goto IL_0029;
		}
	}
	{
		Object_t * L_1 = ___key;
		bool L_2 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11), __this, ((Object_t *)Castclass(L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))));
		if (!L_2)
		{
			goto IL_0029;
		}
	}
	{
		Object_t * L_3 = ___key;
		Object_t * L_4 = (( Object_t * (*) (Dictionary_2_t2974 *, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)(__this, L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		int64_t L_5 = (int64_t)VirtFuncInvoker1< int64_t, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13), __this, L_4);
		int64_t L_6 = L_5;
		Object_t * L_7 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14), &L_6);
		return L_7;
	}

IL_0029:
	{
		return NULL;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern Il2CppGenericMethod Dictionary_2_System_Collections_IDictionary_set_Item_m17607_GenericMethod;
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m17607_gshared (Dictionary_2_t2974 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		Object_t * L_1 = (( Object_t * (*) (Dictionary_2_t2974 *, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)(__this, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		Object_t * L_2 = ___value;
		int64_t L_3 = (( int64_t (*) (Dictionary_2_t2974 *, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15)->method)(__this, L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15));
		VirtActionInvoker2< Object_t *, int64_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 16), __this, L_1, L_3);
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern Il2CppGenericMethod Dictionary_2_System_Collections_IDictionary_Add_m17609_GenericMethod;
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m17609_gshared (Dictionary_2_t2974 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		Object_t * L_1 = (( Object_t * (*) (Dictionary_2_t2974 *, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)(__this, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		Object_t * L_2 = ___value;
		int64_t L_3 = (( int64_t (*) (Dictionary_2_t2974 *, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15)->method)(__this, L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15));
		VirtActionInvoker2< Object_t *, int64_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), __this, L_1, L_3);
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.Contains(System.Object)
extern Il2CppGenericMethod Dictionary_2_System_Collections_IDictionary_Contains_m17611_GenericMethod;
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m17611_gshared (Dictionary_2_t2974 * __this, Object_t * ___key, MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t699 * L_1 = (ArgumentNullException_t699 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t699_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3455(L_1, (String_t*) &_stringLiteral342, /*hidden argument*/&ArgumentNullException__ctor_m3455_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		Object_t * L_2 = ___key;
		if (!((Object_t *)IsInst(L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))))
		{
			goto IL_0023;
		}
	}
	{
		Object_t * L_3 = ___key;
		bool L_4 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11), __this, ((Object_t *)Castclass(L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))));
		return L_4;
	}

IL_0023:
	{
		return 0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.Remove(System.Object)
extern Il2CppGenericMethod Dictionary_2_System_Collections_IDictionary_Remove_m17613_GenericMethod;
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m17613_gshared (Dictionary_2_t2974 * __this, Object_t * ___key, MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t699 * L_1 = (ArgumentNullException_t699 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t699_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3455(L_1, (String_t*) &_stringLiteral342, /*hidden argument*/&ArgumentNullException__ctor_m3455_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		Object_t * L_2 = ___key;
		if (!((Object_t *)IsInst(L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))))
		{
			goto IL_0023;
		}
	}
	{
		Object_t * L_3 = ___key;
		VirtFuncInvoker1< bool, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17), __this, ((Object_t *)Castclass(L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))));
	}

IL_0023:
	{
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.ICollection.get_IsSynchronized()
extern Il2CppGenericMethod Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m17615_GenericMethod;
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m17615_gshared (Dictionary_2_t2974 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.ICollection.get_SyncRoot()
extern Il2CppGenericMethod Dictionary_2_System_Collections_ICollection_get_SyncRoot_m17617_GenericMethod;
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m17617_gshared (Dictionary_2_t2974 * __this, MethodInfo* method)
{
	{
		return __this;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern Il2CppGenericMethod Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m17619_GenericMethod;
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m17619_gshared (Dictionary_2_t2974 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern Il2CppGenericMethod Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m17621_GenericMethod;
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m17621_gshared (Dictionary_2_t2974 * __this, KeyValuePair_2_t2975  ___keyValuePair, MethodInfo* method)
{
	{
		Object_t * L_0 = (( Object_t * (*) (KeyValuePair_2_t2975 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((&___keyValuePair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		int64_t L_1 = (( int64_t (*) (KeyValuePair_2_t2975 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((&___keyValuePair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		VirtActionInvoker2< Object_t *, int64_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), __this, L_0, L_1);
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern Il2CppGenericMethod Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m17623_GenericMethod;
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m17623_gshared (Dictionary_2_t2974 * __this, KeyValuePair_2_t2975  ___keyValuePair, MethodInfo* method)
{
	{
		KeyValuePair_2_t2975  L_0 = ___keyValuePair;
		bool L_1 = (( bool (*) (Dictionary_2_t2974 *, KeyValuePair_2_t2975 , MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18)->method)(__this, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18));
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern Il2CppGenericMethod Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m17625_GenericMethod;
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m17625_gshared (Dictionary_2_t2974 * __this, KeyValuePair_2U5BU5D_t3546* ___array, int32_t ___index, MethodInfo* method)
{
	{
		KeyValuePair_2U5BU5D_t3546* L_0 = ___array;
		int32_t L_1 = ___index;
		(( void (*) (Dictionary_2_t2974 *, KeyValuePair_2U5BU5D_t3546*, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)(__this, L_0, L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern Il2CppGenericMethod Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m17627_GenericMethod;
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m17627_gshared (Dictionary_2_t2974 * __this, KeyValuePair_2_t2975  ___keyValuePair, MethodInfo* method)
{
	{
		KeyValuePair_2_t2975  L_0 = ___keyValuePair;
		bool L_1 = (( bool (*) (Dictionary_2_t2974 *, KeyValuePair_2_t2975 , MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18)->method)(__this, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18));
		if (L_1)
		{
			goto IL_000b;
		}
	}
	{
		return 0;
	}

IL_000b:
	{
		Object_t * L_2 = (( Object_t * (*) (KeyValuePair_2_t2975 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((&___keyValuePair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		bool L_3 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17), __this, L_2);
		return L_3;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern Il2CppGenericMethod Dictionary_2_System_Collections_ICollection_CopyTo_m17629_GenericMethod;
extern TypeInfo* DictionaryEntryU5BU5D_t3643_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m17629_gshared (Dictionary_2_t2974 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method)
{
	static bool Dictionary_2_System_Collections_ICollection_CopyTo_m17629_init;
	if (!Dictionary_2_System_Collections_ICollection_CopyTo_m17629_init)
	{
		DictionaryEntryU5BU5D_t3643_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&DictionaryEntryU5BU5D_t3643_0_0_0);
		Dictionary_2_System_Collections_ICollection_CopyTo_m17629_init = true;
	}
	KeyValuePair_2U5BU5D_t3546* V_0 = {0};
	DictionaryEntryU5BU5D_t3643* V_1 = {0};
	int32_t G_B5_0 = 0;
	DictionaryEntryU5BU5D_t3643* G_B5_1 = {0};
	Dictionary_2_t2974 * G_B5_2 = {0};
	int32_t G_B4_0 = 0;
	DictionaryEntryU5BU5D_t3643* G_B4_1 = {0};
	Dictionary_2_t2974 * G_B4_2 = {0};
	{
		Array_t * L_0 = ___array;
		V_0 = ((KeyValuePair_2U5BU5D_t3546*)IsInst(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 20)));
		KeyValuePair_2U5BU5D_t3546* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		KeyValuePair_2U5BU5D_t3546* L_2 = V_0;
		int32_t L_3 = ___index;
		(( void (*) (Dictionary_2_t2974 *, KeyValuePair_2U5BU5D_t3546*, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)(__this, L_2, L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
		return;
	}

IL_0013:
	{
		Array_t * L_4 = ___array;
		int32_t L_5 = ___index;
		(( void (*) (Dictionary_2_t2974 *, Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21)->method)(__this, L_4, L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21));
		Array_t * L_6 = ___array;
		V_1 = ((DictionaryEntryU5BU5D_t3643*)IsInst(L_6, DictionaryEntryU5BU5D_t3643_il2cpp_TypeInfo_var));
		DictionaryEntryU5BU5D_t3643* L_7 = V_1;
		if (!L_7)
		{
			goto IL_004b;
		}
	}
	{
		DictionaryEntryU5BU5D_t3643* L_8 = V_1;
		int32_t L_9 = ___index;
		Transform_1_t2973 * L_10 = ((Dictionary_2_t2974_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22)->static_fields)->___U3CU3Ef__am$cacheB_15;
		G_B4_0 = L_9;
		G_B4_1 = L_8;
		G_B4_2 = ((Dictionary_2_t2974 *)(__this));
		if (L_10)
		{
			G_B5_0 = L_9;
			G_B5_1 = L_8;
			G_B5_2 = ((Dictionary_2_t2974 *)(__this));
			goto IL_0040;
		}
	}
	{
		IntPtr_t L_11 = { IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 23) };
		Transform_1_t2973 * L_12 = (Transform_1_t2973 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 24));
		(( void (*) (Transform_1_t2973 *, Object_t *, IntPtr_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25)->method)(L_12, NULL, L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25));
		((Dictionary_2_t2974_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22)->static_fields)->___U3CU3Ef__am$cacheB_15 = L_12;
		G_B5_0 = G_B4_0;
		G_B5_1 = G_B4_1;
		G_B5_2 = ((Dictionary_2_t2974 *)(G_B4_2));
	}

IL_0040:
	{
		Transform_1_t2973 * L_13 = ((Dictionary_2_t2974_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22)->static_fields)->___U3CU3Ef__am$cacheB_15;
		NullCheck(G_B5_2);
		(( void (*) (Dictionary_2_t2974 *, DictionaryEntryU5BU5D_t3643*, int32_t, Transform_1_t2973 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26)->method)(G_B5_2, G_B5_1, G_B5_0, L_13, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26));
		return;
	}

IL_004b:
	{
		Array_t * L_14 = ___array;
		int32_t L_15 = ___index;
		IntPtr_t L_16 = { IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27) };
		Transform_1_t2987 * L_17 = (Transform_1_t2987 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 28));
		(( void (*) (Transform_1_t2987 *, Object_t *, IntPtr_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29)->method)(L_17, NULL, L_16, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29));
		(( void (*) (Dictionary_2_t2974 *, Array_t *, int32_t, Transform_1_t2987 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 30)->method)(__this, L_14, L_15, L_17, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 30));
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IEnumerable.GetEnumerator()
extern Il2CppGenericMethod Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m17631_GenericMethod;
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m17631_gshared (Dictionary_2_t2974 * __this, MethodInfo* method)
{
	{
		Enumerator_t2982  L_0 = {0};
		(( void (*) (Enumerator_t2982 *, Dictionary_2_t2974 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32)->method)(&L_0, __this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32));
		Enumerator_t2982  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 31), &L_1);
		return (Object_t *)L_2;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern Il2CppGenericMethod Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m17633_GenericMethod;
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m17633_gshared (Dictionary_2_t2974 * __this, MethodInfo* method)
{
	{
		Enumerator_t2982  L_0 = {0};
		(( void (*) (Enumerator_t2982 *, Dictionary_2_t2974 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32)->method)(&L_0, __this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32));
		Enumerator_t2982  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 31), &L_1);
		return (Object_t*)L_2;
	}
}
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.GetEnumerator()
extern Il2CppGenericMethod Dictionary_2_System_Collections_IDictionary_GetEnumerator_m17635_GenericMethod;
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m17635_gshared (Dictionary_2_t2974 * __this, MethodInfo* method)
{
	{
		ShimEnumerator_t2988 * L_0 = (ShimEnumerator_t2988 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 33));
		(( void (*) (ShimEnumerator_t2988 *, Dictionary_2_t2974 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 34)->method)(L_0, __this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 34));
		return L_0;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m17636_gshared (Dictionary_2_t2974 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___count_10);
		return L_0;
	}
}
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::get_Item(TKey)
extern "C" int64_t Dictionary_2_get_Item_m17638_gshared (Dictionary_2_t2974 * __this, Object_t * ___key, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Object_t * L_0 = ___key;
		Object_t * L_1 = L_0;
		if (((Object_t *)L_1))
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t699 * L_2 = (ArgumentNullException_t699 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t699_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3455(L_2, (String_t*) &_stringLiteral342, /*hidden argument*/&ArgumentNullException__ctor_m3455_MethodInfo);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0013:
	{
		Object_t* L_3 = (__this->___hcp_12);
		Object_t * L_4 = ___key;
		NullCheck(L_3);
		int32_t L_5 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), L_3, L_4);
		V_0 = ((int32_t)((int32_t)L_5|(int32_t)((int32_t)-2147483648)));
		Int32U5BU5D_t1029* L_6 = (__this->___table_4);
		int32_t L_7 = V_0;
		Int32U5BU5D_t1029* L_8 = (__this->___table_4);
		NullCheck(L_8);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, ((int32_t)((int32_t)((int32_t)((int32_t)L_7&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_8)->max_length))))));
		int32_t L_9 = ((int32_t)((int32_t)((int32_t)((int32_t)L_7&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_8)->max_length)))));
		V_1 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_6, L_9))-(int32_t)1));
		goto IL_008f;
	}

IL_0042:
	{
		LinkU5BU5D_t2191* L_10 = (__this->___linkSlots_5);
		int32_t L_11 = V_1;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = (((Link_t1399 *)(Link_t1399 *)SZArrayLdElema(L_10, L_11))->___HashCode_0);
		int32_t L_13 = V_0;
		if ((!(((uint32_t)L_12) == ((uint32_t)L_13))))
		{
			goto IL_007d;
		}
	}
	{
		Object_t* L_14 = (__this->___hcp_12);
		ObjectU5BU5D_t269* L_15 = (__this->___keySlots_6);
		int32_t L_16 = V_1;
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, L_16);
		int32_t L_17 = L_16;
		Object_t * L_18 = ___key;
		NullCheck(L_14);
		bool L_19 = (bool)InterfaceFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 36), L_14, (*(Object_t **)(Object_t **)SZArrayLdElema(L_15, L_17)), L_18);
		if (!L_19)
		{
			goto IL_007d;
		}
	}
	{
		Int64U5BU5D_t1302* L_20 = (__this->___valueSlots_7);
		int32_t L_21 = V_1;
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, L_21);
		int32_t L_22 = L_21;
		return (*(int64_t*)(int64_t*)SZArrayLdElema(L_20, L_22));
	}

IL_007d:
	{
		LinkU5BU5D_t2191* L_23 = (__this->___linkSlots_5);
		int32_t L_24 = V_1;
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, L_24);
		int32_t L_25 = (((Link_t1399 *)(Link_t1399 *)SZArrayLdElema(L_23, L_24))->___Next_1);
		V_1 = L_25;
	}

IL_008f:
	{
		int32_t L_26 = V_1;
		if ((!(((uint32_t)L_26) == ((uint32_t)(-1)))))
		{
			goto IL_0042;
		}
	}
	{
		KeyNotFoundException_t1400 * L_27 = (KeyNotFoundException_t1400 *)il2cpp_codegen_object_new (InitializedTypeInfo(&KeyNotFoundException_t1400_il2cpp_TypeInfo));
		KeyNotFoundException__ctor_m7335(L_27, /*hidden argument*/&KeyNotFoundException__ctor_m7335_MethodInfo);
		il2cpp_codegen_raise_exception(L_27);
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m17640_gshared (Dictionary_2_t2974 * __this, Object_t * ___key, int64_t ___value, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		Object_t * L_0 = ___key;
		Object_t * L_1 = L_0;
		if (((Object_t *)L_1))
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t699 * L_2 = (ArgumentNullException_t699 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t699_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3455(L_2, (String_t*) &_stringLiteral342, /*hidden argument*/&ArgumentNullException__ctor_m3455_MethodInfo);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0013:
	{
		Object_t* L_3 = (__this->___hcp_12);
		Object_t * L_4 = ___key;
		NullCheck(L_3);
		int32_t L_5 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), L_3, L_4);
		V_0 = ((int32_t)((int32_t)L_5|(int32_t)((int32_t)-2147483648)));
		int32_t L_6 = V_0;
		Int32U5BU5D_t1029* L_7 = (__this->___table_4);
		NullCheck(L_7);
		V_1 = ((int32_t)((int32_t)((int32_t)((int32_t)L_6&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_7)->max_length)))));
		Int32U5BU5D_t1029* L_8 = (__this->___table_4);
		int32_t L_9 = V_1;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, L_9);
		int32_t L_10 = L_9;
		V_2 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_8, L_10))-(int32_t)1));
		V_3 = (-1);
		int32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)(-1))))
		{
			goto IL_0090;
		}
	}

IL_0048:
	{
		LinkU5BU5D_t2191* L_12 = (__this->___linkSlots_5);
		int32_t L_13 = V_2;
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, L_13);
		int32_t L_14 = (((Link_t1399 *)(Link_t1399 *)SZArrayLdElema(L_12, L_13))->___HashCode_0);
		int32_t L_15 = V_0;
		if ((!(((uint32_t)L_14) == ((uint32_t)L_15))))
		{
			goto IL_0078;
		}
	}
	{
		Object_t* L_16 = (__this->___hcp_12);
		ObjectU5BU5D_t269* L_17 = (__this->___keySlots_6);
		int32_t L_18 = V_2;
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, L_18);
		int32_t L_19 = L_18;
		Object_t * L_20 = ___key;
		NullCheck(L_16);
		bool L_21 = (bool)InterfaceFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 36), L_16, (*(Object_t **)(Object_t **)SZArrayLdElema(L_17, L_19)), L_20);
		if (!L_21)
		{
			goto IL_0078;
		}
	}
	{
		goto IL_0090;
	}

IL_0078:
	{
		int32_t L_22 = V_2;
		V_3 = L_22;
		LinkU5BU5D_t2191* L_23 = (__this->___linkSlots_5);
		int32_t L_24 = V_2;
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, L_24);
		int32_t L_25 = (((Link_t1399 *)(Link_t1399 *)SZArrayLdElema(L_23, L_24))->___Next_1);
		V_2 = L_25;
		int32_t L_26 = V_2;
		if ((!(((uint32_t)L_26) == ((uint32_t)(-1)))))
		{
			goto IL_0048;
		}
	}

IL_0090:
	{
		int32_t L_27 = V_2;
		if ((!(((uint32_t)L_27) == ((uint32_t)(-1)))))
		{
			goto IL_0148;
		}
	}
	{
		int32_t L_28 = (__this->___count_10);
		int32_t L_29 = ((int32_t)((int32_t)L_28+(int32_t)1));
		V_4 = L_29;
		__this->___count_10 = L_29;
		int32_t L_30 = V_4;
		int32_t L_31 = (__this->___threshold_11);
		if ((((int32_t)L_30) <= ((int32_t)L_31)))
		{
			goto IL_00c9;
		}
	}
	{
		(( void (*) (Dictionary_2_t2974 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 37)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 37));
		int32_t L_32 = V_0;
		Int32U5BU5D_t1029* L_33 = (__this->___table_4);
		NullCheck(L_33);
		V_1 = ((int32_t)((int32_t)((int32_t)((int32_t)L_32&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_33)->max_length)))));
	}

IL_00c9:
	{
		int32_t L_34 = (__this->___emptySlot_9);
		V_2 = L_34;
		int32_t L_35 = V_2;
		if ((!(((uint32_t)L_35) == ((uint32_t)(-1)))))
		{
			goto IL_00ea;
		}
	}
	{
		int32_t L_36 = (__this->___touchedSlots_8);
		int32_t L_37 = L_36;
		V_4 = L_37;
		__this->___touchedSlots_8 = ((int32_t)((int32_t)L_37+(int32_t)1));
		int32_t L_38 = V_4;
		V_2 = L_38;
		goto IL_0101;
	}

IL_00ea:
	{
		LinkU5BU5D_t2191* L_39 = (__this->___linkSlots_5);
		int32_t L_40 = V_2;
		NullCheck(L_39);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_39, L_40);
		int32_t L_41 = (((Link_t1399 *)(Link_t1399 *)SZArrayLdElema(L_39, L_40))->___Next_1);
		__this->___emptySlot_9 = L_41;
	}

IL_0101:
	{
		LinkU5BU5D_t2191* L_42 = (__this->___linkSlots_5);
		int32_t L_43 = V_2;
		NullCheck(L_42);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_42, L_43);
		Int32U5BU5D_t1029* L_44 = (__this->___table_4);
		int32_t L_45 = V_1;
		NullCheck(L_44);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_44, L_45);
		int32_t L_46 = L_45;
		((Link_t1399 *)(Link_t1399 *)SZArrayLdElema(L_42, L_43))->___Next_1 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_44, L_46))-(int32_t)1));
		Int32U5BU5D_t1029* L_47 = (__this->___table_4);
		int32_t L_48 = V_1;
		int32_t L_49 = V_2;
		NullCheck(L_47);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_47, L_48);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_47, L_48)) = (int32_t)((int32_t)((int32_t)L_49+(int32_t)1));
		LinkU5BU5D_t2191* L_50 = (__this->___linkSlots_5);
		int32_t L_51 = V_2;
		NullCheck(L_50);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_50, L_51);
		int32_t L_52 = V_0;
		((Link_t1399 *)(Link_t1399 *)SZArrayLdElema(L_50, L_51))->___HashCode_0 = L_52;
		ObjectU5BU5D_t269* L_53 = (__this->___keySlots_6);
		int32_t L_54 = V_2;
		Object_t * L_55 = ___key;
		NullCheck(L_53);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_53, L_54);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_53, L_54)) = (Object_t *)L_55;
		goto IL_0194;
	}

IL_0148:
	{
		int32_t L_56 = V_3;
		if ((((int32_t)L_56) == ((int32_t)(-1))))
		{
			goto IL_0194;
		}
	}
	{
		LinkU5BU5D_t2191* L_57 = (__this->___linkSlots_5);
		int32_t L_58 = V_3;
		NullCheck(L_57);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_57, L_58);
		LinkU5BU5D_t2191* L_59 = (__this->___linkSlots_5);
		int32_t L_60 = V_2;
		NullCheck(L_59);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_59, L_60);
		int32_t L_61 = (((Link_t1399 *)(Link_t1399 *)SZArrayLdElema(L_59, L_60))->___Next_1);
		((Link_t1399 *)(Link_t1399 *)SZArrayLdElema(L_57, L_58))->___Next_1 = L_61;
		LinkU5BU5D_t2191* L_62 = (__this->___linkSlots_5);
		int32_t L_63 = V_2;
		NullCheck(L_62);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_62, L_63);
		Int32U5BU5D_t1029* L_64 = (__this->___table_4);
		int32_t L_65 = V_1;
		NullCheck(L_64);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_64, L_65);
		int32_t L_66 = L_65;
		((Link_t1399 *)(Link_t1399 *)SZArrayLdElema(L_62, L_63))->___Next_1 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_64, L_66))-(int32_t)1));
		Int32U5BU5D_t1029* L_67 = (__this->___table_4);
		int32_t L_68 = V_1;
		int32_t L_69 = V_2;
		NullCheck(L_67);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_67, L_68);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_67, L_68)) = (int32_t)((int32_t)((int32_t)L_69+(int32_t)1));
	}

IL_0194:
	{
		Int64U5BU5D_t1302* L_70 = (__this->___valueSlots_7);
		int32_t L_71 = V_2;
		int64_t L_72 = ___value;
		NullCheck(L_70);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_70, L_71);
		*((int64_t*)(int64_t*)SZArrayLdElema(L_70, L_71)) = (int64_t)L_72;
		int32_t L_73 = (__this->___generation_14);
		__this->___generation_14 = ((int32_t)((int32_t)L_73+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern TypeInfo* EqualityComparer_1_t2360_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_Init_m17642_gshared (Dictionary_2_t2974 * __this, int32_t ___capacity, Object_t* ___hcp, MethodInfo* method)
{
	static bool Dictionary_2_Init_m17642_init;
	if (!Dictionary_2_Init_m17642_init)
	{
		EqualityComparer_1_t2360_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&EqualityComparer_1_t2360_0_0_0);
		Dictionary_2_Init_m17642_init = true;
	}
	Object_t* V_0 = {0};
	Dictionary_2_t2974 * G_B4_0 = {0};
	Dictionary_2_t2974 * G_B3_0 = {0};
	Object_t* G_B5_0 = {0};
	Dictionary_2_t2974 * G_B5_1 = {0};
	{
		int32_t L_0 = ___capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000f;
		}
	}
	{
		ArgumentOutOfRangeException_t703 * L_1 = (ArgumentOutOfRangeException_t703 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentOutOfRangeException_t703_il2cpp_TypeInfo));
		ArgumentOutOfRangeException__ctor_m4748(L_1, (String_t*) &_stringLiteral1307, /*hidden argument*/&ArgumentOutOfRangeException__ctor_m4748_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000f:
	{
		Object_t* L_2 = ___hcp;
		G_B3_0 = ((Dictionary_2_t2974 *)(__this));
		if (!L_2)
		{
			G_B4_0 = ((Dictionary_2_t2974 *)(__this));
			goto IL_0018;
		}
	}
	{
		Object_t* L_3 = ___hcp;
		V_0 = L_3;
		Object_t* L_4 = V_0;
		G_B5_0 = L_4;
		G_B5_1 = ((Dictionary_2_t2974 *)(G_B3_0));
		goto IL_001d;
	}

IL_0018:
	{
		IL2CPP_RUNTIME_CLASS_INIT(EqualityComparer_1_t2360_il2cpp_TypeInfo_var);
		EqualityComparer_1_t2360 * L_5 = (( EqualityComparer_1_t2360 * (*) (Object_t * /* static, unused */, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 38)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 38));
		G_B5_0 = ((Object_t*)(L_5));
		G_B5_1 = ((Dictionary_2_t2974 *)(G_B4_0));
	}

IL_001d:
	{
		NullCheck(G_B5_1);
		G_B5_1->___hcp_12 = G_B5_0;
		int32_t L_6 = ___capacity;
		if (L_6)
		{
			goto IL_002b;
		}
	}
	{
		___capacity = ((int32_t)10);
	}

IL_002b:
	{
		int32_t L_7 = ___capacity;
		___capacity = ((int32_t)((int32_t)(((int32_t)((float)((float)(((float)L_7))/(float)(0.9f)))))+(int32_t)1));
		int32_t L_8 = ___capacity;
		(( void (*) (Dictionary_2_t2974 *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 39)->method)(__this, L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 39));
		__this->___generation_14 = 0;
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::InitArrays(System.Int32)
extern TypeInfo* Int32U5BU5D_t1029_il2cpp_TypeInfo_var;
extern TypeInfo* LinkU5BU5D_t2191_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_InitArrays_m17644_gshared (Dictionary_2_t2974 * __this, int32_t ___size, MethodInfo* method)
{
	static bool Dictionary_2_InitArrays_m17644_init;
	if (!Dictionary_2_InitArrays_m17644_init)
	{
		Int32U5BU5D_t1029_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Int32U5BU5D_t1029_0_0_0);
		LinkU5BU5D_t2191_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&LinkU5BU5D_t2191_0_0_0);
		Dictionary_2_InitArrays_m17644_init = true;
	}
	{
		int32_t L_0 = ___size;
		__this->___table_4 = ((Int32U5BU5D_t1029*)SZArrayNew(Int32U5BU5D_t1029_il2cpp_TypeInfo_var, L_0));
		int32_t L_1 = ___size;
		__this->___linkSlots_5 = ((LinkU5BU5D_t2191*)SZArrayNew(LinkU5BU5D_t2191_il2cpp_TypeInfo_var, L_1));
		__this->___emptySlot_9 = (-1);
		int32_t L_2 = ___size;
		__this->___keySlots_6 = ((ObjectU5BU5D_t269*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 40), L_2));
		int32_t L_3 = ___size;
		__this->___valueSlots_7 = ((Int64U5BU5D_t1302*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 41), L_3));
		__this->___touchedSlots_8 = 0;
		Int32U5BU5D_t1029* L_4 = (__this->___table_4);
		NullCheck(L_4);
		__this->___threshold_11 = (((int32_t)((float)((float)(((float)(((int32_t)(((Array_t *)L_4)->max_length)))))*(float)(0.9f)))));
		int32_t L_5 = (__this->___threshold_11);
		if (L_5)
		{
			goto IL_006e;
		}
	}
	{
		Int32U5BU5D_t1029* L_6 = (__this->___table_4);
		NullCheck(L_6);
		if ((((int32_t)(((int32_t)(((Array_t *)L_6)->max_length)))) <= ((int32_t)0)))
		{
			goto IL_006e;
		}
	}
	{
		__this->___threshold_11 = 1;
	}

IL_006e:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m17646_gshared (Dictionary_2_t2974 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t699 * L_1 = (ArgumentNullException_t699 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t699_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3455(L_1, (String_t*) &_stringLiteral252, /*hidden argument*/&ArgumentNullException__ctor_m3455_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		int32_t L_2 = ___index;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		ArgumentOutOfRangeException_t703 * L_3 = (ArgumentOutOfRangeException_t703 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentOutOfRangeException_t703_il2cpp_TypeInfo));
		ArgumentOutOfRangeException__ctor_m4748(L_3, (String_t*) &_stringLiteral345, /*hidden argument*/&ArgumentOutOfRangeException__ctor_m4748_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001d:
	{
		int32_t L_4 = ___index;
		Array_t * L_5 = ___array;
		NullCheck(L_5);
		int32_t L_6 = Array_get_Length_m4744(L_5, /*hidden argument*/&Array_get_Length_m4744_MethodInfo);
		if ((((int32_t)L_4) <= ((int32_t)L_6)))
		{
			goto IL_0031;
		}
	}
	{
		ArgumentException_t318 * L_7 = (ArgumentException_t318 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t318_il2cpp_TypeInfo));
		ArgumentException__ctor_m1847(L_7, (String_t*) &_stringLiteral1308, /*hidden argument*/&ArgumentException__ctor_m1847_MethodInfo);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_0031:
	{
		Array_t * L_8 = ___array;
		NullCheck(L_8);
		int32_t L_9 = Array_get_Length_m4744(L_8, /*hidden argument*/&Array_get_Length_m4744_MethodInfo);
		int32_t L_10 = ___index;
		int32_t L_11 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 42), __this);
		if ((((int32_t)((int32_t)((int32_t)L_9-(int32_t)L_10))) >= ((int32_t)L_11)))
		{
			goto IL_004c;
		}
	}
	{
		ArgumentException_t318 * L_12 = (ArgumentException_t318 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t318_il2cpp_TypeInfo));
		ArgumentException__ctor_m1847(L_12, (String_t*) &_stringLiteral1309, /*hidden argument*/&ArgumentException__ctor_m1847_MethodInfo);
		il2cpp_codegen_raise_exception(L_12);
	}

IL_004c:
	{
		return;
	}
}
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2975  Dictionary_2_make_pair_m17648_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int64_t ___value, MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		int64_t L_1 = ___value;
		KeyValuePair_2_t2975  L_2 = {0};
		(( void (*) (KeyValuePair_2_t2975 *, Object_t *, int64_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 44)->method)(&L_2, L_0, L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 44));
		return L_2;
	}
}
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::pick_key(TKey,TValue)
extern Il2CppGenericMethod Dictionary_2_pick_key_m17650_GenericMethod;
extern "C" Object_t * Dictionary_2_pick_key_m17650_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int64_t ___value, MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		return L_0;
	}
}
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::pick_value(TKey,TValue)
extern Il2CppGenericMethod Dictionary_2_pick_value_m17652_GenericMethod;
extern "C" int64_t Dictionary_2_pick_value_m17652_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int64_t ___value, MethodInfo* method)
{
	{
		int64_t L_0 = ___value;
		return L_0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m17654_gshared (Dictionary_2_t2974 * __this, KeyValuePair_2U5BU5D_t3546* ___array, int32_t ___index, MethodInfo* method)
{
	{
		KeyValuePair_2U5BU5D_t3546* L_0 = ___array;
		int32_t L_1 = ___index;
		(( void (*) (Dictionary_2_t2974 *, Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21)->method)(__this, (Array_t *)(Array_t *)L_0, L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21));
		KeyValuePair_2U5BU5D_t3546* L_2 = ___array;
		int32_t L_3 = ___index;
		IntPtr_t L_4 = { IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27) };
		Transform_1_t2987 * L_5 = (Transform_1_t2987 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 28));
		(( void (*) (Transform_1_t2987 *, Object_t *, IntPtr_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29)->method)(L_5, NULL, L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29));
		(( void (*) (Dictionary_2_t2974 *, KeyValuePair_2U5BU5D_t3546*, int32_t, Transform_1_t2987 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 45)->method)(__this, L_2, L_3, L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 45));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Resize()
extern TypeInfo* Int32U5BU5D_t1029_il2cpp_TypeInfo_var;
extern TypeInfo* LinkU5BU5D_t2191_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_Resize_m17656_gshared (Dictionary_2_t2974 * __this, MethodInfo* method)
{
	static bool Dictionary_2_Resize_m17656_init;
	if (!Dictionary_2_Resize_m17656_init)
	{
		Int32U5BU5D_t1029_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Int32U5BU5D_t1029_0_0_0);
		LinkU5BU5D_t2191_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&LinkU5BU5D_t2191_0_0_0);
		Dictionary_2_Resize_m17656_init = true;
	}
	int32_t V_0 = 0;
	Int32U5BU5D_t1029* V_1 = {0};
	LinkU5BU5D_t2191* V_2 = {0};
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	ObjectU5BU5D_t269* V_7 = {0};
	Int64U5BU5D_t1302* V_8 = {0};
	int32_t V_9 = 0;
	{
		Int32U5BU5D_t1029* L_0 = (__this->___table_4);
		NullCheck(L_0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Hashtable_t911_il2cpp_TypeInfo));
		int32_t L_1 = Hashtable_ToPrime_m7502(NULL /*static, unused*/, ((int32_t)((int32_t)((int32_t)((int32_t)(((int32_t)(((Array_t *)L_0)->max_length)))<<(int32_t)1))|(int32_t)1)), /*hidden argument*/&Hashtable_ToPrime_m7502_MethodInfo);
		V_0 = L_1;
		int32_t L_2 = V_0;
		V_1 = ((Int32U5BU5D_t1029*)SZArrayNew(Int32U5BU5D_t1029_il2cpp_TypeInfo_var, L_2));
		int32_t L_3 = V_0;
		V_2 = ((LinkU5BU5D_t2191*)SZArrayNew(LinkU5BU5D_t2191_il2cpp_TypeInfo_var, L_3));
		V_3 = 0;
		goto IL_00ab;
	}

IL_0027:
	{
		Int32U5BU5D_t1029* L_4 = (__this->___table_4);
		int32_t L_5 = V_3;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		int32_t L_6 = L_5;
		V_4 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_4, L_6))-(int32_t)1));
		goto IL_00a2;
	}

IL_0035:
	{
		LinkU5BU5D_t2191* L_7 = V_2;
		int32_t L_8 = V_4;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		Object_t* L_9 = (__this->___hcp_12);
		ObjectU5BU5D_t269* L_10 = (__this->___keySlots_6);
		int32_t L_11 = V_4;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = L_11;
		NullCheck(L_9);
		int32_t L_13 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), L_9, (*(Object_t **)(Object_t **)SZArrayLdElema(L_10, L_12)));
		int32_t L_14 = ((int32_t)((int32_t)L_13|(int32_t)((int32_t)-2147483648)));
		V_9 = L_14;
		((Link_t1399 *)(Link_t1399 *)SZArrayLdElema(L_7, L_8))->___HashCode_0 = L_14;
		int32_t L_15 = V_9;
		V_5 = L_15;
		int32_t L_16 = V_5;
		int32_t L_17 = V_0;
		V_6 = ((int32_t)((int32_t)((int32_t)((int32_t)L_16&(int32_t)((int32_t)2147483647)))%(int32_t)L_17));
		LinkU5BU5D_t2191* L_18 = V_2;
		int32_t L_19 = V_4;
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, L_19);
		Int32U5BU5D_t1029* L_20 = V_1;
		int32_t L_21 = V_6;
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, L_21);
		int32_t L_22 = L_21;
		((Link_t1399 *)(Link_t1399 *)SZArrayLdElema(L_18, L_19))->___Next_1 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_20, L_22))-(int32_t)1));
		Int32U5BU5D_t1029* L_23 = V_1;
		int32_t L_24 = V_6;
		int32_t L_25 = V_4;
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, L_24);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_23, L_24)) = (int32_t)((int32_t)((int32_t)L_25+(int32_t)1));
		LinkU5BU5D_t2191* L_26 = (__this->___linkSlots_5);
		int32_t L_27 = V_4;
		NullCheck(L_26);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_26, L_27);
		int32_t L_28 = (((Link_t1399 *)(Link_t1399 *)SZArrayLdElema(L_26, L_27))->___Next_1);
		V_4 = L_28;
	}

IL_00a2:
	{
		int32_t L_29 = V_4;
		if ((!(((uint32_t)L_29) == ((uint32_t)(-1)))))
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_30 = V_3;
		V_3 = ((int32_t)((int32_t)L_30+(int32_t)1));
	}

IL_00ab:
	{
		int32_t L_31 = V_3;
		Int32U5BU5D_t1029* L_32 = (__this->___table_4);
		NullCheck(L_32);
		if ((((int32_t)L_31) < ((int32_t)(((int32_t)(((Array_t *)L_32)->max_length))))))
		{
			goto IL_0027;
		}
	}
	{
		Int32U5BU5D_t1029* L_33 = V_1;
		__this->___table_4 = L_33;
		LinkU5BU5D_t2191* L_34 = V_2;
		__this->___linkSlots_5 = L_34;
		int32_t L_35 = V_0;
		V_7 = ((ObjectU5BU5D_t269*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 40), L_35));
		int32_t L_36 = V_0;
		V_8 = ((Int64U5BU5D_t1302*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 41), L_36));
		ObjectU5BU5D_t269* L_37 = (__this->___keySlots_6);
		ObjectU5BU5D_t269* L_38 = V_7;
		int32_t L_39 = (__this->___touchedSlots_8);
		Array_Copy_m6718(NULL /*static, unused*/, (Array_t *)(Array_t *)L_37, 0, (Array_t *)(Array_t *)L_38, 0, L_39, /*hidden argument*/&Array_Copy_m6718_MethodInfo);
		Int64U5BU5D_t1302* L_40 = (__this->___valueSlots_7);
		Int64U5BU5D_t1302* L_41 = V_8;
		int32_t L_42 = (__this->___touchedSlots_8);
		Array_Copy_m6718(NULL /*static, unused*/, (Array_t *)(Array_t *)L_40, 0, (Array_t *)(Array_t *)L_41, 0, L_42, /*hidden argument*/&Array_Copy_m6718_MethodInfo);
		ObjectU5BU5D_t269* L_43 = V_7;
		__this->___keySlots_6 = L_43;
		Int64U5BU5D_t1302* L_44 = V_8;
		__this->___valueSlots_7 = L_44;
		int32_t L_45 = V_0;
		__this->___threshold_11 = (((int32_t)((float)((float)(((float)L_45))*(float)(0.9f)))));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m17658_gshared (Dictionary_2_t2974 * __this, Object_t * ___key, int64_t ___value, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		Object_t * L_0 = ___key;
		Object_t * L_1 = L_0;
		if (((Object_t *)L_1))
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t699 * L_2 = (ArgumentNullException_t699 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t699_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3455(L_2, (String_t*) &_stringLiteral342, /*hidden argument*/&ArgumentNullException__ctor_m3455_MethodInfo);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0013:
	{
		Object_t* L_3 = (__this->___hcp_12);
		Object_t * L_4 = ___key;
		NullCheck(L_3);
		int32_t L_5 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), L_3, L_4);
		V_0 = ((int32_t)((int32_t)L_5|(int32_t)((int32_t)-2147483648)));
		int32_t L_6 = V_0;
		Int32U5BU5D_t1029* L_7 = (__this->___table_4);
		NullCheck(L_7);
		V_1 = ((int32_t)((int32_t)((int32_t)((int32_t)L_6&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_7)->max_length)))));
		Int32U5BU5D_t1029* L_8 = (__this->___table_4);
		int32_t L_9 = V_1;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, L_9);
		int32_t L_10 = L_9;
		V_2 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_8, L_10))-(int32_t)1));
		goto IL_008f;
	}

IL_0044:
	{
		LinkU5BU5D_t2191* L_11 = (__this->___linkSlots_5);
		int32_t L_12 = V_2;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, L_12);
		int32_t L_13 = (((Link_t1399 *)(Link_t1399 *)SZArrayLdElema(L_11, L_12))->___HashCode_0);
		int32_t L_14 = V_0;
		if ((!(((uint32_t)L_13) == ((uint32_t)L_14))))
		{
			goto IL_007d;
		}
	}
	{
		Object_t* L_15 = (__this->___hcp_12);
		ObjectU5BU5D_t269* L_16 = (__this->___keySlots_6);
		int32_t L_17 = V_2;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, L_17);
		int32_t L_18 = L_17;
		Object_t * L_19 = ___key;
		NullCheck(L_15);
		bool L_20 = (bool)InterfaceFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 36), L_15, (*(Object_t **)(Object_t **)SZArrayLdElema(L_16, L_18)), L_19);
		if (!L_20)
		{
			goto IL_007d;
		}
	}
	{
		ArgumentException_t318 * L_21 = (ArgumentException_t318 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t318_il2cpp_TypeInfo));
		ArgumentException__ctor_m1847(L_21, (String_t*) &_stringLiteral1311, /*hidden argument*/&ArgumentException__ctor_m1847_MethodInfo);
		il2cpp_codegen_raise_exception(L_21);
	}

IL_007d:
	{
		LinkU5BU5D_t2191* L_22 = (__this->___linkSlots_5);
		int32_t L_23 = V_2;
		NullCheck(L_22);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_22, L_23);
		int32_t L_24 = (((Link_t1399 *)(Link_t1399 *)SZArrayLdElema(L_22, L_23))->___Next_1);
		V_2 = L_24;
	}

IL_008f:
	{
		int32_t L_25 = V_2;
		if ((!(((uint32_t)L_25) == ((uint32_t)(-1)))))
		{
			goto IL_0044;
		}
	}
	{
		int32_t L_26 = (__this->___count_10);
		int32_t L_27 = ((int32_t)((int32_t)L_26+(int32_t)1));
		V_3 = L_27;
		__this->___count_10 = L_27;
		int32_t L_28 = V_3;
		int32_t L_29 = (__this->___threshold_11);
		if ((((int32_t)L_28) <= ((int32_t)L_29)))
		{
			goto IL_00c3;
		}
	}
	{
		(( void (*) (Dictionary_2_t2974 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 37)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 37));
		int32_t L_30 = V_0;
		Int32U5BU5D_t1029* L_31 = (__this->___table_4);
		NullCheck(L_31);
		V_1 = ((int32_t)((int32_t)((int32_t)((int32_t)L_30&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_31)->max_length)))));
	}

IL_00c3:
	{
		int32_t L_32 = (__this->___emptySlot_9);
		V_2 = L_32;
		int32_t L_33 = V_2;
		if ((!(((uint32_t)L_33) == ((uint32_t)(-1)))))
		{
			goto IL_00e2;
		}
	}
	{
		int32_t L_34 = (__this->___touchedSlots_8);
		int32_t L_35 = L_34;
		V_3 = L_35;
		__this->___touchedSlots_8 = ((int32_t)((int32_t)L_35+(int32_t)1));
		int32_t L_36 = V_3;
		V_2 = L_36;
		goto IL_00f9;
	}

IL_00e2:
	{
		LinkU5BU5D_t2191* L_37 = (__this->___linkSlots_5);
		int32_t L_38 = V_2;
		NullCheck(L_37);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_37, L_38);
		int32_t L_39 = (((Link_t1399 *)(Link_t1399 *)SZArrayLdElema(L_37, L_38))->___Next_1);
		__this->___emptySlot_9 = L_39;
	}

IL_00f9:
	{
		LinkU5BU5D_t2191* L_40 = (__this->___linkSlots_5);
		int32_t L_41 = V_2;
		NullCheck(L_40);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_40, L_41);
		int32_t L_42 = V_0;
		((Link_t1399 *)(Link_t1399 *)SZArrayLdElema(L_40, L_41))->___HashCode_0 = L_42;
		LinkU5BU5D_t2191* L_43 = (__this->___linkSlots_5);
		int32_t L_44 = V_2;
		NullCheck(L_43);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_43, L_44);
		Int32U5BU5D_t1029* L_45 = (__this->___table_4);
		int32_t L_46 = V_1;
		NullCheck(L_45);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_45, L_46);
		int32_t L_47 = L_46;
		((Link_t1399 *)(Link_t1399 *)SZArrayLdElema(L_43, L_44))->___Next_1 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_45, L_47))-(int32_t)1));
		Int32U5BU5D_t1029* L_48 = (__this->___table_4);
		int32_t L_49 = V_1;
		int32_t L_50 = V_2;
		NullCheck(L_48);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_48, L_49);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_48, L_49)) = (int32_t)((int32_t)((int32_t)L_50+(int32_t)1));
		ObjectU5BU5D_t269* L_51 = (__this->___keySlots_6);
		int32_t L_52 = V_2;
		Object_t * L_53 = ___key;
		NullCheck(L_51);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_51, L_52);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_51, L_52)) = (Object_t *)L_53;
		Int64U5BU5D_t1302* L_54 = (__this->___valueSlots_7);
		int32_t L_55 = V_2;
		int64_t L_56 = ___value;
		NullCheck(L_54);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_54, L_55);
		*((int64_t*)(int64_t*)SZArrayLdElema(L_54, L_55)) = (int64_t)L_56;
		int32_t L_57 = (__this->___generation_14);
		__this->___generation_14 = ((int32_t)((int32_t)L_57+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Clear()
extern Il2CppGenericMethod Dictionary_2_Clear_m17660_GenericMethod;
extern "C" void Dictionary_2_Clear_m17660_gshared (Dictionary_2_t2974 * __this, MethodInfo* method)
{
	{
		__this->___count_10 = 0;
		Int32U5BU5D_t1029* L_0 = (__this->___table_4);
		Int32U5BU5D_t1029* L_1 = (__this->___table_4);
		NullCheck(L_1);
		Array_Clear_m5899(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, 0, (((int32_t)(((Array_t *)L_1)->max_length))), /*hidden argument*/&Array_Clear_m5899_MethodInfo);
		ObjectU5BU5D_t269* L_2 = (__this->___keySlots_6);
		ObjectU5BU5D_t269* L_3 = (__this->___keySlots_6);
		NullCheck(L_3);
		Array_Clear_m5899(NULL /*static, unused*/, (Array_t *)(Array_t *)L_2, 0, (((int32_t)(((Array_t *)L_3)->max_length))), /*hidden argument*/&Array_Clear_m5899_MethodInfo);
		Int64U5BU5D_t1302* L_4 = (__this->___valueSlots_7);
		Int64U5BU5D_t1302* L_5 = (__this->___valueSlots_7);
		NullCheck(L_5);
		Array_Clear_m5899(NULL /*static, unused*/, (Array_t *)(Array_t *)L_4, 0, (((int32_t)(((Array_t *)L_5)->max_length))), /*hidden argument*/&Array_Clear_m5899_MethodInfo);
		LinkU5BU5D_t2191* L_6 = (__this->___linkSlots_5);
		LinkU5BU5D_t2191* L_7 = (__this->___linkSlots_5);
		NullCheck(L_7);
		Array_Clear_m5899(NULL /*static, unused*/, (Array_t *)(Array_t *)L_6, 0, (((int32_t)(((Array_t *)L_7)->max_length))), /*hidden argument*/&Array_Clear_m5899_MethodInfo);
		__this->___emptySlot_9 = (-1);
		__this->___touchedSlots_8 = 0;
		int32_t L_8 = (__this->___generation_14);
		__this->___generation_14 = ((int32_t)((int32_t)L_8+(int32_t)1));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m17662_gshared (Dictionary_2_t2974 * __this, Object_t * ___key, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Object_t * L_0 = ___key;
		Object_t * L_1 = L_0;
		if (((Object_t *)L_1))
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t699 * L_2 = (ArgumentNullException_t699 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t699_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3455(L_2, (String_t*) &_stringLiteral342, /*hidden argument*/&ArgumentNullException__ctor_m3455_MethodInfo);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0013:
	{
		Object_t* L_3 = (__this->___hcp_12);
		Object_t * L_4 = ___key;
		NullCheck(L_3);
		int32_t L_5 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), L_3, L_4);
		V_0 = ((int32_t)((int32_t)L_5|(int32_t)((int32_t)-2147483648)));
		Int32U5BU5D_t1029* L_6 = (__this->___table_4);
		int32_t L_7 = V_0;
		Int32U5BU5D_t1029* L_8 = (__this->___table_4);
		NullCheck(L_8);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, ((int32_t)((int32_t)((int32_t)((int32_t)L_7&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_8)->max_length))))));
		int32_t L_9 = ((int32_t)((int32_t)((int32_t)((int32_t)L_7&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_8)->max_length)))));
		V_1 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_6, L_9))-(int32_t)1));
		goto IL_0084;
	}

IL_0042:
	{
		LinkU5BU5D_t2191* L_10 = (__this->___linkSlots_5);
		int32_t L_11 = V_1;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = (((Link_t1399 *)(Link_t1399 *)SZArrayLdElema(L_10, L_11))->___HashCode_0);
		int32_t L_13 = V_0;
		if ((!(((uint32_t)L_12) == ((uint32_t)L_13))))
		{
			goto IL_0072;
		}
	}
	{
		Object_t* L_14 = (__this->___hcp_12);
		ObjectU5BU5D_t269* L_15 = (__this->___keySlots_6);
		int32_t L_16 = V_1;
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, L_16);
		int32_t L_17 = L_16;
		Object_t * L_18 = ___key;
		NullCheck(L_14);
		bool L_19 = (bool)InterfaceFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 36), L_14, (*(Object_t **)(Object_t **)SZArrayLdElema(L_15, L_17)), L_18);
		if (!L_19)
		{
			goto IL_0072;
		}
	}
	{
		return 1;
	}

IL_0072:
	{
		LinkU5BU5D_t2191* L_20 = (__this->___linkSlots_5);
		int32_t L_21 = V_1;
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, L_21);
		int32_t L_22 = (((Link_t1399 *)(Link_t1399 *)SZArrayLdElema(L_20, L_21))->___Next_1);
		V_1 = L_22;
	}

IL_0084:
	{
		int32_t L_23 = V_1;
		if ((!(((uint32_t)L_23) == ((uint32_t)(-1)))))
		{
			goto IL_0042;
		}
	}
	{
		return 0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ContainsValue(TValue)
extern Il2CppGenericMethod Dictionary_2_ContainsValue_m17664_GenericMethod;
extern TypeInfo* EqualityComparer_1_t2989_il2cpp_TypeInfo_var;
extern "C" bool Dictionary_2_ContainsValue_m17664_gshared (Dictionary_2_t2974 * __this, int64_t ___value, MethodInfo* method)
{
	static bool Dictionary_2_ContainsValue_m17664_init;
	if (!Dictionary_2_ContainsValue_m17664_init)
	{
		EqualityComparer_1_t2989_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&EqualityComparer_1_t2989_0_0_0);
		Dictionary_2_ContainsValue_m17664_init = true;
	}
	Object_t* V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(EqualityComparer_1_t2989_il2cpp_TypeInfo_var);
		EqualityComparer_1_t2989 * L_0 = (( EqualityComparer_1_t2989 * (*) (Object_t * /* static, unused */, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 46)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 46));
		V_0 = L_0;
		V_1 = 0;
		goto IL_0048;
	}

IL_000a:
	{
		Int32U5BU5D_t1029* L_1 = (__this->___table_4);
		int32_t L_2 = V_1;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		int32_t L_3 = L_2;
		V_2 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_1, L_3))-(int32_t)1));
		goto IL_0040;
	}

IL_0017:
	{
		Object_t* L_4 = V_0;
		Int64U5BU5D_t1302* L_5 = (__this->___valueSlots_7);
		int32_t L_6 = V_2;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = L_6;
		int64_t L_8 = ___value;
		NullCheck(L_4);
		bool L_9 = (bool)InterfaceFuncInvoker2< bool, int64_t, int64_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 47), L_4, (*(int64_t*)(int64_t*)SZArrayLdElema(L_5, L_7)), L_8);
		if (!L_9)
		{
			goto IL_002e;
		}
	}
	{
		return 1;
	}

IL_002e:
	{
		LinkU5BU5D_t2191* L_10 = (__this->___linkSlots_5);
		int32_t L_11 = V_2;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = (((Link_t1399 *)(Link_t1399 *)SZArrayLdElema(L_10, L_11))->___Next_1);
		V_2 = L_12;
	}

IL_0040:
	{
		int32_t L_13 = V_2;
		if ((!(((uint32_t)L_13) == ((uint32_t)(-1)))))
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_14 = V_1;
		V_1 = ((int32_t)((int32_t)L_14+(int32_t)1));
	}

IL_0048:
	{
		int32_t L_15 = V_1;
		Int32U5BU5D_t1029* L_16 = (__this->___table_4);
		NullCheck(L_16);
		if ((((int32_t)L_15) < ((int32_t)(((int32_t)(((Array_t *)L_16)->max_length))))))
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern Il2CppGenericMethod Dictionary_2_GetObjectData_m17666_GenericMethod;
extern "C" void Dictionary_2_GetObjectData_m17666_gshared (Dictionary_2_t2974 * __this, SerializationInfo_t653 * ___info, StreamingContext_t654  ___context, MethodInfo* method)
{
	KeyValuePair_2U5BU5D_t3546* V_0 = {0};
	{
		SerializationInfo_t653 * L_0 = ___info;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t699 * L_1 = (ArgumentNullException_t699 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t699_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3455(L_1, (String_t*) &_stringLiteral352, /*hidden argument*/&ArgumentNullException__ctor_m3455_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		SerializationInfo_t653 * L_2 = ___info;
		int32_t L_3 = (__this->___generation_14);
		NullCheck(L_2);
		SerializationInfo_AddValue_m4757(L_2, (String_t*) &_stringLiteral354, L_3, /*hidden argument*/&SerializationInfo_AddValue_m4757_MethodInfo);
		SerializationInfo_t653 * L_4 = ___info;
		Object_t* L_5 = (__this->___hcp_12);
		NullCheck(L_4);
		SerializationInfo_AddValue_m4770(L_4, (String_t*) &_stringLiteral356, L_5, /*hidden argument*/&SerializationInfo_AddValue_m4770_MethodInfo);
		V_0 = (KeyValuePair_2U5BU5D_t3546*)NULL;
		int32_t L_6 = (__this->___count_10);
		if ((((int32_t)L_6) <= ((int32_t)0)))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_7 = (__this->___count_10);
		V_0 = ((KeyValuePair_2U5BU5D_t3546*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 48), L_7));
		KeyValuePair_2U5BU5D_t3546* L_8 = V_0;
		(( void (*) (Dictionary_2_t2974 *, KeyValuePair_2U5BU5D_t3546*, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)(__this, L_8, 0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
	}

IL_004f:
	{
		SerializationInfo_t653 * L_9 = ___info;
		Int32U5BU5D_t1029* L_10 = (__this->___table_4);
		NullCheck(L_10);
		NullCheck(L_9);
		SerializationInfo_AddValue_m4757(L_9, (String_t*) &_stringLiteral1312, (((int32_t)(((Array_t *)L_10)->max_length))), /*hidden argument*/&SerializationInfo_AddValue_m4757_MethodInfo);
		SerializationInfo_t653 * L_11 = ___info;
		KeyValuePair_2U5BU5D_t3546* L_12 = V_0;
		NullCheck(L_11);
		SerializationInfo_AddValue_m4770(L_11, (String_t*) &_stringLiteral1313, (Object_t *)(Object_t *)L_12, /*hidden argument*/&SerializationInfo_AddValue_m4770_MethodInfo);
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::OnDeserialization(System.Object)
extern Il2CppGenericMethod Dictionary_2_OnDeserialization_m17668_GenericMethod;
extern "C" void Dictionary_2_OnDeserialization_m17668_gshared (Dictionary_2_t2974 * __this, Object_t * ___sender, MethodInfo* method)
{
	int32_t V_0 = 0;
	KeyValuePair_2U5BU5D_t3546* V_1 = {0};
	int32_t V_2 = 0;
	{
		SerializationInfo_t653 * L_0 = (__this->___serialization_info_13);
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		SerializationInfo_t653 * L_1 = (__this->___serialization_info_13);
		NullCheck(L_1);
		int32_t L_2 = SerializationInfo_GetInt32_m4769(L_1, (String_t*) &_stringLiteral354, /*hidden argument*/&SerializationInfo_GetInt32_m4769_MethodInfo);
		__this->___generation_14 = L_2;
		SerializationInfo_t653 * L_3 = (__this->___serialization_info_13);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_4 = Type_GetTypeFromHandle_m1488(NULL /*static, unused*/, LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 49)), /*hidden argument*/&Type_GetTypeFromHandle_m1488_MethodInfo);
		NullCheck(L_3);
		Object_t * L_5 = SerializationInfo_GetValue_m4758(L_3, (String_t*) &_stringLiteral356, L_4, /*hidden argument*/&SerializationInfo_GetValue_m4758_MethodInfo);
		__this->___hcp_12 = ((Object_t*)Castclass(L_5, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 50)));
		SerializationInfo_t653 * L_6 = (__this->___serialization_info_13);
		NullCheck(L_6);
		int32_t L_7 = SerializationInfo_GetInt32_m4769(L_6, (String_t*) &_stringLiteral1312, /*hidden argument*/&SerializationInfo_GetInt32_m4769_MethodInfo);
		V_0 = L_7;
		SerializationInfo_t653 * L_8 = (__this->___serialization_info_13);
		Type_t * L_9 = Type_GetTypeFromHandle_m1488(NULL /*static, unused*/, LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 51)), /*hidden argument*/&Type_GetTypeFromHandle_m1488_MethodInfo);
		NullCheck(L_8);
		Object_t * L_10 = SerializationInfo_GetValue_m4758(L_8, (String_t*) &_stringLiteral1313, L_9, /*hidden argument*/&SerializationInfo_GetValue_m4758_MethodInfo);
		V_1 = ((KeyValuePair_2U5BU5D_t3546*)Castclass(L_10, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 20)));
		int32_t L_11 = V_0;
		if ((((int32_t)L_11) >= ((int32_t)((int32_t)10))))
		{
			goto IL_007d;
		}
	}
	{
		V_0 = ((int32_t)10);
	}

IL_007d:
	{
		int32_t L_12 = V_0;
		(( void (*) (Dictionary_2_t2974 *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 39)->method)(__this, L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 39));
		__this->___count_10 = 0;
		KeyValuePair_2U5BU5D_t3546* L_13 = V_1;
		if (!L_13)
		{
			goto IL_00ba;
		}
	}
	{
		V_2 = 0;
		goto IL_00b4;
	}

IL_0092:
	{
		KeyValuePair_2U5BU5D_t3546* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, L_15);
		Object_t * L_16 = (( Object_t * (*) (KeyValuePair_2_t2975 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(((KeyValuePair_2_t2975 *)(KeyValuePair_2_t2975 *)SZArrayLdElema(L_14, L_15)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		KeyValuePair_2U5BU5D_t3546* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, L_18);
		int64_t L_19 = (( int64_t (*) (KeyValuePair_2_t2975 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)(((KeyValuePair_2_t2975 *)(KeyValuePair_2_t2975 *)SZArrayLdElema(L_17, L_18)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		VirtActionInvoker2< Object_t *, int64_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), __this, L_16, L_19);
		int32_t L_20 = V_2;
		V_2 = ((int32_t)((int32_t)L_20+(int32_t)1));
	}

IL_00b4:
	{
		int32_t L_21 = V_2;
		KeyValuePair_2U5BU5D_t3546* L_22 = V_1;
		NullCheck(L_22);
		if ((((int32_t)L_21) < ((int32_t)(((int32_t)(((Array_t *)L_22)->max_length))))))
		{
			goto IL_0092;
		}
	}

IL_00ba:
	{
		int32_t L_23 = (__this->___generation_14);
		__this->___generation_14 = ((int32_t)((int32_t)L_23+(int32_t)1));
		__this->___serialization_info_13 = (SerializationInfo_t653 *)NULL;
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m17670_gshared (Dictionary_2_t2974 * __this, Object_t * ___key, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Object_t * V_4 = {0};
	int64_t V_5 = 0;
	{
		Object_t * L_0 = ___key;
		Object_t * L_1 = L_0;
		if (((Object_t *)L_1))
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t699 * L_2 = (ArgumentNullException_t699 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t699_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3455(L_2, (String_t*) &_stringLiteral342, /*hidden argument*/&ArgumentNullException__ctor_m3455_MethodInfo);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0013:
	{
		Object_t* L_3 = (__this->___hcp_12);
		Object_t * L_4 = ___key;
		NullCheck(L_3);
		int32_t L_5 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), L_3, L_4);
		V_0 = ((int32_t)((int32_t)L_5|(int32_t)((int32_t)-2147483648)));
		int32_t L_6 = V_0;
		Int32U5BU5D_t1029* L_7 = (__this->___table_4);
		NullCheck(L_7);
		V_1 = ((int32_t)((int32_t)((int32_t)((int32_t)L_6&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_7)->max_length)))));
		Int32U5BU5D_t1029* L_8 = (__this->___table_4);
		int32_t L_9 = V_1;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, L_9);
		int32_t L_10 = L_9;
		V_2 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_8, L_10))-(int32_t)1));
		int32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) == ((uint32_t)(-1)))))
		{
			goto IL_0048;
		}
	}
	{
		return 0;
	}

IL_0048:
	{
		V_3 = (-1);
	}

IL_004a:
	{
		LinkU5BU5D_t2191* L_12 = (__this->___linkSlots_5);
		int32_t L_13 = V_2;
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, L_13);
		int32_t L_14 = (((Link_t1399 *)(Link_t1399 *)SZArrayLdElema(L_12, L_13))->___HashCode_0);
		int32_t L_15 = V_0;
		if ((!(((uint32_t)L_14) == ((uint32_t)L_15))))
		{
			goto IL_007a;
		}
	}
	{
		Object_t* L_16 = (__this->___hcp_12);
		ObjectU5BU5D_t269* L_17 = (__this->___keySlots_6);
		int32_t L_18 = V_2;
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, L_18);
		int32_t L_19 = L_18;
		Object_t * L_20 = ___key;
		NullCheck(L_16);
		bool L_21 = (bool)InterfaceFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 36), L_16, (*(Object_t **)(Object_t **)SZArrayLdElema(L_17, L_19)), L_20);
		if (!L_21)
		{
			goto IL_007a;
		}
	}
	{
		goto IL_0092;
	}

IL_007a:
	{
		int32_t L_22 = V_2;
		V_3 = L_22;
		LinkU5BU5D_t2191* L_23 = (__this->___linkSlots_5);
		int32_t L_24 = V_2;
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, L_24);
		int32_t L_25 = (((Link_t1399 *)(Link_t1399 *)SZArrayLdElema(L_23, L_24))->___Next_1);
		V_2 = L_25;
		int32_t L_26 = V_2;
		if ((!(((uint32_t)L_26) == ((uint32_t)(-1)))))
		{
			goto IL_004a;
		}
	}

IL_0092:
	{
		int32_t L_27 = V_2;
		if ((!(((uint32_t)L_27) == ((uint32_t)(-1)))))
		{
			goto IL_0098;
		}
	}
	{
		return 0;
	}

IL_0098:
	{
		int32_t L_28 = (__this->___count_10);
		__this->___count_10 = ((int32_t)((int32_t)L_28-(int32_t)1));
		int32_t L_29 = V_3;
		if ((!(((uint32_t)L_29) == ((uint32_t)(-1)))))
		{
			goto IL_00c7;
		}
	}
	{
		Int32U5BU5D_t1029* L_30 = (__this->___table_4);
		int32_t L_31 = V_1;
		LinkU5BU5D_t2191* L_32 = (__this->___linkSlots_5);
		int32_t L_33 = V_2;
		NullCheck(L_32);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_32, L_33);
		int32_t L_34 = (((Link_t1399 *)(Link_t1399 *)SZArrayLdElema(L_32, L_33))->___Next_1);
		NullCheck(L_30);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_30, L_31);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_30, L_31)) = (int32_t)((int32_t)((int32_t)L_34+(int32_t)1));
		goto IL_00e9;
	}

IL_00c7:
	{
		LinkU5BU5D_t2191* L_35 = (__this->___linkSlots_5);
		int32_t L_36 = V_3;
		NullCheck(L_35);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_35, L_36);
		LinkU5BU5D_t2191* L_37 = (__this->___linkSlots_5);
		int32_t L_38 = V_2;
		NullCheck(L_37);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_37, L_38);
		int32_t L_39 = (((Link_t1399 *)(Link_t1399 *)SZArrayLdElema(L_37, L_38))->___Next_1);
		((Link_t1399 *)(Link_t1399 *)SZArrayLdElema(L_35, L_36))->___Next_1 = L_39;
	}

IL_00e9:
	{
		LinkU5BU5D_t2191* L_40 = (__this->___linkSlots_5);
		int32_t L_41 = V_2;
		NullCheck(L_40);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_40, L_41);
		int32_t L_42 = (__this->___emptySlot_9);
		((Link_t1399 *)(Link_t1399 *)SZArrayLdElema(L_40, L_41))->___Next_1 = L_42;
		int32_t L_43 = V_2;
		__this->___emptySlot_9 = L_43;
		LinkU5BU5D_t2191* L_44 = (__this->___linkSlots_5);
		int32_t L_45 = V_2;
		NullCheck(L_44);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_44, L_45);
		((Link_t1399 *)(Link_t1399 *)SZArrayLdElema(L_44, L_45))->___HashCode_0 = 0;
		ObjectU5BU5D_t269* L_46 = (__this->___keySlots_6);
		int32_t L_47 = V_2;
		Initobj (InitializedTypeInfo(&Object_t_il2cpp_TypeInfo), (&V_4));
		Object_t * L_48 = V_4;
		NullCheck(L_46);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_46, L_47);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_46, L_47)) = (Object_t *)L_48;
		Int64U5BU5D_t1302* L_49 = (__this->___valueSlots_7);
		int32_t L_50 = V_2;
		Initobj (InitializedTypeInfo(&Int64_t705_il2cpp_TypeInfo), (&V_5));
		int64_t L_51 = V_5;
		NullCheck(L_49);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_49, L_50);
		*((int64_t*)(int64_t*)SZArrayLdElema(L_49, L_50)) = (int64_t)L_51;
		int32_t L_52 = (__this->___generation_14);
		__this->___generation_14 = ((int32_t)((int32_t)L_52+(int32_t)1));
		return 1;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m17672_gshared (Dictionary_2_t2974 * __this, Object_t * ___key, int64_t* ___value, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int64_t V_2 = 0;
	{
		Object_t * L_0 = ___key;
		Object_t * L_1 = L_0;
		if (((Object_t *)L_1))
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t699 * L_2 = (ArgumentNullException_t699 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t699_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3455(L_2, (String_t*) &_stringLiteral342, /*hidden argument*/&ArgumentNullException__ctor_m3455_MethodInfo);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0013:
	{
		Object_t* L_3 = (__this->___hcp_12);
		Object_t * L_4 = ___key;
		NullCheck(L_3);
		int32_t L_5 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), L_3, L_4);
		V_0 = ((int32_t)((int32_t)L_5|(int32_t)((int32_t)-2147483648)));
		Int32U5BU5D_t1029* L_6 = (__this->___table_4);
		int32_t L_7 = V_0;
		Int32U5BU5D_t1029* L_8 = (__this->___table_4);
		NullCheck(L_8);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, ((int32_t)((int32_t)((int32_t)((int32_t)L_7&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_8)->max_length))))));
		int32_t L_9 = ((int32_t)((int32_t)((int32_t)((int32_t)L_7&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_8)->max_length)))));
		V_1 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_6, L_9))-(int32_t)1));
		goto IL_0096;
	}

IL_0042:
	{
		LinkU5BU5D_t2191* L_10 = (__this->___linkSlots_5);
		int32_t L_11 = V_1;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = (((Link_t1399 *)(Link_t1399 *)SZArrayLdElema(L_10, L_11))->___HashCode_0);
		int32_t L_13 = V_0;
		if ((!(((uint32_t)L_12) == ((uint32_t)L_13))))
		{
			goto IL_0084;
		}
	}
	{
		Object_t* L_14 = (__this->___hcp_12);
		ObjectU5BU5D_t269* L_15 = (__this->___keySlots_6);
		int32_t L_16 = V_1;
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, L_16);
		int32_t L_17 = L_16;
		Object_t * L_18 = ___key;
		NullCheck(L_14);
		bool L_19 = (bool)InterfaceFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 36), L_14, (*(Object_t **)(Object_t **)SZArrayLdElema(L_15, L_17)), L_18);
		if (!L_19)
		{
			goto IL_0084;
		}
	}
	{
		int64_t* L_20 = ___value;
		Int64U5BU5D_t1302* L_21 = (__this->___valueSlots_7);
		int32_t L_22 = V_1;
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, L_22);
		int32_t L_23 = L_22;
		*L_20 = (*(int64_t*)(int64_t*)SZArrayLdElema(L_21, L_23));
		return 1;
	}

IL_0084:
	{
		LinkU5BU5D_t2191* L_24 = (__this->___linkSlots_5);
		int32_t L_25 = V_1;
		NullCheck(L_24);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_24, L_25);
		int32_t L_26 = (((Link_t1399 *)(Link_t1399 *)SZArrayLdElema(L_24, L_25))->___Next_1);
		V_1 = L_26;
	}

IL_0096:
	{
		int32_t L_27 = V_1;
		if ((!(((uint32_t)L_27) == ((uint32_t)(-1)))))
		{
			goto IL_0042;
		}
	}
	{
		int64_t* L_28 = ___value;
		Initobj (InitializedTypeInfo(&Int64_t705_il2cpp_TypeInfo), (&V_2));
		int64_t L_29 = V_2;
		*L_28 = L_29;
		return 0;
	}
}
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::get_Keys()
extern "C" KeyCollection_t2980 * Dictionary_2_get_Keys_m17674_gshared (Dictionary_2_t2974 * __this, MethodInfo* method)
{
	{
		KeyCollection_t2980 * L_0 = (KeyCollection_t2980 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 52));
		(( void (*) (KeyCollection_t2980 *, Dictionary_2_t2974 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 53)->method)(L_0, __this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 53));
		return L_0;
	}
}
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::get_Values()
extern "C" ValueCollection_t2984 * Dictionary_2_get_Values_m17676_gshared (Dictionary_2_t2974 * __this, MethodInfo* method)
{
	{
		ValueCollection_t2984 * L_0 = (ValueCollection_t2984 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 54));
		(( void (*) (ValueCollection_t2984 *, Dictionary_2_t2974 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 55)->method)(L_0, __this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 55));
		return L_0;
	}
}
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m17678_gshared (Dictionary_2_t2974 * __this, Object_t * ___key, MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t699 * L_1 = (ArgumentNullException_t699 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t699_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3455(L_1, (String_t*) &_stringLiteral342, /*hidden argument*/&ArgumentNullException__ctor_m3455_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		Object_t * L_2 = ___key;
		if (((Object_t *)IsInst(L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))))
		{
			goto IL_003a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_3 = Type_GetTypeFromHandle_m1488(NULL /*static, unused*/, LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 56)), /*hidden argument*/&Type_GetTypeFromHandle_m1488_MethodInfo);
		NullCheck(L_3);
		String_t* L_4 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Type_ToString_m6800_MethodInfo, L_3);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_5 = String_Concat_m1678(NULL /*static, unused*/, (String_t*) &_stringLiteral1314, L_4, /*hidden argument*/&String_Concat_m1678_MethodInfo);
		ArgumentException_t318 * L_6 = (ArgumentException_t318 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t318_il2cpp_TypeInfo));
		ArgumentException__ctor_m4746(L_6, L_5, (String_t*) &_stringLiteral342, /*hidden argument*/&ArgumentException__ctor_m4746_MethodInfo);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_003a:
	{
		Object_t * L_7 = ___key;
		return ((Object_t *)Castclass(L_7, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)));
	}
}
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ToTValue(System.Object)
extern "C" int64_t Dictionary_2_ToTValue_m17680_gshared (Dictionary_2_t2974 * __this, Object_t * ___value, MethodInfo* method)
{
	int64_t V_0 = 0;
	{
		Object_t * L_0 = ___value;
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_1 = Type_GetTypeFromHandle_m1488(NULL /*static, unused*/, LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 57)), /*hidden argument*/&Type_GetTypeFromHandle_m1488_MethodInfo);
		NullCheck(L_1);
		bool L_2 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsValueType_m6769_MethodInfo, L_1);
		if (L_2)
		{
			goto IL_001e;
		}
	}
	{
		Initobj (InitializedTypeInfo(&Int64_t705_il2cpp_TypeInfo), (&V_0));
		int64_t L_3 = V_0;
		return L_3;
	}

IL_001e:
	{
		Object_t * L_4 = ___value;
		if (((Object_t *)IsInst(L_4, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14))))
		{
			goto IL_004a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_5 = Type_GetTypeFromHandle_m1488(NULL /*static, unused*/, LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 57)), /*hidden argument*/&Type_GetTypeFromHandle_m1488_MethodInfo);
		NullCheck(L_5);
		String_t* L_6 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Type_ToString_m6800_MethodInfo, L_5);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_7 = String_Concat_m1678(NULL /*static, unused*/, (String_t*) &_stringLiteral1314, L_6, /*hidden argument*/&String_Concat_m1678_MethodInfo);
		ArgumentException_t318 * L_8 = (ArgumentException_t318 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t318_il2cpp_TypeInfo));
		ArgumentException__ctor_m4746(L_8, L_7, (String_t*) &_stringLiteral545, /*hidden argument*/&ArgumentException__ctor_m4746_MethodInfo);
		il2cpp_codegen_raise_exception(L_8);
	}

IL_004a:
	{
		Object_t * L_9 = ___value;
		return ((*(int64_t*)((int64_t*)UnBox (L_9, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14)))));
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern TypeInfo* EqualityComparer_1_t2989_il2cpp_TypeInfo_var;
extern "C" bool Dictionary_2_ContainsKeyValuePair_m17682_gshared (Dictionary_2_t2974 * __this, KeyValuePair_2_t2975  ___pair, MethodInfo* method)
{
	static bool Dictionary_2_ContainsKeyValuePair_m17682_init;
	if (!Dictionary_2_ContainsKeyValuePair_m17682_init)
	{
		EqualityComparer_1_t2989_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&EqualityComparer_1_t2989_0_0_0);
		Dictionary_2_ContainsKeyValuePair_m17682_init = true;
	}
	int64_t V_0 = 0;
	{
		Object_t * L_0 = (( Object_t * (*) (KeyValuePair_2_t2975 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((&___pair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		bool L_1 = (bool)VirtFuncInvoker2< bool, Object_t *, int64_t* >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 58), __this, L_0, (&V_0));
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		return 0;
	}

IL_0013:
	{
		IL2CPP_RUNTIME_CLASS_INIT(EqualityComparer_1_t2989_il2cpp_TypeInfo_var);
		EqualityComparer_1_t2989 * L_2 = (( EqualityComparer_1_t2989 * (*) (Object_t * /* static, unused */, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 46)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 46));
		int64_t L_3 = (( int64_t (*) (KeyValuePair_2_t2975 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((&___pair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		int64_t L_4 = V_0;
		NullCheck(L_2);
		bool L_5 = (bool)VirtFuncInvoker2< bool, int64_t, int64_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 59), L_2, L_3, L_4);
		return L_5;
	}
}
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::GetEnumerator()
extern Il2CppGenericMethod Dictionary_2_GetEnumerator_m17684_GenericMethod;
extern "C" Enumerator_t2982  Dictionary_2_GetEnumerator_m17684_gshared (Dictionary_2_t2974 * __this, MethodInfo* method)
{
	{
		Enumerator_t2982  L_0 = {0};
		(( void (*) (Enumerator_t2982 *, Dictionary_2_t2974 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32)->method)(&L_0, __this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32));
		return L_0;
	}
}
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t918  Dictionary_2_U3CCopyToU3Em__0_m17686_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int64_t ___value, MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		Object_t * L_1 = L_0;
		int64_t L_2 = ___value;
		int64_t L_3 = L_2;
		Object_t * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14), &L_3);
		DictionaryEntry_t918  L_5 = {0};
		DictionaryEntry__ctor_m4741(&L_5, ((Object_t *)L_1), L_4, /*hidden argument*/&DictionaryEntry__ctor_m4741_MethodInfo);
		return L_5;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::Remove(T)
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif



// T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::get_Current()
#ifndef _MSC_VER
#else
#endif

extern Il2CppGenericMethod KeyValuePair_2_set_Key_m17689_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2_set_Value_m17691_GenericMethod;


// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>::.ctor(TKey,TValue)
extern "C" void KeyValuePair_2__ctor_m17687_gshared (KeyValuePair_2_t2975 * __this, Object_t * ___key, int64_t ___value, MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		(( void (*) (KeyValuePair_2_t2975 *, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		int64_t L_1 = ___value;
		(( void (*) (KeyValuePair_2_t2975 *, int64_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(__this, L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>::get_Key()
extern "C" Object_t * KeyValuePair_2_get_Key_m17688_gshared (KeyValuePair_2_t2975 * __this, MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___key_0);
		return L_0;
	}
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>::set_Key(TKey)
extern "C" void KeyValuePair_2_set_Key_m17689_gshared (KeyValuePair_2_t2975 * __this, Object_t * ___value, MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		__this->___key_0 = L_0;
		return;
	}
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>::get_Value()
extern "C" int64_t KeyValuePair_2_get_Value_m17690_gshared (KeyValuePair_2_t2975 * __this, MethodInfo* method)
{
	{
		int64_t L_0 = (__this->___value_1);
		return L_0;
	}
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>::set_Value(TValue)
extern "C" void KeyValuePair_2_set_Value_m17691_gshared (KeyValuePair_2_t2975 * __this, int64_t ___value, MethodInfo* method)
{
	{
		int64_t L_0 = ___value;
		__this->___value_1 = L_0;
		return;
	}
}
// System.String System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>::ToString()
extern Il2CppGenericMethod KeyValuePair_2_ToString_m17692_GenericMethod;
extern TypeInfo* StringU5BU5D_t423_il2cpp_TypeInfo_var;
extern "C" String_t* KeyValuePair_2_ToString_m17692_gshared (KeyValuePair_2_t2975 * __this, MethodInfo* method)
{
	static bool KeyValuePair_2_ToString_m17692_init;
	if (!KeyValuePair_2_ToString_m17692_init)
	{
		StringU5BU5D_t423_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&StringU5BU5D_t423_0_0_0);
		KeyValuePair_2_ToString_m17692_init = true;
	}
	Object_t * V_0 = {0};
	int64_t V_1 = 0;
	int32_t G_B2_0 = 0;
	StringU5BU5D_t423* G_B2_1 = {0};
	StringU5BU5D_t423* G_B2_2 = {0};
	int32_t G_B1_0 = 0;
	StringU5BU5D_t423* G_B1_1 = {0};
	StringU5BU5D_t423* G_B1_2 = {0};
	String_t* G_B3_0 = {0};
	int32_t G_B3_1 = 0;
	StringU5BU5D_t423* G_B3_2 = {0};
	StringU5BU5D_t423* G_B3_3 = {0};
	int32_t G_B5_0 = 0;
	StringU5BU5D_t423* G_B5_1 = {0};
	StringU5BU5D_t423* G_B5_2 = {0};
	int32_t G_B4_0 = 0;
	StringU5BU5D_t423* G_B4_1 = {0};
	StringU5BU5D_t423* G_B4_2 = {0};
	String_t* G_B6_0 = {0};
	int32_t G_B6_1 = 0;
	StringU5BU5D_t423* G_B6_2 = {0};
	StringU5BU5D_t423* G_B6_3 = {0};
	{
		StringU5BU5D_t423* L_0 = ((StringU5BU5D_t423*)SZArrayNew(StringU5BU5D_t423_il2cpp_TypeInfo_var, 5));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, (String_t*) &_stringLiteral266);
		*((String_t**)(String_t**)SZArrayLdElema(L_0, 0)) = (String_t*)(String_t*) &_stringLiteral266;
		StringU5BU5D_t423* L_1 = L_0;
		Object_t * L_2 = (( Object_t * (*) (KeyValuePair_2_t2975 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		Object_t * L_3 = L_2;
		G_B1_0 = 1;
		G_B1_1 = L_1;
		G_B1_2 = L_1;
		if (!((Object_t *)L_3))
		{
			G_B2_0 = 1;
			G_B2_1 = L_1;
			G_B2_2 = L_1;
			goto IL_0033;
		}
	}
	{
		Object_t * L_4 = (( Object_t * (*) (KeyValuePair_2_t2975 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		V_0 = L_4;
		NullCheck((*(&V_0)));
		String_t* L_5 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Object_ToString_m1967_MethodInfo, (*(&V_0)));
		G_B3_0 = L_5;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		goto IL_0038;
	}

IL_0033:
	{
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_6 = ((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2;
		G_B3_0 = L_6;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
	}

IL_0038:
	{
		NullCheck(G_B3_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B3_2, G_B3_1);
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		*((String_t**)(String_t**)SZArrayLdElema(G_B3_2, G_B3_1)) = (String_t*)G_B3_0;
		StringU5BU5D_t423* L_7 = G_B3_3;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 2);
		ArrayElementTypeCheck (L_7, (String_t*) &_stringLiteral329);
		*((String_t**)(String_t**)SZArrayLdElema(L_7, 2)) = (String_t*)(String_t*) &_stringLiteral329;
		StringU5BU5D_t423* L_8 = L_7;
		int64_t L_9 = (( int64_t (*) (KeyValuePair_2_t2975 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		int64_t L_10 = L_9;
		Object_t * L_11 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), &L_10);
		G_B4_0 = 3;
		G_B4_1 = L_8;
		G_B4_2 = L_8;
		if (!L_11)
		{
			G_B5_0 = 3;
			G_B5_1 = L_8;
			G_B5_2 = L_8;
			goto IL_0066;
		}
	}
	{
		int64_t L_12 = (( int64_t (*) (KeyValuePair_2_t2975 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		V_1 = L_12;
		NullCheck(Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (&V_1)));
		String_t* L_13 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Object_ToString_m1967_MethodInfo, Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (&V_1)));
		G_B6_0 = L_13;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		goto IL_006b;
	}

IL_0066:
	{
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_14 = ((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2;
		G_B6_0 = L_14;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
	}

IL_006b:
	{
		NullCheck(G_B6_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B6_2, G_B6_1);
		ArrayElementTypeCheck (G_B6_2, G_B6_0);
		*((String_t**)(String_t**)SZArrayLdElema(G_B6_2, G_B6_1)) = (String_t*)G_B6_0;
		StringU5BU5D_t423* L_15 = G_B6_3;
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, 4);
		ArrayElementTypeCheck (L_15, (String_t*) &_stringLiteral267);
		*((String_t**)(String_t**)SZArrayLdElema(L_15, 4)) = (String_t*)(String_t*) &_stringLiteral267;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_16 = String_Concat_m3399(NULL /*static, unused*/, L_15, /*hidden argument*/&String_Concat_m3399_MethodInfo);
		return L_16;
	}
}
// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_125.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t2976_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_125MethodDeclarations.h"

extern Il2CppType InternalEnumerator_1_t2976_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>(System.Int32)
extern "C" KeyValuePair_2_t2975  Array_InternalArray__get_Item_TisKeyValuePair_2_t2975_m23356_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisKeyValuePair_2_t2975_m23356(__this, p0, method) (( KeyValuePair_2_t2975  (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisKeyValuePair_2_t2975_m23356_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m17697_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisKeyValuePair_2_t2975_m23356_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::.ctor(System.Array)
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m17693_GenericMethod;
extern "C" void InternalEnumerator_1__ctor_m17693_gshared (InternalEnumerator_1_t2976 * __this, Array_t * ___array, MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m17694_GenericMethod;
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m17694_gshared (InternalEnumerator_1_t2976 * __this, MethodInfo* method)
{
	{
		KeyValuePair_2_t2975  L_0 = (( KeyValuePair_2_t2975  (*) (InternalEnumerator_1_t2976 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t2975  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::Dispose()
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m17695_GenericMethod;
extern "C" void InternalEnumerator_1_Dispose_m17695_gshared (InternalEnumerator_1_t2976 * __this, MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::MoveNext()
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m17696_GenericMethod;
extern "C" bool InternalEnumerator_1_MoveNext_m17696_gshared (InternalEnumerator_1_t2976 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_001b;
		}
	}
	{
		Array_t * L_1 = (__this->___array_0);
		NullCheck(L_1);
		int32_t L_2 = Array_get_Length_m4744(L_1, /*hidden argument*/&Array_get_Length_m4744_MethodInfo);
		__this->___idx_1 = L_2;
	}

IL_001b:
	{
		int32_t L_3 = (__this->___idx_1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = (__this->___idx_1);
		int32_t L_5 = ((int32_t)((int32_t)L_4-(int32_t)1));
		V_0 = L_5;
		__this->___idx_1 = L_5;
		int32_t L_6 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_6) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B5_0 = 0;
	}

IL_003e:
	{
		return G_B5_0;
	}
}
// T System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::get_Current()
extern "C" KeyValuePair_2_t2975  InternalEnumerator_1_get_Current_m17697_gshared (InternalEnumerator_1_t2976 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t1095 * L_1 = (InvalidOperationException_t1095 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1095_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m4740(L_1, (String_t*) &_stringLiteral1180, /*hidden argument*/&InvalidOperationException__ctor_m4740_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		int32_t L_2 = (__this->___idx_1);
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_0029;
		}
	}
	{
		InvalidOperationException_t1095 * L_3 = (InvalidOperationException_t1095 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1095_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m4740(L_3, (String_t*) &_stringLiteral1181, /*hidden argument*/&InvalidOperationException__ctor_m4740_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (__this->___array_0);
		Array_t * L_5 = (__this->___array_0);
		NullCheck(L_5);
		int32_t L_6 = Array_get_Length_m4744(L_5, /*hidden argument*/&Array_get_Length_m4744_MethodInfo);
		int32_t L_7 = (__this->___idx_1);
		NullCheck(L_4);
		KeyValuePair_2_t2975  L_8 = (( KeyValuePair_2_t2975  (*) (Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_4, ((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4190_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IDictionary_2_t3545_il2cpp_TypeInfo;



// System.Void System.Collections.Generic.IDictionary`2<System.Object,System.Int64>::Add(TKey,TValue)
// System.Boolean System.Collections.Generic.IDictionary`2<System.Object,System.Int64>::Remove(TKey)
// System.Boolean System.Collections.Generic.IDictionary`2<System.Object,System.Int64>::TryGetValue(TKey,TValue&)
// TValue System.Collections.Generic.IDictionary`2<System.Object,System.Int64>::get_Item(TKey)
// System.Void System.Collections.Generic.IDictionary`2<System.Object,System.Int64>::set_Item(TKey,TValue)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.IDictionary`2<System.Object,System.Int64>::get_Keys()
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.IDictionary`2<System.Object,System.Int64>::get_Values()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t3541_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Int64>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Int64>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Int64>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Int64>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Int64>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Int64>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Int64>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t4191_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Int64>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t3548_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.Int64>::get_Current()
// System.Array/InternalEnumerator`1<System.Int64>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_126.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t2977_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Int64>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_126MethodDeclarations.h"

extern Il2CppType InternalEnumerator_1_t2977_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Int64>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Int64>(System.Int32)
extern "C" int64_t Array_InternalArray__get_Item_TisInt64_t705_m23367_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisInt64_t705_m23367(__this, p0, method) (( int64_t (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisInt64_t705_m23367_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m17702_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisInt64_t705_m23367_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.Int64>::.ctor(System.Array)
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m17698_GenericMethod;
extern "C" void InternalEnumerator_1__ctor_m17698_gshared (InternalEnumerator_1_t2977 * __this, Array_t * ___array, MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Int64>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m17699_GenericMethod;
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m17699_gshared (InternalEnumerator_1_t2977 * __this, MethodInfo* method)
{
	{
		int64_t L_0 = (( int64_t (*) (InternalEnumerator_1_t2977 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		int64_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Int64>::Dispose()
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m17700_GenericMethod;
extern "C" void InternalEnumerator_1_Dispose_m17700_gshared (InternalEnumerator_1_t2977 * __this, MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Int64>::MoveNext()
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m17701_GenericMethod;
extern "C" bool InternalEnumerator_1_MoveNext_m17701_gshared (InternalEnumerator_1_t2977 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_001b;
		}
	}
	{
		Array_t * L_1 = (__this->___array_0);
		NullCheck(L_1);
		int32_t L_2 = Array_get_Length_m4744(L_1, /*hidden argument*/&Array_get_Length_m4744_MethodInfo);
		__this->___idx_1 = L_2;
	}

IL_001b:
	{
		int32_t L_3 = (__this->___idx_1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = (__this->___idx_1);
		int32_t L_5 = ((int32_t)((int32_t)L_4-(int32_t)1));
		V_0 = L_5;
		__this->___idx_1 = L_5;
		int32_t L_6 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_6) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B5_0 = 0;
	}

IL_003e:
	{
		return G_B5_0;
	}
}
// T System.Array/InternalEnumerator`1<System.Int64>::get_Current()
extern "C" int64_t InternalEnumerator_1_get_Current_m17702_gshared (InternalEnumerator_1_t2977 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t1095 * L_1 = (InvalidOperationException_t1095 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1095_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m4740(L_1, (String_t*) &_stringLiteral1180, /*hidden argument*/&InvalidOperationException__ctor_m4740_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		int32_t L_2 = (__this->___idx_1);
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_0029;
		}
	}
	{
		InvalidOperationException_t1095 * L_3 = (InvalidOperationException_t1095 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1095_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m4740(L_3, (String_t*) &_stringLiteral1181, /*hidden argument*/&InvalidOperationException__ctor_m4740_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (__this->___array_0);
		Array_t * L_5 = (__this->___array_0);
		NullCheck(L_5);
		int32_t L_6 = Array_get_Length_m4744(L_5, /*hidden argument*/&Array_get_Length_m4744_MethodInfo);
		int32_t L_7 = (__this->___idx_1);
		NullCheck(L_4);
		int64_t L_8 = (( int64_t (*) (Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_4, ((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4192_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Int64>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Int64>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Int64>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Int64>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Int64>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t4193_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.IComparable`1<System.Int64>>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.IComparable`1<System.Int64>>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.IComparable`1<System.Int64>>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.IComparable`1<System.Int64>>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.IComparable`1<System.Int64>>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.IComparable`1<System.Int64>>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.IComparable`1<System.Int64>>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t4194_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.IComparable`1<System.Int64>>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4195_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.IComparable`1<System.Int64>>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IComparable_1_t1886_il2cpp_TypeInfo;



// System.Int32 System.IComparable`1<System.Int64>::CompareTo(T)
// System.Array/InternalEnumerator`1<System.IComparable`1<System.Int64>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_127.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t2978_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.IComparable`1<System.Int64>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_127MethodDeclarations.h"

extern Il2CppType InternalEnumerator_1_t2978_0_0_0;
extern Il2CppType IComparable_1_t1886_0_0_0;
struct Array_t;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Object>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Object>(System.Int32)
extern "C" Object_t * Array_InternalArray__get_Item_TisObject_t_m21358_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisObject_t_m21358(__this, p0, method) (( Object_t * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m21358_gshared)(__this, p0, method)
// Declaration !!0 System.Array::InternalArray__get_Item<System.IComparable`1<System.Int64>>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.IComparable`1<System.Int64>>(System.Int32)
#define Array_InternalArray__get_Item_TisIComparable_1_t1886_m23378(__this, p0, method) (( Object_t* (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m21358_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m17707_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisIComparable_1_t1886_m23378_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.IComparable`1<System.Int64>>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.IComparable`1<System.Int64>>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.IComparable`1<System.Int64>>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.IComparable`1<System.Int64>>::MoveNext()
// T System.Array/InternalEnumerator`1<System.IComparable`1<System.Int64>>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4196_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.IComparable`1<System.Int64>>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.IComparable`1<System.Int64>>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.IComparable`1<System.Int64>>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.IComparable`1<System.Int64>>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.IComparable`1<System.Int64>>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t4197_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Int64>>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Int64>>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Int64>>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Int64>>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Int64>>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Int64>>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Int64>>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t4198_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.IEquatable`1<System.Int64>>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4199_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.IEquatable`1<System.Int64>>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEquatable_1_t1887_il2cpp_TypeInfo;



// System.Boolean System.IEquatable`1<System.Int64>::Equals(T)
// System.Array/InternalEnumerator`1<System.IEquatable`1<System.Int64>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_128.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t2979_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.IEquatable`1<System.Int64>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_128MethodDeclarations.h"

extern Il2CppType InternalEnumerator_1_t2979_0_0_0;
extern Il2CppType IEquatable_1_t1887_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.IEquatable`1<System.Int64>>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.IEquatable`1<System.Int64>>(System.Int32)
#define Array_InternalArray__get_Item_TisIEquatable_1_t1887_m23389(__this, p0, method) (( Object_t* (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m21358_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m17712_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisIEquatable_1_t1887_m23389_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.IEquatable`1<System.Int64>>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.IEquatable`1<System.Int64>>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.IEquatable`1<System.Int64>>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.IEquatable`1<System.Int64>>::MoveNext()
// T System.Array/InternalEnumerator`1<System.IEquatable`1<System.Int64>>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4200_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.IEquatable`1<System.Int64>>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.IEquatable`1<System.Int64>>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.IEquatable`1<System.Int64>>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.IEquatable`1<System.Int64>>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.IEquatable`1<System.Int64>>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif

// System.NotSupportedException
#include "mscorlib_System_NotSupportedException.h"
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_25.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_54.h"
extern TypeInfo ICollection_t795_il2cpp_TypeInfo;
extern TypeInfo NotSupportedException_t285_il2cpp_TypeInfo;
extern TypeInfo Enumerator_t2981_il2cpp_TypeInfo;
extern TypeInfo Transform_1_t2983_il2cpp_TypeInfo;
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_54MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_25MethodDeclarations.h"
extern Il2CppType Enumerator_t2981_0_0_0;
extern Il2CppType Transform_1_t2983_0_0_0;
extern MethodInfo ICollection_get_SyncRoot_m10470_MethodInfo;
extern MethodInfo NotSupportedException__ctor_m4761_MethodInfo;
extern MethodInfo KeyCollection_CopyTo_m17724_MethodInfo;
extern MethodInfo Dictionary_2_pick_key_m17650_MethodInfo;
extern MethodInfo Transform_1__ctor_m17744_MethodInfo;
extern MethodInfo Enumerator__ctor_m17727_MethodInfo;
struct Dictionary_2_t2974;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Do_ICollectionCopyTo<System.Object>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Do_ICollectionCopyTo<System.Object>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_ICollectionCopyTo_TisObject_t_m23400_gshared (Dictionary_2_t2974 * __this, Array_t * p0, int32_t p1, Transform_1_t2983 * p2, MethodInfo* method);
#define Dictionary_2_Do_ICollectionCopyTo_TisObject_t_m23400(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t2974 *, Array_t *, int32_t, Transform_1_t2983 *, MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisObject_t_m23400_gshared)(__this, p0, p1, p2, method)
struct Dictionary_2_t2974;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Do_CopyTo<System.Object,System.Object>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Do_CopyTo<System.Object,System.Object>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisObject_t_TisObject_t_m23399 (Dictionary_2_t2974 * __this, ObjectU5BU5D_t269* p0, int32_t p1, Transform_1_t2983 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern Il2CppGenericMethod KeyCollection_GetEnumerator_m17725_GenericMethod;
extern Il2CppGenericMethod KeyCollection_CopyTo_m17724_GenericMethod;
extern Il2CppGenericMethod Transform_1__ctor_m17744_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_ICollectionCopyTo_TisObject_t_m23400_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_CopyTo_TisObject_t_TisObject_t_m23399_GenericMethod;
extern Il2CppGenericMethod Enumerator__ctor_m17727_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int64>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void KeyCollection__ctor_m17713_gshared (KeyCollection_t2980 * __this, Dictionary_2_t2974 * ___dictionary, MethodInfo* method)
{
	{
		Object__ctor_m1289(__this, /*hidden argument*/&Object__ctor_m1289_MethodInfo);
		Dictionary_2_t2974 * L_0 = ___dictionary;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t699 * L_1 = (ArgumentNullException_t699 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t699_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3455(L_1, (String_t*) &_stringLiteral1306, /*hidden argument*/&ArgumentNullException__ctor_m3455_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0014:
	{
		Dictionary_2_t2974 * L_2 = ___dictionary;
		__this->___dictionary_0 = L_2;
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int64>::System.Collections.Generic.ICollection<TKey>.Add(TKey)
extern Il2CppGenericMethod KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m17714_GenericMethod;
extern "C" void KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m17714_gshared (KeyCollection_t2980 * __this, Object_t * ___item, MethodInfo* method)
{
	{
		NotSupportedException_t285 * L_0 = (NotSupportedException_t285 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t285_il2cpp_TypeInfo));
		NotSupportedException__ctor_m4761(L_0, (String_t*) &_stringLiteral1317, /*hidden argument*/&NotSupportedException__ctor_m4761_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int64>::System.Collections.Generic.ICollection<TKey>.Clear()
extern Il2CppGenericMethod KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m17715_GenericMethod;
extern "C" void KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m17715_gshared (KeyCollection_t2980 * __this, MethodInfo* method)
{
	{
		NotSupportedException_t285 * L_0 = (NotSupportedException_t285 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t285_il2cpp_TypeInfo));
		NotSupportedException__ctor_m4761(L_0, (String_t*) &_stringLiteral1317, /*hidden argument*/&NotSupportedException__ctor_m4761_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int64>::System.Collections.Generic.ICollection<TKey>.Contains(TKey)
extern Il2CppGenericMethod KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m17716_GenericMethod;
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m17716_gshared (KeyCollection_t2980 * __this, Object_t * ___item, MethodInfo* method)
{
	{
		Dictionary_2_t2974 * L_0 = (__this->___dictionary_0);
		Object_t * L_1 = ___item;
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0), L_0, L_1);
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int64>::System.Collections.Generic.ICollection<TKey>.Remove(TKey)
extern Il2CppGenericMethod KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m17717_GenericMethod;
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m17717_gshared (KeyCollection_t2980 * __this, Object_t * ___item, MethodInfo* method)
{
	{
		NotSupportedException_t285 * L_0 = (NotSupportedException_t285 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t285_il2cpp_TypeInfo));
		NotSupportedException__ctor_m4761(L_0, (String_t*) &_stringLiteral1317, /*hidden argument*/&NotSupportedException__ctor_m4761_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Collections.Generic.IEnumerator`1<TKey> System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int64>::System.Collections.Generic.IEnumerable<TKey>.GetEnumerator()
extern Il2CppGenericMethod KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m17718_GenericMethod;
extern "C" Object_t* KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m17718_gshared (KeyCollection_t2980 * __this, MethodInfo* method)
{
	{
		Enumerator_t2981  L_0 = (( Enumerator_t2981  (*) (KeyCollection_t2980 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Enumerator_t2981  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (Object_t*)L_2;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int64>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern Il2CppGenericMethod KeyCollection_System_Collections_ICollection_CopyTo_m17719_GenericMethod;
extern "C" void KeyCollection_System_Collections_ICollection_CopyTo_m17719_gshared (KeyCollection_t2980 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method)
{
	ObjectU5BU5D_t269* V_0 = {0};
	{
		Array_t * L_0 = ___array;
		V_0 = ((ObjectU5BU5D_t269*)IsInst(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)));
		ObjectU5BU5D_t269* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		ObjectU5BU5D_t269* L_2 = V_0;
		int32_t L_3 = ___index;
		VirtActionInvoker2< ObjectU5BU5D_t269*, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), __this, L_2, L_3);
		return;
	}

IL_0013:
	{
		Dictionary_2_t2974 * L_4 = (__this->___dictionary_0);
		Array_t * L_5 = ___array;
		int32_t L_6 = ___index;
		NullCheck(L_4);
		(( void (*) (Dictionary_2_t2974 *, Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_4, L_5, L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Dictionary_2_t2974 * L_7 = (__this->___dictionary_0);
		Array_t * L_8 = ___array;
		int32_t L_9 = ___index;
		IntPtr_t L_10 = { IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		Transform_1_t2983 * L_11 = (Transform_1_t2983 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (Transform_1_t2983 *, Object_t *, IntPtr_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_11, NULL, L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		NullCheck(L_7);
		(( void (*) (Dictionary_2_t2974 *, Array_t *, int32_t, Transform_1_t2983 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)(L_7, L_8, L_9, L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int64>::System.Collections.IEnumerable.GetEnumerator()
extern Il2CppGenericMethod KeyCollection_System_Collections_IEnumerable_GetEnumerator_m17720_GenericMethod;
extern "C" Object_t * KeyCollection_System_Collections_IEnumerable_GetEnumerator_m17720_gshared (KeyCollection_t2980 * __this, MethodInfo* method)
{
	{
		Enumerator_t2981  L_0 = (( Enumerator_t2981  (*) (KeyCollection_t2980 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Enumerator_t2981  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (Object_t *)L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int64>::System.Collections.Generic.ICollection<TKey>.get_IsReadOnly()
extern Il2CppGenericMethod KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m17721_GenericMethod;
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m17721_gshared (KeyCollection_t2980 * __this, MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int64>::System.Collections.ICollection.get_IsSynchronized()
extern Il2CppGenericMethod KeyCollection_System_Collections_ICollection_get_IsSynchronized_m17722_GenericMethod;
extern "C" bool KeyCollection_System_Collections_ICollection_get_IsSynchronized_m17722_gshared (KeyCollection_t2980 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int64>::System.Collections.ICollection.get_SyncRoot()
extern Il2CppGenericMethod KeyCollection_System_Collections_ICollection_get_SyncRoot_m17723_GenericMethod;
extern "C" Object_t * KeyCollection_System_Collections_ICollection_get_SyncRoot_m17723_gshared (KeyCollection_t2980 * __this, MethodInfo* method)
{
	{
		Dictionary_2_t2974 * L_0 = (__this->___dictionary_0);
		NullCheck(L_0);
		Object_t * L_1 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(&ICollection_get_SyncRoot_m10470_MethodInfo, L_0);
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int64>::CopyTo(TKey[],System.Int32)
extern "C" void KeyCollection_CopyTo_m17724_gshared (KeyCollection_t2980 * __this, ObjectU5BU5D_t269* ___array, int32_t ___index, MethodInfo* method)
{
	{
		Dictionary_2_t2974 * L_0 = (__this->___dictionary_0);
		ObjectU5BU5D_t269* L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck(L_0);
		(( void (*) (Dictionary_2_t2974 *, Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_0, (Array_t *)(Array_t *)L_1, L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Dictionary_2_t2974 * L_3 = (__this->___dictionary_0);
		ObjectU5BU5D_t269* L_4 = ___array;
		int32_t L_5 = ___index;
		IntPtr_t L_6 = { IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		Transform_1_t2983 * L_7 = (Transform_1_t2983 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (Transform_1_t2983 *, Object_t *, IntPtr_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_7, NULL, L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		NullCheck(L_3);
		(( void (*) (Dictionary_2_t2974 *, ObjectU5BU5D_t269*, int32_t, Transform_1_t2983 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)(L_3, L_4, L_5, L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		return;
	}
}
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int64>::GetEnumerator()
extern "C" Enumerator_t2981  KeyCollection_GetEnumerator_m17725_gshared (KeyCollection_t2980 * __this, MethodInfo* method)
{
	{
		Dictionary_2_t2974 * L_0 = (__this->___dictionary_0);
		Enumerator_t2981  L_1 = {0};
		(( void (*) (Enumerator_t2981 *, Dictionary_2_t2974 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11)->method)(&L_1, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11));
		return L_1;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int64>::get_Count()
extern Il2CppGenericMethod KeyCollection_get_Count_m17726_GenericMethod;
extern "C" int32_t KeyCollection_get_Count_m17726_gshared (KeyCollection_t2980 * __this, MethodInfo* method)
{
	{
		Dictionary_2_t2974 * L_0 = (__this->___dictionary_0);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12), L_0);
		return L_1;
	}
}
#ifndef _MSC_VER
#else
#endif

extern Il2CppGenericMethod Enumerator_get_CurrentKey_m17739_GenericMethod;
extern Il2CppGenericMethod Enumerator_Dispose_m17743_GenericMethod;
extern Il2CppGenericMethod Enumerator_MoveNext_m17737_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Int64>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m17727_gshared (Enumerator_t2981 * __this, Dictionary_2_t2974 * ___host, MethodInfo* method)
{
	{
		Dictionary_2_t2974 * L_0 = ___host;
		NullCheck(L_0);
		Enumerator_t2982  L_1 = (( Enumerator_t2982  (*) (Dictionary_2_t2974 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		__this->___host_enumerator_0 = L_1;
		return;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Int64>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod Enumerator_System_Collections_IEnumerator_get_Current_m17728_GenericMethod;
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m17728_gshared (Enumerator_t2981 * __this, MethodInfo* method)
{
	{
		Enumerator_t2982 * L_0 = &(__this->___host_enumerator_0);
		Object_t * L_1 = (( Object_t * (*) (Enumerator_t2982 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Object_t * L_2 = L_1;
		return ((Object_t *)L_2);
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Int64>::Dispose()
extern Il2CppGenericMethod Enumerator_Dispose_m17729_GenericMethod;
extern "C" void Enumerator_Dispose_m17729_gshared (Enumerator_t2981 * __this, MethodInfo* method)
{
	{
		Enumerator_t2982 * L_0 = &(__this->___host_enumerator_0);
		(( void (*) (Enumerator_t2982 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Int64>::MoveNext()
extern Il2CppGenericMethod Enumerator_MoveNext_m17730_GenericMethod;
extern "C" bool Enumerator_MoveNext_m17730_gshared (Enumerator_t2981 * __this, MethodInfo* method)
{
	{
		Enumerator_t2982 * L_0 = &(__this->___host_enumerator_0);
		bool L_1 = (( bool (*) (Enumerator_t2982 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_1;
	}
}
// TKey System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Int64>::get_Current()
extern Il2CppGenericMethod Enumerator_get_Current_m17731_GenericMethod;
extern "C" Object_t * Enumerator_get_Current_m17731_gshared (Enumerator_t2981 * __this, MethodInfo* method)
{
	{
		Enumerator_t2982 * L_0 = &(__this->___host_enumerator_0);
		KeyValuePair_2_t2975 * L_1 = &(L_0->___current_3);
		Object_t * L_2 = (( Object_t * (*) (KeyValuePair_2_t2975 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		return L_2;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.ObjectDisposedException
#include "mscorlib_System_ObjectDisposedException.h"
extern TypeInfo ObjectDisposedException_t1271_il2cpp_TypeInfo;
// System.ObjectDisposedException
#include "mscorlib_System_ObjectDisposedExceptionMethodDeclarations.h"
extern MethodInfo ObjectDisposedException__ctor_m5916_MethodInfo;
extern Il2CppGenericMethod Enumerator_VerifyCurrent_m17742_GenericMethod;
extern Il2CppGenericMethod Enumerator_get_CurrentValue_m17740_GenericMethod;
extern Il2CppGenericMethod Enumerator_VerifyState_m17741_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m17732_gshared (Enumerator_t2982 * __this, Dictionary_2_t2974 * ___dictionary, MethodInfo* method)
{
	{
		Dictionary_2_t2974 * L_0 = ___dictionary;
		__this->___dictionary_0 = L_0;
		Dictionary_2_t2974 * L_1 = ___dictionary;
		NullCheck(L_1);
		int32_t L_2 = (L_1->___generation_14);
		__this->___stamp_2 = L_2;
		return;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod Enumerator_System_Collections_IEnumerator_get_Current_m17733_GenericMethod;
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m17733_gshared (Enumerator_t2982 * __this, MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t2982 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t2975  L_0 = (__this->___current_3);
		KeyValuePair_2_t2975  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::System.Collections.IDictionaryEnumerator.get_Entry()
extern Il2CppGenericMethod Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m17734_GenericMethod;
extern "C" DictionaryEntry_t918  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m17734_gshared (Enumerator_t2982 * __this, MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t2982 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t2975 * L_0 = &(__this->___current_3);
		Object_t * L_1 = (( Object_t * (*) (KeyValuePair_2_t2975 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		Object_t * L_2 = L_1;
		KeyValuePair_2_t2975 * L_3 = &(__this->___current_3);
		int64_t L_4 = (( int64_t (*) (KeyValuePair_2_t2975 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		int64_t L_5 = L_4;
		Object_t * L_6 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), &L_5);
		DictionaryEntry_t918  L_7 = {0};
		DictionaryEntry__ctor_m4741(&L_7, ((Object_t *)L_2), L_6, /*hidden argument*/&DictionaryEntry__ctor_m4741_MethodInfo);
		return L_7;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::System.Collections.IDictionaryEnumerator.get_Key()
extern Il2CppGenericMethod Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m17735_GenericMethod;
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m17735_gshared (Enumerator_t2982 * __this, MethodInfo* method)
{
	{
		Object_t * L_0 = (( Object_t * (*) (Enumerator_t2982 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		Object_t * L_1 = L_0;
		return ((Object_t *)L_1);
	}
}
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::System.Collections.IDictionaryEnumerator.get_Value()
extern Il2CppGenericMethod Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m17736_GenericMethod;
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m17736_gshared (Enumerator_t2982 * __this, MethodInfo* method)
{
	{
		int64_t L_0 = (( int64_t (*) (Enumerator_t2982 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		int64_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), &L_1);
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::MoveNext()
extern "C" bool Enumerator_MoveNext_m17737_gshared (Enumerator_t2982 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		(( void (*) (Enumerator_t2982 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		int32_t L_0 = (__this->___next_1);
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		return 0;
	}

IL_0011:
	{
		goto IL_0072;
	}

IL_0013:
	{
		int32_t L_1 = (__this->___next_1);
		int32_t L_2 = L_1;
		V_1 = L_2;
		__this->___next_1 = ((int32_t)((int32_t)L_2+(int32_t)1));
		int32_t L_3 = V_1;
		V_0 = L_3;
		Dictionary_2_t2974 * L_4 = (__this->___dictionary_0);
		NullCheck(L_4);
		LinkU5BU5D_t2191* L_5 = (L_4->___linkSlots_5);
		int32_t L_6 = V_0;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = (((Link_t1399 *)(Link_t1399 *)SZArrayLdElema(L_5, L_6))->___HashCode_0);
		if (!((int32_t)((int32_t)L_7&(int32_t)((int32_t)-2147483648))))
		{
			goto IL_0072;
		}
	}
	{
		Dictionary_2_t2974 * L_8 = (__this->___dictionary_0);
		NullCheck(L_8);
		ObjectU5BU5D_t269* L_9 = (L_8->___keySlots_6);
		int32_t L_10 = V_0;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		int32_t L_11 = L_10;
		Dictionary_2_t2974 * L_12 = (__this->___dictionary_0);
		NullCheck(L_12);
		Int64U5BU5D_t1302* L_13 = (L_12->___valueSlots_7);
		int32_t L_14 = V_0;
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, L_14);
		int32_t L_15 = L_14;
		KeyValuePair_2_t2975  L_16 = {0};
		(( void (*) (KeyValuePair_2_t2975 *, Object_t *, int64_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)(&L_16, (*(Object_t **)(Object_t **)SZArrayLdElema(L_9, L_11)), (*(int64_t*)(int64_t*)SZArrayLdElema(L_13, L_15)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		__this->___current_3 = L_16;
		return 1;
	}

IL_0072:
	{
		int32_t L_17 = (__this->___next_1);
		Dictionary_2_t2974 * L_18 = (__this->___dictionary_0);
		NullCheck(L_18);
		int32_t L_19 = (L_18->___touchedSlots_8);
		if ((((int32_t)L_17) < ((int32_t)L_19)))
		{
			goto IL_0013;
		}
	}
	{
		__this->___next_1 = (-1);
		return 0;
	}
}
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::get_Current()
extern Il2CppGenericMethod Enumerator_get_Current_m17738_GenericMethod;
extern "C" KeyValuePair_2_t2975  Enumerator_get_Current_m17738_gshared (Enumerator_t2982 * __this, MethodInfo* method)
{
	{
		KeyValuePair_2_t2975  L_0 = (__this->___current_3);
		return L_0;
	}
}
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m17739_gshared (Enumerator_t2982 * __this, MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t2982 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t2975 * L_0 = &(__this->___current_3);
		Object_t * L_1 = (( Object_t * (*) (KeyValuePair_2_t2975 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_1;
	}
}
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::get_CurrentValue()
extern "C" int64_t Enumerator_get_CurrentValue_m17740_gshared (Enumerator_t2982 * __this, MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t2982 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t2975 * L_0 = &(__this->___current_3);
		int64_t L_1 = (( int64_t (*) (KeyValuePair_2_t2975 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::VerifyState()
extern "C" void Enumerator_VerifyState_m17741_gshared (Enumerator_t2982 * __this, MethodInfo* method)
{
	{
		Dictionary_2_t2974 * L_0 = (__this->___dictionary_0);
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		ObjectDisposedException_t1271 * L_1 = (ObjectDisposedException_t1271 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ObjectDisposedException_t1271_il2cpp_TypeInfo));
		ObjectDisposedException__ctor_m5916(L_1, (String_t*)NULL, /*hidden argument*/&ObjectDisposedException__ctor_m5916_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000f:
	{
		Dictionary_2_t2974 * L_2 = (__this->___dictionary_0);
		NullCheck(L_2);
		int32_t L_3 = (L_2->___generation_14);
		int32_t L_4 = (__this->___stamp_2);
		if ((((int32_t)L_3) == ((int32_t)L_4)))
		{
			goto IL_002d;
		}
	}
	{
		InvalidOperationException_t1095 * L_5 = (InvalidOperationException_t1095 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1095_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m4740(L_5, (String_t*) &_stringLiteral1315, /*hidden argument*/&InvalidOperationException__ctor_m4740_MethodInfo);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_002d:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m17742_gshared (Enumerator_t2982 * __this, MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t2982 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		int32_t L_0 = (__this->___next_1);
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_001a;
		}
	}
	{
		InvalidOperationException_t1095 * L_1 = (InvalidOperationException_t1095 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1095_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m4740(L_1, (String_t*) &_stringLiteral1316, /*hidden argument*/&InvalidOperationException__ctor_m4740_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_001a:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::Dispose()
extern "C" void Enumerator_Dispose_m17743_gshared (Enumerator_t2982 * __this, MethodInfo* method)
{
	{
		__this->___dictionary_0 = (Dictionary_2_t2974 *)NULL;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m17744_gshared (Transform_1_t2983 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Object>::Invoke(TKey,TValue)
extern Il2CppGenericMethod Transform_1_Invoke_m17745_GenericMethod;
extern "C" Object_t * Transform_1_Invoke_m17745_gshared (Transform_1_t2983 * __this, Object_t * ___key, int64_t ___value, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m17745((Transform_1_t2983 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef Object_t * (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___key, int64_t ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef Object_t * (*FunctionPointerType) (Object_t * __this, Object_t * ___key, int64_t ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef Object_t * (*FunctionPointerType) (Object_t * __this, int64_t ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Object>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern Il2CppGenericMethod Transform_1_BeginInvoke_m17746_GenericMethod;
extern "C" Object_t * Transform_1_BeginInvoke_m17746_gshared (Transform_1_t2983 * __this, Object_t * ___key, int64_t ___value, AsyncCallback_t171 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___key;
	__d_args[1] = Box(InitializedTypeInfo(&Int64_t705_il2cpp_TypeInfo), &___value);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Object>::EndInvoke(System.IAsyncResult)
extern Il2CppGenericMethod Transform_1_EndInvoke_m17747_GenericMethod;
extern "C" Object_t * Transform_1_EndInvoke_m17747_gshared (Transform_1_t2983 * __this, Object_t * ___result, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return (Object_t *)__result;
}
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_25.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_55.h"
extern TypeInfo Enumerator_t2985_il2cpp_TypeInfo;
extern TypeInfo Transform_1_t2986_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_55MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_25MethodDeclarations.h"
extern Il2CppType Enumerator_t2985_0_0_0;
extern Il2CppType Transform_1_t2986_0_0_0;
extern MethodInfo ValueCollection_CopyTo_m17759_MethodInfo;
extern MethodInfo Dictionary_2_pick_value_m17652_MethodInfo;
extern MethodInfo Transform_1__ctor_m17767_MethodInfo;
extern MethodInfo Enumerator__ctor_m17762_MethodInfo;
struct Dictionary_2_t2974;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Do_ICollectionCopyTo<System.Int64>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Do_ICollectionCopyTo<System.Int64>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_ICollectionCopyTo_TisInt64_t705_m23402_gshared (Dictionary_2_t2974 * __this, Array_t * p0, int32_t p1, Transform_1_t2986 * p2, MethodInfo* method);
#define Dictionary_2_Do_ICollectionCopyTo_TisInt64_t705_m23402(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t2974 *, Array_t *, int32_t, Transform_1_t2986 *, MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisInt64_t705_m23402_gshared)(__this, p0, p1, p2, method)
struct Dictionary_2_t2974;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Do_CopyTo<System.Int64,System.Int64>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Do_CopyTo<System.Int64,System.Int64>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisInt64_t705_TisInt64_t705_m23403 (Dictionary_2_t2974 * __this, Int64U5BU5D_t1302* p0, int32_t p1, Transform_1_t2986 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern Il2CppGenericMethod ValueCollection_GetEnumerator_m17760_GenericMethod;
extern Il2CppGenericMethod ValueCollection_CopyTo_m17759_GenericMethod;
extern Il2CppGenericMethod Transform_1__ctor_m17767_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_ICollectionCopyTo_TisInt64_t705_m23402_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_CopyTo_TisInt64_t705_TisInt64_t705_m23403_GenericMethod;
extern Il2CppGenericMethod Enumerator__ctor_m17762_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int64>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ValueCollection__ctor_m17748_gshared (ValueCollection_t2984 * __this, Dictionary_2_t2974 * ___dictionary, MethodInfo* method)
{
	{
		Object__ctor_m1289(__this, /*hidden argument*/&Object__ctor_m1289_MethodInfo);
		Dictionary_2_t2974 * L_0 = ___dictionary;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t699 * L_1 = (ArgumentNullException_t699 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t699_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3455(L_1, (String_t*) &_stringLiteral1306, /*hidden argument*/&ArgumentNullException__ctor_m3455_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0014:
	{
		Dictionary_2_t2974 * L_2 = ___dictionary;
		__this->___dictionary_0 = L_2;
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int64>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
extern Il2CppGenericMethod ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m17749_GenericMethod;
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m17749_gshared (ValueCollection_t2984 * __this, int64_t ___item, MethodInfo* method)
{
	{
		NotSupportedException_t285 * L_0 = (NotSupportedException_t285 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t285_il2cpp_TypeInfo));
		NotSupportedException__ctor_m4761(L_0, (String_t*) &_stringLiteral1317, /*hidden argument*/&NotSupportedException__ctor_m4761_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int64>::System.Collections.Generic.ICollection<TValue>.Clear()
extern Il2CppGenericMethod ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m17750_GenericMethod;
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m17750_gshared (ValueCollection_t2984 * __this, MethodInfo* method)
{
	{
		NotSupportedException_t285 * L_0 = (NotSupportedException_t285 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t285_il2cpp_TypeInfo));
		NotSupportedException__ctor_m4761(L_0, (String_t*) &_stringLiteral1317, /*hidden argument*/&NotSupportedException__ctor_m4761_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int64>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
extern Il2CppGenericMethod ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m17751_GenericMethod;
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m17751_gshared (ValueCollection_t2984 * __this, int64_t ___item, MethodInfo* method)
{
	{
		Dictionary_2_t2974 * L_0 = (__this->___dictionary_0);
		int64_t L_1 = ___item;
		NullCheck(L_0);
		bool L_2 = (( bool (*) (Dictionary_2_t2974 *, int64_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(L_0, L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int64>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
extern Il2CppGenericMethod ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m17752_GenericMethod;
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m17752_gshared (ValueCollection_t2984 * __this, int64_t ___item, MethodInfo* method)
{
	{
		NotSupportedException_t285 * L_0 = (NotSupportedException_t285 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t285_il2cpp_TypeInfo));
		NotSupportedException__ctor_m4761(L_0, (String_t*) &_stringLiteral1317, /*hidden argument*/&NotSupportedException__ctor_m4761_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int64>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
extern Il2CppGenericMethod ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m17753_GenericMethod;
extern "C" Object_t* ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m17753_gshared (ValueCollection_t2984 * __this, MethodInfo* method)
{
	{
		Enumerator_t2985  L_0 = (( Enumerator_t2985  (*) (ValueCollection_t2984 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Enumerator_t2985  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (Object_t*)L_2;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int64>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern Il2CppGenericMethod ValueCollection_System_Collections_ICollection_CopyTo_m17754_GenericMethod;
extern "C" void ValueCollection_System_Collections_ICollection_CopyTo_m17754_gshared (ValueCollection_t2984 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method)
{
	Int64U5BU5D_t1302* V_0 = {0};
	{
		Array_t * L_0 = ___array;
		V_0 = ((Int64U5BU5D_t1302*)IsInst(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)));
		Int64U5BU5D_t1302* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		Int64U5BU5D_t1302* L_2 = V_0;
		int32_t L_3 = ___index;
		VirtActionInvoker2< Int64U5BU5D_t1302*, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), __this, L_2, L_3);
		return;
	}

IL_0013:
	{
		Dictionary_2_t2974 * L_4 = (__this->___dictionary_0);
		Array_t * L_5 = ___array;
		int32_t L_6 = ___index;
		NullCheck(L_4);
		(( void (*) (Dictionary_2_t2974 *, Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_4, L_5, L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Dictionary_2_t2974 * L_7 = (__this->___dictionary_0);
		Array_t * L_8 = ___array;
		int32_t L_9 = ___index;
		IntPtr_t L_10 = { IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		Transform_1_t2986 * L_11 = (Transform_1_t2986 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (Transform_1_t2986 *, Object_t *, IntPtr_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_11, NULL, L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		NullCheck(L_7);
		(( void (*) (Dictionary_2_t2974 *, Array_t *, int32_t, Transform_1_t2986 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)(L_7, L_8, L_9, L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int64>::System.Collections.IEnumerable.GetEnumerator()
extern Il2CppGenericMethod ValueCollection_System_Collections_IEnumerable_GetEnumerator_m17755_GenericMethod;
extern "C" Object_t * ValueCollection_System_Collections_IEnumerable_GetEnumerator_m17755_gshared (ValueCollection_t2984 * __this, MethodInfo* method)
{
	{
		Enumerator_t2985  L_0 = (( Enumerator_t2985  (*) (ValueCollection_t2984 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Enumerator_t2985  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (Object_t *)L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int64>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
extern Il2CppGenericMethod ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m17756_GenericMethod;
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m17756_gshared (ValueCollection_t2984 * __this, MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int64>::System.Collections.ICollection.get_IsSynchronized()
extern Il2CppGenericMethod ValueCollection_System_Collections_ICollection_get_IsSynchronized_m17757_GenericMethod;
extern "C" bool ValueCollection_System_Collections_ICollection_get_IsSynchronized_m17757_gshared (ValueCollection_t2984 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int64>::System.Collections.ICollection.get_SyncRoot()
extern Il2CppGenericMethod ValueCollection_System_Collections_ICollection_get_SyncRoot_m17758_GenericMethod;
extern "C" Object_t * ValueCollection_System_Collections_ICollection_get_SyncRoot_m17758_gshared (ValueCollection_t2984 * __this, MethodInfo* method)
{
	{
		Dictionary_2_t2974 * L_0 = (__this->___dictionary_0);
		NullCheck(L_0);
		Object_t * L_1 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(&ICollection_get_SyncRoot_m10470_MethodInfo, L_0);
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int64>::CopyTo(TValue[],System.Int32)
extern "C" void ValueCollection_CopyTo_m17759_gshared (ValueCollection_t2984 * __this, Int64U5BU5D_t1302* ___array, int32_t ___index, MethodInfo* method)
{
	{
		Dictionary_2_t2974 * L_0 = (__this->___dictionary_0);
		Int64U5BU5D_t1302* L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck(L_0);
		(( void (*) (Dictionary_2_t2974 *, Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_0, (Array_t *)(Array_t *)L_1, L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Dictionary_2_t2974 * L_3 = (__this->___dictionary_0);
		Int64U5BU5D_t1302* L_4 = ___array;
		int32_t L_5 = ___index;
		IntPtr_t L_6 = { IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		Transform_1_t2986 * L_7 = (Transform_1_t2986 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (Transform_1_t2986 *, Object_t *, IntPtr_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_7, NULL, L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		NullCheck(L_3);
		(( void (*) (Dictionary_2_t2974 *, Int64U5BU5D_t1302*, int32_t, Transform_1_t2986 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)(L_3, L_4, L_5, L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		return;
	}
}
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int64>::GetEnumerator()
extern "C" Enumerator_t2985  ValueCollection_GetEnumerator_m17760_gshared (ValueCollection_t2984 * __this, MethodInfo* method)
{
	{
		Dictionary_2_t2974 * L_0 = (__this->___dictionary_0);
		Enumerator_t2985  L_1 = {0};
		(( void (*) (Enumerator_t2985 *, Dictionary_2_t2974 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11)->method)(&L_1, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11));
		return L_1;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int64>::get_Count()
extern Il2CppGenericMethod ValueCollection_get_Count_m17761_GenericMethod;
extern "C" int32_t ValueCollection_get_Count_m17761_gshared (ValueCollection_t2984 * __this, MethodInfo* method)
{
	{
		Dictionary_2_t2974 * L_0 = (__this->___dictionary_0);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12), L_0);
		return L_1;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Int64>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m17762_gshared (Enumerator_t2985 * __this, Dictionary_2_t2974 * ___host, MethodInfo* method)
{
	{
		Dictionary_2_t2974 * L_0 = ___host;
		NullCheck(L_0);
		Enumerator_t2982  L_1 = (( Enumerator_t2982  (*) (Dictionary_2_t2974 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		__this->___host_enumerator_0 = L_1;
		return;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Int64>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod Enumerator_System_Collections_IEnumerator_get_Current_m17763_GenericMethod;
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m17763_gshared (Enumerator_t2985 * __this, MethodInfo* method)
{
	{
		Enumerator_t2982 * L_0 = &(__this->___host_enumerator_0);
		int64_t L_1 = (( int64_t (*) (Enumerator_t2982 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		int64_t L_2 = L_1;
		Object_t * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_2);
		return L_3;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Int64>::Dispose()
extern Il2CppGenericMethod Enumerator_Dispose_m17764_GenericMethod;
extern "C" void Enumerator_Dispose_m17764_gshared (Enumerator_t2985 * __this, MethodInfo* method)
{
	{
		Enumerator_t2982 * L_0 = &(__this->___host_enumerator_0);
		(( void (*) (Enumerator_t2982 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Int64>::MoveNext()
extern Il2CppGenericMethod Enumerator_MoveNext_m17765_GenericMethod;
extern "C" bool Enumerator_MoveNext_m17765_gshared (Enumerator_t2985 * __this, MethodInfo* method)
{
	{
		Enumerator_t2982 * L_0 = &(__this->___host_enumerator_0);
		bool L_1 = (( bool (*) (Enumerator_t2982 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_1;
	}
}
// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Int64>::get_Current()
extern Il2CppGenericMethod Enumerator_get_Current_m17766_GenericMethod;
extern "C" int64_t Enumerator_get_Current_m17766_gshared (Enumerator_t2985 * __this, MethodInfo* method)
{
	{
		Enumerator_t2982 * L_0 = &(__this->___host_enumerator_0);
		KeyValuePair_2_t2975 * L_1 = &(L_0->___current_3);
		int64_t L_2 = (( int64_t (*) (KeyValuePair_2_t2975 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		return L_2;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Int64>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m17767_gshared (Transform_1_t2986 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Int64>::Invoke(TKey,TValue)
extern Il2CppGenericMethod Transform_1_Invoke_m17768_GenericMethod;
extern "C" int64_t Transform_1_Invoke_m17768_gshared (Transform_1_t2986 * __this, Object_t * ___key, int64_t ___value, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m17768((Transform_1_t2986 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef int64_t (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___key, int64_t ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef int64_t (*FunctionPointerType) (Object_t * __this, Object_t * ___key, int64_t ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef int64_t (*FunctionPointerType) (Object_t * __this, int64_t ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Int64>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern Il2CppGenericMethod Transform_1_BeginInvoke_m17769_GenericMethod;
extern "C" Object_t * Transform_1_BeginInvoke_m17769_gshared (Transform_1_t2986 * __this, Object_t * ___key, int64_t ___value, AsyncCallback_t171 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___key;
	__d_args[1] = Box(InitializedTypeInfo(&Int64_t705_il2cpp_TypeInfo), &___value);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Int64>::EndInvoke(System.IAsyncResult)
extern Il2CppGenericMethod Transform_1_EndInvoke_m17770_GenericMethod;
extern "C" int64_t Transform_1_EndInvoke_m17770_gshared (Transform_1_t2986 * __this, Object_t * ___result, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(int64_t*)UnBox ((Il2CppCodeGenObject*)__result);
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m17771_gshared (Transform_1_t2973 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
extern Il2CppGenericMethod Transform_1_Invoke_m17772_GenericMethod;
extern "C" DictionaryEntry_t918  Transform_1_Invoke_m17772_gshared (Transform_1_t2973 * __this, Object_t * ___key, int64_t ___value, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m17772((Transform_1_t2973 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef DictionaryEntry_t918  (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___key, int64_t ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef DictionaryEntry_t918  (*FunctionPointerType) (Object_t * __this, Object_t * ___key, int64_t ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef DictionaryEntry_t918  (*FunctionPointerType) (Object_t * __this, int64_t ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern Il2CppGenericMethod Transform_1_BeginInvoke_m17773_GenericMethod;
extern "C" Object_t * Transform_1_BeginInvoke_m17773_gshared (Transform_1_t2973 * __this, Object_t * ___key, int64_t ___value, AsyncCallback_t171 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___key;
	__d_args[1] = Box(InitializedTypeInfo(&Int64_t705_il2cpp_TypeInfo), &___value);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
extern Il2CppGenericMethod Transform_1_EndInvoke_m17774_GenericMethod;
extern "C" DictionaryEntry_t918  Transform_1_EndInvoke_m17774_gshared (Transform_1_t2973 * __this, Object_t * ___result, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(DictionaryEntry_t918 *)UnBox ((Il2CppCodeGenObject*)__result);
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m17775_gshared (Transform_1_t2987 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::Invoke(TKey,TValue)
extern Il2CppGenericMethod Transform_1_Invoke_m17776_GenericMethod;
extern "C" KeyValuePair_2_t2975  Transform_1_Invoke_m17776_gshared (Transform_1_t2987 * __this, Object_t * ___key, int64_t ___value, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m17776((Transform_1_t2987 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef KeyValuePair_2_t2975  (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___key, int64_t ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef KeyValuePair_2_t2975  (*FunctionPointerType) (Object_t * __this, Object_t * ___key, int64_t ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef KeyValuePair_2_t2975  (*FunctionPointerType) (Object_t * __this, int64_t ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern Il2CppGenericMethod Transform_1_BeginInvoke_m17777_GenericMethod;
extern "C" Object_t * Transform_1_BeginInvoke_m17777_gshared (Transform_1_t2987 * __this, Object_t * ___key, int64_t ___value, AsyncCallback_t171 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___key;
	__d_args[1] = Box(InitializedTypeInfo(&Int64_t705_il2cpp_TypeInfo), &___value);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::EndInvoke(System.IAsyncResult)
extern Il2CppGenericMethod Transform_1_EndInvoke_m17778_GenericMethod;
extern "C" KeyValuePair_2_t2975  Transform_1_EndInvoke_m17778_gshared (Transform_1_t2987 * __this, Object_t * ___result, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(KeyValuePair_2_t2975 *)UnBox ((Il2CppCodeGenObject*)__result);
}
#ifndef _MSC_VER
#else
#endif

extern TypeInfo IDictionaryEnumerator_t915_il2cpp_TypeInfo;
extern MethodInfo IDictionaryEnumerator_get_Entry_m10473_MethodInfo;
extern MethodInfo ShimEnumerator_get_Entry_m17781_MethodInfo;
extern Il2CppGenericMethod ShimEnumerator_get_Entry_m17781_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m17779_gshared (ShimEnumerator_t2988 * __this, Dictionary_2_t2974 * ___host, MethodInfo* method)
{
	{
		Object__ctor_m1289(__this, /*hidden argument*/&Object__ctor_m1289_MethodInfo);
		Dictionary_2_t2974 * L_0 = ___host;
		NullCheck(L_0);
		Enumerator_t2982  L_1 = (( Enumerator_t2982  (*) (Dictionary_2_t2974 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		__this->___host_enumerator_0 = L_1;
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::MoveNext()
extern Il2CppGenericMethod ShimEnumerator_MoveNext_m17780_GenericMethod;
extern "C" bool ShimEnumerator_MoveNext_m17780_gshared (ShimEnumerator_t2988 * __this, MethodInfo* method)
{
	{
		Enumerator_t2982 * L_0 = &(__this->___host_enumerator_0);
		bool L_1 = (( bool (*) (Enumerator_t2982 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return L_1;
	}
}
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::get_Entry()
extern "C" DictionaryEntry_t918  ShimEnumerator_get_Entry_m17781_gshared (ShimEnumerator_t2988 * __this, MethodInfo* method)
{
	{
		Enumerator_t2982  L_0 = (__this->___host_enumerator_0);
		Enumerator_t2982  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		NullCheck(L_2);
		DictionaryEntry_t918  L_3 = (DictionaryEntry_t918 )InterfaceFuncInvoker0< DictionaryEntry_t918  >::Invoke(&IDictionaryEnumerator_get_Entry_m10473_MethodInfo, L_2);
		return L_3;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::get_Key()
extern Il2CppGenericMethod ShimEnumerator_get_Key_m17782_GenericMethod;
extern "C" Object_t * ShimEnumerator_get_Key_m17782_gshared (ShimEnumerator_t2988 * __this, MethodInfo* method)
{
	KeyValuePair_2_t2975  V_0 = {0};
	{
		Enumerator_t2982 * L_0 = &(__this->___host_enumerator_0);
		KeyValuePair_2_t2975  L_1 = (( KeyValuePair_2_t2975  (*) (Enumerator_t2982 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		V_0 = L_1;
		Object_t * L_2 = (( Object_t * (*) (KeyValuePair_2_t2975 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		Object_t * L_3 = L_2;
		return ((Object_t *)L_3);
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::get_Value()
extern Il2CppGenericMethod ShimEnumerator_get_Value_m17783_GenericMethod;
extern "C" Object_t * ShimEnumerator_get_Value_m17783_gshared (ShimEnumerator_t2988 * __this, MethodInfo* method)
{
	KeyValuePair_2_t2975  V_0 = {0};
	{
		Enumerator_t2982 * L_0 = &(__this->___host_enumerator_0);
		KeyValuePair_2_t2975  L_1 = (( KeyValuePair_2_t2975  (*) (Enumerator_t2982 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		V_0 = L_1;
		int64_t L_2 = (( int64_t (*) (KeyValuePair_2_t2975 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		int64_t L_3 = L_2;
		Object_t * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), &L_3);
		return L_4;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::get_Current()
extern Il2CppGenericMethod ShimEnumerator_get_Current_m17784_GenericMethod;
extern "C" Object_t * ShimEnumerator_get_Current_m17784_gshared (ShimEnumerator_t2988 * __this, MethodInfo* method)
{
	{
		DictionaryEntry_t918  L_0 = (DictionaryEntry_t918 )VirtFuncInvoker0< DictionaryEntry_t918  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), __this);
		DictionaryEntry_t918  L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&DictionaryEntry_t918_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Int64>::Equals(T,T)
// System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Int64>::GetHashCode(T)
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Int64>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_34.h"
extern TypeInfo DefaultComparer_t2991_il2cpp_TypeInfo;
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Int64>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_34MethodDeclarations.h"
extern Il2CppType GenericEqualityComparer_1_t2210_0_0_0;
extern Il2CppType DefaultComparer_t2991_0_0_0;
extern MethodInfo DefaultComparer__ctor_m17793_MethodInfo;
extern MethodInfo EqualityComparer_1_GetHashCode_m25396_MethodInfo;
extern Il2CppGenericMethod DefaultComparer__ctor_m17793_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_GetHashCode_m25396_GenericMethod;


// System.Void System.Collections.Generic.EqualityComparer`1<System.Int64>::.ctor()
extern Il2CppGenericMethod EqualityComparer_1__ctor_m17785_GenericMethod;
extern "C" void EqualityComparer_1__ctor_m17785_gshared (EqualityComparer_1_t2989 * __this, MethodInfo* method)
{
	{
		Object__ctor_m1289(__this, /*hidden argument*/&Object__ctor_m1289_MethodInfo);
		return;
	}
}
// System.Void System.Collections.Generic.EqualityComparer`1<System.Int64>::.cctor()
extern Il2CppGenericMethod EqualityComparer_1__cctor_m17786_GenericMethod;
extern "C" void EqualityComparer_1__cctor_m17786_gshared (Object_t * __this /* static, unused */, MethodInfo* method)
{
	DefaultComparer_t2991 * L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer = (DefaultComparer_t2991 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
	(( void (*) (DefaultComparer_t2991 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
	((EqualityComparer_1_t2989_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer;
}
// System.Int32 System.Collections.Generic.EqualityComparer`1<System.Int64>::System.Collections.IEqualityComparer.GetHashCode(System.Object)
extern Il2CppGenericMethod EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m17787_GenericMethod;
extern "C" int32_t EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m17787_gshared (EqualityComparer_1_t2989 * __this, Object_t * ___obj, MethodInfo* method)
{
	{
		Object_t * L_0 = ___obj;
		int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, int64_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), __this, ((*(int64_t*)((int64_t*)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_1;
	}
}
// System.Boolean System.Collections.Generic.EqualityComparer`1<System.Int64>::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
extern Il2CppGenericMethod EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m17788_GenericMethod;
extern "C" bool EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m17788_gshared (EqualityComparer_1_t2989 * __this, Object_t * ___x, Object_t * ___y, MethodInfo* method)
{
	{
		Object_t * L_0 = ___x;
		Object_t * L_1 = ___y;
		bool L_2 = (bool)VirtFuncInvoker2< bool, int64_t, int64_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), __this, ((*(int64_t*)((int64_t*)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))), ((*(int64_t*)((int64_t*)UnBox (L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_2;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1<System.Int64>::GetHashCode(T)
// System.Boolean System.Collections.Generic.EqualityComparer`1<System.Int64>::Equals(T,T)
// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1<System.Int64>::get_Default()
extern "C" EqualityComparer_1_t2989 * EqualityComparer_1_get_Default_m17789_gshared (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		EqualityComparer_1_t2989 * L_0 = ((EqualityComparer_1_t2989_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0;
		return L_0;
	}
}
// System.Collections.Generic.GenericEqualityComparer`1<System.Int64>
#include "mscorlib_System_Collections_Generic_GenericEqualityComparer__7.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo GenericEqualityComparer_1_t2990_il2cpp_TypeInfo;
// System.Collections.Generic.GenericEqualityComparer`1<System.Int64>
#include "mscorlib_System_Collections_Generic_GenericEqualityComparer__7MethodDeclarations.h"

extern MethodInfo IEquatable_1_Equals_m25397_MethodInfo;
extern Il2CppGenericMethod IEquatable_1_Equals_m25397_GenericMethod;


// System.Void System.Collections.Generic.GenericEqualityComparer`1<System.Int64>::.ctor()
extern Il2CppGenericMethod GenericEqualityComparer_1__ctor_m17790_GenericMethod;
extern "C" void GenericEqualityComparer_1__ctor_m17790_gshared (GenericEqualityComparer_1_t2990 * __this, MethodInfo* method)
{
	{
		(( void (*) (EqualityComparer_1_t2989 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.GenericEqualityComparer`1<System.Int64>::GetHashCode(T)
extern Il2CppGenericMethod GenericEqualityComparer_1_GetHashCode_m17791_GenericMethod;
extern "C" int32_t GenericEqualityComparer_1_GetHashCode_m17791_gshared (GenericEqualityComparer_1_t2990 * __this, int64_t ___obj, MethodInfo* method)
{
	{
		int64_t L_0 = ___obj;
		int64_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		if (L_2)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		NullCheck(Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___obj)));
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&Object_GetHashCode_m1961_MethodInfo, Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___obj)));
		return L_3;
	}
}
// System.Boolean System.Collections.Generic.GenericEqualityComparer`1<System.Int64>::Equals(T,T)
extern Il2CppGenericMethod GenericEqualityComparer_1_Equals_m17792_GenericMethod;
extern "C" bool GenericEqualityComparer_1_Equals_m17792_gshared (GenericEqualityComparer_1_t2990 * __this, int64_t ___x, int64_t ___y, MethodInfo* method)
{
	{
		int64_t L_0 = ___x;
		int64_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		int64_t L_3 = ___y;
		int64_t L_4 = L_3;
		Object_t * L_5 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_4);
		return ((((Object_t*)(Object_t *)L_5) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
	}

IL_0012:
	{
		int64_t L_6 = ___y;
		NullCheck(Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___x)));
		bool L_7 = (bool)InterfaceFuncInvoker1< bool, int64_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___x)), L_6);
		return L_7;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Int64>::.ctor()
extern "C" void DefaultComparer__ctor_m17793_gshared (DefaultComparer_t2991 * __this, MethodInfo* method)
{
	{
		(( void (*) (EqualityComparer_1_t2989 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Int64>::GetHashCode(T)
extern Il2CppGenericMethod DefaultComparer_GetHashCode_m17794_GenericMethod;
extern "C" int32_t DefaultComparer_GetHashCode_m17794_gshared (DefaultComparer_t2991 * __this, int64_t ___obj, MethodInfo* method)
{
	{
		int64_t L_0 = ___obj;
		int64_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		if (L_2)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		NullCheck(Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___obj)));
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&Object_GetHashCode_m1961_MethodInfo, Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___obj)));
		return L_3;
	}
}
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Int64>::Equals(T,T)
extern Il2CppGenericMethod DefaultComparer_Equals_m17795_GenericMethod;
extern "C" bool DefaultComparer_Equals_m17795_gshared (DefaultComparer_t2991 * __this, int64_t ___x, int64_t ___y, MethodInfo* method)
{
	{
		int64_t L_0 = ___x;
		int64_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		int64_t L_3 = ___y;
		int64_t L_4 = L_3;
		Object_t * L_5 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_4);
		return ((((Object_t*)(Object_t *)L_5) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
	}

IL_0012:
	{
		int64_t L_6 = ___y;
		int64_t L_7 = L_6;
		Object_t * L_8 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_7);
		NullCheck(Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___x)));
		bool L_9 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(&Object_Equals_m1960_MethodInfo, Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___x)), L_8);
		return L_9;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::Remove(T)
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif



// T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::get_Current()
#ifndef _MSC_VER
#else
#endif

extern Il2CppGenericMethod KeyValuePair_2_set_Key_m17798_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2_set_Value_m17800_GenericMethod;


// System.Void System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>::.ctor(TKey,TValue)
// TKey System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>::get_Key()
// System.Void System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>::set_Key(TKey)
// TValue System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>::get_Value()
// System.Void System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>::set_Value(TValue)
// System.String System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>::ToString()
// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_129.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t2993_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_129MethodDeclarations.h"

extern Il2CppType InternalEnumerator_1_t2993_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>(System.Int32)
extern "C" KeyValuePair_2_t2992  Array_InternalArray__get_Item_TisKeyValuePair_2_t2992_m23409_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisKeyValuePair_2_t2992_m23409(__this, p0, method) (( KeyValuePair_2_t2992  (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisKeyValuePair_2_t2992_m23409_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m17806_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisKeyValuePair_2_t2992_m23409_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::.ctor(System.Array)
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m17802_GenericMethod;
extern "C" void InternalEnumerator_1__ctor_m17802_gshared (InternalEnumerator_1_t2993 * __this, Array_t * ___array, MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m17803_GenericMethod;
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m17803_gshared (InternalEnumerator_1_t2993 * __this, MethodInfo* method)
{
	{
		KeyValuePair_2_t2992  L_0 = (( KeyValuePair_2_t2992  (*) (InternalEnumerator_1_t2993 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t2992  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::Dispose()
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m17804_GenericMethod;
extern "C" void InternalEnumerator_1_Dispose_m17804_gshared (InternalEnumerator_1_t2993 * __this, MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::MoveNext()
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m17805_GenericMethod;
extern "C" bool InternalEnumerator_1_MoveNext_m17805_gshared (InternalEnumerator_1_t2993 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_001b;
		}
	}
	{
		Array_t * L_1 = (__this->___array_0);
		NullCheck(L_1);
		int32_t L_2 = Array_get_Length_m4744(L_1, /*hidden argument*/&Array_get_Length_m4744_MethodInfo);
		__this->___idx_1 = L_2;
	}

IL_001b:
	{
		int32_t L_3 = (__this->___idx_1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = (__this->___idx_1);
		int32_t L_5 = ((int32_t)((int32_t)L_4-(int32_t)1));
		V_0 = L_5;
		__this->___idx_1 = L_5;
		int32_t L_6 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_6) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B5_0 = 0;
	}

IL_003e:
	{
		return G_B5_0;
	}
}
// T System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::get_Current()
extern "C" KeyValuePair_2_t2992  InternalEnumerator_1_get_Current_m17806_gshared (InternalEnumerator_1_t2993 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t1095 * L_1 = (InvalidOperationException_t1095 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1095_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m4740(L_1, (String_t*) &_stringLiteral1180, /*hidden argument*/&InvalidOperationException__ctor_m4740_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		int32_t L_2 = (__this->___idx_1);
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_0029;
		}
	}
	{
		InvalidOperationException_t1095 * L_3 = (InvalidOperationException_t1095 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1095_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m4740(L_3, (String_t*) &_stringLiteral1181, /*hidden argument*/&InvalidOperationException__ctor_m4740_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (__this->___array_0);
		Array_t * L_5 = (__this->___array_0);
		NullCheck(L_5);
		int32_t L_6 = Array_get_Length_m4744(L_5, /*hidden argument*/&Array_get_Length_m4744_MethodInfo);
		int32_t L_7 = (__this->___idx_1);
		NullCheck(L_4);
		KeyValuePair_2_t2992  L_8 = (( KeyValuePair_2_t2992  (*) (Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_4, ((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4201_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IDictionary_2_t3542_il2cpp_TypeInfo;



// System.Void System.Collections.Generic.IDictionary`2<System.String,System.Int64>::Add(TKey,TValue)
// System.Boolean System.Collections.Generic.IDictionary`2<System.String,System.Int64>::Remove(TKey)
// System.Boolean System.Collections.Generic.IDictionary`2<System.String,System.Int64>::TryGetValue(TKey,TValue&)
// TValue System.Collections.Generic.IDictionary`2<System.String,System.Int64>::get_Item(TKey)
// System.Void System.Collections.Generic.IDictionary`2<System.String,System.Int64>::set_Item(TKey,TValue)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.IDictionary`2<System.String,System.Int64>::get_Keys()
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.IDictionary`2<System.String,System.Int64>::get_Values()
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_27.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int64,System.String>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_58.h"
extern TypeInfo Enumerator_t2995_il2cpp_TypeInfo;
extern TypeInfo Transform_1_t2997_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int64,System.String>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_58MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_27MethodDeclarations.h"
extern Il2CppType Enumerator_t2995_0_0_0;
extern Il2CppType Transform_1_t2997_0_0_0;
extern MethodInfo KeyCollection_CopyTo_m17818_MethodInfo;
extern MethodInfo Dictionary_2_pick_key_m17649_MethodInfo;
extern MethodInfo Transform_1__ctor_m17838_MethodInfo;
extern MethodInfo Enumerator__ctor_m17821_MethodInfo;
struct Dictionary_2_t565;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int64>::Do_ICollectionCopyTo<System.String>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int64>::Do_ICollectionCopyTo<System.String>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
#define Dictionary_2_Do_ICollectionCopyTo_TisString_t_m23420(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t565 *, Array_t *, int32_t, Transform_1_t2997 *, MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisObject_t_m23400_gshared)(__this, p0, p1, p2, method)
struct Dictionary_2_t565;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int64>::Do_CopyTo<System.String,System.String>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int64>::Do_CopyTo<System.String,System.String>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisString_t_TisString_t_m23421 (Dictionary_2_t565 * __this, StringU5BU5D_t423* p0, int32_t p1, Transform_1_t2997 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern Il2CppGenericMethod KeyCollection_GetEnumerator_m17819_GenericMethod;
extern Il2CppGenericMethod KeyCollection_CopyTo_m17818_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_pick_key_m17649_GenericMethod;
extern Il2CppGenericMethod Transform_1__ctor_m17838_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_ICollectionCopyTo_TisString_t_m23420_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_CopyTo_TisString_t_TisString_t_m23421_GenericMethod;
extern Il2CppGenericMethod Enumerator__ctor_m17821_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Int64>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Int64>::System.Collections.Generic.ICollection<TKey>.Add(TKey)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Int64>::System.Collections.Generic.ICollection<TKey>.Clear()
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Int64>::System.Collections.Generic.ICollection<TKey>.Contains(TKey)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Int64>::System.Collections.Generic.ICollection<TKey>.Remove(TKey)
// System.Collections.Generic.IEnumerator`1<TKey> System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Int64>::System.Collections.Generic.IEnumerable<TKey>.GetEnumerator()
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Int64>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Int64>::System.Collections.IEnumerable.GetEnumerator()
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Int64>::System.Collections.Generic.ICollection<TKey>.get_IsReadOnly()
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Int64>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Int64>::System.Collections.ICollection.get_SyncRoot()
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Int64>::CopyTo(TKey[],System.Int32)
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Int64>::GetEnumerator()
// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Int64>::get_Count()
#ifndef _MSC_VER
#else
#endif

extern Il2CppGenericMethod Enumerator_get_CurrentKey_m17833_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_GetEnumerator_m17683_GenericMethod;
extern Il2CppGenericMethod Enumerator_Dispose_m17837_GenericMethod;
extern Il2CppGenericMethod Enumerator_MoveNext_m17831_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,System.Int64>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,System.Int64>::System.Collections.IEnumerator.get_Current()
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,System.Int64>::Dispose()
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,System.Int64>::MoveNext()
// TKey System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,System.Int64>::get_Current()
#ifndef _MSC_VER
#else
#endif

extern Il2CppGenericMethod Enumerator_VerifyCurrent_m17836_GenericMethod;
extern Il2CppGenericMethod Enumerator_get_CurrentValue_m17834_GenericMethod;
extern Il2CppGenericMethod Enumerator_VerifyState_m17835_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Int64>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Int64>::System.Collections.IEnumerator.get_Current()
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Int64>::System.Collections.IDictionaryEnumerator.get_Entry()
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Int64>::System.Collections.IDictionaryEnumerator.get_Key()
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Int64>::System.Collections.IDictionaryEnumerator.get_Value()
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Int64>::MoveNext()
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Int64>::get_Current()
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Int64>::get_CurrentKey()
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Int64>::get_CurrentValue()
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Int64>::VerifyState()
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Int64>::VerifyCurrent()
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Int64>::Dispose()
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int64,System.String>::.ctor(System.Object,System.IntPtr)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int64,System.String>::Invoke(TKey,TValue)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int64,System.String>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int64,System.String>::EndInvoke(System.IAsyncResult)
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_27.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int64,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_59.h"
extern TypeInfo Enumerator_t2999_il2cpp_TypeInfo;
extern TypeInfo Transform_1_t3000_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int64,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_59MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_27MethodDeclarations.h"
extern Il2CppType Enumerator_t2999_0_0_0;
extern Il2CppType Transform_1_t3000_0_0_0;
extern MethodInfo ValueCollection_CopyTo_m17853_MethodInfo;
extern MethodInfo Dictionary_2_pick_value_m17651_MethodInfo;
extern MethodInfo Transform_1__ctor_m17861_MethodInfo;
extern MethodInfo Enumerator__ctor_m17856_MethodInfo;
struct Dictionary_2_t565;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int64>::Do_ICollectionCopyTo<System.Int64>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int64>::Do_ICollectionCopyTo<System.Int64>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
#define Dictionary_2_Do_ICollectionCopyTo_TisInt64_t705_m23423(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t565 *, Array_t *, int32_t, Transform_1_t3000 *, MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisInt64_t705_m23402_gshared)(__this, p0, p1, p2, method)
struct Dictionary_2_t565;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int64>::Do_CopyTo<System.Int64,System.Int64>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int64>::Do_CopyTo<System.Int64,System.Int64>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisInt64_t705_TisInt64_t705_m23424 (Dictionary_2_t565 * __this, Int64U5BU5D_t1302* p0, int32_t p1, Transform_1_t3000 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern Il2CppGenericMethod Dictionary_2_ContainsValue_m17663_GenericMethod;
extern Il2CppGenericMethod ValueCollection_GetEnumerator_m17854_GenericMethod;
extern Il2CppGenericMethod ValueCollection_CopyTo_m17853_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_pick_value_m17651_GenericMethod;
extern Il2CppGenericMethod Transform_1__ctor_m17861_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_ICollectionCopyTo_TisInt64_t705_m23423_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_CopyTo_TisInt64_t705_TisInt64_t705_m23424_GenericMethod;
extern Il2CppGenericMethod Enumerator__ctor_m17856_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Int64>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Int64>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Int64>::System.Collections.Generic.ICollection<TValue>.Clear()
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Int64>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Int64>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Int64>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Int64>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Int64>::System.Collections.IEnumerable.GetEnumerator()
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Int64>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Int64>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Int64>::System.Collections.ICollection.get_SyncRoot()
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Int64>::CopyTo(TValue[],System.Int32)
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Int64>::GetEnumerator()
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Int64>::get_Count()
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,System.Int64>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,System.Int64>::System.Collections.IEnumerator.get_Current()
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,System.Int64>::Dispose()
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,System.Int64>::MoveNext()
// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,System.Int64>::get_Current()
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int64,System.Int64>::.ctor(System.Object,System.IntPtr)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int64,System.Int64>::Invoke(TKey,TValue)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int64,System.Int64>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int64,System.Int64>::EndInvoke(System.IAsyncResult)
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int64,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int64,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int64,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int64,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int64,System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::.ctor(System.Object,System.IntPtr)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int64,System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::Invoke(TKey,TValue)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int64,System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int64,System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::EndInvoke(System.IAsyncResult)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Transform_1_t3002_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_62MethodDeclarations.h"



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::.ctor(System.Object,System.IntPtr)
extern Il2CppGenericMethod Transform_1__ctor_m17870_GenericMethod;
extern "C" void Transform_1__ctor_m17870_gshared (Transform_1_t3002 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::Invoke(TKey,TValue)
extern Il2CppGenericMethod Transform_1_Invoke_m17872_GenericMethod;
extern "C" KeyValuePair_2_t2992  Transform_1_Invoke_m17872_gshared (Transform_1_t3002 * __this, Object_t * ___key, int64_t ___value, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m17872((Transform_1_t3002 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef KeyValuePair_2_t2992  (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___key, int64_t ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef KeyValuePair_2_t2992  (*FunctionPointerType) (Object_t * __this, Object_t * ___key, int64_t ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef KeyValuePair_2_t2992  (*FunctionPointerType) (Object_t * __this, int64_t ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern Il2CppGenericMethod Transform_1_BeginInvoke_m17874_GenericMethod;
extern "C" Object_t * Transform_1_BeginInvoke_m17874_gshared (Transform_1_t3002 * __this, Object_t * ___key, int64_t ___value, AsyncCallback_t171 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___key;
	__d_args[1] = Box(InitializedTypeInfo(&Int64_t705_il2cpp_TypeInfo), &___value);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::EndInvoke(System.IAsyncResult)
extern Il2CppGenericMethod Transform_1_EndInvoke_m17876_GenericMethod;
extern "C" KeyValuePair_2_t2992  Transform_1_EndInvoke_m17876_gshared (Transform_1_t3002 * __this, Object_t * ___result, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(KeyValuePair_2_t2992 *)UnBox ((Il2CppCodeGenObject*)__result);
}
#ifndef _MSC_VER
#else
#endif

extern MethodInfo ShimEnumerator_get_Entry_m17879_MethodInfo;
extern Il2CppGenericMethod Enumerator_get_Current_m17832_GenericMethod;
extern Il2CppGenericMethod ShimEnumerator_get_Entry_m17879_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.String,System.Int64>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.String,System.Int64>::MoveNext()
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.String,System.Int64>::get_Entry()
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.String,System.Int64>::get_Key()
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.String,System.Int64>::get_Value()
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.String,System.Int64>::get_Current()
// System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>
#include "mscorlib_System_Collections_Generic_List_1_gen_25.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo List_1_t574_il2cpp_TypeInfo;
// System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>
#include "mscorlib_System_Collections_Generic_List_1_gen_25MethodDeclarations.h"

// UnityEngine.Networking.Match.MatchDirectConnectInfo
#include "UnityEngine_UnityEngine_Networking_Match_MatchDirectConnectI.h"
#include "UnityEngine_ArrayTypes.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.Networking.Match.MatchDirectConnectInfo>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_27.h"
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1_26.h"
// System.Predicate`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>
#include "mscorlib_System_Predicate_1_gen_27.h"
// System.Collections.Generic.Comparer`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_26.h"
// System.Comparison`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>
#include "mscorlib_System_Comparison_1_gen_27.h"
extern TypeInfo MatchDirectConnectInfo_t573_il2cpp_TypeInfo;
extern TypeInfo NullReferenceException_t677_il2cpp_TypeInfo;
extern TypeInfo InvalidCastException_t1795_il2cpp_TypeInfo;
extern TypeInfo MatchDirectConnectInfoU5BU5D_t3004_il2cpp_TypeInfo;
extern TypeInfo Enumerator_t3007_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t3550_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t3551_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t3549_il2cpp_TypeInfo;
extern TypeInfo ReadOnlyCollection_1_t3009_il2cpp_TypeInfo;
extern TypeInfo Predicate_1_t3013_il2cpp_TypeInfo;
extern TypeInfo Comparer_1_t3014_il2cpp_TypeInfo;
// System.Math
#include "mscorlib_System_MathMethodDeclarations.h"
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1_26MethodDeclarations.h"
// System.Predicate`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>
#include "mscorlib_System_Predicate_1_gen_27MethodDeclarations.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.Networking.Match.MatchDirectConnectInfo>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_27MethodDeclarations.h"
// System.Collections.Generic.Comparer`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_26MethodDeclarations.h"
extern Il2CppType List_1_t574_0_0_0;
extern Il2CppType MatchDirectConnectInfoU5BU5D_t3004_0_0_0;
extern Il2CppType Enumerator_t3007_0_0_0;
extern Il2CppType ICollection_1_t3550_0_0_0;
extern Il2CppType IEnumerable_1_t3551_0_0_0;
extern Il2CppType IEnumerator_1_t3549_0_0_0;
extern Il2CppType ReadOnlyCollection_1_t3009_0_0_0;
extern Il2CppType Predicate_1_t3013_0_0_0;
extern Il2CppType Comparer_1_t3014_0_0_0;
extern MethodInfo List_1_get_Item_m17929_MethodInfo;
extern MethodInfo List_1_set_Item_m17930_MethodInfo;
extern MethodInfo ArgumentOutOfRangeException__ctor_m4928_MethodInfo;
extern MethodInfo List_1_Add_m17901_MethodInfo;
extern MethodInfo List_1_Contains_m17908_MethodInfo;
extern MethodInfo List_1_IndexOf_m17914_MethodInfo;
extern MethodInfo List_1_Insert_m17917_MethodInfo;
extern MethodInfo List_1_Remove_m17919_MethodInfo;
extern MethodInfo Math_Max_m5908_MethodInfo;
extern MethodInfo ICollection_1_get_Count_m25398_MethodInfo;
extern MethodInfo ICollection_1_CopyTo_m25399_MethodInfo;
extern MethodInfo IEnumerable_1_GetEnumerator_m25400_MethodInfo;
extern MethodInfo IEnumerator_1_get_Current_m25401_MethodInfo;
extern MethodInfo ReadOnlyCollection_1__ctor_m17947_MethodInfo;
extern MethodInfo Predicate_1_Invoke_m18022_MethodInfo;
extern MethodInfo Enumerator__ctor_m17941_MethodInfo;
extern MethodInfo List_1_RemoveAt_m17921_MethodInfo;
extern MethodInfo Array_Reverse_m5940_MethodInfo;
extern MethodInfo Array_Copy_m4971_MethodInfo;
struct Array_t;
struct Array_t;
// Declaration System.Void System.Array::Resize<System.Object>(!!0[]&,System.Int32)
// System.Void System.Array::Resize<System.Object>(!!0[]&,System.Int32)
extern "C" void Array_Resize_TisObject_t_m21369_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t269** p0, int32_t p1, MethodInfo* method);
#define Array_Resize_TisObject_t_m21369(__this /* static, unused */, p0, p1, method) (( void (*) (Object_t * /* static, unused */, ObjectU5BU5D_t269**, int32_t, MethodInfo*))Array_Resize_TisObject_t_m21369_gshared)(__this /* static, unused */, p0, p1, method)
// Declaration System.Void System.Array::Resize<UnityEngine.Networking.Match.MatchDirectConnectInfo>(!!0[]&,System.Int32)
// System.Void System.Array::Resize<UnityEngine.Networking.Match.MatchDirectConnectInfo>(!!0[]&,System.Int32)
#define Array_Resize_TisMatchDirectConnectInfo_t573_m23454(__this /* static, unused */, p0, p1, method) (( void (*) (Object_t * /* static, unused */, MatchDirectConnectInfoU5BU5D_t3004**, int32_t, MethodInfo*))Array_Resize_TisObject_t_m21369_gshared)(__this /* static, unused */, p0, p1, method)
struct Array_t;
// System.Collections.Generic.EqualityComparer`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_35.h"
struct Array_t;
// Declaration System.Int32 System.Array::IndexOf<System.Object>(!!0[],!!0,System.Int32,System.Int32)
// System.Int32 System.Array::IndexOf<System.Object>(!!0[],!!0,System.Int32,System.Int32)
extern "C" int32_t Array_IndexOf_TisObject_t_m10471_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t269* p0, Object_t * p1, int32_t p2, int32_t p3, MethodInfo* method);
#define Array_IndexOf_TisObject_t_m10471(__this /* static, unused */, p0, p1, p2, p3, method) (( int32_t (*) (Object_t * /* static, unused */, ObjectU5BU5D_t269*, Object_t *, int32_t, int32_t, MethodInfo*))Array_IndexOf_TisObject_t_m10471_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
// Declaration System.Int32 System.Array::IndexOf<UnityEngine.Networking.Match.MatchDirectConnectInfo>(!!0[],!!0,System.Int32,System.Int32)
// System.Int32 System.Array::IndexOf<UnityEngine.Networking.Match.MatchDirectConnectInfo>(!!0[],!!0,System.Int32,System.Int32)
#define Array_IndexOf_TisMatchDirectConnectInfo_t573_m23456(__this /* static, unused */, p0, p1, p2, p3, method) (( int32_t (*) (Object_t * /* static, unused */, MatchDirectConnectInfoU5BU5D_t3004*, MatchDirectConnectInfo_t573 *, int32_t, int32_t, MethodInfo*))Array_IndexOf_TisObject_t_m10471_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
struct Array_t;
struct Array_t;
// Declaration System.Void System.Array::Sort<System.Object>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
// System.Void System.Array::Sort<System.Object>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
extern "C" void Array_Sort_TisObject_t_m21438_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t269* p0, int32_t p1, int32_t p2, Object_t* p3, MethodInfo* method);
#define Array_Sort_TisObject_t_m21438(__this /* static, unused */, p0, p1, p2, p3, method) (( void (*) (Object_t * /* static, unused */, ObjectU5BU5D_t269*, int32_t, int32_t, Object_t*, MethodInfo*))Array_Sort_TisObject_t_m21438_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
// Declaration System.Void System.Array::Sort<UnityEngine.Networking.Match.MatchDirectConnectInfo>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
// System.Void System.Array::Sort<UnityEngine.Networking.Match.MatchDirectConnectInfo>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
#define Array_Sort_TisMatchDirectConnectInfo_t573_m23458(__this /* static, unused */, p0, p1, p2, p3, method) (( void (*) (Object_t * /* static, unused */, MatchDirectConnectInfoU5BU5D_t3004*, int32_t, int32_t, Object_t*, MethodInfo*))Array_Sort_TisObject_t_m21438_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
struct Array_t;
struct Array_t;
// System.Comparison`1<System.Object>
#include "mscorlib_System_Comparison_1_gen_3.h"
// Declaration System.Void System.Array::Sort<System.Object>(!!0[],System.Int32,System.Comparison`1<!!0>)
// System.Void System.Array::Sort<System.Object>(!!0[],System.Int32,System.Comparison`1<!!0>)
extern "C" void Array_Sort_TisObject_t_m21622_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t269* p0, int32_t p1, Comparison_1_t2387 * p2, MethodInfo* method);
#define Array_Sort_TisObject_t_m21622(__this /* static, unused */, p0, p1, p2, method) (( void (*) (Object_t * /* static, unused */, ObjectU5BU5D_t269*, int32_t, Comparison_1_t2387 *, MethodInfo*))Array_Sort_TisObject_t_m21622_gshared)(__this /* static, unused */, p0, p1, p2, method)
// Declaration System.Void System.Array::Sort<UnityEngine.Networking.Match.MatchDirectConnectInfo>(!!0[],System.Int32,System.Comparison`1<!!0>)
// System.Void System.Array::Sort<UnityEngine.Networking.Match.MatchDirectConnectInfo>(!!0[],System.Int32,System.Comparison`1<!!0>)
#define Array_Sort_TisMatchDirectConnectInfo_t573_m23466(__this /* static, unused */, p0, p1, p2, method) (( void (*) (Object_t * /* static, unused */, MatchDirectConnectInfoU5BU5D_t3004*, int32_t, Comparison_1_t3016 *, MethodInfo*))Array_Sort_TisObject_t_m21622_gshared)(__this /* static, unused */, p0, p1, p2, method)
extern Il2CppGenericMethod List_1_get_Item_m17929_GenericMethod;
extern Il2CppGenericMethod List_1_set_Item_m17930_GenericMethod;
extern Il2CppGenericMethod Array_Resize_TisMatchDirectConnectInfo_t573_m23454_GenericMethod;
extern Il2CppGenericMethod List_1_CheckIndex_m17916_GenericMethod;
extern Il2CppGenericMethod List_1_GetEnumerator_m17913_GenericMethod;
extern Il2CppGenericMethod List_1_Add_m17901_GenericMethod;
extern Il2CppGenericMethod List_1_Contains_m17908_GenericMethod;
extern Il2CppGenericMethod List_1_IndexOf_m17914_GenericMethod;
extern Il2CppGenericMethod List_1_Insert_m17917_GenericMethod;
extern Il2CppGenericMethod List_1_Remove_m17919_GenericMethod;
extern Il2CppGenericMethod List_1_GrowIfNeeded_m17902_GenericMethod;
extern Il2CppGenericMethod List_1_get_Capacity_m17927_GenericMethod;
extern Il2CppGenericMethod List_1_set_Capacity_m17928_GenericMethod;
extern Il2CppGenericMethod ICollection_1_get_Count_m25398_GenericMethod;
extern Il2CppGenericMethod ICollection_1_CopyTo_m25399_GenericMethod;
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m25400_GenericMethod;
extern Il2CppGenericMethod IEnumerator_1_get_Current_m25401_GenericMethod;
extern Il2CppGenericMethod List_1_CheckCollection_m17918_GenericMethod;
extern Il2CppGenericMethod List_1_AddCollection_m17903_GenericMethod;
extern Il2CppGenericMethod List_1_AddEnumerable_m17904_GenericMethod;
extern Il2CppGenericMethod ReadOnlyCollection_1__ctor_m17947_GenericMethod;
extern Il2CppGenericMethod Array_IndexOf_TisMatchDirectConnectInfo_t573_m23456_GenericMethod;
extern Il2CppGenericMethod List_1_CheckMatch_m17911_GenericMethod;
extern Il2CppGenericMethod List_1_GetIndex_m17912_GenericMethod;
extern Il2CppGenericMethod Predicate_1_Invoke_m18022_GenericMethod;
extern Il2CppGenericMethod Enumerator__ctor_m17941_GenericMethod;
extern Il2CppGenericMethod List_1_Shift_m17915_GenericMethod;
extern Il2CppGenericMethod List_1_RemoveAt_m17921_GenericMethod;
extern Il2CppGenericMethod Comparer_1_get_Default_m18028_GenericMethod;
extern Il2CppGenericMethod Array_Sort_TisMatchDirectConnectInfo_t573_m23458_GenericMethod;
extern Il2CppGenericMethod Array_Sort_TisMatchDirectConnectInfo_t573_m23466_GenericMethod;


// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::.ctor()
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::.ctor(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::.cctor()
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.IEnumerable.GetEnumerator()
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.IList.Add(System.Object)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.IList.Contains(System.Object)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.IList.IndexOf(System.Object)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.IList.Insert(System.Int32,System.Object)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.IList.Remove(System.Object)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.ICollection.get_SyncRoot()
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.IList.get_IsFixedSize()
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.IList.get_IsReadOnly()
// System.Object System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.IList.get_Item(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.IList.set_Item(System.Int32,System.Object)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::Add(T)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::GrowIfNeeded(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::AddCollection(System.Collections.Generic.ICollection`1<T>)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::AsReadOnly()
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::Clear()
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::Contains(T)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::CopyTo(T[],System.Int32)
// T System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::Find(System.Predicate`1<T>)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::CheckMatch(System.Predicate`1<T>)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::GetEnumerator()
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::IndexOf(T)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::Shift(System.Int32,System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::CheckIndex(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::Remove(T)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::RemoveAll(System.Predicate`1<T>)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::RemoveAt(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::Reverse()
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::Sort()
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::Sort(System.Comparison`1<T>)
// T[] System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::ToArray()
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::TrimExcess()
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::get_Capacity()
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::set_Capacity(System.Int32)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::get_Count()
// T System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::get_Item(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::Remove(T)
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif



// T System.Collections.Generic.IEnumerator`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::get_Current()
// System.Array/InternalEnumerator`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_130.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3005_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_130MethodDeclarations.h"

extern Il2CppType InternalEnumerator_1_t3005_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.Networking.Match.MatchDirectConnectInfo>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.Networking.Match.MatchDirectConnectInfo>(System.Int32)
#define Array_InternalArray__get_Item_TisMatchDirectConnectInfo_t573_m23432(__this, p0, method) (( MatchDirectConnectInfo_t573 * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m21358_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m17935_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisMatchDirectConnectInfo_t573_m23432_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::MoveNext()
// T System.Array/InternalEnumerator`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t3008_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t4202_il2cpp_TypeInfo;

// UnityEngine.Networking.Match.ResponseBase
#include "UnityEngine_UnityEngine_Networking_Match_ResponseBase.h"


// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.Networking.Match.ResponseBase>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Networking.Match.ResponseBase>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Networking.Match.ResponseBase>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Networking.Match.ResponseBase>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Networking.Match.ResponseBase>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Networking.Match.ResponseBase>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Networking.Match.ResponseBase>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t4203_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.Networking.Match.ResponseBase>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4204_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<UnityEngine.Networking.Match.ResponseBase>::get_Current()
// System.Array/InternalEnumerator`1<UnityEngine.Networking.Match.ResponseBase>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_131.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3006_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<UnityEngine.Networking.Match.ResponseBase>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_131MethodDeclarations.h"

extern TypeInfo ResponseBase_t561_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t3006_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.Networking.Match.ResponseBase>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.Networking.Match.ResponseBase>(System.Int32)
#define Array_InternalArray__get_Item_TisResponseBase_t561_m23443(__this, p0, method) (( ResponseBase_t561 * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m21358_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m17940_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisResponseBase_t561_m23443_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<UnityEngine.Networking.Match.ResponseBase>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<UnityEngine.Networking.Match.ResponseBase>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<UnityEngine.Networking.Match.ResponseBase>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.Networking.Match.ResponseBase>::MoveNext()
// T System.Array/InternalEnumerator`1<UnityEngine.Networking.Match.ResponseBase>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4205_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityEngine.Networking.Match.ResponseBase>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.Networking.Match.ResponseBase>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.Networking.Match.ResponseBase>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.Networking.Match.ResponseBase>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.Networking.Match.ResponseBase>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif

extern MethodInfo InvalidOperationException__ctor_m4747_MethodInfo;
extern MethodInfo Object_GetType_m1381_MethodInfo;
extern MethodInfo Type_get_FullName_m3523_MethodInfo;
extern Il2CppGenericMethod Enumerator_VerifyState_m17944_GenericMethod;


// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.Networking.Match.MatchDirectConnectInfo>::.ctor(System.Collections.Generic.List`1<T>)
// System.Object System.Collections.Generic.List`1/Enumerator<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.IEnumerator.get_Current()
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.Networking.Match.MatchDirectConnectInfo>::Dispose()
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.Networking.Match.MatchDirectConnectInfo>::VerifyState()
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.Networking.Match.MatchDirectConnectInfo>::MoveNext()
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.Networking.Match.MatchDirectConnectInfo>::get_Current()
#ifndef _MSC_VER
#else
#endif

extern TypeInfo Array_t_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_t399_il2cpp_TypeInfo;
// System.Collections.ObjectModel.Collection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_gen_26MethodDeclarations.h"
extern Il2CppType IList_1_t3008_0_0_0;
extern MethodInfo ReadOnlyCollection_1_get_Item_m17976_MethodInfo;
extern MethodInfo NotSupportedException__ctor_m1453_MethodInfo;
extern MethodInfo IList_1_get_Item_m25402_MethodInfo;
extern MethodInfo ICollection_CopyTo_m4736_MethodInfo;
extern MethodInfo IEnumerable_GetEnumerator_m3480_MethodInfo;
extern MethodInfo ICollection_1_Contains_m25403_MethodInfo;
extern MethodInfo IList_1_IndexOf_m25404_MethodInfo;
extern Il2CppGenericMethod ReadOnlyCollection_1_get_Item_m17976_GenericMethod;
extern Il2CppGenericMethod IList_1_get_Item_m25402_GenericMethod;
extern Il2CppGenericMethod Collection_1_IsValidItem_m18008_GenericMethod;
extern Il2CppGenericMethod ICollection_1_Contains_m25403_GenericMethod;
extern Il2CppGenericMethod IList_1_IndexOf_m25404_GenericMethod;


// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::.ctor(System.Collections.Generic.IList`1<T>)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.Generic.ICollection<T>.Add(T)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.Generic.ICollection<T>.Clear()
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.Generic.IList<T>.Insert(System.Int32,T)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.Generic.ICollection<T>.Remove(T)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.Generic.IList<T>.RemoveAt(System.Int32)
// T System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.Generic.IList<T>.get_Item(System.Int32)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.Generic.IList<T>.set_Item(System.Int32,T)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.IEnumerable.GetEnumerator()
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.IList.Add(System.Object)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.IList.Clear()
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.IList.Contains(System.Object)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.IList.IndexOf(System.Object)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.IList.Insert(System.Int32,System.Object)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.IList.Remove(System.Object)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.IList.RemoveAt(System.Int32)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.ICollection.get_SyncRoot()
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.IList.get_IsFixedSize()
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.IList.get_IsReadOnly()
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.IList.get_Item(System.Int32)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.IList.set_Item(System.Int32,System.Object)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::Contains(T)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::CopyTo(T[],System.Int32)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::GetEnumerator()
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::IndexOf(T)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::get_Count()
// T System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::get_Item(System.Int32)
// System.Collections.ObjectModel.Collection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_gen_26.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Collection_1_t3010_il2cpp_TypeInfo;

extern TypeInfo IList_t796_il2cpp_TypeInfo;
extern Il2CppType Collection_1_t3010_0_0_0;
extern Il2CppType MatchDirectConnectInfo_t573_0_0_0;
extern MethodInfo ICollection_1_get_IsReadOnly_m25405_MethodInfo;
extern MethodInfo Collection_1_SetItem_m18007_MethodInfo;
extern MethodInfo List_1__ctor_m17883_MethodInfo;
extern MethodInfo Collection_1_InsertItem_m18000_MethodInfo;
extern MethodInfo Collection_1_IndexOf_m17998_MethodInfo;
extern MethodInfo Collection_1_RemoveItem_m18003_MethodInfo;
extern MethodInfo Collection_1_ClearItems_m17994_MethodInfo;
extern MethodInfo ICollection_1_Clear_m25406_MethodInfo;
extern MethodInfo IList_1_Insert_m25407_MethodInfo;
extern MethodInfo IList_1_RemoveAt_m25408_MethodInfo;
extern MethodInfo IList_1_set_Item_m25409_MethodInfo;
extern MethodInfo ICollection_get_IsSynchronized_m10750_MethodInfo;
extern MethodInfo IList_get_IsFixedSize_m10751_MethodInfo;
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m25405_GenericMethod;
extern Il2CppGenericMethod Collection_1_IsSynchronized_m18011_GenericMethod;
extern Il2CppGenericMethod Collection_1_IsFixedSize_m18012_GenericMethod;
extern Il2CppGenericMethod Collection_1_ConvertItem_m18009_GenericMethod;
extern Il2CppGenericMethod Collection_1_SetItem_m18007_GenericMethod;
extern Il2CppGenericMethod List_1__ctor_m17883_GenericMethod;
extern Il2CppGenericMethod Collection_1_InsertItem_m18000_GenericMethod;
extern Il2CppGenericMethod Collection_1_CheckWritable_m18010_GenericMethod;
extern Il2CppGenericMethod Collection_1_IndexOf_m17998_GenericMethod;
extern Il2CppGenericMethod Collection_1_RemoveItem_m18003_GenericMethod;
extern Il2CppGenericMethod Collection_1_ClearItems_m17994_GenericMethod;
extern Il2CppGenericMethod ICollection_1_Clear_m25406_GenericMethod;
extern Il2CppGenericMethod IList_1_Insert_m25407_GenericMethod;
extern Il2CppGenericMethod IList_1_RemoveAt_m25408_GenericMethod;
extern Il2CppGenericMethod IList_1_set_Item_m25409_GenericMethod;


// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::.ctor()
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.IEnumerable.GetEnumerator()
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.IList.Add(System.Object)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.IList.Contains(System.Object)
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.IList.IndexOf(System.Object)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.IList.Insert(System.Int32,System.Object)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.IList.Remove(System.Object)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.ObjectModel.Collection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.ICollection.get_SyncRoot()
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.IList.get_IsFixedSize()
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.IList.get_IsReadOnly()
// System.Object System.Collections.ObjectModel.Collection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.IList.get_Item(System.Int32)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.IList.set_Item(System.Int32,System.Object)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::Add(T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::Clear()
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::ClearItems()
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::Contains(T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::CopyTo(T[],System.Int32)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::GetEnumerator()
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::IndexOf(T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::Insert(System.Int32,T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::InsertItem(System.Int32,T)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::Remove(T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::RemoveAt(System.Int32)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::RemoveItem(System.Int32)
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::get_Count()
// T System.Collections.ObjectModel.Collection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::get_Item(System.Int32)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::set_Item(System.Int32,T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::SetItem(System.Int32,T)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::IsValidItem(System.Object)
// T System.Collections.ObjectModel.Collection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::ConvertItem(System.Object)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::CheckWritable(System.Collections.Generic.IList`1<T>)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::IsSynchronized(System.Collections.Generic.IList`1<T>)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::IsFixedSize(System.Collections.Generic.IList`1<T>)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo EqualityComparer_1_t3011_il2cpp_TypeInfo;
// System.Collections.Generic.EqualityComparer`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_35MethodDeclarations.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Networking.Match.MatchDirectConnectInfo>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_35.h"
extern TypeInfo DefaultComparer_t3012_il2cpp_TypeInfo;
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Networking.Match.MatchDirectConnectInfo>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_35MethodDeclarations.h"
extern Il2CppType EqualityComparer_1_t3011_0_0_0;
extern Il2CppType IEquatable_1_t4206_0_0_0;
extern Il2CppType DefaultComparer_t3012_0_0_0;
extern MethodInfo DefaultComparer__ctor_m18018_MethodInfo;
extern MethodInfo EqualityComparer_1_GetHashCode_m25410_MethodInfo;
extern MethodInfo EqualityComparer_1_Equals_m23455_MethodInfo;
extern Il2CppGenericMethod DefaultComparer__ctor_m18018_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_GetHashCode_m25410_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_Equals_m23455_GenericMethod;


// System.Void System.Collections.Generic.EqualityComparer`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::.ctor()
// System.Void System.Collections.Generic.EqualityComparer`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::.cctor()
// System.Int32 System.Collections.Generic.EqualityComparer`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.IEqualityComparer.GetHashCode(System.Object)
// System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
// System.Int32 System.Collections.Generic.EqualityComparer`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::GetHashCode(T)
// System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::Equals(T,T)
// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::get_Default()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEqualityComparer_1_t4207_il2cpp_TypeInfo;



// System.Boolean System.Collections.Generic.IEqualityComparer`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::Equals(T,T)
// System.Int32 System.Collections.Generic.IEqualityComparer`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::GetHashCode(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEquatable_1_t4206_il2cpp_TypeInfo;



// System.Boolean System.IEquatable`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::Equals(T)
#ifndef _MSC_VER
#else
#endif

extern Il2CppGenericMethod EqualityComparer_1__ctor_m18013_GenericMethod;


// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Networking.Match.MatchDirectConnectInfo>::.ctor()
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Networking.Match.MatchDirectConnectInfo>::GetHashCode(T)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Networking.Match.MatchDirectConnectInfo>::Equals(T,T)
#ifndef _MSC_VER
#else
#endif



// System.Void System.Predicate`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::.ctor(System.Object,System.IntPtr)
// System.Boolean System.Predicate`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::Invoke(T)
// System.IAsyncResult System.Predicate`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::BeginInvoke(T,System.AsyncCallback,System.Object)
// System.Boolean System.Predicate`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::EndInvoke(System.IAsyncResult)
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.Networking.Match.MatchDirectConnectInfo>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_26.h"
extern TypeInfo DefaultComparer_t3015_il2cpp_TypeInfo;
// System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.Networking.Match.MatchDirectConnectInfo>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_26MethodDeclarations.h"
extern Il2CppType IComparable_1_t3759_0_0_0;
extern Il2CppType DefaultComparer_t3015_0_0_0;
extern MethodInfo DefaultComparer__ctor_m18029_MethodInfo;
extern MethodInfo Comparer_1_Compare_m25411_MethodInfo;
extern Il2CppGenericMethod DefaultComparer__ctor_m18029_GenericMethod;
extern Il2CppGenericMethod Comparer_1_Compare_m25411_GenericMethod;


// System.Void System.Collections.Generic.Comparer`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::.ctor()
// System.Void System.Collections.Generic.Comparer`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::.cctor()
// System.Int32 System.Collections.Generic.Comparer`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.IComparer.Compare(System.Object,System.Object)
// System.Int32 System.Collections.Generic.Comparer`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::Compare(T,T)
// System.Collections.Generic.Comparer`1<T> System.Collections.Generic.Comparer`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::get_Default()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IComparer_1_t3758_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IComparer`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::Compare(T,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IComparable_1_t3759_il2cpp_TypeInfo;



// System.Int32 System.IComparable`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::CompareTo(T)
#ifndef _MSC_VER
#else
#endif

extern MethodInfo IComparable_1_CompareTo_m23464_MethodInfo;
extern Il2CppGenericMethod Comparer_1__ctor_m18025_GenericMethod;
extern Il2CppGenericMethod IComparable_1_CompareTo_m23464_GenericMethod;


// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.Networking.Match.MatchDirectConnectInfo>::.ctor()
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.Networking.Match.MatchDirectConnectInfo>::Compare(T,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Comparison_1_t3016_il2cpp_TypeInfo;
// System.Comparison`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>
#include "mscorlib_System_Comparison_1_gen_27MethodDeclarations.h"



// System.Void System.Comparison`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::.ctor(System.Object,System.IntPtr)
// System.Int32 System.Comparison`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::Invoke(T,T)
// System.IAsyncResult System.Comparison`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
// System.Int32 System.Comparison`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::EndInvoke(System.IAsyncResult)
// System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>
#include "mscorlib_System_Collections_Generic_List_1_gen_26.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo List_1_t576_il2cpp_TypeInfo;
// System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>
#include "mscorlib_System_Collections_Generic_List_1_gen_26MethodDeclarations.h"

// UnityEngine.Networking.Match.MatchDesc
#include "UnityEngine_UnityEngine_Networking_Match_MatchDesc.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.Networking.Match.MatchDesc>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_28.h"
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Networking.Match.MatchDesc>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1_27.h"
// System.Predicate`1<UnityEngine.Networking.Match.MatchDesc>
#include "mscorlib_System_Predicate_1_gen_28.h"
// System.Collections.Generic.Comparer`1<UnityEngine.Networking.Match.MatchDesc>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_27.h"
// System.Comparison`1<UnityEngine.Networking.Match.MatchDesc>
#include "mscorlib_System_Comparison_1_gen_28.h"
extern TypeInfo MatchDesc_t575_il2cpp_TypeInfo;
extern TypeInfo MatchDescU5BU5D_t3017_il2cpp_TypeInfo;
extern TypeInfo Enumerator_t3019_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t3553_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t3554_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t3552_il2cpp_TypeInfo;
extern TypeInfo ReadOnlyCollection_1_t3021_il2cpp_TypeInfo;
extern TypeInfo Predicate_1_t3025_il2cpp_TypeInfo;
extern TypeInfo Comparer_1_t3026_il2cpp_TypeInfo;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Networking.Match.MatchDesc>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1_27MethodDeclarations.h"
// System.Predicate`1<UnityEngine.Networking.Match.MatchDesc>
#include "mscorlib_System_Predicate_1_gen_28MethodDeclarations.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.Networking.Match.MatchDesc>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_28MethodDeclarations.h"
// System.Collections.Generic.Comparer`1<UnityEngine.Networking.Match.MatchDesc>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_27MethodDeclarations.h"
extern Il2CppType List_1_t576_0_0_0;
extern Il2CppType MatchDescU5BU5D_t3017_0_0_0;
extern Il2CppType Enumerator_t3019_0_0_0;
extern Il2CppType ICollection_1_t3553_0_0_0;
extern Il2CppType IEnumerable_1_t3554_0_0_0;
extern Il2CppType IEnumerator_1_t3552_0_0_0;
extern Il2CppType ReadOnlyCollection_1_t3021_0_0_0;
extern Il2CppType Predicate_1_t3025_0_0_0;
extern Il2CppType Comparer_1_t3026_0_0_0;
extern MethodInfo List_1_get_Item_m18081_MethodInfo;
extern MethodInfo List_1_set_Item_m18082_MethodInfo;
extern MethodInfo List_1_Add_m18053_MethodInfo;
extern MethodInfo List_1_Contains_m18060_MethodInfo;
extern MethodInfo List_1_IndexOf_m18066_MethodInfo;
extern MethodInfo List_1_Insert_m18069_MethodInfo;
extern MethodInfo List_1_Remove_m18071_MethodInfo;
extern MethodInfo ICollection_1_get_Count_m25412_MethodInfo;
extern MethodInfo ICollection_1_CopyTo_m25413_MethodInfo;
extern MethodInfo IEnumerable_1_GetEnumerator_m25414_MethodInfo;
extern MethodInfo IEnumerator_1_get_Current_m25415_MethodInfo;
extern MethodInfo ReadOnlyCollection_1__ctor_m18094_MethodInfo;
extern MethodInfo Predicate_1_Invoke_m18169_MethodInfo;
extern MethodInfo Enumerator__ctor_m18088_MethodInfo;
extern MethodInfo List_1_RemoveAt_m18073_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::Resize<UnityEngine.Networking.Match.MatchDesc>(!!0[]&,System.Int32)
// System.Void System.Array::Resize<UnityEngine.Networking.Match.MatchDesc>(!!0[]&,System.Int32)
#define Array_Resize_TisMatchDesc_t575_m23481(__this /* static, unused */, p0, p1, method) (( void (*) (Object_t * /* static, unused */, MatchDescU5BU5D_t3017**, int32_t, MethodInfo*))Array_Resize_TisObject_t_m21369_gshared)(__this /* static, unused */, p0, p1, method)
struct Array_t;
// System.Collections.Generic.EqualityComparer`1<UnityEngine.Networking.Match.MatchDesc>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_36.h"
// Declaration System.Int32 System.Array::IndexOf<UnityEngine.Networking.Match.MatchDesc>(!!0[],!!0,System.Int32,System.Int32)
// System.Int32 System.Array::IndexOf<UnityEngine.Networking.Match.MatchDesc>(!!0[],!!0,System.Int32,System.Int32)
#define Array_IndexOf_TisMatchDesc_t575_m23483(__this /* static, unused */, p0, p1, p2, p3, method) (( int32_t (*) (Object_t * /* static, unused */, MatchDescU5BU5D_t3017*, MatchDesc_t575 *, int32_t, int32_t, MethodInfo*))Array_IndexOf_TisObject_t_m10471_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
struct Array_t;
// Declaration System.Void System.Array::Sort<UnityEngine.Networking.Match.MatchDesc>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
// System.Void System.Array::Sort<UnityEngine.Networking.Match.MatchDesc>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
#define Array_Sort_TisMatchDesc_t575_m23485(__this /* static, unused */, p0, p1, p2, p3, method) (( void (*) (Object_t * /* static, unused */, MatchDescU5BU5D_t3017*, int32_t, int32_t, Object_t*, MethodInfo*))Array_Sort_TisObject_t_m21438_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
struct Array_t;
// Declaration System.Void System.Array::Sort<UnityEngine.Networking.Match.MatchDesc>(!!0[],System.Int32,System.Comparison`1<!!0>)
// System.Void System.Array::Sort<UnityEngine.Networking.Match.MatchDesc>(!!0[],System.Int32,System.Comparison`1<!!0>)
#define Array_Sort_TisMatchDesc_t575_m23493(__this /* static, unused */, p0, p1, p2, method) (( void (*) (Object_t * /* static, unused */, MatchDescU5BU5D_t3017*, int32_t, Comparison_1_t3028 *, MethodInfo*))Array_Sort_TisObject_t_m21622_gshared)(__this /* static, unused */, p0, p1, p2, method)
extern Il2CppGenericMethod List_1_get_Item_m18081_GenericMethod;
extern Il2CppGenericMethod List_1_set_Item_m18082_GenericMethod;
extern Il2CppGenericMethod Array_Resize_TisMatchDesc_t575_m23481_GenericMethod;
extern Il2CppGenericMethod List_1_CheckIndex_m18068_GenericMethod;
extern Il2CppGenericMethod List_1_GetEnumerator_m18065_GenericMethod;
extern Il2CppGenericMethod List_1_Add_m18053_GenericMethod;
extern Il2CppGenericMethod List_1_Contains_m18060_GenericMethod;
extern Il2CppGenericMethod List_1_IndexOf_m18066_GenericMethod;
extern Il2CppGenericMethod List_1_Insert_m18069_GenericMethod;
extern Il2CppGenericMethod List_1_Remove_m18071_GenericMethod;
extern Il2CppGenericMethod List_1_GrowIfNeeded_m18054_GenericMethod;
extern Il2CppGenericMethod List_1_get_Capacity_m18079_GenericMethod;
extern Il2CppGenericMethod List_1_set_Capacity_m18080_GenericMethod;
extern Il2CppGenericMethod ICollection_1_get_Count_m25412_GenericMethod;
extern Il2CppGenericMethod ICollection_1_CopyTo_m25413_GenericMethod;
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m25414_GenericMethod;
extern Il2CppGenericMethod IEnumerator_1_get_Current_m25415_GenericMethod;
extern Il2CppGenericMethod List_1_CheckCollection_m18070_GenericMethod;
extern Il2CppGenericMethod List_1_AddCollection_m18055_GenericMethod;
extern Il2CppGenericMethod List_1_AddEnumerable_m18056_GenericMethod;
extern Il2CppGenericMethod ReadOnlyCollection_1__ctor_m18094_GenericMethod;
extern Il2CppGenericMethod Array_IndexOf_TisMatchDesc_t575_m23483_GenericMethod;
extern Il2CppGenericMethod List_1_CheckMatch_m18063_GenericMethod;
extern Il2CppGenericMethod List_1_GetIndex_m18064_GenericMethod;
extern Il2CppGenericMethod Predicate_1_Invoke_m18169_GenericMethod;
extern Il2CppGenericMethod Enumerator__ctor_m18088_GenericMethod;
extern Il2CppGenericMethod List_1_Shift_m18067_GenericMethod;
extern Il2CppGenericMethod List_1_RemoveAt_m18073_GenericMethod;
extern Il2CppGenericMethod Comparer_1_get_Default_m18175_GenericMethod;
extern Il2CppGenericMethod Array_Sort_TisMatchDesc_t575_m23485_GenericMethod;
extern Il2CppGenericMethod Array_Sort_TisMatchDesc_t575_m23493_GenericMethod;


// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::.ctor()
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::.ctor(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::.cctor()
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::System.Collections.IEnumerable.GetEnumerator()
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::System.Collections.IList.Add(System.Object)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::System.Collections.IList.Contains(System.Object)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::System.Collections.IList.IndexOf(System.Object)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::System.Collections.IList.Insert(System.Int32,System.Object)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::System.Collections.IList.Remove(System.Object)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::System.Collections.ICollection.get_SyncRoot()
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::System.Collections.IList.get_IsFixedSize()
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::System.Collections.IList.get_IsReadOnly()
// System.Object System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::System.Collections.IList.get_Item(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::System.Collections.IList.set_Item(System.Int32,System.Object)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::Add(T)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::GrowIfNeeded(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::AddCollection(System.Collections.Generic.ICollection`1<T>)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::AsReadOnly()
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::Clear()
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::Contains(T)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::CopyTo(T[],System.Int32)
// T System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::Find(System.Predicate`1<T>)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::CheckMatch(System.Predicate`1<T>)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::GetEnumerator()
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::IndexOf(T)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::Shift(System.Int32,System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::CheckIndex(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::Remove(T)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::RemoveAll(System.Predicate`1<T>)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::RemoveAt(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::Reverse()
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::Sort()
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::Sort(System.Comparison`1<T>)
// T[] System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::ToArray()
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::TrimExcess()
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::get_Capacity()
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::set_Capacity(System.Int32)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::get_Count()
// T System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::get_Item(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.Networking.Match.MatchDesc>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Networking.Match.MatchDesc>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Networking.Match.MatchDesc>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Networking.Match.MatchDesc>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Networking.Match.MatchDesc>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Networking.Match.MatchDesc>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Networking.Match.MatchDesc>::Remove(T)
#ifdef __clang__
#pragma clang diagnostic pop
#endif
