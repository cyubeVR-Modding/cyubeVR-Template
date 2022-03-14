#pragma once
#include "CoreMinimal.h"
#include "CanTradeMinimalDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FCanTradeMinimalDelegate, bool, bSuccessful, const FString&, Content);

