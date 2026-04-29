// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DataCarrier/FloatDataCarrier.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DATADRIVENUI_FloatDataCarrier_generated_h
#error "FloatDataCarrier.generated.h already included, missing '#pragma once' in FloatDataCarrier.h"
#endif
#define DATADRIVENUI_FloatDataCarrier_generated_h

#define FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_DataCarrier_FloatDataCarrier_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetData); \
	DECLARE_FUNCTION(execGetData);


#define FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_DataCarrier_FloatDataCarrier_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFloatDataCarrier(); \
	friend struct Z_Construct_UClass_UFloatDataCarrier_Statics; \
public: \
	DECLARE_CLASS(UFloatDataCarrier, UBaseDataCarrier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DataDrivenUI"), NO_API) \
	DECLARE_SERIALIZER(UFloatDataCarrier)


#define FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_DataCarrier_FloatDataCarrier_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFloatDataCarrier(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UFloatDataCarrier(UFloatDataCarrier&&); \
	UFloatDataCarrier(const UFloatDataCarrier&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFloatDataCarrier); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFloatDataCarrier); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFloatDataCarrier) \
	NO_API virtual ~UFloatDataCarrier();


#define FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_DataCarrier_FloatDataCarrier_h_13_PROLOG
#define FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_DataCarrier_FloatDataCarrier_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_DataCarrier_FloatDataCarrier_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_DataCarrier_FloatDataCarrier_h_16_INCLASS_NO_PURE_DECLS \
	FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_DataCarrier_FloatDataCarrier_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DATADRIVENUI_API UClass* StaticClass<class UFloatDataCarrier>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_DataCarrier_FloatDataCarrier_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
