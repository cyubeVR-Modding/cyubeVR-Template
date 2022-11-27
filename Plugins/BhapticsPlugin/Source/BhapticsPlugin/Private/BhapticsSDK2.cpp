#include "BhapticsSDK2.h"

class UPrimitiveComponent;

void UBhapticsSDK2::SwapPosition(FBhapticsDevice device) {
}

bool UBhapticsSDK2::StopHapticByRequestId(int32 requestID) {
    return false;
}

bool UBhapticsSDK2::StopHapticByEventId(const FString& EventId) {
    return false;
}

bool UBhapticsSDK2::StopHaptic() {
    return false;
}

FBhapticsRotationOption UBhapticsSDK2::ProjectToVestLocation(FVector ContactLocation, FVector PlayerLocation, FRotator PlayerRotation) {
    return FBhapticsRotationOption{};
}

FBhapticsRotationOption UBhapticsSDK2::ProjectToVest(FVector ContactLocation, UPrimitiveComponent* PlayerComponent, float HalfHeight) {
    return FBhapticsRotationOption{};
}

int32 UBhapticsSDK2::PlayHapticWithOption(const FString& EventId, float Intensity, float Duration, float angleX, float OffsetY) {
    return 0;
}

int32 UBhapticsSDK2::PlayHaptic(const FString& EventId) {
    return 0;
}

int32 UBhapticsSDK2::PlayDot(int32 Position, TArray<int32> motorValues, float Seconds) {
    return 0;
}

void UBhapticsSDK2::PingAll() {
}

void UBhapticsSDK2::Ping(FBhapticsDevice device) {
}

bool UBhapticsSDK2::IsPlayingByRequestId(int32 requestID) {
    return false;
}

bool UBhapticsSDK2::IsPlayingByEventId(const FString& EventId) {
    return false;
}

bool UBhapticsSDK2::IsPlaying() {
    return false;
}

void UBhapticsSDK2::Initialize() {
}

TArray<FBhapticsDevice> UBhapticsSDK2::GetBhapticsDevices() {
    return TArray<FBhapticsDevice>();
}

void UBhapticsSDK2::Destroy() {
}

FBhapticsRotationOption UBhapticsSDK2::CustomProjectToVest(FVector ContactLocation, UPrimitiveComponent* PlayerComponent, float HalfHeight, FVector UpVector, FVector ForwardVector) {
    return FBhapticsRotationOption{};
}

UBhapticsSDK2::UBhapticsSDK2() {
}

