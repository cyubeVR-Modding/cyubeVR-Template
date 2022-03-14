#include "CubePlayerController.h"

void ACubePlayerController::IncrementBlocksDestroyed(int32 Increment, EBlockTypeBP Type) {
}

ACubePlayerController::ACubePlayerController() {
    this->STAT_BlocksDestroyed = 0;
    this->STAT_BlocksDestroyedInLast10Minutes = 0;
    this->STAT_BlocksDestroyedInLast10MinutesBest = 0;
    this->bUnrealisticCameraHeight = false;
}

