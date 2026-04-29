// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DataDrivenUI/Public/Examples/TradeViewModel.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTradeViewModel() {}

// Begin Cross Module References
DATADRIVENUI_API UClass* Z_Construct_UClass_UTradeViewModel();
DATADRIVENUI_API UClass* Z_Construct_UClass_UTradeViewModel_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
UPackage* Z_Construct_UPackage__Script_DataDrivenUI();
// End Cross Module References

// Begin Class UTradeViewModel
void UTradeViewModel::StaticRegisterNativesUTradeViewModel()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTradeViewModel);
UClass* Z_Construct_UClass_UTradeViewModel_NoRegister()
{
	return UTradeViewModel::StaticClass();
}
struct Z_Construct_UClass_UTradeViewModel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Examples/TradeViewModel.h" },
		{ "ModuleRelativePath", "Public/Examples/TradeViewModel.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTradeViewModel>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UTradeViewModel_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_DataDrivenUI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTradeViewModel_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTradeViewModel_Statics::ClassParams = {
	&UTradeViewModel::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTradeViewModel_Statics::Class_MetaDataParams), Z_Construct_UClass_UTradeViewModel_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTradeViewModel()
{
	if (!Z_Registration_Info_UClass_UTradeViewModel.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTradeViewModel.OuterSingleton, Z_Construct_UClass_UTradeViewModel_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTradeViewModel.OuterSingleton;
}
template<> DATADRIVENUI_API UClass* StaticClass<UTradeViewModel>()
{
	return UTradeViewModel::StaticClass();
}
UTradeViewModel::UTradeViewModel(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTradeViewModel);
UTradeViewModel::~UTradeViewModel() {}
// End Class UTradeViewModel

// Begin Registration
struct Z_CompiledInDeferFile_FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_Examples_TradeViewModel_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTradeViewModel, UTradeViewModel::StaticClass, TEXT("UTradeViewModel"), &Z_Registration_Info_UClass_UTradeViewModel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTradeViewModel), 1552139954U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_Examples_TradeViewModel_h_3997062347(TEXT("/Script/DataDrivenUI"),
	Z_CompiledInDeferFile_FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_Examples_TradeViewModel_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_Examples_TradeViewModel_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
