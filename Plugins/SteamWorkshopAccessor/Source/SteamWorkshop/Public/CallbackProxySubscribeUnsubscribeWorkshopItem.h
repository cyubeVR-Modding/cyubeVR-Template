#pragma once
#include "CoreMinimal.h"
#include "SteamUGCItemId.h"
#include "SteamDelegateOnSubscribeUnsubscribeWorkshopItemDelegate.h"
#include "Net/OnlineBlueprintCallProxyBase.h"
#include "CallbackProxySubscribeUnsubscribeWorkshopItem.generated.h"

class UCallbackProxySubscribeUnsubscribeWorkshopItem;

UCLASS(MinimalAPI)
class UCallbackProxySubscribeUnsubscribeWorkshopItem : public UOnlineBlueprintCallProxyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FSteamDelegateOnSubscribeUnsubscribeWorkshopItem OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FSteamDelegateOnSubscribeUnsubscribeWorkshopItem OnFailure;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FSteamDelegateOnSubscribeUnsubscribeWorkshopItem OnSteamInitFailure;
    
    UCallbackProxySubscribeUnsubscribeWorkshopItem();
    UFUNCTION(BlueprintCallable)
    static UCallbackProxySubscribeUnsubscribeWorkshopItem* SteamWorkshop_SubscribeUnsubscribeItem(const FSteamUGCItemId& ItemId, bool bSubscribe);
    
};

