#pragma once
#include "CoreMinimal.h"
#include "BPActorGripInformation.h"
#include "VROnDropSignatureDelegate.generated.h"

class UGripMotionControllerComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FVROnDropSignature, UGripMotionControllerComponent*, GrippingController, const FBPActorGripInformation&, GripInformation, bool, bWasSocketed);

