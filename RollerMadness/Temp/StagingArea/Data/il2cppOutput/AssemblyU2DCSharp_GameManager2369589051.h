#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GameManager
struct GameManager_t2369589051;
// UnityEngine.GameObject
struct GameObject_t3674682005;
// UnityEngine.UI.Text
struct Text_t9039225;
// UnityEngine.AudioSource
struct AudioSource_t1740077639;
// UnityEngine.AudioClip
struct AudioClip_t794140988;
// Health
struct Health_t2157571708;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "AssemblyU2DCSharp_GameManager_gameStates1688487912.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameManager
struct  GameManager_t2369589051  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.GameObject GameManager::player
	GameObject_t3674682005 * ___player_3;
	// GameManager/gameStates GameManager::gameState
	int32_t ___gameState_4;
	// System.Int32 GameManager::score
	int32_t ___score_5;
	// System.Boolean GameManager::canBeatLevel
	bool ___canBeatLevel_6;
	// System.Int32 GameManager::beatLevelScore
	int32_t ___beatLevelScore_7;
	// UnityEngine.GameObject GameManager::mainCanvas
	GameObject_t3674682005 * ___mainCanvas_8;
	// UnityEngine.UI.Text GameManager::mainScoreDisplay
	Text_t9039225 * ___mainScoreDisplay_9;
	// UnityEngine.GameObject GameManager::gameOverCanvas
	GameObject_t3674682005 * ___gameOverCanvas_10;
	// UnityEngine.UI.Text GameManager::gameOverScoreDisplay
	Text_t9039225 * ___gameOverScoreDisplay_11;
	// UnityEngine.GameObject GameManager::beatLevelCanvas
	GameObject_t3674682005 * ___beatLevelCanvas_12;
	// UnityEngine.AudioSource GameManager::backgroundMusic
	AudioSource_t1740077639 * ___backgroundMusic_13;
	// UnityEngine.AudioClip GameManager::gameOverSFX
	AudioClip_t794140988 * ___gameOverSFX_14;
	// UnityEngine.AudioClip GameManager::beatLevelSFX
	AudioClip_t794140988 * ___beatLevelSFX_15;
	// Health GameManager::playerHealth
	Health_t2157571708 * ___playerHealth_16;

public:
	inline static int32_t get_offset_of_player_3() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ___player_3)); }
	inline GameObject_t3674682005 * get_player_3() const { return ___player_3; }
	inline GameObject_t3674682005 ** get_address_of_player_3() { return &___player_3; }
	inline void set_player_3(GameObject_t3674682005 * value)
	{
		___player_3 = value;
		Il2CppCodeGenWriteBarrier(&___player_3, value);
	}

	inline static int32_t get_offset_of_gameState_4() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ___gameState_4)); }
	inline int32_t get_gameState_4() const { return ___gameState_4; }
	inline int32_t* get_address_of_gameState_4() { return &___gameState_4; }
	inline void set_gameState_4(int32_t value)
	{
		___gameState_4 = value;
	}

	inline static int32_t get_offset_of_score_5() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ___score_5)); }
	inline int32_t get_score_5() const { return ___score_5; }
	inline int32_t* get_address_of_score_5() { return &___score_5; }
	inline void set_score_5(int32_t value)
	{
		___score_5 = value;
	}

	inline static int32_t get_offset_of_canBeatLevel_6() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ___canBeatLevel_6)); }
	inline bool get_canBeatLevel_6() const { return ___canBeatLevel_6; }
	inline bool* get_address_of_canBeatLevel_6() { return &___canBeatLevel_6; }
	inline void set_canBeatLevel_6(bool value)
	{
		___canBeatLevel_6 = value;
	}

	inline static int32_t get_offset_of_beatLevelScore_7() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ___beatLevelScore_7)); }
	inline int32_t get_beatLevelScore_7() const { return ___beatLevelScore_7; }
	inline int32_t* get_address_of_beatLevelScore_7() { return &___beatLevelScore_7; }
	inline void set_beatLevelScore_7(int32_t value)
	{
		___beatLevelScore_7 = value;
	}

	inline static int32_t get_offset_of_mainCanvas_8() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ___mainCanvas_8)); }
	inline GameObject_t3674682005 * get_mainCanvas_8() const { return ___mainCanvas_8; }
	inline GameObject_t3674682005 ** get_address_of_mainCanvas_8() { return &___mainCanvas_8; }
	inline void set_mainCanvas_8(GameObject_t3674682005 * value)
	{
		___mainCanvas_8 = value;
		Il2CppCodeGenWriteBarrier(&___mainCanvas_8, value);
	}

	inline static int32_t get_offset_of_mainScoreDisplay_9() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ___mainScoreDisplay_9)); }
	inline Text_t9039225 * get_mainScoreDisplay_9() const { return ___mainScoreDisplay_9; }
	inline Text_t9039225 ** get_address_of_mainScoreDisplay_9() { return &___mainScoreDisplay_9; }
	inline void set_mainScoreDisplay_9(Text_t9039225 * value)
	{
		___mainScoreDisplay_9 = value;
		Il2CppCodeGenWriteBarrier(&___mainScoreDisplay_9, value);
	}

	inline static int32_t get_offset_of_gameOverCanvas_10() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ___gameOverCanvas_10)); }
	inline GameObject_t3674682005 * get_gameOverCanvas_10() const { return ___gameOverCanvas_10; }
	inline GameObject_t3674682005 ** get_address_of_gameOverCanvas_10() { return &___gameOverCanvas_10; }
	inline void set_gameOverCanvas_10(GameObject_t3674682005 * value)
	{
		___gameOverCanvas_10 = value;
		Il2CppCodeGenWriteBarrier(&___gameOverCanvas_10, value);
	}

	inline static int32_t get_offset_of_gameOverScoreDisplay_11() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ___gameOverScoreDisplay_11)); }
	inline Text_t9039225 * get_gameOverScoreDisplay_11() const { return ___gameOverScoreDisplay_11; }
	inline Text_t9039225 ** get_address_of_gameOverScoreDisplay_11() { return &___gameOverScoreDisplay_11; }
	inline void set_gameOverScoreDisplay_11(Text_t9039225 * value)
	{
		___gameOverScoreDisplay_11 = value;
		Il2CppCodeGenWriteBarrier(&___gameOverScoreDisplay_11, value);
	}

	inline static int32_t get_offset_of_beatLevelCanvas_12() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ___beatLevelCanvas_12)); }
	inline GameObject_t3674682005 * get_beatLevelCanvas_12() const { return ___beatLevelCanvas_12; }
	inline GameObject_t3674682005 ** get_address_of_beatLevelCanvas_12() { return &___beatLevelCanvas_12; }
	inline void set_beatLevelCanvas_12(GameObject_t3674682005 * value)
	{
		___beatLevelCanvas_12 = value;
		Il2CppCodeGenWriteBarrier(&___beatLevelCanvas_12, value);
	}

	inline static int32_t get_offset_of_backgroundMusic_13() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ___backgroundMusic_13)); }
	inline AudioSource_t1740077639 * get_backgroundMusic_13() const { return ___backgroundMusic_13; }
	inline AudioSource_t1740077639 ** get_address_of_backgroundMusic_13() { return &___backgroundMusic_13; }
	inline void set_backgroundMusic_13(AudioSource_t1740077639 * value)
	{
		___backgroundMusic_13 = value;
		Il2CppCodeGenWriteBarrier(&___backgroundMusic_13, value);
	}

	inline static int32_t get_offset_of_gameOverSFX_14() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ___gameOverSFX_14)); }
	inline AudioClip_t794140988 * get_gameOverSFX_14() const { return ___gameOverSFX_14; }
	inline AudioClip_t794140988 ** get_address_of_gameOverSFX_14() { return &___gameOverSFX_14; }
	inline void set_gameOverSFX_14(AudioClip_t794140988 * value)
	{
		___gameOverSFX_14 = value;
		Il2CppCodeGenWriteBarrier(&___gameOverSFX_14, value);
	}

	inline static int32_t get_offset_of_beatLevelSFX_15() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ___beatLevelSFX_15)); }
	inline AudioClip_t794140988 * get_beatLevelSFX_15() const { return ___beatLevelSFX_15; }
	inline AudioClip_t794140988 ** get_address_of_beatLevelSFX_15() { return &___beatLevelSFX_15; }
	inline void set_beatLevelSFX_15(AudioClip_t794140988 * value)
	{
		___beatLevelSFX_15 = value;
		Il2CppCodeGenWriteBarrier(&___beatLevelSFX_15, value);
	}

	inline static int32_t get_offset_of_playerHealth_16() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ___playerHealth_16)); }
	inline Health_t2157571708 * get_playerHealth_16() const { return ___playerHealth_16; }
	inline Health_t2157571708 ** get_address_of_playerHealth_16() { return &___playerHealth_16; }
	inline void set_playerHealth_16(Health_t2157571708 * value)
	{
		___playerHealth_16 = value;
		Il2CppCodeGenWriteBarrier(&___playerHealth_16, value);
	}
};

struct GameManager_t2369589051_StaticFields
{
public:
	// GameManager GameManager::gm
	GameManager_t2369589051 * ___gm_2;

public:
	inline static int32_t get_offset_of_gm_2() { return static_cast<int32_t>(offsetof(GameManager_t2369589051_StaticFields, ___gm_2)); }
	inline GameManager_t2369589051 * get_gm_2() const { return ___gm_2; }
	inline GameManager_t2369589051 ** get_address_of_gm_2() { return &___gm_2; }
	inline void set_gm_2(GameManager_t2369589051 * value)
	{
		___gm_2 = value;
		Il2CppCodeGenWriteBarrier(&___gm_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
