#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameStateBase.h"
#include "CubeGameState.generated.h"

class ABlockItem;
class AChunkManager;
class UTexture2D;

UCLASS(Blueprintable)
class CYUBEVR_API ACubeGameState : public AGameStateBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AChunkManager* ChunkManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxBlockitemsWithParticles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABlockItem* OtherHandBlockItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, UTexture2D*> AlreadyLoadedTextures;
    
    ACubeGameState(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RemoveAllActivelyHeldBlockItems();
    
    UFUNCTION(BlueprintCallable)
    void RemoveActivelyHeldBlockItem(ABlockItem* BlockItem);
    
    UFUNCTION(BlueprintCallable)
    void ManageHeldBlockItems();
    
    UFUNCTION(BlueprintCallable)
    void AddActivelyHeldBlockItems(TArray<ABlockItem*> BlockItems);
    
    UFUNCTION(BlueprintCallable)
    void AddActivelyHeldBlockItem(ABlockItem* BlockItem);
    
};

