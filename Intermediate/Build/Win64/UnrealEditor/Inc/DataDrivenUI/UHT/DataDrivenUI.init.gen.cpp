// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataDrivenUI_init() {}
	DATADRIVENUI_API UFunction* Z_Construct_UDelegateFunction_DataDrivenUI_ItemsUpdate__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_DataDrivenUI;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_DataDrivenUI()
	{
		if (!Z_Registration_Info_UPackage__Script_DataDrivenUI.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_DataDrivenUI_ItemsUpdate__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/DataDrivenUI",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xCDF90EF6,
				0x0269D4A5,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_DataDrivenUI.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_DataDrivenUI.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_DataDrivenUI(Z_Construct_UPackage__Script_DataDrivenUI, TEXT("/Script/DataDrivenUI"), Z_Registration_Info_UPackage__Script_DataDrivenUI, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xCDF90EF6, 0x0269D4A5));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
