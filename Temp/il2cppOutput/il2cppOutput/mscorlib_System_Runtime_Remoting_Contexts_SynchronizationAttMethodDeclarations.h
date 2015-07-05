﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Remoting.Contexts.SynchronizationAttribute
struct SynchronizationAttribute_t1576;
// System.Runtime.Remoting.Activation.IConstructionCallMessage
struct IConstructionCallMessage_t1564;
// System.Runtime.Remoting.Contexts.Context
struct Context_t1565;

// System.Void System.Runtime.Remoting.Contexts.SynchronizationAttribute::.ctor()
extern "C" void SynchronizationAttribute__ctor_m8591 (SynchronizationAttribute_t1576 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Contexts.SynchronizationAttribute::.ctor(System.Int32,System.Boolean)
extern "C" void SynchronizationAttribute__ctor_m8592 (SynchronizationAttribute_t1576 * __this, int32_t ___flag, bool ___reEntrant, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Contexts.SynchronizationAttribute::set_Locked(System.Boolean)
extern "C" void SynchronizationAttribute_set_Locked_m8593 (SynchronizationAttribute_t1576 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Contexts.SynchronizationAttribute::ReleaseLock()
extern "C" void SynchronizationAttribute_ReleaseLock_m8594 (SynchronizationAttribute_t1576 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Contexts.SynchronizationAttribute::GetPropertiesForNewContext(System.Runtime.Remoting.Activation.IConstructionCallMessage)
extern "C" void SynchronizationAttribute_GetPropertiesForNewContext_m8595 (SynchronizationAttribute_t1576 * __this, Object_t * ___ctorMsg, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Remoting.Contexts.SynchronizationAttribute::IsContextOK(System.Runtime.Remoting.Contexts.Context,System.Runtime.Remoting.Activation.IConstructionCallMessage)
extern "C" bool SynchronizationAttribute_IsContextOK_m8596 (SynchronizationAttribute_t1576 * __this, Context_t1565 * ___ctx, Object_t * ___msg, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Contexts.SynchronizationAttribute::ExitContext()
extern "C" void SynchronizationAttribute_ExitContext_m8597 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Contexts.SynchronizationAttribute::EnterContext()
extern "C" void SynchronizationAttribute_EnterContext_m8598 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
