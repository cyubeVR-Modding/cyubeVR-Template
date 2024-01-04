#include "LivCameraController.h"

ALivCameraController::ALivCameraController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CurrentShot = NULL;
    this->CurrentShotTime = 0.00f;
}

void ALivCameraController::TickCurrentShot(float DeltaTime) {
}

void ALivCameraController::SetCurrentShot(ULivShotComponent* ShotComponent) {
}

ULivShotComponent* ALivCameraController::GetCurrentShot() const {
    return NULL;
}


