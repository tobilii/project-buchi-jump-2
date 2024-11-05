// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BuchiJump2/BuchiJump2GameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBuchiJump2GameMode() {}

// Begin Cross Module References
BUCHIJUMP2_API UClass* Z_Construct_UClass_ABuchiJump2GameMode();
BUCHIJUMP2_API UClass* Z_Construct_UClass_ABuchiJump2GameMode_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_BuchiJump2();
// End Cross Module References

// Begin Class ABuchiJump2GameMode
void ABuchiJump2GameMode::StaticRegisterNativesABuchiJump2GameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABuchiJump2GameMode);
UClass* Z_Construct_UClass_ABuchiJump2GameMode_NoRegister()
{
	return ABuchiJump2GameMode::StaticClass();
}
struct Z_Construct_UClass_ABuchiJump2GameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "BuchiJump2GameMode.h" },
		{ "ModuleRelativePath", "BuchiJump2GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABuchiJump2GameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ABuchiJump2GameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_BuchiJump2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABuchiJump2GameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABuchiJump2GameMode_Statics::ClassParams = {
	&ABuchiJump2GameMode::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABuchiJump2GameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ABuchiJump2GameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABuchiJump2GameMode()
{
	if (!Z_Registration_Info_UClass_ABuchiJump2GameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABuchiJump2GameMode.OuterSingleton, Z_Construct_UClass_ABuchiJump2GameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABuchiJump2GameMode.OuterSingleton;
}
template<> BUCHIJUMP2_API UClass* StaticClass<ABuchiJump2GameMode>()
{
	return ABuchiJump2GameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABuchiJump2GameMode);
ABuchiJump2GameMode::~ABuchiJump2GameMode() {}
// End Class ABuchiJump2GameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_GitHub_project_buchi_jump_2_BuchiJump2_Source_BuchiJump2_BuchiJump2GameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABuchiJump2GameMode, ABuchiJump2GameMode::StaticClass, TEXT("ABuchiJump2GameMode"), &Z_Registration_Info_UClass_ABuchiJump2GameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABuchiJump2GameMode), 372563048U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_project_buchi_jump_2_BuchiJump2_Source_BuchiJump2_BuchiJump2GameMode_h_658447984(TEXT("/Script/BuchiJump2"),
	Z_CompiledInDeferFile_FID_GitHub_project_buchi_jump_2_BuchiJump2_Source_BuchiJump2_BuchiJump2GameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_project_buchi_jump_2_BuchiJump2_Source_BuchiJump2_BuchiJump2GameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
