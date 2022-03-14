#pragma once
#include "CoreMinimal.h"
#include "GetInventoryMinimalDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FGetInventoryMinimalDelegate, bool, bSuccessful, const FString&, Content);

