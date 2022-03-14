#pragma once
#include "CoreMinimal.h"
#include "StartTradeMinimalDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FStartTradeMinimalDelegate, bool, bSuccessful, const FString&, Content);

