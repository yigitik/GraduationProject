// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GraduationProject/MyTestActor.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMyTestActor() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
GRADUATIONPROJECT_API UClass* Z_Construct_UClass_AMyTestActor();
GRADUATIONPROJECT_API UClass* Z_Construct_UClass_AMyTestActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_GraduationProject();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AMyTestActor *************************************************************
void AMyTestActor::StaticRegisterNativesAMyTestActor()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AMyTestActor;
UClass* AMyTestActor::GetPrivateStaticClass()
{
	using TClass = AMyTestActor;
	if (!Z_Registration_Info_UClass_AMyTestActor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MyTestActor"),
			Z_Registration_Info_UClass_AMyTestActor.InnerSingleton,
			StaticRegisterNativesAMyTestActor,
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
	return Z_Registration_Info_UClass_AMyTestActor.InnerSingleton;
}
UClass* Z_Construct_UClass_AMyTestActor_NoRegister()
{
	return AMyTestActor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AMyTestActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MyTestActor.h" },
		{ "ModuleRelativePath", "MyTestActor.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyTestActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AMyTestActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_GraduationProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyTestActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyTestActor_Statics::ClassParams = {
	&AMyTestActor::StaticClass,
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
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyTestActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyTestActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMyTestActor()
{
	if (!Z_Registration_Info_UClass_AMyTestActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyTestActor.OuterSingleton, Z_Construct_UClass_AMyTestActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMyTestActor.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMyTestActor);
AMyTestActor::~AMyTestActor() {}
// ********** End Class AMyTestActor ***************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_GraduationProject_Source_GraduationProject_MyTestActor_h__Script_GraduationProject_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMyTestActor, AMyTestActor::StaticClass, TEXT("AMyTestActor"), &Z_Registration_Info_UClass_AMyTestActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyTestActor), 3758506308U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GraduationProject_Source_GraduationProject_MyTestActor_h__Script_GraduationProject_3965376804(TEXT("/Script/GraduationProject"),
	Z_CompiledInDeferFile_FID_GraduationProject_Source_GraduationProject_MyTestActor_h__Script_GraduationProject_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GraduationProject_Source_GraduationProject_MyTestActor_h__Script_GraduationProject_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
