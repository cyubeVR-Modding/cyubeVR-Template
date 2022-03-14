#pragma once
#include "CoreMinimal.h"
#include "ERuntimeMeshMobility.generated.h"

UENUM()
enum class ERuntimeMeshMobility : uint8 {
    Movable,
    Stationary,
    Static,
};

