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

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Treasure
struct  Treasure_t1448052431  : public MonoBehaviour_t667441552
{
public:
	// System.Int32 Treasure::value
	int32_t ___value_2;
	// UnityEngine.GameObject Treasure::explosionPrefab
	GameObject_t3674682005 * ___explosionPrefab_3;

public:
	inline static int32_t get_offset_of_value_2() { return static_cast<int32_t>(offsetof(Treasure_t1448052431, ___value_2)); }
	inline int32_t get_value_2() const { return ___value_2; }
	inline int32_t* get_address_of_value_2() { return &___value_2; }
	inline void set_value_2(int32_t value)
	{
		___value_2 = value;
	}

	inline static int32_t get_offset_of_explosionPrefab_3() { return static_cast<int32_t>(offsetof(Treasure_t1448052431, ___explosionPrefab_3)); }
	inline GameObject_t3674682005 * get_explosionPrefab_3() const { return ___explosionPrefab_3; }
	inline GameObject_t3674682005 ** get_address_of_explosionPrefab_3() { return &___explosionPrefab_3; }
	inline void set_explosionPrefab_3(GameObject_t3674682005 * value)
	{
		___explosionPrefab_3 = value;
		Il2CppCodeGenWriteBarrier(&___explosionPrefab_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
