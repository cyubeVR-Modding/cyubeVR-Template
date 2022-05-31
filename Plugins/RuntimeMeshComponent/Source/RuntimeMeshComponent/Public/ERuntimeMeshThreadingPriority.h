#pragma once
#include "CoreMinimal.h"
#include "ERuntimeMeshThreadingPriority.generated.h"

UENUM(BlueprintType)
enum class ERuntimeMeshThreadingPriority : uint8 {
    Normal,
    AboveNormal,
    BelowNormal,
    Highest,
    Lowest,
    SlightlyBelowNormal,
    TimeCritical,
};

