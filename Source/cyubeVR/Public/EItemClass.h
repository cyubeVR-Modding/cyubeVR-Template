#pragma once
#include "CoreMinimal.h"
#include "EItemClass.generated.h"

UENUM(BlueprintType)
enum class EItemClass : uint8 {
    Block,
    Tool,
    Nugget,
    Meat,
    Object,
    MeshObject,
};

