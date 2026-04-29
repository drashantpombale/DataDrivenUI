// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DataDrivenUI/Public/Utilities/UViewModelFactory.h"
#include "Runtime/Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUViewModelFactory() {}

// Begin Cross Module References
DATADRIVENUI_API UClass* Z_Construct_UClass_UUIFactory_NoRegister();
DATADRIVENUI_API UClass* Z_Construct_UClass_UUViewModelFactory();
DATADRIVENUI_API UClass* Z_Construct_UClass_UUViewModelFactory_NoRegister();
DATADRIVENUI_API UClass* Z_Construct_UClass_UViewModelMapping_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
UPackage* Z_Construct_UPackage__Script_DataDrivenUI();
// End Cross Module References

// Begin Class UUViewModelFactory
void UUViewModelFactory::StaticRegisterNativesUUViewModelFactory()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUViewModelFactory);
UClass* Z_Construct_UClass_UUViewModelFactory_NoRegister()
{
	return UUViewModelFactory::StaticClass();
}
struct Z_Construct_UClass_UUViewModelFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// <summary>\n/// Base factory for creating view models for respective views.\n/// </summary>\n" },
#endif
		{ "IncludePath", "Utilities/UViewModelFactory.h" },
		{ "ModuleRelativePath", "Public/Utilities/UViewModelFactory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<summary>\nBase factory for creating view models for respective views.\n</summary>" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ViewModelMappings_MetaData[] = {
		{ "Category", "Factory" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// <summary>\n/// Pointer to the data asset that holds the mappings between views and view models.\n/// </summary>\n" },
#endif
		{ "ModuleRelativePath", "Public/Utilities/UViewModelFactory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<summary>\nPointer to the data asset that holds the mappings between views and view models.\n</summary>" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ViewModelMappings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUViewModelFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUViewModelFactory_Statics::NewProp_ViewModelMappings = { "ViewModelMappings", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUViewModelFactory, ViewModelMappings), Z_Construct_UClass_UViewModelMapping_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ViewModelMappings_MetaData), NewProp_ViewModelMappings_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUViewModelFactory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUViewModelFactory_Statics::NewProp_ViewModelMappings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUViewModelFactory_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UUViewModelFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_DataDrivenUI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUViewModelFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UUViewModelFactory_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UUIFactory_NoRegister, (int32)VTABLE_OFFSET(UUViewModelFactory, IUIFactory), false },  // 1324496601
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UUViewModelFactory_Statics::ClassParams = {
	&UUViewModelFactory::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UUViewModelFactory_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UUViewModelFactory_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUViewModelFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UUViewModelFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UUViewModelFactory()
{
	if (!Z_Registration_Info_UClass_UUViewModelFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUViewModelFactory.OuterSingleton, Z_Construct_UClass_UUViewModelFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UUViewModelFactory.OuterSingleton;
}
template<> DATADRIVENUI_API UClass* StaticClass<UUViewModelFactory>()
{
	return UUViewModelFactory::StaticClass();
}
UUViewModelFactory::UUViewModelFactory() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UUViewModelFactory);
UUViewModelFactory::~UUViewModelFactory() {}
// End Class UUViewModelFactory

// Begin Registration
struct Z_CompiledInDeferFile_FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_Utilities_UViewModelFactory_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UUViewModelFactory, UUViewModelFactory::StaticClass, TEXT("UUViewModelFactory"), &Z_Registration_Info_UClass_UUViewModelFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUViewModelFactory), 1424858428U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_Utilities_UViewModelFactory_h_3534138463(TEXT("/Script/DataDrivenUI"),
	Z_CompiledInDeferFile_FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_Utilities_UViewModelFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_Utilities_UViewModelFactory_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
