// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Project_OverandOut/Project_OverandOutGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProject_OverandOutGameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	PROJECT_OVERANDOUT_API UClass* Z_Construct_UClass_AProject_OverandOutGameMode();
	PROJECT_OVERANDOUT_API UClass* Z_Construct_UClass_AProject_OverandOutGameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Project_OverandOut();
// End Cross Module References
	void AProject_OverandOutGameMode::StaticRegisterNativesAProject_OverandOutGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AProject_OverandOutGameMode);
	UClass* Z_Construct_UClass_AProject_OverandOutGameMode_NoRegister()
	{
		return AProject_OverandOutGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AProject_OverandOutGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AProject_OverandOutGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Project_OverandOut,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProject_OverandOutGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Project_OverandOutGameMode.h" },
		{ "ModuleRelativePath", "Project_OverandOutGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AProject_OverandOutGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProject_OverandOutGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AProject_OverandOutGameMode_Statics::ClassParams = {
		&AProject_OverandOutGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AProject_OverandOutGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AProject_OverandOutGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AProject_OverandOutGameMode()
	{
		if (!Z_Registration_Info_UClass_AProject_OverandOutGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AProject_OverandOutGameMode.OuterSingleton, Z_Construct_UClass_AProject_OverandOutGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AProject_OverandOutGameMode.OuterSingleton;
	}
	template<> PROJECT_OVERANDOUT_API UClass* StaticClass<AProject_OverandOutGameMode>()
	{
		return AProject_OverandOutGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AProject_OverandOutGameMode);
	AProject_OverandOutGameMode::~AProject_OverandOutGameMode() {}
	struct Z_CompiledInDeferFile_FID_OverandOut_Source_Project_OverandOut_Project_OverandOutGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_OverandOut_Source_Project_OverandOut_Project_OverandOutGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AProject_OverandOutGameMode, AProject_OverandOutGameMode::StaticClass, TEXT("AProject_OverandOutGameMode"), &Z_Registration_Info_UClass_AProject_OverandOutGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AProject_OverandOutGameMode), 628489745U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_OverandOut_Source_Project_OverandOut_Project_OverandOutGameMode_h_3327306990(TEXT("/Script/Project_OverandOut"),
		Z_CompiledInDeferFile_FID_OverandOut_Source_Project_OverandOut_Project_OverandOutGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_OverandOut_Source_Project_OverandOut_Project_OverandOutGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
