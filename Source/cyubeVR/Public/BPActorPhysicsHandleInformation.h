#pragma once
#include "CoreMinimal.h"
#include "BPActorPhysicsHandleInformation.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FBPActorPhysicsHandleInformation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    UObject* HandledObject;
    
    CYUBEVR_API FBPActorPhysicsHandleInformation();
};

