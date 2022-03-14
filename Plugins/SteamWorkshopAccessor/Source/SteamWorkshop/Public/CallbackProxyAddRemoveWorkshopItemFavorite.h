#pragma once
#include "CoreMinimal.h"
#include "SteamUGCItemId.h"
#include "SteamDelegateOnAddRemoveWorkshopItemFavoriteDelegate.h"
#include "Net/OnlineBlueprintCallProxyBase.h"
#include "CallbackProxyAddRemoveWorkshopItemFavorite.generated.h"

class UCallbackProxyAddRemoveWorkshopItemFavorite;

UCLASS(MinimalAPI)
class UCallbackProxyAddRemoveWorkshopItemFavorite : public UOnlineBlueprintCallProxyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FSteamDelegateOnAddRemoveWorkshopItemFavorite OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FSteamDelegateOnAddRemoveWorkshopItemFavorite OnFailure;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FSteamDelegateOnAddRemoveWorkshopItemFavorite OnSteamInitFailure;
    
    UCallbackProxyAddRemoveWorkshopItemFavorite();
    UFUNCTION(BlueprintCallable)
    static UCallbackProxyAddRemoveWorkshopItemFavorite* SteamWorkshop_AddRemoveItemFavorite(const FSteamUGCItemId& ItemId, bool bAddToFavourites);
    
};

