#pragma once
#include "CoreMinimal.h"
#include "GetItemDailyRevenueMinimalDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FGetItemDailyRevenueMinimalDelegate, bool, bSuccessful, const FString&, Content);

