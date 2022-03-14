#pragma once
#include "CoreMinimal.h"
#include "GetTradeHistoryDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FGetTradeHistoryDelegate, bool, bSuccessful, const FString&, Content);

