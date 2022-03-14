#pragma once
#include "CoreMinimal.h"
#include "EUWorksPersonaState.generated.h"

UENUM()
enum class EUWorksPersonaState : uint8 {
    Offline,
    Online,
    Busy,
    Away,
    Snooze,
    LookingToTrade,
    LookingToPlay,
    Max,
};

