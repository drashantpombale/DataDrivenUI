// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DataCarrier/BaseDataCarrier.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class IUIView;
#ifdef DATADRIVENUI_BaseDataCarrier_generated_h
#error "BaseDataCarrier.generated.h already included, missing '#pragma once' in BaseDataCarrier.h"
#endif
#define DATADRIVENUI_BaseDataCarrier_generated_h

#define FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_DataCarrier_BaseDataCarrier_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetDCTag); \
	DECLARE_FUNCTION(execUpdateBoundView); \
	DECLARE_FUNCTION(execSetBoundView); \
	DECLARE_FUNCTION(execGetBoundView);


#define FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_DataCarrier_BaseDataCarrier_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBaseDataCarrier(); \
	friend struct Z_Construct_UClass_UBaseDataCarrier_Statics; \
public: \
	DECLARE_CLASS(UBaseDataCarrier, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DataDrivenUI"), NO_API) \
	DECLARE_SERIALIZER(UBaseDataCarrier) \
	virtual UObject* _getUObject() const override { return const_cast<UBaseDataCarrier*>(this); }


#define FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_DataCarrier_BaseDataCarrier_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBaseDataCarrier(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UBaseDataCarrier(UBaseDataCarrier&&); \
	UBaseDataCarrier(const UBaseDataCarrier&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBaseDataCarrier); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBaseDataCarrier); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBaseDataCarrier) \
	NO_API virtual ~UBaseDataCarrier();


#define FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_DataCarrier_BaseDataCarrier_h_15_PROLOG
#define FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_DataCarrier_BaseDataCarrier_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_DataCarrier_BaseDataCarrier_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_DataCarrier_BaseDataCarrier_h_18_INCLASS_NO_PURE_DECLS \
	FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_DataCarrier_BaseDataCarrier_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DATADRIVENUI_API UClass* StaticClass<class UBaseDataCarrier>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_DataCarrier_BaseDataCarrier_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
