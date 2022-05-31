#include "LivCaptureBase.h"

bool ULivCaptureBase::IsLivCapturing() const {
    return false;
}

ULivCaptureBase::ULivCaptureBase() {
    this->bOverrideCameraPose = false;
    this->bOverrideCameraFOV = false;
}

