#pragma once
#include "CoreMinimal.h"
#include "EPhysicsGripCOMType.generated.h"

UENUM(BlueprintType)
enum class EPhysicsGripCOMType : uint8 {
    COM_Default,
    COM_AtPivot,
    COM_SetAndGripAt,
    COM_GripAt,
    COM_GripAtControllerLoc,
};

