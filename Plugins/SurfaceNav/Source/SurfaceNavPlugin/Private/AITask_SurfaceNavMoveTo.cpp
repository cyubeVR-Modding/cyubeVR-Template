#include "AITask_SurfaceNavMoveTo.h"

UAITask_SurfaceNavMoveTo::UAITask_SurfaceNavMoveTo() : UAITask(FObjectInitializer::Get()) {
}

UAITask_SurfaceNavMoveTo* UAITask_SurfaceNavMoveTo::AIMoveTo(AAIController* Controller, FVector GoalLocation, AActor* GoalActor, float AcceptanceRadius, TEnumAsByte<EAIOptionFlag::Type> StopOnOverlap, TEnumAsByte<EAIOptionFlag::Type> AcceptPartialPath, bool bUsePathfinding, bool bLockAILogic, bool bUseContinuosGoalTracking, TEnumAsByte<EAIOptionFlag::Type> ProjectGoalOnNavigation) {
    return NULL;
}


