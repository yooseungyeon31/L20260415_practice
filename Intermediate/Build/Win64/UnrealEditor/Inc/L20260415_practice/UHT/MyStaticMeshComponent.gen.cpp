// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyStaticMeshComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeMyStaticMeshComponent() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent();
L20260415_PRACTICE_API UClass* Z_Construct_UClass_UMyStaticMeshComponent();
L20260415_PRACTICE_API UClass* Z_Construct_UClass_UMyStaticMeshComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_L20260415_practice();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UMyStaticMeshComponent ***************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UMyStaticMeshComponent;
UClass* UMyStaticMeshComponent::GetPrivateStaticClass()
{
	using TClass = UMyStaticMeshComponent;
	if (!Z_Registration_Info_UClass_UMyStaticMeshComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("MyStaticMeshComponent"),
			Z_Registration_Info_UClass_UMyStaticMeshComponent.InnerSingleton,
			StaticRegisterNativesUMyStaticMeshComponent,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UMyStaticMeshComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UMyStaticMeshComponent_NoRegister()
{
	return UMyStaticMeshComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMyStaticMeshComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Object Activation Components|Activation Trigger" },
		{ "IncludePath", "MyStaticMeshComponent.h" },
		{ "ModuleRelativePath", "Public/MyStaticMeshComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UMyStaticMeshComponent constinit property declarations *******************
// ********** End Class UMyStaticMeshComponent constinit property declarations *********************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyStaticMeshComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UMyStaticMeshComponent_Statics
UObject* (*const Z_Construct_UClass_UMyStaticMeshComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UStaticMeshComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_L20260415_practice,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyStaticMeshComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMyStaticMeshComponent_Statics::ClassParams = {
	&UMyStaticMeshComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00B010A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyStaticMeshComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UMyStaticMeshComponent_Statics::Class_MetaDataParams)
};
void UMyStaticMeshComponent::StaticRegisterNativesUMyStaticMeshComponent()
{
}
UClass* Z_Construct_UClass_UMyStaticMeshComponent()
{
	if (!Z_Registration_Info_UClass_UMyStaticMeshComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMyStaticMeshComponent.OuterSingleton, Z_Construct_UClass_UMyStaticMeshComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMyStaticMeshComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UMyStaticMeshComponent);
UMyStaticMeshComponent::~UMyStaticMeshComponent() {}
// ********** End Class UMyStaticMeshComponent *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Work_L20260415_practice_Source_L20260415_practice_Public_MyStaticMeshComponent_h__Script_L20260415_practice_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMyStaticMeshComponent, UMyStaticMeshComponent::StaticClass, TEXT("UMyStaticMeshComponent"), &Z_Registration_Info_UClass_UMyStaticMeshComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMyStaticMeshComponent), 888403353U) },
	};
}; // Z_CompiledInDeferFile_FID_Work_L20260415_practice_Source_L20260415_practice_Public_MyStaticMeshComponent_h__Script_L20260415_practice_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Work_L20260415_practice_Source_L20260415_practice_Public_MyStaticMeshComponent_h__Script_L20260415_practice_224338888{
	TEXT("/Script/L20260415_practice"),
	Z_CompiledInDeferFile_FID_Work_L20260415_practice_Source_L20260415_practice_Public_MyStaticMeshComponent_h__Script_L20260415_practice_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Work_L20260415_practice_Source_L20260415_practice_Public_MyStaticMeshComponent_h__Script_L20260415_practice_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
