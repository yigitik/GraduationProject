#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "EnvQueryTest_ManualScore.generated.h"

UCLASS()
class GRADUATIONPROJECT_API UEnvQueryTest_ManualScore : public UEnvQueryTest
{
	GENERATED_BODY()

public:
	UEnvQueryTest_ManualScore();

protected:
	virtual void RunTest(FEnvQueryInstance& QueryInstance) const override;
	virtual FText GetDescriptionTitle() const override;
	virtual FText GetDescriptionDetails() const override;

	// EQS'in tarayacağı actor class.
	// Buraya BP_BaseAlly verilecek.
	UPROPERTY(EditAnywhere, Category="ManualScore")
	TSubclassOf<AActor> EnemyClass;

	// Point etrafında kontrol edilen 2D yarıçap.
	UPROPERTY(EditAnywhere, Category="ManualScore", meta=(ClampMin="0.0", UIMin="0.0"))
	float Radius = 250.0f;

	// Yakında en az bir actor varsa verilen taban puan.
	UPROPERTY(EditAnywhere, Category="ManualScore", meta=(ClampMin="0.0", UIMin="0.0"))
	float ProximityBonus = 0.5f;

	// Weak tag'i varsa ek puan.
	UPROPERTY(EditAnywhere, Category="ManualScore", meta=(ClampMin="0.0", UIMin="0.0"))
	float WeakTagBonus = 0.2f;

	// Strong tag'i varsa ceza.
	UPROPERTY(EditAnywhere, Category="ManualScore", meta=(ClampMin="0.0", UIMin="0.0"))
	float StrongTagPenalty = 0.2f;

	// DetectionArea overlap durumunda uygulanacak ceza.
	UPROPERTY(EditAnywhere, Category="ManualScore", meta=(ClampMin="0.0", UIMin="0.0"))
	float DetectionOverlapPenalty = 0.25f;

	// BP_BaseAlly içindeki collision component adı.
	UPROPERTY(EditAnywhere, Category="ManualScore")
	FName DetectionAreaComponentName = TEXT("DetectionArea");

	UPROPERTY(EditAnywhere, Category="ManualScore")
	FName WeakTagName = TEXT("Weak");

	UPROPERTY(EditAnywhere, Category="ManualScore")
	FName StrongTagName = TEXT("Strong");

	UPROPERTY(EditAnywhere, Category="ManualScore|Debug")
	bool bDrawRawScore = true;

	UPROPERTY(EditAnywhere, Category="ManualScore|Debug", meta=(ClampMin="0.0", UIMin="0.0"))
	float DebugLabelZOffset = 30.0f;

	UPROPERTY(EditAnywhere, Category="ManualScore|Debug", meta=(ClampMin="0.0", UIMin="0.0"))
	float DebugDuration = 0.0f;
};