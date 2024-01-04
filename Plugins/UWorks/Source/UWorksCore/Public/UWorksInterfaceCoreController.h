#pragma once
#include "CoreMinimal.h"
#include "EUWorksControllerActionOrigin.h"
#include "EUWorksSteamControllerLEDFlag.h"
#include "EUWorksSteamControllerPad.h"
#include "UWorksControllerActionSetHandle.h"
#include "UWorksControllerAnalogActionData.h"
#include "UWorksControllerAnalogActionHandle.h"
#include "UWorksControllerDigitalActionData.h"
#include "UWorksControllerDigitalActionHandle.h"
#include "UWorksControllerHandle.h"
#include "UWorksControllerMotionData.h"
#include "UWorksInterfaceCore.h"
#include "UWorksInterfaceCoreController.generated.h"

class UUWorksInterfaceCoreController;

UCLASS(Blueprintable)
class UWORKSCORE_API UUWorksInterfaceCoreController : public UUWorksInterfaceCore {
    GENERATED_BODY()
public:
    UUWorksInterfaceCoreController();

    UFUNCTION(BlueprintCallable)
    void TriggerVibration(FUWorksControllerHandle ControllerHandle, int32 LeftSpeed, int32 RightSpeed);
    
    UFUNCTION(BlueprintCallable)
    void TriggerRepeatedHapticPulse(FUWorksControllerHandle ControllerHandle, EUWorksSteamControllerPad TargetPad, int32 DurationMicroSec, int32 OffMicroSec, int32 Repeat, int32 Flags);
    
    UFUNCTION(BlueprintCallable)
    void TriggerHapticPulse(FUWorksControllerHandle ControllerHandle, EUWorksSteamControllerPad TargetPad, int32 DurationMicroSec);
    
    UFUNCTION(BlueprintCallable)
    void StopAnalogActionMomentum(FUWorksControllerHandle ControllerHandle, FUWorksControllerAnalogActionHandle Action);
    
    UFUNCTION(BlueprintCallable)
    bool Shutdown();
    
    UFUNCTION(BlueprintCallable)
    bool ShowBindingPanel(FUWorksControllerHandle ControllerHandle);
    
    UFUNCTION(BlueprintCallable)
    void SetLEDColor(FUWorksControllerHandle ControllerHandle, uint8 ColorR, uint8 ColorG, uint8 ColorB, TArray<EUWorksSteamControllerLEDFlag> Flags);
    
    UFUNCTION(BlueprintCallable)
    void RunFrame();
    
    UFUNCTION(BlueprintCallable)
    bool Init();
    
    UFUNCTION(BlueprintCallable)
    FString GetStringForActionOrigin(EUWorksControllerActionOrigin Origin);
    
    UFUNCTION(BlueprintCallable)
    FUWorksControllerMotionData GetMotionData(FUWorksControllerHandle ControllerHandle);
    
    UFUNCTION(BlueprintCallable)
    FString GetGlyphForActionOrigin(EUWorksControllerActionOrigin Origin);
    
    UFUNCTION(BlueprintCallable)
    int32 GetGamepadIndexForController(FUWorksControllerHandle ControllerHandle);
    
    UFUNCTION(BlueprintCallable)
    int32 GetDigitalActionOrigins(FUWorksControllerHandle ControllerHandle, FUWorksControllerActionSetHandle ActionSetHandle, FUWorksControllerDigitalActionHandle DigitalActionHandle, TArray<EUWorksControllerActionOrigin>& OriginsOut);
    
    UFUNCTION(BlueprintCallable)
    FUWorksControllerDigitalActionHandle GetDigitalActionHandle(const FString& ActionName);
    
    UFUNCTION(BlueprintCallable)
    FUWorksControllerDigitalActionData GetDigitalActionData(FUWorksControllerHandle ControllerHandle, FUWorksControllerDigitalActionHandle DigitalActionHandle);
    
    UFUNCTION(BlueprintCallable)
    FUWorksControllerActionSetHandle GetCurrentActionSet(FUWorksControllerHandle ControllerHandle);
    
    UFUNCTION(BlueprintCallable)
    FUWorksControllerHandle GetControllerForGamepadIndex(int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UUWorksInterfaceCoreController* GetController();
    
    UFUNCTION(BlueprintCallable)
    int32 GetConnectedControllers(TArray<FUWorksControllerHandle>& HandlesOut);
    
    UFUNCTION(BlueprintCallable)
    int32 GetAnalogActionOrigins(FUWorksControllerHandle ControllerHandle, FUWorksControllerActionSetHandle ActionSetHandle, FUWorksControllerAnalogActionHandle AnalogActionHandle, TArray<EUWorksControllerActionOrigin>& OriginsOut);
    
    UFUNCTION(BlueprintCallable)
    FUWorksControllerAnalogActionHandle GetAnalogActionHandle(const FString& ActionName);
    
    UFUNCTION(BlueprintCallable)
    FUWorksControllerAnalogActionData GetAnalogActionData(FUWorksControllerHandle ControllerHandle, FUWorksControllerAnalogActionHandle AnalogActionHandle);
    
    UFUNCTION(BlueprintCallable)
    FUWorksControllerActionSetHandle GetActionSetHandle(const FString& ActionSetName);
    
    UFUNCTION(BlueprintCallable)
    void ActivateActionSet(FUWorksControllerHandle ControllerHandle, FUWorksControllerActionSetHandle ActionSetHandle);
    
};

