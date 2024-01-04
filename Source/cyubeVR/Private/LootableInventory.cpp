#include "LootableInventory.h"

ALootableInventory::ALootableInventory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Inventory = NULL;
}

void ALootableInventory::UpdateVisuals_Implementation() {
}


