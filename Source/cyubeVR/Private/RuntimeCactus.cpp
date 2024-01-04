#include "RuntimeCactus.h"
#include "Components/StaticMeshComponent.h"

ARuntimeCactus::ARuntimeCactus(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CactusMesh"));
    this->SMC = (UStaticMeshComponent*)RootComponent;
    this->Type = ETreeType::Sycamore;
    this->damaged = false;
    this->bDestroyed = false;
}

void ARuntimeCactus::SetType_Implementation(ETreeType NewType) {
}

void ARuntimeCactus::SetActive_Implementation() {
}

void ARuntimeCactus::ResetToPoolBP_Implementation() {
}


