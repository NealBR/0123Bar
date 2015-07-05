#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Comparer`1/DefaultComparer<System.Guid>
struct DefaultComparer_t3410;
// System.Guid
#include "mscorlib_System_Guid.h"

// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<System.Guid>::.ctor()
extern "C" void DefaultComparer__ctor_m21328_gshared (DefaultComparer_t3410 * __this, MethodInfo* method);
#define DefaultComparer__ctor_m21328(__this, method) (( void (*) (DefaultComparer_t3410 *, MethodInfo*))DefaultComparer__ctor_m21328_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<System.Guid>::Compare(T,T)
extern "C" int32_t DefaultComparer_Compare_m21329_gshared (DefaultComparer_t3410 * __this, Guid_t723  ___x, Guid_t723  ___y, MethodInfo* method);
#define DefaultComparer_Compare_m21329(__this, ___x, ___y, method) (( int32_t (*) (DefaultComparer_t3410 *, Guid_t723 , Guid_t723 , MethodInfo*))DefaultComparer_Compare_m21329_gshared)(__this, ___x, ___y, method)
