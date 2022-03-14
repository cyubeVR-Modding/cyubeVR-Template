#pragma once
#include "CoreMinimal.h"
#include "GetGlobalStatsForGameMinimalDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FGetGlobalStatsForGameMinimalDelegate, bool, bSuccessful, const FString&, Content);

