#include "LivShotComponent.h"

ULivShotComponent::ULivShotComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->score = 0.50f;
    this->FOVAngle = 90.00f;
    this->bOverrideCamera = true;
}

void ULivShotComponent::TickShot_Implementation(ALivCameraController* Controller, ULivCaptureBase* CaptureComponent, float ShotTime, float DeltaTime) {
}

void ULivShotComponent::OnCutTo_Implementation(ALivCameraController* Controller) {
}

void ULivShotComponent::OnCutFrom_Implementation(ALivCameraController* Controller) {
}


