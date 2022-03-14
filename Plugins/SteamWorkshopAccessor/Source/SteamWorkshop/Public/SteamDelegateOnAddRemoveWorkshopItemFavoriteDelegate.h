#pragma once
#include "CoreMinimal.h"
#include "UserFavoriteItemChangedResult.h"
#include "SteamDelegateOnAddRemoveWorkshopItemFavoriteDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSteamDelegateOnAddRemoveWorkshopItemFavorite, FUserFavoriteItemChangedResult, Result);

