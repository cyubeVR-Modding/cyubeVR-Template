#include "LivCaptureBase.h"

ULivCaptureBase::ULivCaptureBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bOverrideCameraPose = false;
    this->bOverrideCameraFOV = false;
}

bool ULivCaptureBase::IsLivCapturing() const {
    return false;
}


