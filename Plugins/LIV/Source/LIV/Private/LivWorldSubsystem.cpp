#include "LivWorldSubsystem.h"
#include "Templates/SubclassOf.h"

class UCameraComponent;
class USceneComponent;
class ULivCaptureBase;

FTransform ULivWorldSubsystem::GetTrackingOriginTransform() const {
    return FTransform{};
}

USceneComponent* ULivWorldSubsystem::GetPlayerCameraParent() const {
    return NULL;
}

UCameraComponent* ULivWorldSubsystem::GetPlayerCamera() const {
    return NULL;
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
    this->TrackingOriginComponent = NULL;
    this->CameraController = NULL;
}

