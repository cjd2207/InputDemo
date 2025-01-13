// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InputDemo/InputDemoGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInputDemoGameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	INPUTDEMO_API UClass* Z_Construct_UClass_AInputDemoGameMode();
	INPUTDEMO_API UClass* Z_Construct_UClass_AInputDemoGameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_InputDemo();
// End Cross Module References
	void AInputDemoGameMode::StaticRegisterNativesAInputDemoGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AInputDemoGameMode);
	UClass* Z_Construct_UClass_AInputDemoGameMode_NoRegister()
	{
		return AInputDemoGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AInputDemoGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AInputDemoGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_InputDemo,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AInputDemoGameMode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInputDemoGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "InputDemoGameMode.h" },
		{ "ModuleRelativePath", "InputDemoGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AInputDemoGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AInputDemoGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AInputDemoGameMode_Statics::ClassParams = {
		&AInputDemoGameMode::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AInputDemoGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AInputDemoGameMode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AInputDemoGameMode()
	{
		if (!Z_Registration_Info_UClass_AInputDemoGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AInputDemoGameMode.OuterSingleton, Z_Construct_UClass_AInputDemoGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AInputDemoGameMode.OuterSingleton;
	}
	template<> INPUTDEMO_API UClass* StaticClass<AInputDemoGameMode>()
	{
		return AInputDemoGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AInputDemoGameMode);
	AInputDemoGameMode::~AInputDemoGameMode() {}
	struct Z_CompiledInDeferFile_FID_Users_davis_OneDrive_Documents_Unreal_Projects_GameDev_InputDemo_ProjectFiles_InputDemo_Source_InputDemo_InputDemoGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_davis_OneDrive_Documents_Unreal_Projects_GameDev_InputDemo_ProjectFiles_InputDemo_Source_InputDemo_InputDemoGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AInputDemoGameMode, AInputDemoGameMode::StaticClass, TEXT("AInputDemoGameMode"), &Z_Registration_Info_UClass_AInputDemoGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AInputDemoGameMode), 1527556371U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_davis_OneDrive_Documents_Unreal_Projects_GameDev_InputDemo_ProjectFiles_InputDemo_Source_InputDemo_InputDemoGameMode_h_1134349344(TEXT("/Script/InputDemo"),
		Z_CompiledInDeferFile_FID_Users_davis_OneDrive_Documents_Unreal_Projects_GameDev_InputDemo_ProjectFiles_InputDemo_Source_InputDemo_InputDemoGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_davis_OneDrive_Documents_Unreal_Projects_GameDev_InputDemo_ProjectFiles_InputDemo_Source_InputDemo_InputDemoGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
