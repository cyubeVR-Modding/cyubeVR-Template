#include "RuntimeCactus.h"
#include "Components/StaticMeshComponent.h"

void ARuntimeCactus::SetType_Implementation(ETreeType NewType) {
}

void ARuntimeCactus::SetActive_Implementation() {
}

void ARuntimeCactus::ResetToPoolBP_Implementation() {
}

ARuntimeCactus::ARuntimeCactus() {
    this->SMC = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CactusMesh"));
    this->Type = ETreeType::Sycamore;
    this->damaged = false;
    this->bDestroyed = false;
}

