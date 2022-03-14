#pragma once
#include "CoreMinimal.h"
#include "GetTradeHistoryMinimalDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FGetTradeHistoryMinimalDelegate, bool, bSuccessful, const FString&, Content);

