#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ModLoad.generated.h"

UCLASS(Blueprintable)
class CYUBEVR_API AModLoad : public AActor {
    GENERATED_BODY()
public:
    AModLoad(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    static void GetModFilePaths(TArray<FString>& PathsOut, TArray<FString>& ModNamesOut);
    
};

