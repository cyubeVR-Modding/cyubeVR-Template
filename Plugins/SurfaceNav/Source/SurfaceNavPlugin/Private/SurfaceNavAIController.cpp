#include "SurfaceNavAIController.h"
#include "SurfaceNavPathFollowingComponent.h"
#include "Templates/SubclassOf.h"

ASurfaceNavAIController::ASurfaceNavAIController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<USurfaceNavPathFollowingComponent>(TEXT("PathFollowingComponent"))) {
    this->CurrentPlanet = NULL;
}

TEnumAsByte<EPathFollowingRequestResult::Type> ASurfaceNavAIController::SurfaceNavMoveToLocation(const FVector& Dest, float AcceptanceRadius, bool bCanStrafe, TSubclassOf<UNavigationQueryFilter> FilterClass, bool bAllowPartialPath) {
    return EPathFollowingRequestResult::Failed;
}

TEnumAsByte<EPathFollowingRequestResult::Type> ASurfaceNavAIController::SurfaceNavMoveToActor(AActor* Goal, float AcceptanceRadius, bool bCanStrafe, TSubclassOf<UNavigationQueryFilter> FilterClass, bool bAllowPartialPath) {
    return EPathFollowingRequestResult::Failed;
}

void ASurfaceNavAIController::SetCurrentPlanet(AActor*& InPlanetActor) {
}

FVector ASurfaceNavAIController::GetRandomSurfaceNavPointNearby(float SearchRadius, const FVector TetherPoint, TSubclassOf<UNavigationQueryFilter> FilterClass) {
    return FVector{};
}

void ASurfaceNavAIController::GetCurrentPlanet(AActor*& OutPlanetActor) {
}

float ASurfaceNavAIController::GetClosestPlanetActor(AActor*& OutPlanetActor) {
    return 0.0f;
}


