// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DataDrivenUI/Public/Utilities/ViewModelMapping.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeViewModelMapping() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
DATADRIVENUI_API UClass* Z_Construct_UClass_UBaseUIView_NoRegister();
DATADRIVENUI_API UClass* Z_Construct_UClass_UBaseUIViewModel_NoRegister();
DATADRIVENUI_API UClass* Z_Construct_UClass_UViewModelMapping();
DATADRIVENUI_API UClass* Z_Construct_UClass_UViewModelMapping_NoRegister();
DATADRIVENUI_API UScriptStruct* Z_Construct_UScriptStruct_FViewModelMappingData();
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
UPackage* Z_Construct_UPackage__Script_DataDrivenUI();
// End Cross Module References

// Begin ScriptStruct FViewModelMappingData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ViewModelMappingData;
class UScriptStruct* FViewModelMappingData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ViewModelMappingData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ViewModelMappingData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FViewModelMappingData, (UObject*)Z_Construct_UPackage__Script_DataDrivenUI(), TEXT("ViewModelMappingData"));
	}
	return Z_Registration_Info_UScriptStruct_ViewModelMappingData.OuterSingleton;
}
template<> DATADRIVENUI_API UScriptStruct* StaticStruct<FViewModelMappingData>()
{
	return FViewModelMappingData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FViewModelMappingData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// <summary>\n/// Data asset for the struct to hold the mapping data between a View and its ViewModel.\n/// </summary>\n" },
#endif
		{ "ModuleRelativePath", "Public/Utilities/ViewModelMapping.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<summary>\nData asset for the struct to hold the mapping data between a View and its ViewModel.\n</summary>" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ViewClass_MetaData[] = {
		{ "Category", "ViewModelMappingData" },
		{ "ModuleRelativePath", "Public/Utilities/ViewModelMapping.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ViewModelClass_MetaData[] = {
		{ "Category", "ViewModelMappingData" },
		{ "ModuleRelativePath", "Public/Utilities/ViewModelMapping.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ViewClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ViewModelClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FViewModelMappingData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FViewModelMappingData_Statics::NewProp_ViewClass = { "ViewClass", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FViewModelMappingData, ViewClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UBaseUIView_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ViewClass_MetaData), NewProp_ViewClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FViewModelMappingData_Statics::NewProp_ViewModelClass = { "ViewModelClass", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FViewModelMappingData, ViewModelClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UBaseUIViewModel_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ViewModelClass_MetaData), NewProp_ViewModelClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FViewModelMappingData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FViewModelMappingData_Statics::NewProp_ViewClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FViewModelMappingData_Statics::NewProp_ViewModelClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FViewModelMappingData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FViewModelMappingData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DataDrivenUI,
	nullptr,
	&NewStructOps,
	"ViewModelMappingData",
	Z_Construct_UScriptStruct_FViewModelMappingData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FViewModelMappingData_Statics::PropPointers),
	sizeof(FViewModelMappingData),
	alignof(FViewModelMappingData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FViewModelMappingData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FViewModelMappingData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FViewModelMappingData()
{
	if (!Z_Registration_Info_UScriptStruct_ViewModelMappingData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ViewModelMappingData.InnerSingleton, Z_Construct_UScriptStruct_FViewModelMappingData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ViewModelMappingData.InnerSingleton;
}
// End ScriptStruct FViewModelMappingData

// Begin Class UViewModelMapping
void UViewModelMapping::StaticRegisterNativesUViewModelMapping()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UViewModelMapping);
UClass* Z_Construct_UClass_UViewModelMapping_NoRegister()
{
	return UViewModelMapping::StaticClass();
}
struct Z_Construct_UClass_UViewModelMapping_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Utilities/ViewModelMapping.h" },
		{ "ModuleRelativePath", "Public/Utilities/ViewModelMapping.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MappingData_MetaData[] = {
		{ "Category", "ViewModelMapping" },
		{ "ModuleRelativePath", "Public/Utilities/ViewModelMapping.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_MappingData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MappingData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UViewModelMapping>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UViewModelMapping_Statics::NewProp_MappingData_Inner = { "MappingData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FViewModelMappingData, METADATA_PARAMS(0, nullptr) }; // 2384740862
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UViewModelMapping_Statics::NewProp_MappingData = { "MappingData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UViewModelMapping, MappingData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MappingData_MetaData), NewProp_MappingData_MetaData) }; // 2384740862
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UViewModelMapping_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UViewModelMapping_Statics::NewProp_MappingData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UViewModelMapping_Statics::NewProp_MappingData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UViewModelMapping_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UViewModelMapping_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_DataDrivenUI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UViewModelMapping_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UViewModelMapping_Statics::ClassParams = {
	&UViewModelMapping::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UViewModelMapping_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UViewModelMapping_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UViewModelMapping_Statics::Class_MetaDataParams), Z_Construct_UClass_UViewModelMapping_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UViewModelMapping()
{
	if (!Z_Registration_Info_UClass_UViewModelMapping.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UViewModelMapping.OuterSingleton, Z_Construct_UClass_UViewModelMapping_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UViewModelMapping.OuterSingleton;
}
template<> DATADRIVENUI_API UClass* StaticClass<UViewModelMapping>()
{
	return UViewModelMapping::StaticClass();
}
UViewModelMapping::UViewModelMapping(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UViewModelMapping);
UViewModelMapping::~UViewModelMapping() {}
// End Class UViewModelMapping

// Begin Registration
struct Z_CompiledInDeferFile_FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_Utilities_ViewModelMapping_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FViewModelMappingData::StaticStruct, Z_Construct_UScriptStruct_FViewModelMappingData_Statics::NewStructOps, TEXT("ViewModelMappingData"), &Z_Registration_Info_UScriptStruct_ViewModelMappingData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FViewModelMappingData), 2384740862U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UViewModelMapping, UViewModelMapping::StaticClass, TEXT("UViewModelMapping"), &Z_Registration_Info_UClass_UViewModelMapping, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UViewModelMapping), 1913550848U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_Utilities_ViewModelMapping_h_597627612(TEXT("/Script/DataDrivenUI"),
	Z_CompiledInDeferFile_FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_Utilities_ViewModelMapping_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_Utilities_ViewModelMapping_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_Utilities_ViewModelMapping_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_Utilities_ViewModelMapping_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
