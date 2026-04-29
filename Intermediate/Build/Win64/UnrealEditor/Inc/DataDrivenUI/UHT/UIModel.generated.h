// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interfaces/UIModel.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DATADRIVENUI_UIModel_generated_h
#error "UIModel.generated.h already included, missing '#pragma once' in UIModel.h"
#endif
#define DATADRIVENUI_UIModel_generated_h

#define FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_Interfaces_UIModel_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	DATADRIVENUI_API UUIModel(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UUIModel(UUIModel&&); \
	UUIModel(const UUIModel&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DATADRIVENUI_API, UUIModel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUIModel); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUIModel) \
	DATADRIVENUI_API virtual ~UUIModel();


#define FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_Interfaces_UIModel_h_14_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUUIModel(); \
	friend struct Z_Construct_UClass_UUIModel_Statics; \
public: \
	DECLARE_CLASS(UUIModel, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/DataDrivenUI"), DATADRIVENUI_API) \
	DECLARE_SERIALIZER(UUIModel)


#define FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_Interfaces_UIModel_h_14_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_Interfaces_UIModel_h_14_GENERATED_UINTERFACE_BODY() \
	FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_Interfaces_UIModel_h_14_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_Interfaces_UIModel_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IUIModel() {} \
public: \
	typedef UUIModel UClassType; \
	typedef IUIModel ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_Interfaces_UIModel_h_11_PROLOG
#define FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_Interfaces_UIModel_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_Interfaces_UIModel_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DATADRIVENUI_API UClass* StaticClass<class UUIModel>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_Interfaces_UIModel_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
