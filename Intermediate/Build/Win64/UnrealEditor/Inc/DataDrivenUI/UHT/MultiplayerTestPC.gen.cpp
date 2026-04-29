// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DataDrivenUI/Public/Examples/MultiplayerTestPC.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMultiplayerTestPC() {}

// Begin Cross Module References
DATADRIVENUI_API UClass* Z_Construct_UClass_AMultiplayerTestPC();
DATADRIVENUI_API UClass* Z_Construct_UClass_AMultiplayerTestPC_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_DataDrivenUI();
// End Cross Module References

// Begin Class AMultiplayerTestPC
void AMultiplayerTestPC::StaticRegisterNativesAMultiplayerTestPC()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMultiplayerTestPC);
UClass* Z_Construct_UClass_AMultiplayerTestPC_NoRegister()
{
	return AMultiplayerTestPC::StaticClass();
}
struct Z_Construct_UClass_AMultiplayerTestPC_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Examples/MultiplayerTestPC.h" },
		{ "ModuleRelativePath", "Public/Examples/MultiplayerTestPC.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitialUIClass_MetaData[] = {
		{ "Category", "MultiplayerTestPC" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Examples/MultiplayerTestPC.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InitialUIClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMultiplayerTestPC>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerTestPC_Statics::NewProp_InitialUIClass = { "InitialUIClass", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerTestPC, InitialUIClass), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitialUIClass_MetaData), NewProp_InitialUIClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMultiplayerTestPC_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerTestPC_Statics::NewProp_InitialUIClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMultiplayerTestPC_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMultiplayerTestPC_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_DataDrivenUI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMultiplayerTestPC_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMultiplayerTestPC_Statics::ClassParams = {
	&AMultiplayerTestPC::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AMultiplayerTestPC_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AMultiplayerTestPC_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMultiplayerTestPC_Statics::Class_MetaDataParams), Z_Construct_UClass_AMultiplayerTestPC_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMultiplayerTestPC()
{
	if (!Z_Registration_Info_UClass_AMultiplayerTestPC.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMultiplayerTestPC.OuterSingleton, Z_Construct_UClass_AMultiplayerTestPC_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMultiplayerTestPC.OuterSingleton;
}
template<> DATADRIVENUI_API UClass* StaticClass<AMultiplayerTestPC>()
{
	return AMultiplayerTestPC::StaticClass();
}
AMultiplayerTestPC::AMultiplayerTestPC(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMultiplayerTestPC);
AMultiplayerTestPC::~AMultiplayerTestPC() {}
// End Class AMultiplayerTestPC

// Begin Registration
struct Z_CompiledInDeferFile_FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_Examples_MultiplayerTestPC_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMultiplayerTestPC, AMultiplayerTestPC::StaticClass, TEXT("AMultiplayerTestPC"), &Z_Registration_Info_UClass_AMultiplayerTestPC, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMultiplayerTestPC), 3132767756U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_Examples_MultiplayerTestPC_h_1024378272(TEXT("/Script/DataDrivenUI"),
	Z_CompiledInDeferFile_FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_Examples_MultiplayerTestPC_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_Examples_MultiplayerTestPC_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
