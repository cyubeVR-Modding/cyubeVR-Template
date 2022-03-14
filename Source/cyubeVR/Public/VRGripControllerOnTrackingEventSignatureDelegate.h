#pragma once
#include "CoreMinimal.h"
#include "IMotionController.h"
#include "VRGripControllerOnTrackingEventSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FVRGripControllerOnTrackingEventSignature, const ETrackingStatus&, NewTrackingStatus);

