// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DataDrivenUI/Public/DataCarrier/StringDataCarrier.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStringDataCarrier() {}

// Begin Cross Module References
DATADRIVENUI_API UClass* Z_Construct_UClass_UBaseDataCarrier();
DATADRIVENUI_API UClass* Z_Construct_UClass_UStringDataCarrier();
DATADRIVENUI_API UClass* Z_Construct_UClass_UStringDataCarrier_NoRegister();
UPackage* Z_Construct_UPackage__Script_DataDrivenUI();
// End Cross Module References

// Begin Class UStringDataCarrier Function GetData
struct Z_Construct_UFunction_UStringDataCarrier_GetData_Statics
{
	struct StringDataCarrier_eventGetData_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DataCarrier/StringDataCarrier.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStringDataCarrier_GetData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StringDataCarrier_eventGetData_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStringDataCarrier_GetData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStringDataCarrier_GetData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStringDataCarrier_GetData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStringDataCarrier_GetData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStringDataCarrier, nullptr, "GetData", nullptr, nullptr, Z_Construct_UFunction_UStringDataCarrier_GetData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStringDataCarrier_GetData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStringDataCarrier_GetData_Statics::StringDataCarrier_eventGetData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStringDataCarrier_GetData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStringDataCarrier_GetData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UStringDataCarrier_GetData_Statics::StringDataCarrier_eventGetData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStringDataCarrier_GetData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStringDataCarrier_GetData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStringDataCarrier::execGetData)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetData();
	P_NATIVE_END;
}
// End Class UStringDataCarrier Function GetData

// Begin Class UStringDataCarrier Function SetData
struct Z_Construct_UFunction_UStringDataCarrier_SetData_Statics
{
	struct StringDataCarrier_eventSetData_Parms
	{
		FString val;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DataCarrier/StringDataCarrier.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_val;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStringDataCarrier_SetData_Statics::NewProp_val = { "val", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StringDataCarrier_eventSetData_Parms, val), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStringDataCarrier_SetData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStringDataCarrier_SetData_Statics::NewProp_val,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStringDataCarrier_SetData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStringDataCarrier_SetData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStringDataCarrier, nullptr, "SetData", nullptr, nullptr, Z_Construct_UFunction_UStringDataCarrier_SetData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStringDataCarrier_SetData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStringDataCarrier_SetData_Statics::StringDataCarrier_eventSetData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStringDataCarrier_SetData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStringDataCarrier_SetData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UStringDataCarrier_SetData_Statics::StringDataCarrier_eventSetData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStringDataCarrier_SetData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStringDataCarrier_SetData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStringDataCarrier::execSetData)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_val);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetData(Z_Param_val);
	P_NATIVE_END;
}
// End Class UStringDataCarrier Function SetData

// Begin Class UStringDataCarrier
void UStringDataCarrier::StaticRegisterNativesUStringDataCarrier()
{
	UClass* Class = UStringDataCarrier::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetData", &UStringDataCarrier::execGetData },
		{ "SetData", &UStringDataCarrier::execSetData },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStringDataCarrier);
UClass* Z_Construct_UClass_UStringDataCarrier_NoRegister()
{
	return UStringDataCarrier::StaticClass();
}
struct Z_Construct_UClass_UStringDataCarrier_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// <summary>\n/// Author: Prashant D\n/// Description: Base class for data carriers that hold an string value.\n/// </summary>\n" },
#endif
		{ "IncludePath", "DataCarrier/StringDataCarrier.h" },
		{ "ModuleRelativePath", "Public/DataCarrier/StringDataCarrier.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<summary>\nAuthor: Prashant D\nDescription: Base class for data carriers that hold an string value.\n</summary>" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UStringDataCarrier_GetData, "GetData" }, // 2545224125
		{ &Z_Construct_UFunction_UStringDataCarrier_SetData, "SetData" }, // 227695723
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStringDataCarrier>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UStringDataCarrier_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBaseDataCarrier,
	(UObject* (*)())Z_Construct_UPackage__Script_DataDrivenUI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStringDataCarrier_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UStringDataCarrier_Statics::ClassParams = {
	&UStringDataCarrier::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStringDataCarrier_Statics::Class_MetaDataParams), Z_Construct_UClass_UStringDataCarrier_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UStringDataCarrier()
{
	if (!Z_Registration_Info_UClass_UStringDataCarrier.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStringDataCarrier.OuterSingleton, Z_Construct_UClass_UStringDataCarrier_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UStringDataCarrier.OuterSingleton;
}
template<> DATADRIVENUI_API UClass* StaticClass<UStringDataCarrier>()
{
	return UStringDataCarrier::StaticClass();
}
UStringDataCarrier::UStringDataCarrier(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UStringDataCarrier);
UStringDataCarrier::~UStringDataCarrier() {}
// End Class UStringDataCarrier

// Begin Registration
struct Z_CompiledInDeferFile_FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_DataCarrier_StringDataCarrier_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UStringDataCarrier, UStringDataCarrier::StaticClass, TEXT("UStringDataCarrier"), &Z_Registration_Info_UClass_UStringDataCarrier, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStringDataCarrier), 601232359U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_DataCarrier_StringDataCarrier_h_791454246(TEXT("/Script/DataDrivenUI"),
	Z_CompiledInDeferFile_FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_DataCarrier_StringDataCarrier_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_DataCarrier_StringDataCarrier_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
