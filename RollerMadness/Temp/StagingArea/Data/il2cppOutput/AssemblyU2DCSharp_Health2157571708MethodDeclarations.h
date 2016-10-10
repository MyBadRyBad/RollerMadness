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

// Health
struct Health_t2157571708;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "UnityEngine_UnityEngine_Quaternion1553702882.h"

// System.Void Health::.ctor()
extern "C"  void Health__ctor_m42729887 (Health_t2157571708 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Health::Start()
extern "C"  void Health_Start_m3284834975 (Health_t2157571708 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Health::Update()
extern "C"  void Health_Update_m3051488590 (Health_t2157571708 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Health::ApplyDamage(System.Single)
extern "C"  void Health_ApplyDamage_m3086645489 (Health_t2157571708 * __this, float ___amount0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Health::ApplyHeal(System.Single)
extern "C"  void Health_ApplyHeal_m2570312408 (Health_t2157571708 * __this, float ___amount0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Health::ApplyBonusLife(System.Int32)
extern "C"  void Health_ApplyBonusLife_m3441712579 (Health_t2157571708 * __this, int32_t ___amount0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Health::updateRespawn(UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C"  void Health_updateRespawn_m176239636 (Health_t2157571708 * __this, Vector3_t4282066566  ___newRespawnPosition0, Quaternion_t1553702882  ___newRespawnRotation1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
