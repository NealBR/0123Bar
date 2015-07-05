#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.CreateMatchResponse>
struct ResponseDelegate_1_t588;
// System.Object
struct Object_t;
// UnityEngine.Networking.Match.CreateMatchResponse
struct CreateMatchResponse_t567;
// System.IAsyncResult
struct IAsyncResult_t170;
// System.AsyncCallback
struct AsyncCallback_t171;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.CreateMatchResponse>::.ctor(System.Object,System.IntPtr)
// UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<System.Object>
#include "UnityEngine_UnityEngine_Networking_Match_NetworkMatch_Respon_3MethodDeclarations.h"
#define ResponseDelegate_1__ctor_m18502(__this, ___object, ___method, method) (( void (*) (ResponseDelegate_1_t588 *, Object_t *, IntPtr_t, MethodInfo*))ResponseDelegate_1__ctor_m18503_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.CreateMatchResponse>::Invoke(T)
#define ResponseDelegate_1_Invoke_m18504(__this, ___response, method) (( void (*) (ResponseDelegate_1_t588 *, CreateMatchResponse_t567 *, MethodInfo*))ResponseDelegate_1_Invoke_m18505_gshared)(__this, ___response, method)
// System.IAsyncResult UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.CreateMatchResponse>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define ResponseDelegate_1_BeginInvoke_m18506(__this, ___response, ___callback, ___object, method) (( Object_t * (*) (ResponseDelegate_1_t588 *, CreateMatchResponse_t567 *, AsyncCallback_t171 *, Object_t *, MethodInfo*))ResponseDelegate_1_BeginInvoke_m18507_gshared)(__this, ___response, ___callback, ___object, method)
// System.Void UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.CreateMatchResponse>::EndInvoke(System.IAsyncResult)
#define ResponseDelegate_1_EndInvoke_m18508(__this, ___result, method) (( void (*) (ResponseDelegate_1_t588 *, Object_t *, MethodInfo*))ResponseDelegate_1_EndInvoke_m18509_gshared)(__this, ___result, method)
