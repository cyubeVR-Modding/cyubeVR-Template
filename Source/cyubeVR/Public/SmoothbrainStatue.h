#pragma once
#include "CoreMinimal.h"
#include "MeshObject.h"
#include "SmoothbrainStatue.generated.h"

UCLASS(Blueprintable)
class CYUBEVR_API ASmoothbrainStatue : public AMeshObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HasCrystalInside;
    
    ASmoothbrainStatue(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateVisuals();
    
};

