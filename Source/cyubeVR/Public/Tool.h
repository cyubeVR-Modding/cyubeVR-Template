#pragma once
#include "CoreMinimal.h"
#include "EBlockTypeBP.h"
#include "MeshObject.h"
#include "Tool.generated.h"

class ACharacter;
class AChunkManager;

UCLASS(Blueprintable)
class CYUBEVR_API ATool : public AMeshObject {
    GENERATED_BODY()
public:
    ATool(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InitTool(EBlockTypeBP Type_, AChunkManager* ChunkManager_, ACharacter* Player_);
    
    UFUNCTION(BlueprintCallable)
    void DestroyTool();
    
};

