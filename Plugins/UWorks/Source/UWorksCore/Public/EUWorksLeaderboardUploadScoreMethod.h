#pragma once
#include "CoreMinimal.h"
#include "EUWorksLeaderboardUploadScoreMethod.generated.h"

UENUM(BlueprintType)
enum class EUWorksLeaderboardUploadScoreMethod : uint8 {
    None,
    KeepBest,
    ForceUpdate,
};

