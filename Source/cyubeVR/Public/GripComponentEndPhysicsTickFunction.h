#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineBaseTypes.h"
#include "GripComponentEndPhysicsTickFunction.generated.h"

USTRUCT(BlueprintType)
struct FGripComponentEndPhysicsTickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    CYUBEVR_API FGripComponentEndPhysicsTickFunction();
};

template<>
struct TStructOpsTypeTraits<FGripComponentEndPhysicsTickFunction> : public TStructOpsTypeTraitsBase2<FGripComponentEndPhysicsTickFunction>
{
    enum
    {
        WithCopy = false
    };
};

