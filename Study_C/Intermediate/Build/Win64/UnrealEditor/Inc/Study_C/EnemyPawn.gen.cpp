// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Study_C/Public/AI/EnemyPawn/EnemyPawn.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyPawn() {}
// Cross Module References
	STUDY_C_API UClass* Z_Construct_UClass_AEnemyPawn_NoRegister();
	STUDY_C_API UClass* Z_Construct_UClass_AEnemyPawn();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_Study_C();
// End Cross Module References
	void AEnemyPawn::StaticRegisterNativesAEnemyPawn()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEnemyPawn);
	UClass* Z_Construct_UClass_AEnemyPawn_NoRegister()
	{
		return AEnemyPawn::StaticClass();
	}
	struct Z_Construct_UClass_AEnemyPawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemyPawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_Study_C,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyPawn_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "AI/EnemyPawn/EnemyPawn.h" },
		{ "ModuleRelativePath", "Public/AI/EnemyPawn/EnemyPawn.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemyPawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemyPawn>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AEnemyPawn_Statics::ClassParams = {
		&AEnemyPawn::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEnemyPawn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyPawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEnemyPawn()
	{
		if (!Z_Registration_Info_UClass_AEnemyPawn.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEnemyPawn.OuterSingleton, Z_Construct_UClass_AEnemyPawn_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AEnemyPawn.OuterSingleton;
	}
	template<> STUDY_C_API UClass* StaticClass<AEnemyPawn>()
	{
		return AEnemyPawn::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemyPawn);
	struct Z_CompiledInDeferFile_FID_Study_C_Source_Study_C_Public_AI_EnemyPawn_EnemyPawn_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Study_C_Source_Study_C_Public_AI_EnemyPawn_EnemyPawn_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AEnemyPawn, AEnemyPawn::StaticClass, TEXT("AEnemyPawn"), &Z_Registration_Info_UClass_AEnemyPawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnemyPawn), 32073451U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Study_C_Source_Study_C_Public_AI_EnemyPawn_EnemyPawn_h_2394430515(TEXT("/Script/Study_C"),
		Z_CompiledInDeferFile_FID_Study_C_Source_Study_C_Public_AI_EnemyPawn_EnemyPawn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Study_C_Source_Study_C_Public_AI_EnemyPawn_EnemyPawn_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
