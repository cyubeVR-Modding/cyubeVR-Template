#pragma once
#include "CoreMinimal.h"
#include "GetQuantityMinimalDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FGetQuantityMinimalDelegate, bool, bSuccessful, const FString&, Content);

