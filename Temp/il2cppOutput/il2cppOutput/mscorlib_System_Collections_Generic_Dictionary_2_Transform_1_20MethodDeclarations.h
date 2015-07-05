#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>,UnityEngine.Font>
struct Transform_1_t2632;
// System.Object
struct Object_t;
// UnityEngine.Font
struct Font_t125;
// System.Collections.Generic.List`1<UnityEngine.UI.Text>
struct List_1_t287;
// System.IAsyncResult
struct IAsyncResult_t170;
// System.AsyncCallback
struct AsyncCallback_t171;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>,UnityEngine.Font>::.ctor(System.Object,System.IntPtr)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_17MethodDeclarations.h"
#define Transform_1__ctor_m14128(__this, ___object, ___method, method) (( void (*) (Transform_1_t2632 *, Object_t *, IntPtr_t, MethodInfo*))Transform_1__ctor_m13876_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>,UnityEngine.Font>::Invoke(TKey,TValue)
#define Transform_1_Invoke_m14129(__this, ___key, ___value, method) (( Font_t125 * (*) (Transform_1_t2632 *, Font_t125 *, List_1_t287 *, MethodInfo*))Transform_1_Invoke_m13877_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>,UnityEngine.Font>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
#define Transform_1_BeginInvoke_m14130(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t2632 *, Font_t125 *, List_1_t287 *, AsyncCallback_t171 *, Object_t *, MethodInfo*))Transform_1_BeginInvoke_m13878_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>,UnityEngine.Font>::EndInvoke(System.IAsyncResult)
#define Transform_1_EndInvoke_m14131(__this, ___result, method) (( Font_t125 * (*) (Transform_1_t2632 *, Object_t *, MethodInfo*))Transform_1_EndInvoke_m13879_gshared)(__this, ___result, method)
