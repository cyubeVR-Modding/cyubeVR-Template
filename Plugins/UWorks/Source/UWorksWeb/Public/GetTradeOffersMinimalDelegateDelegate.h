#pragma once
#include "CoreMinimal.h"
#include "GetTradeOffersMinimalDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FGetTradeOffersMinimalDelegate, bool, bSuccessful, const FString&, Content);

