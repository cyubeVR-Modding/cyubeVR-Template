#pragma once
#include "CoreMinimal.h"
#include "GetAppBetasDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FGetAppBetasDelegate, bool, bSuccessful, const FString&, Content);

