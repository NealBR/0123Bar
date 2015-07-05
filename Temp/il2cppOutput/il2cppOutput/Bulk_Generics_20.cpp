#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
// System.Array/InternalEnumerator`1<System.UInt32>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_188.h"
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
extern TypeInfo InternalEnumerator_1_t3328_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.UInt32>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_188MethodDeclarations.h"

// System.Object
#include "mscorlib_System_Object.h"
// System.UInt32
#include "mscorlib_System_UInt32.h"
// System.Int32
#include "mscorlib_System_Int32.h"
// System.String
#include "mscorlib_System_String.h"
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationException.h"
// System.Void
#include "mscorlib_System_Void.h"
// System.Array
#include "mscorlib_System_Array.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
extern TypeInfo UInt32_t697_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t1095_il2cpp_TypeInfo;
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
extern Il2CppType InternalEnumerator_1_t3328_0_0_0;
extern MethodInfo InvalidOperationException__ctor_m4740_MethodInfo;
extern MethodInfo Array_get_Length_m4744_MethodInfo;
struct Array_t;
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeException.h"
// Declaration !!0 System.Array::InternalArray__get_Item<System.UInt32>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.UInt32>(System.Int32)
extern "C" uint32_t Array_InternalArray__get_Item_TisUInt32_t697_m24295_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisUInt32_t697_m24295(__this, p0, method) (( uint32_t (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisUInt32_t697_m24295_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m20837_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisUInt32_t697_m24295_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.UInt32>::.ctor(System.Array)
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m20833_GenericMethod;
extern "C" void InternalEnumerator_1__ctor_m20833_gshared (InternalEnumerator_1_t3328 * __this, Array_t * ___array, MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.UInt32>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m20834_GenericMethod;
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m20834_gshared (InternalEnumerator_1_t3328 * __this, MethodInfo* method)
{
	{
		uint32_t L_0 = (( uint32_t (*) (InternalEnumerator_1_t3328 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		uint32_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.UInt32>::Dispose()
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m20835_GenericMethod;
extern "C" void InternalEnumerator_1_Dispose_m20835_gshared (InternalEnumerator_1_t3328 * __this, MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.UInt32>::MoveNext()
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m20836_GenericMethod;
extern "C" bool InternalEnumerator_1_MoveNext_m20836_gshared (InternalEnumerator_1_t3328 * __this, MethodInfo* method)
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
// T System.Array/InternalEnumerator`1<System.UInt32>::get_Current()
extern "C" uint32_t InternalEnumerator_1_get_Current_m20837_gshared (InternalEnumerator_1_t3328 * __this, MethodInfo* method)
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
		uint32_t L_8 = (( uint32_t (*) (Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_4, ((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t4404_il2cpp_TypeInfo;

#include "mscorlib_ArrayTypes.h"


// System.Int32 System.Collections.Generic.ICollection`1<System.UInt32>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.UInt32>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.UInt32>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.UInt32>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.UInt32>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.UInt32>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.UInt32>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t4405_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.UInt32>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4406_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.UInt32>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.UInt32>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.UInt32>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.UInt32>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.UInt32>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t4407_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.IComparable`1<System.UInt32>>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.IComparable`1<System.UInt32>>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.IComparable`1<System.UInt32>>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.IComparable`1<System.UInt32>>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.IComparable`1<System.UInt32>>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.IComparable`1<System.UInt32>>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.IComparable`1<System.UInt32>>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t4408_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.IComparable`1<System.UInt32>>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4409_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.IComparable`1<System.UInt32>>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IComparable_1_t1889_il2cpp_TypeInfo;



// System.Int32 System.IComparable`1<System.UInt32>::CompareTo(T)
// System.Array/InternalEnumerator`1<System.IComparable`1<System.UInt32>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_189.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3329_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.IComparable`1<System.UInt32>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_189MethodDeclarations.h"

extern Il2CppType InternalEnumerator_1_t3329_0_0_0;
extern Il2CppType IComparable_1_t1889_0_0_0;
struct Array_t;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Object>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Object>(System.Int32)
extern "C" Object_t * Array_InternalArray__get_Item_TisObject_t_m21358_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisObject_t_m21358(__this, p0, method) (( Object_t * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m21358_gshared)(__this, p0, method)
// Declaration !!0 System.Array::InternalArray__get_Item<System.IComparable`1<System.UInt32>>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.IComparable`1<System.UInt32>>(System.Int32)
#define Array_InternalArray__get_Item_TisIComparable_1_t1889_m24306(__this, p0, method) (( Object_t* (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m21358_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m20842_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisIComparable_1_t1889_m24306_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.IComparable`1<System.UInt32>>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.IComparable`1<System.UInt32>>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.IComparable`1<System.UInt32>>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.IComparable`1<System.UInt32>>::MoveNext()
// T System.Array/InternalEnumerator`1<System.IComparable`1<System.UInt32>>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4410_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.IComparable`1<System.UInt32>>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.IComparable`1<System.UInt32>>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.IComparable`1<System.UInt32>>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.IComparable`1<System.UInt32>>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.IComparable`1<System.UInt32>>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t4411_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.IEquatable`1<System.UInt32>>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.IEquatable`1<System.UInt32>>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.IEquatable`1<System.UInt32>>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.IEquatable`1<System.UInt32>>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.IEquatable`1<System.UInt32>>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.IEquatable`1<System.UInt32>>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.IEquatable`1<System.UInt32>>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t4412_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.IEquatable`1<System.UInt32>>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4413_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.IEquatable`1<System.UInt32>>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEquatable_1_t1890_il2cpp_TypeInfo;



// System.Boolean System.IEquatable`1<System.UInt32>::Equals(T)
// System.Array/InternalEnumerator`1<System.IEquatable`1<System.UInt32>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_190.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3330_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.IEquatable`1<System.UInt32>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_190MethodDeclarations.h"

extern Il2CppType InternalEnumerator_1_t3330_0_0_0;
extern Il2CppType IEquatable_1_t1890_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.IEquatable`1<System.UInt32>>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.IEquatable`1<System.UInt32>>(System.Int32)
#define Array_InternalArray__get_Item_TisIEquatable_1_t1890_m24317(__this, p0, method) (( Object_t* (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m21358_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m20847_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisIEquatable_1_t1890_m24317_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.IEquatable`1<System.UInt32>>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.IEquatable`1<System.UInt32>>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.IEquatable`1<System.UInt32>>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.IEquatable`1<System.UInt32>>::MoveNext()
// T System.Array/InternalEnumerator`1<System.IEquatable`1<System.UInt32>>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4414_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.IEquatable`1<System.UInt32>>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.IEquatable`1<System.UInt32>>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.IEquatable`1<System.UInt32>>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.IEquatable`1<System.UInt32>>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.IEquatable`1<System.UInt32>>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4415_il2cpp_TypeInfo;

// Mono.Math.BigInteger
#include "Mono_Security_Mono_Math_BigInteger.h"


// T System.Collections.Generic.IEnumerator`1<Mono.Math.BigInteger>::get_Current()
// System.Array/InternalEnumerator`1<Mono.Math.BigInteger>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_191.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3331_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<Mono.Math.BigInteger>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_191MethodDeclarations.h"

extern TypeInfo BigInteger_t1149_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t3331_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<Mono.Math.BigInteger>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<Mono.Math.BigInteger>(System.Int32)
#define Array_InternalArray__get_Item_TisBigInteger_t1149_m24328(__this, p0, method) (( BigInteger_t1149 * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m21358_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m20852_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisBigInteger_t1149_m24328_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<Mono.Math.BigInteger>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<Mono.Math.BigInteger>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<Mono.Math.BigInteger>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<Mono.Math.BigInteger>::MoveNext()
// T System.Array/InternalEnumerator`1<Mono.Math.BigInteger>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t4416_il2cpp_TypeInfo;

#include "Mono.Security_ArrayTypes.h"


// System.Int32 System.Collections.Generic.ICollection`1<Mono.Math.BigInteger>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Math.BigInteger>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<Mono.Math.BigInteger>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<Mono.Math.BigInteger>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Math.BigInteger>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<Mono.Math.BigInteger>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Math.BigInteger>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t4417_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Mono.Math.BigInteger>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4418_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<Mono.Math.BigInteger>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<Mono.Math.BigInteger>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<Mono.Math.BigInteger>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<Mono.Math.BigInteger>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<Mono.Math.BigInteger>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4419_il2cpp_TypeInfo;

// System.Security.Cryptography.KeySizes
#include "mscorlib_System_Security_Cryptography_KeySizes.h"


// T System.Collections.Generic.IEnumerator`1<System.Security.Cryptography.KeySizes>::get_Current()
// System.Array/InternalEnumerator`1<System.Security.Cryptography.KeySizes>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_192.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3332_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Security.Cryptography.KeySizes>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_192MethodDeclarations.h"

extern TypeInfo KeySizes_t1270_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t3332_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Security.Cryptography.KeySizes>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Security.Cryptography.KeySizes>(System.Int32)
#define Array_InternalArray__get_Item_TisKeySizes_t1270_m24339(__this, p0, method) (( KeySizes_t1270 * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m21358_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m20857_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisKeySizes_t1270_m24339_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.Security.Cryptography.KeySizes>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Security.Cryptography.KeySizes>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Security.Cryptography.KeySizes>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Security.Cryptography.KeySizes>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Security.Cryptography.KeySizes>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t4420_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Security.Cryptography.KeySizes>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Cryptography.KeySizes>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Security.Cryptography.KeySizes>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Security.Cryptography.KeySizes>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Cryptography.KeySizes>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Security.Cryptography.KeySizes>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Cryptography.KeySizes>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t4421_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Security.Cryptography.KeySizes>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4422_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Security.Cryptography.KeySizes>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Security.Cryptography.KeySizes>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Security.Cryptography.KeySizes>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Security.Cryptography.KeySizes>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Security.Cryptography.KeySizes>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4423_il2cpp_TypeInfo;

// Mono.Security.Protocol.Tls.Handshake.ClientCertificateType
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_ClientCer.h"


// T System.Collections.Generic.IEnumerator`1<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>::get_Current()
// System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_193.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3333_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_193MethodDeclarations.h"

extern TypeInfo ClientCertificateType_t1245_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t3333_0_0_0;
struct Array_t;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Int32>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Int32>(System.Int32)
extern "C" int32_t Array_InternalArray__get_Item_TisInt32_t17_m21442_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisInt32_t17_m21442(__this, p0, method) (( int32_t (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisInt32_t17_m21442_gshared)(__this, p0, method)
// Declaration !!0 System.Array::InternalArray__get_Item<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>(System.Int32)
#define Array_InternalArray__get_Item_TisClientCertificateType_t1245_m24350(__this, p0, method) (( int32_t (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisInt32_t17_m21442_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m20862_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisClientCertificateType_t1245_m24350_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>::MoveNext()
// T System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t4424_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t4425_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4426_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IComparable_1_t1897_il2cpp_TypeInfo;

// System.SByte
#include "mscorlib_System_SByte.h"


// System.Int32 System.IComparable`1<System.SByte>::CompareTo(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEquatable_1_t1898_il2cpp_TypeInfo;



// System.Boolean System.IEquatable`1<System.SByte>::Equals(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IComparable_1_t1900_il2cpp_TypeInfo;

// System.Int16
#include "mscorlib_System_Int16.h"


// System.Int32 System.IComparable`1<System.Int16>::CompareTo(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEquatable_1_t1901_il2cpp_TypeInfo;



// System.Boolean System.IEquatable`1<System.Int16>::Equals(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IComparable_1_t1928_il2cpp_TypeInfo;

// System.Decimal
#include "mscorlib_System_Decimal.h"


// System.Int32 System.IComparable`1<System.Decimal>::CompareTo(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEquatable_1_t1929_il2cpp_TypeInfo;



// System.Boolean System.IEquatable`1<System.Decimal>::Equals(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4427_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.Int16>::get_Current()
// System.Array/InternalEnumerator`1<System.Int16>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_194.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3334_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Int16>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_194MethodDeclarations.h"

extern TypeInfo Int16_t375_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t3334_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Int16>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Int16>(System.Int32)
extern "C" int16_t Array_InternalArray__get_Item_TisInt16_t375_m24361_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisInt16_t375_m24361(__this, p0, method) (( int16_t (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisInt16_t375_m24361_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m20867_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisInt16_t375_m24361_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.Int16>::.ctor(System.Array)
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m20863_GenericMethod;
extern "C" void InternalEnumerator_1__ctor_m20863_gshared (InternalEnumerator_1_t3334 * __this, Array_t * ___array, MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Int16>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m20864_GenericMethod;
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m20864_gshared (InternalEnumerator_1_t3334 * __this, MethodInfo* method)
{
	{
		int16_t L_0 = (( int16_t (*) (InternalEnumerator_1_t3334 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		int16_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Int16>::Dispose()
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m20865_GenericMethod;
extern "C" void InternalEnumerator_1_Dispose_m20865_gshared (InternalEnumerator_1_t3334 * __this, MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Int16>::MoveNext()
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m20866_GenericMethod;
extern "C" bool InternalEnumerator_1_MoveNext_m20866_gshared (InternalEnumerator_1_t3334 * __this, MethodInfo* method)
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
// T System.Array/InternalEnumerator`1<System.Int16>::get_Current()
extern "C" int16_t InternalEnumerator_1_get_Current_m20867_gshared (InternalEnumerator_1_t3334 * __this, MethodInfo* method)
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
		int16_t L_8 = (( int16_t (*) (Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_4, ((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t4428_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Int16>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Int16>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Int16>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Int16>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Int16>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Int16>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Int16>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t4429_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Int16>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4430_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Int16>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Int16>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Int16>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Int16>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Int16>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t4431_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.IComparable`1<System.Int16>>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.IComparable`1<System.Int16>>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.IComparable`1<System.Int16>>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.IComparable`1<System.Int16>>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.IComparable`1<System.Int16>>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.IComparable`1<System.Int16>>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.IComparable`1<System.Int16>>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t4432_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.IComparable`1<System.Int16>>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4433_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.IComparable`1<System.Int16>>::get_Current()
// System.Array/InternalEnumerator`1<System.IComparable`1<System.Int16>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_195.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3335_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.IComparable`1<System.Int16>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_195MethodDeclarations.h"

extern Il2CppType InternalEnumerator_1_t3335_0_0_0;
extern Il2CppType IComparable_1_t1900_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.IComparable`1<System.Int16>>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.IComparable`1<System.Int16>>(System.Int32)
#define Array_InternalArray__get_Item_TisIComparable_1_t1900_m24372(__this, p0, method) (( Object_t* (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m21358_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m20872_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisIComparable_1_t1900_m24372_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.IComparable`1<System.Int16>>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.IComparable`1<System.Int16>>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.IComparable`1<System.Int16>>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.IComparable`1<System.Int16>>::MoveNext()
// T System.Array/InternalEnumerator`1<System.IComparable`1<System.Int16>>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4434_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.IComparable`1<System.Int16>>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.IComparable`1<System.Int16>>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.IComparable`1<System.Int16>>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.IComparable`1<System.Int16>>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.IComparable`1<System.Int16>>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t4435_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Int16>>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Int16>>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Int16>>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Int16>>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Int16>>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Int16>>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Int16>>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t4436_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.IEquatable`1<System.Int16>>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4437_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.IEquatable`1<System.Int16>>::get_Current()
// System.Array/InternalEnumerator`1<System.IEquatable`1<System.Int16>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_196.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3336_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.IEquatable`1<System.Int16>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_196MethodDeclarations.h"

extern Il2CppType InternalEnumerator_1_t3336_0_0_0;
extern Il2CppType IEquatable_1_t1901_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.IEquatable`1<System.Int16>>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.IEquatable`1<System.Int16>>(System.Int32)
#define Array_InternalArray__get_Item_TisIEquatable_1_t1901_m24383(__this, p0, method) (( Object_t* (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m21358_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m20877_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisIEquatable_1_t1901_m24383_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.IEquatable`1<System.Int16>>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.IEquatable`1<System.Int16>>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.IEquatable`1<System.Int16>>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.IEquatable`1<System.Int16>>::MoveNext()
// T System.Array/InternalEnumerator`1<System.IEquatable`1<System.Int16>>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4438_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.IEquatable`1<System.Int16>>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.IEquatable`1<System.Int16>>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.IEquatable`1<System.Int16>>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.IEquatable`1<System.Int16>>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.IEquatable`1<System.Int16>>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4439_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.SByte>::get_Current()
// System.Array/InternalEnumerator`1<System.SByte>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_197.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3337_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.SByte>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_197MethodDeclarations.h"

extern TypeInfo SByte_t336_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t3337_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.SByte>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.SByte>(System.Int32)
extern "C" int8_t Array_InternalArray__get_Item_TisSByte_t336_m24394_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisSByte_t336_m24394(__this, p0, method) (( int8_t (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisSByte_t336_m24394_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m20882_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisSByte_t336_m24394_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.SByte>::.ctor(System.Array)
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m20878_GenericMethod;
extern "C" void InternalEnumerator_1__ctor_m20878_gshared (InternalEnumerator_1_t3337 * __this, Array_t * ___array, MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.SByte>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m20879_GenericMethod;
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m20879_gshared (InternalEnumerator_1_t3337 * __this, MethodInfo* method)
{
	{
		int8_t L_0 = (( int8_t (*) (InternalEnumerator_1_t3337 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		int8_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.SByte>::Dispose()
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m20880_GenericMethod;
extern "C" void InternalEnumerator_1_Dispose_m20880_gshared (InternalEnumerator_1_t3337 * __this, MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.SByte>::MoveNext()
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m20881_GenericMethod;
extern "C" bool InternalEnumerator_1_MoveNext_m20881_gshared (InternalEnumerator_1_t3337 * __this, MethodInfo* method)
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
// T System.Array/InternalEnumerator`1<System.SByte>::get_Current()
extern "C" int8_t InternalEnumerator_1_get_Current_m20882_gshared (InternalEnumerator_1_t3337 * __this, MethodInfo* method)
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
		int8_t L_8 = (( int8_t (*) (Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_4, ((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t4440_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.SByte>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.SByte>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.SByte>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.SByte>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.SByte>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.SByte>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.SByte>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t4441_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.SByte>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4442_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.SByte>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.SByte>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.SByte>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.SByte>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.SByte>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t4443_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.IComparable`1<System.SByte>>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.IComparable`1<System.SByte>>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.IComparable`1<System.SByte>>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.IComparable`1<System.SByte>>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.IComparable`1<System.SByte>>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.IComparable`1<System.SByte>>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.IComparable`1<System.SByte>>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t4444_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.IComparable`1<System.SByte>>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4445_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.IComparable`1<System.SByte>>::get_Current()
// System.Array/InternalEnumerator`1<System.IComparable`1<System.SByte>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_198.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3338_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.IComparable`1<System.SByte>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_198MethodDeclarations.h"

extern Il2CppType InternalEnumerator_1_t3338_0_0_0;
extern Il2CppType IComparable_1_t1897_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.IComparable`1<System.SByte>>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.IComparable`1<System.SByte>>(System.Int32)
#define Array_InternalArray__get_Item_TisIComparable_1_t1897_m24405(__this, p0, method) (( Object_t* (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m21358_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m20887_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisIComparable_1_t1897_m24405_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.IComparable`1<System.SByte>>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.IComparable`1<System.SByte>>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.IComparable`1<System.SByte>>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.IComparable`1<System.SByte>>::MoveNext()
// T System.Array/InternalEnumerator`1<System.IComparable`1<System.SByte>>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4446_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.IComparable`1<System.SByte>>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.IComparable`1<System.SByte>>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.IComparable`1<System.SByte>>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.IComparable`1<System.SByte>>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.IComparable`1<System.SByte>>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t4447_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.IEquatable`1<System.SByte>>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.IEquatable`1<System.SByte>>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.IEquatable`1<System.SByte>>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.IEquatable`1<System.SByte>>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.IEquatable`1<System.SByte>>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.IEquatable`1<System.SByte>>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.IEquatable`1<System.SByte>>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t4448_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.IEquatable`1<System.SByte>>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4449_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.IEquatable`1<System.SByte>>::get_Current()
// System.Array/InternalEnumerator`1<System.IEquatable`1<System.SByte>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_199.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3339_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.IEquatable`1<System.SByte>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_199MethodDeclarations.h"

extern Il2CppType InternalEnumerator_1_t3339_0_0_0;
extern Il2CppType IEquatable_1_t1898_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.IEquatable`1<System.SByte>>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.IEquatable`1<System.SByte>>(System.Int32)
#define Array_InternalArray__get_Item_TisIEquatable_1_t1898_m24416(__this, p0, method) (( Object_t* (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m21358_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m20892_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisIEquatable_1_t1898_m24416_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.IEquatable`1<System.SByte>>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.IEquatable`1<System.SByte>>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.IEquatable`1<System.SByte>>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.IEquatable`1<System.SByte>>::MoveNext()
// T System.Array/InternalEnumerator`1<System.IEquatable`1<System.SByte>>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4450_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.IEquatable`1<System.SByte>>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.IEquatable`1<System.SByte>>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.IEquatable`1<System.SByte>>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.IEquatable`1<System.SByte>>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.IEquatable`1<System.SByte>>::set_Item(System.Int32,T)
// System.Converter`2<System.Object,System.Object>
#include "mscorlib_System_Converter_2_gen.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Converter_2_t3340_il2cpp_TypeInfo;
// System.Converter`2<System.Object,System.Object>
#include "mscorlib_System_Converter_2_genMethodDeclarations.h"

// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"


// System.Void System.Converter`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern Il2CppGenericMethod Converter_2__ctor_m20893_GenericMethod;
extern "C" void Converter_2__ctor_m20893_gshared (Converter_2_t3340 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TOutput System.Converter`2<System.Object,System.Object>::Invoke(TInput)
extern Il2CppGenericMethod Converter_2_Invoke_m20894_GenericMethod;
extern "C" Object_t * Converter_2_Invoke_m20894_gshared (Converter_2_t3340 * __this, Object_t * ___input, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Converter_2_Invoke_m20894((Converter_2_t3340 *)__this->___prev_9,___input, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef Object_t * (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___input, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___input,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef Object_t * (*FunctionPointerType) (Object_t * __this, Object_t * ___input, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___input,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef Object_t * (*FunctionPointerType) (Object_t * __this, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___input,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Converter`2<System.Object,System.Object>::BeginInvoke(TInput,System.AsyncCallback,System.Object)
extern Il2CppGenericMethod Converter_2_BeginInvoke_m20895_GenericMethod;
extern "C" Object_t * Converter_2_BeginInvoke_m20895_gshared (Converter_2_t3340 * __this, Object_t * ___input, AsyncCallback_t171 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___input;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TOutput System.Converter`2<System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern Il2CppGenericMethod Converter_2_EndInvoke_m20896_GenericMethod;
extern "C" Object_t * Converter_2_EndInvoke_m20896_gshared (Converter_2_t3340 * __this, Object_t * ___result, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return (Object_t *)__result;
}
// System.Array/ArrayReadOnlyList`1<System.Object>
#include "mscorlib_System_Array_ArrayReadOnlyList_1_gen.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ArrayReadOnlyList_1_t3341_il2cpp_TypeInfo;
// System.Array/ArrayReadOnlyList`1<System.Object>
#include "mscorlib_System_Array_ArrayReadOnlyList_1_genMethodDeclarations.h"

// System.Exception
#include "mscorlib_System_Exception.h"
// System.Array/ArrayReadOnlyList`1/<GetEnumerator>c__Iterator0<System.Object>
#include "mscorlib_System_Array_ArrayReadOnlyList_1_U3CGetEnumeratorU3.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedException.h"
extern TypeInfo ArgumentOutOfRangeException_t703_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t364_il2cpp_TypeInfo;
extern TypeInfo Array_t_il2cpp_TypeInfo;
extern TypeInfo Void_t18_il2cpp_TypeInfo;
extern TypeInfo Int32_t17_il2cpp_TypeInfo;
extern TypeInfo U3CGetEnumeratorU3Ec__Iterator0_t3342_il2cpp_TypeInfo;
extern TypeInfo NotSupportedException_t285_il2cpp_TypeInfo;
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeExceptionMethodDeclarations.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.Array/ArrayReadOnlyList`1/<GetEnumerator>c__Iterator0<System.Object>
#include "mscorlib_System_Array_ArrayReadOnlyList_1_U3CGetEnumeratorU3MethodDeclarations.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"
extern Il2CppType ArrayReadOnlyList_1_t3341_0_0_0;
extern Il2CppType U3CGetEnumeratorU3Ec__Iterator0_t3342_0_0_0;
extern MethodInfo ArgumentOutOfRangeException__ctor_m4748_MethodInfo;
extern MethodInfo Object__ctor_m1289_MethodInfo;
extern MethodInfo ArrayReadOnlyList_1_GetEnumerator_m20907_MethodInfo;
extern MethodInfo Array_CopyTo_m4933_MethodInfo;
extern MethodInfo U3CGetEnumeratorU3Ec__Iterator0__ctor_m20913_MethodInfo;
extern MethodInfo NotSupportedException__ctor_m4761_MethodInfo;
struct Array_t;
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullException.h"
// Declaration System.Int32 System.Array::IndexOf<System.Object>(!!0[],!!0)
// System.Int32 System.Array::IndexOf<System.Object>(!!0[],!!0)
extern "C" int32_t Array_IndexOf_TisObject_t_m10492_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t269* p0, Object_t * p1, MethodInfo* method);
#define Array_IndexOf_TisObject_t_m10492(__this /* static, unused */, p0, p1, method) (( int32_t (*) (Object_t * /* static, unused */, ObjectU5BU5D_t269*, Object_t *, MethodInfo*))Array_IndexOf_TisObject_t_m10492_gshared)(__this /* static, unused */, p0, p1, method)
extern Il2CppGenericMethod ArrayReadOnlyList_1_ReadOnlyError_m20912_GenericMethod;
extern Il2CppGenericMethod ArrayReadOnlyList_1_GetEnumerator_m20907_GenericMethod;
extern Il2CppGenericMethod Array_IndexOf_TisObject_t_m10492_GenericMethod;
extern Il2CppGenericMethod U3CGetEnumeratorU3Ec__Iterator0__ctor_m20913_GenericMethod;


// System.Void System.Array/ArrayReadOnlyList`1<System.Object>::.ctor(T[])
extern Il2CppGenericMethod ArrayReadOnlyList_1__ctor_m20897_GenericMethod;
extern "C" void ArrayReadOnlyList_1__ctor_m20897_gshared (ArrayReadOnlyList_1_t3341 * __this, ObjectU5BU5D_t269* ___array, MethodInfo* method)
{
	{
		Object__ctor_m1289(__this, /*hidden argument*/&Object__ctor_m1289_MethodInfo);
		ObjectU5BU5D_t269* L_0 = ___array;
		__this->___array_0 = L_0;
		return;
	}
}
// System.Collections.IEnumerator System.Array/ArrayReadOnlyList`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern Il2CppGenericMethod ArrayReadOnlyList_1_System_Collections_IEnumerable_GetEnumerator_m20898_GenericMethod;
extern "C" Object_t * ArrayReadOnlyList_1_System_Collections_IEnumerable_GetEnumerator_m20898_gshared (ArrayReadOnlyList_1_t3341 * __this, MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)VirtFuncInvoker0< Object_t* >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0), __this);
		return L_0;
	}
}
// T System.Array/ArrayReadOnlyList`1<System.Object>::get_Item(System.Int32)
extern Il2CppGenericMethod ArrayReadOnlyList_1_get_Item_m20899_GenericMethod;
extern "C" Object_t * ArrayReadOnlyList_1_get_Item_m20899_gshared (ArrayReadOnlyList_1_t3341 * __this, int32_t ___index, MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		ObjectU5BU5D_t269* L_1 = (__this->___array_0);
		NullCheck(L_1);
		if ((!(((uint32_t)L_0) >= ((uint32_t)(((int32_t)(((Array_t *)L_1)->max_length)))))))
		{
			goto IL_0016;
		}
	}
	{
		ArgumentOutOfRangeException_t703 * L_2 = (ArgumentOutOfRangeException_t703 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentOutOfRangeException_t703_il2cpp_TypeInfo));
		ArgumentOutOfRangeException__ctor_m4748(L_2, (String_t*) &_stringLiteral345, /*hidden argument*/&ArgumentOutOfRangeException__ctor_m4748_MethodInfo);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0016:
	{
		ObjectU5BU5D_t269* L_3 = (__this->___array_0);
		int32_t L_4 = ___index;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = L_4;
		return (*(Object_t **)(Object_t **)SZArrayLdElema(L_3, L_5));
	}
}
// System.Void System.Array/ArrayReadOnlyList`1<System.Object>::set_Item(System.Int32,T)
extern Il2CppGenericMethod ArrayReadOnlyList_1_set_Item_m20900_GenericMethod;
extern "C" void ArrayReadOnlyList_1_set_Item_m20900_gshared (ArrayReadOnlyList_1_t3341 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method)
{
	{
		Exception_t275 * L_0 = (( Exception_t275 * (*) (Object_t * /* static, unused */, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Int32 System.Array/ArrayReadOnlyList`1<System.Object>::get_Count()
extern Il2CppGenericMethod ArrayReadOnlyList_1_get_Count_m20901_GenericMethod;
extern "C" int32_t ArrayReadOnlyList_1_get_Count_m20901_gshared (ArrayReadOnlyList_1_t3341 * __this, MethodInfo* method)
{
	{
		ObjectU5BU5D_t269* L_0 = (__this->___array_0);
		NullCheck(L_0);
		return (((int32_t)(((Array_t *)L_0)->max_length)));
	}
}
// System.Boolean System.Array/ArrayReadOnlyList`1<System.Object>::get_IsReadOnly()
extern Il2CppGenericMethod ArrayReadOnlyList_1_get_IsReadOnly_m20902_GenericMethod;
extern "C" bool ArrayReadOnlyList_1_get_IsReadOnly_m20902_gshared (ArrayReadOnlyList_1_t3341 * __this, MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Void System.Array/ArrayReadOnlyList`1<System.Object>::Add(T)
extern Il2CppGenericMethod ArrayReadOnlyList_1_Add_m20903_GenericMethod;
extern "C" void ArrayReadOnlyList_1_Add_m20903_gshared (ArrayReadOnlyList_1_t3341 * __this, Object_t * ___item, MethodInfo* method)
{
	{
		Exception_t275 * L_0 = (( Exception_t275 * (*) (Object_t * /* static, unused */, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void System.Array/ArrayReadOnlyList`1<System.Object>::Clear()
extern Il2CppGenericMethod ArrayReadOnlyList_1_Clear_m20904_GenericMethod;
extern "C" void ArrayReadOnlyList_1_Clear_m20904_gshared (ArrayReadOnlyList_1_t3341 * __this, MethodInfo* method)
{
	{
		Exception_t275 * L_0 = (( Exception_t275 * (*) (Object_t * /* static, unused */, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Array/ArrayReadOnlyList`1<System.Object>::Contains(T)
extern Il2CppGenericMethod ArrayReadOnlyList_1_Contains_m20905_GenericMethod;
extern "C" bool ArrayReadOnlyList_1_Contains_m20905_gshared (ArrayReadOnlyList_1_t3341 * __this, Object_t * ___item, MethodInfo* method)
{
	{
		ObjectU5BU5D_t269* L_0 = (__this->___array_0);
		Object_t * L_1 = ___item;
		int32_t L_2 = (( int32_t (*) (Object_t * /* static, unused */, ObjectU5BU5D_t269*, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return ((((int32_t)((((int32_t)L_2) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void System.Array/ArrayReadOnlyList`1<System.Object>::CopyTo(T[],System.Int32)
extern Il2CppGenericMethod ArrayReadOnlyList_1_CopyTo_m20906_GenericMethod;
extern "C" void ArrayReadOnlyList_1_CopyTo_m20906_gshared (ArrayReadOnlyList_1_t3341 * __this, ObjectU5BU5D_t269* ___array, int32_t ___index, MethodInfo* method)
{
	{
		ObjectU5BU5D_t269* L_0 = (__this->___array_0);
		ObjectU5BU5D_t269* L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck(L_0);
		VirtActionInvoker2< Array_t *, int32_t >::Invoke(&Array_CopyTo_m4933_MethodInfo, L_0, (Array_t *)(Array_t *)L_1, L_2);
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<T> System.Array/ArrayReadOnlyList`1<System.Object>::GetEnumerator()
extern "C" Object_t* ArrayReadOnlyList_1_GetEnumerator_m20907_gshared (ArrayReadOnlyList_1_t3341 * __this, MethodInfo* method)
{
	U3CGetEnumeratorU3Ec__Iterator0_t3342 * V_0 = {0};
	{
		U3CGetEnumeratorU3Ec__Iterator0_t3342 * L_0 = (U3CGetEnumeratorU3Ec__Iterator0_t3342 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		(( void (*) (U3CGetEnumeratorU3Ec__Iterator0_t3342 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		V_0 = L_0;
		U3CGetEnumeratorU3Ec__Iterator0_t3342 * L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3Ef__this_3 = __this;
		U3CGetEnumeratorU3Ec__Iterator0_t3342 * L_2 = V_0;
		return L_2;
	}
}
// System.Int32 System.Array/ArrayReadOnlyList`1<System.Object>::IndexOf(T)
extern Il2CppGenericMethod ArrayReadOnlyList_1_IndexOf_m20908_GenericMethod;
extern "C" int32_t ArrayReadOnlyList_1_IndexOf_m20908_gshared (ArrayReadOnlyList_1_t3341 * __this, Object_t * ___item, MethodInfo* method)
{
	{
		ObjectU5BU5D_t269* L_0 = (__this->___array_0);
		Object_t * L_1 = ___item;
		int32_t L_2 = (( int32_t (*) (Object_t * /* static, unused */, ObjectU5BU5D_t269*, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_2;
	}
}
// System.Void System.Array/ArrayReadOnlyList`1<System.Object>::Insert(System.Int32,T)
extern Il2CppGenericMethod ArrayReadOnlyList_1_Insert_m20909_GenericMethod;
extern "C" void ArrayReadOnlyList_1_Insert_m20909_gshared (ArrayReadOnlyList_1_t3341 * __this, int32_t ___index, Object_t * ___item, MethodInfo* method)
{
	{
		Exception_t275 * L_0 = (( Exception_t275 * (*) (Object_t * /* static, unused */, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Array/ArrayReadOnlyList`1<System.Object>::Remove(T)
extern Il2CppGenericMethod ArrayReadOnlyList_1_Remove_m20910_GenericMethod;
extern "C" bool ArrayReadOnlyList_1_Remove_m20910_gshared (ArrayReadOnlyList_1_t3341 * __this, Object_t * ___item, MethodInfo* method)
{
	{
		Exception_t275 * L_0 = (( Exception_t275 * (*) (Object_t * /* static, unused */, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void System.Array/ArrayReadOnlyList`1<System.Object>::RemoveAt(System.Int32)
extern Il2CppGenericMethod ArrayReadOnlyList_1_RemoveAt_m20911_GenericMethod;
extern "C" void ArrayReadOnlyList_1_RemoveAt_m20911_gshared (ArrayReadOnlyList_1_t3341 * __this, int32_t ___index, MethodInfo* method)
{
	{
		Exception_t275 * L_0 = (( Exception_t275 * (*) (Object_t * /* static, unused */, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Exception System.Array/ArrayReadOnlyList`1<System.Object>::ReadOnlyError()
extern "C" Exception_t275 * ArrayReadOnlyList_1_ReadOnlyError_m20912_gshared (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		NotSupportedException_t285 * L_0 = (NotSupportedException_t285 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t285_il2cpp_TypeInfo));
		NotSupportedException__ctor_m4761(L_0, (String_t*) &_stringLiteral1184, /*hidden argument*/&NotSupportedException__ctor_m4761_MethodInfo);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif

extern TypeInfo Object_t_il2cpp_TypeInfo;


// System.Void System.Array/ArrayReadOnlyList`1/<GetEnumerator>c__Iterator0<System.Object>::.ctor()
extern "C" void U3CGetEnumeratorU3Ec__Iterator0__ctor_m20913_gshared (U3CGetEnumeratorU3Ec__Iterator0_t3342 * __this, MethodInfo* method)
{
	{
		Object__ctor_m1289(__this, /*hidden argument*/&Object__ctor_m1289_MethodInfo);
		return;
	}
}
// T System.Array/ArrayReadOnlyList`1/<GetEnumerator>c__Iterator0<System.Object>::System.Collections.Generic.IEnumerator<T>.get_Current()
extern Il2CppGenericMethod U3CGetEnumeratorU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CTU3E_get_Current_m20914_GenericMethod;
extern "C" Object_t * U3CGetEnumeratorU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CTU3E_get_Current_m20914_gshared (U3CGetEnumeratorU3Ec__Iterator0_t3342 * __this, MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___$current_2);
		return L_0;
	}
}
// System.Object System.Array/ArrayReadOnlyList`1/<GetEnumerator>c__Iterator0<System.Object>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod U3CGetEnumeratorU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m20915_GenericMethod;
extern "C" Object_t * U3CGetEnumeratorU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m20915_gshared (U3CGetEnumeratorU3Ec__Iterator0_t3342 * __this, MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___$current_2);
		Object_t * L_1 = L_0;
		return ((Object_t *)L_1);
	}
}
// System.Boolean System.Array/ArrayReadOnlyList`1/<GetEnumerator>c__Iterator0<System.Object>::MoveNext()
extern Il2CppGenericMethod U3CGetEnumeratorU3Ec__Iterator0_MoveNext_m20916_GenericMethod;
extern "C" bool U3CGetEnumeratorU3Ec__Iterator0_MoveNext_m20916_gshared (U3CGetEnumeratorU3Ec__Iterator0_t3342 * __this, MethodInfo* method)
{
	uint32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0 = (__this->___$PC_1);
		V_0 = L_0;
		__this->___$PC_1 = (-1);
		uint32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_001e;
		}
		if (L_1 == 1)
		{
			goto IL_004c;
		}
	}
	{
		goto IL_0076;
	}

IL_001e:
	{
		__this->___U3CiU3E__0_0 = 0;
		goto IL_005a;
	}

IL_0027:
	{
		ArrayReadOnlyList_1_t3341 * L_2 = (__this->___U3CU3Ef__this_3);
		NullCheck(L_2);
		ObjectU5BU5D_t269* L_3 = (L_2->___array_0);
		int32_t L_4 = (__this->___U3CiU3E__0_0);
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = L_4;
		__this->___$current_2 = (*(Object_t **)(Object_t **)SZArrayLdElema(L_3, L_5));
		__this->___$PC_1 = 1;
		goto IL_0078;
	}

IL_004c:
	{
		int32_t L_6 = (__this->___U3CiU3E__0_0);
		__this->___U3CiU3E__0_0 = ((int32_t)((int32_t)L_6+(int32_t)1));
	}

IL_005a:
	{
		int32_t L_7 = (__this->___U3CiU3E__0_0);
		ArrayReadOnlyList_1_t3341 * L_8 = (__this->___U3CU3Ef__this_3);
		NullCheck(L_8);
		ObjectU5BU5D_t269* L_9 = (L_8->___array_0);
		NullCheck(L_9);
		if ((((int32_t)L_7) < ((int32_t)(((int32_t)(((Array_t *)L_9)->max_length))))))
		{
			goto IL_0027;
		}
	}
	{
		__this->___$PC_1 = (-1);
	}

IL_0076:
	{
		return 0;
	}

IL_0078:
	{
		return 1;
	}
	// Dead block : IL_007a: ldloc.1
}
// System.Void System.Array/ArrayReadOnlyList`1/<GetEnumerator>c__Iterator0<System.Object>::Dispose()
extern Il2CppGenericMethod U3CGetEnumeratorU3Ec__Iterator0_Dispose_m20917_GenericMethod;
extern "C" void U3CGetEnumeratorU3Ec__Iterator0_Dispose_m20917_gshared (U3CGetEnumeratorU3Ec__Iterator0_t3342 * __this, MethodInfo* method)
{
	{
		__this->___$PC_1 = (-1);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4451_il2cpp_TypeInfo;

// System.Reflection.MethodInfo
#include "mscorlib_System_Reflection_MethodInfo.h"


// T System.Collections.Generic.IEnumerator`1<System.Reflection.MethodInfo>::get_Current()
// System.Array/InternalEnumerator`1<System.Reflection.MethodInfo>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_200.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3343_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Reflection.MethodInfo>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_200MethodDeclarations.h"

extern TypeInfo MethodInfo_t_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t3343_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Reflection.MethodInfo>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Reflection.MethodInfo>(System.Int32)
#define Array_InternalArray__get_Item_TisMethodInfo_t_m24455(__this, p0, method) (( MethodInfo_t * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m21358_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m20922_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisMethodInfo_t_m24455_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.Reflection.MethodInfo>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Reflection.MethodInfo>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Reflection.MethodInfo>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.MethodInfo>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Reflection.MethodInfo>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t4452_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Reflection.MethodInfo>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.MethodInfo>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.MethodInfo>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.MethodInfo>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.MethodInfo>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.MethodInfo>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.MethodInfo>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t4453_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.MethodInfo>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4454_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Reflection.MethodInfo>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.MethodInfo>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.MethodInfo>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Reflection.MethodInfo>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Reflection.MethodInfo>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t4455_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._MethodInfo>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._MethodInfo>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._MethodInfo>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._MethodInfo>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._MethodInfo>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._MethodInfo>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._MethodInfo>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t4456_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices._MethodInfo>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4457_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices._MethodInfo>::get_Current()
// System.Array/InternalEnumerator`1<System.Runtime.InteropServices._MethodInfo>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_201.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3344_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Runtime.InteropServices._MethodInfo>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_201MethodDeclarations.h"

extern TypeInfo _MethodInfo_t2273_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t3344_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Runtime.InteropServices._MethodInfo>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Runtime.InteropServices._MethodInfo>(System.Int32)
#define Array_InternalArray__get_Item_Tis_MethodInfo_t2273_m24466(__this, p0, method) (( Object_t * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m21358_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m20927_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_Tis_MethodInfo_t2273_m24466_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices._MethodInfo>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Runtime.InteropServices._MethodInfo>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices._MethodInfo>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.InteropServices._MethodInfo>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Runtime.InteropServices._MethodInfo>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4458_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Runtime.InteropServices._MethodInfo>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices._MethodInfo>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices._MethodInfo>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Runtime.InteropServices._MethodInfo>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices._MethodInfo>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4459_il2cpp_TypeInfo;

// Mono.Globalization.Unicode.CodePointIndexer/TableRange
#include "mscorlib_Mono_Globalization_Unicode_CodePointIndexer_TableRa.h"


// T System.Collections.Generic.IEnumerator`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>::get_Current()
// System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_202.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3345_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_202MethodDeclarations.h"

extern TypeInfo TableRange_t1329_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t3345_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<Mono.Globalization.Unicode.CodePointIndexer/TableRange>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<Mono.Globalization.Unicode.CodePointIndexer/TableRange>(System.Int32)
extern "C" TableRange_t1329  Array_InternalArray__get_Item_TisTableRange_t1329_m24477_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisTableRange_t1329_m24477(__this, p0, method) (( TableRange_t1329  (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisTableRange_t1329_m24477_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m20932_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisTableRange_t1329_m24477_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>::.ctor(System.Array)
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m20928_GenericMethod;
extern "C" void InternalEnumerator_1__ctor_m20928_gshared (InternalEnumerator_1_t3345 * __this, Array_t * ___array, MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m20929_GenericMethod;
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m20929_gshared (InternalEnumerator_1_t3345 * __this, MethodInfo* method)
{
	{
		TableRange_t1329  L_0 = (( TableRange_t1329  (*) (InternalEnumerator_1_t3345 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		TableRange_t1329  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>::Dispose()
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m20930_GenericMethod;
extern "C" void InternalEnumerator_1_Dispose_m20930_gshared (InternalEnumerator_1_t3345 * __this, MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>::MoveNext()
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m20931_GenericMethod;
extern "C" bool InternalEnumerator_1_MoveNext_m20931_gshared (InternalEnumerator_1_t3345 * __this, MethodInfo* method)
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
// T System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>::get_Current()
extern "C" TableRange_t1329  InternalEnumerator_1_get_Current_m20932_gshared (InternalEnumerator_1_t3345 * __this, MethodInfo* method)
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
		TableRange_t1329  L_8 = (( TableRange_t1329  (*) (Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_4, ((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t4460_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t4461_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4462_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4463_il2cpp_TypeInfo;

// Mono.Globalization.Unicode.TailoringInfo
#include "mscorlib_Mono_Globalization_Unicode_TailoringInfo.h"


// T System.Collections.Generic.IEnumerator`1<Mono.Globalization.Unicode.TailoringInfo>::get_Current()
// System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.TailoringInfo>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_203.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3346_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.TailoringInfo>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_203MethodDeclarations.h"

extern TypeInfo TailoringInfo_t1332_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t3346_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<Mono.Globalization.Unicode.TailoringInfo>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<Mono.Globalization.Unicode.TailoringInfo>(System.Int32)
#define Array_InternalArray__get_Item_TisTailoringInfo_t1332_m24488(__this, p0, method) (( TailoringInfo_t1332 * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m21358_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m20937_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisTailoringInfo_t1332_m24488_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.TailoringInfo>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.TailoringInfo>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.TailoringInfo>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.TailoringInfo>::MoveNext()
// T System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.TailoringInfo>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t4464_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.TailoringInfo>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.TailoringInfo>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.TailoringInfo>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.TailoringInfo>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.TailoringInfo>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.TailoringInfo>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.TailoringInfo>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t4465_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Mono.Globalization.Unicode.TailoringInfo>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4466_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<Mono.Globalization.Unicode.TailoringInfo>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<Mono.Globalization.Unicode.TailoringInfo>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<Mono.Globalization.Unicode.TailoringInfo>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<Mono.Globalization.Unicode.TailoringInfo>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<Mono.Globalization.Unicode.TailoringInfo>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4467_il2cpp_TypeInfo;

// Mono.Globalization.Unicode.Contraction
#include "mscorlib_Mono_Globalization_Unicode_Contraction.h"


// T System.Collections.Generic.IEnumerator`1<Mono.Globalization.Unicode.Contraction>::get_Current()
// System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.Contraction>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_204.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3347_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.Contraction>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_204MethodDeclarations.h"

extern TypeInfo Contraction_t1333_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t3347_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<Mono.Globalization.Unicode.Contraction>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<Mono.Globalization.Unicode.Contraction>(System.Int32)
#define Array_InternalArray__get_Item_TisContraction_t1333_m24499(__this, p0, method) (( Contraction_t1333 * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m21358_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m20942_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisContraction_t1333_m24499_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.Contraction>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.Contraction>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.Contraction>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.Contraction>::MoveNext()
// T System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.Contraction>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t4468_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.Contraction>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.Contraction>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.Contraction>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.Contraction>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.Contraction>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.Contraction>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.Contraction>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t4469_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Mono.Globalization.Unicode.Contraction>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4470_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<Mono.Globalization.Unicode.Contraction>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<Mono.Globalization.Unicode.Contraction>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<Mono.Globalization.Unicode.Contraction>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<Mono.Globalization.Unicode.Contraction>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<Mono.Globalization.Unicode.Contraction>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4471_il2cpp_TypeInfo;

// Mono.Globalization.Unicode.Level2Map
#include "mscorlib_Mono_Globalization_Unicode_Level2Map.h"


// T System.Collections.Generic.IEnumerator`1<Mono.Globalization.Unicode.Level2Map>::get_Current()
// System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.Level2Map>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_205.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3348_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.Level2Map>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_205MethodDeclarations.h"

extern TypeInfo Level2Map_t1335_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t3348_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<Mono.Globalization.Unicode.Level2Map>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<Mono.Globalization.Unicode.Level2Map>(System.Int32)
#define Array_InternalArray__get_Item_TisLevel2Map_t1335_m24510(__this, p0, method) (( Level2Map_t1335 * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m21358_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m20947_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisLevel2Map_t1335_m24510_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.Level2Map>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.Level2Map>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.Level2Map>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.Level2Map>::MoveNext()
// T System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.Level2Map>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t4472_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.Level2Map>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.Level2Map>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.Level2Map>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.Level2Map>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.Level2Map>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.Level2Map>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.Level2Map>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t4473_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Mono.Globalization.Unicode.Level2Map>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4474_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<Mono.Globalization.Unicode.Level2Map>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<Mono.Globalization.Unicode.Level2Map>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<Mono.Globalization.Unicode.Level2Map>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<Mono.Globalization.Unicode.Level2Map>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<Mono.Globalization.Unicode.Level2Map>::set_Item(System.Int32,T)
#ifdef __clang__
#pragma clang diagnostic pop
#endif
