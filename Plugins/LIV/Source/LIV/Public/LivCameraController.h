#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "LivCameraController.generated.h"

class ULivShotComponent;

UCLASS(Blueprintable, NotPlaceable, Transient)
class LIV_API ALivCameraController : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    ULivShotComponent* CurrentShot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CurrentShotTime;
    
    ALivCameraController(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void TickCurrentShot(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentShot(ULivShotComponent* ShotComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ULivShotComponent* GetCurrentShot() const;
    
};

