#pragma once
#include "CoreMinimal.h"
#include "UWorksPublishedFileID.h"
#include "EUWorksResult.h"
#include "AddItemToFavoritesMinimalDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_FourParams(FAddItemToFavoritesMinimalDelegate, bool, bSuccessful, FUWorksPublishedFileID, PublishedFileID, EUWorksResult, Result, bool, bWasAddRequest);

