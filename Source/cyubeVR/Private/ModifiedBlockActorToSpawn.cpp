#include "ModifiedBlockActorToSpawn.h"

FModifiedBlockActorToSpawn::FModifiedBlockActorToSpawn() {
    this->BlockType = EBlockTypeBP::Stone;
    this->UniqueId = 0;
    this->Damage = 0.00f;
    this->IsForMove = false;
}

