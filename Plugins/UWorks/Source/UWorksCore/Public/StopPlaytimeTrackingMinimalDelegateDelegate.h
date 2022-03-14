#pragma once
#include "CoreMinimal.h"
#include "EUWorksResult.h"
#include "StopPlaytimeTrackingMinimalDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FStopPlaytimeTrackingMinimalDelegate, bool, bSuccessful, EUWorksResult, Result);

