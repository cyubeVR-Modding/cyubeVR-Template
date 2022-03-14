#include "LivCaptureBase.h"

bool ULivCaptureBase::IsLivCapturing() const {
    return false;
}

FMatrix ULivCaptureBase::GetClipPlaneTransform() const {
    return FMatrix{};
}

FVector ULivCaptureBase::GetClipPlaneLocation() const {
    return FVector{};
}

FVector ULivCaptureBase::GetClipPlaneForward() const {
    return FVector{};
}

FRotator ULivCaptureBase::GetCameraRotation() const {
    return FRotator{};
}

FVector ULivCaptureBase::GetCameraLocation() const {
    return FVector{};
}

ULivCaptureBase::ULivCaptureBase() {
}

