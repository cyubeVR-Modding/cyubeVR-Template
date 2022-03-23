#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ModLoad.generated.h"

UCLASS()
class CYUBEVR_API AModLoad : public AActor {
    GENERATED_BODY()
public:
    AModLoad();
    UFUNCTION(BlueprintCallable)
    static void GetModFilePaths(TArray<FString>& PathsOut, TArray<FString>& ModNamesOut);
    
};

