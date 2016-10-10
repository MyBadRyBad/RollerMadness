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

// Damage
struct  Damage_t2039707535  : public MonoBehaviour_t667441552
{
public:
	// System.Single Damage::damageAmount
	float ___damageAmount_2;
	// System.Boolean Damage::damageOnTrigger
	bool ___damageOnTrigger_3;
	// System.Boolean Damage::damageOnCollision
	bool ___damageOnCollision_4;
	// System.Boolean Damage::continuousDamage
	bool ___continuousDamage_5;
	// System.Single Damage::continuousTimeBetweenHits
	float ___continuousTimeBetweenHits_6;
	// System.Boolean Damage::destroySelfOnImpact
	bool ___destroySelfOnImpact_7;
	// System.Single Damage::delayBeforeDestroy
	float ___delayBeforeDestroy_8;
	// UnityEngine.GameObject Damage::explosionPrefab
	GameObject_t3674682005 * ___explosionPrefab_9;
	// System.Single Damage::savedTime
	float ___savedTime_10;

public:
	inline static int32_t get_offset_of_damageAmount_2() { return static_cast<int32_t>(offsetof(Damage_t2039707535, ___damageAmount_2)); }
	inline float get_damageAmount_2() const { return ___damageAmount_2; }
	inline float* get_address_of_damageAmount_2() { return &___damageAmount_2; }
	inline void set_damageAmount_2(float value)
	{
		___damageAmount_2 = value;
	}

	inline static int32_t get_offset_of_damageOnTrigger_3() { return static_cast<int32_t>(offsetof(Damage_t2039707535, ___damageOnTrigger_3)); }
	inline bool get_damageOnTrigger_3() const { return ___damageOnTrigger_3; }
	inline bool* get_address_of_damageOnTrigger_3() { return &___damageOnTrigger_3; }
	inline void set_damageOnTrigger_3(bool value)
	{
		___damageOnTrigger_3 = value;
	}

	inline static int32_t get_offset_of_damageOnCollision_4() { return static_cast<int32_t>(offsetof(Damage_t2039707535, ___damageOnCollision_4)); }
	inline bool get_damageOnCollision_4() const { return ___damageOnCollision_4; }
	inline bool* get_address_of_damageOnCollision_4() { return &___damageOnCollision_4; }
	inline void set_damageOnCollision_4(bool value)
	{
		___damageOnCollision_4 = value;
	}

	inline static int32_t get_offset_of_continuousDamage_5() { return static_cast<int32_t>(offsetof(Damage_t2039707535, ___continuousDamage_5)); }
	inline bool get_continuousDamage_5() const { return ___continuousDamage_5; }
	inline bool* get_address_of_continuousDamage_5() { return &___continuousDamage_5; }
	inline void set_continuousDamage_5(bool value)
	{
		___continuousDamage_5 = value;
	}

	inline static int32_t get_offset_of_continuousTimeBetweenHits_6() { return static_cast<int32_t>(offsetof(Damage_t2039707535, ___continuousTimeBetweenHits_6)); }
	inline float get_continuousTimeBetweenHits_6() const { return ___continuousTimeBetweenHits_6; }
	inline float* get_address_of_continuousTimeBetweenHits_6() { return &___continuousTimeBetweenHits_6; }
	inline void set_continuousTimeBetweenHits_6(float value)
	{
		___continuousTimeBetweenHits_6 = value;
	}

	inline static int32_t get_offset_of_destroySelfOnImpact_7() { return static_cast<int32_t>(offsetof(Damage_t2039707535, ___destroySelfOnImpact_7)); }
	inline bool get_destroySelfOnImpact_7() const { return ___destroySelfOnImpact_7; }
	inline bool* get_address_of_destroySelfOnImpact_7() { return &___destroySelfOnImpact_7; }
	inline void set_destroySelfOnImpact_7(bool value)
	{
		___destroySelfOnImpact_7 = value;
	}

	inline static int32_t get_offset_of_delayBeforeDestroy_8() { return static_cast<int32_t>(offsetof(Damage_t2039707535, ___delayBeforeDestroy_8)); }
	inline float get_delayBeforeDestroy_8() const { return ___delayBeforeDestroy_8; }
	inline float* get_address_of_delayBeforeDestroy_8() { return &___delayBeforeDestroy_8; }
	inline void set_delayBeforeDestroy_8(float value)
	{
		___delayBeforeDestroy_8 = value;
	}

	inline static int32_t get_offset_of_explosionPrefab_9() { return static_cast<int32_t>(offsetof(Damage_t2039707535, ___explosionPrefab_9)); }
	inline GameObject_t3674682005 * get_explosionPrefab_9() const { return ___explosionPrefab_9; }
	inline GameObject_t3674682005 ** get_address_of_explosionPrefab_9() { return &___explosionPrefab_9; }
	inline void set_explosionPrefab_9(GameObject_t3674682005 * value)
	{
		___explosionPrefab_9 = value;
		Il2CppCodeGenWriteBarrier(&___explosionPrefab_9, value);
	}

	inline static int32_t get_offset_of_savedTime_10() { return static_cast<int32_t>(offsetof(Damage_t2039707535, ___savedTime_10)); }
	inline float get_savedTime_10() const { return ___savedTime_10; }
	inline float* get_address_of_savedTime_10() { return &___savedTime_10; }
	inline void set_savedTime_10(float value)
	{
		___savedTime_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
