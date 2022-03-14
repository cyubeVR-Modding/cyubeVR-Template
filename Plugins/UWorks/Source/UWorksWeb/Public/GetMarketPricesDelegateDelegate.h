#pragma once
#include "CoreMinimal.h"
#include "GetMarketPricesDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FGetMarketPricesDelegate, bool, bSuccessful, const FString&, Content);

