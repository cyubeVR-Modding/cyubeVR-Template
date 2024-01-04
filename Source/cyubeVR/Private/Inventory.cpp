#include "Inventory.h"

AInventory::AInventory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->items.AddDefaulted(28);
    this->UniqueIDs.AddDefaulted(28);
    this->QuickBarItemIDs.AddDefaulted(10);
    this->QuickBarItemsReal.AddDefaulted(10);
    this->QuickBarTools.AddDefaulted(10);
    this->BucketCrystalChargeState = -1.00f;
    this->BuildToolCrystalChargeStateRight = -1.00f;
    this->BuildToolCrystalChargeStateLeft = -1.00f;
    this->bIsLootableInventory = false;
}

void AInventory::UpdateUIEvent_Implementation() {
}

void AInventory::UpdateBuildToolCrystalProperties(FColor BuildToolCrystalColor_, float BuildToolCrystalChargeState_, bool bIsRightHand) {
}

void AInventory::UpdateBucketCrystalProperties(FColor BucketCrystalColor_, float BucketCrystalChargeState_) {
}

void AInventory::RemoveItem(EBlockTypeBP ToRemove, int32 ToRemoveUniqueID, int32 RemoveAmount, bool& success, bool& NoMoreLeft) {
}

void AInventory::MoveOverPlayerInventoryToLootInventory(AInventory* LootInventory) {
}

void AInventory::MoveOverAllItemsFromOtherInventory(AInventory* FromInventory, bool& AnythingCollected) {
}

void AInventory::MoveOutside(int32 From, bool FromToolHolder) {
}

void AInventory::MoveInside(int32 From, EBlockTypeBP Type, int32 UniqueId, bool FromToolSlot) {
}

int32 AInventory::GetAmountIncludingTools(EBlockTypeBP Item, int32 UniqueId) {
    return 0;
}

void AInventory::DropOnToolsQuickBar(bool FromToolBar, int32 From, int32 To, AInventory* FromInventory, EBlockTypeBP Type, bool& UpdateNeeded) {
}

void AInventory::DropOnDelete(int32 From, bool FromToolHolder, bool& success) {
}

void AInventory::Drop(bool FromToolBar, int32 From, int32 To, AInventory* FromInventory, EBlockTypeBP Type, bool& UpdateNeeded) {
}

void AInventory::AddItemFromChest(int32 FromChestIndex, AChestInternals* Chest, EBlockTypeBP Type, bool& success) {
}


