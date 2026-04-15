// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyActor.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeMyActor() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UProjectileMovementComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
L20260415_PRACTICE_API UClass* Z_Construct_UClass_AMyActor();
L20260415_PRACTICE_API UClass* Z_Construct_UClass_AMyActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_L20260415_practice();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AMyActor Function ProcessActorBeginOverlap *******************************
struct Z_Construct_UFunction_AMyActor_ProcessActorBeginOverlap_Statics
{
	struct MyActor_eventProcessActorBeginOverlap_Parms
	{
		AActor* OverlappedActor;
		AActor* OtherActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MyActor.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function ProcessActorBeginOverlap constinit property declarations **************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ProcessActorBeginOverlap constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ProcessActorBeginOverlap Property Definitions *************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMyActor_ProcessActorBeginOverlap_Statics::NewProp_OverlappedActor = { "OverlappedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyActor_eventProcessActorBeginOverlap_Parms, OverlappedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMyActor_ProcessActorBeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyActor_eventProcessActorBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyActor_ProcessActorBeginOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyActor_ProcessActorBeginOverlap_Statics::NewProp_OverlappedActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyActor_ProcessActorBeginOverlap_Statics::NewProp_OtherActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyActor_ProcessActorBeginOverlap_Statics::PropPointers) < 2048);
// ********** End Function ProcessActorBeginOverlap Property Definitions ***************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyActor_ProcessActorBeginOverlap_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMyActor, nullptr, "ProcessActorBeginOverlap", 	Z_Construct_UFunction_AMyActor_ProcessActorBeginOverlap_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_AMyActor_ProcessActorBeginOverlap_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_AMyActor_ProcessActorBeginOverlap_Statics::MyActor_eventProcessActorBeginOverlap_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyActor_ProcessActorBeginOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyActor_ProcessActorBeginOverlap_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AMyActor_ProcessActorBeginOverlap_Statics::MyActor_eventProcessActorBeginOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMyActor_ProcessActorBeginOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyActor_ProcessActorBeginOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMyActor::execProcessActorBeginOverlap)
{
	P_GET_OBJECT(AActor,Z_Param_OverlappedActor);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ProcessActorBeginOverlap(Z_Param_OverlappedActor,Z_Param_OtherActor);
	P_NATIVE_END;
}
// ********** End Class AMyActor Function ProcessActorBeginOverlap *********************************

// ********** Begin Class AMyActor *****************************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_AMyActor;
UClass* AMyActor::GetPrivateStaticClass()
{
	using TClass = AMyActor;
	if (!Z_Registration_Info_UClass_AMyActor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("MyActor"),
			Z_Registration_Info_UClass_AMyActor.InnerSingleton,
			StaticRegisterNativesAMyActor,
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
	return Z_Registration_Info_UClass_AMyActor.InnerSingleton;
}
UClass* Z_Construct_UClass_AMyActor_NoRegister()
{
	return AMyActor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AMyActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MyActor.h" },
		{ "ModuleRelativePath", "Public/MyActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Box_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MyActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Body_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MyActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Movement_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MyActor.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class AMyActor constinit property declarations *********************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Box;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Body;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Movement;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class AMyActor constinit property declarations ***********************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("ProcessActorBeginOverlap"), .Pointer = &AMyActor::execProcessActorBeginOverlap },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AMyActor_ProcessActorBeginOverlap, "ProcessActorBeginOverlap" }, // 1754802578
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_AMyActor_Statics

// ********** Begin Class AMyActor Property Definitions ********************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyActor_Statics::NewProp_Box = { "Box", nullptr, (EPropertyFlags)0x01140000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyActor, Box), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Box_MetaData), NewProp_Box_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyActor_Statics::NewProp_Body = { "Body", nullptr, (EPropertyFlags)0x01140000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyActor, Body), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Body_MetaData), NewProp_Body_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyActor_Statics::NewProp_Movement = { "Movement", nullptr, (EPropertyFlags)0x01140000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyActor, Movement), Z_Construct_UClass_UProjectileMovementComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Movement_MetaData), NewProp_Movement_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyActor_Statics::NewProp_Box,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyActor_Statics::NewProp_Body,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyActor_Statics::NewProp_Movement,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyActor_Statics::PropPointers) < 2048);
// ********** End Class AMyActor Property Definitions **********************************************
UObject* (*const Z_Construct_UClass_AMyActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_L20260415_practice,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyActor_Statics::ClassParams = {
	&AMyActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AMyActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AMyActor_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyActor_Statics::Class_MetaDataParams)
};
void AMyActor::StaticRegisterNativesAMyActor()
{
	UClass* Class = AMyActor::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_AMyActor_Statics::Funcs));
}
UClass* Z_Construct_UClass_AMyActor()
{
	if (!Z_Registration_Info_UClass_AMyActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyActor.OuterSingleton, Z_Construct_UClass_AMyActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMyActor.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AMyActor);
AMyActor::~AMyActor() {}
// ********** End Class AMyActor *******************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Work_L20260415_practice_Source_L20260415_practice_Public_MyActor_h__Script_L20260415_practice_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMyActor, AMyActor::StaticClass, TEXT("AMyActor"), &Z_Registration_Info_UClass_AMyActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyActor), 833969393U) },
	};
}; // Z_CompiledInDeferFile_FID_Work_L20260415_practice_Source_L20260415_practice_Public_MyActor_h__Script_L20260415_practice_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Work_L20260415_practice_Source_L20260415_practice_Public_MyActor_h__Script_L20260415_practice_3570678652{
	TEXT("/Script/L20260415_practice"),
	Z_CompiledInDeferFile_FID_Work_L20260415_practice_Source_L20260415_practice_Public_MyActor_h__Script_L20260415_practice_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Work_L20260415_practice_Source_L20260415_practice_Public_MyActor_h__Script_L20260415_practice_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
