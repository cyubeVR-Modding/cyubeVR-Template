#pragma once
#include "CoreMinimal.h"
#include "EFootstepType.generated.h"

UENUM(BlueprintType)
enum class EFootstepType : uint8 {
    Stone,
    Wood,
    Dirt,
    Sand,
    Glass,
    None,
};

