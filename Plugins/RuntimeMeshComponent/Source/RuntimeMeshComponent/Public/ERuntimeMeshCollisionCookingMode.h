#pragma once
#include "CoreMinimal.h"
#include "ERuntimeMeshCollisionCookingMode.generated.h"

UENUM(BlueprintType)
enum class ERuntimeMeshCollisionCookingMode : uint8 {
    CollisionPerformance,
    CookingPerformance,
};

