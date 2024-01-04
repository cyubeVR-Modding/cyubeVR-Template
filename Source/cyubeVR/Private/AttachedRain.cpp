#include "AttachedRain.h"

AAttachedRain::AAttachedRain(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bTemporary = false;
    this->SceneCapture = NULL;
    this->bHasAudio = false;
    this->AudioDistance = 1500.00f;
    this->RowsX = 5;
    this->RowsY = 5;
}

void AAttachedRain::UpdateAudioLocations() {
}


