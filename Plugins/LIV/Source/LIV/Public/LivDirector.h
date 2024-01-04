#pragma once
#include "CoreMinimal.h"
#include "LivCameraController.h"
#include "LivDirector.generated.h"

class ULivShotComponent;

UCLASS(Blueprintable, NonTransient)
class LIV_API ALivDirector : public ALivCameraController {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<ULivShotComponent*> Shots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxShotLength;
    
    ALivDirector(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void FindShots();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Cut();
    
};

