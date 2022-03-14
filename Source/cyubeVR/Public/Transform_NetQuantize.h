#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Transform_NetQuantize.generated.h"

USTRUCT(BlueprintType)
struct FTransform_NetQuantize : public FTransform {
    GENERATED_BODY()
public:
    CYUBEVR_API FTransform_NetQuantize();
};

