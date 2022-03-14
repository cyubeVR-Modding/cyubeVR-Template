#pragma once
#include "CoreMinimal.h"
#include "EPhysicsGripConstraintType.generated.h"

UENUM(BlueprintType)
enum class EPhysicsGripConstraintType : uint8 {
    AccelerationConstraint,
    ForceConstraint,
};

