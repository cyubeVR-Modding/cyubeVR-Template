#pragma once
#include "CoreMinimal.h"
#include "EPersonaStateBP.generated.h"

UENUM()
enum class EPersonaStateBP : uint8 {
    PS_Offline,
    PS_Online,
    PS_Busy,
    PS_Away,
    PS_Snooze,
    PS_LookingToTrade,
    PS_LookingToPlay,
    PS_Max,
};

