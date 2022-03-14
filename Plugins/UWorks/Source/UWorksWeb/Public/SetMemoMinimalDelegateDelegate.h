#pragma once
#include "CoreMinimal.h"
#include "SetMemoMinimalDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FSetMemoMinimalDelegate, bool, bSuccessful, const FString&, Content);

