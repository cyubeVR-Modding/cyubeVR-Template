#pragma once
#include "CoreMinimal.h"
#include "EUWorksLeaderboardDisplayType.generated.h"

UENUM(BlueprintType)
enum class EUWorksLeaderboardDisplayType : uint8 {
    None,
    Numeric,
    TimeSeconds,
    TimeMilliSeconds,
};

