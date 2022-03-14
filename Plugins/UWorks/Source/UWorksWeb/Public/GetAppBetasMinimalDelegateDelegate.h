#pragma once
#include "CoreMinimal.h"
#include "GetAppBetasMinimalDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FGetAppBetasMinimalDelegate, bool, bSuccessful, const FString&, Content);

