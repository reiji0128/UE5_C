// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Study_C/Public/Character/BallPlayer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBallPlayer() {}
// Cross Module References
	STUDY_C_API UClass* Z_Construct_UClass_ABallPlayer_NoRegister();
	STUDY_C_API UClass* Z_Construct_UClass_ABallPlayer();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_Study_C();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
// End Cross Module References
	void ABallPlayer::StaticRegisterNativesABallPlayer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABallPlayer);
	UClass* Z_Construct_UClass_ABallPlayer_NoRegister()
	{
		return ABallPlayer::StaticClass();
	}
	struct Z_Construct_UClass_ABallPlayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Sphere_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Sphere;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpringArm_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SpringArm;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Camera;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABallPlayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_Study_C,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABallPlayer_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Character/BallPlayer.h" },
		{ "ModuleRelativePath", "Public/Character/BallPlayer.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABallPlayer_Statics::NewProp_Sphere_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Character" },
		{ "Comment", "/** Character?p??StaticMesh : Sphere */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Character/BallPlayer.h" },
		{ "ToolTip", "Character?p??StaticMesh : Sphere" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ABallPlayer_Statics::NewProp_Sphere = { "Sphere", nullptr, (EPropertyFlags)0x00140000000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABallPlayer, Sphere), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABallPlayer_Statics::NewProp_Sphere_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABallPlayer_Statics::NewProp_Sphere_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABallPlayer_Statics::NewProp_SpringArm_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Camera???z?u???\xe9\x82\xbd?\xdf\x82?SpringArm */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Character/BallPlayer.h" },
		{ "ToolTip", "Camera???z?u???\xe9\x82\xbd?\xdf\x82?SpringArm" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ABallPlayer_Statics::NewProp_SpringArm = { "SpringArm", nullptr, (EPropertyFlags)0x00140000000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABallPlayer, SpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABallPlayer_Statics::NewProp_SpringArm_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABallPlayer_Statics::NewProp_SpringArm_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABallPlayer_Statics::NewProp_Camera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** SpringArm?\xcc\x90??[?\xc9\x94z?u?????J???? */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Character/BallPlayer.h" },
		{ "ToolTip", "SpringArm?\xcc\x90??[?\xc9\x94z?u?????J????" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ABallPlayer_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x00140000000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABallPlayer, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABallPlayer_Statics::NewProp_Camera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABallPlayer_Statics::NewProp_Camera_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABallPlayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABallPlayer_Statics::NewProp_Sphere,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABallPlayer_Statics::NewProp_SpringArm,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABallPlayer_Statics::NewProp_Camera,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABallPlayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABallPlayer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABallPlayer_Statics::ClassParams = {
		&ABallPlayer::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABallPlayer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ABallPlayer_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABallPlayer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABallPlayer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABallPlayer()
	{
		if (!Z_Registration_Info_UClass_ABallPlayer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABallPlayer.OuterSingleton, Z_Construct_UClass_ABallPlayer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABallPlayer.OuterSingleton;
	}
	template<> STUDY_C_API UClass* StaticClass<ABallPlayer>()
	{
		return ABallPlayer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABallPlayer);
	struct Z_CompiledInDeferFile_FID_Study_C_Source_Study_C_Public_Character_BallPlayer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Study_C_Source_Study_C_Public_Character_BallPlayer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABallPlayer, ABallPlayer::StaticClass, TEXT("ABallPlayer"), &Z_Registration_Info_UClass_ABallPlayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABallPlayer), 1986445260U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Study_C_Source_Study_C_Public_Character_BallPlayer_h_1310914711(TEXT("/Script/Study_C"),
		Z_CompiledInDeferFile_FID_Study_C_Source_Study_C_Public_Character_BallPlayer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Study_C_Source_Study_C_Public_Character_BallPlayer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
