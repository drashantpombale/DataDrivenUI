// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DataDrivenUI/Public/Views/BaseUIView.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseUIView() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
DATADRIVENUI_API UClass* Z_Construct_UClass_UBaseDataCarrier_NoRegister();
DATADRIVENUI_API UClass* Z_Construct_UClass_UBaseUIView();
DATADRIVENUI_API UClass* Z_Construct_UClass_UBaseUIView_NoRegister();
DATADRIVENUI_API UClass* Z_Construct_UClass_UUIView_NoRegister();
DATADRIVENUI_API UClass* Z_Construct_UClass_UUIViewModel_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_DataDrivenUI();
// End Cross Module References

// Begin Class UBaseUIView Function CreateSubViews
struct Z_Construct_UFunction_UBaseUIView_CreateSubViews_Statics
{
	struct BaseUIView_eventCreateSubViews_Parms
	{
		TArray<UBaseDataCarrier*> dataCarriers;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// <summary>\n/// Create sub views based on the data carriers provided, this will create a view for each data carrier based on the mapping provided in the carrierViewMapping property.\n/// </summary>\n/// <param name=\"dataCarriers\"></param>\n" },
#endif
		{ "ModuleRelativePath", "Public/Views/BaseUIView.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<summary>\nCreate sub views based on the data carriers provided, this will create a view for each data carrier based on the mapping provided in the carrierViewMapping property.\n</summary>\n<param name=\"dataCarriers\"></param>" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_dataCarriers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_dataCarriers;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseUIView_CreateSubViews_Statics::NewProp_dataCarriers_Inner = { "dataCarriers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UBaseDataCarrier_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBaseUIView_CreateSubViews_Statics::NewProp_dataCarriers = { "dataCarriers", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseUIView_eventCreateSubViews_Parms, dataCarriers), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseUIView_CreateSubViews_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseUIView_CreateSubViews_Statics::NewProp_dataCarriers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseUIView_CreateSubViews_Statics::NewProp_dataCarriers,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseUIView_CreateSubViews_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseUIView_CreateSubViews_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseUIView, nullptr, "CreateSubViews", nullptr, nullptr, Z_Construct_UFunction_UBaseUIView_CreateSubViews_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseUIView_CreateSubViews_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBaseUIView_CreateSubViews_Statics::BaseUIView_eventCreateSubViews_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseUIView_CreateSubViews_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseUIView_CreateSubViews_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBaseUIView_CreateSubViews_Statics::BaseUIView_eventCreateSubViews_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBaseUIView_CreateSubViews()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseUIView_CreateSubViews_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBaseUIView::execCreateSubViews)
{
	P_GET_TARRAY(UBaseDataCarrier*,Z_Param_dataCarriers);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CreateSubViews(Z_Param_dataCarriers);
	P_NATIVE_END;
}
// End Class UBaseUIView Function CreateSubViews

// Begin Class UBaseUIView Function UpdateSubView
struct BaseUIView_eventUpdateSubView_Parms
{
	UBaseDataCarrier* _dataCarrier;
};
static FName NAME_UBaseUIView_UpdateSubView = FName(TEXT("UpdateSubView"));
void UBaseUIView::UpdateSubView(UBaseDataCarrier* _dataCarrier)
{
	BaseUIView_eventUpdateSubView_Parms Parms;
	Parms._dataCarrier=_dataCarrier;
	ProcessEvent(FindFunctionChecked(NAME_UBaseUIView_UpdateSubView),&Parms);
}
struct Z_Construct_UFunction_UBaseUIView_UpdateSubView_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// <summary>\n/// Update sub view with updated model data that it is bound to.\n/// </summary>\n/// <param name=\"_dataCarrier\"></param>\n" },
#endif
		{ "ModuleRelativePath", "Public/Views/BaseUIView.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<summary>\nUpdate sub view with updated model data that it is bound to.\n</summary>\n<param name=\"_dataCarrier\"></param>" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp__dataCarrier;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseUIView_UpdateSubView_Statics::NewProp__dataCarrier = { "_dataCarrier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseUIView_eventUpdateSubView_Parms, _dataCarrier), Z_Construct_UClass_UBaseDataCarrier_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseUIView_UpdateSubView_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseUIView_UpdateSubView_Statics::NewProp__dataCarrier,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseUIView_UpdateSubView_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseUIView_UpdateSubView_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseUIView, nullptr, "UpdateSubView", nullptr, nullptr, Z_Construct_UFunction_UBaseUIView_UpdateSubView_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseUIView_UpdateSubView_Statics::PropPointers), sizeof(BaseUIView_eventUpdateSubView_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseUIView_UpdateSubView_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseUIView_UpdateSubView_Statics::Function_MetaDataParams) };
static_assert(sizeof(BaseUIView_eventUpdateSubView_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBaseUIView_UpdateSubView()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseUIView_UpdateSubView_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UBaseUIView Function UpdateSubView

// Begin Class UBaseUIView
void UBaseUIView::StaticRegisterNativesUBaseUIView()
{
	UClass* Class = UBaseUIView::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CreateSubViews", &UBaseUIView::execCreateSubViews },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBaseUIView);
UClass* Z_Construct_UClass_UBaseUIView_NoRegister()
{
	return UBaseUIView::StaticClass();
}
struct Z_Construct_UClass_UBaseUIView_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// <summary>\n/// Author: Prashant D\n/// Description: Base interface class for creating UI Views, this is a generic class that has the functionality required for most of the views, in case of views that need some\n/// additional functionality please create a new class inheriting the IUIView interface\n/// </summary>\n" },
#endif
		{ "IncludePath", "Views/BaseUIView.h" },
		{ "ModuleRelativePath", "Public/Views/BaseUIView.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<summary>\nAuthor: Prashant D\nDescription: Base interface class for creating UI Views, this is a generic class that has the functionality required for most of the views, in case of views that need some\nadditional functionality please create a new class inheriting the IUIView interface\n</summary>" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_carrierViewMapping_MetaData[] = {
		{ "Category", "Mappings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// <summary>\n/// A mapping between data carrier classes and their corresponding user widget(view) classes.\n/// </summary>\n" },
#endif
		{ "ModuleRelativePath", "Public/Views/BaseUIView.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<summary>\nA mapping between data carrier classes and their corresponding user widget(view) classes.\n</summary>" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoundViewModel_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// <summary>\n/// The view model that this view is bound to, can be null in case where the view does not need a view model.\n/// </summary>\n" },
#endif
		{ "ModuleRelativePath", "Public/Views/BaseUIView.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<summary>\nThe view model that this view is bound to, can be null in case where the view does not need a view model.\n</summary>" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_carrierViewMapping_ValueProp;
	static const UECodeGen_Private::FClassPropertyParams NewProp_carrierViewMapping_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_carrierViewMapping;
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_BoundViewModel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBaseUIView_CreateSubViews, "CreateSubViews" }, // 3800906291
		{ &Z_Construct_UFunction_UBaseUIView_UpdateSubView, "UpdateSubView" }, // 1066514323
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseUIView>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UBaseUIView_Statics::NewProp_carrierViewMapping_ValueProp = { "carrierViewMapping", nullptr, (EPropertyFlags)0x0004000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UBaseUIView_Statics::NewProp_carrierViewMapping_Key_KeyProp = { "carrierViewMapping_Key", nullptr, (EPropertyFlags)0x0004000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UBaseDataCarrier_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UBaseUIView_Statics::NewProp_carrierViewMapping = { "carrierViewMapping", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseUIView, carrierViewMapping), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_carrierViewMapping_MetaData), NewProp_carrierViewMapping_MetaData) };
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_UBaseUIView_Statics::NewProp_BoundViewModel = { "BoundViewModel", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseUIView, BoundViewModel), Z_Construct_UClass_UUIViewModel_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoundViewModel_MetaData), NewProp_BoundViewModel_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBaseUIView_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseUIView_Statics::NewProp_carrierViewMapping_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseUIView_Statics::NewProp_carrierViewMapping_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseUIView_Statics::NewProp_carrierViewMapping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseUIView_Statics::NewProp_BoundViewModel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseUIView_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBaseUIView_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_DataDrivenUI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseUIView_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UBaseUIView_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UUIView_NoRegister, (int32)VTABLE_OFFSET(UBaseUIView, IUIView), false },  // 4042501327
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBaseUIView_Statics::ClassParams = {
	&UBaseUIView::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UBaseUIView_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UBaseUIView_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseUIView_Statics::Class_MetaDataParams), Z_Construct_UClass_UBaseUIView_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBaseUIView()
{
	if (!Z_Registration_Info_UClass_UBaseUIView.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBaseUIView.OuterSingleton, Z_Construct_UClass_UBaseUIView_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBaseUIView.OuterSingleton;
}
template<> DATADRIVENUI_API UClass* StaticClass<UBaseUIView>()
{
	return UBaseUIView::StaticClass();
}
UBaseUIView::UBaseUIView(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseUIView);
UBaseUIView::~UBaseUIView() {}
// End Class UBaseUIView

// Begin Registration
struct Z_CompiledInDeferFile_FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_Views_BaseUIView_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBaseUIView, UBaseUIView::StaticClass, TEXT("UBaseUIView"), &Z_Registration_Info_UClass_UBaseUIView, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBaseUIView), 4204177143U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_Views_BaseUIView_h_3804247018(TEXT("/Script/DataDrivenUI"),
	Z_CompiledInDeferFile_FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_Views_BaseUIView_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_Views_BaseUIView_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
