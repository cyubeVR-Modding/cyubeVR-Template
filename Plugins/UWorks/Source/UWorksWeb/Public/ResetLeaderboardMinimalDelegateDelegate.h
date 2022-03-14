#pragma once
#include "CoreMinimal.h"
#include "ResetLeaderboardMinimalDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FResetLeaderboardMinimalDelegate, bool, bSuccessful, const FString&, Content);

