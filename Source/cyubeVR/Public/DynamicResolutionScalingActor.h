#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DynamicResolutionScalingActor.generated.h"

UCLASS(Blueprintable)
class CYUBEVR_API ADynamicResolutionScalingActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DynamicResolutionScalingActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DynamicResolutionScalingActiveNew;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DynamicResolutionScalingActiveInt;
    
    ADynamicResolutionScalingActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    static bool IsVeryHighEndGPU();
    
    UFUNCTION(BlueprintCallable)
    static bool IsHighEndGPU();
    
};

