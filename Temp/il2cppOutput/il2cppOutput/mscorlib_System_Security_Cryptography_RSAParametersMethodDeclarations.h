#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.RSAParameters
struct RSAParameters_t1104;
struct RSAParameters_t1104_marshaled;

void RSAParameters_t1104_marshal(const RSAParameters_t1104& unmarshaled, RSAParameters_t1104_marshaled& marshaled);
void RSAParameters_t1104_marshal_back(const RSAParameters_t1104_marshaled& marshaled, RSAParameters_t1104& unmarshaled);
void RSAParameters_t1104_marshal_cleanup(RSAParameters_t1104_marshaled& marshaled);
