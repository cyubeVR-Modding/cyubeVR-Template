#pragma once
#include "CoreMinimal.h"
#include "EBhapticsDevicePosition.generated.h"

UENUM(BlueprintType)
enum class EBhapticsDevicePosition : uint8 {
    Vest,
    ForearmL,
    ForearmR,
    Head,
    HandL,
    HandR,
    FootL,
    FootR,
    GloveL,
    GloveR,
};

