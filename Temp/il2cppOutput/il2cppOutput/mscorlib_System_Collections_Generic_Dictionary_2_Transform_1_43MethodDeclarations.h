#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.String,UnityEngine.GUIStyle,System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.GUIStyle>>
struct Transform_1_t2876;
// System.Object
struct Object_t;
// System.String
struct String_t;
// UnityEngine.GUIStyle
struct GUIStyle_t466;
// System.IAsyncResult
struct IAsyncResult_t170;
// System.AsyncCallback
struct AsyncCallback_t171;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.GUIStyle>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_12.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.String,UnityEngine.GUIStyle,System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.GUIStyle>>::.ctor(System.Object,System.IntPtr)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.GUIStyle>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_44MethodDeclarations.h"
#define Transform_1__ctor_m16515(__this, ___object, ___method, method) (( void (*) (Transform_1_t2876 *, Object_t *, IntPtr_t, MethodInfo*))Transform_1__ctor_m16516_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,UnityEngine.GUIStyle,System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.GUIStyle>>::Invoke(TKey,TValue)
#define Transform_1_Invoke_m16517(__this, ___key, ___value, method) (( KeyValuePair_2_t2869  (*) (Transform_1_t2876 *, String_t*, GUIStyle_t466 *, MethodInfo*))Transform_1_Invoke_m16518_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.String,UnityEngine.GUIStyle,System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.GUIStyle>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
#define Transform_1_BeginInvoke_m16519(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t2876 *, String_t*, GUIStyle_t466 *, AsyncCallback_t171 *, Object_t *, MethodInfo*))Transform_1_BeginInvoke_m16520_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,UnityEngine.GUIStyle,System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.GUIStyle>>::EndInvoke(System.IAsyncResult)
#define Transform_1_EndInvoke_m16521(__this, ___result, method) (( KeyValuePair_2_t2869  (*) (Transform_1_t2876 *, Object_t *, MethodInfo*))Transform_1_EndInvoke_m16522_gshared)(__this, ___result, method)
