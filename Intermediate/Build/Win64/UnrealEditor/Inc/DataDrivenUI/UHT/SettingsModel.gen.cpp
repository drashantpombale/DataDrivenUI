// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DataDrivenUI/Public/Examples/SettingsModel.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSettingsModel() {}

// Begin Cross Module References
DATADRIVENUI_API UClass* Z_Construct_UClass_UBaseUIModel();
DATADRIVENUI_API UClass* Z_Construct_UClass_USettingsModel();
DATADRIVENUI_API UClass* Z_Construct_UClass_USettingsModel_NoRegister();
UPackage* Z_Construct_UPackage__Script_DataDrivenUI();
// End Cross Module References

// Begin Class USettingsModel
void USettingsModel::StaticRegisterNativesUSettingsModel()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USettingsModel);
UClass* Z_Construct_UClass_USettingsModel_NoRegister()
{
	return USettingsModel::StaticClass();
}
struct Z_Construct_UClass_USettingsModel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Examples/SettingsModel.h" },
		{ "ModuleRelativePath", "Public/Examples/SettingsModel.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USettingsModel>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USettingsModel_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBaseUIModel,
	(UObject* (*)())Z_Construct_UPackage__Script_DataDrivenUI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USettingsModel_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USettingsModel_Statics::ClassParams = {
	&USettingsModel::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USettingsModel_Statics::Class_MetaDataParams), Z_Construct_UClass_USettingsModel_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USettingsModel()
{
	if (!Z_Registration_Info_UClass_USettingsModel.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USettingsModel.OuterSingleton, Z_Construct_UClass_USettingsModel_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USettingsModel.OuterSingleton;
}
template<> DATADRIVENUI_API UClass* StaticClass<USettingsModel>()
{
	return USettingsModel::StaticClass();
}
USettingsModel::USettingsModel(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USettingsModel);
USettingsModel::~USettingsModel() {}
// End Class USettingsModel

// Begin Registration
struct Z_CompiledInDeferFile_FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_Examples_SettingsModel_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USettingsModel, USettingsModel::StaticClass, TEXT("USettingsModel"), &Z_Registration_Info_UClass_USettingsModel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USettingsModel), 2224358688U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_Examples_SettingsModel_h_3228808204(TEXT("/Script/DataDrivenUI"),
	Z_CompiledInDeferFile_FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_Examples_SettingsModel_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_Examples_SettingsModel_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
