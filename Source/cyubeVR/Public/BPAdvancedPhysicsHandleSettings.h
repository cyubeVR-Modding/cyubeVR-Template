#pragma once
#include "CoreMinimal.h"
#include "BPAdvancedPhysicsHandleAxisSettings.h"
#include "BPAdvancedPhysicsHandleSettings.generated.h"

USTRUCT(BlueprintType)
struct FBPAdvancedPhysicsHandleSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBPAdvancedPhysicsHandleAxisSettings XAxisSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBPAdvancedPhysicsHandleAxisSettings YAxisSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBPAdvancedPhysicsHandleAxisSettings ZAxisSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBPAdvancedPhysicsHandleAxisSettings SlerpSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBPAdvancedPhysicsHandleAxisSettings TwistSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBPAdvancedPhysicsHandleAxisSettings SwingSettings;
    
    CYUBEVR_API FBPAdvancedPhysicsHandleSettings();
};

