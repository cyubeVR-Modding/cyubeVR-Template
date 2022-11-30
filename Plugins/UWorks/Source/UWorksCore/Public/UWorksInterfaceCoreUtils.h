#pragma once
#include "CoreMinimal.h"
#include "IPCountryDelegateDelegate.h"
#include "UWorksInterfaceCore.h"
#include "EUWorksUniverse.h"
#include "SteamShutdownDelegateDelegate.h"
#include "LowBatteryPowerDelegateDelegate.h"
#include "GamepadTextInputDismissedDelegateDelegate.h"
#include "EUWorksGamepadTextInputLineMode.h"
#include "EUWorksGamepadTextInputMode.h"
#include "EUWorksNotificationPosition.h"
#include "UWorksInterfaceCoreUtils.generated.h"

class UUWorksInterfaceCoreUtils;

UCLASS(Blueprintable)
class UWORKSCORE_API UUWorksInterfaceCoreUtils : public UUWorksInterfaceCore {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIPCountryDelegate IPCountry;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLowBatteryPowerDelegate LowBatteryPower;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSteamShutdownDelegate SteamShutdown;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGamepadTextInputDismissedDelegate GamepadTextInputDismissed;
    
    UUWorksInterfaceCoreUtils();
    UFUNCTION(BlueprintCallable)
    void StartVRDashboard();
    
    UFUNCTION(BlueprintCallable)
    bool ShowGamepadTextInput(EUWorksGamepadTextInputMode InputMode, EUWorksGamepadTextInputLineMode LineInputMode, const FString& Description, int32 CharMax, const FString& ExistingText);
    
    UFUNCTION(BlueprintCallable)
    void SetOverlayNotificationPosition(EUWorksNotificationPosition NotificationPosition);
    
    UFUNCTION(BlueprintCallable)
    void SetOverlayNotificationInset(int32 HorizontalInset, int32 VerticalInset);
    
    UFUNCTION(BlueprintCallable)
    bool IsSteamRunningInVR();
    
    UFUNCTION(BlueprintCallable)
    bool IsSteamInBigPictureMode();
    
    UFUNCTION(BlueprintCallable)
    bool IsOverlayEnabled();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UUWorksInterfaceCoreUtils* GetUtils();
    
    UFUNCTION(BlueprintCallable)
    FString GetSteamUILanguage();
    
    UFUNCTION(BlueprintCallable)
    int32 GetServerRealTime();
    
    UFUNCTION(BlueprintCallable)
    int32 GetSecondsSinceComputerActive();
    
    UFUNCTION(BlueprintCallable)
    int32 GetSecondsSinceAppActive();
    
    UFUNCTION(BlueprintCallable)
    FString GetIPCountry();
    
    UFUNCTION(BlueprintCallable)
    int32 GetIPCCallCount();
    
    UFUNCTION(BlueprintCallable)
    int32 GetEnteredGamepadTextLength();
    
    UFUNCTION(BlueprintCallable)
    bool GetEnteredGamepadTextInput(FString& Text, int32 TextMaxLength);
    
    UFUNCTION(BlueprintCallable)
    uint8 GetCurrentBatteryPower();
    
    UFUNCTION(BlueprintCallable)
    EUWorksUniverse GetConnectedUniverse();
    
    UFUNCTION(BlueprintCallable)
    int32 GetAppID();
    
    UFUNCTION(BlueprintCallable)
    bool BOverlayNeedsPresent();
    
};

