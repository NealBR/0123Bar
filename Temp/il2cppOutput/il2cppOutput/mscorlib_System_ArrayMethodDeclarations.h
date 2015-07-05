#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array
struct Array_t;
// System.Object
struct Object_t;
// System.Int32[]
struct Int32U5BU5D_t1029;
// System.Type
struct Type_t;
// System.Collections.IEnumerator
struct IEnumerator_t117;
// System.Int64[]
struct Int64U5BU5D_t1302;
// System.Collections.IComparer
struct IComparer_t919;
// System.Array/Swapper
struct Swapper_t1301;
// System.Double[]
struct DoubleU5BU5D_t1303;
// System.Char[]
struct CharU5BU5D_t179;

// System.Void System.Array::.ctor()
extern "C" void Array__ctor_m6661 (Array_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Array::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * Array_System_Collections_IList_get_Item_m6662 (Array_t * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void Array_System_Collections_IList_set_Item_m6663 (Array_t * __this, int32_t ___index, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::System.Collections.IList.Add(System.Object)
extern "C" int32_t Array_System_Collections_IList_Add_m6664 (Array_t * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::System.Collections.IList.Clear()
extern "C" void Array_System_Collections_IList_Clear_m6665 (Array_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Array::System.Collections.IList.Contains(System.Object)
extern "C" bool Array_System_Collections_IList_Contains_m6666 (Array_t * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t Array_System_Collections_IList_IndexOf_m6667 (Array_t * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void Array_System_Collections_IList_Insert_m6668 (Array_t * __this, int32_t ___index, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::System.Collections.IList.Remove(System.Object)
extern "C" void Array_System_Collections_IList_Remove_m6669 (Array_t * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::System.Collections.IList.RemoveAt(System.Int32)
extern "C" void Array_System_Collections_IList_RemoveAt_m6670 (Array_t * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::System.Collections.ICollection.get_Count()
extern "C" int32_t Array_System_Collections_ICollection_get_Count_m6671 (Array_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::InternalArray__ICollection_get_Count()
extern "C" int32_t Array_InternalArray__ICollection_get_Count_m6672 (Array_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Array::InternalArray__ICollection_get_IsReadOnly()
extern "C" bool Array_InternalArray__ICollection_get_IsReadOnly_m6673 (Array_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::InternalArray__ICollection_Clear()
extern "C" void Array_InternalArray__ICollection_Clear_m6674 (Array_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::InternalArray__RemoveAt(System.Int32)
extern "C" void Array_InternalArray__RemoveAt_m6675 (Array_t * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::get_Length()
extern "C" int32_t Array_get_Length_m4744 (Array_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Array::get_LongLength()
extern "C" int64_t Array_get_LongLength_m6676 (Array_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::get_Rank()
extern "C" int32_t Array_get_Rank_m4750 (Array_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::GetRank()
extern "C" int32_t Array_GetRank_m6677 (Array_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::GetLength(System.Int32)
extern "C" int32_t Array_GetLength_m6678 (Array_t * __this, int32_t ___dimension, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Array::GetLongLength(System.Int32)
extern "C" int64_t Array_GetLongLength_m6679 (Array_t * __this, int32_t ___dimension, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::GetLowerBound(System.Int32)
extern "C" int32_t Array_GetLowerBound_m6680 (Array_t * __this, int32_t ___dimension, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Array::GetValue(System.Int32[])
extern "C" Object_t * Array_GetValue_m6681 (Array_t * __this, Int32U5BU5D_t1029* ___indices, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::SetValue(System.Object,System.Int32[])
extern "C" void Array_SetValue_m6682 (Array_t * __this, Object_t * ___value, Int32U5BU5D_t1029* ___indices, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Array::GetValueImpl(System.Int32)
extern "C" Object_t * Array_GetValueImpl_m6683 (Array_t * __this, int32_t ___pos, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::SetValueImpl(System.Object,System.Int32)
extern "C" void Array_SetValueImpl_m6684 (Array_t * __this, Object_t * ___value, int32_t ___pos, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Array::FastCopy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
extern "C" bool Array_FastCopy_m6685 (Object_t * __this /* static, unused */, Array_t * ___source, int32_t ___source_idx, Array_t * ___dest, int32_t ___dest_idx, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Array System.Array::CreateInstanceImpl(System.Type,System.Int32[],System.Int32[])
extern "C" Array_t * Array_CreateInstanceImpl_m6686 (Object_t * __this /* static, unused */, Type_t * ___elementType, Int32U5BU5D_t1029* ___lengths, Int32U5BU5D_t1029* ___bounds, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Array::get_IsSynchronized()
extern "C" bool Array_get_IsSynchronized_m6687 (Array_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Array::get_SyncRoot()
extern "C" Object_t * Array_get_SyncRoot_m6688 (Array_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Array::get_IsFixedSize()
extern "C" bool Array_get_IsFixedSize_m6689 (Array_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Array::get_IsReadOnly()
extern "C" bool Array_get_IsReadOnly_m6690 (Array_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Array::GetEnumerator()
extern "C" Object_t * Array_GetEnumerator_m4934 (Array_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::GetUpperBound(System.Int32)
extern "C" int32_t Array_GetUpperBound_m6691 (Array_t * __this, int32_t ___dimension, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Array::GetValue(System.Int32)
extern "C" Object_t * Array_GetValue_m6692 (Array_t * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Array::GetValue(System.Int32,System.Int32)
extern "C" Object_t * Array_GetValue_m6693 (Array_t * __this, int32_t ___index1, int32_t ___index2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Array::GetValue(System.Int32,System.Int32,System.Int32)
extern "C" Object_t * Array_GetValue_m6694 (Array_t * __this, int32_t ___index1, int32_t ___index2, int32_t ___index3, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Array::GetValue(System.Int64)
extern "C" Object_t * Array_GetValue_m6695 (Array_t * __this, int64_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Array::GetValue(System.Int64,System.Int64)
extern "C" Object_t * Array_GetValue_m6696 (Array_t * __this, int64_t ___index1, int64_t ___index2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Array::GetValue(System.Int64,System.Int64,System.Int64)
extern "C" Object_t * Array_GetValue_m6697 (Array_t * __this, int64_t ___index1, int64_t ___index2, int64_t ___index3, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::SetValue(System.Object,System.Int64)
extern "C" void Array_SetValue_m6698 (Array_t * __this, Object_t * ___value, int64_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::SetValue(System.Object,System.Int64,System.Int64)
extern "C" void Array_SetValue_m6699 (Array_t * __this, Object_t * ___value, int64_t ___index1, int64_t ___index2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::SetValue(System.Object,System.Int64,System.Int64,System.Int64)
extern "C" void Array_SetValue_m6700 (Array_t * __this, Object_t * ___value, int64_t ___index1, int64_t ___index2, int64_t ___index3, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::SetValue(System.Object,System.Int32)
extern "C" void Array_SetValue_m4745 (Array_t * __this, Object_t * ___value, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::SetValue(System.Object,System.Int32,System.Int32)
extern "C" void Array_SetValue_m6701 (Array_t * __this, Object_t * ___value, int32_t ___index1, int32_t ___index2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::SetValue(System.Object,System.Int32,System.Int32,System.Int32)
extern "C" void Array_SetValue_m6702 (Array_t * __this, Object_t * ___value, int32_t ___index1, int32_t ___index2, int32_t ___index3, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Array System.Array::CreateInstance(System.Type,System.Int32)
extern "C" Array_t * Array_CreateInstance_m6703 (Object_t * __this /* static, unused */, Type_t * ___elementType, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Array System.Array::CreateInstance(System.Type,System.Int32,System.Int32)
extern "C" Array_t * Array_CreateInstance_m6704 (Object_t * __this /* static, unused */, Type_t * ___elementType, int32_t ___length1, int32_t ___length2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Array System.Array::CreateInstance(System.Type,System.Int32,System.Int32,System.Int32)
extern "C" Array_t * Array_CreateInstance_m6705 (Object_t * __this /* static, unused */, Type_t * ___elementType, int32_t ___length1, int32_t ___length2, int32_t ___length3, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Array System.Array::CreateInstance(System.Type,System.Int32[])
extern "C" Array_t * Array_CreateInstance_m6706 (Object_t * __this /* static, unused */, Type_t * ___elementType, Int32U5BU5D_t1029* ___lengths, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Array System.Array::CreateInstance(System.Type,System.Int32[],System.Int32[])
extern "C" Array_t * Array_CreateInstance_m6707 (Object_t * __this /* static, unused */, Type_t * ___elementType, Int32U5BU5D_t1029* ___lengths, Int32U5BU5D_t1029* ___lowerBounds, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] System.Array::GetIntArray(System.Int64[])
extern "C" Int32U5BU5D_t1029* Array_GetIntArray_m6708 (Object_t * __this /* static, unused */, Int64U5BU5D_t1302* ___values, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Array System.Array::CreateInstance(System.Type,System.Int64[])
extern "C" Array_t * Array_CreateInstance_m6709 (Object_t * __this /* static, unused */, Type_t * ___elementType, Int64U5BU5D_t1302* ___lengths, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Array::GetValue(System.Int64[])
extern "C" Object_t * Array_GetValue_m6710 (Array_t * __this, Int64U5BU5D_t1302* ___indices, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::SetValue(System.Object,System.Int64[])
extern "C" void Array_SetValue_m6711 (Array_t * __this, Object_t * ___value, Int64U5BU5D_t1302* ___indices, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::BinarySearch(System.Array,System.Object)
extern "C" int32_t Array_BinarySearch_m6712 (Object_t * __this /* static, unused */, Array_t * ___array, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::BinarySearch(System.Array,System.Object,System.Collections.IComparer)
extern "C" int32_t Array_BinarySearch_m6713 (Object_t * __this /* static, unused */, Array_t * ___array, Object_t * ___value, Object_t * ___comparer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::BinarySearch(System.Array,System.Int32,System.Int32,System.Object)
extern "C" int32_t Array_BinarySearch_m6714 (Object_t * __this /* static, unused */, Array_t * ___array, int32_t ___index, int32_t ___length, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::BinarySearch(System.Array,System.Int32,System.Int32,System.Object,System.Collections.IComparer)
extern "C" int32_t Array_BinarySearch_m6715 (Object_t * __this /* static, unused */, Array_t * ___array, int32_t ___index, int32_t ___length, Object_t * ___value, Object_t * ___comparer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::DoBinarySearch(System.Array,System.Int32,System.Int32,System.Object,System.Collections.IComparer)
extern "C" int32_t Array_DoBinarySearch_m6716 (Object_t * __this /* static, unused */, Array_t * ___array, int32_t ___index, int32_t ___length, Object_t * ___value, Object_t * ___comparer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
extern "C" void Array_Clear_m5899 (Object_t * __this /* static, unused */, Array_t * ___array, int32_t ___index, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::ClearInternal(System.Array,System.Int32,System.Int32)
extern "C" void Array_ClearInternal_m6717 (Object_t * __this /* static, unused */, Array_t * ___a, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Array::Clone()
extern "C" Object_t * Array_Clone_m4775 (Array_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::Copy(System.Array,System.Array,System.Int32)
extern "C" void Array_Copy_m4971 (Object_t * __this /* static, unused */, Array_t * ___sourceArray, Array_t * ___destinationArray, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::Copy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
extern "C" void Array_Copy_m6718 (Object_t * __this /* static, unused */, Array_t * ___sourceArray, int32_t ___sourceIndex, Array_t * ___destinationArray, int32_t ___destinationIndex, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::Copy(System.Array,System.Int64,System.Array,System.Int64,System.Int64)
extern "C" void Array_Copy_m6719 (Object_t * __this /* static, unused */, Array_t * ___sourceArray, int64_t ___sourceIndex, Array_t * ___destinationArray, int64_t ___destinationIndex, int64_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::Copy(System.Array,System.Array,System.Int64)
extern "C" void Array_Copy_m6720 (Object_t * __this /* static, unused */, Array_t * ___sourceArray, Array_t * ___destinationArray, int64_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::IndexOf(System.Array,System.Object)
extern "C" int32_t Array_IndexOf_m6721 (Object_t * __this /* static, unused */, Array_t * ___array, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::IndexOf(System.Array,System.Object,System.Int32)
extern "C" int32_t Array_IndexOf_m6722 (Object_t * __this /* static, unused */, Array_t * ___array, Object_t * ___value, int32_t ___startIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::IndexOf(System.Array,System.Object,System.Int32,System.Int32)
extern "C" int32_t Array_IndexOf_m6723 (Object_t * __this /* static, unused */, Array_t * ___array, Object_t * ___value, int32_t ___startIndex, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::Initialize()
extern "C" void Array_Initialize_m6724 (Array_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::LastIndexOf(System.Array,System.Object)
extern "C" int32_t Array_LastIndexOf_m6725 (Object_t * __this /* static, unused */, Array_t * ___array, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::LastIndexOf(System.Array,System.Object,System.Int32)
extern "C" int32_t Array_LastIndexOf_m6726 (Object_t * __this /* static, unused */, Array_t * ___array, Object_t * ___value, int32_t ___startIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::LastIndexOf(System.Array,System.Object,System.Int32,System.Int32)
extern "C" int32_t Array_LastIndexOf_m6727 (Object_t * __this /* static, unused */, Array_t * ___array, Object_t * ___value, int32_t ___startIndex, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Array/Swapper System.Array::get_swapper(System.Array)
extern "C" Swapper_t1301 * Array_get_swapper_m6728 (Object_t * __this /* static, unused */, Array_t * ___array, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::Reverse(System.Array)
extern "C" void Array_Reverse_m5894 (Object_t * __this /* static, unused */, Array_t * ___array, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::Reverse(System.Array,System.Int32,System.Int32)
extern "C" void Array_Reverse_m5940 (Object_t * __this /* static, unused */, Array_t * ___array, int32_t ___index, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::Sort(System.Array)
extern "C" void Array_Sort_m6729 (Object_t * __this /* static, unused */, Array_t * ___array, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::Sort(System.Array,System.Array)
extern "C" void Array_Sort_m6730 (Object_t * __this /* static, unused */, Array_t * ___keys, Array_t * ___items, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::Sort(System.Array,System.Collections.IComparer)
extern "C" void Array_Sort_m6731 (Object_t * __this /* static, unused */, Array_t * ___array, Object_t * ___comparer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::Sort(System.Array,System.Int32,System.Int32)
extern "C" void Array_Sort_m6732 (Object_t * __this /* static, unused */, Array_t * ___array, int32_t ___index, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::Sort(System.Array,System.Array,System.Collections.IComparer)
extern "C" void Array_Sort_m6733 (Object_t * __this /* static, unused */, Array_t * ___keys, Array_t * ___items, Object_t * ___comparer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::Sort(System.Array,System.Array,System.Int32,System.Int32)
extern "C" void Array_Sort_m6734 (Object_t * __this /* static, unused */, Array_t * ___keys, Array_t * ___items, int32_t ___index, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::Sort(System.Array,System.Int32,System.Int32,System.Collections.IComparer)
extern "C" void Array_Sort_m6735 (Object_t * __this /* static, unused */, Array_t * ___array, int32_t ___index, int32_t ___length, Object_t * ___comparer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::Sort(System.Array,System.Array,System.Int32,System.Int32,System.Collections.IComparer)
extern "C" void Array_Sort_m6736 (Object_t * __this /* static, unused */, Array_t * ___keys, Array_t * ___items, int32_t ___index, int32_t ___length, Object_t * ___comparer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::int_swapper(System.Int32,System.Int32)
extern "C" void Array_int_swapper_m6737 (Array_t * __this, int32_t ___i, int32_t ___j, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::obj_swapper(System.Int32,System.Int32)
extern "C" void Array_obj_swapper_m6738 (Array_t * __this, int32_t ___i, int32_t ___j, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::slow_swapper(System.Int32,System.Int32)
extern "C" void Array_slow_swapper_m6739 (Array_t * __this, int32_t ___i, int32_t ___j, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::double_swapper(System.Int32,System.Int32)
extern "C" void Array_double_swapper_m6740 (Array_t * __this, int32_t ___i, int32_t ___j, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::new_gap(System.Int32)
extern "C" int32_t Array_new_gap_m6741 (Object_t * __this /* static, unused */, int32_t ___gap, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::combsort(System.Double[],System.Int32,System.Int32,System.Array/Swapper)
extern "C" void Array_combsort_m6742 (Object_t * __this /* static, unused */, DoubleU5BU5D_t1303* ___array, int32_t ___start, int32_t ___size, Swapper_t1301 * ___swap_items, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::combsort(System.Int32[],System.Int32,System.Int32,System.Array/Swapper)
extern "C" void Array_combsort_m6743 (Object_t * __this /* static, unused */, Int32U5BU5D_t1029* ___array, int32_t ___start, int32_t ___size, Swapper_t1301 * ___swap_items, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::combsort(System.Char[],System.Int32,System.Int32,System.Array/Swapper)
extern "C" void Array_combsort_m6744 (Object_t * __this /* static, unused */, CharU5BU5D_t179* ___array, int32_t ___start, int32_t ___size, Swapper_t1301 * ___swap_items, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::qsort(System.Array,System.Array,System.Int32,System.Int32,System.Collections.IComparer)
extern "C" void Array_qsort_m6745 (Object_t * __this /* static, unused */, Array_t * ___keys, Array_t * ___items, int32_t ___low0, int32_t ___high0, Object_t * ___comparer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::swap(System.Array,System.Array,System.Int32,System.Int32)
extern "C" void Array_swap_m6746 (Object_t * __this /* static, unused */, Array_t * ___keys, Array_t * ___items, int32_t ___i, int32_t ___j, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::compare(System.Object,System.Object,System.Collections.IComparer)
extern "C" int32_t Array_compare_m6747 (Object_t * __this /* static, unused */, Object_t * ___value1, Object_t * ___value2, Object_t * ___comparer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::CopyTo(System.Array,System.Int32)
extern "C" void Array_CopyTo_m4933 (Array_t * __this, Array_t * ___array, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::CopyTo(System.Array,System.Int64)
extern "C" void Array_CopyTo_m6748 (Array_t * __this, Array_t * ___array, int64_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::ConstrainedCopy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
extern "C" void Array_ConstrainedCopy_m6749 (Object_t * __this /* static, unused */, Array_t * ___sourceArray, int32_t ___sourceIndex, Array_t * ___destinationArray, int32_t ___destinationIndex, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
