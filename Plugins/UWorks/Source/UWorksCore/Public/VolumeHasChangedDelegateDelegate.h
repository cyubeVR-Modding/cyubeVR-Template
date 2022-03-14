#pragma once
#include "CoreMinimal.h"
#include "VolumeHasChangedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FVolumeHasChangedDelegate, float, NewVolume);

