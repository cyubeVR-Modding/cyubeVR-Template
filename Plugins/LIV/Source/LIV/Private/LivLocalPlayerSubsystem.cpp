#include "LivLocalPlayerSubsystem.h"
#include "Templates/SubclassOf.h"

ULivLocalPlayerSubsystem::ULivLocalPlayerSubsystem() {
}

void ULivLocalPlayerSubsystem::ShowComponent(UPrimitiveComponent* InComponent) {
}

void ULivLocalPlayerSubsystem::ShowActor(AActor* InActor) {
}

void ULivLocalPlayerSubsystem::ResetCapture() {
}

bool ULivLocalPlayerSubsystem::IsCaptureActive() const {
    return false;
}

void ULivLocalPlayerSubsystem::HideComponent(UPrimitiveComponent* InComponent) {
}

void ULivLocalPlayerSubsystem::HideActor(AActor* InActor) {
}

ULocalPlayer* ULivLocalPlayerSubsystem::GetLocalPlayerBP() const {
    return NULL;
}

ULivWorldSubsystem* ULivLocalPlayerSubsystem::GetLivWorldSubsystem() const {
    return NULL;
}

FLivCaptureContext ULivLocalPlayerSubsystem::GetCaptureContext() const {
    return FLivCaptureContext{};
}

TSubclassOf<ULivCaptureBase> ULivLocalPlayerSubsystem::GetCaptureComponentClass() const {
    return NULL;
}

void ULivLocalPlayerSubsystem::ClearHiddenComponents() {
}

void ULivLocalPlayerSubsystem::ClearHiddenActors() {
}


