#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t1659122786;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Chaser
struct  Chaser_t2017202788  : public MonoBehaviour_t667441552
{
public:
	// System.Single Chaser::speed
	float ___speed_2;
	// System.Single Chaser::minDist
	float ___minDist_3;
	// UnityEngine.Transform Chaser::target
	Transform_t1659122786 * ___target_4;

public:
	inline static int32_t get_offset_of_speed_2() { return static_cast<int32_t>(offsetof(Chaser_t2017202788, ___speed_2)); }
	inline float get_speed_2() const { return ___speed_2; }
	inline float* get_address_of_speed_2() { return &___speed_2; }
	inline void set_speed_2(float value)
	{
		___speed_2 = value;
	}

	inline static int32_t get_offset_of_minDist_3() { return static_cast<int32_t>(offsetof(Chaser_t2017202788, ___minDist_3)); }
	inline float get_minDist_3() const { return ___minDist_3; }
	inline float* get_address_of_minDist_3() { return &___minDist_3; }
	inline void set_minDist_3(float value)
	{
		___minDist_3 = value;
	}

	inline static int32_t get_offset_of_target_4() { return static_cast<int32_t>(offsetof(Chaser_t2017202788, ___target_4)); }
	inline Transform_t1659122786 * get_target_4() const { return ___target_4; }
	inline Transform_t1659122786 ** get_address_of_target_4() { return &___target_4; }
	inline void set_target_4(Transform_t1659122786 * value)
	{
		___target_4 = value;
		Il2CppCodeGenWriteBarrier(&___target_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
