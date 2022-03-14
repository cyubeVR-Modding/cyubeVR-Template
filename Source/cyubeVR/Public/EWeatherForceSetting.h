#pragma once
#include "CoreMinimal.h"
#include "EWeatherForceSetting.generated.h"

UENUM()
enum class EWeatherForceSetting {
    Never,
    Natural,
    Always,
    Invalid,
};

