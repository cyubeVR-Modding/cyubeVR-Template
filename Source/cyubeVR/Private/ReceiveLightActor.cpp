#include "ReceiveLightActor.h"

AReceiveLightActor::AReceiveLightActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->InitLightImmediate = false;
    this->bUseLightAroundValue = false;
}

bool AReceiveLightActor::UseLightAroundValue() {
    return false;
}

void AReceiveLightActor::SetLightReceiveMeshes(TArray<UMeshComponent*> NewMeshes) {
}

FVector AReceiveLightActor::ManualTickLight(UMaterialInstanceDynamic* DynamicMaterial) {
    return FVector{};
}

TArray<UMeshComponent*> AReceiveLightActor::GetMeshComponents() {
    return TArray<UMeshComponent*>();
}


