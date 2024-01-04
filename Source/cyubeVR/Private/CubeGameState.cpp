#include "CubeGameState.h"

ACubeGameState::ACubeGameState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ChunkManager = NULL;
    this->MaxBlockitemsWithParticles = 10;
    this->OtherHandBlockItem = NULL;
}

void ACubeGameState::RemoveAllActivelyHeldBlockItems() {
}

void ACubeGameState::RemoveActivelyHeldBlockItem(ABlockItem* BlockItem) {
}

void ACubeGameState::ManageHeldBlockItems() {
}

void ACubeGameState::AddActivelyHeldBlockItems(TArray<ABlockItem*> BlockItems) {
}

void ACubeGameState::AddActivelyHeldBlockItem(ABlockItem* BlockItem) {
}


