#pragma once
#include "CoreMinimal.h"
#include "EGripLateUpdateSettings.generated.h"

UENUM(BlueprintType)
enum class EGripLateUpdateSettings : uint8 {
    LateUpdatesAlwaysOn,
    LateUpdatesAlwaysOff,
    NotWhenColliding,
    NotWhenDoubleGripping,
    NotWhenCollidingOrDoubleGripping,
};

