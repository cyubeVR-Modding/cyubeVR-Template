#pragma once
#include "CoreMinimal.h"
#include "EGripTargetType.generated.h"

UENUM(BlueprintType)
enum class EGripTargetType : uint8 {
    ActorGrip,
    ComponentGrip,
};

