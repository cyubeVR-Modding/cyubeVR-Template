#include "LivWorldSubsystem.h"
#include "Templates/SubclassOf.h"

class ULivCaptureBase;
class USceneComponent;

FTransform ULivWorldSubsystem::GetTrackingOriginTransform() const {
    return FTransform{};
}

TSubclassOf<ULivCaptureBase> ULivWorldSubsystem::GetCaptureComponentClass() const {
    return NULL;
}

ULivCaptureBase* ULivWorldSubsystem::GetCaptureComponent() const {
    return NULL;
}

USceneComponent* ULivWorldSubsystem::GetCameraRoot() const {
    return NULL;
}

ULivWorldSubsystem::ULivWorldSubsystem() {
    this->CameraRoot = NULL;
    this->CaptureComponent = NULL;
}

