#pragma once
#include "CoreMinimal.h"
#include "GetGameServerPlayerStatsForGameMinimalDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FGetGameServerPlayerStatsForGameMinimalDelegate, bool, bSuccessful, const FString&, Content);

