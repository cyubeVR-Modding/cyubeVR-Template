#pragma once
#include "CoreMinimal.h"
#include "ERuntimeMeshThreadingPriority.generated.h"

UENUM()
enum class ERuntimeMeshThreadingPriority : uint8 {
    Normal,
    AboveNormal,
    BelowNormal,
    Highest,
    Lowest,
    SlightlyBelowNormal,
    TimeCritical,
};

