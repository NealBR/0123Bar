#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.FileWebRequestCreator
struct FileWebRequestCreator_t941;
// System.Net.WebRequest
struct WebRequest_t937;
// System.Uri
struct Uri_t586;

// System.Void System.Net.FileWebRequestCreator::.ctor()
extern "C" void FileWebRequestCreator__ctor_m3929 (FileWebRequestCreator_t941 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebRequest System.Net.FileWebRequestCreator::Create(System.Uri)
extern "C" WebRequest_t937 * FileWebRequestCreator_Create_m3930 (FileWebRequestCreator_t941 * __this, Uri_t586 * ___uri, MethodInfo* method) IL2CPP_METHOD_ATTR;
