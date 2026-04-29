// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Examples/TradeModel.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UItemDataCarrier;
#ifdef DATADRIVENUI_TradeModel_generated_h
#error "TradeModel.generated.h already included, missing '#pragma once' in TradeModel.h"
#endif
#define DATADRIVENUI_TradeModel_generated_h

#define FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_Examples_TradeModel_h_12_DELEGATE \
DATADRIVENUI_API void FItemsUpdate_DelegateWrapper(const FMulticastScriptDelegate& ItemsUpdate);


#define FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_Examples_TradeModel_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execAcceptItems); \
	DECLARE_FUNCTION(execOnRep_Theirtems); \
	DECLARE_FUNCTION(execOnRep_OwnItems); \
	DECLARE_FUNCTION(execInitializeModel);


#define FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_Examples_TradeModel_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTradeModel(); \
	friend struct Z_Construct_UClass_UTradeModel_Statics; \
public: \
	DECLARE_CLASS(UTradeModel, UBaseUIModel, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DataDrivenUI"), NO_API) \
	DECLARE_SERIALIZER(UTradeModel) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ownItems=NETFIELD_REP_START, \
		theirItems, \
		NETFIELD_REP_END=theirItems	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_Examples_TradeModel_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTradeModel(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UTradeModel(UTradeModel&&); \
	UTradeModel(const UTradeModel&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTradeModel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTradeModel); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTradeModel) \
	NO_API virtual ~UTradeModel();


#define FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_Examples_TradeModel_h_16_PROLOG
#define FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_Examples_TradeModel_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_Examples_TradeModel_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_Examples_TradeModel_h_19_INCLASS_NO_PURE_DECLS \
	FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_Examples_TradeModel_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DATADRIVENUI_API UClass* StaticClass<class UTradeModel>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_Examples_TradeModel_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
