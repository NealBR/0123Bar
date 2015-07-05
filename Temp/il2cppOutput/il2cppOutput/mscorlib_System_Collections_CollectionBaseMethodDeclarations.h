#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.CollectionBase
struct CollectionBase_t984;
// System.Object
struct Object_t;
// System.Collections.ArrayList
struct ArrayList_t924;
// System.Collections.IList
struct IList_t796;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t117;

// System.Void System.Collections.CollectionBase::.ctor()
extern "C" void CollectionBase__ctor_m4884 (CollectionBase_t984 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CollectionBase::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void CollectionBase_System_Collections_ICollection_CopyTo_m5057 (CollectionBase_t984 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.CollectionBase::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * CollectionBase_System_Collections_ICollection_get_SyncRoot_m5056 (CollectionBase_t984 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.CollectionBase::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool CollectionBase_System_Collections_ICollection_get_IsSynchronized_m5055 (CollectionBase_t984 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.CollectionBase::System.Collections.IList.Add(System.Object)
extern "C" int32_t CollectionBase_System_Collections_IList_Add_m5062 (CollectionBase_t984 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.CollectionBase::System.Collections.IList.Contains(System.Object)
extern "C" bool CollectionBase_System_Collections_IList_Contains_m5063 (CollectionBase_t984 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.CollectionBase::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t CollectionBase_System_Collections_IList_IndexOf_m5064 (CollectionBase_t984 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CollectionBase::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void CollectionBase_System_Collections_IList_Insert_m5065 (CollectionBase_t984 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CollectionBase::System.Collections.IList.Remove(System.Object)
extern "C" void CollectionBase_System_Collections_IList_Remove_m5066 (CollectionBase_t984 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.CollectionBase::System.Collections.IList.get_IsFixedSize()
extern "C" bool CollectionBase_System_Collections_IList_get_IsFixedSize_m5058 (CollectionBase_t984 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.CollectionBase::System.Collections.IList.get_IsReadOnly()
extern "C" bool CollectionBase_System_Collections_IList_get_IsReadOnly_m5059 (CollectionBase_t984 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.CollectionBase::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * CollectionBase_System_Collections_IList_get_Item_m5060 (CollectionBase_t984 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CollectionBase::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void CollectionBase_System_Collections_IList_set_Item_m5061 (CollectionBase_t984 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.CollectionBase::get_Count()
extern "C" int32_t CollectionBase_get_Count_m4862 (CollectionBase_t984 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.CollectionBase::GetEnumerator()
extern "C" Object_t * CollectionBase_GetEnumerator_m4901 (CollectionBase_t984 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CollectionBase::Clear()
extern "C" void CollectionBase_Clear_m4915 (CollectionBase_t984 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CollectionBase::RemoveAt(System.Int32)
extern "C" void CollectionBase_RemoveAt_m5067 (CollectionBase_t984 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Collections.CollectionBase::get_InnerList()
extern "C" ArrayList_t924 * CollectionBase_get_InnerList_m4877 (CollectionBase_t984 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IList System.Collections.CollectionBase::get_List()
extern "C" Object_t * CollectionBase_get_List_m4972 (CollectionBase_t984 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CollectionBase::OnClear()
extern "C" void CollectionBase_OnClear_m5068 (CollectionBase_t984 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CollectionBase::OnClearComplete()
extern "C" void CollectionBase_OnClearComplete_m5069 (CollectionBase_t984 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CollectionBase::OnInsert(System.Int32,System.Object)
extern "C" void CollectionBase_OnInsert_m5070 (CollectionBase_t984 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CollectionBase::OnInsertComplete(System.Int32,System.Object)
extern "C" void CollectionBase_OnInsertComplete_m5071 (CollectionBase_t984 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CollectionBase::OnRemove(System.Int32,System.Object)
extern "C" void CollectionBase_OnRemove_m5072 (CollectionBase_t984 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CollectionBase::OnRemoveComplete(System.Int32,System.Object)
extern "C" void CollectionBase_OnRemoveComplete_m5073 (CollectionBase_t984 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CollectionBase::OnSet(System.Int32,System.Object,System.Object)
extern "C" void CollectionBase_OnSet_m5074 (CollectionBase_t984 * __this, int32_t ___index, Object_t * ___oldValue, Object_t * ___newValue, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CollectionBase::OnSetComplete(System.Int32,System.Object,System.Object)
extern "C" void CollectionBase_OnSetComplete_m5075 (CollectionBase_t984 * __this, int32_t ___index, Object_t * ___oldValue, Object_t * ___newValue, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CollectionBase::OnValidate(System.Object)
extern "C" void CollectionBase_OnValidate_m5076 (CollectionBase_t984 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
