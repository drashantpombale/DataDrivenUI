// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DataCarrier/BoolDataCarrier.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DATADRIVENUI_BoolDataCarrier_generated_h
#error "BoolDataCarrier.generated.h already included, missing '#pragma once' in BoolDataCarrier.h"
#endif
#define DATADRIVENUI_BoolDataCarrier_generated_h

#define FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_DataCarrier_BoolDataCarrier_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetData); \
	DECLARE_FUNCTION(execGetData);


#define FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_DataCarrier_BoolDataCarrier_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBoolDataCarrier(); \
	friend struct Z_Construct_UClass_UBoolDataCarrier_Statics; \
public: \
	DECLARE_CLASS(UBoolDataCarrier, UBaseDataCarrier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DataDrivenUI"), NO_API) \
	DECLARE_SERIALIZER(UBoolDataCarrier)


#define FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_DataCarrier_BoolDataCarrier_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBoolDataCarrier(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UBoolDataCarrier(UBoolDataCarrier&&); \
	UBoolDataCarrier(const UBoolDataCarrier&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBoolDataCarrier); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBoolDataCarrier); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBoolDataCarrier) \
	NO_API virtual ~UBoolDataCarrier();


#define FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_DataCarrier_BoolDataCarrier_h_13_PROLOG
#define FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_DataCarrier_BoolDataCarrier_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_DataCarrier_BoolDataCarrier_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_DataCarrier_BoolDataCarrier_h_16_INCLASS_NO_PURE_DECLS \
	FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_DataCarrier_BoolDataCarrier_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DATADRIVENUI_API UClass* StaticClass<class UBoolDataCarrier>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_DataCarrier_BoolDataCarrier_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
