#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UIButtonLevelLoad
struct  UIButtonLevelLoad_t2872710724  : public MonoBehaviour_t667441552
{
public:
	// System.String UIButtonLevelLoad::LevelToLoad
	String_t* ___LevelToLoad_2;

public:
	inline static int32_t get_offset_of_LevelToLoad_2() { return static_cast<int32_t>(offsetof(UIButtonLevelLoad_t2872710724, ___LevelToLoad_2)); }
	inline String_t* get_LevelToLoad_2() const { return ___LevelToLoad_2; }
	inline String_t** get_address_of_LevelToLoad_2() { return &___LevelToLoad_2; }
	inline void set_LevelToLoad_2(String_t* value)
	{
		___LevelToLoad_2 = value;
		Il2CppCodeGenWriteBarrier(&___LevelToLoad_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
