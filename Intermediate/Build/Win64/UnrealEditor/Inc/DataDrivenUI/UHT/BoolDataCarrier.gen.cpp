// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DataDrivenUI/Public/DataCarrier/BoolDataCarrier.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBoolDataCarrier() {}

// Begin Cross Module References
DATADRIVENUI_API UClass* Z_Construct_UClass_UBaseDataCarrier();
DATADRIVENUI_API UClass* Z_Construct_UClass_UBoolDataCarrier();
DATADRIVENUI_API UClass* Z_Construct_UClass_UBoolDataCarrier_NoRegister();
UPackage* Z_Construct_UPackage__Script_DataDrivenUI();
// End Cross Module References

// Begin Class UBoolDataCarrier Function GetData
struct Z_Construct_UFunction_UBoolDataCarrier_GetData_Statics
{
	struct BoolDataCarrier_eventGetData_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DataCarrier/BoolDataCarrier.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UBoolDataCarrier_GetData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((BoolDataCarrier_eventGetData_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBoolDataCarrier_GetData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BoolDataCarrier_eventGetData_Parms), &Z_Construct_UFunction_UBoolDataCarrier_GetData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBoolDataCarrier_GetData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBoolDataCarrier_GetData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBoolDataCarrier_GetData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBoolDataCarrier_GetData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBoolDataCarrier, nullptr, "GetData", nullptr, nullptr, Z_Construct_UFunction_UBoolDataCarrier_GetData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBoolDataCarrier_GetData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBoolDataCarrier_GetData_Statics::BoolDataCarrier_eventGetData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBoolDataCarrier_GetData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBoolDataCarrier_GetData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBoolDataCarrier_GetData_Statics::BoolDataCarrier_eventGetData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBoolDataCarrier_GetData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBoolDataCarrier_GetData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBoolDataCarrier::execGetData)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetData();
	P_NATIVE_END;
}
// End Class UBoolDataCarrier Function GetData

// Begin Class UBoolDataCarrier Function SetData
struct Z_Construct_UFunction_UBoolDataCarrier_SetData_Statics
{
	struct BoolDataCarrier_eventSetData_Parms
	{
		bool val;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DataCarrier/BoolDataCarrier.h" },
	};
#endif // WITH_METADATA
	static void NewProp_val_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_val;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UBoolDataCarrier_SetData_Statics::NewProp_val_SetBit(void* Obj)
{
	((BoolDataCarrier_eventSetData_Parms*)Obj)->val = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBoolDataCarrier_SetData_Statics::NewProp_val = { "val", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BoolDataCarrier_eventSetData_Parms), &Z_Construct_UFunction_UBoolDataCarrier_SetData_Statics::NewProp_val_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBoolDataCarrier_SetData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBoolDataCarrier_SetData_Statics::NewProp_val,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBoolDataCarrier_SetData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBoolDataCarrier_SetData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBoolDataCarrier, nullptr, "SetData", nullptr, nullptr, Z_Construct_UFunction_UBoolDataCarrier_SetData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBoolDataCarrier_SetData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBoolDataCarrier_SetData_Statics::BoolDataCarrier_eventSetData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBoolDataCarrier_SetData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBoolDataCarrier_SetData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBoolDataCarrier_SetData_Statics::BoolDataCarrier_eventSetData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBoolDataCarrier_SetData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBoolDataCarrier_SetData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBoolDataCarrier::execSetData)
{
	P_GET_UBOOL(Z_Param_val);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetData(Z_Param_val);
	P_NATIVE_END;
}
// End Class UBoolDataCarrier Function SetData

// Begin Class UBoolDataCarrier
void UBoolDataCarrier::StaticRegisterNativesUBoolDataCarrier()
{
	UClass* Class = UBoolDataCarrier::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetData", &UBoolDataCarrier::execGetData },
		{ "SetData", &UBoolDataCarrier::execSetData },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBoolDataCarrier);
UClass* Z_Construct_UClass_UBoolDataCarrier_NoRegister()
{
	return UBoolDataCarrier::StaticClass();
}
struct Z_Construct_UClass_UBoolDataCarrier_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// <summary>\n/// Author: Prashant D\n/// Description: Base class for data carriers that hold a boolean value.\n/// </summary>\n" },
#endif
		{ "IncludePath", "DataCarrier/BoolDataCarrier.h" },
		{ "ModuleRelativePath", "Public/DataCarrier/BoolDataCarrier.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<summary>\nAuthor: Prashant D\nDescription: Base class for data carriers that hold a boolean value.\n</summary>" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBoolDataCarrier_GetData, "GetData" }, // 2515809860
		{ &Z_Construct_UFunction_UBoolDataCarrier_SetData, "SetData" }, // 1438695623
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBoolDataCarrier>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBoolDataCarrier_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBaseDataCarrier,
	(UObject* (*)())Z_Construct_UPackage__Script_DataDrivenUI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBoolDataCarrier_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBoolDataCarrier_Statics::ClassParams = {
	&UBoolDataCarrier::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBoolDataCarrier_Statics::Class_MetaDataParams), Z_Construct_UClass_UBoolDataCarrier_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBoolDataCarrier()
{
	if (!Z_Registration_Info_UClass_UBoolDataCarrier.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBoolDataCarrier.OuterSingleton, Z_Construct_UClass_UBoolDataCarrier_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBoolDataCarrier.OuterSingleton;
}
template<> DATADRIVENUI_API UClass* StaticClass<UBoolDataCarrier>()
{
	return UBoolDataCarrier::StaticClass();
}
UBoolDataCarrier::UBoolDataCarrier(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBoolDataCarrier);
UBoolDataCarrier::~UBoolDataCarrier() {}
// End Class UBoolDataCarrier

// Begin Registration
struct Z_CompiledInDeferFile_FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_DataCarrier_BoolDataCarrier_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBoolDataCarrier, UBoolDataCarrier::StaticClass, TEXT("UBoolDataCarrier"), &Z_Registration_Info_UClass_UBoolDataCarrier, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBoolDataCarrier), 3854952603U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_DataCarrier_BoolDataCarrier_h_578059096(TEXT("/Script/DataDrivenUI"),
	Z_CompiledInDeferFile_FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_DataCarrier_BoolDataCarrier_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_DataCarrier_BoolDataCarrier_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
