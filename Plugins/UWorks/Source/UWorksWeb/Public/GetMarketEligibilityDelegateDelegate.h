#pragma once
#include "CoreMinimal.h"
#include "GetMarketEligibilityDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FGetMarketEligibilityDelegate, bool, bSuccessful, const FString&, Content);

