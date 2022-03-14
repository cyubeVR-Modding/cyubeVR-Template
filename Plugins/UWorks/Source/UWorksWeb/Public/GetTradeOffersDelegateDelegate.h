#pragma once
#include "CoreMinimal.h"
#include "GetTradeOffersDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FGetTradeOffersDelegate, bool, bSuccessful, const FString&, Content);

