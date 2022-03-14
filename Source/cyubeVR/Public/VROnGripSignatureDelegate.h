#pragma once
#include "CoreMinimal.h"
#include "BPActorGripInformation.h"
#include "VROnGripSignatureDelegate.generated.h"

class UGripMotionControllerComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FVROnGripSignature, UGripMotionControllerComponent*, GrippingController, const FBPActorGripInformation&, GripInformation);

