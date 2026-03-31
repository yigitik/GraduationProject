#include "EnvQueryTest_ManualScore.h"

#include "Components/PrimitiveComponent.h"
#include "DrawDebugHelpers.h"
#include "EngineUtils.h"
#include "EnvironmentQuery/EnvQueryTypes.h"
#include "EnvironmentQuery/Items/EnvQueryItemType_Point.h"

UEnvQueryTest_ManualScore::UEnvQueryTest_ManualScore()
{
	ValidItemType = UEnvQueryItemType_Point::StaticClass();

	TestPurpose = EEnvTestPurpose::Score;
	FilterType = EEnvTestFilterType::Maximum;
	Cost = EEnvTestCost::Low;
}

namespace
{
	struct FTaggedActorInfo
	{
		AActor* Actor = nullptr;
		UPrimitiveComponent* DetectionArea = nullptr;
		FVector Location = FVector::ZeroVector;
		bool bWeak = false;
		bool bStrong = false;
		bool bHasDetectionOverlap = false;
	};

	static UPrimitiveComponent* FindDetectionAreaComponent(AActor* Actor, const FName& WantedName)
	{
		if (!IsValid(Actor))
		{
			return nullptr;
		}

		TArray<UPrimitiveComponent*> PrimitiveComponents;
		Actor->GetComponents<UPrimitiveComponent>(PrimitiveComponents);

		if (PrimitiveComponents.Num() == 0)
		{
			return nullptr;
		}

		if (WantedName.IsNone())
		{
			return PrimitiveComponents[0];
		}

		const FString WantedNameString = WantedName.ToString();

		for (UPrimitiveComponent* PrimComp : PrimitiveComponents)
		{
			if (!IsValid(PrimComp))
			{
				continue;
			}

			if (PrimComp->GetFName() == WantedName)
			{
				return PrimComp;
			}
		}

		for (UPrimitiveComponent* PrimComp : PrimitiveComponents)
		{
			if (!IsValid(PrimComp))
			{
				continue;
			}

			if (PrimComp->GetName().Contains(WantedNameString))
			{
				return PrimComp;
			}
		}

		return nullptr;
	}
}

void UEnvQueryTest_ManualScore::RunTest(FEnvQueryInstance& QueryInstance) const
{
	UWorld* World = QueryInstance.World;
	if (!World)
	{
		return;
	}

	TArray<FTaggedActorInfo> Enemies;
	Enemies.Reserve(32);

	// Sahnedeki BP_BaseAlly actorlerini topla.
	if (EnemyClass)
	{
		for (TActorIterator<AActor> ItActor(World, EnemyClass); ItActor; ++ItActor)
		{
			AActor* Actor = *ItActor;
			if (!IsValid(Actor))
			{
				continue;
			}

			FTaggedActorInfo Info;
			Info.Actor = Actor;
			Info.Location = Actor->GetActorLocation();
			Info.bWeak = (WeakTagName != NAME_None) && Actor->ActorHasTag(WeakTagName);
			Info.bStrong = (StrongTagName != NAME_None) && Actor->ActorHasTag(StrongTagName);
			Info.DetectionArea = FindDetectionAreaComponent(Actor, DetectionAreaComponentName);

			Enemies.Add(Info);
		}
	}

	// DetectionArea overlap bilgisini bir kez hesapla.
	for (int32 i = 0; i < Enemies.Num(); ++i)
	{
		UPrimitiveComponent* AreaA = Enemies[i].DetectionArea;
		if (!IsValid(AreaA))
		{
			continue;
		}

		for (int32 j = i + 1; j < Enemies.Num(); ++j)
		{
			UPrimitiveComponent* AreaB = Enemies[j].DetectionArea;
			if (!IsValid(AreaB))
			{
				continue;
			}

			if (AreaA->IsOverlappingComponent(AreaB))
			{
				Enemies[i].bHasDetectionOverlap = true;
				Enemies[j].bHasDetectionOverlap = true;
			}
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
		bool bNearOverlapActor = false;

		for (const FTaggedActorInfo& Enemy : Enemies)
		{
			const float Dx = Enemy.Location.X - ItemLoc.X;
			const float Dy = Enemy.Location.Y - ItemLoc.Y;
			const float Dist2DSq = (Dx * Dx) + (Dy * Dy);

			if (Dist2DSq > RadiusSq)
			{
				continue;
			}

			bAnyEnemyNear = true;
			bNearWeak |= Enemy.bWeak;
			bNearStrong |= Enemy.bStrong;
			bNearOverlapActor |= Enemy.bHasDetectionOverlap;

			if (bNearWeak && bNearStrong && bNearOverlapActor)
			{
				break;
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

			if (bNearOverlapActor)
			{
				RawScore -= DetectionOverlapPenalty;
			}
		}

		RawScore = FMath::Clamp(RawScore, 0.0f, 1.0f);
		It.SetScore(TestPurpose, FilterType, RawScore, 0.0f, 1.0f);

		if (bDrawRawScore && QueryInstance.bStoreDebugInfo)
		{
			const FVector TextLoc = ItemLoc + FVector(0.0f, 0.0f, DebugLabelZOffset);
			const FString DebugText = FString::Printf(TEXT("raw=%.2f"), RawScore);
			DrawDebugString(World, TextLoc, DebugText, nullptr, FColor::White, DebugDuration, true);
		}
	}
}

FText UEnvQueryTest_ManualScore::GetDescriptionTitle() const
{
	return FText::FromString(TEXT("Manual Score"));
}

FText UEnvQueryTest_ManualScore::GetDescriptionDetails() const
{
	return FText::FromString(
		TEXT("Scores EQS points by nearby BP_BaseAlly actors. Weak adds bonus, Strong applies penalty, DetectionArea overlap applies extra penalty.")
	);
}