#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t3674682005;
// UnityEngine.Transform
struct Transform_t1659122786;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SpawnGameObjects
struct  SpawnGameObjects_t756525671  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.GameObject SpawnGameObjects::spawnPrefab
	GameObject_t3674682005 * ___spawnPrefab_2;
	// System.Single SpawnGameObjects::minSecondsBetweenSpawning
	float ___minSecondsBetweenSpawning_3;
	// System.Single SpawnGameObjects::maxSecondsBetweenSpawning
	float ___maxSecondsBetweenSpawning_4;
	// UnityEngine.Transform SpawnGameObjects::chaseTarget
	Transform_t1659122786 * ___chaseTarget_5;
	// System.Single SpawnGameObjects::savedTime
	float ___savedTime_6;
	// System.Single SpawnGameObjects::secondsBetweenSpawning
	float ___secondsBetweenSpawning_7;

public:
	inline static int32_t get_offset_of_spawnPrefab_2() { return static_cast<int32_t>(offsetof(SpawnGameObjects_t756525671, ___spawnPrefab_2)); }
	inline GameObject_t3674682005 * get_spawnPrefab_2() const { return ___spawnPrefab_2; }
	inline GameObject_t3674682005 ** get_address_of_spawnPrefab_2() { return &___spawnPrefab_2; }
	inline void set_spawnPrefab_2(GameObject_t3674682005 * value)
	{
		___spawnPrefab_2 = value;
		Il2CppCodeGenWriteBarrier(&___spawnPrefab_2, value);
	}

	inline static int32_t get_offset_of_minSecondsBetweenSpawning_3() { return static_cast<int32_t>(offsetof(SpawnGameObjects_t756525671, ___minSecondsBetweenSpawning_3)); }
	inline float get_minSecondsBetweenSpawning_3() const { return ___minSecondsBetweenSpawning_3; }
	inline float* get_address_of_minSecondsBetweenSpawning_3() { return &___minSecondsBetweenSpawning_3; }
	inline void set_minSecondsBetweenSpawning_3(float value)
	{
		___minSecondsBetweenSpawning_3 = value;
	}

	inline static int32_t get_offset_of_maxSecondsBetweenSpawning_4() { return static_cast<int32_t>(offsetof(SpawnGameObjects_t756525671, ___maxSecondsBetweenSpawning_4)); }
	inline float get_maxSecondsBetweenSpawning_4() const { return ___maxSecondsBetweenSpawning_4; }
	inline float* get_address_of_maxSecondsBetweenSpawning_4() { return &___maxSecondsBetweenSpawning_4; }
	inline void set_maxSecondsBetweenSpawning_4(float value)
	{
		___maxSecondsBetweenSpawning_4 = value;
	}

	inline static int32_t get_offset_of_chaseTarget_5() { return static_cast<int32_t>(offsetof(SpawnGameObjects_t756525671, ___chaseTarget_5)); }
	inline Transform_t1659122786 * get_chaseTarget_5() const { return ___chaseTarget_5; }
	inline Transform_t1659122786 ** get_address_of_chaseTarget_5() { return &___chaseTarget_5; }
	inline void set_chaseTarget_5(Transform_t1659122786 * value)
	{
		___chaseTarget_5 = value;
		Il2CppCodeGenWriteBarrier(&___chaseTarget_5, value);
	}

	inline static int32_t get_offset_of_savedTime_6() { return static_cast<int32_t>(offsetof(SpawnGameObjects_t756525671, ___savedTime_6)); }
	inline float get_savedTime_6() const { return ___savedTime_6; }
	inline float* get_address_of_savedTime_6() { return &___savedTime_6; }
	inline void set_savedTime_6(float value)
	{
		___savedTime_6 = value;
	}

	inline static int32_t get_offset_of_secondsBetweenSpawning_7() { return static_cast<int32_t>(offsetof(SpawnGameObjects_t756525671, ___secondsBetweenSpawning_7)); }
	inline float get_secondsBetweenSpawning_7() const { return ___secondsBetweenSpawning_7; }
	inline float* get_address_of_secondsBetweenSpawning_7() { return &___secondsBetweenSpawning_7; }
	inline void set_secondsBetweenSpawning_7(float value)
	{
		___secondsBetweenSpawning_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
