#include "SurfaceNavAIMoveTo.h"
#include "Templates/SubclassOf.h"

USurfaceNavAIMoveTo::USurfaceNavAIMoveTo() {
}

USurfaceNavAIMoveTo* USurfaceNavAIMoveTo::SurfaceNavAIMoveTo(const UObject* WorldContextObject, const APawn* Pawn, const FVector Destination, const AActor* TargetActor, const float AcceptanceRadius, const TSubclassOf<UNavigationQueryFilter> FilterClass) {
    return NULL;
}

void USurfaceNavAIMoveTo::OnSurfaceNavMoveCompleted(FAIRequestID requestID, TEnumAsByte<EPathFollowingResult::Type> MovementResult) {
}


