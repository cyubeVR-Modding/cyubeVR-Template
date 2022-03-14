#pragma once
#include "CoreMinimal.h"
#include "SteamUGCItemId.h"
#include "Net/OnlineBlueprintCallProxyBase.h"
#include "SteamDelegateOnSetUserVoteOnWorkshopItemDelegate.h"
#include "CallbackProxySetUserVoteOnWorkshopItem.generated.h"

class UCallbackProxySetUserVoteOnWorkshopItem;

UCLASS(MinimalAPI)
class UCallbackProxySetUserVoteOnWorkshopItem : public UOnlineBlueprintCallProxyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FSteamDelegateOnSetUserVoteOnWorkshopItem OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FSteamDelegateOnSetUserVoteOnWorkshopItem OnFailure;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FSteamDelegateOnSetUserVoteOnWorkshopItem OnSteamInitFailure;
    
    UCallbackProxySetUserVoteOnWorkshopItem();
    UFUNCTION(BlueprintCallable)
    static UCallbackProxySetUserVoteOnWorkshopItem* SteamWorkshop_SetUserVoteOnItem(const FSteamUGCItemId& ItemId, bool bVoteUp);
    
};

