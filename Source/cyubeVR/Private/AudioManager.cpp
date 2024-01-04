#include "AudioManager.h"

AAudioManager::AAudioManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BirdCue = NULL;
    this->SoundClassDay = NULL;
    this->SoundClassNight = NULL;
    this->SoundClassMaster = NULL;
    this->SnowVolumeMultiplier = 1.00f;
    this->GeneralVolumeMultiplier = 1.00f;
}


