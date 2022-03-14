#include "LogItem.h"

bool ALogItem::UseActorCustomLocation() {
    return false;
}

void ALogItem::SetActive_Implementation(ETreeType _Type) {
}

void ALogItem::ResetToPoolBP_Implementation() {
}

FVector ALogItem::GetActorCustomLocation() {
    return FVector{};
}

ALogItem::ALogItem() {
    this->Type = ETreeType::Sycamore;
    this->Mesh = NULL;
}

