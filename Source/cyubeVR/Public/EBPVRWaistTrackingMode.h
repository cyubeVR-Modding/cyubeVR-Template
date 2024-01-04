#pragma once
#include "CoreMinimal.h"
#include "EBPVRWaistTrackingMode.generated.h"

UENUM(BlueprintType)
enum class EBPVRWaistTrackingMode : uint8 {
    VRWaist_Tracked_Front,
    VRWaist_Tracked_Rear,
    VRWaist_Tracked_Left,
    VRWaist_Tracked_Right,
};

