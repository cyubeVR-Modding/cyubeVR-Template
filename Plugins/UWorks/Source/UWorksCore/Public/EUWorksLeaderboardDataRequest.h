#pragma once
#include "CoreMinimal.h"
#include "EUWorksLeaderboardDataRequest.generated.h"

UENUM()
enum class EUWorksLeaderboardDataRequest : uint8 {
    Global,
    GlobalAroundUser,
    Friends,
    Users,
};

