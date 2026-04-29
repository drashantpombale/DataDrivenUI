// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DataDrivenUI/Public/DataCarrier/ArrayDataCarrier.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArrayDataCarrier() {}

// Begin Cross Module References
DATADRIVENUI_API UClass* Z_Construct_UClass_UArrayDataCarrier();
DATADRIVENUI_API UClass* Z_Construct_UClass_UArrayDataCarrier_NoRegister();
DATADRIVENUI_API UClass* Z_Construct_UClass_UBaseDataCarrier();
DATADRIVENUI_API UClass* Z_Construct_UClass_UBaseDataCarrier_NoRegister();
UPackage* Z_Construct_UPackage__Script_DataDrivenUI();
// End Cross Module References

// Begin Class UArrayDataCarrier Function GetData
struct Z_Construct_UFunction_UArrayDataCarrier_GetData_Statics
{
	struct ArrayDataCarrier_eventGetData_Parms
	{
		TArray<UBaseDataCarrier*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DataCarrier/ArrayDataCarrier.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UArrayDataCarrier_GetData_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UBaseDataCarrier_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UArrayDataCarrier_GetData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArrayDataCarrier_eventGetData_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArrayDataCarrier_GetData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArrayDataCarrier_GetData_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArrayDataCarrier_GetData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArrayDataCarrier_GetData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArrayDataCarrier_GetData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArrayDataCarrier, nullptr, "GetData", nullptr, nullptr, Z_Construct_UFunction_UArrayDataCarrier_GetData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArrayDataCarrier_GetData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArrayDataCarrier_GetData_Statics::ArrayDataCarrier_eventGetData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArrayDataCarrier_GetData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArrayDataCarrier_GetData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UArrayDataCarrier_GetData_Statics::ArrayDataCarrier_eventGetData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UArrayDataCarrier_GetData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArrayDataCarrier_GetData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UArrayDataCarrier::execGetData)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UBaseDataCarrier*>*)Z_Param__Result=P_THIS->GetData();
	P_NATIVE_END;
}
// End Class UArrayDataCarrier Function GetData

// Begin Class UArrayDataCarrier Function SetData
struct Z_Construct_UFunction_UArrayDataCarrier_SetData_Statics
{
	struct ArrayDataCarrier_eventSetData_Parms
	{
		UBaseDataCarrier* val;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DataCarrier/ArrayDataCarrier.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_val;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UArrayDataCarrier_SetData_Statics::NewProp_val = { "val", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArrayDataCarrier_eventSetData_Parms, val), Z_Construct_UClass_UBaseDataCarrier_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArrayDataCarrier_SetData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArrayDataCarrier_SetData_Statics::NewProp_val,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArrayDataCarrier_SetData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArrayDataCarrier_SetData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArrayDataCarrier, nullptr, "SetData", nullptr, nullptr, Z_Construct_UFunction_UArrayDataCarrier_SetData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArrayDataCarrier_SetData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArrayDataCarrier_SetData_Statics::ArrayDataCarrier_eventSetData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArrayDataCarrier_SetData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArrayDataCarrier_SetData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UArrayDataCarrier_SetData_Statics::ArrayDataCarrier_eventSetData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UArrayDataCarrier_SetData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArrayDataCarrier_SetData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UArrayDataCarrier::execSetData)
{
	P_GET_OBJECT(UBaseDataCarrier,Z_Param_val);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetData(Z_Param_val);
	P_NATIVE_END;
}
// End Class UArrayDataCarrier Function SetData

// Begin Class UArrayDataCarrier
void UArrayDataCarrier::StaticRegisterNativesUArrayDataCarrier()
{
	UClass* Class = UArrayDataCarrier::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetData", &UArrayDataCarrier::execGetData },
		{ "SetData", &UArrayDataCarrier::execSetData },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UArrayDataCarrier);
UClass* Z_Construct_UClass_UArrayDataCarrier_NoRegister()
{
	return UArrayDataCarrier::StaticClass();
}
struct Z_Construct_UClass_UArrayDataCarrier_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// <summary>\n/// Author: Prashant D\n/// Description: Data carrier that holds an array of UBaseDataCarrier objects.\n/// </summary>\n" },
#endif
		{ "IncludePath", "DataCarrier/ArrayDataCarrier.h" },
		{ "ModuleRelativePath", "Public/DataCarrier/ArrayDataCarrier.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<summary>\nAuthor: Prashant D\nDescription: Data carrier that holds an array of UBaseDataCarrier objects.\n</summary>" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UArrayDataCarrier_GetData, "GetData" }, // 2263537466
		{ &Z_Construct_UFunction_UArrayDataCarrier_SetData, "SetData" }, // 3952307133
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UArrayDataCarrier>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UArrayDataCarrier_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBaseDataCarrier,
	(UObject* (*)())Z_Construct_UPackage__Script_DataDrivenUI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UArrayDataCarrier_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UArrayDataCarrier_Statics::ClassParams = {
	&UArrayDataCarrier::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UArrayDataCarrier_Statics::Class_MetaDataParams), Z_Construct_UClass_UArrayDataCarrier_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UArrayDataCarrier()
{
	if (!Z_Registration_Info_UClass_UArrayDataCarrier.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UArrayDataCarrier.OuterSingleton, Z_Construct_UClass_UArrayDataCarrier_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UArrayDataCarrier.OuterSingleton;
}
template<> DATADRIVENUI_API UClass* StaticClass<UArrayDataCarrier>()
{
	return UArrayDataCarrier::StaticClass();
}
UArrayDataCarrier::UArrayDataCarrier(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UArrayDataCarrier);
UArrayDataCarrier::~UArrayDataCarrier() {}
// End Class UArrayDataCarrier

// Begin Registration
struct Z_CompiledInDeferFile_FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_DataCarrier_ArrayDataCarrier_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UArrayDataCarrier, UArrayDataCarrier::StaticClass, TEXT("UArrayDataCarrier"), &Z_Registration_Info_UClass_UArrayDataCarrier, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UArrayDataCarrier), 783068492U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_DataCarrier_ArrayDataCarrier_h_2393283770(TEXT("/Script/DataDrivenUI"),
	Z_CompiledInDeferFile_FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_DataCarrier_ArrayDataCarrier_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_DataCarrier_ArrayDataCarrier_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
