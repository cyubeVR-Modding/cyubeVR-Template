#include "UWorksInterfaceCoreUtils.h"

UUWorksInterfaceCoreUtils::UUWorksInterfaceCoreUtils() {
}

void UUWorksInterfaceCoreUtils::StartVRDashboard() {
}

bool UUWorksInterfaceCoreUtils::ShowGamepadTextInput(EUWorksGamepadTextInputMode InputMode, EUWorksGamepadTextInputLineMode LineInputMode, const FString& Description, int32 CharMax, const FString& ExistingText) {
    return false;
}

void UUWorksInterfaceCoreUtils::SetOverlayNotificationPosition(EUWorksNotificationPosition NotificationPosition) {
}

void UUWorksInterfaceCoreUtils::SetOverlayNotificationInset(int32 HorizontalInset, int32 VerticalInset) {
}

bool UUWorksInterfaceCoreUtils::IsSteamRunningInVR() {
    return false;
}

bool UUWorksInterfaceCoreUtils::IsSteamInBigPictureMode() {
    return false;
}

bool UUWorksInterfaceCoreUtils::IsOverlayEnabled() {
    return false;
}

UUWorksInterfaceCoreUtils* UUWorksInterfaceCoreUtils::GetUtils() {
    return NULL;
}

FString UUWorksInterfaceCoreUtils::GetSteamUILanguage() {
    return TEXT("");
}

int32 UUWorksInterfaceCoreUtils::GetServerRealTime() {
    return 0;
}

int32 UUWorksInterfaceCoreUtils::GetSecondsSinceComputerActive() {
    return 0;
}

int32 UUWorksInterfaceCoreUtils::GetSecondsSinceAppActive() {
    return 0;
}

FString UUWorksInterfaceCoreUtils::GetIPCountry() {
    return TEXT("");
}

int32 UUWorksInterfaceCoreUtils::GetIPCCallCount() {
    return 0;
}

int32 UUWorksInterfaceCoreUtils::GetEnteredGamepadTextLength() {
    return 0;
}

bool UUWorksInterfaceCoreUtils::GetEnteredGamepadTextInput(FString& Text, int32 TextMaxLength) {
    return false;
}

uint8 UUWorksInterfaceCoreUtils::GetCurrentBatteryPower() {
    return 0;
}

EUWorksUniverse UUWorksInterfaceCoreUtils::GetConnectedUniverse() {
    return EUWorksUniverse::Invalid;
}

int32 UUWorksInterfaceCoreUtils::GetAppID() {
    return 0;
}

bool UUWorksInterfaceCoreUtils::BOverlayNeedsPresent() {
    return false;
}


