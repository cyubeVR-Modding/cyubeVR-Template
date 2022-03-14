#pragma once
#include "CoreMinimal.h"
#include "EVRVelocityType.generated.h"

UENUM(BlueprintType)
enum class EVRVelocityType : uint8 {
    VRLOCITY_Default,
    VRLOCITY_RunningAverage,
    VRLOCITY_SamplePeak,
    VRLOCITY_MAX UMETA(Hidden),
};

