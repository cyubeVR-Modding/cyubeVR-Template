#pragma once
#include "CoreMinimal.h"
#include "EGripLerpState.generated.h"

UENUM()
enum class EGripLerpState {
    StartLerp,
    EndLerp,
    NotLerping,
};

