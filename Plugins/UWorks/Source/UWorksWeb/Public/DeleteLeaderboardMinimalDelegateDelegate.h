#pragma once
#include "CoreMinimal.h"
#include "DeleteLeaderboardMinimalDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FDeleteLeaderboardMinimalDelegate, bool, bSuccessful, const FString&, Content);

