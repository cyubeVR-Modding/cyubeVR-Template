#pragma once
#include "CoreMinimal.h"
#include "GetMarketPricesMinimalDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FGetMarketPricesMinimalDelegate, bool, bSuccessful, const FString&, Content);

