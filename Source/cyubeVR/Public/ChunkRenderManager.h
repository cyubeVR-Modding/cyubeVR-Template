#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ChunkRenderManager.generated.h"

UCLASS(Blueprintable)
class CYUBEVR_API AChunkRenderManager : public AActor {
    GENERATED_BODY()
public:
    AChunkRenderManager(const FObjectInitializer& ObjectInitializer);

};

