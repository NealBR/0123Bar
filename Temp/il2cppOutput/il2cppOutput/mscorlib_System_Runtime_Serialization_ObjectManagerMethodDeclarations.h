#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Serialization.ObjectManager
struct ObjectManager_t1640;
// System.Runtime.Serialization.ISurrogateSelector
struct ISurrogateSelector_t1598;
// System.Runtime.Serialization.ObjectRecord
struct ObjectRecord_t1647;
// System.Object
struct Object_t;
// System.Runtime.Serialization.BaseFixupRecord
struct BaseFixupRecord_t1648;
// System.Int32[]
struct Int32U5BU5D_t1029;
// System.String
struct String_t;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t653;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Runtime.Serialization.ObjectManager::.ctor(System.Runtime.Serialization.ISurrogateSelector,System.Runtime.Serialization.StreamingContext)
extern "C" void ObjectManager__ctor_m8875 (ObjectManager_t1640 * __this, Object_t * ___selector, StreamingContext_t654  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ObjectManager::DoFixups()
extern "C" void ObjectManager_DoFixups_m8876 (ObjectManager_t1640 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Serialization.ObjectRecord System.Runtime.Serialization.ObjectManager::GetObjectRecord(System.Int64)
extern "C" ObjectRecord_t1647 * ObjectManager_GetObjectRecord_m8877 (ObjectManager_t1640 * __this, int64_t ___objectID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Serialization.ObjectManager::GetObject(System.Int64)
extern "C" Object_t * ObjectManager_GetObject_m8878 (ObjectManager_t1640 * __this, int64_t ___objectID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ObjectManager::RaiseDeserializationEvent()
extern "C" void ObjectManager_RaiseDeserializationEvent_m8879 (ObjectManager_t1640 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ObjectManager::RaiseOnDeserializingEvent(System.Object)
extern "C" void ObjectManager_RaiseOnDeserializingEvent_m8880 (ObjectManager_t1640 * __this, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ObjectManager::RaiseOnDeserializedEvent(System.Object)
extern "C" void ObjectManager_RaiseOnDeserializedEvent_m8881 (ObjectManager_t1640 * __this, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ObjectManager::AddFixup(System.Runtime.Serialization.BaseFixupRecord)
extern "C" void ObjectManager_AddFixup_m8882 (ObjectManager_t1640 * __this, BaseFixupRecord_t1648 * ___record, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ObjectManager::RecordArrayElementFixup(System.Int64,System.Int32,System.Int64)
extern "C" void ObjectManager_RecordArrayElementFixup_m8883 (ObjectManager_t1640 * __this, int64_t ___arrayToBeFixed, int32_t ___index, int64_t ___objectRequired, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ObjectManager::RecordArrayElementFixup(System.Int64,System.Int32[],System.Int64)
extern "C" void ObjectManager_RecordArrayElementFixup_m8884 (ObjectManager_t1640 * __this, int64_t ___arrayToBeFixed, Int32U5BU5D_t1029* ___indices, int64_t ___objectRequired, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ObjectManager::RecordDelayedFixup(System.Int64,System.String,System.Int64)
extern "C" void ObjectManager_RecordDelayedFixup_m8885 (ObjectManager_t1640 * __this, int64_t ___objectToBeFixed, String_t* ___memberName, int64_t ___objectRequired, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ObjectManager::RecordFixup(System.Int64,System.Reflection.MemberInfo,System.Int64)
extern "C" void ObjectManager_RecordFixup_m8886 (ObjectManager_t1640 * __this, int64_t ___objectToBeFixed, MemberInfo_t * ___member, int64_t ___objectRequired, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ObjectManager::RegisterObjectInternal(System.Object,System.Runtime.Serialization.ObjectRecord)
extern "C" void ObjectManager_RegisterObjectInternal_m8887 (ObjectManager_t1640 * __this, Object_t * ___obj, ObjectRecord_t1647 * ___record, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ObjectManager::RegisterObject(System.Object,System.Int64,System.Runtime.Serialization.SerializationInfo,System.Int64,System.Reflection.MemberInfo,System.Int32[])
extern "C" void ObjectManager_RegisterObject_m8888 (ObjectManager_t1640 * __this, Object_t * ___obj, int64_t ___objectID, SerializationInfo_t653 * ___info, int64_t ___idOfContainingObj, MemberInfo_t * ___member, Int32U5BU5D_t1029* ___arrayIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
