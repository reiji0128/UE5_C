// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Study_C/Public/Manager/ProjectileManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProjectileManager() {}
// Cross Module References
	STUDY_C_API UClass* Z_Construct_UClass_AProjectileManager_NoRegister();
	STUDY_C_API UClass* Z_Construct_UClass_AProjectileManager();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Study_C();
// End Cross Module References
	void AProjectileManager::StaticRegisterNativesAProjectileManager()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AProjectileManager);
	UClass* Z_Construct_UClass_AProjectileManager_NoRegister()
	{
		return AProjectileManager::StaticClass();
	}
	struct Z_Construct_UClass_AProjectileManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileNum_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ProjectileNum;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AProjectileManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Study_C,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectileManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Manager/ProjectileManager.h" },
		{ "ModuleRelativePath", "Public/Manager/ProjectileManager.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectileManager_Statics::NewProp_ProjectileNum_MetaData[] = {
		{ "Category", "Projectile" },
		{ "Comment", "// ?e?\xcc\x91???\n" },
		{ "ModuleRelativePath", "Public/Manager/ProjectileManager.h" },
		{ "ToolTip", "?e?\xcc\x91???" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AProjectileManager_Statics::NewProp_ProjectileNum = { "ProjectileNum", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProjectileManager, ProjectileNum), METADATA_PARAMS(Z_Construct_UClass_AProjectileManager_Statics::NewProp_ProjectileNum_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProjectileManager_Statics::NewProp_ProjectileNum_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AProjectileManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectileManager_Statics::NewProp_ProjectileNum,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AProjectileManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProjectileManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AProjectileManager_Statics::ClassParams = {
		&AProjectileManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AProjectileManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AProjectileManager_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AProjectileManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AProjectileManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AProjectileManager()
	{
		if (!Z_Registration_Info_UClass_AProjectileManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AProjectileManager.OuterSingleton, Z_Construct_UClass_AProjectileManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AProjectileManager.OuterSingleton;
	}
	template<> STUDY_C_API UClass* StaticClass<AProjectileManager>()
	{
		return AProjectileManager::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AProjectileManager);
	struct Z_CompiledInDeferFile_FID_Study_C_Source_Study_C_Public_Manager_ProjectileManager_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Study_C_Source_Study_C_Public_Manager_ProjectileManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AProjectileManager, AProjectileManager::StaticClass, TEXT("AProjectileManager"), &Z_Registration_Info_UClass_AProjectileManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AProjectileManager), 4142400549U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Study_C_Source_Study_C_Public_Manager_ProjectileManager_h_2204265137(TEXT("/Script/Study_C"),
		Z_CompiledInDeferFile_FID_Study_C_Source_Study_C_Public_Manager_ProjectileManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Study_C_Source_Study_C_Public_Manager_ProjectileManager_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
