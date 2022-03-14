#pragma once
#include "CoreMinimal.h"
#include "ERotation.generated.h"

UENUM(BlueprintType)
enum class ERotation : uint8 {
    Right,
    Left,
    Forward,
    Back,
    Up,
    Down,
};

