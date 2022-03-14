#pragma once
#include "CoreMinimal.h"
#include "EUWorksControllerSource.generated.h"

UENUM()
enum class EUWorksControllerSource {
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

