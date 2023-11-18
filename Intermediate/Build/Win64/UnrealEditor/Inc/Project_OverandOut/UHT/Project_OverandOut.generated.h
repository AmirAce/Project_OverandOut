// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Project_OverandOut.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROJECT_OVERANDOUT_Project_OverandOut_generated_h
#error "Project_OverandOut.generated.h already included, missing '#pragma once' in Project_OverandOut.h"
#endif
#define PROJECT_OVERANDOUT_Project_OverandOut_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_aamir_Documents_GitHub_DoD_Game_Project_OverandOut_Source_Project_OverandOut_Project_OverandOut_h


#define FOREACH_ENUM_EABILITYINPUTID(op) \
	op(EAbilityInputID::None) \
	op(EAbilityInputID::Confirm) \
	op(EAbilityInputID::Cancel) \
	op(EAbilityInputID::MainAbility) \
	op(EAbilityInputID::SecondaryAbility) \
	op(EAbilityInputID::MovementAbility) \
	op(EAbilityInputID::UtilityAbility) \
	op(EAbilityInputID::WeaponFire) \
	op(EAbilityInputID::WeaponAlt) 

enum class EAbilityInputID : uint8;
template<> struct TIsUEnumClass<EAbilityInputID> { enum { Value = true }; };
template<> PROJECT_OVERANDOUT_API UEnum* StaticEnum<EAbilityInputID>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
