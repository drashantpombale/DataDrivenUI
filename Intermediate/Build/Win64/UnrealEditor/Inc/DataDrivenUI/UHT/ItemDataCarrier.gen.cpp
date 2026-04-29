// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DataDrivenUI/Public/Examples/ItemDataCarrier.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItemDataCarrier() {}

// Begin Cross Module References
DATADRIVENUI_API UClass* Z_Construct_UClass_UBaseDataCarrier();
DATADRIVENUI_API UClass* Z_Construct_UClass_UItemDataCarrier();
DATADRIVENUI_API UClass* Z_Construct_UClass_UItemDataCarrier_NoRegister();
UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
UPackage* Z_Construct_UPackage__Script_DataDrivenUI();
// End Cross Module References

// Begin Class UItemDataCarrier Function GetData
struct Z_Construct_UFunction_UItemDataCarrier_GetData_Statics
{
	struct ItemDataCarrier_eventGetData_Parms
	{
		UImage* OutImage;
		FString OutItemname;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Examples/ItemDataCarrier.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutImage_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OutImage;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutItemname;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UItemDataCarrier_GetData_Statics::NewProp_OutImage = { "OutImage", nullptr, (EPropertyFlags)0x0010000000080180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemDataCarrier_eventGetData_Parms, OutImage), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutImage_MetaData), NewProp_OutImage_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UItemDataCarrier_GetData_Statics::NewProp_OutItemname = { "OutItemname", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemDataCarrier_eventGetData_Parms, OutItemname), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemDataCarrier_GetData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemDataCarrier_GetData_Statics::NewProp_OutImage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemDataCarrier_GetData_Statics::NewProp_OutItemname,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemDataCarrier_GetData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemDataCarrier_GetData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemDataCarrier, nullptr, "GetData", nullptr, nullptr, Z_Construct_UFunction_UItemDataCarrier_GetData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemDataCarrier_GetData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItemDataCarrier_GetData_Statics::ItemDataCarrier_eventGetData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemDataCarrier_GetData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemDataCarrier_GetData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UItemDataCarrier_GetData_Statics::ItemDataCarrier_eventGetData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UItemDataCarrier_GetData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemDataCarrier_GetData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItemDataCarrier::execGetData)
{
	P_GET_OBJECT_REF(UImage,Z_Param_Out_OutImage);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutItemname);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetData(P_ARG_GC_BARRIER(Z_Param_Out_OutImage),Z_Param_Out_OutItemname);
	P_NATIVE_END;
}
// End Class UItemDataCarrier Function GetData

// Begin Class UItemDataCarrier Function SetData
struct Z_Construct_UFunction_UItemDataCarrier_SetData_Statics
{
	struct ItemDataCarrier_eventSetData_Parms
	{
		UImage* image;
		FString name;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Examples/ItemDataCarrier.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_image_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_image;
	static const UECodeGen_Private::FStrPropertyParams NewProp_name;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UItemDataCarrier_SetData_Statics::NewProp_image = { "image", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemDataCarrier_eventSetData_Parms, image), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_image_MetaData), NewProp_image_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UItemDataCarrier_SetData_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemDataCarrier_eventSetData_Parms, name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemDataCarrier_SetData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemDataCarrier_SetData_Statics::NewProp_image,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemDataCarrier_SetData_Statics::NewProp_name,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemDataCarrier_SetData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemDataCarrier_SetData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemDataCarrier, nullptr, "SetData", nullptr, nullptr, Z_Construct_UFunction_UItemDataCarrier_SetData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemDataCarrier_SetData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItemDataCarrier_SetData_Statics::ItemDataCarrier_eventSetData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemDataCarrier_SetData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemDataCarrier_SetData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UItemDataCarrier_SetData_Statics::ItemDataCarrier_eventSetData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UItemDataCarrier_SetData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemDataCarrier_SetData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItemDataCarrier::execSetData)
{
	P_GET_OBJECT(UImage,Z_Param_image);
	P_GET_PROPERTY(FStrProperty,Z_Param_name);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetData(Z_Param_image,Z_Param_name);
	P_NATIVE_END;
}
// End Class UItemDataCarrier Function SetData

// Begin Class UItemDataCarrier
void UItemDataCarrier::StaticRegisterNativesUItemDataCarrier()
{
	UClass* Class = UItemDataCarrier::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetData", &UItemDataCarrier::execGetData },
		{ "SetData", &UItemDataCarrier::execSetData },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UItemDataCarrier);
UClass* Z_Construct_UClass_UItemDataCarrier_NoRegister()
{
	return UItemDataCarrier::StaticClass();
}
struct Z_Construct_UClass_UItemDataCarrier_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Examples/ItemDataCarrier.h" },
		{ "ModuleRelativePath", "Public/Examples/ItemDataCarrier.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UItemDataCarrier_GetData, "GetData" }, // 800743762
		{ &Z_Construct_UFunction_UItemDataCarrier_SetData, "SetData" }, // 3105277471
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UItemDataCarrier>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UItemDataCarrier_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBaseDataCarrier,
	(UObject* (*)())Z_Construct_UPackage__Script_DataDrivenUI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UItemDataCarrier_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UItemDataCarrier_Statics::ClassParams = {
	&UItemDataCarrier::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UItemDataCarrier_Statics::Class_MetaDataParams), Z_Construct_UClass_UItemDataCarrier_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UItemDataCarrier()
{
	if (!Z_Registration_Info_UClass_UItemDataCarrier.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UItemDataCarrier.OuterSingleton, Z_Construct_UClass_UItemDataCarrier_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UItemDataCarrier.OuterSingleton;
}
template<> DATADRIVENUI_API UClass* StaticClass<UItemDataCarrier>()
{
	return UItemDataCarrier::StaticClass();
}
UItemDataCarrier::UItemDataCarrier(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UItemDataCarrier);
UItemDataCarrier::~UItemDataCarrier() {}
// End Class UItemDataCarrier

// Begin Registration
struct Z_CompiledInDeferFile_FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_Examples_ItemDataCarrier_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UItemDataCarrier, UItemDataCarrier::StaticClass, TEXT("UItemDataCarrier"), &Z_Registration_Info_UClass_UItemDataCarrier, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UItemDataCarrier), 500970517U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_Examples_ItemDataCarrier_h_1843562427(TEXT("/Script/DataDrivenUI"),
	Z_CompiledInDeferFile_FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_Examples_ItemDataCarrier_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_Examples_ItemDataCarrier_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
