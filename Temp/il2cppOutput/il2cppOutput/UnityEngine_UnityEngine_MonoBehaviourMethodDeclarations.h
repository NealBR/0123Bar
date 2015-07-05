#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t3;
// UnityEngine.Coroutine
struct Coroutine_t182;
struct Coroutine_t182_marshaled;
// System.Collections.IEnumerator
struct IEnumerator_t117;
// System.Object
struct Object_t;

// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C" void MonoBehaviour__ctor_m27 (MonoBehaviour_t3 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
extern "C" Coroutine_t182 * MonoBehaviour_StartCoroutine_m1455 (MonoBehaviour_t3 * __this, Object_t * ___routine, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine_Auto(System.Collections.IEnumerator)
extern "C" Coroutine_t182 * MonoBehaviour_StartCoroutine_Auto_m2693 (MonoBehaviour_t3 * __this, Object_t * ___routine, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MonoBehaviour::StopCoroutine(System.Collections.IEnumerator)
extern "C" void MonoBehaviour_StopCoroutine_m2694 (MonoBehaviour_t3 * __this, Object_t * ___routine, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MonoBehaviour::StopCoroutine(UnityEngine.Coroutine)
extern "C" void MonoBehaviour_StopCoroutine_m1751 (MonoBehaviour_t3 * __this, Coroutine_t182 * ___routine, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MonoBehaviour::StopCoroutineViaEnumerator_Auto(System.Collections.IEnumerator)
extern "C" void MonoBehaviour_StopCoroutineViaEnumerator_Auto_m2695 (MonoBehaviour_t3 * __this, Object_t * ___routine, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MonoBehaviour::StopCoroutine_Auto(UnityEngine.Coroutine)
extern "C" void MonoBehaviour_StopCoroutine_Auto_m2696 (MonoBehaviour_t3 * __this, Coroutine_t182 * ___routine, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MonoBehaviour::print(System.Object)
extern "C" void MonoBehaviour_print_m49 (Object_t * __this /* static, unused */, Object_t * ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
