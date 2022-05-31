#pragma once
#include "CoreMinimal.h"
#include "MeshObject.h"
#include "EBlockTypeBP.h"
#include "Tool.generated.h"

class AChunkManager;
class ACharacter;

UCLASS(Blueprintable)
class CYUBEVR_API ATool : public AMeshObject {
    GENERATED_BODY()
public:
    ATool();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InitTool(EBlockTypeBP Type_, AChunkManager* ChunkManager_, ACharacter* Player_);
    
    UFUNCTION(BlueprintCallable)
    void DestroyTool();
    
};

