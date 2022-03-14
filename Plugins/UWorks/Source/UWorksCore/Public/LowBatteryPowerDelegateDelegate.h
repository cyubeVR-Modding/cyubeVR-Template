#pragma once
#include "CoreMinimal.h"
#include "LowBatteryPowerDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FLowBatteryPowerDelegate, int32, MinutesBatteryLeft);

