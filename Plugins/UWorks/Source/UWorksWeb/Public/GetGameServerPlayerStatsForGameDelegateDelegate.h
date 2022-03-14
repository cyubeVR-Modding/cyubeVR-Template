#pragma once
#include "CoreMinimal.h"
#include "GetGameServerPlayerStatsForGameDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FGetGameServerPlayerStatsForGameDelegate, bool, bSuccessful, const FString&, Content);

