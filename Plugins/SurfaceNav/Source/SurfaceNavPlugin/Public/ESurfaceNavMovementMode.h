#pragma once
#include "CoreMinimal.h"
#include "ESurfaceNavMovementMode.generated.h"

UENUM(BlueprintType)
enum ESurfaceNavMovementMode {
    MOVE_SN_Walking,
    MOVE_SN_Climbing,
    MOVE_SN_Hanging,
};

