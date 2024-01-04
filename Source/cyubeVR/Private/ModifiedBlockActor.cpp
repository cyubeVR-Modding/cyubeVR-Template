#include "ModifiedBlockActor.h"

AModifiedBlockActor::AModifiedBlockActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bWasUsedForMove = false;
    this->CurrentHealth = 0.00f;
    this->MaxHealth = 0.00f;
    this->GlassMaterial = NULL;
    this->MaterialInstance = NULL;
    this->MaterialInstanceForDamage = NULL;
    this->BlockMesh = NULL;
    this->ChunkManager = NULL;
    this->BlockType = EBlockTypeBP::Stone;
    this->UniqueId = 0;
    this->bIsForMove = false;
}

void AModifiedBlockActor::UpdateMaterialInstanceValuesDefaultLighting() {
}

void AModifiedBlockActor::UpdateMaterialInstanceValues() {
}

void AModifiedBlockActor::UpdateDestructionAmount() {
}

void AModifiedBlockActor::TransferBackBP_Implementation() {
}

void AModifiedBlockActor::ResetToPoolBP_Implementation() {
}

void AModifiedBlockActor::ResetToPool() {
}

void AModifiedBlockActor::MarkDestroyed(bool WasFullyMined) {
}

void AModifiedBlockActor::MarkActiveAgain() {
}

void AModifiedBlockActor::InitializeMaterialInstance() {
}

void AModifiedBlockActor::DamageCPP_Implementation(float Amount, EBlockTypeBP ToolType) {
}

void AModifiedBlockActor::ConvertToForMove() {
}

bool AModifiedBlockActor::CheckAllowSpawnItemsForBlock() {
    return false;
}


