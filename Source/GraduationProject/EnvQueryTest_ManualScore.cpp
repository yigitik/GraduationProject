#include "EnvQueryTest_ManualScore.h"

#include "EnvironmentQuery/EnvQueryTypes.h"
#include "EnvironmentQuery/Items/EnvQueryItemType_Point.h"
#include "EngineUtils.h" // TActorIterator

UEnvQueryTest_ManualScore::UEnvQueryTest_ManualScore()
{
	ValidItemType = UEnvQueryItemType_Point::StaticClass();

	TestPurpose = EEnvTestPurpose::Score;
	FilterType  = EEnvTestFilterType::Maximum;

	Cost = EEnvTestCost::Low;
}

namespace
{
	struct FTaggedActorInfo
	{
		FVector Location = FVector::ZeroVector;
		bool bWeak = false;
		bool bStrong = false;
	};
}

void UEnvQueryTest_ManualScore::RunTest(FEnvQueryInstance& QueryInstance) const
{
	UWorld* World = QueryInstance.World;
	if (!World)
	{
		return;
	}

	// Enemy'leri 1 kez topla (performans için)
	TArray<FTaggedActorInfo> Enemies;
	if (EnemyClass)
	{
		for (TActorIterator<AActor> ItActor(World, EnemyClass); ItActor; ++ItActor)
		{
			AActor* A = *ItActor;
			FTaggedActorInfo Info;
			Info.Location = A->GetActorLocation();
			Info.bWeak = (WeakTagName != NAME_None) && A->ActorHasTag(WeakTagName);
			Info.bStrong = (StrongTagName != NAME_None) && A->ActorHasTag(StrongTagName);
			Enemies.Add(Info);
		}
	}

	const float RadiusSq = Radius * Radius;

	for (FEnvQueryInstance::ItemIterator It(this, QueryInstance); It; ++It)
	{
		float RawScore = 0.0f;

		const FVector ItemLoc = GetItemLocation(QueryInstance, It.GetIndex());

		bool bAnyEnemyNear = false;
		bool bNearWeak = false;
		bool bNearStrong = false;

		for (const FTaggedActorInfo& Enemy : Enemies)
		{
			const float Dx = Enemy.Location.X - ItemLoc.X;
			const float Dy = Enemy.Location.Y - ItemLoc.Y;
			const float Dist2DSq = (Dx * Dx) + (Dy * Dy);

			if (Dist2DSq <= RadiusSq)
			{
				bAnyEnemyNear = true;

				// “var mı?” mantığı: stacklemesin
				bNearWeak |= Enemy.bWeak;
				bNearStrong |= Enemy.bStrong;

				// Eğer ikisi de bulunmuşsa daha fazla aramaya gerek yok
				if (bNearWeak && bNearStrong)
				{
					break;
				}
			}
		}

		if (bAnyEnemyNear)
		{
			RawScore += ProximityBonus;

			if (bNearWeak)
			{
				RawScore += WeakTagBonus;
			}

			if (bNearStrong)
			{
				RawScore -= StrongTagPenalty;
			}
		}

		RawScore = FMath::Clamp(RawScore, 0.0f, 1.0f);

		It.SetScore(TestPurpose, FilterType, RawScore, 0.0f, 1.0f);
	}
}

FText UEnvQueryTest_ManualScore::GetDescriptionTitle() const
{
	return FText::FromString(TEXT("Manual Score"));
}

FText UEnvQueryTest_ManualScore::GetDescriptionDetails() const
{
	return FText::FromString(TEXT("Default score = 0. Adds proximity bonus if EnemyClass is within XY radius. Weak tag adds +, Strong tag subtracts -."));
}
