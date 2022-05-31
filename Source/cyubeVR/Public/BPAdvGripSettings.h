#pragma once
#include "CoreMinimal.h"
#include "BPAdvGripPhysicsSettings.h"
#include "BPAdvGripSettings.generated.h"

USTRUCT(BlueprintType)
struct FBPAdvGripSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint8 GripPriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSetOwnerOnGrip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBPAdvGripPhysicsSettings PhysicsSettings;
    
    CYUBEVR_API FBPAdvGripSettings();
};

