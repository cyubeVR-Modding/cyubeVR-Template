#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Subsystems/LocalPlayerSubsystem.h"
#include "LivLocalPlayerActivationDelegateDelegate.h"
#include "LivCaptureContext.h"
#include "LivLocalPlayerSubsystem.generated.h"

class AActor;
class ULocalPlayer;
class ULivCaptureBase;
class UPrimitiveComponent;
class ULivWorldSubsystem;

UCLASS(Blueprintable)
class LIV_API ULivLocalPlayerSubsystem : public ULocalPlayerSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLivLocalPlayerActivationDelegate OnCaptureActivated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLivLocalPlayerActivationDelegate OnCaptureDeactivated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FLivCaptureContext CaptureContext;
    
    ULivLocalPlayerSubsystem();
    UFUNCTION(BlueprintCallable)
    void ShowComponent(UPrimitiveComponent* InComponent);
    
    UFUNCTION(BlueprintCallable)
    void ShowActor(AActor* InActor);
    
    UFUNCTION(BlueprintCallable)
    void ResetCapture();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCaptureActive() const;
    
    UFUNCTION(BlueprintCallable)
    void HideComponent(UPrimitiveComponent* InComponent);
    
    UFUNCTION(BlueprintCallable)
    void HideActor(AActor* InActor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ULocalPlayer* GetLocalPlayerBP() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ULivWorldSubsystem* GetLivWorldSubsystem() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLivCaptureContext GetCaptureContext() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<ULivCaptureBase> GetCaptureComponentClass() const;
    
    UFUNCTION(BlueprintCallable)
    void ClearHiddenComponents();
    
    UFUNCTION(BlueprintCallable)
    void ClearHiddenActors();
    
};

