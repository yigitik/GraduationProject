#pragma once

#include "CoreMinimal.h"
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

	// BP_EnemyBase'ı buradan seç
	UPROPERTY(EditDefaultsOnly, Category="ManualScore")
	TSubclassOf<AActor> EnemyClass;

	// XY düzleminde yarıçap
	UPROPERTY(EditDefaultsOnly, Category="ManualScore", meta=(ClampMin="0.0", UIMin="0.0"))
	float Radius = 150.0f;

	// Yakında herhangi bir enemy varsa eklenecek base skor
	UPROPERTY(EditDefaultsOnly, Category="ManualScore", meta=(ClampMin="0.0", UIMin="0.0"))
	float ProximityBonus = 0.5f;

	// Actor "Weak" tag'lıysa yakınındaki noktalara eklenecek bonus
	UPROPERTY(EditDefaultsOnly, Category="ManualScore", meta=(ClampMin="0.0", UIMin="0.0"))
	float WeakTagBonus = 0.2f;

	// Actor "Strong" tag'lıysa yakınındaki noktalara uygulanacak ceza (pozitif gir, kod eksi uygular)
	UPROPERTY(EditDefaultsOnly, Category="ManualScore", meta=(ClampMin="0.0", UIMin="0.0"))
	float StrongTagPenalty = 0.2f;

	// Actor Tags isimleri (BP'de Actor > Tags listesine eklediğin)
	UPROPERTY(EditDefaultsOnly, Category="ManualScore")
	FName WeakTagName = TEXT("Weak");

	UPROPERTY(EditDefaultsOnly, Category="ManualScore")
	FName StrongTagName = TEXT("Strong");
};