// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interfaces/UIView.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DATADRIVENUI_UIView_generated_h
#error "UIView.generated.h already included, missing '#pragma once' in UIView.h"
#endif
#define DATADRIVENUI_UIView_generated_h

#define FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_Interfaces_UIView_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	DATADRIVENUI_API UUIView(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UUIView(UUIView&&); \
	UUIView(const UUIView&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DATADRIVENUI_API, UUIView); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUIView); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUIView) \
	DATADRIVENUI_API virtual ~UUIView();


#define FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_Interfaces_UIView_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUUIView(); \
	friend struct Z_Construct_UClass_UUIView_Statics; \
public: \
	DECLARE_CLASS(UUIView, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/DataDrivenUI"), DATADRIVENUI_API) \
	DECLARE_SERIALIZER(UUIView)


#define FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_Interfaces_UIView_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_Interfaces_UIView_h_13_GENERATED_UINTERFACE_BODY() \
	FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_Interfaces_UIView_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_Interfaces_UIView_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IUIView() {} \
public: \
	typedef UUIView UClassType; \
	typedef IUIView ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_Interfaces_UIView_h_10_PROLOG
#define FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_Interfaces_UIView_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_Interfaces_UIView_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DATADRIVENUI_API UClass* StaticClass<class UUIView>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_Interfaces_UIView_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
