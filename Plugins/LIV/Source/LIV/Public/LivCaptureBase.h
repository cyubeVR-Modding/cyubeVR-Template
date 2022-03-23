#pragma once
#include "CoreMinimal.h"
#include "Components/SceneCaptureComponent2D.h"
#include "LivActivationDelegateDelegate.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "LivCaptureBase.generated.h"

UCLASS(Abstract, EditInlineNew, meta=(BlueprintSpawnableComponent))
class LIV_API ULivCaptureBase : public USceneCaptureComponent2D {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FLivActivationDelegate OnLivCaptureActivated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FLivActivationDelegate OnLivCaptureDeactivated;
    
    ULivCaptureBase();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLivCapturing() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMatrix GetClipPlaneTransform() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetClipPlaneLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetClipPlaneForward() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRotator GetCameraRotation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetCameraLocation() const;
    
};

