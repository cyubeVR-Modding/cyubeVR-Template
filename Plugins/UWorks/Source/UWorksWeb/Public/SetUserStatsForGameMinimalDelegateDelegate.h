#pragma once
#include "CoreMinimal.h"
#include "SetUserStatsForGameMinimalDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FSetUserStatsForGameMinimalDelegate, bool, bSuccessful, const FString&, Content);

