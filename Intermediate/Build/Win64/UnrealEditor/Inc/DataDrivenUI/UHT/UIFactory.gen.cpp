// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DataDrivenUI/Public/Interfaces/UIFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUIFactory() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
DATADRIVENUI_API UClass* Z_Construct_UClass_UUIFactory();
DATADRIVENUI_API UClass* Z_Construct_UClass_UUIFactory_NoRegister();
UPackage* Z_Construct_UPackage__Script_DataDrivenUI();
// End Cross Module References

// Begin Interface UUIFactory
void UUIFactory::StaticRegisterNativesUUIFactory()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUIFactory);
UClass* Z_Construct_UClass_UUIFactory_NoRegister()
{
	return UUIFactory::StaticClass();
}
struct Z_Construct_UClass_UUIFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interfaces/UIFactory.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IUIFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UUIFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_DataDrivenUI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUIFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UUIFactory_Statics::ClassParams = {
	&UUIFactory::StaticClass,
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
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUIFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UUIFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UUIFactory()
{
	if (!Z_Registration_Info_UClass_UUIFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUIFactory.OuterSingleton, Z_Construct_UClass_UUIFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UUIFactory.OuterSingleton;
}
template<> DATADRIVENUI_API UClass* StaticClass<UUIFactory>()
{
	return UUIFactory::StaticClass();
}
UUIFactory::UUIFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UUIFactory);
UUIFactory::~UUIFactory() {}
// End Interface UUIFactory

// Begin Registration
struct Z_CompiledInDeferFile_FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_Interfaces_UIFactory_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UUIFactory, UUIFactory::StaticClass, TEXT("UUIFactory"), &Z_Registration_Info_UClass_UUIFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUIFactory), 1324496601U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_Interfaces_UIFactory_h_4131788581(TEXT("/Script/DataDrivenUI"),
	Z_CompiledInDeferFile_FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_Interfaces_UIFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_Interfaces_UIFactory_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
