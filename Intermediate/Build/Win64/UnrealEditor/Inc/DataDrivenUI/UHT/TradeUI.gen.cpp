// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DataDrivenUI/Public/Examples/TradeUI.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTradeUI() {}

// Begin Cross Module References
DATADRIVENUI_API UClass* Z_Construct_UClass_UBaseUIView();
DATADRIVENUI_API UClass* Z_Construct_UClass_UTradeUI();
DATADRIVENUI_API UClass* Z_Construct_UClass_UTradeUI_NoRegister();
UPackage* Z_Construct_UPackage__Script_DataDrivenUI();
// End Cross Module References

// Begin Class UTradeUI
void UTradeUI::StaticRegisterNativesUTradeUI()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTradeUI);
UClass* Z_Construct_UClass_UTradeUI_NoRegister()
{
	return UTradeUI::StaticClass();
}
struct Z_Construct_UClass_UTradeUI_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Examples/TradeUI.h" },
		{ "ModuleRelativePath", "Public/Examples/TradeUI.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTradeUI>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UTradeUI_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBaseUIView,
	(UObject* (*)())Z_Construct_UPackage__Script_DataDrivenUI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTradeUI_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTradeUI_Statics::ClassParams = {
	&UTradeUI::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTradeUI_Statics::Class_MetaDataParams), Z_Construct_UClass_UTradeUI_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTradeUI()
{
	if (!Z_Registration_Info_UClass_UTradeUI.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTradeUI.OuterSingleton, Z_Construct_UClass_UTradeUI_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTradeUI.OuterSingleton;
}
template<> DATADRIVENUI_API UClass* StaticClass<UTradeUI>()
{
	return UTradeUI::StaticClass();
}
UTradeUI::UTradeUI(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTradeUI);
UTradeUI::~UTradeUI() {}
// End Class UTradeUI

// Begin Registration
struct Z_CompiledInDeferFile_FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_Examples_TradeUI_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTradeUI, UTradeUI::StaticClass, TEXT("UTradeUI"), &Z_Registration_Info_UClass_UTradeUI, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTradeUI), 2744296258U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_Examples_TradeUI_h_1356023397(TEXT("/Script/DataDrivenUI"),
	Z_CompiledInDeferFile_FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_Examples_TradeUI_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_Examples_TradeUI_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
