#pragma once
#include "CoreMinimal.h"
#include "GetPlayerSummariesDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FGetPlayerSummariesDelegate, bool, bSuccessful, const FString&, Content);

