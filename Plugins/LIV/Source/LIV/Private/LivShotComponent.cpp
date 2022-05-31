#include "LivShotComponent.h"

class ALivCameraController;
class ULivCaptureBase;

void ULivShotComponent::TickShot_Implementation(ALivCameraController* Controller, ULivCaptureBase* CaptureComponent, float ShotTime, float DeltaTime) {
}

void ULivShotComponent::OnCutTo_Implementation(ALivCameraController* Controller) {
}

void ULivShotComponent::OnCutFrom_Implementation(ALivCameraController* Controller) {
}

ULivShotComponent::ULivShotComponent() {
    this->score = 0.50f;
    this->FOVAngle = 90.00f;
    this->bOverrideCamera = true;
}

