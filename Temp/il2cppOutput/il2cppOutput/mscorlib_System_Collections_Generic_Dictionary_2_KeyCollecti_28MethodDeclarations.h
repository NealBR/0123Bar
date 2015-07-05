#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/KeyCollection<System.UInt64,System.Object>
struct KeyCollection_t3041;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>
struct Dictionary_2_t3035;
// System.Collections.Generic.IEnumerator`1<System.UInt64>
struct IEnumerator_1_t3564;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t117;
// System.UInt64[]
struct UInt64U5BU5D_t1692;
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.UInt64,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_29.h"

// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.UInt64,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void KeyCollection__ctor_m18306_gshared (KeyCollection_t3041 * __this, Dictionary_2_t3035 * ___dictionary, MethodInfo* method);
#define KeyCollection__ctor_m18306(__this, ___dictionary, method) (( void (*) (KeyCollection_t3041 *, Dictionary_2_t3035 *, MethodInfo*))KeyCollection__ctor_m18306_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.UInt64,System.Object>::System.Collections.Generic.ICollection<TKey>.Add(TKey)
extern "C" void KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m18307_gshared (KeyCollection_t3041 * __this, uint64_t ___item, MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m18307(__this, ___item, method) (( void (*) (KeyCollection_t3041 *, uint64_t, MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m18307_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.UInt64,System.Object>::System.Collections.Generic.ICollection<TKey>.Clear()
extern "C" void KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m18308_gshared (KeyCollection_t3041 * __this, MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m18308(__this, method) (( void (*) (KeyCollection_t3041 *, MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m18308_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.UInt64,System.Object>::System.Collections.Generic.ICollection<TKey>.Contains(TKey)
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m18309_gshared (KeyCollection_t3041 * __this, uint64_t ___item, MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m18309(__this, ___item, method) (( bool (*) (KeyCollection_t3041 *, uint64_t, MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m18309_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.UInt64,System.Object>::System.Collections.Generic.ICollection<TKey>.Remove(TKey)
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m18310_gshared (KeyCollection_t3041 * __this, uint64_t ___item, MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m18310(__this, ___item, method) (( bool (*) (KeyCollection_t3041 *, uint64_t, MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m18310_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TKey> System.Collections.Generic.Dictionary`2/KeyCollection<System.UInt64,System.Object>::System.Collections.Generic.IEnumerable<TKey>.GetEnumerator()
extern "C" Object_t* KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m18311_gshared (KeyCollection_t3041 * __this, MethodInfo* method);
#define KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m18311(__this, method) (( Object_t* (*) (KeyCollection_t3041 *, MethodInfo*))KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m18311_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.UInt64,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void KeyCollection_System_Collections_ICollection_CopyTo_m18312_gshared (KeyCollection_t3041 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method);
#define KeyCollection_System_Collections_ICollection_CopyTo_m18312(__this, ___array, ___index, method) (( void (*) (KeyCollection_t3041 *, Array_t *, int32_t, MethodInfo*))KeyCollection_System_Collections_ICollection_CopyTo_m18312_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/KeyCollection<System.UInt64,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * KeyCollection_System_Collections_IEnumerable_GetEnumerator_m18313_gshared (KeyCollection_t3041 * __this, MethodInfo* method);
#define KeyCollection_System_Collections_IEnumerable_GetEnumerator_m18313(__this, method) (( Object_t * (*) (KeyCollection_t3041 *, MethodInfo*))KeyCollection_System_Collections_IEnumerable_GetEnumerator_m18313_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.UInt64,System.Object>::System.Collections.Generic.ICollection<TKey>.get_IsReadOnly()
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m18314_gshared (KeyCollection_t3041 * __this, MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m18314(__this, method) (( bool (*) (KeyCollection_t3041 *, MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m18314_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.UInt64,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool KeyCollection_System_Collections_ICollection_get_IsSynchronized_m18315_gshared (KeyCollection_t3041 * __this, MethodInfo* method);
#define KeyCollection_System_Collections_ICollection_get_IsSynchronized_m18315(__this, method) (( bool (*) (KeyCollection_t3041 *, MethodInfo*))KeyCollection_System_Collections_ICollection_get_IsSynchronized_m18315_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection<System.UInt64,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * KeyCollection_System_Collections_ICollection_get_SyncRoot_m18316_gshared (KeyCollection_t3041 * __this, MethodInfo* method);
#define KeyCollection_System_Collections_ICollection_get_SyncRoot_m18316(__this, method) (( Object_t * (*) (KeyCollection_t3041 *, MethodInfo*))KeyCollection_System_Collections_ICollection_get_SyncRoot_m18316_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.UInt64,System.Object>::CopyTo(TKey[],System.Int32)
extern "C" void KeyCollection_CopyTo_m18317_gshared (KeyCollection_t3041 * __this, UInt64U5BU5D_t1692* ___array, int32_t ___index, MethodInfo* method);
#define KeyCollection_CopyTo_m18317(__this, ___array, ___index, method) (( void (*) (KeyCollection_t3041 *, UInt64U5BU5D_t1692*, int32_t, MethodInfo*))KeyCollection_CopyTo_m18317_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection<System.UInt64,System.Object>::GetEnumerator()
extern "C" Enumerator_t3042  KeyCollection_GetEnumerator_m18318_gshared (KeyCollection_t3041 * __this, MethodInfo* method);
#define KeyCollection_GetEnumerator_m18318(__this, method) (( Enumerator_t3042  (*) (KeyCollection_t3041 *, MethodInfo*))KeyCollection_GetEnumerator_m18318_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection<System.UInt64,System.Object>::get_Count()
extern "C" int32_t KeyCollection_get_Count_m18319_gshared (KeyCollection_t3041 * __this, MethodInfo* method);
#define KeyCollection_get_Count_m18319(__this, method) (( int32_t (*) (KeyCollection_t3041 *, MethodInfo*))KeyCollection_get_Count_m18319_gshared)(__this, method)
