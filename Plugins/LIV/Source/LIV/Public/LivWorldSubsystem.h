#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Subsystems/WorldSubsystem.h"
#include "UObject/NoExportTypes.h"
#include "LivWorldSubsystem.generated.h"

class USceneComponent;
class ULivCaptureBase;

UCLASS(BlueprintType)
class LIV_API ULivWorldSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Export, Transient, meta=(AllowPrivateAccess=true))
    USceneComponent* CameraRoot;
    
    UPROPERTY(BlueprintReadWrite, Export, Transient, meta=(AllowPrivateAccess=true))
    ULivCaptureBase* CaptureComponent;
    
public:
    ULivWorldSubsystem();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform GetTrackingOriginTransform() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<ULivCaptureBase> GetCaptureComponentClass() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ULivCaptureBase* GetCaptureComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USceneComponent* GetCameraRoot() const;
    
};

