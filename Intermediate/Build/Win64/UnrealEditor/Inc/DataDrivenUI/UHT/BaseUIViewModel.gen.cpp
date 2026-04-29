// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DataDrivenUI/Public/ViewModels/BaseUIViewModel.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseUIViewModel() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
DATADRIVENUI_API UClass* Z_Construct_UClass_UBaseUIViewModel();
DATADRIVENUI_API UClass* Z_Construct_UClass_UBaseUIViewModel_NoRegister();
DATADRIVENUI_API UClass* Z_Construct_UClass_UUIModel_NoRegister();
DATADRIVENUI_API UClass* Z_Construct_UClass_UUIView_NoRegister();
DATADRIVENUI_API UClass* Z_Construct_UClass_UUIViewModel_NoRegister();
UPackage* Z_Construct_UPackage__Script_DataDrivenUI();
// End Cross Module References

// Begin Class UBaseUIViewModel
void UBaseUIViewModel::StaticRegisterNativesUBaseUIViewModel()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBaseUIViewModel);
UClass* Z_Construct_UClass_UBaseUIViewModel_NoRegister()
{
	return UBaseUIViewModel::StaticClass();
}
struct Z_Construct_UClass_UBaseUIViewModel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// <summary>\n/// Author: Prashant D\n/// Description: Base class for creating view models in DataDrivenUI.\n/// </summary>\n" },
#endif
		{ "IncludePath", "ViewModels/BaseUIViewModel.h" },
		{ "ModuleRelativePath", "Public/ViewModels/BaseUIViewModel.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<summary>\nAuthor: Prashant D\nDescription: Base class for creating view models in DataDrivenUI.\n</summary>" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoundModel_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Model that this view model is bound to\n" },
#endif
		{ "ModuleRelativePath", "Public/ViewModels/BaseUIViewModel.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Model that this view model is bound to" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoundView_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//view that this view model is bound to\n" },
#endif
		{ "ModuleRelativePath", "Public/ViewModels/BaseUIViewModel.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "view that this view model is bound to" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_BoundModel;
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_BoundView;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseUIViewModel>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_UBaseUIViewModel_Statics::NewProp_BoundModel = { "BoundModel", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseUIViewModel, BoundModel), Z_Construct_UClass_UUIModel_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoundModel_MetaData), NewProp_BoundModel_MetaData) };
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_UBaseUIViewModel_Statics::NewProp_BoundView = { "BoundView", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseUIViewModel, BoundView), Z_Construct_UClass_UUIView_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoundView_MetaData), NewProp_BoundView_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBaseUIViewModel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseUIViewModel_Statics::NewProp_BoundModel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseUIViewModel_Statics::NewProp_BoundView,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseUIViewModel_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBaseUIViewModel_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_DataDrivenUI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseUIViewModel_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UBaseUIViewModel_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UUIViewModel_NoRegister, (int32)VTABLE_OFFSET(UBaseUIViewModel, IUIViewModel), false },  // 521338954
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBaseUIViewModel_Statics::ClassParams = {
	&UBaseUIViewModel::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBaseUIViewModel_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBaseUIViewModel_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseUIViewModel_Statics::Class_MetaDataParams), Z_Construct_UClass_UBaseUIViewModel_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBaseUIViewModel()
{
	if (!Z_Registration_Info_UClass_UBaseUIViewModel.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBaseUIViewModel.OuterSingleton, Z_Construct_UClass_UBaseUIViewModel_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBaseUIViewModel.OuterSingleton;
}
template<> DATADRIVENUI_API UClass* StaticClass<UBaseUIViewModel>()
{
	return UBaseUIViewModel::StaticClass();
}
UBaseUIViewModel::UBaseUIViewModel(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseUIViewModel);
UBaseUIViewModel::~UBaseUIViewModel() {}
// End Class UBaseUIViewModel

// Begin Registration
struct Z_CompiledInDeferFile_FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_ViewModels_BaseUIViewModel_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBaseUIViewModel, UBaseUIViewModel::StaticClass, TEXT("UBaseUIViewModel"), &Z_Registration_Info_UClass_UBaseUIViewModel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBaseUIViewModel), 4200395158U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_ViewModels_BaseUIViewModel_h_3528228614(TEXT("/Script/DataDrivenUI"),
	Z_CompiledInDeferFile_FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_ViewModels_BaseUIViewModel_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_ViewModels_BaseUIViewModel_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
