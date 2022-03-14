#pragma once
#include "CoreMinimal.h"
#include "EUWorksControllerSourceMode.generated.h"

UENUM(BlueprintType)
enum class EUWorksControllerSourceMode : uint8 {
    None,
    Dpad,
    Buttons,
    FourButtons,
    AbsoluteMouse,
    RelativeMouse,
    JoystickMove,
    JoystickMouse,
    JoystickCamera,
    ScrollWheel,
    Trigger,
    TouchMenu,
    MouseJoystick,
    MouseRegion,
    RadialMenu,
    Switches,
};

