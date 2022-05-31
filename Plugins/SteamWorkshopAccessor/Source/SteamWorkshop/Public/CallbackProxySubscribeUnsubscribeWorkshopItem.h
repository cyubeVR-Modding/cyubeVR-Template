#pragma once
#include "CoreMinimal.h"
#include "Net/OnlineBlueprintCallProxyBase.h"
#include "SteamDelegateOnSubscribeUnsubscribeWorkshopItemDelegate.h"
#include "SteamUGCItemId.h"
#include "CallbackProxySubscribeUnsubscribeWorkshopItem.generated.h"

class UCallbackProxySubscribeUnsubscribeWorkshopItem;

UCLASS(Blueprintable, MinimalAPI)
class UCallbackProxySubscribeUnsubscribeWorkshopItem : public UOnlineBlueprintCallProxyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSteamDelegateOnSubscribeUnsubscribeWorkshopItem OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSteamDelegateOnSubscribeUnsubscribeWorkshopItem OnFailure;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSteamDelegateOnSubscribeUnsubscribeWorkshopItem OnSteamInitFailure;
    
    UCallbackProxySubscribeUnsubscribeWorkshopItem();
    UFUNCTION(BlueprintCallable)
    static UCallbackProxySubscribeUnsubscribeWorkshopItem* SteamWorkshop_SubscribeUnsubscribeItem(const FSteamUGCItemId& ItemId, bool bSubscribe);
    
};

