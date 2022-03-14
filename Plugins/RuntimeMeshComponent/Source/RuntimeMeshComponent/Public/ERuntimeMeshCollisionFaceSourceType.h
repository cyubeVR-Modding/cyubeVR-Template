#pragma once
#include "CoreMinimal.h"
#include "ERuntimeMeshCollisionFaceSourceType.generated.h"

UENUM(BlueprintType)
enum class ERuntimeMeshCollisionFaceSourceType : uint8 {
    Collision,
    Renderable,
};

