#pragma once
#include "CoreMinimal.h"
#include "GetPlayerSummariesMinimalDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FGetPlayerSummariesMinimalDelegate, bool, bSuccessful, const FString&, Content);

