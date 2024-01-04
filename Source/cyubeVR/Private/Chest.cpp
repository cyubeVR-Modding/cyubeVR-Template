#include "Chest.h"

AChest::AChest(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ChestInternals = NULL;
}

bool AChest::UseActorCustomLocation() {
    return false;
}

void AChest::SetChestRotation_Implementation(FRotator Rot) {
}

FRotator AChest::GetChestRotation_Implementation() {
    return FRotator{};
}

FVector AChest::GetActorCustomLocation() {
    return FVector{};
}


