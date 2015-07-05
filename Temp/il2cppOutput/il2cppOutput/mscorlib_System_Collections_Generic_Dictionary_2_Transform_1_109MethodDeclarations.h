#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp,System.Collections.Generic.KeyValuePair`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>>
struct Transform_1_t3233;
// System.Object
struct Object_t;
// UnityEngine.Event
struct Event_t183;
struct Event_t183_marshaled;
// System.IAsyncResult
struct IAsyncResult_t170;
// System.AsyncCallback
struct AsyncCallback_t171;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_23.h"
// UnityEngine.TextEditor/TextEditOp
#include "UnityEngine_UnityEngine_TextEditor_TextEditOp.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp,System.Collections.Generic.KeyValuePair`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>>::.ctor(System.Object,System.IntPtr)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.Generic.KeyValuePair`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_110MethodDeclarations.h"
#define Transform_1__ctor_m20006(__this, ___object, ___method, method) (( void (*) (Transform_1_t3233 *, Object_t *, IntPtr_t, MethodInfo*))Transform_1__ctor_m20007_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp,System.Collections.Generic.KeyValuePair`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>>::Invoke(TKey,TValue)
#define Transform_1_Invoke_m20008(__this, ___key, ___value, method) (( KeyValuePair_2_t3222  (*) (Transform_1_t3233 *, Event_t183 *, int32_t, MethodInfo*))Transform_1_Invoke_m20009_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp,System.Collections.Generic.KeyValuePair`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
#define Transform_1_BeginInvoke_m20010(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t3233 *, Event_t183 *, int32_t, AsyncCallback_t171 *, Object_t *, MethodInfo*))Transform_1_BeginInvoke_m20011_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp,System.Collections.Generic.KeyValuePair`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>>::EndInvoke(System.IAsyncResult)
#define Transform_1_EndInvoke_m20012(__this, ___result, method) (( KeyValuePair_2_t3222  (*) (Transform_1_t3233 *, Object_t *, MethodInfo*))Transform_1_EndInvoke_m20013_gshared)(__this, ___result, method)
