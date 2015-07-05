#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>,System.Collections.Generic.List`1<UnityEngine.UI.Text>>
struct Transform_1_t2635;
// System.Object
struct Object_t;
// System.Collections.Generic.List`1<UnityEngine.UI.Text>
struct List_1_t287;
// UnityEngine.Font
struct Font_t125;
// System.IAsyncResult
struct IAsyncResult_t170;
// System.AsyncCallback
struct AsyncCallback_t171;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::.ctor(System.Object,System.IntPtr)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_17MethodDeclarations.h"
#define Transform_1__ctor_m14151(__this, ___object, ___method, method) (( void (*) (Transform_1_t2635 *, Object_t *, IntPtr_t, MethodInfo*))Transform_1__ctor_m13876_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::Invoke(TKey,TValue)
#define Transform_1_Invoke_m14152(__this, ___key, ___value, method) (( List_1_t287 * (*) (Transform_1_t2635 *, Font_t125 *, List_1_t287 *, MethodInfo*))Transform_1_Invoke_m13877_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
#define Transform_1_BeginInvoke_m14153(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t2635 *, Font_t125 *, List_1_t287 *, AsyncCallback_t171 *, Object_t *, MethodInfo*))Transform_1_BeginInvoke_m13878_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::EndInvoke(System.IAsyncResult)
#define Transform_1_EndInvoke_m14154(__this, ___result, method) (( List_1_t287 * (*) (Transform_1_t2635 *, Object_t *, MethodInfo*))Transform_1_EndInvoke_m13879_gshared)(__this, ___result, method)
