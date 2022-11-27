#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Subsystems/WorldSubsystem.h"
#include "UObject/NoExportTypes.h"
#include "LivWorldSubsystem.generated.h"

class ALivCameraController;
class USceneComponent;
class ULivCaptureBase;
class UCameraComponent;

UCLASS(Blueprintable)
class LIV_API ULivWorldSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USceneComponent* CameraRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    ULivCaptureBase* CaptureComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USceneComponent* TrackingOriginComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ALivCameraController* CameraController;
    
public:
    ULivWorldSubsystem();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform GetTrackingOriginTransform() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USceneComponent* GetPlayerCameraParent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCameraComponent* GetPlayerCamera() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<ULivCaptureBase> GetCaptureComponentClass() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ULivCaptureBase* GetCaptureComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USceneComponent* GetCameraRoot() const;
    
};

