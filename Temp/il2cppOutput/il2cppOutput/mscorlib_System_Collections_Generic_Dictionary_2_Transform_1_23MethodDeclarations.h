#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>,System.Collections.Generic.KeyValuePair`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>>
struct Transform_1_t2636;
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
// System.Collections.Generic.KeyValuePair`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_8.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>,System.Collections.Generic.KeyValuePair`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>>::.ctor(System.Object,System.IntPtr)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_24MethodDeclarations.h"
#define Transform_1__ctor_m14159(__this, ___object, ___method, method) (( void (*) (Transform_1_t2636 *, Object_t *, IntPtr_t, MethodInfo*))Transform_1__ctor_m14160_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>,System.Collections.Generic.KeyValuePair`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>>::Invoke(TKey,TValue)
#define Transform_1_Invoke_m14161(__this, ___key, ___value, method) (( KeyValuePair_2_t2609  (*) (Transform_1_t2636 *, Font_t125 *, List_1_t287 *, MethodInfo*))Transform_1_Invoke_m14162_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>,System.Collections.Generic.KeyValuePair`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
#define Transform_1_BeginInvoke_m14163(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t2636 *, Font_t125 *, List_1_t287 *, AsyncCallback_t171 *, Object_t *, MethodInfo*))Transform_1_BeginInvoke_m14164_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>,System.Collections.Generic.KeyValuePair`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>>::EndInvoke(System.IAsyncResult)
#define Transform_1_EndInvoke_m14165(__this, ___result, method) (( KeyValuePair_2_t2609  (*) (Transform_1_t2636 *, Object_t *, MethodInfo*))Transform_1_EndInvoke_m14166_gshared)(__this, ___result, method)
