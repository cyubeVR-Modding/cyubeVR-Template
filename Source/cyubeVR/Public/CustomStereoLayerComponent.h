#pragma once
#include "CoreMinimal.h"
#include "Components/StereoLayerComponent.h"
#include "CustomStereoLayerComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class CYUBEVR_API UCustomStereoLayerComponent : public UStereoLayerComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DoDestroy;
    
    UCustomStereoLayerComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UseOldLayerId();
    
    UFUNCTION(BlueprintCallable)
    void MarkDirty();
    
    UFUNCTION(BlueprintCallable)
    void ManualDestroy();
    
};

