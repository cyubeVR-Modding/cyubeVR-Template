#include "BPSecondaryGripInfo.h"

FBPSecondaryGripInfo::FBPSecondaryGripInfo() {
    this->bHasSecondaryAttachment = false;
    this->SecondaryAttachment = NULL;
    this->bIsSlotGrip = false;
    this->LerpToRate = 0.00f;
    this->SecondaryGripDistance = 0.00f;
}

