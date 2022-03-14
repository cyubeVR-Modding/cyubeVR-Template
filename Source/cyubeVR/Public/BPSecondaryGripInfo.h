#pragma once
#include "CoreMinimal.h"
#include "Transform_NetQuantize.h"
#include "BPSecondaryGripInfo.generated.h"

class USceneComponent;

USTRUCT(BlueprintType)
struct FBPSecondaryGripInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool bHasSecondaryAttachment;
    
    UPROPERTY(BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
    USceneComponent* SecondaryAttachment;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FTransform_NetQuantize SecondaryRelativeTransform;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool bIsSlotGrip;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FName SecondarySlotName;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    float LerpToRate;
    
    UPROPERTY(BlueprintReadWrite, NotReplicated, meta=(AllowPrivateAccess=true))
    float SecondaryGripDistance;
    
    CYUBEVR_API FBPSecondaryGripInfo();
};

