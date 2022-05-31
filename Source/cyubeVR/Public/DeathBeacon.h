#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DeathBeacon.generated.h"

UCLASS(Blueprintable)
class CYUBEVR_API ADeathBeacon : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RemainingLife;
    
    ADeathBeacon();
};

