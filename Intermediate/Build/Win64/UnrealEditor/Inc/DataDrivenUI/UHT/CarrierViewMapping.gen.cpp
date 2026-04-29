// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DataDrivenUI/Public/Commons/CarrierViewMapping.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCarrierViewMapping() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
DATADRIVENUI_API UClass* Z_Construct_UClass_UBaseDataCarrier_NoRegister();
DATADRIVENUI_API UScriptStruct* Z_Construct_UScriptStruct_FCarrierViewMapping();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_DataDrivenUI();
// End Cross Module References

// Begin ScriptStruct FCarrierViewMapping
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CarrierViewMapping;
class UScriptStruct* FCarrierViewMapping::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CarrierViewMapping.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CarrierViewMapping.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCarrierViewMapping, (UObject*)Z_Construct_UPackage__Script_DataDrivenUI(), TEXT("CarrierViewMapping"));
	}
	return Z_Registration_Info_UScriptStruct_CarrierViewMapping.OuterSingleton;
}
template<> DATADRIVENUI_API UScriptStruct* StaticStruct<FCarrierViewMapping>()
{
	return FCarrierViewMapping::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCarrierViewMapping_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// <summary>\n/// Author: Prashant D\n/// Description: Structure to map a data carrier to a widget.\n/// </summary>\n" },
#endif
		{ "ModuleRelativePath", "Public/Commons/CarrierViewMapping.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<summary>\nAuthor: Prashant D\nDescription: Structure to map a data carrier to a widget.\n</summary>" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_dataCarrier_MetaData[] = {
		{ "Category", "CarrierViewMapping" },
		{ "ModuleRelativePath", "Public/Commons/CarrierViewMapping.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_widget_MetaData[] = {
		{ "Category", "CarrierViewMapping" },
		{ "ModuleRelativePath", "Public/Commons/CarrierViewMapping.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_dataCarrier;
	static const UECodeGen_Private::FClassPropertyParams NewProp_widget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCarrierViewMapping>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FCarrierViewMapping_Statics::NewProp_dataCarrier = { "dataCarrier", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCarrierViewMapping, dataCarrier), Z_Construct_UClass_UClass, Z_Construct_UClass_UBaseDataCarrier_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_dataCarrier_MetaData), NewProp_dataCarrier_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FCarrierViewMapping_Statics::NewProp_widget = { "widget", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCarrierViewMapping, widget), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_widget_MetaData), NewProp_widget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCarrierViewMapping_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCarrierViewMapping_Statics::NewProp_dataCarrier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCarrierViewMapping_Statics::NewProp_widget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCarrierViewMapping_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCarrierViewMapping_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DataDrivenUI,
	nullptr,
	&NewStructOps,
	"CarrierViewMapping",
	Z_Construct_UScriptStruct_FCarrierViewMapping_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCarrierViewMapping_Statics::PropPointers),
	sizeof(FCarrierViewMapping),
	alignof(FCarrierViewMapping),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCarrierViewMapping_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCarrierViewMapping_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCarrierViewMapping()
{
	if (!Z_Registration_Info_UScriptStruct_CarrierViewMapping.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CarrierViewMapping.InnerSingleton, Z_Construct_UScriptStruct_FCarrierViewMapping_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CarrierViewMapping.InnerSingleton;
}
// End ScriptStruct FCarrierViewMapping

// Begin Registration
struct Z_CompiledInDeferFile_FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_Commons_CarrierViewMapping_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FCarrierViewMapping::StaticStruct, Z_Construct_UScriptStruct_FCarrierViewMapping_Statics::NewStructOps, TEXT("CarrierViewMapping"), &Z_Registration_Info_UScriptStruct_CarrierViewMapping, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCarrierViewMapping), 3887869077U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_Commons_CarrierViewMapping_h_1099385180(TEXT("/Script/DataDrivenUI"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_Commons_CarrierViewMapping_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_Commons_CarrierViewMapping_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
