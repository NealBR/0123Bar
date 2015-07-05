#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.DSAParameters
struct DSAParameters_t1106;
struct DSAParameters_t1106_marshaled;

void DSAParameters_t1106_marshal(const DSAParameters_t1106& unmarshaled, DSAParameters_t1106_marshaled& marshaled);
void DSAParameters_t1106_marshal_back(const DSAParameters_t1106_marshaled& marshaled, DSAParameters_t1106& unmarshaled);
void DSAParameters_t1106_marshal_cleanup(DSAParameters_t1106_marshaled& marshaled);
