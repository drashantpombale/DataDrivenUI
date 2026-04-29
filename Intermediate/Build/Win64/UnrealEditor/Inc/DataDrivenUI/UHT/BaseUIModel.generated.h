// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Models/BaseUIModel.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DATADRIVENUI_BaseUIModel_generated_h
#error "BaseUIModel.generated.h already included, missing '#pragma once' in BaseUIModel.h"
#endif
#define DATADRIVENUI_BaseUIModel_generated_h

#define FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_Models_BaseUIModel_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBaseUIModel(); \
	friend struct Z_Construct_UClass_UBaseUIModel_Statics; \
public: \
	DECLARE_CLASS(UBaseUIModel, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DataDrivenUI"), NO_API) \
	DECLARE_SERIALIZER(UBaseUIModel) \
	virtual UObject* _getUObject() const override { return const_cast<UBaseUIModel*>(this); }


#define FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_Models_BaseUIModel_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBaseUIModel(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UBaseUIModel(UBaseUIModel&&); \
	UBaseUIModel(const UBaseUIModel&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBaseUIModel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBaseUIModel); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBaseUIModel) \
	NO_API virtual ~UBaseUIModel();


#define FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_Models_BaseUIModel_h_16_PROLOG
#define FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_Models_BaseUIModel_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_Models_BaseUIModel_h_19_INCLASS_NO_PURE_DECLS \
	FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_Models_BaseUIModel_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DATADRIVENUI_API UClass* StaticClass<class UBaseUIModel>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_Models_BaseUIModel_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
