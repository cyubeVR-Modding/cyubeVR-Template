#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameStateBase.h"
#include "CubeGameState.generated.h"

class UTexture2D;
class AChunkManager;

UCLASS(Blueprintable)
class CYUBEVR_API ACubeGameState : public AGameStateBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AChunkManager* ChunkManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, UTexture2D*> AlreadyLoadedTextures;
    
    ACubeGameState();
};

