#pragma once
#include "CoreMinimal.h"
#include "BPGripPair.generated.h"

class UGripMotionControllerComponent;

USTRUCT(BlueprintType)
struct FBPGripPair {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGripMotionControllerComponent* HoldingController;
    
    UPROPERTY(EditAnywhere)
    uint8 GripID;
    
    CYUBEVR_API FBPGripPair();
};

