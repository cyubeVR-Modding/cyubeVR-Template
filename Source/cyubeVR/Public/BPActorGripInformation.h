#pragma once
#include "CoreMinimal.h"
#include "BPAdvGripSettings.h"
#include "EGripTargetType.h"
#include "EGripLateUpdateSettings.h"
#include "EGripCollisionType.h"
#include "EGripMovementReplicationSettings.h"
#include "Transform_NetQuantize.h"
#include "BPSecondaryGripInfo.h"
#include "UObject/NoExportTypes.h"
#include "BPActorGripInformation.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FBPActorGripInformation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    uint8 GripID;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    EGripTargetType GripTargetType;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    UObject* GrippedObject;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    EGripCollisionType GripCollisionType;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    EGripLateUpdateSettings GripLateUpdateSetting;
    
    UPROPERTY(BlueprintReadWrite, NotReplicated, meta=(AllowPrivateAccess=true))
    bool bColliding;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FTransform_NetQuantize RelativeTransform;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool bIsSlotGrip;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FName GrippedBoneName;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FName SlotName;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    EGripMovementReplicationSettings GripMovementReplicationSetting;
    
    UPROPERTY(BlueprintReadWrite, NotReplicated, meta=(AllowPrivateAccess=true))
    bool bIsPaused;
    
    UPROPERTY(BlueprintReadWrite, NotReplicated, meta=(AllowPrivateAccess=true))
    bool bLockHybridGrip;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool bOriginalReplicatesMovement;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool bOriginalGravity;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    float Damping;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    float Stiffness;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FBPAdvGripSettings AdvancedGripSettings;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FBPSecondaryGripInfo SecondaryGripInfo;
    
    UPROPERTY(BlueprintReadWrite, NotReplicated, meta=(AllowPrivateAccess=true))
    FTransform AdditionTransform;
    
    UPROPERTY(BlueprintReadWrite, NotReplicated, meta=(AllowPrivateAccess=true))
    float GripDistance;
    
    CYUBEVR_API FBPActorGripInformation();
};

