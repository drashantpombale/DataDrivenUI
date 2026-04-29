// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DataDrivenUI/Public/DataCarrier/FloatDataCarrier.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFloatDataCarrier() {}

// Begin Cross Module References
DATADRIVENUI_API UClass* Z_Construct_UClass_UBaseDataCarrier();
DATADRIVENUI_API UClass* Z_Construct_UClass_UFloatDataCarrier();
DATADRIVENUI_API UClass* Z_Construct_UClass_UFloatDataCarrier_NoRegister();
UPackage* Z_Construct_UPackage__Script_DataDrivenUI();
// End Cross Module References

// Begin Class UFloatDataCarrier Function GetData
struct Z_Construct_UFunction_UFloatDataCarrier_GetData_Statics
{
	struct FloatDataCarrier_eventGetData_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DataCarrier/FloatDataCarrier.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFloatDataCarrier_GetData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FloatDataCarrier_eventGetData_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFloatDataCarrier_GetData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFloatDataCarrier_GetData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFloatDataCarrier_GetData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFloatDataCarrier_GetData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFloatDataCarrier, nullptr, "GetData", nullptr, nullptr, Z_Construct_UFunction_UFloatDataCarrier_GetData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFloatDataCarrier_GetData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFloatDataCarrier_GetData_Statics::FloatDataCarrier_eventGetData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFloatDataCarrier_GetData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFloatDataCarrier_GetData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFloatDataCarrier_GetData_Statics::FloatDataCarrier_eventGetData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFloatDataCarrier_GetData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFloatDataCarrier_GetData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFloatDataCarrier::execGetData)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetData();
	P_NATIVE_END;
}
// End Class UFloatDataCarrier Function GetData

// Begin Class UFloatDataCarrier Function SetData
struct Z_Construct_UFunction_UFloatDataCarrier_SetData_Statics
{
	struct FloatDataCarrier_eventSetData_Parms
	{
		float val;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DataCarrier/FloatDataCarrier.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_val;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFloatDataCarrier_SetData_Statics::NewProp_val = { "val", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FloatDataCarrier_eventSetData_Parms, val), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFloatDataCarrier_SetData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFloatDataCarrier_SetData_Statics::NewProp_val,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFloatDataCarrier_SetData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFloatDataCarrier_SetData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFloatDataCarrier, nullptr, "SetData", nullptr, nullptr, Z_Construct_UFunction_UFloatDataCarrier_SetData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFloatDataCarrier_SetData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFloatDataCarrier_SetData_Statics::FloatDataCarrier_eventSetData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFloatDataCarrier_SetData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFloatDataCarrier_SetData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFloatDataCarrier_SetData_Statics::FloatDataCarrier_eventSetData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFloatDataCarrier_SetData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFloatDataCarrier_SetData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFloatDataCarrier::execSetData)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_val);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetData(Z_Param_val);
	P_NATIVE_END;
}
// End Class UFloatDataCarrier Function SetData

// Begin Class UFloatDataCarrier
void UFloatDataCarrier::StaticRegisterNativesUFloatDataCarrier()
{
	UClass* Class = UFloatDataCarrier::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetData", &UFloatDataCarrier::execGetData },
		{ "SetData", &UFloatDataCarrier::execSetData },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFloatDataCarrier);
UClass* Z_Construct_UClass_UFloatDataCarrier_NoRegister()
{
	return UFloatDataCarrier::StaticClass();
}
struct Z_Construct_UClass_UFloatDataCarrier_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// <summary>\n/// Author: Prashant D\n/// Description: Base class for data carriers that hold a float value.\n/// </summary>\n" },
#endif
		{ "IncludePath", "DataCarrier/FloatDataCarrier.h" },
		{ "ModuleRelativePath", "Public/DataCarrier/FloatDataCarrier.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<summary>\nAuthor: Prashant D\nDescription: Base class for data carriers that hold a float value.\n</summary>" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UFloatDataCarrier_GetData, "GetData" }, // 806162597
		{ &Z_Construct_UFunction_UFloatDataCarrier_SetData, "SetData" }, // 2998888494
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFloatDataCarrier>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UFloatDataCarrier_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBaseDataCarrier,
	(UObject* (*)())Z_Construct_UPackage__Script_DataDrivenUI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFloatDataCarrier_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFloatDataCarrier_Statics::ClassParams = {
	&UFloatDataCarrier::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFloatDataCarrier_Statics::Class_MetaDataParams), Z_Construct_UClass_UFloatDataCarrier_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFloatDataCarrier()
{
	if (!Z_Registration_Info_UClass_UFloatDataCarrier.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFloatDataCarrier.OuterSingleton, Z_Construct_UClass_UFloatDataCarrier_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFloatDataCarrier.OuterSingleton;
}
template<> DATADRIVENUI_API UClass* StaticClass<UFloatDataCarrier>()
{
	return UFloatDataCarrier::StaticClass();
}
UFloatDataCarrier::UFloatDataCarrier(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFloatDataCarrier);
UFloatDataCarrier::~UFloatDataCarrier() {}
// End Class UFloatDataCarrier

// Begin Registration
struct Z_CompiledInDeferFile_FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_DataCarrier_FloatDataCarrier_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFloatDataCarrier, UFloatDataCarrier::StaticClass, TEXT("UFloatDataCarrier"), &Z_Registration_Info_UClass_UFloatDataCarrier, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFloatDataCarrier), 2761232621U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_DataCarrier_FloatDataCarrier_h_3441097962(TEXT("/Script/DataDrivenUI"),
	Z_CompiledInDeferFile_FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_DataCarrier_FloatDataCarrier_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_DataCarrier_FloatDataCarrier_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
