#pragma once
#include "CoreMinimal.h"
#include "RankedByTrendDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FRankedByTrendDelegate, bool, bSuccessful, const FString&, Content);

