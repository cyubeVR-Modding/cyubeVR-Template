#pragma once
#include "CoreMinimal.h"
#include "UWorksPublishedFileID.h"
#include "EUWorksResult.h"
#include "AddItemToFavoritesDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FAddItemToFavoritesDelegate, bool, bSuccessful, FUWorksPublishedFileID, PublishedFileID, EUWorksResult, Result, bool, bWasAddRequest);

