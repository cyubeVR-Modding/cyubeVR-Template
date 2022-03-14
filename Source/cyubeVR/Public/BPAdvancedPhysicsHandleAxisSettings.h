#pragma once
#include "CoreMinimal.h"
#include "BPAdvancedPhysicsHandleAxisSettings.generated.h"

USTRUCT(BlueprintType)
struct FBPAdvancedPhysicsHandleAxisSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Stiffness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Damping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxForceCoefficient;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnablePositionDrive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableVelocityDrive;
    
    CYUBEVR_API FBPAdvancedPhysicsHandleAxisSettings();
};

