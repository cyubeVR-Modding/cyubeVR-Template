#pragma once
#include "CoreMinimal.h"
#include "Transform_NetQuantize.h"
#include "BPVRControllerProfile.generated.h"

USTRUCT(BlueprintType)
struct FBPVRControllerProfile {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ControllerName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform_NetQuantize SocketOffsetTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseSeperateHandOffsetTransforms;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform_NetQuantize SocketOffsetTransformRightHand;
    
    CYUBEVR_API FBPVRControllerProfile();
};

