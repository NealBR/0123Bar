#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken,UnityEngine.Networking.Types.NetworkID>
struct Transform_1_t3060;
// System.Object
struct Object_t;
// UnityEngine.Networking.Types.NetworkAccessToken
struct NetworkAccessToken_t582;
// System.IAsyncResult
struct IAsyncResult_t170;
// System.AsyncCallback
struct AsyncCallback_t171;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.Networking.Types.NetworkID
#include "UnityEngine_UnityEngine_Networking_Types_NetworkID.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken,UnityEngine.Networking.Types.NetworkID>::.ctor(System.Object,System.IntPtr)
// System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,System.Object,System.UInt64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_63MethodDeclarations.h"
#define Transform_1__ctor_m18441(__this, ___object, ___method, method) (( void (*) (Transform_1_t3060 *, Object_t *, IntPtr_t, MethodInfo*))Transform_1__ctor_m18337_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken,UnityEngine.Networking.Types.NetworkID>::Invoke(TKey,TValue)
#define Transform_1_Invoke_m18442(__this, ___key, ___value, method) (( uint64_t (*) (Transform_1_t3060 *, uint64_t, NetworkAccessToken_t582 *, MethodInfo*))Transform_1_Invoke_m18338_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken,UnityEngine.Networking.Types.NetworkID>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
#define Transform_1_BeginInvoke_m18443(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t3060 *, uint64_t, NetworkAccessToken_t582 *, AsyncCallback_t171 *, Object_t *, MethodInfo*))Transform_1_BeginInvoke_m18339_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken,UnityEngine.Networking.Types.NetworkID>::EndInvoke(System.IAsyncResult)
#define Transform_1_EndInvoke_m18444(__this, ___result, method) (( uint64_t (*) (Transform_1_t3060 *, Object_t *, MethodInfo*))Transform_1_EndInvoke_m18340_gshared)(__this, ___result, method)
