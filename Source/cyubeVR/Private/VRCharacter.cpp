#include "VRCharacter.h"

class UMeshComponent;

void AVRCharacter::WasRotated_Implementation() {
}

bool AVRCharacter::UseLightAroundValue() {
    return false;
}

void AVRCharacter::ReduceHealthCPP_Implementation(float Amount) {
}

TArray<UMeshComponent*> AVRCharacter::GetMeshComponents() {
    return TArray<UMeshComponent*>();
}

AVRCharacter::AVRCharacter() {
    this->CameraRef = NULL;
    this->LocationLoaded = false;
    this->Health = 1.00f;
}

