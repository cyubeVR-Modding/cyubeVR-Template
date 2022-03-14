#pragma once
#include "CoreMinimal.h"
#include "EUWorksResult.h"
#include "StopPlaytimeTrackingDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FStopPlaytimeTrackingDelegate, bool, bSuccessful, EUWorksResult, Result);

