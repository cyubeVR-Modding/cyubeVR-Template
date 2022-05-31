#include "LivCameraController.h"

class ULivShotComponent;

void ALivCameraController::TickCurrentShot(float DeltaTime) {
}

void ALivCameraController::SetCurrentShot(ULivShotComponent* ShotComponent) {
}

ULivShotComponent* ALivCameraController::GetCurrentShot() const {
    return NULL;
}

ALivCameraController::ALivCameraController() {
    this->CurrentShot = NULL;
    this->CurrentShotTime = 0.00f;
}

