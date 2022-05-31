#pragma once
#include "CoreMinimal.h"
#include "EWeatherForceSetting.generated.h"

UENUM(BlueprintType)
enum class EWeatherForceSetting : uint8 {
    Never,
    Natural,
    Always,
    Invalid,
};

