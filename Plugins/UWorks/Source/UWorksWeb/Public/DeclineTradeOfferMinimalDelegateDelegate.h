#pragma once
#include "CoreMinimal.h"
#include "DeclineTradeOfferMinimalDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FDeclineTradeOfferMinimalDelegate, bool, bSuccessful, const FString&, Content);

