#include "CubePlayerController.h"

ACubePlayerController::ACubePlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ClickEventKeys.AddDefaulted(1);
    this->STAT_BlocksDestroyed = 0;
    this->STAT_BlocksDestroyedInLast10Minutes = 0;
    this->STAT_BlocksDestroyedInLast10MinutesBest = 0;
    this->bUnrealisticCameraHeight = false;
    this->LeaderboardManagerActor = NULL;
}

void ACubePlayerController::IncrementBlocksDestroyed(int32 Increment, EBlockTypeBP Type) {
}


