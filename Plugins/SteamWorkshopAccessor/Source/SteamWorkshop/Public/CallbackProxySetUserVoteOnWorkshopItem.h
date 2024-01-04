#pragma once
#include "CoreMinimal.h"
#include "Net/OnlineBlueprintCallProxyBase.h"
#include "SteamUGCItemId.h"
#include "SteamDelegateOnSetUserVoteOnWorkshopItemDelegate.h"
#include "CallbackProxySetUserVoteOnWorkshopItem.generated.h"

class UCallbackProxySetUserVoteOnWorkshopItem;

UCLASS(Blueprintable, MinimalAPI)
class UCallbackProxySetUserVoteOnWorkshopItem : public UOnlineBlueprintCallProxyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSteamDelegateOnSetUserVoteOnWorkshopItem OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSteamDelegateOnSetUserVoteOnWorkshopItem OnFailure;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSteamDelegateOnSetUserVoteOnWorkshopItem OnSteamInitFailure;
    
    UCallbackProxySetUserVoteOnWorkshopItem();

    UFUNCTION(BlueprintCallable)
    static UCallbackProxySetUserVoteOnWorkshopItem* SteamWorkshop_SetUserVoteOnItem(const FSteamUGCItemId& ItemId, bool bVoteUp);
    
};

