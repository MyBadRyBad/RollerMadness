#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t2662109048;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EnemyMove
struct  EnemyMove_t953588569  : public MonoBehaviour_t667441552
{
public:
	// System.Single EnemyMove::moveSpeed
	float ___moveSpeed_2;
	// UnityEngine.GameObject[] EnemyMove::myWaypoints
	GameObjectU5BU5D_t2662109048* ___myWaypoints_3;
	// System.Int32 EnemyMove::myWaypointId
	int32_t ___myWaypointId_4;

public:
	inline static int32_t get_offset_of_moveSpeed_2() { return static_cast<int32_t>(offsetof(EnemyMove_t953588569, ___moveSpeed_2)); }
	inline float get_moveSpeed_2() const { return ___moveSpeed_2; }
	inline float* get_address_of_moveSpeed_2() { return &___moveSpeed_2; }
	inline void set_moveSpeed_2(float value)
	{
		___moveSpeed_2 = value;
	}

	inline static int32_t get_offset_of_myWaypoints_3() { return static_cast<int32_t>(offsetof(EnemyMove_t953588569, ___myWaypoints_3)); }
	inline GameObjectU5BU5D_t2662109048* get_myWaypoints_3() const { return ___myWaypoints_3; }
	inline GameObjectU5BU5D_t2662109048** get_address_of_myWaypoints_3() { return &___myWaypoints_3; }
	inline void set_myWaypoints_3(GameObjectU5BU5D_t2662109048* value)
	{
		___myWaypoints_3 = value;
		Il2CppCodeGenWriteBarrier(&___myWaypoints_3, value);
	}

	inline static int32_t get_offset_of_myWaypointId_4() { return static_cast<int32_t>(offsetof(EnemyMove_t953588569, ___myWaypointId_4)); }
	inline int32_t get_myWaypointId_4() const { return ___myWaypointId_4; }
	inline int32_t* get_address_of_myWaypointId_4() { return &___myWaypointId_4; }
	inline void set_myWaypointId_4(int32_t value)
	{
		___myWaypointId_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
