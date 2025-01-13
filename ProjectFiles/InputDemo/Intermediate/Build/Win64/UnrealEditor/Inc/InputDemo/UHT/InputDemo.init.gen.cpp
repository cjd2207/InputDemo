// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInputDemo_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_InputDemo;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_InputDemo()
	{
		if (!Z_Registration_Info_UPackage__Script_InputDemo.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/InputDemo",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x30FB35F2,
				0x0715CE46,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_InputDemo.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_InputDemo.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_InputDemo(Z_Construct_UPackage__Script_InputDemo, TEXT("/Script/InputDemo"), Z_Registration_Info_UPackage__Script_InputDemo, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x30FB35F2, 0x0715CE46));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
