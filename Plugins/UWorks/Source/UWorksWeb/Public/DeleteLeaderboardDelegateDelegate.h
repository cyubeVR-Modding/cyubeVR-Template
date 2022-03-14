#pragma once
#include "CoreMinimal.h"
#include "DeleteLeaderboardDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FDeleteLeaderboardDelegate, bool, bSuccessful, const FString&, Content);

