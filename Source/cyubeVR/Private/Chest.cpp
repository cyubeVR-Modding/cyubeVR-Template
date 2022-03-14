#include "Chest.h"

bool AChest::UseActorCustomLocation() {
    return false;
}

void AChest::SetChestRotation_Implementation(FRotator rot) {
}

FRotator AChest::GetChestRotation_Implementation() {
    return FRotator{};
}

FVector AChest::GetActorCustomLocation() {
    return FVector{};
}

AChest::AChest() {
    this->ChestInternals = NULL;
}

