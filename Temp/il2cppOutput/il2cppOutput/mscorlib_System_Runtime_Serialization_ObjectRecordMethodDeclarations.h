#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Serialization.ObjectRecord
struct ObjectRecord_t1647;
// System.Runtime.Serialization.ObjectManager
struct ObjectManager_t1640;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Object
struct Object_t;
// System.Int32[]
struct Int32U5BU5D_t1029;
// System.String
struct String_t;
// System.Runtime.Serialization.BaseFixupRecord
struct BaseFixupRecord_t1648;
// System.Runtime.Serialization.ISurrogateSelector
struct ISurrogateSelector_t1598;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Runtime.Serialization.ObjectRecord::.ctor()
extern "C" void ObjectRecord__ctor_m8899 (ObjectRecord_t1647 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ObjectRecord::SetMemberValue(System.Runtime.Serialization.ObjectManager,System.Reflection.MemberInfo,System.Object)
extern "C" void ObjectRecord_SetMemberValue_m8900 (ObjectRecord_t1647 * __this, ObjectManager_t1640 * ___manager, MemberInfo_t * ___member, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ObjectRecord::SetArrayValue(System.Runtime.Serialization.ObjectManager,System.Object,System.Int32[])
extern "C" void ObjectRecord_SetArrayValue_m8901 (ObjectRecord_t1647 * __this, ObjectManager_t1640 * ___manager, Object_t * ___value, Int32U5BU5D_t1029* ___indices, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ObjectRecord::SetMemberValue(System.Runtime.Serialization.ObjectManager,System.String,System.Object)
extern "C" void ObjectRecord_SetMemberValue_m8902 (ObjectRecord_t1647 * __this, ObjectManager_t1640 * ___manager, String_t* ___memberName, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Serialization.ObjectRecord::get_IsInstanceReady()
extern "C" bool ObjectRecord_get_IsInstanceReady_m8903 (ObjectRecord_t1647 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Serialization.ObjectRecord::get_IsUnsolvedObjectReference()
extern "C" bool ObjectRecord_get_IsUnsolvedObjectReference_m8904 (ObjectRecord_t1647 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Serialization.ObjectRecord::get_IsRegistered()
extern "C" bool ObjectRecord_get_IsRegistered_m8905 (ObjectRecord_t1647 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Serialization.ObjectRecord::DoFixups(System.Boolean,System.Runtime.Serialization.ObjectManager,System.Boolean)
extern "C" bool ObjectRecord_DoFixups_m8906 (ObjectRecord_t1647 * __this, bool ___asContainer, ObjectManager_t1640 * ___manager, bool ___strict, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ObjectRecord::RemoveFixup(System.Runtime.Serialization.BaseFixupRecord,System.Boolean)
extern "C" void ObjectRecord_RemoveFixup_m8907 (ObjectRecord_t1647 * __this, BaseFixupRecord_t1648 * ___fixupToRemove, bool ___asContainer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ObjectRecord::UnchainFixup(System.Runtime.Serialization.BaseFixupRecord,System.Runtime.Serialization.BaseFixupRecord,System.Boolean)
extern "C" void ObjectRecord_UnchainFixup_m8908 (ObjectRecord_t1647 * __this, BaseFixupRecord_t1648 * ___fixup, BaseFixupRecord_t1648 * ___prevFixup, bool ___asContainer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ObjectRecord::ChainFixup(System.Runtime.Serialization.BaseFixupRecord,System.Boolean)
extern "C" void ObjectRecord_ChainFixup_m8909 (ObjectRecord_t1647 * __this, BaseFixupRecord_t1648 * ___fixup, bool ___asContainer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Serialization.ObjectRecord::LoadData(System.Runtime.Serialization.ObjectManager,System.Runtime.Serialization.ISurrogateSelector,System.Runtime.Serialization.StreamingContext)
extern "C" bool ObjectRecord_LoadData_m8910 (ObjectRecord_t1647 * __this, ObjectManager_t1640 * ___manager, Object_t * ___selector, StreamingContext_t654  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Serialization.ObjectRecord::get_HasPendingFixups()
extern "C" bool ObjectRecord_get_HasPendingFixups_m8911 (ObjectRecord_t1647 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
