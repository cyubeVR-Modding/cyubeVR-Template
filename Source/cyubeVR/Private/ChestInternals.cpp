#include "ChestInternals.h"

AChestInternals::AChestInternals(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Initialized = false;
}

void AChestInternals::UpdateVisualsEvent_Implementation(bool MarkForSave) {
}

void AChestInternals::RemoveSingleItemFromSlot(int32 FromIndex, bool& success) {
}

void AChestInternals::InitializeChestInternals(AInventory* Inventory_, AChest* ParentChest_) {
}

void AChestInternals::AddItemToSlot(EBlockTypeBP ToAdd, int32 ToAddID, float ToAddChargeState, FColor ToAddCrystalColor, int32 Amount, int32 ToIndex, int32 FromInventoryIndex, bool& success) {
}


