// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DataDrivenUI/Public/DataCarrier/IntDataCarrier.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIntDataCarrier() {}

// Begin Cross Module References
DATADRIVENUI_API UClass* Z_Construct_UClass_UBaseDataCarrier();
DATADRIVENUI_API UClass* Z_Construct_UClass_UIntDataCarrier();
DATADRIVENUI_API UClass* Z_Construct_UClass_UIntDataCarrier_NoRegister();
UPackage* Z_Construct_UPackage__Script_DataDrivenUI();
// End Cross Module References

// Begin Class UIntDataCarrier Function GetData
struct Z_Construct_UFunction_UIntDataCarrier_GetData_Statics
{
	struct IntDataCarrier_eventGetData_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DataCarrier/IntDataCarrier.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIntDataCarrier_GetData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IntDataCarrier_eventGetData_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIntDataCarrier_GetData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIntDataCarrier_GetData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIntDataCarrier_GetData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIntDataCarrier_GetData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIntDataCarrier, nullptr, "GetData", nullptr, nullptr, Z_Construct_UFunction_UIntDataCarrier_GetData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIntDataCarrier_GetData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIntDataCarrier_GetData_Statics::IntDataCarrier_eventGetData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIntDataCarrier_GetData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIntDataCarrier_GetData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UIntDataCarrier_GetData_Statics::IntDataCarrier_eventGetData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIntDataCarrier_GetData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIntDataCarrier_GetData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIntDataCarrier::execGetData)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetData();
	P_NATIVE_END;
}
// End Class UIntDataCarrier Function GetData

// Begin Class UIntDataCarrier Function SetData
struct Z_Construct_UFunction_UIntDataCarrier_SetData_Statics
{
	struct IntDataCarrier_eventSetData_Parms
	{
		int32 val;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DataCarrier/IntDataCarrier.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_val;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIntDataCarrier_SetData_Statics::NewProp_val = { "val", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IntDataCarrier_eventSetData_Parms, val), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIntDataCarrier_SetData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIntDataCarrier_SetData_Statics::NewProp_val,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIntDataCarrier_SetData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIntDataCarrier_SetData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIntDataCarrier, nullptr, "SetData", nullptr, nullptr, Z_Construct_UFunction_UIntDataCarrier_SetData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIntDataCarrier_SetData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIntDataCarrier_SetData_Statics::IntDataCarrier_eventSetData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIntDataCarrier_SetData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIntDataCarrier_SetData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UIntDataCarrier_SetData_Statics::IntDataCarrier_eventSetData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIntDataCarrier_SetData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIntDataCarrier_SetData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIntDataCarrier::execSetData)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_val);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetData(Z_Param_val);
	P_NATIVE_END;
}
// End Class UIntDataCarrier Function SetData

// Begin Class UIntDataCarrier
void UIntDataCarrier::StaticRegisterNativesUIntDataCarrier()
{
	UClass* Class = UIntDataCarrier::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetData", &UIntDataCarrier::execGetData },
		{ "SetData", &UIntDataCarrier::execSetData },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIntDataCarrier);
UClass* Z_Construct_UClass_UIntDataCarrier_NoRegister()
{
	return UIntDataCarrier::StaticClass();
}
struct Z_Construct_UClass_UIntDataCarrier_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// <summary>\n/// Author: Prashant D\n/// Description: Base class for data carriers that hold an integer value.\n/// </summary>\n" },
#endif
		{ "IncludePath", "DataCarrier/IntDataCarrier.h" },
		{ "ModuleRelativePath", "Public/DataCarrier/IntDataCarrier.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<summary>\nAuthor: Prashant D\nDescription: Base class for data carriers that hold an integer value.\n</summary>" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UIntDataCarrier_GetData, "GetData" }, // 1251846774
		{ &Z_Construct_UFunction_UIntDataCarrier_SetData, "SetData" }, // 84315817
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIntDataCarrier>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UIntDataCarrier_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBaseDataCarrier,
	(UObject* (*)())Z_Construct_UPackage__Script_DataDrivenUI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIntDataCarrier_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIntDataCarrier_Statics::ClassParams = {
	&UIntDataCarrier::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIntDataCarrier_Statics::Class_MetaDataParams), Z_Construct_UClass_UIntDataCarrier_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIntDataCarrier()
{
	if (!Z_Registration_Info_UClass_UIntDataCarrier.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIntDataCarrier.OuterSingleton, Z_Construct_UClass_UIntDataCarrier_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIntDataCarrier.OuterSingleton;
}
template<> DATADRIVENUI_API UClass* StaticClass<UIntDataCarrier>()
{
	return UIntDataCarrier::StaticClass();
}
UIntDataCarrier::UIntDataCarrier(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIntDataCarrier);
UIntDataCarrier::~UIntDataCarrier() {}
// End Class UIntDataCarrier

// Begin Registration
struct Z_CompiledInDeferFile_FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_DataCarrier_IntDataCarrier_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIntDataCarrier, UIntDataCarrier::StaticClass, TEXT("UIntDataCarrier"), &Z_Registration_Info_UClass_UIntDataCarrier, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIntDataCarrier), 3556616852U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_DataCarrier_IntDataCarrier_h_2161786103(TEXT("/Script/DataDrivenUI"),
	Z_CompiledInDeferFile_FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_DataCarrier_IntDataCarrier_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_DataCarrier_IntDataCarrier_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
