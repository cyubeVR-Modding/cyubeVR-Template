#pragma once
#include "CoreMinimal.h"
#include "Net/OnlineBlueprintCallProxyBase.h"
#include "SteamUGCItemId.h"
#include "SteamDelegateOnGetUserVoteOnWorkshopItemDelegate.h"
#include "CallbackProxyGetUserVoteOnWorkshopItem.generated.h"

class UCallbackProxyGetUserVoteOnWorkshopItem;

UCLASS(Blueprintable, MinimalAPI)
class UCallbackProxyGetUserVoteOnWorkshopItem : public UOnlineBlueprintCallProxyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSteamDelegateOnGetUserVoteOnWorkshopItem OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSteamDelegateOnGetUserVoteOnWorkshopItem OnFailure;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSteamDelegateOnGetUserVoteOnWorkshopItem OnSteamInitFailure;
    
    UCallbackProxyGetUserVoteOnWorkshopItem();

    UFUNCTION(BlueprintCallable)
    static UCallbackProxyGetUserVoteOnWorkshopItem* SteamWorkshop_GetUserVoteOnItem(const FSteamUGCItemId& ItemId);
    
};

