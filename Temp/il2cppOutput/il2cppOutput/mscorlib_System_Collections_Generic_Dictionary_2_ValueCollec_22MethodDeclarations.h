#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>
struct ValueCollection_t2903;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t502;
// System.String
struct String_t;
// System.Collections.Generic.IEnumerator`1<System.String>
struct IEnumerator_1_t3522;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t117;
// System.String[]
struct StringU5BU5D_t423;
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,System.String>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_23.h"

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_10MethodDeclarations.h"
#define ValueCollection__ctor_m16772(__this, ___dictionary, method) (( void (*) (ValueCollection_t2903 *, Dictionary_2_t502 *, MethodInfo*))ValueCollection__ctor_m13880_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m16773(__this, ___item, method) (( void (*) (ValueCollection_t2903 *, String_t*, MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m13881_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>::System.Collections.Generic.ICollection<TValue>.Clear()
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m16774(__this, method) (( void (*) (ValueCollection_t2903 *, MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m13882_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m16775(__this, ___item, method) (( bool (*) (ValueCollection_t2903 *, String_t*, MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m13883_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m16776(__this, ___item, method) (( bool (*) (ValueCollection_t2903 *, String_t*, MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m13884_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
#define ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m16777(__this, method) (( Object_t* (*) (ValueCollection_t2903 *, MethodInfo*))ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m13885_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define ValueCollection_System_Collections_ICollection_CopyTo_m16778(__this, ___array, ___index, method) (( void (*) (ValueCollection_t2903 *, Array_t *, int32_t, MethodInfo*))ValueCollection_System_Collections_ICollection_CopyTo_m13886_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>::System.Collections.IEnumerable.GetEnumerator()
#define ValueCollection_System_Collections_IEnumerable_GetEnumerator_m16779(__this, method) (( Object_t * (*) (ValueCollection_t2903 *, MethodInfo*))ValueCollection_System_Collections_IEnumerable_GetEnumerator_m13887_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m16780(__this, method) (( bool (*) (ValueCollection_t2903 *, MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m13888_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>::System.Collections.ICollection.get_IsSynchronized()
#define ValueCollection_System_Collections_ICollection_get_IsSynchronized_m16781(__this, method) (( bool (*) (ValueCollection_t2903 *, MethodInfo*))ValueCollection_System_Collections_ICollection_get_IsSynchronized_m13889_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>::System.Collections.ICollection.get_SyncRoot()
#define ValueCollection_System_Collections_ICollection_get_SyncRoot_m16782(__this, method) (( Object_t * (*) (ValueCollection_t2903 *, MethodInfo*))ValueCollection_System_Collections_ICollection_get_SyncRoot_m13890_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>::CopyTo(TValue[],System.Int32)
#define ValueCollection_CopyTo_m16783(__this, ___array, ___index, method) (( void (*) (ValueCollection_t2903 *, StringU5BU5D_t423*, int32_t, MethodInfo*))ValueCollection_CopyTo_m13891_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>::GetEnumerator()
#define ValueCollection_GetEnumerator_m16784(__this, method) (( Enumerator_t2904  (*) (ValueCollection_t2903 *, MethodInfo*))ValueCollection_GetEnumerator_m13892_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>::get_Count()
#define ValueCollection_get_Count_m16785(__this, method) (( int32_t (*) (ValueCollection_t2903 *, MethodInfo*))ValueCollection_get_Count_m13893_gshared)(__this, method)
