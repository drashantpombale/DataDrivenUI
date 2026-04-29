// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DataDrivenUI/Public/Interfaces/UIViewModel.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUIViewModel() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
DATADRIVENUI_API UClass* Z_Construct_UClass_UUIViewModel();
DATADRIVENUI_API UClass* Z_Construct_UClass_UUIViewModel_NoRegister();
UPackage* Z_Construct_UPackage__Script_DataDrivenUI();
// End Cross Module References

// Begin Interface UUIViewModel
void UUIViewModel::StaticRegisterNativesUUIViewModel()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUIViewModel);
UClass* Z_Construct_UClass_UUIViewModel_NoRegister()
{
	return UUIViewModel::StaticClass();
}
struct Z_Construct_UClass_UUIViewModel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interfaces/UIViewModel.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IUIViewModel>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UUIViewModel_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_DataDrivenUI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUIViewModel_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UUIViewModel_Statics::ClassParams = {
	&UUIViewModel::StaticClass,
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
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUIViewModel_Statics::Class_MetaDataParams), Z_Construct_UClass_UUIViewModel_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UUIViewModel()
{
	if (!Z_Registration_Info_UClass_UUIViewModel.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUIViewModel.OuterSingleton, Z_Construct_UClass_UUIViewModel_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UUIViewModel.OuterSingleton;
}
template<> DATADRIVENUI_API UClass* StaticClass<UUIViewModel>()
{
	return UUIViewModel::StaticClass();
}
UUIViewModel::UUIViewModel(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UUIViewModel);
UUIViewModel::~UUIViewModel() {}
// End Interface UUIViewModel

// Begin Registration
struct Z_CompiledInDeferFile_FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_Interfaces_UIViewModel_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UUIViewModel, UUIViewModel::StaticClass, TEXT("UUIViewModel"), &Z_Registration_Info_UClass_UUIViewModel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUIViewModel), 521338954U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_Interfaces_UIViewModel_h_2431108715(TEXT("/Script/DataDrivenUI"),
	Z_CompiledInDeferFile_FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_Interfaces_UIViewModel_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_Interfaces_UIViewModel_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
