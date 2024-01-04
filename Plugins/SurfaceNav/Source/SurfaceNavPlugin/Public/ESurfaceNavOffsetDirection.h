#pragma once
#include "CoreMinimal.h"
#include "ESurfaceNavOffsetDirection.generated.h"

UENUM(BlueprintType)
enum ESurfaceNavOffsetDirection {
    OFFSET_PAWN_FORWARD,
    OFFSET_PAWN_BACKWARD,
    OFFSET_PAWN_RIGHT,
    OFFSET_PAWN_LEFT,
    OFFSET_PAWN_UP,
    OFFSET_PAWN_DOWN,
};

