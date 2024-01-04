#include "LivClipPlane.h"

ULivClipPlane::ULivClipPlane(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bHiddenInGame = true;
    this->CastShadow = false;
    this->OverrideMaterials.AddDefaulted(1);
}

void ULivClipPlane::SetDebugEnabled(bool bDebugEnabled) {
}

bool ULivClipPlane::GetDebugEnabled() const {
    return false;
}


