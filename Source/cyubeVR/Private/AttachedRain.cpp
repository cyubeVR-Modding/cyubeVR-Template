#include "AttachedRain.h"

void AAttachedRain::UpdateAudioLocations() {
}

AAttachedRain::AAttachedRain() {
    this->bTemporary = false;
    this->SceneCapture = NULL;
    this->bHasAudio = false;
    this->AudioDistance = 1500.00f;
    this->RowsX = 5;
    this->RowsY = 5;
}

