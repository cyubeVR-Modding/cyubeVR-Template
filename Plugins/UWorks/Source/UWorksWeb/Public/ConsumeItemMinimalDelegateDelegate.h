#pragma once
#include "CoreMinimal.h"
#include "ConsumeItemMinimalDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FConsumeItemMinimalDelegate, bool, bSuccessful, const FString&, Content);

