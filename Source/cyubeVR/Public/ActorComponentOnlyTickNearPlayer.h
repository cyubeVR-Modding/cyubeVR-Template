#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ActorComponentOnlyTickNearPlayer.generated.h"

class USceneComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class CYUBEVR_API UActorComponentOnlyTickNearPlayer : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* ComponentForLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TickDistanceToPlayer;
    
    UActorComponentOnlyTickNearPlayer(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CustomTick(float DeltaSeconds);
    
};

