#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "LeaderboardManagerCPP.generated.h"

UCLASS(Blueprintable)
class CYUBEVR_API ALeaderboardManagerCPP : public AActor {
    GENERATED_BODY()
public:
    ALeaderboardManagerCPP(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SubmitStatBlocksPlaced();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SubmitStatBlocksCrafted();
    
};

