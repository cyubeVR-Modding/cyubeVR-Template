#pragma once
#include "CoreMinimal.h"
#include "GetUserHistoryMinimalDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FGetUserHistoryMinimalDelegate, bool, bSuccessful, const FString&, Content);

