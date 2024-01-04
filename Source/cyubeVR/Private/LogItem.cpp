#include "LogItem.h"

ALogItem::ALogItem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Type = ETreeType::Sycamore;
    this->Mesh = NULL;
}

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


