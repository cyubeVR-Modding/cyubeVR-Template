#pragma once
#include "CoreMinimal.h"
#include "Net/OnlineBlueprintCallProxyBase.h"
#include "SteamDelegateOnAddRemoveWorkshopItemFavoriteDelegate.h"
#include "SteamUGCItemId.h"
#include "CallbackProxyAddRemoveWorkshopItemFavorite.generated.h"

class UCallbackProxyAddRemoveWorkshopItemFavorite;

UCLASS(Blueprintable, MinimalAPI)
class UCallbackProxyAddRemoveWorkshopItemFavorite : public UOnlineBlueprintCallProxyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSteamDelegateOnAddRemoveWorkshopItemFavorite OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSteamDelegateOnAddRemoveWorkshopItemFavorite OnFailure;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSteamDelegateOnAddRemoveWorkshopItemFavorite OnSteamInitFailure;
    
    UCallbackProxyAddRemoveWorkshopItemFavorite();
    UFUNCTION(BlueprintCallable)
    static UCallbackProxyAddRemoveWorkshopItemFavorite* SteamWorkshop_AddRemoveItemFavorite(const FSteamUGCItemId& ItemId, bool bAddToFavourites);
    
};

