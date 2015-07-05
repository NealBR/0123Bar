#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.HttpRequestCreator
struct HttpRequestCreator_t947;
// System.Net.WebRequest
struct WebRequest_t937;
// System.Uri
struct Uri_t586;

// System.Void System.Net.HttpRequestCreator::.ctor()
extern "C" void HttpRequestCreator__ctor_m3937 (HttpRequestCreator_t947 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebRequest System.Net.HttpRequestCreator::Create(System.Uri)
extern "C" WebRequest_t937 * HttpRequestCreator_Create_m3938 (HttpRequestCreator_t947 * __this, Uri_t586 * ___uri, MethodInfo* method) IL2CPP_METHOD_ATTR;
