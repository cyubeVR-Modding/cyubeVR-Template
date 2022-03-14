#pragma once
#include "CoreMinimal.h"
#include "EUWorksLeaderboardUploadScoreMethod.generated.h"

UENUM()
enum class EUWorksLeaderboardUploadScoreMethod : uint8 {
    None,
    KeepBest,
    ForceUpdate,
};

