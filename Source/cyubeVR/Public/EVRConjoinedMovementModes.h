#pragma once
#include "CoreMinimal.h"
#include "EVRConjoinedMovementModes.generated.h"

UENUM(BlueprintType)
enum class EVRConjoinedMovementModes : uint8 {
    C_MOVE_None,
    C_MOVE_Walking,
    C_MOVE_NavWalking,
    C_MOVE_Falling,
    C_MOVE_Swimming,
    C_MOVE_Flying,
    C_MOVE_MAX = 7 UMETA(Hidden),
    C_VRMOVE_Climbing,
    C_VRMOVE_LowGrav,
    C_VRMOVE_Seated,
    C_VRMOVE_Custom1,
    C_VRMOVE_Custom2,
    C_VRMOVE_Custom3,
    C_VRMOVE_Custom4,
    C_VRMOVE_Custom5,
};

