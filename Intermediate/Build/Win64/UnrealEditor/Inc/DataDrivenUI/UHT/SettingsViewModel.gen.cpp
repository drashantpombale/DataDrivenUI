// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DataDrivenUI/Public/Examples/SettingsViewModel.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSettingsViewModel() {}

// Begin Cross Module References
DATADRIVENUI_API UClass* Z_Construct_UClass_UBaseUIViewModel();
DATADRIVENUI_API UClass* Z_Construct_UClass_USettingsViewModel();
DATADRIVENUI_API UClass* Z_Construct_UClass_USettingsViewModel_NoRegister();
UPackage* Z_Construct_UPackage__Script_DataDrivenUI();
// End Cross Module References

// Begin Class USettingsViewModel
void USettingsViewModel::StaticRegisterNativesUSettingsViewModel()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USettingsViewModel);
UClass* Z_Construct_UClass_USettingsViewModel_NoRegister()
{
	return USettingsViewModel::StaticClass();
}
struct Z_Construct_UClass_USettingsViewModel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Examples/SettingsViewModel.h" },
		{ "ModuleRelativePath", "Public/Examples/SettingsViewModel.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USettingsViewModel>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USettingsViewModel_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBaseUIViewModel,
	(UObject* (*)())Z_Construct_UPackage__Script_DataDrivenUI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USettingsViewModel_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USettingsViewModel_Statics::ClassParams = {
	&USettingsViewModel::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USettingsViewModel_Statics::Class_MetaDataParams), Z_Construct_UClass_USettingsViewModel_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USettingsViewModel()
{
	if (!Z_Registration_Info_UClass_USettingsViewModel.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USettingsViewModel.OuterSingleton, Z_Construct_UClass_USettingsViewModel_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USettingsViewModel.OuterSingleton;
}
template<> DATADRIVENUI_API UClass* StaticClass<USettingsViewModel>()
{
	return USettingsViewModel::StaticClass();
}
USettingsViewModel::USettingsViewModel(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USettingsViewModel);
USettingsViewModel::~USettingsViewModel() {}
// End Class USettingsViewModel

// Begin Registration
struct Z_CompiledInDeferFile_FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_Examples_SettingsViewModel_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USettingsViewModel, USettingsViewModel::StaticClass, TEXT("USettingsViewModel"), &Z_Registration_Info_UClass_USettingsViewModel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USettingsViewModel), 4082832636U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_Examples_SettingsViewModel_h_3325983523(TEXT("/Script/DataDrivenUI"),
	Z_CompiledInDeferFile_FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_Examples_SettingsViewModel_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_Examples_SettingsViewModel_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
