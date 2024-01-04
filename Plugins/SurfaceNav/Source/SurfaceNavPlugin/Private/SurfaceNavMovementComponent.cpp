#include "SurfaceNavMovementComponent.h"
#include "SurfaceNavDefaultRotationMode.h"

USurfaceNavMovementComponent::USurfaceNavMovementComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bUseAccelerationForPaths = true;
    this->RotationSpeed = 3.00f;
    this->MinAngleFromGround = 0.00f;
    this->MaxAngleFromGround = 180.00f;
    this->PawnMovementOffset = 30.00f;
    this->MovementOffsetDirection = OFFSET_PAWN_UP;
    this->PathPointAcceptanceRadius = 100.00f;
    this->NavLinkPointAcceptanceRadius = 100.00f;
    this->MaxPathingIterations = 0;
    this->EnableOutsideCornerAssist = false;
    this->OutsideCornerAssistThreshold = 0.80f;
    this->OutsideCornerAcceptanceAngle = 90.00f;
    this->OutsideCornerAcceptanceDistance = 5.00f;
    this->EnableCornerBoost = false;
    this->CornerBoostMultiplier = 3.00f;
    this->bShowOutsideCornerAssistDebugData = false;
    this->ShowOutsideCornerAssistDebugTime = 5.00f;
    this->RotationMode = USurfaceNavDefaultRotationMode::StaticClass();
    this->RotationModeValue = 0;
    this->RotationModeTickInterval = 0.10f;
    this->RotationMode1stTraceAngle = 45.00f;
    this->RotationMode1stTraceDistance = 200.00f;
    this->RotationMode2ndTraceStartOffset = 100.00f;
    this->RotationMode2ndTraceAngle = 140.00f;
    this->RotationMode2ndTraceDistance = 120.00f;
    this->RotationModeLeftRightAngle = 45.00f;
    this->bRotationModeShouldDrawTraceLines = false;
}

void USurfaceNavMovementComponent::SkipNextRotationLerp() {
}

void USurfaceNavMovementComponent::SkipNextMovementInput() {
}

void USurfaceNavMovementComponent::SetNextRotator(FRotator Rot) {
}

FVector USurfaceNavMovementComponent::GetActorLocationWithOffset() const {
    return FVector{};
}

void USurfaceNavMovementComponent::EnableDefaultRotationLerp() {
}

void USurfaceNavMovementComponent::DisableDefaultRotationLerp() {
}


