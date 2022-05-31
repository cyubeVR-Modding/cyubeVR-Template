#pragma once
#include "CoreMinimal.h"
#include "ERuntimeMeshSliceCapOption.generated.h"

UENUM(BlueprintType)
enum class ERuntimeMeshSliceCapOption : uint8 {
    NoCap,
    CreateNewSectionForCap,
    UseLastSectionForCap,
};

