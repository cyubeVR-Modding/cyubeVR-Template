#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "LivThirdPersonShotActor.generated.h"

class ALivCameraController;
class ULivSpringArmComponent;
class ULivShotComponent;
class ULivCaptureBase;

UCLASS(Blueprintable)
class LIV_API ALivThirdPersonShotActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    ULivSpringArmComponent* SpringArm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    ULivShotComponent* ShotComponent;
    
    ALivThirdPersonShotActor();
    UFUNCTION(BlueprintCallable)
    void TickSpringArm(ALivCameraController* Controller, ULivCaptureBase* CaptureComponent, float ShotTime, float DeltaTime);
    
};

