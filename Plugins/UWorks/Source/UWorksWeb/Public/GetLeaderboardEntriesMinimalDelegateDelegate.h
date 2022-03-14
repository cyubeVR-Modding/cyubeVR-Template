#pragma once
#include "CoreMinimal.h"
#include "GetLeaderboardEntriesMinimalDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FGetLeaderboardEntriesMinimalDelegate, bool, bSuccessful, const FString&, Content);

