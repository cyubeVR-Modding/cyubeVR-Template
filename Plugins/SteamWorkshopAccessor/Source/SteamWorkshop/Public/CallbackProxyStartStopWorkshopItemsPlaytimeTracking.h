#pragma once
#include "CoreMinimal.h"
#include "Net/OnlineBlueprintCallProxyBase.h"
#include "SteamDelegateOnStartStopWorkshopItemsPlaytimeTrackingDelegate.h"
#include "SteamUGCItemId.h"
#include "CallbackProxyStartStopWorkshopItemsPlaytimeTracking.generated.h"

class UCallbackProxyStartStopWorkshopItemsPlaytimeTracking;

UCLASS(Blueprintable, MinimalAPI)
class UCallbackProxyStartStopWorkshopItemsPlaytimeTracking : public UOnlineBlueprintCallProxyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSteamDelegateOnStartStopWorkshopItemsPlaytimeTracking OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSteamDelegateOnStartStopWorkshopItemsPlaytimeTracking OnFailure;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSteamDelegateOnStartStopWorkshopItemsPlaytimeTracking OnSteamInitFailure;
    
    UCallbackProxyStartStopWorkshopItemsPlaytimeTracking();
    UFUNCTION(BlueprintCallable)
    static UCallbackProxyStartStopWorkshopItemsPlaytimeTracking* SteamWorkshop_StartStopItemsPlaytimeTracking(const TArray<FSteamUGCItemId>& itemIds, bool bStartPlaytimeTracking);
    
};

