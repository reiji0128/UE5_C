// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Study_C/Public/Controller/PlayerCharacterController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerCharacterController() {}
// Cross Module References
	STUDY_C_API UClass* Z_Construct_UClass_APlayerCharacterController_NoRegister();
	STUDY_C_API UClass* Z_Construct_UClass_APlayerCharacterController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_Study_C();
// End Cross Module References
	void APlayerCharacterController::StaticRegisterNativesAPlayerCharacterController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APlayerCharacterController);
	UClass* Z_Construct_UClass_APlayerCharacterController_NoRegister()
	{
		return APlayerCharacterController::StaticClass();
	}
	struct Z_Construct_UClass_APlayerCharacterController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlayerCharacterController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_Study_C,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCharacterController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Controller/PlayerCharacterController.h" },
		{ "ModuleRelativePath", "Public/Controller/PlayerCharacterController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlayerCharacterController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayerCharacterController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APlayerCharacterController_Statics::ClassParams = {
		&APlayerCharacterController::StaticClass,
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
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_APlayerCharacterController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacterController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APlayerCharacterController()
	{
		if (!Z_Registration_Info_UClass_APlayerCharacterController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APlayerCharacterController.OuterSingleton, Z_Construct_UClass_APlayerCharacterController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APlayerCharacterController.OuterSingleton;
	}
	template<> STUDY_C_API UClass* StaticClass<APlayerCharacterController>()
	{
		return APlayerCharacterController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlayerCharacterController);
	struct Z_CompiledInDeferFile_FID_Study_C_Source_Study_C_Public_Controller_PlayerCharacterController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Study_C_Source_Study_C_Public_Controller_PlayerCharacterController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APlayerCharacterController, APlayerCharacterController::StaticClass, TEXT("APlayerCharacterController"), &Z_Registration_Info_UClass_APlayerCharacterController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APlayerCharacterController), 939023441U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Study_C_Source_Study_C_Public_Controller_PlayerCharacterController_h_142650702(TEXT("/Script/Study_C"),
		Z_CompiledInDeferFile_FID_Study_C_Source_Study_C_Public_Controller_PlayerCharacterController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Study_C_Source_Study_C_Public_Controller_PlayerCharacterController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
