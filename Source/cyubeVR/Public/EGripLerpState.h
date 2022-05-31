#pragma once
#include "CoreMinimal.h"
#include "EGripLerpState.generated.h"

UENUM(BlueprintType)
enum class EGripLerpState : uint8 {
    StartLerp,
    EndLerp,
    NotLerping,
};

