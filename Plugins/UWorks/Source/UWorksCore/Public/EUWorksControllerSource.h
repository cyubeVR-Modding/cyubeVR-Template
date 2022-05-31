#pragma once
#include "CoreMinimal.h"
#include "EUWorksControllerSource.generated.h"

UENUM(BlueprintType)
enum class EUWorksControllerSource : uint8 {
    None,
    LeftTrackpad,
    RightTrackpad,
    Joystick,
    ABXY,
    Switch,
    LeftTrigger,
    RightTrigger,
    Gyro,
    CenterTrackpad,
    RightJoystick,
    DPad,
    Count,
};

