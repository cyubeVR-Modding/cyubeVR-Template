#pragma once
#include "CoreMinimal.h"
#include "UWorksPublishedFileID.h"
#include "EUWorksResult.h"
#include "RemoveItemFromFavoritesMinimalDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_FourParams(FRemoveItemFromFavoritesMinimalDelegate, bool, bSuccessful, FUWorksPublishedFileID, PublishedFileID, EUWorksResult, Result, bool, bWasAddRequest);

