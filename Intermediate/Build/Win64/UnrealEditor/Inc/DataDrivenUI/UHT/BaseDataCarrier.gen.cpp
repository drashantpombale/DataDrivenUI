// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DataDrivenUI/Public/DataCarrier/BaseDataCarrier.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseDataCarrier() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
DATADRIVENUI_API UClass* Z_Construct_UClass_UBaseDataCarrier();
DATADRIVENUI_API UClass* Z_Construct_UClass_UBaseDataCarrier_NoRegister();
DATADRIVENUI_API UClass* Z_Construct_UClass_UDataCarrier_NoRegister();
DATADRIVENUI_API UClass* Z_Construct_UClass_UUIView_NoRegister();
UPackage* Z_Construct_UPackage__Script_DataDrivenUI();
// End Cross Module References

// Begin Class UBaseDataCarrier Function GetBoundView
struct Z_Construct_UFunction_UBaseDataCarrier_GetBoundView_Statics
{
	struct BaseDataCarrier_eventGetBoundView_Parms
	{
		TScriptInterface<IUIView> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DataCarrier/BaseDataCarrier.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UBaseDataCarrier_GetBoundView_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseDataCarrier_eventGetBoundView_Parms, ReturnValue), Z_Construct_UClass_UUIView_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseDataCarrier_GetBoundView_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseDataCarrier_GetBoundView_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseDataCarrier_GetBoundView_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseDataCarrier_GetBoundView_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseDataCarrier, nullptr, "GetBoundView", nullptr, nullptr, Z_Construct_UFunction_UBaseDataCarrier_GetBoundView_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseDataCarrier_GetBoundView_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBaseDataCarrier_GetBoundView_Statics::BaseDataCarrier_eventGetBoundView_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseDataCarrier_GetBoundView_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseDataCarrier_GetBoundView_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBaseDataCarrier_GetBoundView_Statics::BaseDataCarrier_eventGetBoundView_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBaseDataCarrier_GetBoundView()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseDataCarrier_GetBoundView_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBaseDataCarrier::execGetBoundView)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TScriptInterface<IUIView>*)Z_Param__Result=P_THIS->GetBoundView();
	P_NATIVE_END;
}
// End Class UBaseDataCarrier Function GetBoundView

// Begin Class UBaseDataCarrier Function GetDCTag
struct Z_Construct_UFunction_UBaseDataCarrier_GetDCTag_Statics
{
	struct BaseDataCarrier_eventGetDCTag_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DataCarrier/BaseDataCarrier.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBaseDataCarrier_GetDCTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseDataCarrier_eventGetDCTag_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseDataCarrier_GetDCTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseDataCarrier_GetDCTag_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseDataCarrier_GetDCTag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseDataCarrier_GetDCTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseDataCarrier, nullptr, "GetDCTag", nullptr, nullptr, Z_Construct_UFunction_UBaseDataCarrier_GetDCTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseDataCarrier_GetDCTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBaseDataCarrier_GetDCTag_Statics::BaseDataCarrier_eventGetDCTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseDataCarrier_GetDCTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseDataCarrier_GetDCTag_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBaseDataCarrier_GetDCTag_Statics::BaseDataCarrier_eventGetDCTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBaseDataCarrier_GetDCTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseDataCarrier_GetDCTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBaseDataCarrier::execGetDCTag)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetDCTag();
	P_NATIVE_END;
}
// End Class UBaseDataCarrier Function GetDCTag

// Begin Class UBaseDataCarrier Function SetBoundView
struct Z_Construct_UFunction_UBaseDataCarrier_SetBoundView_Statics
{
	struct BaseDataCarrier_eventSetBoundView_Parms
	{
		TScriptInterface<IUIView> InView;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DataCarrier/BaseDataCarrier.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_InView;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UBaseDataCarrier_SetBoundView_Statics::NewProp_InView = { "InView", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseDataCarrier_eventSetBoundView_Parms, InView), Z_Construct_UClass_UUIView_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseDataCarrier_SetBoundView_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseDataCarrier_SetBoundView_Statics::NewProp_InView,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseDataCarrier_SetBoundView_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseDataCarrier_SetBoundView_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseDataCarrier, nullptr, "SetBoundView", nullptr, nullptr, Z_Construct_UFunction_UBaseDataCarrier_SetBoundView_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseDataCarrier_SetBoundView_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBaseDataCarrier_SetBoundView_Statics::BaseDataCarrier_eventSetBoundView_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseDataCarrier_SetBoundView_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseDataCarrier_SetBoundView_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBaseDataCarrier_SetBoundView_Statics::BaseDataCarrier_eventSetBoundView_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBaseDataCarrier_SetBoundView()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseDataCarrier_SetBoundView_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBaseDataCarrier::execSetBoundView)
{
	P_GET_TINTERFACE(IUIView,Z_Param_InView);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetBoundView(Z_Param_InView);
	P_NATIVE_END;
}
// End Class UBaseDataCarrier Function SetBoundView

// Begin Class UBaseDataCarrier Function UpdateBoundView
struct Z_Construct_UFunction_UBaseDataCarrier_UpdateBoundView_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DataCarrier/BaseDataCarrier.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseDataCarrier_UpdateBoundView_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseDataCarrier, nullptr, "UpdateBoundView", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseDataCarrier_UpdateBoundView_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseDataCarrier_UpdateBoundView_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UBaseDataCarrier_UpdateBoundView()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseDataCarrier_UpdateBoundView_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBaseDataCarrier::execUpdateBoundView)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateBoundView();
	P_NATIVE_END;
}
// End Class UBaseDataCarrier Function UpdateBoundView

// Begin Class UBaseDataCarrier
void UBaseDataCarrier::StaticRegisterNativesUBaseDataCarrier()
{
	UClass* Class = UBaseDataCarrier::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetBoundView", &UBaseDataCarrier::execGetBoundView },
		{ "GetDCTag", &UBaseDataCarrier::execGetDCTag },
		{ "SetBoundView", &UBaseDataCarrier::execSetBoundView },
		{ "UpdateBoundView", &UBaseDataCarrier::execUpdateBoundView },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBaseDataCarrier);
UClass* Z_Construct_UClass_UBaseDataCarrier_NoRegister()
{
	return UBaseDataCarrier::StaticClass();
}
struct Z_Construct_UClass_UBaseDataCarrier_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// <summary>\n/// Author: Prashant D\n/// Description: Base class for Data Carrier objects which are used to link the model and sub views.\n/// </summary>\n" },
#endif
		{ "IncludePath", "DataCarrier/BaseDataCarrier.h" },
		{ "ModuleRelativePath", "Public/DataCarrier/BaseDataCarrier.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<summary>\nAuthor: Prashant D\nDescription: Base class for Data Carrier objects which are used to link the model and sub views.\n</summary>" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_tag_MetaData[] = {
		{ "ModuleRelativePath", "Public/DataCarrier/BaseDataCarrier.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_tag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBaseDataCarrier_GetBoundView, "GetBoundView" }, // 3863393095
		{ &Z_Construct_UFunction_UBaseDataCarrier_GetDCTag, "GetDCTag" }, // 4063913638
		{ &Z_Construct_UFunction_UBaseDataCarrier_SetBoundView, "SetBoundView" }, // 4253092520
		{ &Z_Construct_UFunction_UBaseDataCarrier_UpdateBoundView, "UpdateBoundView" }, // 2251391100
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseDataCarrier>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBaseDataCarrier_Statics::NewProp_tag = { "tag", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseDataCarrier, tag), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_tag_MetaData), NewProp_tag_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBaseDataCarrier_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseDataCarrier_Statics::NewProp_tag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseDataCarrier_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBaseDataCarrier_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_DataDrivenUI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseDataCarrier_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UBaseDataCarrier_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UDataCarrier_NoRegister, (int32)VTABLE_OFFSET(UBaseDataCarrier, IDataCarrier), false },  // 1932306768
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBaseDataCarrier_Statics::ClassParams = {
	&UBaseDataCarrier::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UBaseDataCarrier_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UBaseDataCarrier_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseDataCarrier_Statics::Class_MetaDataParams), Z_Construct_UClass_UBaseDataCarrier_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBaseDataCarrier()
{
	if (!Z_Registration_Info_UClass_UBaseDataCarrier.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBaseDataCarrier.OuterSingleton, Z_Construct_UClass_UBaseDataCarrier_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBaseDataCarrier.OuterSingleton;
}
template<> DATADRIVENUI_API UClass* StaticClass<UBaseDataCarrier>()
{
	return UBaseDataCarrier::StaticClass();
}
UBaseDataCarrier::UBaseDataCarrier(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseDataCarrier);
UBaseDataCarrier::~UBaseDataCarrier() {}
// End Class UBaseDataCarrier

// Begin Registration
struct Z_CompiledInDeferFile_FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_DataCarrier_BaseDataCarrier_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBaseDataCarrier, UBaseDataCarrier::StaticClass, TEXT("UBaseDataCarrier"), &Z_Registration_Info_UClass_UBaseDataCarrier, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBaseDataCarrier), 765457931U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_DataCarrier_BaseDataCarrier_h_1556159749(TEXT("/Script/DataDrivenUI"),
	Z_CompiledInDeferFile_FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_DataCarrier_BaseDataCarrier_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_DataCarrier_BaseDataCarrier_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
