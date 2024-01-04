#include "VRCharacter.h"

AVRCharacter::AVRCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CameraRef = NULL;
    this->LocationLoaded = false;
    this->Health = 1.00f;
}

void AVRCharacter::WasRotated_Implementation() {
}

bool AVRCharacter::UseLightAroundValue() {
    return false;
}

void AVRCharacter::SetViewDirection_Implementation(FVector Direction) {
}

void AVRCharacter::ReduceHealthCPP_Implementation(float Amount) {
}

TArray<UMeshComponent*> AVRCharacter::GetMeshComponents() {
    return TArray<UMeshComponent*>();
}

FVector AVRCharacter::GetActorLocationForCameraLocationCPP_Implementation(FVector NewCameraLocation) {
    return FVector{};
}

void AVRCharacter::FadeViewColor_Implementation(float Seconds, FLinearColor Color) {
}


