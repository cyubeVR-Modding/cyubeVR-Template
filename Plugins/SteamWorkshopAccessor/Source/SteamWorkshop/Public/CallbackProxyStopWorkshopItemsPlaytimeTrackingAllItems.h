#pragma once
#include "CoreMinimal.h"
#include "Net/OnlineBlueprintCallProxyBase.h"
#include "SteamDelegateOnStopWorkshopPlaytimeTrackingAllItemsDelegate.h"
#include "CallbackProxyStopWorkshopItemsPlaytimeTrackingAllItems.generated.h"

class UCallbackProxyStopWorkshopItemsPlaytimeTrackingAllItems;

UCLASS(Blueprintable, MinimalAPI)
class UCallbackProxyStopWorkshopItemsPlaytimeTrackingAllItems : public UOnlineBlueprintCallProxyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSteamDelegateOnStopWorkshopPlaytimeTrackingAllItems OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSteamDelegateOnStopWorkshopPlaytimeTrackingAllItems OnFailure;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSteamDelegateOnStopWorkshopPlaytimeTrackingAllItems OnSteamInitFailure;
    
    UCallbackProxyStopWorkshopItemsPlaytimeTrackingAllItems();

    UFUNCTION(BlueprintCallable)
    static UCallbackProxyStopWorkshopItemsPlaytimeTrackingAllItems* SteamWorkshop_StopPlaytimeTrackingAllItems();
    
};

