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
// System.String
struct String_t;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "AssemblyU2DCSharp_Health_deathAction3768305335.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "UnityEngine_UnityEngine_Quaternion1553702882.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Health
struct  Health_t2157571708  : public MonoBehaviour_t667441552
{
public:
	// System.Single Health::healthPoints
	float ___healthPoints_2;
	// System.Single Health::respawnHealthPoints
	float ___respawnHealthPoints_3;
	// System.Int32 Health::numberOfLives
	int32_t ___numberOfLives_4;
	// System.Boolean Health::isAlive
	bool ___isAlive_5;
	// UnityEngine.GameObject Health::explosionPrefab
	GameObject_t3674682005 * ___explosionPrefab_6;
	// Health/deathAction Health::onLivesGone
	int32_t ___onLivesGone_7;
	// System.String Health::LevelToLoad
	String_t* ___LevelToLoad_8;
	// UnityEngine.Vector3 Health::respawnPosition
	Vector3_t4282066566  ___respawnPosition_9;
	// UnityEngine.Quaternion Health::respawnRotation
	Quaternion_t1553702882  ___respawnRotation_10;

public:
	inline static int32_t get_offset_of_healthPoints_2() { return static_cast<int32_t>(offsetof(Health_t2157571708, ___healthPoints_2)); }
	inline float get_healthPoints_2() const { return ___healthPoints_2; }
	inline float* get_address_of_healthPoints_2() { return &___healthPoints_2; }
	inline void set_healthPoints_2(float value)
	{
		___healthPoints_2 = value;
	}

	inline static int32_t get_offset_of_respawnHealthPoints_3() { return static_cast<int32_t>(offsetof(Health_t2157571708, ___respawnHealthPoints_3)); }
	inline float get_respawnHealthPoints_3() const { return ___respawnHealthPoints_3; }
	inline float* get_address_of_respawnHealthPoints_3() { return &___respawnHealthPoints_3; }
	inline void set_respawnHealthPoints_3(float value)
	{
		___respawnHealthPoints_3 = value;
	}

	inline static int32_t get_offset_of_numberOfLives_4() { return static_cast<int32_t>(offsetof(Health_t2157571708, ___numberOfLives_4)); }
	inline int32_t get_numberOfLives_4() const { return ___numberOfLives_4; }
	inline int32_t* get_address_of_numberOfLives_4() { return &___numberOfLives_4; }
	inline void set_numberOfLives_4(int32_t value)
	{
		___numberOfLives_4 = value;
	}

	inline static int32_t get_offset_of_isAlive_5() { return static_cast<int32_t>(offsetof(Health_t2157571708, ___isAlive_5)); }
	inline bool get_isAlive_5() const { return ___isAlive_5; }
	inline bool* get_address_of_isAlive_5() { return &___isAlive_5; }
	inline void set_isAlive_5(bool value)
	{
		___isAlive_5 = value;
	}

	inline static int32_t get_offset_of_explosionPrefab_6() { return static_cast<int32_t>(offsetof(Health_t2157571708, ___explosionPrefab_6)); }
	inline GameObject_t3674682005 * get_explosionPrefab_6() const { return ___explosionPrefab_6; }
	inline GameObject_t3674682005 ** get_address_of_explosionPrefab_6() { return &___explosionPrefab_6; }
	inline void set_explosionPrefab_6(GameObject_t3674682005 * value)
	{
		___explosionPrefab_6 = value;
		Il2CppCodeGenWriteBarrier(&___explosionPrefab_6, value);
	}

	inline static int32_t get_offset_of_onLivesGone_7() { return static_cast<int32_t>(offsetof(Health_t2157571708, ___onLivesGone_7)); }
	inline int32_t get_onLivesGone_7() const { return ___onLivesGone_7; }
	inline int32_t* get_address_of_onLivesGone_7() { return &___onLivesGone_7; }
	inline void set_onLivesGone_7(int32_t value)
	{
		___onLivesGone_7 = value;
	}

	inline static int32_t get_offset_of_LevelToLoad_8() { return static_cast<int32_t>(offsetof(Health_t2157571708, ___LevelToLoad_8)); }
	inline String_t* get_LevelToLoad_8() const { return ___LevelToLoad_8; }
	inline String_t** get_address_of_LevelToLoad_8() { return &___LevelToLoad_8; }
	inline void set_LevelToLoad_8(String_t* value)
	{
		___LevelToLoad_8 = value;
		Il2CppCodeGenWriteBarrier(&___LevelToLoad_8, value);
	}

	inline static int32_t get_offset_of_respawnPosition_9() { return static_cast<int32_t>(offsetof(Health_t2157571708, ___respawnPosition_9)); }
	inline Vector3_t4282066566  get_respawnPosition_9() const { return ___respawnPosition_9; }
	inline Vector3_t4282066566 * get_address_of_respawnPosition_9() { return &___respawnPosition_9; }
	inline void set_respawnPosition_9(Vector3_t4282066566  value)
	{
		___respawnPosition_9 = value;
	}

	inline static int32_t get_offset_of_respawnRotation_10() { return static_cast<int32_t>(offsetof(Health_t2157571708, ___respawnRotation_10)); }
	inline Quaternion_t1553702882  get_respawnRotation_10() const { return ___respawnRotation_10; }
	inline Quaternion_t1553702882 * get_address_of_respawnRotation_10() { return &___respawnRotation_10; }
	inline void set_respawnRotation_10(Quaternion_t1553702882  value)
	{
		___respawnRotation_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
