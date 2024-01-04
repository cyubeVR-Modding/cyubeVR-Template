#include "DeerCPP.h"

ADeerCPP::ADeerCPP(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->EnableOverlapWhenCloseToPlayer = NULL;
    this->DebugSkeletalComponent = NULL;
    this->WasLoaded = false;
    this->WasVisibleLastFrame = true;
    this->MinTickDistance = 10000;
    this->IsDead = false;
}

void ADeerCPP::UpdateColorsFromLoaded_Implementation() {
}

void ADeerCPP::StartMoving_Implementation() {
}

void ADeerCPP::SetMobilityAllEvent_Implementation(EComponentMobility::Type NewMobility) {
}

void ADeerCPP::SetDeadRagdoll() {
}

void ADeerCPP::SetDead(AChunkManager* ChunkManager) {
}

void ADeerCPP::SetComponentTickBP_Implementation() {
}

void ADeerCPP::ResetToPoolBP_Implementation() {
}

TArray<UMeshComponent*> ADeerCPP::GetMeshComponents() {
    return TArray<UMeshComponent*>();
}

void ADeerCPP::DoWeirdStuff_Implementation() {
}

void ADeerCPP::DoTick_Implementation() {
}


