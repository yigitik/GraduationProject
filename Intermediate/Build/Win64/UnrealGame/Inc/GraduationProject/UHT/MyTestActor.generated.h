// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MyTestActor.h"

#ifdef GRADUATIONPROJECT_MyTestActor_generated_h
#error "MyTestActor.generated.h already included, missing '#pragma once' in MyTestActor.h"
#endif
#define GRADUATIONPROJECT_MyTestActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AMyTestActor *************************************************************
GRADUATIONPROJECT_API UClass* Z_Construct_UClass_AMyTestActor_NoRegister();

#define FID_GraduationProject_Source_GraduationProject_MyTestActor_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyTestActor(); \
	friend struct Z_Construct_UClass_AMyTestActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GRADUATIONPROJECT_API UClass* Z_Construct_UClass_AMyTestActor_NoRegister(); \
public: \
	DECLARE_CLASS2(AMyTestActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GraduationProject"), Z_Construct_UClass_AMyTestActor_NoRegister) \
	DECLARE_SERIALIZER(AMyTestActor)


#define FID_GraduationProject_Source_GraduationProject_MyTestActor_h_12_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AMyTestActor(AMyTestActor&&) = delete; \
	AMyTestActor(const AMyTestActor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyTestActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyTestActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyTestActor) \
	NO_API virtual ~AMyTestActor();


#define FID_GraduationProject_Source_GraduationProject_MyTestActor_h_9_PROLOG
#define FID_GraduationProject_Source_GraduationProject_MyTestActor_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GraduationProject_Source_GraduationProject_MyTestActor_h_12_INCLASS_NO_PURE_DECLS \
	FID_GraduationProject_Source_GraduationProject_MyTestActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AMyTestActor;

// ********** End Class AMyTestActor ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GraduationProject_Source_GraduationProject_MyTestActor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
