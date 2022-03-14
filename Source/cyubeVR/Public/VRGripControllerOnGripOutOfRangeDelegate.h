#pragma once
#include "CoreMinimal.h"
#include "BPActorGripInformation.h"
#include "VRGripControllerOnGripOutOfRangeDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FVRGripControllerOnGripOutOfRange, const FBPActorGripInformation&, GripInformation, float, Distance);

