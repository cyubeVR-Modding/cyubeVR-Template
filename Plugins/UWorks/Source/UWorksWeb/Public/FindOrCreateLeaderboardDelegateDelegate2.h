#pragma once
#include "CoreMinimal.h"
#include "FindOrCreateLeaderboardDelegateDelegate2.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FFindOrCreateLeaderboardDelegate, bool, bSuccessful, const FString&, Content);

