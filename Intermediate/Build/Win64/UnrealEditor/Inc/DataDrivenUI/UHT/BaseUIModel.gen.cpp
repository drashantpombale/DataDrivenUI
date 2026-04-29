// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DataDrivenUI/Public/Models/BaseUIModel.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseUIModel() {}

// Begin Cross Module References
DATADRIVENUI_API UClass* Z_Construct_UClass_UBaseUIModel();
DATADRIVENUI_API UClass* Z_Construct_UClass_UBaseUIModel_NoRegister();
DATADRIVENUI_API UClass* Z_Construct_UClass_UUIModel_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
UPackage* Z_Construct_UPackage__Script_DataDrivenUI();
// End Cross Module References

// Begin Class UBaseUIModel
void UBaseUIModel::StaticRegisterNativesUBaseUIModel()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBaseUIModel);
UClass* Z_Construct_UClass_UBaseUIModel_NoRegister()
{
	return UBaseUIModel::StaticClass();
}
struct Z_Construct_UClass_UBaseUIModel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// <summary>\n/// Author: Prashant D\n/// Description: Base class for creating UI Models, this is a generic class that has the functionality required for most of the models, in case of \n/// models that need some additional funcationality please create a new class inheriting the IUIModel interface\n/// </summary>\n" },
#endif
		{ "IncludePath", "Models/BaseUIModel.h" },
		{ "ModuleRelativePath", "Public/Models/BaseUIModel.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<summary>\nAuthor: Prashant D\nDescription: Base class for creating UI Models, this is a generic class that has the functionality required for most of the models, in case of\nmodels that need some additional funcationality please create a new class inheriting the IUIModel interface\n</summary>" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseUIModel>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBaseUIModel_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_DataDrivenUI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseUIModel_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UBaseUIModel_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UUIModel_NoRegister, (int32)VTABLE_OFFSET(UBaseUIModel, IUIModel), false },  // 569463938
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBaseUIModel_Statics::ClassParams = {
	&UBaseUIModel::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	UE_ARRAY_COUNT(InterfaceParams),
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseUIModel_Statics::Class_MetaDataParams), Z_Construct_UClass_UBaseUIModel_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBaseUIModel()
{
	if (!Z_Registration_Info_UClass_UBaseUIModel.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBaseUIModel.OuterSingleton, Z_Construct_UClass_UBaseUIModel_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBaseUIModel.OuterSingleton;
}
template<> DATADRIVENUI_API UClass* StaticClass<UBaseUIModel>()
{
	return UBaseUIModel::StaticClass();
}
UBaseUIModel::UBaseUIModel(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseUIModel);
UBaseUIModel::~UBaseUIModel() {}
// End Class UBaseUIModel

// Begin Registration
struct Z_CompiledInDeferFile_FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_Models_BaseUIModel_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBaseUIModel, UBaseUIModel::StaticClass, TEXT("UBaseUIModel"), &Z_Registration_Info_UClass_UBaseUIModel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBaseUIModel), 3241642175U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_Models_BaseUIModel_h_1599816057(TEXT("/Script/DataDrivenUI"),
	Z_CompiledInDeferFile_FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_Models_BaseUIModel_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_Models_BaseUIModel_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
