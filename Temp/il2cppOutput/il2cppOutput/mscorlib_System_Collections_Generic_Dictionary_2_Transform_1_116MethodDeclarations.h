#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Boolean,System.Boolean>
struct Transform_1_t3301;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t170;
// System.AsyncCallback
struct AsyncCallback_t171;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Boolean,System.Boolean>::.ctor(System.Object,System.IntPtr)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Byte>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_112MethodDeclarations.h"
#define Transform_1__ctor_m20630(__this, ___object, ___method, method) (( void (*) (Transform_1_t3301 *, Object_t *, IntPtr_t, MethodInfo*))Transform_1__ctor_m20532_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Boolean,System.Boolean>::Invoke(TKey,TValue)
#define Transform_1_Invoke_m20631(__this, ___key, ___value, method) (( bool (*) (Transform_1_t3301 *, String_t*, bool, MethodInfo*))Transform_1_Invoke_m20533_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Boolean,System.Boolean>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
#define Transform_1_BeginInvoke_m20632(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t3301 *, String_t*, bool, AsyncCallback_t171 *, Object_t *, MethodInfo*))Transform_1_BeginInvoke_m20534_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Boolean,System.Boolean>::EndInvoke(System.IAsyncResult)
#define Transform_1_EndInvoke_m20633(__this, ___result, method) (( bool (*) (Transform_1_t3301 *, Object_t *, MethodInfo*))Transform_1_EndInvoke_m20535_gshared)(__this, ___result, method)
