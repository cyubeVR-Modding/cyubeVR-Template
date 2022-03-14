#include "Storage.h"

class AChestInternals;

bool AStorage::TryToShrink() {
    return false;
}

bool AStorage::IsItemStackable(EBlockTypeBP Item) {
    return false;
}

bool AStorage::IsItemPlacable(EBlockTypeBP Item) {
    return false;
}

bool AStorage::IsFullyEmpty() {
    return false;
}

EItemClass AStorage::GetItemClass(EBlockTypeBP Item) {
    return EItemClass::Block;
}

int32 AStorage::GetAmountAtIndex(int32 Index) {
    return 0;
}

int32 AStorage::GetAmount(EBlockTypeBP Item, int32 UniqueId) {
    return 0;
}

int32 AStorage::FindFittingIndex(EBlockTypeBP ToAdd, int32 Amount, int32 UniqueId) {
    return 0;
}

int32 AStorage::FindAmountFree(EBlockTypeBP ToAdd, int32 UniqueId) {
    return 0;
}

void AStorage::AddItemToSlotFromOtherChest(int32 ToIndex, int32 FromChestIndex, EBlockTypeBP Type, AChestInternals* OtherChest, bool& success) {
}

bool AStorage::AddItem(int32& Index, EBlockTypeBP ToAdd, int32 UniqueId, FColor CrystalColor, float ChargeState) {
    return false;
}

AStorage::AStorage() {
    this->SlotLimit = 28;
    this->bAllowShrinkOnLoad = true;
}

