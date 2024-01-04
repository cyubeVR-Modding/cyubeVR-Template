#include "LivSpringArmComponent.h"

ULivSpringArmComponent::ULivSpringArmComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bClampPitch = true;
    this->MinPitch = -10.00f;
    this->MaxPitch = 10.00f;
    this->YawDeltaThreshold = 10.00f;
    this->MaxYawDelta = 100.00f;
    this->MinInterpolationSpeed = 0.50f;
    this->MaxInterpolationSpeed = 12.00f;
}

void ULivSpringArmComponent::UpdatePoseForCamera(UCameraComponent* Camera, float DeltaTime) {
}


