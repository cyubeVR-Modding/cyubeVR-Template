#include "Torch.h"

ATorch::ATorch(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TypeCPP = EBlockTypeBP::Stone;
    this->P_LOD0 = NULL;
    this->P_2_LOD0 = NULL;
    this->P_LOD1 = NULL;
    this->Rotation = ERotation::Right;
}

void ATorch::SetColor_Implementation(FColor Color_, EBlockTypeBP Type) {
}

void ATorch::SetActive_Implementation(bool Active) {
}

void ATorch::DetachFromChunk_Implementation() {
}


