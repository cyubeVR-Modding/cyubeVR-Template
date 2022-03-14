#include "BlockItem.h"

class AChunkManager;
class ABlockItem;

void ABlockItem::WriteLastRecipeToDisk() {
}

void ABlockItem::UpdateItemType_Implementation(EBlockTypeBP NewType, int32 NewUniqueID, AChunkManager* ChunkManager) {
}

void ABlockItem::SetDebugLastPhysicsEnable(const FString& Reason) {
}

void ABlockItem::SetCrystalProperties() {
}

void ABlockItem::ResetToPoolBP_Implementation() {
}

void ABlockItem::RemoveFromOverlap_Implementation() {
}

float ABlockItem::GetHealthReduceOnFire() {
    return 0.0f;
}

void ABlockItem::FullyChargedNow_Implementation() {
}

void ABlockItem::FullUpdate_Implementation(int32 Amount, EBlockTypeBP NewType, int32 NewUniqueID, bool DirectFromLoad) {
}

void ABlockItem::DestroyToPool(const FString& FunctionName) {
}

void ABlockItem::CheckRemove(ABlockItem* RemovedItem, TArray<ABlockItem*>& NeedRemoveToo, bool& AllowRemove) {
}

void ABlockItem::CheckItems(bool& success, EBlockTypeBP& Result, int32& Amount, int32& OutUniqueID) {
}

bool ABlockItem::CanBeLitOnFire() {
    return false;
}

void ABlockItem::AllowRelease(bool& Allow) {
}

ABlockItem::ABlockItem() {
    this->BlockType = EBlockTypeBP::Stone;
    this->UniqueId = 0;
    this->ChargeState = 0.00f;
    this->LastRechargeTime = 0.00f;
    this->bOnFire = false;
    this->Health = 100.00f;
    this->MeltAmount = 0.00f;
    this->bLoadedScale = false;
    this->CurrentResult = EBlockTypeBP::Stone;
    this->BoxCollision = NULL;
    this->IsChestItem = false;
    this->bSpecialCosmeticItem = false;
    this->CrystalMaterial = NULL;
    this->ChargingParticleSystem = NULL;
    this->Debug_LastPhysicsEnableFromTime = 0.00f;
}

