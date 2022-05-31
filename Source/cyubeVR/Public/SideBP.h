#pragma once
#include "CoreMinimal.h"
#include "SideBP.generated.h"

UENUM(BlueprintType)
enum class SideBP : uint8 {
    Left,
    Right,
    Front,
    Back,
    Top,
    Down,
};

