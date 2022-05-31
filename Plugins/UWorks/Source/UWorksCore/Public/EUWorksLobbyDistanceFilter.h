#pragma once
#include "CoreMinimal.h"
#include "EUWorksLobbyDistanceFilter.generated.h"

UENUM(BlueprintType)
enum class EUWorksLobbyDistanceFilter : uint8 {
    Close,
    Default,
    Far,
    Worldwide,
};

