#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "RepMovementVR.generated.h"

USTRUCT(BlueprintType)
struct FRepMovementVR : public FRepMovement {
    GENERATED_BODY()
public:
    CYUBEVR_API FRepMovementVR();
};

