#pragma once
#include "CoreMinimal.h"
#include "GetRecentlyPlayedGamesDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FGetRecentlyPlayedGamesDelegate, bool, bSuccessful, const FString&, Content);

