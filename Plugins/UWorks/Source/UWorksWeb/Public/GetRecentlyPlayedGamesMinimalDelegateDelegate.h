#pragma once
#include "CoreMinimal.h"
#include "GetRecentlyPlayedGamesMinimalDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FGetRecentlyPlayedGamesMinimalDelegate, bool, bSuccessful, const FString&, Content);

