#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EBlockTypeBP.h"
#include "CraftDraftVisualizer.generated.h"

UCLASS(Blueprintable)
class CYUBEVR_API ACraftDraftVisualizer : public AActor {
    GENERATED_BODY()
public:
    ACraftDraftVisualizer();
    UFUNCTION(BlueprintCallable)
    void GetDraft(EBlockTypeBP Type, int32& SizeX, int32& SizeY, int32& SizeZ, int32& TotalSize, int32& ItemAmount, TArray<EBlockTypeBP>& Data);
    
};

