#pragma once
#include "CoreMinimal.h"
#include "Navigation/PathFollowingComponent.h"
#include "SurfaceNavAIMoveResultOutputPinDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSurfaceNavAIMoveResultOutputPin, TEnumAsByte<EPathFollowingResult::Type>, MovementResult);

