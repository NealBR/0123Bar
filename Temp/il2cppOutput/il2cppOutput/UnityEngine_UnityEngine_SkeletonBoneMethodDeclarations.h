#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SkeletonBone
struct SkeletonBone_t550;
struct SkeletonBone_t550_marshaled;

void SkeletonBone_t550_marshal(const SkeletonBone_t550& unmarshaled, SkeletonBone_t550_marshaled& marshaled);
void SkeletonBone_t550_marshal_back(const SkeletonBone_t550_marshaled& marshaled, SkeletonBone_t550& unmarshaled);
void SkeletonBone_t550_marshal_cleanup(SkeletonBone_t550_marshaled& marshaled);
