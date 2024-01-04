#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "LivShotCutDelegateDelegate.h"
#include "LivShotTickDelegateDelegate.h"
#include "LivShotComponent.generated.h"

class ALivCameraController;
class ULivCaptureBase;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class LIV_API ULivShotComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float score;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float FOVAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverrideCamera: 1;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLivShotTickDelegate TickShotEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLivShotCutDelegate CutToEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLivShotCutDelegate CutFromEvent;
    
    ULivShotComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void TickShot(ALivCameraController* Controller, ULivCaptureBase* CaptureComponent, float ShotTime, float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnCutTo(ALivCameraController* Controller);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnCutFrom(ALivCameraController* Controller);
    
};

