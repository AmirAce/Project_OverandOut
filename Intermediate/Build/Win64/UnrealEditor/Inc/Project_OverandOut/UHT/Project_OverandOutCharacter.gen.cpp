// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Project_OverandOut/Project_OverandOutCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProject_OverandOutCharacter() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	PROJECT_OVERANDOUT_API UClass* Z_Construct_UClass_AProject_OverandOutCharacter();
	PROJECT_OVERANDOUT_API UClass* Z_Construct_UClass_AProject_OverandOutCharacter_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Project_OverandOut();
// End Cross Module References
	void AProject_OverandOutCharacter::StaticRegisterNativesAProject_OverandOutCharacter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AProject_OverandOutCharacter);
	UClass* Z_Construct_UClass_AProject_OverandOutCharacter_NoRegister()
	{
		return AProject_OverandOutCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AProject_OverandOutCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMappingContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMappingContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JumpAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_JumpAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LookAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LookAction;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AProject_OverandOutCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Project_OverandOut,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProject_OverandOutCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Project_OverandOutCharacter.h" },
		{ "ModuleRelativePath", "Project_OverandOutCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProject_OverandOutCharacter_Statics::NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Camera boom positioning the camera behind the character */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Project_OverandOutCharacter.h" },
		{ "ToolTip", "Camera boom positioning the camera behind the character" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProject_OverandOutCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AProject_OverandOutCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AProject_OverandOutCharacter_Statics::NewProp_CameraBoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProject_OverandOutCharacter_Statics::NewProp_CameraBoom_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProject_OverandOutCharacter_Statics::NewProp_FollowCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Follow camera */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Project_OverandOutCharacter.h" },
		{ "ToolTip", "Follow camera" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProject_OverandOutCharacter_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AProject_OverandOutCharacter, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AProject_OverandOutCharacter_Statics::NewProp_FollowCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProject_OverandOutCharacter_Statics::NewProp_FollowCamera_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProject_OverandOutCharacter_Statics::NewProp_DefaultMappingContext_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "Comment", "/** MappingContext */" },
		{ "ModuleRelativePath", "Project_OverandOutCharacter.h" },
		{ "ToolTip", "MappingContext" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProject_OverandOutCharacter_Statics::NewProp_DefaultMappingContext = { "DefaultMappingContext", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AProject_OverandOutCharacter, DefaultMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AProject_OverandOutCharacter_Statics::NewProp_DefaultMappingContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProject_OverandOutCharacter_Statics::NewProp_DefaultMappingContext_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProject_OverandOutCharacter_Statics::NewProp_JumpAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "Comment", "/** Jump Input Action */" },
		{ "ModuleRelativePath", "Project_OverandOutCharacter.h" },
		{ "ToolTip", "Jump Input Action" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProject_OverandOutCharacter_Statics::NewProp_JumpAction = { "JumpAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AProject_OverandOutCharacter, JumpAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AProject_OverandOutCharacter_Statics::NewProp_JumpAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProject_OverandOutCharacter_Statics::NewProp_JumpAction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProject_OverandOutCharacter_Statics::NewProp_MoveAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "Comment", "/** Move Input Action */" },
		{ "ModuleRelativePath", "Project_OverandOutCharacter.h" },
		{ "ToolTip", "Move Input Action" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProject_OverandOutCharacter_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AProject_OverandOutCharacter, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AProject_OverandOutCharacter_Statics::NewProp_MoveAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProject_OverandOutCharacter_Statics::NewProp_MoveAction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProject_OverandOutCharacter_Statics::NewProp_LookAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "Comment", "/** Look Input Action */" },
		{ "ModuleRelativePath", "Project_OverandOutCharacter.h" },
		{ "ToolTip", "Look Input Action" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProject_OverandOutCharacter_Statics::NewProp_LookAction = { "LookAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AProject_OverandOutCharacter, LookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AProject_OverandOutCharacter_Statics::NewProp_LookAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProject_OverandOutCharacter_Statics::NewProp_LookAction_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AProject_OverandOutCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProject_OverandOutCharacter_Statics::NewProp_CameraBoom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProject_OverandOutCharacter_Statics::NewProp_FollowCamera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProject_OverandOutCharacter_Statics::NewProp_DefaultMappingContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProject_OverandOutCharacter_Statics::NewProp_JumpAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProject_OverandOutCharacter_Statics::NewProp_MoveAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProject_OverandOutCharacter_Statics::NewProp_LookAction,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AProject_OverandOutCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProject_OverandOutCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AProject_OverandOutCharacter_Statics::ClassParams = {
		&AProject_OverandOutCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AProject_OverandOutCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AProject_OverandOutCharacter_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AProject_OverandOutCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AProject_OverandOutCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AProject_OverandOutCharacter()
	{
		if (!Z_Registration_Info_UClass_AProject_OverandOutCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AProject_OverandOutCharacter.OuterSingleton, Z_Construct_UClass_AProject_OverandOutCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AProject_OverandOutCharacter.OuterSingleton;
	}
	template<> PROJECT_OVERANDOUT_API UClass* StaticClass<AProject_OverandOutCharacter>()
	{
		return AProject_OverandOutCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AProject_OverandOutCharacter);
	AProject_OverandOutCharacter::~AProject_OverandOutCharacter() {}
	struct Z_CompiledInDeferFile_FID_Project_OverandOut_Source_Project_OverandOut_Project_OverandOutCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Project_OverandOut_Source_Project_OverandOut_Project_OverandOutCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AProject_OverandOutCharacter, AProject_OverandOutCharacter::StaticClass, TEXT("AProject_OverandOutCharacter"), &Z_Registration_Info_UClass_AProject_OverandOutCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AProject_OverandOutCharacter), 4113606694U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Project_OverandOut_Source_Project_OverandOut_Project_OverandOutCharacter_h_1464582401(TEXT("/Script/Project_OverandOut"),
		Z_CompiledInDeferFile_FID_Project_OverandOut_Source_Project_OverandOut_Project_OverandOutCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Project_OverandOut_Source_Project_OverandOut_Project_OverandOutCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
