#pragma once
#include "CoreMinimal.h"
#include "EItemClass.generated.h"

UENUM()
enum class EItemClass : uint8 {
    Block,
    Tool,
    Nugget,
    Meat,
    Object,
    MeshObject,
};

