#pragma once
#include "CoreMinimal.h"
#include "EUWorksSteamItemFlags.generated.h"

UENUM(BlueprintType)
enum class EUWorksSteamItemFlags : uint8 {
    NoTrade,
    Removed = 0x8,
    Consumed,
};

