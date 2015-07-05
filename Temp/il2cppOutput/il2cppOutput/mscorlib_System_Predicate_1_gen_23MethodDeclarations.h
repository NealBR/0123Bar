#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<System.Byte[]>
struct Predicate_1_t2926;
// System.Object
struct Object_t;
// System.Byte[]
struct ByteU5BU5D_t504;
// System.IAsyncResult
struct IAsyncResult_t170;
// System.AsyncCallback
struct AsyncCallback_t171;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Predicate`1<System.Byte[]>::.ctor(System.Object,System.IntPtr)
// System.Predicate`1<System.Object>
#include "mscorlib_System_Predicate_1_gen_3MethodDeclarations.h"
#define Predicate_1__ctor_m17083(__this, ___object, ___method, method) (( void (*) (Predicate_1_t2926 *, Object_t *, IntPtr_t, MethodInfo*))Predicate_1__ctor_m11446_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<System.Byte[]>::Invoke(T)
#define Predicate_1_Invoke_m17084(__this, ___obj, method) (( bool (*) (Predicate_1_t2926 *, ByteU5BU5D_t504*, MethodInfo*))Predicate_1_Invoke_m11447_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<System.Byte[]>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Predicate_1_BeginInvoke_m17085(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t2926 *, ByteU5BU5D_t504*, AsyncCallback_t171 *, Object_t *, MethodInfo*))Predicate_1_BeginInvoke_m11448_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<System.Byte[]>::EndInvoke(System.IAsyncResult)
#define Predicate_1_EndInvoke_m17086(__this, ___result, method) (( bool (*) (Predicate_1_t2926 *, Object_t *, MethodInfo*))Predicate_1_EndInvoke_m11449_gshared)(__this, ___result, method)
