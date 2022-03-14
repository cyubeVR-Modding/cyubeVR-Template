#pragma once
#include "CoreMinimal.h"
#include "GetItemDefsMinimalDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FGetItemDefsMinimalDelegate, bool, bSuccessful, const FString&, Content);

