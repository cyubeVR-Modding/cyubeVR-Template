#pragma once
#include "CoreMinimal.h"
#include "GetHistoryCommandDetailsMinimalDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FGetHistoryCommandDetailsMinimalDelegate, bool, bSuccessful, const FString&, Content);

