// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DataDrivenUI/Public/BaseSubView.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseSubView() {}

// Begin Cross Module References
DATADRIVENUI_API UClass* Z_Construct_UClass_UBaseDataCarrier_NoRegister();
DATADRIVENUI_API UClass* Z_Construct_UClass_UBaseSubView();
DATADRIVENUI_API UClass* Z_Construct_UClass_UBaseSubView_NoRegister();
DATADRIVENUI_API UClass* Z_Construct_UClass_UUIView_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_DataDrivenUI();
// End Cross Module References

// Begin Class UBaseSubView
void UBaseSubView::StaticRegisterNativesUBaseSubView()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBaseSubView);
UClass* Z_Construct_UClass_UBaseSubView_NoRegister()
{
	return UBaseSubView::StaticClass();
}
struct Z_Construct_UClass_UBaseSubView_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// <summary>\n/// Represents a base subclass of UUserWidget that implements the IUIView interface, providing support for parent views and data carriers in a data-driven UI system.\n/// </summary>\n" },
#endif
		{ "IncludePath", "BaseSubView.h" },
		{ "ModuleRelativePath", "Public/BaseSubView.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<summary>\nRepresents a base subclass of UUserWidget that implements the IUIView interface, providing support for parent views and data carriers in a data-driven UI system.\n</summary>" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_parentView_MetaData[] = {
		{ "Category", "Parent View" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// <summary>\n/// The parent view that this subview belongs to.\n/// </summary>\n" },
#endif
		{ "ModuleRelativePath", "Public/BaseSubView.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<summary>\nThe parent view that this subview belongs to.\n</summary>" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_dataCarrier_MetaData[] = {
		{ "Category", "Data Carrier" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// <summary>\n/// The data carrier that this subview is bound to.\n/// </summary>\n" },
#endif
		{ "ModuleRelativePath", "Public/BaseSubView.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<summary>\nThe data carrier that this subview is bound to.\n</summary>" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_parentView;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_dataCarrier;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseSubView>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_UBaseSubView_Statics::NewProp_parentView = { "parentView", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseSubView, parentView), Z_Construct_UClass_UUIView_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_parentView_MetaData), NewProp_parentView_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBaseSubView_Statics::NewProp_dataCarrier = { "dataCarrier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseSubView, dataCarrier), Z_Construct_UClass_UBaseDataCarrier_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_dataCarrier_MetaData), NewProp_dataCarrier_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBaseSubView_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseSubView_Statics::NewProp_parentView,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseSubView_Statics::NewProp_dataCarrier,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseSubView_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBaseSubView_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_DataDrivenUI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseSubView_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UBaseSubView_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UUIView_NoRegister, (int32)VTABLE_OFFSET(UBaseSubView, IUIView), false },  // 4042501327
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBaseSubView_Statics::ClassParams = {
	&UBaseSubView::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBaseSubView_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBaseSubView_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseSubView_Statics::Class_MetaDataParams), Z_Construct_UClass_UBaseSubView_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBaseSubView()
{
	if (!Z_Registration_Info_UClass_UBaseSubView.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBaseSubView.OuterSingleton, Z_Construct_UClass_UBaseSubView_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBaseSubView.OuterSingleton;
}
template<> DATADRIVENUI_API UClass* StaticClass<UBaseSubView>()
{
	return UBaseSubView::StaticClass();
}
UBaseSubView::UBaseSubView(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseSubView);
UBaseSubView::~UBaseSubView() {}
// End Class UBaseSubView

// Begin Registration
struct Z_CompiledInDeferFile_FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_BaseSubView_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBaseSubView, UBaseSubView::StaticClass, TEXT("UBaseSubView"), &Z_Registration_Info_UClass_UBaseSubView, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBaseSubView), 2086327183U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_BaseSubView_h_3075795325(TEXT("/Script/DataDrivenUI"),
	Z_CompiledInDeferFile_FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_BaseSubView_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_BaseSubView_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
