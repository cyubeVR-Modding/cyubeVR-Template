#pragma once
#include "CoreMinimal.h"
#include "EVRCustomMovementMode.generated.h"

UENUM(BlueprintType)
enum class EVRCustomMovementMode : uint8 {
    VRMOVE_Climbing,
    VRMOVE_LowGrav,
    VRMOVE_Seated,
    VRMOVE_MAX UMETA(Hidden),
};

