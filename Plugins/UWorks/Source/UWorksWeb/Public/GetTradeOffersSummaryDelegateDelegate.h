#pragma once
#include "CoreMinimal.h"
#include "GetTradeOffersSummaryDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FGetTradeOffersSummaryDelegate, bool, bSuccessful, const FString&, Content);

