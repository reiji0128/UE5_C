// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Study_C/Public/GameMode/PlayGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayGameMode() {}
// Cross Module References
	STUDY_C_API UClass* Z_Construct_UClass_APlayGameMode_NoRegister();
	STUDY_C_API UClass* Z_Construct_UClass_APlayGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Study_C();
// End Cross Module References
	void APlayGameMode::StaticRegisterNativesAPlayGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APlayGameMode);
	UClass* Z_Construct_UClass_APlayGameMode_NoRegister()
	{
		return APlayGameMode::StaticClass();
	}
	struct Z_Construct_UClass_APlayGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlayGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Study_C,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayGameMode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "GameMode/PlayGameMode.h" },
		{ "ModuleRelativePath", "Public/GameMode/PlayGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlayGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APlayGameMode_Statics::ClassParams = {
		&APlayGameMode::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_APlayGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APlayGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APlayGameMode()
	{
		if (!Z_Registration_Info_UClass_APlayGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APlayGameMode.OuterSingleton, Z_Construct_UClass_APlayGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APlayGameMode.OuterSingleton;
	}
	template<> STUDY_C_API UClass* StaticClass<APlayGameMode>()
	{
		return APlayGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlayGameMode);
	struct Z_CompiledInDeferFile_FID_Study_C_Source_Study_C_Public_GameMode_PlayGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Study_C_Source_Study_C_Public_GameMode_PlayGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APlayGameMode, APlayGameMode::StaticClass, TEXT("APlayGameMode"), &Z_Registration_Info_UClass_APlayGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APlayGameMode), 506178697U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Study_C_Source_Study_C_Public_GameMode_PlayGameMode_h_2108892006(TEXT("/Script/Study_C"),
		Z_CompiledInDeferFile_FID_Study_C_Source_Study_C_Public_GameMode_PlayGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Study_C_Source_Study_C_Public_GameMode_PlayGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
