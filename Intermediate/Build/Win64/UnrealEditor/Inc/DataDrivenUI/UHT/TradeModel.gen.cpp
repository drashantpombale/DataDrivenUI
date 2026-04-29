// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DataDrivenUI/Public/Examples/TradeModel.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTradeModel() {}

// Begin Cross Module References
DATADRIVENUI_API UClass* Z_Construct_UClass_UBaseUIModel();
DATADRIVENUI_API UClass* Z_Construct_UClass_UItemDataCarrier_NoRegister();
DATADRIVENUI_API UClass* Z_Construct_UClass_UTradeModel();
DATADRIVENUI_API UClass* Z_Construct_UClass_UTradeModel_NoRegister();
DATADRIVENUI_API UFunction* Z_Construct_UDelegateFunction_DataDrivenUI_ItemsUpdate__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_DataDrivenUI();
// End Cross Module References

// Begin Delegate FItemsUpdate
struct Z_Construct_UDelegateFunction_DataDrivenUI_ItemsUpdate__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Examples/TradeModel.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_DataDrivenUI_ItemsUpdate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_DataDrivenUI, nullptr, "ItemsUpdate__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DataDrivenUI_ItemsUpdate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_DataDrivenUI_ItemsUpdate__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_DataDrivenUI_ItemsUpdate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_DataDrivenUI_ItemsUpdate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FItemsUpdate_DelegateWrapper(const FMulticastScriptDelegate& ItemsUpdate)
{
	ItemsUpdate.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FItemsUpdate

// Begin Class UTradeModel Function AcceptItems
struct Z_Construct_UFunction_UTradeModel_AcceptItems_Statics
{
	struct TradeModel_eventAcceptItems_Parms
	{
		TArray<UItemDataCarrier*> newItems;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Examples/TradeModel.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_newItems_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_newItems;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTradeModel_AcceptItems_Statics::NewProp_newItems_Inner = { "newItems", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UItemDataCarrier_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTradeModel_AcceptItems_Statics::NewProp_newItems = { "newItems", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TradeModel_eventAcceptItems_Parms, newItems), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTradeModel_AcceptItems_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTradeModel_AcceptItems_Statics::NewProp_newItems_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTradeModel_AcceptItems_Statics::NewProp_newItems,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTradeModel_AcceptItems_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTradeModel_AcceptItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTradeModel, nullptr, "AcceptItems", nullptr, nullptr, Z_Construct_UFunction_UTradeModel_AcceptItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTradeModel_AcceptItems_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTradeModel_AcceptItems_Statics::TradeModel_eventAcceptItems_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTradeModel_AcceptItems_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTradeModel_AcceptItems_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTradeModel_AcceptItems_Statics::TradeModel_eventAcceptItems_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTradeModel_AcceptItems()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTradeModel_AcceptItems_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTradeModel::execAcceptItems)
{
	P_GET_TARRAY(UItemDataCarrier*,Z_Param_newItems);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AcceptItems(Z_Param_newItems);
	P_NATIVE_END;
}
// End Class UTradeModel Function AcceptItems

// Begin Class UTradeModel Function InitializeModel
struct Z_Construct_UFunction_UTradeModel_InitializeModel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Examples/TradeModel.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTradeModel_InitializeModel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTradeModel, nullptr, "InitializeModel", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTradeModel_InitializeModel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTradeModel_InitializeModel_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UTradeModel_InitializeModel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTradeModel_InitializeModel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTradeModel::execInitializeModel)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitializeModel();
	P_NATIVE_END;
}
// End Class UTradeModel Function InitializeModel

// Begin Class UTradeModel Function OnRep_OwnItems
struct Z_Construct_UFunction_UTradeModel_OnRep_OwnItems_Statics
{
	struct TradeModel_eventOnRep_OwnItems_Parms
	{
		TArray<UItemDataCarrier*> _items;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Examples/TradeModel.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp__items_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp__items;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTradeModel_OnRep_OwnItems_Statics::NewProp__items_Inner = { "_items", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UItemDataCarrier_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTradeModel_OnRep_OwnItems_Statics::NewProp__items = { "_items", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TradeModel_eventOnRep_OwnItems_Parms, _items), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTradeModel_OnRep_OwnItems_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTradeModel_OnRep_OwnItems_Statics::NewProp__items_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTradeModel_OnRep_OwnItems_Statics::NewProp__items,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTradeModel_OnRep_OwnItems_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTradeModel_OnRep_OwnItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTradeModel, nullptr, "OnRep_OwnItems", nullptr, nullptr, Z_Construct_UFunction_UTradeModel_OnRep_OwnItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTradeModel_OnRep_OwnItems_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTradeModel_OnRep_OwnItems_Statics::TradeModel_eventOnRep_OwnItems_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTradeModel_OnRep_OwnItems_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTradeModel_OnRep_OwnItems_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTradeModel_OnRep_OwnItems_Statics::TradeModel_eventOnRep_OwnItems_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTradeModel_OnRep_OwnItems()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTradeModel_OnRep_OwnItems_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTradeModel::execOnRep_OwnItems)
{
	P_GET_TARRAY(UItemDataCarrier*,Z_Param__items);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_OwnItems(Z_Param__items);
	P_NATIVE_END;
}
// End Class UTradeModel Function OnRep_OwnItems

// Begin Class UTradeModel Function OnRep_Theirtems
struct Z_Construct_UFunction_UTradeModel_OnRep_Theirtems_Statics
{
	struct TradeModel_eventOnRep_Theirtems_Parms
	{
		TArray<UItemDataCarrier*> _items;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Examples/TradeModel.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp__items_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp__items;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTradeModel_OnRep_Theirtems_Statics::NewProp__items_Inner = { "_items", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UItemDataCarrier_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTradeModel_OnRep_Theirtems_Statics::NewProp__items = { "_items", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TradeModel_eventOnRep_Theirtems_Parms, _items), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTradeModel_OnRep_Theirtems_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTradeModel_OnRep_Theirtems_Statics::NewProp__items_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTradeModel_OnRep_Theirtems_Statics::NewProp__items,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTradeModel_OnRep_Theirtems_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTradeModel_OnRep_Theirtems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTradeModel, nullptr, "OnRep_Theirtems", nullptr, nullptr, Z_Construct_UFunction_UTradeModel_OnRep_Theirtems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTradeModel_OnRep_Theirtems_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTradeModel_OnRep_Theirtems_Statics::TradeModel_eventOnRep_Theirtems_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTradeModel_OnRep_Theirtems_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTradeModel_OnRep_Theirtems_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTradeModel_OnRep_Theirtems_Statics::TradeModel_eventOnRep_Theirtems_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTradeModel_OnRep_Theirtems()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTradeModel_OnRep_Theirtems_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTradeModel::execOnRep_Theirtems)
{
	P_GET_TARRAY(UItemDataCarrier*,Z_Param__items);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Theirtems(Z_Param__items);
	P_NATIVE_END;
}
// End Class UTradeModel Function OnRep_Theirtems

// Begin Class UTradeModel
void UTradeModel::StaticRegisterNativesUTradeModel()
{
	UClass* Class = UTradeModel::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AcceptItems", &UTradeModel::execAcceptItems },
		{ "InitializeModel", &UTradeModel::execInitializeModel },
		{ "OnRep_OwnItems", &UTradeModel::execOnRep_OwnItems },
		{ "OnRep_Theirtems", &UTradeModel::execOnRep_Theirtems },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTradeModel);
UClass* Z_Construct_UClass_UTradeModel_NoRegister()
{
	return UTradeModel::StaticClass();
}
struct Z_Construct_UClass_UTradeModel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Examples/TradeModel.h" },
		{ "ModuleRelativePath", "Public/Examples/TradeModel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_updateItems_MetaData[] = {
		{ "ModuleRelativePath", "Public/Examples/TradeModel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ownItems_MetaData[] = {
		{ "Category", "TradeModel" },
		{ "ModuleRelativePath", "Public/Examples/TradeModel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_theirItems_MetaData[] = {
		{ "Category", "TradeModel" },
		{ "ModuleRelativePath", "Public/Examples/TradeModel.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_updateItems;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ownItems_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ownItems;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_theirItems_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_theirItems;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UTradeModel_AcceptItems, "AcceptItems" }, // 1395246523
		{ &Z_Construct_UFunction_UTradeModel_InitializeModel, "InitializeModel" }, // 3697678910
		{ &Z_Construct_UFunction_UTradeModel_OnRep_OwnItems, "OnRep_OwnItems" }, // 1437791782
		{ &Z_Construct_UFunction_UTradeModel_OnRep_Theirtems, "OnRep_Theirtems" }, // 795061359
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTradeModel>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTradeModel_Statics::NewProp_updateItems = { "updateItems", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTradeModel, updateItems), Z_Construct_UDelegateFunction_DataDrivenUI_ItemsUpdate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_updateItems_MetaData), NewProp_updateItems_MetaData) }; // 3309261273
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTradeModel_Statics::NewProp_ownItems_Inner = { "ownItems", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UItemDataCarrier_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTradeModel_Statics::NewProp_ownItems = { "ownItems", "OnRep_OwnItems", (EPropertyFlags)0x0010000100000024, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTradeModel, ownItems), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ownItems_MetaData), NewProp_ownItems_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTradeModel_Statics::NewProp_theirItems_Inner = { "theirItems", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UItemDataCarrier_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTradeModel_Statics::NewProp_theirItems = { "theirItems", "OnRep_Theirtems", (EPropertyFlags)0x0010000100000024, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTradeModel, theirItems), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_theirItems_MetaData), NewProp_theirItems_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTradeModel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTradeModel_Statics::NewProp_updateItems,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTradeModel_Statics::NewProp_ownItems_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTradeModel_Statics::NewProp_ownItems,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTradeModel_Statics::NewProp_theirItems_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTradeModel_Statics::NewProp_theirItems,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTradeModel_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UTradeModel_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBaseUIModel,
	(UObject* (*)())Z_Construct_UPackage__Script_DataDrivenUI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTradeModel_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTradeModel_Statics::ClassParams = {
	&UTradeModel::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UTradeModel_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UTradeModel_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTradeModel_Statics::Class_MetaDataParams), Z_Construct_UClass_UTradeModel_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTradeModel()
{
	if (!Z_Registration_Info_UClass_UTradeModel.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTradeModel.OuterSingleton, Z_Construct_UClass_UTradeModel_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTradeModel.OuterSingleton;
}
template<> DATADRIVENUI_API UClass* StaticClass<UTradeModel>()
{
	return UTradeModel::StaticClass();
}
void UTradeModel::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_ownItems(TEXT("ownItems"));
	static const FName Name_theirItems(TEXT("theirItems"));
	const bool bIsValid = true
		&& Name_ownItems == ClassReps[(int32)ENetFields_Private::ownItems].Property->GetFName()
		&& Name_theirItems == ClassReps[(int32)ENetFields_Private::theirItems].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UTradeModel"));
}
UTradeModel::UTradeModel(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTradeModel);
UTradeModel::~UTradeModel() {}
// End Class UTradeModel

// Begin Registration
struct Z_CompiledInDeferFile_FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_Examples_TradeModel_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTradeModel, UTradeModel::StaticClass, TEXT("UTradeModel"), &Z_Registration_Info_UClass_UTradeModel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTradeModel), 3875762219U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_Examples_TradeModel_h_2412586171(TEXT("/Script/DataDrivenUI"),
	Z_CompiledInDeferFile_FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_Examples_TradeModel_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_Examples_TradeModel_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
