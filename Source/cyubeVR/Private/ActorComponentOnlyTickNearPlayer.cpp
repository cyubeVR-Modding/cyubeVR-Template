#include "ActorComponentOnlyTickNearPlayer.h"

UActorComponentOnlyTickNearPlayer::UActorComponentOnlyTickNearPlayer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ComponentForLocation = NULL;
    this->TickDistanceToPlayer = 200.00f;
}



