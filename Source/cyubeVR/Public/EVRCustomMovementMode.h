#pragma once
#include "CoreMinimal.h"
#include "EVRCustomMovementMode.generated.h"

UENUM()
enum class EVRCustomMovementMode {
    VRMOVE_Climbing,
    VRMOVE_LowGrav,
    VRMOVE_Seated,
    VRMOVE_MAX UMETA(Hidden),
};

