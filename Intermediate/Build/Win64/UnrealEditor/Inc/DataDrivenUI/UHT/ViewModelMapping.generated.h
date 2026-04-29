// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Utilities/ViewModelMapping.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DATADRIVENUI_ViewModelMapping_generated_h
#error "ViewModelMapping.generated.h already included, missing '#pragma once' in ViewModelMapping.h"
#endif
#define DATADRIVENUI_ViewModelMapping_generated_h

#define FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_Utilities_ViewModelMapping_h_18_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FViewModelMappingData_Statics; \
	DATADRIVENUI_API static class UScriptStruct* StaticStruct();


template<> DATADRIVENUI_API UScriptStruct* StaticStruct<struct FViewModelMappingData>();

#define FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_Utilities_ViewModelMapping_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUViewModelMapping(); \
	friend struct Z_Construct_UClass_UViewModelMapping_Statics; \
public: \
	DECLARE_CLASS(UViewModelMapping, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DataDrivenUI"), NO_API) \
	DECLARE_SERIALIZER(UViewModelMapping)


#define FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_Utilities_ViewModelMapping_h_30_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UViewModelMapping(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UViewModelMapping(UViewModelMapping&&); \
	UViewModelMapping(const UViewModelMapping&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UViewModelMapping); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UViewModelMapping); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UViewModelMapping) \
	NO_API virtual ~UViewModelMapping();


#define FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_Utilities_ViewModelMapping_h_27_PROLOG
#define FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_Utilities_ViewModelMapping_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_Utilities_ViewModelMapping_h_30_INCLASS_NO_PURE_DECLS \
	FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_Utilities_ViewModelMapping_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DATADRIVENUI_API UClass* StaticClass<class UViewModelMapping>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_Utilities_ViewModelMapping_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
