#pragma once
#include "CoreMinimal.h"
#include "EGripCollisionType.generated.h"

UENUM(BlueprintType)
enum class EGripCollisionType : uint8 {
    InteractiveCollisionWithPhysics,
    InteractiveCollisionWithSweep,
    InteractiveHybridCollisionWithPhysics,
    InteractiveHybridCollisionWithSweep,
    SweepWithPhysics,
    PhysicsOnly,
    ManipulationGrip,
    ManipulationGripWithWristTwist,
    AttachmentGrip,
    CustomGrip,
    EventsOnly,
};

