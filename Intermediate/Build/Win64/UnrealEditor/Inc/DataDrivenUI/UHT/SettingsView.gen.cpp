// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DataDrivenUI/Public/Examples/SettingsView.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSettingsView() {}

// Begin Cross Module References
DATADRIVENUI_API UClass* Z_Construct_UClass_UBaseUIView();
DATADRIVENUI_API UClass* Z_Construct_UClass_USettingsView();
DATADRIVENUI_API UClass* Z_Construct_UClass_USettingsView_NoRegister();
UPackage* Z_Construct_UPackage__Script_DataDrivenUI();
// End Cross Module References

// Begin Class USettingsView
void USettingsView::StaticRegisterNativesUSettingsView()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USettingsView);
UClass* Z_Construct_UClass_USettingsView_NoRegister()
{
	return USettingsView::StaticClass();
}
struct Z_Construct_UClass_USettingsView_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Examples/SettingsView.h" },
		{ "ModuleRelativePath", "Public/Examples/SettingsView.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USettingsView>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USettingsView_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBaseUIView,
	(UObject* (*)())Z_Construct_UPackage__Script_DataDrivenUI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USettingsView_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USettingsView_Statics::ClassParams = {
	&USettingsView::StaticClass,
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
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USettingsView_Statics::Class_MetaDataParams), Z_Construct_UClass_USettingsView_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USettingsView()
{
	if (!Z_Registration_Info_UClass_USettingsView.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USettingsView.OuterSingleton, Z_Construct_UClass_USettingsView_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USettingsView.OuterSingleton;
}
template<> DATADRIVENUI_API UClass* StaticClass<USettingsView>()
{
	return USettingsView::StaticClass();
}
USettingsView::USettingsView(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USettingsView);
USettingsView::~USettingsView() {}
// End Class USettingsView

// Begin Registration
struct Z_CompiledInDeferFile_FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_Examples_SettingsView_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USettingsView, USettingsView::StaticClass, TEXT("USettingsView"), &Z_Registration_Info_UClass_USettingsView, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USettingsView), 1893450088U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_Examples_SettingsView_h_3585806781(TEXT("/Script/DataDrivenUI"),
	Z_CompiledInDeferFile_FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_Examples_SettingsView_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_Examples_SettingsView_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
