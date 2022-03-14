#pragma once
#include "CoreMinimal.h"
#include "ERuntimeMeshUpdateFrequency.generated.h"

UENUM(BlueprintType)
enum class ERuntimeMeshUpdateFrequency : uint8 {
    Average,
    Frequent,
    Infrequent,
};

