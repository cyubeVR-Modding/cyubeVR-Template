#pragma once
#include "CoreMinimal.h"
#include "AITypes.h"
#include "Tasks/AITask.h"
#include "AITypes.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTask.h"
#include "SurfaceNavMoveTaskCompletedSignatureDelegate.h"
#include "AITask_SurfaceNavMoveTo.generated.h"

class AAIController;
class AActor;
class UAITask_SurfaceNavMoveTo;

UCLASS(Blueprintable)
class UAITask_SurfaceNavMoveTo : public UAITask {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGameplayTask::FGenericGameplayTaskDelegate OnRequestFailed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSurfaceNavMoveTaskCompletedSignature OnMoveFinished;
    
	//UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIMoveRequest MoveRequest;
    
public:
    UAITask_SurfaceNavMoveTo();

    UFUNCTION(BlueprintCallable)
    static UAITask_SurfaceNavMoveTo* AIMoveTo(AAIController* Controller, FVector GoalLocation, AActor* GoalActor, float AcceptanceRadius, TEnumAsByte<EAIOptionFlag::Type> StopOnOverlap, TEnumAsByte<EAIOptionFlag::Type> AcceptPartialPath, bool bUsePathfinding, bool bLockAILogic, bool bUseContinuosGoalTracking, TEnumAsByte<EAIOptionFlag::Type> ProjectGoalOnNavigation);
    
};

