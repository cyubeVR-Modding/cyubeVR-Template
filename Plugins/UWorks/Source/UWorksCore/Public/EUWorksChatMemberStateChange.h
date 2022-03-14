#pragma once
#include "CoreMinimal.h"
#include "EUWorksChatMemberStateChange.generated.h"

UENUM()
enum class EUWorksChatMemberStateChange : uint8 {
    Entered,
    Left,
    Disconnected,
    Kicked,
    Banned,
};

