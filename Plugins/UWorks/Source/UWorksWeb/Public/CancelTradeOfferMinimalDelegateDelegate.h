#pragma once
#include "CoreMinimal.h"
#include "CancelTradeOfferMinimalDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FCancelTradeOfferMinimalDelegate, bool, bSuccessful, const FString&, Content);

