#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameStateBase.h"
#include "MC_GameState.generated.h"

class UTexture2D;
class AChunkManager;

UCLASS()
class CYUBEVR_API AMC_GameState : public AGameStateBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AChunkManager* ChunkManager;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TMap<FString, UTexture2D*> AlreadyLoadedTextures;
    
    AMC_GameState();
};

