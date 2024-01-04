#include "DraftUnlockingPaper.h"

ADraftUnlockingPaper::ADraftUnlockingPaper(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Type = EBlockTypeBP::Stone;
    this->ComponentForOverlap = NULL;
}

void ADraftUnlockingPaper::StartDissolve_Implementation(bool bWithType) {
}


