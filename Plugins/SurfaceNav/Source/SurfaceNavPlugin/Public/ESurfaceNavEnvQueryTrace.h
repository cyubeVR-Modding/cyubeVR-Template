#pragma once
#include "CoreMinimal.h"
#include "ESurfaceNavEnvQueryTrace.generated.h"

UENUM(BlueprintType)
namespace ESurfaceNavEnvQueryTrace {
    enum Type {
        None,
        Navigation,
        ClosestSurface,
        CheapestSurface,
    };
}

