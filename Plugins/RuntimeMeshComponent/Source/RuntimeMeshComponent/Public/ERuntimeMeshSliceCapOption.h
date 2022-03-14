#pragma once
#include "CoreMinimal.h"
#include "ERuntimeMeshSliceCapOption.generated.h"

UENUM()
enum class ERuntimeMeshSliceCapOption : uint8 {
    NoCap,
    CreateNewSectionForCap,
    UseLastSectionForCap,
};

