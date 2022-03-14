#include "ReceiveLightActor.h"

class UMeshComponent;
class UMaterialInstanceDynamic;

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

AReceiveLightActor::AReceiveLightActor() {
    this->InitLightImmediate = false;
    this->bUseLightAroundValue = false;
}

