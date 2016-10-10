#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// Damage
struct Damage_t2039707535;
// UnityEngine.Collider
struct Collider_t2939674232;
// UnityEngine.Collision
struct Collision_t2494107688;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Collider2939674232.h"
#include "UnityEngine_UnityEngine_Collision2494107688.h"

// System.Void Damage::.ctor()
extern "C"  void Damage__ctor_m2159017452 (Damage_t2039707535 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Damage::OnTriggerEnter(UnityEngine.Collider)
extern "C"  void Damage_OnTriggerEnter_m1008157964 (Damage_t2039707535 * __this, Collider_t2939674232 * ___collision0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Damage::OnCollisionEnter(UnityEngine.Collision)
extern "C"  void Damage_OnCollisionEnter_m4591546 (Damage_t2039707535 * __this, Collision_t2494107688 * ___collision0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Damage::OnCollisionStay(UnityEngine.Collision)
extern "C"  void Damage_OnCollisionStay_m3680778273 (Damage_t2039707535 * __this, Collision_t2494107688 * ___collision0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
